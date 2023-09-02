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
Ccomponent* component2 = new Ccomponent();
component2->setName("Networking");
component2->setLevel(2);
head1->addComponent(*component2);

Ccomponent* component3 = new Ccomponent();
component3->setName("Core");
component3->setLevel(2);
head1->addComponent(*component3);

Cmeta* meta4 = new Cmeta();
meta4->setName("title");
meta4->setContent("t3.x3d");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("identifier");
meta5->setContent("http://coderextreme.net/X3DJSONLD/src/main/data/t4.x3d");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("generator");
meta6->setContent("view3dscene, https://castle-engine.io/view3dscene.php");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("creator");
meta7->setContent("Andreas Plesch and John Carlson");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("source");
meta8->setContent("t1.wrl");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("description");
meta9->setContent("Test Case for Proto Expander");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("license");
meta10->setContent("https://www.web3d.org/x3d/content/examples/license.html");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("translated");
meta11->setContent("12 May 2020");
head1->addMeta(*meta11);

Cmeta* meta12 = new Cmeta();
meta12->setName("generator");
meta12->setContent("DOM2JSONSerializer.js, https://github.com/coderextreme/X3DJSONLD/blob/master/src/main/node/DOM2JSONSerializer.js");
head1->addMeta(*meta12);

Cmeta* meta13 = new Cmeta();
meta13->setName("reference");
meta13->setContent("X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding");
head1->addMeta(*meta13);

X3D0->setHead(*head1);

CScene* Scene14 = new CScene();
CNavigationInfo* NavigationInfo15 = (CNavigationInfo *)(m_pScene.createNode("NavigationInfo"));
NavigationInfo15->setType(new CString[3]{"EXAMINE","FLY","WALK"}, 3);
NavigationInfo15->setSpeed(3);
NavigationInfo15->setAvatarSize(new float[3]{200,200,120}, 3);
group->addChildren(*NavigationInfo15);

CWorldInfo* WorldInfo16 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo16->setTitle("Arts Mapper");
group->addChildren(*WorldInfo16);

CViewpoint* Viewpoint17 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint17->setDescription("looking North");
Viewpoint17->setPosition(new float[3]{0,60,110});
Viewpoint17->setOrientation(new float[4]{1,0,0,-0.699999988079071});
Viewpoint17->setFieldOfView(0.785398125648499);
group->addChildren(*Viewpoint17);

CTransform* Transform18 = (CTransform *)(m_pScene.createNode("Transform"));
Transform18->setTranslation(new float[3]{-468,0,315});
CAnchor* Anchor19 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor19->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/574.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor19->setDescription("High Peak Community Arts");
CTransform* Transform20 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape21 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance22 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material23 = (CMaterial *)(m_pScene.createNode("Material"));
Material23->setDiffuseColor(new float[3]{1,1,1});
Material23->setEmissiveColor(new float[3]{0,0.300000011920929,1});
Appearance22->setMaterial(*Material23);

Shape21->setAppearance(*Appearance22);

CSphere* Sphere24 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere24->setRadius(5.10000002384186);
Shape21->setGeometry(Sphere24);

Transform20->addChild(*Shape21);

Anchor19->addChildren(*Transform20);

Transform18->addChildren(*Anchor19);

CAnchor* Anchor25 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor25->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/583.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor25->setDescription("People Express");
CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape27 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance28 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material29 = (CMaterial *)(m_pScene.createNode("Material"));
Material29->setDiffuseColor(new float[3]{1,1,1});
Material29->setEmissiveColor(new float[3]{0.600000023841858,0,0.600000023841858});
Appearance28->setMaterial(*Material29);

Shape27->setAppearance(*Appearance28);

CSphere* Sphere30 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere30->setRadius(5.10000002384186);
Shape27->setGeometry(Sphere30);

Transform26->addChild(*Shape27);

Anchor25->addChildren(*Transform26);

Transform18->addChildren(*Anchor25);

CAnchor* Anchor31 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor31->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/589.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor31->setDescription("QArts/Studios");
CTransform* Transform32 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape33 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance34 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material35 = (CMaterial *)(m_pScene.createNode("Material"));
Material35->setDiffuseColor(new float[3]{1,1,1});
Material35->setEmissiveColor(new float[3]{0.600000023841858,0,0.600000023841858});
Appearance34->setMaterial(*Material35);

Shape33->setAppearance(*Appearance34);

CSphere* Sphere36 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere36->setRadius(5.10000002384186);
Shape33->setGeometry(Sphere36);

Transform32->addChild(*Shape33);

Anchor31->addChildren(*Transform32);

Transform18->addChildren(*Anchor31);

CAnchor* Anchor37 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor37->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/593.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor37->setDescription("First Movement");
CTransform* Transform38 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape39 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance40 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material41 = (CMaterial *)(m_pScene.createNode("Material"));
Material41->setDiffuseColor(new float[3]{1,1,1});
Material41->setEmissiveColor(new float[3]{1,0,0.200000002980232});
Appearance40->setMaterial(*Material41);

Shape39->setAppearance(*Appearance40);

CSphere* Sphere42 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere42->setRadius(5.10000002384186);
Shape39->setGeometry(Sphere42);

Transform38->addChild(*Shape39);

Anchor37->addChildren(*Transform38);

Transform18->addChildren(*Anchor37);

CAnchor* Anchor43 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor43->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/612.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor43->setDescription("City Arts");
CTransform* Transform44 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape45 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance46 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material47 = (CMaterial *)(m_pScene.createNode("Material"));
Material47->setDiffuseColor(new float[3]{1,1,1});
Material47->setEmissiveColor(new float[3]{0.600000023841858,0,0.600000023841858});
Appearance46->setMaterial(*Material47);

Shape45->setAppearance(*Appearance46);

CSphere* Sphere48 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere48->setRadius(5.10000002384186);
Shape45->setGeometry(Sphere48);

Transform44->addChild(*Shape45);

Anchor43->addChildren(*Transform44);

Transform18->addChildren(*Anchor43);

CAnchor* Anchor49 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor49->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/615.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor49->setDescription("Indigo Dance Group (Salamanda Tandem)");
CTransform* Transform50 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape51 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance52 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material53 = (CMaterial *)(m_pScene.createNode("Material"));
Material53->setDiffuseColor(new float[3]{1,1,1});
Material53->setEmissiveColor(new float[3]{0,0.300000011920929,1});
Appearance52->setMaterial(*Material53);

Shape51->setAppearance(*Appearance52);

CSphere* Sphere54 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere54->setRadius(5.10000002384186);
Shape51->setGeometry(Sphere54);

Transform50->addChild(*Shape51);

Anchor49->addChildren(*Transform50);

Transform18->addChildren(*Anchor49);

CAnchor* Anchor55 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor55->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/623.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor55->setDescription("Watering Seeds");
CTransform* Transform56 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape57 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance58 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material59 = (CMaterial *)(m_pScene.createNode("Material"));
Material59->setDiffuseColor(new float[3]{1,1,1});
Material59->setEmissiveColor(new float[3]{0,0.300000011920929,1});
Appearance58->setMaterial(*Material59);

Shape57->setAppearance(*Appearance58);

CSphere* Sphere60 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere60->setRadius(5.10000002384186);
Shape57->setGeometry(Sphere60);

Transform56->addChild(*Shape57);

Anchor55->addChildren(*Transform56);

Transform18->addChildren(*Anchor55);

CAnchor* Anchor61 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor61->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/630.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor61->setDescription("Fased In The Arts");
CTransform* Transform62 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape63 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance64 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material65 = (CMaterial *)(m_pScene.createNode("Material"));
Material65->setDiffuseColor(new float[3]{1,1,1});
Material65->setEmissiveColor(new float[3]{0,0.300000011920929,1});
Appearance64->setMaterial(*Material65);

Shape63->setAppearance(*Appearance64);

CSphere* Sphere66 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere66->setRadius(5.10000002384186);
Shape63->setGeometry(Sphere66);

Transform62->addChild(*Shape63);

Anchor61->addChildren(*Transform62);

Transform18->addChildren(*Anchor61);

CAnchor* Anchor67 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor67->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/633.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor67->setDescription("27a Access Artspace");
CTransform* Transform68 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape69 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance70 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material71 = (CMaterial *)(m_pScene.createNode("Material"));
Material71->setDiffuseColor(new float[3]{1,1,1});
Material71->setEmissiveColor(new float[3]{1,0,0.200000002980232});
Appearance70->setMaterial(*Material71);

Shape69->setAppearance(*Appearance70);

CSphere* Sphere72 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere72->setRadius(5.10000002384186);
Shape69->setGeometry(Sphere72);

Transform68->addChild(*Shape69);

Anchor67->addChildren(*Transform68);

Transform18->addChildren(*Anchor67);

CAnchor* Anchor73 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor73->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/638.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor73->setDescription("Bamboozle Theatre Company");
CTransform* Transform74 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape75 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance76 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material77 = (CMaterial *)(m_pScene.createNode("Material"));
Material77->setDiffuseColor(new float[3]{1,1,1});
Material77->setEmissiveColor(new float[3]{0,0.300000011920929,1});
Appearance76->setMaterial(*Material77);

Shape75->setAppearance(*Appearance76);

CSphere* Sphere78 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere78->setRadius(5.10000002384186);
Shape75->setGeometry(Sphere78);

Transform74->addChild(*Shape75);

Anchor73->addChildren(*Transform74);

Transform18->addChildren(*Anchor73);

CAnchor* Anchor79 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor79->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/648.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor79->setDescription("Mantle Community Arts");
CTransform* Transform80 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape81 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance82 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material83 = (CMaterial *)(m_pScene.createNode("Material"));
Material83->setDiffuseColor(new float[3]{1,1,1});
Material83->setEmissiveColor(new float[3]{0,0.300000011920929,1});
Appearance82->setMaterial(*Material83);

Shape81->setAppearance(*Appearance82);

CSphere* Sphere84 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere84->setRadius(5.10000002384186);
Shape81->setGeometry(Sphere84);

Transform80->addChild(*Shape81);

Anchor79->addChildren(*Transform80);

Transform18->addChildren(*Anchor79);

CAnchor* Anchor85 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor85->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/658.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor85->setDescription("Artlink East");
CTransform* Transform86 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape87 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance88 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material89 = (CMaterial *)(m_pScene.createNode("Material"));
Material89->setDiffuseColor(new float[3]{1,1,1});
Material89->setEmissiveColor(new float[3]{0,0.300000011920929,1});
Appearance88->setMaterial(*Material89);

Shape87->setAppearance(*Appearance88);

CSphere* Sphere90 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere90->setRadius(5.10000002384186);
Shape87->setGeometry(Sphere90);

Transform86->addChild(*Shape87);

Anchor85->addChildren(*Transform86);

Transform18->addChildren(*Anchor85);

CAnchor* Anchor91 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor91->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/665.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor91->setDescription("Creations");
CTransform* Transform92 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape93 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance94 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material95 = (CMaterial *)(m_pScene.createNode("Material"));
Material95->setDiffuseColor(new float[3]{1,1,1});
Material95->setEmissiveColor(new float[3]{0,0.300000011920929,1});
Appearance94->setMaterial(*Material95);

Shape93->setAppearance(*Appearance94);

CSphere* Sphere96 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere96->setRadius(5.10000002384186);
Shape93->setGeometry(Sphere96);

Transform92->addChild(*Shape93);

Anchor91->addChildren(*Transform92);

Transform18->addChildren(*Anchor91);

CAnchor* Anchor97 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor97->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/670.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor97->setDescription("New Perspectives");
CTransform* Transform98 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape99 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance100 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material101 = (CMaterial *)(m_pScene.createNode("Material"));
Material101->setDiffuseColor(new float[3]{1,1,1});
Material101->setEmissiveColor(new float[3]{1,0,0.200000002980232});
Appearance100->setMaterial(*Material101);

Shape99->setAppearance(*Appearance100);

CSphere* Sphere102 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere102->setRadius(5.10000002384186);
Shape99->setGeometry(Sphere102);

Transform98->addChild(*Shape99);

Anchor97->addChildren(*Transform98);

Transform18->addChildren(*Anchor97);

CAnchor* Anchor103 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor103->setUrl(new CString[2]{"javascript:window.open('https://coderextreme.net/X3DJSONLD/src/main/data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');","javascript:window.open('./data/671.html','details','height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no');"}, 2);
Anchor103->setDescription("UKan2");
CTransform* Transform104 = (CTransform *)(m_pScene.createNode("Transform"));
CShape* Shape105 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance106 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material107 = (CMaterial *)(m_pScene.createNode("Material"));
Material107->setDiffuseColor(new float[3]{1,1,1});
Material107->setEmissiveColor(new float[3]{0,0.300000011920929,1});
Appearance106->setMaterial(*Material107);

Shape105->setAppearance(*Appearance106);

CSphere* Sphere108 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere108->setRadius(5.10000002384186);
Shape105->setGeometry(Sphere108);

Transform104->addChild(*Shape105);

Anchor103->addChildren(*Transform104);

Transform18->addChildren(*Anchor103);

group->addChildren(*Transform18);

X3D0->setScene(*Scene14);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
