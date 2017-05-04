uniform samplerCube fw_Texture_unit0;
varying vec3 t;
varying vec3 tr;
varying vec3 tg;
varying vec3 tb;
varying float rfac;

void main()
{
    vec4 refracted = textureCube(fw_Texture_unit0, t);
    vec4 reflected = vec4(1.0);

    reflected.r = textureCube(fw_Texture_unit0, tr).r;
    reflected.g = textureCube(fw_Texture_unit0, tg).g;
    reflected.b = textureCube(fw_Texture_unit0, tb).b;

    gl_FragColor = reflected * 0.5 + refracted * (1.0 - 0.5);
    /*  This can't figure out normals if there are none, so rfac is undefind
    gl_FragColor = reflected * rfac + refracted * (1.0 - rfac);
    */
}
