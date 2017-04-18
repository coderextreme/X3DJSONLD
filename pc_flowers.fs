
#ifdef GL_ES
  precision highp float;
#endif

uniform samplerCube cube;

varying vec3 t;
varying vec3 tr;
varying vec3 tg;
varying vec3 tb;
varying float rfac;

void main()
{
    vec4 ref = textureCube(cube, t);
    vec4 ret = vec4(1.0);

    ret.r = textureCube(cube, tr).r;
    ret.g = textureCube(cube, tg).g;
    ret.b = textureCube(cube, tb).b;

    gl_FragColor = ret * rfac + ref * (1.0 - rfac);
}
