let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.2";
//Utilize ExtrusionCrossSection ProtoInstance as a Shape node (with containerField=\"children\") rather than an Extrusion node (with containerField=\"geometry\").
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "ExtrusionCrossSectionExampleTorus.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ExternProtoDeclare3 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare3.name = "ExtrusionCrossSection";
ExternProtoDeclare3.appinfo = "Shape prototype for Extrusion node that also draws spine line plus oriented scaled cross sections at each spine point";
ExternProtoDeclare3.documentation = "https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.x3d";
ExternProtoDeclare3.url = new MFString(new java.lang.String["ExtrusionCrossSectionPrototype.x3d#ExtrusionCrossSection","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.x3d#ExtrusionCrossSection","ExtrusionCrossSectionPrototype.wrl#ExtrusionCrossSection","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.wrl#ExtrusionCrossSection"]);
//run-time eventIn Extrusion-modification interfaces for VRML 97 compatibility
let field4 = browser.currentScene.createNode("field");
field4.name = "name";
field4.accessType = "initializeOnly";
field4.appinfo = "Extrusion name";
field4.type = "SFString";
ExternProtoDeclare3.field = new MFNode();

ExternProtoDeclare3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "crossSection";
field5.accessType = "initializeOnly";
field5.appinfo = "Extrusion field";
field5.type = "MFVec2f";
ExternProtoDeclare3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "spine";
field6.accessType = "initializeOnly";
field6.appinfo = "Extrusion field";
field6.type = "MFVec3f";
ExternProtoDeclare3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "scale";
field7.accessType = "initializeOnly";
field7.appinfo = "Extrusion field";
field7.type = "MFVec2f";
ExternProtoDeclare3.field[3] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "orientation";
field8.accessType = "initializeOnly";
field8.appinfo = "Extrusion field";
field8.type = "MFRotation";
ExternProtoDeclare3.field[4] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "beginCap";
field9.accessType = "initializeOnly";
field9.appinfo = "Extrusion field";
field9.type = "SFBool";
ExternProtoDeclare3.field[5] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "endCap";
field10.accessType = "initializeOnly";
field10.appinfo = "Extrusion field";
field10.type = "SFBool";
ExternProtoDeclare3.field[6] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "ccw";
field11.accessType = "initializeOnly";
field11.appinfo = "Extrusion field";
field11.type = "SFBool";
ExternProtoDeclare3.field[7] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "convex";
field12.accessType = "initializeOnly";
field12.appinfo = "Extrusion field";
field12.type = "SFBool";
ExternProtoDeclare3.field[8] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "creaseAngle";
field13.accessType = "initializeOnly";
field13.appinfo = "Extrusion field";
field13.type = "SFFloat";
ExternProtoDeclare3.field[9] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "solid";
field14.accessType = "initializeOnly";
field14.appinfo = "Extrusion field";
field14.type = "SFBool";
ExternProtoDeclare3.field[10] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "spineColor";
field15.accessType = "inputOutput";
field15.appinfo = "emissiveColor of spine";
field15.type = "SFColor";
ExternProtoDeclare3.field[11] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "crossSectionColor";
field16.accessType = "inputOutput";
field16.appinfo = "diffuseColor of crossSection";
field16.type = "SFColor";
ExternProtoDeclare3.field[12] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "crossSectionTransparency";
field17.accessType = "inputOutput";
field17.appinfo = "transparency of crossSection";
field17.type = "SFFloat";
ExternProtoDeclare3.field[13] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "extrusionColor";
field18.accessType = "inputOutput";
field18.appinfo = "diffuseColor of extrusion hull";
field18.type = "SFColor";
ExternProtoDeclare3.field[14] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "extrusionTransparency";
field19.accessType = "inputOutput";
field19.appinfo = "transparency of extrusion hull";
field19.type = "SFFloat";
ExternProtoDeclare3.field[15] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "extrusionImageTexture";
field20.accessType = "initializeOnly";
field20.appinfo = "Image to apply to Extrusion";
field20.type = "SFNode";
ExternProtoDeclare3.field[16] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "extrusionTextureTransform";
field21.accessType = "initializeOnly";
field21.appinfo = "TextureTransform coordinates of image applied to Extrusion";
field21.type = "SFNode";
ExternProtoDeclare3.field[17] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "set_crossSection";
field22.accessType = "inputOnly";
field22.appinfo = "Extrusion field";
field22.type = "MFVec2f";
ExternProtoDeclare3.field[18] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "set_spine";
field23.accessType = "inputOnly";
field23.appinfo = "Extrusion field";
field23.type = "MFVec3f";
ExternProtoDeclare3.field[19] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "set_scale";
field24.accessType = "inputOnly";
field24.appinfo = "Extrusion field";
field24.type = "MFVec2f";
ExternProtoDeclare3.field[20] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "set_orientation";
field25.accessType = "inputOnly";
field25.appinfo = "Extrusion field";
field25.type = "MFRotation";
ExternProtoDeclare3.field[21] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "traceEnabled";
field26.accessType = "initializeOnly";
field26.appinfo = "Whether to provide initialization trace statements showing node construction";
field26.type = "SFBool";
ExternProtoDeclare3.field[22] = field26;

browser.currentScene.children[1] = ExternProtoDeclare3;

//====================
//Example instance adapted from Figure15.12Torus.x3d
//https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter15-Extrusion/Figure15.12Torus.x3d
let Viewpoint27 = browser.currentScene.createNode("Viewpoint");
Viewpoint27.description = "Torus crossSections, spine and hull";
Viewpoint27.orientation = new SFRotation(new float[-0.351,0.926,0.14,0.81]);
Viewpoint27.position = new SFVec3f(new float[10,5,10]);
browser.currentScene.children[2] = Viewpoint27;

let ProtoInstance28 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance28.name = "ExtrusionCrossSection";
let fieldValue29 = browser.currentScene.createNode("fieldValue");
fieldValue29.name = "name";
fieldValue29.value = "Torus";
ProtoInstance28.fieldValue = new MFNode();

ProtoInstance28.fieldValue[0] = fieldValue29;

let fieldValue30 = browser.currentScene.createNode("fieldValue");
fieldValue30.name = "crossSection";
fieldValue30.value = "0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1";
ProtoInstance28.fieldValue[1] = fieldValue30;

let fieldValue31 = browser.currentScene.createNode("fieldValue");
fieldValue31.name = "spine";
fieldValue31.value = "2 0 0 1.85 0 0.77 1.41 0 1.41 0.77 0 1.85 0 0 2 -0.77 0 1.85 -1.41 0 1.41 -1.85 0 0.77 -2 0 0 -1.85 0 -0.77 -1.41 0 -1.41 -0.77 0 -1.85 0 0 -2 0.77 0 -1.85 1.41 0 -1.41 1.85 0 -0.77 2 0 0";
ProtoInstance28.fieldValue[2] = fieldValue31;

let fieldValue32 = browser.currentScene.createNode("fieldValue");
fieldValue32.name = "beginCap";
fieldValue32.value = "false";
ProtoInstance28.fieldValue[3] = fieldValue32;

let fieldValue33 = browser.currentScene.createNode("fieldValue");
fieldValue33.name = "endCap";
fieldValue33.value = "false";
ProtoInstance28.fieldValue[4] = fieldValue33;

let fieldValue34 = browser.currentScene.createNode("fieldValue");
fieldValue34.name = "creaseAngle";
fieldValue34.value = "1.57";
ProtoInstance28.fieldValue[5] = fieldValue34;

let fieldValue35 = browser.currentScene.createNode("fieldValue");
fieldValue35.name = "spineColor";
fieldValue35.value = "1 1 1";
ProtoInstance28.fieldValue[6] = fieldValue35;

let fieldValue36 = browser.currentScene.createNode("fieldValue");
fieldValue36.name = "crossSectionColor";
fieldValue36.value = "0.8 0.8 0";
ProtoInstance28.fieldValue[7] = fieldValue36;

let fieldValue37 = browser.currentScene.createNode("fieldValue");
fieldValue37.name = "crossSectionTransparency";
fieldValue37.value = "0.1";
ProtoInstance28.fieldValue[8] = fieldValue37;

let fieldValue38 = browser.currentScene.createNode("fieldValue");
fieldValue38.name = "extrusionColor";
fieldValue38.value = "1 0 1";
ProtoInstance28.fieldValue[9] = fieldValue38;

let fieldValue39 = browser.currentScene.createNode("fieldValue");
fieldValue39.name = "extrusionTransparency";
fieldValue39.value = "0.8";
ProtoInstance28.fieldValue[10] = fieldValue39;

let fieldValue40 = browser.currentScene.createNode("fieldValue");
fieldValue40.name = "traceEnabled";
fieldValue40.value = "false";
ProtoInstance28.fieldValue[11] = fieldValue40;

browser.currentScene.children[3] = ProtoInstance28;

let Transform41 = browser.currentScene.createNode("Transform");
Transform41.scale = new SFVec3f(new float[4,4,4]);
let Inline42 = browser.currentScene.createNode("Inline");
Inline42.DEF = "CoordinateAxes";
Inline42.url = new MFString(new java.lang.String["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]);
Transform41.children = new MFNode();

Transform41.children[0] = Inline42;

browser.currentScene.children[4] = Transform41;

