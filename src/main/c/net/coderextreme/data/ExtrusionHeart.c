#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "ExtrusionHeart.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "description";
meta3.content = "Simple extrusion of a Valentine heart.";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "creator";
meta4.content = "Class participants in course Introduction to VRML/X3D.";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "created";
meta5.content = "14 February 2001";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "modified";
meta6.content = "27 November 2015";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "identifier";
meta7.content = "https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "generator";
meta8.content = "X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit";
head1.meta[6] = meta8;

head = head1;

Viewpoint Viewpoint10 = createNode("Viewpoint");
Viewpoint10.description = "Extrusion Heart";
Viewpoint10.position = new SFVec3f(new float[0,-4,0]);
Viewpoint10.orientation = new SFRotation(new float[1,0,0,1.57]);
children = new MFNode();

children[0] = Viewpoint10;

Transform Transform11 = createNode("Transform");
Transform11.translation = new SFVec3f(new float[0,-0.5,0]);
Shape Shape12 = createNode("Shape");
Appearance Appearance13 = createNode("Appearance");
Material Material14 = createNode("Material");
Material14.diffuseColor = new SFColor(new float[0.8,0.3,0.3]);
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

Extrusion Extrusion15 = createNode("Extrusion");
Extrusion15.solid = False;
Extrusion15.creaseAngle = 3.14159;
Extrusion15.crossSection = new MFVec2f(new float[0,0.8,0.2,1,0.7,0.95,1,0.5,0.8,0,0.5,-0.3,0,-0.7,-0.5,-0.3,-0.8,0,-1,0.5,-0.7,0.95,-0.2,1,0,0.8]);
Extrusion15.scale = new MFVec2f(new float[0.01,0.01,0.8,0.8,1,1,0.8,0.8,0.01,0.01]);
Extrusion15.spine = new MFVec3f(new float[0,0,0,0,0.1,0,0,0.5,0,0,0.9,0,0,1,0]);
Shape12.geometry = Extrusion15;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

children[1] = Transform11;

}
