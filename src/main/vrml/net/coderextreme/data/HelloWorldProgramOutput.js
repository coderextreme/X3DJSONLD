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
meta18.content = "9 January 2022";
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

let #sourceCode79 = browser.currentScene.createNode("#sourceCode");
Script76.#sourceCode[2] = #sourceCode79;

Group74.children[1] = Script76;

let ColorInterpolator80 = browser.currentScene.createNode("ColorInterpolator");
ColorInterpolator80.DEF = "ColorAnimator";
ColorInterpolator80.key = new MFFloat(new float[0,0.5,1]);
ColorInterpolator80.keyValue = new MFColor(new float[0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1]);
//AZURE to INDIGO and back again
Group74.children[2] = ColorInterpolator80;

let TimeSensor81 = browser.currentScene.createNode("TimeSensor");
TimeSensor81.DEF = "ColorClock";
TimeSensor81.cycleInterval = 60;
TimeSensor81.loop = True;
Group74.children[3] = TimeSensor81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromField = "colorsOutput";
ROUTE82.fromNode = "colorTypeConversionScript";
ROUTE82.toField = "skyColor";
ROUTE82.toNode = "GradualBackground";
Group74.children[4] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromField = "value_changed";
ROUTE83.fromNode = "ColorAnimator";
ROUTE83.toField = "colorInput";
ROUTE83.toNode = "colorTypeConversionScript";
Group74.children[5] = ROUTE83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromField = "fraction_changed";
ROUTE84.fromNode = "ColorClock";
ROUTE84.toField = "set_fraction";
ROUTE84.toNode = "ColorAnimator";
Group74.children[6] = ROUTE84;

browser.currentScene.children[18] = Group74;

let ProtoDeclare85 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare85.name = "ArtDeco01Material";
ProtoDeclare85.appinfo = "tooltip: ArtDeco01Material prototype is a Material node";
let ProtoInterface86 = browser.currentScene.createNode("ProtoInterface");
let field87 = browser.currentScene.createNode("field");
field87.name = "description";
field87.accessType = "inputOutput";
field87.appinfo = "tooltip for descriptionField";
field87.type = "SFString";
field87.value = "ArtDeco01Material prototype is a Material node";
ProtoInterface86.field = new MFNode();

ProtoInterface86.field[0] = field87;

let field88 = browser.currentScene.createNode("field");
field88.name = "enabled";
field88.accessType = "inputOutput";
field88.type = "SFBool";
field88.value = "true";
ProtoInterface86.field[1] = field88;

ProtoDeclare85.protoInterface = ProtoInterface86;

let ProtoBody89 = browser.currentScene.createNode("ProtoBody");
//Initial node of ProtoBody determines prototype node type
let Material90 = browser.currentScene.createNode("Material");
Material90.ambientIntensity = 0.25;
Material90.diffuseColor = new SFColor(new float[0.282435,0.085159,0.134462]);
Material90.shininess = 0.127273;
Material90.specularColor = new SFColor(new float[0.276305,0.11431,0.139857]);
ProtoBody89.children = new MFNode();

ProtoBody89.children[0] = Material90;

//[HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
let TouchSensor91 = browser.currentScene.createNode("TouchSensor");
TouchSensor91.description = "within ProtoBody";
let IS92 = browser.currentScene.createNode("IS");
let connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "description";
connect93.protoField = "description";
IS92.connect = new MFNode();

IS92.connect[0] = connect93;

let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "enabled";
connect94.protoField = "enabled";
IS92.connect[1] = connect94;

TouchSensor91.iS = IS92;

ProtoBody89.children[1] = TouchSensor91;

ProtoDeclare85.protoBody = ProtoBody89;

browser.currentScene.children[19] = ProtoDeclare85;

let ExternProtoDeclare95 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare95.name = "ArtDeco02Material";
ExternProtoDeclare95.appinfo = "this is a different Material node";
ExternProtoDeclare95.url = new MFString(new java.lang.String["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"]);
//[HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
let field96 = browser.currentScene.createNode("field");
field96.name = "description";
field96.accessType = "inputOutput";
field96.appinfo = "tooltip for descriptionField";
field96.type = "SFString";
ExternProtoDeclare95.field = new MFNode();

ExternProtoDeclare95.field[0] = field96;

browser.currentScene.children[20] = ExternProtoDeclare95;

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
let Shape97 = browser.currentScene.createNode("Shape");
Shape97.DEF = "TestShape1";
let Appearance98 = browser.currentScene.createNode("Appearance");
Appearance98.DEF = "TestAppearance1";
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
let ProtoInstance99 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance99.name = "ArtDeco01Material";
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
let fieldValue100 = browser.currentScene.createNode("fieldValue");
fieldValue100.name = "description";
fieldValue100.value = "ArtDeco01Material can substitute for a Material node";
ProtoInstance99.fieldValue = new MFNode();

ProtoInstance99.fieldValue[0] = fieldValue100;

Appearance98.shaders = new MFNode();

Appearance98.shaders[0] = ProtoInstance99;

Shape97.appearance = Appearance98;

let Sphere101 = browser.currentScene.createNode("Sphere");
Sphere101.radius = 0.001;
Shape97.geometry = Sphere101;

browser.currentScene.children[21] = Shape97;

let Shape102 = browser.currentScene.createNode("Shape");
Shape102.DEF = "TestShape2";
let Appearance103 = browser.currentScene.createNode("Appearance");
Appearance103.DEF = "TestAppearance2";
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
let ProtoInstance104 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance104.name = "ArtDeco02Material";
ProtoInstance104.DEF = "ArtDeco02MaterialDEF";
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
let fieldValue105 = browser.currentScene.createNode("fieldValue");
fieldValue105.name = "description";
fieldValue105.value = "ArtDeco02Material can substitute for another Material node";
ProtoInstance104.fieldValue = new MFNode();

ProtoInstance104.fieldValue[0] = fieldValue105;

Appearance103.shaders = new MFNode();

Appearance103.shaders[0] = ProtoInstance104;

Shape102.appearance = Appearance103;

let Cone106 = browser.currentScene.createNode("Cone");
Cone106.bottomRadius = 0.001;
Cone106.height = 0.001;
Shape102.geometry = Cone106;

browser.currentScene.children[22] = Shape102;

let Shape107 = browser.currentScene.createNode("Shape");
Shape107.DEF = "TestShape3";
let Appearance108 = browser.currentScene.createNode("Appearance");
Appearance108.DEF = "TestAppearance3";
//ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE.
let ProtoInstance109 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance109.USE = "ArtDeco02MaterialDEF";
Appearance108.shaders = new MFNode();

Appearance108.shaders[0] = ProtoInstance109;

Shape107.appearance = Appearance108;

let Cylinder110 = browser.currentScene.createNode("Cylinder");
Cylinder110.height = 0.001;
Cylinder110.radius = 0.001;
Shape107.geometry = Cylinder110;

browser.currentScene.children[23] = Shape107;

let Inline111 = browser.currentScene.createNode("Inline");
Inline111.DEF = "inlineScene";
Inline111.url = new MFString(new java.lang.String["someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"]);
browser.currentScene.children[24] = Inline111;

let IMPORT112 = browser.currentScene.createNode("IMPORT");
IMPORT112.AS = "WorldInfoDEF2";
IMPORT112.importedDEF = "WorldInfoDEF";
IMPORT112.inlineDEF = "inlineScene";
browser.currentScene.children[25] = IMPORT112;

let EXPORT113 = browser.currentScene.createNode("EXPORT");
EXPORT113.AS = "WorldInfoDEF3";
EXPORT113.localDEF = "WorldInfoDEF";
browser.currentScene.children[26] = EXPORT113;

let ProtoDeclare114 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare114.name = "MaterialModulator";
ProtoDeclare114.appinfo = "mimic a Material node and modulate fields as an animation effect";
ProtoDeclare114.documentation = "http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html";
let ProtoInterface115 = browser.currentScene.createNode("ProtoInterface");
let field116 = browser.currentScene.createNode("field");
field116.name = "enabled";
field116.accessType = "inputOutput";
field116.type = "SFBool";
field116.value = "true";
ProtoInterface115.field = new MFNode();

ProtoInterface115.field[0] = field116;

let field117 = browser.currentScene.createNode("field");
field117.name = "diffuseColor";
field117.accessType = "inputOutput";
field117.type = "SFColor";
field117.value = "0 0 0";
ProtoInterface115.field[1] = field117;

let field118 = browser.currentScene.createNode("field");
field118.name = "emissiveColor";
field118.accessType = "inputOutput";
field118.type = "SFColor";
field118.value = "0.05 0.05 0.5";
ProtoInterface115.field[2] = field118;

let field119 = browser.currentScene.createNode("field");
field119.name = "specularColor";
field119.accessType = "inputOutput";
field119.type = "SFColor";
field119.value = "0 0 0";
ProtoInterface115.field[3] = field119;

let field120 = browser.currentScene.createNode("field");
field120.name = "transparency";
field120.accessType = "inputOutput";
field120.type = "SFFloat";
field120.value = "0";
ProtoInterface115.field[4] = field120;

let field121 = browser.currentScene.createNode("field");
field121.name = "shininess";
field121.accessType = "inputOutput";
field121.type = "SFFloat";
field121.value = "0";
ProtoInterface115.field[5] = field121;

let field122 = browser.currentScene.createNode("field");
field122.name = "ambientIntensity";
field122.accessType = "inputOutput";
field122.type = "SFFloat";
field122.value = "0";
ProtoInterface115.field[6] = field122;

ProtoDeclare114.protoInterface = ProtoInterface115;

let ProtoBody123 = browser.currentScene.createNode("ProtoBody");
let Material124 = browser.currentScene.createNode("Material");
Material124.DEF = "MaterialNode";
let IS125 = browser.currentScene.createNode("IS");
let connect126 = browser.currentScene.createNode("connect");
connect126.nodeField = "diffuseColor";
connect126.protoField = "diffuseColor";
IS125.connect = new MFNode();

IS125.connect[0] = connect126;

let connect127 = browser.currentScene.createNode("connect");
connect127.nodeField = "emissiveColor";
connect127.protoField = "emissiveColor";
IS125.connect[1] = connect127;

let connect128 = browser.currentScene.createNode("connect");
connect128.nodeField = "specularColor";
connect128.protoField = "specularColor";
IS125.connect[2] = connect128;

let connect129 = browser.currentScene.createNode("connect");
connect129.nodeField = "transparency";
connect129.protoField = "transparency";
IS125.connect[3] = connect129;

let connect130 = browser.currentScene.createNode("connect");
connect130.nodeField = "shininess";
connect130.protoField = "shininess";
IS125.connect[4] = connect130;

let connect131 = browser.currentScene.createNode("connect");
connect131.nodeField = "ambientIntensity";
connect131.protoField = "ambientIntensity";
IS125.connect[5] = connect131;

Material124.iS = IS125;

ProtoBody123.children = new MFNode();

ProtoBody123.children[0] = Material124;

//Only first node (the node type) is renderable, others are along for the ride
let Script132 = browser.currentScene.createNode("Script");
Script132.DEF = "MaterialModulatorScript";
let field133 = browser.currentScene.createNode("field");
field133.name = "enabled";
field133.accessType = "inputOutput";
field133.type = "SFBool";
Script132.field = new MFNode();

Script132.field[0] = field133;

let field134 = browser.currentScene.createNode("field");
field134.name = "diffuseColor";
field134.accessType = "inputOutput";
field134.type = "SFColor";
Script132.field[1] = field134;

let field135 = browser.currentScene.createNode("field");
field135.name = "newColor";
field135.accessType = "outputOnly";
field135.type = "SFColor";
Script132.field[2] = field135;

let field136 = browser.currentScene.createNode("field");
field136.name = "clockTrigger";
field136.accessType = "inputOnly";
field136.type = "SFTime";
Script132.field[3] = field136;

let IS137 = browser.currentScene.createNode("IS");
let connect138 = browser.currentScene.createNode("connect");
connect138.nodeField = "enabled";
connect138.protoField = "enabled";
IS137.connect = new MFNode();

IS137.connect[0] = connect138;

let connect139 = browser.currentScene.createNode("connect");
connect139.nodeField = "diffuseColor";
connect139.protoField = "diffuseColor";
IS137.connect[1] = connect139;

Script132.iS = IS137;

let #sourceCode140 = browser.currentScene.createNode("#sourceCode");
Script132.#sourceCode[4] = #sourceCode140;

ProtoBody123.children[1] = Script132;

ProtoDeclare114.protoBody = ProtoBody123;

browser.currentScene.children[27] = ProtoDeclare114;

//Test success: declarative statement createDeclarativeShapeTests()
let Group141 = browser.currentScene.createNode("Group");
Group141.DEF = "DeclarativeGroupExample";
let Shape142 = browser.currentScene.createNode("Shape");
let MetadataString143 = browser.currentScene.createNode("MetadataString");
MetadataString143.name = "findThisNameValue";
MetadataString143.DEF = "FindableMetadataStringTest";
MetadataString143.value = new MFString(new java.lang.String["test case"]);
Shape142.metadata = MetadataString143;

let Appearance144 = browser.currentScene.createNode("Appearance");
Appearance144.DEF = "DeclarativeAppearanceExample";
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
let ProtoInstance145 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance145.name = "MaterialModulator";
ProtoInstance145.DEF = "MyMaterialModulator";
Appearance144.shaders = new MFNode();

Appearance144.shaders[0] = ProtoInstance145;

Shape142.appearance = Appearance144;

let Cone146 = browser.currentScene.createNode("Cone");
Cone146.bottom = False;
Cone146.bottomRadius = 0.05;
Cone146.height = 0.1;
Shape142.geometry = Cone146;

Group141.children = new MFNode();

Group141.children[0] = Shape142;

//Test success: declarativeGroup.addChild() singleton pipeline method
browser.currentScene.children[28] = Group141;

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
let Group147 = browser.currentScene.createNode("Group");
Group147.DEF = "TestFieldObjectsGroup";
//testFieldObjects() results
//SFBool default=true, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true
//regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotation.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value
browser.currentScene.children[29] = Group147;

let Sound148 = browser.currentScene.createNode("Sound");
Sound148.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let AudioClip149 = browser.currentScene.createNode("AudioClip");
AudioClip149.description = "chimes";
AudioClip149.url = new MFString(new java.lang.String["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound148.source = AudioClip149;

browser.currentScene.children[30] = Sound148;

let Sound150 = browser.currentScene.createNode("Sound");
Sound150.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let MovieTexture151 = browser.currentScene.createNode("MovieTexture");
MovieTexture151.description = "mpgsys.mpg from ConformanceNist suite";
MovieTexture151.url = new MFString(new java.lang.String["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"children\"
Sound150.source = MovieTexture151;

browser.currentScene.children[31] = Sound150;

//Test success: Anchor.isNode()=true, siteAnchor.isNode()=true
//Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
let Shape152 = browser.currentScene.createNode("Shape");
Shape152.DEF = "ExtrusionShape";
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
let Appearance153 = browser.currentScene.createNode("Appearance");
Appearance153.DEF = "TransparentAppearance";
let Material154 = browser.currentScene.createNode("Material");
Material154.transparency = 1;
Appearance153.material = Material154;

Shape152.appearance = Appearance153;

let Extrusion155 = browser.currentScene.createNode("Extrusion");
Extrusion155.DEF = "ExampleExtrusion";
Shape152.geometry = Extrusion155;

browser.currentScene.children[32] = Shape152;

let Group156 = browser.currentScene.createNode("Group");
//Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes
let ProtoDeclare157 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="NewWorldInfo" ><ProtoInterface><field name="description" accessType="initializeOnly" type="SFString"></field>
</ProtoInterface>
<ProtoBody><WorldInfo></WorldInfo>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare157.name = "NewWorldInfo";
let ProtoInterface158 = browser.currentScene.createNode("ProtoInterface");
let field159 = browser.currentScene.createNode("field");
field159.name = "description";
field159.accessType = "initializeOnly";
field159.type = "SFString";
ProtoInterface158.field = new MFNode();

ProtoInterface158.field[0] = field159;

ProtoDeclare157.protoInterface = ProtoInterface158;

let ProtoBody160 = browser.currentScene.createNode("ProtoBody");
let WorldInfo161 = browser.currentScene.createNode("WorldInfo");
ProtoBody160.children = new MFNode();

ProtoBody160.children[0] = WorldInfo161;

ProtoDeclare157.protoBody = ProtoBody160;

Group156.children = new MFNode();

Group156.children[0] = ProtoDeclare157;

let ProtoInstance162 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance162.name = "NewWorldInfo";
ProtoInstance162.DEF = "Proto1";
let fieldValue163 = browser.currentScene.createNode("fieldValue");
fieldValue163.name = "description";
fieldValue163.value = "testing 1 2 3";
ProtoInstance162.fieldValue = new MFNode();

ProtoInstance162.fieldValue[0] = fieldValue163;

Group156.children[1] = ProtoInstance162;

let Group164 = browser.currentScene.createNode("Group");
Group164.DEF = "Node2";
//intentionally empty
Group156.children[2] = Group164;

let ProtoInstance165 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance165.name = "NewWorldInfo";
ProtoInstance165.DEF = "Proto3";
Group156.children[3] = ProtoInstance165;

let Transform166 = browser.currentScene.createNode("Transform");
Transform166.DEF = "Node4";
//intentionally empty
Group156.children[4] = Transform166;

//Test satisfactorily creates MFNode children array as an ordered list with mixed content
browser.currentScene.children[33] = Group156;

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

let EspduTransform188 = browser.currentScene.createNode("EspduTransform");
let WorldInfo189 = browser.currentScene.createNode("WorldInfo");
EspduTransform188.children = new MFNode();

EspduTransform188.children[0] = WorldInfo189;

browser.currentScene.children[37] = EspduTransform188;

let ReceiverPdu190 = browser.currentScene.createNode("ReceiverPdu");
browser.currentScene.children[38] = ReceiverPdu190;

let SignalPdu191 = browser.currentScene.createNode("SignalPdu");
browser.currentScene.children[39] = SignalPdu191;

let TransmitterPdu192 = browser.currentScene.createNode("TransmitterPdu");
browser.currentScene.children[40] = TransmitterPdu192;

let DISEntityManager193 = browser.currentScene.createNode("DISEntityManager");
let DISEntityTypeMapping194 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityManager193.children = new MFNode();

DISEntityManager193.children[0] = DISEntityTypeMapping194;

browser.currentScene.children[41] = DISEntityManager193;

let LoadSensor195 = browser.currentScene.createNode("LoadSensor");
//Contained nodes typically must be USE references for nodes previously DEFined in the scene
//The following nodes are test cases for all X3DUrlObject nodes
let Anchor196 = browser.currentScene.createNode("Anchor");
Anchor196.USE = "siteAnchor";
LoadSensor195.children = new MFNode();

LoadSensor195.children[0] = Anchor196;

let Inline197 = browser.currentScene.createNode("Inline");
Inline197.USE = "inlineScene";
LoadSensor195.children[1] = Inline197;

let DISEntityTypeMapping198 = browser.currentScene.createNode("DISEntityTypeMapping");
LoadSensor195.children[2] = DISEntityTypeMapping198;

let GeoMetadata199 = browser.currentScene.createNode("GeoMetadata");
LoadSensor195.children[3] = GeoMetadata199;

let AudioClip200 = browser.currentScene.createNode("AudioClip");
LoadSensor195.children[4] = AudioClip200;

let ImageCubeMapTexture201 = browser.currentScene.createNode("ImageCubeMapTexture");
LoadSensor195.children[5] = ImageCubeMapTexture201;

let ImageTexture3D202 = browser.currentScene.createNode("ImageTexture3D");
LoadSensor195.children[6] = ImageTexture3D202;

let ImageTexture203 = browser.currentScene.createNode("ImageTexture");
LoadSensor195.children[7] = ImageTexture203;

let MovieTexture204 = browser.currentScene.createNode("MovieTexture");
LoadSensor195.children[8] = MovieTexture204;

let Script205 = browser.currentScene.createNode("Script");
LoadSensor195.children[9] = Script205;

let PackagedShader206 = browser.currentScene.createNode("PackagedShader");
LoadSensor195.children[10] = PackagedShader206;

let ShaderPart207 = browser.currentScene.createNode("ShaderPart");
ShaderPart207.type = "VERTEX";
LoadSensor195.children[11] = ShaderPart207;

let ShaderProgram208 = browser.currentScene.createNode("ShaderProgram");
ShaderProgram208.type = "VERTEX";
LoadSensor195.children[12] = ShaderProgram208;

browser.currentScene.children[42] = LoadSensor195;

