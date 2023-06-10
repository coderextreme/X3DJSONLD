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
X3D0->setVersion("3.0");
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

Cmeta* meta12 = new Cmeta();
meta12->setName("license");
meta12->setContent("../license.html");
head1->addMeta(*meta12);

X3D0->setHead(*head1);

CScene* Scene13 = new CScene();
CWorldInfo* WorldInfo14 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo14->setTitle("ArtDecoPrototypes.x3d");
group->addChildren(*WorldInfo14);

CProtoDeclare ProtoDeclare15 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco00" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.282435 0.085159 0.134462" shininess="0.127273" specularColor="0.276305 0.11431 0.139857"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare15->setName("ArtDeco00");
ProtoDeclare15->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare15->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody16 = new CProtoBody();
CMaterial* Material17 = (CMaterial *)(m_pScene.createNode("Material"));
Material17->setAmbientIntensity(0.25);
Material17->setDiffuseColor(new float[3]{0.282435,0.085159,0.134462});
Material17->setShininess(0.127273);
Material17->setSpecularColor(new float[3]{0.276305,0.11431,0.139857});
ProtoBody16->addChildren(*Material17);

ProtoDeclare15->setProtoBody(*ProtoBody16);

group->addChildren(*ProtoDeclare15);

CProtoDeclare ProtoDeclare18 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco01" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.254777" diffuseColor="0.685208 0.134679 0.332385" shininess="0.071429" specularColor="0.122449 0.050035 0.050035"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare18->setName("ArtDeco01");
ProtoDeclare18->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare18->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody19 = new CProtoBody();
CMaterial* Material20 = (CMaterial *)(m_pScene.createNode("Material"));
Material20->setAmbientIntensity(0.254777);
Material20->setDiffuseColor(new float[3]{0.685208,0.134679,0.332385});
Material20->setShininess(0.071429);
Material20->setSpecularColor(new float[3]{0.122449,0.050035,0.050035});
ProtoBody19->addChildren(*Material20);

ProtoDeclare18->setProtoBody(*ProtoBody19);

group->addChildren(*ProtoDeclare18);

CProtoDeclare ProtoDeclare21 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco02" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><!--computed conversion ambientIntensity=1.745282, normalized to 1.0--><ProtoBody><Material ambientIntensity="1" diffuseColor="0.536861 0.0529 0.245479" shininess="0.832432" specularColor="0.805292 0.765198 0.747416"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare21->setName("ArtDeco02");
ProtoDeclare21->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare21->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
//computed conversion ambientIntensity=1.745282, normalized to 1.0
CProtoBody* ProtoBody22 = new CProtoBody();
CMaterial* Material23 = (CMaterial *)(m_pScene.createNode("Material"));
Material23->setAmbientIntensity(1);
Material23->setDiffuseColor(new float[3]{0.536861,0.0529,0.245479});
Material23->setShininess(0.832432);
Material23->setSpecularColor(new float[3]{0.805292,0.765198,0.747416});
ProtoBody22->addChildren(*Material23);

ProtoDeclare21->setProtoBody(*ProtoBody22);

group->addChildren(*ProtoDeclare21);

CProtoDeclare ProtoDeclare24 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco03" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.248649" diffuseColor="1 0.452381 0.40339" shininess="0.902703" specularColor="0.686486 0.396903 0.419275"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare24->setName("ArtDeco03");
ProtoDeclare24->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare24->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody25 = new CProtoBody();
CMaterial* Material26 = (CMaterial *)(m_pScene.createNode("Material"));
Material26->setAmbientIntensity(0.248649);
Material26->setDiffuseColor(new float[3]{1,0.452381,0.40339});
Material26->setShininess(0.902703);
Material26->setSpecularColor(new float[3]{0.686486,0.396903,0.419275});
ProtoBody25->addChildren(*Material26);

ProtoDeclare24->setProtoBody(*ProtoBody25);

group->addChildren(*ProtoDeclare24);

CProtoDeclare ProtoDeclare27 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco04" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.748016 0.298362 0.342624" shininess="0.69697" specularColor="0.345455 0.345455 0.345455"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare27->setName("ArtDeco04");
ProtoDeclare27->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare27->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody28 = new CProtoBody();
CMaterial* Material29 = (CMaterial *)(m_pScene.createNode("Material"));
Material29->setAmbientIntensity(0.25);
Material29->setDiffuseColor(new float[3]{0.748016,0.298362,0.342624});
Material29->setShininess(0.69697);
Material29->setSpecularColor(new float[3]{0.345455,0.345455,0.345455});
ProtoBody28->addChildren(*Material29);

ProtoDeclare27->setProtoBody(*ProtoBody28);

group->addChildren(*ProtoDeclare27);

CProtoDeclare ProtoDeclare30 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco05" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.24359" diffuseColor="0.945455 0.318988 0.321717" shininess="0.018182" specularColor="0.072727 0.021705 0.010732"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare30->setName("ArtDeco05");
ProtoDeclare30->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare30->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody31 = new CProtoBody();
CMaterial* Material32 = (CMaterial *)(m_pScene.createNode("Material"));
Material32->setAmbientIntensity(0.24359);
Material32->setDiffuseColor(new float[3]{0.945455,0.318988,0.321717});
Material32->setShininess(0.018182);
Material32->setSpecularColor(new float[3]{0.072727,0.021705,0.010732});
ProtoBody31->addChildren(*Material32);

ProtoDeclare30->setProtoBody(*ProtoBody31);

group->addChildren(*ProtoDeclare30);

CProtoDeclare ProtoDeclare33 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco06" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.25946" diffuseColor="0.228655 0.195513 0.425484" shininess="0.542553" specularColor="0.324504 0.404255 0.404255"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare33->setName("ArtDeco06");
ProtoDeclare33->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare33->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody34 = new CProtoBody();
CMaterial* Material35 = (CMaterial *)(m_pScene.createNode("Material"));
Material35->setAmbientIntensity(0.25946);
Material35->setDiffuseColor(new float[3]{0.228655,0.195513,0.425484});
Material35->setShininess(0.542553);
Material35->setSpecularColor(new float[3]{0.324504,0.404255,0.404255});
ProtoBody34->addChildren(*Material35);

ProtoDeclare33->setProtoBody(*ProtoBody34);

group->addChildren(*ProtoDeclare33);

CProtoDeclare ProtoDeclare36 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco07" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.333333" diffuseColor="0.200348 0.100857 0.320833" shininess="0.133333" specularColor="0.311358 0.387879 0.387879"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare36->setName("ArtDeco07");
ProtoDeclare36->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare36->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody37 = new CProtoBody();
CMaterial* Material38 = (CMaterial *)(m_pScene.createNode("Material"));
Material38->setAmbientIntensity(0.333333);
Material38->setDiffuseColor(new float[3]{0.200348,0.100857,0.320833});
Material38->setShininess(0.133333);
Material38->setSpecularColor(new float[3]{0.311358,0.387879,0.387879});
ProtoBody37->addChildren(*Material38);

ProtoDeclare36->setProtoBody(*ProtoBody37);

group->addChildren(*ProtoDeclare36);

CProtoDeclare ProtoDeclare39 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco08" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.242424" diffuseColor="0.330519 0.3389 0.6" shininess="0.787879" specularColor="0.290909 0.290909 0.290909"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare39->setName("ArtDeco08");
ProtoDeclare39->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare39->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody40 = new CProtoBody();
CMaterial* Material41 = (CMaterial *)(m_pScene.createNode("Material"));
Material41->setAmbientIntensity(0.242424);
Material41->setDiffuseColor(new float[3]{0.330519,0.3389,0.6});
Material41->setShininess(0.787879);
Material41->setSpecularColor(new float[3]{0.290909,0.290909,0.290909});
ProtoBody40->addChildren(*Material41);

ProtoDeclare39->setProtoBody(*ProtoBody40);

group->addChildren(*ProtoDeclare39);

CProtoDeclare ProtoDeclare42 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco09" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.333333" diffuseColor="0.237059 0.096273 0.215625" shininess="0.133333" specularColor="0.311358 0.387879 0.387879"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare42->setName("ArtDeco09");
ProtoDeclare42->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare42->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody43 = new CProtoBody();
CMaterial* Material44 = (CMaterial *)(m_pScene.createNode("Material"));
Material44->setAmbientIntensity(0.333333);
Material44->setDiffuseColor(new float[3]{0.237059,0.096273,0.215625});
Material44->setShininess(0.133333);
Material44->setSpecularColor(new float[3]{0.311358,0.387879,0.387879});
ProtoBody43->addChildren(*Material44);

ProtoDeclare42->setProtoBody(*ProtoBody43);

group->addChildren(*ProtoDeclare42);

CProtoDeclare ProtoDeclare45 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco10" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.242425" diffuseColor="0.304 0.09025 0.207364" shininess="0.072727" specularColor="0.6665 0.579046 0.830303"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare45->setName("ArtDeco10");
ProtoDeclare45->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare45->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody46 = new CProtoBody();
CMaterial* Material47 = (CMaterial *)(m_pScene.createNode("Material"));
Material47->setAmbientIntensity(0.242425);
Material47->setDiffuseColor(new float[3]{0.304,0.09025,0.207364});
Material47->setShininess(0.072727);
Material47->setSpecularColor(new float[3]{0.6665,0.579046,0.830303});
ProtoBody46->addChildren(*Material47);

ProtoDeclare45->setProtoBody(*ProtoBody46);

group->addChildren(*ProtoDeclare45);

CProtoDeclare ProtoDeclare48 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco11" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.258928" diffuseColor="0.335631 0.207672 0.238304" emissiveColor="0.010638 0.010638 0.010638" shininess="0.021277" specularColor="0.198631 0.075403 0.138803"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare48->setName("ArtDeco11");
ProtoDeclare48->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare48->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody49 = new CProtoBody();
CMaterial* Material50 = (CMaterial *)(m_pScene.createNode("Material"));
Material50->setAmbientIntensity(0.258928);
Material50->setDiffuseColor(new float[3]{0.335631,0.207672,0.238304});
Material50->setEmissiveColor(new float[3]{0.010638,0.010638,0.010638});
Material50->setShininess(0.021277);
Material50->setSpecularColor(new float[3]{0.198631,0.075403,0.138803});
ProtoBody49->addChildren(*Material50);

ProtoDeclare48->setProtoBody(*ProtoBody49);

group->addChildren(*ProtoDeclare48);

CProtoDeclare ProtoDeclare51 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco12" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.240838" diffuseColor="0.876873 0.14715 0.00856" shininess="0.076531" specularColor="0.193878 0.029416 0.029416"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare51->setName("ArtDeco12");
ProtoDeclare51->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare51->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody52 = new CProtoBody();
CMaterial* Material53 = (CMaterial *)(m_pScene.createNode("Material"));
Material53->setAmbientIntensity(0.240838);
Material53->setDiffuseColor(new float[3]{0.876873,0.14715,0.00856});
Material53->setShininess(0.076531);
Material53->setSpecularColor(new float[3]{0.193878,0.029416,0.029416});
ProtoBody52->addChildren(*Material53);

ProtoDeclare51->setProtoBody(*ProtoBody52);

group->addChildren(*ProtoDeclare51);

CProtoDeclare ProtoDeclare54 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco13" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.794445 0.249425 0" shininess="0.551515" specularColor="0.62904 0.194211 0.033663"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare54->setName("ArtDeco13");
ProtoDeclare54->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare54->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody55 = new CProtoBody();
CMaterial* Material56 = (CMaterial *)(m_pScene.createNode("Material"));
Material56->setAmbientIntensity(0.25);
Material56->setDiffuseColor(new float[3]{0.794445,0.249425,0});
Material56->setShininess(0.551515);
Material56->setSpecularColor(new float[3]{0.62904,0.194211,0.033663});
ProtoBody55->addChildren(*Material56);

ProtoDeclare54->setProtoBody(*ProtoBody55);

group->addChildren(*ProtoDeclare54);

CProtoDeclare ProtoDeclare57 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco14" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.510609 0.17264 0.059872" shininess="0.933333" specularColor="0.533333 0.533333 0.533333"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare57->setName("ArtDeco14");
ProtoDeclare57->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare57->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody58 = new CProtoBody();
CMaterial* Material59 = (CMaterial *)(m_pScene.createNode("Material"));
Material59->setAmbientIntensity(0.25);
Material59->setDiffuseColor(new float[3]{0.510609,0.17264,0.059872});
Material59->setShininess(0.933333);
Material59->setSpecularColor(new float[3]{0.533333,0.533333,0.533333});
ProtoBody58->addChildren(*Material59);

ProtoDeclare57->setProtoBody(*ProtoBody58);

group->addChildren(*ProtoDeclare57);

CProtoDeclare ProtoDeclare60 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco15" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.255814" diffuseColor="0.914894 0.444404 0.348914" shininess="0.12766" specularColor="0.345745 0.143066 0"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare60->setName("ArtDeco15");
ProtoDeclare60->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare60->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody61 = new CProtoBody();
CMaterial* Material62 = (CMaterial *)(m_pScene.createNode("Material"));
Material62->setAmbientIntensity(0.255814);
Material62->setDiffuseColor(new float[3]{0.914894,0.444404,0.348914});
Material62->setShininess(0.12766);
Material62->setSpecularColor(new float[3]{0.345745,0.143066,0});
ProtoBody61->addChildren(*Material62);

ProtoDeclare60->setProtoBody(*ProtoBody61);

group->addChildren(*ProtoDeclare60);

CProtoDeclare ProtoDeclare63 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco16" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.240838" diffuseColor="0.876873 0.323147 0.199564" shininess="0.80102" specularColor="0.816327 0.278677 0.278677"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare63->setName("ArtDeco16");
ProtoDeclare63->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare63->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody64 = new CProtoBody();
CMaterial* Material65 = (CMaterial *)(m_pScene.createNode("Material"));
Material65->setAmbientIntensity(0.240838);
Material65->setDiffuseColor(new float[3]{0.876873,0.323147,0.199564});
Material65->setShininess(0.80102);
Material65->setSpecularColor(new float[3]{0.816327,0.278677,0.278677});
ProtoBody64->addChildren(*Material65);

ProtoDeclare63->setProtoBody(*ProtoBody64);

group->addChildren(*ProtoDeclare63);

CProtoDeclare ProtoDeclare66 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco17" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.242424" diffuseColor="0.515625 0.315496 0.252441" shininess="0.933333" specularColor="0.533333 0.533333 0.533333"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare66->setName("ArtDeco17");
ProtoDeclare66->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare66->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody67 = new CProtoBody();
CMaterial* Material68 = (CMaterial *)(m_pScene.createNode("Material"));
Material68->setAmbientIntensity(0.242424);
Material68->setDiffuseColor(new float[3]{0.515625,0.315496,0.252441});
Material68->setShininess(0.933333);
Material68->setSpecularColor(new float[3]{0.533333,0.533333,0.533333});
ProtoBody67->addChildren(*Material68);

ProtoDeclare66->setProtoBody(*ProtoBody67);

group->addChildren(*ProtoDeclare66);

CProtoDeclare ProtoDeclare69 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco18" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.264706" diffuseColor="0 0.346939 0.253624" shininess="0.316327" specularColor="0 0.311074 0.357143"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare69->setName("ArtDeco18");
ProtoDeclare69->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare69->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody70 = new CProtoBody();
CMaterial* Material71 = (CMaterial *)(m_pScene.createNode("Material"));
Material71->setAmbientIntensity(0.264706);
Material71->setDiffuseColor(new float[3]{0,0.346939,0.253624});
Material71->setShininess(0.316327);
Material71->setSpecularColor(new float[3]{0,0.311074,0.357143});
ProtoBody70->addChildren(*Material71);

ProtoDeclare69->setProtoBody(*ProtoBody70);

group->addChildren(*ProtoDeclare69);

CProtoDeclare ProtoDeclare72 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco19" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.259259" diffuseColor="0 0.251004 0.239248" shininess="0.060606" specularColor="0.177935 0.249369 0.229278"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare72->setName("ArtDeco19");
ProtoDeclare72->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare72->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody73 = new CProtoBody();
CMaterial* Material74 = (CMaterial *)(m_pScene.createNode("Material"));
Material74->setAmbientIntensity(0.259259);
Material74->setDiffuseColor(new float[3]{0,0.251004,0.239248});
Material74->setShininess(0.060606);
Material74->setSpecularColor(new float[3]{0.177935,0.249369,0.229278});
ProtoBody73->addChildren(*Material74);

ProtoDeclare72->setProtoBody(*ProtoBody73);

group->addChildren(*ProtoDeclare72);

CProtoDeclare ProtoDeclare75 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco20" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.24" diffuseColor="0.228298 0.385771 0.186794" shininess="0.393939" specularColor="0.200464 0.300145 0.293518"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare75->setName("ArtDeco20");
ProtoDeclare75->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare75->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody76 = new CProtoBody();
CMaterial* Material77 = (CMaterial *)(m_pScene.createNode("Material"));
Material77->setAmbientIntensity(0.24);
Material77->setDiffuseColor(new float[3]{0.228298,0.385771,0.186794});
Material77->setShininess(0.393939);
Material77->setSpecularColor(new float[3]{0.200464,0.300145,0.293518});
ProtoBody76->addChildren(*Material77);

ProtoDeclare75->setProtoBody(*ProtoBody76);

group->addChildren(*ProtoDeclare75);

CProtoDeclare ProtoDeclare78 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco21" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.25" diffuseColor="0.315389 0.544 0.258052" shininess="0.509389" specularColor="0.456 0.456 0.456"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare78->setName("ArtDeco21");
ProtoDeclare78->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare78->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody79 = new CProtoBody();
CMaterial* Material80 = (CMaterial *)(m_pScene.createNode("Material"));
Material80->setAmbientIntensity(0.25);
Material80->setDiffuseColor(new float[3]{0.315389,0.544,0.258052});
Material80->setShininess(0.509389);
Material80->setSpecularColor(new float[3]{0.456,0.456,0.456});
ProtoBody79->addChildren(*Material80);

ProtoDeclare78->setProtoBody(*ProtoBody79);

group->addChildren(*ProtoDeclare78);

CProtoDeclare ProtoDeclare81 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco22" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.246032" diffuseColor="0.251104 0.312562 0.201724" shininess="0.086735" specularColor="0.209184 0.113842 0.111328"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare81->setName("ArtDeco22");
ProtoDeclare81->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare81->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody82 = new CProtoBody();
CMaterial* Material83 = (CMaterial *)(m_pScene.createNode("Material"));
Material83->setAmbientIntensity(0.246032);
Material83->setDiffuseColor(new float[3]{0.251104,0.312562,0.201724});
Material83->setShininess(0.086735);
Material83->setSpecularColor(new float[3]{0.209184,0.113842,0.111328});
ProtoBody82->addChildren(*Material83);

ProtoDeclare81->setProtoBody(*ProtoBody82);

group->addChildren(*ProtoDeclare81);

CProtoDeclare ProtoDeclare84 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco23" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.242424" diffuseColor="0.392348 0.456 0.417708" shininess="0.933333" specularColor="0.533333 0.533333 0.533333"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare84->setName("ArtDeco23");
ProtoDeclare84->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare84->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody85 = new CProtoBody();
CMaterial* Material86 = (CMaterial *)(m_pScene.createNode("Material"));
Material86->setAmbientIntensity(0.242424);
Material86->setDiffuseColor(new float[3]{0.392348,0.456,0.417708});
Material86->setShininess(0.933333);
Material86->setSpecularColor(new float[3]{0.533333,0.533333,0.533333});
ProtoBody85->addChildren(*Material86);

ProtoDeclare84->setProtoBody(*ProtoBody85);

group->addChildren(*ProtoDeclare84);

CProtoDeclare ProtoDeclare87 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco24" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.253968" diffuseColor="1 0.854922 0" shininess="1" specularColor="0.872449 0.247119 0.254214"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare87->setName("ArtDeco24");
ProtoDeclare87->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare87->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody88 = new CProtoBody();
CMaterial* Material89 = (CMaterial *)(m_pScene.createNode("Material"));
Material89->setAmbientIntensity(0.253968);
Material89->setDiffuseColor(new float[3]{1,0.854922,0});
Material89->setShininess(1);
Material89->setSpecularColor(new float[3]{0.872449,0.247119,0.254214});
ProtoBody88->addChildren(*Material89);

ProtoDeclare87->setProtoBody(*ProtoBody88);

group->addChildren(*ProtoDeclare87);

CProtoDeclare ProtoDeclare90 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco25" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.25641" diffuseColor="0.795918 0.505869 0.093315" shininess="0.397959" specularColor="0.923469 0.428866 0.006369"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare90->setName("ArtDeco25");
ProtoDeclare90->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare90->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody91 = new CProtoBody();
CMaterial* Material92 = (CMaterial *)(m_pScene.createNode("Material"));
Material92->setAmbientIntensity(0.25641);
Material92->setDiffuseColor(new float[3]{0.795918,0.505869,0.093315});
Material92->setShininess(0.397959);
Material92->setSpecularColor(new float[3]{0.923469,0.428866,0.006369});
ProtoBody91->addChildren(*Material92);

ProtoDeclare90->setProtoBody(*ProtoBody91);

group->addChildren(*ProtoDeclare90);

CProtoDeclare ProtoDeclare93 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco26" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><!--computed conversion ambientIntensity=2.226234, normalized to 1.0--><ProtoBody><Material ambientIntensity="1" diffuseColor="0.331633 0.296582 0.279057" shininess="0.096939" specularColor="0.311224 0.25183 0.133042"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare93->setName("ArtDeco26");
ProtoDeclare93->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare93->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
//computed conversion ambientIntensity=2.226234, normalized to 1.0
CProtoBody* ProtoBody94 = new CProtoBody();
CMaterial* Material95 = (CMaterial *)(m_pScene.createNode("Material"));
Material95->setAmbientIntensity(1);
Material95->setDiffuseColor(new float[3]{0.331633,0.296582,0.279057});
Material95->setShininess(0.096939);
Material95->setSpecularColor(new float[3]{0.311224,0.25183,0.133042});
ProtoBody94->addChildren(*Material95);

ProtoDeclare93->setProtoBody(*ProtoBody94);

group->addChildren(*ProtoDeclare93);

CProtoDeclare ProtoDeclare96 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco27" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.263158" diffuseColor="0.345455 0.163262 0.122622" shininess="0.048649" specularColor="0.212121 0.107475 0"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare96->setName("ArtDeco27");
ProtoDeclare96->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare96->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody97 = new CProtoBody();
CMaterial* Material98 = (CMaterial *)(m_pScene.createNode("Material"));
Material98->setAmbientIntensity(0.263158);
Material98->setDiffuseColor(new float[3]{0.345455,0.163262,0.122622});
Material98->setShininess(0.048649);
Material98->setSpecularColor(new float[3]{0.212121,0.107475,0});
ProtoBody97->addChildren(*Material98);

ProtoDeclare96->setProtoBody(*ProtoBody97);

group->addChildren(*ProtoDeclare96);

CProtoDeclare ProtoDeclare99 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco28" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.240506" diffuseColor="0.277281 0.104336 0.0799" shininess="0.09697" specularColor="0.305587 0.141916 0.270572"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare99->setName("ArtDeco28");
ProtoDeclare99->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare99->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody100 = new CProtoBody();
CMaterial* Material101 = (CMaterial *)(m_pScene.createNode("Material"));
Material101->setAmbientIntensity(0.240506);
Material101->setDiffuseColor(new float[3]{0.277281,0.104336,0.0799});
Material101->setShininess(0.09697);
Material101->setSpecularColor(new float[3]{0.305587,0.141916,0.270572});
ProtoBody100->addChildren(*Material101);

ProtoDeclare99->setProtoBody(*ProtoBody100);

group->addChildren(*ProtoDeclare99);

CProtoDeclare ProtoDeclare102 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco29" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.215686" diffuseColor="0.087034 0.025888 0" shininess="0.045918" specularColor="0.224138 0.104091 0.104091"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare102->setName("ArtDeco29");
ProtoDeclare102->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare102->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody103 = new CProtoBody();
CMaterial* Material104 = (CMaterial *)(m_pScene.createNode("Material"));
Material104->setAmbientIntensity(0.215686);
Material104->setDiffuseColor(new float[3]{0.087034,0.025888,0});
Material104->setShininess(0.045918);
Material104->setSpecularColor(new float[3]{0.224138,0.104091,0.104091});
ProtoBody103->addChildren(*Material104);

ProtoDeclare102->setProtoBody(*ProtoBody103);

group->addChildren(*ProtoDeclare102);

CProtoDeclare ProtoDeclare105 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco30" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0" diffuseColor="0 0 0" shininess="0.081633" specularColor="0.293243 0.297387 0.290421"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare105->setName("ArtDeco30");
ProtoDeclare105->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare105->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody106 = new CProtoBody();
CMaterial* Material107 = (CMaterial *)(m_pScene.createNode("Material"));
Material107->setAmbientIntensity(0);
Material107->setDiffuseColor(new float[3]{0,0,0});
Material107->setShininess(0.081633);
Material107->setSpecularColor(new float[3]{0.293243,0.297387,0.290421});
ProtoBody106->addChildren(*Material107);

ProtoDeclare105->setProtoBody(*ProtoBody106);

group->addChildren(*ProtoDeclare105);

CProtoDeclare ProtoDeclare108 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco31" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.25641" diffuseColor="0.236364 0.236364 0.236364" shininess="0.054546" specularColor="0.29697 0.245839 0.295962"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare108->setName("ArtDeco31");
ProtoDeclare108->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare108->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody109 = new CProtoBody();
CMaterial* Material110 = (CMaterial *)(m_pScene.createNode("Material"));
Material110->setAmbientIntensity(0.25641);
Material110->setDiffuseColor(new float[3]{0.236364,0.236364,0.236364});
Material110->setShininess(0.054546);
Material110->setSpecularColor(new float[3]{0.29697,0.245839,0.295962});
ProtoBody109->addChildren(*Material110);

ProtoDeclare108->setProtoBody(*ProtoBody109);

group->addChildren(*ProtoDeclare108);

CProtoDeclare ProtoDeclare111 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco32" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.242424" diffuseColor="0.38087 0.382957 0.417708" shininess="0.933333" specularColor="0.533333 0.533333 0.533333"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare111->setName("ArtDeco32");
ProtoDeclare111->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare111->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody112 = new CProtoBody();
CMaterial* Material113 = (CMaterial *)(m_pScene.createNode("Material"));
Material113->setAmbientIntensity(0.242424);
Material113->setDiffuseColor(new float[3]{0.38087,0.382957,0.417708});
Material113->setShininess(0.933333);
Material113->setSpecularColor(new float[3]{0.533333,0.533333,0.533333});
ProtoBody112->addChildren(*Material113);

ProtoDeclare111->setProtoBody(*ProtoBody112);

group->addChildren(*ProtoDeclare111);

CProtoDeclare ProtoDeclare114 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco33" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.230089" diffuseColor="0.610811 0.610811 0.610811" shininess="0.897297" specularColor="0.767568 0.756757 0.764964"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare114->setName("ArtDeco33");
ProtoDeclare114->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare114->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody115 = new CProtoBody();
CMaterial* Material116 = (CMaterial *)(m_pScene.createNode("Material"));
Material116->setAmbientIntensity(0.230089);
Material116->setDiffuseColor(new float[3]{0.610811,0.610811,0.610811});
Material116->setShininess(0.897297);
Material116->setSpecularColor(new float[3]{0.767568,0.756757,0.764964});
ProtoBody115->addChildren(*Material116);

ProtoDeclare114->setProtoBody(*ProtoBody115);

group->addChildren(*ProtoDeclare114);

CProtoDeclare ProtoDeclare117 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="ArtDeco34" appinfo="UniversalMediaMaterials prototype" documentation="https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials" ><ProtoBody><Material ambientIntensity="0.25" shininess="0" specularColor="0.2 0.2 0.2"></Material>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare117->setName("ArtDeco34");
ProtoDeclare117->setAppinfo("UniversalMediaMaterials prototype");
ProtoDeclare117->setDocumentation("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials");
CProtoBody* ProtoBody118 = new CProtoBody();
CMaterial* Material119 = (CMaterial *)(m_pScene.createNode("Material"));
Material119->setAmbientIntensity(0.25);
Material119->setShininess(0);
Material119->setSpecularColor(new float[3]{0.2,0.2,0.2});
ProtoBody118->addChildren(*Material119);

ProtoDeclare117->setProtoBody(*ProtoBody118);

group->addChildren(*ProtoDeclare117);

CAnchor* Anchor120 = (CAnchor *)(m_pScene.createNode("Anchor"));
Anchor120->setDescription("ArtDecoPrototypeExample");
Anchor120->setParameter(new CString[1]{"target=_blank"}, 1);
Anchor120->setUrl(new CString[4]{"../data/ArtDecoExamples.json","../data/ArtDecoExamples.x3d","ArtDecoExamples.json","ArtDecoExamples.x3d"}, 4);
CShape* Shape121 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance122 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material123 = (CMaterial *)(m_pScene.createNode("Material"));
Material123->setDiffuseColor(new float[3]{0.8,0.4,0});
Appearance122->setMaterial(*Material123);

Shape121->setAppearance(*Appearance122);

CText* Text124 = (CText *)(m_pScene.createNode("Text"));
Text124->setString(new CString[6]{"ArtDecoExamples.x3d","is a Materials Prototype declaration file.","","For an example scene using these node,","click this text and view","ArtDecoExamples.x3d"}, 6);
CFontStyle* FontStyle125 = (CFontStyle *)(m_pScene.createNode("FontStyle"));
FontStyle125->setJustify(new CString[2]{"MIDDLE","MIDDLE"}, 2);
FontStyle125->setSize(0.8);
Text124->setFontStyle(*FontStyle125);

Shape121->setGeometry(Text124);

Anchor120->addChildren(*Shape121);

group->addChildren(*Anchor120);

X3D0->setScene(*Scene13);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
