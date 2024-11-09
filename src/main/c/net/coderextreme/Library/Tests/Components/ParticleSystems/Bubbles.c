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
meta3.content = "Sun, 15 May 2016 00:16:04 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "holger";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V2.0.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "identifier";
meta6.content = "file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/Bubbles.x3d";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Mon, 26 Sep 2016 02:51:17 GMT";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.title = "Bubbles";
MetadataSet MetadataSet10 = createNode("MetadataSet");
MetadataSet10.name = "Titania";
MetadataSet10.DEF = "Titania";
MetadataSet10.reference = "http://titania.create3000.de";
MetadataSet MetadataSet11 = createNode("MetadataSet");
MetadataSet11.name = "NavigationInfo";
MetadataSet11.DEF = "NavigationInfo";
MetadataSet11.reference = "http://titania.create3000.de";
MetadataString MetadataString12 = createNode("MetadataString");
MetadataString12.name = "type";
MetadataString12.DEF = "type";
MetadataString12.reference = "http://titania.create3000.de";
MetadataString12.value = new MFString(new java.lang.String["EXAMINE"]);
MetadataSet11.value = new MFNode();

MetadataSet11.value[0] = MetadataString12;

MetadataSet10.value = new MFNode();

MetadataSet10.value[0] = MetadataSet11;

MetadataSet MetadataSet13 = createNode("MetadataSet");
MetadataSet13.name = "Viewpoint";
MetadataSet13.DEF = "Viewpoint";
MetadataSet13.reference = "http://titania.create3000.de";
MetadataDouble MetadataDouble14 = createNode("MetadataDouble");
MetadataDouble14.name = "position";
MetadataDouble14.DEF = "position";
MetadataDouble14.reference = "http://titania.create3000.de";
MetadataDouble14.value = new MFDouble(new double[1.62303498729208,40.0774585689728,42.6164648005402]);
MetadataSet13.value = new MFNode();

MetadataSet13.value[0] = MetadataDouble14;

MetadataDouble MetadataDouble15 = createNode("MetadataDouble");
MetadataDouble15.name = "orientation";
MetadataDouble15.DEF = "orientation";
MetadataDouble15.reference = "http://titania.create3000.de";
MetadataDouble15.value = new MFDouble(new double[0.948208773060804,-0.218726178841849,-0.230345352416253,5.85764824335848]);
MetadataSet13.value[1] = MetadataDouble15;

MetadataDouble MetadataDouble16 = createNode("MetadataDouble");
MetadataDouble16.name = "centerOfRotation";
MetadataDouble16.DEF = "centerOfRotation";
MetadataDouble16.reference = "http://titania.create3000.de";
MetadataDouble16.value = new MFDouble(new double[0,0,0]);
MetadataSet13.value[2] = MetadataDouble16;

MetadataSet10.value[1] = MetadataSet13;

MetadataSet MetadataSet17 = createNode("MetadataSet");
MetadataSet17.name = "Selection";
MetadataSet17.DEF = "Selection";
MetadataSet17.reference = "http://titania.create3000.de";
MetadataSet MetadataSet18 = createNode("MetadataSet");
MetadataSet18.name = "previous";
MetadataSet18.DEF = "previous";
MetadataSet18.reference = "http://titania.create3000.de";
MetadataSet17.value = new MFNode();

MetadataSet17.value[0] = MetadataSet18;

MetadataSet MetadataSet19 = createNode("MetadataSet");
MetadataSet19.name = "children";
MetadataSet19.DEF = "children";
MetadataSet19.reference = "http://titania.create3000.de";
DirectionalLight DirectionalLight20 = createNode("DirectionalLight");
DirectionalLight20.DEF = "_1";
DirectionalLight20.direction = new SFVec3f(new float[-0.372556,-0.000038217,-0.92801]);
DirectionalLight20.shadows = True;
DirectionalLight20.shadowIntensity = 0.518717;
MetadataSet19.value = DirectionalLight20;

MetadataSet17.value[1] = MetadataSet19;

MetadataSet10.value[2] = MetadataSet17;

WorldInfo9.metadata = MetadataSet10;

children = new MFNode();

children[0] = WorldInfo9;

Background Background21 = createNode("Background");
Background21.DEF = "Gray";
Background21.skyColor = new MFColor(new float[0.2,0.2,0.2]);
children[1] = Background21;

NavigationInfo NavigationInfo22 = createNode("NavigationInfo");
NavigationInfo22.headlight = False;
children[2] = NavigationInfo22;

Viewpoint Viewpoint23 = createNode("Viewpoint");
Viewpoint23.description = "Viewpoint";
Viewpoint23.position = new SFVec3f(new float[0,20,55]);
children[3] = Viewpoint23;

Transform Transform24 = createNode("Transform");
Transform24.DEF = "IndexedLineSet";
Shape Shape25 = createNode("Shape");
IndexedLineSet IndexedLineSet26 = createNode("IndexedLineSet");
IndexedLineSet26.colorPerVertex = False;
IndexedLineSet26.colorIndex = new MFInt32(new int[0,1,2]);
IndexedLineSet26.coordIndex = new MFInt32(new int[0,1,-1,2,3,-1,4,5,-1]);
Color Color27 = createNode("Color");
Color27.color = new MFColor(new float[1,0,0,0,1,0,0,0,1]);
IndexedLineSet26.color = Color27;

Coordinate Coordinate28 = createNode("Coordinate");
Coordinate28.point = new MFVec3f(new float[-1,0,0,1,0,0,0,-1,0,0,1,0,0,0,-1,0,0,1]);
IndexedLineSet26.coord = Coordinate28;

Shape25.geometry = IndexedLineSet26;

Transform24.child = new undefined();

Transform24.child[0] = Shape25;

children[4] = Transform24;

ParticleSystem ParticleSystem29 = createNode("ParticleSystem");
ParticleSystem29.geometryType = "GEOMETRY";
ParticleSystem29.maxParticles = 500;
ParticleSystem29.particleLifetime = 8;
ParticleSystem29.lifetimeVariation = 0.8;
ParticleSystem29.particleSize = new SFVec2f(new float[1,1]);
PointEmitter PointEmitter30 = createNode("PointEmitter");
PointEmitter30.direction = new SFVec3f(new float[0,0,0]);
PointEmitter30.speed = 0.5;
PointEmitter30.variation = 0.5;
PointEmitter30.mass = 0.1;
PointEmitter30.surfaceArea = 0.1;
ParticleSystem29.emitter = PointEmitter30;

WindPhysicsModel WindPhysicsModel31 = createNode("WindPhysicsModel");
WindPhysicsModel31.direction = new SFVec3f(new float[0,1,0]);
WindPhysicsModel31.speed = 0.6;
WindPhysicsModel31.gustiness = 1.7;
WindPhysicsModel31.turbulence = 0.3;
ParticleSystem29.physics = new MFNode();

ParticleSystem29.physics[0] = WindPhysicsModel31;

WindPhysicsModel WindPhysicsModel32 = createNode("WindPhysicsModel");
WindPhysicsModel32.speed = 1;
WindPhysicsModel32.gustiness = 1.5;
ParticleSystem29.physics[1] = WindPhysicsModel32;

Appearance Appearance33 = createNode("Appearance");
Material Material34 = createNode("Material");
Material34.ambientIntensity = 0.25;
Material34.diffuseColor = new SFColor(new float[1,0.520125,0.73699]);
Material34.specularColor = new SFColor(new float[0.951515,0.951515,0.951515]);
Material34.shininess = 0.557576;
Appearance33.material = Material34;

ParticleSystem29.appearance = Appearance33;

Sphere Sphere35 = createNode("Sphere");
ParticleSystem29.geometry = Sphere35;

children[5] = ParticleSystem29;

Transform Transform36 = createNode("Transform");
Transform36.DEF = "Rectangle2D";
Transform36.translation = new SFVec3f(new float[0,19.2591,-14.5791]);
Transform36.scale = new SFVec3f(new float[43.4935,20.2591,1]);
Shape Shape37 = createNode("Shape");
Appearance Appearance38 = createNode("Appearance");
Material Material39 = createNode("Material");
Appearance38.material = Material39;

Shape37.appearance = Appearance38;

Rectangle2D Rectangle2D40 = createNode("Rectangle2D");
Shape37.geometry = Rectangle2D40;

Transform36.child = new undefined();

Transform36.child[0] = Shape37;

children[6] = Transform36;

DirectionalLight DirectionalLight41 = createNode("DirectionalLight");
DirectionalLight41.USE = "_1";
children[7] = DirectionalLight41;

Script Script42 = createNode("Script");
Script42.DEF = "PhongShadingScript";

Script42.setSourceCode(`ecmascript:\n"+
"\n"+
"function initialize ()\n"+
"{\n"+
"	Browser .setBrowserOption (\"Shading\", \"PHONG\");\n"+
"}`)
children[8] = Script42;

}
