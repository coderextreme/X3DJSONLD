let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let ViewpointGroup2 = browser.currentScene.createNode("ViewpointGroup");
ViewpointGroup2.description = "Available viewpoints";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ViewpointGroup2;

let WorldInfo3 = browser.currentScene.createNode("WorldInfo");
WorldInfo3.DEF = "WorldInfoDEF";
WorldInfo3.title = "HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)";
browser.currentScene.children[1] = WorldInfo3;

let WorldInfo4 = browser.currentScene.createNode("WorldInfo");
WorldInfo4.USE = "WorldInfoDEF";
browser.currentScene.children[2] = WorldInfo4;

let WorldInfo5 = browser.currentScene.createNode("WorldInfo");
WorldInfo5.USE = "WorldInfoDEF";
browser.currentScene.children[3] = WorldInfo5;

let MetadataString6 = browser.currentScene.createNode("MetadataString");
MetadataString6.name = "test";
MetadataString6.DEF = "scene.addChildMetadata";
MetadataString6.value = new MFString(new java.lang.String["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"]);
browser.currentScene.metadata[4] = MetadataString6;

let LayerSet7 = browser.currentScene.createNode("LayerSet");
LayerSet7.DEF = "scene.addChildLayerSetTest";
browser.currentScene.layerSet[5] = LayerSet7;

let Transform8 = browser.currentScene.createNode("Transform");
Transform8.DEF = "LogoGeometryTransform";
Transform8.translation = new SFVec3f(new float[0,1.5,0]);
Transform8.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform8.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Anchor9 = browser.currentScene.createNode("Anchor");
Anchor9.description = "select for X3D Java SAI Library (X3DJSAIL) description";
Anchor9.url = new MFString(new java.lang.String["../X3DJSAIL.html","http://www.web3d.org/specifications/java/X3DJSAIL.html"]);
Anchor9.bboxCenter = new SFVec3f(new float[0,0,0]);
Anchor9.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape10 = browser.currentScene.createNode("Shape");
Shape10.DEF = "BoxShape";
Shape10.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape10.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance11 = browser.currentScene.createNode("Appearance");
let Material12 = browser.currentScene.createNode("Material");
Material12.DEF = "GreenMaterial";
Material12.diffuseColor = new SFColor(new float[0,1,1]);
Material12.emissiveColor = new SFColor(new float[0.8,0,0]);
Material12.transparency = 0.1;
Appearance11.material = Material12;

let ImageTexture13 = browser.currentScene.createNode("ImageTexture");
ImageTexture13.url = new MFString(new java.lang.String["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","http://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"]);
Appearance11.texture = ImageTexture13;

Shape10.appearance = Appearance11;

let Box14 = browser.currentScene.createNode("Box");
Box14.DEF = "test-NMTOKEN_regex.0123456789";
Box14.CssClass = "untextured";
Box14.size = new SFVec3f(new float[2,2,2]);
Box14.solid = True;
Shape10.geometry = Box14;

Anchor9.children = new MFNode();

Anchor9.children[0] = Shape10;

Transform8.children = new MFNode();

Transform8.children[0] = Anchor9;

browser.currentScene.children[6] = Transform8;

let Shape15 = browser.currentScene.createNode("Shape");
Shape15.DEF = "LineShape";
Shape15.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape15.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance16 = browser.currentScene.createNode("Appearance");
let Material17 = browser.currentScene.createNode("Material");
Material17.emissiveColor = new SFColor(new float[0.6,0.19607843,0.8]);
Appearance16.material = Material17;

Shape15.appearance = Appearance16;

let IndexedLineSet18 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet18.coordIndex = new MFInt32(new int[0,1,2,3,4,0]);
//Coordinate 3-tuple point count: 6
let Coordinate19 = browser.currentScene.createNode("Coordinate");
Coordinate19.point = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
IndexedLineSet18.coord = Coordinate19;

Shape15.geometry = IndexedLineSet18;

browser.currentScene.children[7] = Shape15;

let PositionInterpolator20 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator20.DEF = "BoxPathAnimator";
PositionInterpolator20.key = new MFFloat(new float[0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator20.keyValue = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
browser.currentScene.children[8] = PositionInterpolator20;

let TimeSensor21 = browser.currentScene.createNode("TimeSensor");
TimeSensor21.DEF = "OrbitClock";
TimeSensor21.cycleInterval = 8;
TimeSensor21.loop = True;
browser.currentScene.children[9] = TimeSensor21;

let ROUTE22 = browser.currentScene.createNode("ROUTE");
ROUTE22.fromField = "fraction_changed";
ROUTE22.fromNode = "OrbitClock";
ROUTE22.toField = "set_fraction";
ROUTE22.toNode = "BoxPathAnimator";
browser.currentScene.children[10] = ROUTE22;

let ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromField = "value_changed";
ROUTE23.fromNode = "BoxPathAnimator";
ROUTE23.toField = "set_translation";
ROUTE23.toNode = "LogoGeometryTransform";
browser.currentScene.children[11] = ROUTE23;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.DEF = "TextTransform";
Transform24.translation = new SFVec3f(new float[0,-1.5,0]);
Transform24.bboxCenter = new SFVec3f(new float[0,0,0]);
Transform24.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape25 = browser.currentScene.createNode("Shape");
Shape25.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape25.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance26 = browser.currentScene.createNode("Appearance");
let Material27 = browser.currentScene.createNode("Material");
Material27.USE = "GreenMaterial";
Appearance26.material = Material27;

Shape25.appearance = Appearance26;

let Text28 = browser.currentScene.createNode("Text");
Text28.string = new MFString(new java.lang.String["X3D Java","SAI Library","X3DJSAIL"]);
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
let MetadataSet29 = browser.currentScene.createNode("MetadataSet");
MetadataSet29.name = "EscapedQuotationMarksMetadataSet";
let MetadataString30 = browser.currentScene.createNode("MetadataString");
MetadataString30.name = "quotesTestC";
MetadataString30.value = new MFString(new java.lang.String["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""]);
MetadataSet29.value = new MFNode();

MetadataSet29.value[0] = MetadataString30;

let MetadataString31 = browser.currentScene.createNode("MetadataString");
MetadataString31.name = "extraChildTest";
MetadataString31.value = new MFString(new java.lang.String["checks MetadataSetObject addValue() method"]);
MetadataSet29.value[1] = MetadataString31;

Text28.metadata = MetadataSet29;

let FontStyle32 = browser.currentScene.createNode("FontStyle");
FontStyle32.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text28.fontStyle = FontStyle32;

Shape25.geometry = Text28;

Transform24.children = new MFNode();

Transform24.children[0] = Shape25;

let Collision33 = browser.currentScene.createNode("Collision");
Collision33.enabled = True;
Collision33.bboxCenter = new SFVec3f(new float[0,0,0]);
Collision33.bboxSize = new SFVec3f(new float[-1,-1,-1]);
//test containerField='proxy'
let Shape34 = browser.currentScene.createNode("Shape");
Shape34.DEF = "ProxyShape";
Shape34.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape34.bboxSize = new SFVec3f(new float[-1,-1,-1]);
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
//reference: http://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
let Text35 = browser.currentScene.createNode("Text");
Text35.string = new MFString(new java.lang.String["One, Two, Text","","He said, \"Immel did it!\" \"\""]);
Shape34.geometry = Text35;

Collision33.proxy = Shape34;

Transform24.children[1] = Collision33;

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
browser.currentScene.children[12] = Transform24;

//repeatedly spin 180 degrees as a readable special effect
let OrientationInterpolator36 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator36.DEF = "SpinInterpolator";
OrientationInterpolator36.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator36.keyValue = new MFRotation(new float[0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964]);
browser.currentScene.children[13] = OrientationInterpolator36;

let TimeSensor37 = browser.currentScene.createNode("TimeSensor");
TimeSensor37.DEF = "SpinClock";
TimeSensor37.cycleInterval = 5;
TimeSensor37.loop = True;
browser.currentScene.children[14] = TimeSensor37;

let ROUTE38 = browser.currentScene.createNode("ROUTE");
ROUTE38.fromField = "fraction_changed";
ROUTE38.fromNode = "SpinClock";
ROUTE38.toField = "set_fraction";
ROUTE38.toNode = "SpinInterpolator";
browser.currentScene.children[15] = ROUTE38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromField = "value_changed";
ROUTE39.fromNode = "SpinInterpolator";
ROUTE39.toField = "rotation";
ROUTE39.toNode = "TextTransform";
browser.currentScene.children[16] = ROUTE39;

let Group40 = browser.currentScene.createNode("Group");
Group40.DEF = "BackgroundGroup";
Group40.bboxCenter = new SFVec3f(new float[0,0,0]);
Group40.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Background41 = browser.currentScene.createNode("Background");
Background41.DEF = "GradualBackground";
Background41.skyColor = new MFColor(new float[0,0,0]);
Background41.transparency = 0;
Group40.children = new MFNode();

Group40.children[0] = Background41;

let ColorInterpolator42 = browser.currentScene.createNode("ColorInterpolator");
ColorInterpolator42.DEF = "ColorAnimator";
ColorInterpolator42.key = new MFFloat(new float[0,0.5,1]);
ColorInterpolator42.keyValue = new MFColor(new float[0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1]);
//AZURE to INDIGO and back again
Group40.children[1] = ColorInterpolator42;

let TimeSensor43 = browser.currentScene.createNode("TimeSensor");
TimeSensor43.DEF = "ColorClock";
TimeSensor43.cycleInterval = 60;
TimeSensor43.loop = True;
Group40.children[2] = TimeSensor43;

let ROUTE44 = browser.currentScene.createNode("ROUTE");
ROUTE44.fromField = "colorsOutput";
ROUTE44.fromNode = "colorTypeConversionScript";
ROUTE44.toField = "skyColor";
ROUTE44.toNode = "GradualBackground";
Group40.children[3] = ROUTE44;

let ROUTE45 = browser.currentScene.createNode("ROUTE");
ROUTE45.fromField = "value_changed";
ROUTE45.fromNode = "ColorAnimator";
ROUTE45.toField = "colorInput";
ROUTE45.toNode = "colorTypeConversionScript";
Group40.children[4] = ROUTE45;

let ROUTE46 = browser.currentScene.createNode("ROUTE");
ROUTE46.fromField = "fraction_changed";
ROUTE46.fromNode = "ColorClock";
ROUTE46.toField = "set_fraction";
ROUTE46.toNode = "ColorAnimator";
Group40.children[5] = ROUTE46;

let X3DScript47 = browser.currentScene.createNode("X3DScript");
X3DScript47.DEF = "colorTypeConversionScript";
let field48 = browser.currentScene.createNode("field");
field48.name = "colorInput";
field48.accessType = "inputOnly";
field48.type = "SFColor";
X3DScript47.field = new MFNode();

X3DScript47.field[0] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "colorsOutput";
field49.accessType = "outputOnly";
field49.type = "MFColor";
X3DScript47.field[1] = field49;

Group40.x3DScript[6] = X3DScript47;

browser.currentScene.children[17] = Group40;

let ProtoDeclare50 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco01Material" appinfo="tooltip: ArtDeco01Material prototype is a Material node" ><ProtoInterface><field name="description" accessType="inputOutput" appinfo="tooltip for descriptionField" type="SFString" value="ArtDeco01Material prototype is a Material node"></field>
<field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
</ProtoInterface>
<ProtoBody><!--Initial node of ProtoBody determines prototype node type--><Material ambientIntensity="0.25" diffuseColor="0.282435 0.085159 0.134462" shininess="0.127273" specularColor="0.276305 0.11431 0.139857"></Material>
<!--[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()="Material"--><!--presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types--><TouchSensor description="within ProtoBody"><IS><connect nodeField="description" protoField="description"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
</IS>
</TouchSensor>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare50.name = "ArtDeco01Material";
ProtoDeclare50.appinfo = "tooltip: ArtDeco01Material prototype is a Material node";
let ProtoInterface51 = browser.currentScene.createNode("ProtoInterface");
let field52 = browser.currentScene.createNode("field");
field52.name = "description";
field52.accessType = "inputOutput";
field52.appinfo = "tooltip for descriptionField";
field52.type = "SFString";
field52.value = "ArtDeco01Material prototype is a Material node";
ProtoInterface51.field = new MFNode();

ProtoInterface51.field[0] = field52;

let field53 = browser.currentScene.createNode("field");
field53.name = "enabled";
field53.accessType = "inputOutput";
field53.type = "SFBool";
field53.value = "true";
ProtoInterface51.field[1] = field53;

ProtoDeclare50.protoInterface = ProtoInterface51;

let ProtoBody54 = browser.currentScene.createNode("ProtoBody");
//Initial node of ProtoBody determines prototype node type
let Material55 = browser.currentScene.createNode("Material");
Material55.ambientIntensity = 0.25;
Material55.diffuseColor = new SFColor(new float[0.282435,0.085159,0.134462]);
Material55.shininess = 0.127273;
Material55.specularColor = new SFColor(new float[0.276305,0.11431,0.139857]);
ProtoBody54.children = new MFNode();

ProtoBody54.children[0] = Material55;

//[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
let TouchSensor56 = browser.currentScene.createNode("TouchSensor");
TouchSensor56.description = "within ProtoBody";
let IS57 = browser.currentScene.createNode("IS");
let connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "description";
connect58.protoField = "description";
IS57.connect = new MFNode();

IS57.connect[0] = connect58;

let connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "enabled";
connect59.protoField = "enabled";
IS57.connect[1] = connect59;

TouchSensor56.iS = IS57;

ProtoBody54.children[1] = TouchSensor56;

ProtoDeclare50.protoBody = ProtoBody54;

browser.currentScene.children[18] = ProtoDeclare50;

let ExternProtoDeclare60 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare60.name = "ArtDeco02Material";
ExternProtoDeclare60.appinfo = "this is a different Material node";
ExternProtoDeclare60.url = new MFString(new java.lang.String["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"]);
//[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
let field61 = browser.currentScene.createNode("field");
field61.name = "description";
field61.accessType = "inputOutput";
field61.appinfo = "tooltip for descriptionField";
field61.type = "SFString";
ExternProtoDeclare60.field = new MFNode();

ExternProtoDeclare60.field[0] = field61;

browser.currentScene.children[19] = ExternProtoDeclare60;

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
let Shape62 = browser.currentScene.createNode("Shape");
Shape62.DEF = "TestShape1";
Shape62.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape62.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance63 = browser.currentScene.createNode("Appearance");
Appearance63.DEF = "TestAppearance1";
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
let ProtoInstance64 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance64.name = "ArtDeco01Material";
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
let fieldValue65 = browser.currentScene.createNode("fieldValue");
fieldValue65.name = "description";
fieldValue65.value = "ArtDeco01Material can substitute for a Material node";
ProtoInstance64.fieldValue = new MFNode();

ProtoInstance64.fieldValue[0] = fieldValue65;

Appearance63.shaders = new MFNode();

Appearance63.shaders[0] = ProtoInstance64;

Shape62.appearance = Appearance63;

let Sphere66 = browser.currentScene.createNode("Sphere");
Sphere66.radius = 0.001;
Shape62.geometry = Sphere66;

browser.currentScene.children[20] = Shape62;

let Shape67 = browser.currentScene.createNode("Shape");
Shape67.DEF = "TestShape2";
Shape67.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape67.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance68 = browser.currentScene.createNode("Appearance");
Appearance68.DEF = "TestAppearance2";
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
let ProtoInstance69 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance69.name = "ArtDeco02Material";
ProtoInstance69.DEF = "ArtDeco02MaterialDEF";
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
let fieldValue70 = browser.currentScene.createNode("fieldValue");
fieldValue70.name = "description";
fieldValue70.value = "ArtDeco02Material can substitute for another Material node";
ProtoInstance69.fieldValue = new MFNode();

ProtoInstance69.fieldValue[0] = fieldValue70;

Appearance68.shaders = new MFNode();

Appearance68.shaders[0] = ProtoInstance69;

Shape67.appearance = Appearance68;

let Cone71 = browser.currentScene.createNode("Cone");
Cone71.bottomRadius = 0.001;
Cone71.height = 0.001;
Cone71.side = True;
Cone71.bottom = True;
Cone71.solid = True;
Shape67.geometry = Cone71;

browser.currentScene.children[21] = Shape67;

let Shape72 = browser.currentScene.createNode("Shape");
Shape72.DEF = "TestShape3";
Shape72.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape72.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Appearance73 = browser.currentScene.createNode("Appearance");
Appearance73.DEF = "TestAppearance3";
//ArtDeco02Material ProtoInstance USE goes here...
let ProtoInstance74 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance74.USE = "ArtDeco02MaterialDEF";
Appearance73.shaders = new MFNode();

Appearance73.shaders[0] = ProtoInstance74;

Shape72.appearance = Appearance73;

let Cylinder75 = browser.currentScene.createNode("Cylinder");
Cylinder75.height = 0.001;
Cylinder75.radius = 0.001;
Shape72.geometry = Cylinder75;

browser.currentScene.children[22] = Shape72;

let Inline76 = browser.currentScene.createNode("Inline");
Inline76.DEF = "inlineSceneDef";
Inline76.url = new MFString(new java.lang.String["someOtherScene.x3d"]);
Inline76.bboxCenter = new SFVec3f(new float[0,0,0]);
Inline76.bboxSize = new SFVec3f(new float[-1,-1,-1]);
browser.currentScene.children[23] = Inline76;

let IMPORT77 = browser.currentScene.createNode("IMPORT");
IMPORT77.AS = "WorldInfoDEF2";
IMPORT77.importedDEF = "WorldInfoDEF";
IMPORT77.inlineDEF = "inlineSceneDef";
browser.currentScene.children[24] = IMPORT77;

let EXPORT78 = browser.currentScene.createNode("EXPORT");
EXPORT78.AS = "WorldInfoDEF3";
EXPORT78.localDEF = "WorldInfoDEF";
browser.currentScene.children[25] = EXPORT78;

let ProtoDeclare79 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="MaterialModulator" appinfo="mimic a Material node and modulate fields as an animation effect" documentation="http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html" ><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor" value="0 0 0"></field>
<field name="emissiveColor" accessType="inputOutput" type="SFColor" value="0.05 0.05 0.5"></field>
<field name="specularColor" accessType="inputOutput" type="SFColor" value="0 0 0"></field>
<field name="transparency" accessType="inputOutput" type="SFFloat" value="0"></field>
<field name="shininess" accessType="inputOutput" type="SFFloat" value="0"></field>
<field name="ambientIntensity" accessType="inputOutput" type="SFFloat" value="0"></field>
</ProtoInterface>
<ProtoBody><Material DEF="MaterialNode"><IS><connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
<connect nodeField="emissiveColor" protoField="emissiveColor"></connect>
<connect nodeField="specularColor" protoField="specularColor"></connect>
<connect nodeField="transparency" protoField="transparency"></connect>
<connect nodeField="shininess" protoField="shininess"></connect>
<connect nodeField="ambientIntensity" protoField="ambientIntensity"></connect>
</IS>
</Material>
<!--Only first node (the node type) is renderable, others are along for the ride--><X3DScript DEF="MaterialModulatorScript"><field name="enabled" accessType="inputOutput" type="SFBool"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor"></field>
<field name="newColor" accessType="outputOnly" type="SFColor"></field>
<field name="clockTrigger" accessType="inputOnly" type="SFTime"></field>
<IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
</X3DScript>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare79.name = "MaterialModulator";
ProtoDeclare79.appinfo = "mimic a Material node and modulate fields as an animation effect";
ProtoDeclare79.documentation = "http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html";
let ProtoInterface80 = browser.currentScene.createNode("ProtoInterface");
let field81 = browser.currentScene.createNode("field");
field81.name = "enabled";
field81.accessType = "inputOutput";
field81.type = "SFBool";
field81.value = "true";
ProtoInterface80.field = new MFNode();

ProtoInterface80.field[0] = field81;

let field82 = browser.currentScene.createNode("field");
field82.name = "diffuseColor";
field82.accessType = "inputOutput";
field82.type = "SFColor";
field82.value = "0 0 0";
ProtoInterface80.field[1] = field82;

let field83 = browser.currentScene.createNode("field");
field83.name = "emissiveColor";
field83.accessType = "inputOutput";
field83.type = "SFColor";
field83.value = "0.05 0.05 0.5";
ProtoInterface80.field[2] = field83;

let field84 = browser.currentScene.createNode("field");
field84.name = "specularColor";
field84.accessType = "inputOutput";
field84.type = "SFColor";
field84.value = "0 0 0";
ProtoInterface80.field[3] = field84;

let field85 = browser.currentScene.createNode("field");
field85.name = "transparency";
field85.accessType = "inputOutput";
field85.type = "SFFloat";
field85.value = "0";
ProtoInterface80.field[4] = field85;

let field86 = browser.currentScene.createNode("field");
field86.name = "shininess";
field86.accessType = "inputOutput";
field86.type = "SFFloat";
field86.value = "0";
ProtoInterface80.field[5] = field86;

let field87 = browser.currentScene.createNode("field");
field87.name = "ambientIntensity";
field87.accessType = "inputOutput";
field87.type = "SFFloat";
field87.value = "0";
ProtoInterface80.field[6] = field87;

ProtoDeclare79.protoInterface = ProtoInterface80;

let ProtoBody88 = browser.currentScene.createNode("ProtoBody");
let Material89 = browser.currentScene.createNode("Material");
Material89.DEF = "MaterialNode";
let IS90 = browser.currentScene.createNode("IS");
let connect91 = browser.currentScene.createNode("connect");
connect91.nodeField = "diffuseColor";
connect91.protoField = "diffuseColor";
IS90.connect = new MFNode();

IS90.connect[0] = connect91;

let connect92 = browser.currentScene.createNode("connect");
connect92.nodeField = "emissiveColor";
connect92.protoField = "emissiveColor";
IS90.connect[1] = connect92;

let connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "specularColor";
connect93.protoField = "specularColor";
IS90.connect[2] = connect93;

let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "transparency";
connect94.protoField = "transparency";
IS90.connect[3] = connect94;

let connect95 = browser.currentScene.createNode("connect");
connect95.nodeField = "shininess";
connect95.protoField = "shininess";
IS90.connect[4] = connect95;

let connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "ambientIntensity";
connect96.protoField = "ambientIntensity";
IS90.connect[5] = connect96;

Material89.iS = IS90;

ProtoBody88.children = new MFNode();

ProtoBody88.children[0] = Material89;

//Only first node (the node type) is renderable, others are along for the ride
let X3DScript97 = browser.currentScene.createNode("X3DScript");
X3DScript97.DEF = "MaterialModulatorScript";
let field98 = browser.currentScene.createNode("field");
field98.name = "enabled";
field98.accessType = "inputOutput";
field98.type = "SFBool";
X3DScript97.field = new MFNode();

X3DScript97.field[0] = field98;

let field99 = browser.currentScene.createNode("field");
field99.name = "diffuseColor";
field99.accessType = "inputOutput";
field99.type = "SFColor";
X3DScript97.field[1] = field99;

let field100 = browser.currentScene.createNode("field");
field100.name = "newColor";
field100.accessType = "outputOnly";
field100.type = "SFColor";
X3DScript97.field[2] = field100;

let field101 = browser.currentScene.createNode("field");
field101.name = "clockTrigger";
field101.accessType = "inputOnly";
field101.type = "SFTime";
X3DScript97.field[3] = field101;

let IS102 = browser.currentScene.createNode("IS");
let connect103 = browser.currentScene.createNode("connect");
connect103.nodeField = "enabled";
connect103.protoField = "enabled";
IS102.connect = new MFNode();

IS102.connect[0] = connect103;

let connect104 = browser.currentScene.createNode("connect");
connect104.nodeField = "diffuseColor";
connect104.protoField = "diffuseColor";
IS102.connect[1] = connect104;

X3DScript97.iS = IS102;

ProtoBody88.x3DScript[1] = X3DScript97;

ProtoDeclare79.protoBody = ProtoBody88;

browser.currentScene.children[26] = ProtoDeclare79;

//Test success: declarative statement createDeclarativeShapeTests()
let Group105 = browser.currentScene.createNode("Group");
Group105.DEF = "DeclarativeGroupExample";
Group105.bboxCenter = new SFVec3f(new float[0,0,0]);
Group105.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let Shape106 = browser.currentScene.createNode("Shape");
Shape106.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape106.bboxSize = new SFVec3f(new float[-1,-1,-1]);
let MetadataString107 = browser.currentScene.createNode("MetadataString");
MetadataString107.name = "findThisNameValue";
MetadataString107.DEF = "FindableMetadataStringTest";
MetadataString107.value = new MFString(new java.lang.String["test case"]);
Shape106.metadata = MetadataString107;

let Appearance108 = browser.currentScene.createNode("Appearance");
Appearance108.DEF = "DeclarativeAppearanceExample";
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
let ProtoInstance109 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance109.name = "MaterialModulator";
ProtoInstance109.DEF = "MyMaterialModulator";
Appearance108.shaders = new MFNode();

Appearance108.shaders[0] = ProtoInstance109;

Shape106.appearance = Appearance108;

let Cone110 = browser.currentScene.createNode("Cone");
Cone110.bottom = False;
Cone110.bottomRadius = 0.05;
Cone110.height = 0.1;
Cone110.side = True;
Cone110.solid = True;
Shape106.geometry = Cone110;

Group105.children = new MFNode();

Group105.children[0] = Shape106;

//Test success: declarativeGroup.addChild() singleton pipeline method
browser.currentScene.children[27] = Group105;

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
let Group111 = browser.currentScene.createNode("Group");
Group111.DEF = "TestFieldObjectsGroup";
Group111.bboxCenter = new SFVec3f(new float[0,0,0]);
Group111.bboxSize = new SFVec3f(new float[-1,-1,-1]);
//testFieldObjects() results
//SFBool default=true, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344
browser.currentScene.children[28] = Group111;

let Sound112 = browser.currentScene.createNode("Sound");
Sound112.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let AudioClip113 = browser.currentScene.createNode("AudioClip");
AudioClip113.description = "chimes";
AudioClip113.url = new MFString(new java.lang.String["chimes.wav","http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]);
AudioClip113.loop = False;
AudioClip113.pitch = 1;
AudioClip113.startTime = 0;
AudioClip113.stopTime = 0;
AudioClip113.pauseTime = 0;
AudioClip113.resumeTime = 0;
//Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound112.source = AudioClip113;

browser.currentScene.children[29] = Sound112;

let Sound114 = browser.currentScene.createNode("Sound");
Sound114.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let MovieTexture115 = browser.currentScene.createNode("MovieTexture");
MovieTexture115.description = "mpgsys.mpg from ConformanceNist suite";
MovieTexture115.url = new MFString(new java.lang.String["mpgsys.mpg","http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]);
//Scene example fragment from http://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\"
Sound114.source = MovieTexture115;

browser.currentScene.children[30] = Sound114;

//Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true
//Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
let Shape116 = browser.currentScene.createNode("Shape");
Shape116.DEF = "ExtrusionShape";
Shape116.bboxCenter = new SFVec3f(new float[0,0,0]);
Shape116.bboxSize = new SFVec3f(new float[-1,-1,-1]);
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
let Appearance117 = browser.currentScene.createNode("Appearance");
Appearance117.DEF = "TransparentAppearance";
let Material118 = browser.currentScene.createNode("Material");
Material118.transparency = 1;
Appearance117.material = Material118;

Shape116.appearance = Appearance117;

let Extrusion119 = browser.currentScene.createNode("Extrusion");
Extrusion119.DEF = "ExampleExtrusion";
Shape116.geometry = Extrusion119;

browser.currentScene.children[31] = Shape116;

