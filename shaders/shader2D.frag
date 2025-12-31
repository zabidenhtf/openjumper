#version 330 core
out vec4 FragColor;
in vec2 TexCoord;

uniform sampler2D tex;
uniform vec4 uColor;

void main()
{
    FragColor = texture(tex, TexCoord) * uColor; // текстура окрашивается цветом
}
