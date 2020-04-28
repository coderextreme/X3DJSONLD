let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
//====================
//Do not copy these ExternProtoDeclare statements! They are copied automatically to provide backwards compatibility for VRML97 when using X3dToVrml97.xslt stylesheet mappings.
//====================
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "Geometry2dComponentExternProtos.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ExternProtoDeclare3 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare3.name = "Arc2D";
ExternProtoDeclare3.url = new MFString(new java.lang.String["Geometry2dComponentPrototypes.wrl#Arc2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Arc2D","Geometry2dComponentPrototypes.x3d#Arc2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Arc2D"]);
let field4 = browser.currentScene.createNode("field");
field4.name = "startAngle";
field4.accessType = "initializeOnly";
field4.type = "SFFloat";
ExternProtoDeclare3.field = new MFNode();

ExternProtoDeclare3.field[0] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "endAngle";
field5.accessType = "initializeOnly";
field5.type = "SFFloat";
ExternProtoDeclare3.field[1] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "radius";
field6.accessType = "initializeOnly";
field6.type = "SFFloat";
ExternProtoDeclare3.field[2] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "metadata";
field7.accessType = "inputOutput";
field7.type = "SFNode";
ExternProtoDeclare3.field[3] = field7;

browser.currentScene.children[1] = ExternProtoDeclare3;

let ExternProtoDeclare8 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare8.name = "ArcClose2D";
ExternProtoDeclare8.url = new MFString(new java.lang.String["Geometry2dComponentPrototypes.wrl#ArcClose2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#ArcClose2D","Geometry2dComponentPrototypes.x3d#ArcClose2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#ArcClose2D"]);
let field9 = browser.currentScene.createNode("field");
field9.name = "startAngle";
field9.accessType = "initializeOnly";
field9.type = "SFFloat";
ExternProtoDeclare8.field = new MFNode();

ExternProtoDeclare8.field[0] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "endAngle";
field10.accessType = "initializeOnly";
field10.type = "SFFloat";
ExternProtoDeclare8.field[1] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "radius";
field11.accessType = "initializeOnly";
field11.type = "SFFloat";
ExternProtoDeclare8.field[2] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "closureType";
field12.accessType = "initializeOnly";
field12.type = "SFString";
ExternProtoDeclare8.field[3] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "solid";
field13.accessType = "initializeOnly";
field13.type = "SFBool";
ExternProtoDeclare8.field[4] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "metadata";
field14.accessType = "inputOutput";
field14.type = "SFNode";
ExternProtoDeclare8.field[5] = field14;

browser.currentScene.children[2] = ExternProtoDeclare8;

let ExternProtoDeclare15 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare15.name = "Circle2D";
ExternProtoDeclare15.url = new MFString(new java.lang.String["Geometry2dComponentPrototypes.wrl#Circle2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Circle2D","Geometry2dComponentPrototypes.x3d#Circle2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Circle2D"]);
let field16 = browser.currentScene.createNode("field");
field16.name = "radius";
field16.accessType = "initializeOnly";
field16.type = "SFFloat";
ExternProtoDeclare15.field = new MFNode();

ExternProtoDeclare15.field[0] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "solid";
field17.accessType = "initializeOnly";
field17.type = "SFBool";
ExternProtoDeclare15.field[1] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "metadata";
field18.accessType = "inputOutput";
field18.type = "SFNode";
ExternProtoDeclare15.field[2] = field18;

browser.currentScene.children[3] = ExternProtoDeclare15;

let ExternProtoDeclare19 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare19.name = "Disk2D";
ExternProtoDeclare19.url = new MFString(new java.lang.String["Geometry2dComponentPrototypes.wrl#Disk2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Disk2D","Geometry2dComponentPrototypes.x3d#Disk2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Disk2D"]);
let field20 = browser.currentScene.createNode("field");
field20.name = "innerRadius";
field20.accessType = "initializeOnly";
field20.type = "SFFloat";
ExternProtoDeclare19.field = new MFNode();

ExternProtoDeclare19.field[0] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "outerRadius";
field21.accessType = "initializeOnly";
field21.type = "SFFloat";
ExternProtoDeclare19.field[1] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "solid";
field22.accessType = "initializeOnly";
field22.type = "SFBool";
ExternProtoDeclare19.field[2] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "metadata";
field23.accessType = "inputOutput";
field23.type = "SFNode";
ExternProtoDeclare19.field[3] = field23;

browser.currentScene.children[4] = ExternProtoDeclare19;

let ExternProtoDeclare24 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare24.name = "Polyline2D";
ExternProtoDeclare24.url = new MFString(new java.lang.String["Geometry2dComponentPrototypes.wrl#Polyline2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Polyline2D","Geometry2dComponentPrototypes.x3d#Polyline2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Polyline2D"]);
let field25 = browser.currentScene.createNode("field");
field25.name = "lineSegments";
field25.accessType = "initializeOnly";
field25.type = "MFVec2f";
ExternProtoDeclare24.field = new MFNode();

ExternProtoDeclare24.field[0] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "solid";
field26.accessType = "initializeOnly";
field26.type = "SFBool";
ExternProtoDeclare24.field[1] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "metadata";
field27.accessType = "inputOutput";
field27.type = "SFNode";
ExternProtoDeclare24.field[2] = field27;

browser.currentScene.children[5] = ExternProtoDeclare24;

let ExternProtoDeclare28 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare28.name = "Polypoint2D";
ExternProtoDeclare28.url = new MFString(new java.lang.String["Geometry2dComponentPrototypes.wrl#Polypoint2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Polypoint2D","Geometry2dComponentPrototypes.x3d#Polypoint2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Polypoint2D"]);
let field29 = browser.currentScene.createNode("field");
field29.name = "point";
field29.accessType = "initializeOnly";
field29.type = "MFVec2f";
ExternProtoDeclare28.field = new MFNode();

ExternProtoDeclare28.field[0] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "metadata";
field30.accessType = "inputOutput";
field30.type = "SFNode";
ExternProtoDeclare28.field[1] = field30;

browser.currentScene.children[6] = ExternProtoDeclare28;

let ExternProtoDeclare31 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare31.name = "Rectangle2D";
ExternProtoDeclare31.url = new MFString(new java.lang.String["Geometry2dComponentPrototypes.wrl#Rectangle2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Rectangle2D","Geometry2dComponentPrototypes.x3d#Rectangle2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Rectangle2D"]);
let field32 = browser.currentScene.createNode("field");
field32.name = "size";
field32.accessType = "initializeOnly";
field32.type = "SFVec2f";
ExternProtoDeclare31.field = new MFNode();

ExternProtoDeclare31.field[0] = field32;

let field33 = browser.currentScene.createNode("field");
field33.name = "solid";
field33.accessType = "initializeOnly";
field33.type = "SFBool";
ExternProtoDeclare31.field[1] = field33;

let field34 = browser.currentScene.createNode("field");
field34.name = "metadata";
field34.accessType = "inputOutput";
field34.type = "SFNode";
ExternProtoDeclare31.field[2] = field34;

browser.currentScene.children[7] = ExternProtoDeclare31;

let ExternProtoDeclare35 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare35.name = "TriangleSet2D";
ExternProtoDeclare35.url = new MFString(new java.lang.String["Geometry2dComponentPrototypes.wrl#TriangleSet2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#TriangleSet2D","Geometry2dComponentPrototypes.x3d#TriangleSet2D","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#TriangleSet2D"]);
let field36 = browser.currentScene.createNode("field");
field36.name = "vertices";
field36.accessType = "initializeOnly";
field36.type = "MFVec2f";
ExternProtoDeclare35.field = new MFNode();

ExternProtoDeclare35.field[0] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "solid";
field37.accessType = "initializeOnly";
field37.type = "SFBool";
ExternProtoDeclare35.field[1] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "metadata";
field38.accessType = "inputOutput";
field38.type = "SFNode";
ExternProtoDeclare35.field[2] = field38;

browser.currentScene.children[8] = ExternProtoDeclare35;

//====================
//Additional Unfilled versions since FillProperties node not possible in native VRML 97
//====================
let ExternProtoDeclare39 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare39.name = "ArcClose2DUnfilled";
ExternProtoDeclare39.url = new MFString(new java.lang.String["Geometry2dComponentPrototypes.wrl#ArcClose2DUnfilled","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#ArcClose2DUnfilled","Geometry2dComponentPrototypes.x3d#ArcClose2DUnfilled","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#ArcClose2DUnfilled"]);
let field40 = browser.currentScene.createNode("field");
field40.name = "startAngle";
field40.accessType = "initializeOnly";
field40.type = "SFFloat";
ExternProtoDeclare39.field = new MFNode();

ExternProtoDeclare39.field[0] = field40;

let field41 = browser.currentScene.createNode("field");
field41.name = "endAngle";
field41.accessType = "initializeOnly";
field41.type = "SFFloat";
ExternProtoDeclare39.field[1] = field41;

let field42 = browser.currentScene.createNode("field");
field42.name = "radius";
field42.accessType = "initializeOnly";
field42.type = "SFFloat";
ExternProtoDeclare39.field[2] = field42;

let field43 = browser.currentScene.createNode("field");
field43.name = "closureType";
field43.accessType = "initializeOnly";
field43.type = "SFString";
ExternProtoDeclare39.field[3] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "solid";
field44.accessType = "initializeOnly";
field44.type = "SFBool";
ExternProtoDeclare39.field[4] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "metadata";
field45.accessType = "inputOutput";
field45.type = "SFNode";
ExternProtoDeclare39.field[5] = field45;

browser.currentScene.children[9] = ExternProtoDeclare39;

let ExternProtoDeclare46 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare46.name = "Rectangle2DUnfilled";
ExternProtoDeclare46.url = new MFString(new java.lang.String["Geometry2dComponentPrototypes.wrl#Rectangle2DUnfilled","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.wrl#Rectangle2DUnfilled","Geometry2dComponentPrototypes.x3d#Rectangle2DUnfilled","https://www.web3d.org/x3d/content/examples/Basic/development/Geometry2dComponentPrototypes.x3d#Rectangle2DUnfilled"]);
let field47 = browser.currentScene.createNode("field");
field47.name = "size";
field47.accessType = "initializeOnly";
field47.type = "SFVec2f";
ExternProtoDeclare46.field = new MFNode();

ExternProtoDeclare46.field[0] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "solid";
field48.accessType = "initializeOnly";
field48.type = "SFBool";
ExternProtoDeclare46.field[1] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "metadata";
field49.accessType = "inputOutput";
field49.type = "SFNode";
ExternProtoDeclare46.field[2] = field49;

browser.currentScene.children[10] = ExternProtoDeclare46;

//====================
//====================
let Background50 = browser.currentScene.createNode("Background");
Background50.groundColor = new MFColor(new float[0.3,0.3,0.3]);
Background50.skyColor = new MFColor(new float[0.3,0.3,0.3]);
browser.currentScene.children[11] = Background50;

let Viewpoint51 = browser.currentScene.createNode("Viewpoint");
Viewpoint51.description = "Geometry2D Component Examples";
Viewpoint51.position = new SFVec3f(new float[0,0,12]);
browser.currentScene.children[12] = Viewpoint51;

//====================
//Top row
let Transform52 = browser.currentScene.createNode("Transform");
Transform52.translation = new SFVec3f(new float[-5,2,0]);
let Shape53 = browser.currentScene.createNode("Shape");
let ProtoInstance54 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance54.name = "ArcClose2D";
let fieldValue55 = browser.currentScene.createNode("fieldValue");
fieldValue55.name = "closureType";
fieldValue55.value = "PIE";
ProtoInstance54.fieldValue = new MFNode();

ProtoInstance54.fieldValue[0] = fieldValue55;

let fieldValue56 = browser.currentScene.createNode("fieldValue");
fieldValue56.name = "startAngle";
fieldValue56.value = "0.7";
ProtoInstance54.fieldValue[1] = fieldValue56;

let fieldValue57 = browser.currentScene.createNode("fieldValue");
fieldValue57.name = "endAngle";
fieldValue57.value = "3";
ProtoInstance54.fieldValue[2] = fieldValue57;

let fieldValue58 = browser.currentScene.createNode("fieldValue");
fieldValue58.name = "radius";
fieldValue58.value = "1";
ProtoInstance54.fieldValue[3] = fieldValue58;

Shape53.geometry = ProtoInstance54;

let Appearance59 = browser.currentScene.createNode("Appearance");
let Material60 = browser.currentScene.createNode("Material");
Material60.diffuseColor = new SFColor(new float[0,0,1]);
Appearance59.material = Material60;

Shape53.appearance = Appearance59;

Transform52.children = new MFNode();

Transform52.children[0] = Shape53;

browser.currentScene.children[13] = Transform52;

let Transform61 = browser.currentScene.createNode("Transform");
Transform61.DEF = "ArcClose2DUnfilledTransform";
Transform61.translation = new SFVec3f(new float[-2.5,2,0]);
let Shape62 = browser.currentScene.createNode("Shape");
let ProtoInstance63 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance63.name = "ArcClose2DUnfilled";
let fieldValue64 = browser.currentScene.createNode("fieldValue");
fieldValue64.name = "closureType";
fieldValue64.value = "PIE";
ProtoInstance63.fieldValue = new MFNode();

ProtoInstance63.fieldValue[0] = fieldValue64;

let fieldValue65 = browser.currentScene.createNode("fieldValue");
fieldValue65.name = "startAngle";
fieldValue65.value = "0.7";
ProtoInstance63.fieldValue[1] = fieldValue65;

let fieldValue66 = browser.currentScene.createNode("fieldValue");
fieldValue66.name = "endAngle";
fieldValue66.value = "3";
ProtoInstance63.fieldValue[2] = fieldValue66;

let fieldValue67 = browser.currentScene.createNode("fieldValue");
fieldValue67.name = "radius";
fieldValue67.value = "1";
ProtoInstance63.fieldValue[3] = fieldValue67;

Shape62.geometry = ProtoInstance63;

let Appearance68 = browser.currentScene.createNode("Appearance");
let Material69 = browser.currentScene.createNode("Material");
Material69.emissiveColor = new SFColor(new float[0.2,0.2,1]);
Appearance68.material = Material69;

Shape62.appearance = Appearance68;

Transform61.children = new MFNode();

Transform61.children[0] = Shape62;

browser.currentScene.children[14] = Transform61;

let Transform70 = browser.currentScene.createNode("Transform");
Transform70.translation = new SFVec3f(new float[-0.5,2,0]);
let Shape71 = browser.currentScene.createNode("Shape");
let ProtoInstance72 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance72.name = "Arc2D";
let fieldValue73 = browser.currentScene.createNode("fieldValue");
fieldValue73.name = "startAngle";
fieldValue73.value = "0";
ProtoInstance72.fieldValue = new MFNode();

ProtoInstance72.fieldValue[0] = fieldValue73;

let fieldValue74 = browser.currentScene.createNode("fieldValue");
fieldValue74.name = "endAngle";
fieldValue74.value = "1.570796";
ProtoInstance72.fieldValue[1] = fieldValue74;

let fieldValue75 = browser.currentScene.createNode("fieldValue");
fieldValue75.name = "radius";
fieldValue75.value = "1";
ProtoInstance72.fieldValue[2] = fieldValue75;

Shape71.geometry = ProtoInstance72;

let Appearance76 = browser.currentScene.createNode("Appearance");
let Material77 = browser.currentScene.createNode("Material");
Material77.emissiveColor = new SFColor(new float[1,1,0]);
Appearance76.material = Material77;

Shape71.appearance = Appearance76;

Transform70.children = new MFNode();

Transform70.children[0] = Shape71;

browser.currentScene.children[15] = Transform70;

let Transform78 = browser.currentScene.createNode("Transform");
Transform78.translation = new SFVec3f(new float[2,2,0]);
let Shape79 = browser.currentScene.createNode("Shape");
let ProtoInstance80 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance80.name = "Circle2D";
let fieldValue81 = browser.currentScene.createNode("fieldValue");
fieldValue81.name = "radius";
fieldValue81.value = "1";
ProtoInstance80.fieldValue = new MFNode();

ProtoInstance80.fieldValue[0] = fieldValue81;

Shape79.geometry = ProtoInstance80;

let Appearance82 = browser.currentScene.createNode("Appearance");
let Material83 = browser.currentScene.createNode("Material");
Material83.emissiveColor = new SFColor(new float[1,0,0]);
Appearance82.material = Material83;

Shape79.appearance = Appearance82;

Transform78.children = new MFNode();

Transform78.children[0] = Shape79;

browser.currentScene.children[16] = Transform78;

let Transform84 = browser.currentScene.createNode("Transform");
Transform84.translation = new SFVec3f(new float[5,2,0]);
let Shape85 = browser.currentScene.createNode("Shape");
let ProtoInstance86 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance86.name = "Disk2D";
let fieldValue87 = browser.currentScene.createNode("fieldValue");
fieldValue87.name = "innerRadius";
fieldValue87.value = "0.5";
ProtoInstance86.fieldValue = new MFNode();

ProtoInstance86.fieldValue[0] = fieldValue87;

let fieldValue88 = browser.currentScene.createNode("fieldValue");
fieldValue88.name = "outerRadius";
fieldValue88.value = "1";
ProtoInstance86.fieldValue[1] = fieldValue88;

Shape85.geometry = ProtoInstance86;

let Appearance89 = browser.currentScene.createNode("Appearance");
let Material90 = browser.currentScene.createNode("Material");
Material90.diffuseColor = new SFColor(new float[0.5,1,1]);
Appearance89.material = Material90;

Shape85.appearance = Appearance89;

Transform84.children = new MFNode();

Transform84.children[0] = Shape85;

browser.currentScene.children[17] = Transform84;

//====================
//Bottom row
let Transform91 = browser.currentScene.createNode("Transform");
Transform91.translation = new SFVec3f(new float[-5,-2,0]);
let Shape92 = browser.currentScene.createNode("Shape");
let ProtoInstance93 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance93.name = "Rectangle2D";
let fieldValue94 = browser.currentScene.createNode("fieldValue");
fieldValue94.name = "size";
fieldValue94.value = "1 2";
ProtoInstance93.fieldValue = new MFNode();

ProtoInstance93.fieldValue[0] = fieldValue94;

Shape92.geometry = ProtoInstance93;

let Appearance95 = browser.currentScene.createNode("Appearance");
let Material96 = browser.currentScene.createNode("Material");
Material96.diffuseColor = new SFColor(new float[1,0,0]);
Appearance95.material = Material96;

Shape92.appearance = Appearance95;

Transform91.children = new MFNode();

Transform91.children[0] = Shape92;

browser.currentScene.children[18] = Transform91;

let Transform97 = browser.currentScene.createNode("Transform");
Transform97.DEF = "RectangleUnfilled";
Transform97.translation = new SFVec3f(new float[-3,-2,0]);
let Shape98 = browser.currentScene.createNode("Shape");
let ProtoInstance99 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance99.name = "Rectangle2DUnfilled";
let fieldValue100 = browser.currentScene.createNode("fieldValue");
fieldValue100.name = "size";
fieldValue100.value = "1 2";
ProtoInstance99.fieldValue = new MFNode();

ProtoInstance99.fieldValue[0] = fieldValue100;

Shape98.geometry = ProtoInstance99;

let Appearance101 = browser.currentScene.createNode("Appearance");
let Material102 = browser.currentScene.createNode("Material");
Material102.emissiveColor = new SFColor(new float[1,0.2,0.2]);
Appearance101.material = Material102;

Shape98.appearance = Appearance101;

Transform97.children = new MFNode();

Transform97.children[0] = Shape98;

browser.currentScene.children[19] = Transform97;

let Transform103 = browser.currentScene.createNode("Transform");
Transform103.translation = new SFVec3f(new float[-0.5,-2,0]);
let Shape104 = browser.currentScene.createNode("Shape");
let ProtoInstance105 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance105.name = "Polyline2D";
let fieldValue106 = browser.currentScene.createNode("fieldValue");
fieldValue106.name = "lineSegments";
fieldValue106.value = "-1 0 -0.5 1 0 0 0.5 1 1 0";
ProtoInstance105.fieldValue = new MFNode();

ProtoInstance105.fieldValue[0] = fieldValue106;

Shape104.geometry = ProtoInstance105;

let Appearance107 = browser.currentScene.createNode("Appearance");
let Material108 = browser.currentScene.createNode("Material");
Material108.diffuseColor = new SFColor(new float[0,0,0]);
Material108.emissiveColor = new SFColor(new float[1,0.5,1]);
Appearance107.material = Material108;

Shape104.appearance = Appearance107;

Transform103.children = new MFNode();

Transform103.children[0] = Shape104;

browser.currentScene.children[20] = Transform103;

let Transform109 = browser.currentScene.createNode("Transform");
Transform109.translation = new SFVec3f(new float[2.5,-2,0]);
let Shape110 = browser.currentScene.createNode("Shape");
let ProtoInstance111 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance111.name = "Polypoint2D";
let fieldValue112 = browser.currentScene.createNode("fieldValue");
fieldValue112.name = "point";
fieldValue112.value = "-1 0 -0.5 1 0 0 0.5 1 1 0";
ProtoInstance111.fieldValue = new MFNode();

ProtoInstance111.fieldValue[0] = fieldValue112;

Shape110.geometry = ProtoInstance111;

let Appearance113 = browser.currentScene.createNode("Appearance");
let Material114 = browser.currentScene.createNode("Material");
Material114.emissiveColor = new SFColor(new float[1,1,1]);
Appearance113.material = Material114;

Shape110.appearance = Appearance113;

Transform109.children = new MFNode();

Transform109.children[0] = Shape110;

let Transform115 = browser.currentScene.createNode("Transform");
Transform115.translation = new SFVec3f(new float[0,0.5,-0.5]);
let Shape116 = browser.currentScene.createNode("Shape");
let ProtoInstance117 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance117.name = "Rectangle2D";
ProtoInstance117.DEF = "BackDrop";
let fieldValue118 = browser.currentScene.createNode("fieldValue");
fieldValue118.name = "size";
fieldValue118.value = "2.5 2";
ProtoInstance117.fieldValue = new MFNode();

ProtoInstance117.fieldValue[0] = fieldValue118;

Shape116.geometry = ProtoInstance117;

let Appearance119 = browser.currentScene.createNode("Appearance");
let Material120 = browser.currentScene.createNode("Material");
Material120.diffuseColor = new SFColor(new float[0,0,0]);
Appearance119.material = Material120;

Shape116.appearance = Appearance119;

Transform115.children = new MFNode();

Transform115.children[0] = Shape116;

let Transform121 = browser.currentScene.createNode("Transform");
Transform121.translation = new SFVec3f(new float[0,-0.15,0.2]);
let Shape122 = browser.currentScene.createNode("Shape");
let Text123 = browser.currentScene.createNode("Text");
Text123.string = new MFString(new java.lang.String["PolyPoint2D","5 points"]);
let FontStyle124 = browser.currentScene.createNode("FontStyle");
FontStyle124.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle124.size = 0.25;
FontStyle124.style = "BOLD";
Text123.fontStyle = FontStyle124;

Shape122.geometry = Text123;

let Appearance125 = browser.currentScene.createNode("Appearance");
let Material126 = browser.currentScene.createNode("Material");
Appearance125.material = Material126;

Shape122.appearance = Appearance125;

Transform121.children = new MFNode();

Transform121.children[0] = Shape122;

Transform115.children[1] = Transform121;

Transform109.children[1] = Transform115;

browser.currentScene.children[21] = Transform109;

let Transform127 = browser.currentScene.createNode("Transform");
Transform127.translation = new SFVec3f(new float[5,-2,0]);
let Shape128 = browser.currentScene.createNode("Shape");
let ProtoInstance129 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance129.name = "TriangleSet2D";
let fieldValue130 = browser.currentScene.createNode("fieldValue");
fieldValue130.name = "vertices";
fieldValue130.value = "0 0 1 1 -1 1 0 0 1 0.5 1 -0.5 0 0 -1 -2 -2 -1";
ProtoInstance129.fieldValue = new MFNode();

ProtoInstance129.fieldValue[0] = fieldValue130;

Shape128.geometry = ProtoInstance129;

let Appearance131 = browser.currentScene.createNode("Appearance");
let FillProperties132 = browser.currentScene.createNode("FillProperties");
FillProperties132.DEF = "TestFillProperties";
Appearance131.fillProperties = FillProperties132;

let LineProperties133 = browser.currentScene.createNode("LineProperties");
LineProperties133.DEF = "TestLineProperties";
LineProperties133.linewidthScaleFactor = 1;
let MetadataString134 = browser.currentScene.createNode("MetadataString");
MetadataString134.name = "test LineProperties metadata child";
MetadataString134.DEF = "TestLinePropertiesMetaData";
LineProperties133.metadata = MetadataString134;

Appearance131.lineProperties = LineProperties133;

let Material135 = browser.currentScene.createNode("Material");
Material135.diffuseColor = new SFColor(new float[0,1,0]);
Appearance131.material = Material135;

Shape128.appearance = Appearance131;

Transform127.children = new MFNode();

Transform127.children[0] = Shape128;

browser.currentScene.children[22] = Transform127;

