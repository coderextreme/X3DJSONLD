#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
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
component3.name = "Layering";
component3.level = 1;
head1.component[1] = component3;

unit unit4 = createNode("unit");
unit4.name = "AngleUnitConversion";
unit4.category = "angle";
unit4.conversionFactor = 1;
head1.unit[2] = unit4;

unit unit5 = createNode("unit");
unit5.name = "LengthUnitConversion";
unit5.category = "length";
unit5.conversionFactor = 1;
head1.unit[3] = unit5;

meta meta6 = createNode("meta");
meta6.name = "title";
meta6.content = "Quotes.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "description";
meta7.content = "Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface (SAI) Library";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "https://www.web3d.org/specifications/java/X3DJSAIL.html";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "generator";
meta9.content = "HelloWorldProgramOutput.java";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "created";
meta10.content = "6 September 2016";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "modified";
meta11.content = "7 April 2018";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "generator";
meta12.content = "X3D Java Scene Access Interface Library (X3DJSAIL)";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "generator";
meta13.content = "https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "generator";
meta14.content = "Netbeans http://www.netbeans.org";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "creator";
meta15.content = "Don Brutzman";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "reference";
meta16.content = "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "reference";
meta17.content = "Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "HelloWorldProgramOutput.txt";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "reference";
meta19.content = "HelloWorldProgramOutput.x3dv";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "reference";
meta20.content = "HelloWorldProgramOutput.wrl";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "reference";
meta21.content = "HelloWorldProgramOutput.html";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "reference";
meta22.content = "X3dValidator https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "identifier";
meta23.content = "https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "license";
meta24.content = "../license.html";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "info";
meta25.content = "tested sat: name value cannot contain embedded space character";
head1.meta[23] = meta25;

meta meta26 = createNode("meta");
meta26.name = "translated";
meta26.content = "30 April 2018";
head1.meta[24] = meta26;

meta meta27 = createNode("meta");
meta27.name = "generator";
meta27.content = "X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html";
head1.meta[25] = meta27;

meta meta28 = createNode("meta");
meta28.name = "reference";
meta28.content = "X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding";
head1.meta[26] = meta28;

head = head1;

ViewpointGroup ViewpointGroup30 = createNode("ViewpointGroup");
ViewpointGroup30.description = "Available viewpoints";
Viewpoint Viewpoint31 = createNode("Viewpoint");
Viewpoint31.DEF = "DefaultView";
Viewpoint31.description = "Hello X3DJSAIL";
ViewpointGroup30.children = new MFNode();

ViewpointGroup30.children[0] = Viewpoint31;

Viewpoint Viewpoint32 = createNode("Viewpoint");
Viewpoint32.DEF = "TopDownView";
Viewpoint32.description = "top-down view from above";
Viewpoint32.orientation = new SFRotation(new float[1,0,0,-1.570796]);
Viewpoint32.position = new SFVec3f(new float[0,100,0]);
ViewpointGroup30.children[1] = Viewpoint32;

children = new MFNode();

children[0] = ViewpointGroup30;

WorldInfo WorldInfo33 = createNode("WorldInfo");
WorldInfo33.DEF = "WorldInfoDEF";
WorldInfo33.title = "HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)";
children[1] = WorldInfo33;

WorldInfo WorldInfo34 = createNode("WorldInfo");
WorldInfo34.USE = "WorldInfoDEF";
children[2] = WorldInfo34;

WorldInfo WorldInfo35 = createNode("WorldInfo");
WorldInfo35.USE = "WorldInfoDEF";
children[3] = WorldInfo35;

MetadataString MetadataString36 = createNode("MetadataString");
MetadataString36.name = "test";
MetadataString36.DEF = "scene.addChildMetadata";
MetadataString36.value = new MFString(new java.lang.String["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"]);
metadata[4] = MetadataString36;

LayerSet LayerSet37 = createNode("LayerSet");
LayerSet37.DEF = "scene.addChildLayerSetTest";
layerSet[5] = LayerSet37;

Transform Transform38 = createNode("Transform");
Transform38.DEF = "LogoGeometryTransform";
Transform38.translation = new SFVec3f(new float[0,1.5,0]);
Anchor Anchor39 = createNode("Anchor");
Anchor39.description = "select for X3D Java SAI Library (X3DJSAIL) description";
Anchor39.url = new MFString(new java.lang.String["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"]);
Shape Shape40 = createNode("Shape");
Shape40.DEF = "BoxShape";
Appearance Appearance41 = createNode("Appearance");
Material Material42 = createNode("Material");
Material42.DEF = "GreenMaterial";
Material42.diffuseColor = new SFColor(new float[0,1,1]);
Material42.emissiveColor = new SFColor(new float[0.8,0,0]);
Material42.transparency = 0.1;
Appearance41.material = Material42;

ImageTexture ImageTexture43 = createNode("ImageTexture");
ImageTexture43.url = new MFString(new java.lang.String["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"]);
Appearance41.texture = ImageTexture43;

Shape40.appearance = Appearance41;

Box Box44 = createNode("Box");
Box44.DEF = "test-NMTOKEN_regex.0123456789";
Box44.CssClass = "untextured";
Shape40.geometry = Box44;

Anchor39.children = new MFNode();

Anchor39.children[0] = Shape40;

Transform38.children = new MFNode();

Transform38.children[0] = Anchor39;

children[6] = Transform38;

Shape Shape45 = createNode("Shape");
Shape45.DEF = "LineShape";
Appearance Appearance46 = createNode("Appearance");
Material Material47 = createNode("Material");
Material47.emissiveColor = new SFColor(new float[0.6,0.19607843,0.8]);
Appearance46.material = Material47;

Shape45.appearance = Appearance46;

IndexedLineSet IndexedLineSet48 = createNode("IndexedLineSet");
IndexedLineSet48.coordIndex = new MFInt32(new int[0,1,2,3,4,0]);
//Coordinate 3-tuple point count: 6
Coordinate Coordinate49 = createNode("Coordinate");
Coordinate49.point = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
IndexedLineSet48.coord = Coordinate49;

Shape45.geometry = IndexedLineSet48;

children[7] = Shape45;

PositionInterpolator PositionInterpolator50 = createNode("PositionInterpolator");
PositionInterpolator50.DEF = "BoxPathAnimator";
PositionInterpolator50.key = new MFFloat(new float[0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator50.keyValue = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
children[8] = PositionInterpolator50;

TimeSensor TimeSensor51 = createNode("TimeSensor");
TimeSensor51.DEF = "OrbitClock";
TimeSensor51.cycleInterval = 8;
TimeSensor51.loop = True;
children[9] = TimeSensor51;

ROUTE ROUTE52 = createNode("ROUTE");
ROUTE52.fromField = "fraction_changed";
ROUTE52.fromNode = "OrbitClock";
ROUTE52.toField = "set_fraction";
ROUTE52.toNode = "BoxPathAnimator";
children[10] = ROUTE52;

ROUTE ROUTE53 = createNode("ROUTE");
ROUTE53.fromField = "value_changed";
ROUTE53.fromNode = "BoxPathAnimator";
ROUTE53.toField = "set_translation";
ROUTE53.toNode = "LogoGeometryTransform";
children[11] = ROUTE53;

Transform Transform54 = createNode("Transform");
Transform54.DEF = "TextTransform";
Transform54.translation = new SFVec3f(new float[0,-1.5,0]);
Shape Shape55 = createNode("Shape");
Appearance Appearance56 = createNode("Appearance");
Material Material57 = createNode("Material");
Material57.USE = "GreenMaterial";
Appearance56.material = Material57;

Shape55.appearance = Appearance56;

Text Text58 = createNode("Text");
Text58.string = new MFString(new java.lang.String["X3D Java","SAI Library","X3DJSAIL"]);
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
MetadataSet MetadataSet59 = createNode("MetadataSet");
MetadataSet59.name = "EscapedQuotationMarksMetadataSet";
MetadataString MetadataString60 = createNode("MetadataString");
MetadataString60.name = "quotesTestC";
MetadataString60.value = new MFString(new java.lang.String["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""]);
MetadataSet59.value = new MFNode();

MetadataSet59.value[0] = MetadataString60;

MetadataString MetadataString61 = createNode("MetadataString");
MetadataString61.name = "extraChildTest";
MetadataString61.value = new MFString(new java.lang.String["checks MetadataSetObject addValue() method"]);
MetadataSet59.value[1] = MetadataString61;

Text58.metadata = MetadataSet59;

FontStyle FontStyle62 = createNode("FontStyle");
FontStyle62.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text58.fontStyle = FontStyle62;

Shape55.geometry = Text58;

Transform54.children = new MFNode();

Transform54.children[0] = Shape55;

Collision Collision63 = createNode("Collision");
//test containerField='proxy'
Shape Shape64 = createNode("Shape");
Shape64.DEF = "ProxyShape";
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"\"Immel did it!\\\"\"\\\"\"})
//reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
Text Text65 = createNode("Text");
Text65.string = new MFString(new java.lang.String["One, Two, Text","","He said, \"Immel did it!\" \"\""]);
Shape64.geometry = Text65;

Collision63.proxy = Shape64;

Transform54.children[1] = Collision63;

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
children[12] = Transform54;

//repeatedly spin 180 degrees as a readable special effect
OrientationInterpolator OrientationInterpolator66 = createNode("OrientationInterpolator");
OrientationInterpolator66.DEF = "SpinInterpolator";
OrientationInterpolator66.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator66.keyValue = new MFRotation(new float[0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964]);
children[13] = OrientationInterpolator66;

TimeSensor TimeSensor67 = createNode("TimeSensor");
TimeSensor67.DEF = "SpinClock";
TimeSensor67.cycleInterval = 5;
TimeSensor67.loop = True;
children[14] = TimeSensor67;

ROUTE ROUTE68 = createNode("ROUTE");
ROUTE68.fromField = "fraction_changed";
ROUTE68.fromNode = "SpinClock";
ROUTE68.toField = "set_fraction";
ROUTE68.toNode = "SpinInterpolator";
children[15] = ROUTE68;

ROUTE ROUTE69 = createNode("ROUTE");
ROUTE69.fromField = "value_changed";
ROUTE69.fromNode = "SpinInterpolator";
ROUTE69.toField = "rotation";
ROUTE69.toNode = "TextTransform";
children[16] = ROUTE69;

Group Group70 = createNode("Group");
Group70.DEF = "BackgroundGroup";
Background Background71 = createNode("Background");
Background71.DEF = "GradualBackground";
Group70.children = new MFNode();

Group70.children[0] = Background71;

Script Script72 = createNode("Script");
Script72.DEF = "colorTypeConversionScript";
field field73 = createNode("field");
field73.name = "colorInput";
field73.accessType = "inputOnly";
field73.type = "SFColor";
Script72.field = new MFNode();

Script72.field[0] = field73;

field field74 = createNode("field");
field74.name = "colorsOutput";
field74.accessType = "outputOnly";
field74.type = "MFColor";
Script72.field[1] = field74;


Script72.setSourceCode(`ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}`)
Group70.children[1] = Script72;

ColorInterpolator ColorInterpolator75 = createNode("ColorInterpolator");
ColorInterpolator75.DEF = "ColorAnimator";
ColorInterpolator75.key = new MFFloat(new float[0,0.5,1]);
ColorInterpolator75.keyValue = new MFColor(new float[0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1]);
//AZURE to INDIGO and back again
Group70.children[2] = ColorInterpolator75;

TimeSensor TimeSensor76 = createNode("TimeSensor");
TimeSensor76.DEF = "ColorClock";
TimeSensor76.cycleInterval = 60;
TimeSensor76.loop = True;
Group70.children[3] = TimeSensor76;

ROUTE ROUTE77 = createNode("ROUTE");
ROUTE77.fromField = "colorsOutput";
ROUTE77.fromNode = "colorTypeConversionScript";
ROUTE77.toField = "skyColor";
ROUTE77.toNode = "GradualBackground";
Group70.children[4] = ROUTE77;

ROUTE ROUTE78 = createNode("ROUTE");
ROUTE78.fromField = "value_changed";
ROUTE78.fromNode = "ColorAnimator";
ROUTE78.toField = "colorInput";
ROUTE78.toNode = "colorTypeConversionScript";
Group70.children[5] = ROUTE78;

ROUTE ROUTE79 = createNode("ROUTE");
ROUTE79.fromField = "fraction_changed";
ROUTE79.fromNode = "ColorClock";
ROUTE79.toField = "set_fraction";
ROUTE79.toNode = "ColorAnimator";
Group70.children[6] = ROUTE79;

children[17] = Group70;

ProtoDeclare ProtoDeclare80 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
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
ProtoDeclare80.name = "ArtDeco01Material";
ProtoDeclare80.appinfo = "tooltip: ArtDeco01Material prototype is a Material node";
ProtoInterface ProtoInterface81 = createNode("ProtoInterface");
field field82 = createNode("field");
field82.name = "description";
field82.accessType = "inputOutput";
field82.appinfo = "tooltip for descriptionField";
field82.type = "SFString";
field82.value = "ArtDeco01Material prototype is a Material node";
ProtoInterface81.field = new MFNode();

ProtoInterface81.field[0] = field82;

field field83 = createNode("field");
field83.name = "enabled";
field83.accessType = "inputOutput";
field83.type = "SFBool";
field83.value = "true";
ProtoInterface81.field[1] = field83;

ProtoDeclare80.protoInterface = ProtoInterface81;

ProtoBody ProtoBody84 = createNode("ProtoBody");
//Initial node of ProtoBody determines prototype node type
Material Material85 = createNode("Material");
Material85.ambientIntensity = 0.25;
Material85.diffuseColor = new SFColor(new float[0.282435,0.085159,0.134462]);
Material85.shininess = 0.127273;
Material85.specularColor = new SFColor(new float[0.276305,0.11431,0.139857]);
ProtoBody84.children = new MFNode();

ProtoBody84.children[0] = Material85;

//[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
TouchSensor TouchSensor86 = createNode("TouchSensor");
TouchSensor86.description = "within ProtoBody";
IS IS87 = createNode("IS");
connect connect88 = createNode("connect");
connect88.nodeField = "description";
connect88.protoField = "description";
IS87.connect = new MFNode();

IS87.connect[0] = connect88;

connect connect89 = createNode("connect");
connect89.nodeField = "enabled";
connect89.protoField = "enabled";
IS87.connect[1] = connect89;

TouchSensor86.iS = IS87;

ProtoBody84.children[1] = TouchSensor86;

ProtoDeclare80.protoBody = ProtoBody84;

children[18] = ProtoDeclare80;

ExternProtoDeclare ExternProtoDeclare90 = createNode("ExternProtoDeclare");
ExternProtoDeclare90.name = "ArtDeco02Material";
ExternProtoDeclare90.appinfo = "this is a different Material node";
ExternProtoDeclare90.url = new MFString(new java.lang.String["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"]);
//[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
field field91 = createNode("field");
field91.name = "description";
field91.accessType = "inputOutput";
field91.appinfo = "tooltip for descriptionField";
field91.type = "SFString";
ExternProtoDeclare90.field = new MFNode();

ExternProtoDeclare90.field[0] = field91;

children[19] = ExternProtoDeclare90;

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
Shape Shape92 = createNode("Shape");
Shape92.DEF = "TestShape1";
Appearance Appearance93 = createNode("Appearance");
Appearance93.DEF = "TestAppearance1";
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance ProtoInstance94 = createNode("ProtoInstance");
ProtoInstance94.name = "ArtDeco01Material";
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
fieldValue fieldValue95 = createNode("fieldValue");
fieldValue95.name = "description";
fieldValue95.value = "ArtDeco01Material can substitute for a Material node";
ProtoInstance94.fieldValue = new MFNode();

ProtoInstance94.fieldValue[0] = fieldValue95;

Appearance93.shaders = new MFNode();

Appearance93.shaders[0] = ProtoInstance94;

Shape92.appearance = Appearance93;

Sphere Sphere96 = createNode("Sphere");
Sphere96.radius = 0.001;
Shape92.geometry = Sphere96;

children[20] = Shape92;

Shape Shape97 = createNode("Shape");
Shape97.DEF = "TestShape2";
Appearance Appearance98 = createNode("Appearance");
Appearance98.DEF = "TestAppearance2";
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance ProtoInstance99 = createNode("ProtoInstance");
ProtoInstance99.name = "ArtDeco02Material";
ProtoInstance99.DEF = "ArtDeco02MaterialDEF";
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
fieldValue fieldValue100 = createNode("fieldValue");
fieldValue100.name = "description";
fieldValue100.value = "ArtDeco02Material can substitute for another Material node";
ProtoInstance99.fieldValue = new MFNode();

ProtoInstance99.fieldValue[0] = fieldValue100;

Appearance98.shaders = new MFNode();

Appearance98.shaders[0] = ProtoInstance99;

Shape97.appearance = Appearance98;

Cone Cone101 = createNode("Cone");
Cone101.bottomRadius = 0.001;
Cone101.height = 0.001;
Shape97.geometry = Cone101;

children[21] = Shape97;

Shape Shape102 = createNode("Shape");
Shape102.DEF = "TestShape3";
Appearance Appearance103 = createNode("Appearance");
Appearance103.DEF = "TestAppearance3";
//ArtDeco02Material ProtoInstance USE goes here...
ProtoInstance ProtoInstance104 = createNode("ProtoInstance");
ProtoInstance104.USE = "ArtDeco02MaterialDEF";
Appearance103.shaders = new MFNode();

Appearance103.shaders[0] = ProtoInstance104;

Shape102.appearance = Appearance103;

Cylinder Cylinder105 = createNode("Cylinder");
Cylinder105.height = 0.001;
Cylinder105.radius = 0.001;
Shape102.geometry = Cylinder105;

children[22] = Shape102;

Inline Inline106 = createNode("Inline");
Inline106.DEF = "inlineSceneDef";
Inline106.url = new MFString(new java.lang.String["someOtherScene.x3d"]);
children[23] = Inline106;

IMPORT IMPORT107 = createNode("IMPORT");
IMPORT107.AS = "WorldInfoDEF2";
IMPORT107.importedDEF = "WorldInfoDEF";
IMPORT107.inlineDEF = "inlineSceneDef";
children[24] = IMPORT107;

EXPORT EXPORT108 = createNode("EXPORT");
EXPORT108.AS = "WorldInfoDEF3";
EXPORT108.localDEF = "WorldInfoDEF";
children[25] = EXPORT108;

ProtoDeclare ProtoDeclare109 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
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
ProtoDeclare109.name = "MaterialModulator";
ProtoDeclare109.appinfo = "mimic a Material node and modulate fields as an animation effect";
ProtoDeclare109.documentation = "http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html";
ProtoInterface ProtoInterface110 = createNode("ProtoInterface");
field field111 = createNode("field");
field111.name = "enabled";
field111.accessType = "inputOutput";
field111.type = "SFBool";
field111.value = "true";
ProtoInterface110.field = new MFNode();

ProtoInterface110.field[0] = field111;

field field112 = createNode("field");
field112.name = "diffuseColor";
field112.accessType = "inputOutput";
field112.type = "SFColor";
field112.value = "0 0 0";
ProtoInterface110.field[1] = field112;

field field113 = createNode("field");
field113.name = "emissiveColor";
field113.accessType = "inputOutput";
field113.type = "SFColor";
field113.value = "0.05 0.05 0.5";
ProtoInterface110.field[2] = field113;

field field114 = createNode("field");
field114.name = "specularColor";
field114.accessType = "inputOutput";
field114.type = "SFColor";
field114.value = "0 0 0";
ProtoInterface110.field[3] = field114;

field field115 = createNode("field");
field115.name = "transparency";
field115.accessType = "inputOutput";
field115.type = "SFFloat";
field115.value = "0";
ProtoInterface110.field[4] = field115;

field field116 = createNode("field");
field116.name = "shininess";
field116.accessType = "inputOutput";
field116.type = "SFFloat";
field116.value = "0";
ProtoInterface110.field[5] = field116;

field field117 = createNode("field");
field117.name = "ambientIntensity";
field117.accessType = "inputOutput";
field117.type = "SFFloat";
field117.value = "0";
ProtoInterface110.field[6] = field117;

ProtoDeclare109.protoInterface = ProtoInterface110;

ProtoBody ProtoBody118 = createNode("ProtoBody");
Material Material119 = createNode("Material");
Material119.DEF = "MaterialNode";
IS IS120 = createNode("IS");
connect connect121 = createNode("connect");
connect121.nodeField = "diffuseColor";
connect121.protoField = "diffuseColor";
IS120.connect = new MFNode();

IS120.connect[0] = connect121;

connect connect122 = createNode("connect");
connect122.nodeField = "emissiveColor";
connect122.protoField = "emissiveColor";
IS120.connect[1] = connect122;

connect connect123 = createNode("connect");
connect123.nodeField = "specularColor";
connect123.protoField = "specularColor";
IS120.connect[2] = connect123;

connect connect124 = createNode("connect");
connect124.nodeField = "transparency";
connect124.protoField = "transparency";
IS120.connect[3] = connect124;

connect connect125 = createNode("connect");
connect125.nodeField = "shininess";
connect125.protoField = "shininess";
IS120.connect[4] = connect125;

connect connect126 = createNode("connect");
connect126.nodeField = "ambientIntensity";
connect126.protoField = "ambientIntensity";
IS120.connect[5] = connect126;

Material119.iS = IS120;

ProtoBody118.children = new MFNode();

ProtoBody118.children[0] = Material119;

//Only first node (the node type) is renderable, others are along for the ride
Script Script127 = createNode("Script");
Script127.DEF = "MaterialModulatorScript";
field field128 = createNode("field");
field128.name = "enabled";
field128.accessType = "inputOutput";
field128.type = "SFBool";
Script127.field = new MFNode();

Script127.field[0] = field128;

field field129 = createNode("field");
field129.name = "diffuseColor";
field129.accessType = "inputOutput";
field129.type = "SFColor";
Script127.field[1] = field129;

field field130 = createNode("field");
field130.name = "newColor";
field130.accessType = "outputOnly";
field130.type = "SFColor";
Script127.field[2] = field130;

field field131 = createNode("field");
field131.name = "clockTrigger";
field131.accessType = "inputOnly";
field131.type = "SFTime";
Script127.field[3] = field131;

IS IS132 = createNode("IS");
connect connect133 = createNode("connect");
connect133.nodeField = "enabled";
connect133.protoField = "enabled";
IS132.connect = new MFNode();

IS132.connect[0] = connect133;

connect connect134 = createNode("connect");
connect134.nodeField = "diffuseColor";
connect134.protoField = "diffuseColor";
IS132.connect[1] = connect134;

Script127.iS = IS132;


Script127.setSourceCode(`ecmascript:\n"+
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
ProtoBody118.children[1] = Script127;

ProtoDeclare109.protoBody = ProtoBody118;

children[26] = ProtoDeclare109;

//Test success: declarative statement createDeclarativeShapeTests()
Group Group135 = createNode("Group");
Group135.DEF = "DeclarativeGroupExample";
Shape Shape136 = createNode("Shape");
MetadataString MetadataString137 = createNode("MetadataString");
MetadataString137.name = "findThisNameValue";
MetadataString137.DEF = "FindableMetadataStringTest";
MetadataString137.value = new MFString(new java.lang.String["test case"]);
Shape136.metadata = new SFNode();

Shape136.metadata[0] = MetadataString137;

Appearance Appearance138 = createNode("Appearance");
Appearance138.DEF = "DeclarativeAppearanceExample";
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
ProtoInstance ProtoInstance139 = createNode("ProtoInstance");
ProtoInstance139.name = "MaterialModulator";
ProtoInstance139.DEF = "MyMaterialModulator";
Appearance138.shaders = new MFNode();

Appearance138.shaders[0] = ProtoInstance139;

Shape136.appearance = Appearance138;

Cone Cone140 = createNode("Cone");
Cone140.bottom = False;
Cone140.bottomRadius = 0.05;
Cone140.height = 0.1;
Shape136.geometry = Cone140;

Group135.children = new MFNode();

Group135.children[0] = Shape136;

//Test success: declarativeGroup.addChild() singleton pipeline method
children[27] = Group135;

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
Group Group141 = createNode("Group");
Group141.DEF = "TestFieldObjectsGroup";
//testFieldObjects() results
//SFBool default=true, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344
children[28] = Group141;

Sound Sound142 = createNode("Sound");
Sound142.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
AudioClip AudioClip143 = createNode("AudioClip");
AudioClip143.description = "chimes";
AudioClip143.url = new MFString(new java.lang.String["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound142.source = AudioClip143;

children[29] = Sound142;

Sound Sound144 = createNode("Sound");
Sound144.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
MovieTexture MovieTexture145 = createNode("MovieTexture");
MovieTexture145.description = "mpgsys.mpg from ConformanceNist suite";
MovieTexture145.url = new MFString(new java.lang.String["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\"
Sound144.source = MovieTexture145;

children[30] = Sound144;

//Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true
//Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
Shape Shape146 = createNode("Shape");
Shape146.DEF = "ExtrusionShape";
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
Appearance Appearance147 = createNode("Appearance");
Appearance147.DEF = "TransparentAppearance";
Material Material148 = createNode("Material");
Material148.transparency = 1;
Appearance147.material = Material148;

Shape146.appearance = Appearance147;

Extrusion Extrusion149 = createNode("Extrusion");
Extrusion149.DEF = "ExampleExtrusion";
Shape146.geometry = Extrusion149;

children[31] = Shape146;

}
