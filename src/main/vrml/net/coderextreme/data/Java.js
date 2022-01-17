let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
//comment #1
//comment #2
//comment #3
//comment #4
let component2 = browser.currentScene.createNode("component");
component2.name = "Navigation";
component2.level = 3;
head1.component = new MFNode();

head1.component[0] = component2;

let component3 = browser.currentScene.createNode("component");
component3.name = "Layering";
component3.level = 1;
head1.component[1] = component3;

let unit4 = browser.currentScene.createNode("unit");
unit4.name = "AngleUnitConversion";
unit4.category = "angle";
unit4.conversionFactor = 1;
head1.unit[2] = unit4;

let unit5 = browser.currentScene.createNode("unit");
unit5.name = "LengthUnitConversion";
unit5.category = "length";
unit5.conversionFactor = 1;
head1.unit[3] = unit5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "title";
meta6.content = "Java.x3d";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "description";
meta7.content = "Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "reference";
meta8.content = "https://www.web3d.org/specifications/java/X3DJSAIL.html";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "generator";
meta9.content = "Java.java";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "created";
meta10.content = "6 September 2016";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "modified";
meta11.content = "6 June 2018";
head1.meta[9] = meta11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "generator";
meta12.content = "X3D Java Scene Access Interface Library (X3DJSAIL)";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "generator";
meta13.content = "https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "generator";
meta14.content = "Netbeans http://www.netbeans.org";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "creator";
meta15.content = "Don Brutzman";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "reference";
meta16.content = "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/Java.x3d";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "reference";
meta17.content = "Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "reference";
meta18.content = "Java.txt";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "reference";
meta19.content = "Java.x3dv";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "reference";
meta20.content = "Java.wrl";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "reference";
meta21.content = "Java.html";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "reference";
meta22.content = "X3dValidator https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/Java.x3d";
head1.meta[20] = meta22;

let meta23 = browser.currentScene.createNode("meta");
meta23.name = "identifier";
meta23.content = "https://www.web3d.org/specifications/java/examples/Java.x3d";
head1.meta[21] = meta23;

let meta24 = browser.currentScene.createNode("meta");
meta24.name = "license";
meta24.content = "../license.html";
head1.meta[22] = meta24;

let meta25 = browser.currentScene.createNode("meta");
meta25.name = "info";
meta25.content = "tested sat: name value cannot contain embedded space character";
head1.meta[23] = meta25;

let meta26 = browser.currentScene.createNode("meta");
meta26.name = "translated";
meta26.content = "06 June 2018";
head1.meta[24] = meta26;

let meta27 = browser.currentScene.createNode("meta");
meta27.name = "generator";
meta27.content = "X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html";
head1.meta[25] = meta27;

let meta28 = browser.currentScene.createNode("meta");
meta28.name = "reference";
meta28.content = "X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding";
head1.meta[26] = meta28;

head = head1;

let ViewpointGroup30 = browser.currentScene.createNode("ViewpointGroup");
ViewpointGroup30.description = "Available viewpoints";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ViewpointGroup30;

let WorldInfo31 = browser.currentScene.createNode("WorldInfo");
WorldInfo31.DEF = "WorldInfoDEF";
WorldInfo31.title = "HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)";
browser.currentScene.children[1] = WorldInfo31;

let WorldInfo32 = browser.currentScene.createNode("WorldInfo");
WorldInfo32.USE = "WorldInfoDEF";
browser.currentScene.children[2] = WorldInfo32;

let WorldInfo33 = browser.currentScene.createNode("WorldInfo");
WorldInfo33.USE = "WorldInfoDEF";
browser.currentScene.children[3] = WorldInfo33;

let MetadataString34 = browser.currentScene.createNode("MetadataString");
MetadataString34.name = "test";
MetadataString34.DEF = "scene.addChildMetadata";
MetadataString34.value = new MFString(new java.lang.String["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"]);
browser.currentScene.metadata[4] = MetadataString34;

let LayerSet35 = browser.currentScene.createNode("LayerSet");
LayerSet35.DEF = "scene.addChildLayerSetTest";
browser.currentScene.layerSet[5] = LayerSet35;

let Transform36 = browser.currentScene.createNode("Transform");
Transform36.DEF = "LogoGeometryTransform";
Transform36.translation = new SFVec3f(new float[0,1.5,0]);
let Anchor37 = browser.currentScene.createNode("Anchor");
Anchor37.description = "select for X3D Java SAI Library (X3DJSAIL) description";
Anchor37.url = new MFString(new java.lang.String["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"]);
let Shape38 = browser.currentScene.createNode("Shape");
Shape38.DEF = "BoxShape";
let Appearance39 = browser.currentScene.createNode("Appearance");
let Material40 = browser.currentScene.createNode("Material");
Material40.DEF = "GreenMaterial";
Material40.diffuseColor = new SFColor(new float[0,1,1]);
Material40.emissiveColor = new SFColor(new float[0.8,0,0]);
Material40.transparency = 0.1;
Appearance39.material = Material40;

let ImageTexture41 = browser.currentScene.createNode("ImageTexture");
ImageTexture41.url = new MFString(new java.lang.String["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"]);
Appearance39.texture = ImageTexture41;

Shape38.appearance = Appearance39;

let Box42 = browser.currentScene.createNode("Box");
Box42.DEF = "test-NMTOKEN_regex.0123456789";
Box42.CssClass = "untextured";
Shape38.geometry = Box42;

Anchor37.children = new MFNode();

Anchor37.children[0] = Shape38;

Transform36.children = new MFNode();

Transform36.children[0] = Anchor37;

browser.currentScene.children[6] = Transform36;

let Shape43 = browser.currentScene.createNode("Shape");
Shape43.DEF = "LineShape";
let Appearance44 = browser.currentScene.createNode("Appearance");
let Material45 = browser.currentScene.createNode("Material");
Material45.emissiveColor = new SFColor(new float[0.6,0.19607843,0.8]);
Appearance44.material = Material45;

Shape43.appearance = Appearance44;

let IndexedLineSet46 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet46.coordIndex = new MFInt32(new int[0,1,2,3,4,0]);
//Coordinate 3-tuple point count: 6
let Coordinate47 = browser.currentScene.createNode("Coordinate");
Coordinate47.point = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
IndexedLineSet46.coord = Coordinate47;

Shape43.geometry = IndexedLineSet46;

browser.currentScene.children[7] = Shape43;

let PositionInterpolator48 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator48.DEF = "BoxPathAnimator";
PositionInterpolator48.key = new MFFloat(new float[0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator48.keyValue = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
browser.currentScene.children[8] = PositionInterpolator48;

let TimeSensor49 = browser.currentScene.createNode("TimeSensor");
TimeSensor49.DEF = "OrbitClock";
TimeSensor49.cycleInterval = 8;
TimeSensor49.loop = True;
browser.currentScene.children[9] = TimeSensor49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromField = "fraction_changed";
ROUTE50.fromNode = "OrbitClock";
ROUTE50.toField = "set_fraction";
ROUTE50.toNode = "BoxPathAnimator";
browser.currentScene.children[10] = ROUTE50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromField = "value_changed";
ROUTE51.fromNode = "BoxPathAnimator";
ROUTE51.toField = "set_translation";
ROUTE51.toNode = "LogoGeometryTransform";
browser.currentScene.children[11] = ROUTE51;

let Transform52 = browser.currentScene.createNode("Transform");
Transform52.DEF = "TextTransform";
Transform52.translation = new SFVec3f(new float[0,-1.5,0]);
let Shape53 = browser.currentScene.createNode("Shape");
let Appearance54 = browser.currentScene.createNode("Appearance");
let Material55 = browser.currentScene.createNode("Material");
Material55.USE = "GreenMaterial";
Appearance54.material = Material55;

Shape53.appearance = Appearance54;

let Text56 = browser.currentScene.createNode("Text");
Text56.string = new MFString(new java.lang.String["X3D Java","SAI Library","X3DJSAIL"]);
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
let MetadataSet57 = browser.currentScene.createNode("MetadataSet");
MetadataSet57.name = "EscapedQuotationMarksMetadataSet";
let MetadataString58 = browser.currentScene.createNode("MetadataString");
MetadataString58.name = "quotesTestC";
MetadataString58.value = new MFString(new java.lang.String["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""]);
MetadataSet57.value = new MFNode();

MetadataSet57.value[0] = MetadataString58;

let MetadataString59 = browser.currentScene.createNode("MetadataString");
MetadataString59.name = "extraChildTest";
MetadataString59.value = new MFString(new java.lang.String["checks MetadataSetObject addValue() method"]);
MetadataSet57.value[1] = MetadataString59;

Text56.metadata = MetadataSet57;

let FontStyle60 = browser.currentScene.createNode("FontStyle");
FontStyle60.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text56.fontStyle = FontStyle60;

Shape53.geometry = Text56;

Transform52.children = new MFNode();

Transform52.children[0] = Shape53;

let Collision61 = browser.currentScene.createNode("Collision");
//test containerField='proxy'
let Shape62 = browser.currentScene.createNode("Shape");
Shape62.DEF = "ProxyShape";
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
//reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
let Text63 = browser.currentScene.createNode("Text");
Text63.string = new MFString(new java.lang.String["One, Two, Text","","He said, \"Immel did it!\" \"\""]);
Shape62.geometry = Text63;

Collision61.proxy = Shape62;

Transform52.children[1] = Collision61;

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
browser.currentScene.children[12] = Transform52;

//repeatedly spin 180 degrees as a readable special effect
let OrientationInterpolator64 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator64.DEF = "SpinInterpolator";
OrientationInterpolator64.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator64.keyValue = new MFRotation(new float[0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964]);
browser.currentScene.children[13] = OrientationInterpolator64;

let TimeSensor65 = browser.currentScene.createNode("TimeSensor");
TimeSensor65.DEF = "SpinClock";
TimeSensor65.cycleInterval = 5;
TimeSensor65.loop = True;
browser.currentScene.children[14] = TimeSensor65;

let ROUTE66 = browser.currentScene.createNode("ROUTE");
ROUTE66.fromField = "fraction_changed";
ROUTE66.fromNode = "SpinClock";
ROUTE66.toField = "set_fraction";
ROUTE66.toNode = "SpinInterpolator";
browser.currentScene.children[15] = ROUTE66;

let ROUTE67 = browser.currentScene.createNode("ROUTE");
ROUTE67.fromField = "value_changed";
ROUTE67.fromNode = "SpinInterpolator";
ROUTE67.toField = "rotation";
ROUTE67.toNode = "TextTransform";
browser.currentScene.children[16] = ROUTE67;

let Group68 = browser.currentScene.createNode("Group");
Group68.DEF = "BackgroundGroup";
let Background69 = browser.currentScene.createNode("Background");
Background69.DEF = "GradualBackground";
Group68.children = new MFNode();

Group68.children[0] = Background69;

let Script70 = browser.currentScene.createNode("Script");
Script70.DEF = "colorTypeConversionScript";
let field71 = browser.currentScene.createNode("field");
field71.name = "colorInput";
field71.accessType = "inputOnly";
field71.type = "SFColor";
Script70.field = new MFNode();

Script70.field[0] = field71;

let field72 = browser.currentScene.createNode("field");
field72.name = "colorsOutput";
field72.accessType = "outputOnly";
field72.type = "MFColor";
Script70.field[1] = field72;

let #sourceCode73 = browser.currentScene.createNode("#sourceCode");
Script70.#sourceCode[2] = #sourceCode73;

Group68.children[1] = Script70;

let ColorInterpolator74 = browser.currentScene.createNode("ColorInterpolator");
ColorInterpolator74.DEF = "ColorAnimator";
ColorInterpolator74.key = new MFFloat(new float[0,0.5,1]);
ColorInterpolator74.keyValue = new MFColor(new float[0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1]);
//AZURE to INDIGO and back again
Group68.children[2] = ColorInterpolator74;

let TimeSensor75 = browser.currentScene.createNode("TimeSensor");
TimeSensor75.DEF = "ColorClock";
TimeSensor75.cycleInterval = 60;
TimeSensor75.loop = True;
Group68.children[3] = TimeSensor75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromField = "colorsOutput";
ROUTE76.fromNode = "colorTypeConversionScript";
ROUTE76.toField = "skyColor";
ROUTE76.toNode = "GradualBackground";
Group68.children[4] = ROUTE76;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromField = "value_changed";
ROUTE77.fromNode = "ColorAnimator";
ROUTE77.toField = "colorInput";
ROUTE77.toNode = "colorTypeConversionScript";
Group68.children[5] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromField = "fraction_changed";
ROUTE78.fromNode = "ColorClock";
ROUTE78.toField = "set_fraction";
ROUTE78.toNode = "ColorAnimator";
Group68.children[6] = ROUTE78;

browser.currentScene.children[17] = Group68;

let ProtoDeclare79 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
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
ProtoDeclare79.name = "ArtDeco01Material";
ProtoDeclare79.appinfo = "tooltip: ArtDeco01Material prototype is a Material node";
let ProtoInterface80 = browser.currentScene.createNode("ProtoInterface");
let field81 = browser.currentScene.createNode("field");
field81.name = "description";
field81.accessType = "inputOutput";
field81.appinfo = "tooltip for descriptionField";
field81.type = "SFString";
field81.value = "ArtDeco01Material prototype is a Material node";
ProtoInterface80.field = new MFNode();

ProtoInterface80.field[0] = field81;

let field82 = browser.currentScene.createNode("field");
field82.name = "enabled";
field82.accessType = "inputOutput";
field82.type = "SFBool";
field82.value = "true";
ProtoInterface80.field[1] = field82;

ProtoDeclare79.protoInterface = ProtoInterface80;

let ProtoBody83 = browser.currentScene.createNode("ProtoBody");
//Initial node of ProtoBody determines prototype node type
let Material84 = browser.currentScene.createNode("Material");
Material84.ambientIntensity = 0.25;
Material84.diffuseColor = new SFColor(new float[0.282435,0.085159,0.134462]);
Material84.shininess = 0.127273;
Material84.specularColor = new SFColor(new float[0.276305,0.11431,0.139857]);
ProtoBody83.children = new MFNode();

ProtoBody83.children[0] = Material84;

//[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
let TouchSensor85 = browser.currentScene.createNode("TouchSensor");
TouchSensor85.description = "within ProtoBody";
let IS86 = browser.currentScene.createNode("IS");
let connect87 = browser.currentScene.createNode("connect");
connect87.nodeField = "description";
connect87.protoField = "description";
IS86.connect = new MFNode();

IS86.connect[0] = connect87;

let connect88 = browser.currentScene.createNode("connect");
connect88.nodeField = "enabled";
connect88.protoField = "enabled";
IS86.connect[1] = connect88;

TouchSensor85.iS = IS86;

ProtoBody83.children[1] = TouchSensor85;

ProtoDeclare79.protoBody = ProtoBody83;

browser.currentScene.children[18] = ProtoDeclare79;

let ExternProtoDeclare89 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare89.name = "ArtDeco02Material";
ExternProtoDeclare89.appinfo = "this is a different Material node";
ExternProtoDeclare89.url = new MFString(new java.lang.String["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"]);
//[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
let field90 = browser.currentScene.createNode("field");
field90.name = "description";
field90.accessType = "inputOutput";
field90.appinfo = "tooltip for descriptionField";
field90.type = "SFString";
ExternProtoDeclare89.field = new MFNode();

ExternProtoDeclare89.field[0] = field90;

browser.currentScene.children[19] = ExternProtoDeclare89;

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
let Shape91 = browser.currentScene.createNode("Shape");
Shape91.DEF = "TestShape1";
let Appearance92 = browser.currentScene.createNode("Appearance");
Appearance92.DEF = "TestAppearance1";
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
let ProtoInstance93 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance93.name = "ArtDeco01Material";
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
let fieldValue94 = browser.currentScene.createNode("fieldValue");
fieldValue94.name = "description";
fieldValue94.value = "ArtDeco01Material can substitute for a Material node";
ProtoInstance93.fieldValue = new MFNode();

ProtoInstance93.fieldValue[0] = fieldValue94;

Appearance92.shaders = new MFNode();

Appearance92.shaders[0] = ProtoInstance93;

Shape91.appearance = Appearance92;

let Sphere95 = browser.currentScene.createNode("Sphere");
Sphere95.radius = 0.001;
Shape91.geometry = Sphere95;

browser.currentScene.children[20] = Shape91;

let Shape96 = browser.currentScene.createNode("Shape");
Shape96.DEF = "TestShape2";
let Appearance97 = browser.currentScene.createNode("Appearance");
Appearance97.DEF = "TestAppearance2";
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
let ProtoInstance98 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance98.name = "ArtDeco02Material";
ProtoInstance98.DEF = "ArtDeco02MaterialDEF";
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
let fieldValue99 = browser.currentScene.createNode("fieldValue");
fieldValue99.name = "description";
fieldValue99.value = "ArtDeco02Material can substitute for another Material node";
ProtoInstance98.fieldValue = new MFNode();

ProtoInstance98.fieldValue[0] = fieldValue99;

Appearance97.shaders = new MFNode();

Appearance97.shaders[0] = ProtoInstance98;

Shape96.appearance = Appearance97;

let Cone100 = browser.currentScene.createNode("Cone");
Cone100.bottomRadius = 0.001;
Cone100.height = 0.001;
Shape96.geometry = Cone100;

browser.currentScene.children[21] = Shape96;

let Shape101 = browser.currentScene.createNode("Shape");
Shape101.DEF = "TestShape3";
let Appearance102 = browser.currentScene.createNode("Appearance");
Appearance102.DEF = "TestAppearance3";
//ArtDeco02Material ProtoInstance USE goes here...
let ProtoInstance103 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance103.USE = "ArtDeco02MaterialDEF";
Appearance102.shaders = new MFNode();

Appearance102.shaders[0] = ProtoInstance103;

Shape101.appearance = Appearance102;

let Cylinder104 = browser.currentScene.createNode("Cylinder");
Cylinder104.height = 0.001;
Cylinder104.radius = 0.001;
Shape101.geometry = Cylinder104;

browser.currentScene.children[22] = Shape101;

let Inline105 = browser.currentScene.createNode("Inline");
Inline105.DEF = "inlineSceneDef";
Inline105.url = new MFString(new java.lang.String["someOtherScene.x3d"]);
browser.currentScene.children[23] = Inline105;

let IMPORT106 = browser.currentScene.createNode("IMPORT");
IMPORT106.AS = "WorldInfoDEF2";
IMPORT106.importedDEF = "WorldInfoDEF";
IMPORT106.inlineDEF = "inlineSceneDef";
browser.currentScene.children[24] = IMPORT106;

let EXPORT107 = browser.currentScene.createNode("EXPORT");
EXPORT107.AS = "WorldInfoDEF3";
EXPORT107.localDEF = "WorldInfoDEF";
browser.currentScene.children[25] = EXPORT107;

let ProtoDeclare108 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
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
<!--Only first node (the node type) is renderable, others are along for the ride--><Script DEF="MaterialModulatorScript"><field name="enabled" accessType="inputOutput" type="SFBool"></field>
<field name="diffuseColor" accessType="inputOutput" type="SFColor"></field>
<field name="newColor" accessType="outputOnly" type="SFColor"></field>
<field name="clockTrigger" accessType="inputOnly" type="SFTime"></field>
<IS><connect nodeField="enabled" protoField="enabled"></connect>
<connect nodeField="diffuseColor" protoField="diffuseColor"></connect>
</IS>
<#sourceCode/>
</Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare108.name = "MaterialModulator";
ProtoDeclare108.appinfo = "mimic a Material node and modulate fields as an animation effect";
ProtoDeclare108.documentation = "http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html";
let ProtoInterface109 = browser.currentScene.createNode("ProtoInterface");
let field110 = browser.currentScene.createNode("field");
field110.name = "enabled";
field110.accessType = "inputOutput";
field110.type = "SFBool";
field110.value = "true";
ProtoInterface109.field = new MFNode();

ProtoInterface109.field[0] = field110;

let field111 = browser.currentScene.createNode("field");
field111.name = "diffuseColor";
field111.accessType = "inputOutput";
field111.type = "SFColor";
field111.value = "0 0 0";
ProtoInterface109.field[1] = field111;

let field112 = browser.currentScene.createNode("field");
field112.name = "emissiveColor";
field112.accessType = "inputOutput";
field112.type = "SFColor";
field112.value = "0.05 0.05 0.5";
ProtoInterface109.field[2] = field112;

let field113 = browser.currentScene.createNode("field");
field113.name = "specularColor";
field113.accessType = "inputOutput";
field113.type = "SFColor";
field113.value = "0 0 0";
ProtoInterface109.field[3] = field113;

let field114 = browser.currentScene.createNode("field");
field114.name = "transparency";
field114.accessType = "inputOutput";
field114.type = "SFFloat";
field114.value = "0";
ProtoInterface109.field[4] = field114;

let field115 = browser.currentScene.createNode("field");
field115.name = "shininess";
field115.accessType = "inputOutput";
field115.type = "SFFloat";
field115.value = "0";
ProtoInterface109.field[5] = field115;

let field116 = browser.currentScene.createNode("field");
field116.name = "ambientIntensity";
field116.accessType = "inputOutput";
field116.type = "SFFloat";
field116.value = "0";
ProtoInterface109.field[6] = field116;

ProtoDeclare108.protoInterface = ProtoInterface109;

let ProtoBody117 = browser.currentScene.createNode("ProtoBody");
let Material118 = browser.currentScene.createNode("Material");
Material118.DEF = "MaterialNode";
let IS119 = browser.currentScene.createNode("IS");
let connect120 = browser.currentScene.createNode("connect");
connect120.nodeField = "diffuseColor";
connect120.protoField = "diffuseColor";
IS119.connect = new MFNode();

IS119.connect[0] = connect120;

let connect121 = browser.currentScene.createNode("connect");
connect121.nodeField = "emissiveColor";
connect121.protoField = "emissiveColor";
IS119.connect[1] = connect121;

let connect122 = browser.currentScene.createNode("connect");
connect122.nodeField = "specularColor";
connect122.protoField = "specularColor";
IS119.connect[2] = connect122;

let connect123 = browser.currentScene.createNode("connect");
connect123.nodeField = "transparency";
connect123.protoField = "transparency";
IS119.connect[3] = connect123;

let connect124 = browser.currentScene.createNode("connect");
connect124.nodeField = "shininess";
connect124.protoField = "shininess";
IS119.connect[4] = connect124;

let connect125 = browser.currentScene.createNode("connect");
connect125.nodeField = "ambientIntensity";
connect125.protoField = "ambientIntensity";
IS119.connect[5] = connect125;

Material118.iS = IS119;

ProtoBody117.children = new MFNode();

ProtoBody117.children[0] = Material118;

//Only first node (the node type) is renderable, others are along for the ride
let Script126 = browser.currentScene.createNode("Script");
Script126.DEF = "MaterialModulatorScript";
let field127 = browser.currentScene.createNode("field");
field127.name = "enabled";
field127.accessType = "inputOutput";
field127.type = "SFBool";
Script126.field = new MFNode();

Script126.field[0] = field127;

let field128 = browser.currentScene.createNode("field");
field128.name = "diffuseColor";
field128.accessType = "inputOutput";
field128.type = "SFColor";
Script126.field[1] = field128;

let field129 = browser.currentScene.createNode("field");
field129.name = "newColor";
field129.accessType = "outputOnly";
field129.type = "SFColor";
Script126.field[2] = field129;

let field130 = browser.currentScene.createNode("field");
field130.name = "clockTrigger";
field130.accessType = "inputOnly";
field130.type = "SFTime";
Script126.field[3] = field130;

let IS131 = browser.currentScene.createNode("IS");
let connect132 = browser.currentScene.createNode("connect");
connect132.nodeField = "enabled";
connect132.protoField = "enabled";
IS131.connect = new MFNode();

IS131.connect[0] = connect132;

let connect133 = browser.currentScene.createNode("connect");
connect133.nodeField = "diffuseColor";
connect133.protoField = "diffuseColor";
IS131.connect[1] = connect133;

Script126.iS = IS131;

let #sourceCode134 = browser.currentScene.createNode("#sourceCode");
Script126.#sourceCode[4] = #sourceCode134;

ProtoBody117.children[1] = Script126;

ProtoDeclare108.protoBody = ProtoBody117;

browser.currentScene.children[26] = ProtoDeclare108;

//Test success: declarative statement createDeclarativeShapeTests()
let Group135 = browser.currentScene.createNode("Group");
Group135.DEF = "DeclarativeGroupExample";
let Shape136 = browser.currentScene.createNode("Shape");
let MetadataString137 = browser.currentScene.createNode("MetadataString");
MetadataString137.name = "findThisNameValue";
MetadataString137.DEF = "FindableMetadataStringTest";
MetadataString137.value = new MFString(new java.lang.String["test case"]);
Shape136.metadata = MetadataString137;

let Appearance138 = browser.currentScene.createNode("Appearance");
Appearance138.DEF = "DeclarativeAppearanceExample";
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
let ProtoInstance139 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance139.name = "MaterialModulator";
ProtoInstance139.DEF = "MyMaterialModulator";
Appearance138.shaders = new MFNode();

Appearance138.shaders[0] = ProtoInstance139;

Shape136.appearance = Appearance138;

let Cone140 = browser.currentScene.createNode("Cone");
Cone140.bottom = False;
Cone140.bottomRadius = 0.05;
Cone140.height = 0.1;
Shape136.geometry = Cone140;

Group135.children = new MFNode();

Group135.children[0] = Shape136;

//Test success: declarativeGroup.addChild() singleton pipeline method
browser.currentScene.children[27] = Group135;

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
let Group141 = browser.currentScene.createNode("Group");
Group141.DEF = "TestFieldObjectsGroup";
//testFieldObjects() results
//SFBool default=true, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344
browser.currentScene.children[28] = Group141;

let Sound142 = browser.currentScene.createNode("Sound");
Sound142.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let AudioClip143 = browser.currentScene.createNode("AudioClip");
AudioClip143.description = "chimes";
AudioClip143.url = new MFString(new java.lang.String["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound142.source = AudioClip143;

browser.currentScene.children[29] = Sound142;

let Sound144 = browser.currentScene.createNode("Sound");
Sound144.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let MovieTexture145 = browser.currentScene.createNode("MovieTexture");
MovieTexture145.description = "mpgsys.mpg from ConformanceNist suite";
MovieTexture145.url = new MFString(new java.lang.String["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\"
Sound144.source = MovieTexture145;

browser.currentScene.children[30] = Sound144;

//Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true
//Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
let Shape146 = browser.currentScene.createNode("Shape");
Shape146.DEF = "ExtrusionShape";
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
let Appearance147 = browser.currentScene.createNode("Appearance");
Appearance147.DEF = "TransparentAppearance";
let Material148 = browser.currentScene.createNode("Material");
Material148.transparency = 1;
Appearance147.material = Material148;

Shape146.appearance = Appearance147;

let Extrusion149 = browser.currentScene.createNode("Extrusion");
Extrusion149.DEF = "ExampleExtrusion";
Shape146.geometry = Extrusion149;

browser.currentScene.children[31] = Shape146;

