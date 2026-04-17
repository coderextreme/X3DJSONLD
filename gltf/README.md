<<<<<<< Updated upstream
## HumanoidComplete.py -- First working skinned models
## JoeKickAnimation.py -- an attempt to get rid of stack overflow
## JoeKickAnimationRecursive.py -- problems with stack overflow in Sunrize
## x3d_to_binary.py - Primary skeleton-based geometry converter
## x3d_to_gltf_advanced_ascii.py - preliminary conversion to .gltf
=======
HumanoidComplete.py -- First working skinned models
JoeKickAnimation.py -- a attempt to get rid of stack overflow
JoeKickAnimationRecursive.py -- problems with stacak overflow in Sunrize
x3d_to_binary.py - Primary skeleton-based geometry converter
x3d_to_gltf_advanced_ascii.py - to .gltf

To ensure you get the best assistance from an AI—or to document the project for contributors—here is a structured, comprehensive prompt you can use.

***

### Project Documentation & Request Prompt

**Project Title:** X3D-to-glTF-2.0 Converter (Advanced Lexical Scoping)

**Objective:**
Develop and maintain a robust Python-based converter that transforms X3D (XML) scenes into glTF 2.0 Binary (`.glb`) files. The converter must prioritize structural fidelity, supporting complex X3D features such as DEF/USE lexical scoping, `IMPORT/EXPORT`, `Inline` nesting, and hierarchical transformations.

**Key Functional Requirements:**
1.  **Lexical Scoping & Resolution:**
    *   Implement isolated DEF/USE scopes for `Inline` nodes to ensure unique ID resolution as per X3D specifications.
    *   Support cross-scope bridging using `IMPORT` and `EXPORT` nodes.
    *   Maintain a strict `element_to_gltf_idx` map to handle node hierarchies and parent-child relationships.
2.  **Geometry & Primitives:**
    *   Convert X3D geometry (`IndexedFaceSet`, `IndexedTriangleSet`, `Box`, `Text`) to glTF meshes.
    *   Handle `Coordinate`, `Normal`, and `TextureCoordinate` nodes, including fallback generation for missing data.
    *   Automatic generation of `TEXCOORD_0` for textured meshes.
3.  **Animation & Morphing:**
    *   Translate `TimeSensor`, `PositionInterpolator`, `OrientationInterpolator`, and `ScalarInterpolator` into glTF `Animation` tracks.
    *   Implement **Morph Target support** by mapping `HAnimDisplacer` displacements and `CoordinateInterpolator` states to glTF `targets` (vertex deltas).
    *   Resolve complex ROUTE chains to calculate morph `weight` animation channels.
4.  **Scene Graph:**
    *   Resolve hierarchical transforms, accounting for `center` offsets.
    *   Respect the `enabled` field of `TimeSensor` (ignore disabled sensors during animation export).
5.  **Extensibility:**
    *   Support `KHR_lights_punctual` for `DirectionalLight` and `PointLight`.
    *   Generate 1x1 base64 placeholder textures for missing assets.
    *   Cleanly integrate with `pygltflib` for binary GLB serialization.

**Technical Constraints:**
*   Use `xml.etree.ElementTree` for DOM parsing and `numpy` for geometry math.
*   The script must be backward-compatible with older X3D example files.
*   Avoid deprecated XML truthiness tests (use `element is not None` checks).
*   Ensure that Morph Target arrays are formatted correctly as delta buffers (not `ARRAY_BUFFER`).

**Current Project Status & Challenges:**
*   **The Converter:** Needs to ensure that complex animation pipelines (e.g., `TimeSensor` -> `ScalarInterpolator` -> `HAnimDisplacer`) are accurately resolved back to the originating `TimeSensor` using recursive upstream route searching.
*   **Target Viewers:** The output must be fully compliant with the Babylon.js Sandbox and other standard glTF 2.0 viewers, which requires accurate animation path targeting (e.g., `weights` path for morphs).

**Action Requested:**
"Review the provided Python implementation of `x3d_to_binary.py`. Ensure that the animation and morph target resolution logic correctly handles multi-step route chains and strictly validates the `enabled` attribute of nodes before generating animation tracks. Provide an updated, clean version of the code that optimizes binary memory usage and ensures high compatibility with glTF viewers."

***

### How to use this prompt:
*   **To get code fixes:** Paste the prompt above, then append: *"I am currently facing issues with [specific issue, e.g., morph target weight animation]. Please analyze the attached `x3d_to_binary.py` and provide a solution."*
*   **To document the project:** Use this text in a `README.md` file to give context to anyone who helps you maintain the tool.
>>>>>>> Stashed changes
