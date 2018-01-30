#ifdef GL_ES
  precision highp float;
#endif

/*
The MIT License (MIT)
Copyright (c) 2011 Authors of J3D. All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the Software), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/
uniform mat4 x3d_ModelViewMatrix;
uniform mat4 x3d_ProjectionMatrix;
attribute vec3 x3d_Normal;
attribute vec4 x3d_Vertex;

uniform vec3 chromaticDispertion;
uniform float bias;
uniform float scale;
uniform float power;

varying vec3 t;
varying vec3 tr;
varying vec3 tg;
varying vec3 tb;
varying float rfac;

void main()
{
    vec3 normal = x3d_Normal.xyz;
    mat3 mvm3=mat3(
	x3d_ModelViewMatrix[0].x,
	x3d_ModelViewMatrix[0].y,
	x3d_ModelViewMatrix[0].z,
	x3d_ModelViewMatrix[1].x,
	x3d_ModelViewMatrix[1].y,
	x3d_ModelViewMatrix[1].z,
	x3d_ModelViewMatrix[2].x,
	x3d_ModelViewMatrix[2].y,
	x3d_ModelViewMatrix[2].z
    );

    vec3 fragNormal = mvm3*normal;
    gl_Position = x3d_ProjectionMatrix * x3d_ModelViewMatrix * x3d_Vertex;
    vec3 incident = normalize((x3d_ModelViewMatrix * x3d_Vertex).xyz);
    t = reflect(incident, fragNormal)*mvm3;
    tr = refract(incident, fragNormal, chromaticDispertion.x)*mvm3;
    tg = refract(incident, fragNormal, chromaticDispertion.y)*mvm3;
    tb = refract(incident, fragNormal, chromaticDispertion.z)*mvm3;
    rfac = bias + scale * pow(0.5+0.5*dot(incident, fragNormal), power);
}
