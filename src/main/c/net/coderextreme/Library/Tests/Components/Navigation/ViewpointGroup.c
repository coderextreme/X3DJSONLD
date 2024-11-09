#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "ViewpointGroup";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "created";
meta3.content = "Sun, 07 May 2023 09:08:53 GMT";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "comment";
meta4.content = "Rise and Shine";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "creator";
meta5.content = "Holger Seelig";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "Sunrize X3D Editor V1.0.24, https://create3000.github.io/sunrize/";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "identifier";
meta7.content = "file:///Volumes/Home/Projekte/Library/Tests/Components/Navigation/ViewpointGroup.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "modified";
meta8.content = "Sun, 07 May 2023 09:37:40 GMT";
head1.meta[6] = meta8;

head = head1;

Viewpoint Viewpoint10 = createNode("Viewpoint");
Viewpoint10.description = "Outside";
Viewpoint10.position = new SFVec3f(new float[0,0,25]);
children = new MFNode();

children[0] = Viewpoint10;

Viewpoint Viewpoint11 = createNode("Viewpoint");
Viewpoint11.description = "Inside";
Viewpoint11.position = new SFVec3f(new float[0,0,15]);
children[1] = Viewpoint11;

ViewpointGroup ViewpointGroup12 = createNode("ViewpointGroup");
ViewpointGroup12.description = "Group";
ViewpointGroup12.size = new SFVec3f(new float[35,35,35]);
Viewpoint Viewpoint13 = createNode("Viewpoint");
Viewpoint13.description = "First in Group";
Viewpoint13.position = new SFVec3f(new float[0,0,20]);
ViewpointGroup12.children = new MFNode();

ViewpointGroup12.children[0] = Viewpoint13;

ViewpointGroup ViewpointGroup14 = createNode("ViewpointGroup");
ViewpointGroup14.description = "SubGroup";
Viewpoint Viewpoint15 = createNode("Viewpoint");
Viewpoint15.description = "Second in SubGroup";
Viewpoint15.position = new SFVec3f(new float[0,0,25]);
ViewpointGroup14.children = new MFNode();

ViewpointGroup14.children[0] = Viewpoint15;

Viewpoint Viewpoint16 = createNode("Viewpoint");
Viewpoint16.description = "Third in SubGroup";
Viewpoint16.position = new SFVec3f(new float[0,0,30]);
ViewpointGroup14.children[1] = Viewpoint16;

ViewpointGroup12.children[1] = ViewpointGroup14;

children[2] = ViewpointGroup12;

Transform Transform17 = createNode("Transform");
Transform17.DEF = "ViewpointGroupBox";
Transform17.scale = new SFVec3f(new float[35,35,35]);
Shape Shape18 = createNode("Shape");
Appearance Appearance19 = createNode("Appearance");
Material Material20 = createNode("Material");
Material20.diffuseColor = new SFColor(new float[0.5,0,1]);
Material20.transparency = 0.5;
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

Box Box21 = createNode("Box");
Shape18.geometry = Box21;

Transform17.child = new undefined();

Transform17.child[0] = Shape18;

children[3] = Transform17;

Transform Transform22 = createNode("Transform");
Transform22.DEF = "Box";
Shape Shape23 = createNode("Shape");
Appearance Appearance24 = createNode("Appearance");
Material Material25 = createNode("Material");
Appearance24.material = Material25;

Shape23.appearance = Appearance24;

Box Box26 = createNode("Box");
Shape23.geometry = Box26;

Transform22.child = new undefined();

Transform22.child[0] = Shape23;

children[4] = Transform22;

}
