#ifdef GL_ES
  precision highp float;
#endif

uniform samplerCube cube;

varying vec3 t;

void main()
{
    gl_FragColor = textureCube(cube, t);
}
