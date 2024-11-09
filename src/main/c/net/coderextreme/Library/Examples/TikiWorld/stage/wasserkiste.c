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
meta3.content = "Fri, 13 Nov 2015 10:12:49 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.2.1, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Fri, 13 Nov 2015 10:12:49 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

LOD LOD9 = createNode("LOD");
LOD9.range = new MFFloat(new float[4,70]);
Transform Transform10 = createNode("Transform");
Transform10.DEF = "kisteAnim";
Transform10.translation = new SFVec3f(new float[0,0.997337,0]);
Transform10.scale = new SFVec3f(new float[0.999995,0.999989,0.999994]);
Transform10.scaleOrientation = new SFRotation(new float[0.0234423,-0.58967,-0.807304,0.129457]);
Group Group11 = createNode("Group");
Group Group12 = createNode("Group");
Group12.DEF = "kistenwackel";
TimeSensor TimeSensor13 = createNode("TimeSensor");
TimeSensor13.DEF = "Time";
TimeSensor13.cycleInterval = 4;
TimeSensor13.stopTime = 1;
Group12.children = new MFNode();

Group12.children[0] = TimeSensor13;

Group11.children = new MFNode();

Group11.children[0] = Group12;

PositionInterpolator PositionInterpolator14 = createNode("PositionInterpolator");
PositionInterpolator14.DEF = "kisteTranslationInterp";
PositionInterpolator14.key = new MFFloat(new float[0,0.025,0.05,0.075,0.105,0.135,0.165,0.195,0.225,0.25,0.275,0.3,0.325,0.35,0.383333,0.416667,0.45,0.4875,0.525,0.55,0.575,0.6,0.625,0.65,0.675,0.7,0.725,0.75,0.775,0.8,0.825,0.85,0.875,0.9,0.925,0.95,0.975,1]);
PositionInterpolator14.keyValue = new MFVec3f(new float[0,0.997337,0,0,0.630868,0,0,0.264399,0,0,0.0397889,0,-0.000238661,-0.039851,0.0000431382,-0.000715984,-0.045923,0.000129415,-0.00107398,-0.0121751,0.000194122,-0.000954645,0.0276448,0.000172553,0,0.0397889,0,0.00426809,0.0133565,-0.00107543,0.0118596,-0.0313111,-0.00305554,0.0186843,-0.0746269,-0.00474508,0.0206523,-0.0970042,-0.0049488,0.0136733,-0.0788561,-0.00247146,-0.0234373,0.08041,0.00761828,-0.0778261,0.315975,0.022942,-0.115342,0.444246,0.0379466,-0.10559,0.205764,0.0565961,-0.0792289,-0.0083617,0.0657472,-0.0701991,0.0494958,0.0618534,-0.0609667,0.133751,0.0562805,-0.0517,0.238064,0.049435,-0.0425672,0.356095,0.0417229,-0.0337363,0.481504,0.0335504,-0.0253758,0.607953,0.0253238,-0.0176537,0.7291,0.0174493,-0.0107382,0.838606,0.010333,-0.00479759,0.930131,0.00438117,0,0.997337,0,0.00329477,1.03916,-0.00273412,0.00504511,1.06138,-0.00418663,0.00555992,1.06791,-0.00461384,0.00514808,1.06268,-0.00427208,0.00411847,1.04962,-0.00341766,0.00277997,1.03262,-0.00230693,0.00144147,1.01563,-0.00119619,0.000411852,1.00256,-0.00034177,0,0.997337,0]);
Group11.children[1] = PositionInterpolator14;

OrientationInterpolator OrientationInterpolator15 = createNode("OrientationInterpolator");
OrientationInterpolator15.DEF = "kisteRotationInterp";
OrientationInterpolator15.key = new MFFloat(new float[0,0.025,0.05,0.075,0.105,0.135,0.165,0.195,0.225,0.25,0.275,0.3,0.325,0.35,0.383333,0.416667,0.45,0.4875,0.525,0.55,0.575,0.6,0.625,0.65,0.675,0.7,0.725,0.75,0.775,0.8,0.825,0.85,0.875,0.9,0.925,0.95,0.975,1]);
OrientationInterpolator15.keyValue = new MFRotation(new float[0,0,1,0,0.0226815,0.565605,-0.824365,0.0488928,0.0244738,0.578268,-0.81548,0.113574,0.0353393,0.65288,-0.756637,0.142832,0.0562912,0.776626,-0.627441,0.124671,0.0989135,0.96478,-0.243753,0.0962019,0.125794,0.90597,0.404221,0.0959015,0.113435,0.677287,0.726922,0.125097,0.10384,0.619815,0.777848,0.148611,0.106036,0.755426,0.646597,0.156861,0.105279,0.931101,0.349238,0.171857,0.0911407,0.994997,0.0409265,0.203508,0.071203,0.98526,-0.155538,0.235293,0.0475507,0.969881,-0.238893,0.241297,-0.0836639,0.979703,-0.182158,0.162999,-0.685793,0.537125,0.491106,0.0670668,-0.482976,-0.559639,0.673453,0.121116,-0.0299324,-0.840106,0.541596,0.190268,0.227273,-0.870925,0.435703,0.218472,0.242113,-0.871374,0.426718,0.210072,0.252606,-0.871534,0.42026,0.194121,0.260009,-0.871567,0.415651,0.172305,0.265002,-0.871552,0.412518,0.146336,0.267898,-0.871529,0.410691,0.117933,0.268702,-0.871521,0.410183,0.0888262,0.267054,-0.871537,0.411224,0.0607497,0.261966,-0.871565,0.414425,0.0354269,0.251001,-0.871518,0.421254,0.0145996,0,0,1,0,-0.227273,0.870925,-0.435703,0.00959321,-0.227273,0.870925,-0.435703,0.014681,-0.227273,0.870925,-0.435703,0.0161798,-0.227273,0.870925,-0.435703,0.0149864,-0.227273,0.870925,-0.435703,0.0119803,-0.227273,0.870925,-0.435703,0.0080825,-0.227273,0.870925,-0.435703,0.00420035,-0.227273,0.870925,-0.435703,0.00119604,0,0,1,0]);
Group11.children[2] = OrientationInterpolator15;

Transform10.children = new MFNode();

Transform10.children[0] = Group11;

Transform Transform16 = createNode("Transform");
Transform16.DEF = "kisteShape";
Shape Shape17 = createNode("Shape");
Appearance Appearance18 = createNode("Appearance");
Material Material19 = createNode("Material");
Material19.ambientIntensity = 0.36023;
Material19.diffuseColor = new SFColor(new float[0.627659,0.524538,0.321273]);
Material19.specularColor = new SFColor(new float[0.0955906,0.0955906,0.0955906]);
Material19.shininess = 0.078125;
Appearance18.material = Material19;

ImageTexture ImageTexture20 = createNode("ImageTexture");
ImageTexture20.DEF = "_1";
ImageTexture20.url = new MFString(new java.lang.String["bretter_swm.png"]);
Appearance18.texture = ImageTexture20;

Shape17.appearance = Appearance18;

IndexedFaceSet IndexedFaceSet21 = createNode("IndexedFaceSet");
IndexedFaceSet21.creaseAngle = 0.5;
IndexedFaceSet21.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]);
IndexedFaceSet21.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
TextureCoordinate TextureCoordinate22 = createNode("TextureCoordinate");
TextureCoordinate22.point = new MFVec2f(new float[0,1,0,0,1,1,1,0]);
IndexedFaceSet21.texCoord = TextureCoordinate22;

Coordinate Coordinate23 = createNode("Coordinate");
Coordinate23.point = new MFVec3f(new float[-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1]);
IndexedFaceSet21.coord = Coordinate23;

Shape17.geometry = IndexedFaceSet21;

Transform16.child = new undefined();

Transform16.child[0] = Shape17;

Transform10.children[1] = Transform16;

Transform Transform24 = createNode("Transform");
Transform24.translation = new SFVec3f(new float[-8.5628e-7,2.57056,-6.50935e-8]);
Transform24.scale = new SFVec3f(new float[0.999995,2.0897,0.999994]);
Transform24.scaleOrientation = new SFRotation(new float[-1.3971e-7,-1,0.00000595333,0.110657]);
ProximitySensor ProximitySensor25 = createNode("ProximitySensor");
ProximitySensor25.DEF = "_2";
ProximitySensor25.size = new SFVec3f(new float[2,2,2]);
Transform24.children = new MFNode();

Transform24.children[0] = ProximitySensor25;

Transform10.children[2] = Transform24;

LOD9.children = new MFNode();

LOD9.children[0] = Transform10;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "kiste";
Transform26.translation = new SFVec3f(new float[0,0.997337,0]);
Transform26.scale = new SFVec3f(new float[0.999995,0.99999,0.999994]);
Transform26.scaleOrientation = new SFRotation(new float[0.0503735,-0.457369,-0.887849,0.113109]);
Shape Shape27 = createNode("Shape");
Appearance Appearance28 = createNode("Appearance");
Material Material29 = createNode("Material");
Material29.ambientIntensity = 0.36023;
Material29.diffuseColor = new SFColor(new float[0.627659,0.524538,0.321273]);
Material29.specularColor = new SFColor(new float[0.0955906,0.0955906,0.0955906]);
Material29.shininess = 0.078125;
Appearance28.material = Material29;

ImageTexture ImageTexture30 = createNode("ImageTexture");
ImageTexture30.USE = "_1";
Appearance28.texture = ImageTexture30;

Shape27.appearance = Appearance28;

IndexedFaceSet IndexedFaceSet31 = createNode("IndexedFaceSet");
IndexedFaceSet31.creaseAngle = 0.5;
IndexedFaceSet31.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]);
IndexedFaceSet31.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
TextureCoordinate TextureCoordinate32 = createNode("TextureCoordinate");
TextureCoordinate32.point = new MFVec2f(new float[0,1,0,0,1,1,1,0]);
IndexedFaceSet31.texCoord = TextureCoordinate32;

Coordinate Coordinate33 = createNode("Coordinate");
Coordinate33.point = new MFVec3f(new float[-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1]);
IndexedFaceSet31.coord = Coordinate33;

Shape27.geometry = IndexedFaceSet31;

Transform26.child = new undefined();

Transform26.child[0] = Shape27;

LOD9.children[1] = Transform26;

Transform Transform34 = createNode("Transform");
Transform34.translation = new SFVec3f(new float[0,0.997337,0]);
Transform34.scale = new SFVec3f(new float[0.999995,0.99999,0.999994]);
Transform34.scaleOrientation = new SFRotation(new float[0.054827,-0.415386,-0.907991,0.111561]);
Shape Shape35 = createNode("Shape");
Appearance Appearance36 = createNode("Appearance");
Material Material37 = createNode("Material");
Material37.ambientIntensity = 0.36023;
Material37.diffuseColor = new SFColor(new float[0.627659,0.524538,0.321273]);
Material37.specularColor = new SFColor(new float[0.0955906,0.0955906,0.0955906]);
Material37.shininess = 0.078125;
Appearance36.material = Material37;

ImageTexture ImageTexture38 = createNode("ImageTexture");
ImageTexture38.url = new MFString(new java.lang.String["bretter_swl.png"]);
Appearance36.texture = ImageTexture38;

Shape35.appearance = Appearance36;

IndexedFaceSet IndexedFaceSet39 = createNode("IndexedFaceSet");
IndexedFaceSet39.creaseAngle = 0.5;
IndexedFaceSet39.texCoordIndex = new MFInt32(new int[0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1]);
IndexedFaceSet39.coordIndex = new MFInt32(new int[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1]);
TextureCoordinate TextureCoordinate40 = createNode("TextureCoordinate");
TextureCoordinate40.point = new MFVec2f(new float[0,1,0,0,1,1,1,0]);
IndexedFaceSet39.texCoord = TextureCoordinate40;

Coordinate Coordinate41 = createNode("Coordinate");
Coordinate41.point = new MFVec3f(new float[-1,1,1,-1,-1,1,1,1,1,1,-1,1,1,1,-1,1,-1,-1,-1,1,-1,-1,-1,-1]);
IndexedFaceSet39.coord = Coordinate41;

Shape35.geometry = IndexedFaceSet39;

Transform34.child = new undefined();

Transform34.child[0] = Shape35;

LOD9.children[2] = Transform34;

children[1] = LOD9;

ROUTE ROUTE42 = createNode("ROUTE");
ROUTE42.fromNode = "_2";
ROUTE42.fromField = "enterTime";
ROUTE42.toNode = "Time";
ROUTE42.toField = "set_startTime";
children[2] = ROUTE42;

ROUTE ROUTE43 = createNode("ROUTE");
ROUTE43.fromNode = "Time";
ROUTE43.fromField = "fraction_changed";
ROUTE43.toNode = "kisteTranslationInterp";
ROUTE43.toField = "set_fraction";
children[3] = ROUTE43;

ROUTE ROUTE44 = createNode("ROUTE");
ROUTE44.fromNode = "Time";
ROUTE44.fromField = "fraction_changed";
ROUTE44.toNode = "kisteRotationInterp";
ROUTE44.toField = "set_fraction";
children[4] = ROUTE44;

ROUTE ROUTE45 = createNode("ROUTE");
ROUTE45.fromNode = "kisteTranslationInterp";
ROUTE45.fromField = "value_changed";
ROUTE45.toNode = "kisteAnim";
ROUTE45.toField = "set_translation";
children[5] = ROUTE45;

ROUTE ROUTE46 = createNode("ROUTE");
ROUTE46.fromNode = "kisteRotationInterp";
ROUTE46.fromField = "value_changed";
ROUTE46.toNode = "kisteAnim";
ROUTE46.toField = "set_rotation";
children[6] = ROUTE46;

}
