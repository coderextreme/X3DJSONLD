#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Full";
X3D0.version = "3.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "comment";
meta2.content = "World of Titania";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Sat, 29 Aug 2015 04:01:22 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Holger Seelig";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "generator";
meta5.content = "Titania V1.0.0, http://titania.create3000.de";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "Sat, 29 Aug 2015 04:01:22 GMT";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "title";
meta7.content = "LayerSet";
head1.meta[5] = meta7;

head = head1;

LayerSet LayerSet9 = createNode("LayerSet");
LayerSet9.activeLayer = 2;
LayerSet9.order = new MFInt32(new int[1,2]);
Layer Layer10 = createNode("Layer");
Layer10.DEF = "Right";
Viewpoint Viewpoint11 = createNode("Viewpoint");
Viewpoint11.description = "Right";
Viewpoint11.position = new SFVec3f(new float[0,0,20]);
Layer10.children = new MFNode();

Layer10.children[0] = Viewpoint11;

Viewpoint Viewpoint12 = createNode("Viewpoint");
Viewpoint12.USE = "Clone";
Layer10.children[1] = Viewpoint12;

Transform Transform13 = createNode("Transform");
Transform13.DEF = "Blue";
Transform13.translation = new SFVec3f(new float[2,0,0]);
Shape Shape14 = createNode("Shape");
Appearance Appearance15 = createNode("Appearance");
Material Material16 = createNode("Material");
Material16.diffuseColor = new SFColor(new float[0,0,1]);
Appearance15.material = Material16;

Shape14.appearance = Appearance15;

Box Box17 = createNode("Box");
Shape14.geometry = Box17;

Transform13.child = new undefined();

Transform13.child[0] = Shape14;

Layer10.children[2] = Transform13;

Transform Transform18 = createNode("Transform");
Transform18.DEF = "DarkBlue";
Transform18.translation = new SFVec3f(new float[5,0,0]);
Shape Shape19 = createNode("Shape");
Appearance Appearance20 = createNode("Appearance");
Material Material21 = createNode("Material");
Material21.diffuseColor = new SFColor(new float[0,0,0.5]);
Appearance20.material = Material21;

Shape19.appearance = Appearance20;

Box Box22 = createNode("Box");
Box22.USE = "Box";
Shape19.geometry = Box22;

Transform18.child = new undefined();

Transform18.child[0] = Shape19;

Layer10.children[3] = Transform18;

LayerSet9.layers = new MFNode();

LayerSet9.layers[0] = Layer10;

layerSet = new undefined();

layerSet[0] = LayerSet9;

}
