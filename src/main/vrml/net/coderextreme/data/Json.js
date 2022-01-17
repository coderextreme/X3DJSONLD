let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
//x3dVersionComparisonTest for this model: supportsX3dVersion(X3D.VERSION_3_0)=true
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
component3.name = "Shaders";
component3.level = 1;
head1.component[1] = component3;

let component4 = browser.currentScene.createNode("component");
component4.name = "CADGeometry";
component4.level = 2;
head1.component[2] = component4;

let component5 = browser.currentScene.createNode("component");
component5.name = "DIS";
component5.level = 2;
head1.component[3] = component5;

let component6 = browser.currentScene.createNode("component");
component6.name = "H-Anim";
component6.level = 1;
head1.component[4] = component6;

let component7 = browser.currentScene.createNode("component");
component7.name = "Grouping";
component7.level = 1;
head1.component[5] = component7;

let component8 = browser.currentScene.createNode("component");
component8.name = "Layering";
component8.level = 1;
head1.component[6] = component8;

let unit9 = browser.currentScene.createNode("unit");
unit9.name = "AngleUnitConversion";
unit9.category = "angle";
unit9.conversionFactor = 1;
head1.unit[7] = unit9;

let unit10 = browser.currentScene.createNode("unit");
unit10.name = "LengthUnitConversion";
unit10.category = "length";
unit10.conversionFactor = 1;
head1.unit[8] = unit10;

let unit11 = browser.currentScene.createNode("unit");
unit11.name = "ForceFromPoundsToNewtons";
unit11.category = "force";
unit11.conversionFactor = 4.4482;
head1.unit[9] = unit11;

let meta12 = browser.currentScene.createNode("meta");
meta12.name = "title";
meta12.content = "Json.x3d";
head1.meta[10] = meta12;

let meta13 = browser.currentScene.createNode("meta");
meta13.name = "info";
meta13.content = "continued development and testing in progress";
head1.meta[11] = meta13;

let meta14 = browser.currentScene.createNode("meta");
meta14.name = "description";
meta14.content = "Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)";
head1.meta[12] = meta14;

let meta15 = browser.currentScene.createNode("meta");
meta15.name = "reference";
meta15.content = "https://www.web3d.org/specifications/java/X3DJSAIL.html";
head1.meta[13] = meta15;

let meta16 = browser.currentScene.createNode("meta");
meta16.name = "generator";
meta16.content = "HelloWorldProgramOutput.java";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "created";
meta17.content = "6 September 2016";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "modified";
meta18.content = "25 May 2020";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "generator";
meta19.content = "X3D Java Scene Access Interface Library (X3DJSAIL)";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "generator";
meta20.content = "https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "generator";
meta21.content = "Netbeans http://www.netbeans.org";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "creator";
meta22.content = "Don Brutzman";
head1.meta[20] = meta22;

let meta23 = browser.currentScene.createNode("meta");
meta23.name = "reference";
meta23.content = "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d";
head1.meta[21] = meta23;

let meta24 = browser.currentScene.createNode("meta");
meta24.name = "reference";
meta24.content = "Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:";
head1.meta[22] = meta24;

let meta25 = browser.currentScene.createNode("meta");
meta25.name = "reference";
meta25.content = "HelloWorldProgramOutput.txt";
head1.meta[23] = meta25;

let meta26 = browser.currentScene.createNode("meta");
meta26.name = "reference";
meta26.content = "HelloWorldProgramOutput.x3dv";
head1.meta[24] = meta26;

let meta27 = browser.currentScene.createNode("meta");
meta27.name = "reference";
meta27.content = "HelloWorldProgramOutput.wrl";
head1.meta[25] = meta27;

let meta28 = browser.currentScene.createNode("meta");
meta28.name = "reference";
meta28.content = "HelloWorldProgramOutput.html";
head1.meta[26] = meta28;

let meta29 = browser.currentScene.createNode("meta");
meta29.name = "reference";
meta29.content = "https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d";
head1.meta[27] = meta29;

let meta30 = browser.currentScene.createNode("meta");
meta30.name = "identifier";
meta30.content = "https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d";
head1.meta[28] = meta30;

let meta31 = browser.currentScene.createNode("meta");
meta31.name = "license";
meta31.content = "../license.html";
head1.meta[29] = meta31;

let meta32 = browser.currentScene.createNode("meta");
meta32.name = "translated";
meta32.content = "25 May 2020";
head1.meta[30] = meta32;

let meta33 = browser.currentScene.createNode("meta");
meta33.name = "generator";
meta33.content = "X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html";
head1.meta[31] = meta33;

let meta34 = browser.currentScene.createNode("meta");
meta34.name = "reference";
meta34.content = "X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding";
head1.meta[32] = meta34;

head = head1;

let ViewpointGroup36 = browser.currentScene.createNode("ViewpointGroup");
ViewpointGroup36.description = "Available viewpoints";
let Viewpoint37 = browser.currentScene.createNode("Viewpoint");
Viewpoint37.DEF = "DefaultView";
Viewpoint37.description = "Hello X3DJSAIL";
ViewpointGroup36.children = new MFNode();

ViewpointGroup36.children[0] = Viewpoint37;

let Viewpoint38 = browser.currentScene.createNode("Viewpoint");
Viewpoint38.DEF = "TopDownView";
Viewpoint38.description = "top-down view from above";
Viewpoint38.orientation = new SFRotation(new float[1,0,0,-1.570796]);
Viewpoint38.position = new SFVec3f(new float[0,100,0]);
ViewpointGroup36.children[1] = Viewpoint38;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ViewpointGroup36;

let NavigationInfo39 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo39.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
browser.currentScene.children[1] = NavigationInfo39;

let WorldInfo40 = browser.currentScene.createNode("WorldInfo");
WorldInfo40.DEF = "WorldInfoDEF";
WorldInfo40.title = "HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)";
browser.currentScene.children[2] = WorldInfo40;

let WorldInfo41 = browser.currentScene.createNode("WorldInfo");
WorldInfo41.USE = "WorldInfoDEF";
browser.currentScene.children[3] = WorldInfo41;

let WorldInfo42 = browser.currentScene.createNode("WorldInfo");
WorldInfo42.USE = "WorldInfoDEF";
browser.currentScene.children[4] = WorldInfo42;

let MetadataString43 = browser.currentScene.createNode("MetadataString");
MetadataString43.name = "test";
MetadataString43.DEF = "scene.addChildMetadata";
MetadataString43.value = new MFString(new java.lang.String["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"]);
browser.currentScene.metadata[5] = MetadataString43;

let LayerSet44 = browser.currentScene.createNode("LayerSet");
LayerSet44.DEF = "scene.addChildLayerSetTest";
browser.currentScene.layerSet[6] = LayerSet44;

let Transform45 = browser.currentScene.createNode("Transform");
Transform45.DEF = "LogoGeometryTransform";
Transform45.translation = new SFVec3f(new float[0,1.5,0]);
let Anchor46 = browser.currentScene.createNode("Anchor");
Anchor46.description = "select for X3D Java SAI Library (X3DJSAIL) description";
Anchor46.url = new MFString(new java.lang.String["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"]);
let Shape47 = browser.currentScene.createNode("Shape");
Shape47.DEF = "BoxShape";
let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.DEF = "GreenMaterial";
Material49.diffuseColor = new SFColor(new float[0,1,1]);
Material49.emissiveColor = new SFColor(new float[0.8,0,0]);
Material49.transparency = 0.1;
Appearance48.material = Material49;

let ImageTexture50 = browser.currentScene.createNode("ImageTexture");
ImageTexture50.url = new MFString(new java.lang.String["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"]);
Appearance48.texture = ImageTexture50;

Shape47.appearance = Appearance48;

let Box51 = browser.currentScene.createNode("Box");
Box51.DEF = "test-NMTOKEN_regex.0123456789";
Box51.CssClass = "untextured";
Shape47.geometry = Box51;

Anchor46.children = new MFNode();

Anchor46.children[0] = Shape47;

Transform45.children = new MFNode();

Transform45.children[0] = Anchor46;

browser.currentScene.children[7] = Transform45;

let Shape52 = browser.currentScene.createNode("Shape");
Shape52.DEF = "LineShape";
let Appearance53 = browser.currentScene.createNode("Appearance");
let Material54 = browser.currentScene.createNode("Material");
Material54.emissiveColor = new SFColor(new float[0.6,0.19607843,0.8]);
Appearance53.material = Material54;

Shape52.appearance = Appearance53;

let IndexedLineSet55 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet55.coordIndex = new MFInt32(new int[0,1,2,3,4,0]);
//Coordinate 3-tuple point count: 6
let Coordinate56 = browser.currentScene.createNode("Coordinate");
Coordinate56.point = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
IndexedLineSet55.coord = Coordinate56;

Shape52.geometry = IndexedLineSet55;

browser.currentScene.children[8] = Shape52;

let PositionInterpolator57 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator57.DEF = "BoxPathAnimator";
PositionInterpolator57.key = new MFFloat(new float[0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator57.keyValue = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
browser.currentScene.children[9] = PositionInterpolator57;

let TimeSensor58 = browser.currentScene.createNode("TimeSensor");
TimeSensor58.DEF = "OrbitClock";
TimeSensor58.cycleInterval = 8;
TimeSensor58.loop = True;
browser.currentScene.children[10] = TimeSensor58;

let ROUTE59 = browser.currentScene.createNode("ROUTE");
ROUTE59.fromField = "fraction_changed";
ROUTE59.fromNode = "OrbitClock";
ROUTE59.toField = "set_fraction";
ROUTE59.toNode = "BoxPathAnimator";
browser.currentScene.children[11] = ROUTE59;

let ROUTE60 = browser.currentScene.createNode("ROUTE");
ROUTE60.fromField = "value_changed";
ROUTE60.fromNode = "BoxPathAnimator";
ROUTE60.toField = "set_translation";
ROUTE60.toNode = "LogoGeometryTransform";
browser.currentScene.children[12] = ROUTE60;

let Transform61 = browser.currentScene.createNode("Transform");
Transform61.DEF = "TextTransform";
Transform61.translation = new SFVec3f(new float[0,-1.5,0]);
let Shape62 = browser.currentScene.createNode("Shape");
let Appearance63 = browser.currentScene.createNode("Appearance");
let Material64 = browser.currentScene.createNode("Material");
Material64.USE = "GreenMaterial";
Appearance63.material = Material64;

Shape62.appearance = Appearance63;

let Text65 = browser.currentScene.createNode("Text");
Text65.string = new MFString(new java.lang.String["X3D Java","SAI Library","X3DJSAIL"]);
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
let MetadataSet66 = browser.currentScene.createNode("MetadataSet");
MetadataSet66.name = "EscapedQuotationMarksMetadataSet";
let MetadataString67 = browser.currentScene.createNode("MetadataString");
MetadataString67.name = "quotesTestC";
MetadataString67.value = new MFString(new java.lang.String["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""]);
MetadataSet66.value = new MFNode();

MetadataSet66.value[0] = MetadataString67;

let MetadataString68 = browser.currentScene.createNode("MetadataString");
MetadataString68.name = "extraChildTest";
MetadataString68.value = new MFString(new java.lang.String["checks MetadataSetObject addValue() method"]);
MetadataSet66.value[1] = MetadataString68;

Text65.metadata = MetadataSet66;

let FontStyle69 = browser.currentScene.createNode("FontStyle");
FontStyle69.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text65.fontStyle = FontStyle69;

Shape62.geometry = Text65;

Transform61.children = new MFNode();

Transform61.children[0] = Shape62;

let Collision70 = browser.currentScene.createNode("Collision");
//test containerField='proxy'
let Shape71 = browser.currentScene.createNode("Shape");
Shape71.DEF = "ProxyShape";
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
//reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
let Text72 = browser.currentScene.createNode("Text");
Text72.string = new MFString(new java.lang.String["One, Two, Text","","He said, \"Immel did it!\" \"\""]);
Shape71.geometry = Text72;

Collision70.proxy = Shape71;

Transform61.children[1] = Collision70;

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
browser.currentScene.children[13] = Transform61;

//repeatedly spin 180 degrees as a readable special effect
let OrientationInterpolator73 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator73.DEF = "SpinInterpolator";
OrientationInterpolator73.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator73.keyValue = new MFRotation(new float[0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964]);
browser.currentScene.children[14] = OrientationInterpolator73;

let TimeSensor74 = browser.currentScene.createNode("TimeSensor");
TimeSensor74.DEF = "SpinClock";
TimeSensor74.cycleInterval = 5;
TimeSensor74.loop = True;
browser.currentScene.children[15] = TimeSensor74;

let ROUTE75 = browser.currentScene.createNode("ROUTE");
ROUTE75.fromField = "fraction_changed";
ROUTE75.fromNode = "SpinClock";
ROUTE75.toField = "set_fraction";
ROUTE75.toNode = "SpinInterpolator";
browser.currentScene.children[16] = ROUTE75;

let ROUTE76 = browser.currentScene.createNode("ROUTE");
ROUTE76.fromField = "value_changed";
ROUTE76.fromNode = "SpinInterpolator";
ROUTE76.toField = "rotation";
ROUTE76.toNode = "TextTransform";
browser.currentScene.children[17] = ROUTE76;

let Group77 = browser.currentScene.createNode("Group");
Group77.DEF = "BackgroundGroup";
let Background78 = browser.currentScene.createNode("Background");
Background78.DEF = "GradualBackground";
Group77.children = new MFNode();

Group77.children[0] = Background78;

let Script79 = browser.currentScene.createNode("Script");
Script79.DEF = "colorTypeConversionScript";
let field80 = browser.currentScene.createNode("field");
field80.name = "colorInput";
field80.accessType = "inputOnly";
field80.type = "SFColor";
Script79.field = new MFNode();

Script79.field[0] = field80;

let field81 = browser.currentScene.createNode("field");
field81.name = "colorsOutput";
field81.accessType = "outputOnly";
field81.type = "MFColor";
Script79.field[1] = field81;

let #sourceCode82 = browser.currentScene.createNode("#sourceCode");
Script79.#sourceCode[2] = #sourceCode82;

Group77.children[1] = Script79;

let ColorInterpolator83 = browser.currentScene.createNode("ColorInterpolator");
ColorInterpolator83.DEF = "ColorAnimator";
ColorInterpolator83.key = new MFFloat(new float[0,0.5,1]);
ColorInterpolator83.keyValue = new MFColor(new float[0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1]);
//AZURE to INDIGO and back again
Group77.children[2] = ColorInterpolator83;

let TimeSensor84 = browser.currentScene.createNode("TimeSensor");
TimeSensor84.DEF = "ColorClock";
TimeSensor84.cycleInterval = 60;
TimeSensor84.loop = True;
Group77.children[3] = TimeSensor84;

let ROUTE85 = browser.currentScene.createNode("ROUTE");
ROUTE85.fromField = "colorsOutput";
ROUTE85.fromNode = "colorTypeConversionScript";
ROUTE85.toField = "skyColor";
ROUTE85.toNode = "GradualBackground";
Group77.children[4] = ROUTE85;

let ROUTE86 = browser.currentScene.createNode("ROUTE");
ROUTE86.fromField = "value_changed";
ROUTE86.fromNode = "ColorAnimator";
ROUTE86.toField = "colorInput";
ROUTE86.toNode = "colorTypeConversionScript";
Group77.children[5] = ROUTE86;

let ROUTE87 = browser.currentScene.createNode("ROUTE");
ROUTE87.fromField = "fraction_changed";
ROUTE87.fromNode = "ColorClock";
ROUTE87.toField = "set_fraction";
ROUTE87.toNode = "ColorAnimator";
Group77.children[6] = ROUTE87;

browser.currentScene.children[18] = Group77;

let ProtoDeclare88 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco01Material" appinfo="tooltip: ArtDeco01Material prototype is a Material node" ><ProtoInterface><field name="description" accessType="inputOutput" appinfo="tooltip for descriptionField" type="SFString" value="ArtDeco01Material prototype is a Material node"></field>
<field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
</ProtoInterface>
<ProtoBody><!--Initial node of ProtoBody determines prototype node type--><Material ambientIntensity="0.25" diffuseColor="0.282435 0.085159 0.134462" shininess="0.127273" specularColor="0.276305 0.11431 0.139857"></Material>
<!--[HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()="Material"--><!--presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types--><TouchSensor description="within ProtoBody"><IS><connect nodeField="description" protoField="description"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
</IS>
</TouchSensor>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare88.name = "ArtDeco01Material";
ProtoDeclare88.appinfo = "tooltip: ArtDeco01Material prototype is a Material node";
let ProtoInterface89 = browser.currentScene.createNode("ProtoInterface");
let field90 = browser.currentScene.createNode("field");
field90.name = "description";
field90.accessType = "inputOutput";
field90.appinfo = "tooltip for descriptionField";
field90.type = "SFString";
field90.value = "ArtDeco01Material prototype is a Material node";
ProtoInterface89.field = new MFNode();

ProtoInterface89.field[0] = field90;

let field91 = browser.currentScene.createNode("field");
field91.name = "enabled";
field91.accessType = "inputOutput";
field91.type = "SFBool";
field91.value = "true";
ProtoInterface89.field[1] = field91;

ProtoDeclare88.protoInterface = ProtoInterface89;

let ProtoBody92 = browser.currentScene.createNode("ProtoBody");
//Initial node of ProtoBody determines prototype node type
let Material93 = browser.currentScene.createNode("Material");
Material93.ambientIntensity = 0.25;
Material93.diffuseColor = new SFColor(new float[0.282435,0.085159,0.134462]);
Material93.shininess = 0.127273;
Material93.specularColor = new SFColor(new float[0.276305,0.11431,0.139857]);
ProtoBody92.children = new MFNode();

ProtoBody92.children[0] = Material93;

//[HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
let TouchSensor94 = browser.currentScene.createNode("TouchSensor");
TouchSensor94.description = "within ProtoBody";
let IS95 = browser.currentScene.createNode("IS");
let connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "description";
connect96.protoField = "description";
IS95.connect = new MFNode();

IS95.connect[0] = connect96;

let connect97 = browser.currentScene.createNode("connect");
connect97.nodeField = "enabled";
connect97.protoField = "enabled";
IS95.connect[1] = connect97;

TouchSensor94.iS = IS95;

ProtoBody92.children[1] = TouchSensor94;

ProtoDeclare88.protoBody = ProtoBody92;

browser.currentScene.children[19] = ProtoDeclare88;

let ExternProtoDeclare98 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare98.name = "ArtDeco02Material";
ExternProtoDeclare98.appinfo = "this is a different Material node";
ExternProtoDeclare98.url = new MFString(new java.lang.String["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"]);
//[HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
let field99 = browser.currentScene.createNode("field");
field99.name = "description";
field99.accessType = "inputOutput";
field99.appinfo = "tooltip for descriptionField";
field99.type = "SFString";
ExternProtoDeclare98.field = new MFNode();

ExternProtoDeclare98.field[0] = field99;

browser.currentScene.children[20] = ExternProtoDeclare98;

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
let Shape100 = browser.currentScene.createNode("Shape");
Shape100.DEF = "TestShape1";
let Appearance101 = browser.currentScene.createNode("Appearance");
Appearance101.DEF = "TestAppearance1";
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
let ProtoInstance102 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance102.name = "ArtDeco01Material";
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
let fieldValue103 = browser.currentScene.createNode("fieldValue");
fieldValue103.name = "description";
fieldValue103.value = "ArtDeco01Material can substitute for a Material node";
ProtoInstance102.fieldValue = new MFNode();

ProtoInstance102.fieldValue[0] = fieldValue103;

Appearance101.shaders = new MFNode();

Appearance101.shaders[0] = ProtoInstance102;

Shape100.appearance = Appearance101;

let Sphere104 = browser.currentScene.createNode("Sphere");
Sphere104.radius = 0.001;
Shape100.geometry = Sphere104;

browser.currentScene.children[21] = Shape100;

let Shape105 = browser.currentScene.createNode("Shape");
Shape105.DEF = "TestShape2";
let Appearance106 = browser.currentScene.createNode("Appearance");
Appearance106.DEF = "TestAppearance2";
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
let ProtoInstance107 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance107.name = "ArtDeco02Material";
ProtoInstance107.DEF = "ArtDeco02MaterialDEF";
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
let fieldValue108 = browser.currentScene.createNode("fieldValue");
fieldValue108.name = "description";
fieldValue108.value = "ArtDeco02Material can substitute for another Material node";
ProtoInstance107.fieldValue = new MFNode();

ProtoInstance107.fieldValue[0] = fieldValue108;

Appearance106.shaders = new MFNode();

Appearance106.shaders[0] = ProtoInstance107;

Shape105.appearance = Appearance106;

let Cone109 = browser.currentScene.createNode("Cone");
Cone109.bottomRadius = 0.001;
Cone109.height = 0.001;
Shape105.geometry = Cone109;

browser.currentScene.children[22] = Shape105;

let Shape110 = browser.currentScene.createNode("Shape");
Shape110.DEF = "TestShape3";
let Appearance111 = browser.currentScene.createNode("Appearance");
Appearance111.DEF = "TestAppearance3";
//ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE.
let ProtoInstance112 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance112.USE = "ArtDeco02MaterialDEF";
Appearance111.shaders = new MFNode();

Appearance111.shaders[0] = ProtoInstance112;

Shape110.appearance = Appearance111;

let Cylinder113 = browser.currentScene.createNode("Cylinder");
Cylinder113.height = 0.001;
Cylinder113.radius = 0.001;
Shape110.geometry = Cylinder113;

browser.currentScene.children[23] = Shape110;

let Inline114 = browser.currentScene.createNode("Inline");
Inline114.DEF = "inlineSceneDef";
Inline114.url = new MFString(new java.lang.String["someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"]);
browser.currentScene.children[24] = Inline114;

let IMPORT115 = browser.currentScene.createNode("IMPORT");
IMPORT115.AS = "WorldInfoDEF2";
IMPORT115.importedDEF = "WorldInfoDEF";
IMPORT115.inlineDEF = "inlineSceneDef";
browser.currentScene.children[25] = IMPORT115;

let EXPORT116 = browser.currentScene.createNode("EXPORT");
EXPORT116.AS = "WorldInfoDEF3";
EXPORT116.localDEF = "WorldInfoDEF";
browser.currentScene.children[26] = EXPORT116;

let ProtoDeclare117 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare117.name = "MaterialModulator";
ProtoDeclare117.appinfo = "mimic a Material node and modulate fields as an animation effect";
ProtoDeclare117.documentation = "http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html";
let ProtoInterface118 = browser.currentScene.createNode("ProtoInterface");
let field119 = browser.currentScene.createNode("field");
field119.name = "enabled";
field119.accessType = "inputOutput";
field119.type = "SFBool";
field119.value = "true";
ProtoInterface118.field = new MFNode();

ProtoInterface118.field[0] = field119;

let field120 = browser.currentScene.createNode("field");
field120.name = "diffuseColor";
field120.accessType = "inputOutput";
field120.type = "SFColor";
field120.value = "0 0 0";
ProtoInterface118.field[1] = field120;

let field121 = browser.currentScene.createNode("field");
field121.name = "emissiveColor";
field121.accessType = "inputOutput";
field121.type = "SFColor";
field121.value = "0.05 0.05 0.5";
ProtoInterface118.field[2] = field121;

let field122 = browser.currentScene.createNode("field");
field122.name = "specularColor";
field122.accessType = "inputOutput";
field122.type = "SFColor";
field122.value = "0 0 0";
ProtoInterface118.field[3] = field122;

let field123 = browser.currentScene.createNode("field");
field123.name = "transparency";
field123.accessType = "inputOutput";
field123.type = "SFFloat";
field123.value = "0";
ProtoInterface118.field[4] = field123;

let field124 = browser.currentScene.createNode("field");
field124.name = "shininess";
field124.accessType = "inputOutput";
field124.type = "SFFloat";
field124.value = "0";
ProtoInterface118.field[5] = field124;

let field125 = browser.currentScene.createNode("field");
field125.name = "ambientIntensity";
field125.accessType = "inputOutput";
field125.type = "SFFloat";
field125.value = "0";
ProtoInterface118.field[6] = field125;

ProtoDeclare117.protoInterface = ProtoInterface118;

let ProtoBody126 = browser.currentScene.createNode("ProtoBody");
let Material127 = browser.currentScene.createNode("Material");
Material127.DEF = "MaterialNode";
let IS128 = browser.currentScene.createNode("IS");
let connect129 = browser.currentScene.createNode("connect");
connect129.nodeField = "diffuseColor";
connect129.protoField = "diffuseColor";
IS128.connect = new MFNode();

IS128.connect[0] = connect129;

let connect130 = browser.currentScene.createNode("connect");
connect130.nodeField = "emissiveColor";
connect130.protoField = "emissiveColor";
IS128.connect[1] = connect130;

let connect131 = browser.currentScene.createNode("connect");
connect131.nodeField = "specularColor";
connect131.protoField = "specularColor";
IS128.connect[2] = connect131;

let connect132 = browser.currentScene.createNode("connect");
connect132.nodeField = "transparency";
connect132.protoField = "transparency";
IS128.connect[3] = connect132;

let connect133 = browser.currentScene.createNode("connect");
connect133.nodeField = "shininess";
connect133.protoField = "shininess";
IS128.connect[4] = connect133;

let connect134 = browser.currentScene.createNode("connect");
connect134.nodeField = "ambientIntensity";
connect134.protoField = "ambientIntensity";
IS128.connect[5] = connect134;

Material127.iS = IS128;

ProtoBody126.children = new MFNode();

ProtoBody126.children[0] = Material127;

//Only first node (the node type) is renderable, others are along for the ride
let Script135 = browser.currentScene.createNode("Script");
Script135.DEF = "MaterialModulatorScript";
let field136 = browser.currentScene.createNode("field");
field136.name = "enabled";
field136.accessType = "inputOutput";
field136.type = "SFBool";
Script135.field = new MFNode();

Script135.field[0] = field136;

let field137 = browser.currentScene.createNode("field");
field137.name = "diffuseColor";
field137.accessType = "inputOutput";
field137.type = "SFColor";
Script135.field[1] = field137;

let field138 = browser.currentScene.createNode("field");
field138.name = "newColor";
field138.accessType = "outputOnly";
field138.type = "SFColor";
Script135.field[2] = field138;

let field139 = browser.currentScene.createNode("field");
field139.name = "clockTrigger";
field139.accessType = "inputOnly";
field139.type = "SFTime";
Script135.field[3] = field139;

let IS140 = browser.currentScene.createNode("IS");
let connect141 = browser.currentScene.createNode("connect");
connect141.nodeField = "enabled";
connect141.protoField = "enabled";
IS140.connect = new MFNode();

IS140.connect[0] = connect141;

let connect142 = browser.currentScene.createNode("connect");
connect142.nodeField = "diffuseColor";
connect142.protoField = "diffuseColor";
IS140.connect[1] = connect142;

Script135.iS = IS140;

let #sourceCode143 = browser.currentScene.createNode("#sourceCode");
Script135.#sourceCode[4] = #sourceCode143;

ProtoBody126.children[1] = Script135;

ProtoDeclare117.protoBody = ProtoBody126;

browser.currentScene.children[27] = ProtoDeclare117;

//Test success: declarative statement createDeclarativeShapeTests()
let Group144 = browser.currentScene.createNode("Group");
Group144.DEF = "DeclarativeGroupExample";
let Shape145 = browser.currentScene.createNode("Shape");
let MetadataString146 = browser.currentScene.createNode("MetadataString");
MetadataString146.name = "findThisNameValue";
MetadataString146.DEF = "FindableMetadataStringTest";
MetadataString146.value = new MFString(new java.lang.String["test case"]);
Shape145.metadata = MetadataString146;

let Appearance147 = browser.currentScene.createNode("Appearance");
Appearance147.DEF = "DeclarativeAppearanceExample";
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
let ProtoInstance148 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance148.name = "MaterialModulator";
ProtoInstance148.DEF = "MyMaterialModulator";
Appearance147.shaders = new MFNode();

Appearance147.shaders[0] = ProtoInstance148;

Shape145.appearance = Appearance147;

let Cone149 = browser.currentScene.createNode("Cone");
Cone149.bottom = False;
Cone149.bottomRadius = 0.05;
Cone149.height = 0.1;
Shape145.geometry = Cone149;

Group144.children = new MFNode();

Group144.children[0] = Shape145;

//Test success: declarativeGroup.addChild() singleton pipeline method
browser.currentScene.children[28] = Group144;

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
let Group150 = browser.currentScene.createNode("Group");
Group150.DEF = "TestFieldObjectsGroup";
//testFieldObjects() results
//SFBool default=true, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true
//regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotationObject.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value
browser.currentScene.children[29] = Group150;

let Sound151 = browser.currentScene.createNode("Sound");
Sound151.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let AudioClip152 = browser.currentScene.createNode("AudioClip");
AudioClip152.description = "chimes";
AudioClip152.url = new MFString(new java.lang.String["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound151.source = AudioClip152;

browser.currentScene.children[30] = Sound151;

let Sound153 = browser.currentScene.createNode("Sound");
Sound153.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let MovieTexture154 = browser.currentScene.createNode("MovieTexture");
MovieTexture154.description = "mpgsys.mpg from ConformanceNist suite";
MovieTexture154.url = new MFString(new java.lang.String["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"watchList\"
Sound153.source = MovieTexture154;

browser.currentScene.children[31] = Sound153;

//Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true
//Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
let Shape155 = browser.currentScene.createNode("Shape");
Shape155.DEF = "ExtrusionShape";
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
let Appearance156 = browser.currentScene.createNode("Appearance");
Appearance156.DEF = "TransparentAppearance";
let Material157 = browser.currentScene.createNode("Material");
Material157.transparency = 1;
Appearance156.material = Material157;

Shape155.appearance = Appearance156;

let Extrusion158 = browser.currentScene.createNode("Extrusion");
Extrusion158.DEF = "ExampleExtrusion";
Shape155.geometry = Extrusion158;

browser.currentScene.children[32] = Shape155;

let Group159 = browser.currentScene.createNode("Group");
//Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes
let ProtoDeclare160 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="NewWorldInfo" ><ProtoInterface><field name="description" accessType="initializeOnly" type="SFString"></field>
</ProtoInterface>
<ProtoBody><WorldInfo></WorldInfo>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare160.name = "NewWorldInfo";
let ProtoInterface161 = browser.currentScene.createNode("ProtoInterface");
let field162 = browser.currentScene.createNode("field");
field162.name = "description";
field162.accessType = "initializeOnly";
field162.type = "SFString";
ProtoInterface161.field = new MFNode();

ProtoInterface161.field[0] = field162;

ProtoDeclare160.protoInterface = ProtoInterface161;

let ProtoBody163 = browser.currentScene.createNode("ProtoBody");
let WorldInfo164 = browser.currentScene.createNode("WorldInfo");
ProtoBody163.children = new MFNode();

ProtoBody163.children[0] = WorldInfo164;

ProtoDeclare160.protoBody = ProtoBody163;

Group159.children = new MFNode();

Group159.children[0] = ProtoDeclare160;

let Group165 = browser.currentScene.createNode("Group");
Group165.DEF = "Node2";
//intentionally empty
Group159.children[1] = Group165;

let Transform166 = browser.currentScene.createNode("Transform");
Transform166.DEF = "Node4";
//intentionally empty
Group159.children[2] = Transform166;

//Test satisfactorily creates MFNode children array as an ordered list with mixed content
browser.currentScene.children[33] = Group159;

let ProtoDeclare167 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ShaderProto" ><ProtoBody><ProgramShader></ProgramShader>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare167.name = "ShaderProto";
let ProtoBody168 = browser.currentScene.createNode("ProtoBody");
let ProgramShader169 = browser.currentScene.createNode("ProgramShader");
ProtoBody168.children = new MFNode();

ProtoBody168.children[0] = ProgramShader169;

ProtoDeclare167.protoBody = ProtoBody168;

browser.currentScene.children[34] = ProtoDeclare167;

let Shape170 = browser.currentScene.createNode("Shape");
let Appearance171 = browser.currentScene.createNode("Appearance");
//Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes
//Test satisfactorily creates MFNode shaders array as an ordered list with mixed content
let ProgramShader172 = browser.currentScene.createNode("ProgramShader");
ProgramShader172.DEF = "TestShader1";
let ShaderProgram173 = browser.currentScene.createNode("ShaderProgram");
ShaderProgram173.DEF = "TestShader2";
ShaderProgram173.type = "VERTEX";
ProgramShader172.programs = new MFNode();

ProgramShader172.programs[0] = ShaderProgram173;

Appearance171.shaders = new MFNode();

Appearance171.shaders[0] = ProgramShader172;

let ProtoInstance174 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance174.name = "ShaderProto";
ProtoInstance174.DEF = "TestShader3";
Appearance171.shaders[1] = ProtoInstance174;

let ComposedShader175 = browser.currentScene.createNode("ComposedShader");
ComposedShader175.DEF = "TestShader4";
let ShaderPart176 = browser.currentScene.createNode("ShaderPart");
ShaderPart176.DEF = "TestShader5";
ShaderPart176.type = "VERTEX";
ComposedShader175.parts = new MFNode();

ComposedShader175.parts[0] = ShaderPart176;

Appearance171.shaders[2] = ComposedShader175;

Shape170.appearance = Appearance171;

browser.currentScene.children[35] = Shape170;

let Transform177 = browser.currentScene.createNode("Transform");
Transform177.DEF = "SpecialtyNodes";
let CADLayer178 = browser.currentScene.createNode("CADLayer");
let CADAssembly179 = browser.currentScene.createNode("CADAssembly");
let CADPart180 = browser.currentScene.createNode("CADPart");
let CADFace181 = browser.currentScene.createNode("CADFace");
CADPart180.children = new MFNode();

CADPart180.children[0] = CADFace181;

CADAssembly179.children = new MFNode();

CADAssembly179.children[0] = CADPart180;

CADLayer178.children = new MFNode();

CADLayer178.children[0] = CADAssembly179;

Transform177.children = new MFNode();

Transform177.children[0] = CADLayer178;

let EspduTransform182 = browser.currentScene.createNode("EspduTransform");
Transform177.children[1] = EspduTransform182;

let ReceiverPdu183 = browser.currentScene.createNode("ReceiverPdu");
Transform177.children[2] = ReceiverPdu183;

let SignalPdu184 = browser.currentScene.createNode("SignalPdu");
Transform177.children[3] = SignalPdu184;

let TransmitterPdu185 = browser.currentScene.createNode("TransmitterPdu");
Transform177.children[4] = TransmitterPdu185;

let DISEntityManager186 = browser.currentScene.createNode("DISEntityManager");
let DISEntityTypeMapping187 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityManager186.children = new MFNode();

DISEntityManager186.children[0] = DISEntityTypeMapping187;

Transform177.children[5] = DISEntityManager186;

browser.currentScene.children[36] = Transform177;

