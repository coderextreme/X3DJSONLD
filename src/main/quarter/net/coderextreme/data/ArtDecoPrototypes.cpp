
#include <Inventor/nodes/SoCone.h>
#include <Inventor/nodes/SoBaseColor.h>
#include <Inventor/nodes/SoSeparator.h>
#include <Inventor/nodes/SoShape.h>
#include <Inventor/nodes/SoTransform.h>
#include <Inventor/nodes/SoSphere.h>
#include <Inventor/nodes/SoMaterial.h>
#include <Inventor/misc/SoProtoInstance.h>
#include <Inventor/VRMLnodes/SoVRMLAppearance.h>
#include <Quarter/Quarter.h>
#include <Quarter/QuarterWidget.h>
#include <QApplication>
#include <QMainWindow>

using namespace SIM::Coin3D::Quarter;
int main(int argc, char ** argv) 
{

  QApplication app(argc, argv);
  Quarter::init();

  SoSeparator * root = new SoSeparator;
  root->ref();

  SoBaseColor * col = new SoBaseColor;
  col->rgb = SbColor(1, 1, 0);
  root->addChild(col);

  root->addChild(new SoCone);

  QMainWindow * mainwin = new QMainWindow();

  QuarterWidget * viewer = new QuarterWidget(mainwin);
  viewer->setNavigationModeFile();
  mainwin->setCentralWidget(viewer);
  viewer->setSceneGraph(root);

  mainwin->show();
  app.exec();
  root->unref();
  delete viewer;

  Quarter::clean();
SoSceneManager* SoSceneManager0 = new SoSceneManager();
SoSceneManager0->setProfile(QString("Immersive"));
SoSceneManager0->setVersion(QString("4.0"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("ArtDecoPrototypes.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Prototype declarations defining values for X3D/VRML materials, originally converted from SGI's Open Inventor material examples."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("David Roussel"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("translator"));
Someta5->setContent(QString("James Harney, Don Brutzman NPS"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("7 April 2002"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("20 October 2019"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("http://vrmlstuff.free.fr/materials"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("subject"));
Someta9->setContent(QString("Universal Media Material Library"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("identifier"));
Someta10->setContent(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/ArtDecoPrototypes.x3d"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("generator"));
Someta11->setContent(QString("Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("license"));
Someta12->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta12);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode13 = new SoNode();
SoWorldInfo* SoWorldInfo14 = new SoWorldInfo();
SoWorldInfo14->setTitle(QString("ArtDecoPrototypes.x3d"));
SoNode13->addChild(*SoWorldInfo14);

SoProtoDeclare* SoProtoDeclare15 = new SoProtoDeclare();
SoProtoDeclare15->setName(QString("ArtDeco00"));
SoProtoDeclare15->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare15->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody16 = new SoProtoBody();
SoMaterial* SoMaterial17 = new SoMaterial();
SoMaterial17->setAmbientIntensity(0.25);
SoMaterial17->setDiffuseColor(new float[]{0.282435,0.085159,0.134462});
SoMaterial17->setShininess(0.127273);
SoMaterial17->setSpecularColor(new float[]{0.276305,0.11431,0.139857});
SoProtoBody16->addChild(*SoMaterial17);

SoProtoDeclare15->addChild(*SoProtoBody16);

SoNode13->addChild(*SoProtoDeclare15);

SoProtoDeclare* SoProtoDeclare18 = new SoProtoDeclare();
SoProtoDeclare18->setName(QString("ArtDeco01"));
SoProtoDeclare18->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare18->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody19 = new SoProtoBody();
SoMaterial* SoMaterial20 = new SoMaterial();
SoMaterial20->setAmbientIntensity(0.254777);
SoMaterial20->setDiffuseColor(new float[]{0.685208,0.134679,0.332385});
SoMaterial20->setShininess(0.071429);
SoMaterial20->setSpecularColor(new float[]{0.122449,0.050035,0.050035});
SoProtoBody19->addChild(*SoMaterial20);

SoProtoDeclare18->addChild(*SoProtoBody19);

SoNode13->addChild(*SoProtoDeclare18);

SoProtoDeclare* SoProtoDeclare21 = new SoProtoDeclare();
SoProtoDeclare21->setName(QString("ArtDeco02"));
SoProtoDeclare21->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare21->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
//computed conversion ambientIntensity=1.745282, normalized to 1.0
SoProtoBody* SoProtoBody22 = new SoProtoBody();
SoMaterial* SoMaterial23 = new SoMaterial();
SoMaterial23->setAmbientIntensity(1);
SoMaterial23->setDiffuseColor(new float[]{0.536861,0.0529,0.245479});
SoMaterial23->setShininess(0.832432);
SoMaterial23->setSpecularColor(new float[]{0.805292,0.765198,0.747416});
SoProtoBody22->addChild(*SoMaterial23);

SoProtoDeclare21->addChild(*SoProtoBody22);

SoNode13->addChild(*SoProtoDeclare21);

SoProtoDeclare* SoProtoDeclare24 = new SoProtoDeclare();
SoProtoDeclare24->setName(QString("ArtDeco03"));
SoProtoDeclare24->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare24->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody25 = new SoProtoBody();
SoMaterial* SoMaterial26 = new SoMaterial();
SoMaterial26->setAmbientIntensity(0.248649);
SoMaterial26->setDiffuseColor(new float[]{1.0,0.452381,0.40339});
SoMaterial26->setShininess(0.902703);
SoMaterial26->setSpecularColor(new float[]{0.686486,0.396903,0.419275});
SoProtoBody25->addChild(*SoMaterial26);

SoProtoDeclare24->addChild(*SoProtoBody25);

SoNode13->addChild(*SoProtoDeclare24);

SoProtoDeclare* SoProtoDeclare27 = new SoProtoDeclare();
SoProtoDeclare27->setName(QString("ArtDeco04"));
SoProtoDeclare27->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare27->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody28 = new SoProtoBody();
SoMaterial* SoMaterial29 = new SoMaterial();
SoMaterial29->setAmbientIntensity(0.25);
SoMaterial29->setDiffuseColor(new float[]{0.748016,0.298362,0.342624});
SoMaterial29->setShininess(0.69697);
SoMaterial29->setSpecularColor(new float[]{0.345455,0.345455,0.345455});
SoProtoBody28->addChild(*SoMaterial29);

SoProtoDeclare27->addChild(*SoProtoBody28);

SoNode13->addChild(*SoProtoDeclare27);

SoProtoDeclare* SoProtoDeclare30 = new SoProtoDeclare();
SoProtoDeclare30->setName(QString("ArtDeco05"));
SoProtoDeclare30->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare30->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody31 = new SoProtoBody();
SoMaterial* SoMaterial32 = new SoMaterial();
SoMaterial32->setAmbientIntensity(0.24359);
SoMaterial32->setDiffuseColor(new float[]{0.945455,0.318988,0.321717});
SoMaterial32->setShininess(0.018182);
SoMaterial32->setSpecularColor(new float[]{0.072727,0.021705,0.010732});
SoProtoBody31->addChild(*SoMaterial32);

SoProtoDeclare30->addChild(*SoProtoBody31);

SoNode13->addChild(*SoProtoDeclare30);

SoProtoDeclare* SoProtoDeclare33 = new SoProtoDeclare();
SoProtoDeclare33->setName(QString("ArtDeco06"));
SoProtoDeclare33->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare33->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody34 = new SoProtoBody();
SoMaterial* SoMaterial35 = new SoMaterial();
SoMaterial35->setAmbientIntensity(0.25946);
SoMaterial35->setDiffuseColor(new float[]{0.228655,0.195513,0.425484});
SoMaterial35->setShininess(0.542553);
SoMaterial35->setSpecularColor(new float[]{0.324504,0.404255,0.404255});
SoProtoBody34->addChild(*SoMaterial35);

SoProtoDeclare33->addChild(*SoProtoBody34);

SoNode13->addChild(*SoProtoDeclare33);

SoProtoDeclare* SoProtoDeclare36 = new SoProtoDeclare();
SoProtoDeclare36->setName(QString("ArtDeco07"));
SoProtoDeclare36->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare36->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody37 = new SoProtoBody();
SoMaterial* SoMaterial38 = new SoMaterial();
SoMaterial38->setAmbientIntensity(0.333333);
SoMaterial38->setDiffuseColor(new float[]{0.200348,0.100857,0.320833});
SoMaterial38->setShininess(0.133333);
SoMaterial38->setSpecularColor(new float[]{0.311358,0.387879,0.387879});
SoProtoBody37->addChild(*SoMaterial38);

SoProtoDeclare36->addChild(*SoProtoBody37);

SoNode13->addChild(*SoProtoDeclare36);

SoProtoDeclare* SoProtoDeclare39 = new SoProtoDeclare();
SoProtoDeclare39->setName(QString("ArtDeco08"));
SoProtoDeclare39->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare39->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody40 = new SoProtoBody();
SoMaterial* SoMaterial41 = new SoMaterial();
SoMaterial41->setAmbientIntensity(0.242424);
SoMaterial41->setDiffuseColor(new float[]{0.330519,0.3389,0.6});
SoMaterial41->setShininess(0.787879);
SoMaterial41->setSpecularColor(new float[]{0.290909,0.290909,0.290909});
SoProtoBody40->addChild(*SoMaterial41);

SoProtoDeclare39->addChild(*SoProtoBody40);

SoNode13->addChild(*SoProtoDeclare39);

SoProtoDeclare* SoProtoDeclare42 = new SoProtoDeclare();
SoProtoDeclare42->setName(QString("ArtDeco09"));
SoProtoDeclare42->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare42->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody43 = new SoProtoBody();
SoMaterial* SoMaterial44 = new SoMaterial();
SoMaterial44->setAmbientIntensity(0.333333);
SoMaterial44->setDiffuseColor(new float[]{0.237059,0.096273,0.215625});
SoMaterial44->setShininess(0.133333);
SoMaterial44->setSpecularColor(new float[]{0.311358,0.387879,0.387879});
SoProtoBody43->addChild(*SoMaterial44);

SoProtoDeclare42->addChild(*SoProtoBody43);

SoNode13->addChild(*SoProtoDeclare42);

SoProtoDeclare* SoProtoDeclare45 = new SoProtoDeclare();
SoProtoDeclare45->setName(QString("ArtDeco10"));
SoProtoDeclare45->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare45->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody46 = new SoProtoBody();
SoMaterial* SoMaterial47 = new SoMaterial();
SoMaterial47->setAmbientIntensity(0.242425);
SoMaterial47->setDiffuseColor(new float[]{0.304,0.09025,0.207364});
SoMaterial47->setShininess(0.072727);
SoMaterial47->setSpecularColor(new float[]{0.6665,0.579046,0.830303});
SoProtoBody46->addChild(*SoMaterial47);

SoProtoDeclare45->addChild(*SoProtoBody46);

SoNode13->addChild(*SoProtoDeclare45);

SoProtoDeclare* SoProtoDeclare48 = new SoProtoDeclare();
SoProtoDeclare48->setName(QString("ArtDeco11"));
SoProtoDeclare48->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare48->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody49 = new SoProtoBody();
SoMaterial* SoMaterial50 = new SoMaterial();
SoMaterial50->setAmbientIntensity(0.258928);
SoMaterial50->setDiffuseColor(new float[]{0.335631,0.207672,0.238304});
SoMaterial50->setEmissiveColor(new float[]{0.010638,0.010638,0.010638});
SoMaterial50->setShininess(0.021277);
SoMaterial50->setSpecularColor(new float[]{0.198631,0.075403,0.138803});
SoProtoBody49->addChild(*SoMaterial50);

SoProtoDeclare48->addChild(*SoProtoBody49);

SoNode13->addChild(*SoProtoDeclare48);

SoProtoDeclare* SoProtoDeclare51 = new SoProtoDeclare();
SoProtoDeclare51->setName(QString("ArtDeco12"));
SoProtoDeclare51->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare51->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody52 = new SoProtoBody();
SoMaterial* SoMaterial53 = new SoMaterial();
SoMaterial53->setAmbientIntensity(0.240838);
SoMaterial53->setDiffuseColor(new float[]{0.876873,0.14715,0.00856});
SoMaterial53->setShininess(0.076531);
SoMaterial53->setSpecularColor(new float[]{0.193878,0.029416,0.029416});
SoProtoBody52->addChild(*SoMaterial53);

SoProtoDeclare51->addChild(*SoProtoBody52);

SoNode13->addChild(*SoProtoDeclare51);

SoProtoDeclare* SoProtoDeclare54 = new SoProtoDeclare();
SoProtoDeclare54->setName(QString("ArtDeco13"));
SoProtoDeclare54->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare54->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody55 = new SoProtoBody();
SoMaterial* SoMaterial56 = new SoMaterial();
SoMaterial56->setAmbientIntensity(0.25);
SoMaterial56->setDiffuseColor(new float[]{0.794445,0.249425,0.0});
SoMaterial56->setShininess(0.551515);
SoMaterial56->setSpecularColor(new float[]{0.62904,0.194211,0.033663});
SoProtoBody55->addChild(*SoMaterial56);

SoProtoDeclare54->addChild(*SoProtoBody55);

SoNode13->addChild(*SoProtoDeclare54);

SoProtoDeclare* SoProtoDeclare57 = new SoProtoDeclare();
SoProtoDeclare57->setName(QString("ArtDeco14"));
SoProtoDeclare57->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare57->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody58 = new SoProtoBody();
SoMaterial* SoMaterial59 = new SoMaterial();
SoMaterial59->setAmbientIntensity(0.25);
SoMaterial59->setDiffuseColor(new float[]{0.510609,0.17264,0.059872});
SoMaterial59->setShininess(0.933333);
SoMaterial59->setSpecularColor(new float[]{0.533333,0.533333,0.533333});
SoProtoBody58->addChild(*SoMaterial59);

SoProtoDeclare57->addChild(*SoProtoBody58);

SoNode13->addChild(*SoProtoDeclare57);

SoProtoDeclare* SoProtoDeclare60 = new SoProtoDeclare();
SoProtoDeclare60->setName(QString("ArtDeco15"));
SoProtoDeclare60->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare60->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody61 = new SoProtoBody();
SoMaterial* SoMaterial62 = new SoMaterial();
SoMaterial62->setAmbientIntensity(0.255814);
SoMaterial62->setDiffuseColor(new float[]{0.914894,0.444404,0.348914});
SoMaterial62->setShininess(0.12766);
SoMaterial62->setSpecularColor(new float[]{0.345745,0.143066,0.0});
SoProtoBody61->addChild(*SoMaterial62);

SoProtoDeclare60->addChild(*SoProtoBody61);

SoNode13->addChild(*SoProtoDeclare60);

SoProtoDeclare* SoProtoDeclare63 = new SoProtoDeclare();
SoProtoDeclare63->setName(QString("ArtDeco16"));
SoProtoDeclare63->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare63->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody64 = new SoProtoBody();
SoMaterial* SoMaterial65 = new SoMaterial();
SoMaterial65->setAmbientIntensity(0.240838);
SoMaterial65->setDiffuseColor(new float[]{0.876873,0.323147,0.199564});
SoMaterial65->setShininess(0.80102);
SoMaterial65->setSpecularColor(new float[]{0.816327,0.278677,0.278677});
SoProtoBody64->addChild(*SoMaterial65);

SoProtoDeclare63->addChild(*SoProtoBody64);

SoNode13->addChild(*SoProtoDeclare63);

SoProtoDeclare* SoProtoDeclare66 = new SoProtoDeclare();
SoProtoDeclare66->setName(QString("ArtDeco17"));
SoProtoDeclare66->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare66->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody67 = new SoProtoBody();
SoMaterial* SoMaterial68 = new SoMaterial();
SoMaterial68->setAmbientIntensity(0.242424);
SoMaterial68->setDiffuseColor(new float[]{0.515625,0.315496,0.252441});
SoMaterial68->setShininess(0.933333);
SoMaterial68->setSpecularColor(new float[]{0.533333,0.533333,0.533333});
SoProtoBody67->addChild(*SoMaterial68);

SoProtoDeclare66->addChild(*SoProtoBody67);

SoNode13->addChild(*SoProtoDeclare66);

SoProtoDeclare* SoProtoDeclare69 = new SoProtoDeclare();
SoProtoDeclare69->setName(QString("ArtDeco18"));
SoProtoDeclare69->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare69->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody70 = new SoProtoBody();
SoMaterial* SoMaterial71 = new SoMaterial();
SoMaterial71->setAmbientIntensity(0.264706);
SoMaterial71->setDiffuseColor(new float[]{0.0,0.346939,0.253624});
SoMaterial71->setShininess(0.316327);
SoMaterial71->setSpecularColor(new float[]{0.0,0.311074,0.357143});
SoProtoBody70->addChild(*SoMaterial71);

SoProtoDeclare69->addChild(*SoProtoBody70);

SoNode13->addChild(*SoProtoDeclare69);

SoProtoDeclare* SoProtoDeclare72 = new SoProtoDeclare();
SoProtoDeclare72->setName(QString("ArtDeco19"));
SoProtoDeclare72->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare72->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody73 = new SoProtoBody();
SoMaterial* SoMaterial74 = new SoMaterial();
SoMaterial74->setAmbientIntensity(0.259259);
SoMaterial74->setDiffuseColor(new float[]{0.0,0.251004,0.239248});
SoMaterial74->setShininess(0.060606);
SoMaterial74->setSpecularColor(new float[]{0.177935,0.249369,0.229278});
SoProtoBody73->addChild(*SoMaterial74);

SoProtoDeclare72->addChild(*SoProtoBody73);

SoNode13->addChild(*SoProtoDeclare72);

SoProtoDeclare* SoProtoDeclare75 = new SoProtoDeclare();
SoProtoDeclare75->setName(QString("ArtDeco20"));
SoProtoDeclare75->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare75->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody76 = new SoProtoBody();
SoMaterial* SoMaterial77 = new SoMaterial();
SoMaterial77->setAmbientIntensity(0.24);
SoMaterial77->setDiffuseColor(new float[]{0.228298,0.385771,0.186794});
SoMaterial77->setShininess(0.393939);
SoMaterial77->setSpecularColor(new float[]{0.200464,0.300145,0.293518});
SoProtoBody76->addChild(*SoMaterial77);

SoProtoDeclare75->addChild(*SoProtoBody76);

SoNode13->addChild(*SoProtoDeclare75);

SoProtoDeclare* SoProtoDeclare78 = new SoProtoDeclare();
SoProtoDeclare78->setName(QString("ArtDeco21"));
SoProtoDeclare78->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare78->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody79 = new SoProtoBody();
SoMaterial* SoMaterial80 = new SoMaterial();
SoMaterial80->setAmbientIntensity(0.25);
SoMaterial80->setDiffuseColor(new float[]{0.315389,0.544,0.258052});
SoMaterial80->setShininess(0.509389);
SoMaterial80->setSpecularColor(new float[]{0.456,0.456,0.456});
SoProtoBody79->addChild(*SoMaterial80);

SoProtoDeclare78->addChild(*SoProtoBody79);

SoNode13->addChild(*SoProtoDeclare78);

SoProtoDeclare* SoProtoDeclare81 = new SoProtoDeclare();
SoProtoDeclare81->setName(QString("ArtDeco22"));
SoProtoDeclare81->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare81->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody82 = new SoProtoBody();
SoMaterial* SoMaterial83 = new SoMaterial();
SoMaterial83->setAmbientIntensity(0.246032);
SoMaterial83->setDiffuseColor(new float[]{0.251104,0.312562,0.201724});
SoMaterial83->setShininess(0.086735);
SoMaterial83->setSpecularColor(new float[]{0.209184,0.113842,0.111328});
SoProtoBody82->addChild(*SoMaterial83);

SoProtoDeclare81->addChild(*SoProtoBody82);

SoNode13->addChild(*SoProtoDeclare81);

SoProtoDeclare* SoProtoDeclare84 = new SoProtoDeclare();
SoProtoDeclare84->setName(QString("ArtDeco23"));
SoProtoDeclare84->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare84->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody85 = new SoProtoBody();
SoMaterial* SoMaterial86 = new SoMaterial();
SoMaterial86->setAmbientIntensity(0.242424);
SoMaterial86->setDiffuseColor(new float[]{0.392348,0.456,0.417708});
SoMaterial86->setShininess(0.933333);
SoMaterial86->setSpecularColor(new float[]{0.533333,0.533333,0.533333});
SoProtoBody85->addChild(*SoMaterial86);

SoProtoDeclare84->addChild(*SoProtoBody85);

SoNode13->addChild(*SoProtoDeclare84);

SoProtoDeclare* SoProtoDeclare87 = new SoProtoDeclare();
SoProtoDeclare87->setName(QString("ArtDeco24"));
SoProtoDeclare87->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare87->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody88 = new SoProtoBody();
SoMaterial* SoMaterial89 = new SoMaterial();
SoMaterial89->setAmbientIntensity(0.253968);
SoMaterial89->setDiffuseColor(new float[]{1.0,0.854922,0.0});
SoMaterial89->setShininess(1);
SoMaterial89->setSpecularColor(new float[]{0.872449,0.247119,0.254214});
SoProtoBody88->addChild(*SoMaterial89);

SoProtoDeclare87->addChild(*SoProtoBody88);

SoNode13->addChild(*SoProtoDeclare87);

SoProtoDeclare* SoProtoDeclare90 = new SoProtoDeclare();
SoProtoDeclare90->setName(QString("ArtDeco25"));
SoProtoDeclare90->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare90->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody91 = new SoProtoBody();
SoMaterial* SoMaterial92 = new SoMaterial();
SoMaterial92->setAmbientIntensity(0.25641);
SoMaterial92->setDiffuseColor(new float[]{0.795918,0.505869,0.093315});
SoMaterial92->setShininess(0.397959);
SoMaterial92->setSpecularColor(new float[]{0.923469,0.428866,0.006369});
SoProtoBody91->addChild(*SoMaterial92);

SoProtoDeclare90->addChild(*SoProtoBody91);

SoNode13->addChild(*SoProtoDeclare90);

SoProtoDeclare* SoProtoDeclare93 = new SoProtoDeclare();
SoProtoDeclare93->setName(QString("ArtDeco26"));
SoProtoDeclare93->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare93->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
//computed conversion ambientIntensity=2.226234, normalized to 1.0
SoProtoBody* SoProtoBody94 = new SoProtoBody();
SoMaterial* SoMaterial95 = new SoMaterial();
SoMaterial95->setAmbientIntensity(1);
SoMaterial95->setDiffuseColor(new float[]{0.331633,0.296582,0.279057});
SoMaterial95->setShininess(0.096939);
SoMaterial95->setSpecularColor(new float[]{0.311224,0.25183,0.133042});
SoProtoBody94->addChild(*SoMaterial95);

SoProtoDeclare93->addChild(*SoProtoBody94);

SoNode13->addChild(*SoProtoDeclare93);

SoProtoDeclare* SoProtoDeclare96 = new SoProtoDeclare();
SoProtoDeclare96->setName(QString("ArtDeco27"));
SoProtoDeclare96->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare96->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody97 = new SoProtoBody();
SoMaterial* SoMaterial98 = new SoMaterial();
SoMaterial98->setAmbientIntensity(0.263158);
SoMaterial98->setDiffuseColor(new float[]{0.345455,0.163262,0.122622});
SoMaterial98->setShininess(0.048649);
SoMaterial98->setSpecularColor(new float[]{0.212121,0.107475,0.0});
SoProtoBody97->addChild(*SoMaterial98);

SoProtoDeclare96->addChild(*SoProtoBody97);

SoNode13->addChild(*SoProtoDeclare96);

SoProtoDeclare* SoProtoDeclare99 = new SoProtoDeclare();
SoProtoDeclare99->setName(QString("ArtDeco28"));
SoProtoDeclare99->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare99->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody100 = new SoProtoBody();
SoMaterial* SoMaterial101 = new SoMaterial();
SoMaterial101->setAmbientIntensity(0.240506);
SoMaterial101->setDiffuseColor(new float[]{0.277281,0.104336,0.0799});
SoMaterial101->setShininess(0.09697);
SoMaterial101->setSpecularColor(new float[]{0.305587,0.141916,0.270572});
SoProtoBody100->addChild(*SoMaterial101);

SoProtoDeclare99->addChild(*SoProtoBody100);

SoNode13->addChild(*SoProtoDeclare99);

SoProtoDeclare* SoProtoDeclare102 = new SoProtoDeclare();
SoProtoDeclare102->setName(QString("ArtDeco29"));
SoProtoDeclare102->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare102->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody103 = new SoProtoBody();
SoMaterial* SoMaterial104 = new SoMaterial();
SoMaterial104->setAmbientIntensity(0.215686);
SoMaterial104->setDiffuseColor(new float[]{0.087034,0.025888,0.0});
SoMaterial104->setShininess(0.045918);
SoMaterial104->setSpecularColor(new float[]{0.224138,0.104091,0.104091});
SoProtoBody103->addChild(*SoMaterial104);

SoProtoDeclare102->addChild(*SoProtoBody103);

SoNode13->addChild(*SoProtoDeclare102);

SoProtoDeclare* SoProtoDeclare105 = new SoProtoDeclare();
SoProtoDeclare105->setName(QString("ArtDeco30"));
SoProtoDeclare105->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare105->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody106 = new SoProtoBody();
SoMaterial* SoMaterial107 = new SoMaterial();
SoMaterial107->setAmbientIntensity(0);
SoMaterial107->setDiffuseColor(new float[]{0.0,0.0,0.0});
SoMaterial107->setShininess(0.081633);
SoMaterial107->setSpecularColor(new float[]{0.293243,0.297387,0.290421});
SoProtoBody106->addChild(*SoMaterial107);

SoProtoDeclare105->addChild(*SoProtoBody106);

SoNode13->addChild(*SoProtoDeclare105);

SoProtoDeclare* SoProtoDeclare108 = new SoProtoDeclare();
SoProtoDeclare108->setName(QString("ArtDeco31"));
SoProtoDeclare108->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare108->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody109 = new SoProtoBody();
SoMaterial* SoMaterial110 = new SoMaterial();
SoMaterial110->setAmbientIntensity(0.25641);
SoMaterial110->setDiffuseColor(new float[]{0.236364,0.236364,0.236364});
SoMaterial110->setShininess(0.054546);
SoMaterial110->setSpecularColor(new float[]{0.29697,0.245839,0.295962});
SoProtoBody109->addChild(*SoMaterial110);

SoProtoDeclare108->addChild(*SoProtoBody109);

SoNode13->addChild(*SoProtoDeclare108);

SoProtoDeclare* SoProtoDeclare111 = new SoProtoDeclare();
SoProtoDeclare111->setName(QString("ArtDeco32"));
SoProtoDeclare111->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare111->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody112 = new SoProtoBody();
SoMaterial* SoMaterial113 = new SoMaterial();
SoMaterial113->setAmbientIntensity(0.242424);
SoMaterial113->setDiffuseColor(new float[]{0.38087,0.382957,0.417708});
SoMaterial113->setShininess(0.933333);
SoMaterial113->setSpecularColor(new float[]{0.533333,0.533333,0.533333});
SoProtoBody112->addChild(*SoMaterial113);

SoProtoDeclare111->addChild(*SoProtoBody112);

SoNode13->addChild(*SoProtoDeclare111);

SoProtoDeclare* SoProtoDeclare114 = new SoProtoDeclare();
SoProtoDeclare114->setName(QString("ArtDeco33"));
SoProtoDeclare114->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare114->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody115 = new SoProtoBody();
SoMaterial* SoMaterial116 = new SoMaterial();
SoMaterial116->setAmbientIntensity(0.230089);
SoMaterial116->setDiffuseColor(new float[]{0.610811,0.610811,0.610811});
SoMaterial116->setShininess(0.897297);
SoMaterial116->setSpecularColor(new float[]{0.767568,0.756757,0.764964});
SoProtoBody115->addChild(*SoMaterial116);

SoProtoDeclare114->addChild(*SoProtoBody115);

SoNode13->addChild(*SoProtoDeclare114);

SoProtoDeclare* SoProtoDeclare117 = new SoProtoDeclare();
SoProtoDeclare117->setName(QString("ArtDeco34"));
SoProtoDeclare117->setAppinfo(QString("UniversalMediaMaterials prototype"));
SoProtoDeclare117->setDocumentation(QString("https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials"));
SoProtoBody* SoProtoBody118 = new SoProtoBody();
SoMaterial* SoMaterial119 = new SoMaterial();
SoMaterial119->setAmbientIntensity(0.25);
SoMaterial119->setShininess(0);
SoMaterial119->setSpecularColor(new float[]{0.2,0.2,0.2});
SoProtoBody118->addChild(*SoMaterial119);

SoProtoDeclare117->addChild(*SoProtoBody118);

SoNode13->addChild(*SoProtoDeclare117);

SoAnchor* SoAnchor120 = new SoAnchor();
SoAnchor120->setDescription(QString("ArtDecoPrototypeExample"));
SoAnchor120->setParameter(new QString[]{QString("target=_blank")}, 1);
SoAnchor120->setUrl(new QString[]{QString("../data/ArtDecoExamples.json"), QString("../data/ArtDecoExamples.x3d"), QString("ArtDecoExamples.json"), QString("ArtDecoExamples.x3d")}, 4);
SoShape* SoShape121 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance122 = new SoVRMLAppearance();
SoMaterial* SoMaterial123 = new SoMaterial();
SoMaterial123->setDiffuseColor(new float[]{0.8,0.4,0.0});
SoVRMLAppearance122->addChild(*SoMaterial123);

SoShape121->addChild(*SoVRMLAppearance122);

SoText* SoText124 = new SoText();
SoText124->setString(new QString[]{QString("ArtDecoExamples.x3d"), QString("is a Materials Prototype declaration file."), QString(""), QString("For an example scene using these node,"), QString("click this text and view"), QString("ArtDecoExamples.x3d")}, 6);
SoFontStyle* SoFontStyle125 = new SoFontStyle();
SoFontStyle125->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle125->setSize(0.8);
SoText124->setFontStyle(*SoFontStyle125);

SoShape121->setGeometry(*SoText124);

SoAnchor120->addChild(*SoShape121);

SoNode13->addChild(*SoAnchor120);

SoSceneManager0->setSceneGraph(*SoNode13);

return 0;
}
