let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Full";
X3D0.version = "4.0";
//x3dVersionComparisonTest for this model: supportsX3dVersion(X3D.VERSION_3_0)=true
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

let MetadataString9 = browser.currentScene.createNode("MetadataString");
MetadataString9.name = "test";
MetadataString9.DEF = "scene.addChildMetadata";
MetadataString9.value = new MFString(new java.lang.String["Top-level root Metadata node beneath Scene needs to be one of '-children' in JSON encoding"]);
browser.currentScene.metadata[5] = MetadataString9;

let LayerSet10 = browser.currentScene.createNode("LayerSet");
LayerSet10.DEF = "scene.addChildLayerSetTest";
browser.currentScene.layerSet[6] = LayerSet10;

let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "LogoGeometryTransform";
Transform11.translation = new SFVec3f(new float[0,1.5,0]);
let Anchor12 = browser.currentScene.createNode("Anchor");
Anchor12.DEF = "siteAnchor";
Anchor12.description = "select for X3D Java SAI Library (X3DJSAIL) description";
Anchor12.url = new MFString(new java.lang.String["../X3DJSAIL.html","https://www.web3d.org/specifications/java/X3DJSAIL.html"]);
let Shape13 = browser.currentScene.createNode("Shape");
Shape13.DEF = "BoxShape";
let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.DEF = "GreenMaterial";
Material15.diffuseColor = new SFColor(new float[0,1,1]);
Material15.emissiveColor = new SFColor(new float[0.8,0,0]);
Material15.transparency = 0.1;
Appearance14.material = Material15;

let ImageTexture16 = browser.currentScene.createNode("ImageTexture");
ImageTexture16.url = new MFString(new java.lang.String["images/X3dJavaSceneAccessInterfaceSaiLibrary.png","https://www.web3d.org/specifications/java/examples/images/X3dJavaSceneAccessInterfaceSaiLibrary.png"]);
Appearance14.texture = ImageTexture16;

Shape13.appearance = Appearance14;

let Box17 = browser.currentScene.createNode("Box");
Box17.DEF = "test-NMTOKEN_regex.0123456789";
Box17.CssClass = "untextured";
Shape13.geometry = Box17;

Anchor12.children = new MFNode();

Anchor12.children[0] = Shape13;

Transform11.children = new MFNode();

Transform11.children[0] = Anchor12;

browser.currentScene.children[7] = Transform11;

let Shape18 = browser.currentScene.createNode("Shape");
Shape18.DEF = "LineShape";
let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.emissiveColor = new SFColor(new float[0.6,0.19607843,0.8]);
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

let IndexedLineSet21 = browser.currentScene.createNode("IndexedLineSet");
IndexedLineSet21.coordIndex = new MFInt32(new int[0,1,2,3,4,0]);
//Coordinate 3-tuple point count: 6
let Coordinate22 = browser.currentScene.createNode("Coordinate");
Coordinate22.point = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
IndexedLineSet21.coord = Coordinate22;

Shape18.geometry = IndexedLineSet21;

browser.currentScene.children[8] = Shape18;

let PositionInterpolator23 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator23.DEF = "BoxPathAnimator";
PositionInterpolator23.key = new MFFloat(new float[0,0.125,0.375,0.625,0.875,1]);
PositionInterpolator23.keyValue = new MFVec3f(new float[0,1.5,0,2,1.5,0,2,1.5,-2,-2,1.5,-2,-2,1.5,0,0,1.5,0]);
browser.currentScene.children[9] = PositionInterpolator23;

let TimeSensor24 = browser.currentScene.createNode("TimeSensor");
TimeSensor24.DEF = "OrbitClock";
TimeSensor24.cycleInterval = 8;
TimeSensor24.loop = True;
browser.currentScene.children[10] = TimeSensor24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromField = "fraction_changed";
ROUTE25.fromNode = "OrbitClock";
ROUTE25.toField = "set_fraction";
ROUTE25.toNode = "BoxPathAnimator";
browser.currentScene.children[11] = ROUTE25;

let ROUTE26 = browser.currentScene.createNode("ROUTE");
ROUTE26.fromField = "value_changed";
ROUTE26.fromNode = "BoxPathAnimator";
ROUTE26.toField = "set_translation";
ROUTE26.toNode = "LogoGeometryTransform";
browser.currentScene.children[12] = ROUTE26;

let Transform27 = browser.currentScene.createNode("Transform");
Transform27.DEF = "TextTransform";
Transform27.translation = new SFVec3f(new float[0,-1.5,0]);
let Shape28 = browser.currentScene.createNode("Shape");
let Appearance29 = browser.currentScene.createNode("Appearance");
let Material30 = browser.currentScene.createNode("Material");
Material30.USE = "GreenMaterial";
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

let Text31 = browser.currentScene.createNode("Text");
Text31.string = new MFString(new java.lang.String["X3D Java","SAI Library","X3DJSAIL"]);
//Comment example A, plain quotation marks: He said, \"Immel did it!\"
//Comment example B, XML character entities: He said, &quot;Immel did it!&quot;
let MetadataSet32 = browser.currentScene.createNode("MetadataSet");
MetadataSet32.name = "EscapedQuotationMarksMetadataSet";
let MetadataString33 = browser.currentScene.createNode("MetadataString");
MetadataString33.name = "quotesTestC";
MetadataString33.value = new MFString(new java.lang.String["MFString example C, backslash-escaped quotes: He said, \"Immel did it!\""]);
MetadataSet32.value = new MFNode();

MetadataSet32.value[0] = MetadataString33;

let MetadataString34 = browser.currentScene.createNode("MetadataString");
MetadataString34.name = "extraChildTest";
MetadataString34.value = new MFString(new java.lang.String["checks MetadataSet addValue() method"]);
MetadataSet32.value[1] = MetadataString34;

Text31.metadata = MetadataSet32;

let FontStyle35 = browser.currentScene.createNode("FontStyle");
FontStyle35.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
Text31.fontStyle = FontStyle35;

Shape28.geometry = Text31;

Transform27.children = new MFNode();

Transform27.children[0] = Shape28;

let Collision36 = browser.currentScene.createNode("Collision");
//test containerField='proxy'
let Shape37 = browser.currentScene.createNode("Shape");
Shape37.DEF = "ProxyShape";
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\"'
//alternative XML encoding: Text string='\"One, Two, Comment\" \"\" \"He said, \\&quot;Immel did it!\\&quot;\" \"\"'
//alternative Java source: .setString(new String [] {\"One, Two, Comment\", \"\", \"He said, \\\"\"Immel did it!\\\"\"\"})
//reference: https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/StringArrayEncodingExamplesIndex.html
let Text38 = browser.currentScene.createNode("Text");
Text38.string = new MFString(new java.lang.String["One, Two, Text","","He said, \"Immel did it!\" \"\""]);
Shape37.geometry = Text38;

Collision36.proxy = Shape37;

Transform27.children[1] = Collision36;

//It's a beautiful world
//... for you!
//https://en.wikipedia.org/wiki/Beautiful_World_(Devo_song)
browser.currentScene.children[13] = Transform27;

//repeatedly spin 180 degrees as a readable special effect
let OrientationInterpolator39 = browser.currentScene.createNode("OrientationInterpolator");
OrientationInterpolator39.DEF = "SpinInterpolator";
OrientationInterpolator39.key = new MFFloat(new float[0,0.5,1]);
OrientationInterpolator39.keyValue = new MFRotation(new float[0,1,0,4.712389,0,1,0,0,0,1,0,1.5707964]);
browser.currentScene.children[14] = OrientationInterpolator39;

let TimeSensor40 = browser.currentScene.createNode("TimeSensor");
TimeSensor40.DEF = "SpinClock";
TimeSensor40.cycleInterval = 5;
TimeSensor40.loop = True;
browser.currentScene.children[15] = TimeSensor40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromField = "fraction_changed";
ROUTE41.fromNode = "SpinClock";
ROUTE41.toField = "set_fraction";
ROUTE41.toNode = "SpinInterpolator";
browser.currentScene.children[16] = ROUTE41;

let ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromField = "value_changed";
ROUTE42.fromNode = "SpinInterpolator";
ROUTE42.toField = "rotation";
ROUTE42.toNode = "TextTransform";
browser.currentScene.children[17] = ROUTE42;

let Group43 = browser.currentScene.createNode("Group");
Group43.DEF = "BackgroundGroup";
let Background44 = browser.currentScene.createNode("Background");
Background44.DEF = "GradualBackground";
Group43.children = new MFNode();

Group43.children[0] = Background44;

let Script45 = browser.currentScene.createNode("Script");
Script45.DEF = "colorTypeConversionScript";
let field46 = browser.currentScene.createNode("field");
field46.name = "colorInput";
field46.accessType = "inputOnly";
field46.type = "SFColor";
Script45.field = new MFNode();

Script45.field[0] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "colorsOutput";
field47.accessType = "outputOnly";
field47.type = "MFColor";
Script45.field[1] = field47;


Script45.setSourceCode(`ecmascript:\n"+
"\n"+
"function colorInput (eventValue) // Example source code\n"+
"{\n"+
"   colorsOutput = new MFColor(eventValue); // assigning value sends output event\n"+
"// Browser.print('colorInput=' + eventValue + ', colorsOutput=' + colorsOutput + '\\n');\n"+
"}`)
Group43.children[1] = Script45;

let ColorInterpolator48 = browser.currentScene.createNode("ColorInterpolator");
ColorInterpolator48.DEF = "ColorAnimator";
ColorInterpolator48.key = new MFFloat(new float[0,0.5,1]);
ColorInterpolator48.keyValue = new MFColor(new float[0.9411765,1,1,0.29411766,0,0.50980395,0.9411765,1,1]);
//AZURE to INDIGO and back again
Group43.children[2] = ColorInterpolator48;

let TimeSensor49 = browser.currentScene.createNode("TimeSensor");
TimeSensor49.DEF = "ColorClock";
TimeSensor49.cycleInterval = 60;
TimeSensor49.loop = True;
Group43.children[3] = TimeSensor49;

let ROUTE50 = browser.currentScene.createNode("ROUTE");
ROUTE50.fromField = "colorsOutput";
ROUTE50.fromNode = "colorTypeConversionScript";
ROUTE50.toField = "skyColor";
ROUTE50.toNode = "GradualBackground";
Group43.children[4] = ROUTE50;

let ROUTE51 = browser.currentScene.createNode("ROUTE");
ROUTE51.fromField = "value_changed";
ROUTE51.fromNode = "ColorAnimator";
ROUTE51.toField = "colorInput";
ROUTE51.toNode = "colorTypeConversionScript";
Group43.children[5] = ROUTE51;

let ROUTE52 = browser.currentScene.createNode("ROUTE");
ROUTE52.fromField = "fraction_changed";
ROUTE52.fromNode = "ColorClock";
ROUTE52.toField = "set_fraction";
ROUTE52.toNode = "ColorAnimator";
Group43.children[6] = ROUTE52;

browser.currentScene.children[18] = Group43;

let ProtoDeclare53 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare53.name = "ArtDeco01Material";
ProtoDeclare53.appinfo = "tooltip: ArtDeco01Material prototype is a Material node";
let ProtoInterface54 = browser.currentScene.createNode("ProtoInterface");
let field55 = browser.currentScene.createNode("field");
field55.name = "description";
field55.accessType = "inputOutput";
field55.appinfo = "tooltip for descriptionField";
field55.type = "SFString";
field55.value = "ArtDeco01Material prototype is a Material node";
ProtoInterface54.field = new MFNode();

ProtoInterface54.field[0] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "enabled";
field56.accessType = "inputOutput";
field56.type = "SFBool";
field56.value = "true";
ProtoInterface54.field[1] = field56;

ProtoDeclare53.protoInterface = ProtoInterface54;

let ProtoBody57 = browser.currentScene.createNode("ProtoBody");
//Initial node of ProtoBody determines prototype node type
let Material58 = browser.currentScene.createNode("Material");
Material58.ambientIntensity = 0.25;
Material58.diffuseColor = new SFColor(new float[0.282435,0.085159,0.134462]);
Material58.shininess = 0.127273;
Material58.specularColor = new SFColor(new float[0.276305,0.11431,0.139857]);
ProtoBody57.children = new MFNode();

ProtoBody57.children[0] = Material58;

//[HelloWorldProgram diagnostic] should be connected to scene graph: artDeco01ProtoDeclare.getNodeType()=\"Material\"
//presence of follow-on TouchSensor shows that additional nodes are allowed in ProtoBody after initial node, regardless of node types
let TouchSensor59 = browser.currentScene.createNode("TouchSensor");
TouchSensor59.description = "within ProtoBody";
let IS60 = browser.currentScene.createNode("IS");
let connect61 = browser.currentScene.createNode("connect");
connect61.nodeField = "description";
connect61.protoField = "description";
IS60.connect = new MFNode();

IS60.connect[0] = connect61;

let connect62 = browser.currentScene.createNode("connect");
connect62.nodeField = "enabled";
connect62.protoField = "enabled";
IS60.connect[1] = connect62;

TouchSensor59.iS = IS60;

ProtoBody57.children[1] = TouchSensor59;

ProtoDeclare53.protoBody = ProtoBody57;

browser.currentScene.children[19] = ProtoDeclare53;

let ExternProtoDeclare63 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare63.name = "ArtDeco02Material";
ExternProtoDeclare63.appinfo = "this is a different Material node";
ExternProtoDeclare63.url = new MFString(new java.lang.String["http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3d#ArtDeco02Material","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ArtDecoPrototypesExcerpt.x3dv#ArtDeco02Material"]);
//[HelloWorldProgram diagnostic] artDeco02ExternProtoDeclare.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
let field64 = browser.currentScene.createNode("field");
field64.name = "description";
field64.accessType = "inputOutput";
field64.appinfo = "tooltip for descriptionField";
field64.type = "SFString";
ExternProtoDeclare63.field = new MFNode();

ExternProtoDeclare63.field[0] = field64;

browser.currentScene.children[20] = ExternProtoDeclare63;

//Tested ArtDeco01ProtoInstance, ArtDeco02ProtoInstance for improper node type when ProtoInstance is added in wrong place
let Shape65 = browser.currentScene.createNode("Shape");
Shape65.DEF = "TestShape1";
let Appearance66 = browser.currentScene.createNode("Appearance");
Appearance66.DEF = "TestAppearance1";
//ArtDeco01Material prototype goes here... TODO ensure setContainerField is handled in exported Java
let ProtoInstance67 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance67.name = "ArtDeco01Material";
//[HelloWorldProgram diagnostic] ArtDeco01ProtoInstance.getNodeType()=\"Material\"
let fieldValue68 = browser.currentScene.createNode("fieldValue");
fieldValue68.name = "description";
fieldValue68.value = "ArtDeco01Material can substitute for a Material node";
ProtoInstance67.fieldValue = new MFNode();

ProtoInstance67.fieldValue[0] = fieldValue68;

Appearance66.shaders = new MFNode();

Appearance66.shaders[0] = ProtoInstance67;

Shape65.appearance = Appearance66;

let Sphere69 = browser.currentScene.createNode("Sphere");
Sphere69.radius = 0.001;
Shape65.geometry = Sphere69;

browser.currentScene.children[21] = Shape65;

let Shape70 = browser.currentScene.createNode("Shape");
Shape70.DEF = "TestShape2";
let Appearance71 = browser.currentScene.createNode("Appearance");
Appearance71.DEF = "TestAppearance2";
//ArtDeco02Material prototype goes here... TODO ensure setContainerField is handled in exported Java
let ProtoInstance72 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance72.name = "ArtDeco02Material";
ProtoInstance72.DEF = "ArtDeco02MaterialDEF";
//[HelloWorldProgram diagnostic] ArtDeco02ProtoInstance.getNodeType()=\"ERROR_UNKNOWN_EXTERNPROTODECLARE_NODE_TYPE: ExternProtoDeclare name='ArtDeco02Material' type cannot be remotely accessed at run time. TODO X3DJSAIL needs to add further capability that retrieves the ExternProtoDeclare file.\"
let fieldValue73 = browser.currentScene.createNode("fieldValue");
fieldValue73.name = "description";
fieldValue73.value = "ArtDeco02Material can substitute for another Material node";
ProtoInstance72.fieldValue = new MFNode();

ProtoInstance72.fieldValue[0] = fieldValue73;

Appearance71.shaders = new MFNode();

Appearance71.shaders[0] = ProtoInstance72;

Shape70.appearance = Appearance71;

let Cone74 = browser.currentScene.createNode("Cone");
Cone74.bottomRadius = 0.001;
Cone74.height = 0.001;
Shape70.geometry = Cone74;

browser.currentScene.children[22] = Shape70;

let Shape75 = browser.currentScene.createNode("Shape");
Shape75.DEF = "TestShape3";
let Appearance76 = browser.currentScene.createNode("Appearance");
Appearance76.DEF = "TestAppearance3";
//ArtDeco02Material ProtoInstance USE goes here. Note that name field is NOT defined as part of ProtoInstance USE.
let ProtoInstance77 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance77.USE = "ArtDeco02MaterialDEF";
Appearance76.shaders = new MFNode();

Appearance76.shaders[0] = ProtoInstance77;

Shape75.appearance = Appearance76;

let Cylinder78 = browser.currentScene.createNode("Cylinder");
Cylinder78.height = 0.001;
Cylinder78.radius = 0.001;
Shape75.geometry = Cylinder78;

browser.currentScene.children[23] = Shape75;

let Inline79 = browser.currentScene.createNode("Inline");
Inline79.DEF = "inlineScene";
Inline79.url = new MFString(new java.lang.String["someOtherScene.x3d","https://www.web3d.org/specifications/java/examples/someOtherScene.x3d"]);
browser.currentScene.children[24] = Inline79;

let IMPORT80 = browser.currentScene.createNode("IMPORT");
IMPORT80.AS = "WorldInfoDEF2";
IMPORT80.importedDEF = "WorldInfoDEF";
IMPORT80.inlineDEF = "inlineScene";
browser.currentScene.children[25] = IMPORT80;

let EXPORT81 = browser.currentScene.createNode("EXPORT");
EXPORT81.AS = "WorldInfoDEF3";
EXPORT81.localDEF = "WorldInfoDEF";
browser.currentScene.children[26] = EXPORT81;

let ProtoDeclare82 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare82.name = "MaterialModulator";
ProtoDeclare82.appinfo = "mimic a Material node and modulate fields as an animation effect";
ProtoDeclare82.documentation = "http://x3dgraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/MaterialModulatorIndex.html";
let ProtoInterface83 = browser.currentScene.createNode("ProtoInterface");
let field84 = browser.currentScene.createNode("field");
field84.name = "enabled";
field84.accessType = "inputOutput";
field84.type = "SFBool";
field84.value = "true";
ProtoInterface83.field = new MFNode();

ProtoInterface83.field[0] = field84;

let field85 = browser.currentScene.createNode("field");
field85.name = "diffuseColor";
field85.accessType = "inputOutput";
field85.type = "SFColor";
field85.value = "0 0 0";
ProtoInterface83.field[1] = field85;

let field86 = browser.currentScene.createNode("field");
field86.name = "emissiveColor";
field86.accessType = "inputOutput";
field86.type = "SFColor";
field86.value = "0.05 0.05 0.5";
ProtoInterface83.field[2] = field86;

let field87 = browser.currentScene.createNode("field");
field87.name = "specularColor";
field87.accessType = "inputOutput";
field87.type = "SFColor";
field87.value = "0 0 0";
ProtoInterface83.field[3] = field87;

let field88 = browser.currentScene.createNode("field");
field88.name = "transparency";
field88.accessType = "inputOutput";
field88.type = "SFFloat";
field88.value = "0";
ProtoInterface83.field[4] = field88;

let field89 = browser.currentScene.createNode("field");
field89.name = "shininess";
field89.accessType = "inputOutput";
field89.type = "SFFloat";
field89.value = "0";
ProtoInterface83.field[5] = field89;

let field90 = browser.currentScene.createNode("field");
field90.name = "ambientIntensity";
field90.accessType = "inputOutput";
field90.type = "SFFloat";
field90.value = "0";
ProtoInterface83.field[6] = field90;

ProtoDeclare82.protoInterface = ProtoInterface83;

let ProtoBody91 = browser.currentScene.createNode("ProtoBody");
let Material92 = browser.currentScene.createNode("Material");
Material92.DEF = "MaterialNode";
let IS93 = browser.currentScene.createNode("IS");
let connect94 = browser.currentScene.createNode("connect");
connect94.nodeField = "diffuseColor";
connect94.protoField = "diffuseColor";
IS93.connect = new MFNode();

IS93.connect[0] = connect94;

let connect95 = browser.currentScene.createNode("connect");
connect95.nodeField = "emissiveColor";
connect95.protoField = "emissiveColor";
IS93.connect[1] = connect95;

let connect96 = browser.currentScene.createNode("connect");
connect96.nodeField = "specularColor";
connect96.protoField = "specularColor";
IS93.connect[2] = connect96;

let connect97 = browser.currentScene.createNode("connect");
connect97.nodeField = "transparency";
connect97.protoField = "transparency";
IS93.connect[3] = connect97;

let connect98 = browser.currentScene.createNode("connect");
connect98.nodeField = "shininess";
connect98.protoField = "shininess";
IS93.connect[4] = connect98;

let connect99 = browser.currentScene.createNode("connect");
connect99.nodeField = "ambientIntensity";
connect99.protoField = "ambientIntensity";
IS93.connect[5] = connect99;

Material92.iS = IS93;

ProtoBody91.children = new MFNode();

ProtoBody91.children[0] = Material92;

//Only first node (the node type) is renderable, others are along for the ride
let Script100 = browser.currentScene.createNode("Script");
Script100.DEF = "MaterialModulatorScript";
let field101 = browser.currentScene.createNode("field");
field101.name = "enabled";
field101.accessType = "inputOutput";
field101.type = "SFBool";
Script100.field = new MFNode();

Script100.field[0] = field101;

let field102 = browser.currentScene.createNode("field");
field102.name = "diffuseColor";
field102.accessType = "inputOutput";
field102.type = "SFColor";
Script100.field[1] = field102;

let field103 = browser.currentScene.createNode("field");
field103.name = "newColor";
field103.accessType = "outputOnly";
field103.type = "SFColor";
Script100.field[2] = field103;

let field104 = browser.currentScene.createNode("field");
field104.name = "clockTrigger";
field104.accessType = "inputOnly";
field104.type = "SFTime";
Script100.field[3] = field104;

let IS105 = browser.currentScene.createNode("IS");
let connect106 = browser.currentScene.createNode("connect");
connect106.nodeField = "enabled";
connect106.protoField = "enabled";
IS105.connect = new MFNode();

IS105.connect[0] = connect106;

let connect107 = browser.currentScene.createNode("connect");
connect107.nodeField = "diffuseColor";
connect107.protoField = "diffuseColor";
IS105.connect[1] = connect107;

Script100.iS = IS105;


Script100.setSourceCode(`ecmascript:\n"+
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
ProtoBody91.children[1] = Script100;

ProtoDeclare82.protoBody = ProtoBody91;

browser.currentScene.children[27] = ProtoDeclare82;

//Test success: declarative statement createDeclarativeShapeTests()
let Group108 = browser.currentScene.createNode("Group");
Group108.DEF = "DeclarativeGroupExample";
let Shape109 = browser.currentScene.createNode("Shape");
let MetadataString110 = browser.currentScene.createNode("MetadataString");
MetadataString110.name = "findThisNameValue";
MetadataString110.DEF = "FindableMetadataStringTest";
MetadataString110.value = new MFString(new java.lang.String["test case"]);
Shape109.metadata = MetadataString110;

let Appearance111 = browser.currentScene.createNode("Appearance");
Appearance111.DEF = "DeclarativeAppearanceExample";
//DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance
let ProtoInstance112 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance112.name = "MaterialModulator";
ProtoInstance112.DEF = "MyMaterialModulator";
Appearance111.shaders = new MFNode();

Appearance111.shaders[0] = ProtoInstance112;

Shape109.appearance = Appearance111;

let Cone113 = browser.currentScene.createNode("Cone");
Cone113.bottom = False;
Cone113.bottomRadius = 0.05;
Cone113.height = 0.1;
Shape109.geometry = Cone113;

Group108.children = new MFNode();

Group108.children[0] = Shape109;

//Test success: declarativeGroup.addChild() singleton pipeline method
browser.currentScene.children[28] = Group108;

//Test success: declarative statement addChild()
//Test success: x3dModel.findNodeByDEF(DeclarativeAppearanceExample) = <Appearance DEF='DeclarativeAppearanceExample'/> i.e. <Appearance DEF='DeclarativeAppearanceExample'> <!- - DeclarativeMaterialExample gets overridden by subsequently added MaterialModulator ProtoInstance - -> <ProtoInstance DEF='MyMaterialModulator' name='MaterialModulator' containerField='material'/> </Appearance>
//Test success: x3dModel.findElementByNameValue(findThisNameValue) = <MetadataString DEF='FindableMetadataStringTest' name='findThisNameValue' value='\"test case\"'/>
//Test success: x3dModel.findElementByNameValue(\"ArtDeco01Material\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoDeclare\") found
//Test success: x3dModel.findElementByNameValue(\"MaterialModulator\", \"ProtoInstance\") found
let Group114 = browser.currentScene.createNode("Group");
Group114.DEF = "TestFieldObjectsGroup";
//testFieldObjects() results
//SFBool default=true, true=true, false=false, negate()=true
//MFBool default=, initial=true false true, negate()=false true false
//SFFloat default=0.0, initial=1.0, setValue(2)=2.0, setValue(3.0f)=3.0, setValue(4.0)=4.0
//MFFloat default=, initial=1 2 3, append(5)=1 2 3 5, inserts(3,4)(0,0)=0 1 2 3 4 5, append(6)=0 1 2 3 4 5 6, size()=7
//... get1Value[3]=3.0, remove[1]=0 2 3 4 5 6, set1Value(0,10)=10 2 3 4 5 6, multiply(2)=20 4 6 8 10 12, clear=
//SFVec3f default=0 0 0, initial=1 2 3, setValue=4 5 6, multiply(2)=8 10 12, normalize()=0.45584232 0.5698029 0.68376344, regex matches()=true
//regex test SFVec3f().matches(\"1 2 3\")=true, regex test SFVec3f().matches(\"1 2 3 4\")=false, regex test (SFRotation.matches(\"0 0 0 0\")=true, failure detecting illegal (zero axis) rotation value
browser.currentScene.children[29] = Group114;

let Sound115 = browser.currentScene.createNode("Sound");
Sound115.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let AudioClip116 = browser.currentScene.createNode("AudioClip");
AudioClip116.description = "chimes";
AudioClip116.url = new MFString(new java.lang.String["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/default.x3d
Sound115.source = AudioClip116;

browser.currentScene.children[30] = Sound115;

let Sound117 = browser.currentScene.createNode("Sound");
Sound117.location = new SFVec3f(new float[0,1.6,0]);
//set sound-ellipsoid location height at 1.6m to match typical avatar height
let MovieTexture118 = browser.currentScene.createNode("MovieTexture");
MovieTexture118.description = "mpgsys.mpg from ConformanceNist suite";
MovieTexture118.url = new MFString(new java.lang.String["mpgsys.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpgsys.mpg"]);
//Scene example fragment from https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/mpeg1-systems.x3d
//Expected containerField='source', allowed containerField values=\"texture\" \"source\" \"back\" \"bottom\" \"front\" \"left\" \"right\" \"top\" \"backTexture\" \"bottomTexture\" \"frontTexture\" \"leftTexture\" \"rightTexture\" \"topTexture\" \"children\"
Sound117.source = MovieTexture118;

browser.currentScene.children[31] = Sound117;

//Test success: Anchor.isNode()=true, siteAnchor.isNode()=true
//Test success: Anchor.isStatement()=false, siteAnchor.isStatement()=false
//Test success: ROUTE.isNode()=false, orbitPositionROUTE.isNode()=false
//Test success: ROUTE.isStatement()=true, orbitPositionROUTE.isStatement()=true
//Test success: CommentsBlock.isNode()=false, testComments.isNode()=false
//Test failure: CommentsBlock.isStatement()=true, testComments.isStatement()=true
let Shape119 = browser.currentScene.createNode("Shape");
Shape119.DEF = "ExtrusionShape";
//ExampleExtrusion isCrossSectionClosed()=true, crossSection='[1.0, 1.0, 1.0, -1.0, -1.0, -1.0, -1.0, 1.0, 1.0, 1.0]'
//ExampleExtrusion isSpineClosed()=false, spine='[0.0, 0.0, 0.0, 0.0, 1.0, 0.0]'
let Appearance120 = browser.currentScene.createNode("Appearance");
Appearance120.DEF = "TransparentAppearance";
let Material121 = browser.currentScene.createNode("Material");
Material121.transparency = 1;
Appearance120.material = Material121;

Shape119.appearance = Appearance120;

let Extrusion122 = browser.currentScene.createNode("Extrusion");
Extrusion122.DEF = "ExampleExtrusion";
Shape119.geometry = Extrusion122;

browser.currentScene.children[32] = Shape119;

let Group123 = browser.currentScene.createNode("Group");
//Test MFNode children array as an ordered list consisting of comments, statements, ProtoInstance and nodes
let ProtoDeclare124 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="NewWorldInfo" ><ProtoInterface><field name="description" accessType="initializeOnly" type="SFString"></field>
</ProtoInterface>
<ProtoBody><WorldInfo></WorldInfo>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare124.name = "NewWorldInfo";
let ProtoInterface125 = browser.currentScene.createNode("ProtoInterface");
let field126 = browser.currentScene.createNode("field");
field126.name = "description";
field126.accessType = "initializeOnly";
field126.type = "SFString";
ProtoInterface125.field = new MFNode();

ProtoInterface125.field[0] = field126;

ProtoDeclare124.protoInterface = ProtoInterface125;

let ProtoBody127 = browser.currentScene.createNode("ProtoBody");
let WorldInfo128 = browser.currentScene.createNode("WorldInfo");
ProtoBody127.children = new MFNode();

ProtoBody127.children[0] = WorldInfo128;

ProtoDeclare124.protoBody = ProtoBody127;

Group123.children = new MFNode();

Group123.children[0] = ProtoDeclare124;

let ProtoInstance129 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance129.name = "NewWorldInfo";
ProtoInstance129.DEF = "Proto1";
let fieldValue130 = browser.currentScene.createNode("fieldValue");
fieldValue130.name = "description";
fieldValue130.value = "testing 1 2 3";
ProtoInstance129.fieldValue = new MFNode();

ProtoInstance129.fieldValue[0] = fieldValue130;

Group123.children[1] = ProtoInstance129;

let Group131 = browser.currentScene.createNode("Group");
Group131.DEF = "Node2";
//intentionally empty
Group123.children[2] = Group131;

let ProtoInstance132 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance132.name = "NewWorldInfo";
ProtoInstance132.DEF = "Proto3";
Group123.children[3] = ProtoInstance132;

let Transform133 = browser.currentScene.createNode("Transform");
Transform133.DEF = "Node4";
//intentionally empty
Group123.children[4] = Transform133;

//Test satisfactorily creates MFNode children array as an ordered list with mixed content
browser.currentScene.children[33] = Group123;

let ProtoDeclare134 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ShaderProto" ><ProtoBody><ProgramShader></ProgramShader>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare134.name = "ShaderProto";
let ProtoBody135 = browser.currentScene.createNode("ProtoBody");
let ProgramShader136 = browser.currentScene.createNode("ProgramShader");
ProtoBody135.children = new MFNode();

ProtoBody135.children[0] = ProgramShader136;

ProtoDeclare134.protoBody = ProtoBody135;

browser.currentScene.children[34] = ProtoDeclare134;

let Shape137 = browser.currentScene.createNode("Shape");
let Appearance138 = browser.currentScene.createNode("Appearance");
//Test MFNode shaders array as an ordered list consisting of comments, ProtoInstance and nodes
//Test satisfactorily creates MFNode shaders array as an ordered list with mixed content
let ProgramShader139 = browser.currentScene.createNode("ProgramShader");
ProgramShader139.DEF = "TestShader1";
let ShaderProgram140 = browser.currentScene.createNode("ShaderProgram");
ShaderProgram140.DEF = "TestShader2";
ShaderProgram140.type = "VERTEX";
ProgramShader139.programs = new MFNode();

ProgramShader139.programs[0] = ShaderProgram140;

Appearance138.shaders = new MFNode();

Appearance138.shaders[0] = ProgramShader139;

let ProtoInstance141 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance141.name = "ShaderProto";
ProtoInstance141.DEF = "TestShader3";
Appearance138.shaders[1] = ProtoInstance141;

let ComposedShader142 = browser.currentScene.createNode("ComposedShader");
ComposedShader142.DEF = "TestShader4";
let ShaderPart143 = browser.currentScene.createNode("ShaderPart");
ShaderPart143.DEF = "TestShader5";
ShaderPart143.type = "VERTEX";
ComposedShader142.parts = new MFNode();

ComposedShader142.parts[0] = ShaderPart143;

Appearance138.shaders[2] = ComposedShader142;

Shape137.appearance = Appearance138;

browser.currentScene.children[35] = Shape137;

let Transform144 = browser.currentScene.createNode("Transform");
Transform144.DEF = "SpecialtyNodes";
let CADLayer145 = browser.currentScene.createNode("CADLayer");
let CADAssembly146 = browser.currentScene.createNode("CADAssembly");
let CADPart147 = browser.currentScene.createNode("CADPart");
let CADFace148 = browser.currentScene.createNode("CADFace");
CADPart147.children = new MFNode();

CADPart147.children[0] = CADFace148;

CADAssembly146.children = new MFNode();

CADAssembly146.children[0] = CADPart147;

CADLayer145.children = new MFNode();

CADLayer145.children[0] = CADAssembly146;

Transform144.children = new MFNode();

Transform144.children[0] = CADLayer145;

let EspduTransform149 = browser.currentScene.createNode("EspduTransform");
Transform144.children[1] = EspduTransform149;

let ReceiverPdu150 = browser.currentScene.createNode("ReceiverPdu");
Transform144.children[2] = ReceiverPdu150;

let SignalPdu151 = browser.currentScene.createNode("SignalPdu");
Transform144.children[3] = SignalPdu151;

let TransmitterPdu152 = browser.currentScene.createNode("TransmitterPdu");
Transform144.children[4] = TransmitterPdu152;

let DISEntityManager153 = browser.currentScene.createNode("DISEntityManager");
let DISEntityTypeMapping154 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityManager153.children = new MFNode();

DISEntityManager153.children[0] = DISEntityTypeMapping154;

Transform144.children[5] = DISEntityManager153;

browser.currentScene.children[36] = Transform144;

let EspduTransform155 = browser.currentScene.createNode("EspduTransform");
let WorldInfo156 = browser.currentScene.createNode("WorldInfo");
EspduTransform155.children = new MFNode();

EspduTransform155.children[0] = WorldInfo156;

browser.currentScene.children[37] = EspduTransform155;

let ReceiverPdu157 = browser.currentScene.createNode("ReceiverPdu");
browser.currentScene.children[38] = ReceiverPdu157;

let SignalPdu158 = browser.currentScene.createNode("SignalPdu");
browser.currentScene.children[39] = SignalPdu158;

let TransmitterPdu159 = browser.currentScene.createNode("TransmitterPdu");
browser.currentScene.children[40] = TransmitterPdu159;

let DISEntityManager160 = browser.currentScene.createNode("DISEntityManager");
let DISEntityTypeMapping161 = browser.currentScene.createNode("DISEntityTypeMapping");
DISEntityManager160.children = new MFNode();

DISEntityManager160.children[0] = DISEntityTypeMapping161;

browser.currentScene.children[41] = DISEntityManager160;

let LoadSensor162 = browser.currentScene.createNode("LoadSensor");
//Contained nodes typically must be USE references for nodes previously DEFined in the scene
//The following nodes are test cases for all X3DUrlObject nodes
let Anchor163 = browser.currentScene.createNode("Anchor");
Anchor163.USE = "siteAnchor";
LoadSensor162.children = new MFNode();

LoadSensor162.children[0] = Anchor163;

let Inline164 = browser.currentScene.createNode("Inline");
Inline164.USE = "inlineScene";
LoadSensor162.children[1] = Inline164;

let DISEntityTypeMapping165 = browser.currentScene.createNode("DISEntityTypeMapping");
LoadSensor162.children[2] = DISEntityTypeMapping165;

let GeoMetadata166 = browser.currentScene.createNode("GeoMetadata");
LoadSensor162.children[3] = GeoMetadata166;

let AudioClip167 = browser.currentScene.createNode("AudioClip");
LoadSensor162.children[4] = AudioClip167;

let ImageCubeMapTexture168 = browser.currentScene.createNode("ImageCubeMapTexture");
LoadSensor162.children[5] = ImageCubeMapTexture168;

let ImageTexture3D169 = browser.currentScene.createNode("ImageTexture3D");
LoadSensor162.children[6] = ImageTexture3D169;

let ImageTexture170 = browser.currentScene.createNode("ImageTexture");
LoadSensor162.children[7] = ImageTexture170;

let MovieTexture171 = browser.currentScene.createNode("MovieTexture");
LoadSensor162.children[8] = MovieTexture171;

let Script172 = browser.currentScene.createNode("Script");
LoadSensor162.children[9] = Script172;

let PackagedShader173 = browser.currentScene.createNode("PackagedShader");
LoadSensor162.children[10] = PackagedShader173;

let ShaderPart174 = browser.currentScene.createNode("ShaderPart");
ShaderPart174.type = "VERTEX";
LoadSensor162.children[11] = ShaderPart174;

let ShaderProgram175 = browser.currentScene.createNode("ShaderProgram");
ShaderProgram175.type = "VERTEX";
LoadSensor162.children[12] = ShaderProgram175;

browser.currentScene.children[42] = LoadSensor162;

