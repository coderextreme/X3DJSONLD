let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.0";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "ExtrusionCrossSectionPrototype.x3d";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let ProtoDeclare3 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ExtrusionCrossSection" appinfo="Shape prototype for Extrusion node that also draws spine line plus oriented scaled cross sections at each spine point" documentation="https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.x3d" ><ProtoInterface><!--run-time eventIn Extrusion-modification interfaces for VRML97 compatibility--><field name="name" accessType="initializeOnly" appinfo="Extrusion name" type="SFString"></field>
<field name="crossSection" accessType="initializeOnly" appinfo="Extrusion field" type="MFVec2f" value="1 1 1 -1 -1 -1 -1 1 1 1"></field>
<field name="spine" accessType="initializeOnly" appinfo="Extrusion field" type="MFVec3f" value="0 0 0 0 1 0"></field>
<field name="scale" accessType="initializeOnly" appinfo="Extrusion field" type="MFVec2f" value="1 1"></field>
<field name="orientation" accessType="initializeOnly" appinfo="Extrusion field" type="MFRotation" value="0 0 1 0"></field>
<field name="beginCap" accessType="initializeOnly" appinfo="Extrusion field" type="SFBool" value="false"></field>
<field name="endCap" accessType="initializeOnly" appinfo="Extrusion field" type="SFBool" value="false"></field>
<field name="ccw" accessType="initializeOnly" appinfo="Extrusion field" type="SFBool" value="true"></field>
<field name="convex" accessType="initializeOnly" appinfo="Extrusion field" type="SFBool" value="true"></field>
<field name="creaseAngle" accessType="initializeOnly" appinfo="Extrusion field" type="SFFloat" value="0"></field>
<field name="solid" accessType="initializeOnly" appinfo="Extrusion field" type="SFBool" value="true"></field>
<field name="spineColor" accessType="inputOutput" appinfo="emissiveColor of spine" type="SFColor" value="0 0.9 0.8"></field>
<field name="crossSectionColor" accessType="inputOutput" appinfo="diffuseColor of crossSection" type="SFColor" value="0.2 0.8 0.3"></field>
<field name="crossSectionTransparency" accessType="inputOutput" appinfo="transparency of crossSection" type="SFFloat" value="0.2"></field>
<field name="extrusionColor" accessType="inputOutput" appinfo="diffuseColor of extrusion hull" type="SFColor" value="0.3 0.3 0.3"></field>
<field name="extrusionTransparency" accessType="inputOutput" appinfo="transparency of extrusion hull" type="SFFloat" value="0.7"></field>
<field name="extrusionImageTexture" accessType="initializeOnly" appinfo="Image to apply to Extrusion" type="SFNode"><!--initialization node (if any) goes here--></field>
<field name="extrusionTextureTransform" accessType="initializeOnly" appinfo="TextureTransform coordinates of image applied to Extrusion" type="SFNode"><!--initialization node (if any) goes here--></field>
<field name="set_crossSection" accessType="inputOnly" appinfo="Extrusion field" type="MFVec2f"></field>
<field name="set_spine" accessType="inputOnly" appinfo="Extrusion field" type="MFVec3f"></field>
<field name="set_scale" accessType="inputOnly" appinfo="Extrusion field" type="MFVec2f"></field>
<field name="set_orientation" accessType="inputOnly" appinfo="Extrusion field" type="MFRotation"></field>
<field name="traceEnabled" accessType="initializeOnly" appinfo="Whether to provide initialization trace statements showing node construction" type="SFBool" value="false"></field>
</ProtoInterface>
<ProtoBody><Group><Shape DEF="Spine"><IndexedLineSet containerField="geometry" DEF="SpineLine" colorPerVertex="false"><Coordinate containerField="coord" DEF="SpineCoordinates"><IS><connect nodeField="point" protoField="spine"></connect>
<connect nodeField="point" protoField="set_spine"></connect>
</IS>
</Coordinate>
</IndexedLineSet>
<Appearance><Material DEF="SpineMaterial"><IS><connect nodeField="emissiveColor" protoField="spineColor"></connect>
</IS>
</Material>
</Appearance>
</Shape>
<Shape DEF="InternalCrossSections"><!--use most conservative polygon settings for reliable rendering: convex='false' solid='false'--><IndexedFaceSet containerField="geometry" DEF="CrossSectionFaces" convex="false" solid="false"><Coordinate containerField="coord" DEF="CrossSectionFacesCoordinates"></Coordinate>
</IndexedFaceSet>
<Appearance><Material DEF="CrossSectionMaterial"><IS><connect nodeField="diffuseColor" protoField="crossSectionColor"></connect>
<connect nodeField="transparency" protoField="crossSectionTransparency"></connect>
</IS>
</Material>
</Appearance>
</Shape>
<Shape DEF="ExternalExtrusion"><!--use most conservative polygon settings: convex='false' solid='false'--><Extrusion containerField="geometry" DEF="EnclosingExtrusion" convex="false" solid="false"><IS><connect nodeField="crossSection" protoField="crossSection"></connect>
<connect nodeField="spine" protoField="spine"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="orientation" protoField="orientation"></connect>
<connect nodeField="set_crossSection" protoField="set_crossSection"></connect>
<connect nodeField="set_spine" protoField="set_spine"></connect>
<connect nodeField="set_scale" protoField="set_scale"></connect>
<connect nodeField="set_orientation" protoField="set_orientation"></connect>
<connect nodeField="beginCap" protoField="beginCap"></connect>
<connect nodeField="endCap" protoField="endCap"></connect>
<connect nodeField="ccw" protoField="ccw"></connect>
<connect nodeField="convex" protoField="convex"></connect>
<connect nodeField="creaseAngle" protoField="creaseAngle"></connect>
<connect nodeField="solid" protoField="solid"></connect>
</IS>
</Extrusion>
<Appearance DEF="ExtrusionAppearance"><IS><connect nodeField="texture" protoField="extrusionImageTexture"></connect>
<connect nodeField="textureTransform" protoField="extrusionTextureTransform"></connect>
</IS>
<Material DEF="ExtrusionMaterial"><IS><connect nodeField="diffuseColor" protoField="extrusionColor"></connect>
<connect nodeField="transparency" protoField="extrusionTransparency"></connect>
</IS>
</Material>
</Appearance>
</Shape>
</Group>
<!--TODO hardwired local Script path to workaround BS Contact bug--><Script DEF="CrossSectionScript" url="&quot;ExtrusionCrossSectionPrototype.js&quot; &quot;file:///C:/www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.js&quot; &quot;https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.js&quot;"><field name="name" accessType="initializeOnly" type="SFString"></field>
<field name="crossSection" accessType="initializeOnly" type="MFVec2f"></field>
<field name="spine" accessType="initializeOnly" type="MFVec3f"></field>
<field name="scale" accessType="initializeOnly" type="MFVec2f"></field>
<field name="orientation" accessType="initializeOnly" type="MFRotation"></field>
<field name="spineColor" accessType="inputOutput" type="SFColor"></field>
<field name="crossSectionColor" accessType="inputOutput" type="SFColor"></field>
<field name="crossSectionTransparency" accessType="inputOutput" type="SFFloat"></field>
<field name="extrusionColor" accessType="inputOutput" type="SFColor"></field>
<field name="extrusionTransparency" accessType="inputOutput" type="SFFloat"></field>
<field name="set_crossSection" accessType="inputOnly" type="MFVec2f"></field>
<field name="set_spine" accessType="inputOnly" type="MFVec3f"></field>
<field name="set_scale" accessType="inputOnly" type="MFVec2f"></field>
<field name="set_orientation" accessType="inputOnly" type="MFRotation"></field>
<field name="spineIndex" accessType="outputOnly" type="MFInt32"></field>
<field name="facesIndex" accessType="outputOnly" type="MFInt32"></field>
<field name="facePoints" accessType="outputOnly" type="MFVec3f"></field>
<field name="traceEnabled" accessType="initializeOnly" type="SFBool"></field>
<field name="computedFacesIndex" accessType="initializeOnly" type="MFInt32"></field>
<field name="computedFacePoints" accessType="initializeOnly" type="MFVec3f"></field>
<!--local variables--><IS><connect nodeField="name" protoField="name"></connect>
<connect nodeField="crossSection" protoField="crossSection"></connect>
<connect nodeField="spine" protoField="spine"></connect>
<connect nodeField="scale" protoField="scale"></connect>
<connect nodeField="spineColor" protoField="spineColor"></connect>
<connect nodeField="crossSectionColor" protoField="crossSectionColor"></connect>
<connect nodeField="crossSectionTransparency" protoField="crossSectionTransparency"></connect>
<connect nodeField="extrusionColor" protoField="extrusionColor"></connect>
<connect nodeField="extrusionTransparency" protoField="extrusionTransparency"></connect>
<connect nodeField="orientation" protoField="orientation"></connect>
<connect nodeField="set_crossSection" protoField="set_crossSection"></connect>
<connect nodeField="set_spine" protoField="set_spine"></connect>
<connect nodeField="set_scale" protoField="set_scale"></connect>
<connect nodeField="set_orientation" protoField="set_orientation"></connect>
<connect nodeField="traceEnabled" protoField="traceEnabled"></connect>
</IS>
</Script>
<ROUTE fromField="spineIndex" fromNode="CrossSectionScript" toField="set_coordIndex" toNode="SpineLine"></ROUTE>
<ROUTE fromField="facesIndex" fromNode="CrossSectionScript" toField="set_coordIndex" toNode="CrossSectionFaces"></ROUTE>
<ROUTE fromField="facePoints" fromNode="CrossSectionScript" toField="point" toNode="CrossSectionFacesCoordinates"></ROUTE>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare3.name = "ExtrusionCrossSection";
ProtoDeclare3.appinfo = "Shape prototype for Extrusion node that also draws spine line plus oriented scaled cross sections at each spine point";
ProtoDeclare3.documentation = "https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.x3d";
let ProtoInterface4 = browser.currentScene.createNode("ProtoInterface");
//run-time eventIn Extrusion-modification interfaces for VRML97 compatibility
let field5 = browser.currentScene.createNode("field");
field5.name = "name";
field5.accessType = "initializeOnly";
field5.appinfo = "Extrusion name";
field5.type = "SFString";
ProtoInterface4.field = new MFNode();

ProtoInterface4.field[0] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "crossSection";
field6.accessType = "initializeOnly";
field6.appinfo = "Extrusion field";
field6.type = "MFVec2f";
field6.value = "1 1 1 -1 -1 -1 -1 1 1 1";
ProtoInterface4.field[1] = field6;

let field7 = browser.currentScene.createNode("field");
field7.name = "spine";
field7.accessType = "initializeOnly";
field7.appinfo = "Extrusion field";
field7.type = "MFVec3f";
field7.value = "0 0 0 0 1 0";
ProtoInterface4.field[2] = field7;

let field8 = browser.currentScene.createNode("field");
field8.name = "scale";
field8.accessType = "initializeOnly";
field8.appinfo = "Extrusion field";
field8.type = "MFVec2f";
field8.value = "1 1";
ProtoInterface4.field[3] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "orientation";
field9.accessType = "initializeOnly";
field9.appinfo = "Extrusion field";
field9.type = "MFRotation";
field9.value = "0 0 1 0";
ProtoInterface4.field[4] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "beginCap";
field10.accessType = "initializeOnly";
field10.appinfo = "Extrusion field";
field10.type = "SFBool";
field10.value = "false";
ProtoInterface4.field[5] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "endCap";
field11.accessType = "initializeOnly";
field11.appinfo = "Extrusion field";
field11.type = "SFBool";
field11.value = "false";
ProtoInterface4.field[6] = field11;

let field12 = browser.currentScene.createNode("field");
field12.name = "ccw";
field12.accessType = "initializeOnly";
field12.appinfo = "Extrusion field";
field12.type = "SFBool";
field12.value = "true";
ProtoInterface4.field[7] = field12;

let field13 = browser.currentScene.createNode("field");
field13.name = "convex";
field13.accessType = "initializeOnly";
field13.appinfo = "Extrusion field";
field13.type = "SFBool";
field13.value = "true";
ProtoInterface4.field[8] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "creaseAngle";
field14.accessType = "initializeOnly";
field14.appinfo = "Extrusion field";
field14.type = "SFFloat";
field14.value = "0";
ProtoInterface4.field[9] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "solid";
field15.accessType = "initializeOnly";
field15.appinfo = "Extrusion field";
field15.type = "SFBool";
field15.value = "true";
ProtoInterface4.field[10] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "spineColor";
field16.accessType = "inputOutput";
field16.appinfo = "emissiveColor of spine";
field16.type = "SFColor";
field16.value = "0 0.9 0.8";
ProtoInterface4.field[11] = field16;

let field17 = browser.currentScene.createNode("field");
field17.name = "crossSectionColor";
field17.accessType = "inputOutput";
field17.appinfo = "diffuseColor of crossSection";
field17.type = "SFColor";
field17.value = "0.2 0.8 0.3";
ProtoInterface4.field[12] = field17;

let field18 = browser.currentScene.createNode("field");
field18.name = "crossSectionTransparency";
field18.accessType = "inputOutput";
field18.appinfo = "transparency of crossSection";
field18.type = "SFFloat";
field18.value = "0.2";
ProtoInterface4.field[13] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "extrusionColor";
field19.accessType = "inputOutput";
field19.appinfo = "diffuseColor of extrusion hull";
field19.type = "SFColor";
field19.value = "0.3 0.3 0.3";
ProtoInterface4.field[14] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "extrusionTransparency";
field20.accessType = "inputOutput";
field20.appinfo = "transparency of extrusion hull";
field20.type = "SFFloat";
field20.value = "0.7";
ProtoInterface4.field[15] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "extrusionImageTexture";
field21.accessType = "initializeOnly";
field21.appinfo = "Image to apply to Extrusion";
field21.type = "SFNode";
//initialization node (if any) goes here
ProtoInterface4.field[16] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "extrusionTextureTransform";
field22.accessType = "initializeOnly";
field22.appinfo = "TextureTransform coordinates of image applied to Extrusion";
field22.type = "SFNode";
//initialization node (if any) goes here
ProtoInterface4.field[17] = field22;

let field23 = browser.currentScene.createNode("field");
field23.name = "set_crossSection";
field23.accessType = "inputOnly";
field23.appinfo = "Extrusion field";
field23.type = "MFVec2f";
ProtoInterface4.field[18] = field23;

let field24 = browser.currentScene.createNode("field");
field24.name = "set_spine";
field24.accessType = "inputOnly";
field24.appinfo = "Extrusion field";
field24.type = "MFVec3f";
ProtoInterface4.field[19] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "set_scale";
field25.accessType = "inputOnly";
field25.appinfo = "Extrusion field";
field25.type = "MFVec2f";
ProtoInterface4.field[20] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "set_orientation";
field26.accessType = "inputOnly";
field26.appinfo = "Extrusion field";
field26.type = "MFRotation";
ProtoInterface4.field[21] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "traceEnabled";
field27.accessType = "initializeOnly";
field27.appinfo = "Whether to provide initialization trace statements showing node construction";
field27.type = "SFBool";
field27.value = "false";
ProtoInterface4.field[22] = field27;

ProtoDeclare3.protoInterface = ProtoInterface4;

let ProtoBody28 = browser.currentScene.createNode("ProtoBody");
let Group29 = browser.currentScene.createNode("Group");
let Shape30 = browser.currentScene.createNode("Shape");
Shape30.DEF = "Spine";
let IndexedLineSet31 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet31.DEF = "SpineLine";
IndexedLineSet31.colorPerVertex = False;
let Coordinate32 = browser.currentScene.createNode("Coordinate");
Coordinate32.DEF = "SpineCoordinates";
let IS33 = browser.currentScene.createNode("IS");
let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "point";
connect34.protoField = "spine";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

let connect35 = browser.currentScene.createNode("connect");
connect35.nodeField = "point";
connect35.protoField = "set_spine";
IS33.connect[1] = connect35;

Coordinate32.iS = IS33;

IndexedLineSet31.coord = Coordinate32;

Shape30.geometry = IndexedLineSet31;

let Appearance36 = browser.currentScene.createNode("Appearance");
let Material37 = browser.currentScene.createNode("Material");
Material37.DEF = "SpineMaterial";
let IS38 = browser.currentScene.createNode("IS");
let connect39 = browser.currentScene.createNode("connect");
connect39.nodeField = "emissiveColor";
connect39.protoField = "spineColor";
IS38.connect = new MFNode();

IS38.connect[0] = connect39;

Material37.iS = IS38;

Appearance36.material = Material37;

Shape30.appearance = Appearance36;

Group29.children = new MFNode();

Group29.children[0] = Shape30;

let Shape40 = browser.currentScene.createNode("Shape");
Shape40.DEF = "InternalCrossSections";
//use most conservative polygon settings for reliable rendering: convex='false' solid='false'
let IndexedFaceSet41 = browser.currentScene.createNode("IndexedFaceSet");
IndexedFaceSet41.DEF = "CrossSectionFaces";
IndexedFaceSet41.convex = False;
IndexedFaceSet41.solid = False;
let Coordinate42 = browser.currentScene.createNode("Coordinate");
Coordinate42.DEF = "CrossSectionFacesCoordinates";
IndexedFaceSet41.coord = Coordinate42;

Shape40.geometry = IndexedFaceSet41;

let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.DEF = "CrossSectionMaterial";
let IS45 = browser.currentScene.createNode("IS");
let connect46 = browser.currentScene.createNode("connect");
connect46.nodeField = "diffuseColor";
connect46.protoField = "crossSectionColor";
IS45.connect = new MFNode();

IS45.connect[0] = connect46;

let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "transparency";
connect47.protoField = "crossSectionTransparency";
IS45.connect[1] = connect47;

Material44.iS = IS45;

Appearance43.material = Material44;

Shape40.appearance = Appearance43;

Group29.children[1] = Shape40;

let Shape48 = browser.currentScene.createNode("Shape");
Shape48.DEF = "ExternalExtrusion";
//use most conservative polygon settings: convex='false' solid='false'
let Extrusion49 = browser.currentScene.createNode("Extrusion");
Extrusion49.DEF = "EnclosingExtrusion";
Extrusion49.convex = False;
Extrusion49.solid = False;
let IS50 = browser.currentScene.createNode("IS");
let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "crossSection";
connect51.protoField = "crossSection";
IS50.connect = new MFNode();

IS50.connect[0] = connect51;

let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "spine";
connect52.protoField = "spine";
IS50.connect[1] = connect52;

let connect53 = browser.currentScene.createNode("connect");
connect53.nodeField = "scale";
connect53.protoField = "scale";
IS50.connect[2] = connect53;

let connect54 = browser.currentScene.createNode("connect");
connect54.nodeField = "orientation";
connect54.protoField = "orientation";
IS50.connect[3] = connect54;

let connect55 = browser.currentScene.createNode("connect");
connect55.nodeField = "set_crossSection";
connect55.protoField = "set_crossSection";
IS50.connect[4] = connect55;

let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "set_spine";
connect56.protoField = "set_spine";
IS50.connect[5] = connect56;

let connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "set_scale";
connect57.protoField = "set_scale";
IS50.connect[6] = connect57;

let connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "set_orientation";
connect58.protoField = "set_orientation";
IS50.connect[7] = connect58;

let connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "beginCap";
connect59.protoField = "beginCap";
IS50.connect[8] = connect59;

let connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "endCap";
connect60.protoField = "endCap";
IS50.connect[9] = connect60;

let connect61 = browser.currentScene.createNode("connect");
connect61.nodeField = "ccw";
connect61.protoField = "ccw";
IS50.connect[10] = connect61;

let connect62 = browser.currentScene.createNode("connect");
connect62.nodeField = "convex";
connect62.protoField = "convex";
IS50.connect[11] = connect62;

let connect63 = browser.currentScene.createNode("connect");
connect63.nodeField = "creaseAngle";
connect63.protoField = "creaseAngle";
IS50.connect[12] = connect63;

let connect64 = browser.currentScene.createNode("connect");
connect64.nodeField = "solid";
connect64.protoField = "solid";
IS50.connect[13] = connect64;

Extrusion49.iS = IS50;

Shape48.geometry = Extrusion49;

let Appearance65 = browser.currentScene.createNode("Appearance");
Appearance65.DEF = "ExtrusionAppearance";
let IS66 = browser.currentScene.createNode("IS");
let connect67 = browser.currentScene.createNode("connect");
connect67.nodeField = "texture";
connect67.protoField = "extrusionImageTexture";
IS66.connect = new MFNode();

IS66.connect[0] = connect67;

let connect68 = browser.currentScene.createNode("connect");
connect68.nodeField = "textureTransform";
connect68.protoField = "extrusionTextureTransform";
IS66.connect[1] = connect68;

Appearance65.iS = IS66;

let Material69 = browser.currentScene.createNode("Material");
Material69.DEF = "ExtrusionMaterial";
let IS70 = browser.currentScene.createNode("IS");
let connect71 = browser.currentScene.createNode("connect");
connect71.nodeField = "diffuseColor";
connect71.protoField = "extrusionColor";
IS70.connect = new MFNode();

IS70.connect[0] = connect71;

let connect72 = browser.currentScene.createNode("connect");
connect72.nodeField = "transparency";
connect72.protoField = "extrusionTransparency";
IS70.connect[1] = connect72;

Material69.iS = IS70;

Appearance65.material = Material69;

Shape48.appearance = Appearance65;

Group29.children[2] = Shape48;

ProtoBody28.children = new MFNode();

ProtoBody28.children[0] = Group29;

//TODO hardwired local Script path to workaround BS Contact bug
let Script73 = browser.currentScene.createNode("Script");
Script73.DEF = "CrossSectionScript";
Script73.url = new MFString(new java.lang.String["ExtrusionCrossSectionPrototype.js","file:///C:/www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.js","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.js"]);
let field74 = browser.currentScene.createNode("field");
field74.name = "name";
field74.accessType = "initializeOnly";
field74.type = "SFString";
Script73.field = new MFNode();

Script73.field[0] = field74;

let field75 = browser.currentScene.createNode("field");
field75.name = "crossSection";
field75.accessType = "initializeOnly";
field75.type = "MFVec2f";
Script73.field[1] = field75;

let field76 = browser.currentScene.createNode("field");
field76.name = "spine";
field76.accessType = "initializeOnly";
field76.type = "MFVec3f";
Script73.field[2] = field76;

let field77 = browser.currentScene.createNode("field");
field77.name = "scale";
field77.accessType = "initializeOnly";
field77.type = "MFVec2f";
Script73.field[3] = field77;

let field78 = browser.currentScene.createNode("field");
field78.name = "orientation";
field78.accessType = "initializeOnly";
field78.type = "MFRotation";
Script73.field[4] = field78;

let field79 = browser.currentScene.createNode("field");
field79.name = "spineColor";
field79.accessType = "inputOutput";
field79.type = "SFColor";
Script73.field[5] = field79;

let field80 = browser.currentScene.createNode("field");
field80.name = "crossSectionColor";
field80.accessType = "inputOutput";
field80.type = "SFColor";
Script73.field[6] = field80;

let field81 = browser.currentScene.createNode("field");
field81.name = "crossSectionTransparency";
field81.accessType = "inputOutput";
field81.type = "SFFloat";
Script73.field[7] = field81;

let field82 = browser.currentScene.createNode("field");
field82.name = "extrusionColor";
field82.accessType = "inputOutput";
field82.type = "SFColor";
Script73.field[8] = field82;

let field83 = browser.currentScene.createNode("field");
field83.name = "extrusionTransparency";
field83.accessType = "inputOutput";
field83.type = "SFFloat";
Script73.field[9] = field83;

let field84 = browser.currentScene.createNode("field");
field84.name = "set_crossSection";
field84.accessType = "inputOnly";
field84.type = "MFVec2f";
Script73.field[10] = field84;

let field85 = browser.currentScene.createNode("field");
field85.name = "set_spine";
field85.accessType = "inputOnly";
field85.type = "MFVec3f";
Script73.field[11] = field85;

let field86 = browser.currentScene.createNode("field");
field86.name = "set_scale";
field86.accessType = "inputOnly";
field86.type = "MFVec2f";
Script73.field[12] = field86;

let field87 = browser.currentScene.createNode("field");
field87.name = "set_orientation";
field87.accessType = "inputOnly";
field87.type = "MFRotation";
Script73.field[13] = field87;

let field88 = browser.currentScene.createNode("field");
field88.name = "spineIndex";
field88.accessType = "outputOnly";
field88.type = "MFInt32";
Script73.field[14] = field88;

let field89 = browser.currentScene.createNode("field");
field89.name = "facesIndex";
field89.accessType = "outputOnly";
field89.type = "MFInt32";
Script73.field[15] = field89;

let field90 = browser.currentScene.createNode("field");
field90.name = "facePoints";
field90.accessType = "outputOnly";
field90.type = "MFVec3f";
Script73.field[16] = field90;

let field91 = browser.currentScene.createNode("field");
field91.name = "traceEnabled";
field91.accessType = "initializeOnly";
field91.type = "SFBool";
Script73.field[17] = field91;

let field92 = browser.currentScene.createNode("field");
field92.name = "computedFacesIndex";
field92.accessType = "initializeOnly";
field92.type = "MFInt32";
Script73.field[18] = field92;

let field93 = browser.currentScene.createNode("field");
field93.name = "computedFacePoints";
field93.accessType = "initializeOnly";
field93.type = "MFVec3f";
Script73.field[19] = field93;

//local variables
let IS94 = browser.currentScene.createNode("IS");
let connect95 = browser.currentScene.createNode("connect");
connect95.nodeField = "name";
connect95.protoField = "name";
IS94.connect = new MFNode();

IS94.connect[0] = connect95;

let connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "crossSection";
connect96.protoField = "crossSection";
IS94.connect[1] = connect96;

let connect97 = browser.currentScene.createNode("connect");
connect97.nodeField = "spine";
connect97.protoField = "spine";
IS94.connect[2] = connect97;

let connect98 = browser.currentScene.createNode("connect");
connect98.nodeField = "scale";
connect98.protoField = "scale";
IS94.connect[3] = connect98;

let connect99 = browser.currentScene.createNode("connect");
connect99.nodeField = "spineColor";
connect99.protoField = "spineColor";
IS94.connect[4] = connect99;

let connect100 = browser.currentScene.createNode("connect");
connect100.nodeField = "crossSectionColor";
connect100.protoField = "crossSectionColor";
IS94.connect[5] = connect100;

let connect101 = browser.currentScene.createNode("connect");
connect101.nodeField = "crossSectionTransparency";
connect101.protoField = "crossSectionTransparency";
IS94.connect[6] = connect101;

let connect102 = browser.currentScene.createNode("connect");
connect102.nodeField = "extrusionColor";
connect102.protoField = "extrusionColor";
IS94.connect[7] = connect102;

let connect103 = browser.currentScene.createNode("connect");
connect103.nodeField = "extrusionTransparency";
connect103.protoField = "extrusionTransparency";
IS94.connect[8] = connect103;

let connect104 = browser.currentScene.createNode("connect");
connect104.nodeField = "orientation";
connect104.protoField = "orientation";
IS94.connect[9] = connect104;

let connect105 = browser.currentScene.createNode("connect");
connect105.nodeField = "set_crossSection";
connect105.protoField = "set_crossSection";
IS94.connect[10] = connect105;

let connect106 = browser.currentScene.createNode("connect");
connect106.nodeField = "set_spine";
connect106.protoField = "set_spine";
IS94.connect[11] = connect106;

let connect107 = browser.currentScene.createNode("connect");
connect107.nodeField = "set_scale";
connect107.protoField = "set_scale";
IS94.connect[12] = connect107;

let connect108 = browser.currentScene.createNode("connect");
connect108.nodeField = "set_orientation";
connect108.protoField = "set_orientation";
IS94.connect[13] = connect108;

let connect109 = browser.currentScene.createNode("connect");
connect109.nodeField = "traceEnabled";
connect109.protoField = "traceEnabled";
IS94.connect[14] = connect109;

Script73.iS = IS94;

ProtoBody28.children[1] = Script73;

let ROUTE110 = browser.currentScene.createNode("ROUTE");
ROUTE110.fromField = "spineIndex";
ROUTE110.fromNode = "CrossSectionScript";
ROUTE110.toField = "set_coordIndex";
ROUTE110.toNode = "SpineLine";
ProtoBody28.children[2] = ROUTE110;

let ROUTE111 = browser.currentScene.createNode("ROUTE");
ROUTE111.fromField = "facesIndex";
ROUTE111.fromNode = "CrossSectionScript";
ROUTE111.toField = "set_coordIndex";
ROUTE111.toNode = "CrossSectionFaces";
ProtoBody28.children[3] = ROUTE111;

let ROUTE112 = browser.currentScene.createNode("ROUTE");
ROUTE112.fromField = "facePoints";
ROUTE112.fromNode = "CrossSectionScript";
ROUTE112.toField = "point";
ROUTE112.toNode = "CrossSectionFacesCoordinates";
ProtoBody28.children[4] = ROUTE112;

ProtoDeclare3.protoBody = ProtoBody28;

browser.currentScene.children[1] = ProtoDeclare3;

//====================
//Example instance adapted from Figure15.12Torus.x3d
//https://www.web3d.org/x3d/content/examples/Basic/Vrml2Sourcebook/Chapter15-Extrusion/Figure15.12Torus.x3d
//Redirection text in case a user examines this PROTO file via a 3D browser:
let Group113 = browser.currentScene.createNode("Group");
let Transform114 = browser.currentScene.createNode("Transform");
Transform114.translation = new SFVec3f(new float[0,1.5,0]);
let Shape115 = browser.currentScene.createNode("Shape");
let Appearance116 = browser.currentScene.createNode("Appearance");
let Material117 = browser.currentScene.createNode("Material");
Material117.diffuseColor = new SFColor(new float[0,1,1]);
Material117.emissiveColor = new SFColor(new float[0,1,1]);
Appearance116.material = Material117;

Shape115.appearance = Appearance116;

let Text118 = browser.currentScene.createNode("Text");
Text118.string = new MFString(new java.lang.String["ExtrusionCrossSectionPrototype","is a Prototype definition scene","","Example scenes using this node:"]);
let FontStyle119 = browser.currentScene.createNode("FontStyle");
FontStyle119.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle119.size = 0.9;
Text118.fontStyle = FontStyle119;

Shape115.geometry = Text118;

Transform114.children = new MFNode();

Transform114.children[0] = Shape115;

Group113.children = new MFNode();

Group113.children[0] = Transform114;

let Transform120 = browser.currentScene.createNode("Transform");
Transform120.translation = new SFVec3f(new float[-2.5,-2,0]);
let Anchor121 = browser.currentScene.createNode("Anchor");
Anchor121.description = "Touch text for Torus example";
Anchor121.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor121.url = new MFString(new java.lang.String["ExtrusionCrossSectionExampleTorus.x3d","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionExampleTorus.x3d","ExtrusionCrossSectionExampleTorus.wrl","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionExampleTorus.wrl"]);
let Shape122 = browser.currentScene.createNode("Shape");
let Appearance123 = browser.currentScene.createNode("Appearance");
let Material124 = browser.currentScene.createNode("Material");
Material124.diffuseColor = new SFColor(new float[1,0,1]);
Material124.transparency = 0.2;
Appearance123.material = Material124;

Shape122.appearance = Appearance123;

let Text125 = browser.currentScene.createNode("Text");
Text125.string = new MFString(new java.lang.String["Torus"]);
let FontStyle126 = browser.currentScene.createNode("FontStyle");
FontStyle126.DEF = "FontCenter";
FontStyle126.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle126.size = 1.2;
FontStyle126.style = "BOLD";
Text125.fontStyle = FontStyle126;

Shape122.geometry = Text125;

Anchor121.children = new MFNode();

Anchor121.children[0] = Shape122;

let Shape127 = browser.currentScene.createNode("Shape");
let Box128 = browser.currentScene.createNode("Box");
Box128.size = new SFVec3f(new float[3,1,0.01]);
Shape127.geometry = Box128;

let Appearance129 = browser.currentScene.createNode("Appearance");
Appearance129.DEF = "TransparentAppearance";
let Material130 = browser.currentScene.createNode("Material");
Material130.transparency = 1;
Appearance129.material = Material130;

Shape127.appearance = Appearance129;

Anchor121.children[1] = Shape127;

Transform120.children = new MFNode();

Transform120.children[0] = Anchor121;

Group113.children[1] = Transform120;

let Transform131 = browser.currentScene.createNode("Transform");
Transform131.translation = new SFVec3f(new float[2.5,-2,0]);
let Anchor132 = browser.currentScene.createNode("Anchor");
Anchor132.description = "Touch text for Ship example";
Anchor132.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor132.url = new MFString(new java.lang.String["ExtrusionCrossSectionExampleShip.x3d","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionExampleShip.x3d","ExtrusionCrossSectionExampleShip.wrl","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionExampleShip.wrl"]);
let Shape133 = browser.currentScene.createNode("Shape");
let Appearance134 = browser.currentScene.createNode("Appearance");
let Material135 = browser.currentScene.createNode("Material");
Material135.diffuseColor = new SFColor(new float[0.7,0.7,0.7]);
Material135.transparency = 0.2;
Appearance134.material = Material135;

Shape133.appearance = Appearance134;

let Text136 = browser.currentScene.createNode("Text");
Text136.string = new MFString(new java.lang.String["Ship"]);
let FontStyle137 = browser.currentScene.createNode("FontStyle");
FontStyle137.USE = "FontCenter";
Text136.fontStyle = FontStyle137;

Shape133.geometry = Text136;

Anchor132.children = new MFNode();

Anchor132.children[0] = Shape133;

let Shape138 = browser.currentScene.createNode("Shape");
let Box139 = browser.currentScene.createNode("Box");
Box139.size = new SFVec3f(new float[2,1,0.01]);
Shape138.geometry = Box139;

let Appearance140 = browser.currentScene.createNode("Appearance");
Appearance140.USE = "TransparentAppearance";
Shape138.appearance = Appearance140;

Anchor132.children[1] = Shape138;

Transform131.children = new MFNode();

Transform131.children[0] = Anchor132;

Group113.children[2] = Transform131;

browser.currentScene.children[2] = Group113;

