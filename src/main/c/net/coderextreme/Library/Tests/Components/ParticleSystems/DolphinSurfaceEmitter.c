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
meta3.content = "Sat, 30 Apr 2016 02:18:39 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "holger";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.4.2, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/DolphinSurfaceEmitter.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Sat, 30 Apr 2016 11:54:15 GMT";
head1.meta[5] = meta7;

head = head1;

ExternProtoDeclare ExternProtoDeclare9 = createNode("ExternProtoDeclare");
ExternProtoDeclare9.name = "Dolphin";
ExternProtoDeclare9.url = new MFString(new java.lang.String[", ","Dolphin.x3d#Dolphinfile:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Dolphin.x3d#Dolphin"]);
field field10 = createNode("field");
field10.name = "set_fraction";
field10.accessType = "inputOnly";
field10.type = "SFFloat";
ExternProtoDeclare9.field = new MFNode();

ExternProtoDeclare9.field[0] = field10;

field field11 = createNode("field");
field11.name = "solid";
field11.accessType = "initializeOnly";
field11.type = "SFBool";
ExternProtoDeclare9.field[1] = field11;

children = new MFNode();

children[0] = ExternProtoDeclare9;

WorldInfo WorldInfo12 = createNode("WorldInfo");
MetadataSet MetadataSet13 = createNode("MetadataSet");
MetadataSet13.name = "Titania";
MetadataSet13.DEF = "Titania";
MetadataSet13.reference = "http://titania.create3000.de";
MetadataSet MetadataSet14 = createNode("MetadataSet");
MetadataSet14.name = "AngleGrid";
MetadataSet14.DEF = "AngleGrid";
MetadataSet14.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean15 = createNode("MetadataBoolean");
MetadataBoolean15.name = "enabled";
MetadataBoolean15.DEF = "enabled";
MetadataBoolean15.reference = "http://titania.create3000.de";
MetadataBoolean15.value = new MFBool(new boolean[False]);
MetadataSet14.value = new MFNode();

MetadataSet14.value[0] = MetadataBoolean15;

MetadataSet13.value = new MFNode();

MetadataSet13.value[0] = MetadataSet14;

MetadataSet MetadataSet16 = createNode("MetadataSet");
MetadataSet16.name = "Grid";
MetadataSet16.DEF = "Grid";
MetadataSet16.reference = "http://titania.create3000.de";
MetadataBoolean MetadataBoolean17 = createNode("MetadataBoolean");
MetadataBoolean17.name = "enabled";
MetadataBoolean17.DEF = "enabled_1";
MetadataBoolean17.reference = "http://titania.create3000.de";
MetadataBoolean17.value = new MFBool(new boolean[True]);
MetadataSet16.value = new MFNode();

MetadataSet16.value[0] = MetadataBoolean17;

MetadataSet13.value[1] = MetadataSet16;

MetadataSet MetadataSet18 = createNode("MetadataSet");
MetadataSet18.name = "NavigationInfo";
MetadataSet18.DEF = "NavigationInfo";
MetadataSet18.reference = "http://titania.create3000.de";
MetadataString MetadataString19 = createNode("MetadataString");
MetadataString19.name = "type";
MetadataString19.DEF = "type";
MetadataString19.reference = "http://titania.create3000.de";
MetadataString19.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet18.value = new MFNode();

MetadataSet18.value[0] = MetadataString19;

MetadataSet13.value[2] = MetadataSet18;

MetadataSet MetadataSet20 = createNode("MetadataSet");
MetadataSet20.name = "Viewpoint";
MetadataSet20.DEF = "Viewpoint";
MetadataSet20.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble21 = createNode("MetadataDouble");
MetadataDouble21.name = "position";
MetadataDouble21.DEF = "position";
MetadataDouble21.reference = "http://titania.create3000.de";
MetadataDouble21.value = new MFDouble(new double[179.724151611328,-295.825958251953,258.351654052734]);
MetadataSet20.value = new MFNode();

MetadataSet20.value[0] = MetadataDouble21;

MetadataDouble MetadataDouble22 = createNode("MetadataDouble");
MetadataDouble22.name = "orientation";
MetadataDouble22.DEF = "orientation";
MetadataDouble22.reference = "http://titania.create3000.de";
MetadataDouble22.value = new MFDouble(new double[0.851609192029355,0.229794819966725,0.47112219727749,0.997756545817208]);
MetadataSet20.value[1] = MetadataDouble22;

MetadataDouble MetadataDouble23 = createNode("MetadataDouble");
MetadataDouble23.name = "centerOfRotation";
MetadataDouble23.DEF = "centerOfRotation";
MetadataDouble23.reference = "http://titania.create3000.de";
MetadataDouble23.value = new MFDouble(new double[17.631872177124,-9.29712867736816,-18.6251792907715]);
MetadataSet20.value[2] = MetadataDouble23;

MetadataSet13.value[3] = MetadataSet20;

MetadataSet MetadataSet24 = createNode("MetadataSet");
MetadataSet24.name = "Selection";
MetadataSet24.DEF = "Selection";
MetadataSet24.reference = "http://titania.create3000.de";
MetadataSet MetadataSet25 = createNode("MetadataSet");
MetadataSet25.name = "previous";
MetadataSet25.DEF = "previous";
MetadataSet25.reference = "http://titania.create3000.de";
MetadataSet24.value = new MFNode();

MetadataSet24.value[0] = MetadataSet25;

MetadataSet MetadataSet26 = createNode("MetadataSet");
MetadataSet26.name = "children";
MetadataSet26.DEF = "children";
MetadataSet26.reference = "http://titania.create3000.de";
Transform Transform27 = createNode("Transform");
Transform27.DEF = "Box";
Shape Shape28 = createNode("Shape");
Appearance Appearance29 = createNode("Appearance");
Material Material30 = createNode("Material");
Material30.transparency = 0.884393;
Appearance29.material = Material30;

Shape28.appearance = Appearance29;

ProtoInstance ProtoInstance31 = createNode("ProtoInstance");
ProtoInstance31.name = "Dolphin";
ProtoInstance31.DEF = "_1";
Shape28.geometry = ProtoInstance31;

Transform27.child = new undefined();

Transform27.child[0] = Shape28;

MetadataSet26.value = Transform27;

MetadataSet24.value[1] = MetadataSet26;

MetadataSet13.value[4] = MetadataSet24;

WorldInfo12.metadata = MetadataSet13;

children[1] = WorldInfo12;

Background Background32 = createNode("Background");
Background32.DEF = "White";
Background32.skyColor = new MFColor(new float[1,1,1]);
children[2] = Background32;

Viewpoint Viewpoint33 = createNode("Viewpoint");
Viewpoint33.description = "Home";
Viewpoint33.position = new SFVec3f(new float[179.724,-295.826,258.352]);
Viewpoint33.orientation = new SFRotation(new float[0.851609192029354,0.229794819966725,0.47112219727749,0.997756545817209]);
Viewpoint33.centerOfRotation = new SFVec3f(new float[17.6319,-9.29713,-18.6252]);
children[3] = Viewpoint33;

TimeSensor TimeSensor34 = createNode("TimeSensor");
TimeSensor34.DEF = "_2";
TimeSensor34.cycleInterval = 10;
TimeSensor34.loop = True;
children[4] = TimeSensor34;

Transform Transform35 = createNode("Transform");
Transform35.USE = "Box";
children[5] = Transform35;

ParticleSystem ParticleSystem36 = createNode("ParticleSystem");
ParticleSystem36.geometryType = "SPRITE";
ParticleSystem36.maxParticles = 2000;
ParticleSystem36.particleLifetime = 1;
ParticleSystem36.particleSize = new SFVec2f(new float[6,6]);
SurfaceEmitter SurfaceEmitter37 = createNode("SurfaceEmitter");
SurfaceEmitter37.speed = 2;
SurfaceEmitter37.mass = 0.01;
SurfaceEmitter37.surfaceArea = 0.01;
ProtoInstance ProtoInstance38 = createNode("ProtoInstance");
ProtoInstance38.name = "Dolphin";
ProtoInstance38.USE = "_1";
SurfaceEmitter37.surface = ProtoInstance38;

ParticleSystem36.emitter = SurfaceEmitter37;

Appearance Appearance39 = createNode("Appearance");
Material Material40 = createNode("Material");
Material40.DEF = "Rococo17";
Material40.ambientIntensity = 0.187004;
Material40.diffuseColor = new SFColor(new float[0.640987,0.460097,0.748016]);
Material40.specularColor = new SFColor(new float[0.251984,0.251984,0.251984]);
Material40.shininess = 0.612121;
Appearance39.material = Material40;

ParticleSystem36.appearance = Appearance39;

children[6] = ParticleSystem36;

Background Background41 = createNode("Background");
Background41.DEF = "Gray";
Background41.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[7] = Background41;

ROUTE ROUTE42 = createNode("ROUTE");
ROUTE42.fromNode = "_2";
ROUTE42.fromField = "fraction_changed";
ROUTE42.toNode = "_1";
ROUTE42.toField = "set_fraction";
children[8] = ROUTE42;

}
