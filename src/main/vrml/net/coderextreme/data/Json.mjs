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


Script79.setSourceCode(`ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}`)
Group77.children[1] = Script79;

let ColorInterpolator82 = browser.currentScene.createNode("ColorInterpolator");
ColorInterpolator82.DEF = "ColorAnimator";
ColorInterpolator82.key = new MFFloat(new float[0,0.5,1]);
ColorInterpolator82.keyValue = new MFColor(new float[0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1]);
//AZURE to INDIGO and back again
Group77.children[2] = ColorInterpolator82;

let TimeSensor83 = browser.currentScene.createNode("TimeSensor");
TimeSensor83.DEF = "ColorClock";
TimeSensor83.cycleInterval = 60;
TimeSensor83.loop = True;
Group77.children[3] = TimeSensor83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromField = "colorsOutput";
ROUTE84.fromNode = "colorTypeConversionScript";
ROUTE84.toField = "skyColor";
ROUTE84.toNode = "GradualBackground";
Group77.children[4] = ROUTE84;

let ROUTE85 = browser.currentScene.createNode("ROUTE");
ROUTE85.fromField = "value_changed";
ROUTE85.fromNode = "ColorAnimator";
ROUTE85.toField = "colorInput";
ROUTE85.toNode = "colorTypeConversionScript";
Group77.children[5] = ROUTE85;

let ROUTE86 = browser.currentScene.createNode("ROUTE");
ROUTE86.fromField = "fraction_changed";
ROUTE86.fromNode = "ColorClock";
ROUTE86.toField = "set_fraction";
ROUTE86.toNode = "ColorAnimator";
Group77.children[6] = ROUTE86;

browser.currentScene.children[18] = Group77;

let ProtoDeclare87 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
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
ProtoDeclare87.name = "ArtDeco01Material";
ProtoDeclare87.appinfo = "tooltip: ArtDeco01Material prototype is a Material node";
let ProtoInterface88 = browser.currentScene.createNode("ProtoInterface");
let field89 = browser.currentScene.createNode("field");
field89.name = "description";
field89.accessType = "inputOutput";
field89.appinfo = "tooltip for descriptionField";
field89.type = "SFString";
field89.value = "ArtDeco01Material prototype is a Material node";
ProtoInterface88.field = new MFNode();

ProtoInterface88.field[0] = field89;

let field90 = browser.currentScene.createNode("field");
field90.name = "enabled";
field90.accessType = "inputOutput";
field90.type = "SFBool";
field90.value = "true";
ProtoInterface88.field[1] = field90;

ProtoDeclare87.protoInterface = ProtoInterface88;

let ProtoBody91 = browser.currentScene.createNode("ProtoBody");
//Initial node of ProtoBody determines prototype node type
let Material92 = browser.currentScene.createNode("Material");
Material92.ambientIntensity = 0.25;
Material92.diffuseColor = new SFColor(new float[0.282435,0.085159,0.134462]);
Material92.shininess = 0.127273;
Material92.specularColor = new SFColor(new float[0.276305,0.11431,0.139857]);
ProtoBody91.children = new MFNode();

ProtoBody91.children[0] = Material92;

//[HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
let TouchSensor93 = browser.currentScene.createNode("TouchSensor");
TouchSensor93.description = "within ProtoBody";
let IS94 = browser.currentScene.createNode("IS");
let connect95 = browser.currentScene.createNode("connect");
connect95.nodeField = "description";
connect95.protoField = "description";
IS94.connect = new MFNode();

IS94.connect[0] = connect95;

let connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "enabled";
connect96.protoField = "enabled";
IS94.connect[1] = connect96;

TouchSensor93.iS = IS94;

ProtoBody91.children[1] = TouchSensor93;

ProtoDeclare87.protoBody = ProtoBody91;

browser.currentScene.children[19] = ProtoDeclare87;

let ExternProtoDeclare97 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare97.name = "ArtDeco02Material";
ExternProtoDeclare97.appinfo = "this is a different Material node";
ExternProtoDeclare97.url = new MFString(new java.lang.String["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"]);
//[HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
let field98 = browser.currentScene.createNode("field");
field98.name = "description";
field98.accessType = "inputOutput";
field98.appinfo = "tooltip for descriptionField";
field98.type = "SFString";
ExternProtoDeclare97.field = new MFNode();

ExternProtoDeclare97.field[0] = field98;

browser.currentScene.children[20] = ExternProtoDeclare97;

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
let Shape99 = browser.currentScene.createNode("Shape");
Shape99.DEF = "TestShape1";
let Appearance100 = browser.currentScene.createNode("Appearance");
Appearance100.DEF = "TestAppearance1";
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
let ProtoInstance101 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance101.name = "ArtDeco01Material";
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
let fieldValue102 = browser.currentScene.createNode("fieldValue");
fieldValue102.name = "description";
fieldValue102.value = "ArtDeco01Material can substitute for a Material node";
ProtoInstance101.fieldValue = new MFNode();

ProtoInstance101.fieldValue[0] = fieldValue102;

Appearance100.shaders = new MFNode();

Appearance100.shaders[0] = ProtoInstance101;

Shape99.appearance = Appearance100;

let Sphere103 = browser.currentScene.createNode("Sphere");
Sphere103.radius = 0.001;
Shape99.geometry = Sphere103;

browser.currentScene.children[21] = Shape99;

let Shape104 = browser.currentScene.createNode("Shape");
Shape104.DEF = "TestShape2";
let Appearance105 = browser.currentScene.createNode("Appearance");
Appearance105.DEF = "TestAppearance2";
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
let ProtoInstance106 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance106.name = "ArtDeco02Material";
ProtoInstance106.DEF = "ArtDeco02MaterialDEF";
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
let fieldValue107 = browser.currentScene.createNode("fieldValue");
fieldValue107.name = "description";
fieldValue107.value = "ArtDeco02Material can substitute for another Material node";
ProtoInstance106.fieldValue = new MFNode();

ProtoInstance106.fieldValue[0] = fieldValue107;

Appearance105.shaders = new MFNode();

Appearance105.shaders[0] = ProtoInstance106;

Shape104.appearance = Appearance105;

let Cone108 = browser.currentScene.createNode("Cone");
Cone108.bottomRadius = 0.001;
Cone108.height = 0.001;
Shape104.geometry = Cone108;

browser.currentScene.children[22] = Shape104;

let Shape109 = browser.currentScene.createNode("Shape");
Shape109.DEF = "TestShape3";
let Appearance110 = browser.currentScene.createNode("Appearance");
Appearance110.DEF = "TestAppearance3";
//ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE.
let ProtoInstance111 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance111.USE = "ArtDeco02MaterialDEF";
Appearance110.shaders = new MFNode();

Appearance110.shaders[0] = ProtoInstance111;

Shape109.appearance = Appearance110;

let Cylinder112 = browser.currentScene.createNode("Cylinder");
Cylinder112.height = 0.001;
Cylinder112.radius = 0.001;
Shape109.geometry = Cylinder112;

browser.currentScene.children[23] = Shape109;

let Inline113 = browser.currentScene.createNode("Inline");
Inline113.DEF = "inlineSceneDef";
Inline113.url = new MFString(new java.lang.String["someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"]);
browser.currentScene.children[24] = Inline113;

let IMPORT114 = browser.currentScene.createNode("IMPORT");
IMPORT114.AS = "WorldInfoDEF2";
IMPORT114.importedDEF = "WorldInfoDEF";
IMPORT114.inlineDEF = "inlineSceneDef";
browser.currentScene.children[25] = IMPORT114;

let EXPORT115 = browser.currentScene.createNode("EXPORT");
EXPORT115.AS = "WorldInfoDEF3";
EXPORT115.localDEF = "WorldInfoDEF";
browser.currentScene.children[26] = EXPORT115;

let ProtoDeclare116 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
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
<![CDATA[ecmascript:
function initialize ()
{
    newColor = diffuseColor; // start with correct color
}
function set_enabled (newValue)
{
	enabled = newValue;
}
function clockTrigger (timeValue)
{
    if (!enabled) return;
    red   = newColor.r;
    green = newColor.g;
    blue  = newColor.b;

    // note different modulation rates for each color component, % is modulus operator
    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);
	if (enabled)
	{
		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\n');
	}
}]]></Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare116.name = "MaterialModulator";
ProtoDeclare116.appinfo = "mimic a Material node and modulate fields as an animation effect";
ProtoDeclare116.documentation = "http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html";
let ProtoInterface117 = browser.currentScene.createNode("ProtoInterface");
let field118 = browser.currentScene.createNode("field");
field118.name = "enabled";
field118.accessType = "inputOutput";
field118.type = "SFBool";
field118.value = "true";
ProtoInterface117.field = new MFNode();

ProtoInterface117.field[0] = field118;

let field119 = browser.currentScene.createNode("field");
field119.name = "diffuseColor";
field119.accessType = "inputOutput";
field119.type = "SFColor";
field119.value = "0 0 0";
ProtoInterface117.field[1] = field119;

let field120 = browser.currentScene.createNode("field");
field120.name = "emissiveColor";
field120.accessType = "inputOutput";
field120.type = "SFColor";
field120.value = "0.05 0.05 0.5";
ProtoInterface117.field[2] = field120;

let field121 = browser.currentScene.createNode("field");
field121.name = "specularColor";
field121.accessType = "inputOutput";
field121.type = "SFColor";
field121.value = "0 0 0";
ProtoInterface117.field[3] = field121;

let field122 = browser.currentScene.createNode("field");
field122.name = "transparency";
field122.accessType = "inputOutput";
field122.type = "SFFloat";
field122.value = "0";
ProtoInterface117.field[4] = field122;

let field123 = browser.currentScene.createNode("field");
field123.name = "shininess";
field123.accessType = "inputOutput";
field123.type = "SFFloat";
field123.value = "0";
ProtoInterface117.field[5] = field123;

let field124 = browser.currentScene.createNode("field");
field124.name = "ambientIntensity";
field124.accessType = "inputOutput";
field124.type = "SFFloat";
field124.value = "0";
ProtoInterface117.field[6] = field124;

ProtoDeclare116.protoInterface = ProtoInterface117;

let ProtoBody125 = browser.currentScene.createNode("ProtoBody");
let Material126 = browser.currentScene.createNode("Material");
Material126.DEF = "MaterialNode";
let IS127 = browser.currentScene.createNode("IS");
let connect128 = browser.currentScene.createNode("connect");
connect128.nodeField = "diffuseColor";
connect128.protoField = "diffuseColor";
IS127.connect = new MFNode();

IS127.connect[0] = connect128;

let connect129 = browser.currentScene.createNode("connect");
connect129.nodeField = "emissiveColor";
connect129.protoField = "emissiveColor";
IS127.connect[1] = connect129;

let connect130 = browser.currentScene.createNode("connect");
connect130.nodeField = "specularColor";
connect130.protoField = "specularColor";
IS127.connect[2] = connect130;

let connect131 = browser.currentScene.createNode("connect");
connect131.nodeField = "transparency";
connect131.protoField = "transparency";
IS127.connect[3] = connect131;

let connect132 = browser.currentScene.createNode("connect");
connect132.nodeField = "shininess";
connect132.protoField = "shininess";
IS127.connect[4] = connect132;

let connect133 = browser.currentScene.createNode("connect");
connect133.nodeField = "ambientIntensity";
connect133.protoField = "ambientIntensity";
IS127.connect[5] = connect133;

Material126.iS = IS127;

ProtoBody125.children = new MFNode();

ProtoBody125.children[0] = Material126;

//Only first node (the node type) is renderable, others are along for the ride
let Script134 = browser.currentScene.createNode("Script");
Script134.DEF = "MaterialModulatorScript";
let field135 = browser.currentScene.createNode("field");
field135.name = "enabled";
field135.accessType = "inputOutput";
field135.type = "SFBool";
Script134.field = new MFNode();

Script134.field[0] = field135;

let field136 = browser.currentScene.createNode("field");
field136.name = "diffuseColor";
field136.accessType = "inputOutput";
field136.type = "SFColor";
Script134.field[1] = field136;

let field137 = browser.currentScene.createNode("field");
field137.name = "newColor";
field137.accessType = "outputOnly";
field137.type = "SFColor";
Script134.field[2] = field137;

let field138 = browser.currentScene.createNode("field");
field138.name = "clockTrigger";
field138.accessType = "inputOnly";
field138.type = "SFTime";
Script134.field[3] = field138;

let IS139 = browser.currentScene.createNode("IS");
let connect140 = browser.currentScene.createNode("connect");
connect140.nodeField = "enabled";
connect140.protoField = "enabled";
IS139.connect = new MFNode();

IS139.connect[0] = connect140;

let connect141 = browser.currentScene.createNode("connect");
connect141.nodeField = "diffuseColor";
connect141.protoField = "diffuseColor";
IS139.connect[1] = connect141;

Script134.iS = IS139;


Script134.setSourceCode(`ecmascript:\n"+
"function initialize ()\n"+
"{\n"+
"    newColor = diffuseColor; // start with correct color\n"+
"}\n"+
"function set_enabled (newValue)\n"+
"{\n"+
"	enabled = newValue;\n"+
"}\n"+
"function clockTrigger (timeValue)\n"+
"{\n"+
"    if (!enabled) return;\n"+
"    red   = newColor.r;\n"+
"    green = newColor.g;\n"+
"    blue  = newColor.b;\n"+
"\n"+
"    // note different modulation rates for each color component, % is modulus operator\n"+
"    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);\n"+
"	if (enabled)\n"+
"	{\n"+
"		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\\n');\n"+
"	}\n"+
"}`)
ProtoBody125.children[1] = Script134;

ProtoDeclare116.protoBody = ProtoBody125;

browser.currentScene.children[27] = ProtoDeclare116;

//Test success: declarative statement createDeclarativeShapeTests()
let Group142 = browser.currentScene.createNode("Group");
Group142.DEF = "DeclarativeGroupExample";
let Shape143 = browser.currentScene.createNode("Shape");
let MetadataString144 = browser.currentScene.createNode("MetadataString");
MetadataString144.name = "findThisNameValue";
MetadataString144.DEF = "FindableMetadataStringTest";
MetadataString144.value = new MFString(new java.lang.String["test case"]);
Shape143.metadata = new SFNode();

Shape143.metadata[0] = MetadataString144;

let Appearance145 = browser.currentScene.createNode("Appearance");
Appearance145.DEF = "DeclarativeAppearanceExample";
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
let ProtoInstance146 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance146.name = "MaterialModulator";
ProtoInstance146.DEF = "MyMaterialModulator";
Appearance145.shaders = new MFNode();

Appearance145.shaders[0] = ProtoInstance146;

Shape143.appearance = Appearance145;

let Cone147 = browser.currentScene.createNode("Cone");
Cone147.bottom = False;
Cone147.bottomRadius = 0.05;
Cone147.height = 0.1;
Shape143.geometry = Cone147;

Group142.children = new MFNode();

Group142.children[0] = Shape143;

//Test success: declarativeGroup.addChild() singleton pipeline method
browser.currentScene.children[28] = Group142;

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
let Group148 = browser.currentScene.createNode("Group");
Group148.DEF = "TestFieldObjectsGroup";
//testFieldObjects() results
//SFBool default=true, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true
//regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotationObject.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value
browser.currentScene.children[29] = Group148;

let Sound149 = browser.currentScene.createNode("Sound");
Sound149.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let AudioClip150 = browser.currentScene.createNode("AudioClip");
AudioClip150.description = "chimes";
AudioClip150.url = new MFString(new java.lang.String["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound149.source = AudioClip150;

browser.currentScene.children[30] = Sound149;

let Sound151 = browser.currentScene.createNode("Sound");
Sound151.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let MovieTexture152 = browser.currentScene.createNode("MovieTexture");
MovieTexture152.description = "mpgsys.mpg from ConformanceNist suite";
MovieTexture152.url = new MFString(new java.lang.String["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"watchList\"
Sound151.source = MovieTexture152;

browser.currentScene.children[31] = Sound151;

//Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true
//Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
let Shape153 = browser.currentScene.createNode("Shape");
Shape153.DEF = "ExtrusionShape";
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
let Appearance154 = browser.currentScene.createNode("Appearance");
Appearance154.DEF = "TransparentAppearance";
let Material155 = browser.currentScene.createNode("Material");
Material155.transparency = 1;
Appearance154.material = Material155;

Shape153.appearance = Appearance154;

let Extrusion156 = browser.currentScene.createNode("Extrusion");
Extrusion156.DEF = "ExampleExtrusion";
Shape153.geometry = Extrusion156;

browser.currentScene.children[32] = Shape153;

let Group157 = browser.currentScene.createNode("Group");
//Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes
let ProtoDeclare158 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="NewWorldInfo" ><ProtoInterface><field name="description" accessType="initializeOnly" type="SFString"></field>
</ProtoInterface>
<ProtoBody><WorldInfo></WorldInfo>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare158.name = "NewWorldInfo";
let ProtoInterface159 = browser.currentScene.createNode("ProtoInterface");
let field160 = browser.currentScene.createNode("field");
field160.name = "description";
field160.accessType = "initializeOnly";
field160.type = "SFString";
ProtoInterface159.field = new MFNode();

ProtoInterface159.field[0] = field160;

ProtoDeclare158.protoInterface = ProtoInterface159;

let ProtoBody161 = browser.currentScene.createNode("ProtoBody");
let WorldInfo162 = browser.currentScene.createNode("WorldInfo");
ProtoBody161.children = new MFNode();

ProtoBody161.children[0] = WorldInfo162;

ProtoDeclare158.protoBody = ProtoBody161;

Group157.children = new MFNode();

Group157.children[0] = ProtoDeclare158;

let Group163 = browser.currentScene.createNode("Group");
Group163.DEF = "Node2";
//intentionally empty
Group157.children[1] = Group163;

let Transform164 = browser.currentScene.createNode("Transform");
Transform164.DEF = "Node4";
//intentionally empty
Group157.children[2] = Transform164;

//Test satisfactorily creates MFNode children array as an ordered list with mixed content
browser.currentScene.children[33] = Group157;

let ProtoDeclare165 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ShaderProto" ><ProtoBody><ProgramShader></ProgramShader>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare165.name = "ShaderProto";
let ProtoBody166 = browser.currentScene.createNode("ProtoBody");
let ProgramShader167 = browser.currentScene.createNode("ProgramShader");
ProtoBody166.children = new MFNode();

ProtoBody166.children[0] = ProgramShader167;

ProtoDeclare165.protoBody = ProtoBody166;

browser.currentScene.children[34] = ProtoDeclare165;

let Shape168 = browser.currentScene.createNode("Shape");
let Appearance169 = browser.currentScene.createNode("Appearance");
//Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes
//Test satisfactorily creates MFNode shaders array as an ordered list with mixed content
let ProgramShader170 = browser.currentScene.createNode("ProgramShader");
ProgramShader170.DEF = "TestShader1";
let ShaderProgram171 = browser.currentScene.createNode("ShaderProgram");
ShaderProgram171.DEF = "TestShader2";
ShaderProgram171.type = "VERTEX";
ProgramShader170.programs = new MFNode();

ProgramShader170.programs[0] = ShaderProgram171;

Appearance169.shaders = new MFNode();

Appearance169.shaders[0] = ProgramShader170;

let ProtoInstance172 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance172.name = "ShaderProto";
ProtoInstance172.DEF = "TestShader3";
Appearance169.shaders[1] = ProtoInstance172;

let ComposedShader173 = browser.currentScene.createNode("ComposedShader");
ComposedShader173.DEF = "TestShader4";
let ShaderPart174 = browser.currentScene.createNode("ShaderPart");
ShaderPart174.DEF = "TestShader5";
ShaderPart174.type = "VERTEX";
ComposedShader173.parts = new MFNode();

ComposedShader173.parts[0] = ShaderPart174;

Appearance169.shaders[2] = ComposedShader173;

Shape168.appearance = Appearance169;

browser.currentScene.children[35] = Shape168;

let Transform175 = browser.currentScene.createNode("Transform");
Transform175.DEF = "SpecialtyNodes";
let CADLayer176 = browser.currentScene.createNode("CADLayer");
let CADAssembly177 = browser.currentScene.createNode("CADAssembly");
let CADPart178 = browser.currentScene.createNode("CADPart");
let CADFace179 = browser.currentScene.createNode("CADFace");
CADPart178.children = new MFNode();

CADPart178.children[0] = CADFace179;

CADAssembly177.children = new MFNode();

CADAssembly177.children[0] = CADPart178;

CADLayer176.children = new MFNode();

CADLayer176.children[0] = CADAssembly177;

Transform175.children = new MFNode();

Transform175.children[0] = CADLayer176;

let EspduTransform180 = browser.currentScene.createNode("EspduTransform");
Transform175.children[1] = EspduTransform180;

let ReceiverPdu181 = browser.currentScene.createNode("ReceiverPdu");
Transform175.children[2] = ReceiverPdu181;

let SignalPdu182 = browser.currentScene.createNode("SignalPdu");
Transform175.children[3] = SignalPdu182;

let TransmitterPdu183 = browser.currentScene.createNode("TransmitterPdu");
Transform175.children[4] = TransmitterPdu183;

let DISEntityManager184 = browser.currentScene.createNode("DISEntityManager");
let DISEntityTypeMapping185 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityManager184.children = new MFNode();

DISEntityManager184.children[0] = DISEntityTypeMapping185;

Transform175.children[5] = DISEntityManager184;

browser.currentScene.children[36] = Transform175;

