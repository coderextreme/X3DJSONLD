#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
//x3dVersionComparisonTest for this model: supportsX3dVersion(X3D.VERSION_3_0)=true
head head1 = createNode("head");
//comment #1
//comment #2
//comment #3
//comment #4
component component2 = createNode("component");
component2.name = "Navigation";
component2.level = 3;
head1.component = new MFNode();

head1.component[0] = component2;

component component3 = createNode("component");
component3.name = "Shaders";
component3.level = 1;
head1.component[1] = component3;

component component4 = createNode("component");
component4.name = "CADGeometry";
component4.level = 2;
head1.component[2] = component4;

component component5 = createNode("component");
component5.name = "DIS";
component5.level = 2;
head1.component[3] = component5;

component component6 = createNode("component");
component6.name = "HAnim";
component6.level = 1;
head1.component[4] = component6;

component component7 = createNode("component");
component7.name = "Grouping";
component7.level = 1;
head1.component[5] = component7;

component component8 = createNode("component");
component8.name = "Layering";
component8.level = 1;
head1.component[6] = component8;

unit unit9 = createNode("unit");
unit9.name = "AngleUnitConversion";
unit9.category = "angle";
unit9.conversionFactor = 1;
head1.unit[7] = unit9;

unit unit10 = createNode("unit");
unit10.name = "LengthUnitConversion";
unit10.category = "length";
unit10.conversionFactor = 1;
head1.unit[8] = unit10;

unit unit11 = createNode("unit");
unit11.name = "ForceFromPoundsToNewtons";
unit11.category = "force";
unit11.conversionFactor = 4.4482;
head1.unit[9] = unit11;

meta meta12 = createNode("meta");
meta12.name = "title";
meta12.content = "Json.x3d";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "info";
meta13.content = "continued development and testing in progress";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "description";
meta14.content = "Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "https://www.web3d.org/specifications/java/X3DJSAIL.html";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "generator";
meta16.content = "HelloWorldProgramOutput.java";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "created";
meta17.content = "6 September 2016";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "modified";
meta18.content = "25 May 2020";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "generator";
meta19.content = "X3D Java Scene Access Interface Library (X3DJSAIL)";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "generator";
meta20.content = "https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "generator";
meta21.content = "Netbeans http://www.netbeans.org";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "creator";
meta22.content = "Don Brutzman";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "reference";
meta23.content = "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "reference";
meta24.content = "Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "reference";
meta25.content = "HelloWorldProgramOutput.txt";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "reference";
meta26.content = "HelloWorldProgramOutput.x3dv";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "reference";
meta27.content = "HelloWorldProgramOutput.wrl";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "reference";
meta28.content = "HelloWorldProgramOutput.html";
head1.meta[26] = meta28;

meta meta29 = createNode("meta");
meta29.name = "reference";
meta29.content = "https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d";
head1.meta[27] = meta29;

meta meta30 = createNode("meta");
meta30.name = "identifier";
meta30.content = "https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d";
head1.meta[28] = meta30;

meta meta31 = createNode("meta");
meta31.name = "license";
meta31.content = "../license.html";
head1.meta[29] = meta31;

meta meta32 = createNode("meta");
meta32.name = "translated";
meta32.content = "25 May 2020";
head1.meta[30] = meta32;

meta meta33 = createNode("meta");
meta33.name = "generator";
meta33.content = "X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html";
head1.meta[31] = meta33;

meta meta34 = createNode("meta");
meta34.name = "reference";
meta34.content = "X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding";
head1.meta[32] = meta34;

head = head1;

ViewpointGroup ViewpointGroup36 = createNode("ViewpointGroup");
ViewpointGroup36.description = "Available viewpoints";
Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.DEF = "DefaultView";
Viewpoint37.description = "Hello X3DJSAIL";
ViewpointGroup36.children = new MFNode();

ViewpointGroup36.children[0] = Viewpoint37;

Viewpoint Viewpoint38 = createNode("Viewpoint");
Viewpoint38.DEF = "TopDownView";
Viewpoint38.description = "top-down view from above";
Viewpoint38.orientation = new SFRotation(new float[1,0,0,-1.570796]);
Viewpoint38.position = new SFVec3f(new float[0,100,0]);
ViewpointGroup36.children[1] = Viewpoint38;

children = new MFNode();

children[0] = ViewpointGroup36;

NavigationInfo NavigationInfo39 = createNode("NavigationInfo");
NavigationInfo39.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
children[1] = NavigationInfo39;

WorldInfo WorldInfo40 = createNode("WorldInfo");
WorldInfo40.DEF = "WorldInfoDEF";
WorldInfo40.title = "HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)";
children[2] = WorldInfo40;

WorldInfo WorldInfo41 = createNode("WorldInfo");
WorldInfo41.USE = "WorldInfoDEF";
children[3] = WorldInfo41;

WorldInfo WorldInfo42 = createNode("WorldInfo");
WorldInfo42.USE = "WorldInfoDEF";
children[4] = WorldInfo42;

MetadataString MetadataString43 = createNode("MetadataString");
MetadataString43.name = "test";
MetadataString43.DEF = "scene.addChildMetadata";
MetadataString43.value = new MFString(new java.lang.String["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"]);
metadata[5] = MetadataString43;

LayerSet LayerSet44 = createNode("LayerSet");
LayerSet44.DEF = "scene.addChildLayerSetTest";
layerSet[6] = LayerSet44;

Transform Transform45 = createNode("Transform");
Transform45.DEF = "LogoGeometryTransform";
Transform45.translation = new SFVec3f(new float[0,1.5,0]);
Anchor Anchor46 = createNode("Anchor");
Anchor46.description = "select for X3D Java SAI Library (X3DJSAIL) description";
Anchor46.url = new MFString(new java.lang.String["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"]);
Shape Shape47 = createNode("Shape");
Shape47.DEF = "BoxShape";
Appearance Appearance48 = createNode("Appearance");
Material Material49 = createNode("Material");
Material49.DEF = "GreenMaterial";
Material49.diffuseColor = new SFColor(new float[0,1,1]);
Material49.emissiveColor = new SFColor(new float[0.8,0,0]);
Material49.transparency = 0.1;
Appearance48.material = Material49;

ImageTexture ImageTexture50 = createNode("ImageTexture");
ImageTexture50.url = new MFString(new java.lang.String["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"]);
Appearance48.texture = ImageTexture50;

Shape47.appearance = Appearance48;

Box Box51 = createNode("Box");
Box51.DEF = "test-NMTOKEN_regex.0123456789";
Box51.CssClass = "untextured";
Shape47.geometry = Box51;

Anchor46.children = new MFNode();

Anchor46.children[0] = Shape47;

Transform45.children = new MFNode();

Transform45.children[0] = Anchor46;

children[7] = Transform45;

Shape Shape52 = createNode("Shape");
Shape52.DEF = "LineShape";
Appearance Appearance53 = createNode("Appearance");
Material Material54 = createNode("Material");
Material54.emissiveColor = new SFColor(new float[0.6,0.19607843,0.8]);
Appearance53.material = Material54;

Shape52.appearance = Appearance53;

IndexedLineSet IndexedLineSet55 = createNode("IndexedLineSet");
IndexedLineSet55.coordIndex = new MFInt32(new int[0,1,2,3,4,0]);
//Coordinate 3-tuple point count: 6
Coordinate Coordinate56 = createNode("Coordinate");
Coordinate56.point = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
IndexedLineSet55.coord = Coordinate56;

Shape52.geometry = IndexedLineSet55;

children[8] = Shape52;

PositionInterpolator PositionInterpolator57 = createNode("PositionInterpolator");
PositionInterpolator57.DEF = "BoxPathAnimator";
PositionInterpolator57.key = new MFFloat(new float[0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator57.keyValue = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
children[9] = PositionInterpolator57;

TimeSensor TimeSensor58 = createNode("TimeSensor");
TimeSensor58.DEF = "OrbitClock";
TimeSensor58.cycleInterval = 8;
TimeSensor58.loop = True;
children[10] = TimeSensor58;

ROUTE ROUTE59 = createNode("ROUTE");
ROUTE59.fromField = "fraction_changed";
ROUTE59.fromNode = "OrbitClock";
ROUTE59.toField = "set_fraction";
ROUTE59.toNode = "BoxPathAnimator";
children[11] = ROUTE59;

ROUTE ROUTE60 = createNode("ROUTE");
ROUTE60.fromField = "value_changed";
ROUTE60.fromNode = "BoxPathAnimator";
ROUTE60.toField = "set_translation";
ROUTE60.toNode = "LogoGeometryTransform";
children[12] = ROUTE60;

Transform Transform61 = createNode("Transform");
Transform61.DEF = "TextTransform";
Transform61.translation = new SFVec3f(new float[0,-1.5,0]);
Shape Shape62 = createNode("Shape");
Appearance Appearance63 = createNode("Appearance");
Material Material64 = createNode("Material");
Material64.USE = "GreenMaterial";
Appearance63.material = Material64;

Shape62.appearance = Appearance63;

Text Text65 = createNode("Text");
Text65.string = new MFString(new java.lang.String["X3D Java","SAI Library","X3DJSAIL"]);
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
MetadataSet MetadataSet66 = createNode("MetadataSet");
MetadataSet66.name = "EscapedQuotationMarksMetadataSet";
MetadataString MetadataString67 = createNode("MetadataString");
MetadataString67.name = "quotesTestC";
MetadataString67.value = new MFString(new java.lang.String["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""]);
MetadataSet66.value = new MFNode();

MetadataSet66.value[0] = MetadataString67;

MetadataString MetadataString68 = createNode("MetadataString");
MetadataString68.name = "extraChildTest";
MetadataString68.value = new MFString(new java.lang.String["checks MetadataSetObject addValue() method"]);
MetadataSet66.value[1] = MetadataString68;

Text65.metadata = MetadataSet66;

FontStyle FontStyle69 = createNode("FontStyle");
FontStyle69.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text65.fontStyle = FontStyle69;

Shape62.geometry = Text65;

Transform61.children = new MFNode();

Transform61.children[0] = Shape62;

Collision Collision70 = createNode("Collision");
//test containerField='proxy'
Shape Shape71 = createNode("Shape");
Shape71.DEF = "ProxyShape";
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
//reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
Text Text72 = createNode("Text");
Text72.string = new MFString(new java.lang.String["One, Two, Text","","He said, \"Immel did it!\" \"\""]);
Shape71.geometry = Text72;

Collision70.proxy = Shape71;

Transform61.children[1] = Collision70;

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
children[13] = Transform61;

//repeatedly spin 180 degrees as a readable special effect
OrientationInterpolator OrientationInterpolator73 = createNode("OrientationInterpolator");
OrientationInterpolator73.DEF = "SpinInterpolator";
OrientationInterpolator73.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator73.keyValue = new MFRotation(new float[0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964]);
children[14] = OrientationInterpolator73;

TimeSensor TimeSensor74 = createNode("TimeSensor");
TimeSensor74.DEF = "SpinClock";
TimeSensor74.cycleInterval = 5;
TimeSensor74.loop = True;
children[15] = TimeSensor74;

ROUTE ROUTE75 = createNode("ROUTE");
ROUTE75.fromField = "fraction_changed";
ROUTE75.fromNode = "SpinClock";
ROUTE75.toField = "set_fraction";
ROUTE75.toNode = "SpinInterpolator";
children[16] = ROUTE75;

ROUTE ROUTE76 = createNode("ROUTE");
ROUTE76.fromField = "value_changed";
ROUTE76.fromNode = "SpinInterpolator";
ROUTE76.toField = "rotation";
ROUTE76.toNode = "TextTransform";
children[17] = ROUTE76;

Group Group77 = createNode("Group");
Group77.DEF = "BackgroundGroup";
Background Background78 = createNode("Background");
Background78.DEF = "GradualBackground";
Group77.children = new MFNode();

Group77.children[0] = Background78;

Script Script79 = createNode("Script");
Script79.DEF = "colorTypeConversionScript";
field field80 = createNode("field");
field80.name = "colorInput";
field80.accessType = "inputOnly";
field80.type = "SFColor";
Script79.field = new MFNode();

Script79.field[0] = field80;

field field81 = createNode("field");
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

ColorInterpolator ColorInterpolator82 = createNode("ColorInterpolator");
ColorInterpolator82.DEF = "ColorAnimator";
ColorInterpolator82.key = new MFFloat(new float[0,0.5,1]);
ColorInterpolator82.keyValue = new MFColor(new float[0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1]);
//AZURE to INDIGO and back again
Group77.children[2] = ColorInterpolator82;

TimeSensor TimeSensor83 = createNode("TimeSensor");
TimeSensor83.DEF = "ColorClock";
TimeSensor83.cycleInterval = 60;
TimeSensor83.loop = True;
Group77.children[3] = TimeSensor83;

ROUTE ROUTE84 = createNode("ROUTE");
ROUTE84.fromField = "colorsOutput";
ROUTE84.fromNode = "colorTypeConversionScript";
ROUTE84.toField = "skyColor";
ROUTE84.toNode = "GradualBackground";
Group77.children[4] = ROUTE84;

ROUTE ROUTE85 = createNode("ROUTE");
ROUTE85.fromField = "value_changed";
ROUTE85.fromNode = "ColorAnimator";
ROUTE85.toField = "colorInput";
ROUTE85.toNode = "colorTypeConversionScript";
Group77.children[5] = ROUTE85;

ROUTE ROUTE86 = createNode("ROUTE");
ROUTE86.fromField = "fraction_changed";
ROUTE86.fromNode = "ColorClock";
ROUTE86.toField = "set_fraction";
ROUTE86.toNode = "ColorAnimator";
Group77.children[6] = ROUTE86;

children[18] = Group77;

ProtoDeclare ProtoDeclare87 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare87.name = "ArtDeco01Material";
ProtoDeclare87.appinfo = "tooltip: ArtDeco01Material prototype is a Material node";
ProtoInterface ProtoInterface88 = createNode("ProtoInterface");
field field89 = createNode("field");
field89.name = "description";
field89.accessType = "inputOutput";
field89.appinfo = "tooltip for descriptionField";
field89.type = "SFString";
field89.value = "ArtDeco01Material prototype is a Material node";
ProtoInterface88.field = new MFNode();

ProtoInterface88.field[0] = field89;

field field90 = createNode("field");
field90.name = "enabled";
field90.accessType = "inputOutput";
field90.type = "SFBool";
field90.value = "true";
ProtoInterface88.field[1] = field90;

ProtoDeclare87.protoInterface = ProtoInterface88;

ProtoBody ProtoBody91 = createNode("ProtoBody");
//Initial node of ProtoBody determines prototype node type
Material Material92 = createNode("Material");
Material92.ambientIntensity = 0.25;
Material92.diffuseColor = new SFColor(new float[0.282435,0.085159,0.134462]);
Material92.shininess = 0.127273;
Material92.specularColor = new SFColor(new float[0.276305,0.11431,0.139857]);
ProtoBody91.children = new MFNode();

ProtoBody91.children[0] = Material92;

//[HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
TouchSensor TouchSensor93 = createNode("TouchSensor");
TouchSensor93.description = "within ProtoBody";
IS IS94 = createNode("IS");
connect connect95 = createNode("connect");
connect95.nodeField = "description";
connect95.protoField = "description";
IS94.connect = new MFNode();

IS94.connect[0] = connect95;

connect connect96 = createNode("connect");
connect96.nodeField = "enabled";
connect96.protoField = "enabled";
IS94.connect[1] = connect96;

TouchSensor93.iS = IS94;

ProtoBody91.children[1] = TouchSensor93;

ProtoDeclare87.protoBody = ProtoBody91;

children[19] = ProtoDeclare87;

ExternProtoDeclare ExternProtoDeclare97 = createNode("ExternProtoDeclare");
ExternProtoDeclare97.name = "ArtDeco02Material";
ExternProtoDeclare97.appinfo = "this is a different Material node";
ExternProtoDeclare97.url = new MFString(new java.lang.String["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"]);
//[HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
field field98 = createNode("field");
field98.name = "description";
field98.accessType = "inputOutput";
field98.appinfo = "tooltip for descriptionField";
field98.type = "SFString";
ExternProtoDeclare97.field = new MFNode();

ExternProtoDeclare97.field[0] = field98;

children[20] = ExternProtoDeclare97;

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
Shape Shape99 = createNode("Shape");
Shape99.DEF = "TestShape1";
Appearance Appearance100 = createNode("Appearance");
Appearance100.DEF = "TestAppearance1";
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance ProtoInstance101 = createNode("ProtoInstance");
ProtoInstance101.name = "ArtDeco01Material";
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
fieldValue fieldValue102 = createNode("fieldValue");
fieldValue102.name = "description";
fieldValue102.value = "ArtDeco01Material can substitute for a Material node";
ProtoInstance101.fieldValue = new MFNode();

ProtoInstance101.fieldValue[0] = fieldValue102;

Appearance100.shaders = new MFNode();

Appearance100.shaders[0] = ProtoInstance101;

Shape99.appearance = Appearance100;

Sphere Sphere103 = createNode("Sphere");
Sphere103.radius = 0.001;
Shape99.geometry = Sphere103;

children[21] = Shape99;

Shape Shape104 = createNode("Shape");
Shape104.DEF = "TestShape2";
Appearance Appearance105 = createNode("Appearance");
Appearance105.DEF = "TestAppearance2";
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance ProtoInstance106 = createNode("ProtoInstance");
ProtoInstance106.name = "ArtDeco02Material";
ProtoInstance106.DEF = "ArtDeco02MaterialDEF";
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
fieldValue fieldValue107 = createNode("fieldValue");
fieldValue107.name = "description";
fieldValue107.value = "ArtDeco02Material can substitute for another Material node";
ProtoInstance106.fieldValue = new MFNode();

ProtoInstance106.fieldValue[0] = fieldValue107;

Appearance105.shaders = new MFNode();

Appearance105.shaders[0] = ProtoInstance106;

Shape104.appearance = Appearance105;

Cone Cone108 = createNode("Cone");
Cone108.bottomRadius = 0.001;
Cone108.height = 0.001;
Shape104.geometry = Cone108;

children[22] = Shape104;

Shape Shape109 = createNode("Shape");
Shape109.DEF = "TestShape3";
Appearance Appearance110 = createNode("Appearance");
Appearance110.DEF = "TestAppearance3";
//ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE.
ProtoInstance ProtoInstance111 = createNode("ProtoInstance");
ProtoInstance111.USE = "ArtDeco02MaterialDEF";
Appearance110.shaders = new MFNode();

Appearance110.shaders[0] = ProtoInstance111;

Shape109.appearance = Appearance110;

Cylinder Cylinder112 = createNode("Cylinder");
Cylinder112.height = 0.001;
Cylinder112.radius = 0.001;
Shape109.geometry = Cylinder112;

children[23] = Shape109;

Inline Inline113 = createNode("Inline");
Inline113.DEF = "inlineSceneDef";
Inline113.url = new MFString(new java.lang.String["someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"]);
children[24] = Inline113;

IMPORT IMPORT114 = createNode("IMPORT");
IMPORT114.AS = "WorldInfoDEF2";
IMPORT114.importedDEF = "WorldInfoDEF";
IMPORT114.inlineDEF = "inlineSceneDef";
children[25] = IMPORT114;

EXPORT EXPORT115 = createNode("EXPORT");
EXPORT115.AS = "WorldInfoDEF3";
EXPORT115.localDEF = "WorldInfoDEF";
children[26] = EXPORT115;

ProtoDeclare ProtoDeclare116 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface ProtoInterface117 = createNode("ProtoInterface");
field field118 = createNode("field");
field118.name = "enabled";
field118.accessType = "inputOutput";
field118.type = "SFBool";
field118.value = "true";
ProtoInterface117.field = new MFNode();

ProtoInterface117.field[0] = field118;

field field119 = createNode("field");
field119.name = "diffuseColor";
field119.accessType = "inputOutput";
field119.type = "SFColor";
field119.value = "0 0 0";
ProtoInterface117.field[1] = field119;

field field120 = createNode("field");
field120.name = "emissiveColor";
field120.accessType = "inputOutput";
field120.type = "SFColor";
field120.value = "0.05 0.05 0.5";
ProtoInterface117.field[2] = field120;

field field121 = createNode("field");
field121.name = "specularColor";
field121.accessType = "inputOutput";
field121.type = "SFColor";
field121.value = "0 0 0";
ProtoInterface117.field[3] = field121;

field field122 = createNode("field");
field122.name = "transparency";
field122.accessType = "inputOutput";
field122.type = "SFFloat";
field122.value = "0";
ProtoInterface117.field[4] = field122;

field field123 = createNode("field");
field123.name = "shininess";
field123.accessType = "inputOutput";
field123.type = "SFFloat";
field123.value = "0";
ProtoInterface117.field[5] = field123;

field field124 = createNode("field");
field124.name = "ambientIntensity";
field124.accessType = "inputOutput";
field124.type = "SFFloat";
field124.value = "0";
ProtoInterface117.field[6] = field124;

ProtoDeclare116.protoInterface = ProtoInterface117;

ProtoBody ProtoBody125 = createNode("ProtoBody");
Material Material126 = createNode("Material");
Material126.DEF = "MaterialNode";
IS IS127 = createNode("IS");
connect connect128 = createNode("connect");
connect128.nodeField = "diffuseColor";
connect128.protoField = "diffuseColor";
IS127.connect = new MFNode();

IS127.connect[0] = connect128;

connect connect129 = createNode("connect");
connect129.nodeField = "emissiveColor";
connect129.protoField = "emissiveColor";
IS127.connect[1] = connect129;

connect connect130 = createNode("connect");
connect130.nodeField = "specularColor";
connect130.protoField = "specularColor";
IS127.connect[2] = connect130;

connect connect131 = createNode("connect");
connect131.nodeField = "transparency";
connect131.protoField = "transparency";
IS127.connect[3] = connect131;

connect connect132 = createNode("connect");
connect132.nodeField = "shininess";
connect132.protoField = "shininess";
IS127.connect[4] = connect132;

connect connect133 = createNode("connect");
connect133.nodeField = "ambientIntensity";
connect133.protoField = "ambientIntensity";
IS127.connect[5] = connect133;

Material126.iS = IS127;

ProtoBody125.children = new MFNode();

ProtoBody125.children[0] = Material126;

//Only first node (the node type) is renderable, others are along for the ride
Script Script134 = createNode("Script");
Script134.DEF = "MaterialModulatorScript";
field field135 = createNode("field");
field135.name = "enabled";
field135.accessType = "inputOutput";
field135.type = "SFBool";
Script134.field = new MFNode();

Script134.field[0] = field135;

field field136 = createNode("field");
field136.name = "diffuseColor";
field136.accessType = "inputOutput";
field136.type = "SFColor";
Script134.field[1] = field136;

field field137 = createNode("field");
field137.name = "newColor";
field137.accessType = "outputOnly";
field137.type = "SFColor";
Script134.field[2] = field137;

field field138 = createNode("field");
field138.name = "clockTrigger";
field138.accessType = "inputOnly";
field138.type = "SFTime";
Script134.field[3] = field138;

IS IS139 = createNode("IS");
connect connect140 = createNode("connect");
connect140.nodeField = "enabled";
connect140.protoField = "enabled";
IS139.connect = new MFNode();

IS139.connect[0] = connect140;

connect connect141 = createNode("connect");
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

children[27] = ProtoDeclare116;

//Test success: declarative statement createDeclarativeShapeTests()
Group Group142 = createNode("Group");
Group142.DEF = "DeclarativeGroupExample";
Shape Shape143 = createNode("Shape");
MetadataString MetadataString144 = createNode("MetadataString");
MetadataString144.name = "findThisNameValue";
MetadataString144.DEF = "FindableMetadataStringTest";
MetadataString144.value = new MFString(new java.lang.String["test case"]);
Shape143.metadata = new SFNode();

Shape143.metadata[0] = MetadataString144;

Appearance Appearance145 = createNode("Appearance");
Appearance145.DEF = "DeclarativeAppearanceExample";
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
ProtoInstance ProtoInstance146 = createNode("ProtoInstance");
ProtoInstance146.name = "MaterialModulator";
ProtoInstance146.DEF = "MyMaterialModulator";
Appearance145.shaders = new MFNode();

Appearance145.shaders[0] = ProtoInstance146;

Shape143.appearance = Appearance145;

Cone Cone147 = createNode("Cone");
Cone147.bottom = False;
Cone147.bottomRadius = 0.05;
Cone147.height = 0.1;
Shape143.geometry = Cone147;

Group142.children = new MFNode();

Group142.children[0] = Shape143;

//Test success: declarativeGroup.addChild() singleton pipeline method
children[28] = Group142;

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
Group Group148 = createNode("Group");
Group148.DEF = "TestFieldObjectsGroup";
//testFieldObjects() results
//SFBool default=true, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true
//regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotationObject.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value
children[29] = Group148;

Sound Sound149 = createNode("Sound");
Sound149.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
AudioClip AudioClip150 = createNode("AudioClip");
AudioClip150.description = "chimes";
AudioClip150.url = new MFString(new java.lang.String["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound149.source = AudioClip150;

children[30] = Sound149;

Sound Sound151 = createNode("Sound");
Sound151.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
MovieTexture MovieTexture152 = createNode("MovieTexture");
MovieTexture152.description = "mpgsys.mpg from ConformanceNist suite";
MovieTexture152.url = new MFString(new java.lang.String["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"watchList\"
Sound151.source = MovieTexture152;

children[31] = Sound151;

//Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true
//Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
Shape Shape153 = createNode("Shape");
Shape153.DEF = "ExtrusionShape";
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
Appearance Appearance154 = createNode("Appearance");
Appearance154.DEF = "TransparentAppearance";
Material Material155 = createNode("Material");
Material155.transparency = 1;
Appearance154.material = Material155;

Shape153.appearance = Appearance154;

Extrusion Extrusion156 = createNode("Extrusion");
Extrusion156.DEF = "ExampleExtrusion";
Shape153.geometry = Extrusion156;

children[32] = Shape153;

Group Group157 = createNode("Group");
//Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes
ProtoDeclare ProtoDeclare158 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="NewWorldInfo" ><ProtoInterface><field name="description" accessType="initializeOnly" type="SFString"></field>
</ProtoInterface>
<ProtoBody><WorldInfo></WorldInfo>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare158.name = "NewWorldInfo";
ProtoInterface ProtoInterface159 = createNode("ProtoInterface");
field field160 = createNode("field");
field160.name = "description";
field160.accessType = "initializeOnly";
field160.type = "SFString";
ProtoInterface159.field = new MFNode();

ProtoInterface159.field[0] = field160;

ProtoDeclare158.protoInterface = ProtoInterface159;

ProtoBody ProtoBody161 = createNode("ProtoBody");
WorldInfo WorldInfo162 = createNode("WorldInfo");
ProtoBody161.children = new MFNode();

ProtoBody161.children[0] = WorldInfo162;

ProtoDeclare158.protoBody = ProtoBody161;

Group157.children = new MFNode();

Group157.children[0] = ProtoDeclare158;

Group Group163 = createNode("Group");
Group163.DEF = "Node2";
//intentionally empty
Group157.children[1] = Group163;

Transform Transform164 = createNode("Transform");
Transform164.DEF = "Node4";
//intentionally empty
Group157.children[2] = Transform164;

//Test satisfactorily creates MFNode children array as an ordered list with mixed content
children[33] = Group157;

ProtoDeclare ProtoDeclare165 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ShaderProto" ><ProtoBody><ProgramShader></ProgramShader>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare165.name = "ShaderProto";
ProtoBody ProtoBody166 = createNode("ProtoBody");
ProgramShader ProgramShader167 = createNode("ProgramShader");
ProtoBody166.children = new MFNode();

ProtoBody166.children[0] = ProgramShader167;

ProtoDeclare165.protoBody = ProtoBody166;

children[34] = ProtoDeclare165;

Shape Shape168 = createNode("Shape");
Appearance Appearance169 = createNode("Appearance");
//Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes
//Test satisfactorily creates MFNode shaders array as an ordered list with mixed content
ProgramShader ProgramShader170 = createNode("ProgramShader");
ProgramShader170.DEF = "TestShader1";
ShaderProgram ShaderProgram171 = createNode("ShaderProgram");
ShaderProgram171.DEF = "TestShader2";
ShaderProgram171.type = "VERTEX";
ProgramShader170.programs = new MFNode();

ProgramShader170.programs[0] = ShaderProgram171;

Appearance169.shaders = new MFNode();

Appearance169.shaders[0] = ProgramShader170;

ProtoInstance ProtoInstance172 = createNode("ProtoInstance");
ProtoInstance172.name = "ShaderProto";
ProtoInstance172.DEF = "TestShader3";
Appearance169.shaders[1] = ProtoInstance172;

ComposedShader ComposedShader173 = createNode("ComposedShader");
ComposedShader173.DEF = "TestShader4";
ShaderPart ShaderPart174 = createNode("ShaderPart");
ShaderPart174.DEF = "TestShader5";
ShaderPart174.type = "VERTEX";
ComposedShader173.parts = new MFNode();

ComposedShader173.parts[0] = ShaderPart174;

Appearance169.shaders[2] = ComposedShader173;

Shape168.appearance = Appearance169;

children[35] = Shape168;

Transform Transform175 = createNode("Transform");
Transform175.DEF = "SpecialtyNodes";
CADLayer CADLayer176 = createNode("CADLayer");
CADAssembly CADAssembly177 = createNode("CADAssembly");
CADPart CADPart178 = createNode("CADPart");
CADFace CADFace179 = createNode("CADFace");
CADPart178.children = new MFNode();

CADPart178.children[0] = CADFace179;

CADAssembly177.children = new MFNode();

CADAssembly177.children[0] = CADPart178;

CADLayer176.children = new MFNode();

CADLayer176.children[0] = CADAssembly177;

Transform175.children = new MFNode();

Transform175.children[0] = CADLayer176;

EspduTransform EspduTransform180 = createNode("EspduTransform");
Transform175.children[1] = EspduTransform180;

ReceiverPdu ReceiverPdu181 = createNode("ReceiverPdu");
Transform175.children[2] = ReceiverPdu181;

SignalPdu SignalPdu182 = createNode("SignalPdu");
Transform175.children[3] = SignalPdu182;

TransmitterPdu TransmitterPdu183 = createNode("TransmitterPdu");
Transform175.children[4] = TransmitterPdu183;

DISEntityManager DISEntityManager184 = createNode("DISEntityManager");
DISEntityTypeMapping DISEntityTypeMapping185 = createNode("DISEntityTypeMapping");
DISEntityManager184.children = new MFNode();

DISEntityManager184.children[0] = DISEntityTypeMapping185;

Transform175.children[5] = DISEntityManager184;

children[36] = Transform175;

}
