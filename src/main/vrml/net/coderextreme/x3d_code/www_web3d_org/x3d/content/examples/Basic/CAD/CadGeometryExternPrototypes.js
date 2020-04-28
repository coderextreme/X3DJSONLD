let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.1";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "CadGeometryExternPrototypes.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ExternProtoDeclare3 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare3.name = "IndexedQuadSet";
ExternProtoDeclare3.appinfo = "The IndexedQuadSet node represents a 3D shape composed of a collection of individual quadrilaterals (quads). IndexedQuadSet uses the indices in its index field to specify the vertices of each quad from the coord field. Each quad is formed from a set of four vertices of the Coordinate node identified by four consecutive indices from the index field If the index field does not contain a multiple of four coordinate values the remaining vertices shall be ignored.";
ExternProtoDeclare3.documentation = "https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#IndexedQuadSet";
ExternProtoDeclare3.url = new MFString(new java.lang.String["CadGeometryPrototypes.x3d#IndexedQuadSet","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#IndexedQuadSet","CadGeometryPrototypes.wrl#IndexedQuadSet","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#IndexedQuadSet"]);
let field4 = browser.currentScene.createNode("field");
field4.name = "set_index";
field4.accessType = "inputOnly";
field4.type = "MFInt32";
ExternProtoDeclare3.field = new MFNode();

ExternProtoDeclare3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "color";
field5.accessType = "inputOutput";
field5.appinfo = "[X3DColorNode]";
field5.type = "SFNode";
ExternProtoDeclare3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "coord";
field6.accessType = "inputOutput";
field6.appinfo = "[X3DCoordinateNode]";
field6.type = "SFNode";
ExternProtoDeclare3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "fogCoord";
field7.accessType = "inputOutput";
field7.appinfo = "[FogCoordinate]";
field7.type = "SFNode";
ExternProtoDeclare3.field[3] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "normal";
field8.accessType = "inputOutput";
field8.appinfo = "[X3DNormalNode]";
field8.type = "SFNode";
ExternProtoDeclare3.field[4] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "texCoord";
field9.accessType = "inputOutput";
field9.appinfo = "[X3DTextureCoordinateNode]";
field9.type = "SFNode";
ExternProtoDeclare3.field[5] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "ccw";
field10.accessType = "initializeOnly";
field10.type = "SFBool";
ExternProtoDeclare3.field[6] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "colorPerVertex";
field11.accessType = "initializeOnly";
field11.type = "SFBool";
ExternProtoDeclare3.field[7] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "normalPerVertex";
field12.accessType = "initializeOnly";
field12.type = "SFBool";
ExternProtoDeclare3.field[8] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "solid";
field13.accessType = "initializeOnly";
field13.type = "SFBool";
ExternProtoDeclare3.field[9] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "index";
field14.accessType = "initializeOnly";
field14.type = "MFInt32";
ExternProtoDeclare3.field[10] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "metadata";
field15.accessType = "inputOutput";
field15.type = "SFNode";
ExternProtoDeclare3.field[11] = field15;

browser.currentScene.children[1] = ExternProtoDeclare3;

//===========================================
let ExternProtoDeclare16 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare16.name = "QuadSet";
ExternProtoDeclare16.appinfo = "The QuadSet node represents a 3D shape that represents a collection of individual planar quadrilaterals. The coord field contains a Coordinate node that defines the 3D vertices that define the quad. Each quad is formed from a consecutive set of four vertices of the coordinate node. If the coordinate node does not contain a multiple of four coordinate values the remaining vertices shall be ignored.";
ExternProtoDeclare16.documentation = "https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#QuadSet";
ExternProtoDeclare16.url = new MFString(new java.lang.String["CadGeometryPrototypes.x3d#QuadSet","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#QuadSet","CadGeometryPrototypes.wrl#QuadSet","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#QuadSet"]);
let field17 = browser.currentScene.createNode("field");
field17.name = "attrib";
field17.accessType = "inputOutput";
field17.appinfo = "[X3DVertexAttributeNode]";
field17.type = "MFNode";
ExternProtoDeclare16.field = new MFNode();

ExternProtoDeclare16.field[0] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "color";
field18.accessType = "inputOutput";
field18.appinfo = "[X3DColorNode]";
field18.type = "SFNode";
ExternProtoDeclare16.field[1] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "coord";
field19.accessType = "inputOutput";
field19.appinfo = "[X3DCoordinateNode]";
field19.type = "SFNode";
ExternProtoDeclare16.field[2] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "fogCoord";
field20.accessType = "inputOutput";
field20.appinfo = "[FogCoordinate]";
field20.type = "SFNode";
ExternProtoDeclare16.field[3] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "normal";
field21.accessType = "inputOutput";
field21.appinfo = "[X3DNormalNode]";
field21.type = "SFNode";
ExternProtoDeclare16.field[4] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "texCoord";
field22.accessType = "inputOutput";
field22.appinfo = "[X3DTextureCoordinateNode]";
field22.type = "SFNode";
ExternProtoDeclare16.field[5] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "ccw";
field23.accessType = "initializeOnly";
field23.type = "SFBool";
ExternProtoDeclare16.field[6] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "colorPerVertex";
field24.accessType = "initializeOnly";
field24.type = "SFBool";
ExternProtoDeclare16.field[7] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "normalPerVertex";
field25.accessType = "initializeOnly";
field25.type = "SFBool";
ExternProtoDeclare16.field[8] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "solid";
field26.accessType = "initializeOnly";
field26.type = "SFBool";
ExternProtoDeclare16.field[9] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "metadata";
field27.accessType = "inputOutput";
field27.type = "SFNode";
ExternProtoDeclare16.field[10] = field27;

browser.currentScene.children[2] = ExternProtoDeclare16;

//========================================
let ExternProtoDeclare28 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare28.name = "CADLayer";
ExternProtoDeclare28.appinfo = "The CADLayer node defines a hierarchy of nodes used for showing layer structure.";
ExternProtoDeclare28.documentation = "https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADLayer";
ExternProtoDeclare28.url = new MFString(new java.lang.String["CadGeometryPrototypes.x3d#CADLayer","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#CADLayer","CadGeometryPrototypes.wrl#CADLayer","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#CADLayer"]);
let field29 = browser.currentScene.createNode("field");
field29.name = "addChildren";
field29.accessType = "inputOnly";
field29.type = "MFNode";
ExternProtoDeclare28.field = new MFNode();

ExternProtoDeclare28.field[0] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "removeChildren";
field30.accessType = "inputOnly";
field30.type = "MFNode";
ExternProtoDeclare28.field[1] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "children";
field31.accessType = "inputOutput";
field31.type = "MFNode";
ExternProtoDeclare28.field[2] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "name";
field32.accessType = "inputOutput";
field32.type = "SFString";
ExternProtoDeclare28.field[3] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "visible";
field33.accessType = "inputOutput";
field33.type = "MFBool";
ExternProtoDeclare28.field[4] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "bboxCenter";
field34.accessType = "initializeOnly";
field34.type = "SFVec3f";
ExternProtoDeclare28.field[5] = field34;

let field35 = browser.currentScene.createNode("field");
field35.name = "bboxSize";
field35.accessType = "initializeOnly";
field35.type = "SFVec3f";
ExternProtoDeclare28.field[6] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "metadata";
field36.accessType = "inputOutput";
field36.type = "SFNode";
ExternProtoDeclare28.field[7] = field36;

browser.currentScene.children[3] = ExternProtoDeclare28;

//========================================
let ExternProtoDeclare37 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare37.name = "CADAssembly";
ExternProtoDeclare37.appinfo = "The CADAssembly node holds a set of assemblies or parts grouped together.";
ExternProtoDeclare37.documentation = "https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADAssembly";
ExternProtoDeclare37.url = new MFString(new java.lang.String["CadGeometryPrototypes.x3d#CADAssembly","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#CADAssembly","CadGeometryPrototypes.wrl#CADAssembly","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#CADAssembly"]);
let field38 = browser.currentScene.createNode("field");
field38.name = "addChildren";
field38.accessType = "inputOnly";
field38.type = "MFNode";
ExternProtoDeclare37.field = new MFNode();

ExternProtoDeclare37.field[0] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "removeChildren";
field39.accessType = "inputOnly";
field39.type = "MFNode";
ExternProtoDeclare37.field[1] = field39;

let field40 = browser.currentScene.createNode("field");
field40.name = "children";
field40.accessType = "inputOutput";
field40.type = "MFNode";
ExternProtoDeclare37.field[2] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "name";
field41.accessType = "inputOutput";
field41.type = "SFString";
ExternProtoDeclare37.field[3] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "bboxCenter";
field42.accessType = "initializeOnly";
field42.type = "SFVec3f";
ExternProtoDeclare37.field[4] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "bboxSize";
field43.accessType = "initializeOnly";
field43.type = "SFVec3f";
ExternProtoDeclare37.field[5] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "metadata";
field44.accessType = "inputOutput";
field44.type = "SFNode";
ExternProtoDeclare37.field[6] = field44;

browser.currentScene.children[4] = ExternProtoDeclare37;

//========================================
let ExternProtoDeclare45 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare45.name = "CADPart";
ExternProtoDeclare45.appinfo = "CADPart represents the location and faces that constitute a part";
ExternProtoDeclare45.documentation = "https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADPart";
ExternProtoDeclare45.url = new MFString(new java.lang.String["CadGeometryPrototypes.wrl#CADPart","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#CADPart","CadGeometryPrototypes.x3d#CADPart","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#CADPart"]);
let field46 = browser.currentScene.createNode("field");
field46.name = "addChildren";
field46.accessType = "inputOnly";
field46.type = "MFNode";
ExternProtoDeclare45.field = new MFNode();

ExternProtoDeclare45.field[0] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "removeChildren";
field47.accessType = "inputOnly";
field47.type = "MFNode";
ExternProtoDeclare45.field[1] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "children";
field48.accessType = "inputOutput";
field48.type = "MFNode";
ExternProtoDeclare45.field[2] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "name";
field49.accessType = "inputOutput";
field49.type = "SFString";
ExternProtoDeclare45.field[3] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "translation";
field50.accessType = "inputOutput";
field50.type = "SFVec3f";
ExternProtoDeclare45.field[4] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "rotation";
field51.accessType = "inputOutput";
field51.type = "SFRotation";
ExternProtoDeclare45.field[5] = field51;

let field52 = browser.currentScene.createNode("field");
field52.name = "center";
field52.accessType = "inputOutput";
field52.type = "SFVec3f";
ExternProtoDeclare45.field[6] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "scale";
field53.accessType = "inputOutput";
field53.type = "SFVec3f";
ExternProtoDeclare45.field[7] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "scaleOrientation";
field54.accessType = "inputOutput";
field54.type = "SFRotation";
ExternProtoDeclare45.field[8] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "bboxCenter";
field55.accessType = "initializeOnly";
field55.type = "SFVec3f";
ExternProtoDeclare45.field[9] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "bboxSize";
field56.accessType = "initializeOnly";
field56.type = "SFVec3f";
ExternProtoDeclare45.field[10] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "metadata";
field57.accessType = "inputOutput";
field57.type = "SFNode";
ExternProtoDeclare45.field[11] = field57;

browser.currentScene.children[5] = ExternProtoDeclare45;

//========================================
let ExternProtoDeclare58 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare58.name = "CADFace";
ExternProtoDeclare58.appinfo = "The CADFace node holds the geometry representing a face of a part.";
ExternProtoDeclare58.documentation = "https://www.web3d.org/x3d/specifications/ISO-IEC-19775-Amendment1-PDAM-X3DAbstractSpecification/Part01/components/CADGeometry.html#CADFace";
ExternProtoDeclare58.url = new MFString(new java.lang.String["CadGeometryPrototypes.x3d#CADFace","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.x3d#CADFace","CadGeometryPrototypes.wrl#CADFace","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadGeometryPrototypes.wrl#CADFace"]);
let field59 = browser.currentScene.createNode("field");
field59.name = "name";
field59.accessType = "inputOutput";
field59.type = "SFString";
ExternProtoDeclare58.field = new MFNode();

ExternProtoDeclare58.field[0] = field59;

let field60 = browser.currentScene.createNode("field");
field60.name = "shape";
field60.accessType = "inputOutput";
field60.type = "SFNode";
ExternProtoDeclare58.field[1] = field60;

let field61 = browser.currentScene.createNode("field");
field61.name = "bboxCenter";
field61.accessType = "initializeOnly";
field61.type = "SFVec3f";
ExternProtoDeclare58.field[2] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "bboxSize";
field62.accessType = "initializeOnly";
field62.type = "SFVec3f";
ExternProtoDeclare58.field[3] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "metadata";
field63.accessType = "inputOutput";
field63.type = "SFNode";
ExternProtoDeclare58.field[4] = field63;

browser.currentScene.children[6] = ExternProtoDeclare58;

//========================================
let Transform64 = browser.currentScene.createNode("Transform");
Transform64.translation = new SFVec3f(new float[0,-2,0]);
let Anchor65 = browser.currentScene.createNode("Anchor");
Anchor65.description = "CAD Teapot";
Anchor65.url = new MFString(new java.lang.String["CadTeapot.x3d","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadTeapot.x3d","CadTeapot.wrl","https://www.web3d.org/x3d/content/examples/Basic/CAD/CadTeapot.wrl"]);
let Shape66 = browser.currentScene.createNode("Shape");
let Text67 = browser.currentScene.createNode("Text");
Text67.string = new MFString(new java.lang.String["Example CAD structure nodes","are found in CadTeapot.x3d"]);
let FontStyle68 = browser.currentScene.createNode("FontStyle");
FontStyle68.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle68.size = 0.9;
Text67.fontStyle = FontStyle68;

Shape66.geometry = Text67;

let Appearance69 = browser.currentScene.createNode("Appearance");
let Material70 = browser.currentScene.createNode("Material");
Material70.diffuseColor = new SFColor(new float[1,1,0.2]);
Appearance69.material = Material70;

Shape66.appearance = Appearance69;

Anchor65.children = new MFNode();

Anchor65.children[0] = Shape66;

Transform64.children = new MFNode();

Transform64.children[0] = Anchor65;

browser.currentScene.children[7] = Transform64;

let Transform71 = browser.currentScene.createNode("Transform");
Transform71.translation = new SFVec3f(new float[-3,2,0]);
let Shape72 = browser.currentScene.createNode("Shape");
let Appearance73 = browser.currentScene.createNode("Appearance");
Appearance73.DEF = "White";
let Material74 = browser.currentScene.createNode("Material");
Material74.diffuseColor = new SFColor(new float[1,1,1]);
Appearance73.material = Material74;

Shape72.appearance = Appearance73;

let ProtoInstance75 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance75.name = "IndexedQuadSet";
let fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "index";
fieldValue76.value = "0 3 2 1 4 5 6 7 2 7 9 8 2 3 4 7";
ProtoInstance75.fieldValue = new MFNode();

ProtoInstance75.fieldValue[0] = fieldValue76;

let fieldValue77 = browser.currentScene.createNode("fieldValue");
fieldValue77.name = "coord";
let Coordinate78 = browser.currentScene.createNode("Coordinate");
Coordinate78.point = new MFVec3f(new float[-1.5,0,0,-1.5,1,-1,-0.5,1,-1,-0.5,0,0,0.5,0,0,1.5,0,0,1.5,1,-1,0.5,1,-1,-0.5,2,-1,0.5,2,-1]);
fieldValue77.children = new MFNode();

fieldValue77.children[0] = Coordinate78;

ProtoInstance75.fieldValue[1] = fieldValue77;

Shape72.geometry = ProtoInstance75;

Transform71.children = new MFNode();

Transform71.children[0] = Shape72;

browser.currentScene.children[8] = Transform71;

let Transform79 = browser.currentScene.createNode("Transform");
Transform79.translation = new SFVec3f(new float[3,2,0]);
let Shape80 = browser.currentScene.createNode("Shape");
let Appearance81 = browser.currentScene.createNode("Appearance");
Appearance81.USE = "White";
Shape80.appearance = Appearance81;

let ProtoInstance82 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance82.name = "QuadSet";
let fieldValue83 = browser.currentScene.createNode("fieldValue");
fieldValue83.name = "coord";
let Coordinate84 = browser.currentScene.createNode("Coordinate");
Coordinate84.point = new MFVec3f(new float[-1.5,0,0,-1.5,1,-1,-0.5,1,-1,-0.5,0,0,0.5,0,0,1.5,0,0,1.5,1,-1,0.5,1,-1]);
fieldValue83.children = new MFNode();

fieldValue83.children[0] = Coordinate84;

ProtoInstance82.fieldValue = new MFNode();

ProtoInstance82.fieldValue[0] = fieldValue83;

Shape80.geometry = ProtoInstance82;

Transform79.children = new MFNode();

Transform79.children[0] = Shape80;

browser.currentScene.children[9] = Transform79;

//========================================
//Silence scene warnings by providing ordered ProtoInstance examples. Note warning above that this scene is for developmental use. The ProtoInstance form of the CAD nodes should not be used, native X3D encoding should be used instead.
let ProtoInstance85 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance85.name = "CADLayer";
let fieldValue86 = browser.currentScene.createNode("fieldValue");
fieldValue86.name = "children";
let ProtoInstance87 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance87.name = "CADAssembly";
let fieldValue88 = browser.currentScene.createNode("fieldValue");
fieldValue88.name = "children";
let ProtoInstance89 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance89.name = "CADPart";
let fieldValue90 = browser.currentScene.createNode("fieldValue");
fieldValue90.name = "children";
let ProtoInstance91 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance91.name = "CADFace";
let fieldValue92 = browser.currentScene.createNode("fieldValue");
fieldValue92.name = "shape";
let Shape93 = browser.currentScene.createNode("Shape");
let Cylinder94 = browser.currentScene.createNode("Cylinder");
Cylinder94.bottom = False;
Cylinder94.height = 0.000001;
Cylinder94.radius = 0.000001;
Cylinder94.side = False;
Shape93.geometry = Cylinder94;

let Appearance95 = browser.currentScene.createNode("Appearance");
let Material96 = browser.currentScene.createNode("Material");
Appearance95.material = Material96;

Shape93.appearance = Appearance95;

fieldValue92.children = new MFNode();

fieldValue92.children[0] = Shape93;

ProtoInstance91.fieldValue = new MFNode();

ProtoInstance91.fieldValue[0] = fieldValue92;

fieldValue90.children = new MFNode();

fieldValue90.children[0] = ProtoInstance91;

ProtoInstance89.fieldValue = new MFNode();

ProtoInstance89.fieldValue[0] = fieldValue90;

fieldValue88.children = new MFNode();

fieldValue88.children[0] = ProtoInstance89;

ProtoInstance87.fieldValue = new MFNode();

ProtoInstance87.fieldValue[0] = fieldValue88;

fieldValue86.children = new MFNode();

fieldValue86.children[0] = ProtoInstance87;

ProtoInstance85.fieldValue = new MFNode();

ProtoInstance85.fieldValue[0] = fieldValue86;

browser.currentScene.children[10] = ProtoInstance85;

