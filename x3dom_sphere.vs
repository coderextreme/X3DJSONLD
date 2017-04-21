#ifdef GL_ES
  precision highp float;
#endif

/* from https://en.wikibooks.org/wiki/GLSL_Programming/Blender/Reflecting_Surfaces */
attribute vec3 position;
attribute vec3 normal;
attribute vec2 texcoord;


uniform mat4 modelViewProjectionMatrix;
uniform mat4 modelViewMatrix;
uniform mat4 modelViewMatrixInverse;
uniform mat4 normalMatrix;
uniform mat4 viewMatrix; // world to view transformation
uniform mat4 viewMatrixInverse; // view to world transformation

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

varying vec3 viewDirection; // direction in world space 
    // in which the viewer is looking
varying vec3 normalDirection; // normal vector in world space 

vec3 cart2sphere(vec3 p) {
     float r = sqrt(p.x*p.x + p.y*p.y + p.z*p.z);
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
    vec4 positionInViewSpace = modelViewMatrix * rose_position(position);
       // transformation of vertex from object coordinates 
       // to view coordinates

    vec4 viewDirectionInViewSpace = positionInViewSpace 
       - vec4(0.0, 0.0, 1.0, 0.0);
       // camera is always at (0,0,0,1) in view coordinates;
       // this is the direction in which the viewer is looking 
       // (not the direction to the viewer)
    
    viewDirection = 
       vec3(viewMatrixInverse * viewDirectionInViewSpace);
       // transformation from view coordinates 
       // to world coordinates
       
    vec3 normalDirectionInViewSpace = 
       mat3(normalMatrix) * rose_normal(position);
       // transformation of normal from object coordinates 
       // to view coordinates

    normalDirection = normalize(vec3(
       vec4(normalDirectionInViewSpace, 0.0) * viewMatrix));
       // transformation of normal vector from view coordinates 
       // to world coordinates with the transposed 
       // (multiplication of the vector from the left) of 
       // the inverse of viewMatrixInverse, which is viewMatrix
    
    gl_Position = modelViewProjectionMatrix * rose_position(position);
}

