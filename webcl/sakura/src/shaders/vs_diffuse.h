#version 100
uniform mat4 MVP;
uniform mat4 modelMatrix;
attribute vec3 position;
attribute vec3 normal;
uniform vec3 worldLightPos;

varying vec3 Color;
varying vec3 Normal;

void main()
{
    Normal = normal;
    Color = vec3(1.0,0.75,0.75);
    gl_Position = MVP * vec4(position, 1.0);
}
