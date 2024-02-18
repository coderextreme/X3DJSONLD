/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/stylesheets/cpp/concretes.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("qq3.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("John Carlson");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("translator");
meta4->setContent("John Carlson");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("created");
meta5->setContent("11 Jan 2015");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("modified");
meta6->setContent("05 May 2017");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("description");
meta7->setContent("12 extrusions to test prototype expander");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("identifier");
meta8->setContent("https://coderextreme.net/x3d/qq3.x3d");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("generator");
meta9->setContent("manual");
head1->addMeta(*meta9);

X3D0->setHead(*head1);

CScene* Scene10 = new CScene();
CProtoDeclare ProtoDeclare11 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="Process" ><ProtoBody><Group><!--left--><Transform scale="0.5 0.5 0.5"><Shape DEF="ShapeLeftDown"><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0.7 1 0"></Material>
</Appearance>
<Extrusion spine="-2.5 0 0 -1.5 0 0" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0"></Extrusion>
</Shape>
</Transform>
<!--right--><Transform scale="0.5 0.5 0.5"><Shape DEF="ShapeUpRight"><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0 0.7 1"></Material>
</Appearance>
<Extrusion spine="1.5 0 0 2.5 0 0" creaseAngle="0.785" crossSection="1 0 0.92 -0.38 0.71 -0.71 0.38 -0.92 0 -1 -0.38 -0.92 -0.71 -0.71 -0.92 -0.38 -1 0 -0.92 0.38 -0.71 0.71 -0.38 0.92 0 1 0.38 0.92 0.71 0.71 0.92 0.38 1 0"></Extrusion>
</Shape>
</Transform>
<!--up--><Transform scale="0.5 0.5 0.5"><Shape USE="ShapeUpRight"></Shape>
</Transform>
<!--down--><Transform scale="0.5 0.5 0.5"><Shape USE="ShapeLeftDown"></Shape>
</Transform>
</Group>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare11->setName("Process");
CProtoBody* ProtoBody12 = new CProtoBody();
CGroup* Group13 = (CGroup *)(m_pScene.createNode("Group"));
//left
CTransform* Transform14 = (CTransform *)(m_pScene.createNode("Transform"));
Transform14->setScale(new float[3]{0.5,0.5,0.5});
CShape* Shape15 = (CShape *)(m_pScene.createNode("Shape"));
Shape15->setDEF("ShapeLeftDown");
CAppearance* Appearance16 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material17 = (CMaterial *)(m_pScene.createNode("Material"));
Material17->setDiffuseColor(new float[3]{0.7,1,0});
Appearance16->setMaterial(*Material17);

Shape15->setAppearance(*Appearance16);

CExtrusion* Extrusion18 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion18->setSpine(new float[6]{-2.5,0,0,-1.5,0,0});
Extrusion18->setCreaseAngle(0.785);
Extrusion18->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Shape15->setGeometry(Extrusion18);

Transform14->addChild(*Shape15);

Group13->addChildren(*Transform14);

//right
CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
Transform19->setScale(new float[3]{0.5,0.5,0.5});
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
Shape20->setDEF("ShapeUpRight");
CAppearance* Appearance21 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material22 = (CMaterial *)(m_pScene.createNode("Material"));
Material22->setDiffuseColor(new float[3]{0,0.7,1});
Appearance21->setMaterial(*Material22);

Shape20->setAppearance(*Appearance21);

CExtrusion* Extrusion23 = (CExtrusion *)(m_pScene.createNode("Extrusion"));
Extrusion23->setSpine(new float[6]{1.5,0,0,2.5,0,0});
Extrusion23->setCreaseAngle(0.785);
Extrusion23->setCrossSection(new float[34]{1,0,0.92,-0.38,0.71,-0.71,0.38,-0.92,0,-1,-0.38,-0.92,-0.71,-0.71,-0.92,-0.38,-1,0,-0.92,0.38,-0.71,0.71,-0.38,0.92,0,1,0.38,0.92,0.71,0.71,0.92,0.38,1,0});
Shape20->setGeometry(Extrusion23);

Transform19->addChild(*Shape20);

Group13->addChildren(*Transform19);

//up
CTransform* Transform24 = (CTransform *)(m_pScene.createNode("Transform"));
Transform24->setScale(new float[3]{0.5,0.5,0.5});
CShape* Shape25 = (CShape *)(m_pScene.createNode("Shape"));
Shape25->setUSE("ShapeUpRight");
Transform24->addChild(*Shape25);

Group13->addChildren(*Transform24);

//down
CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
Transform26->setScale(new float[3]{0.5,0.5,0.5});
CShape* Shape27 = (CShape *)(m_pScene.createNode("Shape"));
Shape27->setUSE("ShapeLeftDown");
Transform26->addChild(*Shape27);

Group13->addChildren(*Transform26);

ProtoBody12->addChildren(*Group13);

ProtoDeclare11->setProtoBody(*ProtoBody12);

group->addChildren(*ProtoDeclare11);

CViewpoint* Viewpoint28 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint28->setDescription("Process pipes");
Viewpoint28->setOrientation(new float[4]{1,0,0,-0.4});
Viewpoint28->setPosition(new float[3]{0,5,12});
group->addChildren(*Viewpoint28);

CTransform* Transform29 = (CTransform *)(m_pScene.createNode("Transform"));
Transform29->setTranslation(new float[3]{0,-2.5,0});
CProtoInstance* ProtoInstance30 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance30->setName("Process");
Transform29->addChildren(*ProtoInstance30);

group->addChildren(*Transform29);

CTransform* Transform31 = (CTransform *)(m_pScene.createNode("Transform"));
CProtoInstance* ProtoInstance32 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance32->setName("Process");
Transform31->addChildren(*ProtoInstance32);

group->addChildren(*Transform31);

CTransform* Transform33 = (CTransform *)(m_pScene.createNode("Transform"));
Transform33->setTranslation(new float[3]{0,2.5,0});
CProtoInstance* ProtoInstance34 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance34->setName("Process");
Transform33->addChildren(*ProtoInstance34);

group->addChildren(*Transform33);

X3D0->setScene(*Scene10);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
