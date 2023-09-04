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
X3D0->setVersion("4.0");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("t3.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("identifier");
meta3->setContent("http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("generator");
meta4->setContent("view3dscene, https://castle-engine.io/view3dscene.php");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("generator");
meta5->setContent("DOM2JSONSerializer.js, https://github.com/coderextreme/X3DJSONLD/blob/master/src/main/node/DOM2JSONSerializer.js");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("creator");
meta6->setContent("Andreas Plesch and John Carlson");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("source");
meta7->setContent("t1.wrl");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("description");
meta8->setContent("Test Case for Proto Expander");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("license");
meta9->setContent("https://www.web3d.org/x3d/content/examples/license.html");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("translated");
meta10->setContent("12 May 2020");
head1->addMeta(*meta10);

Ccomponent* component11 = new Ccomponent();
component11->setName("Networking");
component11->setLevel(2);
head1->addComponent(*component11);

Ccomponent* component12 = new Ccomponent();
component12->setName("Core");
component12->setLevel(2);
head1->addComponent(*component12);

X3D0->setHead(*head1);

CScene* Scene13 = new CScene();
CNavigationInfo* NavigationInfo14 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo14->setType(new CString[3]{"EXAMINE","FLY","WALK"}, 3);
NavigationInfo14->setAvatarSize(new float[3]{200,200,120}, 3);
NavigationInfo14->setSpeed(3);
group->addChildren(*NavigationInfo14);

CWorldInfo* WorldInfo15 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo15->setTitle("Arts Mapper");
group->addChildren(*WorldInfo15);

CViewpoint* Viewpoint16 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint16->setDescription("looking North");
Viewpoint16->setPosition(new float[3]{0,60,110});
Viewpoint16->setOrientation(new float[4]{1,0,0,-0.699999988079071});
Viewpoint16->setFieldOfView(0.7853981);
group->addChildren(*Viewpoint16);

CTransform* Transform17 = (CTransform *)(m_pScene.createNode("Transform"));
Transform17->setTranslation(new float[3]{-468,0,315});
CAnchor* Anchor18 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor18->setDescription("High Peak Community Arts");
Anchor18->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance21 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material22 = (CMaterial *)(m_pScene.createNode("Material"));
Material22->setDiffuseColor(new float[3]{1,1,1});
Material22->setEmissiveColor(new float[3]{0,0.3,1});
Appearance21->setMaterial(*Material22);

Shape20->setAppearance(*Appearance21);

CSphere* Sphere23 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere23->setRadius(5.1);
Shape20->setGeometry(Sphere23);

Transform19->addChild(*Shape20);

Anchor18->addChildren(*Transform19);

Transform17->addChildren(*Anchor18);

CAnchor* Anchor24 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor24->setDescription("People Express");
Anchor24->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CTransform* Transform25 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape26 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance27 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material28 = (CMaterial *)(m_pScene.createNode("Material"));
Material28->setDiffuseColor(new float[3]{1,1,1});
Material28->setEmissiveColor(new float[3]{0.6,0,0.6});
Appearance27->setMaterial(*Material28);

Shape26->setAppearance(*Appearance27);

CSphere* Sphere29 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere29->setRadius(5.1);
Shape26->setGeometry(Sphere29);

Transform25->addChild(*Shape26);

Anchor24->addChildren(*Transform25);

Transform17->addChildren(*Anchor24);

CAnchor* Anchor30 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor30->setDescription("QArts/Studios");
Anchor30->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CTransform* Transform31 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape32 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance33 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material34 = (CMaterial *)(m_pScene.createNode("Material"));
Material34->setDiffuseColor(new float[3]{1,1,1});
Material34->setEmissiveColor(new float[3]{0.6,0,0.6});
Appearance33->setMaterial(*Material34);

Shape32->setAppearance(*Appearance33);

CSphere* Sphere35 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere35->setRadius(5.1);
Shape32->setGeometry(Sphere35);

Transform31->addChild(*Shape32);

Anchor30->addChildren(*Transform31);

Transform17->addChildren(*Anchor30);

CAnchor* Anchor36 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor36->setDescription("First Movement");
Anchor36->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CTransform* Transform37 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape38 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance39 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material40 = (CMaterial *)(m_pScene.createNode("Material"));
Material40->setDiffuseColor(new float[3]{1,1,1});
Material40->setEmissiveColor(new float[3]{1,0,0.2});
Appearance39->setMaterial(*Material40);

Shape38->setAppearance(*Appearance39);

CSphere* Sphere41 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere41->setRadius(5.1);
Shape38->setGeometry(Sphere41);

Transform37->addChild(*Shape38);

Anchor36->addChildren(*Transform37);

Transform17->addChildren(*Anchor36);

CAnchor* Anchor42 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor42->setDescription("City Arts");
Anchor42->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CTransform* Transform43 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape44 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance45 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material46 = (CMaterial *)(m_pScene.createNode("Material"));
Material46->setDiffuseColor(new float[3]{1,1,1});
Material46->setEmissiveColor(new float[3]{0.6,0,0.6});
Appearance45->setMaterial(*Material46);

Shape44->setAppearance(*Appearance45);

CSphere* Sphere47 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere47->setRadius(5.1);
Shape44->setGeometry(Sphere47);

Transform43->addChild(*Shape44);

Anchor42->addChildren(*Transform43);

Transform17->addChildren(*Anchor42);

CAnchor* Anchor48 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor48->setDescription("Indigo Dance Group (Salamanda Tandem)");
Anchor48->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CTransform* Transform49 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape50 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance51 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material52 = (CMaterial *)(m_pScene.createNode("Material"));
Material52->setDiffuseColor(new float[3]{1,1,1});
Material52->setEmissiveColor(new float[3]{0,0.3,1});
Appearance51->setMaterial(*Material52);

Shape50->setAppearance(*Appearance51);

CSphere* Sphere53 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere53->setRadius(5.1);
Shape50->setGeometry(Sphere53);

Transform49->addChild(*Shape50);

Anchor48->addChildren(*Transform49);

Transform17->addChildren(*Anchor48);

CAnchor* Anchor54 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor54->setDescription("Watering Seeds");
Anchor54->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CTransform* Transform55 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape56 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance57 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material58 = (CMaterial *)(m_pScene.createNode("Material"));
Material58->setDiffuseColor(new float[3]{1,1,1});
Material58->setEmissiveColor(new float[3]{0,0.3,1});
Appearance57->setMaterial(*Material58);

Shape56->setAppearance(*Appearance57);

CSphere* Sphere59 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere59->setRadius(5.1);
Shape56->setGeometry(Sphere59);

Transform55->addChild(*Shape56);

Anchor54->addChildren(*Transform55);

Transform17->addChildren(*Anchor54);

CAnchor* Anchor60 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor60->setDescription("Fased In The Arts");
Anchor60->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CTransform* Transform61 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape62 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance63 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material64 = (CMaterial *)(m_pScene.createNode("Material"));
Material64->setDiffuseColor(new float[3]{1,1,1});
Material64->setEmissiveColor(new float[3]{0,0.3,1});
Appearance63->setMaterial(*Material64);

Shape62->setAppearance(*Appearance63);

CSphere* Sphere65 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere65->setRadius(5.1);
Shape62->setGeometry(Sphere65);

Transform61->addChild(*Shape62);

Anchor60->addChildren(*Transform61);

Transform17->addChildren(*Anchor60);

CAnchor* Anchor66 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor66->setDescription("27a Access Artspace");
Anchor66->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CTransform* Transform67 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape68 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance69 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material70 = (CMaterial *)(m_pScene.createNode("Material"));
Material70->setDiffuseColor(new float[3]{1,1,1});
Material70->setEmissiveColor(new float[3]{1,0,0.2});
Appearance69->setMaterial(*Material70);

Shape68->setAppearance(*Appearance69);

CSphere* Sphere71 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere71->setRadius(5.1);
Shape68->setGeometry(Sphere71);

Transform67->addChild(*Shape68);

Anchor66->addChildren(*Transform67);

Transform17->addChildren(*Anchor66);

CAnchor* Anchor72 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor72->setDescription("Bamboozle Theatre Company");
Anchor72->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CTransform* Transform73 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape74 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance75 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material76 = (CMaterial *)(m_pScene.createNode("Material"));
Material76->setDiffuseColor(new float[3]{1,1,1});
Material76->setEmissiveColor(new float[3]{0,0.3,1});
Appearance75->setMaterial(*Material76);

Shape74->setAppearance(*Appearance75);

CSphere* Sphere77 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere77->setRadius(5.1);
Shape74->setGeometry(Sphere77);

Transform73->addChild(*Shape74);

Anchor72->addChildren(*Transform73);

Transform17->addChildren(*Anchor72);

CAnchor* Anchor78 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor78->setDescription("Mantle Community Arts");
Anchor78->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CTransform* Transform79 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape80 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance81 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material82 = (CMaterial *)(m_pScene.createNode("Material"));
Material82->setDiffuseColor(new float[3]{1,1,1});
Material82->setEmissiveColor(new float[3]{0,0.3,1});
Appearance81->setMaterial(*Material82);

Shape80->setAppearance(*Appearance81);

CSphere* Sphere83 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere83->setRadius(5.1);
Shape80->setGeometry(Sphere83);

Transform79->addChild(*Shape80);

Anchor78->addChildren(*Transform79);

Transform17->addChildren(*Anchor78);

CAnchor* Anchor84 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor84->setDescription("Artlink East");
Anchor84->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CTransform* Transform85 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape86 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance87 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material88 = (CMaterial *)(m_pScene.createNode("Material"));
Material88->setDiffuseColor(new float[3]{1,1,1});
Material88->setEmissiveColor(new float[3]{0,0.3,1});
Appearance87->setMaterial(*Material88);

Shape86->setAppearance(*Appearance87);

CSphere* Sphere89 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere89->setRadius(5.1);
Shape86->setGeometry(Sphere89);

Transform85->addChild(*Shape86);

Anchor84->addChildren(*Transform85);

Transform17->addChildren(*Anchor84);

CAnchor* Anchor90 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor90->setDescription("Creations");
Anchor90->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CTransform* Transform91 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape92 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance93 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material94 = (CMaterial *)(m_pScene.createNode("Material"));
Material94->setDiffuseColor(new float[3]{1,1,1});
Material94->setEmissiveColor(new float[3]{0,0.3,1});
Appearance93->setMaterial(*Material94);

Shape92->setAppearance(*Appearance93);

CSphere* Sphere95 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere95->setRadius(5.1);
Shape92->setGeometry(Sphere95);

Transform91->addChild(*Shape92);

Anchor90->addChildren(*Transform91);

Transform17->addChildren(*Anchor90);

CAnchor* Anchor96 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor96->setDescription("New Perspectives");
Anchor96->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CTransform* Transform97 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape98 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance99 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material100 = (CMaterial *)(m_pScene.createNode("Material"));
Material100->setDiffuseColor(new float[3]{1,1,1});
Material100->setEmissiveColor(new float[3]{1,0,0.2});
Appearance99->setMaterial(*Material100);

Shape98->setAppearance(*Appearance99);

CSphere* Sphere101 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere101->setRadius(5.1);
Shape98->setGeometry(Sphere101);

Transform97->addChild(*Shape98);

Anchor96->addChildren(*Transform97);

Transform17->addChildren(*Anchor96);

CAnchor* Anchor102 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor102->setDescription("UKan2");
Anchor102->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
CTransform* Transform103 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape104 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance105 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material106 = (CMaterial *)(m_pScene.createNode("Material"));
Material106->setDiffuseColor(new float[3]{1,1,1});
Material106->setEmissiveColor(new float[3]{0,0.3,1});
Appearance105->setMaterial(*Material106);

Shape104->setAppearance(*Appearance105);

CSphere* Sphere107 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere107->setRadius(5.1);
Shape104->setGeometry(Sphere107);

Transform103->addChild(*Shape104);

Anchor102->addChildren(*Transform103);

Transform17->addChildren(*Anchor102);

group->addChildren(*Transform17);

X3D0->setScene(*Scene13);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
