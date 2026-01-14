#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "WinterAndSpringAuthorsAllTitleBox.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Credits for scene authors.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Carol McDonald";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "translator";
meta5.content = "Joe Williams and Don Brutzman";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "created";
meta6.content = "26 June 2023";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "modified";
meta7.content = "Mon, 15 Sep 2025 05:21:02 GMT";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "reference";
meta8.content = "https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/Flower.Set.x3d";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "identifier";
meta9.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringAuthorsAllTitleBox.x3d";
head1.meta[7] = meta9;

head = head1;

WorldInfo WorldInfo11 = createNode("WorldInfo");
WorldInfo11.title = "WinterAndSpringAuthorsAllTitleBox.x3d";
children = new MFNode();

children[0] = WorldInfo11;

Viewpoint Viewpoint12 = createNode("Viewpoint");
Viewpoint12.DEF = "WSAuthorsAllTitleView";
Viewpoint12.description = "Look at Authors title";
Viewpoint12.position = new SFVec3f(new float[10,11,0]);
Viewpoint12.orientation = new SFRotation(new float[-0.15,0,0,0.2]);
children[1] = Viewpoint12;

Transform Transform13 = createNode("Transform");
Transform13.DEF = "WSAuthorsTitle";
Transform13.translation = new SFVec3f(new float[10,10,-5]);
Shape Shape14 = createNode("Shape");
Appearance Appearance15 = createNode("Appearance");
Material Material16 = createNode("Material");
Appearance15.material = Material16;

ImageTexture ImageTexture17 = createNode("ImageTexture");
ImageTexture17.url = new MFString(new java.lang.String["images/WSAuthorsAll.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/WSAuthorsAll.png"]);
Appearance15.texture = ImageTexture17;

Shape14.appearance = Appearance15;

Box Box18 = createNode("Box");
Box18.size = new SFVec3f(new float[4,3,0.25]);
Shape14.geometry = Box18;

Transform13.child = new undefined();

Transform13.child[0] = Shape14;

children[2] = Transform13;

}
