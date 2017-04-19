#ifdef GL_ES
  precision highp float;
#endif

varying vec3 viewDirection;
varying vec3 normalDirection;
uniform samplerCube cube;
uniform vec3 chromaticDispersion;

void main()
{
    vec3 fragNormal = normalize(normalDirection);
    vec3 reflectedDirection = reflect(viewDirection, fragNormal);
    
    
    vec3 redDirection = refract(viewDirection, fragNormal, chromaticDispersion.x);
    vec3 greenDirection = refract(viewDirection, fragNormal, chromaticDispersion.y);
    vec3 blueDirection = refract(viewDirection, fragNormal, chromaticDispersion.z);
    float red = textureCube(cube, redDirection).r;
    float green = textureCube(cube, greenDirection).g;
    float blue = textureCube(cube, greenDirection).b;
    
    
    vec4 reflectedColor = textureCube(cube, reflectedDirection);
    /*vec4 reflectedColor = vec4(1.0, 0, 0, 1.0);*/
    vec4 refractedColor = vec4(red, green, blue, 1.0);
    gl_FragColor = reflectedColor;
    /*gl_FragColor = refractedColor;*/
}
