let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
//====================
//Do not copy these ExternProtoDeclare statements, they are only included for preparation of X3dToVrml97.xslt stylesheet mappings for backwards compatibility.
//====================
let ExternProtoDeclare2 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare2.name = "MetadataBoolean";
ExternProtoDeclare2.appinfo = "MetadataBoolean contains a list of booleans in the value field.";
ExternProtoDeclare2.url = new MFString(new java.lang.String["MetadataPrototypes.x3d#MetadataBoolean","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataBoolean","MetadataPrototypes.wrl#MetadataBoolean","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataBoolean"]);
let field3 = browser.currentScene.createNode("field");
field3.name = "name";
field3.accessType = "inputOutput";
field3.appinfo = "default value";
field3.type = "SFString";
ExternProtoDeclare2.field = new MFNode();

ExternProtoDeclare2.field[0] = field3;

let field4 = browser.currentScene.createNode("field");
field4.name = "value";
field4.accessType = "inputOutput";
field4.appinfo = "default value";
field4.type = "MFBool";
ExternProtoDeclare2.field[1] = field4;

let field5 = browser.currentScene.createNode("field");
field5.name = "reference";
field5.accessType = "inputOutput";
field5.appinfo = "default value";
field5.type = "SFString";
ExternProtoDeclare2.field[2] = field5;

let field6 = browser.currentScene.createNode("field");
field6.name = "metadata";
field6.accessType = "inputOutput";
field6.appinfo = "Metadata node only";
field6.type = "SFNode";
ExternProtoDeclare2.field[3] = field6;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ExternProtoDeclare2;

let ExternProtoDeclare7 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare7.name = "MetadataDouble";
ExternProtoDeclare7.appinfo = "MetadataDouble contains a list of double-precision floating-point numbers in the value field.";
ExternProtoDeclare7.url = new MFString(new java.lang.String["MetadataPrototypes.x3d#MetadataDouble","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataDouble","MetadataPrototypes.wrl#MetadataDouble","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataDouble"]);
let field8 = browser.currentScene.createNode("field");
field8.name = "name";
field8.accessType = "inputOutput";
field8.type = "SFString";
ExternProtoDeclare7.field = new MFNode();

ExternProtoDeclare7.field[0] = field8;

let field9 = browser.currentScene.createNode("field");
field9.name = "value";
field9.accessType = "inputOutput";
field9.type = "MFDouble";
ExternProtoDeclare7.field[1] = field9;

let field10 = browser.currentScene.createNode("field");
field10.name = "reference";
field10.accessType = "inputOutput";
field10.type = "SFString";
ExternProtoDeclare7.field[2] = field10;

let field11 = browser.currentScene.createNode("field");
field11.name = "metadata";
field11.accessType = "inputOutput";
field11.type = "SFNode";
ExternProtoDeclare7.field[3] = field11;

browser.currentScene.children[1] = ExternProtoDeclare7;

let ExternProtoDeclare12 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare12.name = "MetadataFloat";
ExternProtoDeclare12.appinfo = "MetadataFloat contains a list of floating-point numbers in the value field.";
ExternProtoDeclare12.url = new MFString(new java.lang.String["MetadataPrototypes.x3d#MetadataFloat","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataFloat","MetadataPrototypes.wrl#MetadataFloat","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataFloat"]);
let field13 = browser.currentScene.createNode("field");
field13.name = "name";
field13.accessType = "inputOutput";
field13.type = "SFString";
ExternProtoDeclare12.field = new MFNode();

ExternProtoDeclare12.field[0] = field13;

let field14 = browser.currentScene.createNode("field");
field14.name = "value";
field14.accessType = "inputOutput";
field14.type = "MFFloat";
ExternProtoDeclare12.field[1] = field14;

let field15 = browser.currentScene.createNode("field");
field15.name = "reference";
field15.accessType = "inputOutput";
field15.type = "SFString";
ExternProtoDeclare12.field[2] = field15;

let field16 = browser.currentScene.createNode("field");
field16.name = "metadata";
field16.accessType = "inputOutput";
field16.type = "SFNode";
ExternProtoDeclare12.field[3] = field16;

browser.currentScene.children[2] = ExternProtoDeclare12;

let ExternProtoDeclare17 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare17.name = "MetadataInteger";
ExternProtoDeclare17.appinfo = "MetadataInteger contains a list of 32-bit integer numbers in the value field.";
ExternProtoDeclare17.url = new MFString(new java.lang.String["MetadataPrototypes.x3d#MetadataInteger","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataInteger","MetadataPrototypes.wrl#MetadataInteger","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataInteger"]);
let field18 = browser.currentScene.createNode("field");
field18.name = "name";
field18.accessType = "inputOutput";
field18.type = "SFString";
ExternProtoDeclare17.field = new MFNode();

ExternProtoDeclare17.field[0] = field18;

let field19 = browser.currentScene.createNode("field");
field19.name = "value";
field19.accessType = "initializeOnly";
field19.type = "MFInt32";
ExternProtoDeclare17.field[1] = field19;

let field20 = browser.currentScene.createNode("field");
field20.name = "set_value";
field20.accessType = "inputOnly";
field20.type = "MFInt32";
ExternProtoDeclare17.field[2] = field20;

let field21 = browser.currentScene.createNode("field");
field21.name = "reference";
field21.accessType = "inputOutput";
field21.type = "SFString";
ExternProtoDeclare17.field[3] = field21;

let field22 = browser.currentScene.createNode("field");
field22.name = "metadata";
field22.accessType = "inputOutput";
field22.type = "SFNode";
ExternProtoDeclare17.field[4] = field22;

browser.currentScene.children[3] = ExternProtoDeclare17;

let ExternProtoDeclare23 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare23.name = "MetadataSet";
ExternProtoDeclare23.appinfo = "MetadataSet contains a list of nodes in the value field.";
ExternProtoDeclare23.url = new MFString(new java.lang.String["MetadataPrototypes.x3d#MetadataSet","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataSet","MetadataPrototypes.wrl#MetadataSet","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataSet"]);
let field24 = browser.currentScene.createNode("field");
field24.name = "name";
field24.accessType = "inputOutput";
field24.type = "SFString";
ExternProtoDeclare23.field = new MFNode();

ExternProtoDeclare23.field[0] = field24;

let field25 = browser.currentScene.createNode("field");
field25.name = "value";
field25.accessType = "inputOutput";
field25.type = "MFNode";
ExternProtoDeclare23.field[1] = field25;

let field26 = browser.currentScene.createNode("field");
field26.name = "reference";
field26.accessType = "inputOutput";
field26.type = "SFString";
ExternProtoDeclare23.field[2] = field26;

let field27 = browser.currentScene.createNode("field");
field27.name = "metadata";
field27.accessType = "inputOutput";
field27.type = "SFNode";
ExternProtoDeclare23.field[3] = field27;

browser.currentScene.children[4] = ExternProtoDeclare23;

let ExternProtoDeclare28 = browser.currentScene.createNode("ExternProtoDeclare");
ExternProtoDeclare28.name = "MetadataString";
ExternProtoDeclare28.appinfo = "MetadataString contains a set of strings in the value field.";
ExternProtoDeclare28.url = new MFString(new java.lang.String["MetadataPrototypes.x3d#MetadataString","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.x3d#MetadataString","MetadataPrototypes.wrl#MetadataString","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataPrototypes.wrl#MetadataString"]);
let field29 = browser.currentScene.createNode("field");
field29.name = "name";
field29.accessType = "inputOutput";
field29.type = "SFString";
ExternProtoDeclare28.field = new MFNode();

ExternProtoDeclare28.field[0] = field29;

let field30 = browser.currentScene.createNode("field");
field30.name = "value";
field30.accessType = "inputOutput";
field30.type = "MFString";
ExternProtoDeclare28.field[1] = field30;

let field31 = browser.currentScene.createNode("field");
field31.name = "reference";
field31.accessType = "inputOutput";
field31.type = "SFString";
ExternProtoDeclare28.field[2] = field31;

let field32 = browser.currentScene.createNode("field");
field32.name = "metadata";
field32.accessType = "inputOutput";
field32.type = "SFNode";
ExternProtoDeclare28.field[3] = field32;

browser.currentScene.children[5] = ExternProtoDeclare28;

//===========================
//Example Metadata node usage
//===========================
let Group33 = browser.currentScene.createNode("Group");
let MetadataBoolean34 = browser.currentScene.createNode("MetadataBoolean");
MetadataBoolean34.name = "sample boolean data";
MetadataBoolean34.DEF = "MetadataBooleanInstance";
MetadataBoolean34.reference = "https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataBoolean";
MetadataBoolean34.value = new MFBool(new boolean[True,False,True]);
Group33.metadata = MetadataBoolean34;

let Transform35 = browser.currentScene.createNode("Transform");
let MetadataDouble36 = browser.currentScene.createNode("MetadataDouble");
MetadataDouble36.name = "sample double data";
MetadataDouble36.DEF = "MetadataDoubleInstance";
MetadataDouble36.reference = "https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataDouble";
MetadataDouble36.value = new MFDouble(new double[1,2,3]);
Transform35.metadata = MetadataDouble36;

Group33.children = new MFNode();

Group33.children[0] = Transform35;

let Transform37 = browser.currentScene.createNode("Transform");
let MetadataFloat38 = browser.currentScene.createNode("MetadataFloat");
MetadataFloat38.name = "sample float data";
MetadataFloat38.reference = "https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataFloat";
MetadataFloat38.value = new MFFloat(new float[1,2,3]);
let MetadataDouble39 = browser.currentScene.createNode("MetadataDouble");
MetadataDouble39.USE = "MetadataDoubleInstance";
MetadataFloat38.metadata = MetadataDouble39;

//metadata child of metadata node (also note nested PROTO here, when translated)
Transform37.metadata = MetadataFloat38;

Group33.children[1] = Transform37;

let Transform40 = browser.currentScene.createNode("Transform");
let MetadataInteger41 = browser.currentScene.createNode("MetadataInteger");
MetadataInteger41.name = "sample integer data";
MetadataInteger41.reference = "https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataInteger";
MetadataInteger41.value = new MFInt32(new int[1,2,3]);
Transform40.metadata = MetadataInteger41;

Group33.children[2] = Transform40;

let Transform42 = browser.currentScene.createNode("Transform");
let MetadataSet43 = browser.currentScene.createNode("MetadataSet");
MetadataSet43.name = "sample data";
MetadataSet43.reference = "https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataSet";
let MetadataString44 = browser.currentScene.createNode("MetadataString");
MetadataString44.name = "containerFieldDefaultTest";
MetadataString44.value = new MFString(new java.lang.String["This initial node is containerField=metadata on the MetadataSet, not part of the containerField=value set"]);
MetadataSet43.value = new MFNode();

MetadataSet43.value[0] = MetadataString44;

//be sure to set containerField='value' for all members of the contained set!
let MetadataBoolean45 = browser.currentScene.createNode("MetadataBoolean");
MetadataBoolean45.name = "MetadataSetValue1";
MetadataBoolean45.value = new MFBool(new boolean[True,False,True]);
MetadataSet43.value[1] = MetadataBoolean45;

let MetadataDouble46 = browser.currentScene.createNode("MetadataDouble");
MetadataDouble46.name = "MetadataSetValue2";
MetadataDouble46.value = new MFDouble(new double[0,1,2]);
MetadataSet43.value[2] = MetadataDouble46;

let MetadataFloat47 = browser.currentScene.createNode("MetadataFloat");
MetadataFloat47.name = "MetadataSetValue3";
MetadataFloat47.value = new MFFloat(new float[3,4,5]);
MetadataSet43.value[3] = MetadataFloat47;

let MetadataInteger48 = browser.currentScene.createNode("MetadataInteger");
MetadataInteger48.name = "MetadataSetValue4";
MetadataInteger48.value = new MFInt32(new int[6,7,8]);
MetadataSet43.value[4] = MetadataInteger48;

let MetadataString49 = browser.currentScene.createNode("MetadataString");
MetadataString49.name = "MetadataSetValue5";
MetadataString49.value = new MFString(new java.lang.String["string1","string2"]);
MetadataSet43.value[5] = MetadataString49;

Transform42.metadata = MetadataSet43;

Group33.children[3] = Transform42;

let Transform50 = browser.currentScene.createNode("Transform");
let MetadataString51 = browser.currentScene.createNode("MetadataString");
MetadataString51.name = "sample string data";
MetadataString51.reference = "https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/core.html#MetadataString";
MetadataString51.value = new MFString(new java.lang.String["one two three","four five six"]);
Transform50.metadata = MetadataString51;

Group33.children[4] = Transform50;

let Group52 = browser.currentScene.createNode("Group");
let WorldInfo53 = browser.currentScene.createNode("WorldInfo");
WorldInfo53.DEF = "TestMetadataChild";
let MetadataString54 = browser.currentScene.createNode("MetadataString");
MetadataString54.name = "Backwards compatibility note";
MetadataString54.value = new MFString(new java.lang.String["Metadata nodes are converted into comments when children [ ] field is not available in parent node"]);
WorldInfo53.metadata = MetadataString54;

Group52.children = new MFNode();

Group52.children[0] = WorldInfo53;

Group33.children[5] = Group52;

browser.currentScene.children[6] = Group33;

//====================
let Anchor55 = browser.currentScene.createNode("Anchor");
Anchor55.DEF = "LinkToExamples";
Anchor55.description = "link to examples";
Anchor55.parameter = new MFString(new java.lang.String["target=_blank"]);
Anchor55.url = new MFString(new java.lang.String["MetadataExamples.html","https://www.web3d.org/x3d/content/examples/Basic/development/MetadataExamplesIndex.html"]);
let Shape56 = browser.currentScene.createNode("Shape");
let Appearance57 = browser.currentScene.createNode("Appearance");
let Material58 = browser.currentScene.createNode("Material");
Material58.diffuseColor = new SFColor(new float[0.8,0.6,0.2]);
Appearance57.material = Material58;

Shape56.appearance = Appearance57;

let Text59 = browser.currentScene.createNode("Text");
Text59.string = new MFString(new java.lang.String["MetadataExamples is a developmental file to define","EXTERNPROTO signatures in VRML 97 syntax","Example usage of Metadata nodes also included.","","Click text to view source"]);
let FontStyle60 = browser.currentScene.createNode("FontStyle");
FontStyle60.justify = new MFString(new java.lang.String["MIDDLE","MIDDLE"]);
FontStyle60.size = 0.5;
Text59.fontStyle = FontStyle60;

Shape56.geometry = Text59;

Anchor55.children = new MFNode();

Anchor55.children[0] = Shape56;

browser.currentScene.children[7] = Anchor55;

