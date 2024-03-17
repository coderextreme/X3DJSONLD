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
SFImage SFImage0 = SFImage();
SFImage0.setValue(2, 2, 4, new int[4]{-16776961, 16711935, -1, -65281});
X3D* X3D0 = new X3D();
X3D0->setProfile(CString("Interchange"));
X3D0->setVersion(CString("3.0"));
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName(CString("title"));
meta2->setContent(CString("indexedfaceset_pixeltexture_entire.x3d"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("reference"));
meta3->setContent(CString("http://www.nist.gov/vrml.html"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("reference"));
meta4->setContent(CString("http://www.itl.nist.gov/div897/ctg/vrml/vrml.html"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("creator"));
meta5->setContent(CString("http://www.itl.nist.gov/div897/ctg/vrml/members.html"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("disclaimer"));
meta6->setContent(CString("This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified."));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("info"));
meta7->setContent(CString("Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d"));
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName(CString("translator"));
meta8->setContent(CString("Michael Kass NIST, Don Brutzman NPS"));
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName(CString("translated"));
meta9->setContent(CString("21 January 2001"));
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName(CString("modified"));
meta10->setContent(CString("13 January 2014"));
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName(CString("description"));
meta11->setContent(CString("Test browser ability to completely map one PixelTexture onto the surface of an IndexedFaceSet geometry. Four colored squares should map onto each face of the IndexedFaceSet. The PixelTexture consists of red quarter (lower left), green quarter (lower right), white quarter (upper left) and yellow quarter (upper right). PixelTexture should map once onto the surface of the IndexedFaceSet, with the S (horizontal) axis of the texture corresponding to the X axis of the geometry."));
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName(CString("identifier"));
meta12->setContent(CString("https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_entire.x3d"));
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName(CString("generator"));
meta13->setContent(CString("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"));
head1->addMeta(meta13);

meta* meta14 = new meta();
meta14->setName(CString("generator"));
meta14->setContent(CString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta14);

meta* meta15 = new meta();
meta15->setName(CString("license"));
meta15->setContent(CString("../../license.html"));
head1->addMeta(meta15);

X3D0->setHead(head1);

Scene* Scene16 = new Scene();
Viewpoint* Viewpoint17 = new Viewpoint();
Viewpoint17->setDescription(CString("Front View"));
Scene16->addChild(Viewpoint17);

Viewpoint* Viewpoint18 = new Viewpoint();
Viewpoint18->setDescription(CString("Rear View"));
Viewpoint18->setOrientation(new float[4]{0,1,0,3.14});
Viewpoint18->setPosition(new float[3]{0,0,-10});
Scene16->addChild(Viewpoint18);

Viewpoint* Viewpoint19 = new Viewpoint();
Viewpoint19->setDescription(CString("Top View"));
Viewpoint19->setOrientation(new float[4]{1,0,0,-1.57});
Viewpoint19->setPosition(new float[3]{0,10,0});
Scene16->addChild(Viewpoint19);

Viewpoint* Viewpoint20 = new Viewpoint();
Viewpoint20->setDescription(CString("Bottom View"));
Viewpoint20->setOrientation(new float[4]{1,0,0,1.57});
Viewpoint20->setPosition(new float[3]{0,-10,0});
Scene16->addChild(Viewpoint20);

Viewpoint* Viewpoint21 = new Viewpoint();
Viewpoint21->setDescription(CString("Right View"));
Viewpoint21->setOrientation(new float[4]{0,1,0,1.57});
Viewpoint21->setPosition(new float[3]{10,0,0});
Scene16->addChild(Viewpoint21);

Viewpoint* Viewpoint22 = new Viewpoint();
Viewpoint22->setDescription(CString("Left View"));
Viewpoint22->setOrientation(new float[4]{0,1,0,-1.57});
Viewpoint22->setPosition(new float[3]{-10,0,0});
Scene16->addChild(Viewpoint22);

NavigationInfo* NavigationInfo23 = new NavigationInfo();
NavigationInfo23->setType(new CString[4]{CString("EXAMINE"), CString("WALK"), CString("FLY"), CString("ANY")}, 4);
Scene16->addChild(NavigationInfo23);

Shape* Shape24 = new Shape();
Appearance* Appearance25 = new Appearance();
Material* Material26 = new Material();
Appearance25->addChild(Material26);

PixelTexture* PixelTexture27 = new PixelTexture();
PixelTexture27->setImage(SFImage0);
PixelTexture27->setRepeatS(False);
PixelTexture27->setRepeatT(False);
Appearance25->addChild(PixelTexture27);

Shape24->addChild(Appearance25);

IndexedFaceSet* IndexedFaceSet28 = new IndexedFaceSet();
IndexedFaceSet28->setCoordIndex(new int32_t[30]{0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1}, 30);
Coordinate* Coordinate29 = new Coordinate();
Coordinate29->setPoint(new float[24]{-2,1.5,1,-2,-1.5,1,2,1.5,1,2,-1.5,1,2,1.5,-1,2,-1.5,-1,-2,1.5,-1,-2,-1.5,-1}, 24);
IndexedFaceSet28->addChild(Coordinate29);

Shape24->setGeometry(IndexedFaceSet28);

Scene16->addChild(Shape24);

X3D0->setScene(Scene16);

}
