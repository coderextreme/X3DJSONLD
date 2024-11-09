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
meta3.content = "Thu, 23 Apr 2015 06:07:06 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V0.7.8, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 23 Apr 2015 06:07:06 GMT";
head1.meta[4] = meta6;

head = head1;

WorldInfo WorldInfo8 = createNode("WorldInfo");
WorldInfo8.info = new MFString(new java.lang.String[", ","Created in TitaniaPackaged by CosmoPackage"]);
children = new MFNode();

children[0] = WorldInfo8;

Transform Transform9 = createNode("Transform");
Transform9.DEF = "ProximitySensor";
Transform9.translation = new SFVec3f(new float[0,0.5,0]);
ProximitySensor ProximitySensor10 = createNode("ProximitySensor");
ProximitySensor10.DEF = "_1";
ProximitySensor10.size = new SFVec3f(new float[100,10,100]);
Transform9.children = new MFNode();

Transform9.children[0] = ProximitySensor10;

children[1] = Transform9;

Transform Transform11 = createNode("Transform");
Transform11.DEF = "HUD";
Transform11.translation = new SFVec3f(new float[0,0.5,0]);
Collision Collision12 = createNode("Collision");
Collision12.enabled = False;
Transform Transform13 = createNode("Transform");
Transform13.DEF = "HUDObj";
Viewpoint Viewpoint14 = createNode("Viewpoint");
Viewpoint14.DEF = "HUDVP1";
Viewpoint14.position = new SFVec3f(new float[0,0,0]);
Viewpoint14.fieldOfView = 1.2;
Transform13.children = new MFNode();

Transform13.children[0] = Viewpoint14;

Transform Transform15 = createNode("Transform");
Transform15.DEF = "DemoLogo";
Transform15.translation = new SFVec3f(new float[0.217382,0.163237,-0.3]);
Transform15.scale = new SFVec3f(new float[0.0448933,0.0448934,0.00191928]);
Transform Transform16 = createNode("Transform");
Transform16.DEF = "demo";
Shape Shape17 = createNode("Shape");
Appearance Appearance18 = createNode("Appearance");
ImageTexture ImageTexture19 = createNode("ImageTexture");
ImageTexture19.url = new MFString(new java.lang.String["icts-demo.png"]);
Appearance18.texture = ImageTexture19;

Shape17.appearance = Appearance18;

IndexedFaceSet IndexedFaceSet20 = createNode("IndexedFaceSet");
IndexedFaceSet20.solid = False;
IndexedFaceSet20.coordIndex = new MFInt32(new int[0,1,2,3,-1]);
TextureCoordinate TextureCoordinate21 = createNode("TextureCoordinate");
TextureCoordinate21.point = new MFVec2f(new float[0,0,1,0,1,1,0,1]);
IndexedFaceSet20.texCoord = TextureCoordinate21;

Coordinate Coordinate22 = createNode("Coordinate");
Coordinate22.point = new MFVec3f(new float[-1,-0.5,0,1,-0.5,0,1,0.5,0,-1,0.5,0]);
IndexedFaceSet20.coord = Coordinate22;

Shape17.geometry = IndexedFaceSet20;

Transform16.child = new undefined();

Transform16.child[0] = Shape17;

Transform15.children = new MFNode();

Transform15.children[0] = Transform16;

Transform13.children[1] = Transform15;

Collision12.proxy = Transform13;

Transform11.children = new MFNode();

Transform11.children[0] = Collision12;

children[2] = Transform11;

ROUTE ROUTE23 = createNode("ROUTE");
ROUTE23.fromNode = "_1";
ROUTE23.fromField = "position_changed";
ROUTE23.toNode = "HUDObj";
ROUTE23.toField = "set_translation";
children[3] = ROUTE23;

ROUTE ROUTE24 = createNode("ROUTE");
ROUTE24.fromNode = "_1";
ROUTE24.fromField = "orientation_changed";
ROUTE24.toNode = "HUDObj";
ROUTE24.toField = "set_rotation";
children[4] = ROUTE24;

}
