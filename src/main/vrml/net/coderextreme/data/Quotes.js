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
meta6.content = "Quotes.x3d";
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
meta9.content = "HelloWorldProgramOutput.java";
head1.meta[7] = meta9;

let meta10 = browser.currentScene.createNode("meta");
meta10.name = "created";
meta10.content = "6 September 2016";
head1.meta[8] = meta10;

let meta11 = browser.currentScene.createNode("meta");
meta11.name = "modified";
meta11.content = "7 April 2018";
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
meta16.content = "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/HelloWorldProgramOutput.x3d";
head1.meta[14] = meta16;

let meta17 = browser.currentScene.createNode("meta");
meta17.name = "reference";
meta17.content = "Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:";
head1.meta[15] = meta17;

let meta18 = browser.currentScene.createNode("meta");
meta18.name = "reference";
meta18.content = "HelloWorldProgramOutput.txt";
head1.meta[16] = meta18;

let meta19 = browser.currentScene.createNode("meta");
meta19.name = "reference";
meta19.content = "HelloWorldProgramOutput.x3dv";
head1.meta[17] = meta19;

let meta20 = browser.currentScene.createNode("meta");
meta20.name = "reference";
meta20.content = "HelloWorldProgramOutput.wrl";
head1.meta[18] = meta20;

let meta21 = browser.currentScene.createNode("meta");
meta21.name = "reference";
meta21.content = "HelloWorldProgramOutput.html";
head1.meta[19] = meta21;

let meta22 = browser.currentScene.createNode("meta");
meta22.name = "reference";
meta22.content = "X3dValidator https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d";
head1.meta[20] = meta22;

let meta23 = browser.currentScene.createNode("meta");
meta23.name = "identifier";
meta23.content = "https://www.web3d.org/specifications/java/examples/HelloWorldProgramOutput.x3d";
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
meta26.content = "30 April 2018";
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
let Viewpoint31 = browser.currentScene.createNode("Viewpoint");
Viewpoint31.DEF = "DefaultView";
Viewpoint31.description = "Hello X3DJSAIL";
ViewpointGroup30.children = new MFNode();

ViewpointGroup30.children[0] = Viewpoint31;

let Viewpoint32 = browser.currentScene.createNode("Viewpoint");
Viewpoint32.DEF = "TopDownView";
Viewpoint32.description = "top-down view from above";
Viewpoint32.orientation = new SFRotation(new float[1,0,0,-1.570796]);
Viewpoint32.position = new SFVec3f(new float[0,100,0]);
ViewpointGroup30.children[1] = Viewpoint32;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ViewpointGroup30;

let WorldInfo33 = browser.currentScene.createNode("WorldInfo");
WorldInfo33.DEF = "WorldInfoDEF";
WorldInfo33.title = "HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)";
browser.currentScene.children[1] = WorldInfo33;

let WorldInfo34 = browser.currentScene.createNode("WorldInfo");
WorldInfo34.USE = "WorldInfoDEF";
browser.currentScene.children[2] = WorldInfo34;

let WorldInfo35 = browser.currentScene.createNode("WorldInfo");
WorldInfo35.USE = "WorldInfoDEF";
browser.currentScene.children[3] = WorldInfo35;

let MetadataString36 = browser.currentScene.createNode("MetadataString");
MetadataString36.name = "test";
MetadataString36.DEF = "scene.addChildMetadata";
MetadataString36.value = new MFString(new java.lang.String["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"]);
browser.currentScene.metadata[4] = MetadataString36;

let LayerSet37 = browser.currentScene.createNode("LayerSet");
LayerSet37.DEF = "scene.addChildLayerSetTest";
browser.currentScene.layerSet[5] = LayerSet37;

let Transform38 = browser.currentScene.createNode("Transform");
Transform38.DEF = "LogoGeometryTransform";
Transform38.translation = new SFVec3f(new float[0,1.5,0]);
let Anchor39 = browser.currentScene.createNode("Anchor");
Anchor39.description = "select for X3D Java SAI Library (X3DJSAIL) description";
Anchor39.url = new MFString(new java.lang.String["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"]);
let Shape40 = browser.currentScene.createNode("Shape");
Shape40.DEF = "BoxShape";
let Appearance41 = browser.currentScene.createNode("Appearance");
let Material42 = browser.currentScene.createNode("Material");
Material42.DEF = "GreenMaterial";
Material42.diffuseColor = new SFColor(new float[0,1,1]);
Material42.emissiveColor = new SFColor(new float[0.8,0,0]);
Material42.transparency = 0.1;
Appearance41.material = Material42;

let ImageTexture43 = browser.currentScene.createNode("ImageTexture");
ImageTexture43.url = new MFString(new java.lang.String["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"]);
Appearance41.texture = ImageTexture43;

Shape40.appearance = Appearance41;

let Box44 = browser.currentScene.createNode("Box");
Box44.DEF = "test-NMTOKEN_regex.0123456789";
Box44.CssClass = "untextured";
Shape40.geometry = Box44;

Anchor39.children = new MFNode();

Anchor39.children[0] = Shape40;

Transform38.children = new MFNode();

Transform38.children[0] = Anchor39;

browser.currentScene.children[6] = Transform38;

let Shape45 = browser.currentScene.createNode("Shape");
Shape45.DEF = "LineShape";
let Appearance46 = browser.currentScene.createNode("Appearance");
let Material47 = browser.currentScene.createNode("Material");
Material47.emissiveColor = new SFColor(new float[0.6,0.19607843,0.8]);
Appearance46.material = Material47;

Shape45.appearance = Appearance46;

let IndexedLineSet48 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet48.coordIndex = new MFInt32(new int[0,1,2,3,4,0]);
//Coordinate 3-tuple point count: 6
let Coordinate49 = browser.currentScene.createNode("Coordinate");
Coordinate49.point = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
IndexedLineSet48.coord = Coordinate49;

Shape45.geometry = IndexedLineSet48;

browser.currentScene.children[7] = Shape45;

let PositionInterpolator50 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator50.DEF = "BoxPathAnimator";
PositionInterpolator50.key = new MFFloat(new float[0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator50.keyValue = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
browser.currentScene.children[8] = PositionInterpolator50;

let TimeSensor51 = browser.currentScene.createNode("TimeSensor");
TimeSensor51.DEF = "OrbitClock";
TimeSensor51.cycleInterval = 8;
TimeSensor51.loop = True;
browser.currentScene.children[9] = TimeSensor51;

let ROUTE52 = browser.currentScene.createNode("ROUTE");
ROUTE52.fromField = "fraction_changed";
ROUTE52.fromNode = "OrbitClock";
ROUTE52.toField = "set_fraction";
ROUTE52.toNode = "BoxPathAnimator";
browser.currentScene.children[10] = ROUTE52;

let ROUTE53 = browser.currentScene.createNode("ROUTE");
ROUTE53.fromField = "value_changed";
ROUTE53.fromNode = "BoxPathAnimator";
ROUTE53.toField = "set_translation";
ROUTE53.toNode = "LogoGeometryTransform";
browser.currentScene.children[11] = ROUTE53;

let Transform54 = browser.currentScene.createNode("Transform");
Transform54.DEF = "TextTransform";
Transform54.translation = new SFVec3f(new float[0,-1.5,0]);
let Shape55 = browser.currentScene.createNode("Shape");
let Appearance56 = browser.currentScene.createNode("Appearance");
let Material57 = browser.currentScene.createNode("Material");
Material57.USE = "GreenMaterial";
Appearance56.material = Material57;

Shape55.appearance = Appearance56;

let Text58 = browser.currentScene.createNode("Text");
Text58.string = new MFString(new java.lang.String["X3D Java","SAI Library","X3DJSAIL"]);
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
let MetadataSet59 = browser.currentScene.createNode("MetadataSet");
MetadataSet59.name = "EscapedQuotationMarksMetadataSet";
let MetadataString60 = browser.currentScene.createNode("MetadataString");
MetadataString60.name = "quotesTestC";
MetadataString60.value = new MFString(new java.lang.String["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""]);
MetadataSet59.value = new MFNode();

MetadataSet59.value[0] = MetadataString60;

let MetadataString61 = browser.currentScene.createNode("MetadataString");
MetadataString61.name = "extraChildTest";
MetadataString61.value = new MFString(new java.lang.String["checks MetadataSetObject addValue() method"]);
MetadataSet59.value[1] = MetadataString61;

Text58.metadata = MetadataSet59;

let FontStyle62 = browser.currentScene.createNode("FontStyle");
FontStyle62.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text58.fontStyle = FontStyle62;

Shape55.geometry = Text58;

Transform54.children = new MFNode();

Transform54.children[0] = Shape55;

let Collision63 = browser.currentScene.createNode("Collision");
//test containerField='proxy'
let Shape64 = browser.currentScene.createNode("Shape");
Shape64.DEF = "ProxyShape";
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"\"Immel did it!\\\"\"\\\"\"})
//reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
let Text65 = browser.currentScene.createNode("Text");
Text65.string = new MFString(new java.lang.String["One, Two, Text","","He said, \"Immel did it!\" \"\""]);
Shape64.geometry = Text65;

Collision63.proxy = Shape64;

Transform54.children[1] = Collision63;

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
browser.currentScene.children[12] = Transform54;

//repeatedly spin 180 degrees as a readable special effect
let OrientationInterpolator66 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator66.DEF = "SpinInterpolator";
OrientationInterpolator66.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator66.keyValue = new MFRotation(new float[0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964]);
browser.currentScene.children[13] = OrientationInterpolator66;

let TimeSensor67 = browser.currentScene.createNode("TimeSensor");
TimeSensor67.DEF = "SpinClock";
TimeSensor67.cycleInterval = 5;
TimeSensor67.loop = True;
browser.currentScene.children[14] = TimeSensor67;

let ROUTE68 = browser.currentScene.createNode("ROUTE");
ROUTE68.fromField = "fraction_changed";
ROUTE68.fromNode = "SpinClock";
ROUTE68.toField = "set_fraction";
ROUTE68.toNode = "SpinInterpolator";
browser.currentScene.children[15] = ROUTE68;

let ROUTE69 = browser.currentScene.createNode("ROUTE");
ROUTE69.fromField = "value_changed";
ROUTE69.fromNode = "SpinInterpolator";
ROUTE69.toField = "rotation";
ROUTE69.toNode = "TextTransform";
browser.currentScene.children[16] = ROUTE69;

let Group70 = browser.currentScene.createNode("Group");
Group70.DEF = "BackgroundGroup";
let Background71 = browser.currentScene.createNode("Background");
Background71.DEF = "GradualBackground";
Group70.children = new MFNode();

Group70.children[0] = Background71;

let Script72 = browser.currentScene.createNode("Script");
Script72.DEF = "colorTypeConversionScript";
let field73 = browser.currentScene.createNode("field");
field73.name = "colorInput";
field73.accessType = "inputOnly";
field73.type = "SFColor";
Script72.field = new MFNode();

Script72.field[0] = field73;

let field74 = browser.currentScene.createNode("field");
field74.name = "colorsOutput";
field74.accessType = "outputOnly";
field74.type = "MFColor";
Script72.field[1] = field74;

let #sourceCode75 = browser.currentScene.createNode("#sourceCode");
Script72.#sourceCode[2] = #sourceCode75;

Group70.children[1] = Script72;

let ColorInterpolator76 = browser.currentScene.createNode("ColorInterpolator");
ColorInterpolator76.DEF = "ColorAnimator";
ColorInterpolator76.key = new MFFloat(new float[0,0.5,1]);
ColorInterpolator76.keyValue = new MFColor(new float[0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1]);
//AZURE to INDIGO and back again
Group70.children[2] = ColorInterpolator76;

let TimeSensor77 = browser.currentScene.createNode("TimeSensor");
TimeSensor77.DEF = "ColorClock";
TimeSensor77.cycleInterval = 60;
TimeSensor77.loop = True;
Group70.children[3] = TimeSensor77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromField = "colorsOutput";
ROUTE78.fromNode = "colorTypeConversionScript";
ROUTE78.toField = "skyColor";
ROUTE78.toNode = "GradualBackground";
Group70.children[4] = ROUTE78;

let ROUTE79 = browser.currentScene.createNode("ROUTE");
ROUTE79.fromField = "value_changed";
ROUTE79.fromNode = "ColorAnimator";
ROUTE79.toField = "colorInput";
ROUTE79.toNode = "colorTypeConversionScript";
Group70.children[5] = ROUTE79;

let ROUTE80 = browser.currentScene.createNode("ROUTE");
ROUTE80.fromField = "fraction_changed";
ROUTE80.fromNode = "ColorClock";
ROUTE80.toField = "set_fraction";
ROUTE80.toNode = "ColorAnimator";
Group70.children[6] = ROUTE80;

browser.currentScene.children[17] = Group70;

let ProtoDeclare81 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare81.name = "ArtDeco01Material";
ProtoDeclare81.appinfo = "tooltip: ArtDeco01Material prototype is a Material node";
let ProtoInterface82 = browser.currentScene.createNode("ProtoInterface");
let field83 = browser.currentScene.createNode("field");
field83.name = "description";
field83.accessType = "inputOutput";
field83.appinfo = "tooltip for descriptionField";
field83.type = "SFString";
field83.value = "ArtDeco01Material prototype is a Material node";
ProtoInterface82.field = new MFNode();

ProtoInterface82.field[0] = field83;

let field84 = browser.currentScene.createNode("field");
field84.name = "enabled";
field84.accessType = "inputOutput";
field84.type = "SFBool";
field84.value = "true";
ProtoInterface82.field[1] = field84;

ProtoDeclare81.protoInterface = ProtoInterface82;

let ProtoBody85 = browser.currentScene.createNode("ProtoBody");
//Initial node of ProtoBody determines prototype node type
let Material86 = browser.currentScene.createNode("Material");
Material86.ambientIntensity = 0.25;
Material86.diffuseColor = new SFColor(new float[0.282435,0.085159,0.134462]);
Material86.shininess = 0.127273;
Material86.specularColor = new SFColor(new float[0.276305,0.11431,0.139857]);
ProtoBody85.children = new MFNode();

ProtoBody85.children[0] = Material86;

//[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
let TouchSensor87 = browser.currentScene.createNode("TouchSensor");
TouchSensor87.description = "within ProtoBody";
let IS88 = browser.currentScene.createNode("IS");
let connect89 = browser.currentScene.createNode("connect");
connect89.nodeField = "description";
connect89.protoField = "description";
IS88.connect = new MFNode();

IS88.connect[0] = connect89;

let connect90 = browser.currentScene.createNode("connect");
connect90.nodeField = "enabled";
connect90.protoField = "enabled";
IS88.connect[1] = connect90;

TouchSensor87.iS = IS88;

ProtoBody85.children[1] = TouchSensor87;

ProtoDeclare81.protoBody = ProtoBody85;

browser.currentScene.children[18] = ProtoDeclare81;

let ExternProtoDeclare91 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare91.name = "ArtDeco02Material";
ExternProtoDeclare91.appinfo = "this is a different Material node";
ExternProtoDeclare91.url = new MFString(new java.lang.String["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"]);
//[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
let field92 = browser.currentScene.createNode("field");
field92.name = "description";
field92.accessType = "inputOutput";
field92.appinfo = "tooltip for descriptionField";
field92.type = "SFString";
ExternProtoDeclare91.field = new MFNode();

ExternProtoDeclare91.field[0] = field92;

browser.currentScene.children[19] = ExternProtoDeclare91;

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
let Shape93 = browser.currentScene.createNode("Shape");
Shape93.DEF = "TestShape1";
let Appearance94 = browser.currentScene.createNode("Appearance");
Appearance94.DEF = "TestAppearance1";
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
let ProtoInstance95 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance95.name = "ArtDeco01Material";
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
let fieldValue96 = browser.currentScene.createNode("fieldValue");
fieldValue96.name = "description";
fieldValue96.value = "ArtDeco01Material can substitute for a Material node";
ProtoInstance95.fieldValue = new MFNode();

ProtoInstance95.fieldValue[0] = fieldValue96;

Appearance94.shaders = new MFNode();

Appearance94.shaders[0] = ProtoInstance95;

Shape93.appearance = Appearance94;

let Sphere97 = browser.currentScene.createNode("Sphere");
Sphere97.radius = 0.001;
Shape93.geometry = Sphere97;

browser.currentScene.children[20] = Shape93;

let Shape98 = browser.currentScene.createNode("Shape");
Shape98.DEF = "TestShape2";
let Appearance99 = browser.currentScene.createNode("Appearance");
Appearance99.DEF = "TestAppearance2";
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
let ProtoInstance100 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance100.name = "ArtDeco02Material";
ProtoInstance100.DEF = "ArtDeco02MaterialDEF";
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
let fieldValue101 = browser.currentScene.createNode("fieldValue");
fieldValue101.name = "description";
fieldValue101.value = "ArtDeco02Material can substitute for another Material node";
ProtoInstance100.fieldValue = new MFNode();

ProtoInstance100.fieldValue[0] = fieldValue101;

Appearance99.shaders = new MFNode();

Appearance99.shaders[0] = ProtoInstance100;

Shape98.appearance = Appearance99;

let Cone102 = browser.currentScene.createNode("Cone");
Cone102.bottomRadius = 0.001;
Cone102.height = 0.001;
Shape98.geometry = Cone102;

browser.currentScene.children[21] = Shape98;

let Shape103 = browser.currentScene.createNode("Shape");
Shape103.DEF = "TestShape3";
let Appearance104 = browser.currentScene.createNode("Appearance");
Appearance104.DEF = "TestAppearance3";
//ArtDeco02Material ProtoInstance USE goes here...
let ProtoInstance105 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance105.USE = "ArtDeco02MaterialDEF";
Appearance104.shaders = new MFNode();

Appearance104.shaders[0] = ProtoInstance105;

Shape103.appearance = Appearance104;

let Cylinder106 = browser.currentScene.createNode("Cylinder");
Cylinder106.height = 0.001;
Cylinder106.radius = 0.001;
Shape103.geometry = Cylinder106;

browser.currentScene.children[22] = Shape103;

let Inline107 = browser.currentScene.createNode("Inline");
Inline107.DEF = "inlineSceneDef";
Inline107.url = new MFString(new java.lang.String["someOtherScene.x3d"]);
browser.currentScene.children[23] = Inline107;

let IMPORT108 = browser.currentScene.createNode("IMPORT");
IMPORT108.AS = "WorldInfoDEF2";
IMPORT108.importedDEF = "WorldInfoDEF";
IMPORT108.inlineDEF = "inlineSceneDef";
browser.currentScene.children[24] = IMPORT108;

let EXPORT109 = browser.currentScene.createNode("EXPORT");
EXPORT109.AS = "WorldInfoDEF3";
EXPORT109.localDEF = "WorldInfoDEF";
browser.currentScene.children[25] = EXPORT109;

let ProtoDeclare110 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare110.name = "MaterialModulator";
ProtoDeclare110.appinfo = "mimic a Material node and modulate fields as an animation effect";
ProtoDeclare110.documentation = "http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html";
let ProtoInterface111 = browser.currentScene.createNode("ProtoInterface");
let field112 = browser.currentScene.createNode("field");
field112.name = "enabled";
field112.accessType = "inputOutput";
field112.type = "SFBool";
field112.value = "true";
ProtoInterface111.field = new MFNode();

ProtoInterface111.field[0] = field112;

let field113 = browser.currentScene.createNode("field");
field113.name = "diffuseColor";
field113.accessType = "inputOutput";
field113.type = "SFColor";
field113.value = "0 0 0";
ProtoInterface111.field[1] = field113;

let field114 = browser.currentScene.createNode("field");
field114.name = "emissiveColor";
field114.accessType = "inputOutput";
field114.type = "SFColor";
field114.value = "0.05 0.05 0.5";
ProtoInterface111.field[2] = field114;

let field115 = browser.currentScene.createNode("field");
field115.name = "specularColor";
field115.accessType = "inputOutput";
field115.type = "SFColor";
field115.value = "0 0 0";
ProtoInterface111.field[3] = field115;

let field116 = browser.currentScene.createNode("field");
field116.name = "transparency";
field116.accessType = "inputOutput";
field116.type = "SFFloat";
field116.value = "0";
ProtoInterface111.field[4] = field116;

let field117 = browser.currentScene.createNode("field");
field117.name = "shininess";
field117.accessType = "inputOutput";
field117.type = "SFFloat";
field117.value = "0";
ProtoInterface111.field[5] = field117;

let field118 = browser.currentScene.createNode("field");
field118.name = "ambientIntensity";
field118.accessType = "inputOutput";
field118.type = "SFFloat";
field118.value = "0";
ProtoInterface111.field[6] = field118;

ProtoDeclare110.protoInterface = ProtoInterface111;

let ProtoBody119 = browser.currentScene.createNode("ProtoBody");
let Material120 = browser.currentScene.createNode("Material");
Material120.DEF = "MaterialNode";
let IS121 = browser.currentScene.createNode("IS");
let connect122 = browser.currentScene.createNode("connect");
connect122.nodeField = "diffuseColor";
connect122.protoField = "diffuseColor";
IS121.connect = new MFNode();

IS121.connect[0] = connect122;

let connect123 = browser.currentScene.createNode("connect");
connect123.nodeField = "emissiveColor";
connect123.protoField = "emissiveColor";
IS121.connect[1] = connect123;

let connect124 = browser.currentScene.createNode("connect");
connect124.nodeField = "specularColor";
connect124.protoField = "specularColor";
IS121.connect[2] = connect124;

let connect125 = browser.currentScene.createNode("connect");
connect125.nodeField = "transparency";
connect125.protoField = "transparency";
IS121.connect[3] = connect125;

let connect126 = browser.currentScene.createNode("connect");
connect126.nodeField = "shininess";
connect126.protoField = "shininess";
IS121.connect[4] = connect126;

let connect127 = browser.currentScene.createNode("connect");
connect127.nodeField = "ambientIntensity";
connect127.protoField = "ambientIntensity";
IS121.connect[5] = connect127;

Material120.iS = IS121;

ProtoBody119.children = new MFNode();

ProtoBody119.children[0] = Material120;

//Only first node (the node type) is renderable, others are along for the ride
let Script128 = browser.currentScene.createNode("Script");
Script128.DEF = "MaterialModulatorScript";
let field129 = browser.currentScene.createNode("field");
field129.name = "enabled";
field129.accessType = "inputOutput";
field129.type = "SFBool";
Script128.field = new MFNode();

Script128.field[0] = field129;

let field130 = browser.currentScene.createNode("field");
field130.name = "diffuseColor";
field130.accessType = "inputOutput";
field130.type = "SFColor";
Script128.field[1] = field130;

let field131 = browser.currentScene.createNode("field");
field131.name = "newColor";
field131.accessType = "outputOnly";
field131.type = "SFColor";
Script128.field[2] = field131;

let field132 = browser.currentScene.createNode("field");
field132.name = "clockTrigger";
field132.accessType = "inputOnly";
field132.type = "SFTime";
Script128.field[3] = field132;

let IS133 = browser.currentScene.createNode("IS");
let connect134 = browser.currentScene.createNode("connect");
connect134.nodeField = "enabled";
connect134.protoField = "enabled";
IS133.connect = new MFNode();

IS133.connect[0] = connect134;

let connect135 = browser.currentScene.createNode("connect");
connect135.nodeField = "diffuseColor";
connect135.protoField = "diffuseColor";
IS133.connect[1] = connect135;

Script128.iS = IS133;

let #sourceCode136 = browser.currentScene.createNode("#sourceCode");
Script128.#sourceCode[4] = #sourceCode136;

ProtoBody119.children[1] = Script128;

ProtoDeclare110.protoBody = ProtoBody119;

browser.currentScene.children[26] = ProtoDeclare110;

//Test success: declarative statement createDeclarativeShapeTests()
let Group137 = browser.currentScene.createNode("Group");
Group137.DEF = "DeclarativeGroupExample";
let Shape138 = browser.currentScene.createNode("Shape");
let MetadataString139 = browser.currentScene.createNode("MetadataString");
MetadataString139.name = "findThisNameValue";
MetadataString139.DEF = "FindableMetadataStringTest";
MetadataString139.value = new MFString(new java.lang.String["test case"]);
Shape138.metadata = MetadataString139;

let Appearance140 = browser.currentScene.createNode("Appearance");
Appearance140.DEF = "DeclarativeAppearanceExample";
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
let ProtoInstance141 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance141.name = "MaterialModulator";
ProtoInstance141.DEF = "MyMaterialModulator";
Appearance140.shaders = new MFNode();

Appearance140.shaders[0] = ProtoInstance141;

Shape138.appearance = Appearance140;

let Cone142 = browser.currentScene.createNode("Cone");
Cone142.bottom = False;
Cone142.bottomRadius = 0.05;
Cone142.height = 0.1;
Shape138.geometry = Cone142;

Group137.children = new MFNode();

Group137.children[0] = Shape138;

//Test success: declarativeGroup.addChild() singleton pipeline method
browser.currentScene.children[27] = Group137;

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
let Group143 = browser.currentScene.createNode("Group");
Group143.DEF = "TestFieldObjectsGroup";
//testFieldObjects() results
//SFBool default=true, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344
browser.currentScene.children[28] = Group143;

let Sound144 = browser.currentScene.createNode("Sound");
Sound144.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let AudioClip145 = browser.currentScene.createNode("AudioClip");
AudioClip145.description = "chimes";
AudioClip145.url = new MFString(new java.lang.String["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound144.source = AudioClip145;

browser.currentScene.children[29] = Sound144;

let Sound146 = browser.currentScene.createNode("Sound");
Sound146.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let MovieTexture147 = browser.currentScene.createNode("MovieTexture");
MovieTexture147.description = "mpgsys.mpg from ConformanceNist suite";
MovieTexture147.url = new MFString(new java.lang.String["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\"
Sound146.source = MovieTexture147;

browser.currentScene.children[30] = Sound146;

//Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true
//Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
let Shape148 = browser.currentScene.createNode("Shape");
Shape148.DEF = "ExtrusionShape";
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
let Appearance149 = browser.currentScene.createNode("Appearance");
Appearance149.DEF = "TransparentAppearance";
let Material150 = browser.currentScene.createNode("Material");
Material150.transparency = 1;
Appearance149.material = Material150;

Shape148.appearance = Appearance149;

let Extrusion151 = browser.currentScene.createNode("Extrusion");
Extrusion151.DEF = "ExampleExtrusion";
Shape148.geometry = Extrusion151;

browser.currentScene.children[31] = Shape148;

