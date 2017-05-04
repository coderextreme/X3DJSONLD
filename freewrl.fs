uniform samplerCube fw_Texture_unit0;
varying vec3 t;
varying vec3 tr;
varying vec3 tg;
varying vec3 tb;
varying float rfac;

void main()
{
    vec4 ref = textureCube(fw_Texture_unit0, t);
    vec4 ret = vec4(1.0);

    ret.r = textureCube(fw_Texture_unit0, tr).r;
    ret.g = textureCube(fw_Texture_unit0, tg).g;
    ret.b = textureCube(fw_Texture_unit0, tb).b;

    gl_FragColor = ret * 0.5 + ref * 0.5;
    /*
    gl_FragColor = ret * rfac + ref * (1.0 - rfac);
    */
}                        
