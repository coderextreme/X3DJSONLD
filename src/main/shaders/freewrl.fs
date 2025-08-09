#ifdef GL_ES
precision mediump float;
#endif

/*
The MIT License (MIT)
Copyright (c) 2011 Authors of J3D. All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the Software), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
uniform samplerCube fw_textureCoordGenType;
uniform vec3 chromaticDispertion;
uniform float bias;
uniform float scale;
uniform float power;
uniform float a;
uniform float b;
uniform float c;
uniform float d;
uniform float tdelta;
uniform float pdelta;

/* varyings coming from vertex shader */
varying vec3 t;
varying vec3 tr;
varying vec3 tg;
varying vec3 tb;
varying float rfac;

void main()
{
    /* sample environment map for reflection and chromatic refraction */
    vec4 reflected = textureCube(fw_textureCoordGenType, normalize(t));
    vec4 refr_r = textureCube(fw_textureCoordGenType, normalize(tr));
    vec4 refr_g = textureCube(fw_textureCoordGenType, normalize(tg));
    vec4 refr_b = textureCube(fw_textureCoordGenType, normalize(tb));

    /* compose chromatic refraction rgb from separate channels */
    vec3 refracted_rgb = vec3(refr_r.r, refr_g.g, refr_b.b);

    /* mix reflection and refraction using rfac */
    vec3 color = mix(refracted_rgb, reflected.rgb, clamp(rfac, 0.0, 1.0));

    gl_FragColor = vec4(color, 1.0);
}
