#ifdef WIN32
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#endif
#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile(CString("Interchange"));
X3D0->setVersion(CString("3.0"));
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName(CString("title"));
meta2->setContent(CString("indexedfaceset_pixeltexture_plus.x3d"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("Image"));
meta3->setContent(CString("indexedfaceset_pixeltexture_plus-front.jpg"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("Image"));
meta4->setContent(CString("indexedfaceset_pixeltexture_plus-rear.jpg"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("Image"));
meta5->setContent(CString("indexedfaceset_pixeltexture_plus-top.jpg"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("Image"));
meta6->setContent(CString("indexedfaceset_pixeltexture_plus-bottom.jpg"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("Image"));
meta7->setContent(CString("indexedfaceset_pixeltexture_plus-left.jpg"));
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName(CString("Image"));
meta8->setContent(CString("indexedfaceset_pixeltexture_plus-right.jpg"));
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName(CString("reference"));
meta9->setContent(CString("http://www.nist.gov/vrml.html"));
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName(CString("reference"));
meta10->setContent(CString("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"));
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName(CString("creator"));
meta11->setContent(CString("http://www.itl.nist.gov/div897/ctg/vrml/members.html"));
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName(CString("disclaimer"));
meta12->setContent(CString("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."));
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName(CString("info"));
meta13->setContent(CString("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"));
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName(CString("translator"));
meta14->setContent(CString("Michael Kass NIST, Don Brutzman NPS"));
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName(CString("translated"));
meta15->setContent(CString("21 January 2001"));
head1->addMeta(meta15);

meta* meta16 = new meta();
meta16->setName(CString("modified"));
meta16->setContent(CString("13 January 2014"));
head1->addMeta(meta16);

meta* meta17 = new meta();
meta17->setName(CString("description"));
meta17->setContent(CString("Test of browser ability to map a 3 times multiple of an PixelTexture onto an IndexedFaceSet geometry. A 3 by 3 matrix of four equal sized red, green, white and yellow squares in the pixel texture map all the faces of the cube."));
head1->addMeta(meta17);

meta* meta18 = new meta();
meta18->setName(CString("identifier"));
meta18->setContent(CString("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus.x3d"));
head1->addMeta(meta18);

meta* meta19 = new meta();
meta19->setName(CString("generator"));
meta19->setContent(CString("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"));
head1->addMeta(meta19);

meta* meta20 = new meta();
meta20->setName(CString("generator"));
meta20->setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta20);

meta* meta21 = new meta();
meta21->setName(CString("license"));
meta21->setContent(CString("../../license.html"));
head1->addMeta(meta21);

X3D0->setHead(head1);

Scene* Scene22 = new Scene();
Viewpoint* Viewpoint23 = new Viewpoint();
Viewpoint23->setDescription(CString("Front View"));
Scene22->addChild(Viewpoint23);

Viewpoint* Viewpoint24 = new Viewpoint();
Viewpoint24->setDescription(CString("Rear View"));
Viewpoint24->setOrientation(new float[4]{0,1,0,3.14});
Viewpoint24->setPosition(new float[3]{0,0,-10});
Scene22->addChild(Viewpoint24);

Viewpoint* Viewpoint25 = new Viewpoint();
Viewpoint25->setDescription(CString("Top View"));
Viewpoint25->setOrientation(new float[4]{1,0,0,-1.57});
Viewpoint25->setPosition(new float[3]{0,10,0});
Scene22->addChild(Viewpoint25);

Viewpoint* Viewpoint26 = new Viewpoint();
Viewpoint26->setDescription(CString("Bottom View"));
Viewpoint26->setOrientation(new float[4]{1,0,0,1.57});
Viewpoint26->setPosition(new float[3]{0,-10,0});
Scene22->addChild(Viewpoint26);

Viewpoint* Viewpoint27 = new Viewpoint();
Viewpoint27->setDescription(CString("Right View"));
Viewpoint27->setOrientation(new float[4]{0,1,0,1.57});
Viewpoint27->setPosition(new float[3]{10,0,0});
Scene22->addChild(Viewpoint27);

Viewpoint* Viewpoint28 = new Viewpoint();
Viewpoint28->setDescription(CString("Left View"));
Viewpoint28->setOrientation(new float[4]{0,1,0,-1.57});
Viewpoint28->setPosition(new float[3]{-10,0,0});
Scene22->addChild(Viewpoint28);

NavigationInfo* NavigationInfo29 = new NavigationInfo();
NavigationInfo29->setType(new CString[4]{CString("EXAMINE"), CString("WALK"), CString("FLY"), CString("ANY")}, 4);
Scene22->addChild(NavigationInfo29);

Shape* Shape30 = new Shape();
Appearance* Appearance31 = new Appearance();
Material* Material32 = new Material();
Appearance31->addChild(Material32);

PixelTexture* PixelTexture33 = new PixelTexture();
PixelTexture33->setImage(new int32_t[7]{2,2,4,-16776961,16711935,-1,-65281});
Appearance31->addChild(PixelTexture33);

Shape30->addChild(Appearance31);

IndexedFaceSet* IndexedFaceSet34 = new IndexedFaceSet();
IndexedFaceSet34->setColorPerVertex(False);
IndexedFaceSet34->setCoordIndex(new int32_t[30]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
IndexedFaceSet34->setCreaseAngle(0.5);
IndexedFaceSet34->setTexCoordIndex(new int[30]{0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1}, 30);
CColor* Color35 = new CColor();
Color35->setColor(new float[18]{0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0}, 18);
IndexedFaceSet34->addChild(Color35);

Coordinate* Coordinate36 = new Coordinate();
Coordinate36->setPoint(new float[24]{-2,1,1,-2,-1,1,2,1,1,2,-1,1,2,1,-1,2,-1,-1,-2,1,-1,-2,-1,-1}, 24);
IndexedFaceSet34->addChild(Coordinate36);

TextureCoordinate* TextureCoordinate37 = new TextureCoordinate();
TextureCoordinate37->setPoint(new float[8]{-1,2,-1,-1,2,2,2,-1}, 8);
IndexedFaceSet34->addChild(TextureCoordinate37);

Shape30->setGeometry(IndexedFaceSet34);

Scene22->addChild(Shape30);

X3D0->setScene(Scene22);

}
