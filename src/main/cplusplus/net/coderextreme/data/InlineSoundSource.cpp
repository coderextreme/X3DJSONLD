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
X3D0->setProfile(CString("Full"));
X3D0->setVersion(CString("4.0"));
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName(CString("title"));
meta2->setContent(CString("InlineSoundSource.x3d"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("description"));
meta3->setContent(CString("This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the \"url\" of X3D file."));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("info"));
meta4->setContent(CString("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API."));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("creator"));
meta5->setContent(CString("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("created"));
meta6->setContent(CString("28 October 2020"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("modified"));
meta7->setContent(CString("4 August 2021"));
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName(CString("reference"));
meta8->setContent(CString("CHANGELOG.txt"));
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName(CString("TODO"));
meta9->setContent(CString("credit for audio files"));
head1->addMeta(meta9);

meta* meta10 = new meta();
meta10->setName(CString("reference"));
meta10->setContent(CString("https://medialab.hmu.gr/minipages/x3domAudio"));
head1->addMeta(meta10);

meta* meta11 = new meta();
meta11->setName(CString("identifier"));
meta11->setContent(CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d"));
head1->addMeta(meta11);

meta* meta12 = new meta();
meta12->setName(CString("generator"));
meta12->setContent(CString("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"));
head1->addMeta(meta12);

meta* meta13 = new meta();
meta13->setName(CString("license"));
meta13->setContent(CString("../license.html"));
head1->addMeta(meta13);

X3D0->setHead(head1);

Scene* Scene14 = new Scene();
WorldInfo* WorldInfo15 = new WorldInfo();
WorldInfo15->setTitle(CString("InlineSoundSource.x3d"));
Scene14->addChild(WorldInfo15);

NavigationInfo* NavigationInfo16 = new NavigationInfo();
NavigationInfo16->setDEF(CString("NAV"));
Scene14->addChild(NavigationInfo16);

Background* Background17 = new Background();
Background17->setBackUrl(new CString[2]{CString("images/generic/BK1.png"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png")}, 2);
Background17->setBottomUrl(new CString[2]{CString("images/generic/DN1.png"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png")}, 2);
Background17->setFrontUrl(new CString[2]{CString("images/generic/FR1.png"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png")}, 2);
Background17->setLeftUrl(new CString[2]{CString("images/generic/LF1.png"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png")}, 2);
Background17->setRightUrl(new CString[2]{CString("images/generic/RT1.png"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png")}, 2);
Background17->setTopUrl(new CString[2]{CString("images/generic/UP1.png"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png")}, 2);
Scene14->addChild(Background17);

Viewpoint* Viewpoint18 = new Viewpoint();
Viewpoint18->setDEF(CString("Camera001"));
Viewpoint18->setDescription(CString("Camera001"));
Viewpoint18->setFarDistance(0);
Viewpoint18->setNearDistance(1);
Viewpoint18->setOrientation(new float[4]{1,0,0,-0.523599});
Viewpoint18->setPosition(new float[3]{0,2000,3500});
Scene14->addChild(Viewpoint18);

Transform* Transform19 = new Transform();
Transform19->setDEF(CString("Floor"));
Transform19->setTranslation(new float[3]{1.241,0,0.358});
Shape* Shape20 = new Shape();
Appearance* Appearance21 = new Appearance();
Appearance21->setDEF(CString("WireColor"));
Material* Material22 = new Material();
Material22->setDiffuseColor(new float[3]{0.122,0.114,0.125});
Appearance21->addChild(Material22);

Shape20->addChild(Appearance21);

IndexedFaceSet* IndexedFaceSet23 = new IndexedFaceSet();
IndexedFaceSet23->setDEF(CString("Box001-GEOMETRY"));
IndexedFaceSet23->setCoordIndex(new int32_t[48]{0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,15,16,17,-1,18,19,20,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,34,35,-1}, 48);
IndexedFaceSet23->setSolid(False);
Coordinate* Coordinate24 = new Coordinate();
Coordinate24->setPoint(new float[108]{-1000,0,1000,-1000,0,-1000,1000,0,-1000,1000,0,-1000,1000,0,1000,-1000,0,1000,-1000,8.031588,1000,1000,8.031588,1000,1000,8.031588,-1000,1000,8.031588,-1000,-1000,8.031588,-1000,-1000,8.031588,1000,-1000,0,1000,1000,0,1000,1000,8.031588,1000,1000,8.031588,1000,-1000,8.031588,1000,-1000,0,1000,1000,0,1000,1000,0,-1000,1000,8.031588,-1000,1000,8.031588,-1000,1000,8.031588,1000,1000,0,1000,1000,0,-1000,-1000,0,-1000,-1000,8.031588,-1000,-1000,8.031588,-1000,1000,8.031588,-1000,1000,0,-1000,-1000,0,-1000,-1000,0,1000,-1000,8.031588,1000,-1000,8.031588,1000,-1000,8.031588,-1000,-1000,0,-1000}, 108);
IndexedFaceSet23->addChild(Coordinate24);

Normal* Normal25 = new Normal();
Normal25->setVector(new float[108]{0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0}, 108);
IndexedFaceSet23->setNormal(Normal25);

Shape20->setGeometry(IndexedFaceSet23);

Transform19->addChild(Shape20);

Scene14->addChild(Transform19);

Transform* Transform26 = new Transform();
Transform26->setDEF(CString("InlineScene"));
Inline* Inline27 = new Inline();
Inline27->setDEF(CString("inline"));
Inline27->setUrl(new CString[4]{CString("x3d/example1.x3d"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d"), CString("x3d/example1.wrl"), CString("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl")}, 4);
Transform26->addChild(Inline27);

Scene14->addChild(Transform26);

X3D0->setScene(Scene14);

}
