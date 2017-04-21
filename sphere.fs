#ifdef GL_ES
  precision highp float;
#endif

varying vec3 viewDirection;
varying vec3 normalDirection;
uniform samplerCube cube;

void main()
{
    vec3 fragNormal = normalize(normalDirection);
    vec3 reflectedDirection = reflect(viewDirection, fragNormal);
    vec4 reflectedColor = textureCube(cube, reflectedDirection);
    gl_FragColor = reflectedColor;
}
