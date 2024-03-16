/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Abstracts.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Concretes.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile("Interchange");
X3D0->setVersion("3.0");
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("rgb_alpha.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("Image");
meta3->setContent("rgb_alpha-front.jpg");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("Image");
meta4->setContent("rgb_alpha-rear.jpg");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("Image");
meta5->setContent("rgb_alpha-top.jpg");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("Image");
meta6->setContent("rgb_alpha-bottom.jpg");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("reference");
meta7->setContent("http://www.nist.gov/vrml.html");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("reference");
meta8->setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("creator");
meta9->setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("disclaimer");
meta10->setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("info");
meta11->setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("translator");
meta12->setContent("Michael Kass NIST, Don Brutzman NPS");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("translated");
meta13->setContent("21 January 2001");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("modified");
meta14->setContent("16 January 2011");
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName("description");
meta15->setContent("Test browser ability to map a RGB plus alpha opacity to geometry. A checkerboard of four colored squares: lower left (red), lower right (transparent), uppser left (transparent) and upper right (red) map onto the faces of all geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box.");
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName("identifier");
meta16->setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/PixelTexture/rgb_alpha.x3d");
head1->addMeta(meta16);

meta* meta17 = new meta();
meta17->setName("generator");
meta17->setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html");
head1->addMeta(meta17);

meta* meta18 = new meta();
meta18->setName("generator");
meta18->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta18);

meta* meta19 = new meta();
meta19->setName("license");
meta19->setContent("../../license.html");
head1->addMeta(meta19);

X3D0->setHead(head1);

Scene* Scene20 = new Scene();
NavigationInfo* NavigationInfo21 = new NavigationInfo();
NavigationInfo21->setType(new String[4]{"EXAMINE","WALK","FLY","ANY"}, 4);
Scene20->addChild(NavigationInfo21);

Group* Group22 = new Group();
Transform* Transform23 = new Transform();
Transform23->setTranslation(new float[3]{6.14221,0.0694613,-0.000999451});
Shape* Shape24 = new Shape();
Appearance* Appearance25 = new Appearance();
Material* Material26 = new Material();
Appearance25->setMaterial(Material26);

PixelTexture* PixelTexture27 = new PixelTexture();
PixelTexture27->setDEF("RgbOpacityCheckerboard");
PixelTexture27->setImage(new int[7]{2,2,4,-16776961,-65536,-65536,-16776961});
Appearance25->setTexture(PixelTexture27);

Shape24->setAppearance(Appearance25);

Box* Box28 = new Box();
Shape24->setGeometry(Box28);

Transform23->addChild(Shape24);

Group22->addChild(Transform23);

Transform* Transform29 = new Transform();
Transform29->setTranslation(new float[3]{-4.85443,0.0694381,-0.00149918});
Shape* Shape30 = new Shape();
Appearance* Appearance31 = new Appearance();
Material* Material32 = new Material();
Appearance31->setMaterial(Material32);

PixelTexture* PixelTexture33 = new PixelTexture();
PixelTexture33->setUSE("RgbOpacityCheckerboard");
Appearance31->setTexture(PixelTexture33);

Shape30->setAppearance(Appearance31);

Sphere* Sphere34 = new Sphere();
Shape30->setGeometry(Sphere34);

Transform29->addChild(Shape30);

Group22->addChild(Transform29);

Transform* Transform35 = new Transform();
Transform35->setTranslation(new float[3]{-1.47341,0.036672,-0.00175095});
Shape* Shape36 = new Shape();
Appearance* Appearance37 = new Appearance();
Material* Material38 = new Material();
Appearance37->setMaterial(Material38);

PixelTexture* PixelTexture39 = new PixelTexture();
PixelTexture39->setUSE("RgbOpacityCheckerboard");
Appearance37->setTexture(PixelTexture39);

Shape36->setAppearance(Appearance37);

Cone* Cone40 = new Cone();
Shape36->setGeometry(Cone40);

Transform35->addChild(Shape36);

Group22->addChild(Transform35);

Transform* Transform41 = new Transform();
Transform41->setTranslation(new float[3]{2.31094,0.0694206,-0.00187683});
Shape* Shape42 = new Shape();
Appearance* Appearance43 = new Appearance();
Material* Material44 = new Material();
Appearance43->setMaterial(Material44);

PixelTexture* PixelTexture45 = new PixelTexture();
PixelTexture45->setUSE("RgbOpacityCheckerboard");
Appearance43->setTexture(PixelTexture45);

Shape42->setAppearance(Appearance43);

Cylinder* Cylinder46 = new Cylinder();
Shape42->setGeometry(Cylinder46);

Transform41->addChild(Shape42);

Group22->addChild(Transform41);

Scene20->addChild(Group22);

X3D0->setScene(Scene20);

X3D0->toXMLString();
}
