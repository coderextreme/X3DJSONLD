attribute vec3 position;
attribute vec3 normal;
attribute vec2 texcoord;

uniform mat4 modelViewProjectionMatrix;
uniform mat4 modelViewMatrix;

varying vec3 t;

void main()
{
    mat3 mvm3=mat3(
		modelViewMatrix[0].x,
		modelViewMatrix[0].y,
		modelViewMatrix[0].z,
		modelViewMatrix[1].x,
		modelViewMatrix[1].y,
		modelViewMatrix[1].z,
		modelViewMatrix[2].x,
		modelViewMatrix[2].y,
		modelViewMatrix[2].z
    );
    vec3 fragNormal = mvm3*normal;
    gl_Position = modelViewProjectionMatrix*vec4(position, 1.0);
    vec3 incident = normalize((modelViewMatrix * vec4(position, 1.0)).xyz);
    t = reflect(incident, fragNormal)*mvm3;
}
