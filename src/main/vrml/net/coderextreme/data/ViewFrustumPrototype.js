let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "ViewFrustumPrototype.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ViewFrustum" appinfo="Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes" ><ProtoInterface><field name="ViewpointNode" accessType="initializeOnly" appinfo="required: insert Viewpoint DEF or USE node for view of interest" type="SFNode"><!--NULL node, ProtoInstance must provide--></field>
<field name="NavigationInfoNode" accessType="initializeOnly" appinfo="required: insert NavigationInfo DEF or USE node of interest" type="SFNode"><!--NULL node, ProtoInstance must provide--></field>
<field name="visible" accessType="inputOutput" appinfo="whether or not frustum geometry is rendered" type="SFBool" value="true"></field>
<field name="lineColor" accessType="inputOutput" appinfo="RGB color of ViewFrustum outline, default value 0.9 0.9 0.9" type="SFColor" value="0.9 0.9 0.9"></field>
<field name="frustumColor" accessType="inputOutput" appinfo="RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8" type="SFColor" value="0.8 0.8 0.8"></field>
<field name="transparency" accessType="inputOutput" appinfo="transparency of ViewFrustum hull geometry, default value 0.5" type="SFFloat" value="0.5"></field>
<field name="aspectRatio" accessType="inputOutput" appinfo="assumed ratio height/width, default value 0.75" type="SFFloat" value="0.75"></field>
<field name="trace" accessType="initializeOnly" appinfo="debug support, default false" type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><Switch DEF="VisibilitySwitch" whichChoice="-1"><Transform DEF="PositionTransform" rotation="0 1 0 3.14159"><Transform DEF="OrientationTransform"><Shape><IndexedLineSet containerField="geometry" DEF="FrustumLines" coordIndex="0 1 2 3 0 -1 4 5 6 7 4 -1 0 4 -1 1 5 -1 2 6 -1 3 7 -1"><Coordinate containerField="coord" DEF="FrustumCoordinate" point="0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0"></Coordinate>
</IndexedLineSet>
<Appearance><Material><IS><connect nodeField="emissiveColor" protoField="lineColor"></connect>
</IS>
</Material>
</Appearance>
</Shape>
<Shape><Extrusion containerField="geometry" DEF="FrustumExtrusion"></Extrusion>
<Appearance DEF="FrustumAppearance"><Material><IS><connect nodeField="diffuseColor" protoField="frustumColor"></connect>
<connect nodeField="transparency" protoField="transparency"></connect>
</IS>
</Material>
</Appearance>
</Shape>
<Shape><Sphere containerField="geometry" radius="0.08"></Sphere>
<Appearance USE="FrustumAppearance"></Appearance>
</Shape>
</Transform>
</Transform>
</Switch>
<Script DEF="GeometryComputationScript" directOutput="true" url="&quot;ViewFrustumPrototypeScript.js&quot;"><field name="visible" accessType="inputOutput" appinfo="Whether or not frustum geometry is rendered" type="SFBool"></field>
<field name="visibilitySwitchSelection" accessType="outputOnly" appinfo="Adjust Switch selection to make geometry visible or not" type="SFInt32"></field>
<field name="ViewpointNode" accessType="initializeOnly" type="SFNode"><!--initialization node (if any) goes here--></field>
<field name="NavigationInfoNode" accessType="initializeOnly" type="SFNode"><!--initialization node (if any) goes here--></field>
<field name="FrustumCoordinate" accessType="initializeOnly" type="SFNode"><Coordinate USE="FrustumCoordinate"></Coordinate>
</field>
<field name="FrustumExtrusion" accessType="initializeOnly" type="SFNode"><Extrusion USE="FrustumExtrusion"></Extrusion>
</field>
<field name="recompute" accessType="inputOnly" type="SFBool"></field>
<field name="aspectRatio" accessType="inputOutput" appinfo="assumed ratio height/width" type="SFFloat"></field>
<field name="position_changed" accessType="outputOnly" type="SFVec3f"></field>
<field name="orientation_changed" accessType="outputOnly" type="SFRotation"></field>
<field name="spine_changed" accessType="outputOnly" type="MFVec3f"></field>
<field name="scale_changed" accessType="outputOnly" type="MFVec2f"></field>
<field name="point_changed" accessType="outputOnly" type="MFVec3f"></field>
<field name="trace" accessType="initializeOnly" type="SFBool"></field>
<IS><connect nodeField="visible" protoField="visible"></connect>
<connect nodeField="ViewpointNode" protoField="ViewpointNode"></connect>
<connect nodeField="NavigationInfoNode" protoField="NavigationInfoNode"></connect>
<connect nodeField="aspectRatio" protoField="aspectRatio"></connect>
<connect nodeField="trace" protoField="trace"></connect>
</IS>
</Script>
<ROUTE fromField="visibilitySwitchSelection" fromNode="GeometryComputationScript" toField="whichChoice" toNode="VisibilitySwitch"></ROUTE>
<ROUTE fromField="position_changed" fromNode="GeometryComputationScript" toField="translation" toNode="PositionTransform"></ROUTE>
<ROUTE fromField="orientation_changed" fromNode="GeometryComputationScript" toField="rotation" toNode="OrientationTransform"></ROUTE>
<ROUTE fromField="spine_changed" fromNode="GeometryComputationScript" toField="set_spine" toNode="FrustumExtrusion"></ROUTE>
<ROUTE fromField="scale_changed" fromNode="GeometryComputationScript" toField="set_scale" toNode="FrustumExtrusion"></ROUTE>
<ROUTE fromField="point_changed" fromNode="GeometryComputationScript" toField="point" toNode="FrustumCoordinate"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare3.name = "ViewFrustum";
ProtoDeclare3.appinfo = "Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
let field5 = browser.currentScene.createNode("field");
field5.name = "ViewpointNode";
field5.accessType = "initializeOnly";
field5.appinfo = "required: insert Viewpoint DEF or USE node for view of interest";
field5.type = "SFNode";
//NULL node, ProtoInstance must provide
ProtoInterface4.field = new MFNode();

ProtoInterface4.field[0] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "NavigationInfoNode";
field6.accessType = "initializeOnly";
field6.appinfo = "required: insert NavigationInfo DEF or USE node of interest";
field6.type = "SFNode";
//NULL node, ProtoInstance must provide
ProtoInterface4.field[1] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "visible";
field7.accessType = "inputOutput";
field7.appinfo = "whether or not frustum geometry is rendered";
field7.type = "SFBool";
field7.value = "true";
ProtoInterface4.field[2] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "lineColor";
field8.accessType = "inputOutput";
field8.appinfo = "RGB color of ViewFrustum outline, default value 0.9 0.9 0.9";
field8.type = "SFColor";
field8.value = "0.9 0.9 0.9";
ProtoInterface4.field[3] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "frustumColor";
field9.accessType = "inputOutput";
field9.appinfo = "RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8";
field9.type = "SFColor";
field9.value = "0.8 0.8 0.8";
ProtoInterface4.field[4] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "transparency";
field10.accessType = "inputOutput";
field10.appinfo = "transparency of ViewFrustum hull geometry, default value 0.5";
field10.type = "SFFloat";
field10.value = "0.5";
ProtoInterface4.field[5] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "aspectRatio";
field11.accessType = "inputOutput";
field11.appinfo = "assumed ratio height/width, default value 0.75";
field11.type = "SFFloat";
field11.value = "0.75";
ProtoInterface4.field[6] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "trace";
field12.accessType = "initializeOnly";
field12.appinfo = "debug support, default false";
field12.type = "SFBool";
field12.value = "false";
ProtoInterface4.field[7] = field12;

ProtoDeclare3.protoInterface = ProtoInterface4;

let ProtoBody13 = browser.currentScene.createNode("ProtoBody");
let Switch14 = browser.currentScene.createNode("Switch");
Switch14.DEF = "VisibilitySwitch";
Switch14.whichChoice = -1;
let Transform15 = browser.currentScene.createNode("Transform");
Transform15.DEF = "PositionTransform";
Transform15.rotation = new SFRotation(new float[0,1,0,3.14159]);
let Transform16 = browser.currentScene.createNode("Transform");
Transform16.DEF = "OrientationTransform";
let Shape17 = browser.currentScene.createNode("Shape");
let IndexedLineSet18 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet18.DEF = "FrustumLines";
IndexedLineSet18.coordIndex = new MFInt32(new int[0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1]);
let Coordinate19 = browser.currentScene.createNode("Coordinate");
Coordinate19.DEF = "FrustumCoordinate";
Coordinate19.point = new MFVec3f(new float[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedLineSet18.coord = Coordinate19;

Shape17.geometry = IndexedLineSet18;

let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
let IS22 = browser.currentScene.createNode("IS");
let connect23 = browser.currentScene.createNode("connect");
connect23.nodeField = "emissiveColor";
connect23.protoField = "lineColor";
IS22.connect = new MFNode();

IS22.connect[0] = connect23;

Material21.iS = IS22;

Appearance20.material = Material21;

Shape17.appearance = Appearance20;

Transform16.children = new MFNode();

Transform16.children[0] = Shape17;

let Shape24 = browser.currentScene.createNode("Shape");
let Extrusion25 = browser.currentScene.createNode("Extrusion");
Extrusion25.DEF = "FrustumExtrusion";
Shape24.geometry = Extrusion25;

let Appearance26 = browser.currentScene.createNode("Appearance");
Appearance26.DEF = "FrustumAppearance";
let Material27 = browser.currentScene.createNode("Material");
let IS28 = browser.currentScene.createNode("IS");
let connect29 = browser.currentScene.createNode("connect");
connect29.nodeField = "diffuseColor";
connect29.protoField = "frustumColor";
IS28.connect = new MFNode();

IS28.connect[0] = connect29;

let connect30 = browser.currentScene.createNode("connect");
connect30.nodeField = "transparency";
connect30.protoField = "transparency";
IS28.connect[1] = connect30;

Material27.iS = IS28;

Appearance26.material = Material27;

Shape24.appearance = Appearance26;

Transform16.children[1] = Shape24;

let Shape31 = browser.currentScene.createNode("Shape");
let Sphere32 = browser.currentScene.createNode("Sphere");
Sphere32.radius = 0.08;
Shape31.geometry = Sphere32;

let Appearance33 = browser.currentScene.createNode("Appearance");
Appearance33.USE = "FrustumAppearance";
Shape31.appearance = Appearance33;

Transform16.children[2] = Shape31;

Transform15.children = new MFNode();

Transform15.children[0] = Transform16;

Switch14.children = new MFNode();

Switch14.children[0] = Transform15;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Switch14;

let Script34 = browser.currentScene.createNode("Script");
Script34.DEF = "GeometryComputationScript";
Script34.directOutput = True;
Script34.url = new MFString(new java.lang.String["ViewFrustumPrototypeScript.js"]);
let field35 = browser.currentScene.createNode("field");
field35.name = "visible";
field35.accessType = "inputOutput";
field35.appinfo = "Whether or not frustum geometry is rendered";
field35.type = "SFBool";
Script34.field = new MFNode();

Script34.field[0] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "visibilitySwitchSelection";
field36.accessType = "outputOnly";
field36.appinfo = "Adjust Switch selection to make geometry visible or not";
field36.type = "SFInt32";
Script34.field[1] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "ViewpointNode";
field37.accessType = "initializeOnly";
field37.type = "SFNode";
//initialization node (if any) goes here
Script34.field[2] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "NavigationInfoNode";
field38.accessType = "initializeOnly";
field38.type = "SFNode";
//initialization node (if any) goes here
Script34.field[3] = field38;

let field39 = browser.currentScene.createNode("field");
field39.name = "FrustumCoordinate";
field39.accessType = "initializeOnly";
field39.type = "SFNode";
let Coordinate40 = browser.currentScene.createNode("Coordinate");
Coordinate40.USE = "FrustumCoordinate";
field39.children = new MFNode();

field39.children[0] = Coordinate40;

Script34.field[4] = field39;

let field41 = browser.currentScene.createNode("field");
field41.name = "FrustumExtrusion";
field41.accessType = "initializeOnly";
field41.type = "SFNode";
let Extrusion42 = browser.currentScene.createNode("Extrusion");
Extrusion42.USE = "FrustumExtrusion";
field41.children = new MFNode();

field41.children[0] = Extrusion42;

Script34.field[5] = field41;

let field43 = browser.currentScene.createNode("field");
field43.name = "recompute";
field43.accessType = "inputOnly";
field43.type = "SFBool";
Script34.field[6] = field43;

let field44 = browser.currentScene.createNode("field");
field44.name = "aspectRatio";
field44.accessType = "inputOutput";
field44.appinfo = "assumed ratio height/width";
field44.type = "SFFloat";
Script34.field[7] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "position_changed";
field45.accessType = "outputOnly";
field45.type = "SFVec3f";
Script34.field[8] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "orientation_changed";
field46.accessType = "outputOnly";
field46.type = "SFRotation";
Script34.field[9] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "spine_changed";
field47.accessType = "outputOnly";
field47.type = "MFVec3f";
Script34.field[10] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "scale_changed";
field48.accessType = "outputOnly";
field48.type = "MFVec2f";
Script34.field[11] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "point_changed";
field49.accessType = "outputOnly";
field49.type = "MFVec3f";
Script34.field[12] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "trace";
field50.accessType = "initializeOnly";
field50.type = "SFBool";
Script34.field[13] = field50;

let IS51 = browser.currentScene.createNode("IS");
let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "visible";
connect52.protoField = "visible";
IS51.connect = new MFNode();

IS51.connect[0] = connect52;

let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "ViewpointNode";
connect53.protoField = "ViewpointNode";
IS51.connect[1] = connect53;

let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "NavigationInfoNode";
connect54.protoField = "NavigationInfoNode";
IS51.connect[2] = connect54;

let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "aspectRatio";
connect55.protoField = "aspectRatio";
IS51.connect[3] = connect55;

let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "trace";
connect56.protoField = "trace";
IS51.connect[4] = connect56;

Script34.iS = IS51;

ProtoBody13.children[1] = Script34;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromField = "visibilitySwitchSelection";
ROUTE57.fromNode = "GeometryComputationScript";
ROUTE57.toField = "whichChoice";
ROUTE57.toNode = "VisibilitySwitch";
ProtoBody13.children[2] = ROUTE57;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromField = "position_changed";
ROUTE58.fromNode = "GeometryComputationScript";
ROUTE58.toField = "translation";
ROUTE58.toNode = "PositionTransform";
ProtoBody13.children[3] = ROUTE58;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromField = "orientation_changed";
ROUTE59.fromNode = "GeometryComputationScript";
ROUTE59.toField = "rotation";
ROUTE59.toNode = "OrientationTransform";
ProtoBody13.children[4] = ROUTE59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromField = "spine_changed";
ROUTE60.fromNode = "GeometryComputationScript";
ROUTE60.toField = "set_spine";
ROUTE60.toNode = "FrustumExtrusion";
ProtoBody13.children[5] = ROUTE60;

let ROUTE61 = browser.currentScene.createNode("ROUTE");
ROUTE61.fromField = "scale_changed";
ROUTE61.fromNode = "GeometryComputationScript";
ROUTE61.toField = "set_scale";
ROUTE61.toNode = "FrustumExtrusion";
ProtoBody13.children[6] = ROUTE61;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromField = "point_changed";
ROUTE62.fromNode = "GeometryComputationScript";
ROUTE62.toField = "point";
ROUTE62.toNode = "FrustumCoordinate";
ProtoBody13.children[7] = ROUTE62;

ProtoDeclare3.protoBody = ProtoBody13;

browser.currentScene.children[1] = ProtoDeclare3;

//Example use is in separate scene
let Anchor63 = browser.currentScene.createNode("Anchor");
Anchor63.description = "ViewFrustum Example";
Anchor63.url = new MFString(new java.lang.String["ViewFrustumExample.x3d"]);
let Shape64 = browser.currentScene.createNode("Shape");
let Appearance65 = browser.currentScene.createNode("Appearance");
let Material66 = browser.currentScene.createNode("Material");
Material66.diffuseColor = new SFColor(new float[0.8,0.4,0]);
Appearance65.material = Material66;

Shape64.appearance = Appearance65;

let Text67 = browser.currentScene.createNode("Text");
Text67.string = new MFString(new java.lang.String["ViewFrustumPrototype.x3d","is a Prototype declaration file.","For an example scene using the prototype,","click this text and view","ViewFrustumExample.x3d"]);
let FontStyle68 = browser.currentScene.createNode("FontStyle");
FontStyle68.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle68.size = 0.8;
Text67.fontStyle = FontStyle68;

Shape64.geometry = Text67;

Anchor63.children = new MFNode();

Anchor63.children[0] = Shape64;

browser.currentScene.children[2] = Anchor63;

