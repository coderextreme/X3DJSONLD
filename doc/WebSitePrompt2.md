Of course. Here is a detailed prompt that encapsulates the requirements of the project as it has been built so far. This can serve as an excellent summary or as a starting point for describing the project to others.

---

### **Project Prompt: Consolidated X3D Multi-Format Viewer and Converter**

#### **1. High-Level Objective**

Develop a comprehensive, browser-based, single-page application that serves as a multi-format viewer and conversion tool for 3D scenes. The application must provide a side-by-side comparison of scenes rendered by two different X3D libraries (X3DOM and X_ITE) and facilitate the loading, viewing, and conversion between multiple standard 3D file formats.

#### **2. Core Functional Requirements**

*   **Dual-Viewer Rendering:**
    *   The UI must display two independent rendering windows simultaneously.
    *   One window must use the **X_ITE** library to render scenes.
    *   The other window must use the **X3DOM** library to render the same scene.
    *   The X3DOM library version must be selectable from a dropdown menu, allowing for on-the-fly testing of different builds (e.g., official dev, GitHub dev, forks). Reloading the X3DOM iframe should not affect the rest of the application.

*   **File Format Support & Loading:**
    *   The application must be able to load and process files in the following formats:
        *   **X3D JSON:** `.json`, `.x3dj`
        *   **X3D XML:** `.x3d`, `.xml`, `.x3dv`
        *   **STL (Stereolithography):** `.stl` (ASCII format)
        *   **PLY (Polygon File Format):** `.ply` (ASCII format)
    *   Users must be able to load files from a hierarchical file menu.
    *   The file menu must support both a client-side text filter and a simulated server-side pattern filter (e.g., `*.json`, `personal/*`).

*   **Data Conversion and Display:**
    *   The application must feature textareas to display the scene data in various formats. When a file is loaded, all relevant textareas should be populated automatically.
    *   **JSON <-> XML:** The tool must convert between X3D JSON and X3D XML formats.
    *   **STL/PLY -> X3D:** The tool must convert STL and PLY data into a valid X3D JSON representation for rendering and further conversion. The original STL/PLY text should be displayed in its own textarea.
    *   **EXI <-> JSON:** The tool must encode JSON to EXI and decode EXI back to JSON.
    *   **Java Code Generation:** The tool must generate X3D-Java source code from the X3D JSON object model.

*   **Interactive Controls:**
    *   Users must be able to edit the content of the textareas (JSON, XML, EXI) and click a button to load that in-memory data into the viewers, triggering all downstream conversions.
    *   A "Capture Snapshot" button must be available to grab the current rendered image from the X3DOM canvas and display it.

#### **3. Architectural and Technical Requirements**

*   **Iframe-based Architecture:**
    *   The X3DOM and X_ITE renderers must be loaded into separate `<iframe>` elements. This isolates their libraries and DOMs, preventing conflicts and allowing for independent reloads (especially for changing the X3DOM version).
    *   The main application page (`main_viewer.html`) will act as a controller, orchestrating data flow to and from the iframes.
    *   Communication from the parent to the iframes will be via function calls on the iframe's `contentWindow`.
    *   Communication from the iframes to the parent will be via callback functions defined on the parent's `window` object (e.g., `window.parent.x3domIframeReadyForAdvancedOps`).

*   **Data Flow for Rendering:**
    *   **X_ITE Viewer:** This viewer will always receive a raw **XML string** to render via its `loadContentInXite` function.
    *   **X3DOM Viewer:** This viewer is built around a static `<Inline>` node. Scene changes are accomplished by updating the `url` attribute of this node.
        *   For file-based sources (`.json`, `.x3d`), the `url` will be the direct file path.
        *   For in-memory data (e.g., converted STL/PLY, or from a textarea), the system must:
            1.  Convert the data to an **X3D JSON string**.
            2.  Create a `Blob` from this string with `type: 'application/json'`.
            3.  Generate a temporary `blob:` URL from the `Blob` using `URL.createObjectURL()`.
            4.  Pass this `blob:` URL to the X3DOM iframe's `loadUrl` function.
            5.  The system must manage and revoke old `blob:` URLs to prevent memory leaks.

*   **Modularity and Dependencies:**
    *   The core logic should be modular, using ES6 modules (e.g., `master_loader.js`).
    *   External libraries like jQuery, exificient.js, and the X3D-JSON-loader's node modules will be used.

#### **4. User Interface Layout**

*   The main view is a two-column layout.
*   **Right Column:** A fixed-width panel containing the hierarchical file menu and filter inputs.
*   **Left Column (Content Area):**
    *   **Top:** A control panel with the current file name, server filter, X3DOM version selector, and action links. It also contains textareas for **JSON, XML, EXI, STL, PLY, and Java**, along with the snapshot image.
    *   **Bottom:** An area that fills the remaining space, split horizontally to contain the **X_ITE iframe** and the **X3DOM iframe**.

#### **5. Provided Source Files to Implement Requirements**

*   `main_viewer.html`: The main application shell, UI layout, and primary script module.
*   `master_loader.js`: The core controller logic for file loading, conversion orchestration, and iframe management.
*   `iframe_x3dom_content.html`: The HTML and script for the isolated X3DOM rendering environment.
*   `iframe_xite_content.html`: The HTML and script for the isolated X_ITE rendering environment.
*   `exi.js`: Functions for encoding and decoding between JSON and EXI.
*   (And all supporting `../node/` modules for conversion and serialization).
