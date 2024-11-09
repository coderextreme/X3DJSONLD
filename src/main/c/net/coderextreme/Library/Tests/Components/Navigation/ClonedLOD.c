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
meta3.content = "Thu, 10 Sep 2015 07:10:33 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.1.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Thu, 10 Sep 2015 07:10:33 GMT";
head1.meta[4] = meta6;

head = head1;

Transform Transform8 = createNode("Transform");
Transform8.DEF = "_1";
Transform8.translation = new SFVec3f(new float[-3.07774,0,0]);
LOD LOD9 = createNode("LOD");
LOD9.DEF = "_2";
LOD9.range = new MFFloat(new float[20]);
Transform Transform10 = createNode("Transform");
Transform10.DEF = "Box_1";
Shape Shape11 = createNode("Shape");
Appearance Appearance12 = createNode("Appearance");
Material Material13 = createNode("Material");
Material13.DEF = "Rococo12_1";
Material13.ambientIntensity = 0.226102;
Material13.diffuseColor = new SFColor(new float[0.904409,0.146366,0.208768]);
Material13.specularColor = new SFColor(new float[0.0955906,0.0955906,0.0955906]);
Material13.shininess = 0.078125;
Appearance12.material = Material13;

Shape11.appearance = Appearance12;

Box Box14 = createNode("Box");
Shape11.geometry = Box14;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

LOD9.children = new MFNode();

LOD9.children[0] = Transform10;

Transform Transform15 = createNode("Transform");
Transform15.DEF = "Box_2";
Shape Shape16 = createNode("Shape");
Appearance Appearance17 = createNode("Appearance");
Material Material18 = createNode("Material");
Material18.DEF = "Rococo28_1";
Material18.ambientIntensity = 0.226102;
Material18.diffuseColor = new SFColor(new float[0.279645,0.904409,0.511589]);
Material18.specularColor = new SFColor(new float[0.0955906,0.0955906,0.0955906]);
Material18.shininess = 0.078125;
Appearance17.material = Material18;

Shape16.appearance = Appearance17;

Box Box19 = createNode("Box");
Shape16.geometry = Box19;

Transform15.child = new undefined();

Transform15.child[0] = Shape16;

LOD9.children[1] = Transform15;

Transform8.children = new MFNode();

Transform8.children[0] = LOD9;

children = new MFNode();

children[0] = Transform8;

Transform Transform20 = createNode("Transform");
Transform20.translation = new SFVec3f(new float[3.35422,0,-16.1449]);
LOD LOD21 = createNode("LOD");
LOD21.USE = "_2";
Transform20.children = new MFNode();

Transform20.children[0] = LOD21;

children[1] = Transform20;

Viewpoint Viewpoint22 = createNode("Viewpoint");
Viewpoint22.DEF = "_3";
Viewpoint22.description = "Home";
children[2] = Viewpoint22;

}
