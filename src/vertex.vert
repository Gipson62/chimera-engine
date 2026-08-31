#version 330 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aNormal;
layout (location = 2) in vec2 aTexCoord;
layout (location = 3) in vec3 aTangent;
layout (location = 4) in vec3 aBitangent;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

struct Light {
    vec3 position;
    vec3 ambient;
    vec3 diffuse;
    vec3 specular;
    float constant;
    float linear;
    float quadratic;
};

uniform Light light;
uniform vec3 viewPos;

out vec2 TexCoords;
out vec3 TangentLightPos;
out vec3 TangentViewPos;
out vec3 TangentFragPos;

void main()
{
    vec3 fragPosLocal = vec3(model * vec4(aPos, 1.0));
    TexCoords = aTexCoord;

    mat3 normalMatrix = transpose(inverse(mat3(model)));
    
    vec3 T = normalize(normalMatrix * aTangent);
    vec3 B = normalize(normalMatrix * aBitangent);
    vec3 N = normalize(normalMatrix * aNormal);
    
    T = normalize(T - dot(T, N) * N);
    
    if (dot(cross(N, T), B) < 0.0) {
        T = T * -1.0;
    }
    
    B = normalize(cross(N, T));
    
    mat3 TBN = transpose(mat3(T, B, N));    
    
    TangentLightPos = TBN * light.position;
    TangentViewPos  = TBN * viewPos;
    TangentFragPos  = TBN * fragPosLocal;
        
    gl_Position = projection * view * model * vec4(aPos, 1.0);
}