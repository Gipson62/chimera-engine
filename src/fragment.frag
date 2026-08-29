#version 330 core
out vec4 FragColor;
  
uniform vec3 objectColor;
uniform vec3 lightColor;
uniform vec3 lightPos;
uniform vec3 viewPos;
uniform sampler2D texture1;
uniform sampler2D texture2;

in vec3 Normal;
in vec3 FragPos;
in vec2 TexCoord;

void main()
{
    float ambientStrength = 0.1;
    vec3 ambient = ambientStrength * lightColor;

    vec3 norm = normalize(Normal);
    vec3 lightDir = normalize(lightPos - FragPos);
    float diff = max(dot(norm, lightDir), 0.0);
    vec3 diffuse = diff * lightColor;

    float specularStrength = 0.5;

    vec3 viewDir = normalize(viewPos - FragPos);
    vec3 reflectDir = reflect(-lightDir, norm);  
    
    float spec = pow(max(dot(viewDir, reflectDir), 0.0), 256);
    vec3 specular = specularStrength * spec * lightColor;  

    vec3 result = (ambient + diffuse + specular) * objectColor;
    // Mix textures using a scalar interpolation weight (e.g., 0.2)
    vec4 mixedTexture = mix(texture(texture1, TexCoord), texture(texture2, TexCoord), 0.2);
    
    // Multiply the mixed texture color by the lighting calculation
    FragColor = vec4(result, 1.0) * mixedTexture;
}