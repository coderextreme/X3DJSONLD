#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Interchange";
head head1 = createNode("head");
head = head1;

Transform Transform3 = createNode("Transform");
Transform3.scale = new SFVec3f(new float[10,10,1]);
Transform3.rotation = new SFRotation(new float[1,0,0,3.14]);
Shape Shape4 = createNode("Shape");
Appearance Appearance5 = createNode("Appearance");
Material Material6 = createNode("Material");
Material6.diffuseColor = new SFColor(new float[0.8,0.5,0.5]);
Appearance5.material = Material6;

ImageTexture ImageTexture7 = createNode("ImageTexture");
ImageTexture7.url = new MFString(new java.lang.String["./face1.jpg"]);
Appearance5.texture = ImageTexture7;

Shape4.appearance = Appearance5;

Sphere Sphere8 = createNode("Sphere");
Shape4.geometry = Sphere8;

Transform3.child = new undefined();

Transform3.child[0] = Shape4;

children = new MFNode();

children[0] = Transform3;

}
