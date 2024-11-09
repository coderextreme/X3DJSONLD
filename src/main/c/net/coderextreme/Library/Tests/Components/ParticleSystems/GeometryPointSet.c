#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
component component2 = createNode("component");
component2.name = "ParticleSystems";
component2.level = 3;
head1.component = new MFNode();

head1.component[0] = component2;

meta meta3 = createNode("meta");
meta3.name = "comment";
meta3.content = "World of Titania";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "created";
meta4.content = "Sun, 15 May 2016 00:15:37 GMT";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "holger";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "creator";
meta6.content = "Holger Seelig";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "generator";
meta7.content = "Titania V1.4.3, http://titania.create3000.de";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "generator";
meta8.content = "Sunrize X3D Editor V1.6.10, https://create3000.github.io/sunrize/";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "identifier";
meta9.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/GeometryLine.x3d";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "modified";
meta10.content = "Mon, 22 Apr 2024 19:52:35 GMT";
head1.meta[8] = meta10;

head = head1;

ExternProtoDeclare ExternProtoDeclare12 = createNode("ExternProtoDeclare");
ExternProtoDeclare12.name = "Grid";
ExternProtoDeclare12.url = new MFString(new java.lang.String[", ","GridTool.x3dv#Gridfile:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/GridTool.x3dv#Grid"]);
field field13 = createNode("field");
field13.name = "translation";
field13.accessType = "inputOutput";
field13.type = "SFVec3f";
ExternProtoDeclare12.field = new MFNode();

ExternProtoDeclare12.field[0] = field13;

field field14 = createNode("field");
field14.name = "rotation";
field14.accessType = "inputOutput";
field14.type = "SFRotation";
ExternProtoDeclare12.field[1] = field14;

field field15 = createNode("field");
field15.name = "scale";
field15.accessType = "inputOutput";
field15.type = "SFVec3f";
ExternProtoDeclare12.field[2] = field15;

field field16 = createNode("field");
field16.name = "dimension";
field16.accessType = "inputOutput";
field16.type = "MFInt32";
ExternProtoDeclare12.field[3] = field16;

field field17 = createNode("field");
field17.name = "majorLineEvery";
field17.accessType = "inputOutput";
field17.type = "MFInt32";
ExternProtoDeclare12.field[4] = field17;

field field18 = createNode("field");
field18.name = "majorLineOffset";
field18.accessType = "inputOutput";
field18.type = "MFInt32";
ExternProtoDeclare12.field[5] = field18;

field field19 = createNode("field");
field19.name = "color";
field19.accessType = "inputOutput";
field19.type = "SFColor";
ExternProtoDeclare12.field[6] = field19;

field field20 = createNode("field");
field20.name = "transparency";
field20.accessType = "inputOutput";
field20.type = "SFFloat";
ExternProtoDeclare12.field[7] = field20;

field field21 = createNode("field");
field21.name = "lineColor";
field21.accessType = "inputOutput";
field21.type = "SFColor";
ExternProtoDeclare12.field[8] = field21;

field field22 = createNode("field");
field22.name = "lineTransparency";
field22.accessType = "inputOutput";
field22.type = "SFFloat";
ExternProtoDeclare12.field[9] = field22;

field field23 = createNode("field");
field23.name = "majorLineColor";
field23.accessType = "inputOutput";
field23.type = "SFColor";
ExternProtoDeclare12.field[10] = field23;

field field24 = createNode("field");
field24.name = "majorLineTransparency";
field24.accessType = "inputOutput";
field24.type = "SFFloat";
ExternProtoDeclare12.field[11] = field24;

field field25 = createNode("field");
field25.name = "solid";
field25.accessType = "initializeOnly";
field25.type = "SFBool";
ExternProtoDeclare12.field[12] = field25;

children = new MFNode();

children[0] = ExternProtoDeclare12;

Background Background26 = createNode("Background");
Background26.DEF = "Gray";
Background26.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[1] = Background26;

Viewpoint Viewpoint27 = createNode("Viewpoint");
Viewpoint27.description = "Viewpoint";
Viewpoint27.position = new SFVec3f(new float[0,20,55]);
children[2] = Viewpoint27;

ParticleSystem ParticleSystem28 = createNode("ParticleSystem");
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
PointProperties PointProperties33 = createNode("PointProperties");
PointProperties33.pointSizeScaleFactor = 5;
PointProperties33.pointSizeMinValue = 5;
PointProperties33.pointSizeMaxValue = 5;
Appearance32.pointProperties = PointProperties33;

ParticleSystem28.appearance = Appearance32;

PointSet PointSet34 = createNode("PointSet");
PointSet34.DEF = "_2";
Color Color35 = createNode("Color");
Color35.color = new MFColor(new float[1,0,0,0,1,0,0,0,1]);
PointSet34.color = Color35;

Coordinate Coordinate36 = createNode("Coordinate");
Coordinate36.point = new MFVec3f(new float[0,0,0,0,1,0,0,2,0]);
PointSet34.coord = Coordinate36;

ParticleSystem28.geometry = PointSet34;

children[3] = ParticleSystem28;

Transform Transform37 = createNode("Transform");
Transform37.DEF = "PointSet";
Shape Shape38 = createNode("Shape");
PointSet PointSet39 = createNode("PointSet");
PointSet39.USE = "_2";
Shape38.geometry = PointSet39;

Transform37.child = new undefined();

Transform37.child[0] = Shape38;

children[4] = Transform37;

ProtoInstance ProtoInstance40 = createNode("ProtoInstance");
ProtoInstance40.name = "Grid";
children[5] = ProtoInstance40;

}
