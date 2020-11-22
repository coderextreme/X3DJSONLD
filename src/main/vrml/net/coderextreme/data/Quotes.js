let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
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

let WorldInfo5 = browser.currentScene.createNode("WorldInfo");
WorldInfo5.DEF = "WorldInfoDEF";
WorldInfo5.title = "HelloWorldProgram produced by X3D Java SAI Library (X3DJSAIL)";
browser.currentScene.children[1] = WorldInfo5;

let WorldInfo6 = browser.currentScene.createNode("WorldInfo");
WorldInfo6.USE = "WorldInfoDEF";
browser.currentScene.children[2] = WorldInfo6;

let WorldInfo7 = browser.currentScene.createNode("WorldInfo");
WorldInfo7.USE = "WorldInfoDEF";
browser.currentScene.children[3] = WorldInfo7;

let MetadataString8 = browser.currentScene.createNode("MetadataString");
MetadataString8.name = "test";
MetadataString8.DEF = "scene.addChildMetadata";
MetadataString8.value = new MFString(new java.lang.String["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"]);
browser.currentScene.metadata[4] = MetadataString8;

let LayerSet9 = browser.currentScene.createNode("LayerSet");
LayerSet9.DEF = "scene.addChildLayerSetTest";
browser.currentScene.layerSet[5] = LayerSet9;

let Transform10 = browser.currentScene.createNode("Transform");
Transform10.DEF = "LogoGeometryTransform";
Transform10.translation = new SFVec3f(new float[0,1.5,0]);
let Anchor11 = browser.currentScene.createNode("Anchor");
Anchor11.description = "select for X3D Java SAI Library (X3DJSAIL) description";
Anchor11.url = new MFString(new java.lang.String["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"]);
let Shape12 = browser.currentScene.createNode("Shape");
Shape12.DEF = "BoxShape";
let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.DEF = "GreenMaterial";
Material14.diffuseColor = new SFColor(new float[0,1,1]);
Material14.emissiveColor = new SFColor(new float[0.8,0,0]);
Material14.transparency = 0.1;
Appearance13.material = Material14;

let ImageTexture15 = browser.currentScene.createNode("ImageTexture");
ImageTexture15.url = new MFString(new java.lang.String["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"]);
Appearance13.texture = ImageTexture15;

Shape12.appearance = Appearance13;

let Box16 = browser.currentScene.createNode("Box");
Box16.DEF = "test-NMTOKEN_regex.0123456789";
Box16.CssClass = "untextured";
Shape12.geometry = Box16;

Anchor11.children = new MFNode();

Anchor11.children[0] = Shape12;

Transform10.children = new MFNode();

Transform10.children[0] = Anchor11;

browser.currentScene.children[6] = Transform10;

let Shape17 = browser.currentScene.createNode("Shape");
Shape17.DEF = "LineShape";
let Appearance18 = browser.currentScene.createNode("Appearance");
let Material19 = browser.currentScene.createNode("Material");
Material19.emissiveColor = new SFColor(new float[0.6,0.19607843,0.8]);
Appearance18.material = Material19;

Shape17.appearance = Appearance18;

let IndexedLineSet20 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet20.coordIndex = new MFInt32(new int[0,1,2,3,4,0]);
//Coordinate 3-tuple point count: 6
let Coordinate21 = browser.currentScene.createNode("Coordinate");
Coordinate21.point = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
IndexedLineSet20.coord = Coordinate21;

Shape17.geometry = IndexedLineSet20;

browser.currentScene.children[7] = Shape17;

let PositionInterpolator22 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator22.DEF = "BoxPathAnimator";
PositionInterpolator22.key = new MFFloat(new float[0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator22.keyValue = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
browser.currentScene.children[8] = PositionInterpolator22;

let TimeSensor23 = browser.currentScene.createNode("TimeSensor");
TimeSensor23.DEF = "OrbitClock";
TimeSensor23.cycleInterval = 8;
TimeSensor23.loop = True;
browser.currentScene.children[9] = TimeSensor23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromField = "fraction_changed";
ROUTE24.fromNode = "OrbitClock";
ROUTE24.toField = "set_fraction";
ROUTE24.toNode = "BoxPathAnimator";
browser.currentScene.children[10] = ROUTE24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromField = "value_changed";
ROUTE25.fromNode = "BoxPathAnimator";
ROUTE25.toField = "set_translation";
ROUTE25.toNode = "LogoGeometryTransform";
browser.currentScene.children[11] = ROUTE25;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "TextTransform";
Transform26.translation = new SFVec3f(new float[0,-1.5,0]);
let Shape27 = browser.currentScene.createNode("Shape");
let Appearance28 = browser.currentScene.createNode("Appearance");
let Material29 = browser.currentScene.createNode("Material");
Material29.USE = "GreenMaterial";
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

let Text30 = browser.currentScene.createNode("Text");
Text30.string = new MFString(new java.lang.String["X3D Java","SAI Library","X3DJSAIL"]);
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
let MetadataSet31 = browser.currentScene.createNode("MetadataSet");
MetadataSet31.name = "EscapedQuotationMarksMetadataSet";
let MetadataString32 = browser.currentScene.createNode("MetadataString");
MetadataString32.name = "quotesTestC";
MetadataString32.value = new MFString(new java.lang.String["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""]);
MetadataSet31.value = new MFNode();

MetadataSet31.value[0] = MetadataString32;

let MetadataString33 = browser.currentScene.createNode("MetadataString");
MetadataString33.name = "extraChildTest";
MetadataString33.value = new MFString(new java.lang.String["checks MetadataSetObject addValue() method"]);
MetadataSet31.value[1] = MetadataString33;

Text30.metadata = MetadataSet31;

let FontStyle34 = browser.currentScene.createNode("FontStyle");
FontStyle34.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text30.fontStyle = FontStyle34;

Shape27.geometry = Text30;

Transform26.children = new MFNode();

Transform26.children[0] = Shape27;

let Collision35 = browser.currentScene.createNode("Collision");
//test containerField='proxy'
let Shape36 = browser.currentScene.createNode("Shape");
Shape36.DEF = "ProxyShape";
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"\"Immel did it!\\\"\"\\\"\"})
//reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
let Text37 = browser.currentScene.createNode("Text");
Text37.string = new MFString(new java.lang.String["One, Two, Text","","He said, \"Immel did it!\" \"\""]);
Shape36.geometry = Text37;

Collision35.proxy = Shape36;

Transform26.children[1] = Collision35;

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
browser.currentScene.children[12] = Transform26;

//repeatedly spin 180 degrees as a readable special effect
let OrientationInterpolator38 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator38.DEF = "SpinInterpolator";
OrientationInterpolator38.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator38.keyValue = new MFRotation(new float[0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964]);
browser.currentScene.children[13] = OrientationInterpolator38;

let TimeSensor39 = browser.currentScene.createNode("TimeSensor");
TimeSensor39.DEF = "SpinClock";
TimeSensor39.cycleInterval = 5;
TimeSensor39.loop = True;
browser.currentScene.children[14] = TimeSensor39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromField = "fraction_changed";
ROUTE40.fromNode = "SpinClock";
ROUTE40.toField = "set_fraction";
ROUTE40.toNode = "SpinInterpolator";
browser.currentScene.children[15] = ROUTE40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromField = "value_changed";
ROUTE41.fromNode = "SpinInterpolator";
ROUTE41.toField = "rotation";
ROUTE41.toNode = "TextTransform";
browser.currentScene.children[16] = ROUTE41;

let Group42 = browser.currentScene.createNode("Group");
Group42.DEF = "BackgroundGroup";
let Background43 = browser.currentScene.createNode("Background");
Background43.DEF = "GradualBackground";
Group42.children = new MFNode();

Group42.children[0] = Background43;

let Script44 = browser.currentScene.createNode("Script");
Script44.DEF = "colorTypeConversionScript";
let field45 = browser.currentScene.createNode("field");
field45.name = "colorInput";
field45.accessType = "inputOnly";
field45.type = "SFColor";
Script44.field = new MFNode();

Script44.field[0] = field45;

let field46 = browser.currentScene.createNode("field");
field46.name = "colorsOutput";
field46.accessType = "outputOnly";
field46.type = "MFColor";
Script44.field[1] = field46;


Script44.setSourceCode(`ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}`)
Group42.children[1] = Script44;

let ColorInterpolator47 = browser.currentScene.createNode("ColorInterpolator");
ColorInterpolator47.DEF = "ColorAnimator";
ColorInterpolator47.key = new MFFloat(new float[0,0.5,1]);
ColorInterpolator47.keyValue = new MFColor(new float[0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1]);
//AZURE to INDIGO and back again
Group42.children[2] = ColorInterpolator47;

let TimeSensor48 = browser.currentScene.createNode("TimeSensor");
TimeSensor48.DEF = "ColorClock";
TimeSensor48.cycleInterval = 60;
TimeSensor48.loop = True;
Group42.children[3] = TimeSensor48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromField = "colorsOutput";
ROUTE49.fromNode = "colorTypeConversionScript";
ROUTE49.toField = "skyColor";
ROUTE49.toNode = "GradualBackground";
Group42.children[4] = ROUTE49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromField = "value_changed";
ROUTE50.fromNode = "ColorAnimator";
ROUTE50.toField = "colorInput";
ROUTE50.toNode = "colorTypeConversionScript";
Group42.children[5] = ROUTE50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromField = "fraction_changed";
ROUTE51.fromNode = "ColorClock";
ROUTE51.toField = "set_fraction";
ROUTE51.toNode = "ColorAnimator";
Group42.children[6] = ROUTE51;

browser.currentScene.children[17] = Group42;

let ProtoDeclare52 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare52.name = "ArtDeco01Material";
ProtoDeclare52.appinfo = "tooltip: ArtDeco01Material prototype is a Material node";
let ProtoInterface53 = browser.currentScene.createNode("ProtoInterface");
let field54 = browser.currentScene.createNode("field");
field54.name = "description";
field54.accessType = "inputOutput";
field54.appinfo = "tooltip for descriptionField";
field54.type = "SFString";
field54.value = "ArtDeco01Material prototype is a Material node";
ProtoInterface53.field = new MFNode();

ProtoInterface53.field[0] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "enabled";
field55.accessType = "inputOutput";
field55.type = "SFBool";
field55.value = "true";
ProtoInterface53.field[1] = field55;

ProtoDeclare52.protoInterface = ProtoInterface53;

let ProtoBody56 = browser.currentScene.createNode("ProtoBody");
//Initial node of ProtoBody determines prototype node type
let Material57 = browser.currentScene.createNode("Material");
Material57.ambientIntensity = 0.25;
Material57.diffuseColor = new SFColor(new float[0.282435,0.085159,0.134462]);
Material57.shininess = 0.127273;
Material57.specularColor = new SFColor(new float[0.276305,0.11431,0.139857]);
ProtoBody56.children = new MFNode();

ProtoBody56.children[0] = Material57;

//[HelloWorldProgram diagnostic] should be connected to scene graph: ArtDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
let TouchSensor58 = browser.currentScene.createNode("TouchSensor");
TouchSensor58.description = "within ProtoBody";
let IS59 = browser.currentScene.createNode("IS");
let connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "description";
connect60.protoField = "description";
IS59.connect = new MFNode();

IS59.connect[0] = connect60;

let connect61 = browser.currentScene.createNode("connect");
connect61.nodeField = "enabled";
connect61.protoField = "enabled";
IS59.connect[1] = connect61;

TouchSensor58.iS = IS59;

ProtoBody56.children[1] = TouchSensor58;

ProtoDeclare52.protoBody = ProtoBody56;

browser.currentScene.children[18] = ProtoDeclare52;

let ExternProtoDeclare62 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare62.name = "ArtDeco02Material";
ExternProtoDeclare62.appinfo = "this is a different Material node";
ExternProtoDeclare62.url = new MFString(new java.lang.String["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"]);
//[HelloWorldProgram diagnostic] ArtDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
let field63 = browser.currentScene.createNode("field");
field63.name = "description";
field63.accessType = "inputOutput";
field63.appinfo = "tooltip for descriptionField";
field63.type = "SFString";
ExternProtoDeclare62.field = new MFNode();

ExternProtoDeclare62.field[0] = field63;

browser.currentScene.children[19] = ExternProtoDeclare62;

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
let Shape64 = browser.currentScene.createNode("Shape");
Shape64.DEF = "TestShape1";
let Appearance65 = browser.currentScene.createNode("Appearance");
Appearance65.DEF = "TestAppearance1";
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
let ProtoInstance66 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance66.name = "ArtDeco01Material";
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
let fieldValue67 = browser.currentScene.createNode("fieldValue");
fieldValue67.name = "description";
fieldValue67.value = "ArtDeco01Material can substitute for a Material node";
ProtoInstance66.fieldValue = new MFNode();

ProtoInstance66.fieldValue[0] = fieldValue67;

Appearance65.shaders = new MFNode();

Appearance65.shaders[0] = ProtoInstance66;

Shape64.appearance = Appearance65;

let Sphere68 = browser.currentScene.createNode("Sphere");
Sphere68.radius = 0.001;
Shape64.geometry = Sphere68;

browser.currentScene.children[20] = Shape64;

let Shape69 = browser.currentScene.createNode("Shape");
Shape69.DEF = "TestShape2";
let Appearance70 = browser.currentScene.createNode("Appearance");
Appearance70.DEF = "TestAppearance2";
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
let ProtoInstance71 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance71.name = "ArtDeco02Material";
ProtoInstance71.DEF = "ArtDeco02MaterialDEF";
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time, TODO X3DJSAIL needs to add further capability.\"
let fieldValue72 = browser.currentScene.createNode("fieldValue");
fieldValue72.name = "description";
fieldValue72.value = "ArtDeco02Material can substitute for another Material node";
ProtoInstance71.fieldValue = new MFNode();

ProtoInstance71.fieldValue[0] = fieldValue72;

Appearance70.shaders = new MFNode();

Appearance70.shaders[0] = ProtoInstance71;

Shape69.appearance = Appearance70;

let Cone73 = browser.currentScene.createNode("Cone");
Cone73.bottomRadius = 0.001;
Cone73.height = 0.001;
Shape69.geometry = Cone73;

browser.currentScene.children[21] = Shape69;

let Shape74 = browser.currentScene.createNode("Shape");
Shape74.DEF = "TestShape3";
let Appearance75 = browser.currentScene.createNode("Appearance");
Appearance75.DEF = "TestAppearance3";
//ArtDeco02Material ProtoInstance USE goes here...
let ProtoInstance76 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance76.USE = "ArtDeco02MaterialDEF";
Appearance75.shaders = new MFNode();

Appearance75.shaders[0] = ProtoInstance76;

Shape74.appearance = Appearance75;

let Cylinder77 = browser.currentScene.createNode("Cylinder");
Cylinder77.height = 0.001;
Cylinder77.radius = 0.001;
Shape74.geometry = Cylinder77;

browser.currentScene.children[22] = Shape74;

let Inline78 = browser.currentScene.createNode("Inline");
Inline78.DEF = "inlineSceneDef";
Inline78.url = new MFString(new java.lang.String["someOtherScene.x3d"]);
browser.currentScene.children[23] = Inline78;

let IMPORT79 = browser.currentScene.createNode("IMPORT");
IMPORT79.AS = "WorldInfoDEF2";
IMPORT79.importedDEF = "WorldInfoDEF";
IMPORT79.inlineDEF = "inlineSceneDef";
browser.currentScene.children[24] = IMPORT79;

let EXPORT80 = browser.currentScene.createNode("EXPORT");
EXPORT80.AS = "WorldInfoDEF3";
EXPORT80.localDEF = "WorldInfoDEF";
browser.currentScene.children[25] = EXPORT80;

let ProtoDeclare81 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare81.name = "MaterialModulator";
ProtoDeclare81.appinfo = "mimic a Material node and modulate fields as an animation effect";
ProtoDeclare81.documentation = "http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html";
let ProtoInterface82 = browser.currentScene.createNode("ProtoInterface");
let field83 = browser.currentScene.createNode("field");
field83.name = "enabled";
field83.accessType = "inputOutput";
field83.type = "SFBool";
field83.value = "true";
ProtoInterface82.field = new MFNode();

ProtoInterface82.field[0] = field83;

let field84 = browser.currentScene.createNode("field");
field84.name = "diffuseColor";
field84.accessType = "inputOutput";
field84.type = "SFColor";
field84.value = "0 0 0";
ProtoInterface82.field[1] = field84;

let field85 = browser.currentScene.createNode("field");
field85.name = "emissiveColor";
field85.accessType = "inputOutput";
field85.type = "SFColor";
field85.value = "0.05 0.05 0.5";
ProtoInterface82.field[2] = field85;

let field86 = browser.currentScene.createNode("field");
field86.name = "specularColor";
field86.accessType = "inputOutput";
field86.type = "SFColor";
field86.value = "0 0 0";
ProtoInterface82.field[3] = field86;

let field87 = browser.currentScene.createNode("field");
field87.name = "transparency";
field87.accessType = "inputOutput";
field87.type = "SFFloat";
field87.value = "0";
ProtoInterface82.field[4] = field87;

let field88 = browser.currentScene.createNode("field");
field88.name = "shininess";
field88.accessType = "inputOutput";
field88.type = "SFFloat";
field88.value = "0";
ProtoInterface82.field[5] = field88;

let field89 = browser.currentScene.createNode("field");
field89.name = "ambientIntensity";
field89.accessType = "inputOutput";
field89.type = "SFFloat";
field89.value = "0";
ProtoInterface82.field[6] = field89;

ProtoDeclare81.protoInterface = ProtoInterface82;

let ProtoBody90 = browser.currentScene.createNode("ProtoBody");
let Material91 = browser.currentScene.createNode("Material");
Material91.DEF = "MaterialNode";
let IS92 = browser.currentScene.createNode("IS");
let connect93 = browser.currentScene.createNode("connect");
connect93.nodeField = "diffuseColor";
connect93.protoField = "diffuseColor";
IS92.connect = new MFNode();

IS92.connect[0] = connect93;

let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "emissiveColor";
connect94.protoField = "emissiveColor";
IS92.connect[1] = connect94;

let connect95 = browser.currentScene.createNode("connect");
connect95.nodeField = "specularColor";
connect95.protoField = "specularColor";
IS92.connect[2] = connect95;

let connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "transparency";
connect96.protoField = "transparency";
IS92.connect[3] = connect96;

let connect97 = browser.currentScene.createNode("connect");
connect97.nodeField = "shininess";
connect97.protoField = "shininess";
IS92.connect[4] = connect97;

let connect98 = browser.currentScene.createNode("connect");
connect98.nodeField = "ambientIntensity";
connect98.protoField = "ambientIntensity";
IS92.connect[5] = connect98;

Material91.iS = IS92;

ProtoBody90.children = new MFNode();

ProtoBody90.children[0] = Material91;

//Only first node (the node type) is renderable, others are along for the ride
let Script99 = browser.currentScene.createNode("Script");
Script99.DEF = "MaterialModulatorScript";
let field100 = browser.currentScene.createNode("field");
field100.name = "enabled";
field100.accessType = "inputOutput";
field100.type = "SFBool";
Script99.field = new MFNode();

Script99.field[0] = field100;

let field101 = browser.currentScene.createNode("field");
field101.name = "diffuseColor";
field101.accessType = "inputOutput";
field101.type = "SFColor";
Script99.field[1] = field101;

let field102 = browser.currentScene.createNode("field");
field102.name = "newColor";
field102.accessType = "outputOnly";
field102.type = "SFColor";
Script99.field[2] = field102;

let field103 = browser.currentScene.createNode("field");
field103.name = "clockTrigger";
field103.accessType = "inputOnly";
field103.type = "SFTime";
Script99.field[3] = field103;

let IS104 = browser.currentScene.createNode("IS");
let connect105 = browser.currentScene.createNode("connect");
connect105.nodeField = "enabled";
connect105.protoField = "enabled";
IS104.connect = new MFNode();

IS104.connect[0] = connect105;

let connect106 = browser.currentScene.createNode("connect");
connect106.nodeField = "diffuseColor";
connect106.protoField = "diffuseColor";
IS104.connect[1] = connect106;

Script99.iS = IS104;


Script99.setSourceCode(`ecmascript:\n"+
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
ProtoBody90.children[1] = Script99;

ProtoDeclare81.protoBody = ProtoBody90;

browser.currentScene.children[26] = ProtoDeclare81;

//Test success: declarative statement createDeclarativeShapeTests()
let Group107 = browser.currentScene.createNode("Group");
Group107.DEF = "DeclarativeGroupExample";
let Shape108 = browser.currentScene.createNode("Shape");
let MetadataString109 = browser.currentScene.createNode("MetadataString");
MetadataString109.name = "findThisNameValue";
MetadataString109.DEF = "FindableMetadataStringTest";
MetadataString109.value = new MFString(new java.lang.String["test case"]);
Shape108.metadata = MetadataString109;

let Appearance110 = browser.currentScene.createNode("Appearance");
Appearance110.DEF = "DeclarativeAppearanceExample";
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
let ProtoInstance111 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance111.name = "MaterialModulator";
ProtoInstance111.DEF = "MyMaterialModulator";
Appearance110.shaders = new MFNode();

Appearance110.shaders[0] = ProtoInstance111;

Shape108.appearance = Appearance110;

let Cone112 = browser.currentScene.createNode("Cone");
Cone112.bottom = False;
Cone112.bottomRadius = 0.05;
Cone112.height = 0.1;
Shape108.geometry = Cone112;

Group107.children = new MFNode();

Group107.children[0] = Shape108;

//Test success: declarativeGroup.addChild() singleton pipeline method
browser.currentScene.children[27] = Group107;

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
let Group113 = browser.currentScene.createNode("Group");
Group113.DEF = "TestFieldObjectsGroup";
//testFieldObjects() results
//SFBool default=true, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344
browser.currentScene.children[28] = Group113;

let Sound114 = browser.currentScene.createNode("Sound");
Sound114.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let AudioClip115 = browser.currentScene.createNode("AudioClip");
AudioClip115.description = "chimes";
AudioClip115.url = new MFString(new java.lang.String["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound114.source = AudioClip115;

browser.currentScene.children[29] = Sound114;

let Sound116 = browser.currentScene.createNode("Sound");
Sound116.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let MovieTexture117 = browser.currentScene.createNode("MovieTexture");
MovieTexture117.description = "mpgsys.mpg from ConformanceNist suite";
MovieTexture117.url = new MFString(new java.lang.String["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\"
Sound116.source = MovieTexture117;

browser.currentScene.children[30] = Sound116;

//Test success: AnchorObject.isNode()=true, siteAnchor.isNode()=true
//Test success: AnchorObject.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTEObject.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTEObject.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
let Shape118 = browser.currentScene.createNode("Shape");
Shape118.DEF = "ExtrusionShape";
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
let Appearance119 = browser.currentScene.createNode("Appearance");
Appearance119.DEF = "TransparentAppearance";
let Material120 = browser.currentScene.createNode("Material");
Material120.transparency = 1;
Appearance119.material = Material120;

Shape118.appearance = Appearance119;

let Extrusion121 = browser.currentScene.createNode("Extrusion");
Extrusion121.DEF = "ExampleExtrusion";
Shape118.geometry = Extrusion121;

browser.currentScene.children[31] = Shape118;

