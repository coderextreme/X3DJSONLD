let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
// x3dVersionComparisonTest for this model: supportsX3dVersion(X3DObject.VERSION_3_0)=true 
let ViewpointGroup2 = browser.currentScene.createNode("ViewpointGroup");
ViewpointGroup2.description = "Available viewpoints";
let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.DEF = "DefaultView";
Viewpoint3.description = "Hello X3DJSAIL";
ViewpointGroup2.children = new MFNode();

ViewpointGroup2.children[0] = Viewpoint3;

let Viewpoint4 = browser.currentScene.createNode("Viewpoint");
Viewpoint4.DEF = "TopDownView";
Viewpoint4.description = "top-down view from above";
Viewpoint4.orientation = new SFRotation(new float[1,0,0,-1.570796]);
Viewpoint4.position = new SFVec3f(new float[0,100,0]);
ViewpointGroup2.children[1] = Viewpoint4;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ViewpointGroup2;

let NavigationInfo5 = browser.currentScene.createNode("NavigationInfo");
NavigationInfo5.avatarSize = new MFFloat(new float[0.25,1.6,0.75]);
NavigationInfo5.transitionType = new MFString(new java.lang.String["LINEAR"]);
NavigationInfo5.type = new MFString(new java.lang.String["EXAMINE","FLY","ANY"]);
browser.currentScene.children[1] = NavigationInfo5;

let WorldInfo6 = browser.currentScene.createNode("WorldInfo");
WorldInfo6.DEF = "WorldInfoDEF";
WorldInfo6.title = "HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)";
browser.currentScene.children[2] = WorldInfo6;

let WorldInfo7 = browser.currentScene.createNode("WorldInfo");
WorldInfo7.USE = "WorldInfoDEF";
browser.currentScene.children[3] = WorldInfo7;

let WorldInfo8 = browser.currentScene.createNode("WorldInfo");
WorldInfo8.USE = "WorldInfoDEF";
browser.currentScene.children[4] = WorldInfo8;

let Transform9 = browser.currentScene.createNode("Transform");
Transform9.DEF = "LogoGeometryTransform";
Transform9.translation = new SFVec3f(new float[0,1.5,0]);
let Anchor10 = browser.currentScene.createNode("Anchor");
Anchor10.description = "select for X3D Java SAI Library (X3DJSAIL) description";
Anchor10.url = new MFString(new java.lang.String["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"]);
let Shape11 = browser.currentScene.createNode("Shape");
Shape11.DEF = "BoxShape";
let Appearance12 = browser.currentScene.createNode("Appearance");
let Material13 = browser.currentScene.createNode("Material");
Material13.DEF = "GreenMaterial";
Material13.diffuseColor = new SFColor(new float[0,1,1]);
Material13.emissiveColor = new SFColor(new float[0.8,0,0]);
Material13.transparency = 0.1;
Appearance12.material = Material13;

let ImageTexture14 = browser.currentScene.createNode("ImageTexture");
ImageTexture14.url = new MFString(new java.lang.String["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"]);
Appearance12.texture = ImageTexture14;

Shape11.appearance = Appearance12;

let Box15 = browser.currentScene.createNode("Box");
Box15.DEF = "test-NMTOKEN_regex.0123456789";
Box15.CssClass = "untextured";
Shape11.geometry = Box15;

Anchor10.children = new MFNode();

Anchor10.children[0] = Shape11;

Transform9.children = new MFNode();

Transform9.children[0] = Anchor10;

browser.currentScene.children[5] = Transform9;

let Shape16 = browser.currentScene.createNode("Shape");
Shape16.DEF = "LineShape";
let Appearance17 = browser.currentScene.createNode("Appearance");
let Material18 = browser.currentScene.createNode("Material");
Material18.emissiveColor = new SFColor(new float[0.6,0.19607843,0.8]);
Appearance17.material = Material18;

Shape16.appearance = Appearance17;

let IndexedLineSet19 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet19.coordIndex = new MFInt32(new int[0,1,2,3,4,0]);
// Coordinate 3-tuple point count: 6 
let Coordinate20 = browser.currentScene.createNode("Coordinate");
Coordinate20.point = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
IndexedLineSet19.coord = Coordinate20;

Shape16.geometry = IndexedLineSet19;

browser.currentScene.children[6] = Shape16;

let PositionInterpolator21 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator21.DEF = "BoxPathAnimator";
PositionInterpolator21.key = new MFFloat(new float[0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator21.keyValue = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
browser.currentScene.children[7] = PositionInterpolator21;

let TimeSensor22 = browser.currentScene.createNode("TimeSensor");
TimeSensor22.DEF = "OrbitClock";
TimeSensor22.cycleInterval = 8;
TimeSensor22.loop = True;
browser.currentScene.children[8] = TimeSensor22;

let ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromField = "fraction_changed";
ROUTE23.fromNode = "OrbitClock";
ROUTE23.toField = "set_fraction";
ROUTE23.toNode = "BoxPathAnimator";
browser.currentScene.children[9] = ROUTE23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromField = "value_changed";
ROUTE24.fromNode = "BoxPathAnimator";
ROUTE24.toField = "set_translation";
ROUTE24.toNode = "LogoGeometryTransform";
browser.currentScene.children[10] = ROUTE24;

let Transform25 = browser.currentScene.createNode("Transform");
Transform25.DEF = "TextTransform";
Transform25.translation = new SFVec3f(new float[0,-1.5,0]);
let Shape26 = browser.currentScene.createNode("Shape");
let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.USE = "GreenMaterial";
Appearance27.material = Material28;

Shape26.appearance = Appearance27;

let Text29 = browser.currentScene.createNode("Text");
Text29.string = new MFString(new java.lang.String["X3D Java","SAI Library","X3DJSAIL"]);
// Comment example A, plain quotation marks: He said, \"Immel did it!\" 
// Comment example B, XML character entities: He said, &quot;Immel did it!&quot; 
let MetadataSet30 = browser.currentScene.createNode("MetadataSet");
MetadataSet30.name = "EscapedQuotationMarksMetadataSet";
let MetadataString31 = browser.currentScene.createNode("MetadataString");
MetadataString31.name = "quotesTestC";
MetadataString31.value = new MFString(new java.lang.String["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""]);
MetadataSet30.value = new MFNode();

MetadataSet30.value[0] = MetadataString31;

let MetadataString32 = browser.currentScene.createNode("MetadataString");
MetadataString32.name = "extraChildTest";
MetadataString32.value = new MFString(new java.lang.String["checks MetadataSetObject addValue() method"]);
MetadataSet30.value[1] = MetadataString32;

Text29.metadata = MetadataSet30;

let FontStyle33 = browser.currentScene.createNode("FontStyle");
FontStyle33.family = new MFString(new java.lang.String["SERIF"]);
FontStyle33.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text29.fontStyle = FontStyle33;

Shape26.geometry = Text29;

Transform25.children = new MFNode();

Transform25.children[0] = Shape26;

let Collision34 = browser.currentScene.createNode("Collision");
// test containerField='proxy' 
let Shape35 = browser.currentScene.createNode("Shape");
Shape35.DEF = "ProxyShape";
// alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"' 
// alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"' 
// alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"Immel did it!\\\"\"}) 
// reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html 
let Text36 = browser.currentScene.createNode("Text");
Text36.string = new MFString(new java.lang.String["One, Two, Text","","He said, \"Immel did it!","\""]);
Shape35.geometry = Text36;

Collision34.proxy = Shape35;

Transform25.children[1] = Collision34;

// It's a beautiful world 
// ... for you! 
// https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song) 
browser.currentScene.children[11] = Transform25;

// repeatedly spin 180 degrees as a readable special effect 
let OrientationInterpolator37 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator37.DEF = "SpinInterpolator";
OrientationInterpolator37.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator37.keyValue = new MFRotation(new float[0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964]);
browser.currentScene.children[12] = OrientationInterpolator37;

let TimeSensor38 = browser.currentScene.createNode("TimeSensor");
TimeSensor38.DEF = "SpinClock";
TimeSensor38.cycleInterval = 5;
TimeSensor38.loop = True;
browser.currentScene.children[13] = TimeSensor38;

let ROUTE39 = browser.currentScene.createNode("ROUTE");
ROUTE39.fromField = "fraction_changed";
ROUTE39.fromNode = "SpinClock";
ROUTE39.toField = "set_fraction";
ROUTE39.toNode = "SpinInterpolator";
browser.currentScene.children[14] = ROUTE39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromField = "value_changed";
ROUTE40.fromNode = "SpinInterpolator";
ROUTE40.toField = "rotation";
ROUTE40.toNode = "TextTransform";
browser.currentScene.children[15] = ROUTE40;

let Group41 = browser.currentScene.createNode("Group");
Group41.DEF = "BackgroundGroup";
let Background42 = browser.currentScene.createNode("Background");
Background42.DEF = "GradualBackground";
Group41.children = new MFNode();

Group41.children[0] = Background42;

let Script43 = browser.currentScene.createNode("Script");
Script43.DEF = "colorTypeConversionScript";
let field44 = browser.currentScene.createNode("field");
field44.name = "colorInput";
field44.accessType = "inputOnly";
field44.type = "SFColor";
Script43.field = new MFNode();

Script43.field[0] = field44;

let field45 = browser.currentScene.createNode("field");
field45.name = "colorsOutput";
field45.accessType = "outputOnly";
field45.type = "MFColor";
Script43.field[1] = field45;


Script43.setSourceCode(`ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}`)
Group41.children[1] = Script43;

let ColorInterpolator46 = browser.currentScene.createNode("ColorInterpolator");
ColorInterpolator46.DEF = "ColorAnimator";
ColorInterpolator46.key = new MFFloat(new float[0,0.5,1]);
ColorInterpolator46.keyValue = new MFColor(new float[0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1]);
// AZURE to INDIGO and back again 
Group41.children[2] = ColorInterpolator46;

let TimeSensor47 = browser.currentScene.createNode("TimeSensor");
TimeSensor47.DEF = "ColorClock";
TimeSensor47.cycleInterval = 60;
TimeSensor47.loop = True;
Group41.children[3] = TimeSensor47;

let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromField = "colorsOutput";
ROUTE48.fromNode = "colorTypeConversionScript";
ROUTE48.toField = "skyColor";
ROUTE48.toNode = "GradualBackground";
Group41.children[4] = ROUTE48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromField = "value_changed";
ROUTE49.fromNode = "ColorAnimator";
ROUTE49.toField = "colorInput";
ROUTE49.toNode = "colorTypeConversionScript";
Group41.children[5] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromField = "fraction_changed";
ROUTE50.fromNode = "ColorClock";
ROUTE50.toField = "set_fraction";
ROUTE50.toNode = "ColorAnimator";
Group41.children[6] = ROUTE50;

browser.currentScene.children[16] = Group41;

let ProtoDeclare51 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco01Material" appinfo="tooltip: ArtDeco01Material prototype is a Material node" ><ProtoInterface><field name="description" accessType="inputOutput" appinfo="tooltip for descriptionField" type="SFString" value="ArtDeco01Material prototype is a Material node"></field>
<field name="enabled" accessType="inputOutput" type="SFBool" value="true"></field>
</ProtoInterface>
<ProtoBody><!-- Initial node of ProtoBody determines prototype node type --><Material ambientIntensity="0.25" diffuseColor="0.282435 0.085159 0.134462" shininess="0.127273" specularColor="0.276305 0.11431 0.139857"></Material>
<!-- [HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()="Material" --><!-- presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types --><TouchSensor description="within ProtoBody"><IS><connect nodeField="description" protoField="description"></connect>
<connect nodeField="enabled" protoField="enabled"></connect>
</IS>
</TouchSensor>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare51.name = "ArtDeco01Material";
ProtoDeclare51.appinfo = "tooltip: ArtDeco01Material prototype is a Material node";
let ProtoInterface52 = browser.currentScene.createNode("ProtoInterface");
let field53 = browser.currentScene.createNode("field");
field53.name = "description";
field53.accessType = "inputOutput";
field53.appinfo = "tooltip for descriptionField";
field53.type = "SFString";
field53.value = "ArtDeco01Material prototype is a Material node";
ProtoInterface52.field = new MFNode();

ProtoInterface52.field[0] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "enabled";
field54.accessType = "inputOutput";
field54.type = "SFBool";
field54.value = "true";
ProtoInterface52.field[1] = field54;

ProtoDeclare51.protoInterface = ProtoInterface52;

let ProtoBody55 = browser.currentScene.createNode("ProtoBody");
// Initial node of ProtoBody determines prototype node type 
let Material56 = browser.currentScene.createNode("Material");
Material56.ambientIntensity = 0.25;
Material56.diffuseColor = new SFColor(new float[0.282435,0.085159,0.134462]);
Material56.shininess = 0.127273;
Material56.specularColor = new SFColor(new float[0.276305,0.11431,0.139857]);
ProtoBody55.children = new MFNode();

ProtoBody55.children[0] = Material56;

// [HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\" 
// presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types 
let TouchSensor57 = browser.currentScene.createNode("TouchSensor");
TouchSensor57.description = "within ProtoBody";
let IS58 = browser.currentScene.createNode("IS");
let connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "description";
connect59.protoField = "description";
IS58.connect = new MFNode();

IS58.connect[0] = connect59;

let connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "enabled";
connect60.protoField = "enabled";
IS58.connect[1] = connect60;

TouchSensor57.iS = IS58;

ProtoBody55.children[1] = TouchSensor57;

ProtoDeclare51.protoBody = ProtoBody55;

browser.currentScene.children[17] = ProtoDeclare51;

let ExternProtoDeclare61 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare61.name = "ArtDeco02Material";
ExternProtoDeclare61.appinfo = "this is a different Material node";
ExternProtoDeclare61.url = new MFString(new java.lang.String["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"]);
// [HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\" 
let field62 = browser.currentScene.createNode("field");
field62.name = "description";
field62.accessType = "inputOutput";
field62.appinfo = "tooltip for descriptionField";
field62.type = "SFString";
ExternProtoDeclare61.field = new MFNode();

ExternProtoDeclare61.field[0] = field62;

browser.currentScene.children[18] = ExternProtoDeclare61;

// Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place 
let Shape63 = browser.currentScene.createNode("Shape");
Shape63.DEF = "TestShape1";
let Appearance64 = browser.currentScene.createNode("Appearance");
Appearance64.DEF = "TestAppearance1";
// ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java 
let ProtoInstance65 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance65.name = "ArtDeco01Material";
// [HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\" 
let fieldValue66 = browser.currentScene.createNode("fieldValue");
fieldValue66.name = "description";
fieldValue66.value = "ArtDeco01Material can substitute for a Material node";
ProtoInstance65.fieldValue = new MFNode();

ProtoInstance65.fieldValue[0] = fieldValue66;

Appearance64.shaders = new MFNode();

Appearance64.shaders[0] = ProtoInstance65;

Shape63.appearance = Appearance64;

let Sphere67 = browser.currentScene.createNode("Sphere");
Sphere67.radius = 0.001;
Shape63.geometry = Sphere67;

browser.currentScene.children[19] = Shape63;

let Shape68 = browser.currentScene.createNode("Shape");
Shape68.DEF = "TestShape2";
let Appearance69 = browser.currentScene.createNode("Appearance");
Appearance69.DEF = "TestAppearance2";
// ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java 
let ProtoInstance70 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance70.DEF = "ArtDeco02MaterialDEF";
ProtoInstance70.name = "ArtDeco02Material";
// [HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\" 
let fieldValue71 = browser.currentScene.createNode("fieldValue");
fieldValue71.name = "description";
fieldValue71.value = "ArtDeco02Material can substitute for another Material node";
ProtoInstance70.fieldValue = new MFNode();

ProtoInstance70.fieldValue[0] = fieldValue71;

Appearance69.shaders = new MFNode();

Appearance69.shaders[0] = ProtoInstance70;

Shape68.appearance = Appearance69;

let Cone72 = browser.currentScene.createNode("Cone");
Cone72.bottomRadius = 0.001;
Cone72.height = 0.001;
Shape68.geometry = Cone72;

browser.currentScene.children[20] = Shape68;

let Shape73 = browser.currentScene.createNode("Shape");
Shape73.DEF = "TestShape3";
let Appearance74 = browser.currentScene.createNode("Appearance");
Appearance74.DEF = "TestAppearance3";
// ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE. 
let ProtoInstance75 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance75.USE = "ArtDeco02MaterialDEF";
Appearance74.shaders = new MFNode();

Appearance74.shaders[0] = ProtoInstance75;

Shape73.appearance = Appearance74;

let Cylinder76 = browser.currentScene.createNode("Cylinder");
Cylinder76.height = 0.001;
Cylinder76.radius = 0.001;
Shape73.geometry = Cylinder76;

browser.currentScene.children[21] = Shape73;

let Inline77 = browser.currentScene.createNode("Inline");
Inline77.DEF = "inlineSceneDef";
Inline77.url = new MFString(new java.lang.String["someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"]);
browser.currentScene.children[22] = Inline77;

let IMPORT78 = browser.currentScene.createNode("IMPORT");
IMPORT78.AS = "WorldInfoDEF2";
IMPORT78.importedDEF = "WorldInfoDEF";
IMPORT78.inlineDEF = "inlineSceneDef";
browser.currentScene.children[23] = IMPORT78;

let EXPORT79 = browser.currentScene.createNode("EXPORT");
EXPORT79.AS = "WorldInfoDEF3";
EXPORT79.localDEF = "WorldInfoDEF";
browser.currentScene.children[24] = EXPORT79;

let ProtoDeclare80 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
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
<!-- Only first node (the node type) is renderable, others are along for the ride --><Script DEF="MaterialModulatorScript"><field name="enabled" accessType="inputOutput" type="SFBool"></field>
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
ProtoDeclare80.name = "MaterialModulator";
ProtoDeclare80.appinfo = "mimic a Material node and modulate fields as an animation effect";
ProtoDeclare80.documentation = "http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html";
let ProtoInterface81 = browser.currentScene.createNode("ProtoInterface");
let field82 = browser.currentScene.createNode("field");
field82.name = "enabled";
field82.accessType = "inputOutput";
field82.type = "SFBool";
field82.value = "true";
ProtoInterface81.field = new MFNode();

ProtoInterface81.field[0] = field82;

let field83 = browser.currentScene.createNode("field");
field83.name = "diffuseColor";
field83.accessType = "inputOutput";
field83.type = "SFColor";
field83.value = "0 0 0";
ProtoInterface81.field[1] = field83;

let field84 = browser.currentScene.createNode("field");
field84.name = "emissiveColor";
field84.accessType = "inputOutput";
field84.type = "SFColor";
field84.value = "0.05 0.05 0.5";
ProtoInterface81.field[2] = field84;

let field85 = browser.currentScene.createNode("field");
field85.name = "specularColor";
field85.accessType = "inputOutput";
field85.type = "SFColor";
field85.value = "0 0 0";
ProtoInterface81.field[3] = field85;

let field86 = browser.currentScene.createNode("field");
field86.name = "transparency";
field86.accessType = "inputOutput";
field86.type = "SFFloat";
field86.value = "0";
ProtoInterface81.field[4] = field86;

let field87 = browser.currentScene.createNode("field");
field87.name = "shininess";
field87.accessType = "inputOutput";
field87.type = "SFFloat";
field87.value = "0";
ProtoInterface81.field[5] = field87;

let field88 = browser.currentScene.createNode("field");
field88.name = "ambientIntensity";
field88.accessType = "inputOutput";
field88.type = "SFFloat";
field88.value = "0";
ProtoInterface81.field[6] = field88;

ProtoDeclare80.protoInterface = ProtoInterface81;

let ProtoBody89 = browser.currentScene.createNode("ProtoBody");
let Material90 = browser.currentScene.createNode("Material");
Material90.DEF = "MaterialNode";
let IS91 = browser.currentScene.createNode("IS");
let connect92 = browser.currentScene.createNode("connect");
connect92.nodeField = "diffuseColor";
connect92.protoField = "diffuseColor";
IS91.connect = new MFNode();

IS91.connect[0] = connect92;

let connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "emissiveColor";
connect93.protoField = "emissiveColor";
IS91.connect[1] = connect93;

let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "specularColor";
connect94.protoField = "specularColor";
IS91.connect[2] = connect94;

let connect95 = browser.currentScene.createNode("connect");
connect95.nodeField = "transparency";
connect95.protoField = "transparency";
IS91.connect[3] = connect95;

let connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "shininess";
connect96.protoField = "shininess";
IS91.connect[4] = connect96;

let connect97 = browser.currentScene.createNode("connect");
connect97.nodeField = "ambientIntensity";
connect97.protoField = "ambientIntensity";
IS91.connect[5] = connect97;

Material90.iS = IS91;

ProtoBody89.children = new MFNode();

ProtoBody89.children[0] = Material90;

// Only first node (the node type) is renderable, others are along for the ride 
let Script98 = browser.currentScene.createNode("Script");
Script98.DEF = "MaterialModulatorScript";
let field99 = browser.currentScene.createNode("field");
field99.name = "enabled";
field99.accessType = "inputOutput";
field99.type = "SFBool";
Script98.field = new MFNode();

Script98.field[0] = field99;

let field100 = browser.currentScene.createNode("field");
field100.name = "diffuseColor";
field100.accessType = "inputOutput";
field100.type = "SFColor";
Script98.field[1] = field100;

let field101 = browser.currentScene.createNode("field");
field101.name = "newColor";
field101.accessType = "outputOnly";
field101.type = "SFColor";
Script98.field[2] = field101;

let field102 = browser.currentScene.createNode("field");
field102.name = "clockTrigger";
field102.accessType = "inputOnly";
field102.type = "SFTime";
Script98.field[3] = field102;

let IS103 = browser.currentScene.createNode("IS");
let connect104 = browser.currentScene.createNode("connect");
connect104.nodeField = "enabled";
connect104.protoField = "enabled";
IS103.connect = new MFNode();

IS103.connect[0] = connect104;

let connect105 = browser.currentScene.createNode("connect");
connect105.nodeField = "diffuseColor";
connect105.protoField = "diffuseColor";
IS103.connect[1] = connect105;

Script98.iS = IS103;


Script98.setSourceCode(`ecmascript:\n"+
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
"    \n"+
"    // note different modulation rates for each color component, % is modulus operator\n"+
"    newColor = new SFColor ((red + 0.02) % 1, (green + 0.03) % 1, (blue + 0.04) % 1);\n"+
"	if (enabled)\n"+
"	{\n"+
"		Browser.print ('diffuseColor=(' + red + ',' + green + ',' + blue + ') newColor=' + newColor.toString() + '\\n');\n"+
"	}\n"+
"}`)
ProtoBody89.children[1] = Script98;

ProtoDeclare80.protoBody = ProtoBody89;

browser.currentScene.children[25] = ProtoDeclare80;

// Test success: declarative statement createDeclarativeShapeTests() 
let Group106 = browser.currentScene.createNode("Group");
Group106.DEF = "DeclarativeGroupExample";
let Shape107 = browser.currentScene.createNode("Shape");
let MetadataString108 = browser.currentScene.createNode("MetadataString");
MetadataString108.DEF = "FindableMetadataStringTest";
MetadataString108.name = "findThisNameValue";
MetadataString108.value = new MFString(new java.lang.String["test case"]);
Shape107.metadata = MetadataString108;

let Appearance109 = browser.currentScene.createNode("Appearance");
Appearance109.DEF = "DeclarativeAppearanceExample";
// DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance 
let ProtoInstance110 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance110.DEF = "MyMaterialModulator";
ProtoInstance110.name = "MaterialModulator";
Appearance109.shaders = new MFNode();

Appearance109.shaders[0] = ProtoInstance110;

Shape107.appearance = Appearance109;

let Cone111 = browser.currentScene.createNode("Cone");
Cone111.bottom = False;
Cone111.bottomRadius = 0.05;
Cone111.height = 0.1;
Shape107.geometry = Cone111;

Group106.children = new MFNode();

Group106.children[0] = Shape107;

// Test success: declarativeGroup.addChild() singleton pipeline method 
browser.currentScene.children[26] = Group106;

// Test success: declarative statement addChild() 
// Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance> 
// Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/> 
// Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found 
// Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found 
// Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found 
let Group112 = browser.currentScene.createNode("Group");
Group112.DEF = "TestFieldObjectsGroup";
// testFieldObjects() results 
// SFBool default=true, true=true, false=false, negate()=true 
// MFBool default=, initial=true false true, negate()=false true false 
// SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0 
// MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7 
// ... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear= 
// SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true 
// regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotationObject.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value 
browser.currentScene.children[27] = Group112;

let Sound113 = browser.currentScene.createNode("Sound");
Sound113.location = new SFVec3f(new float[0,1.6,0]);
// set sound-ellipsoid location height at 1.6m to match typical avatar height 
let AudioClip114 = browser.currentScene.createNode("AudioClip");
AudioClip114.description = "chimes";
AudioClip114.url = new MFString(new java.lang.String["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]);
// Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d 
Sound113.source = AudioClip114;

browser.currentScene.children[28] = Sound113;

let Sound115 = browser.currentScene.createNode("Sound");
Sound115.location = new SFVec3f(new float[0,1.6,0]);
// set sound-ellipsoid location height at 1.6m to match typical avatar height 
let MovieTexture116 = browser.currentScene.createNode("MovieTexture");
MovieTexture116.description = "mpgsys.mpg from ConformanceNist suite";
MovieTexture116.url = new MFString(new java.lang.String["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]);
// Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d 
// Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"watchList\" 
Sound115.source = MovieTexture116;

browser.currentScene.children[29] = Sound115;

// Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true 
// Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false 
// Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false 
// Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true 
// Test success: CommentsBlock.isNode()=false, testComments.isNode()=false 
// Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true 
let Shape117 = browser.currentScene.createNode("Shape");
Shape117.DEF = "ExtrusionShape";
// ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]' 
// ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]' 
let Appearance118 = browser.currentScene.createNode("Appearance");
Appearance118.DEF = "TransparentAppearance";
let Material119 = browser.currentScene.createNode("Material");
Material119.transparency = 1;
Appearance118.material = Material119;

Shape117.appearance = Appearance118;

let Extrusion120 = browser.currentScene.createNode("Extrusion");
Extrusion120.DEF = "ExampleExtrusion";
Shape117.geometry = Extrusion120;

browser.currentScene.children[30] = Shape117;

let Group121 = browser.currentScene.createNode("Group");
// Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes 
let ProtoDeclare122 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="NewWorldInfo" ><ProtoInterface><field name="description" accessType="initializeOnly" type="SFString"></field>
</ProtoInterface>
<ProtoBody><WorldInfo></WorldInfo>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare122.name = "NewWorldInfo";
let ProtoInterface123 = browser.currentScene.createNode("ProtoInterface");
let field124 = browser.currentScene.createNode("field");
field124.name = "description";
field124.accessType = "initializeOnly";
field124.type = "SFString";
ProtoInterface123.field = new MFNode();

ProtoInterface123.field[0] = field124;

ProtoDeclare122.protoInterface = ProtoInterface123;

let ProtoBody125 = browser.currentScene.createNode("ProtoBody");
let WorldInfo126 = browser.currentScene.createNode("WorldInfo");
ProtoBody125.children = new MFNode();

ProtoBody125.children[0] = WorldInfo126;

ProtoDeclare122.protoBody = ProtoBody125;

Group121.children = new MFNode();

Group121.children[0] = ProtoDeclare122;

let ProtoInstance127 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance127.DEF = "Proto1";
ProtoInstance127.name = "NewWorldInfo";
let fieldValue128 = browser.currentScene.createNode("fieldValue");
fieldValue128.name = "description";
fieldValue128.value = "testing 1 2 3";
ProtoInstance127.fieldValue = new MFNode();

ProtoInstance127.fieldValue[0] = fieldValue128;

Group121.children[1] = ProtoInstance127;

let Group129 = browser.currentScene.createNode("Group");
Group129.DEF = "Node2";
// intentionally empty 
Group121.children[2] = Group129;

let ProtoInstance130 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance130.DEF = "Proto3";
ProtoInstance130.name = "NewWorldInfo";
Group121.children[3] = ProtoInstance130;

let Transform131 = browser.currentScene.createNode("Transform");
Transform131.DEF = "Node4";
// intentionally empty 
Group121.children[4] = Transform131;

// Test satisfactorily creates MFNode children array as an ordered list with mixed content 
browser.currentScene.children[31] = Group121;

let ProtoDeclare132 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ShaderProto" ><ProtoBody><ProgramShader></ProgramShader>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare132.name = "ShaderProto";
let ProtoBody133 = browser.currentScene.createNode("ProtoBody");
let ProgramShader134 = browser.currentScene.createNode("ProgramShader");
ProtoBody133.children = new MFNode();

ProtoBody133.children[0] = ProgramShader134;

ProtoDeclare132.protoBody = ProtoBody133;

browser.currentScene.children[32] = ProtoDeclare132;

let Shape135 = browser.currentScene.createNode("Shape");
let Appearance136 = browser.currentScene.createNode("Appearance");
// Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes 
// Test satisfactorily creates MFNode shaders array as an ordered list with mixed content 
let ProgramShader137 = browser.currentScene.createNode("ProgramShader");
ProgramShader137.DEF = "TestShader1";
let ShaderProgram138 = browser.currentScene.createNode("ShaderProgram");
ShaderProgram138.DEF = "TestShader2";
ProgramShader137.programs = new MFNode();

ProgramShader137.programs[0] = ShaderProgram138;

Appearance136.shaders = new MFNode();

Appearance136.shaders[0] = ProgramShader137;

let ProtoInstance139 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance139.DEF = "TestShader3";
ProtoInstance139.name = "ShaderProto";
Appearance136.shaders[1] = ProtoInstance139;

let ComposedShader140 = browser.currentScene.createNode("ComposedShader");
ComposedShader140.DEF = "TestShader4";
let ShaderPart141 = browser.currentScene.createNode("ShaderPart");
ShaderPart141.DEF = "TestShader5";
ComposedShader140.parts = new MFNode();

ComposedShader140.parts[0] = ShaderPart141;

Appearance136.shaders[2] = ComposedShader140;

Shape135.appearance = Appearance136;

browser.currentScene.children[33] = Shape135;

let Transform142 = browser.currentScene.createNode("Transform");
Transform142.DEF = "SpecialtyNodes";
let CADLayer143 = browser.currentScene.createNode("CADLayer");
let CADAssembly144 = browser.currentScene.createNode("CADAssembly");
let CADPart145 = browser.currentScene.createNode("CADPart");
let CADFace146 = browser.currentScene.createNode("CADFace");
CADPart145.children = new MFNode();

CADPart145.children[0] = CADFace146;

CADAssembly144.children = new MFNode();

CADAssembly144.children[0] = CADPart145;

CADLayer143.children = new MFNode();

CADLayer143.children[0] = CADAssembly144;

Transform142.children = new MFNode();

Transform142.children[0] = CADLayer143;

let EspduTransform147 = browser.currentScene.createNode("EspduTransform");
EspduTransform147.geoSystem = new MFString(new java.lang.String["GD","WE"]);
Transform142.children[1] = EspduTransform147;

let ReceiverPdu148 = browser.currentScene.createNode("ReceiverPdu");
ReceiverPdu148.geoSystem = new MFString(new java.lang.String["GD","WE"]);
Transform142.children[2] = ReceiverPdu148;

let SignalPdu149 = browser.currentScene.createNode("SignalPdu");
SignalPdu149.geoSystem = new MFString(new java.lang.String["GD","WE"]);
Transform142.children[3] = SignalPdu149;

let TransmitterPdu150 = browser.currentScene.createNode("TransmitterPdu");
TransmitterPdu150.geoSystem = new MFString(new java.lang.String["GD","WE"]);
Transform142.children[4] = TransmitterPdu150;

let DISEntityManager151 = browser.currentScene.createNode("DISEntityManager");
let DISEntityTypeMapping152 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityManager151.mapping = new MFNode();

DISEntityManager151.mapping[0] = DISEntityTypeMapping152;

Transform142.children[5] = DISEntityManager151;

browser.currentScene.children[34] = Transform142;

let MetadataString153 = browser.currentScene.createNode("MetadataString");
MetadataString153.DEF = "scene.addChildMetadata";
MetadataString153.name = "test";
MetadataString153.value = new MFString(new java.lang.String["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"]);
browser.currentScene.metadata[35] = MetadataString153;

let LayerSet154 = browser.currentScene.createNode("LayerSet");
LayerSet154.DEF = "scene.addChildLayerSetTest";
LayerSet154.order = new MFInt32(new int[0]);
browser.currentScene.layerSet[36] = LayerSet154;

