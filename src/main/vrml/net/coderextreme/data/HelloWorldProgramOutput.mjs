let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.CssClass = "x3dModel.class";
X3D0.profile = "Full";
X3D0.style = "x3dModel.style";
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
component6.name = "HAnim";
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
meta12.content = "HelloWorldProgramOutput.x3d";
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
meta18.content = "3 July 2023";
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
meta21.content = "Netbeans https://www.netbeans.org";
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

head = head1;

let ViewpointGroup33 = browser.currentScene.createNode("ViewpointGroup");
ViewpointGroup33.description = "Available viewpoints";
let Viewpoint34 = browser.currentScene.createNode("Viewpoint");
Viewpoint34.DEF = "DefaultView";
Viewpoint34.description = "Hello X3DJSAIL";
ViewpointGroup33.children = new MFNode();

ViewpointGroup33.children[0] = Viewpoint34;

let Viewpoint35 = browser.currentScene.createNode("Viewpoint");
Viewpoint35.DEF = "TopDownView";
Viewpoint35.description = "top-down view from above";
Viewpoint35.orientation = new SFRotation(new float[1,0,0,-1.570796]);
Viewpoint35.position = new SFVec3f(new float[0,100,0]);
ViewpointGroup33.children[1] = Viewpoint35;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ViewpointGroup33;

let NavigationInfo36 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo36.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
browser.currentScene.children[1] = NavigationInfo36;

let WorldInfo37 = browser.currentScene.createNode("WorldInfo");
WorldInfo37.DEF = "WorldInfoDEF";
WorldInfo37.CssClass = "worldInfoNode.class";
WorldInfo37.style = "worldInfoNode.style";
WorldInfo37.title = "HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)";
browser.currentScene.children[2] = WorldInfo37;

let WorldInfo38 = browser.currentScene.createNode("WorldInfo");
WorldInfo38.USE = "WorldInfoDEF";
browser.currentScene.children[3] = WorldInfo38;

let WorldInfo39 = browser.currentScene.createNode("WorldInfo");
WorldInfo39.USE = "WorldInfoDEF";
browser.currentScene.children[4] = WorldInfo39;

let MetadataString40 = browser.currentScene.createNode("MetadataString");
MetadataString40.name = "test";
MetadataString40.DEF = "scene.addChildMetadata";
MetadataString40.value = new MFString(new java.lang.String["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"]);
browser.currentScene.metadata[5] = MetadataString40;

let LayerSet41 = browser.currentScene.createNode("LayerSet");
LayerSet41.DEF = "scene.addChildLayerSetTest";
browser.currentScene.layerSet[6] = LayerSet41;

let Transform42 = browser.currentScene.createNode("Transform");
Transform42.DEF = "LogoGeometryTransform";
Transform42.translation = new SFVec3f(new float[0,1.5,0]);
let Anchor43 = browser.currentScene.createNode("Anchor");
Anchor43.DEF = "siteAnchor";
Anchor43.description = "select for X3D Java SAI Library (X3DJSAIL) description";
Anchor43.url = new MFString(new java.lang.String["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"]);
let Shape44 = browser.currentScene.createNode("Shape");
Shape44.DEF = "BoxShape";
let Appearance45 = browser.currentScene.createNode("Appearance");
let Material46 = browser.currentScene.createNode("Material");
Material46.DEF = "GreenMaterial";
Material46.diffuseColor = new SFColor(new float[0,1,1]);
Material46.emissiveColor = new SFColor(new float[0.8,0,0]);
Material46.transparency = 0.1;
Appearance45.material = Material46;

let ImageTexture47 = browser.currentScene.createNode("ImageTexture");
ImageTexture47.url = new MFString(new java.lang.String["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"]);
Appearance45.texture = ImageTexture47;

Shape44.appearance = Appearance45;

let Box48 = browser.currentScene.createNode("Box");
Box48.DEF = "test-NMTOKEN_regex.0123456789";
Box48.CssClass = "untextured";
Shape44.geometry = Box48;

Anchor43.children = new MFNode();

Anchor43.children[0] = Shape44;

Transform42.children = new MFNode();

Transform42.children[0] = Anchor43;

browser.currentScene.children[7] = Transform42;

let Shape49 = browser.currentScene.createNode("Shape");
Shape49.DEF = "LineShape";
let Appearance50 = browser.currentScene.createNode("Appearance");
let Material51 = browser.currentScene.createNode("Material");
Material51.emissiveColor = new SFColor(new float[0.6,0.19607843,0.8]);
Appearance50.material = Material51;

Shape49.appearance = Appearance50;

let IndexedLineSet52 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet52.coordIndex = new MFInt32(new int[0,1,2,3,4,0]);
//Coordinate 3-tuple point count: 6
let Coordinate53 = browser.currentScene.createNode("Coordinate");
Coordinate53.point = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
IndexedLineSet52.coord = Coordinate53;

Shape49.geometry = IndexedLineSet52;

browser.currentScene.children[8] = Shape49;

let PositionInterpolator54 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator54.DEF = "BoxPathAnimator";
PositionInterpolator54.key = new MFFloat(new float[0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator54.keyValue = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
browser.currentScene.children[9] = PositionInterpolator54;

let TimeSensor55 = browser.currentScene.createNode("TimeSensor");
TimeSensor55.DEF = "OrbitClock";
TimeSensor55.cycleInterval = 8;
TimeSensor55.loop = True;
browser.currentScene.children[10] = TimeSensor55;

let ROUTE56 = browser.currentScene.createNode("ROUTE");
ROUTE56.fromField = "fraction_changed";
ROUTE56.fromNode = "OrbitClock";
ROUTE56.toField = "set_fraction";
ROUTE56.toNode = "BoxPathAnimator";
browser.currentScene.children[11] = ROUTE56;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromField = "value_changed";
ROUTE57.fromNode = "BoxPathAnimator";
ROUTE57.toField = "set_translation";
ROUTE57.toNode = "LogoGeometryTransform";
browser.currentScene.children[12] = ROUTE57;

let Transform58 = browser.currentScene.createNode("Transform");
Transform58.DEF = "TextTransform";
Transform58.translation = new SFVec3f(new float[0,-1.5,0]);
let Shape59 = browser.currentScene.createNode("Shape");
let Appearance60 = browser.currentScene.createNode("Appearance");
let Material61 = browser.currentScene.createNode("Material");
Material61.USE = "GreenMaterial";
Appearance60.material = Material61;

Shape59.appearance = Appearance60;

let Text62 = browser.currentScene.createNode("Text");
Text62.string = new MFString(new java.lang.String["X3D Java","SAI Library","X3DJSAIL"]);
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
let MetadataSet63 = browser.currentScene.createNode("MetadataSet");
MetadataSet63.name = "EscapedQuotationMarksMetadataSet";
let MetadataString64 = browser.currentScene.createNode("MetadataString");
MetadataString64.name = "quotesTestC";
MetadataString64.value = new MFString(new java.lang.String["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""]);
MetadataSet63.value = new MFNode();

MetadataSet63.value[0] = MetadataString64;

let MetadataString65 = browser.currentScene.createNode("MetadataString");
MetadataString65.name = "extraChildTest";
MetadataString65.value = new MFString(new java.lang.String["checks MetadataSet addValue() method"]);
MetadataSet63.value[1] = MetadataString65;

Text62.metadata = MetadataSet63;

let FontStyle66 = browser.currentScene.createNode("FontStyle");
FontStyle66.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text62.fontStyle = FontStyle66;

Shape59.geometry = Text62;

Transform58.children = new MFNode();

Transform58.children[0] = Shape59;

let Collision67 = browser.currentScene.createNode("Collision");
//test containerField='proxy'
let Shape68 = browser.currentScene.createNode("Shape");
Shape68.DEF = "ProxyShape";
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
//reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
let Text69 = browser.currentScene.createNode("Text");
Text69.string = new MFString(new java.lang.String["One, Two, Text","","He said, \"Immel did it!\" \"\""]);
Shape68.geometry = Text69;

Collision67.proxy = Shape68;

Transform58.children[1] = Collision67;

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
browser.currentScene.children[13] = Transform58;

//repeatedly spin 180 degrees as a readable special effect
let OrientationInterpolator70 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator70.DEF = "SpinInterpolator";
OrientationInterpolator70.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator70.keyValue = new MFRotation(new float[0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964]);
browser.currentScene.children[14] = OrientationInterpolator70;

let TimeSensor71 = browser.currentScene.createNode("TimeSensor");
TimeSensor71.DEF = "SpinClock";
TimeSensor71.cycleInterval = 5;
TimeSensor71.loop = True;
browser.currentScene.children[15] = TimeSensor71;

let ROUTE72 = browser.currentScene.createNode("ROUTE");
ROUTE72.fromField = "fraction_changed";
ROUTE72.fromNode = "SpinClock";
ROUTE72.toField = "set_fraction";
ROUTE72.toNode = "SpinInterpolator";
browser.currentScene.children[16] = ROUTE72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromField = "value_changed";
ROUTE73.fromNode = "SpinInterpolator";
ROUTE73.toField = "rotation";
ROUTE73.toNode = "TextTransform";
browser.currentScene.children[17] = ROUTE73;

let Group74 = browser.currentScene.createNode("Group");
Group74.DEF = "BackgroundGroup";
let Background75 = browser.currentScene.createNode("Background");
Background75.DEF = "GradualBackground";
Group74.children = new MFNode();

Group74.children[0] = Background75;

let Script76 = browser.currentScene.createNode("Script");
Script76.DEF = "colorTypeConversionScript";
let field77 = browser.currentScene.createNode("field");
field77.name = "colorInput";
field77.accessType = "inputOnly";
field77.type = "SFColor";
Script76.field = new MFNode();

Script76.field[0] = field77;

let field78 = browser.currentScene.createNode("field");
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

let ColorInterpolator79 = browser.currentScene.createNode("ColorInterpolator");
ColorInterpolator79.DEF = "ColorAnimator";
ColorInterpolator79.key = new MFFloat(new float[0,0.5,1]);
ColorInterpolator79.keyValue = new MFColor(new float[0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1]);
//AZURE to INDIGO and back again
Group74.children[2] = ColorInterpolator79;

let TimeSensor80 = browser.currentScene.createNode("TimeSensor");
TimeSensor80.DEF = "ColorClock";
TimeSensor80.cycleInterval = 60;
TimeSensor80.loop = True;
Group74.children[3] = TimeSensor80;

let ROUTE81 = browser.currentScene.createNode("ROUTE");
ROUTE81.fromField = "colorsOutput";
ROUTE81.fromNode = "colorTypeConversionScript";
ROUTE81.toField = "skyColor";
ROUTE81.toNode = "GradualBackground";
Group74.children[4] = ROUTE81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromField = "value_changed";
ROUTE82.fromNode = "ColorAnimator";
ROUTE82.toField = "colorInput";
ROUTE82.toNode = "colorTypeConversionScript";
Group74.children[5] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromField = "fraction_changed";
ROUTE83.fromNode = "ColorClock";
ROUTE83.toField = "set_fraction";
ROUTE83.toNode = "ColorAnimator";
Group74.children[6] = ROUTE83;

browser.currentScene.children[18] = Group74;

let ProtoDeclare84 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
let ProtoInterface85 = browser.currentScene.createNode("ProtoInterface");
let field86 = browser.currentScene.createNode("field");
field86.name = "description";
field86.accessType = "inputOutput";
field86.appinfo = "tooltip for descriptionField";
field86.type = "SFString";
field86.value = "ArtDeco01Material prototype is a Material node";
ProtoInterface85.field = new MFNode();

ProtoInterface85.field[0] = field86;

let field87 = browser.currentScene.createNode("field");
field87.name = "enabled";
field87.accessType = "inputOutput";
field87.type = "SFBool";
field87.value = "true";
ProtoInterface85.field[1] = field87;

ProtoDeclare84.protoInterface = ProtoInterface85;

let ProtoBody88 = browser.currentScene.createNode("ProtoBody");
//Initial node of ProtoBody determines prototype node type
let Material89 = browser.currentScene.createNode("Material");
Material89.ambientIntensity = 0.25;
Material89.diffuseColor = new SFColor(new float[0.282435,0.085159,0.134462]);
Material89.shininess = 0.127273;
Material89.specularColor = new SFColor(new float[0.276305,0.11431,0.139857]);
ProtoBody88.children = new MFNode();

ProtoBody88.children[0] = Material89;

//[HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
let TouchSensor90 = browser.currentScene.createNode("TouchSensor");
TouchSensor90.description = "within ProtoBody";
let IS91 = browser.currentScene.createNode("IS");
let connect92 = browser.currentScene.createNode("connect");
connect92.nodeField = "description";
connect92.protoField = "description";
IS91.connect = new MFNode();

IS91.connect[0] = connect92;

let connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "enabled";
connect93.protoField = "enabled";
IS91.connect[1] = connect93;

TouchSensor90.iS = IS91;

ProtoBody88.children[1] = TouchSensor90;

ProtoDeclare84.protoBody = ProtoBody88;

browser.currentScene.children[19] = ProtoDeclare84;

let ExternProtoDeclare94 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare94.name = "ArtDeco02Material";
ExternProtoDeclare94.appinfo = "this is a different Material node";
ExternProtoDeclare94.url = new MFString(new java.lang.String["https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"]);
//[HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
let field95 = browser.currentScene.createNode("field");
field95.name = "description";
field95.accessType = "inputOutput";
field95.appinfo = "tooltip for descriptionField";
field95.type = "SFString";
ExternProtoDeclare94.field = new MFNode();

ExternProtoDeclare94.field[0] = field95;

browser.currentScene.children[20] = ExternProtoDeclare94;

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
let Shape96 = browser.currentScene.createNode("Shape");
Shape96.DEF = "TestShape1";
let Appearance97 = browser.currentScene.createNode("Appearance");
Appearance97.DEF = "TestAppearance1";
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
let ProtoInstance98 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance98.name = "ArtDeco01Material";
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
let fieldValue99 = browser.currentScene.createNode("fieldValue");
fieldValue99.name = "description";
fieldValue99.value = "ArtDeco01Material can substitute for a Material node";
ProtoInstance98.fieldValue = new MFNode();

ProtoInstance98.fieldValue[0] = fieldValue99;

Appearance97.shaders = new MFNode();

Appearance97.shaders[0] = ProtoInstance98;

Shape96.appearance = Appearance97;

let Sphere100 = browser.currentScene.createNode("Sphere");
Sphere100.radius = 0.001;
Shape96.geometry = Sphere100;

browser.currentScene.children[21] = Shape96;

let Shape101 = browser.currentScene.createNode("Shape");
Shape101.DEF = "TestShape2";
let Appearance102 = browser.currentScene.createNode("Appearance");
Appearance102.DEF = "TestAppearance2";
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
let ProtoInstance103 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance103.name = "ArtDeco02Material";
ProtoInstance103.DEF = "ArtDeco02MaterialDEF";
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
let fieldValue104 = browser.currentScene.createNode("fieldValue");
fieldValue104.name = "description";
fieldValue104.value = "ArtDeco02Material can substitute for another Material node";
ProtoInstance103.fieldValue = new MFNode();

ProtoInstance103.fieldValue[0] = fieldValue104;

Appearance102.shaders = new MFNode();

Appearance102.shaders[0] = ProtoInstance103;

Shape101.appearance = Appearance102;

let Cone105 = browser.currentScene.createNode("Cone");
Cone105.bottomRadius = 0.001;
Cone105.height = 0.001;
Shape101.geometry = Cone105;

browser.currentScene.children[22] = Shape101;

let Shape106 = browser.currentScene.createNode("Shape");
Shape106.DEF = "TestShape3";
let Appearance107 = browser.currentScene.createNode("Appearance");
Appearance107.DEF = "TestAppearance3";
//ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE.
let ProtoInstance108 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance108.USE = "ArtDeco02MaterialDEF";
Appearance107.shaders = new MFNode();

Appearance107.shaders[0] = ProtoInstance108;

Shape106.appearance = Appearance107;

let Cylinder109 = browser.currentScene.createNode("Cylinder");
Cylinder109.height = 0.001;
Cylinder109.radius = 0.001;
Shape106.geometry = Cylinder109;

browser.currentScene.children[23] = Shape106;

let Inline110 = browser.currentScene.createNode("Inline");
Inline110.DEF = "inlineScene";
Inline110.url = new MFString(new java.lang.String["someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"]);
browser.currentScene.children[24] = Inline110;

let IMPORT111 = browser.currentScene.createNode("IMPORT");
IMPORT111.AS = "WorldInfoDEF2";
IMPORT111.importedDEF = "WorldInfoDEF";
IMPORT111.inlineDEF = "inlineScene";
browser.currentScene.children[25] = IMPORT111;

let EXPORT112 = browser.currentScene.createNode("EXPORT");
EXPORT112.AS = "WorldInfoDEF3";
EXPORT112.localDEF = "WorldInfoDEF";
browser.currentScene.children[26] = EXPORT112;

let ProtoDeclare113 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare113.name = "MaterialModulator";
ProtoDeclare113.appinfo = "mimic a Material node and modulate fields as an animation effect";
ProtoDeclare113.documentation = "https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html";
let ProtoInterface114 = browser.currentScene.createNode("ProtoInterface");
let field115 = browser.currentScene.createNode("field");
field115.name = "enabled";
field115.accessType = "inputOutput";
field115.type = "SFBool";
field115.value = "true";
ProtoInterface114.field = new MFNode();

ProtoInterface114.field[0] = field115;

let field116 = browser.currentScene.createNode("field");
field116.name = "diffuseColor";
field116.accessType = "inputOutput";
field116.type = "SFColor";
field116.value = "0 0 0";
ProtoInterface114.field[1] = field116;

let field117 = browser.currentScene.createNode("field");
field117.name = "emissiveColor";
field117.accessType = "inputOutput";
field117.type = "SFColor";
field117.value = "0.05 0.05 0.5";
ProtoInterface114.field[2] = field117;

let field118 = browser.currentScene.createNode("field");
field118.name = "specularColor";
field118.accessType = "inputOutput";
field118.type = "SFColor";
field118.value = "0 0 0";
ProtoInterface114.field[3] = field118;

let field119 = browser.currentScene.createNode("field");
field119.name = "transparency";
field119.accessType = "inputOutput";
field119.type = "SFFloat";
field119.value = "0";
ProtoInterface114.field[4] = field119;

let field120 = browser.currentScene.createNode("field");
field120.name = "shininess";
field120.accessType = "inputOutput";
field120.type = "SFFloat";
field120.value = "0";
ProtoInterface114.field[5] = field120;

let field121 = browser.currentScene.createNode("field");
field121.name = "ambientIntensity";
field121.accessType = "inputOutput";
field121.type = "SFFloat";
field121.value = "0";
ProtoInterface114.field[6] = field121;

ProtoDeclare113.protoInterface = ProtoInterface114;

let ProtoBody122 = browser.currentScene.createNode("ProtoBody");
let Material123 = browser.currentScene.createNode("Material");
Material123.DEF = "MaterialNode";
let IS124 = browser.currentScene.createNode("IS");
let connect125 = browser.currentScene.createNode("connect");
connect125.nodeField = "diffuseColor";
connect125.protoField = "diffuseColor";
IS124.connect = new MFNode();

IS124.connect[0] = connect125;

let connect126 = browser.currentScene.createNode("connect");
connect126.nodeField = "emissiveColor";
connect126.protoField = "emissiveColor";
IS124.connect[1] = connect126;

let connect127 = browser.currentScene.createNode("connect");
connect127.nodeField = "specularColor";
connect127.protoField = "specularColor";
IS124.connect[2] = connect127;

let connect128 = browser.currentScene.createNode("connect");
connect128.nodeField = "transparency";
connect128.protoField = "transparency";
IS124.connect[3] = connect128;

let connect129 = browser.currentScene.createNode("connect");
connect129.nodeField = "shininess";
connect129.protoField = "shininess";
IS124.connect[4] = connect129;

let connect130 = browser.currentScene.createNode("connect");
connect130.nodeField = "ambientIntensity";
connect130.protoField = "ambientIntensity";
IS124.connect[5] = connect130;

Material123.iS = IS124;

ProtoBody122.children = new MFNode();

ProtoBody122.children[0] = Material123;

//Only first node (the node type) is renderable, others are along for the ride
let Script131 = browser.currentScene.createNode("Script");
Script131.DEF = "MaterialModulatorScript";
let field132 = browser.currentScene.createNode("field");
field132.name = "enabled";
field132.accessType = "inputOutput";
field132.type = "SFBool";
Script131.field = new MFNode();

Script131.field[0] = field132;

let field133 = browser.currentScene.createNode("field");
field133.name = "diffuseColor";
field133.accessType = "inputOutput";
field133.type = "SFColor";
Script131.field[1] = field133;

let field134 = browser.currentScene.createNode("field");
field134.name = "newColor";
field134.accessType = "outputOnly";
field134.type = "SFColor";
Script131.field[2] = field134;

let field135 = browser.currentScene.createNode("field");
field135.name = "clockTrigger";
field135.accessType = "inputOnly";
field135.type = "SFTime";
Script131.field[3] = field135;

let IS136 = browser.currentScene.createNode("IS");
let connect137 = browser.currentScene.createNode("connect");
connect137.nodeField = "enabled";
connect137.protoField = "enabled";
IS136.connect = new MFNode();

IS136.connect[0] = connect137;

let connect138 = browser.currentScene.createNode("connect");
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

browser.currentScene.children[27] = ProtoDeclare113;

//Test success: declarative statement createDeclarativeShapeTests()
let Group139 = browser.currentScene.createNode("Group");
Group139.DEF = "DeclarativeGroupExample";
let Shape140 = browser.currentScene.createNode("Shape");
let MetadataString141 = browser.currentScene.createNode("MetadataString");
MetadataString141.name = "findThisNameValue";
MetadataString141.DEF = "FindableMetadataStringTest";
MetadataString141.value = new MFString(new java.lang.String["test case"]);
Shape140.metadata = new SFNode();

Shape140.metadata[0] = MetadataString141;

let Appearance142 = browser.currentScene.createNode("Appearance");
Appearance142.DEF = "DeclarativeAppearanceExample";
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
let ProtoInstance143 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance143.name = "MaterialModulator";
ProtoInstance143.DEF = "MyMaterialModulator";
Appearance142.shaders = new MFNode();

Appearance142.shaders[0] = ProtoInstance143;

Shape140.appearance = Appearance142;

let Cone144 = browser.currentScene.createNode("Cone");
Cone144.bottom = False;
Cone144.bottomRadius = 0.05;
Cone144.height = 0.1;
Shape140.geometry = Cone144;

Group139.children = new MFNode();

Group139.children[0] = Shape140;

//Test success: declarativeGroup.addChild() singleton pipeline method
browser.currentScene.children[28] = Group139;

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
let Group145 = browser.currentScene.createNode("Group");
Group145.DEF = "TestFieldObjectsGroup";
//testFieldObjects() results
//SFBool default=false, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true
//regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotation.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value
browser.currentScene.children[29] = Group145;

let Sound146 = browser.currentScene.createNode("Sound");
Sound146.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let AudioClip147 = browser.currentScene.createNode("AudioClip");
AudioClip147.description = "chimes";
AudioClip147.url = new MFString(new java.lang.String["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound146.source = AudioClip147;

browser.currentScene.children[30] = Sound146;

let Sound148 = browser.currentScene.createNode("Sound");
Sound148.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let MovieTexture149 = browser.currentScene.createNode("MovieTexture");
MovieTexture149.description = "mpgsys.mpg from ConformanceNist suite";
MovieTexture149.url = new MFString(new java.lang.String["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"children\"
Sound148.source = MovieTexture149;

browser.currentScene.children[31] = Sound148;

//Test success: Anchor.isNode()=true, siteAnchor.isNode()=true
//Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
let Shape150 = browser.currentScene.createNode("Shape");
Shape150.DEF = "ExtrusionShape";
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
let Appearance151 = browser.currentScene.createNode("Appearance");
Appearance151.DEF = "TransparentAppearance";
let Material152 = browser.currentScene.createNode("Material");
Material152.transparency = 1;
Appearance151.material = Material152;

Shape150.appearance = Appearance151;

let Extrusion153 = browser.currentScene.createNode("Extrusion");
Extrusion153.DEF = "ExampleExtrusion";
Shape150.geometry = Extrusion153;

browser.currentScene.children[32] = Shape150;

let Group154 = browser.currentScene.createNode("Group");
//Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes
let ProtoDeclare155 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="NewWorldInfo" ><ProtoInterface><field name="description" accessType="initializeOnly" type="SFString"></field>
</ProtoInterface>
<ProtoBody><WorldInfo></WorldInfo>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare155.name = "NewWorldInfo";
let ProtoInterface156 = browser.currentScene.createNode("ProtoInterface");
let field157 = browser.currentScene.createNode("field");
field157.name = "description";
field157.accessType = "initializeOnly";
field157.type = "SFString";
ProtoInterface156.field = new MFNode();

ProtoInterface156.field[0] = field157;

ProtoDeclare155.protoInterface = ProtoInterface156;

let ProtoBody158 = browser.currentScene.createNode("ProtoBody");
let WorldInfo159 = browser.currentScene.createNode("WorldInfo");
ProtoBody158.children = new MFNode();

ProtoBody158.children[0] = WorldInfo159;

ProtoDeclare155.protoBody = ProtoBody158;

Group154.children = new MFNode();

Group154.children[0] = ProtoDeclare155;

let ProtoInstance160 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance160.name = "NewWorldInfo";
ProtoInstance160.DEF = "Proto1";
let fieldValue161 = browser.currentScene.createNode("fieldValue");
fieldValue161.name = "description";
fieldValue161.value = "testing 1 2 3";
ProtoInstance160.fieldValue = new MFNode();

ProtoInstance160.fieldValue[0] = fieldValue161;

Group154.children[1] = ProtoInstance160;

let Group162 = browser.currentScene.createNode("Group");
Group162.DEF = "Node2";
//intentionally empty
Group154.children[2] = Group162;

let ProtoInstance163 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance163.name = "NewWorldInfo";
ProtoInstance163.DEF = "Proto3";
Group154.children[3] = ProtoInstance163;

let Transform164 = browser.currentScene.createNode("Transform");
Transform164.DEF = "Node4";
//intentionally empty
Group154.children[4] = Transform164;

//Test satisfactorily creates MFNode children array as an ordered list with mixed content
browser.currentScene.children[33] = Group154;

let ProtoDeclare165 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
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

let EspduTransform186 = browser.currentScene.createNode("EspduTransform");
let WorldInfo187 = browser.currentScene.createNode("WorldInfo");
EspduTransform186.children = new MFNode();

EspduTransform186.children[0] = WorldInfo187;

browser.currentScene.children[37] = EspduTransform186;

let ReceiverPdu188 = browser.currentScene.createNode("ReceiverPdu");
browser.currentScene.children[38] = ReceiverPdu188;

let SignalPdu189 = browser.currentScene.createNode("SignalPdu");
browser.currentScene.children[39] = SignalPdu189;

let TransmitterPdu190 = browser.currentScene.createNode("TransmitterPdu");
browser.currentScene.children[40] = TransmitterPdu190;

let DISEntityManager191 = browser.currentScene.createNode("DISEntityManager");
let DISEntityTypeMapping192 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityManager191.children = new MFNode();

DISEntityManager191.children[0] = DISEntityTypeMapping192;

browser.currentScene.children[41] = DISEntityManager191;

let LoadSensor193 = browser.currentScene.createNode("LoadSensor");
//Contained nodes typically must be USE references for nodes previously DEFined in the scene
//The following nodes are test cases for all X3DUrlObject nodes
let Anchor194 = browser.currentScene.createNode("Anchor");
Anchor194.USE = "siteAnchor";
LoadSensor193.children = new MFNode();

LoadSensor193.children[0] = Anchor194;

let Inline195 = browser.currentScene.createNode("Inline");
Inline195.USE = "inlineScene";
LoadSensor193.children[1] = Inline195;

let DISEntityTypeMapping196 = browser.currentScene.createNode("DISEntityTypeMapping");
LoadSensor193.children[2] = DISEntityTypeMapping196;

let GeoMetadata197 = browser.currentScene.createNode("GeoMetadata");
LoadSensor193.children[3] = GeoMetadata197;

let AudioClip198 = browser.currentScene.createNode("AudioClip");
LoadSensor193.children[4] = AudioClip198;

let ImageCubeMapTexture199 = browser.currentScene.createNode("ImageCubeMapTexture");
LoadSensor193.children[5] = ImageCubeMapTexture199;

let ImageTexture3D200 = browser.currentScene.createNode("ImageTexture3D");
LoadSensor193.children[6] = ImageTexture3D200;

let ImageTexture201 = browser.currentScene.createNode("ImageTexture");
LoadSensor193.children[7] = ImageTexture201;

let MovieTexture202 = browser.currentScene.createNode("MovieTexture");
LoadSensor193.children[8] = MovieTexture202;

let Script203 = browser.currentScene.createNode("Script");
LoadSensor193.children[9] = Script203;

let PackagedShader204 = browser.currentScene.createNode("PackagedShader");
LoadSensor193.children[10] = PackagedShader204;

let ShaderPart205 = browser.currentScene.createNode("ShaderPart");
ShaderPart205.type = "VERTEX";
LoadSensor193.children[11] = ShaderPart205;

let ShaderProgram206 = browser.currentScene.createNode("ShaderProgram");
ShaderProgram206.type = "VERTEX";
LoadSensor193.children[12] = ShaderProgram206;

browser.currentScene.children[42] = LoadSensor193;

