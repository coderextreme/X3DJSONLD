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
meta3.content = "Sun, 15 May 2016 00:15:37 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "holger";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.4.3, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Geometry.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Sun, 15 May 2016 00:52:08 GMT";
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
WorldInfo23.title = "Geometry";
MetadataSet MetadataSet24 = createNode("MetadataSet");
MetadataSet24.name = "Titania";
MetadataSet24.DEF = "Titania";
MetadataSet24.reference = "http://titania.create3000.de";
MetadataSet MetadataSet25 = createNode("MetadataSet");
MetadataSet25.name = "Selection";
MetadataSet25.DEF = "Selection";
MetadataSet25.reference = "http://titania.create3000.de";
MetadataSet MetadataSet26 = createNode("MetadataSet");
MetadataSet26.name = "previous";
MetadataSet26.DEF = "previous";
MetadataSet26.reference = "http://titania.create3000.de";
MetadataSet25.value = new MFNode();

MetadataSet25.value[0] = MetadataSet26;

MetadataSet MetadataSet27 = createNode("MetadataSet");
MetadataSet27.name = "children";
MetadataSet27.DEF = "children";
MetadataSet27.reference = "http://titania.create3000.de";
ParticleSystem ParticleSystem28 = createNode("ParticleSystem");
ParticleSystem28.DEF = "_1";
ParticleSystem28.geometryType = "GEOMETRY";
ParticleSystem28.maxParticles = 10;
ParticleSystem28.particleLifetime = 4;
ParticleSystem28.lifetimeVariation = 0.5;
ParticleSystem28.particleSize = new SFVec2f(new float[1,1]);
PointEmitter PointEmitter29 = createNode("PointEmitter");
PointEmitter29.direction = new SFVec3f(new float[0,0,0]);
PointEmitter29.speed = 0.5;
PointEmitter29.variation = 0.5;
PointEmitter29.mass = 0.1;
PointEmitter29.surfaceArea = 0.1;
ParticleSystem28.emitter = PointEmitter29;

WindPhysicsModel WindPhysicsModel30 = createNode("WindPhysicsModel");
WindPhysicsModel30.direction = new SFVec3f(new float[0,1,0]);
WindPhysicsModel30.speed = 0.7;
WindPhysicsModel30.gustiness = 1.7;
WindPhysicsModel30.turbulence = 0.3;
ParticleSystem28.physics = new MFNode();

ParticleSystem28.physics[0] = WindPhysicsModel30;

WindPhysicsModel WindPhysicsModel31 = createNode("WindPhysicsModel");
WindPhysicsModel31.speed = 0.5;
WindPhysicsModel31.gustiness = 2;
ParticleSystem28.physics[1] = WindPhysicsModel31;

Appearance Appearance32 = createNode("Appearance");
ImageTexture ImageTexture33 = createNode("ImageTexture");
ImageTexture33.url = new MFString(new java.lang.String["../images/image.png"]);
Appearance32.texture = ImageTexture33;

ParticleSystem28.appearance = Appearance32;

Cone Cone34 = createNode("Cone");
ParticleSystem28.geometry = Cone34;

MetadataSet27.value = ParticleSystem28;

MetadataSet25.value[1] = MetadataSet27;

MetadataSet24.value = new MFNode();

MetadataSet24.value[0] = MetadataSet25;

MetadataSet MetadataSet35 = createNode("MetadataSet");
MetadataSet35.name = "NavigationInfo";
MetadataSet35.DEF = "NavigationInfo";
MetadataSet35.reference = "http://titania.create3000.de";
MetadataString MetadataString36 = createNode("MetadataString");
MetadataString36.name = "type";
MetadataString36.DEF = "type";
MetadataString36.reference = "http://titania.create3000.de";
MetadataString36.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet35.value = new MFNode();

MetadataSet35.value[0] = MetadataString36;

MetadataSet24.value[1] = MetadataSet35;

MetadataSet MetadataSet37 = createNode("MetadataSet");
MetadataSet37.name = "Viewpoint";
MetadataSet37.DEF = "Viewpoint";
MetadataSet37.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble38 = createNode("MetadataDouble");
MetadataDouble38.name = "position";
MetadataDouble38.DEF = "position";
MetadataDouble38.reference = "http://titania.create3000.de";
MetadataDouble38.value = new MFDouble(new double[0,20,55]);
MetadataSet37.value = new MFNode();

MetadataSet37.value[0] = MetadataDouble38;

MetadataDouble MetadataDouble39 = createNode("MetadataDouble");
MetadataDouble39.name = "orientation";
MetadataDouble39.DEF = "orientation";
MetadataDouble39.reference = "http://titania.create3000.de";
MetadataDouble39.value = new MFDouble(new double[0,0,1,0]);
MetadataSet37.value[1] = MetadataDouble39;

MetadataDouble MetadataDouble40 = createNode("MetadataDouble");
MetadataDouble40.name = "centerOfRotation";
MetadataDouble40.DEF = "centerOfRotation";
MetadataDouble40.reference = "http://titania.create3000.de";
MetadataDouble40.value = new MFDouble(new double[0,0,0]);
MetadataSet37.value[2] = MetadataDouble40;

MetadataSet24.value[2] = MetadataSet37;

WorldInfo23.metadata = MetadataSet24;

children[1] = WorldInfo23;

Background Background41 = createNode("Background");
Background41.DEF = "Gray";
Background41.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[2] = Background41;

Viewpoint Viewpoint42 = createNode("Viewpoint");
Viewpoint42.description = "Viewpoint";
Viewpoint42.position = new SFVec3f(new float[0,20,55]);
children[3] = Viewpoint42;

ParticleSystem ParticleSystem43 = createNode("ParticleSystem");
ParticleSystem43.USE = "_1";
children[4] = ParticleSystem43;

Transform Transform44 = createNode("Transform");
Transform44.DEF = "IndexedLineSet";
Shape Shape45 = createNode("Shape");
IndexedLineSet IndexedLineSet46 = createNode("IndexedLineSet");
IndexedLineSet46.colorPerVertex = False;
IndexedLineSet46.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet46.coordIndex = new MFInt32(new int[0,1,-1,2,3,-1,4,5,-1]);
Color Color47 = createNode("Color");
Color47.color = new MFColor(new float[1,0,0,0,1,0,0,0,1]);
IndexedLineSet46.color = Color47;

Coordinate Coordinate48 = createNode("Coordinate");
Coordinate48.point = new MFVec3f(new float[-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1]);
IndexedLineSet46.coord = Coordinate48;

Shape45.geometry = IndexedLineSet46;

Transform44.child = new undefined();

Transform44.child[0] = Shape45;

children[5] = Transform44;

ProtoInstance ProtoInstance49 = createNode("ProtoInstance");
ProtoInstance49.name = "Grid";
children[6] = ProtoInstance49;

}
