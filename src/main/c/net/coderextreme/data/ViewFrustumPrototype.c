#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "ViewFrustumPrototype.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Don Brutzman";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "translated";
meta5.content = "16 August 2008";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "20 October 2019";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "reference";
meta7.content = "ViewFrustumExample.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "drawing";
meta8.content = "ViewFrustumComputation.png";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "Image";
meta9.content = "ViewFrustumOverheadView.png";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "Image";
meta10.content = "ViewFrustumObliqueView.png";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "subject";
meta11.content = "view culling frustum";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "identifier";
meta12.content = "http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "generator";
meta13.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "license";
meta14.content = "../license.html";
head1.meta[12] = meta14;

head = head1;

WorldInfo WorldInfo16 = createNode("WorldInfo");
WorldInfo16.title = "ViewFrustumPrototype.x3d";
children = new MFNode();

children[0] = WorldInfo16;

ProtoDeclare ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
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
ProtoDeclare17.name = "ViewFrustum";
ProtoDeclare17.appinfo = "Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes";
ProtoInterface ProtoInterface18 = createNode("ProtoInterface");
field field19 = createNode("field");
field19.name = "ViewpointNode";
field19.accessType = "initializeOnly";
field19.appinfo = "required: insert Viewpoint DEF or USE node for view of interest";
field19.type = "SFNode";
//NULL node, ProtoInstance must provide
ProtoInterface18.field = new MFNode();

ProtoInterface18.field[0] = field19;

field field20 = createNode("field");
field20.name = "NavigationInfoNode";
field20.accessType = "initializeOnly";
field20.appinfo = "required: insert NavigationInfo DEF or USE node of interest";
field20.type = "SFNode";
//NULL node, ProtoInstance must provide
ProtoInterface18.field[1] = field20;

field field21 = createNode("field");
field21.name = "visible";
field21.accessType = "inputOutput";
field21.appinfo = "whether or not frustum geometry is rendered";
field21.type = "SFBool";
field21.value = "true";
ProtoInterface18.field[2] = field21;

field field22 = createNode("field");
field22.name = "lineColor";
field22.accessType = "inputOutput";
field22.appinfo = "RGB color of ViewFrustum outline, default value 0.9 0.9 0.9";
field22.type = "SFColor";
field22.value = "0.9 0.9 0.9";
ProtoInterface18.field[3] = field22;

field field23 = createNode("field");
field23.name = "frustumColor";
field23.accessType = "inputOutput";
field23.appinfo = "RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8";
field23.type = "SFColor";
field23.value = "0.8 0.8 0.8";
ProtoInterface18.field[4] = field23;

field field24 = createNode("field");
field24.name = "transparency";
field24.accessType = "inputOutput";
field24.appinfo = "transparency of ViewFrustum hull geometry, default value 0.5";
field24.type = "SFFloat";
field24.value = "0.5";
ProtoInterface18.field[5] = field24;

field field25 = createNode("field");
field25.name = "aspectRatio";
field25.accessType = "inputOutput";
field25.appinfo = "assumed ratio height/width, default value 0.75";
field25.type = "SFFloat";
field25.value = "0.75";
ProtoInterface18.field[6] = field25;

field field26 = createNode("field");
field26.name = "trace";
field26.accessType = "initializeOnly";
field26.appinfo = "debug support, default false";
field26.type = "SFBool";
field26.value = "false";
ProtoInterface18.field[7] = field26;

ProtoDeclare17.protoInterface = ProtoInterface18;

ProtoBody ProtoBody27 = createNode("ProtoBody");
Switch Switch28 = createNode("Switch");
Switch28.DEF = "VisibilitySwitch";
Switch28.whichChoice = -1;
Transform Transform29 = createNode("Transform");
Transform29.DEF = "PositionTransform";
Transform29.rotation = new SFRotation(new float[0,1,0,3.14159]);
Transform Transform30 = createNode("Transform");
Transform30.DEF = "OrientationTransform";
Shape Shape31 = createNode("Shape");
IndexedLineSet IndexedLineSet32 = createNode("IndexedLineSet");
IndexedLineSet32.DEF = "FrustumLines";
IndexedLineSet32.coordIndex = new MFInt32(new int[0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1]);
Coordinate Coordinate33 = createNode("Coordinate");
Coordinate33.DEF = "FrustumCoordinate";
Coordinate33.point = new MFVec3f(new float[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
IndexedLineSet32.coord = Coordinate33;

Shape31.geometry = IndexedLineSet32;

Appearance Appearance34 = createNode("Appearance");
Material Material35 = createNode("Material");
IS IS36 = createNode("IS");
connect connect37 = createNode("connect");
connect37.nodeField = "emissiveColor";
connect37.protoField = "lineColor";
IS36.connect = new MFNode();

IS36.connect[0] = connect37;

Material35.iS = IS36;

Appearance34.material = Material35;

Shape31.appearance = Appearance34;

Transform30.children = new MFNode();

Transform30.children[0] = Shape31;

Shape Shape38 = createNode("Shape");
Extrusion Extrusion39 = createNode("Extrusion");
Extrusion39.DEF = "FrustumExtrusion";
Shape38.geometry = Extrusion39;

Appearance Appearance40 = createNode("Appearance");
Appearance40.DEF = "FrustumAppearance";
Material Material41 = createNode("Material");
IS IS42 = createNode("IS");
connect connect43 = createNode("connect");
connect43.nodeField = "diffuseColor";
connect43.protoField = "frustumColor";
IS42.connect = new MFNode();

IS42.connect[0] = connect43;

connect connect44 = createNode("connect");
connect44.nodeField = "transparency";
connect44.protoField = "transparency";
IS42.connect[1] = connect44;

Material41.iS = IS42;

Appearance40.material = Material41;

Shape38.appearance = Appearance40;

Transform30.children[1] = Shape38;

Shape Shape45 = createNode("Shape");
Sphere Sphere46 = createNode("Sphere");
Sphere46.radius = 0.08;
Shape45.geometry = Sphere46;

Appearance Appearance47 = createNode("Appearance");
Appearance47.USE = "FrustumAppearance";
Shape45.appearance = Appearance47;

Transform30.children[2] = Shape45;

Transform29.children = new MFNode();

Transform29.children[0] = Transform30;

Switch28.children = new MFNode();

Switch28.children[0] = Transform29;

ProtoBody27.children = new MFNode();

ProtoBody27.children[0] = Switch28;

Script Script48 = createNode("Script");
Script48.DEF = "GeometryComputationScript";
Script48.directOutput = True;
Script48.url = new MFString(new java.lang.String["ViewFrustumPrototypeScript.js"]);
field field49 = createNode("field");
field49.name = "visible";
field49.accessType = "inputOutput";
field49.appinfo = "Whether or not frustum geometry is rendered";
field49.type = "SFBool";
Script48.field = new MFNode();

Script48.field[0] = field49;

field field50 = createNode("field");
field50.name = "visibilitySwitchSelection";
field50.accessType = "outputOnly";
field50.appinfo = "Adjust Switch selection to make geometry visible or not";
field50.type = "SFInt32";
Script48.field[1] = field50;

field field51 = createNode("field");
field51.name = "ViewpointNode";
field51.accessType = "initializeOnly";
field51.type = "SFNode";
//initialization node (if any) goes here
Script48.field[2] = field51;

field field52 = createNode("field");
field52.name = "NavigationInfoNode";
field52.accessType = "initializeOnly";
field52.type = "SFNode";
//initialization node (if any) goes here
Script48.field[3] = field52;

field field53 = createNode("field");
field53.name = "FrustumCoordinate";
field53.accessType = "initializeOnly";
field53.type = "SFNode";
Coordinate Coordinate54 = createNode("Coordinate");
Coordinate54.USE = "FrustumCoordinate";
field53.children = new MFNode();

field53.children[0] = Coordinate54;

Script48.field[4] = field53;

field field55 = createNode("field");
field55.name = "FrustumExtrusion";
field55.accessType = "initializeOnly";
field55.type = "SFNode";
Extrusion Extrusion56 = createNode("Extrusion");
Extrusion56.USE = "FrustumExtrusion";
field55.children = new MFNode();

field55.children[0] = Extrusion56;

Script48.field[5] = field55;

field field57 = createNode("field");
field57.name = "recompute";
field57.accessType = "inputOnly";
field57.type = "SFBool";
Script48.field[6] = field57;

field field58 = createNode("field");
field58.name = "aspectRatio";
field58.accessType = "inputOutput";
field58.appinfo = "assumed ratio height/width";
field58.type = "SFFloat";
Script48.field[7] = field58;

field field59 = createNode("field");
field59.name = "position_changed";
field59.accessType = "outputOnly";
field59.type = "SFVec3f";
Script48.field[8] = field59;

field field60 = createNode("field");
field60.name = "orientation_changed";
field60.accessType = "outputOnly";
field60.type = "SFRotation";
Script48.field[9] = field60;

field field61 = createNode("field");
field61.name = "spine_changed";
field61.accessType = "outputOnly";
field61.type = "MFVec3f";
Script48.field[10] = field61;

field field62 = createNode("field");
field62.name = "scale_changed";
field62.accessType = "outputOnly";
field62.type = "MFVec2f";
Script48.field[11] = field62;

field field63 = createNode("field");
field63.name = "point_changed";
field63.accessType = "outputOnly";
field63.type = "MFVec3f";
Script48.field[12] = field63;

field field64 = createNode("field");
field64.name = "trace";
field64.accessType = "initializeOnly";
field64.type = "SFBool";
Script48.field[13] = field64;

IS IS65 = createNode("IS");
connect connect66 = createNode("connect");
connect66.nodeField = "visible";
connect66.protoField = "visible";
IS65.connect = new MFNode();

IS65.connect[0] = connect66;

connect connect67 = createNode("connect");
connect67.nodeField = "ViewpointNode";
connect67.protoField = "ViewpointNode";
IS65.connect[1] = connect67;

connect connect68 = createNode("connect");
connect68.nodeField = "NavigationInfoNode";
connect68.protoField = "NavigationInfoNode";
IS65.connect[2] = connect68;

connect connect69 = createNode("connect");
connect69.nodeField = "aspectRatio";
connect69.protoField = "aspectRatio";
IS65.connect[3] = connect69;

connect connect70 = createNode("connect");
connect70.nodeField = "trace";
connect70.protoField = "trace";
IS65.connect[4] = connect70;

Script48.iS = IS65;

ProtoBody27.children[1] = Script48;

ROUTE ROUTE71 = createNode("ROUTE");
ROUTE71.fromField = "visibilitySwitchSelection";
ROUTE71.fromNode = "GeometryComputationScript";
ROUTE71.toField = "whichChoice";
ROUTE71.toNode = "VisibilitySwitch";
ProtoBody27.children[2] = ROUTE71;

ROUTE ROUTE72 = createNode("ROUTE");
ROUTE72.fromField = "position_changed";
ROUTE72.fromNode = "GeometryComputationScript";
ROUTE72.toField = "translation";
ROUTE72.toNode = "PositionTransform";
ProtoBody27.children[3] = ROUTE72;

ROUTE ROUTE73 = createNode("ROUTE");
ROUTE73.fromField = "orientation_changed";
ROUTE73.fromNode = "GeometryComputationScript";
ROUTE73.toField = "rotation";
ROUTE73.toNode = "OrientationTransform";
ProtoBody27.children[4] = ROUTE73;

ROUTE ROUTE74 = createNode("ROUTE");
ROUTE74.fromField = "spine_changed";
ROUTE74.fromNode = "GeometryComputationScript";
ROUTE74.toField = "set_spine";
ROUTE74.toNode = "FrustumExtrusion";
ProtoBody27.children[5] = ROUTE74;

ROUTE ROUTE75 = createNode("ROUTE");
ROUTE75.fromField = "scale_changed";
ROUTE75.fromNode = "GeometryComputationScript";
ROUTE75.toField = "set_scale";
ROUTE75.toNode = "FrustumExtrusion";
ProtoBody27.children[6] = ROUTE75;

ROUTE ROUTE76 = createNode("ROUTE");
ROUTE76.fromField = "point_changed";
ROUTE76.fromNode = "GeometryComputationScript";
ROUTE76.toField = "point";
ROUTE76.toNode = "FrustumCoordinate";
ProtoBody27.children[7] = ROUTE76;

ProtoDeclare17.protoBody = ProtoBody27;

children[1] = ProtoDeclare17;

//Example use is in separate scene
Anchor Anchor77 = createNode("Anchor");
Anchor77.description = "ViewFrustum Example";
Anchor77.url = new MFString(new java.lang.String["ViewFrustumExample.x3d"]);
Shape Shape78 = createNode("Shape");
Appearance Appearance79 = createNode("Appearance");
Material Material80 = createNode("Material");
Material80.diffuseColor = new SFColor(new float[0.8,0.4,0]);
Appearance79.material = Material80;

Shape78.appearance = Appearance79;

Text Text81 = createNode("Text");
Text81.string = new MFString(new java.lang.String["ViewFrustumPrototype.x3d","is a Prototype declaration file.","For an example scene using the prototype,","click this text and view","ViewFrustumExample.x3d"]);
FontStyle FontStyle82 = createNode("FontStyle");
FontStyle82.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle82.size = 0.8;
Text81.fontStyle = FontStyle82;

Shape78.geometry = Text81;

Anchor77.children = new MFNode();

Anchor77.children[0] = Shape78;

children[2] = Anchor77;

}
