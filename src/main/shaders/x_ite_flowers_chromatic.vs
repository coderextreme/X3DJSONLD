#version 300 es
precision highp float;

uniform mat4 x3d_ModelViewMatrix;
uniform mat4 x3d_ProjectionMatrix;
uniform mat3 x3d_NormalMatrix;

uniform vec3 chromaticDispertion;
uniform float bias;
uniform float scale;
uniform float power;

in vec3 x3d_Normal;
in vec4 x3d_Vertex;

uniform float a;
uniform float b;
uniform float c;
uniform float d;
uniform float tdelta;
uniform float pdelta;

out vec3 t;
out vec3 tr;
out vec3 tg;
out vec3 tb;
out float rfac;

vec3 cart2sphere(vec3 p) {
     float r = pow(p.x*p.x + p.y*p.y + p.z*p.z, 0.5);
     float theta = acos(p.y/r);
     float phi = atan(p.z, p.x);
     return vec3(r, theta, phi);
}
     
vec3 rose(vec3 p) {
     float rho = a + b * cos(c * p.y + tdelta) * cos(d * p.z + pdelta);
     float x = rho * cos(p.z) * cos(p.y);
     float z = rho * cos(p.z) * sin(p.y);
     float y = rho * sin(p.z);
     return vec3(x, y, z);
}

vec3 rose_normal(vec3 p) {
     /* convert cartesian position to spherical coordinates */
     vec3 base = cart2sphere(p);
     /* add a little to phi */
     vec3 td = base + vec3(0.0, 0.0001, 0.0);
     /* add a little to theta */
     vec3 pd = base + vec3(0.0, 0.0, 0.0001);

     /* convert back to cartesian coordinates */
     vec3 br = rose(base);
     vec3 bt = rose(td);
     vec3 bp = rose(pd);

     return normalize(cross(bt - br, bp - br));
}

vec4 rose_position(vec3 p) {
	return vec4(rose(cart2sphere(p)), 1.0);
	/*return vec4(position, 1.0);*/
}

void main()
{
  vec3 position = x3d_Vertex.xyz;

  vec3 fragNormal = normalize(x3d_NormalMatrix*rose_normal(position));
  vec3 incident = normalize((x3d_ModelViewMatrix * rose_position(position)).xyz);

  t    = reflect (incident, fragNormal) * x3d_NormalMatrix;
  tr   = refract (incident, fragNormal, chromaticDispertion .x) * x3d_NormalMatrix;
  tg   = refract (incident, fragNormal, chromaticDispertion .y) * x3d_NormalMatrix;
  tb   = refract (incident, fragNormal, chromaticDispertion .z) * x3d_NormalMatrix;
  rfac = bias + scale * pow (clamp (0.5 + 0.5 * dot (incident, fragNormal), 0.0, 1.0), power);

  gl_Position = x3d_ProjectionMatrix * x3d_ModelViewMatrix * rose_position(position);
}

/*
void main()
{
  vec3 fragNormal = normalize (x3d_NormalMatrix * x3d_Normal);
  vec3 incident   = normalize ((x3d_ModelViewMatrix * x3d_Vertex) .xyz);

  t    = reflect (incident, fragNormal) * x3d_NormalMatrix;
  tr   = refract (incident, fragNormal, chromaticDispertion .x) * x3d_NormalMatrix;
  tg   = refract (incident, fragNormal, chromaticDispertion .y) * x3d_NormalMatrix;
  tb   = refract (incident, fragNormal, chromaticDispertion .z) * x3d_NormalMatrix;
  rfac = bias + scale * pow (clamp (0.5 + 0.5 * dot (incident, fragNormal), 0.0, 1.0), power);

  gl_Position = x3d_ProjectionMatrix * x3d_ModelViewMatrix * x3d_Vertex;
}
*/
