const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Full"));
//X3D model top-level comment
//comment #1
//comment #2
//comment #3
//comment #4
scene .addComponent (browser .getComponent ("Navigation", 3));
scene .addComponent (browser .getComponent ("Shaders", 1));
scene .addComponent (browser .getComponent ("CADGeometry", 2));
scene .addComponent (browser .getComponent ("DIS", 2));
scene .addComponent (browser .getComponent ("HAnim", 1));
scene .addComponent (browser .getComponent ("Grouping", 1));
scene .addComponent (browser .getComponent ("Layering", 1));
let unit9 = browser.currentScene.createNode("unit");
unit9.name = "AngleUnitConversion";
unit9.category = "angle";
unit9.conversionFactor = 1;
head1ZZZ.unit[0] = unit9;

let unit10 = browser.currentScene.createNode("unit");
unit10.name = "LengthUnitConversion";
unit10.category = "length";
unit10.conversionFactor = 1;
head1ZZZ.unit[1] = unit10;

let unit11 = browser.currentScene.createNode("unit");
unit11.name = "ForceFromPoundsToNewtons";
unit11.category = "force";
unit11.conversionFactor = 4.4482;
head1ZZZ.unit[2] = unit11;

scene.addMetaData("title", "SmokeTestProgramOutput.x3d");
scene.addMetaData("info", "continued development and testing in progress");
scene.addMetaData("description", "Example SmokeTestProgram creates an X3D model using the X3D Java Scene Access Interface Library (X3DJSAIL)");
scene.addMetaData("reference", "https://www.web3d.org/specifications/java/X3DJSAIL.html");
scene.addMetaData("generator", "SmokeTestProgramOutput.java");
scene.addMetaData("created", "6 September 2016");
scene.addMetaData("modified", "20 June 2026");
scene.addMetaData("generator", "X3D Java Scene Access Interface Library (X3DJSAIL)");
scene.addMetaData("generator", "https://www.web3d.org/specifications/java/examples/SmokeTestProgram.java");
scene.addMetaData("generator", "Netbeans https://www.netbeans.org");
scene.addMetaData("creator", "Don Brutzman");
scene.addMetaData("reference", "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/stylesheets/java/examples/SmokeTestProgramOutput.x3d");
scene.addMetaData("reference", "Console output, ClassicVRML encoding, VRML97 encoding and pretty-print documentation:");
scene.addMetaData("reference", "SmokeTestProgramOutput.txt");
scene.addMetaData("reference", "SmokeTestProgramOutput.x3dv");
scene.addMetaData("reference", "SmokeTestProgramOutput.wrl");
scene.addMetaData("reference", "SmokeTestProgramOutput.html");
scene.addMetaData("reference", "https://savage.nps.edu/X3dValidator?url=https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d");
scene.addMetaData("identifier", "https://www.web3d.org/specifications/java/examples/SmokeTestProgramOutput.x3d");
scene.addMetaData("license", "../license.html");
await browser .loadComponents (scene);
let ViewpointGroup33 = browser.currentScene.createNode("ViewpointGroup");
ViewpointGroup33.description = "Available viewpoints";
let Viewpoint34 = browser.currentScene.createNode("Viewpoint");
Viewpoint34.DEF = "DefaultView";
Viewpoint34.description = "Hello X3DJSAIL";
let NavigationInfo35 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo35.DEF = "ViewpointChildNavigationInfo";
navigationInfo = NavigationInfo35;

ViewpointGroup33YYY.children = new X3D.MFNode();

ViewpointGroup33ZZZ.children[0] = Viewpoint34;

let Viewpoint36 = browser.currentScene.createNode("Viewpoint");
Viewpoint36.DEF = "TopDownView";
Viewpoint36.description = "top-down view from above";
Viewpoint36.orientation = new X3D.SFRotation([1,0,0,-1.5708]);
Viewpoint36.position = new X3D.SFVec3f([0,100,0]);
ViewpointGroup33ZZZ.children[1] = Viewpoint36;

browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = ViewpointGroup33;

let NavigationInfo37 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo37.type = new X3D.MFString([new X3D.SFString("EXAMINE"), new X3D.SFString("FLY"), new X3D.SFString("ANY")]);
browser.currentScene.children[1] = NavigationInfo37;

let WorldInfo38 = browser.currentScene.createNode("WorldInfo");
WorldInfo38.DEF = "WorldInfoDEF";
WorldInfo38.CssClass = "worldInfoNode.class";
WorldInfo38.style = "worldInfoNode.style";
WorldInfo38.title = "SmokeTestProgram produced by X3D Java SAI Library (X3DJSAIL)";
browser.currentScene.children[2] = WorldInfo38;

let WorldInfo39 = browser.currentScene.createNode("WorldInfo");
WorldInfo39.USE = "WorldInfoDEF";
browser.currentScene.children[3] = WorldInfo39;

let WorldInfo40 = browser.currentScene.createNode("WorldInfo");
WorldInfo40.USE = "WorldInfoDEF";
browser.currentScene.children[4] = WorldInfo40;

let MetadataString41 = browser.currentScene.createNode("MetadataString");
MetadataString41.name = "test";
MetadataString41.DEF = "scene.addChildMetadata";
MetadataString41.value = new X3D.MFString([new X3D.SFString("Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding")]);
browser.currentScene.metadata[5] = MetadataString41;

let LayerSet42 = browser.currentScene.createNode("LayerSet");
LayerSet42.DEF = "scene.addChildLayerSetTest";
browser.currentScene.layerSet[6] = LayerSet42;

let Transform43 = browser.currentScene.createNode("Transform");
Transform43.DEF = "LogoGeometryTransform";
Transform43.translation = new X3D.SFVec3f([0,1.5,0]);
let Anchor44 = browser.currentScene.createNode("Anchor");
Anchor44.DEF = "siteAnchor";
Anchor44.description = "select for X3D Java SAI Library (X3DJSAIL) description";
Anchor44.url = new X3D.MFString([new X3D.SFString("../X3DJSAIL.html"), new X3D.SFString("https://www.web3d.org/specifications/java/X3DJSAIL.html")]);
let Shape45 = browser.currentScene.createNode("Shape");
Shape45.DEF = "BoxShape";
let Appearance46 = browser.currentScene.createNode("Appearance");
let Material47 = browser.currentScene.createNode("Material");
Material47.DEF = "GreenMaterial";
Material47.diffuseColor = new X3D.SFColor([0,1,1]);
Material47.emissiveColor = new X3D.SFColor([0.8,0,0]);
Material47.transparency = 0.1;
material = Material47;

let ImageTexture48 = browser.currentScene.createNode("ImageTexture");
ImageTexture48.url = new X3D.MFString([new X3D.SFString("images/X3dJavaSceneAccessInterfaceSaiLibrary.png"), new X3D.SFString("https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png")]);
texture = ImageTexture48;

appearance = Appearance46;

let Box49 = browser.currentScene.createNode("Box");
Box49.DEF = "test-NMTOKEN_regex.0123456789";
Box49.CssClass = "untextured";
geometry = Box49;

Anchor44YYY.children = new X3D.MFNode();

Anchor44ZZZ.children[0] = Shape45;

Transform43YYY.children = new X3D.MFNode();

Transform43ZZZ.children[0] = Anchor44;

browser.currentScene.children[7] = Transform43;

let Shape50 = browser.currentScene.createNode("Shape");
Shape50.DEF = "LineShape";
let Appearance51 = browser.currentScene.createNode("Appearance");
let Material52 = browser.currentScene.createNode("Material");
Material52.emissiveColor = new X3D.SFColor([0.6,0.1961,0.8]);
material = Material52;

appearance = Appearance51;

let IndexedLineSet53 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet53.coordIndex = new X3D.MFInt32([0,1,2,3,4,0]);
//Coordinate 3-tuple point count: 6
let Coordinate54 = browser.currentScene.createNode("Coordinate");
Coordinate54.point = new X3D.MFVec3f([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
coord = Coordinate54;

geometry = IndexedLineSet53;

browser.currentScene.children[8] = Shape50;

let PositionInterpolator55 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator55.DEF = "BoxPathAnimator";
PositionInterpolator55.key = new X3D.MFFloat([0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator55.keyValue = new X3D.MFVec3f([0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
browser.currentScene.children[9] = PositionInterpolator55;

let TimeSensor56 = browser.currentScene.createNode("TimeSensor");
TimeSensor56.DEF = "OrbitClock";
TimeSensor56.cycleInterval = 8;
TimeSensor56.loop = True;
browser.currentScene.children[10] = TimeSensor56;

let ROUTE57 = browser.currentScene.createNode("ROUTE");
ROUTE57.fromField = "fraction_changed";
ROUTE57.fromNode = "OrbitClock";
ROUTE57.toField = "set_fraction";
ROUTE57.toNode = "BoxPathAnimator";
browser.currentScene.children[11] = ROUTE57;

let ROUTE58 = browser.currentScene.createNode("ROUTE");
ROUTE58.fromField = "value_changed";
ROUTE58.fromNode = "BoxPathAnimator";
ROUTE58.toField = "set_translation";
ROUTE58.toNode = "LogoGeometryTransform";
browser.currentScene.children[12] = ROUTE58;

let Transform59 = browser.currentScene.createNode("Transform");
Transform59.DEF = "TextTransform";
Transform59.translation = new X3D.SFVec3f([0,-1.5,0]);
let Shape60 = browser.currentScene.createNode("Shape");
let Appearance61 = browser.currentScene.createNode("Appearance");
let Material62 = browser.currentScene.createNode("Material");
Material62.USE = "GreenMaterial";
material = Material62;

appearance = Appearance61;

let Text63 = browser.currentScene.createNode("Text");
Text63.string = new X3D.MFString([new X3D.SFString("X3D Java"), new X3D.SFString("SAI Library"), new X3D.SFString("X3DJSAIL")]);
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
let MetadataSet64 = browser.currentScene.createNode("MetadataSet");
MetadataSet64.name = "EscapedQuotationMarksMetadataSet";
let MetadataString65 = browser.currentScene.createNode("MetadataString");
MetadataString65.name = "quotesTestC";
MetadataString65.value = new X3D.MFString([new X3D.SFString("MFString example C, backslash-escaped quotes: He said, \"Immel did it!\"")]);
MetadataSet64.value = new X3D.MFNode();

MetadataSet64XXX.value[0] = MetadataString65;

let MetadataString66 = browser.currentScene.createNode("MetadataString");
MetadataString66.name = "extraChildTest";
MetadataString66.value = new X3D.MFString([new X3D.SFString("checks MetadataSet addValue() method")]);
value[1] = MetadataString66;

metadata = MetadataSet64;

let FontStyle67 = browser.currentScene.createNode("FontStyle");
FontStyle67.justify = new X3D.MFString([new X3D.SFString("MIDDLE"), new X3D.SFString("MIDDLE")]);
fontStyle = FontStyle67;

geometry = Text63;

Transform59YYY.child = new X3D.undefined();

Transform59ZZZ.child[0] = Shape60;

let Collision68 = browser.currentScene.createNode("Collision");
//test containerField='proxy'
let Shape69 = browser.currentScene.createNode("Shape");
Shape69.DEF = "ProxyShape";
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
//reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
let Text70 = browser.currentScene.createNode("Text");
Text70.string = new X3D.MFString([new X3D.SFString("One, Two, Text"), new X3D.SFString("He said, \"Immel did it!\" \"\"")]);
geometry = Text70;

proxy = Shape69;

Transform59ZZZ.children[1] = Collision68;

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
browser.currentScene.children[13] = Transform59;

//repeatedly spin 180 degrees as a readable special effect
let OrientationInterpolator71 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator71.DEF = "SpinInterpolator";
OrientationInterpolator71.key = new X3D.MFFloat([0,0.5,1]);
OrientationInterpolator71.keyValue = new X3D.MFRotation([0,1,0,4.7124,0,1,0,0,0,1,0,1.5708]);
browser.currentScene.children[14] = OrientationInterpolator71;

let TimeSensor72 = browser.currentScene.createNode("TimeSensor");
TimeSensor72.DEF = "SpinClock";
TimeSensor72.cycleInterval = 5;
TimeSensor72.loop = True;
browser.currentScene.children[15] = TimeSensor72;

let ROUTE73 = browser.currentScene.createNode("ROUTE");
ROUTE73.fromField = "fraction_changed";
ROUTE73.fromNode = "SpinClock";
ROUTE73.toField = "set_fraction";
ROUTE73.toNode = "SpinInterpolator";
browser.currentScene.children[16] = ROUTE73;

let ROUTE74 = browser.currentScene.createNode("ROUTE");
ROUTE74.fromField = "value_changed";
ROUTE74.fromNode = "SpinInterpolator";
ROUTE74.toField = "rotation";
ROUTE74.toNode = "TextTransform";
browser.currentScene.children[17] = ROUTE74;

let Group75 = browser.currentScene.createNode("Group");
Group75.DEF = "BackgroundGroup";
let Background76 = browser.currentScene.createNode("Background");
Background76.DEF = "GradualBackground";
Group75YYY.children = new X3D.MFNode();

Group75ZZZ.children[0] = Background76;

let Script77 = browser.currentScene.createNode("Script");
Script77.DEF = "colorTypeConversionScript";
Script78.getField("colorInput")Script77YYY.field = new X3D.MFNode();

Script79.getField("colorsOutput")Script77YYY.field = new X3D.MFNode();


Script77.setSourceCode(`ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ',\n"+
"//                colorsOutput=' + colorsOutput + '\n"+
"');\n"+
"// TODO check line wrapping when exporting/converting\n"+
"}`)
Group75ZZZ.children[1] = Script77;

let ColorInterpolator80 = browser.currentScene.createNode("ColorInterpolator");
ColorInterpolator80.DEF = "ColorAnimator";
ColorInterpolator80.key = new X3D.MFFloat([0,0.5,1]);
ColorInterpolator80.keyValue = new X3D.MFColor([0.9412,1,1,0.2941,0,0.5098,0.9412,1,1]);
//AZURE to INDIGO and back again
Group75ZZZ.children[2] = ColorInterpolator80;

let TimeSensor81 = browser.currentScene.createNode("TimeSensor");
TimeSensor81.DEF = "ColorClock";
TimeSensor81.cycleInterval = 60;
TimeSensor81.loop = True;
Group75ZZZ.children[3] = TimeSensor81;

let ROUTE82 = browser.currentScene.createNode("ROUTE");
ROUTE82.fromField = "colorsOutput";
ROUTE82.fromNode = "colorTypeConversionScript";
ROUTE82.toField = "skyColor";
ROUTE82.toNode = "GradualBackground";
Group75ZZZ.children[4] = ROUTE82;

let ROUTE83 = browser.currentScene.createNode("ROUTE");
ROUTE83.fromField = "value_changed";
ROUTE83.fromNode = "ColorAnimator";
ROUTE83.toField = "colorInput";
ROUTE83.toNode = "colorTypeConversionScript";
Group75ZZZ.children[5] = ROUTE83;

let ROUTE84 = browser.currentScene.createNode("ROUTE");
ROUTE84.fromField = "fraction_changed";
ROUTE84.fromNode = "ColorClock";
ROUTE84.toField = "set_fraction";
ROUTE84.toNode = "ColorAnimator";
Group75ZZZ.children[6] = ROUTE84;

browser.currentScene.children[18] = Group75;

let ProtoDeclare85 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco01" appinfo="tooltip: ArtDeco01Material prototype is a Material node" ><ProtoInterface><field name="description" accessType="inputOutput" appinfo="tooltip for descriptionField" type="SFString" value="ArtDeco01Material prototype is a Material node"></field>
<field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
</ProtoInterface>
<ProtoBody><!--Initial node of ProtoBody determines prototype node type--><Material ambientIntensity="0.25" diffuseColor="0.2824 0.0852 0.1345" shininess="0.1273" specularColor="0.2763 0.1143 0.1399"></Material>
<!--[SmokeTestProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()="Material"--><!--presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types--><TouchSensor description="within ProtoBody"><IS><connect nodeField="description" protoField="description"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
</IS>
</TouchSensor>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare85.name = "ArtDeco01";
ProtoDeclare85.appinfo = "tooltip: ArtDeco01Material prototype is a Material node";
ProtoInterface87.getField("description").setValue("ArtDeco01Material prototype is a Material node");
ProtoInterface86YYY.field = new X3D.MFNode();

ProtoInterface88.getField("enabled").setValue("true");
ProtoInterface86YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface86;

let ProtoBody89 = browser.currentScene.createNode("ProtoBody");
//Initial node of ProtoBody determines prototype node type
let Material90 = browser.currentScene.createNode("Material");
Material90.ambientIntensity = 0.25;
Material90.diffuseColor = new X3D.SFColor([0.2824,0.0852,0.1345]);
Material90.shininess = 0.1273;
Material90.specularColor = new X3D.SFColor([0.2763,0.1143,0.1399]);
ProtoBody89YYY.children = new X3D.MFNode();

ProtoBody89ZZZ.children[0] = Material90;

//[SmokeTestProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
let TouchSensor91 = browser.currentScene.createNode("TouchSensor");
TouchSensor91.description = "within ProtoBody";
let IS92 = browser.currentScene.createNode("IS");
let connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "description";
connect93.protoField = "description";
IS92YYY.connect = new X3D.MFNode();

IS92ZZZ.connect[0] = connect93;

let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "enabled";
connect94.protoField = "enabled";
IS92ZZZ.connect[1] = connect94;

iS = IS92;

ProtoBody89ZZZ.children[1] = TouchSensor91;

protoBody = ProtoBody89;

browser.currentScene.children[19] = ProtoDeclare85;

let ExternProtoDeclare95 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare95.name = "ArtDeco02";
ExternProtoDeclare95.appinfo = "this is a different Material node";
ExternProtoDeclare95.url = new X3D.MFString([new X3D.SFString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02")]);
//[SmokeTestProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
ExternProtoDeclare96.getField("description")ExternProtoDeclare95YYY.field = new X3D.MFNode();

browser.currentScene.children[20] = ExternProtoDeclare95;

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
let Shape97 = browser.currentScene.createNode("Shape");
Shape97.DEF = "TestShape1";
let Appearance98 = browser.currentScene.createNode("Appearance");
Appearance98.DEF = "TestAppearance1";
//ArtDeco01Material prototype goes here...
let ProtoInstance99 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance99.name = "ArtDeco01";
//[SmokeTestProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
let fieldValue100 = browser.currentScene.createNode("fieldValue");
fieldValue100.name = "description";
fieldValue100.value = "ArtDeco01Material can substitute for a Material node";
ProtoInstance99YYY.fieldValue = new X3D.MFNode();

ProtoInstance99ZZZ.fieldValue[0] = fieldValue100;

Appearance98.shaders = new X3D.MFNode();

Appearance98XXX.shaders[0] = ProtoInstance99;

appearance = Appearance98;

let Sphere101 = browser.currentScene.createNode("Sphere");
Sphere101.radius = 0.001;
geometry = Sphere101;

browser.currentScene.children[21] = Shape97;

let Shape102 = browser.currentScene.createNode("Shape");
Shape102.DEF = "TestShape2";
let Appearance103 = browser.currentScene.createNode("Appearance");
Appearance103.DEF = "TestAppearance2";
//ArtDeco02Material ProtoInstance goes here...
let ProtoInstance104 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance104.name = "ArtDeco02";
ProtoInstance104.DEF = "ArtDeco02MaterialDEF";
//[SmokeTestProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
Appearance103.shaders = new X3D.MFNode();

Appearance103XXX.shaders[0] = ProtoInstance104;

appearance = Appearance103;

let Cone105 = browser.currentScene.createNode("Cone");
Cone105.bottomRadius = 0.001;
Cone105.height = 0.001;
geometry = Cone105;

browser.currentScene.children[22] = Shape102;

let Shape106 = browser.currentScene.createNode("Shape");
Shape106.DEF = "TestShape3";
let Appearance107 = browser.currentScene.createNode("Appearance");
Appearance107.DEF = "TestAppearance3";
//ArtDeco02Material ProtoInstance USE goes here. Note that name field is REQUIRED as part of ProtoInstance USE.
let ProtoInstance108 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance108.name = "ArtDeco02";
ProtoInstance108.USE = "ArtDeco02MaterialDEF";
Appearance107.shaders = new X3D.MFNode();

Appearance107XXX.shaders[0] = ProtoInstance108;

appearance = Appearance107;

let Cylinder109 = browser.currentScene.createNode("Cylinder");
Cylinder109.height = 0.001;
Cylinder109.radius = 0.001;
geometry = Cylinder109;

browser.currentScene.children[23] = Shape106;

let Inline110 = browser.currentScene.createNode("Inline");
Inline110.DEF = "inlineScene";
Inline110.url = new X3D.MFString([new X3D.SFString("newScene.x3d"), new X3D.SFString("https://www.web3d.org/specifications/java/examples/newScene.x3d")]);
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
<!--Only first node (the node type for the prototype) is renderable, others are along for the ride--><Script DEF="MaterialModulatorScript"><field name="enabled" accessType="inputOutput" type="SFBool"></field>
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
ProtoInterface115.getField("enabled").setValue("true");
ProtoInterface114YYY.field = new X3D.MFNode();

ProtoInterface116.getField("diffuseColor").setValue("0 0 0");
ProtoInterface114YYY.field = new X3D.MFNode();

ProtoInterface117.getField("emissiveColor").setValue("0.05 0.05 0.5");
ProtoInterface114YYY.field = new X3D.MFNode();

ProtoInterface118.getField("specularColor").setValue("0 0 0");
ProtoInterface114YYY.field = new X3D.MFNode();

ProtoInterface119.getField("transparency").setValue("0");
ProtoInterface114YYY.field = new X3D.MFNode();

ProtoInterface120.getField("shininess").setValue("0");
ProtoInterface114YYY.field = new X3D.MFNode();

ProtoInterface121.getField("ambientIntensity").setValue("0");
ProtoInterface114YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface114;

let ProtoBody122 = browser.currentScene.createNode("ProtoBody");
let Material123 = browser.currentScene.createNode("Material");
Material123.DEF = "MaterialNode";
let IS124 = browser.currentScene.createNode("IS");
let connect125 = browser.currentScene.createNode("connect");
connect125.nodeField = "diffuseColor";
connect125.protoField = "diffuseColor";
IS124YYY.connect = new X3D.MFNode();

IS124ZZZ.connect[0] = connect125;

let connect126 = browser.currentScene.createNode("connect");
connect126.nodeField = "emissiveColor";
connect126.protoField = "emissiveColor";
IS124ZZZ.connect[1] = connect126;

let connect127 = browser.currentScene.createNode("connect");
connect127.nodeField = "specularColor";
connect127.protoField = "specularColor";
IS124ZZZ.connect[2] = connect127;

let connect128 = browser.currentScene.createNode("connect");
connect128.nodeField = "transparency";
connect128.protoField = "transparency";
IS124ZZZ.connect[3] = connect128;

let connect129 = browser.currentScene.createNode("connect");
connect129.nodeField = "shininess";
connect129.protoField = "shininess";
IS124ZZZ.connect[4] = connect129;

let connect130 = browser.currentScene.createNode("connect");
connect130.nodeField = "ambientIntensity";
connect130.protoField = "ambientIntensity";
IS124ZZZ.connect[5] = connect130;

iS = IS124;

ProtoBody122YYY.children = new X3D.MFNode();

ProtoBody122ZZZ.children[0] = Material123;

//Only first node (the node type for the prototype) is renderable, others are along for the ride
let Script131 = browser.currentScene.createNode("Script");
Script131.DEF = "MaterialModulatorScript";
Script132.getField("enabled")Script131YYY.field = new X3D.MFNode();

Script133.getField("diffuseColor")Script131YYY.field = new X3D.MFNode();

Script134.getField("newColor")Script131YYY.field = new X3D.MFNode();

Script135.getField("clockTrigger")Script131YYY.field = new X3D.MFNode();

let IS136 = browser.currentScene.createNode("IS");
let connect137 = browser.currentScene.createNode("connect");
connect137.nodeField = "enabled";
connect137.protoField = "enabled";
IS136YYY.connect = new X3D.MFNode();

IS136ZZZ.connect[0] = connect137;

let connect138 = browser.currentScene.createNode("connect");
connect138.nodeField = "diffuseColor";
connect138.protoField = "diffuseColor";
IS136ZZZ.connect[1] = connect138;

iS = IS136;


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
ProtoBody122ZZZ.children[1] = Script131;

protoBody = ProtoBody122;

browser.currentScene.children[27] = ProtoDeclare113;

//Test success: declarative statement createDeclarativeShapeTests()
let Group139 = browser.currentScene.createNode("Group");
Group139.DEF = "DeclarativeGroupExample";
let Shape140 = browser.currentScene.createNode("Shape");
let MetadataString141 = browser.currentScene.createNode("MetadataString");
MetadataString141.name = "findThisNameValue";
MetadataString141.DEF = "FindableMetadataStringTest";
MetadataString141.value = new X3D.MFString([new X3D.SFString("test case")]);
Shape140.metadata = new X3D.SFNode();

Shape140XXX.metadata[0] = MetadataString141;

let Appearance142 = browser.currentScene.createNode("Appearance");
Appearance142.DEF = "DeclarativeAppearanceExample";
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
let ProtoInstance143 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance143.name = "MaterialModulator";
ProtoInstance143.DEF = "MyMaterialModulator";
Appearance142.shaders = new X3D.MFNode();

Appearance142XXX.shaders[0] = ProtoInstance143;

appearance = Appearance142;

let Cone144 = browser.currentScene.createNode("Cone");
Cone144.bottom = False;
Cone144.bottomRadius = 0.05;
Cone144.height = 0.1;
geometry = Cone144;

Group139YYY.children = new X3D.MFNode();

Group139ZZZ.children[0] = Shape140;

//Test success: declarativeGroup.addChild() singleton pipeline method
browser.currentScene.children[28] = Group139;

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' containerField='material' name='MaterialModulator'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
let Group145 = browser.currentScene.createNode("Group");
Group145.DEF = "TestFieldObjectsGroup";
//testFieldObjects() results
//SFBool default=false, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1, setValue(2)=2, setValue(3.0f)=3, setValue(4.0)=4
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.4558 0.5698 0.6838, regex matches()=true
//regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotation.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value
browser.currentScene.children[29] = Group145;

let Sound146 = browser.currentScene.createNode("Sound");
Sound146.location = new X3D.SFVec3f([0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let AudioClip147 = browser.currentScene.createNode("AudioClip");
AudioClip147.description = "chimes";
AudioClip147.url = new X3D.MFString([new X3D.SFString("chimes.wav"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav")]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
source = AudioClip147;

browser.currentScene.children[30] = Sound146;

let Sound148 = browser.currentScene.createNode("Sound");
Sound148.location = new X3D.SFVec3f([0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let MovieTexture149 = browser.currentScene.createNode("MovieTexture");
MovieTexture149.description = "mpgsys.mpg from ConformanceNist suite";
MovieTexture149.url = new X3D.MFString([new X3D.SFString("mpgsys.mpg"), new X3D.SFString("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg")]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"children\"
source = MovieTexture149;

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
material = Material152;

appearance = Appearance151;

let Extrusion153 = browser.currentScene.createNode("Extrusion");
Extrusion153.DEF = "ExampleExtrusion";
geometry = Extrusion153;

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
ProtoInterface157.getField("description")ProtoInterface156YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface156;

let ProtoBody158 = browser.currentScene.createNode("ProtoBody");
let WorldInfo159 = browser.currentScene.createNode("WorldInfo");
ProtoBody158YYY.children = new X3D.MFNode();

ProtoBody158ZZZ.children[0] = WorldInfo159;

protoBody = ProtoBody158;

Group154YYY.children = new X3D.MFNode();

Group154ZZZ.children[0] = ProtoDeclare155;

let ProtoInstance160 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance160.name = "NewWorldInfo";
ProtoInstance160.DEF = "Proto1";
let fieldValue161 = browser.currentScene.createNode("fieldValue");
fieldValue161.name = "description";
fieldValue161.value = "testing 1 2 3";
ProtoInstance160YYY.fieldValue = new X3D.MFNode();

ProtoInstance160ZZZ.fieldValue[0] = fieldValue161;

Group154ZZZ.children[1] = ProtoInstance160;

let Group162 = browser.currentScene.createNode("Group");
Group162.DEF = "Node2";
//intentionally empty
Group154ZZZ.children[2] = Group162;

let ProtoInstance163 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance163.name = "NewWorldInfo";
ProtoInstance163.DEF = "Proto3";
Group154ZZZ.children[3] = ProtoInstance163;

let Transform164 = browser.currentScene.createNode("Transform");
Transform164.DEF = "Node4";
//intentionally empty
Group154ZZZ.children[4] = Transform164;

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
ProtoBody166YYY.children = new X3D.MFNode();

ProtoBody166ZZZ.children[0] = ProgramShader167;

protoBody = ProtoBody166;

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
ProgramShader170YYY.programs = new X3D.MFNode();

ProgramShader170ZZZ.programs[0] = ShaderProgram171;

Appearance169YYY.shaders = new X3D.MFNode();

Appearance169ZZZ.shaders[0] = ProgramShader170;

let ProtoInstance172 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance172.name = "ShaderProto";
ProtoInstance172.DEF = "TestShader3";
Appearance169ZZZ.shaders[1] = ProtoInstance172;

let ComposedShader173 = browser.currentScene.createNode("ComposedShader");
ComposedShader173.DEF = "TestShader4";
let ShaderPart174 = browser.currentScene.createNode("ShaderPart");
ShaderPart174.DEF = "TestShader5";
ShaderPart174.type = "VERTEX";
ComposedShader173YYY.parts = new X3D.MFNode();

ComposedShader173ZZZ.parts[0] = ShaderPart174;

Appearance169ZZZ.shaders[2] = ComposedShader173;

appearance = Appearance169;

browser.currentScene.children[35] = Shape168;

let Transform175 = browser.currentScene.createNode("Transform");
Transform175.DEF = "SpecialtyNodes";
let CADLayer176 = browser.currentScene.createNode("CADLayer");
let CADAssembly177 = browser.currentScene.createNode("CADAssembly");
let CADPart178 = browser.currentScene.createNode("CADPart");
let CADFace179 = browser.currentScene.createNode("CADFace");
CADPart178YYY.children = new X3D.MFNode();

CADPart178ZZZ.children[0] = CADFace179;

CADAssembly177YYY.children = new X3D.MFNode();

CADAssembly177ZZZ.children[0] = CADPart178;

CADLayer176YYY.children = new X3D.MFNode();

CADLayer176ZZZ.children[0] = CADAssembly177;

Transform175YYY.children = new X3D.MFNode();

Transform175ZZZ.children[0] = CADLayer176;

let EspduTransform180 = browser.currentScene.createNode("EspduTransform");
Transform175ZZZ.children[1] = EspduTransform180;

let ReceiverPdu181 = browser.currentScene.createNode("ReceiverPdu");
Transform175ZZZ.children[2] = ReceiverPdu181;

let SignalPdu182 = browser.currentScene.createNode("SignalPdu");
Transform175ZZZ.children[3] = SignalPdu182;

let TransmitterPdu183 = browser.currentScene.createNode("TransmitterPdu");
Transform175ZZZ.children[4] = TransmitterPdu183;

let DISEntityManager184 = browser.currentScene.createNode("DISEntityManager");
let DISEntityTypeMapping185 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityManager184YYY.children = new X3D.MFNode();

DISEntityManager184ZZZ.children[0] = DISEntityTypeMapping185;

Transform175ZZZ.children[5] = DISEntityManager184;

browser.currentScene.children[36] = Transform175;

let EspduTransform186 = browser.currentScene.createNode("EspduTransform");
let WorldInfo187 = browser.currentScene.createNode("WorldInfo");
EspduTransform186YYY.children = new X3D.MFNode();

EspduTransform186ZZZ.children[0] = WorldInfo187;

browser.currentScene.children[37] = EspduTransform186;

let ReceiverPdu188 = browser.currentScene.createNode("ReceiverPdu");
browser.currentScene.children[38] = ReceiverPdu188;

let SignalPdu189 = browser.currentScene.createNode("SignalPdu");
browser.currentScene.children[39] = SignalPdu189;

let TransmitterPdu190 = browser.currentScene.createNode("TransmitterPdu");
browser.currentScene.children[40] = TransmitterPdu190;

let DISEntityManager191 = browser.currentScene.createNode("DISEntityManager");
let DISEntityTypeMapping192 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityManager191YYY.children = new X3D.MFNode();

DISEntityManager191ZZZ.children[0] = DISEntityTypeMapping192;

browser.currentScene.children[41] = DISEntityManager191;

let LoadSensor193 = browser.currentScene.createNode("LoadSensor");
//Contained nodes typically must be USE references for nodes previously DEFined in the scene
//The following nodes are test cases for all X3DUrlObject nodes
let Anchor194 = browser.currentScene.createNode("Anchor");
Anchor194.USE = "siteAnchor";
LoadSensor193YYY.children = new X3D.MFNode();

LoadSensor193ZZZ.children[0] = Anchor194;

let Inline195 = browser.currentScene.createNode("Inline");
Inline195.USE = "inlineScene";
LoadSensor193ZZZ.children[1] = Inline195;

let DISEntityTypeMapping196 = browser.currentScene.createNode("DISEntityTypeMapping");
LoadSensor193ZZZ.children[2] = DISEntityTypeMapping196;

let GeoMetadata197 = browser.currentScene.createNode("GeoMetadata");
LoadSensor193ZZZ.children[3] = GeoMetadata197;

let AudioClip198 = browser.currentScene.createNode("AudioClip");
LoadSensor193ZZZ.children[4] = AudioClip198;

let ImageCubeMapTexture199 = browser.currentScene.createNode("ImageCubeMapTexture");
LoadSensor193ZZZ.children[5] = ImageCubeMapTexture199;

let ImageTexture3D200 = browser.currentScene.createNode("ImageTexture3D");
LoadSensor193ZZZ.children[6] = ImageTexture3D200;

let ImageTexture201 = browser.currentScene.createNode("ImageTexture");
LoadSensor193ZZZ.children[7] = ImageTexture201;

let MovieTexture202 = browser.currentScene.createNode("MovieTexture");
LoadSensor193ZZZ.children[8] = MovieTexture202;

let Script203 = browser.currentScene.createNode("Script");
Script203.DEF = "DummyScript";

Script203.setSourceCode(`ecmascript:\n"+
"/* dummy test source code */`)
LoadSensor193ZZZ.children[9] = Script203;

let PackagedShader204 = browser.currentScene.createNode("PackagedShader");
LoadSensor193ZZZ.children[10] = PackagedShader204;

let ShaderPart205 = browser.currentScene.createNode("ShaderPart");
ShaderPart205.type = "VERTEX";
LoadSensor193ZZZ.children[11] = ShaderPart205;

let ShaderProgram206 = browser.currentScene.createNode("ShaderProgram");
ShaderProgram206.type = "VERTEX";
LoadSensor193ZZZ.children[12] = ShaderProgram206;

browser.currentScene.children[42] = LoadSensor193;

let OrthoViewpoint207 = browser.currentScene.createNode("OrthoViewpoint");
OrthoViewpoint207.DEF = "SpecialTestOrthoViewpoint";
OrthoViewpoint207.fieldOfView = new X3D.MFFloat([1,3,2,4]);
browser.currentScene.children[43] = OrthoViewpoint207;

}
main ();
