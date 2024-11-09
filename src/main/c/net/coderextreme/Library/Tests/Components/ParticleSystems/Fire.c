#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Wed, 20 Apr 2016 11:36:01 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V2.0.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Fire.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Mon, 26 Sep 2016 09:18:09 GMT";
head1.meta[5] = meta7;

head = head1;

ExternProtoDeclare ExternProtoDeclare9 = createNode("ExternProtoDeclare");
ExternProtoDeclare9.name = "Grid";
ExternProtoDeclare9.url = new MFString(new java.lang.String[", ","GridTool.x3dv#Gridfile:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/GridTool.x3dv#Grid"]);
field field10 = createNode("field");
field10.name = "translation";
field10.accessType = "inputOutput";
field10.type = "SFVec3f";
ExternProtoDeclare9.field = new MFNode();

ExternProtoDeclare9.field[0] = field10;

field field11 = createNode("field");
field11.name = "rotation";
field11.accessType = "inputOutput";
field11.type = "SFRotation";
ExternProtoDeclare9.field[1] = field11;

field field12 = createNode("field");
field12.name = "scale";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
ExternProtoDeclare9.field[2] = field12;

field field13 = createNode("field");
field13.name = "dimension";
field13.accessType = "inputOutput";
field13.type = "MFInt32";
ExternProtoDeclare9.field[3] = field13;

field field14 = createNode("field");
field14.name = "majorLineEvery";
field14.accessType = "inputOutput";
field14.type = "MFInt32";
ExternProtoDeclare9.field[4] = field14;

field field15 = createNode("field");
field15.name = "majorLineOffset";
field15.accessType = "inputOutput";
field15.type = "MFInt32";
ExternProtoDeclare9.field[5] = field15;

field field16 = createNode("field");
field16.name = "color";
field16.accessType = "inputOutput";
field16.type = "SFColor";
ExternProtoDeclare9.field[6] = field16;

field field17 = createNode("field");
field17.name = "transparency";
field17.accessType = "inputOutput";
field17.type = "SFFloat";
ExternProtoDeclare9.field[7] = field17;

field field18 = createNode("field");
field18.name = "lineColor";
field18.accessType = "inputOutput";
field18.type = "SFColor";
ExternProtoDeclare9.field[8] = field18;

field field19 = createNode("field");
field19.name = "lineTransparency";
field19.accessType = "inputOutput";
field19.type = "SFFloat";
ExternProtoDeclare9.field[9] = field19;

field field20 = createNode("field");
field20.name = "majorLineColor";
field20.accessType = "inputOutput";
field20.type = "SFColor";
ExternProtoDeclare9.field[10] = field20;

field field21 = createNode("field");
field21.name = "majorLineTransparency";
field21.accessType = "inputOutput";
field21.type = "SFFloat";
ExternProtoDeclare9.field[11] = field21;

field field22 = createNode("field");
field22.name = "solid";
field22.accessType = "initializeOnly";
field22.type = "SFBool";
ExternProtoDeclare9.field[12] = field22;

children = new MFNode();

children[0] = ExternProtoDeclare9;

WorldInfo WorldInfo23 = createNode("WorldInfo");
MetadataSet MetadataSet24 = createNode("MetadataSet");
MetadataSet24.name = "Titania";
MetadataSet24.DEF = "Titania";
MetadataSet24.reference = "http://titania.create3000.de";
MetadataSet MetadataSet25 = createNode("MetadataSet");
MetadataSet25.name = "AngleGrid";
MetadataSet25.DEF = "AngleGrid";
MetadataSet25.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean26 = createNode("MetadataBoolean");
MetadataBoolean26.name = "enabled";
MetadataBoolean26.DEF = "enabled";
MetadataBoolean26.reference = "http://titania.create3000.de";
MetadataBoolean26.value = new MFBool(new boolean[False]);
MetadataSet25.value = new MFNode();

MetadataSet25.value[0] = MetadataBoolean26;

MetadataSet24.value = new MFNode();

MetadataSet24.value[0] = MetadataSet25;

MetadataSet MetadataSet27 = createNode("MetadataSet");
MetadataSet27.name = "Grid";
MetadataSet27.DEF = "Grid";
MetadataSet27.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean28 = createNode("MetadataBoolean");
MetadataBoolean28.name = "enabled";
MetadataBoolean28.DEF = "enabled_1";
MetadataBoolean28.reference = "http://titania.create3000.de";
MetadataBoolean28.value = new MFBool(new boolean[False]);
MetadataSet27.value = new MFNode();

MetadataSet27.value[0] = MetadataBoolean28;

MetadataSet24.value[1] = MetadataSet27;

MetadataSet MetadataSet29 = createNode("MetadataSet");
MetadataSet29.name = "NavigationInfo";
MetadataSet29.DEF = "NavigationInfo";
MetadataSet29.reference = "http://titania.create3000.de";
MetadataString MetadataString30 = createNode("MetadataString");
MetadataString30.name = "type";
MetadataString30.DEF = "type";
MetadataString30.reference = "http://titania.create3000.de";
MetadataString30.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet29.value = new MFNode();

MetadataSet29.value[0] = MetadataString30;

MetadataSet24.value[2] = MetadataSet29;

MetadataSet MetadataSet31 = createNode("MetadataSet");
MetadataSet31.name = "Viewpoint";
MetadataSet31.DEF = "Viewpoint";
MetadataSet31.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble32 = createNode("MetadataDouble");
MetadataDouble32.name = "position";
MetadataDouble32.DEF = "position";
MetadataDouble32.reference = "http://titania.create3000.de";
MetadataDouble32.value = new MFDouble(new double[1.31269461177796,0.873141120607314,0.42007766929488]);
MetadataSet31.value = new MFNode();

MetadataSet31.value[0] = MetadataDouble32;

MetadataDouble MetadataDouble33 = createNode("MetadataDouble");
MetadataDouble33.name = "orientation";
MetadataDouble33.DEF = "orientation";
MetadataDouble33.reference = "http://titania.create3000.de";
MetadataDouble33.value = new MFDouble(new double[0.353413775780365,-0.897474128965571,-0.26389181670934,4.9156754975484]);
MetadataSet31.value[1] = MetadataDouble33;

MetadataDouble MetadataDouble34 = createNode("MetadataDouble");
MetadataDouble34.name = "centerOfRotation";
MetadataDouble34.DEF = "centerOfRotation";
MetadataDouble34.reference = "http://titania.create3000.de";
MetadataDouble34.value = new MFDouble(new double[-1.7763600157738e-15,-7.10542989869984e-15,3.55271007891048e-15]);
MetadataSet31.value[2] = MetadataDouble34;

MetadataSet24.value[3] = MetadataSet31;

MetadataSet MetadataSet35 = createNode("MetadataSet");
MetadataSet35.name = "Selection";
MetadataSet35.DEF = "Selection";
MetadataSet35.reference = "http://titania.create3000.de";
MetadataSet MetadataSet36 = createNode("MetadataSet");
MetadataSet36.name = "previous";
MetadataSet36.DEF = "previous";
MetadataSet36.reference = "http://titania.create3000.de";
MetadataSet35.value = new MFNode();

MetadataSet35.value[0] = MetadataSet36;

MetadataSet MetadataSet37 = createNode("MetadataSet");
MetadataSet37.name = "children";
MetadataSet37.DEF = "children";
MetadataSet37.reference = "http://titania.create3000.de";
Transform Transform38 = createNode("Transform");
Transform38.DEF = "Box";
Transform38.translation = new SFVec3f(new float[0,-1.02384,0]);
Transform38.scale = new SFVec3f(new float[2,1,2]);
Shape Shape39 = createNode("Shape");
Appearance Appearance40 = createNode("Appearance");
Material Material41 = createNode("Material");
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

Box Box42 = createNode("Box");
Shape39.geometry = Box42;

Transform38.child = new undefined();

Transform38.child[0] = Shape39;

MetadataSet37.value = Transform38;

MetadataSet35.value[1] = MetadataSet37;

MetadataSet24.value[4] = MetadataSet35;

WorldInfo23.metadata = MetadataSet24;

children[1] = WorldInfo23;

ParticleSystem ParticleSystem43 = createNode("ParticleSystem");
ParticleSystem43.DEF = "Fire2";
ParticleSystem43.geometryType = "SPRITE";
ParticleSystem43.particleLifetime = 2;
ParticleSystem43.lifetimeVariation = 0.5;
ParticleSystem43.particleSize = new SFVec2f(new float[1,1]);
ParticleSystem43.colorKey = new MFFloat(new float[0]);
ParticleSystem43.texCoordKey = new MFFloat(new float[0,0.015625,0.03125,0.046875,0.0625,0.078125,0.09375,0.109375,0.125,0.140625,0.15625,0.171875,0.1875,0.203125,0.21875,0.234375,0.25,0.265625,0.28125,0.296875,0.3125,0.328125,0.34375,0.359375,0.375,0.390625,0.40625,0.421875,0.4375,0.453125,0.46875,0.484375,0.5,0.515625,0.53125,0.546875,0.5625,0.578125,0.59375,0.609375,0.625,0.640625,0.65625,0.671875,0.6875,0.703125,0.71875,0.734375,0.75,0.765625,0.78125,0.796875,0.8125,0.828125,0.84375,0.859375,0.875,0.890625,0.90625,0.921875,0.9375,0.953125,0.96875,0.984375,1]);
PointEmitter PointEmitter44 = createNode("PointEmitter");
PointEmitter44.direction = new SFVec3f(new float[0,0,0]);
PointEmitter44.speed = 0.2;
PointEmitter44.variation = 0;
PointEmitter44.mass = 0.1;
PointEmitter44.surfaceArea = 0.1;
ParticleSystem43.emitter = PointEmitter44;

WindPhysicsModel WindPhysicsModel45 = createNode("WindPhysicsModel");
WindPhysicsModel45.direction = new SFVec3f(new float[0,1,0]);
WindPhysicsModel45.speed = 0.5;
WindPhysicsModel45.gustiness = 1.9;
ParticleSystem43.physics = new MFNode();

ParticleSystem43.physics[0] = WindPhysicsModel45;

WindPhysicsModel WindPhysicsModel46 = createNode("WindPhysicsModel");
WindPhysicsModel46.direction = new SFVec3f(new float[1,-1,0]);
WindPhysicsModel46.speed = 0.15;
WindPhysicsModel46.gustiness = 7;
ParticleSystem43.physics[1] = WindPhysicsModel46;

ColorRGBA ColorRGBA47 = createNode("ColorRGBA");
ColorRGBA47.color = new MFColorRGBA(new float[1,1,1,0.1]);
ParticleSystem43.color = ColorRGBA47;

TextureCoordinate TextureCoordinate48 = createNode("TextureCoordinate");
TextureCoordinate48.point = new MFVec2f(new float[0,0,0.125,0,0.125,0.125,0,0.125,0.125,0,0.25,0,0.25,0.125,0.125,0.125,0.25,0,0.375,0,0.375,0.125,0.25,0.125,0.375,0,0.5,0,0.5,0.125,0.375,0.125,0.5,0,0.625,0,0.625,0.125,0.5,0.125,0.625,0,0.75,0,0.75,0.125,0.625,0.125,0.75,0,0.875,0,0.875,0.125,0.75,0.125,0.875,0,1,0,1,0.125,0.875,0.125,0,0.125,0.125,0.125,0.125,0.25,0,0.25,0.125,0.125,0.25,0.125,0.25,0.25,0.125,0.25,0.25,0.125,0.375,0.125,0.375,0.25,0.25,0.25,0.375,0.125,0.5,0.125,0.5,0.25,0.375,0.25,0.5,0.125,0.625,0.125,0.625,0.25,0.5,0.25,0.625,0.125,0.75,0.125,0.75,0.25,0.625,0.25,0.75,0.125,0.875,0.125,0.875,0.25,0.75,0.25,0.875,0.125,1,0.125,1,0.25,0.875,0.25,0,0.25,0.125,0.25,0.125,0.375,0,0.375,0.125,0.25,0.25,0.25,0.25,0.375,0.125,0.375,0.25,0.25,0.375,0.25,0.375,0.375,0.25,0.375,0.375,0.25,0.5,0.25,0.5,0.375,0.375,0.375,0.5,0.25,0.625,0.25,0.625,0.375,0.5,0.375,0.625,0.25,0.75,0.25,0.75,0.375,0.625,0.375,0.75,0.25,0.875,0.25,0.875,0.375,0.75,0.375,0.875,0.25,1,0.25,1,0.375,0.875,0.375,0,0.375,0.125,0.375,0.125,0.5,0,0.5,0.125,0.375,0.25,0.375,0.25,0.5,0.125,0.5,0.25,0.375,0.375,0.375,0.375,0.5,0.25,0.5,0.375,0.375,0.5,0.375,0.5,0.5,0.375,0.5,0.5,0.375,0.625,0.375,0.625,0.5,0.5,0.5,0.625,0.375,0.75,0.375,0.75,0.5,0.625,0.5,0.75,0.375,0.875,0.375,0.875,0.5,0.75,0.5,0.875,0.375,1,0.375,1,0.5,0.875,0.5,0,0.5,0.125,0.5,0.125,0.625,0,0.625,0.125,0.5,0.25,0.5,0.25,0.625,0.125,0.625,0.25,0.5,0.375,0.5,0.375,0.625,0.25,0.625,0.375,0.5,0.5,0.5,0.5,0.625,0.375,0.625,0.5,0.5,0.625,0.5,0.625,0.625,0.5,0.625,0.625,0.5,0.75,0.5,0.75,0.625,0.625,0.625,0.75,0.5,0.875,0.5,0.875,0.625,0.75,0.625,0.875,0.5,1,0.5,1,0.625,0.875,0.625,0,0.625,0.125,0.625,0.125,0.75,0,0.75,0.125,0.625,0.25,0.625,0.25,0.75,0.125,0.75,0.25,0.625,0.375,0.625,0.375,0.75,0.25,0.75,0.375,0.625,0.5,0.625,0.5,0.75,0.375,0.75,0.5,0.625,0.625,0.625,0.625,0.75,0.5,0.75,0.625,0.625,0.75,0.625,0.75,0.75,0.625,0.75,0.75,0.625,0.875,0.625,0.875,0.75,0.75,0.75,0.875,0.625,1,0.625,1,0.75,0.875,0.75,0,0.75,0.125,0.75,0.125,0.875,0,0.875,0.125,0.75,0.25,0.75,0.25,0.875,0.125,0.875,0.25,0.75,0.375,0.75,0.375,0.875,0.25,0.875,0.375,0.75,0.5,0.75,0.5,0.875,0.375,0.875,0.5,0.75,0.625,0.75,0.625,0.875,0.5,0.875,0.625,0.75,0.75,0.75,0.75,0.875,0.625,0.875,0.75,0.75,0.875,0.75,0.875,0.875,0.75,0.875,0.875,0.75,1,0.75,1,0.875,0.875,0.875,0,0.875,0.125,0.875,0.125,1,0,1,0.125,0.875,0.25,0.875,0.25,1,0.125,1,0.25,0.875,0.375,0.875,0.375,1,0.25,1,0.375,0.875,0.5,0.875,0.5,1,0.375,1,0.5,0.875,0.625,0.875,0.625,1,0.5,1,0.625,0.875,0.75,0.875,0.75,1,0.625,1,0.75,0.875,0.875,0.875,0.875,1,0.75,1,0.875,0.875,1,0.875,1,1,0.875,1,0.875,0.875,1,0.875,1,1,0.875,1]);
ParticleSystem43.texCoord = TextureCoordinate48;

Appearance Appearance49 = createNode("Appearance");
ImageTexture ImageTexture50 = createNode("ImageTexture");
ImageTexture50.url = new MFString(new java.lang.String[", ","http://cdn.rawgit.com/create3000/Library/master/Textures/Effects/fire2.png, ","https://cdn.rawgit.com/create3000/Library/master/Textures/Effects/fire2.png, ","http://rawgit.com/create3000/Library/master/Textures/Effects/fire2.pnghttps://rawgit.com/create3000/Library/master/Textures/Effects/fire2.png"]);
Appearance49.texture = ImageTexture50;

ParticleSystem43.appearance = Appearance49;

children[2] = ParticleSystem43;

Viewpoint Viewpoint51 = createNode("Viewpoint");
Viewpoint51.position = new SFVec3f(new float[1.89619,2.08715,4.46876]);
Viewpoint51.orientation = new SFRotation(new float[-0.704047462871212,0.695566762376517,0.143192350010952,0.568941727555854]);
Viewpoint51.centerOfRotation = new SFVec3f(new float[-1.77636e-15,-7.10543e-15,3.55271e-15]);
children[3] = Viewpoint51;

ProtoInstance ProtoInstance52 = createNode("ProtoInstance");
ProtoInstance52.name = "Grid";
children[4] = ProtoInstance52;

Transform Transform53 = createNode("Transform");
Transform53.USE = "Box";
children[5] = Transform53;

DirectionalLight DirectionalLight54 = createNode("DirectionalLight");
DirectionalLight54.DEF = "_1";
DirectionalLight54.direction = new SFVec3f(new float[-0.531638,-0.672816,-0.51447]);
DirectionalLight54.shadows = True;
DirectionalLight54.shadowIntensity = 0.605;
children[6] = DirectionalLight54;

NavigationInfo NavigationInfo55 = createNode("NavigationInfo");
NavigationInfo55.headlight = False;
children[7] = NavigationInfo55;

Script Script56 = createNode("Script");
Script56.DEF = "PhongShadingScript";

Script56.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	Browser .setBrowserOption (\"Shading\", \"PHONG\");\n"+
"}`)
children[8] = Script56;

}
