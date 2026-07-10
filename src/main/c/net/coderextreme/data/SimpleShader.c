#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
//meta content='under development' name='warning'/
component component2 = createNode("component");
component2.name = "Shaders";
component2.level = 1;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "title";
meta3.content = "SimpleShader.x3d";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "description";
meta4.content = "Simple shader example";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "John Stewart";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "translator";
meta6.content = "Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "created";
meta7.content = "26 May 2009";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "translated";
meta8.content = "15 October 2009";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "modified";
meta9.content = "20 October 2019";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "reference";
meta10.content = "http://www.opengl.org/wiki/Fragment_Shader";
head1.meta[8] = meta10;

meta meta11 = createNode("meta");
meta11.name = "reference";
meta11.content = "http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader";
head1.meta[9] = meta11;

meta meta12 = createNode("meta");
meta12.name = "reference";
meta12.content = "https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest";
head1.meta[10] = meta12;

meta meta13 = createNode("meta");
meta13.name = "subject";
meta13.content = "X3D shader example";
head1.meta[11] = meta13;

meta meta14 = createNode("meta");
meta14.name = "reference";
meta14.content = "originals/simpleShader.x3dv";
head1.meta[12] = meta14;

meta meta15 = createNode("meta");
meta15.name = "reference";
meta15.content = "ShaderTutorialInstantReality.pdf";
head1.meta[13] = meta15;

meta meta16 = createNode("meta");
meta16.name = "generator";
meta16.content = "Titania V3.0.3, http://titania.create3000.de";
head1.meta[14] = meta16;

meta meta17 = createNode("meta");
meta17.name = "info";
meta17.content = "World of Titania";
head1.meta[15] = meta17;

meta meta18 = createNode("meta");
meta18.name = "outputStyle";
meta18.content = "nicest";
head1.meta[16] = meta18;

meta meta19 = createNode("meta");
meta19.name = "generator";
meta19.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[17] = meta19;

meta meta20 = createNode("meta");
meta20.name = "identifier";
meta20.content = "https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d";
head1.meta[18] = meta20;

meta meta21 = createNode("meta");
meta21.name = "license";
meta21.content = "../../license.html";
head1.meta[19] = meta21;

head = head1;

ProtoDeclare ProtoDeclare23 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="myPrototype" ><ProtoInterface><field name="myInputRange" accessType="initializeOnly" type="SFVec3f" value="0.95 0.44 0.22"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="TR"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0.5 0.5 0.9"></Material>
<ComposedShader language="GLSL"><field name="decis" accessType="initializeOnly" type="SFVec3f"></field>
<IS><connect nodeField="decis" protoField="myInputRange"></connect>
</IS>
<ShaderPart type="VERTEX"></ShaderPart>
<ShaderPart type="FRAGMENT"></ShaderPart>
</ComposedShader>
<ComposedShader DEF="Cobweb" language="GLSL"><field name="decis" accessType="initializeOnly" type="SFVec3f" value="0.95 0.77 0.44"></field>
<ShaderPart type="VERTEX"></ShaderPart>
<ShaderPart DEF="_1" type="FRAGMENT"></ShaderPart>
</ComposedShader>
</Appearance>
<Sphere radius="1.75"></Sphere>
</Shape>
</Transform>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare23.name = "myPrototype";
ProtoInterface ProtoInterface24 = createNode("ProtoInterface");
field field25 = createNode("field");
field25.name = "myInputRange";
field25.accessType = "initializeOnly";
field25.type = "SFVec3f";
field25.value = "0.95 0.44 0.22";
ProtoInterface24.field = new MFNode();

ProtoInterface24.field[0] = field25;

ProtoDeclare23.protoInterface = ProtoInterface24;

ProtoBody ProtoBody26 = createNode("ProtoBody");
Transform Transform27 = createNode("Transform");
Transform27.DEF = "TR";
Shape Shape28 = createNode("Shape");
Appearance Appearance29 = createNode("Appearance");
Material Material30 = createNode("Material");
Material30.diffuseColor = new SFColor(new float[0.5,0.5,0.9]);
Appearance29.material = Material30;

ComposedShader ComposedShader31 = createNode("ComposedShader");
ComposedShader31.language = "GLSL";
field field32 = createNode("field");
field32.name = "decis";
field32.accessType = "initializeOnly";
field32.type = "SFVec3f";
ComposedShader31.field = new MFNode();

ComposedShader31.field[0] = field32;

IS IS33 = createNode("IS");
connect connect34 = createNode("connect");
connect34.nodeField = "decis";
connect34.protoField = "myInputRange";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

ComposedShader31.iS = IS33;

ShaderPart ShaderPart35 = createNode("ShaderPart");
ShaderPart35.type = "VERTEX";
ComposedShader31.parts[1] = ShaderPart35;

ShaderPart ShaderPart36 = createNode("ShaderPart");
ShaderPart36.type = "FRAGMENT";
ComposedShader31.parts[2] = ShaderPart36;

Appearance29.shaders = new MFNode();

Appearance29.shaders[0] = ComposedShader31;

ComposedShader ComposedShader37 = createNode("ComposedShader");
ComposedShader37.DEF = "Cobweb";
ComposedShader37.language = "GLSL";
field field38 = createNode("field");
field38.name = "decis";
field38.accessType = "initializeOnly";
field38.type = "SFVec3f";
field38.value = "0.95 0.77 0.44";
ComposedShader37.field = new MFNode();

ComposedShader37.field[0] = field38;

ShaderPart ShaderPart39 = createNode("ShaderPart");
ShaderPart39.type = "VERTEX";
ComposedShader37.parts[1] = ShaderPart39;

ShaderPart ShaderPart40 = createNode("ShaderPart");
ShaderPart40.DEF = "_1";
ShaderPart40.type = "FRAGMENT";
ComposedShader37.parts[2] = ShaderPart40;

Appearance29.shaders[1] = ComposedShader37;

Shape28.appearance = Appearance29;

Sphere Sphere41 = createNode("Sphere");
Sphere41.radius = 1.75;
Shape28.geometry = Sphere41;

Transform27.child = new undefined();

Transform27.child[0] = Shape28;

ProtoBody26.children = new MFNode();

ProtoBody26.children[0] = Transform27;

ProtoDeclare23.protoBody = ProtoBody26;

children = new MFNode();

children[0] = ProtoDeclare23;

WorldInfo WorldInfo42 = createNode("WorldInfo");
WorldInfo42.title = "SimpleShader";
MetadataSet MetadataSet43 = createNode("MetadataSet");
MetadataSet43.name = "Titania";
MetadataSet43.DEF = "Titania";
MetadataSet43.reference = "http://titania.create3000.de";
MetadataSet MetadataSet44 = createNode("MetadataSet");
MetadataSet44.name = "Selection";
MetadataSet44.DEF = "Selection";
MetadataSet44.reference = "http://titania.create3000.de";
MetadataSet MetadataSet45 = createNode("MetadataSet");
MetadataSet45.name = "nodes";
MetadataSet45.DEF = "nodes";
MetadataSet45.reference = "http://titania.create3000.de";
//NULL
MetadataSet44.value = new MFNode();

MetadataSet44.value[0] = MetadataSet45;

MetadataSet43.value = new MFNode();

MetadataSet43.value[0] = MetadataSet44;

MetadataSet MetadataSet46 = createNode("MetadataSet");
MetadataSet46.name = "NavigationInfo";
MetadataSet46.DEF = "NavigationInfo";
MetadataSet46.reference = "http://titania.create3000.de";
MetadataString MetadataString47 = createNode("MetadataString");
MetadataString47.name = "type";
MetadataString47.DEF = "type";
MetadataString47.reference = "http://titania.create3000.de";
MetadataString47.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet46.value = new MFNode();

MetadataSet46.value[0] = MetadataString47;

MetadataSet43.value[1] = MetadataSet46;

MetadataSet MetadataSet48 = createNode("MetadataSet");
MetadataSet48.name = "Viewpoint";
MetadataSet48.DEF = "Viewpoint";
MetadataSet48.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble49 = createNode("MetadataDouble");
MetadataDouble49.name = "position";
MetadataDouble49.DEF = "position";
MetadataDouble49.reference = "http://titania.create3000.de";
MetadataDouble49.value = new MFDouble(new double[6.24067728185014,0.00250837343276661,2.92117542307615]);
MetadataSet48.value = new MFNode();

MetadataSet48.value[0] = MetadataDouble49;

MetadataDouble MetadataDouble50 = createNode("MetadataDouble");
MetadataDouble50.name = "orientation";
MetadataDouble50.DEF = "orientation";
MetadataDouble50.reference = "http://titania.create3000.de";
MetadataDouble50.value = new MFDouble(new double[-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191]);
MetadataSet48.value[1] = MetadataDouble50;

MetadataDouble MetadataDouble51 = createNode("MetadataDouble");
MetadataDouble51.name = "centerOfRotation";
MetadataDouble51.DEF = "centerOfRotation";
MetadataDouble51.reference = "http://titania.create3000.de";
MetadataDouble51.value = new MFDouble(new double[-0.808320198626341,-0.358072370409949,0.22817191560906]);
MetadataSet48.value[2] = MetadataDouble51;

MetadataSet43.value[2] = MetadataSet48;

WorldInfo42.metadata = MetadataSet43;

children[1] = WorldInfo42;

ProtoInstance ProtoInstance52 = createNode("ProtoInstance");
ProtoInstance52.name = "myPrototype";
children[2] = ProtoInstance52;

}
