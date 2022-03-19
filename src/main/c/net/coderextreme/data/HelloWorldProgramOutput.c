#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.CssClass = "x3dModel.class";
X3D0.profile = "Full";
X3D0.style = "x3dModel.style";
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
component6.name = "H-Anim";
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
meta12.content = "HelloWorldProgramOutput.x3d";
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
meta18.content = "9 January 2022";
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

head = head1;

ViewpointGroup ViewpointGroup33 = createNode("ViewpointGroup");
ViewpointGroup33.description = "Available viewpoints";
Viewpoint Viewpoint34 = createNode("Viewpoint");
Viewpoint34.DEF = "DefaultView";
Viewpoint34.description = "Hello X3DJSAIL";
ViewpointGroup33.children = new MFNode();

ViewpointGroup33.children[0] = Viewpoint34;

Viewpoint Viewpoint35 = createNode("Viewpoint");
Viewpoint35.DEF = "TopDownView";
Viewpoint35.description = "top-down view from above";
Viewpoint35.orientation = new SFRotation(new float[1,0,0,-1.570796]);
Viewpoint35.position = new SFVec3f(new float[0,100,0]);
ViewpointGroup33.children[1] = Viewpoint35;

children = new MFNode();

children[0] = ViewpointGroup33;

NavigationInfo NavigationInfo36 = createNode("NavigationInfo");
NavigationInfo36.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
children[1] = NavigationInfo36;

WorldInfo WorldInfo37 = createNode("WorldInfo");
WorldInfo37.DEF = "WorldInfoDEF";
WorldInfo37.CssClass = "worldInfoNode.class";
WorldInfo37.style = "worldInfoNode.style";
WorldInfo37.title = "HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)";
children[2] = WorldInfo37;

WorldInfo WorldInfo38 = createNode("WorldInfo");
WorldInfo38.USE = "WorldInfoDEF";
children[3] = WorldInfo38;

WorldInfo WorldInfo39 = createNode("WorldInfo");
WorldInfo39.USE = "WorldInfoDEF";
children[4] = WorldInfo39;

MetadataString MetadataString40 = createNode("MetadataString");
MetadataString40.name = "test";
MetadataString40.DEF = "scene.addChildMetadata";
MetadataString40.value = new MFString(new java.lang.String["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"]);
metadata[5] = MetadataString40;

LayerSet LayerSet41 = createNode("LayerSet");
LayerSet41.DEF = "scene.addChildLayerSetTest";
layerSet[6] = LayerSet41;

Transform Transform42 = createNode("Transform");
Transform42.DEF = "LogoGeometryTransform";
Transform42.translation = new SFVec3f(new float[0,1.5,0]);
Anchor Anchor43 = createNode("Anchor");
Anchor43.DEF = "siteAnchor";
Anchor43.description = "select for X3D Java SAI Library (X3DJSAIL) description";
Anchor43.url = new MFString(new java.lang.String["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"]);
Shape Shape44 = createNode("Shape");
Shape44.DEF = "BoxShape";
Appearance Appearance45 = createNode("Appearance");
Material Material46 = createNode("Material");
Material46.DEF = "GreenMaterial";
Material46.diffuseColor = new SFColor(new float[0,1,1]);
Material46.emissiveColor = new SFColor(new float[0.8,0,0]);
Material46.transparency = 0.1;
Appearance45.material = Material46;

ImageTexture ImageTexture47 = createNode("ImageTexture");
ImageTexture47.url = new MFString(new java.lang.String["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"]);
Appearance45.texture = ImageTexture47;

Shape44.appearance = Appearance45;

Box Box48 = createNode("Box");
Box48.DEF = "test-NMTOKEN_regex.0123456789";
Box48.CssClass = "untextured";
Shape44.geometry = Box48;

Anchor43.children = new MFNode();

Anchor43.children[0] = Shape44;

Transform42.children = new MFNode();

Transform42.children[0] = Anchor43;

children[7] = Transform42;

Shape Shape49 = createNode("Shape");
Shape49.DEF = "LineShape";
Appearance Appearance50 = createNode("Appearance");
Material Material51 = createNode("Material");
Material51.emissiveColor = new SFColor(new float[0.6,0.19607843,0.8]);
Appearance50.material = Material51;

Shape49.appearance = Appearance50;

IndexedLineSet IndexedLineSet52 = createNode("IndexedLineSet");
IndexedLineSet52.coordIndex = new MFInt32(new int[0,1,2,3,4,0]);
//Coordinate 3-tuple point count: 6
Coordinate Coordinate53 = createNode("Coordinate");
Coordinate53.point = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
IndexedLineSet52.coord = Coordinate53;

Shape49.geometry = IndexedLineSet52;

children[8] = Shape49;

PositionInterpolator PositionInterpolator54 = createNode("PositionInterpolator");
PositionInterpolator54.DEF = "BoxPathAnimator";
PositionInterpolator54.key = new MFFloat(new float[0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator54.keyValue = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
children[9] = PositionInterpolator54;

TimeSensor TimeSensor55 = createNode("TimeSensor");
TimeSensor55.DEF = "OrbitClock";
TimeSensor55.cycleInterval = 8;
TimeSensor55.loop = True;
children[10] = TimeSensor55;

ROUTE ROUTE56 = createNode("ROUTE");
ROUTE56.fromField = "fraction_changed";
ROUTE56.fromNode = "OrbitClock";
ROUTE56.toField = "set_fraction";
ROUTE56.toNode = "BoxPathAnimator";
children[11] = ROUTE56;

ROUTE ROUTE57 = createNode("ROUTE");
ROUTE57.fromField = "value_changed";
ROUTE57.fromNode = "BoxPathAnimator";
ROUTE57.toField = "set_translation";
ROUTE57.toNode = "LogoGeometryTransform";
children[12] = ROUTE57;

Transform Transform58 = createNode("Transform");
Transform58.DEF = "TextTransform";
Transform58.translation = new SFVec3f(new float[0,-1.5,0]);
Shape Shape59 = createNode("Shape");
Appearance Appearance60 = createNode("Appearance");
Material Material61 = createNode("Material");
Material61.USE = "GreenMaterial";
Appearance60.material = Material61;

Shape59.appearance = Appearance60;

Text Text62 = createNode("Text");
Text62.string = new MFString(new java.lang.String["X3D Java","SAI Library","X3DJSAIL"]);
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
MetadataSet MetadataSet63 = createNode("MetadataSet");
MetadataSet63.name = "EscapedQuotationMarksMetadataSet";
MetadataString MetadataString64 = createNode("MetadataString");
MetadataString64.name = "quotesTestC";
MetadataString64.value = new MFString(new java.lang.String["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""]);
MetadataSet63.value = new MFNode();

MetadataSet63.value[0] = MetadataString64;

MetadataString MetadataString65 = createNode("MetadataString");
MetadataString65.name = "extraChildTest";
MetadataString65.value = new MFString(new java.lang.String["checks MetadataSet addValue() method"]);
MetadataSet63.value[1] = MetadataString65;

Text62.metadata = MetadataSet63;

FontStyle FontStyle66 = createNode("FontStyle");
FontStyle66.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text62.fontStyle = FontStyle66;

Shape59.geometry = Text62;

Transform58.children = new MFNode();

Transform58.children[0] = Shape59;

Collision Collision67 = createNode("Collision");
//test containerField='proxy'
Shape Shape68 = createNode("Shape");
Shape68.DEF = "ProxyShape";
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
//reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
Text Text69 = createNode("Text");
Text69.string = new MFString(new java.lang.String["One, Two, Text","","He said, \"Immel did it!\" \"\""]);
Shape68.geometry = Text69;

Collision67.proxy = Shape68;

Transform58.children[1] = Collision67;

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
children[13] = Transform58;

//repeatedly spin 180 degrees as a readable special effect
OrientationInterpolator OrientationInterpolator70 = createNode("OrientationInterpolator");
OrientationInterpolator70.DEF = "SpinInterpolator";
OrientationInterpolator70.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator70.keyValue = new MFRotation(new float[0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964]);
children[14] = OrientationInterpolator70;

TimeSensor TimeSensor71 = createNode("TimeSensor");
TimeSensor71.DEF = "SpinClock";
TimeSensor71.cycleInterval = 5;
TimeSensor71.loop = True;
children[15] = TimeSensor71;

ROUTE ROUTE72 = createNode("ROUTE");
ROUTE72.fromField = "fraction_changed";
ROUTE72.fromNode = "SpinClock";
ROUTE72.toField = "set_fraction";
ROUTE72.toNode = "SpinInterpolator";
children[16] = ROUTE72;

ROUTE ROUTE73 = createNode("ROUTE");
ROUTE73.fromField = "value_changed";
ROUTE73.fromNode = "SpinInterpolator";
ROUTE73.toField = "rotation";
ROUTE73.toNode = "TextTransform";
children[17] = ROUTE73;

Group Group74 = createNode("Group");
Group74.DEF = "BackgroundGroup";
Background Background75 = createNode("Background");
Background75.DEF = "GradualBackground";
Group74.children = new MFNode();

Group74.children[0] = Background75;

Script Script76 = createNode("Script");
Script76.DEF = "colorTypeConversionScript";
field field77 = createNode("field");
field77.name = "colorInput";
field77.accessType = "inputOnly";
field77.type = "SFColor";
Script76.field = new MFNode();

Script76.field[0] = field77;

field field78 = createNode("field");
field78.name = "colorsOutput";
field78.accessType = "outputOnly";
field78.type = "MFColor";
Script76.field[1] = field78;


Script76.setSourceCode(`ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}`)
Group74.children[1] = Script76;

ColorInterpolator ColorInterpolator79 = createNode("ColorInterpolator");
ColorInterpolator79.DEF = "ColorAnimator";
ColorInterpolator79.key = new MFFloat(new float[0,0.5,1]);
ColorInterpolator79.keyValue = new MFColor(new float[0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1]);
//AZURE to INDIGO and back again
Group74.children[2] = ColorInterpolator79;

TimeSensor TimeSensor80 = createNode("TimeSensor");
TimeSensor80.DEF = "ColorClock";
TimeSensor80.cycleInterval = 60;
TimeSensor80.loop = True;
Group74.children[3] = TimeSensor80;

ROUTE ROUTE81 = createNode("ROUTE");
ROUTE81.fromField = "colorsOutput";
ROUTE81.fromNode = "colorTypeConversionScript";
ROUTE81.toField = "skyColor";
ROUTE81.toNode = "GradualBackground";
Group74.children[4] = ROUTE81;

ROUTE ROUTE82 = createNode("ROUTE");
ROUTE82.fromField = "value_changed";
ROUTE82.fromNode = "ColorAnimator";
ROUTE82.toField = "colorInput";
ROUTE82.toNode = "colorTypeConversionScript";
Group74.children[5] = ROUTE82;

ROUTE ROUTE83 = createNode("ROUTE");
ROUTE83.fromField = "fraction_changed";
ROUTE83.fromNode = "ColorClock";
ROUTE83.toField = "set_fraction";
ROUTE83.toNode = "ColorAnimator";
Group74.children[6] = ROUTE83;

children[18] = Group74;

ProtoDeclare ProtoDeclare84 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare84.name = "ArtDeco01Material";
ProtoDeclare84.appinfo = "tooltip: ArtDeco01Material prototype is a Material node";
ProtoInterface ProtoInterface85 = createNode("ProtoInterface");
field field86 = createNode("field");
field86.name = "description";
field86.accessType = "inputOutput";
field86.appinfo = "tooltip for descriptionField";
field86.type = "SFString";
field86.value = "ArtDeco01Material prototype is a Material node";
ProtoInterface85.field = new MFNode();

ProtoInterface85.field[0] = field86;

field field87 = createNode("field");
field87.name = "enabled";
field87.accessType = "inputOutput";
field87.type = "SFBool";
field87.value = "true";
ProtoInterface85.field[1] = field87;

ProtoDeclare84.protoInterface = ProtoInterface85;

ProtoBody ProtoBody88 = createNode("ProtoBody");
//Initial node of ProtoBody determines prototype node type
Material Material89 = createNode("Material");
Material89.ambientIntensity = 0.25;
Material89.diffuseColor = new SFColor(new float[0.282435,0.085159,0.134462]);
Material89.shininess = 0.127273;
Material89.specularColor = new SFColor(new float[0.276305,0.11431,0.139857]);
ProtoBody88.children = new MFNode();

ProtoBody88.children[0] = Material89;

//[HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
TouchSensor TouchSensor90 = createNode("TouchSensor");
TouchSensor90.description = "within ProtoBody";
IS IS91 = createNode("IS");
connect connect92 = createNode("connect");
connect92.nodeField = "description";
connect92.protoField = "description";
IS91.connect = new MFNode();

IS91.connect[0] = connect92;

connect connect93 = createNode("connect");
connect93.nodeField = "enabled";
connect93.protoField = "enabled";
IS91.connect[1] = connect93;

TouchSensor90.iS = IS91;

ProtoBody88.children[1] = TouchSensor90;

ProtoDeclare84.protoBody = ProtoBody88;

children[19] = ProtoDeclare84;

ExternProtoDeclare ExternProtoDeclare94 = createNode("ExternProtoDeclare");
ExternProtoDeclare94.name = "ArtDeco02Material";
ExternProtoDeclare94.appinfo = "this is a different Material node";
ExternProtoDeclare94.url = new MFString(new java.lang.String["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"]);
//[HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
field field95 = createNode("field");
field95.name = "description";
field95.accessType = "inputOutput";
field95.appinfo = "tooltip for descriptionField";
field95.type = "SFString";
ExternProtoDeclare94.field = new MFNode();

ExternProtoDeclare94.field[0] = field95;

children[20] = ExternProtoDeclare94;

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
Shape Shape96 = createNode("Shape");
Shape96.DEF = "TestShape1";
Appearance Appearance97 = createNode("Appearance");
Appearance97.DEF = "TestAppearance1";
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance ProtoInstance98 = createNode("ProtoInstance");
ProtoInstance98.name = "ArtDeco01Material";
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
fieldValue fieldValue99 = createNode("fieldValue");
fieldValue99.name = "description";
fieldValue99.value = "ArtDeco01Material can substitute for a Material node";
ProtoInstance98.fieldValue = new MFNode();

ProtoInstance98.fieldValue[0] = fieldValue99;

Appearance97.shaders = new MFNode();

Appearance97.shaders[0] = ProtoInstance98;

Shape96.appearance = Appearance97;

Sphere Sphere100 = createNode("Sphere");
Sphere100.radius = 0.001;
Shape96.geometry = Sphere100;

children[21] = Shape96;

Shape Shape101 = createNode("Shape");
Shape101.DEF = "TestShape2";
Appearance Appearance102 = createNode("Appearance");
Appearance102.DEF = "TestAppearance2";
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
ProtoInstance ProtoInstance103 = createNode("ProtoInstance");
ProtoInstance103.name = "ArtDeco02Material";
ProtoInstance103.DEF = "ArtDeco02MaterialDEF";
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
fieldValue fieldValue104 = createNode("fieldValue");
fieldValue104.name = "description";
fieldValue104.value = "ArtDeco02Material can substitute for another Material node";
ProtoInstance103.fieldValue = new MFNode();

ProtoInstance103.fieldValue[0] = fieldValue104;

Appearance102.shaders = new MFNode();

Appearance102.shaders[0] = ProtoInstance103;

Shape101.appearance = Appearance102;

Cone Cone105 = createNode("Cone");
Cone105.bottomRadius = 0.001;
Cone105.height = 0.001;
Shape101.geometry = Cone105;

children[22] = Shape101;

Shape Shape106 = createNode("Shape");
Shape106.DEF = "TestShape3";
Appearance Appearance107 = createNode("Appearance");
Appearance107.DEF = "TestAppearance3";
//ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE.
ProtoInstance ProtoInstance108 = createNode("ProtoInstance");
ProtoInstance108.USE = "ArtDeco02MaterialDEF";
Appearance107.shaders = new MFNode();

Appearance107.shaders[0] = ProtoInstance108;

Shape106.appearance = Appearance107;

Cylinder Cylinder109 = createNode("Cylinder");
Cylinder109.height = 0.001;
Cylinder109.radius = 0.001;
Shape106.geometry = Cylinder109;

children[23] = Shape106;

Inline Inline110 = createNode("Inline");
Inline110.DEF = "inlineScene";
Inline110.url = new MFString(new java.lang.String["someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"]);
children[24] = Inline110;

IMPORT IMPORT111 = createNode("IMPORT");
IMPORT111.AS = "WorldInfoDEF2";
IMPORT111.importedDEF = "WorldInfoDEF";
IMPORT111.inlineDEF = "inlineScene";
children[25] = IMPORT111;

EXPORT EXPORT112 = createNode("EXPORT");
EXPORT112.AS = "WorldInfoDEF3";
EXPORT112.localDEF = "WorldInfoDEF";
children[26] = EXPORT112;

ProtoDeclare ProtoDeclare113 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare113.name = "MaterialModulator";
ProtoDeclare113.appinfo = "mimic a Material node and modulate fields as an animation effect";
ProtoDeclare113.documentation = "http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html";
ProtoInterface ProtoInterface114 = createNode("ProtoInterface");
field field115 = createNode("field");
field115.name = "enabled";
field115.accessType = "inputOutput";
field115.type = "SFBool";
field115.value = "true";
ProtoInterface114.field = new MFNode();

ProtoInterface114.field[0] = field115;

field field116 = createNode("field");
field116.name = "diffuseColor";
field116.accessType = "inputOutput";
field116.type = "SFColor";
field116.value = "0 0 0";
ProtoInterface114.field[1] = field116;

field field117 = createNode("field");
field117.name = "emissiveColor";
field117.accessType = "inputOutput";
field117.type = "SFColor";
field117.value = "0.05 0.05 0.5";
ProtoInterface114.field[2] = field117;

field field118 = createNode("field");
field118.name = "specularColor";
field118.accessType = "inputOutput";
field118.type = "SFColor";
field118.value = "0 0 0";
ProtoInterface114.field[3] = field118;

field field119 = createNode("field");
field119.name = "transparency";
field119.accessType = "inputOutput";
field119.type = "SFFloat";
field119.value = "0";
ProtoInterface114.field[4] = field119;

field field120 = createNode("field");
field120.name = "shininess";
field120.accessType = "inputOutput";
field120.type = "SFFloat";
field120.value = "0";
ProtoInterface114.field[5] = field120;

field field121 = createNode("field");
field121.name = "ambientIntensity";
field121.accessType = "inputOutput";
field121.type = "SFFloat";
field121.value = "0";
ProtoInterface114.field[6] = field121;

ProtoDeclare113.protoInterface = ProtoInterface114;

ProtoBody ProtoBody122 = createNode("ProtoBody");
Material Material123 = createNode("Material");
Material123.DEF = "MaterialNode";
IS IS124 = createNode("IS");
connect connect125 = createNode("connect");
connect125.nodeField = "diffuseColor";
connect125.protoField = "diffuseColor";
IS124.connect = new MFNode();

IS124.connect[0] = connect125;

connect connect126 = createNode("connect");
connect126.nodeField = "emissiveColor";
connect126.protoField = "emissiveColor";
IS124.connect[1] = connect126;

connect connect127 = createNode("connect");
connect127.nodeField = "specularColor";
connect127.protoField = "specularColor";
IS124.connect[2] = connect127;

connect connect128 = createNode("connect");
connect128.nodeField = "transparency";
connect128.protoField = "transparency";
IS124.connect[3] = connect128;

connect connect129 = createNode("connect");
connect129.nodeField = "shininess";
connect129.protoField = "shininess";
IS124.connect[4] = connect129;

connect connect130 = createNode("connect");
connect130.nodeField = "ambientIntensity";
connect130.protoField = "ambientIntensity";
IS124.connect[5] = connect130;

Material123.iS = IS124;

ProtoBody122.children = new MFNode();

ProtoBody122.children[0] = Material123;

//Only first node (the node type) is renderable, others are along for the ride
Script Script131 = createNode("Script");
Script131.DEF = "MaterialModulatorScript";
field field132 = createNode("field");
field132.name = "enabled";
field132.accessType = "inputOutput";
field132.type = "SFBool";
Script131.field = new MFNode();

Script131.field[0] = field132;

field field133 = createNode("field");
field133.name = "diffuseColor";
field133.accessType = "inputOutput";
field133.type = "SFColor";
Script131.field[1] = field133;

field field134 = createNode("field");
field134.name = "newColor";
field134.accessType = "outputOnly";
field134.type = "SFColor";
Script131.field[2] = field134;

field field135 = createNode("field");
field135.name = "clockTrigger";
field135.accessType = "inputOnly";
field135.type = "SFTime";
Script131.field[3] = field135;

IS IS136 = createNode("IS");
connect connect137 = createNode("connect");
connect137.nodeField = "enabled";
connect137.protoField = "enabled";
IS136.connect = new MFNode();

IS136.connect[0] = connect137;

connect connect138 = createNode("connect");
connect138.nodeField = "diffuseColor";
connect138.protoField = "diffuseColor";
IS136.connect[1] = connect138;

Script131.iS = IS136;


Script131.setSourceCode(`ecmascript:\n"+
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
ProtoBody122.children[1] = Script131;

ProtoDeclare113.protoBody = ProtoBody122;

children[27] = ProtoDeclare113;

//Test success: declarative statement createDeclarativeShapeTests()
Group Group139 = createNode("Group");
Group139.DEF = "DeclarativeGroupExample";
Shape Shape140 = createNode("Shape");
MetadataString MetadataString141 = createNode("MetadataString");
MetadataString141.name = "findThisNameValue";
MetadataString141.DEF = "FindableMetadataStringTest";
MetadataString141.value = new MFString(new java.lang.String["test case"]);
Shape140.metadata = MetadataString141;

Appearance Appearance142 = createNode("Appearance");
Appearance142.DEF = "DeclarativeAppearanceExample";
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
ProtoInstance ProtoInstance143 = createNode("ProtoInstance");
ProtoInstance143.name = "MaterialModulator";
ProtoInstance143.DEF = "MyMaterialModulator";
Appearance142.shaders = new MFNode();

Appearance142.shaders[0] = ProtoInstance143;

Shape140.appearance = Appearance142;

Cone Cone144 = createNode("Cone");
Cone144.bottom = False;
Cone144.bottomRadius = 0.05;
Cone144.height = 0.1;
Shape140.geometry = Cone144;

Group139.children = new MFNode();

Group139.children[0] = Shape140;

//Test success: declarativeGroup.addChild() singleton pipeline method
children[28] = Group139;

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
Group Group145 = createNode("Group");
Group145.DEF = "TestFieldObjectsGroup";
//testFieldObjects() results
//SFBool default=true, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true
//regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotation.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value
children[29] = Group145;

Sound Sound146 = createNode("Sound");
Sound146.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
AudioClip AudioClip147 = createNode("AudioClip");
AudioClip147.description = "chimes";
AudioClip147.url = new MFString(new java.lang.String["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound146.source = AudioClip147;

children[30] = Sound146;

Sound Sound148 = createNode("Sound");
Sound148.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
MovieTexture MovieTexture149 = createNode("MovieTexture");
MovieTexture149.description = "mpgsys.mpg from ConformanceNist suite";
MovieTexture149.url = new MFString(new java.lang.String["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"children\"
Sound148.source = MovieTexture149;

children[31] = Sound148;

//Test success: Anchor.isNode()=true, siteAnchor.isNode()=true
//Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
Shape Shape150 = createNode("Shape");
Shape150.DEF = "ExtrusionShape";
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
Appearance Appearance151 = createNode("Appearance");
Appearance151.DEF = "TransparentAppearance";
Material Material152 = createNode("Material");
Material152.transparency = 1;
Appearance151.material = Material152;

Shape150.appearance = Appearance151;

Extrusion Extrusion153 = createNode("Extrusion");
Extrusion153.DEF = "ExampleExtrusion";
Shape150.geometry = Extrusion153;

children[32] = Shape150;

Group Group154 = createNode("Group");
//Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes
ProtoDeclare ProtoDeclare155 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="NewWorldInfo" ><ProtoInterface><field name="description" accessType="initializeOnly" type="SFString"></field>
</ProtoInterface>
<ProtoBody><WorldInfo></WorldInfo>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare155.name = "NewWorldInfo";
ProtoInterface ProtoInterface156 = createNode("ProtoInterface");
field field157 = createNode("field");
field157.name = "description";
field157.accessType = "initializeOnly";
field157.type = "SFString";
ProtoInterface156.field = new MFNode();

ProtoInterface156.field[0] = field157;

ProtoDeclare155.protoInterface = ProtoInterface156;

ProtoBody ProtoBody158 = createNode("ProtoBody");
WorldInfo WorldInfo159 = createNode("WorldInfo");
ProtoBody158.children = new MFNode();

ProtoBody158.children[0] = WorldInfo159;

ProtoDeclare155.protoBody = ProtoBody158;

Group154.children = new MFNode();

Group154.children[0] = ProtoDeclare155;

ProtoInstance ProtoInstance160 = createNode("ProtoInstance");
ProtoInstance160.name = "NewWorldInfo";
ProtoInstance160.DEF = "Proto1";
fieldValue fieldValue161 = createNode("fieldValue");
fieldValue161.name = "description";
fieldValue161.value = "testing 1 2 3";
ProtoInstance160.fieldValue = new MFNode();

ProtoInstance160.fieldValue[0] = fieldValue161;

Group154.children[1] = ProtoInstance160;

Group Group162 = createNode("Group");
Group162.DEF = "Node2";
//intentionally empty
Group154.children[2] = Group162;

ProtoInstance ProtoInstance163 = createNode("ProtoInstance");
ProtoInstance163.name = "NewWorldInfo";
ProtoInstance163.DEF = "Proto3";
Group154.children[3] = ProtoInstance163;

Transform Transform164 = createNode("Transform");
Transform164.DEF = "Node4";
//intentionally empty
Group154.children[4] = Transform164;

//Test satisfactorily creates MFNode children array as an ordered list with mixed content
children[33] = Group154;

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

EspduTransform EspduTransform186 = createNode("EspduTransform");
WorldInfo WorldInfo187 = createNode("WorldInfo");
EspduTransform186.children = new MFNode();

EspduTransform186.children[0] = WorldInfo187;

children[37] = EspduTransform186;

ReceiverPdu ReceiverPdu188 = createNode("ReceiverPdu");
children[38] = ReceiverPdu188;

SignalPdu SignalPdu189 = createNode("SignalPdu");
children[39] = SignalPdu189;

TransmitterPdu TransmitterPdu190 = createNode("TransmitterPdu");
children[40] = TransmitterPdu190;

DISEntityManager DISEntityManager191 = createNode("DISEntityManager");
DISEntityTypeMapping DISEntityTypeMapping192 = createNode("DISEntityTypeMapping");
DISEntityManager191.children = new MFNode();

DISEntityManager191.children[0] = DISEntityTypeMapping192;

children[41] = DISEntityManager191;

LoadSensor LoadSensor193 = createNode("LoadSensor");
//Contained nodes typically must be USE references for nodes previously DEFined in the scene
//The following nodes are test cases for all X3DUrlObject nodes
Anchor Anchor194 = createNode("Anchor");
Anchor194.USE = "siteAnchor";
LoadSensor193.children = new MFNode();

LoadSensor193.children[0] = Anchor194;

Inline Inline195 = createNode("Inline");
Inline195.USE = "inlineScene";
LoadSensor193.children[1] = Inline195;

DISEntityTypeMapping DISEntityTypeMapping196 = createNode("DISEntityTypeMapping");
LoadSensor193.children[2] = DISEntityTypeMapping196;

GeoMetadata GeoMetadata197 = createNode("GeoMetadata");
LoadSensor193.children[3] = GeoMetadata197;

AudioClip AudioClip198 = createNode("AudioClip");
LoadSensor193.children[4] = AudioClip198;

ImageCubeMapTexture ImageCubeMapTexture199 = createNode("ImageCubeMapTexture");
LoadSensor193.children[5] = ImageCubeMapTexture199;

ImageTexture3D ImageTexture3D200 = createNode("ImageTexture3D");
LoadSensor193.children[6] = ImageTexture3D200;

ImageTexture ImageTexture201 = createNode("ImageTexture");
LoadSensor193.children[7] = ImageTexture201;

MovieTexture MovieTexture202 = createNode("MovieTexture");
LoadSensor193.children[8] = MovieTexture202;

Script Script203 = createNode("Script");
LoadSensor193.children[9] = Script203;

PackagedShader PackagedShader204 = createNode("PackagedShader");
LoadSensor193.children[10] = PackagedShader204;

ShaderPart ShaderPart205 = createNode("ShaderPart");
ShaderPart205.type = "VERTEX";
LoadSensor193.children[11] = ShaderPart205;

ShaderProgram ShaderProgram206 = createNode("ShaderProgram");
ShaderProgram206.type = "VERTEX";
LoadSensor193.children[12] = ShaderProgram206;

children[42] = LoadSensor193;

}
