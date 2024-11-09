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
meta4.content = "Sat, 30 Apr 2016 02:18:39 GMT";
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
meta7.content = "Titania V1.4.2, http://titania.create3000.de";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "generator";
meta8.content = "Sunrize X3D Editor V1.6.10, https://create3000.github.io/sunrize/";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "identifier";
meta9.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/DolphinPointSurfaceEmitter.x3d";
head1.meta[7] = meta9;

meta meta10 = createNode("meta");
meta10.name = "modified";
meta10.content = "Mon, 22 Apr 2024 19:51:08 GMT";
head1.meta[8] = meta10;

head = head1;

ExternProtoDeclare ExternProtoDeclare12 = createNode("ExternProtoDeclare");
ExternProtoDeclare12.name = "Dolphin";
ExternProtoDeclare12.url = new MFString(new java.lang.String[", ","Dolphin.x3d#Dolphinfile:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Dolphin.x3d#Dolphin"]);
field field13 = createNode("field");
field13.name = "set_fraction";
field13.accessType = "inputOnly";
field13.type = "SFFloat";
ExternProtoDeclare12.field = new MFNode();

ExternProtoDeclare12.field[0] = field13;

field field14 = createNode("field");
field14.name = "solid";
field14.accessType = "initializeOnly";
field14.type = "SFBool";
ExternProtoDeclare12.field[1] = field14;

children = new MFNode();

children[0] = ExternProtoDeclare12;

WorldInfo WorldInfo15 = createNode("WorldInfo");
MetadataSet MetadataSet16 = createNode("MetadataSet");
MetadataSet16.name = "Titania";
MetadataSet16.DEF = "Titania";
MetadataSet16.reference = "http://titania.create3000.de";
MetadataSet MetadataSet17 = createNode("MetadataSet");
MetadataSet17.name = "AngleGrid";
MetadataSet17.DEF = "AngleGrid";
MetadataSet17.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean18 = createNode("MetadataBoolean");
MetadataBoolean18.name = "enabled";
MetadataBoolean18.DEF = "enabled";
MetadataBoolean18.reference = "http://titania.create3000.de";
MetadataBoolean18.value = new MFBool(new boolean[False]);
MetadataSet17.value = new MFNode();

MetadataSet17.value[0] = MetadataBoolean18;

MetadataSet16.value = new MFNode();

MetadataSet16.value[0] = MetadataSet17;

MetadataSet MetadataSet19 = createNode("MetadataSet");
MetadataSet19.name = "Grid";
MetadataSet19.DEF = "Grid";
MetadataSet19.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean20 = createNode("MetadataBoolean");
MetadataBoolean20.name = "enabled";
MetadataBoolean20.DEF = "enabled_1";
MetadataBoolean20.reference = "http://titania.create3000.de";
MetadataBoolean20.value = new MFBool(new boolean[True]);
MetadataSet19.value = new MFNode();

MetadataSet19.value[0] = MetadataBoolean20;

MetadataSet16.value[1] = MetadataSet19;

MetadataSet MetadataSet21 = createNode("MetadataSet");
MetadataSet21.name = "NavigationInfo";
MetadataSet21.DEF = "NavigationInfo";
MetadataSet21.reference = "http://titania.create3000.de";
MetadataString MetadataString22 = createNode("MetadataString");
MetadataString22.name = "type";
MetadataString22.DEF = "type";
MetadataString22.reference = "http://titania.create3000.de";
MetadataString22.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet21.value = new MFNode();

MetadataSet21.value[0] = MetadataString22;

MetadataSet16.value[2] = MetadataSet21;

MetadataSet MetadataSet23 = createNode("MetadataSet");
MetadataSet23.name = "Viewpoint";
MetadataSet23.DEF = "Viewpoint";
MetadataSet23.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble24 = createNode("MetadataDouble");
MetadataDouble24.name = "position";
MetadataDouble24.DEF = "position";
MetadataDouble24.reference = "http://titania.create3000.de";
MetadataDouble24.value = new MFDouble(new double[235.02507019043,-304.458618164062,206.560821533203]);
MetadataSet23.value = new MFNode();

MetadataSet23.value[0] = MetadataDouble24;

MetadataDouble MetadataDouble25 = createNode("MetadataDouble");
MetadataDouble25.name = "orientation";
MetadataDouble25.DEF = "orientation";
MetadataDouble25.reference = "http://titania.create3000.de";
MetadataDouble25.value = new MFDouble(new double[0.838011514790102,0.301117702286433,0.455043767619048,1.16040551972849]);
MetadataSet23.value[1] = MetadataDouble25;

MetadataDouble MetadataDouble26 = createNode("MetadataDouble");
MetadataDouble26.name = "centerOfRotation";
MetadataDouble26.DEF = "centerOfRotation";
MetadataDouble26.reference = "http://titania.create3000.de";
MetadataDouble26.value = new MFDouble(new double[17.631872177124,-9.29712867736816,-18.6251792907715]);
MetadataSet23.value[2] = MetadataDouble26;

MetadataSet16.value[3] = MetadataSet23;

MetadataSet MetadataSet27 = createNode("MetadataSet");
MetadataSet27.name = "Selection";
MetadataSet27.DEF = "Selection";
MetadataSet27.reference = "http://titania.create3000.de";
MetadataSet MetadataSet28 = createNode("MetadataSet");
MetadataSet28.name = "previous";
MetadataSet28.DEF = "previous";
MetadataSet28.reference = "http://titania.create3000.de";
MetadataSet27.value = new MFNode();

MetadataSet27.value[0] = MetadataSet28;

MetadataSet MetadataSet29 = createNode("MetadataSet");
MetadataSet29.name = "children";
MetadataSet29.DEF = "children";
MetadataSet29.reference = "http://titania.create3000.de";
ParticleSystem ParticleSystem30 = createNode("ParticleSystem");
ParticleSystem30.DEF = "_1";
ParticleSystem30.geometryType = "POINT";
ParticleSystem30.maxParticles = 10000;
ParticleSystem30.particleLifetime = 2;
ParticleSystem30.particleSize = new SFVec2f(new float[6,6]);
SurfaceEmitter SurfaceEmitter31 = createNode("SurfaceEmitter");
SurfaceEmitter31.speed = 2;
SurfaceEmitter31.mass = 0.01;
SurfaceEmitter31.surfaceArea = 0.01;
ProtoInstance ProtoInstance32 = createNode("ProtoInstance");
ProtoInstance32.name = "Dolphin";
ProtoInstance32.DEF = "_2";
SurfaceEmitter31.surface = ProtoInstance32;

ParticleSystem30.emitter = SurfaceEmitter31;

Appearance Appearance33 = createNode("Appearance");
PointProperties PointProperties34 = createNode("PointProperties");
PointProperties34.pointSizeScaleFactor = 3.24;
PointProperties34.pointSizeMaxValue = 3.24;
Appearance33.pointProperties = PointProperties34;

Material Material35 = createNode("Material");
Material35.DEF = "Rococo17";
Material35.ambientIntensity = 0.187004;
Material35.diffuseColor = new SFColor(new float[0.640987,0.460097,0.748016]);
Material35.specularColor = new SFColor(new float[0.251984,0.251984,0.251984]);
Material35.emissiveColor = new SFColor(new float[0.640987,0.460097,0.748016]);
Material35.shininess = 0.612121;
Appearance33.material = Material35;

ParticleSystem30.appearance = Appearance33;

MetadataSet29.value = ParticleSystem30;

MetadataSet27.value[1] = MetadataSet29;

MetadataSet16.value[4] = MetadataSet27;

WorldInfo15.metadata = MetadataSet16;

children[1] = WorldInfo15;

Background Background36 = createNode("Background");
Background36.DEF = "White";
Background36.skyColor = new MFColor(new float[1,1,1]);
children[2] = Background36;

Viewpoint Viewpoint37 = createNode("Viewpoint");
Viewpoint37.description = "Home";
Viewpoint37.position = new SFVec3f(new float[179.724,-295.826,258.352]);
Viewpoint37.orientation = new SFRotation(new float[0.851609192029354,0.229794819966725,0.47112219727749,0.997756545817209]);
Viewpoint37.centerOfRotation = new SFVec3f(new float[17.6319,-9.29713,-18.6252]);
children[3] = Viewpoint37;

TimeSensor TimeSensor38 = createNode("TimeSensor");
TimeSensor38.DEF = "_3";
TimeSensor38.cycleInterval = 10;
TimeSensor38.loop = True;
children[4] = TimeSensor38;

Transform Transform39 = createNode("Transform");
Transform39.DEF = "Box";
Shape Shape40 = createNode("Shape");
Appearance Appearance41 = createNode("Appearance");
Material Material42 = createNode("Material");
Material42.transparency = 0.884393;
Appearance41.material = Material42;

Shape40.appearance = Appearance41;

ProtoInstance ProtoInstance43 = createNode("ProtoInstance");
ProtoInstance43.name = "Dolphin";
ProtoInstance43.USE = "_2";
Shape40.geometry = ProtoInstance43;

Transform39.child = new undefined();

Transform39.child[0] = Shape40;

children[5] = Transform39;

ParticleSystem ParticleSystem44 = createNode("ParticleSystem");
ParticleSystem44.USE = "_1";
children[6] = ParticleSystem44;

Background Background45 = createNode("Background");
Background45.DEF = "Gray";
Background45.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[7] = Background45;

ROUTE ROUTE46 = createNode("ROUTE");
ROUTE46.fromNode = "_3";
ROUTE46.fromField = "fraction_changed";
ROUTE46.toNode = "_2";
ROUTE46.toField = "set_fraction";
children[8] = ROUTE46;

}
