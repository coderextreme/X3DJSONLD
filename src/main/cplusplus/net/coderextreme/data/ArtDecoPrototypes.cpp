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
meta2->setContent("ArtDecoPrototypes.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("description");
meta3->setContent("Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples.");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("creator");
meta4->setContent("David Roussel");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("translator");
meta5->setContent("James Harney, Don Brutzman NPS");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("created");
meta6->setContent("7 April 2002");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("modified");
meta7->setContent("20 October 2019");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("reference");
meta8->setContent("http://vrmlstuff.free.fr/materials");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("subject");
meta9->setContent("Universal Media Material Library");
head1->addMeta(*meta9);

Cmeta* meta10 = new Cmeta();
meta10->setName("identifier");
meta10->setContent("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d");
head1->addMeta(*meta10);

Cmeta* meta11 = new Cmeta();
meta11->setName("generator");
meta11->setContent("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html");
head1->addMeta(*meta11);

X3D0->setHead(*head1);

CScene* Scene12 = new CScene();
CProtoDeclare ProtoDeclare13 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco00" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.282435 0.085159 0.134462" specularColor="0.276305 0.11431 0.139857" shininess="0.127273"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare13->setName("ArtDeco00");
CProtoInterface* ProtoInterface14 = new CProtoInterface();
ProtoDeclare13->setProtoInterface(*ProtoInterface14);

CProtoBody* ProtoBody15 = new CProtoBody();
CMaterial* Material16 = (CMaterial *)(m_pScene.createNode("Material"));
Material16->setAmbientIntensity(0.25);
Material16->setDiffuseColor(new float[3]{0.282435,0.085159,0.134462});
Material16->setSpecularColor(new float[3]{0.276305,0.11431,0.139857});
Material16->setShininess(0.127273);
ProtoBody15->addChildren(*Material16);

ProtoDeclare13->setProtoBody(*ProtoBody15);

group->addChildren(*ProtoDeclare13);

CProtoDeclare ProtoDeclare17 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco01" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.254777" diffuseColor="0.685208 0.134679 0.332385" specularColor="0.122449 0.050035 0.050035" shininess="0.071429"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare17->setName("ArtDeco01");
CProtoInterface* ProtoInterface18 = new CProtoInterface();
ProtoDeclare17->setProtoInterface(*ProtoInterface18);

CProtoBody* ProtoBody19 = new CProtoBody();
CMaterial* Material20 = (CMaterial *)(m_pScene.createNode("Material"));
Material20->setAmbientIntensity(0.254777);
Material20->setDiffuseColor(new float[3]{0.685208,0.134679,0.332385});
Material20->setSpecularColor(new float[3]{0.122449,0.050035,0.050035});
Material20->setShininess(0.071429);
ProtoBody19->addChildren(*Material20);

ProtoDeclare17->setProtoBody(*ProtoBody19);

group->addChildren(*ProtoDeclare17);

CProtoDeclare ProtoDeclare21 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco02" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="1" diffuseColor="0.536861 0.0529 0.245479" specularColor="0.805292 0.765198 0.747416" shininess="0.832432"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare21->setName("ArtDeco02");
CProtoInterface* ProtoInterface22 = new CProtoInterface();
ProtoDeclare21->setProtoInterface(*ProtoInterface22);

CProtoBody* ProtoBody23 = new CProtoBody();
CMaterial* Material24 = (CMaterial *)(m_pScene.createNode("Material"));
Material24->setAmbientIntensity(1);
Material24->setDiffuseColor(new float[3]{0.536861,0.0529,0.245479});
Material24->setSpecularColor(new float[3]{0.805292,0.765198,0.747416});
Material24->setShininess(0.832432);
ProtoBody23->addChildren(*Material24);

ProtoDeclare21->setProtoBody(*ProtoBody23);

group->addChildren(*ProtoDeclare21);

CProtoDeclare ProtoDeclare25 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco03" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.248649" diffuseColor="1 0.452381 0.40339" specularColor="0.686486 0.396903 0.419275" shininess="0.902703"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare25->setName("ArtDeco03");
CProtoInterface* ProtoInterface26 = new CProtoInterface();
ProtoDeclare25->setProtoInterface(*ProtoInterface26);

CProtoBody* ProtoBody27 = new CProtoBody();
CMaterial* Material28 = (CMaterial *)(m_pScene.createNode("Material"));
Material28->setAmbientIntensity(0.248649);
Material28->setDiffuseColor(new float[3]{1,0.452381,0.40339});
Material28->setSpecularColor(new float[3]{0.686486,0.396903,0.419275});
Material28->setShininess(0.902703);
ProtoBody27->addChildren(*Material28);

ProtoDeclare25->setProtoBody(*ProtoBody27);

group->addChildren(*ProtoDeclare25);

CProtoDeclare ProtoDeclare29 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco04" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.748016 0.298362 0.342624" specularColor="0.345455 0.345455 0.345455" shininess="0.69697"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare29->setName("ArtDeco04");
CProtoInterface* ProtoInterface30 = new CProtoInterface();
ProtoDeclare29->setProtoInterface(*ProtoInterface30);

CProtoBody* ProtoBody31 = new CProtoBody();
CMaterial* Material32 = (CMaterial *)(m_pScene.createNode("Material"));
Material32->setAmbientIntensity(0.25);
Material32->setDiffuseColor(new float[3]{0.748016,0.298362,0.342624});
Material32->setSpecularColor(new float[3]{0.345455,0.345455,0.345455});
Material32->setShininess(0.69697);
ProtoBody31->addChildren(*Material32);

ProtoDeclare29->setProtoBody(*ProtoBody31);

group->addChildren(*ProtoDeclare29);

CProtoDeclare ProtoDeclare33 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco05" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.24359" diffuseColor="0.945455 0.318988 0.321717" specularColor="0.072727 0.021705 0.010732" shininess="0.018182"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare33->setName("ArtDeco05");
CProtoInterface* ProtoInterface34 = new CProtoInterface();
ProtoDeclare33->setProtoInterface(*ProtoInterface34);

CProtoBody* ProtoBody35 = new CProtoBody();
CMaterial* Material36 = (CMaterial *)(m_pScene.createNode("Material"));
Material36->setAmbientIntensity(0.24359);
Material36->setDiffuseColor(new float[3]{0.945455,0.318988,0.321717});
Material36->setSpecularColor(new float[3]{0.072727,0.021705,0.010732});
Material36->setShininess(0.018182);
ProtoBody35->addChildren(*Material36);

ProtoDeclare33->setProtoBody(*ProtoBody35);

group->addChildren(*ProtoDeclare33);

CProtoDeclare ProtoDeclare37 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco06" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.25946" diffuseColor="0.228655 0.195513 0.425484" specularColor="0.324504 0.404255 0.404255" shininess="0.542553"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare37->setName("ArtDeco06");
CProtoInterface* ProtoInterface38 = new CProtoInterface();
ProtoDeclare37->setProtoInterface(*ProtoInterface38);

CProtoBody* ProtoBody39 = new CProtoBody();
CMaterial* Material40 = (CMaterial *)(m_pScene.createNode("Material"));
Material40->setAmbientIntensity(0.25946);
Material40->setDiffuseColor(new float[3]{0.228655,0.195513,0.425484});
Material40->setSpecularColor(new float[3]{0.324504,0.404255,0.404255});
Material40->setShininess(0.542553);
ProtoBody39->addChildren(*Material40);

ProtoDeclare37->setProtoBody(*ProtoBody39);

group->addChildren(*ProtoDeclare37);

CProtoDeclare ProtoDeclare41 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco07" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.333333" diffuseColor="0.200348 0.100857 0.320833" specularColor="0.311358 0.387879 0.387879" shininess="0.133333"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare41->setName("ArtDeco07");
CProtoInterface* ProtoInterface42 = new CProtoInterface();
ProtoDeclare41->setProtoInterface(*ProtoInterface42);

CProtoBody* ProtoBody43 = new CProtoBody();
CMaterial* Material44 = (CMaterial *)(m_pScene.createNode("Material"));
Material44->setAmbientIntensity(0.333333);
Material44->setDiffuseColor(new float[3]{0.200348,0.100857,0.320833});
Material44->setSpecularColor(new float[3]{0.311358,0.387879,0.387879});
Material44->setShininess(0.133333);
ProtoBody43->addChildren(*Material44);

ProtoDeclare41->setProtoBody(*ProtoBody43);

group->addChildren(*ProtoDeclare41);

CProtoDeclare ProtoDeclare45 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco08" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.242424" diffuseColor="0.330519 0.3389 0.6" specularColor="0.290909 0.290909 0.290909" shininess="0.787879"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare45->setName("ArtDeco08");
CProtoInterface* ProtoInterface46 = new CProtoInterface();
ProtoDeclare45->setProtoInterface(*ProtoInterface46);

CProtoBody* ProtoBody47 = new CProtoBody();
CMaterial* Material48 = (CMaterial *)(m_pScene.createNode("Material"));
Material48->setAmbientIntensity(0.242424);
Material48->setDiffuseColor(new float[3]{0.330519,0.3389,0.6});
Material48->setSpecularColor(new float[3]{0.290909,0.290909,0.290909});
Material48->setShininess(0.787879);
ProtoBody47->addChildren(*Material48);

ProtoDeclare45->setProtoBody(*ProtoBody47);

group->addChildren(*ProtoDeclare45);

CProtoDeclare ProtoDeclare49 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco09" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.333333" diffuseColor="0.237059 0.096273 0.215625" specularColor="0.311358 0.387879 0.387879" shininess="0.133333"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare49->setName("ArtDeco09");
CProtoInterface* ProtoInterface50 = new CProtoInterface();
ProtoDeclare49->setProtoInterface(*ProtoInterface50);

CProtoBody* ProtoBody51 = new CProtoBody();
CMaterial* Material52 = (CMaterial *)(m_pScene.createNode("Material"));
Material52->setAmbientIntensity(0.333333);
Material52->setDiffuseColor(new float[3]{0.237059,0.096273,0.215625});
Material52->setSpecularColor(new float[3]{0.311358,0.387879,0.387879});
Material52->setShininess(0.133333);
ProtoBody51->addChildren(*Material52);

ProtoDeclare49->setProtoBody(*ProtoBody51);

group->addChildren(*ProtoDeclare49);

CProtoDeclare ProtoDeclare53 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco10" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.242425" diffuseColor="0.304 0.09025 0.207364" specularColor="0.6665 0.579046 0.830303" shininess="0.072727"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare53->setName("ArtDeco10");
CProtoInterface* ProtoInterface54 = new CProtoInterface();
ProtoDeclare53->setProtoInterface(*ProtoInterface54);

CProtoBody* ProtoBody55 = new CProtoBody();
CMaterial* Material56 = (CMaterial *)(m_pScene.createNode("Material"));
Material56->setAmbientIntensity(0.242425);
Material56->setDiffuseColor(new float[3]{0.304,0.09025,0.207364});
Material56->setSpecularColor(new float[3]{0.6665,0.579046,0.830303});
Material56->setShininess(0.072727);
ProtoBody55->addChildren(*Material56);

ProtoDeclare53->setProtoBody(*ProtoBody55);

group->addChildren(*ProtoDeclare53);

CProtoDeclare ProtoDeclare57 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco11" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.258928" diffuseColor="0.335631 0.207672 0.238304" specularColor="0.198631 0.075403 0.138803" emissiveColor="0.010638 0.010638 0.010638" shininess="0.021277"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare57->setName("ArtDeco11");
CProtoInterface* ProtoInterface58 = new CProtoInterface();
ProtoDeclare57->setProtoInterface(*ProtoInterface58);

CProtoBody* ProtoBody59 = new CProtoBody();
CMaterial* Material60 = (CMaterial *)(m_pScene.createNode("Material"));
Material60->setAmbientIntensity(0.258928);
Material60->setDiffuseColor(new float[3]{0.335631,0.207672,0.238304});
Material60->setSpecularColor(new float[3]{0.198631,0.075403,0.138803});
Material60->setEmissiveColor(new float[3]{0.010638,0.010638,0.010638});
Material60->setShininess(0.021277);
ProtoBody59->addChildren(*Material60);

ProtoDeclare57->setProtoBody(*ProtoBody59);

group->addChildren(*ProtoDeclare57);

CProtoDeclare ProtoDeclare61 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco12" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.240838" diffuseColor="0.876873 0.14715 0.00856" specularColor="0.193878 0.029416 0.029416" shininess="0.076531"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare61->setName("ArtDeco12");
CProtoInterface* ProtoInterface62 = new CProtoInterface();
ProtoDeclare61->setProtoInterface(*ProtoInterface62);

CProtoBody* ProtoBody63 = new CProtoBody();
CMaterial* Material64 = (CMaterial *)(m_pScene.createNode("Material"));
Material64->setAmbientIntensity(0.240838);
Material64->setDiffuseColor(new float[3]{0.876873,0.14715,0.00856});
Material64->setSpecularColor(new float[3]{0.193878,0.029416,0.029416});
Material64->setShininess(0.076531);
ProtoBody63->addChildren(*Material64);

ProtoDeclare61->setProtoBody(*ProtoBody63);

group->addChildren(*ProtoDeclare61);

CProtoDeclare ProtoDeclare65 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco13" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.794445 0.249425 0" specularColor="0.62904 0.194211 0.033663" shininess="0.551515"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare65->setName("ArtDeco13");
CProtoInterface* ProtoInterface66 = new CProtoInterface();
ProtoDeclare65->setProtoInterface(*ProtoInterface66);

CProtoBody* ProtoBody67 = new CProtoBody();
CMaterial* Material68 = (CMaterial *)(m_pScene.createNode("Material"));
Material68->setAmbientIntensity(0.25);
Material68->setDiffuseColor(new float[3]{0.794445,0.249425,0});
Material68->setSpecularColor(new float[3]{0.62904,0.194211,0.033663});
Material68->setShininess(0.551515);
ProtoBody67->addChildren(*Material68);

ProtoDeclare65->setProtoBody(*ProtoBody67);

group->addChildren(*ProtoDeclare65);

CProtoDeclare ProtoDeclare69 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco14" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.510609 0.17264 0.059872" specularColor="0.533333 0.533333 0.533333" shininess="0.933333"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare69->setName("ArtDeco14");
CProtoInterface* ProtoInterface70 = new CProtoInterface();
ProtoDeclare69->setProtoInterface(*ProtoInterface70);

CProtoBody* ProtoBody71 = new CProtoBody();
CMaterial* Material72 = (CMaterial *)(m_pScene.createNode("Material"));
Material72->setAmbientIntensity(0.25);
Material72->setDiffuseColor(new float[3]{0.510609,0.17264,0.059872});
Material72->setSpecularColor(new float[3]{0.533333,0.533333,0.533333});
Material72->setShininess(0.933333);
ProtoBody71->addChildren(*Material72);

ProtoDeclare69->setProtoBody(*ProtoBody71);

group->addChildren(*ProtoDeclare69);

CProtoDeclare ProtoDeclare73 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco15" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.255814" diffuseColor="0.914894 0.444404 0.348914" specularColor="0.345745 0.143066 0" shininess="0.12766"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare73->setName("ArtDeco15");
CProtoInterface* ProtoInterface74 = new CProtoInterface();
ProtoDeclare73->setProtoInterface(*ProtoInterface74);

CProtoBody* ProtoBody75 = new CProtoBody();
CMaterial* Material76 = (CMaterial *)(m_pScene.createNode("Material"));
Material76->setAmbientIntensity(0.255814);
Material76->setDiffuseColor(new float[3]{0.914894,0.444404,0.348914});
Material76->setSpecularColor(new float[3]{0.345745,0.143066,0});
Material76->setShininess(0.12766);
ProtoBody75->addChildren(*Material76);

ProtoDeclare73->setProtoBody(*ProtoBody75);

group->addChildren(*ProtoDeclare73);

CProtoDeclare ProtoDeclare77 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco16" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.240838" diffuseColor="0.876873 0.323147 0.199564" specularColor="0.816327 0.278677 0.278677" shininess="0.80102"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare77->setName("ArtDeco16");
CProtoInterface* ProtoInterface78 = new CProtoInterface();
ProtoDeclare77->setProtoInterface(*ProtoInterface78);

CProtoBody* ProtoBody79 = new CProtoBody();
CMaterial* Material80 = (CMaterial *)(m_pScene.createNode("Material"));
Material80->setAmbientIntensity(0.240838);
Material80->setDiffuseColor(new float[3]{0.876873,0.323147,0.199564});
Material80->setSpecularColor(new float[3]{0.816327,0.278677,0.278677});
Material80->setShininess(0.80102);
ProtoBody79->addChildren(*Material80);

ProtoDeclare77->setProtoBody(*ProtoBody79);

group->addChildren(*ProtoDeclare77);

CProtoDeclare ProtoDeclare81 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco17" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.242424" diffuseColor="0.515625 0.315496 0.252441" specularColor="0.533333 0.533333 0.533333" shininess="0.933333"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare81->setName("ArtDeco17");
CProtoInterface* ProtoInterface82 = new CProtoInterface();
ProtoDeclare81->setProtoInterface(*ProtoInterface82);

CProtoBody* ProtoBody83 = new CProtoBody();
CMaterial* Material84 = (CMaterial *)(m_pScene.createNode("Material"));
Material84->setAmbientIntensity(0.242424);
Material84->setDiffuseColor(new float[3]{0.515625,0.315496,0.252441});
Material84->setSpecularColor(new float[3]{0.533333,0.533333,0.533333});
Material84->setShininess(0.933333);
ProtoBody83->addChildren(*Material84);

ProtoDeclare81->setProtoBody(*ProtoBody83);

group->addChildren(*ProtoDeclare81);

CProtoDeclare ProtoDeclare85 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco18" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.264706" diffuseColor="0 0.346939 0.253624" specularColor="0 0.311074 0.357143" shininess="0.316327"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare85->setName("ArtDeco18");
CProtoInterface* ProtoInterface86 = new CProtoInterface();
ProtoDeclare85->setProtoInterface(*ProtoInterface86);

CProtoBody* ProtoBody87 = new CProtoBody();
CMaterial* Material88 = (CMaterial *)(m_pScene.createNode("Material"));
Material88->setAmbientIntensity(0.264706);
Material88->setDiffuseColor(new float[3]{0,0.346939,0.253624});
Material88->setSpecularColor(new float[3]{0,0.311074,0.357143});
Material88->setShininess(0.316327);
ProtoBody87->addChildren(*Material88);

ProtoDeclare85->setProtoBody(*ProtoBody87);

group->addChildren(*ProtoDeclare85);

CProtoDeclare ProtoDeclare89 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco19" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.259259" diffuseColor="0 0.251004 0.239248" specularColor="0.177935 0.249369 0.229278" shininess="0.060606"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare89->setName("ArtDeco19");
CProtoInterface* ProtoInterface90 = new CProtoInterface();
ProtoDeclare89->setProtoInterface(*ProtoInterface90);

CProtoBody* ProtoBody91 = new CProtoBody();
CMaterial* Material92 = (CMaterial *)(m_pScene.createNode("Material"));
Material92->setAmbientIntensity(0.259259);
Material92->setDiffuseColor(new float[3]{0,0.251004,0.239248});
Material92->setSpecularColor(new float[3]{0.177935,0.249369,0.229278});
Material92->setShininess(0.060606);
ProtoBody91->addChildren(*Material92);

ProtoDeclare89->setProtoBody(*ProtoBody91);

group->addChildren(*ProtoDeclare89);

CProtoDeclare ProtoDeclare93 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco20" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.24" diffuseColor="0.228298 0.385771 0.186794" specularColor="0.200464 0.300145 0.293518" shininess="0.393939"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare93->setName("ArtDeco20");
CProtoInterface* ProtoInterface94 = new CProtoInterface();
ProtoDeclare93->setProtoInterface(*ProtoInterface94);

CProtoBody* ProtoBody95 = new CProtoBody();
CMaterial* Material96 = (CMaterial *)(m_pScene.createNode("Material"));
Material96->setAmbientIntensity(0.24);
Material96->setDiffuseColor(new float[3]{0.228298,0.385771,0.186794});
Material96->setSpecularColor(new float[3]{0.200464,0.300145,0.293518});
Material96->setShininess(0.393939);
ProtoBody95->addChildren(*Material96);

ProtoDeclare93->setProtoBody(*ProtoBody95);

group->addChildren(*ProtoDeclare93);

CProtoDeclare ProtoDeclare97 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco21" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.315389 0.544 0.258052" specularColor="0.456 0.456 0.456" shininess="0.509389"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare97->setName("ArtDeco21");
CProtoInterface* ProtoInterface98 = new CProtoInterface();
ProtoDeclare97->setProtoInterface(*ProtoInterface98);

CProtoBody* ProtoBody99 = new CProtoBody();
CMaterial* Material100 = (CMaterial *)(m_pScene.createNode("Material"));
Material100->setAmbientIntensity(0.25);
Material100->setDiffuseColor(new float[3]{0.315389,0.544,0.258052});
Material100->setSpecularColor(new float[3]{0.456,0.456,0.456});
Material100->setShininess(0.509389);
ProtoBody99->addChildren(*Material100);

ProtoDeclare97->setProtoBody(*ProtoBody99);

group->addChildren(*ProtoDeclare97);

CProtoDeclare ProtoDeclare101 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco22" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.246032" diffuseColor="0.251104 0.312562 0.201724" specularColor="0.209184 0.113842 0.111328" shininess="0.086735"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare101->setName("ArtDeco22");
CProtoInterface* ProtoInterface102 = new CProtoInterface();
ProtoDeclare101->setProtoInterface(*ProtoInterface102);

CProtoBody* ProtoBody103 = new CProtoBody();
CMaterial* Material104 = (CMaterial *)(m_pScene.createNode("Material"));
Material104->setAmbientIntensity(0.246032);
Material104->setDiffuseColor(new float[3]{0.251104,0.312562,0.201724});
Material104->setSpecularColor(new float[3]{0.209184,0.113842,0.111328});
Material104->setShininess(0.086735);
ProtoBody103->addChildren(*Material104);

ProtoDeclare101->setProtoBody(*ProtoBody103);

group->addChildren(*ProtoDeclare101);

CProtoDeclare ProtoDeclare105 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco23" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.242424" diffuseColor="0.392348 0.456 0.417708" specularColor="0.533333 0.533333 0.533333" shininess="0.933333"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare105->setName("ArtDeco23");
CProtoInterface* ProtoInterface106 = new CProtoInterface();
ProtoDeclare105->setProtoInterface(*ProtoInterface106);

CProtoBody* ProtoBody107 = new CProtoBody();
CMaterial* Material108 = (CMaterial *)(m_pScene.createNode("Material"));
Material108->setAmbientIntensity(0.242424);
Material108->setDiffuseColor(new float[3]{0.392348,0.456,0.417708});
Material108->setSpecularColor(new float[3]{0.533333,0.533333,0.533333});
Material108->setShininess(0.933333);
ProtoBody107->addChildren(*Material108);

ProtoDeclare105->setProtoBody(*ProtoBody107);

group->addChildren(*ProtoDeclare105);

CProtoDeclare ProtoDeclare109 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco24" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.253968" diffuseColor="1 0.854922 0" specularColor="0.872449 0.247119 0.254214" shininess="1"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare109->setName("ArtDeco24");
CProtoInterface* ProtoInterface110 = new CProtoInterface();
ProtoDeclare109->setProtoInterface(*ProtoInterface110);

CProtoBody* ProtoBody111 = new CProtoBody();
CMaterial* Material112 = (CMaterial *)(m_pScene.createNode("Material"));
Material112->setAmbientIntensity(0.253968);
Material112->setDiffuseColor(new float[3]{1,0.854922,0});
Material112->setSpecularColor(new float[3]{0.872449,0.247119,0.254214});
Material112->setShininess(1);
ProtoBody111->addChildren(*Material112);

ProtoDeclare109->setProtoBody(*ProtoBody111);

group->addChildren(*ProtoDeclare109);

CProtoDeclare ProtoDeclare113 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco25" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.25641" diffuseColor="0.795918 0.505869 0.093315" specularColor="0.923469 0.428866 0.006369" shininess="0.397959"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare113->setName("ArtDeco25");
CProtoInterface* ProtoInterface114 = new CProtoInterface();
ProtoDeclare113->setProtoInterface(*ProtoInterface114);

CProtoBody* ProtoBody115 = new CProtoBody();
CMaterial* Material116 = (CMaterial *)(m_pScene.createNode("Material"));
Material116->setAmbientIntensity(0.25641);
Material116->setDiffuseColor(new float[3]{0.795918,0.505869,0.093315});
Material116->setSpecularColor(new float[3]{0.923469,0.428866,0.006369});
Material116->setShininess(0.397959);
ProtoBody115->addChildren(*Material116);

ProtoDeclare113->setProtoBody(*ProtoBody115);

group->addChildren(*ProtoDeclare113);

CProtoDeclare ProtoDeclare117 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco26" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="1" diffuseColor="0.331633 0.296582 0.279057" specularColor="0.311224 0.25183 0.133042" shininess="0.096939"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare117->setName("ArtDeco26");
CProtoInterface* ProtoInterface118 = new CProtoInterface();
ProtoDeclare117->setProtoInterface(*ProtoInterface118);

CProtoBody* ProtoBody119 = new CProtoBody();
CMaterial* Material120 = (CMaterial *)(m_pScene.createNode("Material"));
Material120->setAmbientIntensity(1);
Material120->setDiffuseColor(new float[3]{0.331633,0.296582,0.279057});
Material120->setSpecularColor(new float[3]{0.311224,0.25183,0.133042});
Material120->setShininess(0.096939);
ProtoBody119->addChildren(*Material120);

ProtoDeclare117->setProtoBody(*ProtoBody119);

group->addChildren(*ProtoDeclare117);

CProtoDeclare ProtoDeclare121 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco27" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.263158" diffuseColor="0.345455 0.163262 0.122622" specularColor="0.212121 0.107475 0" shininess="0.048649"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare121->setName("ArtDeco27");
CProtoInterface* ProtoInterface122 = new CProtoInterface();
ProtoDeclare121->setProtoInterface(*ProtoInterface122);

CProtoBody* ProtoBody123 = new CProtoBody();
CMaterial* Material124 = (CMaterial *)(m_pScene.createNode("Material"));
Material124->setAmbientIntensity(0.263158);
Material124->setDiffuseColor(new float[3]{0.345455,0.163262,0.122622});
Material124->setSpecularColor(new float[3]{0.212121,0.107475,0});
Material124->setShininess(0.048649);
ProtoBody123->addChildren(*Material124);

ProtoDeclare121->setProtoBody(*ProtoBody123);

group->addChildren(*ProtoDeclare121);

CProtoDeclare ProtoDeclare125 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco28" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.240506" diffuseColor="0.277281 0.104336 0.0799" specularColor="0.305587 0.141916 0.270572" shininess="0.09697"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare125->setName("ArtDeco28");
CProtoInterface* ProtoInterface126 = new CProtoInterface();
ProtoDeclare125->setProtoInterface(*ProtoInterface126);

CProtoBody* ProtoBody127 = new CProtoBody();
CMaterial* Material128 = (CMaterial *)(m_pScene.createNode("Material"));
Material128->setAmbientIntensity(0.240506);
Material128->setDiffuseColor(new float[3]{0.277281,0.104336,0.0799});
Material128->setSpecularColor(new float[3]{0.305587,0.141916,0.270572});
Material128->setShininess(0.09697);
ProtoBody127->addChildren(*Material128);

ProtoDeclare125->setProtoBody(*ProtoBody127);

group->addChildren(*ProtoDeclare125);

CProtoDeclare ProtoDeclare129 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco29" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.215686" diffuseColor="0.087034 0.025888 0" specularColor="0.224138 0.104091 0.104091" shininess="0.045918"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare129->setName("ArtDeco29");
CProtoInterface* ProtoInterface130 = new CProtoInterface();
ProtoDeclare129->setProtoInterface(*ProtoInterface130);

CProtoBody* ProtoBody131 = new CProtoBody();
CMaterial* Material132 = (CMaterial *)(m_pScene.createNode("Material"));
Material132->setAmbientIntensity(0.215686);
Material132->setDiffuseColor(new float[3]{0.087034,0.025888,0});
Material132->setSpecularColor(new float[3]{0.224138,0.104091,0.104091});
Material132->setShininess(0.045918);
ProtoBody131->addChildren(*Material132);

ProtoDeclare129->setProtoBody(*ProtoBody131);

group->addChildren(*ProtoDeclare129);

CProtoDeclare ProtoDeclare133 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco30" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0" diffuseColor="0 0 0" specularColor="0.293243 0.297387 0.290421" shininess="0.081633"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare133->setName("ArtDeco30");
CProtoInterface* ProtoInterface134 = new CProtoInterface();
ProtoDeclare133->setProtoInterface(*ProtoInterface134);

CProtoBody* ProtoBody135 = new CProtoBody();
CMaterial* Material136 = (CMaterial *)(m_pScene.createNode("Material"));
Material136->setAmbientIntensity(0);
Material136->setDiffuseColor(new float[3]{0,0,0});
Material136->setSpecularColor(new float[3]{0.293243,0.297387,0.290421});
Material136->setShininess(0.081633);
ProtoBody135->addChildren(*Material136);

ProtoDeclare133->setProtoBody(*ProtoBody135);

group->addChildren(*ProtoDeclare133);

CProtoDeclare ProtoDeclare137 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco31" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.25641" diffuseColor="0.236364 0.236364 0.236364" specularColor="0.29697 0.245839 0.295962" shininess="0.054546"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare137->setName("ArtDeco31");
CProtoInterface* ProtoInterface138 = new CProtoInterface();
ProtoDeclare137->setProtoInterface(*ProtoInterface138);

CProtoBody* ProtoBody139 = new CProtoBody();
CMaterial* Material140 = (CMaterial *)(m_pScene.createNode("Material"));
Material140->setAmbientIntensity(0.25641);
Material140->setDiffuseColor(new float[3]{0.236364,0.236364,0.236364});
Material140->setSpecularColor(new float[3]{0.29697,0.245839,0.295962});
Material140->setShininess(0.054546);
ProtoBody139->addChildren(*Material140);

ProtoDeclare137->setProtoBody(*ProtoBody139);

group->addChildren(*ProtoDeclare137);

CProtoDeclare ProtoDeclare141 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco32" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.242424" diffuseColor="0.38087 0.382957 0.417708" specularColor="0.533333 0.533333 0.533333" shininess="0.933333"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare141->setName("ArtDeco32");
CProtoInterface* ProtoInterface142 = new CProtoInterface();
ProtoDeclare141->setProtoInterface(*ProtoInterface142);

CProtoBody* ProtoBody143 = new CProtoBody();
CMaterial* Material144 = (CMaterial *)(m_pScene.createNode("Material"));
Material144->setAmbientIntensity(0.242424);
Material144->setDiffuseColor(new float[3]{0.38087,0.382957,0.417708});
Material144->setSpecularColor(new float[3]{0.533333,0.533333,0.533333});
Material144->setShininess(0.933333);
ProtoBody143->addChildren(*Material144);

ProtoDeclare141->setProtoBody(*ProtoBody143);

group->addChildren(*ProtoDeclare141);

CProtoDeclare ProtoDeclare145 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco33" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.230089" diffuseColor="0.610811 0.610811 0.610811" specularColor="0.767568 0.756757 0.764964" shininess="0.897297"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare145->setName("ArtDeco33");
CProtoInterface* ProtoInterface146 = new CProtoInterface();
ProtoDeclare145->setProtoInterface(*ProtoInterface146);

CProtoBody* ProtoBody147 = new CProtoBody();
CMaterial* Material148 = (CMaterial *)(m_pScene.createNode("Material"));
Material148->setAmbientIntensity(0.230089);
Material148->setDiffuseColor(new float[3]{0.610811,0.610811,0.610811});
Material148->setSpecularColor(new float[3]{0.767568,0.756757,0.764964});
Material148->setShininess(0.897297);
ProtoBody147->addChildren(*Material148);

ProtoDeclare145->setProtoBody(*ProtoBody147);

group->addChildren(*ProtoDeclare145);

CProtoDeclare ProtoDeclare149 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="ArtDeco34" ><ProtoInterface></ProtoInterface>
<ProtoBody><Material ambientIntensity="0.25" specularColor="0.2 0.2 0.2" shininess="0"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare149->setName("ArtDeco34");
CProtoInterface* ProtoInterface150 = new CProtoInterface();
ProtoDeclare149->setProtoInterface(*ProtoInterface150);

CProtoBody* ProtoBody151 = new CProtoBody();
CMaterial* Material152 = (CMaterial *)(m_pScene.createNode("Material"));
Material152->setAmbientIntensity(0.25);
Material152->setSpecularColor(new float[3]{0.2,0.2,0.2});
Material152->setShininess(0);
ProtoBody151->addChildren(*Material152);

ProtoDeclare149->setProtoBody(*ProtoBody151);

group->addChildren(*ProtoDeclare149);

CWorldInfo* WorldInfo153 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo153->setTitle("ArtDecoPrototypes.x3d");
group->addChildren(*WorldInfo153);

CAnchor* Anchor154 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor154->setDescription("ArtDecoPrototypeExample");
Anchor154->setUrl(new CString[4]{"../data/ArtDecoExamples.json","../data/ArtDecoExamples.x3d","ArtDecoExamples.json","ArtDecoExamples.x3d"}, 4);
Anchor154->setParameter(new CString[1]{"target=_blank"}, 1);
CShape* Shape155 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance156 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material157 = (CMaterial *)(m_pScene.createNode("Material"));
Material157->setDiffuseColor(new float[3]{0.8,0.4,0});
Appearance156->setMaterial(*Material157);

Shape155->setAppearance(*Appearance156);

CText* Text158 = (CText *)(m_pScene.createNode("Text"));
Text158->setString(new CString[6]{"ArtDecoExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","ArtDecoExamples.x3d"}, 6);
CFontStyle* FontStyle159 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle159->setSize(0.8);
FontStyle159->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
Text158->setFontStyle(*FontStyle159);

Shape155->setGeometry(Text158);

Anchor154->addChildren(*Shape155);

group->addChildren(*Anchor154);

X3D0->setScene(*Scene12);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
