#include "/c/x3d-code/www.web3d.org/x3d/languages/c/X3DLib/X3DLib.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
//x3dVersionComparisonTest for this model: supportsX3dVersion(X3DObject.VERSION_3_0)=true
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
component4.name = "Layering";
component4.level = 1;
head1.component[2] = component4;

unit unit5 = createNode("unit");
unit5.name = "AngleUnitConversion";
unit5.category = "angle";
unit5.conversionFactor = 1;
head1.unit[3] = unit5;

unit unit6 = createNode("unit");
unit6.name = "LengthUnitConversion";
unit6.category = "length";
unit6.conversionFactor = 1;
head1.unit[4] = unit6;

meta meta7 = createNode("meta");
meta7.name = "title";
meta7.content = "HelloWorldProgramOutputCanonical.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "description";
meta8.content = "Example HelloWorldProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "reference";
meta9.content = "https://www.web3d.org/specifications/java/X3DJSAIL.html";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "generator";
meta10.content = "HelloWorldProgramOutput.java";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "created";
meta11.content = "6 September 2016";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "modified";
meta12.content = "27 December 2018";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "generator";
meta13.content = "X3D Java Scene Access Interface Library (X3DJSAIL)";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "generator";
meta14.content = "https://www.web3d.org/specifications/java/examples/HelloWorldProgram.java";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "generator";
meta15.content = "Netbeans https://www.netbeans.org";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "creator";
meta16.content = "Don Brutzman";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "reference";
meta17.content = "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "reference";
meta18.content = "Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "reference";
meta19.content = "HelloWorldProgramOutput.txt";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "reference";
meta20.content = "HelloWorldProgramOutput.x3dv";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "reference";
meta21.content = "HelloWorldProgramOutput.wrl";
head1.meta[19] = meta21;

meta meta22 = createNode("meta");
meta22.name = "reference";
meta22.content = "HelloWorldProgramOutput.html";
head1.meta[20] = meta22;

meta meta23 = createNode("meta");
meta23.name = "reference";
meta23.content = "https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d";
head1.meta[21] = meta23;

meta meta24 = createNode("meta");
meta24.name = "identifier";
meta24.content = "https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d";
head1.meta[22] = meta24;

meta meta25 = createNode("meta");
meta25.name = "license";
meta25.content = "../license.html";
head1.meta[23] = meta25;

head = head1;

ViewpointGroup ViewpointGroup27 = createNode("ViewpointGroup");
ViewpointGroup27.description = "Available viewpoints";
Viewpoint Viewpoint28 = createNode("Viewpoint");
Viewpoint28.DEF = "DefaultView";
Viewpoint28.description = "Hello X3DJSAIL";
ViewpointGroup27.children = new MFNode();

ViewpointGroup27.children[0] = Viewpoint28;

Viewpoint Viewpoint29 = createNode("Viewpoint");
Viewpoint29.DEF = "TopDownView";
Viewpoint29.description = "top-down view from above";
Viewpoint29.orientation = new SFRotation(new float[1,0,0,-1.570796]);
Viewpoint29.position = new SFVec3f(new float[0,100,0]);
ViewpointGroup27.children[1] = Viewpoint29;

children = new MFNode();

children[0] = ViewpointGroup27;

NavigationInfo NavigationInfo30 = createNode("NavigationInfo");
NavigationInfo30.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
children[1] = NavigationInfo30;

WorldInfo WorldInfo31 = createNode("WorldInfo");
WorldInfo31.DEF = "WorldInfoDEF";
WorldInfo31.title = "HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)";
children[2] = WorldInfo31;

WorldInfo WorldInfo32 = createNode("WorldInfo");
WorldInfo32.USE = "WorldInfoDEF";
children[3] = WorldInfo32;

WorldInfo WorldInfo33 = createNode("WorldInfo");
WorldInfo33.USE = "WorldInfoDEF";
children[4] = WorldInfo33;

MetadataString MetadataString34 = createNode("MetadataString");
MetadataString34.name = "test";
MetadataString34.DEF = "scene.addChildMetadata";
MetadataString34.value = new MFString(new java.lang.String["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"]);
metadata[5] = MetadataString34;

LayerSet LayerSet35 = createNode("LayerSet");
LayerSet35.DEF = "scene.addChildLayerSetTest";
layerSet[6] = LayerSet35;

Transform Transform36 = createNode("Transform");
Transform36.DEF = "LogoGeometryTransform";
Transform36.translation = new SFVec3f(new float[0,1.5,0]);
Anchor Anchor37 = createNode("Anchor");
Anchor37.description = "select for X3D Java SAI Library (X3DJSAIL) description";
Anchor37.url = new MFString(new java.lang.String["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"]);
Shape Shape38 = createNode("Shape");
Shape38.DEF = "BoxShape";
Appearance Appearance39 = createNode("Appearance");
Material Material40 = createNode("Material");
Material40.DEF = "GreenMaterial";
Material40.diffuseColor = new SFColor(new float[0,1,1]);
Material40.emissiveColor = new SFColor(new float[0.8,0,0]);
Material40.transparency = 0.1;
Appearance39.material = Material40;

ImageTexture ImageTexture41 = createNode("ImageTexture");
ImageTexture41.url = new MFString(new java.lang.String["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"]);
Appearance39.texture = ImageTexture41;

Shape38.appearance = Appearance39;

Box Box42 = createNode("Box");
Box42.DEF = "test-NMTOKEN_regex.0123456789";
Box42.CssClass = "untextured";
Shape38.geometry = Box42;

Anchor37.children = new MFNode();

Anchor37.children[0] = Shape38;

Transform36.children = new MFNode();

Transform36.children[0] = Anchor37;

children[7] = Transform36;

Shape Shape43 = createNode("Shape");
Shape43.DEF = "LineShape";
Appearance Appearance44 = createNode("Appearance");
Material Material45 = createNode("Material");
Material45.emissiveColor = new SFColor(new float[0.6,0.19607843,0.8]);
Appearance44.material = Material45;

Shape43.appearance = Appearance44;

IndexedLineSet IndexedLineSet46 = createNode("IndexedLineSet");
IndexedLineSet46.coordIndex = new MFInt32(new int[0,1,2,3,4,0]);
//Coordinate 3-tuple point count: 6
Coordinate Coordinate47 = createNode("Coordinate");
Coordinate47.point = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
IndexedLineSet46.coord = Coordinate47;

Shape43.geometry = IndexedLineSet46;

children[8] = Shape43;

PositionInterpolator PositionInterpolator48 = createNode("PositionInterpolator");
PositionInterpolator48.DEF = "BoxPathAnimator";
PositionInterpolator48.key = new MFFloat(new float[0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator48.keyValue = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
children[9] = PositionInterpolator48;

TimeSensor TimeSensor49 = createNode("TimeSensor");
TimeSensor49.DEF = "OrbitClock";
TimeSensor49.cycleInterval = 8;
TimeSensor49.loop = True;
children[10] = TimeSensor49;

ROUTE ROUTE50 = createNode("ROUTE");
ROUTE50.fromField = "fraction_changed";
ROUTE50.fromNode = "OrbitClock";
ROUTE50.toField = "set_fraction";
ROUTE50.toNode = "BoxPathAnimator";
children[11] = ROUTE50;

ROUTE ROUTE51 = createNode("ROUTE");
ROUTE51.fromField = "value_changed";
ROUTE51.fromNode = "BoxPathAnimator";
ROUTE51.toField = "set_translation";
ROUTE51.toNode = "LogoGeometryTransform";
children[12] = ROUTE51;

Transform Transform52 = createNode("Transform");
Transform52.DEF = "TextTransform";
Transform52.translation = new SFVec3f(new float[0,-1.5,0]);
Shape Shape53 = createNode("Shape");
Appearance Appearance54 = createNode("Appearance");
Material Material55 = createNode("Material");
Material55.USE = "GreenMaterial";
Appearance54.material = Material55;

Shape53.appearance = Appearance54;

Text Text56 = createNode("Text");
Text56.string = new MFString(new java.lang.String["X3D Java","SAI Library","X3DJSAIL"]);
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
MetadataSet MetadataSet57 = createNode("MetadataSet");
MetadataSet57.name = "EscapedQuotationMarksMetadataSet";
MetadataString MetadataString58 = createNode("MetadataString");
MetadataString58.name = "quotesTestC";
MetadataString58.value = new MFString(new java.lang.String["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""]);
MetadataSet57.value = new MFNode();

MetadataSet57.value[0] = MetadataString58;

MetadataString MetadataString59 = createNode("MetadataString");
MetadataString59.name = "extraChildTest";
MetadataString59.value = new MFString(new java.lang.String["checks MetadataSetObject addValue() method"]);
MetadataSet57.value[1] = MetadataString59;

Text56.metadata = MetadataSet57;

FontStyle FontStyle60 = createNode("FontStyle");
FontStyle60.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text56.fontStyle = FontStyle60;

Shape53.geometry = Text56;

Transform52.children = new MFNode();

Transform52.children[0] = Shape53;

Collision Collision61 = createNode("Collision");
//test containerField='proxy'
Shape Shape62 = createNode("Shape");
Shape62.DEF = "ProxyShape";
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
//reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
Text Text63 = createNode("Text");
Text63.string = new MFString(new java.lang.String["One, Two, Text","","He said, \"Immel did it!\" \"\""]);
Shape62.geometry = Text63;

Collision61.proxy = Shape62;

Transform52.children[1] = Collision61;

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
children[13] = Transform52;

//repeatedly spin 180 degrees as a readable special effect
OrientationInterpolator OrientationInterpolator64 = createNode("OrientationInterpolator");
OrientationInterpolator64.DEF = "SpinInterpolator";
OrientationInterpolator64.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator64.keyValue = new MFRotation(new float[0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964]);
children[14] = OrientationInterpolator64;

TimeSensor TimeSensor65 = createNode("TimeSensor");
TimeSensor65.DEF = "SpinClock";
TimeSensor65.cycleInterval = 5;
TimeSensor65.loop = True;
children[15] = TimeSensor65;

ROUTE ROUTE66 = createNode("ROUTE");
ROUTE66.fromField = "fraction_changed";
ROUTE66.fromNode = "SpinClock";
ROUTE66.toField = "set_fraction";
ROUTE66.toNode = "SpinInterpolator";
children[16] = ROUTE66;

ROUTE ROUTE67 = createNode("ROUTE");
ROUTE67.fromField = "value_changed";
ROUTE67.fromNode = "SpinInterpolator";
ROUTE67.toField = "rotation";
ROUTE67.toNode = "TextTransform";
children[17] = ROUTE67;

Group Group68 = createNode("Group");
Group68.DEF = "BackgroundGroup";
Background Background69 = createNode("Background");
Background69.DEF = "GradualBackground";
Group68.children = new MFNode();

Group68.children[0] = Background69;

Script Script70 = createNode("Script");
Script70.DEF = "colorTypeConversionScript";
field field71 = createNode("field");
field71.name = "colorInput";
field71.accessType = "inputOnly";
field71.type = "SFColor";
Script70.field = new MFNode();

Script70.field[0] = field71;

field field72 = createNode("field");
field72.name = "colorsOutput";
field72.accessType = "outputOnly";
field72.type = "MFColor";
Script70.field[1] = field72;


Script70.setSourceCode(`ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}`)
Group68.children[1] = Script70;

ColorInterpolator ColorInterpolator73 = createNode("ColorInterpolator");
ColorInterpolator73.DEF = "ColorAnimator";
ColorInterpolator73.key = new MFFloat(new float[0,0.5,1]);
ColorInterpolator73.keyValue = new MFColor(new float[0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1]);
//AZURE to INDIGO and back again
Group68.children[2] = ColorInterpolator73;

TimeSensor TimeSensor74 = createNode("TimeSensor");
TimeSensor74.DEF = "ColorClock";
TimeSensor74.cycleInterval = 60;
TimeSensor74.loop = True;
Group68.children[3] = TimeSensor74;

ROUTE ROUTE75 = createNode("ROUTE");
ROUTE75.fromField = "colorsOutput";
ROUTE75.fromNode = "colorTypeConversionScript";
ROUTE75.toField = "skyColor";
ROUTE75.toNode = "GradualBackground";
Group68.children[4] = ROUTE75;

ROUTE ROUTE76 = createNode("ROUTE");
ROUTE76.fromField = "value_changed";
ROUTE76.fromNode = "ColorAnimator";
ROUTE76.toField = "colorInput";
ROUTE76.toNode = "colorTypeConversionScript";
Group68.children[5] = ROUTE76;

ROUTE ROUTE77 = createNode("ROUTE");
ROUTE77.fromField = "fraction_changed";
ROUTE77.fromNode = "ColorClock";
ROUTE77.toField = "set_fraction";
ROUTE77.toNode = "ColorAnimator";
Group68.children[6] = ROUTE77;

children[18] = Group68;

ProtoDeclare ProtoDeclare78 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare78.name = "ArtDeco01Material";
ProtoDeclare78.appinfo = "tooltip: ArtDeco01Material prototype is a Material node";
ProtoInterface ProtoInterface79 = createNode("ProtoInterface");
field field80 = createNode("field");
field80.name = "description";
field80.accessType = "inputOutput";
field80.appinfo = "tooltip for descriptionField";
field80.type = "SFString";
field80.value = "ArtDeco01Material prototype is a Material node";
ProtoInterface79.field = new MFNode();

ProtoInterface79.field[0] = field80;

field field81 = createNode("field");
field81.name = "enabled";
field81.accessType = "inputOutput";
field81.type = "SFBool";
field81.value = "true";
ProtoInterface79.field[1] = field81;

ProtoDeclare78.protoInterface = ProtoInterface79;

ProtoBody ProtoBody82 = createNode("ProtoBody");
//Initial node of ProtoBody determines prototype node type
Material Material83 = createNode("Material");
Material83.ambientIntensity = 0.25;
Material83.diffuseColor = new SFColor(new float[0.282435,0.085159,0.134462]);
Material83.shininess = 0.127273;
Material83.specularColor = new SFColor(new float[0.276305,0.11431,0.139857]);
ProtoBody82.children = new MFNode();

ProtoBody82.children[0] = Material83;

//[HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
TouchSensor TouchSensor84 = createNode("TouchSensor");
TouchSensor84.description = "within ProtoBody";
IS IS85 = createNode("IS");
connect connect86 = createNode("connect");
connect86.nodeField = "description";
connect86.protoField = "description";
IS85.connect = new MFNode();

IS85.connect[0] = connect86;

connect connect87 = createNode("connect");
connect87.nodeField = "enabled";
connect87.protoField = "enabled";
IS85.connect[1] = connect87;

TouchSensor84.iS = IS85;

ProtoBody82.children[1] = TouchSensor84;

ProtoDeclare78.protoBody = ProtoBody82;

children[19] = ProtoDeclare78;

ExternProtoDeclare ExternProtoDeclare88 = createNode("ExternProtoDeclare");
ExternProtoDeclare88.name = "ArtDeco02Material";
ExternProtoDeclare88.appinfo = "this is a different Material node";
ExternProtoDeclare88.url = new MFString(new java.lang.String["https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"]);
//[HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
field field89 = createNode("field");
field89.name = "description";
field89.accessType = "inputOutput";
field89.appinfo = "tooltip for descriptionField";
field89.type = "SFString";
ExternProtoDeclare88.field = new MFNode();

ExternProtoDeclare88.field[0] = field89;

children[20] = ExternProtoDeclare88;

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
Shape Shape90 = createNode("Shape");
Shape90.DEF = "TestShape1";
Appearance Appearance91 = createNode("Appearance");
Appearance91.DEF = "TestAppearance1";
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance ProtoInstance92 = createNode("ProtoInstance");
ProtoInstance92.name = "ArtDeco01Material";
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
fieldValue fieldValue93 = createNode("fieldValue");
fieldValue93.name = "description";
fieldValue93.value = "ArtDeco01Material can substitute for a Material node";
ProtoInstance92.fieldValue = new MFNode();

ProtoInstance92.fieldValue[0] = fieldValue93;

Appearance91.shaders = new MFNode();

Appearance91.shaders[0] = ProtoInstance92;

Shape90.appearance = Appearance91;

Sphere Sphere94 = createNode("Sphere");
Sphere94.radius = 0.001;
Shape90.geometry = Sphere94;

children[21] = Shape90;

Shape Shape95 = createNode("Shape");
Shape95.DEF = "TestShape2";
Appearance Appearance96 = createNode("Appearance");
Appearance96.DEF = "TestAppearance2";
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance ProtoInstance97 = createNode("ProtoInstance");
ProtoInstance97.name = "ArtDeco02Material";
ProtoInstance97.DEF = "ArtDeco02MaterialDEF";
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
fieldValue fieldValue98 = createNode("fieldValue");
fieldValue98.name = "description";
fieldValue98.value = "ArtDeco02Material can substitute for another Material node";
ProtoInstance97.fieldValue = new MFNode();

ProtoInstance97.fieldValue[0] = fieldValue98;

Appearance96.shaders = new MFNode();

Appearance96.shaders[0] = ProtoInstance97;

Shape95.appearance = Appearance96;

Cone Cone99 = createNode("Cone");
Cone99.bottomRadius = 0.001;
Cone99.height = 0.001;
Shape95.geometry = Cone99;

children[22] = Shape95;

Shape Shape100 = createNode("Shape");
Shape100.DEF = "TestShape3";
Appearance Appearance101 = createNode("Appearance");
Appearance101.DEF = "TestAppearance3";
//ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE.
ProtoInstance ProtoInstance102 = createNode("ProtoInstance");
ProtoInstance102.USE = "ArtDeco02MaterialDEF";
Appearance101.shaders = new MFNode();

Appearance101.shaders[0] = ProtoInstance102;

Shape100.appearance = Appearance101;

Cylinder Cylinder103 = createNode("Cylinder");
Cylinder103.height = 0.001;
Cylinder103.radius = 0.001;
Shape100.geometry = Cylinder103;

children[23] = Shape100;

Inline Inline104 = createNode("Inline");
Inline104.DEF = "inlineSceneDef";
Inline104.url = new MFString(new java.lang.String["someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"]);
children[24] = Inline104;

IMPORT IMPORT105 = createNode("IMPORT");
IMPORT105.AS = "WorldInfoDEF2";
IMPORT105.importedDEF = "WorldInfoDEF";
IMPORT105.inlineDEF = "inlineSceneDef";
children[25] = IMPORT105;

EXPORT EXPORT106 = createNode("EXPORT");
EXPORT106.AS = "WorldInfoDEF3";
EXPORT106.localDEF = "WorldInfoDEF";
children[26] = EXPORT106;

ProtoDeclare ProtoDeclare107 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="MaterialModulator" appinfo="mimic a Material node and modulate fields as an animation effect" documentation="https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html" ><ProtoInterface><field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
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
ProtoDeclare107.name = "MaterialModulator";
ProtoDeclare107.appinfo = "mimic a Material node and modulate fields as an animation effect";
ProtoDeclare107.documentation = "https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html";
ProtoInterface ProtoInterface108 = createNode("ProtoInterface");
field field109 = createNode("field");
field109.name = "enabled";
field109.accessType = "inputOutput";
field109.type = "SFBool";
field109.value = "true";
ProtoInterface108.field = new MFNode();

ProtoInterface108.field[0] = field109;

field field110 = createNode("field");
field110.name = "diffuseColor";
field110.accessType = "inputOutput";
field110.type = "SFColor";
field110.value = "0 0 0";
ProtoInterface108.field[1] = field110;

field field111 = createNode("field");
field111.name = "emissiveColor";
field111.accessType = "inputOutput";
field111.type = "SFColor";
field111.value = "0.05 0.05 0.5";
ProtoInterface108.field[2] = field111;

field field112 = createNode("field");
field112.name = "specularColor";
field112.accessType = "inputOutput";
field112.type = "SFColor";
field112.value = "0 0 0";
ProtoInterface108.field[3] = field112;

field field113 = createNode("field");
field113.name = "transparency";
field113.accessType = "inputOutput";
field113.type = "SFFloat";
field113.value = "0";
ProtoInterface108.field[4] = field113;

field field114 = createNode("field");
field114.name = "shininess";
field114.accessType = "inputOutput";
field114.type = "SFFloat";
field114.value = "0";
ProtoInterface108.field[5] = field114;

field field115 = createNode("field");
field115.name = "ambientIntensity";
field115.accessType = "inputOutput";
field115.type = "SFFloat";
field115.value = "0";
ProtoInterface108.field[6] = field115;

ProtoDeclare107.protoInterface = ProtoInterface108;

ProtoBody ProtoBody116 = createNode("ProtoBody");
Material Material117 = createNode("Material");
Material117.DEF = "MaterialNode";
IS IS118 = createNode("IS");
connect connect119 = createNode("connect");
connect119.nodeField = "diffuseColor";
connect119.protoField = "diffuseColor";
IS118.connect = new MFNode();

IS118.connect[0] = connect119;

connect connect120 = createNode("connect");
connect120.nodeField = "emissiveColor";
connect120.protoField = "emissiveColor";
IS118.connect[1] = connect120;

connect connect121 = createNode("connect");
connect121.nodeField = "specularColor";
connect121.protoField = "specularColor";
IS118.connect[2] = connect121;

connect connect122 = createNode("connect");
connect122.nodeField = "transparency";
connect122.protoField = "transparency";
IS118.connect[3] = connect122;

connect connect123 = createNode("connect");
connect123.nodeField = "shininess";
connect123.protoField = "shininess";
IS118.connect[4] = connect123;

connect connect124 = createNode("connect");
connect124.nodeField = "ambientIntensity";
connect124.protoField = "ambientIntensity";
IS118.connect[5] = connect124;

Material117.iS = IS118;

ProtoBody116.children = new MFNode();

ProtoBody116.children[0] = Material117;

//Only first node (the node type) is renderable, others are along for the ride
Script Script125 = createNode("Script");
Script125.DEF = "MaterialModulatorScript";
field field126 = createNode("field");
field126.name = "enabled";
field126.accessType = "inputOutput";
field126.type = "SFBool";
Script125.field = new MFNode();

Script125.field[0] = field126;

field field127 = createNode("field");
field127.name = "diffuseColor";
field127.accessType = "inputOutput";
field127.type = "SFColor";
Script125.field[1] = field127;

field field128 = createNode("field");
field128.name = "newColor";
field128.accessType = "outputOnly";
field128.type = "SFColor";
Script125.field[2] = field128;

field field129 = createNode("field");
field129.name = "clockTrigger";
field129.accessType = "inputOnly";
field129.type = "SFTime";
Script125.field[3] = field129;

IS IS130 = createNode("IS");
connect connect131 = createNode("connect");
connect131.nodeField = "enabled";
connect131.protoField = "enabled";
IS130.connect = new MFNode();

IS130.connect[0] = connect131;

connect connect132 = createNode("connect");
connect132.nodeField = "diffuseColor";
connect132.protoField = "diffuseColor";
IS130.connect[1] = connect132;

Script125.iS = IS130;


Script125.setSourceCode(`ecmascript:\n"+
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
ProtoBody116.children[1] = Script125;

ProtoDeclare107.protoBody = ProtoBody116;

children[27] = ProtoDeclare107;

//Test success: declarative statement createDeclarativeShapeTests()
Group Group133 = createNode("Group");
Group133.DEF = "DeclarativeGroupExample";
Shape Shape134 = createNode("Shape");
MetadataString MetadataString135 = createNode("MetadataString");
MetadataString135.name = "findThisNameValue";
MetadataString135.DEF = "FindableMetadataStringTest";
MetadataString135.value = new MFString(new java.lang.String["test case"]);
Shape134.metadata = MetadataString135;

Appearance Appearance136 = createNode("Appearance");
Appearance136.DEF = "DeclarativeAppearanceExample";
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
ProtoInstance ProtoInstance137 = createNode("ProtoInstance");
ProtoInstance137.name = "MaterialModulator";
ProtoInstance137.DEF = "MyMaterialModulator";
Appearance136.shaders = new MFNode();

Appearance136.shaders[0] = ProtoInstance137;

Shape134.appearance = Appearance136;

Cone Cone138 = createNode("Cone");
Cone138.bottom = False;
Cone138.bottomRadius = 0.05;
Cone138.height = 0.1;
Shape134.geometry = Cone138;

Group133.children = new MFNode();

Group133.children[0] = Shape134;

//Test success: declarativeGroup.addChild() singleton pipeline method
children[28] = Group133;

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
Group Group139 = createNode("Group");
Group139.DEF = "TestFieldObjectsGroup";
//testFieldObjects() results
//SFBool default=true, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true
//regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotationObject.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value
children[29] = Group139;

Sound Sound140 = createNode("Sound");
Sound140.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
AudioClip AudioClip141 = createNode("AudioClip");
AudioClip141.description = "chimes";
AudioClip141.url = new MFString(new java.lang.String["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound140.source = AudioClip141;

children[30] = Sound140;

Sound Sound142 = createNode("Sound");
Sound142.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
MovieTexture MovieTexture143 = createNode("MovieTexture");
MovieTexture143.description = "mpgsys.mpg from ConformanceNist suite";
MovieTexture143.url = new MFString(new java.lang.String["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"watchList\"
Sound142.source = MovieTexture143;

children[31] = Sound142;

//Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true
//Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
Shape Shape144 = createNode("Shape");
Shape144.DEF = "ExtrusionShape";
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
Appearance Appearance145 = createNode("Appearance");
Appearance145.DEF = "TransparentAppearance";
Material Material146 = createNode("Material");
Material146.transparency = 1;
Appearance145.material = Material146;

Shape144.appearance = Appearance145;

Extrusion Extrusion147 = createNode("Extrusion");
Extrusion147.DEF = "ExampleExtrusion";
Shape144.geometry = Extrusion147;

children[32] = Shape144;

Group Group148 = createNode("Group");
//Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes
ProtoDeclare ProtoDeclare149 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="NewWorldInfo" ><ProtoInterface><field name="description" accessType="initializeOnly" type="SFString"></field>
</ProtoInterface>
<ProtoBody><WorldInfo></WorldInfo>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare149.name = "NewWorldInfo";
ProtoInterface ProtoInterface150 = createNode("ProtoInterface");
field field151 = createNode("field");
field151.name = "description";
field151.accessType = "initializeOnly";
field151.type = "SFString";
ProtoInterface150.field = new MFNode();

ProtoInterface150.field[0] = field151;

ProtoDeclare149.protoInterface = ProtoInterface150;

ProtoBody ProtoBody152 = createNode("ProtoBody");
WorldInfo WorldInfo153 = createNode("WorldInfo");
ProtoBody152.children = new MFNode();

ProtoBody152.children[0] = WorldInfo153;

ProtoDeclare149.protoBody = ProtoBody152;

Group148.children = new MFNode();

Group148.children[0] = ProtoDeclare149;

ProtoInstance ProtoInstance154 = createNode("ProtoInstance");
ProtoInstance154.name = "NewWorldInfo";
ProtoInstance154.DEF = "Proto1";
fieldValue fieldValue155 = createNode("fieldValue");
fieldValue155.name = "description";
fieldValue155.value = "testing 1 2 3";
ProtoInstance154.fieldValue = new MFNode();

ProtoInstance154.fieldValue[0] = fieldValue155;

Group148.children[1] = ProtoInstance154;

Group Group156 = createNode("Group");
Group156.DEF = "Node2";
//intentionally empty
Group148.children[2] = Group156;

ProtoInstance ProtoInstance157 = createNode("ProtoInstance");
ProtoInstance157.name = "NewWorldInfo";
ProtoInstance157.DEF = "Proto3";
Group148.children[3] = ProtoInstance157;

Transform Transform158 = createNode("Transform");
Transform158.DEF = "Node4";
//intentionally empty
Group148.children[4] = Transform158;

//Test satisfactorily creates MFNode children array as an ordered list with mixed content
children[33] = Group148;

ProtoDeclare ProtoDeclare159 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ShaderProto" ><ProtoBody><ProgramShader></ProgramShader>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare159.name = "ShaderProto";
ProtoBody ProtoBody160 = createNode("ProtoBody");
ProgramShader ProgramShader161 = createNode("ProgramShader");
ProtoBody160.children = new MFNode();

ProtoBody160.children[0] = ProgramShader161;

ProtoDeclare159.protoBody = ProtoBody160;

children[34] = ProtoDeclare159;

Shape Shape162 = createNode("Shape");
Appearance Appearance163 = createNode("Appearance");
//Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes
//Test satisfactorily creates MFNode shaders array as an ordered list with mixed content
ProgramShader ProgramShader164 = createNode("ProgramShader");
ProgramShader164.DEF = "TestShader1";
ShaderProgram ShaderProgram165 = createNode("ShaderProgram");
ShaderProgram165.DEF = "TestShader2";
ShaderProgram165.type = "VERTEX";
ProgramShader164.programs = new MFNode();

ProgramShader164.programs[0] = ShaderProgram165;

Appearance163.shaders = new MFNode();

Appearance163.shaders[0] = ProgramShader164;

ProtoInstance ProtoInstance166 = createNode("ProtoInstance");
ProtoInstance166.name = "ShaderProto";
ProtoInstance166.DEF = "TestShader3";
Appearance163.shaders[1] = ProtoInstance166;

ComposedShader ComposedShader167 = createNode("ComposedShader");
ComposedShader167.DEF = "TestShader4";
ShaderPart ShaderPart168 = createNode("ShaderPart");
ShaderPart168.DEF = "TestShader5";
ShaderPart168.type = "VERTEX";
ComposedShader167.parts = new MFNode();

ComposedShader167.parts[0] = ShaderPart168;

Appearance163.shaders[2] = ComposedShader167;

Shape162.appearance = Appearance163;

children[35] = Shape162;

}
