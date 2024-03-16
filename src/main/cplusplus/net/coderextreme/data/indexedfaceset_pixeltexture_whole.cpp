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
meta2->setContent("indexedfaceset_pixeltexture_whole.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("warning");
meta3->setContent("file did not transform to vrml97");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("Image");
meta4->setContent("indexedfaceset_pixeltexture_whole-front.jpg");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("Image");
meta5->setContent("indexedfaceset_pixeltexture_whole-rear.jpg");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("Image");
meta6->setContent("indexedfaceset_pixeltexture_whole-top.jpg");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("Image");
meta7->setContent("indexedfaceset_pixeltexture_whole-bottom.jpg");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("Image");
meta8->setContent("indexedfaceset_pixeltexture_whole-left.jpg");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("Image");
meta9->setContent("indexedfaceset_pixeltexture_whole-right.jpg");
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName("reference");
meta10->setContent("http://www.nist.gov/vrml.html");
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName("reference");
meta11->setContent("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html");
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName("creator");
meta12->setContent("http://www.itl.nist.gov/div897/ctg/vrml/members.html");
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName("disclaimer");
meta13->setContent("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.");
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName("info");
meta14->setContent("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d");
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName("translator");
meta15->setContent("Michael Kass NIST, Don Brutzman NPS");
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName("translated");
meta16->setContent("21 January 2001");
head1->addMeta(meta16);

meta* meta17 = new meta();
meta17->setName("modified");
meta17->setContent("13 January 2014");
head1->addMeta(meta17);

meta* meta18 = new meta();
meta18->setName("description");
meta18->setContent("Test of browser ability to map the entire portion of an PixelTexture onto an IndexedFaceSet geometry. Four equal sized red (bottom left), green (bottom right) yellow (top left) and white (top right) squares in the pixel texture map all the faces of the cube.");
head1->addMeta(meta18);

meta* meta19 = new meta();
meta19->setName("identifier");
meta19->setContent("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_whole.x3d");
head1->addMeta(meta19);

meta* meta20 = new meta();
meta20->setName("generator");
meta20->setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html");
head1->addMeta(meta20);

meta* meta21 = new meta();
meta21->setName("generator");
meta21->setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit");
head1->addMeta(meta21);

meta* meta22 = new meta();
meta22->setName("license");
meta22->setContent("../../license.html");
head1->addMeta(meta22);

X3D0->setHead(head1);

Scene* Scene23 = new Scene();
Viewpoint* Viewpoint24 = new Viewpoint();
Viewpoint24->setDescription("Front View");
Scene23->addChild(Viewpoint24);

Viewpoint* Viewpoint25 = new Viewpoint();
Viewpoint25->setDescription("Rear View");
Viewpoint25->setOrientation(new float[4]{0,1,0,3.14});
Viewpoint25->setPosition(new float[3]{0,0,-10});
Scene23->addChild(Viewpoint25);

Viewpoint* Viewpoint26 = new Viewpoint();
Viewpoint26->setDescription("Top View");
Viewpoint26->setOrientation(new float[4]{1,0,0,-1.57});
Viewpoint26->setPosition(new float[3]{0,10,0});
Scene23->addChild(Viewpoint26);

Viewpoint* Viewpoint27 = new Viewpoint();
Viewpoint27->setDescription("Bottom View");
Viewpoint27->setOrientation(new float[4]{1,0,0,1.57});
Viewpoint27->setPosition(new float[3]{0,-10,0});
Scene23->addChild(Viewpoint27);

Viewpoint* Viewpoint28 = new Viewpoint();
Viewpoint28->setDescription("Right View");
Viewpoint28->setOrientation(new float[4]{0,1,0,1.57});
Viewpoint28->setPosition(new float[3]{10,0,0});
Scene23->addChild(Viewpoint28);

Viewpoint* Viewpoint29 = new Viewpoint();
Viewpoint29->setDescription("Left View");
Viewpoint29->setOrientation(new float[4]{0,1,0,-1.57});
Viewpoint29->setPosition(new float[3]{-10,0,0});
Scene23->addChild(Viewpoint29);

NavigationInfo* NavigationInfo30 = new NavigationInfo();
NavigationInfo30->setType(new String[1]{"EXAMINE"}, 1);
Scene23->addChild(NavigationInfo30);

Shape* Shape31 = new Shape();
Appearance* Appearance32 = new Appearance();
Material* Material33 = new Material();
Appearance32->setMaterial(Material33);

PixelTexture* PixelTexture34 = new PixelTexture();
PixelTexture34->setImage(new int[7]{2,2,4,-16776961,16711935,-1,-65281});
Appearance32->setTexture(PixelTexture34);

Shape31->setAppearance(Appearance32);

IndexedFaceSet* IndexedFaceSet35 = new IndexedFaceSet();
IndexedFaceSet35->setColorPerVertex(False);
IndexedFaceSet35->setCoordIndex(new int[30]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1});
IndexedFaceSet35->setCreaseAngle(0.5);
IndexedFaceSet35->setTexCoordIndex(new int[30]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1});
Color* Color36 = new Color();
Color36->setColor(new float[18]{0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0});
IndexedFaceSet35->setColor(Color36);

Coordinate* Coordinate37 = new Coordinate();
Coordinate37->setPoint(new float[24]{-2,1,1,-2,-1,1,2,1,1,2,-1,1,2,1,-1,2,-1,-1,-2,1,-1,-2,-1,-1});
IndexedFaceSet35->setCoord(Coordinate37);

TextureCoordinate* TextureCoordinate38 = new TextureCoordinate();
TextureCoordinate38->setPoint(new float[8]{0,1,0,0,1,1,1,0});
IndexedFaceSet35->setTexCoord(TextureCoordinate38);

Shape31->setGeometry(IndexedFaceSet35);

Scene23->addChild(Shape31);

X3D0->setScene(Scene23);

X3D0->toXMLString();
}
