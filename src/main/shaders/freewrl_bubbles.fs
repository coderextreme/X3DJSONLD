precision highp float;

/*
The MIT License (MIT)
Copyright (c) 2011 Authors of J3D. All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the Software), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
uniform samplerCube fw_textureCoordGenType;

varying vec3 t;
varying vec3 tr;
varying vec3 tg;
varying vec3 tb;
varying float rfac;

void main()
{
    vec4 refracted = textureCube(fw_textureCoordGenType, t);
    vec4 reflected = vec4(1.0);

    reflected.r = textureCube(fw_textureCoordGenType, tr).r;
    reflected.g = textureCube(fw_textureCoordGenType, tg).g;
    reflected.b = textureCube(fw_textureCoordGenType, tb).b;

    gl_FragColor = reflected * rfac + refracted * (1.0 - rfac);
}
