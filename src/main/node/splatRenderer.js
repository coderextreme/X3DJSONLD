import convertPlyToSplatData from "./convertPlyToSplatData.js";

// --- Shader Definitions (omitted for brevity, assume they are identical to the previous version) ---
const vsSource = `
attribute vec3 aPosition;
attribute vec4 aQuaternion;
attribute vec3 aScale;
attribute float aOpacity;

uniform mat4 uModelViewProjectionMatrix;
uniform float uPointSizeScale;

varying vec3 vCenter;
varying float vOpacity;
varying vec4 vQuaternion;
varying vec3 vScale;

void main(void) {
    vCenter = aPosition;
    vQuaternion = aQuaternion;
    vScale = aScale;
    vOpacity = aOpacity;

    gl_Position = uModelViewProjectionMatrix * vec4(aPosition, 1.0);

    // Simplified point size heuristic
    gl_PointSize = 5.0;
}
`;

const fsSource = `
precision highp float;

varying vec3 vCenter;
varying float vOpacity;
varying vec4 vQuaternion;
varying vec3 vScale;

uniform vec4 uSplatColor;

void main(void) {
    vec2 screenPos = gl_PointCoord - 0.5;
    float r2 = dot(screenPos, screenPos);

    float alpha = exp(-12.0 * r2);

    float finalAlpha = alpha * vOpacity;

    // Using uSplatColor for visualization
    gl_FragColor = vec4(uSplatColor.rgb, finalAlpha);

    if (gl_FragColor.a < 0.01) {
        discard;
    }
}
`;
// --- End Shader Definitions ---


class SplatRenderer {
    constructor(canvasId) {
        this.canvas = document.getElementById(canvasId);
        this.gl = this.canvas.getContext('webgl2');
        if (!this.gl) {
            throw new Error("WebGL 2.0 not supported.");
        }

        this.splatData = null;
        this.program = null;
        this.buffers = {};
        this.uniformLocations = {};
        this.attribLocations = {};

        this.viewMatrix = this.createIdentityMatrix();
        this.projectionMatrix = this.createIdentityMatrix();
        this.modelMatrix = this.createIdentityMatrix();

        this.init();
    }

    createIdentityMatrix() {
        return new Float32Array([
            1, 0, 0, 0,
            0, 1, 0, 0,
            0, 0, 1, 0,
            0, 0, 0, 1
        ]);
    }

    compileShader(type, source) {
        const shader = this.gl.createShader(type);
        this.gl.shaderSource(shader, source);
        this.gl.compileShader(shader);

        if (!this.gl.getShaderParameter(shader, this.gl.COMPILE_STATUS)) {
            console.error('Shader compilation error:', this.gl.getShaderInfoLog(shader));
            this.gl.deleteShader(shader);
            return null;
        }
        return shader;
    }

    createProgram(vsSource, fsSource) {
        const vertexShader = this.compileShader(this.gl.VERTEX_SHADER, vsSource);
        const fragmentShader = this.compileShader(this.gl.FRAGMENT_SHADER, fsSource);

        const program = this.gl.createProgram();
        this.gl.attachShader(program, vertexShader);
        this.gl.attachShader(program, fragmentShader);
        this.gl.linkProgram(program);

        if (!this.gl.getProgramParameter(program, this.gl.LINK_STATUS)) {
            console.error('Program linking error:', this.gl.getProgramInfoLog(program));
            this.gl.deleteProgram(program);
            return null;
        }
        return program;
    }

    init() {
        this.program = this.createProgram(vsSource, fsSource);
        this.gl.useProgram(this.program);

        this.gl.enable(this.gl.DEPTH_TEST);
        this.gl.enable(this.gl.BLEND);
        this.gl.blendFunc(this.gl.ONE, this.gl.ONE_MINUS_SRC_ALPHA);
        this.gl.disable(this.gl.CULL_FACE);

        this.uniformLocations = {
            mvp: this.gl.getUniformLocation(this.program, 'uModelViewProjectionMatrix'),
            splatColor: this.gl.getUniformLocation(this.program, 'uSplatColor'),
        };

        this.setupBuffers();
        this.resize();
    }

    setupBuffers() {
        this.buffers.position = this.gl.createBuffer();
        this.buffers.quaternion = this.gl.createBuffer();
        this.buffers.scale = this.gl.createBuffer();
        this.buffers.opacity = this.gl.createBuffer();

        // Single vertex used as a placeholder for instancing draw call base (we draw 1 point N times)
        this.buffers.vertex = this.gl.createBuffer();
        this.gl.bindBuffer(this.gl.ARRAY_BUFFER, this.buffers.vertex);
        const vertices = new Float32Array([0.0, 0.0, 0.0]);
        this.gl.bufferData(this.gl.ARRAY_BUFFER, vertices, this.gl.STATIC_DRAW);

        this.attribLocations = {
            position: this.gl.getAttribLocation(this.program, 'aPosition'),
            quaternion: this.gl.getAttribLocation(this.program, 'aQuaternion'),
            scale: this.gl.getAttribLocation(this.program, 'aScale'),
            opacity: this.gl.getAttribLocation(this.program, 'aOpacity'),
        };
    }


loadSplatData(data) {
        this.splatData = data;
        const N = data.points.length;
        
        if (N === 0) return;

        const positions = [];
        const quaternions = [];
        const scales = [];
        const opacities = [];
        
        data.points.forEach(splat => {
	    console.log("Splat Object:", splat);
            // FIX: Use explicit indexing to construct flat arrays for WebGL buffers.
            // This completely bypasses the iteration Symbol.iterator check.
            
            // Position (3 floats)
            positions.push(splat.position[0], splat.position[1], splat.position[2]);
            
            // Rotation (4 floats)
            quaternions.push(splat.rotation[0], splat.rotation[1], splat.rotation[2], splat.rotation[3]);
            
            // Scale (3 floats)
            scales.push(splat.scale[0], splat.scale[1], splat.scale[2]);
            
            opacities.push(splat.opacity);
        });

        this.gl.useProgram(this.program);

        [this.buffers.position, positions].forEach(([buffer, arr]) => {
            this.gl.bindBuffer(this.gl.ARRAY_BUFFER, buffer);
            this.gl.bufferData(this.gl.ARRAY_BUFFER, new Float32Array(arr), this.gl.STATIC_DRAW);
        });
        [this.buffers.quaternion, quaternions].forEach(([buffer, arr]) => {
            this.gl.bindBuffer(this.gl.ARRAY_BUFFER, buffer);
            this.gl.bufferData(this.gl.ARRAY_BUFFER, new Float32Array(arr), this.gl.STATIC_DRAW);
        });
        [this.buffers.scale, scales].forEach(([buffer, arr]) => {
            this.gl.bindBuffer(this.gl.ARRAY_BUFFER, buffer);
            this.gl.bufferData(this.gl.ARRAY_BUFFER, new Float32Array(arr), this.gl.STATIC_DRAW);
        });
        [this.buffers.opacity, opacities].forEach(([buffer, arr]) => {
            this.gl.bindBuffer(this.gl.ARRAY_BUFFER, buffer);
            this.gl.bufferData(this.gl.ARRAY_BUFFER, new Float32Array(arr), this.gl.STATIC_DRAW);
        });
    }

    resize() {
        const displayWidth = this.canvas.clientWidth;
        const displayHeight = this.canvas.clientHeight;

        if (this.canvas.width !== displayWidth || this.canvas.height !== displayHeight) {
            this.canvas.width = displayWidth;
            this.canvas.height = displayHeight;
            this.gl.viewport(0, 0, displayWidth, displayHeight);

            // Simple Perspective Projection
            const aspect = displayWidth / displayHeight;
            const fovY = Math.PI / 3;
            const near = 0.1;
            const far = 100.0;
            const f = 1.0 / Math.tan(fovY / 2);

            this.projectionMatrix.set([
                f / aspect, 0, 0, 0,
                0, f, 0, 0,
                0, 0, (near + far) / (near - far), (2 * near * far) / (near - far),
                0, 0, -1, 0,
            ]);

            // Camera move back 5 units
            this.viewMatrix.set([
                1, 0, 0, 0,
                0, 1, 0, 0,
                0, 0, 1, 0,
                0, 0, -5, 1
            ]);
        }
    }

    draw() {
        if (!this.splatData || this.splatData.points.length === 0) return;

        this.gl.clearColor(0.1, 0.1, 0.1, 1.0);
        this.gl.clear(this.gl.COLOR_BUFFER_BIT | this.gl.DEPTH_BUFFER_BIT);

        this.gl.useProgram(this.program);

        const mvp = this.multiplyMatrices(this.projectionMatrix, this.viewMatrix);
        this.gl.uniformMatrix4fv(this.uniformLocations.mvp, false, mvp);

        // Use the color from the first splat's DC coefficient (Band 0, RGB)
        const firstSplatColor = this.splatData.points[0].shCoefficients.slice(0, 3) || [1.0, 1.0, 1.0];
        this.gl.uniform4f(this.uniformLocations.splatColor, firstSplatColor[0], firstSplatColor[1], firstSplatColor[2], 1.0);

        // --- Setup Instanced Attributes ---
        const numPoints = this.splatData.points.length;
        const instanceCount = numPoints;

        // Resetting divisors before setting up attributes (important for non-instanced attribute cleanup)
        this.gl.vertexAttribDivisor(this.attribLocations.position, 0);
        this.gl.vertexAttribDivisor(this.attribLocations.quaternion, 0);
        this.gl.vertexAttribDivisor(this.attribLocations.scale, 0);
        this.gl.vertexAttribDivisor(this.attribLocations.opacity, 0);

        // 1. Position (Instanced)
        this.gl.bindBuffer(this.gl.ARRAY_BUFFER, this.buffers.position);
        this.gl.vertexAttribPointer(this.attribLocations.position, 3, this.gl.FLOAT, false, 0, 0);
        this.gl.enableVertexAttribArray(this.attribLocations.position);
        this.gl.vertexAttribDivisor(this.attribLocations.position, 1); // Set divisor to 1 (instance specific)

        // 2. Quaternion (Instanced)
        this.gl.bindBuffer(this.gl.ARRAY_BUFFER, this.buffers.quaternion);
        this.gl.vertexAttribPointer(this.attribLocations.quaternion, 4, this.gl.FLOAT, false, 0, 0);
        this.gl.enableVertexAttribArray(this.attribLocations.quaternion);
        this.gl.vertexAttribDivisor(this.attribLocations.quaternion, 1);

        // 3. Scale (Instanced)
        this.gl.bindBuffer(this.gl.ARRAY_BUFFER, this.buffers.scale);
        this.gl.vertexAttribPointer(this.attribLocations.scale, 3, this.gl.FLOAT, false, 0, 0);
        this.gl.enableVertexAttribArray(this.attribLocations.scale);
        this.gl.vertexAttribDivisor(this.attribLocations.scale, 1);

        // 4. Opacity (Instanced)
        this.gl.bindBuffer(this.gl.ARRAY_BUFFER, this.buffers.opacity);
        this.gl.vertexAttribPointer(this.attribLocations.opacity, 1, this.gl.FLOAT, false, 0, 0);
        this.gl.enableVertexAttribArray(this.attribLocations.opacity);
        this.gl.vertexAttribDivisor(this.attribLocations.opacity, 1);

        // 5. Base Geometry (Non-Instanced - We draw the single [0,0,0] point N times)
        this.gl.bindBuffer(this.gl.ARRAY_BUFFER, this.buffers.vertex);
        this.gl.vertexAttribPointer(this.attribLocations.position, 3, this.gl.FLOAT, false, 0, 0);
        // Note: We are reusing position attribute slot for geometry/instance data, which is bad practice
        // but necessary here because we only have one slot defined for the base geometry.
        // In a perfect setup, geometry attributes (like UVs) would be on index 0, and instance data starts at index 1.

        // Draw N instances based on the single vertex geometry
        this.gl.drawArraysInstanced(this.gl.POINTS, 0, 1, instanceCount);

        // Cleanup divisors
        this.gl.vertexAttribDivisor(this.attribLocations.position, 0);
        this.gl.vertexAttribDivisor(this.attribLocations.quaternion, 0);
        this.gl.vertexAttribDivisor(this.attribLocations.scale, 0);
        this.gl.vertexAttribDivisor(this.attribLocations.opacity, 0);
    }

    multiplyMatrices(a, b) {
        const c = new Float32Array(16);
        for (let i = 0; i < 4; i++) {
            for (let j = 0; j < 4; j++) {
                c[i * 4 + j] =
                    a[i * 4 + 0] * b[0 * 4 + j] +
                    a[i * 4 + 1] * b[1 * 4 + j] +
                    a[i * 4 + 2] * b[2 * 4 + j] +
                    a[i * 4 + 3] * b[3 * 4 + j];
            }
        }
        return c;
    }
}

// Export the function that handles loading and initialization
export async function initializeRenderer(filename) {
    try {
        const data = await fetch(filename);
        if (!data.ok) throw new Error(`Fetch failed: ${data.statusText}`);

        const splatData = await convertPlyToSplatData(data);

        const renderer = new SplatRenderer('gl-canvas');
        renderer.loadSplatData(splatData);

        window.addEventListener('resize', () => renderer.resize());

        function renderLoop() {
            renderer.draw();
            requestAnimationFrame(renderLoop);
        }

        renderer.resize();
        renderLoop();
        document.getElementById('status').innerText = `Rendering ${splatData.points.length} splats.`;

    } catch (error) {
        console.error("Initialization failed:", error);
        document.getElementById('status').innerText = `Error loading or rendering: ${error.message}`;
    }
}
