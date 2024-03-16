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
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("qq3.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("creator");
meta3->setContent("John Carlson");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("translator");
meta4->setContent("John Carlson");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("created");
meta5->setContent("11 Jan 2015");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("modified");
meta6->setContent("05 May 2017");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("description");
meta7->setContent("12 extrusions to test prototype expander");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("identifier");
meta8->setContent("https://coderextreme.net/x3d/qq3.x3d");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("generator");
meta9->setContent("manual");
head1->addMeta(meta9);

X3D0->setHead(head1);

Scene* Scene10 = new Scene();
ProtoDeclare* ProtoDeclare11 = new ProtoDeclare();
ProtoDeclare11->setName("Process");
ProtoBody* ProtoBody12 = new ProtoBody();
Group* Group13 = new Group();
//left
Transform* Transform14 = new Transform();
Transform14->setScale(new float[3]{0.5,0.5,0.5});
Shape* Shape15 = new Shape();
Shape15->setDEF("ShapeLeftDown");
Appearance* Appearance16 = new Appearance();
Material* Material17 = new Material();
Material17->setDiffuseColor(new float[3]{0.7,1,0});
Appearance16->setMaterial(Material17);

Shape15->setAppearance(Appearance16);

Extrusion* Extrusion18 = new Extrusion();
Extrusion18->setSpine(new float[6]{-2.5,0,0,-1.5,0,0});
Extrusion18->setCreaseAngle(0.785);
Extrusion18->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Shape15->setGeometry(Extrusion18);

Transform14->addChild(Shape15);

Group13->addChild(Transform14);

//right
Transform* Transform19 = new Transform();
Transform19->setScale(new float[3]{0.5,0.5,0.5});
Shape* Shape20 = new Shape();
Shape20->setDEF("ShapeUpRight");
Appearance* Appearance21 = new Appearance();
Material* Material22 = new Material();
Material22->setDiffuseColor(new float[3]{0,0.7,1});
Appearance21->setMaterial(Material22);

Shape20->setAppearance(Appearance21);

Extrusion* Extrusion23 = new Extrusion();
Extrusion23->setSpine(new float[6]{1.5,0,0,2.5,0,0});
Extrusion23->setCreaseAngle(0.785);
Extrusion23->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Shape20->setGeometry(Extrusion23);

Transform19->addChild(Shape20);

Group13->addChild(Transform19);

//up
Transform* Transform24 = new Transform();
Transform24->setScale(new float[3]{0.5,0.5,0.5});
Shape* Shape25 = new Shape();
Shape25->setUSE("ShapeUpRight");
Transform24->addChild(Shape25);

Group13->addChild(Transform24);

//down
Transform* Transform26 = new Transform();
Transform26->setScale(new float[3]{0.5,0.5,0.5});
Shape* Shape27 = new Shape();
Shape27->setUSE("ShapeLeftDown");
Transform26->addChild(Shape27);

Group13->addChild(Transform26);

ProtoBody12->addChild(Group13);

ProtoDeclare11->setProtoBody(ProtoBody12);

Scene10->addChild(ProtoDeclare11);

Viewpoint* Viewpoint28 = new Viewpoint();
Viewpoint28->setDescription("Process pipes");
Viewpoint28->setOrientation(new float[4]{1,0,0,-0.4});
Viewpoint28->setPosition(new float[3]{0,5,12});
Scene10->addChild(Viewpoint28);

Transform* Transform29 = new Transform();
Transform29->setTranslation(new float[3]{0,-2.5,0});
ProtoInstance* ProtoInstance30 = new ProtoInstance();
ProtoInstance30->setName("Process");
Transform29->addChild(ProtoInstance30);

Scene10->addChild(Transform29);

Transform* Transform31 = new Transform();
ProtoInstance* ProtoInstance32 = new ProtoInstance();
ProtoInstance32->setName("Process");
Transform31->addChild(ProtoInstance32);

Scene10->addChild(Transform31);

Transform* Transform33 = new Transform();
Transform33->setTranslation(new float[3]{0,2.5,0});
ProtoInstance* ProtoInstance34 = new ProtoInstance();
ProtoInstance34->setName("Process");
Transform33->addChild(ProtoInstance34);

Scene10->addChild(Transform33);

X3D0->setScene(Scene10);

X3D0->toXMLString();
}
