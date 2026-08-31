#version 330 core

#define PI 3.14159265359

out vec4 FragColor;

struct Material {
    sampler2D diffuse;
    sampler2D specular;
    sampler2D normal_map;

    float shininess;
};

struct Light {
    vec3 position;
    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
    float constant;
    float linear;
    float quadratic;
};

in vec2 TexCoords;
in vec3 TangentLightPos;
in vec3 TangentViewPos;
in vec3 TangentFragPos;

uniform Material material;
uniform Light light;

void main()
{
    // Material textures
    vec3 albedo = texture(material.diffuse, TexCoords).rgb;
    vec3 specularMap = texture(material.specular, TexCoords).rgb;
    vec3 normal = texture(material.normal_map, TexCoords).rgb;
    normal = normalize(normal * 2.0 - 1.0);

    // Tangent-space positions
    vec3 lightDir = normalize(TangentLightPos - TangentFragPos);
    vec3 viewDir  = normalize(TangentViewPos - TangentFragPos);

    // Ambient
    vec3 ambient = light.ambient * albedo;

    // Diffuse
    float diff = max(dot(normal, lightDir), 0.0);
    vec3 diffuse = light.diffuse * diff * albedo;

    // Specular
    vec3 halfwayDir = normalize(lightDir + viewDir);
    float spec = pow(max(dot(normal, halfwayDir), 0.0), material.shininess);
    float normalizationFactor = (material.shininess + 8.0) / (8.0 * PI);
    vec3 specular = light.specular * (spec * normalizationFactor) * specularMap;

    // Attenuation
    float distance = length(TangentLightPos - TangentFragPos);
    float attenuation = 1.0 / (light.constant + light.linear * distance + light.quadratic * distance * distance);
    ambient  *= attenuation;
    diffuse  *= attenuation;
    specular *= attenuation;

    // Final color
    vec3 result = ambient + diffuse + specular;
    FragColor = vec4(result, 1.0);
}