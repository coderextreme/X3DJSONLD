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
meta4.content = "Fri, 22 Apr 2016 02:56:52 GMT";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Holger Seelig";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "Titania V1.4.1, http://titania.create3000.de";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "generator";
meta7.content = "Sunrize X3D Editor V1.6.11, https://create3000.github.io/sunrize/";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "identifier";
meta8.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/ConeEmitter.x3d";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "modified";
meta9.content = "Tue, 30 Apr 2024 04:21:26 GMT";
head1.meta[7] = meta9;

head = head1;

ExternProtoDeclare ExternProtoDeclare11 = createNode("ExternProtoDeclare");
ExternProtoDeclare11.name = "Grid";
ExternProtoDeclare11.url = new MFString(new java.lang.String[", ","GridTool.x3dv#Gridfile:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/GridTool.x3dv#Grid"]);
field field12 = createNode("field");
field12.name = "translation";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
ExternProtoDeclare11.field = new MFNode();

ExternProtoDeclare11.field[0] = field12;

field field13 = createNode("field");
field13.name = "rotation";
field13.accessType = "inputOutput";
field13.type = "SFRotation";
ExternProtoDeclare11.field[1] = field13;

field field14 = createNode("field");
field14.name = "scale";
field14.accessType = "inputOutput";
field14.type = "SFVec3f";
ExternProtoDeclare11.field[2] = field14;

field field15 = createNode("field");
field15.name = "dimension";
field15.accessType = "inputOutput";
field15.type = "MFInt32";
ExternProtoDeclare11.field[3] = field15;

field field16 = createNode("field");
field16.name = "majorLineEvery";
field16.accessType = "inputOutput";
field16.type = "MFInt32";
ExternProtoDeclare11.field[4] = field16;

field field17 = createNode("field");
field17.name = "majorLineOffset";
field17.accessType = "inputOutput";
field17.type = "MFInt32";
ExternProtoDeclare11.field[5] = field17;

field field18 = createNode("field");
field18.name = "color";
field18.accessType = "inputOutput";
field18.type = "SFColor";
ExternProtoDeclare11.field[6] = field18;

field field19 = createNode("field");
field19.name = "transparency";
field19.accessType = "inputOutput";
field19.type = "SFFloat";
ExternProtoDeclare11.field[7] = field19;

field field20 = createNode("field");
field20.name = "lineColor";
field20.accessType = "inputOutput";
field20.type = "SFColor";
ExternProtoDeclare11.field[8] = field20;

field field21 = createNode("field");
field21.name = "lineTransparency";
field21.accessType = "inputOutput";
field21.type = "SFFloat";
ExternProtoDeclare11.field[9] = field21;

field field22 = createNode("field");
field22.name = "majorLineColor";
field22.accessType = "inputOutput";
field22.type = "SFColor";
ExternProtoDeclare11.field[10] = field22;

field field23 = createNode("field");
field23.name = "majorLineTransparency";
field23.accessType = "inputOutput";
field23.type = "SFFloat";
ExternProtoDeclare11.field[11] = field23;

field field24 = createNode("field");
field24.name = "solid";
field24.accessType = "initializeOnly";
field24.type = "SFBool";
ExternProtoDeclare11.field[12] = field24;

children = new MFNode();

children[0] = ExternProtoDeclare11;

Background Background25 = createNode("Background");
Background25.DEF = "Gray";
Background25.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[1] = Background25;

Viewpoint Viewpoint26 = createNode("Viewpoint");
Viewpoint26.description = "Viewpoint";
Viewpoint26.position = new SFVec3f(new float[0,0,4]);
children[2] = Viewpoint26;

ParticleSystem ParticleSystem27 = createNode("ParticleSystem");
ParticleSystem27.geometryType = "POINT";
ParticleSystem27.maxParticles = 1000;
ParticleSystem27.particleLifetime = 10;
ParticleSystem27.lifetimeVariation = 0.01;
ParticleSystem27.particleSize = new SFVec2f(new float[0.1,0.1]);
ParticleSystem27.colorKey = new MFFloat(new float[0,0.1,0.4,1]);
ConeEmitter ConeEmitter28 = createNode("ConeEmitter");
ConeEmitter28.direction = new SFVec3f(new float[1,1,0]);
ParticleSystem27.emitter = ConeEmitter28;

ColorRGBA ColorRGBA29 = createNode("ColorRGBA");
ColorRGBA29.color = new MFColorRGBA(new float[1,0.38,0,1,1,0.58,0.06,1,1,0.37,0,1,1,0.05,0,1]);
ParticleSystem27.color = ColorRGBA29;

Appearance Appearance30 = createNode("Appearance");
PointProperties PointProperties31 = createNode("PointProperties");
PointProperties31.pointSizeScaleFactor = 2;
PointProperties31.pointSizeMinValue = 2;
PointProperties31.pointSizeMaxValue = 2;
Appearance30.pointProperties = PointProperties31;

ParticleSystem27.appearance = Appearance30;

children[3] = ParticleSystem27;

Transform Transform32 = createNode("Transform");
Transform32.DEF = "IndexedLineSet";
Shape Shape33 = createNode("Shape");
IndexedLineSet IndexedLineSet34 = createNode("IndexedLineSet");
IndexedLineSet34.colorPerVertex = False;
IndexedLineSet34.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet34.coordIndex = new MFInt32(new int[0,1,-1,2,3,-1,4,5,-1]);
Color Color35 = createNode("Color");
Color35.color = new MFColor(new float[1,0,0,0,1,0,0,0,1]);
IndexedLineSet34.color = Color35;

Coordinate Coordinate36 = createNode("Coordinate");
Coordinate36.point = new MFVec3f(new float[-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1]);
IndexedLineSet34.coord = Coordinate36;

Shape33.geometry = IndexedLineSet34;

Transform32.child = new undefined();

Transform32.child[0] = Shape33;

children[4] = Transform32;

ProtoInstance ProtoInstance37 = createNode("ProtoInstance");
ProtoInstance37.name = "Grid";
children[5] = ProtoInstance37;

}
