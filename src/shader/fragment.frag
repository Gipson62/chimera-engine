#version 330 core

#define PI 3.14159265359

out vec4 FragColor;

struct Material {
    // TODO: Diffuse should use an RGBA textures were A is the shininess map.
    sampler2D diffuse;
    // The specular map could also be put into an Alpha channel
    sampler2D specular;
    sampler2D normal_map;
    sampler2D emission;
    float shininess;
};

struct DirectionalLight {
    vec3 direction; // world space
    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
    // TODO directional light might not be activated
};

struct PointLight {
    vec3 position; // world space
    float constant;
    float linear;
    float quadratic;
    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
};

struct SpotLight {
    vec3 position;  // world space
    vec3 direction; // world space
    float cutOff;
    float outerCutOff;

    float constant;
    float linear;
    float quadratic;

    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
};

in vec2 TexCoords;
in vec3 TangentViewPos;
in vec3 TangentFragPos;
in mat3 TBN; // world -> tangent
in vec4 FragPosLightSpace;

#define NR_POINT_LIGHTS 4
uniform PointLight pointLights[NR_POINT_LIGHTS];
uniform int numActivePointLights;
#define NR_SPOT_LIGHTS 2
uniform SpotLight spotLights[NR_SPOT_LIGHTS];
uniform int numActiveSpotLights;
uniform Material material;
uniform DirectionalLight dirLight;
uniform sampler2D shadowMap;
uniform bool shadowMapEnabled;

vec3 calculateDirectionalLight(DirectionalLight light, vec3 normal, vec3 viewDir, vec3 albedo, vec3 specMap);
vec3 calculatePointLight(PointLight light, vec3 normal, vec3 fragPos, vec3 viewDir, vec3 albedo, vec3 specMap);
vec3 calculateSpotLight(SpotLight light, vec3 normal, vec3 fragPos, vec3 viewDir, vec3 albedo, vec3 specMap);

void main()
{
    vec3 albedo   = texture(material.diffuse, TexCoords).rgb;
    vec3 specMap  = texture(material.specular, TexCoords).rgb;
    vec3 emission = texture(material.emission, TexCoords).rgb;

    vec3 normal = texture(material.normal_map, TexCoords).rgb;
    normal = normalize(normal * 2.0 - 1.0);

    vec3 viewDir = normalize(TangentViewPos - TangentFragPos);

    vec3 result = calculateDirectionalLight(dirLight, normal, viewDir, albedo, specMap);

    for (int i = 0; i < numActivePointLights; i++)
        result += calculatePointLight(pointLights[i], normal, TangentFragPos, viewDir, albedo, specMap);

    for (int i = 0; i < numActiveSpotLights; i++)
        result += calculateSpotLight(spotLights[i], normal, TangentFragPos, viewDir, albedo, specMap);

    result += emission;

    FragColor = vec4(result, 1.0);
}

vec3 calculateDirectionalLight(
    DirectionalLight light,
    vec3 normal,
    vec3 viewDir,
    vec3 albedo,
    vec3 specMap
) {
    vec3 lightDir = normalize(-(TBN * light.direction));

    float diff = max(dot(normal, lightDir), 0.0);

    vec3 halfwayDir = normalize(lightDir + viewDir);
    float spec = pow(max(dot(normal, halfwayDir), 0.0), material.shininess);
    if (dot(normal, lightDir) <= 0.0) {
        spec = 0.0;
    }
    float normalizationFactor = (material.shininess + 8.0) / (8.0 * PI);

    vec3 ambient  = light.ambient * albedo;
    vec3 diffuse  = light.diffuse  * diff * albedo;
    vec3 specular = light.specular * (spec * normalizationFactor) * specMap;

    float shadow = 0.0;
    if (shadowMapEnabled) {
        vec3 projectedCoords = FragPosLightSpace.xyz / FragPosLightSpace.w;
        projectedCoords = projectedCoords * 0.5 + 0.5;
        if (projectedCoords.z <= 1.0 && projectedCoords.x >= 0.0 && projectedCoords.x <= 1.0 &&
            projectedCoords.y >= 0.0 && projectedCoords.y <= 1.0) {
            float closestDepth = texture(shadowMap, projectedCoords.xy).r;
            float currentDepth = projectedCoords.z;
            float bias = max(0.005 * (1.0 - dot(normal, lightDir)), 0.0005);
            shadow = currentDepth - bias > closestDepth ? 1.0 : 0.0;
        }
    }

    diffuse *= 1.0 - shadow;
    specular *= 1.0 - shadow;

    return ambient + diffuse + specular;
}

vec3 calculatePointLight(
    PointLight light,
    vec3 normal,
    vec3 fragPos,
    vec3 viewDir,
    vec3 albedo,
    vec3 specMap
) {
    vec3 tangentLightPos = TBN * light.position;
    vec3 lightDir = normalize(tangentLightPos - fragPos);

    float diff = max(dot(normal, lightDir), 0.0);

    vec3 halfwayDir = normalize(lightDir + viewDir);
    float spec = pow(max(dot(normal, halfwayDir), 0.0), material.shininess);
    if (dot(normal, lightDir) <= 0.0) {
        spec = 0.0;
    }
    float normalizationFactor = (material.shininess + 8.0) / (8.0 * PI);

    float distance = length(tangentLightPos - fragPos);
    float attenuation = 1.0 / (light.constant + light.linear * distance + light.quadratic * distance * distance);

    vec3 ambient  = vec3(0.0);
    vec3 diffuse  = light.diffuse  * diff * albedo;
    vec3 specular = light.specular * (spec * normalizationFactor) * specMap;

    ambient  *= attenuation;
    diffuse  *= attenuation;
    specular *= attenuation;

    return ambient + diffuse + specular;
}

vec3 calculateSpotLight(
    SpotLight light,
    vec3 normal,
    vec3 fragPos,
    vec3 viewDir,
    vec3 albedo,
    vec3 specMap
) {
    vec3 tangentLightPos = TBN * light.position;
    vec3 tangentLightDir = normalize(TBN * light.direction);

    vec3 lightDir = normalize(tangentLightPos - fragPos);

    float diff = max(dot(normal, lightDir), 0.0);

    vec3 halfwayDir = normalize(lightDir + viewDir);
    float spec = pow(max(dot(normal, halfwayDir), 0.0), material.shininess);
    if (dot(normal, lightDir) <= 0.0) {
        spec = 0.0;
    }
    float normalizationFactor = (material.shininess + 8.0) / (8.0 * PI);

    float distance = length(tangentLightPos - fragPos);
    float attenuation = 1.0 / (light.constant + light.linear * distance + light.quadratic * distance * distance);

    // cone falloff
    float theta = dot(lightDir, normalize(-tangentLightDir));
    float epsilon = light.cutOff - light.outerCutOff;
    float intensity = clamp((theta - light.outerCutOff) / epsilon, 0.0, 1.0);

    vec3 ambient  = vec3(0.0);
    vec3 diffuse  = light.diffuse  * diff * albedo;
    vec3 specular = light.specular * (spec * normalizationFactor) * specMap;

    ambient  *= attenuation;
    diffuse  *= attenuation * intensity;
    specular *= attenuation * intensity;

    return ambient + diffuse + specular;
}