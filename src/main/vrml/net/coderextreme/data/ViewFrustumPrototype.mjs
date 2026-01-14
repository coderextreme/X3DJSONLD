const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "ViewFrustumPrototype.x3d");
scene.addMetaData("description", "Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype.");
scene.addMetaData("creator", "Don Brutzman");
scene.addMetaData("translated", "16 August 2008");
scene.addMetaData("modified", "20 October 2019");
scene.addMetaData("reference", "ViewFrustumExample.x3d");
scene.addMetaData("drawing", "ViewFrustumComputation.png");
scene.addMetaData("Image", "ViewFrustumOverheadView.png");
scene.addMetaData("Image", "ViewFrustumObliqueView.png");
scene.addMetaData("subject", "view culling frustum");
scene.addMetaData("identifier", "https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d");
scene.addMetaData("generator", "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let WorldInfo16 = browser.currentScene.createNode("WorldInfo");
WorldInfo16.title = "ViewFrustumPrototype.x3d";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = WorldInfo16;

let ProtoDeclare17 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ViewFrustum" appinfo="Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes" ><ProtoInterface><field name="ViewpointNode" accessType="initializeOnly" appinfo="required: insert Viewpoint DEF or USE node for view of interest" type="SFNode"><!--NULL node, ProtoInstance must provide--></field>
<field name="NavigationInfoNode" accessType="initializeOnly" appinfo="required: insert NavigationInfo DEF or USE node of interest" type="SFNode"><!--NULL node, ProtoInstance must provide--></field>
<field name="visible" accessType="inputOutput" appinfo="whether or not frustum geometry is rendered" type="SFBool" value="true"></field>
<field name="lineColor" accessType="inputOutput" appinfo="RGB color of ViewFrustum outline, default value 0.9 0.9 0.9" type="SFColor" value="0.9 0.9 0.9"></field>
<field name="frustumColor" accessType="inputOutput" appinfo="RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8" type="SFColor" value="0.8 0.8 0.8"></field>
<field name="transparency" accessType="inputOutput" appinfo="transparency of ViewFrustum hull geometry, default value 0.5" type="SFFloat" value="0.5"></field>
<field name="aspectRatio" accessType="inputOutput" appinfo="assumed ratio height/width, default value 0.75" type="SFFloat" value="0.75"></field>
<field name="trace" accessType="initializeOnly" appinfo="debug support, default false" type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><Switch DEF="VisibilitySwitch" whichChoice="-1"><Transform DEF="PositionTransform" rotation="0 1 0 3.14159"><Transform DEF="OrientationTransform"><Shape><IndexedLineSet DEF="FrustumLines" coordIndex="0 1 2 3 0 -1 4 5 6 7 4 -1 0 4 -1 1 5 -1 2 6 -1 3 7 -1"><Coordinate DEF="FrustumCoordinate" point="0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0"></Coordinate>
</IndexedLineSet>
<Appearance containerField="appearance"><Material containerField="material"><IS><connect nodeField="emissiveColor" protoField="lineColor"></connect>
</IS>
</Material>
</Appearance>
</Shape>
<Shape><Extrusion DEF="FrustumExtrusion"></Extrusion>
<Appearance containerField="appearance" DEF="FrustumAppearance"><Material containerField="material"><IS><connect nodeField="diffuseColor" protoField="frustumColor"></connect>
<connect nodeField="transparency" protoField="transparency"></connect>
</IS>
</Material>
</Appearance>
</Shape>
<Shape><Sphere radius="0.08"></Sphere>
<Appearance containerField="appearance" USE="FrustumAppearance"></Appearance>
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
ProtoInterface19.getField("ViewpointNode")//NULL node, ProtoInstance must provide
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface20.getField("NavigationInfoNode")//NULL node, ProtoInstance must provide
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface21.getField("visible").setValue("true");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface22.getField("lineColor").setValue("0.9 0.9 0.9");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface23.getField("frustumColor").setValue("0.8 0.8 0.8");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface24.getField("transparency").setValue("0.5");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface25.getField("aspectRatio").setValue("0.75");
ProtoInterface18YYY.field = new X3D.MFNode();

ProtoInterface26.getField("trace").setValue("false");
ProtoInterface18YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface18;

let ProtoBody27 = browser.currentScene.createNode("ProtoBody");
let Switch28 = browser.currentScene.createNode("Switch");
Switch28.DEF = "VisibilitySwitch";
Switch28.whichChoice = -1;
let Transform29 = browser.currentScene.createNode("Transform");
Transform29.DEF = "PositionTransform";
Transform29.rotation = new X3D.SFRotation([0,1,0,3.14159]);
let Transform30 = browser.currentScene.createNode("Transform");
Transform30.DEF = "OrientationTransform";
let Shape31 = browser.currentScene.createNode("Shape");
let IndexedLineSet32 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet32.DEF = "FrustumLines";
IndexedLineSet32.coordIndex = new X3D.MFInt32([0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1]);
let Coordinate33 = browser.currentScene.createNode("Coordinate");
Coordinate33.DEF = "FrustumCoordinate";
Coordinate33.point = new X3D.MFVec3f([0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]);
coord = Coordinate33;

geometry = IndexedLineSet32;

let Appearance34 = browser.currentScene.createNode("Appearance");
let Material35 = browser.currentScene.createNode("Material");
let IS36 = browser.currentScene.createNode("IS");
let connect37 = browser.currentScene.createNode("connect");
connect37.nodeField = "emissiveColor";
connect37.protoField = "lineColor";
IS36YYY.connect = new X3D.MFNode();

IS36ZZZ.connect[0] = connect37;

iS = IS36;

material = Material35;

appearance = Appearance34;

Transform30YYY.child = new X3D.undefined();

Transform30ZZZ.child[0] = Shape31;

let Shape38 = browser.currentScene.createNode("Shape");
let Extrusion39 = browser.currentScene.createNode("Extrusion");
Extrusion39.DEF = "FrustumExtrusion";
geometry = Extrusion39;

let Appearance40 = browser.currentScene.createNode("Appearance");
Appearance40.DEF = "FrustumAppearance";
let Material41 = browser.currentScene.createNode("Material");
let IS42 = browser.currentScene.createNode("IS");
let connect43 = browser.currentScene.createNode("connect");
connect43.nodeField = "diffuseColor";
connect43.protoField = "frustumColor";
IS42YYY.connect = new X3D.MFNode();

IS42ZZZ.connect[0] = connect43;

let connect44 = browser.currentScene.createNode("connect");
connect44.nodeField = "transparency";
connect44.protoField = "transparency";
IS42ZZZ.connect[1] = connect44;

iS = IS42;

material = Material41;

appearance = Appearance40;

Transform30ZZZ.child[1] = Shape38;

let Shape45 = browser.currentScene.createNode("Shape");
let Sphere46 = browser.currentScene.createNode("Sphere");
Sphere46.radius = 0.08;
geometry = Sphere46;

let Appearance47 = browser.currentScene.createNode("Appearance");
Appearance47.USE = "FrustumAppearance";
appearance = Appearance47;

Transform30ZZZ.child[2] = Shape45;

Transform29YYY.children = new X3D.MFNode();

Transform29ZZZ.children[0] = Transform30;

Switch28YYY.children = new X3D.MFNode();

Switch28ZZZ.children[0] = Transform29;

ProtoBody27YYY.children = new X3D.MFNode();

ProtoBody27ZZZ.children[0] = Switch28;

let Script48 = browser.currentScene.createNode("Script");
Script48.DEF = "GeometryComputationScript";
Script48.directOutput = True;
Script48.url = new X3D.MFString([new X3D.SFString("ViewFrustumPrototypeScript.js")]);
Script49.getField("visible")Script48YYY.field = new X3D.MFNode();

Script50.getField("visibilitySwitchSelection")Script48YYY.field = new X3D.MFNode();

Script51.getField("ViewpointNode")//initialization node (if any) goes here
Script48YYY.field = new X3D.MFNode();

Script52.getField("NavigationInfoNode")//initialization node (if any) goes here
Script48YYY.field = new X3D.MFNode();

Script53.getField("FrustumCoordinate")let Coordinate54 = browser.currentScene.createNode("Coordinate");
Coordinate54.USE = "FrustumCoordinate";
field53YYY.children = new X3D.MFNode();

field53ZZZ.children[0] = Coordinate54;

Script48YYY.field = new X3D.MFNode();

Script55.getField("FrustumExtrusion")let Extrusion56 = browser.currentScene.createNode("Extrusion");
Extrusion56.USE = "FrustumExtrusion";
field55YYY.children = new X3D.MFNode();

field55ZZZ.children[0] = Extrusion56;

Script48YYY.field = new X3D.MFNode();

Script57.getField("recompute")Script48YYY.field = new X3D.MFNode();

Script58.getField("aspectRatio")Script48YYY.field = new X3D.MFNode();

Script59.getField("position_changed")Script48YYY.field = new X3D.MFNode();

Script60.getField("orientation_changed")Script48YYY.field = new X3D.MFNode();

Script61.getField("spine_changed")Script48YYY.field = new X3D.MFNode();

Script62.getField("scale_changed")Script48YYY.field = new X3D.MFNode();

Script63.getField("point_changed")Script48YYY.field = new X3D.MFNode();

Script64.getField("trace")Script48YYY.field = new X3D.MFNode();

let IS65 = browser.currentScene.createNode("IS");
let connect66 = browser.currentScene.createNode("connect");
connect66.nodeField = "visible";
connect66.protoField = "visible";
IS65YYY.connect = new X3D.MFNode();

IS65ZZZ.connect[0] = connect66;

let connect67 = browser.currentScene.createNode("connect");
connect67.nodeField = "ViewpointNode";
connect67.protoField = "ViewpointNode";
IS65ZZZ.connect[1] = connect67;

let connect68 = browser.currentScene.createNode("connect");
connect68.nodeField = "NavigationInfoNode";
connect68.protoField = "NavigationInfoNode";
IS65ZZZ.connect[2] = connect68;

let connect69 = browser.currentScene.createNode("connect");
connect69.nodeField = "aspectRatio";
connect69.protoField = "aspectRatio";
IS65ZZZ.connect[3] = connect69;

let connect70 = browser.currentScene.createNode("connect");
connect70.nodeField = "trace";
connect70.protoField = "trace";
IS65ZZZ.connect[4] = connect70;

iS = IS65;

ProtoBody27ZZZ.children[1] = Script48;

let ROUTE71 = browser.currentScene.createNode("ROUTE");
ROUTE71.fromField = "visibilitySwitchSelection";
ROUTE71.fromNode = "GeometryComputationScript";
ROUTE71.toField = "whichChoice";
ROUTE71.toNode = "VisibilitySwitch";
ProtoBody27ZZZ.children[2] = ROUTE71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromField = "position_changed";
ROUTE72.fromNode = "GeometryComputationScript";
ROUTE72.toField = "translation";
ROUTE72.toNode = "PositionTransform";
ProtoBody27ZZZ.children[3] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromField = "orientation_changed";
ROUTE73.fromNode = "GeometryComputationScript";
ROUTE73.toField = "rotation";
ROUTE73.toNode = "OrientationTransform";
ProtoBody27ZZZ.children[4] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromField = "spine_changed";
ROUTE74.fromNode = "GeometryComputationScript";
ROUTE74.toField = "set_spine";
ROUTE74.toNode = "FrustumExtrusion";
ProtoBody27ZZZ.children[5] = ROUTE74;

let ROUTE75 = browser.currentScene.createNode("ROUTE");
ROUTE75.fromField = "scale_changed";
ROUTE75.fromNode = "GeometryComputationScript";
ROUTE75.toField = "set_scale";
ROUTE75.toNode = "FrustumExtrusion";
ProtoBody27ZZZ.children[6] = ROUTE75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromField = "point_changed";
ROUTE76.fromNode = "GeometryComputationScript";
ROUTE76.toField = "point";
ROUTE76.toNode = "FrustumCoordinate";
ProtoBody27ZZZ.children[7] = ROUTE76;

protoBody = ProtoBody27;

browser.currentScene.children[1] = ProtoDeclare17;

//Example use is in separate scene
let Anchor77 = browser.currentScene.createNode("Anchor");
Anchor77.description = "ViewFrustum Example";
Anchor77.url = new X3D.MFString([new X3D.SFString("ViewFrustumExample.x3d")]);
let Shape78 = browser.currentScene.createNode("Shape");
let Appearance79 = browser.currentScene.createNode("Appearance");
let Material80 = browser.currentScene.createNode("Material");
Material80.diffuseColor = new X3D.SFColor([0.8,0.4,0]);
material = Material80;

appearance = Appearance79;

let Text81 = browser.currentScene.createNode("Text");
Text81.string = new X3D.MFString([new X3D.SFString("ViewFrustumPrototype.x3d"), new X3D.SFString("is a Prototype declaration file."), new X3D.SFString("For an example scene using the prototype,"), new X3D.SFString("click this text and view"), new X3D.SFString("ViewFrustumExample.x3d")]);
let FontStyle82 = browser.currentScene.createNode("FontStyle");
FontStyle82.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
FontStyle82.size = 0.8;
fontStyle = FontStyle82;

geometry = Text81;

Anchor77YYY.children = new X3D.MFNode();

Anchor77ZZZ.children[0] = Shape78;

browser.currentScene.children[2] = Anchor77;

}
main ();
