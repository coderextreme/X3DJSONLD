
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
SoSceneManager0->setProfile(QString("Interchange"));
SoSceneManager0->setVersion(QString("4.0"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("PathMeshTopSurface.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Pathway for HAnim scene Winter and Spring."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Carol McDonald"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("translator"));
Someta5->setContent(QString("Joe Williams and Don Brutzman"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("27 May 2023"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("Mon, 15 Sep 2025 05:20:53 GMT"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("source"));
Someta8->setContent(QString("originals/PathMeshTopSurface.x3dv"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/pathway.x3dv"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("identifier"));
Someta10->setContent(QString("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/PathMeshTopSurface.x3d"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("generator"));
Someta11->setContent(QString("tovrmlx3d, https://castle-engine.io/view3dscene.php#section_converting"));
Sohead1->addMeta(*Someta11);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode12 = new SoNode();
SoNavigationInfo* SoNavigationInfo13 = new SoNavigationInfo();
SoNavigationInfo13->setDEF(QString("pathTop"));
SoNavigationInfo13->setHeadlight(false);
SoNode12->addChild(*SoNavigationInfo13);

SoShape* SoShape14 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance15 = new SoVRMLAppearance();
SoMaterial* SoMaterial16 = new SoMaterial();
SoMaterial16->setAmbientIntensity(0);
SoMaterial16->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial16->setShininess(0);
SoVRMLAppearance15->addChild(*SoMaterial16);

SoShape14->addChild(*SoVRMLAppearance15);

SoIndexedFaceSet* SoIndexedFaceSet17 = new SoIndexedFaceSet();
SoIndexedFaceSet17->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet17->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate18 = new SoCoordinate();
SoCoordinate18->setPoint(new float[]{26.39594,0.075,25.67472,26.00195,0.075,25.75502,26.25982,0.075,25.00694,25.86584,0.075,25.08724,26.1237,0.075,24.33916,25.72972,0.075,24.41947}, 18);
SoIndexedFaceSet17->setCoord(*SoCoordinate18);

SoShape14->setGeometry(*SoIndexedFaceSet17);

SoNode12->addChild(*SoShape14);

SoShape* SoShape19 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance20 = new SoVRMLAppearance();
SoMaterial* SoMaterial21 = new SoMaterial();
SoMaterial21->setAmbientIntensity(0);
SoMaterial21->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial21->setShininess(0);
SoVRMLAppearance20->addChild(*SoMaterial21);

SoShape19->addChild(*SoVRMLAppearance20);

SoIndexedFaceSet* SoIndexedFaceSet22 = new SoIndexedFaceSet();
SoIndexedFaceSet22->setSolid(false);
SoIndexedFaceSet22->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet22->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate23 = new SoCoordinate();
SoCoordinate23->setPoint(new float[]{26.39918,0.075,23.57728,26.53329,0.075,24.23526,25.5916,0.075,23.74189,25.72572,0.075,24.39987}, 12);
SoIndexedFaceSet22->setCoord(*SoCoordinate23);

SoShape19->setGeometry(*SoIndexedFaceSet22);

SoNode12->addChild(*SoShape19);

SoShape* SoShape24 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance25 = new SoVRMLAppearance();
SoMaterial* SoMaterial26 = new SoMaterial();
SoMaterial26->setAmbientIntensity(0);
SoMaterial26->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial26->setShininess(0);
SoVRMLAppearance25->addChild(*SoMaterial26);

SoShape24->addChild(*SoVRMLAppearance25);

SoIndexedFaceSet* SoIndexedFaceSet27 = new SoIndexedFaceSet();
SoIndexedFaceSet27->setSolid(false);
SoIndexedFaceSet27->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet27->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate28 = new SoCoordinate();
SoCoordinate28->setPoint(new float[]{25.58761,0.075,23.72229,25.45349,0.075,23.06431,26.39518,0.075,23.55768,26.26106,0.075,22.8997}, 12);
SoIndexedFaceSet27->setCoord(*SoCoordinate28);

SoShape24->setGeometry(*SoIndexedFaceSet27);

SoNode12->addChild(*SoShape24);

SoShape* SoShape29 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance30 = new SoVRMLAppearance();
SoMaterial* SoMaterial31 = new SoMaterial();
SoMaterial31->setAmbientIntensity(0);
SoMaterial31->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial31->setShininess(0);
SoVRMLAppearance30->addChild(*SoMaterial31);

SoShape29->addChild(*SoVRMLAppearance30);

SoIndexedFaceSet* SoIndexedFaceSet32 = new SoIndexedFaceSet();
SoIndexedFaceSet32->setSolid(false);
SoIndexedFaceSet32->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet32->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate33 = new SoCoordinate();
SoCoordinate33->setPoint(new float[]{25.84348,0.075,22.96441,25.4495,0.075,23.04472,25.57125,0.075,21.62885,25.17726,0.075,21.70916}, 12);
SoIndexedFaceSet32->setCoord(*SoCoordinate33);

SoShape29->setGeometry(*SoIndexedFaceSet32);

SoNode12->addChild(*SoShape29);

SoShape* SoShape34 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance35 = new SoVRMLAppearance();
SoMaterial* SoMaterial36 = new SoMaterial();
SoMaterial36->setAmbientIntensity(0);
SoMaterial36->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial36->setShininess(0);
SoVRMLAppearance35->addChild(*SoMaterial36);

SoShape34->addChild(*SoVRMLAppearance35);

SoIndexedFaceSet* SoIndexedFaceSet37 = new SoIndexedFaceSet();
SoIndexedFaceSet37->setSolid(false);
SoIndexedFaceSet37->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet37->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate38 = new SoCoordinate();
SoCoordinate38->setPoint(new float[]{25.72724,0.075,28.63393,25.59312,0.075,27.97596,26.53481,0.075,28.46932,26.40069,0.075,27.81134}, 12);
SoIndexedFaceSet37->setCoord(*SoCoordinate38);

SoShape34->setGeometry(*SoIndexedFaceSet37);

SoNode12->addChild(*SoShape34);

SoShape* SoShape39 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance40 = new SoVRMLAppearance();
SoMaterial* SoMaterial41 = new SoMaterial();
SoMaterial41->setAmbientIntensity(0);
SoMaterial41->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial41->setShininess(0);
SoVRMLAppearance40->addChild(*SoMaterial41);

SoShape39->addChild(*SoVRMLAppearance40);

SoIndexedFaceSet* SoIndexedFaceSet42 = new SoIndexedFaceSet();
SoIndexedFaceSet42->setSolid(false);
SoIndexedFaceSet42->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet42->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate43 = new SoCoordinate();
SoCoordinate43->setPoint(new float[]{26.26258,0.075,27.13377,26.3967,0.075,27.79175,25.85879,0.075,27.21607,25.99291,0.075,27.87405,25.45501,0.075,27.29838,25.58913,0.075,27.95636}, 18);
SoIndexedFaceSet42->setCoord(*SoCoordinate43);

SoShape39->setGeometry(*SoIndexedFaceSet42);

SoNode12->addChild(*SoShape39);

SoShape* SoShape44 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance45 = new SoVRMLAppearance();
SoMaterial* SoMaterial46 = new SoMaterial();
SoMaterial46->setAmbientIntensity(0);
SoMaterial46->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial46->setShininess(0);
SoVRMLAppearance45->addChild(*SoMaterial46);

SoShape44->addChild(*SoVRMLAppearance45);

SoIndexedFaceSet* SoIndexedFaceSet47 = new SoIndexedFaceSet();
SoIndexedFaceSet47->setSolid(false);
SoIndexedFaceSet47->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet47->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate48 = new SoCoordinate();
SoCoordinate48->setPoint(new float[]{25.59236,0.075,25.85892,25.78936,0.075,25.81877,25.98635,0.075,25.77861,25.72848,0.075,26.5267,25.92547,0.075,26.48655,26.12247,0.075,26.44639,25.8646,0.075,27.19448,26.06159,0.075,27.15432,26.25858,0.075,27.11417}, 27);
SoIndexedFaceSet47->setCoord(*SoCoordinate48);

SoShape44->setGeometry(*SoIndexedFaceSet47);

SoNode12->addChild(*SoShape44);

SoShape* SoShape49 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance50 = new SoVRMLAppearance();
SoMaterial* SoMaterial51 = new SoMaterial();
SoMaterial51->setAmbientIntensity(0);
SoMaterial51->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial51->setShininess(0);
SoVRMLAppearance50->addChild(*SoMaterial51);

SoShape49->addChild(*SoVRMLAppearance50);

SoIndexedFaceSet* SoIndexedFaceSet52 = new SoIndexedFaceSet();
SoIndexedFaceSet52->setSolid(false);
SoIndexedFaceSet52->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet52->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate53 = new SoCoordinate();
SoCoordinate53->setPoint(new float[]{25.17878,0.075,25.94323,25.57277,0.075,25.86292,25.3149,0.075,26.611,25.70888,0.075,26.53069,25.45101,0.075,27.27878,25.845,0.075,27.19847}, 18);
SoIndexedFaceSet52->setCoord(*SoCoordinate53);

SoShape49->setGeometry(*SoIndexedFaceSet52);

SoNode12->addChild(*SoShape49);

SoShape* SoShape54 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance55 = new SoVRMLAppearance();
SoMaterial* SoMaterial56 = new SoMaterial();
SoMaterial56->setAmbientIntensity(0);
SoMaterial56->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial56->setShininess(0);
SoVRMLAppearance55->addChild(*SoMaterial56);

SoShape54->addChild(*SoVRMLAppearance55);

SoIndexedFaceSet* SoIndexedFaceSet57 = new SoIndexedFaceSet();
SoIndexedFaceSet57->setSolid(false);
SoIndexedFaceSet57->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet57->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate58 = new SoCoordinate();
SoCoordinate58->setPoint(new float[]{25.17478,0.075,25.92363,25.04066,0.075,25.26565,25.98236,0.075,25.75902,25.84824,0.075,25.10104}, 12);
SoIndexedFaceSet57->setCoord(*SoCoordinate58);

SoShape54->setGeometry(*SoIndexedFaceSet57);

SoNode12->addChild(*SoShape54);

SoShape* SoShape59 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance60 = new SoVRMLAppearance();
SoMaterial* SoMaterial61 = new SoMaterial();
SoMaterial61->setAmbientIntensity(0);
SoMaterial61->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial61->setShininess(0);
SoVRMLAppearance60->addChild(*SoMaterial61);

SoShape59->addChild(*SoVRMLAppearance60);

SoIndexedFaceSet* SoIndexedFaceSet62 = new SoIndexedFaceSet();
SoIndexedFaceSet62->setSolid(false);
SoIndexedFaceSet62->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet62->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate63 = new SoCoordinate();
SoCoordinate63->setPoint(new float[]{25.03667,0.075,25.24605,24.90255,0.075,24.58807,25.44046,0.075,25.16375,25.30634,0.075,24.50577,25.84424,0.075,25.08144,25.71012,0.075,24.42346}, 18);
SoIndexedFaceSet62->setCoord(*SoCoordinate63);

SoShape59->setGeometry(*SoIndexedFaceSet62);

SoNode12->addChild(*SoShape59);

SoShape* SoShape64 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance65 = new SoVRMLAppearance();
SoMaterial* SoMaterial66 = new SoMaterial();
SoMaterial66->setAmbientIntensity(0);
SoMaterial66->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial66->setShininess(0);
SoVRMLAppearance65->addChild(*SoMaterial66);

SoShape64->addChild(*SoVRMLAppearance65);

SoIndexedFaceSet* SoIndexedFaceSet67 = new SoIndexedFaceSet();
SoIndexedFaceSet67->setSolid(false);
SoIndexedFaceSet67->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet67->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate68 = new SoCoordinate();
SoCoordinate68->setPoint(new float[]{25.03991,0.075,23.14862,25.43389,0.075,23.06831,25.17602,0.075,23.81639,25.57001,0.075,23.73609,25.31214,0.075,24.48417,25.70613,0.075,24.40386}, 18);
SoIndexedFaceSet67->setCoord(*SoCoordinate68);

SoShape64->setGeometry(*SoIndexedFaceSet67);

SoNode12->addChild(*SoShape64);

SoShape* SoShape69 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance70 = new SoVRMLAppearance();
SoMaterial* SoMaterial71 = new SoMaterial();
SoMaterial71->setAmbientIntensity(0);
SoMaterial71->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial71->setShininess(0);
SoVRMLAppearance70->addChild(*SoMaterial71);

SoShape69->addChild(*SoVRMLAppearance70);

SoIndexedFaceSet* SoIndexedFaceSet72 = new SoIndexedFaceSet();
SoIndexedFaceSet72->setSolid(false);
SoIndexedFaceSet72->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet72->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate73 = new SoCoordinate();
SoCoordinate73->setPoint(new float[]{24.62632,0.075,23.23292,25.02031,0.075,23.15261,24.89856,0.075,24.56848,25.29254,0.075,24.48817}, 12);
SoIndexedFaceSet72->setCoord(*SoCoordinate73);

SoShape69->setGeometry(*SoIndexedFaceSet72);

SoNode12->addChild(*SoShape69);

SoShape* SoShape74 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance75 = new SoVRMLAppearance();
SoMaterial* SoMaterial76 = new SoMaterial();
SoMaterial76->setAmbientIntensity(0);
SoMaterial76->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial76->setShininess(0);
SoVRMLAppearance75->addChild(*SoMaterial76);

SoShape74->addChild(*SoVRMLAppearance75);

SoIndexedFaceSet* SoIndexedFaceSet77 = new SoIndexedFaceSet();
SoIndexedFaceSet77->setSolid(false);
SoIndexedFaceSet77->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet77->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate78 = new SoCoordinate();
SoCoordinate78->setPoint(new float[]{24.62233,0.075,23.21332,24.48821,0.075,22.55534,25.4299,0.075,23.04871,25.29578,0.075,22.39073}, 12);
SoIndexedFaceSet77->setCoord(*SoCoordinate78);

SoShape74->setGeometry(*SoIndexedFaceSet77);

SoNode12->addChild(*SoShape74);

SoShape* SoShape79 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance80 = new SoVRMLAppearance();
SoMaterial* SoMaterial81 = new SoMaterial();
SoMaterial81->setAmbientIntensity(0);
SoMaterial81->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial81->setShininess(0);
SoVRMLAppearance80->addChild(*SoMaterial81);

SoShape79->addChild(*SoVRMLAppearance80);

SoIndexedFaceSet* SoIndexedFaceSet82 = new SoIndexedFaceSet();
SoIndexedFaceSet82->setSolid(false);
SoIndexedFaceSet82->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet82->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate83 = new SoCoordinate();
SoCoordinate83->setPoint(new float[]{24.48421,0.075,22.53575,24.3501,0.075,21.87777,25.29178,0.075,22.37114,25.15767,0.075,21.71316}, 12);
SoIndexedFaceSet82->setCoord(*SoCoordinate83);

SoShape79->setGeometry(*SoIndexedFaceSet82);

SoNode12->addChild(*SoShape79);

SoShape* SoShape84 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance85 = new SoVRMLAppearance();
SoMaterial* SoMaterial86 = new SoMaterial();
SoMaterial86->setAmbientIntensity(0);
SoMaterial86->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial86->setShininess(0);
SoVRMLAppearance85->addChild(*SoMaterial86);

SoShape84->addChild(*SoVRMLAppearance85);

SoIndexedFaceSet* SoIndexedFaceSet87 = new SoIndexedFaceSet();
SoIndexedFaceSet87->setSolid(false);
SoIndexedFaceSet87->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet87->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate88 = new SoCoordinate();
SoCoordinate88->setPoint(new float[]{24.48745,0.075,20.43831,24.88144,0.075,20.358,24.75968,0.075,21.77387,25.15367,0.075,21.69356}, 12);
SoIndexedFaceSet87->setCoord(*SoCoordinate88);

SoShape84->setGeometry(*SoIndexedFaceSet87);

SoNode12->addChild(*SoShape84);

SoShape* SoShape89 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance90 = new SoVRMLAppearance();
SoMaterial* SoMaterial91 = new SoMaterial();
SoMaterial91->setAmbientIntensity(0);
SoMaterial91->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial91->setShininess(0);
SoVRMLAppearance90->addChild(*SoMaterial91);

SoShape89->addChild(*SoVRMLAppearance90);

SoIndexedFaceSet* SoIndexedFaceSet92 = new SoIndexedFaceSet();
SoIndexedFaceSet92->setSolid(false);
SoIndexedFaceSet92->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet92->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate93 = new SoCoordinate();
SoCoordinate93->setPoint(new float[]{24.74009,0.075,21.77786,24.3461,0.075,21.85817,24.46785,0.075,20.44231,24.07387,0.075,20.52261}, 12);
SoIndexedFaceSet92->setCoord(*SoCoordinate93);

SoShape89->setGeometry(*SoIndexedFaceSet92);

SoNode12->addChild(*SoShape89);

SoShape* SoShape94 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance95 = new SoVRMLAppearance();
SoMaterial* SoMaterial96 = new SoMaterial();
SoMaterial96->setAmbientIntensity(0);
SoMaterial96->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial96->setShininess(0);
SoVRMLAppearance95->addChild(*SoMaterial96);

SoShape94->addChild(*SoVRMLAppearance95);

SoIndexedFaceSet* SoIndexedFaceSet97 = new SoIndexedFaceSet();
SoIndexedFaceSet97->setSolid(false);
SoIndexedFaceSet97->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet97->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate98 = new SoCoordinate();
SoCoordinate98->setPoint(new float[]{25.1763,0.075,30.15769,25.04218,0.075,29.49971,25.58009,0.075,30.07539,25.44597,0.075,29.41741,25.98387,0.075,29.99308,25.84975,0.075,29.3351}, 18);
SoIndexedFaceSet97->setCoord(*SoCoordinate98);

SoShape94->setGeometry(*SoIndexedFaceSet97);

SoNode12->addChild(*SoShape94);

SoShape* SoShape99 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance100 = new SoVRMLAppearance();
SoMaterial* SoMaterial101 = new SoMaterial();
SoMaterial101->setAmbientIntensity(0);
SoMaterial101->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial101->setShininess(0);
SoVRMLAppearance100->addChild(*SoMaterial101);

SoShape99->addChild(*SoVRMLAppearance100);

SoIndexedFaceSet* SoIndexedFaceSet102 = new SoIndexedFaceSet();
SoIndexedFaceSet102->setSolid(false);
SoIndexedFaceSet102->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet102->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate103 = new SoCoordinate();
SoCoordinate103->setPoint(new float[]{25.03819,0.075,29.48012,24.90407,0.075,28.82214,25.44197,0.075,29.39781,25.30785,0.075,28.73983,25.84576,0.075,29.31551,25.71164,0.075,28.65753}, 18);
SoIndexedFaceSet102->setCoord(*SoCoordinate103);

SoShape99->setGeometry(*SoIndexedFaceSet102);

SoNode12->addChild(*SoShape99);

SoShape* SoShape104 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance105 = new SoVRMLAppearance();
SoMaterial* SoMaterial106 = new SoMaterial();
SoMaterial106->setAmbientIntensity(0);
SoMaterial106->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial106->setShininess(0);
SoVRMLAppearance105->addChild(*SoMaterial106);

SoShape104->addChild(*SoVRMLAppearance105);

SoIndexedFaceSet* SoIndexedFaceSet107 = new SoIndexedFaceSet();
SoIndexedFaceSet107->setSolid(false);
SoIndexedFaceSet107->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet107->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate108 = new SoCoordinate();
SoCoordinate108->setPoint(new float[]{25.04142,0.075,27.38268,25.43541,0.075,27.30237,25.17754,0.075,28.05046,25.57153,0.075,27.97015,25.31366,0.075,28.71824,25.70764,0.075,28.63793}, 18);
SoIndexedFaceSet107->setCoord(*SoCoordinate108);

SoShape104->setGeometry(*SoIndexedFaceSet107);

SoNode12->addChild(*SoShape104);

SoShape* SoShape109 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance110 = new SoVRMLAppearance();
SoMaterial* SoMaterial111 = new SoMaterial();
SoMaterial111->setAmbientIntensity(0);
SoMaterial111->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial111->setShininess(0);
SoVRMLAppearance110->addChild(*SoMaterial111);

SoShape109->addChild(*SoVRMLAppearance110);

SoIndexedFaceSet* SoIndexedFaceSet112 = new SoIndexedFaceSet();
SoIndexedFaceSet112->setSolid(false);
SoIndexedFaceSet112->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet112->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate113 = new SoCoordinate();
SoCoordinate113->setPoint(new float[]{24.62784,0.075,27.46698,24.82483,0.075,27.42683,25.02183,0.075,27.38668,24.76396,0.075,28.13476,24.96095,0.075,28.09461,25.15794,0.075,28.05445,24.90007,0.075,28.80254,25.09706,0.075,28.76239,25.29406,0.075,28.72223}, 27);
SoIndexedFaceSet112->setCoord(*SoCoordinate113);

SoShape109->setGeometry(*SoIndexedFaceSet112);

SoNode12->addChild(*SoShape109);

SoShape* SoShape114 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance115 = new SoVRMLAppearance();
SoMaterial* SoMaterial116 = new SoMaterial();
SoMaterial116->setAmbientIntensity(0);
SoMaterial116->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial116->setShininess(0);
SoVRMLAppearance115->addChild(*SoMaterial116);

SoShape114->addChild(*SoVRMLAppearance115);

SoIndexedFaceSet* SoIndexedFaceSet117 = new SoIndexedFaceSet();
SoIndexedFaceSet117->setSolid(false);
SoIndexedFaceSet117->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoIndexedFaceSet117->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoCoordinate* SoCoordinate118 = new SoCoordinate();
SoCoordinate118->setPoint(new float[]{24.62384,0.075,27.44739,24.55679,0.075,27.1184,24.48973,0.075,26.78941,25.43142,0.075,27.28278,25.36436,0.075,26.95379,25.2973,0.075,26.6248}, 18);
SoIndexedFaceSet117->setCoord(*SoCoordinate118);

SoShape114->setGeometry(*SoIndexedFaceSet117);

SoNode12->addChild(*SoShape114);

SoShape* SoShape119 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance120 = new SoVRMLAppearance();
SoMaterial* SoMaterial121 = new SoMaterial();
SoMaterial121->setAmbientIntensity(0);
SoMaterial121->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial121->setShininess(0);
SoVRMLAppearance120->addChild(*SoMaterial121);

SoShape119->addChild(*SoVRMLAppearance120);

SoIndexedFaceSet* SoIndexedFaceSet122 = new SoIndexedFaceSet();
SoIndexedFaceSet122->setSolid(false);
SoIndexedFaceSet122->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet122->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate123 = new SoCoordinate();
SoCoordinate123->setPoint(new float[]{24.48573,0.075,26.76981,24.35161,0.075,26.11183,25.2933,0.075,26.6052,25.15918,0.075,25.94722}, 12);
SoIndexedFaceSet122->setCoord(*SoCoordinate123);

SoShape119->setGeometry(*SoIndexedFaceSet122);

SoNode12->addChild(*SoShape119);

SoShape* SoShape124 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance125 = new SoVRMLAppearance();
SoMaterial* SoMaterial126 = new SoMaterial();
SoMaterial126->setAmbientIntensity(0);
SoMaterial126->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial126->setShininess(0);
SoVRMLAppearance125->addChild(*SoMaterial126);

SoShape124->addChild(*SoVRMLAppearance125);

SoIndexedFaceSet* SoIndexedFaceSet127 = new SoIndexedFaceSet();
SoIndexedFaceSet127->setSolid(false);
SoIndexedFaceSet127->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet127->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate128 = new SoCoordinate();
SoCoordinate128->setPoint(new float[]{25.15519,0.075,25.92762,24.7612,0.075,26.00793,24.88295,0.075,24.59207,24.48897,0.075,24.67238}, 12);
SoIndexedFaceSet127->setCoord(*SoCoordinate128);

SoShape124->setGeometry(*SoIndexedFaceSet127);

SoNode12->addChild(*SoShape124);

SoShape* SoShape129 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance130 = new SoVRMLAppearance();
SoMaterial* SoMaterial131 = new SoMaterial();
SoMaterial131->setAmbientIntensity(0);
SoMaterial131->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial131->setShininess(0);
SoVRMLAppearance130->addChild(*SoMaterial131);

SoShape129->addChild(*SoVRMLAppearance130);

SoIndexedFaceSet* SoIndexedFaceSet132 = new SoIndexedFaceSet();
SoIndexedFaceSet132->setSolid(false);
SoIndexedFaceSet132->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet132->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate133 = new SoCoordinate();
SoCoordinate133->setPoint(new float[]{24.07538,0.075,24.75668,24.46937,0.075,24.67637,24.34762,0.075,26.09224,24.7416,0.075,26.01193}, 12);
SoIndexedFaceSet132->setCoord(*SoCoordinate133);

SoShape129->setGeometry(*SoIndexedFaceSet132);

SoNode12->addChild(*SoShape129);

SoShape* SoShape134 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance135 = new SoVRMLAppearance();
SoMaterial* SoMaterial136 = new SoMaterial();
SoMaterial136->setAmbientIntensity(0);
SoMaterial136->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial136->setShininess(0);
SoVRMLAppearance135->addChild(*SoMaterial136);

SoShape134->addChild(*SoVRMLAppearance135);

SoIndexedFaceSet* SoIndexedFaceSet137 = new SoIndexedFaceSet();
SoIndexedFaceSet137->setSolid(false);
SoIndexedFaceSet137->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet137->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate138 = new SoCoordinate();
SoCoordinate138->setPoint(new float[]{24.07139,0.075,24.73708,23.93727,0.075,24.0791,24.87896,0.075,24.57247,24.74484,0.075,23.91449}, 12);
SoIndexedFaceSet137->setCoord(*SoCoordinate138);

SoShape134->setGeometry(*SoIndexedFaceSet137);

SoNode12->addChild(*SoShape134);

SoShape* SoShape139 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance140 = new SoVRMLAppearance();
SoMaterial* SoMaterial141 = new SoMaterial();
SoMaterial141->setAmbientIntensity(0);
SoMaterial141->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial141->setShininess(0);
SoVRMLAppearance140->addChild(*SoMaterial141);

SoShape139->addChild(*SoVRMLAppearance140);

SoIndexedFaceSet* SoIndexedFaceSet142 = new SoIndexedFaceSet();
SoIndexedFaceSet142->setSolid(false);
SoIndexedFaceSet142->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet142->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate143 = new SoCoordinate();
SoCoordinate143->setPoint(new float[]{24.60673,0.075,23.23692,24.74084,0.075,23.89489,24.20294,0.075,23.31922,24.33706,0.075,23.9772,23.79915,0.075,23.40153,23.93328,0.075,24.05951}, 18);
SoIndexedFaceSet142->setCoord(*SoCoordinate143);

SoShape139->setGeometry(*SoIndexedFaceSet142);

SoNode12->addChild(*SoShape139);

SoShape* SoShape144 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance145 = new SoVRMLAppearance();
SoMaterial* SoMaterial146 = new SoMaterial();
SoMaterial146->setAmbientIntensity(0);
SoMaterial146->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial146->setShininess(0);
SoVRMLAppearance145->addChild(*SoMaterial146);

SoShape144->addChild(*SoVRMLAppearance145);

SoIndexedFaceSet* SoIndexedFaceSet147 = new SoIndexedFaceSet();
SoIndexedFaceSet147->setSolid(false);
SoIndexedFaceSet147->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet147->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate148 = new SoCoordinate();
SoCoordinate148->setPoint(new float[]{24.60273,0.075,23.21732,24.40574,0.075,23.25747,24.20874,0.075,23.29763,24.46661,0.075,22.54954,24.26962,0.075,22.58969,24.07263,0.075,22.62985,24.3305,0.075,21.88176,24.1335,0.075,21.92192,23.93651,0.075,21.96207}, 27);
SoIndexedFaceSet147->setCoord(*SoCoordinate148);

SoShape144->setGeometry(*SoIndexedFaceSet147);

SoNode12->addChild(*SoShape144);

SoShape* SoShape149 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance150 = new SoVRMLAppearance();
SoMaterial* SoMaterial151 = new SoMaterial();
SoMaterial151->setAmbientIntensity(0);
SoMaterial151->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial151->setShininess(0);
SoVRMLAppearance150->addChild(*SoMaterial151);

SoShape149->addChild(*SoVRMLAppearance150);

SoIndexedFaceSet* SoIndexedFaceSet152 = new SoIndexedFaceSet();
SoIndexedFaceSet152->setSolid(false);
SoIndexedFaceSet152->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet152->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate153 = new SoCoordinate();
SoCoordinate153->setPoint(new float[]{23.52293,0.075,22.04637,23.91691,0.075,21.96606,23.65904,0.075,22.71415,24.05303,0.075,22.63384,23.79516,0.075,23.38193,24.18915,0.075,23.30162}, 18);
SoIndexedFaceSet152->setCoord(*SoCoordinate153);

SoShape149->setGeometry(*SoIndexedFaceSet152);

SoNode12->addChild(*SoShape149);

SoShape* SoShape154 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance155 = new SoVRMLAppearance();
SoMaterial* SoMaterial156 = new SoMaterial();
SoMaterial156->setAmbientIntensity(0);
SoMaterial156->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial156->setShininess(0);
SoVRMLAppearance155->addChild(*SoMaterial156);

SoShape154->addChild(*SoVRMLAppearance155);

SoIndexedFaceSet* SoIndexedFaceSet157 = new SoIndexedFaceSet();
SoIndexedFaceSet157->setSolid(false);
SoIndexedFaceSet157->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet157->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate158 = new SoCoordinate();
SoCoordinate158->setPoint(new float[]{23.51893,0.075,22.02678,23.38481,0.075,21.3688,24.3265,0.075,21.86217,24.19238,0.075,21.20419}, 12);
SoIndexedFaceSet157->setCoord(*SoCoordinate158);

SoShape154->setGeometry(*SoIndexedFaceSet157);

SoNode12->addChild(*SoShape154);

SoShape* SoShape159 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance160 = new SoVRMLAppearance();
SoMaterial* SoMaterial161 = new SoMaterial();
SoMaterial161->setAmbientIntensity(0);
SoMaterial161->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial161->setShininess(0);
SoVRMLAppearance160->addChild(*SoMaterial161);

SoShape159->addChild(*SoVRMLAppearance160);

SoIndexedFaceSet* SoIndexedFaceSet162 = new SoIndexedFaceSet();
SoIndexedFaceSet162->setSolid(false);
SoIndexedFaceSet162->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet162->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate163 = new SoCoordinate();
SoCoordinate163->setPoint(new float[]{24.05427,0.075,20.52661,24.18839,0.075,21.18459,23.2467,0.075,20.69122,23.38082,0.075,21.3492}, 12);
SoIndexedFaceSet162->setCoord(*SoCoordinate163);

SoShape159->setGeometry(*SoIndexedFaceSet162);

SoNode12->addChild(*SoShape159);

SoShape* SoShape164 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance165 = new SoVRMLAppearance();
SoMaterial* SoMaterial166 = new SoMaterial();
SoMaterial166->setAmbientIntensity(0);
SoMaterial166->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial166->setShininess(0);
SoVRMLAppearance165->addChild(*SoMaterial166);

SoShape164->addChild(*SoVRMLAppearance165);

SoIndexedFaceSet* SoIndexedFaceSet167 = new SoIndexedFaceSet();
SoIndexedFaceSet167->setSolid(false);
SoIndexedFaceSet167->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet167->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate168 = new SoCoordinate();
SoCoordinate168->setPoint(new float[]{24.05028,0.075,20.50701,23.65629,0.075,20.58732,23.91416,0.075,19.83923,23.52017,0.075,19.91954,23.77804,0.075,19.17146,23.38405,0.075,19.25176}, 18);
SoIndexedFaceSet167->setCoord(*SoCoordinate168);

SoShape164->setGeometry(*SoIndexedFaceSet167);

SoNode12->addChild(*SoShape164);

SoShape* SoShape169 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance170 = new SoVRMLAppearance();
SoMaterial* SoMaterial171 = new SoMaterial();
SoMaterial171->setAmbientIntensity(0);
SoMaterial171->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial171->setShininess(0);
SoVRMLAppearance170->addChild(*SoMaterial171);

SoShape169->addChild(*SoVRMLAppearance170);

SoIndexedFaceSet* SoIndexedFaceSet172 = new SoIndexedFaceSet();
SoIndexedFaceSet172->setSolid(false);
SoIndexedFaceSet172->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet172->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate173 = new SoCoordinate();
SoCoordinate173->setPoint(new float[]{22.97047,0.075,19.33607,23.36446,0.075,19.25576,23.2427,0.075,20.67162,23.63669,0.075,20.59131}, 12);
SoIndexedFaceSet172->setCoord(*SoCoordinate173);

SoShape169->setGeometry(*SoIndexedFaceSet172);

SoNode12->addChild(*SoShape169);

SoShape* SoShape174 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance175 = new SoVRMLAppearance();
SoMaterial* SoMaterial176 = new SoMaterial();
SoMaterial176->setAmbientIntensity(0);
SoMaterial176->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial176->setShininess(0);
SoVRMLAppearance175->addChild(*SoMaterial176);

SoShape174->addChild(*SoVRMLAppearance175);

SoIndexedFaceSet* SoIndexedFaceSet177 = new SoIndexedFaceSet();
SoIndexedFaceSet177->setSolid(false);
SoIndexedFaceSet177->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet177->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate178 = new SoCoordinate();
SoCoordinate178->setPoint(new float[]{24.49048,0.075,28.90644,24.88447,0.075,28.82613,24.76272,0.075,30.242,25.1567,0.075,30.16169}, 12);
SoIndexedFaceSet177->setCoord(*SoCoordinate178);

SoShape174->setGeometry(*SoIndexedFaceSet177);

SoNode12->addChild(*SoShape174);

SoShape* SoShape179 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance180 = new SoVRMLAppearance();
SoMaterial* SoMaterial181 = new SoMaterial();
SoMaterial181->setAmbientIntensity(0);
SoMaterial181->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial181->setShininess(0);
SoVRMLAppearance180->addChild(*SoMaterial181);

SoShape179->addChild(*SoVRMLAppearance180);

SoIndexedFaceSet* SoIndexedFaceSet182 = new SoIndexedFaceSet();
SoIndexedFaceSet182->setSolid(false);
SoIndexedFaceSet182->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet182->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate183 = new SoCoordinate();
SoCoordinate183->setPoint(new float[]{24.0769,0.075,28.99074,24.47089,0.075,28.91043,24.34913,0.075,30.3263,24.74312,0.075,30.24599}, 12);
SoIndexedFaceSet182->setCoord(*SoCoordinate183);

SoShape179->setGeometry(*SoIndexedFaceSet182);

SoNode12->addChild(*SoShape179);

SoShape* SoShape184 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance185 = new SoVRMLAppearance();
SoMaterial* SoMaterial186 = new SoMaterial();
SoMaterial186->setAmbientIntensity(0);
SoMaterial186->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial186->setShininess(0);
SoVRMLAppearance185->addChild(*SoMaterial186);

SoShape184->addChild(*SoVRMLAppearance185);

SoIndexedFaceSet* SoIndexedFaceSet187 = new SoIndexedFaceSet();
SoIndexedFaceSet187->setSolid(false);
SoIndexedFaceSet187->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet187->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate188 = new SoCoordinate();
SoCoordinate188->setPoint(new float[]{24.0729,0.075,28.97115,24.00584,0.075,28.64216,23.93879,0.075,28.31317,24.47669,0.075,28.88884,24.40963,0.075,28.55985,24.34257,0.075,28.23086,24.88048,0.075,28.80654,24.81342,0.075,28.47754,24.74636,0.075,28.14856}, 27);
SoIndexedFaceSet187->setCoord(*SoCoordinate188);

SoShape184->setGeometry(*SoIndexedFaceSet187);

SoNode12->addChild(*SoShape184);

SoShape* SoShape189 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance190 = new SoVRMLAppearance();
SoMaterial* SoMaterial191 = new SoMaterial();
SoMaterial191->setAmbientIntensity(0);
SoMaterial191->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial191->setShininess(0);
SoVRMLAppearance190->addChild(*SoMaterial191);

SoShape189->addChild(*SoVRMLAppearance190);

SoIndexedFaceSet* SoIndexedFaceSet192 = new SoIndexedFaceSet();
SoIndexedFaceSet192->setSolid(false);
SoIndexedFaceSet192->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet192->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate193 = new SoCoordinate();
SoCoordinate193->setPoint(new float[]{23.93479,0.075,28.29357,23.80067,0.075,27.63559,24.33858,0.075,28.21126,24.20446,0.075,27.55329,24.74236,0.075,28.12896,24.60824,0.075,27.47098}, 18);
SoIndexedFaceSet192->setCoord(*SoCoordinate193);

SoShape189->setGeometry(*SoIndexedFaceSet192);

SoNode12->addChild(*SoShape189);

SoShape* SoShape194 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance195 = new SoVRMLAppearance();
SoMaterial* SoMaterial196 = new SoMaterial();
SoMaterial196->setAmbientIntensity(0);
SoMaterial196->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial196->setShininess(0);
SoVRMLAppearance195->addChild(*SoMaterial196);

SoShape194->addChild(*SoVRMLAppearance195);

SoIndexedFaceSet* SoIndexedFaceSet197 = new SoIndexedFaceSet();
SoIndexedFaceSet197->setSolid(false);
SoIndexedFaceSet197->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet197->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate198 = new SoCoordinate();
SoCoordinate198->setPoint(new float[]{23.93803,0.075,26.19613,24.13502,0.075,26.15598,24.33201,0.075,26.11583,24.07414,0.075,26.86391,24.27114,0.075,26.82376,24.46813,0.075,26.7836,24.21026,0.075,27.53169,24.40725,0.075,27.49154,24.60425,0.075,27.45138}, 27);
SoIndexedFaceSet197->setCoord(*SoCoordinate198);

SoShape194->setGeometry(*SoIndexedFaceSet197);

SoNode12->addChild(*SoShape194);

SoShape* SoShape199 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance200 = new SoVRMLAppearance();
SoMaterial* SoMaterial201 = new SoMaterial();
SoMaterial201->setAmbientIntensity(0);
SoMaterial201->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial201->setShininess(0);
SoVRMLAppearance200->addChild(*SoMaterial201);

SoShape199->addChild(*SoVRMLAppearance200);

SoIndexedFaceSet* SoIndexedFaceSet202 = new SoIndexedFaceSet();
SoIndexedFaceSet202->setSolid(false);
SoIndexedFaceSet202->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet202->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate203 = new SoCoordinate();
SoCoordinate203->setPoint(new float[]{23.52444,0.075,26.28044,23.72144,0.075,26.24028,23.91843,0.075,26.20013,23.66056,0.075,26.94822,23.85755,0.075,26.90806,24.05455,0.075,26.86791,23.79668,0.075,27.61599,23.99367,0.075,27.57584,24.19066,0.075,27.53568}, 27);
SoIndexedFaceSet202->setCoord(*SoCoordinate203);

SoShape199->setGeometry(*SoIndexedFaceSet202);

SoNode12->addChild(*SoShape199);

SoShape* SoShape204 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance205 = new SoVRMLAppearance();
SoMaterial* SoMaterial206 = new SoMaterial();
SoMaterial206->setAmbientIntensity(0);
SoMaterial206->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial206->setShininess(0);
SoVRMLAppearance205->addChild(*SoMaterial206);

SoShape204->addChild(*SoVRMLAppearance205);

SoIndexedFaceSet* SoIndexedFaceSet207 = new SoIndexedFaceSet();
SoIndexedFaceSet207->setSolid(false);
SoIndexedFaceSet207->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet207->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate208 = new SoCoordinate();
SoCoordinate208->setPoint(new float[]{23.52045,0.075,26.26084,23.38633,0.075,25.60286,24.32802,0.075,26.09623,24.1939,0.075,25.43825}, 12);
SoIndexedFaceSet207->setCoord(*SoCoordinate208);

SoShape204->setGeometry(*SoIndexedFaceSet207);

SoNode12->addChild(*SoShape204);

SoShape* SoShape209 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance210 = new SoVRMLAppearance();
SoMaterial* SoMaterial211 = new SoMaterial();
SoMaterial211->setAmbientIntensity(0);
SoMaterial211->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial211->setShininess(0);
SoVRMLAppearance210->addChild(*SoMaterial211);

SoShape209->addChild(*SoVRMLAppearance210);

SoIndexedFaceSet* SoIndexedFaceSet212 = new SoIndexedFaceSet();
SoIndexedFaceSet212->setSolid(false);
SoIndexedFaceSet212->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet212->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate213 = new SoCoordinate();
SoCoordinate213->setPoint(new float[]{23.38233,0.075,25.58327,23.24821,0.075,24.92529,24.18991,0.075,25.41865,24.05579,0.075,24.76067}, 12);
SoIndexedFaceSet212->setCoord(*SoCoordinate213);

SoShape209->setGeometry(*SoIndexedFaceSet212);

SoNode12->addChild(*SoShape209);

SoShape* SoShape214 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance215 = new SoVRMLAppearance();
SoMaterial* SoMaterial216 = new SoMaterial();
SoMaterial216->setAmbientIntensity(0);
SoMaterial216->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial216->setShininess(0);
SoVRMLAppearance215->addChild(*SoMaterial216);

SoShape214->addChild(*SoVRMLAppearance215);

SoIndexedFaceSet* SoIndexedFaceSet217 = new SoIndexedFaceSet();
SoIndexedFaceSet217->setSolid(false);
SoIndexedFaceSet217->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet217->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate218 = new SoCoordinate();
SoCoordinate218->setPoint(new float[]{23.38557,0.075,23.48583,23.77956,0.075,23.40552,23.52169,0.075,24.15361,23.91567,0.075,24.0733,23.6578,0.075,24.82138,24.05179,0.075,24.74108}, 18);
SoIndexedFaceSet217->setCoord(*SoCoordinate218);

SoShape214->setGeometry(*SoIndexedFaceSet217);

SoNode12->addChild(*SoShape214);

SoShape* SoShape219 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance220 = new SoVRMLAppearance();
SoMaterial* SoMaterial221 = new SoMaterial();
SoMaterial221->setAmbientIntensity(0);
SoMaterial221->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial221->setShininess(0);
SoVRMLAppearance220->addChild(*SoMaterial221);

SoShape219->addChild(*SoVRMLAppearance220);

SoIndexedFaceSet* SoIndexedFaceSet222 = new SoIndexedFaceSet();
SoIndexedFaceSet222->setSolid(false);
SoIndexedFaceSet222->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet222->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate223 = new SoCoordinate();
SoCoordinate223->setPoint(new float[]{22.97199,0.075,23.57013,23.36597,0.075,23.48982,23.1081,0.075,24.23791,23.50209,0.075,24.1576,23.24422,0.075,24.90569,23.63821,0.075,24.82538}, 18);
SoIndexedFaceSet222->setCoord(*SoCoordinate223);

SoShape219->setGeometry(*SoIndexedFaceSet222);

SoNode12->addChild(*SoShape219);

SoShape* SoShape224 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance225 = new SoVRMLAppearance();
SoMaterial* SoMaterial226 = new SoMaterial();
SoMaterial226->setAmbientIntensity(0);
SoMaterial226->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial226->setShininess(0);
SoVRMLAppearance225->addChild(*SoMaterial226);

SoShape224->addChild(*SoVRMLAppearance225);

SoIndexedFaceSet* SoIndexedFaceSet227 = new SoIndexedFaceSet();
SoIndexedFaceSet227->setSolid(false);
SoIndexedFaceSet227->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet227->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate228 = new SoCoordinate();
SoCoordinate228->setPoint(new float[]{22.96799,0.075,23.55054,22.83387,0.075,22.89256,23.77556,0.075,23.38592,23.64144,0.075,22.72794}, 12);
SoIndexedFaceSet227->setCoord(*SoCoordinate228);

SoShape224->setGeometry(*SoIndexedFaceSet227);

SoNode12->addChild(*SoShape224);

SoShape* SoShape229 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance230 = new SoVRMLAppearance();
SoMaterial* SoMaterial231 = new SoMaterial();
SoMaterial231->setAmbientIntensity(0);
SoMaterial231->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial231->setShininess(0);
SoVRMLAppearance230->addChild(*SoMaterial231);

SoShape229->addChild(*SoVRMLAppearance230);

SoIndexedFaceSet* SoIndexedFaceSet232 = new SoIndexedFaceSet();
SoIndexedFaceSet232->setSolid(false);
SoIndexedFaceSet232->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet232->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate233 = new SoCoordinate();
SoCoordinate233->setPoint(new float[]{22.82988,0.075,22.87296,22.69576,0.075,22.21498,23.63745,0.075,22.70835,23.50333,0.075,22.05037}, 12);
SoIndexedFaceSet232->setCoord(*SoCoordinate233);

SoShape229->setGeometry(*SoIndexedFaceSet232);

SoNode12->addChild(*SoShape229);

SoShape* SoShape234 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance235 = new SoVRMLAppearance();
SoMaterial* SoMaterial236 = new SoMaterial();
SoMaterial236->setAmbientIntensity(0);
SoMaterial236->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial236->setShininess(0);
SoVRMLAppearance235->addChild(*SoMaterial236);

SoShape234->addChild(*SoVRMLAppearance235);

SoIndexedFaceSet* SoIndexedFaceSet237 = new SoIndexedFaceSet();
SoIndexedFaceSet237->setSolid(false);
SoIndexedFaceSet237->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet237->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate238 = new SoCoordinate();
SoCoordinate238->setPoint(new float[]{22.83311,0.075,20.77552,23.2271,0.075,20.69522,23.10535,0.075,22.11108,23.49934,0.075,22.03077}, 12);
SoIndexedFaceSet237->setCoord(*SoCoordinate238);

SoShape234->setGeometry(*SoIndexedFaceSet237);

SoNode12->addChild(*SoShape234);

SoShape* SoShape239 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance240 = new SoVRMLAppearance();
SoMaterial* SoMaterial241 = new SoMaterial();
SoMaterial241->setAmbientIntensity(0);
SoMaterial241->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial241->setShininess(0);
SoVRMLAppearance240->addChild(*SoMaterial241);

SoShape239->addChild(*SoVRMLAppearance240);

SoIndexedFaceSet* SoIndexedFaceSet242 = new SoIndexedFaceSet();
SoIndexedFaceSet242->setSolid(false);
SoIndexedFaceSet242->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet242->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate243 = new SoCoordinate();
SoCoordinate243->setPoint(new float[]{22.41953,0.075,20.85983,22.81352,0.075,20.77952,22.69176,0.075,22.19538,23.08575,0.075,22.11507}, 12);
SoIndexedFaceSet242->setCoord(*SoCoordinate243);

SoShape239->setGeometry(*SoIndexedFaceSet242);

SoNode12->addChild(*SoShape239);

SoShape* SoShape244 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance245 = new SoVRMLAppearance();
SoMaterial* SoMaterial246 = new SoMaterial();
SoMaterial246->setAmbientIntensity(0);
SoMaterial246->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial246->setShininess(0);
SoVRMLAppearance245->addChild(*SoMaterial246);

SoShape244->addChild(*SoVRMLAppearance245);

SoIndexedFaceSet* SoIndexedFaceSet247 = new SoIndexedFaceSet();
SoIndexedFaceSet247->setSolid(false);
SoIndexedFaceSet247->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet247->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate248 = new SoCoordinate();
SoCoordinate248->setPoint(new float[]{22.41554,0.075,20.84023,22.28142,0.075,20.18225,23.22311,0.075,20.67562,23.08899,0.075,20.01764}, 12);
SoIndexedFaceSet247->setCoord(*SoCoordinate248);

SoShape244->setGeometry(*SoIndexedFaceSet247);

SoNode12->addChild(*SoShape244);

SoShape* SoShape249 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance250 = new SoVRMLAppearance();
SoMaterial* SoMaterial251 = new SoMaterial();
SoMaterial251->setAmbientIntensity(0);
SoMaterial251->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial251->setShininess(0);
SoVRMLAppearance250->addChild(*SoMaterial251);

SoShape249->addChild(*SoVRMLAppearance250);

SoIndexedFaceSet* SoIndexedFaceSet252 = new SoIndexedFaceSet();
SoIndexedFaceSet252->setSolid(false);
SoIndexedFaceSet252->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet252->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate253 = new SoCoordinate();
SoCoordinate253->setPoint(new float[]{22.27742,0.075,20.16265,22.1433,0.075,19.50467,23.08499,0.075,19.99804,22.95087,0.075,19.34006}, 12);
SoIndexedFaceSet252->setCoord(*SoCoordinate253);

SoShape249->setGeometry(*SoIndexedFaceSet252);

SoNode12->addChild(*SoShape249);

SoShape* SoShape254 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance255 = new SoVRMLAppearance();
SoMaterial* SoMaterial256 = new SoMaterial();
SoMaterial256->setAmbientIntensity(0);
SoMaterial256->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial256->setShininess(0);
SoVRMLAppearance255->addChild(*SoMaterial256);

SoShape254->addChild(*SoVRMLAppearance255);

SoIndexedFaceSet* SoIndexedFaceSet257 = new SoIndexedFaceSet();
SoIndexedFaceSet257->setSolid(false);
SoIndexedFaceSet257->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet257->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate258 = new SoCoordinate();
SoCoordinate258->setPoint(new float[]{22.28066,0.075,18.06522,22.67465,0.075,17.98491,22.41678,0.075,18.733,22.81076,0.075,18.65269,22.55289,0.075,19.40077,22.94688,0.075,19.32047}, 18);
SoIndexedFaceSet257->setCoord(*SoCoordinate258);

SoShape254->setGeometry(*SoIndexedFaceSet257);

SoNode12->addChild(*SoShape254);

SoShape* SoShape259 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance260 = new SoVRMLAppearance();
SoMaterial* SoMaterial261 = new SoMaterial();
SoMaterial261->setAmbientIntensity(0);
SoMaterial261->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial261->setShininess(0);
SoVRMLAppearance260->addChild(*SoMaterial261);

SoShape259->addChild(*SoVRMLAppearance260);

SoIndexedFaceSet* SoIndexedFaceSet262 = new SoIndexedFaceSet();
SoIndexedFaceSet262->setSolid(false);
SoIndexedFaceSet262->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet262->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate263 = new SoCoordinate();
SoCoordinate263->setPoint(new float[]{21.86707,0.075,18.14952,22.26106,0.075,18.06921,22.13931,0.075,19.48508,22.53329,0.075,19.40477}, 12);
SoIndexedFaceSet262->setCoord(*SoCoordinate263);

SoShape259->setGeometry(*SoIndexedFaceSet262);

SoNode12->addChild(*SoShape259);

SoShape* SoShape264 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance265 = new SoVRMLAppearance();
SoMaterial* SoMaterial266 = new SoMaterial();
SoMaterial266->setAmbientIntensity(0);
SoMaterial266->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial266->setShininess(0);
SoVRMLAppearance265->addChild(*SoMaterial266);

SoShape264->addChild(*SoVRMLAppearance265);

SoIndexedFaceSet* SoIndexedFaceSet267 = new SoIndexedFaceSet();
SoIndexedFaceSet267->setSolid(false);
SoIndexedFaceSet267->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet267->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate268 = new SoCoordinate();
SoCoordinate268->setPoint(new float[]{24.0573,0.075,28.99474,24.19142,0.075,29.65272,23.24973,0.075,29.15935,23.38385,0.075,29.81733}, 12);
SoIndexedFaceSet267->setCoord(*SoCoordinate268);

SoShape264->setGeometry(*SoIndexedFaceSet267);

SoNode12->addChild(*SoShape264);

SoShape* SoShape269 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance270 = new SoVRMLAppearance();
SoMaterial* SoMaterial271 = new SoMaterial();
SoMaterial271->setAmbientIntensity(0);
SoMaterial271->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial271->setShininess(0);
SoVRMLAppearance270->addChild(*SoMaterial271);

SoShape269->addChild(*SoVRMLAppearance270);

SoIndexedFaceSet* SoIndexedFaceSet272 = new SoIndexedFaceSet();
SoIndexedFaceSet272->setSolid(false);
SoIndexedFaceSet272->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet272->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate273 = new SoCoordinate();
SoCoordinate273->setPoint(new float[]{24.05331,0.075,28.97514,23.85631,0.075,29.0153,23.65932,0.075,29.05545,23.91719,0.075,28.30736,23.7202,0.075,28.34752,23.5232,0.075,28.38767,23.78107,0.075,27.63959,23.58408,0.075,27.67974,23.38709,0.075,27.71989}, 27);
SoIndexedFaceSet272->setCoord(*SoCoordinate273);

SoShape269->setGeometry(*SoIndexedFaceSet272);

SoNode12->addChild(*SoShape269);

SoShape* SoShape274 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance275 = new SoVRMLAppearance();
SoMaterial* SoMaterial276 = new SoMaterial();
SoMaterial276->setAmbientIntensity(0);
SoMaterial276->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial276->setShininess(0);
SoVRMLAppearance275->addChild(*SoMaterial276);

SoShape274->addChild(*SoVRMLAppearance275);

SoIndexedFaceSet* SoIndexedFaceSet277 = new SoIndexedFaceSet();
SoIndexedFaceSet277->setSolid(false);
SoIndexedFaceSet277->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet277->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate278 = new SoCoordinate();
SoCoordinate278->setPoint(new float[]{23.63972,0.075,29.05944,23.24574,0.075,29.13975,23.50361,0.075,28.39167,23.10962,0.075,28.47198,23.36749,0.075,27.72389,22.9735,0.075,27.8042}, 18);
SoIndexedFaceSet277->setCoord(*SoCoordinate278);

SoShape274->setGeometry(*SoIndexedFaceSet277);

SoNode12->addChild(*SoShape274);

SoShape* SoShape279 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance280 = new SoVRMLAppearance();
SoMaterial* SoMaterial281 = new SoMaterial();
SoMaterial281->setAmbientIntensity(0);
SoMaterial281->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial281->setShininess(0);
SoVRMLAppearance280->addChild(*SoMaterial281);

SoShape279->addChild(*SoVRMLAppearance280);

SoIndexedFaceSet* SoIndexedFaceSet282 = new SoIndexedFaceSet();
SoIndexedFaceSet282->setSolid(false);
SoIndexedFaceSet282->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet282->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate283 = new SoCoordinate();
SoCoordinate283->setPoint(new float[]{23.64296,0.075,26.96201,23.77708,0.075,27.61999,22.83539,0.075,27.12662,22.96951,0.075,27.7846}, 12);
SoIndexedFaceSet282->setCoord(*SoCoordinate283);

SoShape279->setGeometry(*SoIndexedFaceSet282);

SoNode12->addChild(*SoShape279);

SoShape* SoShape284 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance285 = new SoVRMLAppearance();
SoMaterial* SoMaterial286 = new SoMaterial();
SoMaterial286->setAmbientIntensity(0);
SoMaterial286->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial286->setShininess(0);
SoVRMLAppearance285->addChild(*SoMaterial286);

SoShape284->addChild(*SoVRMLAppearance285);

SoIndexedFaceSet* SoIndexedFaceSet287 = new SoIndexedFaceSet();
SoIndexedFaceSet287->setSolid(false);
SoIndexedFaceSet287->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet287->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate288 = new SoCoordinate();
SoCoordinate288->setPoint(new float[]{22.83139,0.075,27.10702,22.69728,0.075,26.44904,23.23518,0.075,27.02472,23.10106,0.075,26.36674,23.63897,0.075,26.94241,23.50485,0.075,26.28443}, 18);
SoIndexedFaceSet287->setCoord(*SoCoordinate288);

SoShape284->setGeometry(*SoIndexedFaceSet287);

SoNode12->addChild(*SoShape284);

SoShape* SoShape289 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance290 = new SoVRMLAppearance();
SoMaterial* SoMaterial291 = new SoMaterial();
SoMaterial291->setAmbientIntensity(0);
SoMaterial291->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial291->setShininess(0);
SoVRMLAppearance290->addChild(*SoMaterial291);

SoShape289->addChild(*SoVRMLAppearance290);

SoIndexedFaceSet* SoIndexedFaceSet292 = new SoIndexedFaceSet();
SoIndexedFaceSet292->setSolid(false);
SoIndexedFaceSet292->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet292->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate293 = new SoCoordinate();
SoCoordinate293->setPoint(new float[]{22.83463,0.075,25.00959,23.22862,0.075,24.92928,22.97075,0.075,25.67737,23.36473,0.075,25.59706,23.10686,0.075,26.34514,23.50085,0.075,26.26484}, 18);
SoIndexedFaceSet292->setCoord(*SoCoordinate293);

SoShape289->setGeometry(*SoIndexedFaceSet292);

SoNode12->addChild(*SoShape289);

SoShape* SoShape294 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance295 = new SoVRMLAppearance();
SoMaterial* SoMaterial296 = new SoMaterial();
SoMaterial296->setAmbientIntensity(0);
SoMaterial296->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial296->setShininess(0);
SoVRMLAppearance295->addChild(*SoMaterial296);

SoShape294->addChild(*SoVRMLAppearance295);

SoIndexedFaceSet* SoIndexedFaceSet297 = new SoIndexedFaceSet();
SoIndexedFaceSet297->setSolid(false);
SoIndexedFaceSet297->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet297->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate298 = new SoCoordinate();
SoCoordinate298->setPoint(new float[]{23.08727,0.075,26.34914,22.69328,0.075,26.42945,22.95115,0.075,25.68136,22.55716,0.075,25.76167,22.81503,0.075,25.01358,22.42105,0.075,25.09389}, 18);
SoIndexedFaceSet297->setCoord(*SoCoordinate298);

SoShape294->setGeometry(*SoIndexedFaceSet297);

SoNode12->addChild(*SoShape294);

SoShape* SoShape299 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance300 = new SoVRMLAppearance();
SoMaterial* SoMaterial301 = new SoMaterial();
SoMaterial301->setAmbientIntensity(0);
SoMaterial301->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial301->setShininess(0);
SoVRMLAppearance300->addChild(*SoMaterial301);

SoShape299->addChild(*SoVRMLAppearance300);

SoIndexedFaceSet* SoIndexedFaceSet302 = new SoIndexedFaceSet();
SoIndexedFaceSet302->setSolid(false);
SoIndexedFaceSet302->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet302->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate303 = new SoCoordinate();
SoCoordinate303->setPoint(new float[]{23.0905,0.075,24.2517,23.22462,0.075,24.90968,22.28293,0.075,24.41632,22.41705,0.075,25.07429}, 12);
SoIndexedFaceSet302->setCoord(*SoCoordinate303);

SoShape299->setGeometry(*SoIndexedFaceSet302);

SoNode12->addChild(*SoShape299);

SoShape* SoShape304 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance305 = new SoVRMLAppearance();
SoMaterial* SoMaterial306 = new SoMaterial();
SoMaterial306->setAmbientIntensity(0);
SoMaterial306->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial306->setShininess(0);
SoVRMLAppearance305->addChild(*SoMaterial306);

SoShape304->addChild(*SoVRMLAppearance305);

SoIndexedFaceSet* SoIndexedFaceSet307 = new SoIndexedFaceSet();
SoIndexedFaceSet307->setSolid(false);
SoIndexedFaceSet307->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet307->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate308 = new SoCoordinate();
SoCoordinate308->setPoint(new float[]{22.27894,0.075,24.39672,22.14482,0.075,23.73874,23.08651,0.075,24.23211,22.95239,0.075,23.57413}, 12);
SoIndexedFaceSet307->setCoord(*SoCoordinate308);

SoShape304->setGeometry(*SoIndexedFaceSet307);

SoNode12->addChild(*SoShape304);

SoShape* SoShape309 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance310 = new SoVRMLAppearance();
SoMaterial* SoMaterial311 = new SoMaterial();
SoMaterial311->setAmbientIntensity(0);
SoMaterial311->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial311->setShininess(0);
SoVRMLAppearance310->addChild(*SoMaterial311);

SoShape309->addChild(*SoVRMLAppearance310);

SoIndexedFaceSet* SoIndexedFaceSet312 = new SoIndexedFaceSet();
SoIndexedFaceSet312->setSolid(false);
SoIndexedFaceSet312->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet312->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate313 = new SoCoordinate();
SoCoordinate313->setPoint(new float[]{22.28218,0.075,22.29928,22.67616,0.075,22.21897,22.55441,0.075,23.63484,22.94839,0.075,23.55453}, 12);
SoIndexedFaceSet312->setCoord(*SoCoordinate313);

SoShape309->setGeometry(*SoIndexedFaceSet312);

SoNode12->addChild(*SoShape309);

SoShape* SoShape314 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance315 = new SoVRMLAppearance();
SoMaterial* SoMaterial316 = new SoMaterial();
SoMaterial316->setAmbientIntensity(0);
SoMaterial316->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial316->setShininess(0);
SoVRMLAppearance315->addChild(*SoMaterial316);

SoShape314->addChild(*SoVRMLAppearance315);

SoIndexedFaceSet* SoIndexedFaceSet317 = new SoIndexedFaceSet();
SoIndexedFaceSet317->setSolid(false);
SoIndexedFaceSet317->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet317->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate318 = new SoCoordinate();
SoCoordinate318->setPoint(new float[]{22.53481,0.075,23.63883,22.33782,0.075,23.67899,22.14083,0.075,23.71914,22.39869,0.075,22.97105,22.2017,0.075,23.01121,22.00471,0.075,23.05136,22.26258,0.075,22.30328,22.06558,0.075,22.34343,21.86859,0.075,22.38358}, 27);
SoIndexedFaceSet317->setCoord(*SoCoordinate318);

SoShape314->setGeometry(*SoIndexedFaceSet317);

SoNode12->addChild(*SoShape314);

SoShape* SoShape319 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance320 = new SoVRMLAppearance();
SoMaterial* SoMaterial321 = new SoMaterial();
SoMaterial321->setAmbientIntensity(0);
SoMaterial321->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial321->setShininess(0);
SoVRMLAppearance320->addChild(*SoMaterial321);

SoShape319->addChild(*SoVRMLAppearance320);

SoIndexedFaceSet* SoIndexedFaceSet322 = new SoIndexedFaceSet();
SoIndexedFaceSet322->setSolid(false);
SoIndexedFaceSet322->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet322->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate323 = new SoCoordinate();
SoCoordinate323->setPoint(new float[]{22.53805,0.075,21.5414,22.67217,0.075,22.19938,21.73048,0.075,21.70601,21.8646,0.075,22.36399}, 12);
SoIndexedFaceSet322->setCoord(*SoCoordinate323);

SoShape319->setGeometry(*SoIndexedFaceSet322);

SoNode12->addChild(*SoShape319);

SoShape* SoShape324 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance325 = new SoVRMLAppearance();
SoMaterial* SoMaterial326 = new SoMaterial();
SoMaterial326->setAmbientIntensity(0);
SoMaterial326->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial326->setShininess(0);
SoVRMLAppearance325->addChild(*SoMaterial326);

SoShape324->addChild(*SoVRMLAppearance325);

SoIndexedFaceSet* SoIndexedFaceSet327 = new SoIndexedFaceSet();
SoIndexedFaceSet327->setSolid(false);
SoIndexedFaceSet327->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet327->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate328 = new SoCoordinate();
SoCoordinate328->setPoint(new float[]{21.72648,0.075,21.68641,21.59236,0.075,21.02843,22.53405,0.075,21.5218,22.39993,0.075,20.86382}, 12);
SoIndexedFaceSet327->setCoord(*SoCoordinate328);

SoShape324->setGeometry(*SoIndexedFaceSet327);

SoNode12->addChild(*SoShape324);

SoShape* SoShape329 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance330 = new SoVRMLAppearance();
SoMaterial* SoMaterial331 = new SoMaterial();
SoMaterial331->setAmbientIntensity(0);
SoMaterial331->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial331->setShininess(0);
SoVRMLAppearance330->addChild(*SoMaterial331);

SoShape329->addChild(*SoVRMLAppearance330);

SoIndexedFaceSet* SoIndexedFaceSet332 = new SoIndexedFaceSet();
SoIndexedFaceSet332->setSolid(false);
SoIndexedFaceSet332->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet332->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate333 = new SoCoordinate();
SoCoordinate333->setPoint(new float[]{21.72972,0.075,19.58898,22.12371,0.075,19.50867,22.00195,0.075,20.92453,22.39594,0.075,20.84422}, 12);
SoIndexedFaceSet332->setCoord(*SoCoordinate333);

SoShape329->setGeometry(*SoIndexedFaceSet332);

SoNode12->addChild(*SoShape329);

SoShape* SoShape334 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance335 = new SoVRMLAppearance();
SoMaterial* SoMaterial336 = new SoMaterial();
SoMaterial336->setAmbientIntensity(0);
SoMaterial336->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial336->setShininess(0);
SoVRMLAppearance335->addChild(*SoMaterial336);

SoShape334->addChild(*SoVRMLAppearance335);

SoIndexedFaceSet* SoIndexedFaceSet337 = new SoIndexedFaceSet();
SoIndexedFaceSet337->setSolid(false);
SoIndexedFaceSet337->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet337->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate338 = new SoCoordinate();
SoCoordinate338->setPoint(new float[]{21.98236,0.075,20.92853,21.58837,0.075,21.00883,21.71012,0.075,19.59297,21.31614,0.075,19.67328}, 12);
SoIndexedFaceSet337->setCoord(*SoCoordinate338);

SoShape334->setGeometry(*SoIndexedFaceSet337);

SoNode12->addChild(*SoShape334);

SoShape* SoShape339 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance340 = new SoVRMLAppearance();
SoMaterial* SoMaterial341 = new SoMaterial();
SoMaterial341->setAmbientIntensity(0);
SoMaterial341->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial341->setShininess(0);
SoVRMLAppearance340->addChild(*SoMaterial341);

SoShape339->addChild(*SoVRMLAppearance340);

SoIndexedFaceSet* SoIndexedFaceSet342 = new SoIndexedFaceSet();
SoIndexedFaceSet342->setSolid(false);
SoIndexedFaceSet342->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet342->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate343 = new SoCoordinate();
SoCoordinate343->setPoint(new float[]{21.31214,0.075,19.65368,21.17802,0.075,18.9957,22.11971,0.075,19.48907,21.98559,0.075,18.83109}, 12);
SoIndexedFaceSet342->setCoord(*SoCoordinate343);

SoShape339->setGeometry(*SoIndexedFaceSet342);

SoNode12->addChild(*SoShape339);

SoShape* SoShape344 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance345 = new SoVRMLAppearance();
SoMaterial* SoMaterial346 = new SoMaterial();
SoMaterial346->setAmbientIntensity(0);
SoMaterial346->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial346->setShininess(0);
SoVRMLAppearance345->addChild(*SoMaterial346);

SoShape344->addChild(*SoVRMLAppearance345);

SoIndexedFaceSet* SoIndexedFaceSet347 = new SoIndexedFaceSet();
SoIndexedFaceSet347->setSolid(false);
SoIndexedFaceSet347->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet347->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate348 = new SoCoordinate();
SoCoordinate348->setPoint(new float[]{21.17403,0.075,18.97611,21.03991,0.075,18.31813,21.9816,0.075,18.81149,21.84748,0.075,18.15351}, 12);
SoIndexedFaceSet347->setCoord(*SoCoordinate348);

SoShape344->setGeometry(*SoIndexedFaceSet347);

SoNode12->addChild(*SoShape344);

SoShape* SoShape349 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance350 = new SoVRMLAppearance();
SoMaterial* SoMaterial351 = new SoMaterial();
SoMaterial351->setAmbientIntensity(0);
SoMaterial351->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial351->setShininess(0);
SoVRMLAppearance350->addChild(*SoMaterial351);

SoShape349->addChild(*SoVRMLAppearance350);

SoIndexedFaceSet* SoIndexedFaceSet352 = new SoIndexedFaceSet();
SoIndexedFaceSet352->setSolid(false);
SoIndexedFaceSet352->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet352->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate353 = new SoCoordinate();
SoCoordinate353->setPoint(new float[]{21.17726,0.075,16.87867,21.57125,0.075,16.79836,21.4495,0.075,18.21423,21.84348,0.075,18.13392}, 12);
SoIndexedFaceSet352->setCoord(*SoCoordinate353);

SoShape349->setGeometry(*SoIndexedFaceSet352);

SoNode12->addChild(*SoShape349);

SoShape* SoShape354 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance355 = new SoVRMLAppearance();
SoMaterial* SoMaterial356 = new SoMaterial();
SoMaterial356->setAmbientIntensity(0);
SoMaterial356->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial356->setShininess(0);
SoVRMLAppearance355->addChild(*SoMaterial356);

SoShape354->addChild(*SoVRMLAppearance355);

SoIndexedFaceSet* SoIndexedFaceSet357 = new SoIndexedFaceSet();
SoIndexedFaceSet357->setSolid(false);
SoIndexedFaceSet357->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet357->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate358 = new SoCoordinate();
SoCoordinate358->setPoint(new float[]{20.76368,0.075,16.96297,20.96067,0.075,16.92282,21.15767,0.075,16.88267,20.8998,0.075,17.63075,21.09679,0.075,17.5906,21.29378,0.075,17.55044,21.03591,0.075,18.29853,21.23291,0.075,18.25838,21.4299,0.075,18.21822}, 27);
SoIndexedFaceSet357->setCoord(*SoCoordinate358);

SoShape354->setGeometry(*SoIndexedFaceSet357);

SoNode12->addChild(*SoShape354);

SoShape* SoShape359 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance360 = new SoVRMLAppearance();
SoMaterial* SoMaterial361 = new SoMaterial();
SoMaterial361->setAmbientIntensity(0);
SoMaterial361->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial361->setShininess(0);
SoVRMLAppearance360->addChild(*SoMaterial361);

SoShape359->addChild(*SoVRMLAppearance360);

SoIndexedFaceSet* SoIndexedFaceSet362 = new SoIndexedFaceSet();
SoIndexedFaceSet362->setSolid(false);
SoIndexedFaceSet362->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet362->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate363 = new SoCoordinate();
SoCoordinate363->setPoint(new float[]{19.65877,0.075,11.54236,20.05275,0.075,11.46205,19.79488,0.075,12.21014,20.18887,0.075,12.12983,19.931,0.075,12.87792,20.32499,0.075,12.79761}, 18);
SoIndexedFaceSet362->setCoord(*SoCoordinate363);

SoShape359->setGeometry(*SoIndexedFaceSet362);

SoNode12->addChild(*SoShape359);

SoShape* SoShape364 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance365 = new SoVRMLAppearance();
SoMaterial* SoMaterial366 = new SoMaterial();
SoMaterial366->setAmbientIntensity(0);
SoMaterial366->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial366->setShininess(0);
SoVRMLAppearance365->addChild(*SoMaterial366);

SoShape364->addChild(*SoVRMLAppearance365);

SoIndexedFaceSet* SoIndexedFaceSet367 = new SoIndexedFaceSet();
SoIndexedFaceSet367->setSolid(false);
SoIndexedFaceSet367->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet367->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate368 = new SoCoordinate();
SoCoordinate368->setPoint(new float[]{19.65477,0.075,11.52277,19.52065,0.075,10.86479,20.05856,0.075,11.44046,19.92444,0.075,10.78248,20.46234,0.075,11.35815,20.32822,0.075,10.70017}, 18);
SoIndexedFaceSet367->setCoord(*SoCoordinate368);

SoShape364->setGeometry(*SoIndexedFaceSet367);

SoNode12->addChild(*SoShape364);

SoShape* SoShape369 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance370 = new SoVRMLAppearance();
SoMaterial* SoMaterial371 = new SoMaterial();
SoMaterial371->setAmbientIntensity(0);
SoMaterial371->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial371->setShininess(0);
SoVRMLAppearance370->addChild(*SoMaterial371);

SoShape369->addChild(*SoVRMLAppearance370);

SoIndexedFaceSet* SoIndexedFaceSet372 = new SoIndexedFaceSet();
SoIndexedFaceSet372->setSolid(false);
SoIndexedFaceSet372->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet372->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate373 = new SoCoordinate();
SoCoordinate373->setPoint(new float[]{20.19011,0.075,10.0226,20.32423,0.075,10.68058,19.38254,0.075,10.18721,19.51666,0.075,10.84519}, 12);
SoIndexedFaceSet372->setCoord(*SoCoordinate373);

SoShape369->setGeometry(*SoIndexedFaceSet372);

SoNode12->addChild(*SoShape369);

SoShape* SoShape374 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance375 = new SoVRMLAppearance();
SoMaterial* SoMaterial376 = new SoMaterial();
SoMaterial376->setAmbientIntensity(0);
SoMaterial376->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial376->setShininess(0);
SoVRMLAppearance375->addChild(*SoMaterial376);

SoShape374->addChild(*SoVRMLAppearance375);

SoIndexedFaceSet* SoIndexedFaceSet377 = new SoIndexedFaceSet();
SoIndexedFaceSet377->setSolid(false);
SoIndexedFaceSet377->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet377->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate378 = new SoCoordinate();
SoCoordinate378->setPoint(new float[]{19.5199,0.075,8.747754,19.91388,0.075,8.667445,19.65601,0.075,9.415531,20.05,0.075,9.335223,19.79213,0.075,10.08331,20.18612,0.075,10.003}, 18);
SoIndexedFaceSet377->setCoord(*SoCoordinate378);

SoShape374->setGeometry(*SoIndexedFaceSet377);

SoNode12->addChild(*SoShape374);

SoShape* SoShape379 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance380 = new SoVRMLAppearance();
SoMaterial* SoMaterial381 = new SoMaterial();
SoMaterial381->setAmbientIntensity(0);
SoMaterial381->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial381->setShininess(0);
SoVRMLAppearance380->addChild(*SoMaterial381);

SoShape379->addChild(*SoVRMLAppearance380);

SoIndexedFaceSet* SoIndexedFaceSet382 = new SoIndexedFaceSet();
SoIndexedFaceSet382->setSolid(false);
SoIndexedFaceSet382->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet382->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate383 = new SoCoordinate();
SoCoordinate383->setPoint(new float[]{19.77253,0.075,10.0873,19.57554,0.075,10.12746,19.37854,0.075,10.16761,19.63642,0.075,9.419526,19.43942,0.075,9.459681,19.24243,0.075,9.499835,19.5003,0.075,8.751748,19.3033,0.075,8.791903,19.10631,0.075,8.832057}, 27);
SoIndexedFaceSet382->setCoord(*SoCoordinate383);

SoShape379->setGeometry(*SoIndexedFaceSet382);

SoNode12->addChild(*SoShape379);

SoShape* SoShape384 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance385 = new SoVRMLAppearance();
SoMaterial* SoMaterial386 = new SoMaterial();
SoMaterial386->setAmbientIntensity(0);
SoMaterial386->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial386->setShininess(0);
SoVRMLAppearance385->addChild(*SoMaterial386);

SoShape384->addChild(*SoVRMLAppearance385);

SoIndexedFaceSet* SoIndexedFaceSet387 = new SoIndexedFaceSet();
SoIndexedFaceSet387->setSolid(false);
SoIndexedFaceSet387->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoIndexedFaceSet387->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoCoordinate* SoCoordinate388 = new SoCoordinate();
SoCoordinate388->setPoint(new float[]{19.77577,0.075,7.989869,19.84283,0.075,8.318858,19.90989,0.075,8.647848,18.9682,0.075,8.15448,19.03526,0.075,8.48347,19.10232,0.075,8.81246}, 18);
SoIndexedFaceSet387->setCoord(*SoCoordinate388);

SoShape384->setGeometry(*SoIndexedFaceSet387);

SoNode12->addChild(*SoShape384);

SoShape* SoShape389 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance390 = new SoVRMLAppearance();
SoMaterial* SoMaterial391 = new SoMaterial();
SoMaterial391->setAmbientIntensity(0);
SoMaterial391->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial391->setShininess(0);
SoVRMLAppearance390->addChild(*SoMaterial391);

SoShape389->addChild(*SoVRMLAppearance390);

SoIndexedFaceSet* SoIndexedFaceSet392 = new SoIndexedFaceSet();
SoIndexedFaceSet392->setSolid(false);
SoIndexedFaceSet392->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet392->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate393 = new SoCoordinate();
SoCoordinate393->setPoint(new float[]{18.9642,0.075,8.134883,18.83008,0.075,7.476904,19.36799,0.075,8.052578,19.23387,0.075,7.394598,19.77177,0.075,7.970272,19.63765,0.075,7.312293}, 18);
SoIndexedFaceSet392->setCoord(*SoCoordinate393);

SoShape389->setGeometry(*SoIndexedFaceSet392);

SoNode12->addChild(*SoShape389);

SoShape* SoShape394 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance395 = new SoVRMLAppearance();
SoMaterial* SoMaterial396 = new SoMaterial();
SoMaterial396->setAmbientIntensity(0);
SoMaterial396->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial396->setShininess(0);
SoVRMLAppearance395->addChild(*SoMaterial396);

SoShape394->addChild(*SoVRMLAppearance395);

SoIndexedFaceSet* SoIndexedFaceSet397 = new SoIndexedFaceSet();
SoIndexedFaceSet397->setSolid(false);
SoIndexedFaceSet397->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet397->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate398 = new SoCoordinate();
SoCoordinate398->setPoint(new float[]{18.96744,0.075,6.037448,19.16443,0.075,5.997294,19.36143,0.075,5.957139,19.10356,0.075,6.705226,19.30055,0.075,6.665071,19.49754,0.075,6.624918,19.23967,0.075,7.373004,19.43667,0.075,7.33285,19.63366,0.075,7.292696}, 27);
SoIndexedFaceSet397->setCoord(*SoCoordinate398);

SoShape394->setGeometry(*SoIndexedFaceSet397);

SoNode12->addChild(*SoShape394);

SoShape* SoShape399 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance400 = new SoVRMLAppearance();
SoMaterial* SoMaterial401 = new SoMaterial();
SoMaterial401->setAmbientIntensity(0);
SoMaterial401->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial401->setShininess(0);
SoVRMLAppearance400->addChild(*SoMaterial401);

SoShape399->addChild(*SoVRMLAppearance400);

SoIndexedFaceSet* SoIndexedFaceSet402 = new SoIndexedFaceSet();
SoIndexedFaceSet402->setSolid(false);
SoIndexedFaceSet402->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet402->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate403 = new SoCoordinate();
SoCoordinate403->setPoint(new float[]{18.55386,0.075,6.121751,18.94784,0.075,6.041442,18.68997,0.075,6.789529,19.08396,0.075,6.70922,18.82609,0.075,7.457307,19.22008,0.075,7.376998}, 18);
SoIndexedFaceSet402->setCoord(*SoCoordinate403);

SoShape399->setGeometry(*SoIndexedFaceSet402);

SoNode12->addChild(*SoShape399);

SoShape* SoShape404 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance405 = new SoVRMLAppearance();
SoMaterial* SoMaterial406 = new SoMaterial();
SoMaterial406->setAmbientIntensity(0);
SoMaterial406->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial406->setShininess(0);
SoVRMLAppearance405->addChild(*SoMaterial406);

SoShape404->addChild(*SoVRMLAppearance405);

SoIndexedFaceSet* SoIndexedFaceSet407 = new SoIndexedFaceSet();
SoIndexedFaceSet407->setSolid(false);
SoIndexedFaceSet407->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet407->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate408 = new SoCoordinate();
SoCoordinate408->setPoint(new float[]{18.54986,0.075,6.102154,18.41574,0.075,5.444175,18.95365,0.075,6.019848,18.81953,0.075,5.361869,19.35743,0.075,5.937542,19.22331,0.075,5.279563}, 18);
SoIndexedFaceSet407->setCoord(*SoCoordinate408);

SoShape404->setGeometry(*SoIndexedFaceSet407);

SoNode12->addChild(*SoShape404);

SoShape* SoShape409 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance410 = new SoVRMLAppearance();
SoMaterial* SoMaterial411 = new SoMaterial();
SoMaterial411->setAmbientIntensity(0);
SoMaterial411->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial411->setShininess(0);
SoVRMLAppearance410->addChild(*SoMaterial411);

SoShape409->addChild(*SoVRMLAppearance410);

SoIndexedFaceSet* SoIndexedFaceSet412 = new SoIndexedFaceSet();
SoIndexedFaceSet412->setSolid(false);
SoIndexedFaceSet412->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet412->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate413 = new SoCoordinate();
SoCoordinate413->setPoint(new float[]{22.83615,0.075,29.24365,23.23013,0.075,29.16334,23.10838,0.075,30.57921,23.50237,0.075,30.4989}, 12);
SoIndexedFaceSet412->setCoord(*SoCoordinate413);

SoShape409->setGeometry(*SoIndexedFaceSet412);

SoNode12->addChild(*SoShape409);

SoShape* SoShape414 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance415 = new SoVRMLAppearance();
SoMaterial* SoMaterial416 = new SoMaterial();
SoMaterial416->setAmbientIntensity(0);
SoMaterial416->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial416->setShininess(0);
SoVRMLAppearance415->addChild(*SoMaterial416);

SoShape414->addChild(*SoVRMLAppearance415);

SoIndexedFaceSet* SoIndexedFaceSet417 = new SoIndexedFaceSet();
SoIndexedFaceSet417->setSolid(false);
SoIndexedFaceSet417->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet417->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate418 = new SoCoordinate();
SoCoordinate418->setPoint(new float[]{23.08878,0.075,30.5832,22.89179,0.075,30.62336,22.6948,0.075,30.66351,22.95267,0.075,29.91542,22.75567,0.075,29.95558,22.55868,0.075,29.99573,22.81655,0.075,29.24765,22.61956,0.075,29.2878,22.42256,0.075,29.32796}, 27);
SoIndexedFaceSet417->setCoord(*SoCoordinate418);

SoShape414->setGeometry(*SoIndexedFaceSet417);

SoNode12->addChild(*SoShape414);

SoShape* SoShape419 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance420 = new SoVRMLAppearance();
SoMaterial* SoMaterial421 = new SoMaterial();
SoMaterial421->setAmbientIntensity(0);
SoMaterial421->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial421->setShininess(0);
SoVRMLAppearance420->addChild(*SoMaterial421);

SoShape419->addChild(*SoVRMLAppearance420);

SoIndexedFaceSet* SoIndexedFaceSet422 = new SoIndexedFaceSet();
SoIndexedFaceSet422->setSolid(false);
SoIndexedFaceSet422->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet422->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate423 = new SoCoordinate();
SoCoordinate423->setPoint(new float[]{23.09202,0.075,28.48577,23.22614,0.075,29.14375,22.28445,0.075,28.65038,22.41857,0.075,29.30836}, 12);
SoIndexedFaceSet422->setCoord(*SoCoordinate423);

SoShape419->setGeometry(*SoIndexedFaceSet422);

SoNode12->addChild(*SoShape419);

SoShape* SoShape424 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance425 = new SoVRMLAppearance();
SoMaterial* SoMaterial426 = new SoMaterial();
SoMaterial426->setAmbientIntensity(0);
SoMaterial426->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial426->setShininess(0);
SoVRMLAppearance425->addChild(*SoMaterial426);

SoShape424->addChild(*SoVRMLAppearance425);

SoIndexedFaceSet* SoIndexedFaceSet427 = new SoIndexedFaceSet();
SoIndexedFaceSet427->setSolid(false);
SoIndexedFaceSet427->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet427->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate428 = new SoCoordinate();
SoCoordinate428->setPoint(new float[]{22.28045,0.075,28.63078,22.14634,0.075,27.9728,23.08803,0.075,28.46617,22.95391,0.075,27.80819}, 12);
SoIndexedFaceSet427->setCoord(*SoCoordinate428);

SoShape424->setGeometry(*SoIndexedFaceSet427);

SoNode12->addChild(*SoShape424);

SoShape* SoShape429 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance430 = new SoVRMLAppearance();
SoMaterial* SoMaterial431 = new SoMaterial();
SoMaterial431->setAmbientIntensity(0);
SoMaterial431->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial431->setShininess(0);
SoVRMLAppearance430->addChild(*SoMaterial431);

SoShape429->addChild(*SoVRMLAppearance430);

SoIndexedFaceSet* SoIndexedFaceSet432 = new SoIndexedFaceSet();
SoIndexedFaceSet432->setSolid(false);
SoIndexedFaceSet432->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet432->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate433 = new SoCoordinate();
SoCoordinate433->setPoint(new float[]{22.94991,0.075,27.7886,22.55593,0.075,27.8689,22.67768,0.075,26.45304,22.28369,0.075,26.53335}, 12);
SoIndexedFaceSet432->setCoord(*SoCoordinate433);

SoShape429->setGeometry(*SoIndexedFaceSet432);

SoNode12->addChild(*SoShape429);

SoShape* SoShape434 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance435 = new SoVRMLAppearance();
SoMaterial* SoMaterial436 = new SoMaterial();
SoMaterial436->setAmbientIntensity(0);
SoMaterial436->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial436->setShininess(0);
SoVRMLAppearance435->addChild(*SoMaterial436);

SoShape434->addChild(*SoVRMLAppearance435);

SoIndexedFaceSet* SoIndexedFaceSet437 = new SoIndexedFaceSet();
SoIndexedFaceSet437->setSolid(false);
SoIndexedFaceSet437->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet437->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate438 = new SoCoordinate();
SoCoordinate438->setPoint(new float[]{21.87011,0.075,26.61765,22.0671,0.075,26.5775,22.26409,0.075,26.53734,22.00622,0.075,27.28543,22.20322,0.075,27.24527,22.40021,0.075,27.20512,22.14234,0.075,27.95321,22.33933,0.075,27.91305,22.53633,0.075,27.8729}, 27);
SoIndexedFaceSet437->setCoord(*SoCoordinate438);

SoShape434->setGeometry(*SoIndexedFaceSet437);

SoNode12->addChild(*SoShape434);

SoShape* SoShape439 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance440 = new SoVRMLAppearance();
SoMaterial* SoMaterial441 = new SoMaterial();
SoMaterial441->setAmbientIntensity(0);
SoMaterial441->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial441->setShininess(0);
SoVRMLAppearance440->addChild(*SoMaterial441);

SoShape439->addChild(*SoVRMLAppearance440);

SoIndexedFaceSet* SoIndexedFaceSet442 = new SoIndexedFaceSet();
SoIndexedFaceSet442->setSolid(false);
SoIndexedFaceSet442->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet442->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate443 = new SoCoordinate();
SoCoordinate443->setPoint(new float[]{22.53956,0.075,25.77546,22.67368,0.075,26.43344,21.73199,0.075,25.94007,21.86611,0.075,26.59805}, 12);
SoIndexedFaceSet442->setCoord(*SoCoordinate443);

SoShape439->setGeometry(*SoIndexedFaceSet442);

SoNode12->addChild(*SoShape439);

SoShape* SoShape444 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance445 = new SoVRMLAppearance();
SoMaterial* SoMaterial446 = new SoMaterial();
SoMaterial446->setAmbientIntensity(0);
SoMaterial446->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial446->setShininess(0);
SoVRMLAppearance445->addChild(*SoMaterial446);

SoShape444->addChild(*SoVRMLAppearance445);

SoIndexedFaceSet* SoIndexedFaceSet447 = new SoIndexedFaceSet();
SoIndexedFaceSet447->setSolid(false);
SoIndexedFaceSet447->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoIndexedFaceSet447->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoCoordinate* SoCoordinate448 = new SoCoordinate();
SoCoordinate448->setPoint(new float[]{21.728,0.075,25.92048,21.66094,0.075,25.59149,21.59388,0.075,25.2625,22.53557,0.075,25.75587,22.46851,0.075,25.42688,22.40145,0.075,25.09789}, 18);
SoIndexedFaceSet447->setCoord(*SoCoordinate448);

SoShape444->setGeometry(*SoIndexedFaceSet447);

SoNode12->addChild(*SoShape444);

SoShape* SoShape449 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance450 = new SoVRMLAppearance();
SoMaterial* SoMaterial451 = new SoMaterial();
SoMaterial451->setAmbientIntensity(0);
SoMaterial451->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial451->setShininess(0);
SoVRMLAppearance450->addChild(*SoMaterial451);

SoShape449->addChild(*SoVRMLAppearance450);

SoIndexedFaceSet* SoIndexedFaceSet452 = new SoIndexedFaceSet();
SoIndexedFaceSet452->setSolid(false);
SoIndexedFaceSet452->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet452->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate453 = new SoCoordinate();
SoCoordinate453->setPoint(new float[]{22.39746,0.075,25.07829,22.20046,0.075,25.11844,22.00347,0.075,25.1586,22.26134,0.075,24.41051,22.06435,0.075,24.45066,21.86735,0.075,24.49082,22.12522,0.075,23.74273,21.92823,0.075,23.78289,21.73124,0.075,23.82304}, 27);
SoIndexedFaceSet452->setCoord(*SoCoordinate453);

SoShape449->setGeometry(*SoIndexedFaceSet452);

SoNode12->addChild(*SoShape449);

SoShape* SoShape454 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance455 = new SoVRMLAppearance();
SoMaterial* SoMaterial456 = new SoMaterial();
SoMaterial456->setAmbientIntensity(0);
SoMaterial456->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial456->setShininess(0);
SoVRMLAppearance455->addChild(*SoMaterial456);

SoShape454->addChild(*SoVRMLAppearance455);

SoIndexedFaceSet* SoIndexedFaceSet457 = new SoIndexedFaceSet();
SoIndexedFaceSet457->setSolid(false);
SoIndexedFaceSet457->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet457->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate458 = new SoCoordinate();
SoCoordinate458->setPoint(new float[]{21.31765,0.075,23.90734,21.71164,0.075,23.82704,21.58988,0.075,25.2429,21.98387,0.075,25.16259}, 12);
SoIndexedFaceSet457->setCoord(*SoCoordinate458);

SoShape454->setGeometry(*SoIndexedFaceSet457);

SoNode12->addChild(*SoShape454);

SoShape* SoShape459 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance460 = new SoVRMLAppearance();
SoMaterial* SoMaterial461 = new SoMaterial();
SoMaterial461->setAmbientIntensity(0);
SoMaterial461->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial461->setShininess(0);
SoVRMLAppearance460->addChild(*SoMaterial461);

SoShape459->addChild(*SoVRMLAppearance460);

SoIndexedFaceSet* SoIndexedFaceSet462 = new SoIndexedFaceSet();
SoIndexedFaceSet462->setSolid(false);
SoIndexedFaceSet462->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet462->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate463 = new SoCoordinate();
SoCoordinate463->setPoint(new float[]{21.31366,0.075,23.88775,21.17954,0.075,23.22977,22.12123,0.075,23.72313,21.98711,0.075,23.06516}, 12);
SoIndexedFaceSet462->setCoord(*SoCoordinate463);

SoShape459->setGeometry(*SoIndexedFaceSet462);

SoNode12->addChild(*SoShape459);

SoShape* SoShape464 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance465 = new SoVRMLAppearance();
SoMaterial* SoMaterial466 = new SoMaterial();
SoMaterial466->setAmbientIntensity(0);
SoMaterial466->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial466->setShininess(0);
SoVRMLAppearance465->addChild(*SoMaterial466);

SoShape464->addChild(*SoVRMLAppearance465);

SoIndexedFaceSet* SoIndexedFaceSet467 = new SoIndexedFaceSet();
SoIndexedFaceSet467->setSolid(false);
SoIndexedFaceSet467->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet467->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate468 = new SoCoordinate();
SoCoordinate468->setPoint(new float[]{21.17554,0.075,23.21017,21.04142,0.075,22.55219,21.98311,0.075,23.04556,21.84899,0.075,22.38758}, 12);
SoIndexedFaceSet467->setCoord(*SoCoordinate468);

SoShape464->setGeometry(*SoIndexedFaceSet467);

SoNode12->addChild(*SoShape464);

SoShape* SoShape469 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance470 = new SoVRMLAppearance();
SoMaterial* SoMaterial471 = new SoMaterial();
SoMaterial471->setAmbientIntensity(0);
SoMaterial471->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial471->setShininess(0);
SoVRMLAppearance470->addChild(*SoMaterial471);

SoShape469->addChild(*SoVRMLAppearance470);

SoIndexedFaceSet* SoIndexedFaceSet472 = new SoIndexedFaceSet();
SoIndexedFaceSet472->setSolid(false);
SoIndexedFaceSet472->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet472->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate473 = new SoCoordinate();
SoCoordinate473->setPoint(new float[]{21.845,0.075,22.36798,21.45101,0.075,22.44829,21.57277,0.075,21.03243,21.17878,0.075,21.11274}, 12);
SoIndexedFaceSet472->setCoord(*SoCoordinate473);

SoShape469->setGeometry(*SoIndexedFaceSet472);

SoNode12->addChild(*SoShape469);

SoShape* SoShape474 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance475 = new SoVRMLAppearance();
SoMaterial* SoMaterial476 = new SoMaterial();
SoMaterial476->setAmbientIntensity(0);
SoMaterial476->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial476->setShininess(0);
SoVRMLAppearance475->addChild(*SoMaterial476);

SoShape474->addChild(*SoVRMLAppearance475);

SoIndexedFaceSet* SoIndexedFaceSet477 = new SoIndexedFaceSet();
SoIndexedFaceSet477->setSolid(false);
SoIndexedFaceSet477->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet477->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate478 = new SoCoordinate();
SoCoordinate478->setPoint(new float[]{20.7652,0.075,21.19704,21.15918,0.075,21.11673,21.03743,0.075,22.53259,21.43142,0.075,22.45229}, 12);
SoIndexedFaceSet477->setCoord(*SoCoordinate478);

SoShape474->setGeometry(*SoIndexedFaceSet477);

SoNode12->addChild(*SoShape474);

SoShape* SoShape479 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance480 = new SoVRMLAppearance();
SoMaterial* SoMaterial481 = new SoMaterial();
SoMaterial481->setAmbientIntensity(0);
SoMaterial481->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial481->setShininess(0);
SoVRMLAppearance480->addChild(*SoMaterial481);

SoShape479->addChild(*SoVRMLAppearance480);

SoIndexedFaceSet* SoIndexedFaceSet482 = new SoIndexedFaceSet();
SoIndexedFaceSet482->setSolid(false);
SoIndexedFaceSet482->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet482->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate483 = new SoCoordinate();
SoCoordinate483->setPoint(new float[]{20.7612,0.075,21.17744,20.62708,0.075,20.51946,21.16499,0.075,21.09514,21.03087,0.075,20.43716,21.56877,0.075,21.01283,21.43465,0.075,20.35485}, 18);
SoIndexedFaceSet482->setCoord(*SoCoordinate483);

SoShape479->setGeometry(*SoIndexedFaceSet482);

SoNode12->addChild(*SoShape479);

SoShape* SoShape484 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance485 = new SoVRMLAppearance();
SoMaterial* SoMaterial486 = new SoMaterial();
SoMaterial486->setAmbientIntensity(0);
SoMaterial486->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial486->setShininess(0);
SoVRMLAppearance485->addChild(*SoMaterial486);

SoShape484->addChild(*SoVRMLAppearance485);

SoIndexedFaceSet* SoIndexedFaceSet487 = new SoIndexedFaceSet();
SoIndexedFaceSet487->setSolid(false);
SoIndexedFaceSet487->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet487->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate488 = new SoCoordinate();
SoCoordinate488->setPoint(new float[]{20.62309,0.075,20.49986,20.48897,0.075,19.84189,21.02687,0.075,20.41756,20.89275,0.075,19.75958,21.43066,0.075,20.33525,21.29654,0.075,19.67727}, 18);
SoIndexedFaceSet487->setCoord(*SoCoordinate488);

SoShape484->setGeometry(*SoIndexedFaceSet487);

SoNode12->addChild(*SoShape484);

SoShape* SoShape489 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance490 = new SoVRMLAppearance();
SoMaterial* SoMaterial491 = new SoMaterial();
SoMaterial491->setAmbientIntensity(0);
SoMaterial491->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial491->setShininess(0);
SoVRMLAppearance490->addChild(*SoMaterial491);

SoShape489->addChild(*SoVRMLAppearance490);

SoIndexedFaceSet* SoIndexedFaceSet492 = new SoIndexedFaceSet();
SoIndexedFaceSet492->setSolid(false);
SoIndexedFaceSet492->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet492->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate493 = new SoCoordinate();
SoCoordinate493->setPoint(new float[]{20.62632,0.075,18.40243,20.82332,0.075,18.36228,21.02031,0.075,18.32212,20.76244,0.075,19.07021,20.95943,0.075,19.03005,21.15643,0.075,18.9899,20.89856,0.075,19.73799,21.09555,0.075,19.69783,21.29254,0.075,19.65768}, 27);
SoIndexedFaceSet492->setCoord(*SoCoordinate493);

SoShape489->setGeometry(*SoIndexedFaceSet492);

SoNode12->addChild(*SoShape489);

SoShape* SoShape494 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance495 = new SoVRMLAppearance();
SoMaterial* SoMaterial496 = new SoMaterial();
SoMaterial496->setAmbientIntensity(0);
SoMaterial496->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial496->setShininess(0);
SoVRMLAppearance495->addChild(*SoMaterial496);

SoShape494->addChild(*SoVRMLAppearance495);

SoIndexedFaceSet* SoIndexedFaceSet497 = new SoIndexedFaceSet();
SoIndexedFaceSet497->setSolid(false);
SoIndexedFaceSet497->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet497->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate498 = new SoCoordinate();
SoCoordinate498->setPoint(new float[]{20.21274,0.075,18.48673,20.40973,0.075,18.44658,20.60673,0.075,18.40642,20.34886,0.075,19.15451,20.54585,0.075,19.11436,20.74284,0.075,19.0742,20.48497,0.075,19.82229,20.68197,0.075,19.78214,20.87896,0.075,19.74198}, 27);
SoIndexedFaceSet497->setCoord(*SoCoordinate498);

SoShape494->setGeometry(*SoIndexedFaceSet497);

SoNode12->addChild(*SoShape494);

SoShape* SoShape499 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance500 = new SoVRMLAppearance();
SoMaterial* SoMaterial501 = new SoMaterial();
SoMaterial501->setAmbientIntensity(0);
SoMaterial501->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial501->setShininess(0);
SoVRMLAppearance500->addChild(*SoMaterial501);

SoShape499->addChild(*SoVRMLAppearance500);

SoIndexedFaceSet* SoIndexedFaceSet502 = new SoIndexedFaceSet();
SoIndexedFaceSet502->setSolid(false);
SoIndexedFaceSet502->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet502->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate503 = new SoCoordinate();
SoCoordinate503->setPoint(new float[]{20.20874,0.075,18.46714,20.07463,0.075,17.80916,20.61253,0.075,18.38483,20.47841,0.075,17.72685,21.01632,0.075,18.30252,20.8822,0.075,17.64454}, 18);
SoIndexedFaceSet502->setCoord(*SoCoordinate503);

SoShape499->setGeometry(*SoIndexedFaceSet502);

SoNode12->addChild(*SoShape499);

SoShape* SoShape504 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance505 = new SoVRMLAppearance();
SoMaterial* SoMaterial506 = new SoMaterial();
SoMaterial506->setAmbientIntensity(0);
SoMaterial506->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial506->setShininess(0);
SoVRMLAppearance505->addChild(*SoMaterial506);

SoShape504->addChild(*SoVRMLAppearance505);

SoIndexedFaceSet* SoIndexedFaceSet507 = new SoIndexedFaceSet();
SoIndexedFaceSet507->setSolid(false);
SoIndexedFaceSet507->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet507->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate508 = new SoCoordinate();
SoCoordinate508->setPoint(new float[]{20.74408,0.075,16.96697,20.8782,0.075,17.62495,20.3403,0.075,17.04927,20.47442,0.075,17.70725,19.93651,0.075,17.13158,20.07063,0.075,17.78956}, 18);
SoIndexedFaceSet507->setCoord(*SoCoordinate508);

SoShape504->setGeometry(*SoIndexedFaceSet507);

SoNode12->addChild(*SoShape504);

SoShape* SoShape509 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance510 = new SoVRMLAppearance();
SoMaterial* SoMaterial511 = new SoMaterial();
SoMaterial511->setAmbientIntensity(0);
SoMaterial511->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial511->setShininess(0);
SoVRMLAppearance510->addChild(*SoMaterial511);

SoShape509->addChild(*SoVRMLAppearance510);

SoIndexedFaceSet* SoIndexedFaceSet512 = new SoIndexedFaceSet();
SoIndexedFaceSet512->setSolid(false);
SoIndexedFaceSet512->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet512->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate513 = new SoCoordinate();
SoCoordinate513->setPoint(new float[]{20.74009,0.075,16.94737,20.3461,0.075,17.02768,20.60397,0.075,16.27959,20.20998,0.075,16.3599,20.46785,0.075,15.61182,20.07387,0.075,15.69212}, 18);
SoIndexedFaceSet512->setCoord(*SoCoordinate513);

SoShape509->setGeometry(*SoIndexedFaceSet512);

SoNode12->addChild(*SoShape509);

SoShape* SoShape514 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance515 = new SoVRMLAppearance();
SoMaterial* SoMaterial516 = new SoMaterial();
SoMaterial516->setAmbientIntensity(0);
SoMaterial516->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial516->setShininess(0);
SoVRMLAppearance515->addChild(*SoMaterial516);

SoShape514->addChild(*SoVRMLAppearance515);

SoIndexedFaceSet* SoIndexedFaceSet517 = new SoIndexedFaceSet();
SoIndexedFaceSet517->setSolid(false);
SoIndexedFaceSet517->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet517->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate518 = new SoCoordinate();
SoCoordinate518->setPoint(new float[]{19.66028,0.075,15.77643,19.85728,0.075,15.73627,20.05427,0.075,15.69612,19.7964,0.075,16.4442,19.99339,0.075,16.40405,20.19039,0.075,16.3639,19.93252,0.075,17.11198,20.12951,0.075,17.07183,20.3265,0.075,17.03168}, 27);
SoIndexedFaceSet517->setCoord(*SoCoordinate518);

SoShape514->setGeometry(*SoIndexedFaceSet517);

SoNode12->addChild(*SoShape514);

SoShape* SoShape519 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance520 = new SoVRMLAppearance();
SoMaterial* SoMaterial521 = new SoMaterial();
SoMaterial521->setAmbientIntensity(0);
SoMaterial521->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial521->setShininess(0);
SoVRMLAppearance520->addChild(*SoMaterial521);

SoShape519->addChild(*SoVRMLAppearance520);

SoIndexedFaceSet* SoIndexedFaceSet522 = new SoIndexedFaceSet();
SoIndexedFaceSet522->setSolid(false);
SoIndexedFaceSet522->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet522->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate523 = new SoCoordinate();
SoCoordinate523->setPoint(new float[]{19.65629,0.075,15.75683,19.58923,0.075,15.42784,19.52217,0.075,15.09885,20.06007,0.075,15.67452,19.99302,0.075,15.34553,19.92595,0.075,15.01655,20.46386,0.075,15.59222,20.3968,0.075,15.26323,20.32974,0.075,14.93424}, 27);
SoIndexedFaceSet522->setCoord(*SoCoordinate523);

SoShape519->setGeometry(*SoIndexedFaceSet522);

SoNode12->addChild(*SoShape519);

SoShape* SoShape524 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance525 = new SoVRMLAppearance();
SoMaterial* SoMaterial526 = new SoMaterial();
SoMaterial526->setAmbientIntensity(0);
SoMaterial526->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial526->setShininess(0);
SoVRMLAppearance525->addChild(*SoMaterial526);

SoShape524->addChild(*SoVRMLAppearance525);

SoIndexedFaceSet* SoIndexedFaceSet527 = new SoIndexedFaceSet();
SoIndexedFaceSet527->setSolid(false);
SoIndexedFaceSet527->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet527->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate528 = new SoCoordinate();
SoCoordinate528->setPoint(new float[]{20.19163,0.075,14.25666,20.32575,0.075,14.91464,19.38406,0.075,14.42127,19.51818,0.075,15.07925}, 12);
SoIndexedFaceSet527->setCoord(*SoCoordinate528);

SoShape524->setGeometry(*SoIndexedFaceSet527);

SoNode12->addChild(*SoShape524);

SoShape* SoShape529 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance530 = new SoVRMLAppearance();
SoMaterial* SoMaterial531 = new SoMaterial();
SoMaterial531->setAmbientIntensity(0);
SoMaterial531->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial531->setShininess(0);
SoVRMLAppearance530->addChild(*SoMaterial531);

SoShape529->addChild(*SoVRMLAppearance530);

SoIndexedFaceSet* SoIndexedFaceSet532 = new SoIndexedFaceSet();
SoIndexedFaceSet532->setSolid(false);
SoIndexedFaceSet532->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet532->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate533 = new SoCoordinate();
SoCoordinate533->setPoint(new float[]{19.52141,0.075,12.98182,19.9154,0.075,12.90151,19.65753,0.075,13.6496,20.05152,0.075,13.56929,19.79364,0.075,14.31737,20.18763,0.075,14.23707}, 18);
SoIndexedFaceSet532->setCoord(*SoCoordinate533);

SoShape529->setGeometry(*SoIndexedFaceSet532);

SoNode12->addChild(*SoShape529);

SoShape* SoShape534 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance535 = new SoVRMLAppearance();
SoMaterial* SoMaterial536 = new SoMaterial();
SoMaterial536->setAmbientIntensity(0);
SoMaterial536->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial536->setShininess(0);
SoVRMLAppearance535->addChild(*SoMaterial536);

SoShape534->addChild(*SoVRMLAppearance535);

SoIndexedFaceSet* SoIndexedFaceSet537 = new SoIndexedFaceSet();
SoIndexedFaceSet537->setSolid(false);
SoIndexedFaceSet537->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet537->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate538 = new SoCoordinate();
SoCoordinate538->setPoint(new float[]{19.10783,0.075,13.06612,19.50181,0.075,12.98581,19.38006,0.075,14.40168,19.77405,0.075,14.32137}, 12);
SoIndexedFaceSet537->setCoord(*SoCoordinate538);

SoShape534->setGeometry(*SoIndexedFaceSet537);

SoNode12->addChild(*SoShape534);

SoShape* SoShape539 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance540 = new SoVRMLAppearance();
SoMaterial* SoMaterial541 = new SoMaterial();
SoMaterial541->setAmbientIntensity(0);
SoMaterial541->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial541->setShininess(0);
SoVRMLAppearance540->addChild(*SoMaterial541);

SoShape539->addChild(*SoVRMLAppearance540);

SoIndexedFaceSet* SoIndexedFaceSet542 = new SoIndexedFaceSet();
SoIndexedFaceSet542->setSolid(false);
SoIndexedFaceSet542->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet542->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate543 = new SoCoordinate();
SoCoordinate543->setPoint(new float[]{19.10383,0.075,13.04652,18.96971,0.075,12.38855,19.50762,0.075,12.96422,19.3735,0.075,12.30624,19.9114,0.075,12.88191,19.77728,0.075,12.22393}, 18);
SoIndexedFaceSet542->setCoord(*SoCoordinate543);

SoShape539->setGeometry(*SoIndexedFaceSet542);

SoNode12->addChild(*SoShape539);

SoShape* SoShape544 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance545 = new SoVRMLAppearance();
SoMaterial* SoMaterial546 = new SoMaterial();
SoMaterial546->setAmbientIntensity(0);
SoMaterial546->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial546->setShininess(0);
SoVRMLAppearance545->addChild(*SoMaterial546);

SoShape544->addChild(*SoVRMLAppearance545);

SoIndexedFaceSet* SoIndexedFaceSet547 = new SoIndexedFaceSet();
SoIndexedFaceSet547->setSolid(false);
SoIndexedFaceSet547->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet547->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate548 = new SoCoordinate();
SoCoordinate548->setPoint(new float[]{18.96572,0.075,12.36895,18.8316,0.075,11.71097,19.3695,0.075,12.28664,19.23538,0.075,11.62866,19.77329,0.075,12.20434,19.63917,0.075,11.54636}, 18);
SoIndexedFaceSet547->setCoord(*SoCoordinate548);

SoShape544->setGeometry(*SoIndexedFaceSet547);

SoNode12->addChild(*SoShape544);

SoShape* SoShape549 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance550 = new SoVRMLAppearance();
SoMaterial* SoMaterial551 = new SoMaterial();
SoMaterial551->setAmbientIntensity(0);
SoMaterial551->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial551->setShininess(0);
SoVRMLAppearance550->addChild(*SoMaterial551);

SoShape549->addChild(*SoVRMLAppearance550);

SoIndexedFaceSet* SoIndexedFaceSet552 = new SoIndexedFaceSet();
SoIndexedFaceSet552->setSolid(false);
SoIndexedFaceSet552->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet552->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate553 = new SoCoordinate();
SoCoordinate553->setPoint(new float[]{18.96896,0.075,10.27151,19.36294,0.075,10.1912,19.10507,0.075,10.93929,19.49906,0.075,10.85898,19.24119,0.075,11.60707,19.63518,0.075,11.52676}, 18);
SoIndexedFaceSet552->setCoord(*SoCoordinate553);

SoShape549->setGeometry(*SoIndexedFaceSet552);

SoNode12->addChild(*SoShape549);

SoShape* SoShape554 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance555 = new SoVRMLAppearance();
SoMaterial* SoMaterial556 = new SoMaterial();
SoMaterial556->setAmbientIntensity(0);
SoMaterial556->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial556->setShininess(0);
SoVRMLAppearance555->addChild(*SoMaterial556);

SoShape554->addChild(*SoVRMLAppearance555);

SoIndexedFaceSet* SoIndexedFaceSet557 = new SoIndexedFaceSet();
SoIndexedFaceSet557->setSolid(false);
SoIndexedFaceSet557->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet557->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate558 = new SoCoordinate();
SoCoordinate558->setPoint(new float[]{18.55537,0.075,10.35582,18.75237,0.075,10.31566,18.94936,0.075,10.27551,18.69149,0.075,11.02359,18.88848,0.075,10.98344,19.08548,0.075,10.94328,18.8276,0.075,11.69137,19.0246,0.075,11.65122,19.22159,0.075,11.61106}, 27);
SoIndexedFaceSet557->setCoord(*SoCoordinate558);

SoShape554->setGeometry(*SoIndexedFaceSet557);

SoNode12->addChild(*SoShape554);

SoShape* SoShape559 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance560 = new SoVRMLAppearance();
SoMaterial* SoMaterial561 = new SoMaterial();
SoMaterial561->setAmbientIntensity(0);
SoMaterial561->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial561->setShininess(0);
SoVRMLAppearance560->addChild(*SoMaterial561);

SoShape559->addChild(*SoVRMLAppearance560);

SoIndexedFaceSet* SoIndexedFaceSet562 = new SoIndexedFaceSet();
SoIndexedFaceSet562->setSolid(false);
SoIndexedFaceSet562->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet562->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate563 = new SoCoordinate();
SoCoordinate563->setPoint(new float[]{19.22483,0.075,9.513628,19.29189,0.075,9.842617,19.35895,0.075,10.17161,18.82104,0.075,9.595933,18.8881,0.075,9.924923,18.95516,0.075,10.25391,18.41726,0.075,9.678239,18.48432,0.075,10.00723,18.55138,0.075,10.33622}, 27);
SoIndexedFaceSet562->setCoord(*SoCoordinate563);

SoShape559->setGeometry(*SoIndexedFaceSet562);

SoNode12->addChild(*SoShape559);

SoShape* SoShape564 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance565 = new SoVRMLAppearance();
SoMaterial* SoMaterial566 = new SoMaterial();
SoMaterial566->setAmbientIntensity(0);
SoMaterial566->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial566->setShininess(0);
SoVRMLAppearance565->addChild(*SoMaterial566);

SoShape564->addChild(*SoVRMLAppearance565);

SoIndexedFaceSet* SoIndexedFaceSet567 = new SoIndexedFaceSet();
SoIndexedFaceSet567->setSolid(false);
SoIndexedFaceSet567->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet567->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate568 = new SoCoordinate();
SoCoordinate568->setPoint(new float[]{18.41326,0.075,9.658642,18.27914,0.075,9.000663,19.22083,0.075,9.494031,19.08671,0.075,8.836051}, 12);
SoIndexedFaceSet567->setCoord(*SoCoordinate568);

SoShape564->setGeometry(*SoIndexedFaceSet567);

SoNode12->addChild(*SoShape564);

SoShape* SoShape569 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance570 = new SoVRMLAppearance();
SoMaterial* SoMaterial571 = new SoMaterial();
SoMaterial571->setAmbientIntensity(0);
SoMaterial571->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial571->setShininess(0);
SoVRMLAppearance570->addChild(*SoMaterial571);

SoShape569->addChild(*SoVRMLAppearance570);

SoIndexedFaceSet* SoIndexedFaceSet572 = new SoIndexedFaceSet();
SoIndexedFaceSet572->setSolid(false);
SoIndexedFaceSet572->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet572->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate573 = new SoCoordinate();
SoCoordinate573->setPoint(new float[]{19.08272,0.075,8.816454,18.68873,0.075,8.896763,18.9466,0.075,8.148676,18.55262,0.075,8.228985,18.81049,0.075,7.480898,18.4165,0.075,7.561207}, 18);
SoIndexedFaceSet572->setCoord(*SoCoordinate573);

SoShape569->setGeometry(*SoIndexedFaceSet572);

SoNode12->addChild(*SoShape569);

SoShape* SoShape574 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance575 = new SoVRMLAppearance();
SoMaterial* SoMaterial576 = new SoMaterial();
SoMaterial576->setAmbientIntensity(0);
SoMaterial576->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial576->setShininess(0);
SoVRMLAppearance575->addChild(*SoMaterial576);

SoShape574->addChild(*SoVRMLAppearance575);

SoIndexedFaceSet* SoIndexedFaceSet577 = new SoIndexedFaceSet();
SoIndexedFaceSet577->setSolid(false);
SoIndexedFaceSet577->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet577->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate578 = new SoCoordinate();
SoCoordinate578->setPoint(new float[]{18.00292,0.075,7.64551,18.19991,0.075,7.605356,18.3969,0.075,7.565201,18.13903,0.075,8.313288,18.33603,0.075,8.273133,18.53302,0.075,8.23298,18.27515,0.075,8.981066,18.47214,0.075,8.940911,18.66914,0.075,8.900757}, 27);
SoIndexedFaceSet577->setCoord(*SoCoordinate578);

SoShape574->setGeometry(*SoIndexedFaceSet577);

SoNode12->addChild(*SoShape574);

SoShape* SoShape579 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance580 = new SoVRMLAppearance();
SoMaterial* SoMaterial581 = new SoMaterial();
SoMaterial581->setAmbientIntensity(0);
SoMaterial581->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial581->setShininess(0);
SoVRMLAppearance580->addChild(*SoMaterial581);

SoShape579->addChild(*SoVRMLAppearance580);

SoIndexedFaceSet* SoIndexedFaceSet582 = new SoIndexedFaceSet();
SoIndexedFaceSet582->setSolid(false);
SoIndexedFaceSet582->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet582->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate583 = new SoCoordinate();
SoCoordinate583->setPoint(new float[]{17.99892,0.075,7.625913,17.8648,0.075,6.967933,18.40271,0.075,7.543607,18.26859,0.075,6.885628,18.80649,0.075,7.461301,18.67237,0.075,6.803322}, 18);
SoIndexedFaceSet582->setCoord(*SoCoordinate583);

SoShape579->setGeometry(*SoIndexedFaceSet582);

SoNode12->addChild(*SoShape579);

SoShape* SoShape584 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance585 = new SoVRMLAppearance();
SoMaterial* SoMaterial586 = new SoMaterial();
SoMaterial586->setAmbientIntensity(0);
SoMaterial586->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial586->setShininess(0);
SoVRMLAppearance585->addChild(*SoMaterial586);

SoShape584->addChild(*SoVRMLAppearance585);

SoIndexedFaceSet* SoIndexedFaceSet587 = new SoIndexedFaceSet();
SoIndexedFaceSet587->setSolid(false);
SoIndexedFaceSet587->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet587->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate588 = new SoCoordinate();
SoCoordinate588->setPoint(new float[]{17.86081,0.075,6.948337,17.72669,0.075,6.290357,18.26459,0.075,6.866031,18.13047,0.075,6.208051,18.66838,0.075,6.783725,18.53426,0.075,6.125745}, 18);
SoIndexedFaceSet587->setCoord(*SoCoordinate588);

SoShape584->setGeometry(*SoIndexedFaceSet587);

SoNode12->addChild(*SoShape584);

SoShape* SoShape589 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance590 = new SoVRMLAppearance();
SoMaterial* SoMaterial591 = new SoMaterial();
SoMaterial591->setAmbientIntensity(0);
SoMaterial591->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial591->setShininess(0);
SoVRMLAppearance590->addChild(*SoMaterial591);

SoShape589->addChild(*SoVRMLAppearance590);

SoIndexedFaceSet* SoIndexedFaceSet592 = new SoIndexedFaceSet();
SoIndexedFaceSet592->setSolid(false);
SoIndexedFaceSet592->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet592->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate593 = new SoCoordinate();
SoCoordinate593->setPoint(new float[]{17.86404,0.075,4.850901,18.25803,0.075,4.770593,18.13628,0.075,6.186457,18.53026,0.075,6.106149}, 12);
SoIndexedFaceSet592->setCoord(*SoCoordinate593);

SoShape589->setGeometry(*SoIndexedFaceSet592);

SoNode12->addChild(*SoShape589);

SoShape* SoShape594 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance595 = new SoVRMLAppearance();
SoMaterial* SoMaterial596 = new SoMaterial();
SoMaterial596->setAmbientIntensity(0);
SoMaterial596->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial596->setShininess(0);
SoVRMLAppearance595->addChild(*SoMaterial596);

SoShape594->addChild(*SoVRMLAppearance595);

SoIndexedFaceSet* SoIndexedFaceSet597 = new SoIndexedFaceSet();
SoIndexedFaceSet597->setSolid(false);
SoIndexedFaceSet597->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet597->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate598 = new SoCoordinate();
SoCoordinate598->setPoint(new float[]{17.45046,0.075,4.935204,17.84445,0.075,4.854896,17.72269,0.075,6.27076,18.11668,0.075,6.190452}, 12);
SoIndexedFaceSet597->setCoord(*SoCoordinate598);

SoShape594->setGeometry(*SoIndexedFaceSet597);

SoNode12->addChild(*SoShape594);

SoShape* SoShape599 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance600 = new SoVRMLAppearance();
SoMaterial* SoMaterial601 = new SoMaterial();
SoMaterial601->setAmbientIntensity(0);
SoMaterial601->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial601->setShininess(0);
SoVRMLAppearance600->addChild(*SoMaterial601);

SoShape599->addChild(*SoVRMLAppearance600);

SoIndexedFaceSet* SoIndexedFaceSet602 = new SoIndexedFaceSet();
SoIndexedFaceSet602->setSolid(false);
SoIndexedFaceSet602->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet602->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate603 = new SoCoordinate();
SoCoordinate603->setPoint(new float[]{17.44646,0.075,4.915607,17.31235,0.075,4.257627,17.85025,0.075,4.833302,17.71613,0.075,4.175322,18.25404,0.075,4.750996,18.11992,0.075,4.093016}, 18);
SoIndexedFaceSet602->setCoord(*SoCoordinate603);

SoShape599->setGeometry(*SoIndexedFaceSet602);

SoNode12->addChild(*SoShape599);

SoShape* SoShape604 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance605 = new SoVRMLAppearance();
SoMaterial* SoMaterial606 = new SoMaterial();
SoMaterial606->setAmbientIntensity(0);
SoMaterial606->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial606->setShininess(0);
SoVRMLAppearance605->addChild(*SoMaterial606);

SoShape604->addChild(*SoVRMLAppearance605);

SoIndexedFaceSet* SoIndexedFaceSet607 = new SoIndexedFaceSet();
SoIndexedFaceSet607->setSolid(false);
SoIndexedFaceSet607->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet607->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate608 = new SoCoordinate();
SoCoordinate608->setPoint(new float[]{17.9818,0.075,3.41544,18.11592,0.075,4.073419,17.57802,0.075,3.497746,17.71214,0.075,4.155725,17.17423,0.075,3.580051,17.30835,0.075,4.23803}, 18);
SoIndexedFaceSet607->setCoord(*SoCoordinate608);

SoShape604->setGeometry(*SoIndexedFaceSet607);

SoNode12->addChild(*SoShape604);

SoShape* SoShape609 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance610 = new SoVRMLAppearance();
SoMaterial* SoMaterial611 = new SoMaterial();
SoMaterial611->setAmbientIntensity(0);
SoMaterial611->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial611->setShininess(0);
SoVRMLAppearance610->addChild(*SoMaterial611);

SoShape609->addChild(*SoVRMLAppearance610);

SoIndexedFaceSet* SoIndexedFaceSet612 = new SoIndexedFaceSet();
SoIndexedFaceSet612->setSolid(false);
SoIndexedFaceSet612->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet612->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate613 = new SoCoordinate();
SoCoordinate613->setPoint(new float[]{22.40297,0.075,29.33195,22.53709,0.075,29.98993,21.5954,0.075,29.49656,21.72952,0.075,30.15454}, 12);
SoIndexedFaceSet612->setCoord(*SoCoordinate613);

SoShape609->setGeometry(*SoIndexedFaceSet612);

SoNode12->addChild(*SoShape609);

SoShape* SoShape614 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance615 = new SoVRMLAppearance();
SoMaterial* SoMaterial616 = new SoMaterial();
SoMaterial616->setAmbientIntensity(0);
SoMaterial616->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial616->setShininess(0);
SoVRMLAppearance615->addChild(*SoMaterial616);

SoShape614->addChild(*SoVRMLAppearance615);

SoIndexedFaceSet* SoIndexedFaceSet617 = new SoIndexedFaceSet();
SoIndexedFaceSet617->setSolid(false);
SoIndexedFaceSet617->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet617->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate618 = new SoCoordinate();
SoCoordinate618->setPoint(new float[]{21.73275,0.075,28.05711,22.12674,0.075,27.9768,21.86887,0.075,28.72488,22.26286,0.075,28.64458,22.00498,0.075,29.39266,22.39897,0.075,29.31235}, 18);
SoIndexedFaceSet617->setCoord(*SoCoordinate618);

SoShape614->setGeometry(*SoIndexedFaceSet617);

SoNode12->addChild(*SoShape614);

SoShape* SoShape619 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance620 = new SoVRMLAppearance();
SoMaterial* SoMaterial621 = new SoMaterial();
SoMaterial621->setAmbientIntensity(0);
SoMaterial621->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial621->setShininess(0);
SoVRMLAppearance620->addChild(*SoMaterial621);

SoShape619->addChild(*SoVRMLAppearance620);

SoIndexedFaceSet* SoIndexedFaceSet622 = new SoIndexedFaceSet();
SoIndexedFaceSet622->setSolid(false);
SoIndexedFaceSet622->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet622->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate623 = new SoCoordinate();
SoCoordinate623->setPoint(new float[]{21.98539,0.075,29.39666,21.5914,0.075,29.47696,21.84927,0.075,28.72888,21.45528,0.075,28.80919,21.71315,0.075,28.0611,21.31917,0.075,28.14141}, 18);
SoIndexedFaceSet622->setCoord(*SoCoordinate623);

SoShape619->setGeometry(*SoIndexedFaceSet622);

SoNode12->addChild(*SoShape619);

SoShape* SoShape624 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance625 = new SoVRMLAppearance();
SoMaterial* SoMaterial626 = new SoMaterial();
SoMaterial626->setAmbientIntensity(0);
SoMaterial626->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial626->setShininess(0);
SoVRMLAppearance625->addChild(*SoMaterial626);

SoShape624->addChild(*SoVRMLAppearance625);

SoIndexedFaceSet* SoIndexedFaceSet627 = new SoIndexedFaceSet();
SoIndexedFaceSet627->setSolid(false);
SoIndexedFaceSet627->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet627->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate628 = new SoCoordinate();
SoCoordinate628->setPoint(new float[]{21.98862,0.075,27.29922,22.12274,0.075,27.9572,21.18105,0.075,27.46383,21.31517,0.075,28.12181}, 12);
SoIndexedFaceSet627->setCoord(*SoCoordinate628);

SoShape624->setGeometry(*SoIndexedFaceSet627);

SoNode12->addChild(*SoShape624);

SoShape* SoShape629 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance630 = new SoVRMLAppearance();
SoMaterial* SoMaterial631 = new SoMaterial();
SoMaterial631->setAmbientIntensity(0);
SoMaterial631->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial631->setShininess(0);
SoVRMLAppearance630->addChild(*SoMaterial631);

SoShape629->addChild(*SoVRMLAppearance630);

SoIndexedFaceSet* SoIndexedFaceSet632 = new SoIndexedFaceSet();
SoIndexedFaceSet632->setSolid(false);
SoIndexedFaceSet632->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet632->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate633 = new SoCoordinate();
SoCoordinate633->setPoint(new float[]{21.17706,0.075,27.44423,21.04294,0.075,26.78626,21.58084,0.075,27.36193,21.44672,0.075,26.70395,21.98463,0.075,27.27962,21.85051,0.075,26.62164}, 18);
SoIndexedFaceSet632->setCoord(*SoCoordinate633);

SoShape629->setGeometry(*SoIndexedFaceSet632);

SoNode12->addChild(*SoShape629);

SoShape* SoShape634 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance635 = new SoVRMLAppearance();
SoMaterial* SoMaterial636 = new SoMaterial();
SoMaterial636->setAmbientIntensity(0);
SoMaterial636->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial636->setShininess(0);
SoVRMLAppearance635->addChild(*SoMaterial636);

SoShape634->addChild(*SoVRMLAppearance635);

SoIndexedFaceSet* SoIndexedFaceSet637 = new SoIndexedFaceSet();
SoIndexedFaceSet637->setSolid(false);
SoIndexedFaceSet637->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet637->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate638 = new SoCoordinate();
SoCoordinate638->setPoint(new float[]{21.1803,0.075,25.3468,21.57428,0.075,25.26649,21.45253,0.075,26.68236,21.84652,0.075,26.60205}, 12);
SoIndexedFaceSet637->setCoord(*SoCoordinate638);

SoShape634->setGeometry(*SoIndexedFaceSet637);

SoNode12->addChild(*SoShape634);

SoShape* SoShape639 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance640 = new SoVRMLAppearance();
SoMaterial* SoMaterial641 = new SoMaterial();
SoMaterial641->setAmbientIntensity(0);
SoMaterial641->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial641->setShininess(0);
SoVRMLAppearance640->addChild(*SoMaterial641);

SoShape639->addChild(*SoVRMLAppearance640);

SoIndexedFaceSet* SoIndexedFaceSet642 = new SoIndexedFaceSet();
SoIndexedFaceSet642->setSolid(false);
SoIndexedFaceSet642->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet642->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate643 = new SoCoordinate();
SoCoordinate643->setPoint(new float[]{21.43293,0.075,26.68635,21.23594,0.075,26.72651,21.03894,0.075,26.76666,21.29682,0.075,26.01857,21.09982,0.075,26.05873,20.90283,0.075,26.09888,21.1607,0.075,25.35079,20.96371,0.075,25.39095,20.76671,0.075,25.4311}, 27);
SoIndexedFaceSet642->setCoord(*SoCoordinate643);

SoShape639->setGeometry(*SoIndexedFaceSet642);

SoNode12->addChild(*SoShape639);

SoShape* SoShape644 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance645 = new SoVRMLAppearance();
SoMaterial* SoMaterial646 = new SoMaterial();
SoMaterial646->setAmbientIntensity(0);
SoMaterial646->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial646->setShininess(0);
SoVRMLAppearance645->addChild(*SoMaterial646);

SoShape644->addChild(*SoVRMLAppearance645);

SoIndexedFaceSet* SoIndexedFaceSet647 = new SoIndexedFaceSet();
SoIndexedFaceSet647->setSolid(false);
SoIndexedFaceSet647->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet647->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate648 = new SoCoordinate();
SoCoordinate648->setPoint(new float[]{21.43617,0.075,24.58891,21.57029,0.075,25.24689,20.6286,0.075,24.75353,20.76272,0.075,25.41151}, 12);
SoIndexedFaceSet647->setCoord(*SoCoordinate648);

SoShape644->setGeometry(*SoIndexedFaceSet647);

SoNode12->addChild(*SoShape644);

SoShape* SoShape649 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance650 = new SoVRMLAppearance();
SoMaterial* SoMaterial651 = new SoMaterial();
SoMaterial651->setAmbientIntensity(0);
SoMaterial651->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial651->setShininess(0);
SoVRMLAppearance650->addChild(*SoMaterial651);

SoShape649->addChild(*SoVRMLAppearance650);

SoIndexedFaceSet* SoIndexedFaceSet652 = new SoIndexedFaceSet();
SoIndexedFaceSet652->setSolid(false);
SoIndexedFaceSet652->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet652->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate653 = new SoCoordinate();
SoCoordinate653->setPoint(new float[]{20.6246,0.075,24.73393,20.49048,0.075,24.07595,21.43217,0.075,24.56932,21.29805,0.075,23.91134}, 12);
SoIndexedFaceSet652->setCoord(*SoCoordinate653);

SoShape649->setGeometry(*SoIndexedFaceSet652);

SoNode12->addChild(*SoShape649);

SoShape* SoShape654 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance655 = new SoVRMLAppearance();
SoMaterial* SoMaterial656 = new SoMaterial();
SoMaterial656->setAmbientIntensity(0);
SoMaterial656->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial656->setShininess(0);
SoVRMLAppearance655->addChild(*SoMaterial656);

SoShape654->addChild(*SoVRMLAppearance655);

SoIndexedFaceSet* SoIndexedFaceSet657 = new SoIndexedFaceSet();
SoIndexedFaceSet657->setSolid(false);
SoIndexedFaceSet657->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet657->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate658 = new SoCoordinate();
SoCoordinate658->setPoint(new float[]{20.62784,0.075,22.63649,21.02183,0.075,22.55619,20.76396,0.075,23.30427,21.15794,0.075,23.22396,20.90007,0.075,23.97205,21.29406,0.075,23.89174}, 18);
SoIndexedFaceSet657->setCoord(*SoCoordinate658);

SoShape654->setGeometry(*SoIndexedFaceSet657);

SoNode12->addChild(*SoShape654);

SoShape* SoShape659 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance660 = new SoVRMLAppearance();
SoMaterial* SoMaterial661 = new SoMaterial();
SoMaterial661->setAmbientIntensity(0);
SoMaterial661->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial661->setShininess(0);
SoVRMLAppearance660->addChild(*SoMaterial661);

SoShape659->addChild(*SoVRMLAppearance660);

SoIndexedFaceSet* SoIndexedFaceSet662 = new SoIndexedFaceSet();
SoIndexedFaceSet662->setSolid(false);
SoIndexedFaceSet662->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet662->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate663 = new SoCoordinate();
SoCoordinate663->setPoint(new float[]{20.21426,0.075,22.7208,20.41125,0.075,22.68064,20.60824,0.075,22.64049,20.35037,0.075,23.38857,20.54737,0.075,23.34842,20.74436,0.075,23.30827,20.48649,0.075,24.05635,20.68348,0.075,24.0162,20.88048,0.075,23.97605}, 27);
SoIndexedFaceSet662->setCoord(*SoCoordinate663);

SoShape659->setGeometry(*SoIndexedFaceSet662);

SoNode12->addChild(*SoShape659);

SoShape* SoShape664 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance665 = new SoVRMLAppearance();
SoMaterial* SoMaterial666 = new SoMaterial();
SoMaterial666->setAmbientIntensity(0);
SoMaterial666->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial666->setShininess(0);
SoVRMLAppearance665->addChild(*SoMaterial666);

SoShape664->addChild(*SoVRMLAppearance665);

SoIndexedFaceSet* SoIndexedFaceSet667 = new SoIndexedFaceSet();
SoIndexedFaceSet667->setSolid(false);
SoIndexedFaceSet667->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet667->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate668 = new SoCoordinate();
SoCoordinate668->setPoint(new float[]{20.21026,0.075,22.7012,20.07614,0.075,22.04322,21.01783,0.075,22.53659,20.88371,0.075,21.87861}, 12);
SoIndexedFaceSet667->setCoord(*SoCoordinate668);

SoShape664->setGeometry(*SoIndexedFaceSet667);

SoNode12->addChild(*SoShape664);

SoShape* SoShape669 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance670 = new SoVRMLAppearance();
SoMaterial* SoMaterial671 = new SoMaterial();
SoMaterial671->setAmbientIntensity(0);
SoMaterial671->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial671->setShininess(0);
SoVRMLAppearance670->addChild(*SoMaterial671);

SoShape669->addChild(*SoVRMLAppearance670);

SoIndexedFaceSet* SoIndexedFaceSet672 = new SoIndexedFaceSet();
SoIndexedFaceSet672->setSolid(false);
SoIndexedFaceSet672->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet672->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate673 = new SoCoordinate();
SoCoordinate673->setPoint(new float[]{20.07215,0.075,22.02362,19.93803,0.075,21.36564,20.87972,0.075,21.85901,20.7456,0.075,21.20103}, 12);
SoIndexedFaceSet672->setCoord(*SoCoordinate673);

SoShape669->setGeometry(*SoIndexedFaceSet672);

SoNode12->addChild(*SoShape669);

SoShape* SoShape674 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance675 = new SoVRMLAppearance();
SoMaterial* SoMaterial676 = new SoMaterial();
SoMaterial676->setAmbientIntensity(0);
SoMaterial676->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial676->setShininess(0);
SoVRMLAppearance675->addChild(*SoMaterial676);

SoShape674->addChild(*SoVRMLAppearance675);

SoIndexedFaceSet* SoIndexedFaceSet677 = new SoIndexedFaceSet();
SoIndexedFaceSet677->setSolid(false);
SoIndexedFaceSet677->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet677->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate678 = new SoCoordinate();
SoCoordinate678->setPoint(new float[]{20.07538,0.075,19.92619,20.27238,0.075,19.88603,20.46937,0.075,19.84588,20.2115,0.075,20.59397,20.40849,0.075,20.55381,20.60549,0.075,20.51366,20.34762,0.075,21.26174,20.54461,0.075,21.22159,20.7416,0.075,21.18144}, 27);
SoIndexedFaceSet677->setCoord(*SoCoordinate678);

SoShape674->setGeometry(*SoIndexedFaceSet677);

SoNode12->addChild(*SoShape674);

SoShape* SoShape679 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance680 = new SoVRMLAppearance();
SoMaterial* SoMaterial681 = new SoMaterial();
SoMaterial681->setAmbientIntensity(0);
SoMaterial681->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial681->setShininess(0);
SoVRMLAppearance680->addChild(*SoMaterial681);

SoShape679->addChild(*SoVRMLAppearance680);

SoIndexedFaceSet* SoIndexedFaceSet682 = new SoIndexedFaceSet();
SoIndexedFaceSet682->setSolid(false);
SoIndexedFaceSet682->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet682->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate683 = new SoCoordinate();
SoCoordinate683->setPoint(new float[]{19.6618,0.075,20.01049,19.85879,0.075,19.97034,20.05579,0.075,19.93018,19.79792,0.075,20.67827,19.99491,0.075,20.63811,20.1919,0.075,20.59796,19.93403,0.075,21.34605,20.13103,0.075,21.30589,20.32802,0.075,21.26574}, 27);
SoIndexedFaceSet682->setCoord(*SoCoordinate683);

SoShape679->setGeometry(*SoIndexedFaceSet682);

SoNode12->addChild(*SoShape679);

SoShape* SoShape684 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance685 = new SoVRMLAppearance();
SoMaterial* SoMaterial686 = new SoMaterial();
SoMaterial686->setAmbientIntensity(0);
SoMaterial686->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial686->setShininess(0);
SoVRMLAppearance685->addChild(*SoMaterial686);

SoShape684->addChild(*SoVRMLAppearance685);

SoIndexedFaceSet* SoIndexedFaceSet687 = new SoIndexedFaceSet();
SoIndexedFaceSet687->setSolid(false);
SoIndexedFaceSet687->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet687->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate688 = new SoCoordinate();
SoCoordinate688->setPoint(new float[]{19.6578,0.075,19.99089,19.52369,0.075,19.33291,20.46538,0.075,19.82628,20.33126,0.075,19.1683}, 12);
SoIndexedFaceSet687->setCoord(*SoCoordinate688);

SoShape684->setGeometry(*SoIndexedFaceSet687);

SoNode12->addChild(*SoShape684);

SoShape* SoShape689 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance690 = new SoVRMLAppearance();
SoMaterial* SoMaterial691 = new SoMaterial();
SoMaterial691->setAmbientIntensity(0);
SoMaterial691->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial691->setShininess(0);
SoVRMLAppearance690->addChild(*SoMaterial691);

SoShape689->addChild(*SoVRMLAppearance690);

SoIndexedFaceSet* SoIndexedFaceSet692 = new SoIndexedFaceSet();
SoIndexedFaceSet692->setSolid(false);
SoIndexedFaceSet692->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet692->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate693 = new SoCoordinate();
SoCoordinate693->setPoint(new float[]{19.51969,0.075,19.31332,19.38557,0.075,18.65534,19.92348,0.075,19.23101,19.78936,0.075,18.57303,20.32726,0.075,19.14871,20.19314,0.075,18.49073}, 18);
SoIndexedFaceSet692->setCoord(*SoCoordinate693);

SoShape689->setGeometry(*SoIndexedFaceSet692);

SoNode12->addChild(*SoShape689);

SoShape* SoShape694 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance695 = new SoVRMLAppearance();
SoMaterial* SoMaterial696 = new SoMaterial();
SoMaterial696->setAmbientIntensity(0);
SoMaterial696->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial696->setShininess(0);
SoVRMLAppearance695->addChild(*SoMaterial696);

SoShape694->addChild(*SoVRMLAppearance695);

SoIndexedFaceSet* SoIndexedFaceSet697 = new SoIndexedFaceSet();
SoIndexedFaceSet697->setSolid(false);
SoIndexedFaceSet697->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet697->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate698 = new SoCoordinate();
SoCoordinate698->setPoint(new float[]{19.52293,0.075,17.21588,19.91691,0.075,17.13557,19.79516,0.075,18.55144,20.18915,0.075,18.47113}, 12);
SoIndexedFaceSet697->setCoord(*SoCoordinate698);

SoShape694->setGeometry(*SoIndexedFaceSet697);

SoNode12->addChild(*SoShape694);

SoShape* SoShape699 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance700 = new SoVRMLAppearance();
SoMaterial* SoMaterial701 = new SoMaterial();
SoMaterial701->setAmbientIntensity(0);
SoMaterial701->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial701->setShininess(0);
SoVRMLAppearance700->addChild(*SoMaterial701);

SoShape699->addChild(*SoVRMLAppearance700);

SoIndexedFaceSet* SoIndexedFaceSet702 = new SoIndexedFaceSet();
SoIndexedFaceSet702->setSolid(false);
SoIndexedFaceSet702->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet702->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate703 = new SoCoordinate();
SoCoordinate703->setPoint(new float[]{19.10934,0.075,17.30019,19.30634,0.075,17.26003,19.50333,0.075,17.21988,19.24546,0.075,17.96796,19.44245,0.075,17.92781,19.63945,0.075,17.88766,19.38158,0.075,18.63574,19.57857,0.075,18.59559,19.77556,0.075,18.55543}, 27);
SoIndexedFaceSet702->setCoord(*SoCoordinate703);

SoShape699->setGeometry(*SoIndexedFaceSet702);

SoNode12->addChild(*SoShape699);

SoShape* SoShape704 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance705 = new SoVRMLAppearance();
SoMaterial* SoMaterial706 = new SoMaterial();
SoMaterial706->setAmbientIntensity(0);
SoMaterial706->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial706->setShininess(0);
SoVRMLAppearance705->addChild(*SoMaterial706);

SoShape704->addChild(*SoVRMLAppearance705);

SoIndexedFaceSet* SoIndexedFaceSet707 = new SoIndexedFaceSet();
SoIndexedFaceSet707->setSolid(false);
SoIndexedFaceSet707->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet707->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate708 = new SoCoordinate();
SoCoordinate708->setPoint(new float[]{19.10535,0.075,17.28059,18.97123,0.075,16.62261,19.91292,0.075,17.11598,19.7788,0.075,16.458}, 12);
SoIndexedFaceSet707->setCoord(*SoCoordinate708);

SoShape704->setGeometry(*SoIndexedFaceSet707);

SoNode12->addChild(*SoShape704);

SoShape* SoShape709 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance710 = new SoVRMLAppearance();
SoMaterial* SoMaterial711 = new SoMaterial();
SoMaterial711->setAmbientIntensity(0);
SoMaterial711->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial711->setShininess(0);
SoVRMLAppearance710->addChild(*SoMaterial711);

SoShape709->addChild(*SoVRMLAppearance710);

SoIndexedFaceSet* SoIndexedFaceSet712 = new SoIndexedFaceSet();
SoIndexedFaceSet712->setSolid(false);
SoIndexedFaceSet712->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet712->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate713 = new SoCoordinate();
SoCoordinate713->setPoint(new float[]{19.64069,0.075,15.78042,19.77481,0.075,16.4384,19.2369,0.075,15.86273,19.37102,0.075,16.52071,18.83311,0.075,15.94503,18.96724,0.075,16.60301}, 18);
SoIndexedFaceSet712->setCoord(*SoCoordinate713);

SoShape709->setGeometry(*SoIndexedFaceSet712);

SoNode12->addChild(*SoShape709);

SoShape* SoShape714 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance715 = new SoVRMLAppearance();
SoMaterial* SoMaterial716 = new SoMaterial();
SoMaterial716->setAmbientIntensity(0);
SoMaterial716->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial716->setShininess(0);
SoVRMLAppearance715->addChild(*SoMaterial716);

SoShape714->addChild(*SoVRMLAppearance715);

SoIndexedFaceSet* SoIndexedFaceSet717 = new SoIndexedFaceSet();
SoIndexedFaceSet717->setSolid(false);
SoIndexedFaceSet717->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet717->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate718 = new SoCoordinate();
SoCoordinate718->setPoint(new float[]{19.63669,0.075,15.76082,19.2427,0.075,15.84113,19.36446,0.075,14.42527,18.97047,0.075,14.50558}, 12);
SoIndexedFaceSet717->setCoord(*SoCoordinate718);

SoShape714->setGeometry(*SoIndexedFaceSet717);

SoNode12->addChild(*SoShape714);

SoShape* SoShape719 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance720 = new SoVRMLAppearance();
SoMaterial* SoMaterial721 = new SoMaterial();
SoMaterial721->setAmbientIntensity(0);
SoMaterial721->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial721->setShininess(0);
SoVRMLAppearance720->addChild(*SoMaterial721);

SoShape719->addChild(*SoVRMLAppearance720);

SoIndexedFaceSet* SoIndexedFaceSet722 = new SoIndexedFaceSet();
SoIndexedFaceSet722->setSolid(false);
SoIndexedFaceSet722->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet722->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate723 = new SoCoordinate();
SoCoordinate723->setPoint(new float[]{18.55689,0.075,14.58988,18.75388,0.075,14.54973,18.95087,0.075,14.50957,18.693,0.075,15.25766,18.89,0.075,15.2175,19.08699,0.075,15.17735,18.82912,0.075,15.92544,19.02611,0.075,15.88528,19.22311,0.075,15.84513}, 27);
SoIndexedFaceSet722->setCoord(*SoCoordinate723);

SoShape719->setGeometry(*SoIndexedFaceSet722);

SoNode12->addChild(*SoShape719);

SoShape* SoShape724 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance725 = new SoVRMLAppearance();
SoMaterial* SoMaterial726 = new SoMaterial();
SoMaterial726->setAmbientIntensity(0);
SoMaterial726->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial726->setShininess(0);
SoVRMLAppearance725->addChild(*SoMaterial726);

SoShape724->addChild(*SoVRMLAppearance725);

SoIndexedFaceSet* SoIndexedFaceSet727 = new SoIndexedFaceSet();
SoIndexedFaceSet727->setSolid(false);
SoIndexedFaceSet727->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet727->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate728 = new SoCoordinate();
SoCoordinate728->setPoint(new float[]{18.55289,0.075,14.57028,18.41877,0.075,13.9123,18.95668,0.075,14.48798,18.82256,0.075,13.83,19.36046,0.075,14.40567,19.22635,0.075,13.74769}, 18);
SoIndexedFaceSet727->setCoord(*SoCoordinate728);

SoShape724->setGeometry(*SoIndexedFaceSet727);

SoNode12->addChild(*SoShape724);

SoShape* SoShape729 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance730 = new SoVRMLAppearance();
SoMaterial* SoMaterial731 = new SoMaterial();
SoMaterial731->setAmbientIntensity(0);
SoMaterial731->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial731->setShininess(0);
SoVRMLAppearance730->addChild(*SoMaterial731);

SoShape729->addChild(*SoVRMLAppearance730);

SoIndexedFaceSet* SoIndexedFaceSet732 = new SoIndexedFaceSet();
SoIndexedFaceSet732->setSolid(false);
SoIndexedFaceSet732->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet732->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate733 = new SoCoordinate();
SoCoordinate733->setPoint(new float[]{19.08823,0.075,13.07012,19.22235,0.075,13.7281,18.68444,0.075,13.15242,18.81856,0.075,13.8104,18.28066,0.075,13.23473,18.41478,0.075,13.89271}, 18);
SoIndexedFaceSet732->setCoord(*SoCoordinate733);

SoShape729->setGeometry(*SoIndexedFaceSet732);

SoNode12->addChild(*SoShape729);

SoShape* SoShape734 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance735 = new SoVRMLAppearance();
SoMaterial* SoMaterial736 = new SoMaterial();
SoMaterial736->setAmbientIntensity(0);
SoMaterial736->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial736->setShininess(0);
SoVRMLAppearance735->addChild(*SoMaterial736);

SoShape734->addChild(*SoVRMLAppearance735);

SoIndexedFaceSet* SoIndexedFaceSet737 = new SoIndexedFaceSet();
SoIndexedFaceSet737->setSolid(false);
SoIndexedFaceSet737->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet737->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate738 = new SoCoordinate();
SoCoordinate738->setPoint(new float[]{19.08424,0.075,13.05052,18.69025,0.075,13.13083,18.812,0.075,11.71496,18.41801,0.075,11.79527}, 12);
SoIndexedFaceSet737->setCoord(*SoCoordinate738);

SoShape734->setGeometry(*SoIndexedFaceSet737);

SoNode12->addChild(*SoShape734);

SoShape* SoShape739 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance740 = new SoVRMLAppearance();
SoMaterial* SoMaterial741 = new SoMaterial();
SoMaterial741->setAmbientIntensity(0);
SoMaterial741->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial741->setShininess(0);
SoVRMLAppearance740->addChild(*SoMaterial741);

SoShape739->addChild(*SoVRMLAppearance740);

SoIndexedFaceSet* SoIndexedFaceSet742 = new SoIndexedFaceSet();
SoIndexedFaceSet742->setSolid(false);
SoIndexedFaceSet742->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet742->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate743 = new SoCoordinate();
SoCoordinate743->setPoint(new float[]{18.00443,0.075,11.87957,18.20143,0.075,11.83942,18.39842,0.075,11.79927,18.14055,0.075,12.54735,18.33754,0.075,12.5072,18.53453,0.075,12.46704,18.27666,0.075,13.21513,18.47366,0.075,13.17498,18.67065,0.075,13.13482}, 27);
SoIndexedFaceSet742->setCoord(*SoCoordinate743);

SoShape739->setGeometry(*SoIndexedFaceSet742);

SoNode12->addChild(*SoShape739);

SoShape* SoShape744 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance745 = new SoVRMLAppearance();
SoMaterial* SoMaterial746 = new SoMaterial();
SoMaterial746->setAmbientIntensity(0);
SoMaterial746->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial746->setShininess(0);
SoVRMLAppearance745->addChild(*SoMaterial746);

SoShape744->addChild(*SoVRMLAppearance745);

SoIndexedFaceSet* SoIndexedFaceSet747 = new SoIndexedFaceSet();
SoIndexedFaceSet747->setSolid(false);
SoIndexedFaceSet747->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet747->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate748 = new SoCoordinate();
SoCoordinate748->setPoint(new float[]{18.00044,0.075,11.85998,17.86632,0.075,11.202,18.80801,0.075,11.69537,18.67389,0.075,11.03739}, 12);
SoIndexedFaceSet747->setCoord(*SoCoordinate748);

SoShape744->setGeometry(*SoIndexedFaceSet747);

SoNode12->addChild(*SoShape744);

SoShape* SoShape749 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance750 = new SoVRMLAppearance();
SoMaterial* SoMaterial751 = new SoMaterial();
SoMaterial751->setAmbientIntensity(0);
SoMaterial751->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial751->setShininess(0);
SoVRMLAppearance750->addChild(*SoMaterial751);

SoShape749->addChild(*SoVRMLAppearance750);

SoIndexedFaceSet* SoIndexedFaceSet752 = new SoIndexedFaceSet();
SoIndexedFaceSet752->setSolid(false);
SoIndexedFaceSet752->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoIndexedFaceSet752->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoCoordinate* SoCoordinate753 = new SoCoordinate();
SoCoordinate753->setPoint(new float[]{17.86232,0.075,11.1824,17.79526,0.075,10.85341,17.7282,0.075,10.52442,18.66989,0.075,11.01779,18.60283,0.075,10.6888,18.53577,0.075,10.35981}, 18);
SoIndexedFaceSet752->setCoord(*SoCoordinate753);

SoShape749->setGeometry(*SoIndexedFaceSet752);

SoNode12->addChild(*SoShape749);

SoShape* SoShape754 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance755 = new SoVRMLAppearance();
SoMaterial* SoMaterial756 = new SoMaterial();
SoMaterial756->setAmbientIntensity(0);
SoMaterial756->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial756->setShininess(0);
SoVRMLAppearance755->addChild(*SoMaterial756);

SoShape754->addChild(*SoVRMLAppearance755);

SoIndexedFaceSet* SoIndexedFaceSet757 = new SoIndexedFaceSet();
SoIndexedFaceSet757->setSolid(false);
SoIndexedFaceSet757->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet757->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate758 = new SoCoordinate();
SoCoordinate758->setPoint(new float[]{17.86556,0.075,9.084966,18.25955,0.075,9.004658,18.13779,0.075,10.42052,18.53178,0.075,10.34021}, 12);
SoIndexedFaceSet757->setCoord(*SoCoordinate758);

SoShape754->setGeometry(*SoIndexedFaceSet757);

SoNode12->addChild(*SoShape754);

SoShape* SoShape759 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance760 = new SoVRMLAppearance();
SoMaterial* SoMaterial761 = new SoMaterial();
SoMaterial761->setAmbientIntensity(0);
SoMaterial761->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial761->setShininess(0);
SoVRMLAppearance760->addChild(*SoMaterial761);

SoShape759->addChild(*SoVRMLAppearance760);

SoIndexedFaceSet* SoIndexedFaceSet762 = new SoIndexedFaceSet();
SoIndexedFaceSet762->setSolid(false);
SoIndexedFaceSet762->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet762->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate763 = new SoCoordinate();
SoCoordinate763->setPoint(new float[]{18.1182,0.075,10.42452,17.9212,0.075,10.46467,17.72421,0.075,10.50482,17.98208,0.075,9.756739,17.78509,0.075,9.796892,17.58809,0.075,9.837047,17.84596,0.075,9.088961,17.64897,0.075,9.129114,17.45197,0.075,9.169269}, 27);
SoIndexedFaceSet762->setCoord(*SoCoordinate763);

SoShape759->setGeometry(*SoIndexedFaceSet762);

SoNode12->addChild(*SoShape759);

SoShape* SoShape764 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance765 = new SoVRMLAppearance();
SoMaterial* SoMaterial766 = new SoMaterial();
SoMaterial766->setAmbientIntensity(0);
SoMaterial766->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial766->setShininess(0);
SoVRMLAppearance765->addChild(*SoMaterial766);

SoShape764->addChild(*SoVRMLAppearance765);

SoIndexedFaceSet* SoIndexedFaceSet767 = new SoIndexedFaceSet();
SoIndexedFaceSet767->setSolid(false);
SoIndexedFaceSet767->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet767->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate768 = new SoCoordinate();
SoCoordinate768->setPoint(new float[]{18.12143,0.075,8.327081,18.25555,0.075,8.985061,17.31386,0.075,8.491693,17.44798,0.075,9.149672}, 12);
SoIndexedFaceSet767->setCoord(*SoCoordinate768);

SoShape764->setGeometry(*SoIndexedFaceSet767);

SoNode12->addChild(*SoShape764);

SoShape* SoShape769 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance770 = new SoVRMLAppearance();
SoMaterial* SoMaterial771 = new SoMaterial();
SoMaterial771->setAmbientIntensity(0);
SoMaterial771->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial771->setShininess(0);
SoVRMLAppearance770->addChild(*SoMaterial771);

SoShape769->addChild(*SoVRMLAppearance770);

SoIndexedFaceSet* SoIndexedFaceSet772 = new SoIndexedFaceSet();
SoIndexedFaceSet772->setSolid(false);
SoIndexedFaceSet772->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet772->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate773 = new SoCoordinate();
SoCoordinate773->setPoint(new float[]{17.30987,0.075,8.472095,17.24281,0.075,8.143106,17.17575,0.075,7.814116,17.71365,0.075,8.38979,17.64659,0.075,8.0608,17.57953,0.075,7.73181,18.11744,0.075,8.307484,18.05038,0.075,7.978494,17.98332,0.075,7.649504}, 27);
SoIndexedFaceSet772->setCoord(*SoCoordinate773);

SoShape769->setGeometry(*SoIndexedFaceSet772);

SoNode12->addChild(*SoShape769);

SoShape* SoShape774 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance775 = new SoVRMLAppearance();
SoMaterial* SoMaterial776 = new SoMaterial();
SoMaterial776->setAmbientIntensity(0);
SoMaterial776->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial776->setShininess(0);
SoVRMLAppearance775->addChild(*SoMaterial776);

SoShape774->addChild(*SoVRMLAppearance775);

SoIndexedFaceSet* SoIndexedFaceSet777 = new SoIndexedFaceSet();
SoIndexedFaceSet777->setSolid(false);
SoIndexedFaceSet777->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet777->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate778 = new SoCoordinate();
SoCoordinate778->setPoint(new float[]{17.3131,0.075,6.37466,17.5101,0.075,6.334506,17.70709,0.075,6.294352,17.44922,0.075,7.042438,17.64621,0.075,7.002284,17.84321,0.075,6.96213,17.58534,0.075,7.710216,17.78233,0.075,7.670062,17.97932,0.075,7.629908}, 27);
SoIndexedFaceSet777->setCoord(*SoCoordinate778);

SoShape774->setGeometry(*SoIndexedFaceSet777);

SoNode12->addChild(*SoShape774);

SoShape* SoShape779 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance780 = new SoVRMLAppearance();
SoMaterial* SoMaterial781 = new SoMaterial();
SoMaterial781->setAmbientIntensity(0);
SoMaterial781->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial781->setShininess(0);
SoVRMLAppearance780->addChild(*SoMaterial781);

SoShape779->addChild(*SoVRMLAppearance780);

SoIndexedFaceSet* SoIndexedFaceSet782 = new SoIndexedFaceSet();
SoIndexedFaceSet782->setSolid(false);
SoIndexedFaceSet782->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet782->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate783 = new SoCoordinate();
SoCoordinate783->setPoint(new float[]{16.89952,0.075,6.458963,17.29351,0.075,6.378654,17.17175,0.075,7.794519,17.56574,0.075,7.714211}, 12);
SoIndexedFaceSet782->setCoord(*SoCoordinate783);

SoShape779->setGeometry(*SoIndexedFaceSet782);

SoNode12->addChild(*SoShape779);

SoShape* SoShape784 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance785 = new SoVRMLAppearance();
SoMaterial* SoMaterial786 = new SoMaterial();
SoMaterial786->setAmbientIntensity(0);
SoMaterial786->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial786->setShininess(0);
SoVRMLAppearance785->addChild(*SoMaterial786);

SoShape784->addChild(*SoVRMLAppearance785);

SoIndexedFaceSet* SoIndexedFaceSet787 = new SoIndexedFaceSet();
SoIndexedFaceSet787->setSolid(false);
SoIndexedFaceSet787->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet787->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate788 = new SoCoordinate();
SoCoordinate788->setPoint(new float[]{16.89552,0.075,6.439366,16.76141,0.075,5.781386,17.29931,0.075,6.35706,17.16519,0.075,5.699081,17.7031,0.075,6.274755,17.56898,0.075,5.616775}, 18);
SoIndexedFaceSet787->setCoord(*SoCoordinate788);

SoShape784->setGeometry(*SoIndexedFaceSet787);

SoNode12->addChild(*SoShape784);

SoShape* SoShape789 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance790 = new SoVRMLAppearance();
SoMaterial* SoMaterial791 = new SoMaterial();
SoMaterial791->setAmbientIntensity(0);
SoMaterial791->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial791->setShininess(0);
SoVRMLAppearance790->addChild(*SoMaterial791);

SoShape789->addChild(*SoVRMLAppearance790);

SoIndexedFaceSet* SoIndexedFaceSet792 = new SoIndexedFaceSet();
SoIndexedFaceSet792->setSolid(false);
SoIndexedFaceSet792->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet792->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate793 = new SoCoordinate();
SoCoordinate793->setPoint(new float[]{16.75741,0.075,5.761789,16.62329,0.075,5.10381,17.1612,0.075,5.679484,17.02708,0.075,5.021504,17.56498,0.075,5.597178,17.43086,0.075,4.939198}, 18);
SoIndexedFaceSet792->setCoord(*SoCoordinate793);

SoShape789->setGeometry(*SoIndexedFaceSet792);

SoNode12->addChild(*SoShape789);

SoShape* SoShape794 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance795 = new SoVRMLAppearance();
SoMaterial* SoMaterial796 = new SoMaterial();
SoMaterial796->setAmbientIntensity(0);
SoMaterial796->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial796->setShininess(0);
SoVRMLAppearance795->addChild(*SoMaterial796);

SoShape794->addChild(*SoVRMLAppearance795);

SoIndexedFaceSet* SoIndexedFaceSet797 = new SoIndexedFaceSet();
SoIndexedFaceSet797->setSolid(false);
SoIndexedFaceSet797->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet797->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate798 = new SoCoordinate();
SoCoordinate798->setPoint(new float[]{17.42687,0.075,4.919601,17.03288,0.075,4.99991,17.29075,0.075,4.251824,16.89676,0.075,4.332132,17.15463,0.075,3.584046,16.76065,0.075,3.664354}, 18);
SoIndexedFaceSet797->setCoord(*SoCoordinate798);

SoShape794->setGeometry(*SoIndexedFaceSet797);

SoNode12->addChild(*SoShape794);

SoShape* SoShape799 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance800 = new SoVRMLAppearance();
SoMaterial* SoMaterial801 = new SoMaterial();
SoMaterial801->setAmbientIntensity(0);
SoMaterial801->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial801->setShininess(0);
SoVRMLAppearance800->addChild(*SoMaterial801);

SoShape799->addChild(*SoVRMLAppearance800);

SoIndexedFaceSet* SoIndexedFaceSet802 = new SoIndexedFaceSet();
SoIndexedFaceSet802->setSolid(false);
SoIndexedFaceSet802->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet802->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate803 = new SoCoordinate();
SoCoordinate803->setPoint(new float[]{16.34706,0.075,3.748657,16.74105,0.075,3.668349,16.6193,0.075,5.084213,17.01328,0.075,5.003905}, 12);
SoIndexedFaceSet802->setCoord(*SoCoordinate803);

SoShape799->setGeometry(*SoIndexedFaceSet802);

SoNode12->addChild(*SoShape799);

SoShape* SoShape804 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance805 = new SoVRMLAppearance();
SoMaterial* SoMaterial806 = new SoMaterial();
SoMaterial806->setAmbientIntensity(0);
SoMaterial806->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial806->setShininess(0);
SoVRMLAppearance805->addChild(*SoMaterial806);

SoShape804->addChild(*SoVRMLAppearance805);

SoIndexedFaceSet* SoIndexedFaceSet807 = new SoIndexedFaceSet();
SoIndexedFaceSet807->setSolid(false);
SoIndexedFaceSet807->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet807->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate808 = new SoCoordinate();
SoCoordinate808->setPoint(new float[]{16.34307,0.075,3.72906,16.20895,0.075,3.071081,16.74685,0.075,3.646755,16.61274,0.075,2.988775,17.15064,0.075,3.564449,17.01652,0.075,2.906469}, 18);
SoIndexedFaceSet807->setCoord(*SoCoordinate808);

SoShape804->setGeometry(*SoIndexedFaceSet807);

SoNode12->addChild(*SoShape804);

SoShape* SoShape809 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance810 = new SoVRMLAppearance();
SoMaterial* SoMaterial811 = new SoMaterial();
SoMaterial811->setAmbientIntensity(0);
SoMaterial811->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial811->setShininess(0);
SoVRMLAppearance810->addChild(*SoMaterial811);

SoShape809->addChild(*SoVRMLAppearance810);

SoIndexedFaceSet* SoIndexedFaceSet812 = new SoIndexedFaceSet();
SoIndexedFaceSet812->setSolid(false);
SoIndexedFaceSet812->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet812->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate813 = new SoCoordinate();
SoCoordinate813->setPoint(new float[]{20.76423,0.075,29.64557,20.63011,0.075,28.98759,21.5718,0.075,29.48096,21.43769,0.075,28.82298}, 12);
SoIndexedFaceSet812->setCoord(*SoCoordinate813);

SoShape809->setGeometry(*SoIndexedFaceSet812);

SoNode12->addChild(*SoShape809);

SoShape* SoShape814 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance815 = new SoVRMLAppearance();
SoMaterial* SoMaterial816 = new SoMaterial();
SoMaterial816->setAmbientIntensity(0);
SoMaterial816->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial816->setShininess(0);
SoVRMLAppearance815->addChild(*SoMaterial816);

SoShape814->addChild(*SoVRMLAppearance815);

SoIndexedFaceSet* SoIndexedFaceSet817 = new SoIndexedFaceSet();
SoIndexedFaceSet817->setSolid(false);
SoIndexedFaceSet817->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet817->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate818 = new SoCoordinate();
SoCoordinate818->setPoint(new float[]{21.29957,0.075,28.1454,21.43369,0.075,28.80338,20.492,0.075,28.31001,20.62612,0.075,28.96799}, 12);
SoIndexedFaceSet817->setCoord(*SoCoordinate818);

SoShape814->setGeometry(*SoIndexedFaceSet817);

SoNode12->addChild(*SoShape814);

SoShape* SoShape819 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance820 = new SoVRMLAppearance();
SoMaterial* SoMaterial821 = new SoMaterial();
SoMaterial821->setAmbientIntensity(0);
SoMaterial821->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial821->setShininess(0);
SoVRMLAppearance820->addChild(*SoMaterial821);

SoShape819->addChild(*SoVRMLAppearance820);

SoIndexedFaceSet* SoIndexedFaceSet822 = new SoIndexedFaceSet();
SoIndexedFaceSet822->setSolid(false);
SoIndexedFaceSet822->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet822->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate823 = new SoCoordinate();
SoCoordinate823->setPoint(new float[]{20.62935,0.075,26.87056,21.02334,0.075,26.79025,20.76547,0.075,27.53834,21.15946,0.075,27.45803,20.90159,0.075,28.20612,21.29558,0.075,28.12581}, 18);
SoIndexedFaceSet822->setCoord(*SoCoordinate823);

SoShape819->setGeometry(*SoIndexedFaceSet822);

SoNode12->addChild(*SoShape819);

SoShape* SoShape824 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance825 = new SoVRMLAppearance();
SoMaterial* SoMaterial826 = new SoMaterial();
SoMaterial826->setAmbientIntensity(0);
SoMaterial826->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial826->setShininess(0);
SoVRMLAppearance825->addChild(*SoMaterial826);

SoShape824->addChild(*SoVRMLAppearance825);

SoIndexedFaceSet* SoIndexedFaceSet827 = new SoIndexedFaceSet();
SoIndexedFaceSet827->setSolid(false);
SoIndexedFaceSet827->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet827->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate828 = new SoCoordinate();
SoCoordinate828->setPoint(new float[]{20.21577,0.075,26.95486,20.41277,0.075,26.91471,20.60976,0.075,26.87455,20.35189,0.075,27.62264,20.54888,0.075,27.58249,20.74587,0.075,27.54233,20.488,0.075,28.29042,20.685,0.075,28.25026,20.88199,0.075,28.21011}, 27);
SoIndexedFaceSet827->setCoord(*SoCoordinate828);

SoShape824->setGeometry(*SoIndexedFaceSet827);

SoNode12->addChild(*SoShape824);

SoShape* SoShape829 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance830 = new SoVRMLAppearance();
SoMaterial* SoMaterial831 = new SoMaterial();
SoMaterial831->setAmbientIntensity(0);
SoMaterial831->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial831->setShininess(0);
SoVRMLAppearance830->addChild(*SoMaterial831);

SoShape829->addChild(*SoVRMLAppearance830);

SoIndexedFaceSet* SoIndexedFaceSet832 = new SoIndexedFaceSet();
SoIndexedFaceSet832->setSolid(false);
SoIndexedFaceSet832->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet832->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate833 = new SoCoordinate();
SoCoordinate833->setPoint(new float[]{20.21178,0.075,26.93526,20.07766,0.075,26.27728,21.01935,0.075,26.77065,20.88523,0.075,26.11267}, 12);
SoIndexedFaceSet832->setCoord(*SoCoordinate833);

SoShape829->setGeometry(*SoIndexedFaceSet832);

SoNode12->addChild(*SoShape829);

SoShape* SoShape834 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance835 = new SoVRMLAppearance();
SoMaterial* SoMaterial836 = new SoMaterial();
SoMaterial836->setAmbientIntensity(0);
SoMaterial836->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial836->setShininess(0);
SoVRMLAppearance835->addChild(*SoMaterial836);

SoShape834->addChild(*SoVRMLAppearance835);

SoIndexedFaceSet* SoIndexedFaceSet837 = new SoIndexedFaceSet();
SoIndexedFaceSet837->setSolid(false);
SoIndexedFaceSet837->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet837->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate838 = new SoCoordinate();
SoCoordinate838->setPoint(new float[]{20.07366,0.075,26.25769,19.93954,0.075,25.59971,20.88123,0.075,26.09308,20.74711,0.075,25.4351}, 12);
SoIndexedFaceSet837->setCoord(*SoCoordinate838);

SoShape834->setGeometry(*SoIndexedFaceSet837);

SoNode12->addChild(*SoShape834);

SoShape* SoShape839 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance840 = new SoVRMLAppearance();
SoMaterial* SoMaterial841 = new SoMaterial();
SoMaterial841->setAmbientIntensity(0);
SoMaterial841->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial841->setShininess(0);
SoVRMLAppearance840->addChild(*SoMaterial841);

SoShape839->addChild(*SoVRMLAppearance840);

SoIndexedFaceSet* SoIndexedFaceSet842 = new SoIndexedFaceSet();
SoIndexedFaceSet842->setSolid(false);
SoIndexedFaceSet842->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet842->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate843 = new SoCoordinate();
SoCoordinate843->setPoint(new float[]{20.0769,0.075,24.16025,20.47089,0.075,24.07994,20.21302,0.075,24.82803,20.607,0.075,24.74772,20.34913,0.075,25.49581,20.74312,0.075,25.4155}, 18);
SoIndexedFaceSet842->setCoord(*SoCoordinate843);

SoShape839->setGeometry(*SoIndexedFaceSet842);

SoNode12->addChild(*SoShape839);

SoShape* SoShape844 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance845 = new SoVRMLAppearance();
SoMaterial* SoMaterial846 = new SoMaterial();
SoMaterial846->setAmbientIntensity(0);
SoMaterial846->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial846->setShininess(0);
SoVRMLAppearance845->addChild(*SoMaterial846);

SoShape844->addChild(*SoVRMLAppearance845);

SoIndexedFaceSet* SoIndexedFaceSet847 = new SoIndexedFaceSet();
SoIndexedFaceSet847->setSolid(false);
SoIndexedFaceSet847->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet847->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate848 = new SoCoordinate();
SoCoordinate848->setPoint(new float[]{20.32954,0.075,25.4998,20.13254,0.075,25.53996,19.93555,0.075,25.58011,20.19342,0.075,24.83203,19.99643,0.075,24.87218,19.79943,0.075,24.91233,20.0573,0.075,24.16425,19.86031,0.075,24.2044,19.66331,0.075,24.24456}, 27);
SoIndexedFaceSet847->setCoord(*SoCoordinate848);

SoShape844->setGeometry(*SoIndexedFaceSet847);

SoNode12->addChild(*SoShape844);

SoShape* SoShape849 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance850 = new SoVRMLAppearance();
SoMaterial* SoMaterial851 = new SoMaterial();
SoMaterial851->setAmbientIntensity(0);
SoMaterial851->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial851->setShininess(0);
SoVRMLAppearance850->addChild(*SoMaterial851);

SoShape849->addChild(*SoVRMLAppearance850);

SoIndexedFaceSet* SoIndexedFaceSet852 = new SoIndexedFaceSet();
SoIndexedFaceSet852->setSolid(false);
SoIndexedFaceSet852->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet852->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate853 = new SoCoordinate();
SoCoordinate853->setPoint(new float[]{20.33277,0.075,23.40237,20.46689,0.075,24.06035,19.5252,0.075,23.56698,19.65932,0.075,24.22496}, 12);
SoIndexedFaceSet852->setCoord(*SoCoordinate853);

SoShape849->setGeometry(*SoIndexedFaceSet852);

SoNode12->addChild(*SoShape849);

SoShape* SoShape854 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance855 = new SoVRMLAppearance();
SoMaterial* SoMaterial856 = new SoMaterial();
SoMaterial856->setAmbientIntensity(0);
SoMaterial856->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial856->setShininess(0);
SoVRMLAppearance855->addChild(*SoMaterial856);

SoShape854->addChild(*SoVRMLAppearance855);

SoIndexedFaceSet* SoIndexedFaceSet857 = new SoIndexedFaceSet();
SoIndexedFaceSet857->setSolid(false);
SoIndexedFaceSet857->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet857->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate858 = new SoCoordinate();
SoCoordinate858->setPoint(new float[]{19.52121,0.075,23.54738,19.38709,0.075,22.8894,20.32878,0.075,23.38277,20.19466,0.075,22.72479}, 12);
SoIndexedFaceSet857->setCoord(*SoCoordinate858);

SoShape854->setGeometry(*SoIndexedFaceSet857);

SoNode12->addChild(*SoShape854);

SoShape* SoShape859 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance860 = new SoVRMLAppearance();
SoMaterial* SoMaterial861 = new SoMaterial();
SoMaterial861->setAmbientIntensity(0);
SoMaterial861->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial861->setShininess(0);
SoVRMLAppearance860->addChild(*SoMaterial861);

SoShape859->addChild(*SoVRMLAppearance860);

SoIndexedFaceSet* SoIndexedFaceSet862 = new SoIndexedFaceSet();
SoIndexedFaceSet862->setSolid(false);
SoIndexedFaceSet862->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet862->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate863 = new SoCoordinate();
SoCoordinate863->setPoint(new float[]{19.52444,0.075,21.44995,19.72144,0.075,21.40979,19.91843,0.075,21.36964,19.66056,0.075,22.11773,19.85755,0.075,22.07757,20.05455,0.075,22.03742,19.79668,0.075,22.7855,19.99367,0.075,22.74535,20.19066,0.075,22.70519}, 27);
SoIndexedFaceSet862->setCoord(*SoCoordinate863);

SoShape859->setGeometry(*SoIndexedFaceSet862);

SoNode12->addChild(*SoShape859);

SoShape* SoShape864 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance865 = new SoVRMLAppearance();
SoMaterial* SoMaterial866 = new SoMaterial();
SoMaterial866->setAmbientIntensity(0);
SoMaterial866->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial866->setShininess(0);
SoVRMLAppearance865->addChild(*SoMaterial866);

SoShape864->addChild(*SoVRMLAppearance865);

SoIndexedFaceSet* SoIndexedFaceSet867 = new SoIndexedFaceSet();
SoIndexedFaceSet867->setSolid(false);
SoIndexedFaceSet867->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet867->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate868 = new SoCoordinate();
SoCoordinate868->setPoint(new float[]{19.77708,0.075,22.7895,19.38309,0.075,22.86981,19.50485,0.075,21.45394,19.11086,0.075,21.53425}, 12);
SoIndexedFaceSet867->setCoord(*SoCoordinate868);

SoShape864->setGeometry(*SoIndexedFaceSet867);

SoNode12->addChild(*SoShape864);

SoShape* SoShape869 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance870 = new SoVRMLAppearance();
SoMaterial* SoMaterial871 = new SoMaterial();
SoMaterial871->setAmbientIntensity(0);
SoMaterial871->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial871->setShininess(0);
SoVRMLAppearance870->addChild(*SoMaterial871);

SoShape869->addChild(*SoVRMLAppearance870);

SoIndexedFaceSet* SoIndexedFaceSet872 = new SoIndexedFaceSet();
SoIndexedFaceSet872->setSolid(false);
SoIndexedFaceSet872->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet872->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate873 = new SoCoordinate();
SoCoordinate873->setPoint(new float[]{19.78032,0.075,20.69206,19.91444,0.075,21.35004,18.97275,0.075,20.85667,19.10686,0.075,21.51465}, 12);
SoIndexedFaceSet872->setCoord(*SoCoordinate873);

SoShape869->setGeometry(*SoIndexedFaceSet872);

SoNode12->addChild(*SoShape869);

SoShape* SoShape874 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance875 = new SoVRMLAppearance();
SoMaterial* SoMaterial876 = new SoMaterial();
SoMaterial876->setAmbientIntensity(0);
SoMaterial876->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial876->setShininess(0);
SoVRMLAppearance875->addChild(*SoMaterial876);

SoShape874->addChild(*SoVRMLAppearance875);

SoIndexedFaceSet* SoIndexedFaceSet877 = new SoIndexedFaceSet();
SoIndexedFaceSet877->setSolid(false);
SoIndexedFaceSet877->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet877->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate878 = new SoCoordinate();
SoCoordinate878->setPoint(new float[]{18.96875,0.075,20.83708,18.83463,0.075,20.1791,19.77632,0.075,20.67247,19.6422,0.075,20.01449}, 12);
SoIndexedFaceSet877->setCoord(*SoCoordinate878);

SoShape874->setGeometry(*SoIndexedFaceSet877);

SoNode12->addChild(*SoShape874);

SoShape* SoShape879 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance880 = new SoVRMLAppearance();
SoMaterial* SoMaterial881 = new SoMaterial();
SoMaterial881->setAmbientIntensity(0);
SoMaterial881->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial881->setShininess(0);
SoVRMLAppearance880->addChild(*SoMaterial881);

SoShape879->addChild(*SoVRMLAppearance880);

SoIndexedFaceSet* SoIndexedFaceSet882 = new SoIndexedFaceSet();
SoIndexedFaceSet882->setSolid(false);
SoIndexedFaceSet882->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet882->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate883 = new SoCoordinate();
SoCoordinate883->setPoint(new float[]{18.97199,0.075,18.73964,19.16898,0.075,18.69949,19.36597,0.075,18.65933,19.1081,0.075,19.40742,19.3051,0.075,19.36727,19.50209,0.075,19.32711,19.24422,0.075,20.0752,19.44121,0.075,20.03504,19.63821,0.075,19.99489}, 27);
SoIndexedFaceSet882->setCoord(*SoCoordinate883);

SoShape879->setGeometry(*SoIndexedFaceSet882);

SoNode12->addChild(*SoShape879);

SoShape* SoShape884 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance885 = new SoVRMLAppearance();
SoMaterial* SoMaterial886 = new SoMaterial();
SoMaterial886->setAmbientIntensity(0);
SoMaterial886->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial886->setShininess(0);
SoVRMLAppearance885->addChild(*SoMaterial886);

SoShape884->addChild(*SoVRMLAppearance885);

SoIndexedFaceSet* SoIndexedFaceSet887 = new SoIndexedFaceSet();
SoIndexedFaceSet887->setSolid(false);
SoIndexedFaceSet887->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet887->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate888 = new SoCoordinate();
SoCoordinate888->setPoint(new float[]{18.5584,0.075,18.82394,18.7554,0.075,18.78379,18.95239,0.075,18.74364,18.69452,0.075,19.49172,18.89151,0.075,19.45157,19.08851,0.075,19.41142,18.83064,0.075,20.1595,19.02763,0.075,20.11935,19.22462,0.075,20.07919}, 27);
SoIndexedFaceSet887->setCoord(*SoCoordinate888);

SoShape884->setGeometry(*SoIndexedFaceSet887);

SoNode12->addChild(*SoShape884);

SoShape* SoShape889 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance890 = new SoVRMLAppearance();
SoMaterial* SoMaterial891 = new SoMaterial();
SoMaterial891->setAmbientIntensity(0);
SoMaterial891->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial891->setShininess(0);
SoVRMLAppearance890->addChild(*SoMaterial891);

SoShape889->addChild(*SoVRMLAppearance890);

SoIndexedFaceSet* SoIndexedFaceSet892 = new SoIndexedFaceSet();
SoIndexedFaceSet892->setSolid(false);
SoIndexedFaceSet892->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet892->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate893 = new SoCoordinate();
SoCoordinate893->setPoint(new float[]{18.55441,0.075,18.80435,18.42029,0.075,18.14637,19.36198,0.075,18.63974,19.22786,0.075,17.98176}, 12);
SoIndexedFaceSet892->setCoord(*SoCoordinate893);

SoShape889->setGeometry(*SoIndexedFaceSet892);

SoNode12->addChild(*SoShape889);

SoShape* SoShape894 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance895 = new SoVRMLAppearance();
SoMaterial* SoMaterial896 = new SoMaterial();
SoMaterial896->setAmbientIntensity(0);
SoMaterial896->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial896->setShininess(0);
SoVRMLAppearance895->addChild(*SoMaterial896);

SoShape894->addChild(*SoVRMLAppearance895);

SoIndexedFaceSet* SoIndexedFaceSet897 = new SoIndexedFaceSet();
SoIndexedFaceSet897->setSolid(false);
SoIndexedFaceSet897->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet897->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate898 = new SoCoordinate();
SoCoordinate898->setPoint(new float[]{18.41629,0.075,18.12677,18.28218,0.075,17.46879,19.22387,0.075,17.96216,19.08975,0.075,17.30418}, 12);
SoIndexedFaceSet897->setCoord(*SoCoordinate898);

SoShape894->setGeometry(*SoIndexedFaceSet897);

SoNode12->addChild(*SoShape894);

SoShape* SoShape899 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance900 = new SoVRMLAppearance();
SoMaterial* SoMaterial901 = new SoMaterial();
SoMaterial901->setAmbientIntensity(0);
SoMaterial901->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial901->setShininess(0);
SoVRMLAppearance900->addChild(*SoMaterial901);

SoShape899->addChild(*SoVRMLAppearance900);

SoIndexedFaceSet* SoIndexedFaceSet902 = new SoIndexedFaceSet();
SoIndexedFaceSet902->setSolid(false);
SoIndexedFaceSet902->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet902->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate903 = new SoCoordinate();
SoCoordinate903->setPoint(new float[]{19.08575,0.075,17.28458,18.69176,0.075,17.36489,18.81352,0.075,15.94903,18.41953,0.075,16.02934}, 12);
SoIndexedFaceSet902->setCoord(*SoCoordinate903);

SoShape899->setGeometry(*SoIndexedFaceSet902);

SoNode12->addChild(*SoShape899);

SoShape* SoShape904 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance905 = new SoVRMLAppearance();
SoMaterial* SoMaterial906 = new SoMaterial();
SoMaterial906->setAmbientIntensity(0);
SoMaterial906->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial906->setShininess(0);
SoVRMLAppearance905->addChild(*SoMaterial906);

SoShape904->addChild(*SoVRMLAppearance905);

SoIndexedFaceSet* SoIndexedFaceSet907 = new SoIndexedFaceSet();
SoIndexedFaceSet907->setSolid(false);
SoIndexedFaceSet907->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet907->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate908 = new SoCoordinate();
SoCoordinate908->setPoint(new float[]{18.00595,0.075,16.11364,18.39993,0.075,16.03333,18.27818,0.075,17.44919,18.67217,0.075,17.36889}, 12);
SoIndexedFaceSet907->setCoord(*SoCoordinate908);

SoShape904->setGeometry(*SoIndexedFaceSet907);

SoNode12->addChild(*SoShape904);

SoShape* SoShape909 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance910 = new SoVRMLAppearance();
SoMaterial* SoMaterial911 = new SoMaterial();
SoMaterial911->setAmbientIntensity(0);
SoMaterial911->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial911->setShininess(0);
SoVRMLAppearance910->addChild(*SoMaterial911);

SoShape909->addChild(*SoVRMLAppearance910);

SoIndexedFaceSet* SoIndexedFaceSet912 = new SoIndexedFaceSet();
SoIndexedFaceSet912->setSolid(false);
SoIndexedFaceSet912->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet912->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate913 = new SoCoordinate();
SoCoordinate913->setPoint(new float[]{18.00195,0.075,16.09404,17.86783,0.075,15.43606,18.80952,0.075,15.92943,18.6754,0.075,15.27145}, 12);
SoIndexedFaceSet912->setCoord(*SoCoordinate913);

SoShape909->setGeometry(*SoIndexedFaceSet912);

SoNode12->addChild(*SoShape909);

SoShape* SoShape914 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance915 = new SoVRMLAppearance();
SoMaterial* SoMaterial916 = new SoMaterial();
SoMaterial916->setAmbientIntensity(0);
SoMaterial916->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial916->setShininess(0);
SoVRMLAppearance915->addChild(*SoMaterial916);

SoShape914->addChild(*SoVRMLAppearance915);

SoIndexedFaceSet* SoIndexedFaceSet917 = new SoIndexedFaceSet();
SoIndexedFaceSet917->setSolid(false);
SoIndexedFaceSet917->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet917->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate918 = new SoCoordinate();
SoCoordinate918->setPoint(new float[]{17.86384,0.075,15.41647,17.72972,0.075,14.75849,18.67141,0.075,15.25185,18.53729,0.075,14.59387}, 12);
SoIndexedFaceSet917->setCoord(*SoCoordinate918);

SoShape914->setGeometry(*SoIndexedFaceSet917);

SoNode12->addChild(*SoShape914);

SoShape* SoShape919 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance920 = new SoVRMLAppearance();
SoMaterial* SoMaterial921 = new SoMaterial();
SoMaterial921->setAmbientIntensity(0);
SoMaterial921->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial921->setShininess(0);
SoVRMLAppearance920->addChild(*SoMaterial921);

SoShape919->addChild(*SoVRMLAppearance920);

SoIndexedFaceSet* SoIndexedFaceSet922 = new SoIndexedFaceSet();
SoIndexedFaceSet922->setSolid(false);
SoIndexedFaceSet922->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet922->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate923 = new SoCoordinate();
SoCoordinate923->setPoint(new float[]{18.5333,0.075,14.57428,18.13931,0.075,14.65459,18.39718,0.075,13.9065,18.00319,0.075,13.98681,18.26106,0.075,13.23872,17.86707,0.075,13.31903}, 18);
SoIndexedFaceSet922->setCoord(*SoCoordinate923);

SoShape919->setGeometry(*SoIndexedFaceSet922);

SoNode12->addChild(*SoShape919);

SoShape* SoShape924 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance925 = new SoVRMLAppearance();
SoMaterial* SoMaterial926 = new SoMaterial();
SoMaterial926->setAmbientIntensity(0);
SoMaterial926->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial926->setShininess(0);
SoVRMLAppearance925->addChild(*SoMaterial926);

SoShape924->addChild(*SoVRMLAppearance925);

SoIndexedFaceSet* SoIndexedFaceSet927 = new SoIndexedFaceSet();
SoIndexedFaceSet927->setSolid(false);
SoIndexedFaceSet927->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet927->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate928 = new SoCoordinate();
SoCoordinate928->setPoint(new float[]{17.45349,0.075,13.40333,17.84748,0.075,13.32302,17.72573,0.075,14.73889,18.11971,0.075,14.65858}, 12);
SoIndexedFaceSet927->setCoord(*SoCoordinate928);

SoShape924->setGeometry(*SoIndexedFaceSet927);

SoNode12->addChild(*SoShape924);

SoShape* SoShape929 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance930 = new SoVRMLAppearance();
SoMaterial* SoMaterial931 = new SoMaterial();
SoMaterial931->setAmbientIntensity(0);
SoMaterial931->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial931->setShininess(0);
SoVRMLAppearance930->addChild(*SoMaterial931);

SoShape929->addChild(*SoVRMLAppearance930);

SoIndexedFaceSet* SoIndexedFaceSet932 = new SoIndexedFaceSet();
SoIndexedFaceSet932->setSolid(false);
SoIndexedFaceSet932->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet932->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate933 = new SoCoordinate();
SoCoordinate933->setPoint(new float[]{17.4495,0.075,13.38374,17.31538,0.075,12.72576,17.85328,0.075,13.30143,17.71916,0.075,12.64345,18.25707,0.075,13.21912,18.12295,0.075,12.56115}, 18);
SoIndexedFaceSet932->setCoord(*SoCoordinate933);

SoShape929->setGeometry(*SoIndexedFaceSet932);

SoNode12->addChild(*SoShape929);

SoShape* SoShape934 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance935 = new SoVRMLAppearance();
SoMaterial* SoMaterial936 = new SoMaterial();
SoMaterial936->setAmbientIntensity(0);
SoMaterial936->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial936->setShininess(0);
SoVRMLAppearance935->addChild(*SoMaterial936);

SoShape934->addChild(*SoVRMLAppearance935);

SoIndexedFaceSet* SoIndexedFaceSet937 = new SoIndexedFaceSet();
SoIndexedFaceSet937->setSolid(false);
SoIndexedFaceSet937->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet937->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate938 = new SoCoordinate();
SoCoordinate938->setPoint(new float[]{17.98483,0.075,11.88357,18.11895,0.075,12.54155,17.17726,0.075,12.04818,17.31138,0.075,12.70616}, 12);
SoIndexedFaceSet937->setCoord(*SoCoordinate938);

SoShape934->setGeometry(*SoIndexedFaceSet937);

SoNode12->addChild(*SoShape934);

SoShape* SoShape939 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance940 = new SoVRMLAppearance();
SoMaterial* SoMaterial941 = new SoMaterial();
SoMaterial941->setAmbientIntensity(0);
SoMaterial941->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial941->setShininess(0);
SoVRMLAppearance940->addChild(*SoMaterial941);

SoShape939->addChild(*SoVRMLAppearance940);

SoIndexedFaceSet* SoIndexedFaceSet942 = new SoIndexedFaceSet();
SoIndexedFaceSet942->setSolid(false);
SoIndexedFaceSet942->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet942->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate943 = new SoCoordinate();
SoCoordinate943->setPoint(new float[]{17.98084,0.075,11.86397,17.58685,0.075,11.94428,17.70861,0.075,10.52842,17.31462,0.075,10.60872}, 12);
SoIndexedFaceSet942->setCoord(*SoCoordinate943);

SoShape939->setGeometry(*SoIndexedFaceSet942);

SoNode12->addChild(*SoShape939);

SoShape* SoShape944 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance945 = new SoVRMLAppearance();
SoMaterial* SoMaterial946 = new SoMaterial();
SoMaterial946->setAmbientIntensity(0);
SoMaterial946->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial946->setShininess(0);
SoVRMLAppearance945->addChild(*SoMaterial946);

SoShape944->addChild(*SoVRMLAppearance945);

SoIndexedFaceSet* SoIndexedFaceSet947 = new SoIndexedFaceSet();
SoIndexedFaceSet947->setSolid(false);
SoIndexedFaceSet947->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet947->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate948 = new SoCoordinate();
SoCoordinate948->setPoint(new float[]{16.90104,0.075,10.69303,17.09803,0.075,10.65287,17.29502,0.075,10.61272,17.03715,0.075,11.36081,17.23415,0.075,11.32065,17.43114,0.075,11.2805,17.17327,0.075,12.02858,17.37026,0.075,11.98843,17.56726,0.075,11.94827}, 27);
SoIndexedFaceSet947->setCoord(*SoCoordinate948);

SoShape944->setGeometry(*SoIndexedFaceSet947);

SoNode12->addChild(*SoShape944);

SoShape* SoShape949 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance950 = new SoVRMLAppearance();
SoMaterial* SoMaterial951 = new SoMaterial();
SoMaterial951->setAmbientIntensity(0);
SoMaterial951->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial951->setShininess(0);
SoVRMLAppearance950->addChild(*SoMaterial951);

SoShape949->addChild(*SoVRMLAppearance950);

SoIndexedFaceSet* SoIndexedFaceSet952 = new SoIndexedFaceSet();
SoIndexedFaceSet952->setSolid(false);
SoIndexedFaceSet952->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet952->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate953 = new SoCoordinate();
SoCoordinate953->setPoint(new float[]{16.89704,0.075,10.67343,16.76292,0.075,10.01545,17.30083,0.075,10.59112,17.16671,0.075,9.933146,17.70461,0.075,10.50882,17.57049,0.075,9.85084}, 18);
SoIndexedFaceSet952->setCoord(*SoCoordinate953);

SoShape949->setGeometry(*SoIndexedFaceSet952);

SoNode12->addChild(*SoShape949);

SoShape* SoShape954 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance955 = new SoVRMLAppearance();
SoMaterial* SoMaterial956 = new SoMaterial();
SoMaterial956->setAmbientIntensity(0);
SoMaterial956->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial956->setShininess(0);
SoVRMLAppearance955->addChild(*SoMaterial956);

SoShape954->addChild(*SoVRMLAppearance955);

SoIndexedFaceSet* SoIndexedFaceSet957 = new SoIndexedFaceSet();
SoIndexedFaceSet957->setSolid(false);
SoIndexedFaceSet957->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet957->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate958 = new SoCoordinate();
SoCoordinate958->setPoint(new float[]{17.43238,0.075,9.173264,17.5665,0.075,9.831243,16.62481,0.075,9.337874,16.75893,0.075,9.995854}, 12);
SoIndexedFaceSet957->setCoord(*SoCoordinate958);

SoShape954->setGeometry(*SoIndexedFaceSet957);

SoNode12->addChild(*SoShape954);

SoShape* SoShape959 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance960 = new SoVRMLAppearance();
SoMaterial* SoMaterial961 = new SoMaterial();
SoMaterial961->setAmbientIntensity(0);
SoMaterial961->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial961->setShininess(0);
SoVRMLAppearance960->addChild(*SoMaterial961);

SoShape959->addChild(*SoVRMLAppearance960);

SoIndexedFaceSet* SoIndexedFaceSet962 = new SoIndexedFaceSet();
SoIndexedFaceSet962->setSolid(false);
SoIndexedFaceSet962->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet962->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate963 = new SoCoordinate();
SoCoordinate963->setPoint(new float[]{16.76216,0.075,7.898419,17.15615,0.075,7.81811,16.89828,0.075,8.566196,17.29227,0.075,8.485888,17.0344,0.075,9.233974,17.42838,0.075,9.153666}, 18);
SoIndexedFaceSet962->setCoord(*SoCoordinate963);

SoShape959->setGeometry(*SoIndexedFaceSet962);

SoNode12->addChild(*SoShape959);

SoShape* SoShape964 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance965 = new SoVRMLAppearance();
SoMaterial* SoMaterial966 = new SoMaterial();
SoMaterial966->setAmbientIntensity(0);
SoMaterial966->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial966->setShininess(0);
SoVRMLAppearance965->addChild(*SoMaterial966);

SoShape964->addChild(*SoVRMLAppearance965);

SoIndexedFaceSet* SoIndexedFaceSet967 = new SoIndexedFaceSet();
SoIndexedFaceSet967->setSolid(false);
SoIndexedFaceSet967->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet967->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate968 = new SoCoordinate();
SoCoordinate968->setPoint(new float[]{16.34858,0.075,7.982722,16.74257,0.075,7.902413,16.62081,0.075,9.318277,17.0148,0.075,9.237969}, 12);
SoIndexedFaceSet967->setCoord(*SoCoordinate968);

SoShape964->setGeometry(*SoIndexedFaceSet967);

SoNode12->addChild(*SoShape964);

SoShape* SoShape969 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance970 = new SoVRMLAppearance();
SoMaterial* SoMaterial971 = new SoMaterial();
SoMaterial971->setAmbientIntensity(0);
SoMaterial971->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial971->setShininess(0);
SoVRMLAppearance970->addChild(*SoMaterial971);

SoShape969->addChild(*SoVRMLAppearance970);

SoIndexedFaceSet* SoIndexedFaceSet972 = new SoIndexedFaceSet();
SoIndexedFaceSet972->setSolid(false);
SoIndexedFaceSet972->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet972->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate973 = new SoCoordinate();
SoCoordinate973->setPoint(new float[]{17.01804,0.075,7.140534,17.15216,0.075,7.798513,16.21047,0.075,7.305145,16.34459,0.075,7.963125}, 12);
SoIndexedFaceSet972->setCoord(*SoCoordinate973);

SoShape969->setGeometry(*SoIndexedFaceSet972);

SoNode12->addChild(*SoShape969);

SoShape* SoShape974 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance975 = new SoVRMLAppearance();
SoMaterial* SoMaterial976 = new SoMaterial();
SoMaterial976->setAmbientIntensity(0);
SoMaterial976->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial976->setShininess(0);
SoVRMLAppearance975->addChild(*SoMaterial976);

SoShape974->addChild(*SoVRMLAppearance975);

SoIndexedFaceSet* SoIndexedFaceSet977 = new SoIndexedFaceSet();
SoIndexedFaceSet977->setSolid(false);
SoIndexedFaceSet977->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet977->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate978 = new SoCoordinate();
SoCoordinate978->setPoint(new float[]{16.20647,0.075,7.285548,16.07235,0.075,6.627569,17.01404,0.075,7.120937,16.87992,0.075,6.462957}, 12);
SoIndexedFaceSet977->setCoord(*SoCoordinate978);

SoShape974->setGeometry(*SoIndexedFaceSet977);

SoNode12->addChild(*SoShape974);

SoShape* SoShape979 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance980 = new SoVRMLAppearance();
SoMaterial* SoMaterial981 = new SoMaterial();
SoMaterial981->setAmbientIntensity(0);
SoMaterial981->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial981->setShininess(0);
SoVRMLAppearance980->addChild(*SoMaterial981);

SoShape979->addChild(*SoVRMLAppearance980);

SoIndexedFaceSet* SoIndexedFaceSet982 = new SoIndexedFaceSet();
SoIndexedFaceSet982->setSolid(false);
SoIndexedFaceSet982->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet982->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate983 = new SoCoordinate();
SoCoordinate983->setPoint(new float[]{16.20971,0.075,5.188113,16.4067,0.075,5.147959,16.60369,0.075,5.107805,16.34583,0.075,5.855891,16.54282,0.075,5.815737,16.73981,0.075,5.775583,16.48194,0.075,6.523669,16.67893,0.075,6.483515,16.87593,0.075,6.44336}, 27);
SoIndexedFaceSet982->setCoord(*SoCoordinate983);

SoShape979->setGeometry(*SoIndexedFaceSet982);

SoNode12->addChild(*SoShape979);

SoShape* SoShape984 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance985 = new SoVRMLAppearance();
SoMaterial* SoMaterial986 = new SoMaterial();
SoMaterial986->setAmbientIntensity(0);
SoMaterial986->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial986->setShininess(0);
SoVRMLAppearance985->addChild(*SoMaterial986);

SoShape984->addChild(*SoVRMLAppearance985);

SoIndexedFaceSet* SoIndexedFaceSet987 = new SoIndexedFaceSet();
SoIndexedFaceSet987->setSolid(false);
SoIndexedFaceSet987->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet987->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate988 = new SoCoordinate();
SoCoordinate988->setPoint(new float[]{15.79612,0.075,5.272416,15.99312,0.075,5.232262,16.19011,0.075,5.192108,15.93224,0.075,5.940194,16.12923,0.075,5.90004,16.32623,0.075,5.859886,16.06836,0.075,6.607972,16.26535,0.075,6.567818,16.46234,0.075,6.527664}, 27);
SoIndexedFaceSet987->setCoord(*SoCoordinate988);

SoShape984->setGeometry(*SoIndexedFaceSet987);

SoNode12->addChild(*SoShape984);

SoShape* SoShape989 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance990 = new SoVRMLAppearance();
SoMaterial* SoMaterial991 = new SoMaterial();
SoMaterial991->setAmbientIntensity(0);
SoMaterial991->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial991->setShininess(0);
SoVRMLAppearance990->addChild(*SoMaterial991);

SoShape989->addChild(*SoVRMLAppearance990);

SoIndexedFaceSet* SoIndexedFaceSet992 = new SoIndexedFaceSet();
SoIndexedFaceSet992->setSolid(false);
SoIndexedFaceSet992->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet992->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate993 = new SoCoordinate();
SoCoordinate993->setPoint(new float[]{15.79213,0.075,5.252819,15.65801,0.075,4.59484,16.5997,0.075,5.088208,16.46558,0.075,4.430228}, 12);
SoIndexedFaceSet992->setCoord(*SoCoordinate993);

SoShape989->setGeometry(*SoIndexedFaceSet992);

SoNode12->addChild(*SoShape989);

SoShape* SoShape994 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance995 = new SoVRMLAppearance();
SoMaterial* SoMaterial996 = new SoMaterial();
SoMaterial996->setAmbientIntensity(0);
SoMaterial996->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial996->setShininess(0);
SoVRMLAppearance995->addChild(*SoMaterial996);

SoShape994->addChild(*SoVRMLAppearance995);

SoIndexedFaceSet* SoIndexedFaceSet997 = new SoIndexedFaceSet();
SoIndexedFaceSet997->setSolid(false);
SoIndexedFaceSet997->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet997->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate998 = new SoCoordinate();
SoCoordinate998->setPoint(new float[]{16.32747,0.075,3.752652,16.46159,0.075,4.410631,15.5199,0.075,3.917263,15.65402,0.075,4.575243}, 12);
SoIndexedFaceSet997->setCoord(*SoCoordinate998);

SoShape994->setGeometry(*SoIndexedFaceSet997);

SoNode12->addChild(*SoShape994);

SoShape* SoShape999 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1000 = new SoVRMLAppearance();
SoMaterial* SoMaterial1001 = new SoMaterial();
SoMaterial1001->setAmbientIntensity(0);
SoMaterial1001->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1001->setShininess(0);
SoVRMLAppearance1000->addChild(*SoMaterial1001);

SoShape999->addChild(*SoVRMLAppearance1000);

SoIndexedFaceSet* SoIndexedFaceSet1002 = new SoIndexedFaceSet();
SoIndexedFaceSet1002->setSolid(false);
SoIndexedFaceSet1002->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1002->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1003 = new SoCoordinate();
SoCoordinate1003->setPoint(new float[]{15.65725,0.075,2.477808,16.05124,0.075,2.397499,15.92949,0.075,3.813363,16.32347,0.075,3.733055}, 12);
SoIndexedFaceSet1002->setCoord(*SoCoordinate1003);

SoShape999->setGeometry(*SoIndexedFaceSet1002);

SoNode12->addChild(*SoShape999);

SoShape* SoShape1004 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1005 = new SoVRMLAppearance();
SoMaterial* SoMaterial1006 = new SoMaterial();
SoMaterial1006->setAmbientIntensity(0);
SoMaterial1006->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1006->setShininess(0);
SoVRMLAppearance1005->addChild(*SoMaterial1006);

SoShape1004->addChild(*SoVRMLAppearance1005);

SoIndexedFaceSet* SoIndexedFaceSet1007 = new SoIndexedFaceSet();
SoIndexedFaceSet1007->setSolid(false);
SoIndexedFaceSet1007->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1007->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1008 = new SoCoordinate();
SoCoordinate1008->setPoint(new float[]{15.24367,0.075,2.56211,15.63765,0.075,2.481802,15.5159,0.075,3.897666,15.90989,0.075,3.817358}, 12);
SoIndexedFaceSet1007->setCoord(*SoCoordinate1008);

SoShape1004->setGeometry(*SoIndexedFaceSet1007);

SoNode12->addChild(*SoShape1004);

SoShape* SoShape1009 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1010 = new SoVRMLAppearance();
SoMaterial* SoMaterial1011 = new SoMaterial();
SoMaterial1011->setAmbientIntensity(0);
SoMaterial1011->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1011->setShininess(0);
SoVRMLAppearance1010->addChild(*SoMaterial1011);

SoShape1009->addChild(*SoVRMLAppearance1010);

SoIndexedFaceSet* SoIndexedFaceSet1012 = new SoIndexedFaceSet();
SoIndexedFaceSet1012->setSolid(false);
SoIndexedFaceSet1012->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1012->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1013 = new SoCoordinate();
SoCoordinate1013->setPoint(new float[]{20.07841,0.075,28.39432,20.27541,0.075,28.35416,20.4724,0.075,28.31401,20.21453,0.075,29.0621,20.41153,0.075,29.02194,20.60852,0.075,28.98179,20.35065,0.075,29.72987,20.54764,0.075,29.68972,20.74464,0.075,29.64956}, 27);
SoIndexedFaceSet1012->setCoord(*SoCoordinate1013);

SoShape1009->setGeometry(*SoIndexedFaceSet1012);

SoNode12->addChild(*SoShape1009);

SoShape* SoShape1014 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1015 = new SoVRMLAppearance();
SoMaterial* SoMaterial1016 = new SoMaterial();
SoMaterial1016->setAmbientIntensity(0);
SoMaterial1016->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1016->setShininess(0);
SoVRMLAppearance1015->addChild(*SoMaterial1016);

SoShape1014->addChild(*SoVRMLAppearance1015);

SoIndexedFaceSet* SoIndexedFaceSet1017 = new SoIndexedFaceSet();
SoIndexedFaceSet1017->setSolid(false);
SoIndexedFaceSet1017->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1017->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1018 = new SoCoordinate();
SoCoordinate1018->setPoint(new float[]{20.19218,0.075,26.93926,19.79819,0.075,27.01957,19.91995,0.075,25.6037,19.52596,0.075,25.68401}, 12);
SoIndexedFaceSet1017->setCoord(*SoCoordinate1018);

SoShape1014->setGeometry(*SoIndexedFaceSet1017);

SoNode12->addChild(*SoShape1014);

SoShape* SoShape1019 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1020 = new SoVRMLAppearance();
SoMaterial* SoMaterial1021 = new SoMaterial();
SoMaterial1021->setAmbientIntensity(0);
SoMaterial1021->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1021->setShininess(0);
SoVRMLAppearance1020->addChild(*SoMaterial1021);

SoShape1019->addChild(*SoVRMLAppearance1020);

SoIndexedFaceSet* SoIndexedFaceSet1022 = new SoIndexedFaceSet();
SoIndexedFaceSet1022->setSolid(false);
SoIndexedFaceSet1022->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1022->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1023 = new SoCoordinate();
SoCoordinate1023->setPoint(new float[]{19.10838,0.075,25.74872,18.97426,0.075,25.09074,19.91595,0.075,25.58411,19.78183,0.075,24.92613}, 12);
SoIndexedFaceSet1022->setCoord(*SoCoordinate1023);

SoShape1019->setGeometry(*SoIndexedFaceSet1022);

SoNode12->addChild(*SoShape1019);

SoShape* SoShape1024 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1025 = new SoVRMLAppearance();
SoMaterial* SoMaterial1026 = new SoMaterial();
SoMaterial1026->setAmbientIntensity(0);
SoMaterial1026->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1026->setShininess(0);
SoVRMLAppearance1025->addChild(*SoMaterial1026);

SoShape1024->addChild(*SoVRMLAppearance1025);

SoIndexedFaceSet* SoIndexedFaceSet1027 = new SoIndexedFaceSet();
SoIndexedFaceSet1027->setSolid(false);
SoIndexedFaceSet1027->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1027->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1028 = new SoCoordinate();
SoCoordinate1028->setPoint(new float[]{19.64372,0.075,24.24855,19.77784,0.075,24.90653,18.83615,0.075,24.41316,18.97027,0.075,25.07114}, 12);
SoIndexedFaceSet1027->setCoord(*SoCoordinate1028);

SoShape1024->setGeometry(*SoIndexedFaceSet1027);

SoNode12->addChild(*SoShape1024);

SoShape* SoShape1029 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1030 = new SoVRMLAppearance();
SoMaterial* SoMaterial1031 = new SoMaterial();
SoMaterial1031->setAmbientIntensity(0);
SoMaterial1031->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1031->setShininess(0);
SoVRMLAppearance1030->addChild(*SoMaterial1031);

SoShape1029->addChild(*SoVRMLAppearance1030);

SoIndexedFaceSet* SoIndexedFaceSet1032 = new SoIndexedFaceSet();
SoIndexedFaceSet1032->setSolid(false);
SoIndexedFaceSet1032->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1032->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1033 = new SoCoordinate();
SoCoordinate1033->setPoint(new float[]{19.63972,0.075,24.22895,19.24574,0.075,24.30926,19.36749,0.075,22.8934,18.9735,0.075,22.97371}, 12);
SoIndexedFaceSet1032->setCoord(*SoCoordinate1033);

SoShape1029->setGeometry(*SoIndexedFaceSet1032);

SoNode12->addChild(*SoShape1029);

SoShape* SoShape1034 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1035 = new SoVRMLAppearance();
SoMaterial* SoMaterial1036 = new SoMaterial();
SoMaterial1036->setAmbientIntensity(0);
SoMaterial1036->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1036->setShininess(0);
SoVRMLAppearance1035->addChild(*SoMaterial1036);

SoShape1034->addChild(*SoVRMLAppearance1035);

SoIndexedFaceSet* SoIndexedFaceSet1037 = new SoIndexedFaceSet();
SoIndexedFaceSet1037->setSolid(false);
SoIndexedFaceSet1037->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1037->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1038 = new SoCoordinate();
SoCoordinate1038->setPoint(new float[]{18.55992,0.075,23.05801,18.75691,0.075,23.01785,18.95391,0.075,22.9777,18.69604,0.075,23.72579,18.89303,0.075,23.68563,19.09002,0.075,23.64548,18.83215,0.075,24.39357,19.02915,0.075,24.35341,19.22614,0.075,24.31326}, 27);
SoIndexedFaceSet1037->setCoord(*SoCoordinate1038);

SoShape1034->setGeometry(*SoIndexedFaceSet1037);

SoNode12->addChild(*SoShape1034);

SoShape* SoShape1039 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1040 = new SoVRMLAppearance();
SoMaterial* SoMaterial1041 = new SoMaterial();
SoMaterial1041->setAmbientIntensity(0);
SoMaterial1041->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1041->setShininess(0);
SoVRMLAppearance1040->addChild(*SoMaterial1041);

SoShape1039->addChild(*SoVRMLAppearance1040);

SoIndexedFaceSet* SoIndexedFaceSet1042 = new SoIndexedFaceSet();
SoIndexedFaceSet1042->setSolid(false);
SoIndexedFaceSet1042->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1042->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1043 = new SoCoordinate();
SoCoordinate1043->setPoint(new float[]{18.55593,0.075,23.03841,18.42181,0.075,22.38043,19.3635,0.075,22.8738,19.22938,0.075,22.21582}, 12);
SoIndexedFaceSet1042->setCoord(*SoCoordinate1043);

SoShape1039->setGeometry(*SoIndexedFaceSet1042);

SoNode12->addChild(*SoShape1039);

SoShape* SoShape1044 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1045 = new SoVRMLAppearance();
SoMaterial* SoMaterial1046 = new SoMaterial();
SoMaterial1046->setAmbientIntensity(0);
SoMaterial1046->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1046->setShininess(0);
SoVRMLAppearance1045->addChild(*SoMaterial1046);

SoShape1044->addChild(*SoVRMLAppearance1045);

SoIndexedFaceSet* SoIndexedFaceSet1047 = new SoIndexedFaceSet();
SoIndexedFaceSet1047->setSolid(false);
SoIndexedFaceSet1047->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1047->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1048 = new SoCoordinate();
SoCoordinate1048->setPoint(new float[]{19.09126,0.075,21.53824,19.22538,0.075,22.19622,18.28369,0.075,21.70286,18.41781,0.075,22.36084}, 12);
SoIndexedFaceSet1047->setCoord(*SoCoordinate1048);

SoShape1044->setGeometry(*SoIndexedFaceSet1047);

SoNode12->addChild(*SoShape1044);

SoShape* SoShape1049 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1050 = new SoVRMLAppearance();
SoMaterial* SoMaterial1051 = new SoMaterial();
SoMaterial1051->setAmbientIntensity(0);
SoMaterial1051->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1051->setShininess(0);
SoVRMLAppearance1050->addChild(*SoMaterial1051);

SoShape1049->addChild(*SoVRMLAppearance1050);

SoIndexedFaceSet* SoIndexedFaceSet1052 = new SoIndexedFaceSet();
SoIndexedFaceSet1052->setSolid(false);
SoIndexedFaceSet1052->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1052->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1053 = new SoCoordinate();
SoCoordinate1053->setPoint(new float[]{18.42105,0.075,20.2634,18.81503,0.075,20.18309,18.69328,0.075,21.59896,19.08727,0.075,21.51865}, 12);
SoIndexedFaceSet1052->setCoord(*SoCoordinate1053);

SoShape1049->setGeometry(*SoIndexedFaceSet1052);

SoNode12->addChild(*SoShape1049);

SoShape* SoShape1054 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1055 = new SoVRMLAppearance();
SoMaterial* SoMaterial1056 = new SoMaterial();
SoMaterial1056->setAmbientIntensity(0);
SoMaterial1056->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1056->setShininess(0);
SoVRMLAppearance1055->addChild(*SoMaterial1056);

SoShape1054->addChild(*SoVRMLAppearance1055);

SoIndexedFaceSet* SoIndexedFaceSet1057 = new SoIndexedFaceSet();
SoIndexedFaceSet1057->setSolid(false);
SoIndexedFaceSet1057->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1057->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1058 = new SoCoordinate();
SoCoordinate1058->setPoint(new float[]{18.00746,0.075,20.3477,18.40145,0.075,20.2674,18.14358,0.075,21.01548,18.53757,0.075,20.93517,18.2797,0.075,21.68326,18.67368,0.075,21.60295}, 18);
SoIndexedFaceSet1057->setCoord(*SoCoordinate1058);

SoShape1054->setGeometry(*SoIndexedFaceSet1057);

SoNode12->addChild(*SoShape1054);

SoShape* SoShape1059 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1060 = new SoVRMLAppearance();
SoMaterial* SoMaterial1061 = new SoMaterial();
SoMaterial1061->setAmbientIntensity(0);
SoMaterial1061->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1061->setShininess(0);
SoVRMLAppearance1060->addChild(*SoMaterial1061);

SoShape1059->addChild(*SoVRMLAppearance1060);

SoIndexedFaceSet* SoIndexedFaceSet1062 = new SoIndexedFaceSet();
SoIndexedFaceSet1062->setSolid(false);
SoIndexedFaceSet1062->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1062->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1063 = new SoCoordinate();
SoCoordinate1063->setPoint(new float[]{18.00347,0.075,20.32811,17.86935,0.075,19.67013,18.81104,0.075,20.1635,18.67692,0.075,19.50552}, 12);
SoIndexedFaceSet1062->setCoord(*SoCoordinate1063);

SoShape1059->setGeometry(*SoIndexedFaceSet1062);

SoNode12->addChild(*SoShape1059);

SoShape* SoShape1064 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1065 = new SoVRMLAppearance();
SoMaterial* SoMaterial1066 = new SoMaterial();
SoMaterial1066->setAmbientIntensity(0);
SoMaterial1066->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1066->setShininess(0);
SoVRMLAppearance1065->addChild(*SoMaterial1066);

SoShape1064->addChild(*SoVRMLAppearance1065);

SoIndexedFaceSet* SoIndexedFaceSet1067 = new SoIndexedFaceSet();
SoIndexedFaceSet1067->setSolid(false);
SoIndexedFaceSet1067->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1067->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1068 = new SoCoordinate();
SoCoordinate1068->setPoint(new float[]{17.86535,0.075,19.65053,17.73124,0.075,18.99255,18.67293,0.075,19.48592,18.53881,0.075,18.82794}, 12);
SoIndexedFaceSet1067->setCoord(*SoCoordinate1068);

SoShape1064->setGeometry(*SoIndexedFaceSet1067);

SoNode12->addChild(*SoShape1064);

SoShape* SoShape1069 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1070 = new SoVRMLAppearance();
SoMaterial* SoMaterial1071 = new SoMaterial();
SoMaterial1071->setAmbientIntensity(0);
SoMaterial1071->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1071->setShininess(0);
SoVRMLAppearance1070->addChild(*SoMaterial1071);

SoShape1069->addChild(*SoVRMLAppearance1070);

SoIndexedFaceSet* SoIndexedFaceSet1072 = new SoIndexedFaceSet();
SoIndexedFaceSet1072->setSolid(false);
SoIndexedFaceSet1072->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1072->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1073 = new SoCoordinate();
SoCoordinate1073->setPoint(new float[]{17.86859,0.075,17.55309,18.06558,0.075,17.51294,18.26258,0.075,17.47279,18.00471,0.075,18.22087,18.2017,0.075,18.18072,18.39869,0.075,18.14056,18.14083,0.075,18.88865,18.33782,0.075,18.8485,18.53481,0.075,18.80834}, 27);
SoIndexedFaceSet1072->setCoord(*SoCoordinate1073);

SoShape1069->setGeometry(*SoIndexedFaceSet1072);

SoNode12->addChild(*SoShape1069);

SoShape* SoShape1074 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1075 = new SoVRMLAppearance();
SoMaterial* SoMaterial1076 = new SoMaterial();
SoMaterial1076->setAmbientIntensity(0);
SoMaterial1076->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1076->setShininess(0);
SoVRMLAppearance1075->addChild(*SoMaterial1076);

SoShape1074->addChild(*SoVRMLAppearance1075);

SoIndexedFaceSet* SoIndexedFaceSet1077 = new SoIndexedFaceSet();
SoIndexedFaceSet1077->setSolid(false);
SoIndexedFaceSet1077->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1077->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1078 = new SoCoordinate();
SoCoordinate1078->setPoint(new float[]{18.12123,0.075,18.89264,17.72724,0.075,18.97295,17.849,0.075,17.55709,17.45501,0.075,17.6374}, 12);
SoIndexedFaceSet1077->setCoord(*SoCoordinate1078);

SoShape1074->setGeometry(*SoIndexedFaceSet1077);

SoNode12->addChild(*SoShape1074);

SoShape* SoShape1079 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1080 = new SoVRMLAppearance();
SoMaterial* SoMaterial1081 = new SoMaterial();
SoMaterial1081->setAmbientIntensity(0);
SoMaterial1081->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1081->setShininess(0);
SoVRMLAppearance1080->addChild(*SoMaterial1081);

SoShape1079->addChild(*SoVRMLAppearance1080);

SoIndexedFaceSet* SoIndexedFaceSet1082 = new SoIndexedFaceSet();
SoIndexedFaceSet1082->setSolid(false);
SoIndexedFaceSet1082->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1082->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1083 = new SoCoordinate();
SoCoordinate1083->setPoint(new float[]{18.12446,0.075,16.79521,18.25858,0.075,17.45319,17.31689,0.075,16.95982,17.45101,0.075,17.6178}, 12);
SoIndexedFaceSet1082->setCoord(*SoCoordinate1083);

SoShape1079->setGeometry(*SoIndexedFaceSet1082);

SoNode12->addChild(*SoShape1079);

SoShape* SoShape1084 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1085 = new SoVRMLAppearance();
SoMaterial* SoMaterial1086 = new SoMaterial();
SoMaterial1086->setAmbientIntensity(0);
SoMaterial1086->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1086->setShininess(0);
SoVRMLAppearance1085->addChild(*SoMaterial1086);

SoShape1084->addChild(*SoVRMLAppearance1085);

SoIndexedFaceSet* SoIndexedFaceSet1087 = new SoIndexedFaceSet();
SoIndexedFaceSet1087->setSolid(false);
SoIndexedFaceSet1087->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1087->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1088 = new SoCoordinate();
SoCoordinate1088->setPoint(new float[]{17.3129,0.075,16.94022,17.17878,0.075,16.28225,18.12047,0.075,16.77561,17.98635,0.075,16.11763}, 12);
SoIndexedFaceSet1087->setCoord(*SoCoordinate1088);

SoShape1084->setGeometry(*SoIndexedFaceSet1087);

SoNode12->addChild(*SoShape1084);

SoShape* SoShape1089 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1090 = new SoVRMLAppearance();
SoMaterial* SoMaterial1091 = new SoMaterial();
SoMaterial1091->setAmbientIntensity(0);
SoMaterial1091->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1091->setShininess(0);
SoVRMLAppearance1090->addChild(*SoMaterial1091);

SoShape1089->addChild(*SoVRMLAppearance1090);

SoIndexedFaceSet* SoIndexedFaceSet1092 = new SoIndexedFaceSet();
SoIndexedFaceSet1092->setSolid(false);
SoIndexedFaceSet1092->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1092->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1093 = new SoCoordinate();
SoCoordinate1093->setPoint(new float[]{17.98236,0.075,16.09804,17.58837,0.075,16.17834,17.84624,0.075,15.43026,17.45225,0.075,15.51057,17.71012,0.075,14.76248,17.31614,0.075,14.84279}, 18);
SoIndexedFaceSet1092->setCoord(*SoCoordinate1093);

SoShape1089->setGeometry(*SoIndexedFaceSet1092);

SoNode12->addChild(*SoShape1089);

SoShape* SoShape1094 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1095 = new SoVRMLAppearance();
SoMaterial* SoMaterial1096 = new SoMaterial();
SoMaterial1096->setAmbientIntensity(0);
SoMaterial1096->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1096->setShininess(0);
SoVRMLAppearance1095->addChild(*SoMaterial1096);

SoShape1094->addChild(*SoVRMLAppearance1095);

SoIndexedFaceSet* SoIndexedFaceSet1097 = new SoIndexedFaceSet();
SoIndexedFaceSet1097->setSolid(false);
SoIndexedFaceSet1097->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1097->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1098 = new SoCoordinate();
SoCoordinate1098->setPoint(new float[]{17.56877,0.075,16.18234,17.37178,0.075,16.22249,17.17479,0.075,16.26265,17.43266,0.075,15.51456,17.23566,0.075,15.55472,17.03867,0.075,15.59487,17.29654,0.075,14.84678,17.09954,0.075,14.88694,16.90255,0.075,14.92709}, 27);
SoIndexedFaceSet1097->setCoord(*SoCoordinate1098);

SoShape1094->setGeometry(*SoIndexedFaceSet1097);

SoNode12->addChild(*SoShape1094);

SoShape* SoShape1099 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1100 = new SoVRMLAppearance();
SoMaterial* SoMaterial1101 = new SoMaterial();
SoMaterial1101->setAmbientIntensity(0);
SoMaterial1101->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1101->setShininess(0);
SoVRMLAppearance1100->addChild(*SoMaterial1101);

SoShape1099->addChild(*SoVRMLAppearance1100);

SoIndexedFaceSet* SoIndexedFaceSet1102 = new SoIndexedFaceSet();
SoIndexedFaceSet1102->setSolid(false);
SoIndexedFaceSet1102->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1102->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1103 = new SoCoordinate();
SoCoordinate1103->setPoint(new float[]{17.57201,0.075,14.0849,17.70613,0.075,14.74288,16.76444,0.075,14.24952,16.89856,0.075,14.9075}, 12);
SoIndexedFaceSet1102->setCoord(*SoCoordinate1103);

SoShape1099->setGeometry(*SoIndexedFaceSet1102);

SoNode12->addChild(*SoShape1099);

SoShape* SoShape1104 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1105 = new SoVRMLAppearance();
SoMaterial* SoMaterial1106 = new SoMaterial();
SoMaterial1106->setAmbientIntensity(0);
SoMaterial1106->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1106->setShininess(0);
SoVRMLAppearance1105->addChild(*SoMaterial1106);

SoShape1104->addChild(*SoVRMLAppearance1105);

SoIndexedFaceSet* SoIndexedFaceSet1107 = new SoIndexedFaceSet();
SoIndexedFaceSet1107->setSolid(false);
SoIndexedFaceSet1107->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1107->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1108 = new SoCoordinate();
SoCoordinate1108->setPoint(new float[]{16.76044,0.075,14.22992,16.62632,0.075,13.57194,17.16423,0.075,14.14761,17.03011,0.075,13.48963,17.56801,0.075,14.06531,17.4339,0.075,13.40733}, 18);
SoIndexedFaceSet1107->setCoord(*SoCoordinate1108);

SoShape1104->setGeometry(*SoIndexedFaceSet1107);

SoNode12->addChild(*SoShape1104);

SoShape* SoShape1109 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1110 = new SoVRMLAppearance();
SoMaterial* SoMaterial1111 = new SoMaterial();
SoMaterial1111->setAmbientIntensity(0);
SoMaterial1111->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1111->setShininess(0);
SoVRMLAppearance1110->addChild(*SoMaterial1111);

SoShape1109->addChild(*SoVRMLAppearance1110);

SoIndexedFaceSet* SoIndexedFaceSet1112 = new SoIndexedFaceSet();
SoIndexedFaceSet1112->setSolid(false);
SoIndexedFaceSet1112->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1112->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1113 = new SoCoordinate();
SoCoordinate1113->setPoint(new float[]{16.76368,0.075,12.13248,17.15767,0.075,12.05217,17.03591,0.075,13.46804,17.4299,0.075,13.38773}, 12);
SoIndexedFaceSet1112->setCoord(*SoCoordinate1113);

SoShape1109->setGeometry(*SoIndexedFaceSet1112);

SoNode12->addChild(*SoShape1109);

SoShape* SoShape1114 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1115 = new SoVRMLAppearance();
SoMaterial* SoMaterial1116 = new SoMaterial();
SoMaterial1116->setAmbientIntensity(0);
SoMaterial1116->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1116->setShininess(0);
SoVRMLAppearance1115->addChild(*SoMaterial1116);

SoShape1114->addChild(*SoVRMLAppearance1115);

SoIndexedFaceSet* SoIndexedFaceSet1117 = new SoIndexedFaceSet();
SoIndexedFaceSet1117->setSolid(false);
SoIndexedFaceSet1117->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1117->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1118 = new SoCoordinate();
SoCoordinate1118->setPoint(new float[]{16.3501,0.075,12.21679,16.54709,0.075,12.17663,16.74408,0.075,12.13648,16.48621,0.075,12.88456,16.68321,0.075,12.84441,16.8802,0.075,12.80426,16.62233,0.075,13.55234,16.81932,0.075,13.51219,17.01632,0.075,13.47203}, 27);
SoIndexedFaceSet1117->setCoord(*SoCoordinate1118);

SoShape1114->setGeometry(*SoIndexedFaceSet1117);

SoNode12->addChild(*SoShape1114);

SoShape* SoShape1119 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1120 = new SoVRMLAppearance();
SoMaterial* SoMaterial1121 = new SoMaterial();
SoMaterial1121->setAmbientIntensity(0);
SoMaterial1121->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1121->setShininess(0);
SoVRMLAppearance1120->addChild(*SoMaterial1121);

SoShape1119->addChild(*SoVRMLAppearance1120);

SoIndexedFaceSet* SoIndexedFaceSet1122 = new SoIndexedFaceSet();
SoIndexedFaceSet1122->setSolid(false);
SoIndexedFaceSet1122->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1122->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1123 = new SoCoordinate();
SoCoordinate1123->setPoint(new float[]{16.3461,0.075,12.19719,16.21198,0.075,11.53921,16.74989,0.075,12.11488,16.61577,0.075,11.4569,17.15367,0.075,12.03258,17.01955,0.075,11.3746}, 18);
SoIndexedFaceSet1122->setCoord(*SoCoordinate1123);

SoShape1119->setGeometry(*SoIndexedFaceSet1122);

SoNode12->addChild(*SoShape1119);

SoShape* SoShape1124 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1125 = new SoVRMLAppearance();
SoMaterial* SoMaterial1126 = new SoMaterial();
SoMaterial1126->setAmbientIntensity(0);
SoMaterial1126->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1126->setShininess(0);
SoVRMLAppearance1125->addChild(*SoMaterial1126);

SoShape1124->addChild(*SoVRMLAppearance1125);

SoIndexedFaceSet* SoIndexedFaceSet1127 = new SoIndexedFaceSet();
SoIndexedFaceSet1127->setSolid(false);
SoIndexedFaceSet1127->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1127->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1128 = new SoCoordinate();
SoCoordinate1128->setPoint(new float[]{16.20799,0.075,11.51961,16.07387,0.075,10.86163,16.61177,0.075,11.43731,16.47765,0.075,10.77933,17.01556,0.075,11.355,16.88144,0.075,10.69702}, 18);
SoIndexedFaceSet1127->setCoord(*SoCoordinate1128);

SoShape1124->setGeometry(*SoIndexedFaceSet1127);

SoNode12->addChild(*SoShape1124);

SoShape* SoShape1129 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1130 = new SoVRMLAppearance();
SoMaterial* SoMaterial1131 = new SoMaterial();
SoMaterial1131->setAmbientIntensity(0);
SoMaterial1131->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1131->setShininess(0);
SoVRMLAppearance1130->addChild(*SoMaterial1131);

SoShape1129->addChild(*SoVRMLAppearance1130);

SoIndexedFaceSet* SoIndexedFaceSet1132 = new SoIndexedFaceSet();
SoIndexedFaceSet1132->setSolid(false);
SoIndexedFaceSet1132->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1132->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1133 = new SoCoordinate();
SoCoordinate1133->setPoint(new float[]{16.87744,0.075,10.67743,16.48346,0.075,10.75773,16.74133,0.075,10.00965,16.34734,0.075,10.08996,16.60521,0.075,9.341869,16.21122,0.075,9.422177}, 18);
SoIndexedFaceSet1132->setCoord(*SoCoordinate1133);

SoShape1129->setGeometry(*SoIndexedFaceSet1132);

SoNode12->addChild(*SoShape1129);

SoShape* SoShape1134 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1135 = new SoVRMLAppearance();
SoMaterial* SoMaterial1136 = new SoMaterial();
SoMaterial1136->setAmbientIntensity(0);
SoMaterial1136->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1136->setShininess(0);
SoVRMLAppearance1135->addChild(*SoMaterial1136);

SoShape1134->addChild(*SoVRMLAppearance1135);

SoIndexedFaceSet* SoIndexedFaceSet1137 = new SoIndexedFaceSet();
SoIndexedFaceSet1137->setSolid(false);
SoIndexedFaceSet1137->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1137->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1138 = new SoCoordinate();
SoCoordinate1138->setPoint(new float[]{15.79764,0.075,9.506481,16.19163,0.075,9.426172,15.93376,0.075,10.17426,16.32774,0.075,10.09395,16.06987,0.075,10.84204,16.46386,0.075,10.76173}, 18);
SoIndexedFaceSet1137->setCoord(*SoCoordinate1138);

SoShape1134->setGeometry(*SoIndexedFaceSet1137);

SoNode12->addChild(*SoShape1134);

SoShape* SoShape1139 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1140 = new SoVRMLAppearance();
SoMaterial* SoMaterial1141 = new SoMaterial();
SoMaterial1141->setAmbientIntensity(0);
SoMaterial1141->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1141->setShininess(0);
SoVRMLAppearance1140->addChild(*SoMaterial1141);

SoShape1139->addChild(*SoVRMLAppearance1140);

SoIndexedFaceSet* SoIndexedFaceSet1142 = new SoIndexedFaceSet();
SoIndexedFaceSet1142->setSolid(false);
SoIndexedFaceSet1142->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1142->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1143 = new SoCoordinate();
SoCoordinate1143->setPoint(new float[]{16.4671,0.075,8.664293,16.60122,0.075,9.322272,16.06331,0.075,8.746598,16.19743,0.075,9.404578,15.65953,0.075,8.828904,15.79364,0.075,9.486884}, 18);
SoIndexedFaceSet1142->setCoord(*SoCoordinate1143);

SoShape1139->setGeometry(*SoIndexedFaceSet1142);

SoNode12->addChild(*SoShape1139);

SoShape* SoShape1144 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1145 = new SoVRMLAppearance();
SoMaterial* SoMaterial1146 = new SoMaterial();
SoMaterial1146->setAmbientIntensity(0);
SoMaterial1146->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1146->setShininess(0);
SoVRMLAppearance1145->addChild(*SoMaterial1146);

SoShape1144->addChild(*SoVRMLAppearance1145);

SoIndexedFaceSet* SoIndexedFaceSet1147 = new SoIndexedFaceSet();
SoIndexedFaceSet1147->setSolid(false);
SoIndexedFaceSet1147->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1147->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1148 = new SoCoordinate();
SoCoordinate1148->setPoint(new float[]{16.32898,0.075,7.986716,16.4631,0.075,8.644696,15.52141,0.075,8.151328,15.65553,0.075,8.809307}, 12);
SoIndexedFaceSet1147->setCoord(*SoCoordinate1148);

SoShape1144->setGeometry(*SoIndexedFaceSet1147);

SoNode12->addChild(*SoShape1144);

SoShape* SoShape1149 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1150 = new SoVRMLAppearance();
SoMaterial* SoMaterial1151 = new SoMaterial();
SoMaterial1151->setAmbientIntensity(0);
SoMaterial1151->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1151->setShininess(0);
SoVRMLAppearance1150->addChild(*SoMaterial1151);

SoShape1149->addChild(*SoVRMLAppearance1150);

SoIndexedFaceSet* SoIndexedFaceSet1152 = new SoIndexedFaceSet();
SoIndexedFaceSet1152->setSolid(false);
SoIndexedFaceSet1152->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1152->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1153 = new SoCoordinate();
SoCoordinate1153->setPoint(new float[]{15.65877,0.075,6.711872,16.05276,0.075,6.631564,15.79488,0.075,7.37965,16.18887,0.075,7.299342,15.931,0.075,8.047428,16.32499,0.075,7.967119}, 18);
SoIndexedFaceSet1152->setCoord(*SoCoordinate1153);

SoShape1149->setGeometry(*SoIndexedFaceSet1152);

SoNode12->addChild(*SoShape1149);

SoShape* SoShape1154 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1155 = new SoVRMLAppearance();
SoMaterial* SoMaterial1156 = new SoMaterial();
SoMaterial1156->setAmbientIntensity(0);
SoMaterial1156->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1156->setShininess(0);
SoVRMLAppearance1155->addChild(*SoMaterial1156);

SoShape1154->addChild(*SoVRMLAppearance1155);

SoIndexedFaceSet* SoIndexedFaceSet1157 = new SoIndexedFaceSet();
SoIndexedFaceSet1157->setSolid(false);
SoIndexedFaceSet1157->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1157->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1158 = new SoCoordinate();
SoCoordinate1158->setPoint(new float[]{15.24518,0.075,6.796175,15.44218,0.075,6.756021,15.63917,0.075,6.715867,15.3813,0.075,7.463953,15.57829,0.075,7.423799,15.77529,0.075,7.383645,15.51742,0.075,8.131731,15.71441,0.075,8.091577,15.9114,0.075,8.051422}, 27);
SoIndexedFaceSet1157->setCoord(*SoCoordinate1158);

SoShape1154->setGeometry(*SoIndexedFaceSet1157);

SoNode12->addChild(*SoShape1154);

SoShape* SoShape1159 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1160 = new SoVRMLAppearance();
SoMaterial* SoMaterial1161 = new SoMaterial();
SoMaterial1161->setAmbientIntensity(0);
SoMaterial1161->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1161->setShininess(0);
SoVRMLAppearance1160->addChild(*SoMaterial1161);

SoShape1159->addChild(*SoVRMLAppearance1160);

SoIndexedFaceSet* SoIndexedFaceSet1162 = new SoIndexedFaceSet();
SoIndexedFaceSet1162->setSolid(false);
SoIndexedFaceSet1162->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1162->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1163 = new SoCoordinate();
SoCoordinate1163->setPoint(new float[]{15.91464,0.075,5.953987,16.04876,0.075,6.611967,15.10707,0.075,6.118598,15.24119,0.075,6.776578}, 12);
SoIndexedFaceSet1162->setCoord(*SoCoordinate1163);

SoShape1159->setGeometry(*SoIndexedFaceSet1162);

SoNode12->addChild(*SoShape1159);

SoShape* SoShape1164 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1165 = new SoVRMLAppearance();
SoMaterial* SoMaterial1166 = new SoMaterial();
SoMaterial1166->setAmbientIntensity(0);
SoMaterial1166->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1166->setShininess(0);
SoVRMLAppearance1165->addChild(*SoMaterial1166);

SoShape1164->addChild(*SoVRMLAppearance1165);

SoIndexedFaceSet* SoIndexedFaceSet1167 = new SoIndexedFaceSet();
SoIndexedFaceSet1167->setSolid(false);
SoIndexedFaceSet1167->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoIndexedFaceSet1167->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoCoordinate* SoCoordinate1168 = new SoCoordinate();
SoCoordinate1168->setPoint(new float[]{15.10308,0.075,6.099001,15.03602,0.075,5.770012,14.96896,0.075,5.441022,15.91065,0.075,5.93439,15.84359,0.075,5.605401,15.77653,0.075,5.276411}, 18);
SoIndexedFaceSet1167->setCoord(*SoCoordinate1168);

SoShape1164->setGeometry(*SoIndexedFaceSet1167);

SoNode12->addChild(*SoShape1164);

SoShape* SoShape1169 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1170 = new SoVRMLAppearance();
SoMaterial* SoMaterial1171 = new SoMaterial();
SoMaterial1171->setAmbientIntensity(0);
SoMaterial1171->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1171->setShininess(0);
SoVRMLAppearance1170->addChild(*SoMaterial1171);

SoShape1169->addChild(*SoVRMLAppearance1170);

SoIndexedFaceSet* SoIndexedFaceSet1172 = new SoIndexedFaceSet();
SoIndexedFaceSet1172->setSolid(false);
SoIndexedFaceSet1172->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1172->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1173 = new SoCoordinate();
SoCoordinate1173->setPoint(new float[]{15.77253,0.075,5.256814,15.37854,0.075,5.337122,15.63642,0.075,4.589036,15.24243,0.075,4.669344,15.5003,0.075,3.921258,15.10631,0.075,4.001566}, 18);
SoIndexedFaceSet1172->setCoord(*SoCoordinate1173);

SoShape1169->setGeometry(*SoIndexedFaceSet1172);

SoNode12->addChild(*SoShape1169);

SoShape* SoShape1174 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1175 = new SoVRMLAppearance();
SoMaterial* SoMaterial1176 = new SoMaterial();
SoMaterial1176->setAmbientIntensity(0);
SoMaterial1176->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1176->setShininess(0);
SoVRMLAppearance1175->addChild(*SoMaterial1176);

SoShape1174->addChild(*SoVRMLAppearance1175);

SoIndexedFaceSet* SoIndexedFaceSet1177 = new SoIndexedFaceSet();
SoIndexedFaceSet1177->setSolid(false);
SoIndexedFaceSet1177->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1177->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1178 = new SoCoordinate();
SoCoordinate1178->setPoint(new float[]{14.69273,0.075,4.085869,14.88972,0.075,4.045715,15.08671,0.075,4.005561,14.82884,0.075,4.753647,15.02584,0.075,4.713493,15.22283,0.075,4.673339,14.96496,0.075,5.421425,15.16195,0.075,5.381271,15.35895,0.075,5.341117}, 27);
SoIndexedFaceSet1177->setCoord(*SoCoordinate1178);

SoShape1174->setGeometry(*SoIndexedFaceSet1177);

SoNode12->addChild(*SoShape1174);

SoShape* SoShape1179 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1180 = new SoVRMLAppearance();
SoMaterial* SoMaterial1181 = new SoMaterial();
SoMaterial1181->setAmbientIntensity(0);
SoMaterial1181->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1181->setShininess(0);
SoVRMLAppearance1180->addChild(*SoMaterial1181);

SoShape1179->addChild(*SoVRMLAppearance1180);

SoIndexedFaceSet* SoIndexedFaceSet1182 = new SoIndexedFaceSet();
SoIndexedFaceSet1182->setSolid(false);
SoIndexedFaceSet1182->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1182->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1183 = new SoCoordinate();
SoCoordinate1183->setPoint(new float[]{15.36218,0.075,3.243681,15.4963,0.075,3.901661,14.9584,0.075,3.325987,15.09252,0.075,3.983967,14.55461,0.075,3.408293,14.68873,0.075,4.066272}, 18);
SoIndexedFaceSet1182->setCoord(*SoCoordinate1183);

SoShape1179->setGeometry(*SoIndexedFaceSet1182);

SoNode12->addChild(*SoShape1179);

SoShape* SoShape1184 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1185 = new SoVRMLAppearance();
SoMaterial* SoMaterial1186 = new SoMaterial();
SoMaterial1186->setAmbientIntensity(0);
SoMaterial1186->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1186->setShininess(0);
SoVRMLAppearance1185->addChild(*SoMaterial1186);

SoShape1184->addChild(*SoVRMLAppearance1185);

SoIndexedFaceSet* SoIndexedFaceSet1187 = new SoIndexedFaceSet();
SoIndexedFaceSet1187->setSolid(false);
SoIndexedFaceSet1187->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1187->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1188 = new SoCoordinate();
SoCoordinate1188->setPoint(new float[]{14.55062,0.075,3.388696,14.4165,0.075,2.730716,15.35819,0.075,3.224084,15.22407,0.075,2.566105}, 12);
SoIndexedFaceSet1187->setCoord(*SoCoordinate1188);

SoShape1184->setGeometry(*SoIndexedFaceSet1187);

SoNode12->addChild(*SoShape1184);

SoShape* SoShape1189 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1190 = new SoVRMLAppearance();
SoMaterial* SoMaterial1191 = new SoMaterial();
SoMaterial1191->setAmbientIntensity(0);
SoMaterial1191->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1191->setShininess(0);
SoVRMLAppearance1190->addChild(*SoMaterial1191);

SoShape1189->addChild(*SoVRMLAppearance1190);

SoIndexedFaceSet* SoIndexedFaceSet1192 = new SoIndexedFaceSet();
SoIndexedFaceSet1192->setSolid(false);
SoIndexedFaceSet1192->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1192->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1193 = new SoCoordinate();
SoCoordinate1193->setPoint(new float[]{17.86687,0.075,23.88459,17.73275,0.075,23.22662,18.27066,0.075,23.80229,18.13654,0.075,23.14431,18.67444,0.075,23.71998,18.54032,0.075,23.062}, 18);
SoIndexedFaceSet1192->setCoord(*SoCoordinate1193);

SoShape1189->setGeometry(*SoIndexedFaceSet1192);

SoNode12->addChild(*SoShape1189);

SoShape* SoShape1194 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1195 = new SoVRMLAppearance();
SoMaterial* SoMaterial1196 = new SoMaterial();
SoMaterial1196->setAmbientIntensity(0);
SoMaterial1196->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1196->setShininess(0);
SoVRMLAppearance1195->addChild(*SoMaterial1196);

SoShape1194->addChild(*SoVRMLAppearance1195);

SoIndexedFaceSet* SoIndexedFaceSet1197 = new SoIndexedFaceSet();
SoIndexedFaceSet1197->setSolid(false);
SoIndexedFaceSet1197->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1197->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1198 = new SoCoordinate();
SoCoordinate1198->setPoint(new float[]{17.87011,0.075,21.78716,18.0671,0.075,21.74701,18.2641,0.075,21.70685,18.00622,0.075,22.45494,18.20322,0.075,22.41478,18.40021,0.075,22.37463,18.14234,0.075,23.12271,18.33933,0.075,23.08256,18.53633,0.075,23.04241}, 27);
SoIndexedFaceSet1197->setCoord(*SoCoordinate1198);

SoShape1194->setGeometry(*SoIndexedFaceSet1197);

SoNode12->addChild(*SoShape1194);

SoShape* SoShape1199 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1200 = new SoVRMLAppearance();
SoMaterial* SoMaterial1201 = new SoMaterial();
SoMaterial1201->setAmbientIntensity(0);
SoMaterial1201->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1201->setShininess(0);
SoVRMLAppearance1200->addChild(*SoMaterial1201);

SoShape1199->addChild(*SoVRMLAppearance1200);

SoIndexedFaceSet* SoIndexedFaceSet1202 = new SoIndexedFaceSet();
SoIndexedFaceSet1202->setSolid(false);
SoIndexedFaceSet1202->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1202->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1203 = new SoCoordinate();
SoCoordinate1203->setPoint(new float[]{18.12274,0.075,23.12671,17.92575,0.075,23.16686,17.72876,0.075,23.20702,17.98663,0.075,22.45893,17.78963,0.075,22.49909,17.59264,0.075,22.53924,17.85051,0.075,21.79115,17.65352,0.075,21.83131,17.45652,0.075,21.87146}, 27);
SoIndexedFaceSet1202->setCoord(*SoCoordinate1203);

SoShape1199->setGeometry(*SoIndexedFaceSet1202);

SoNode12->addChild(*SoShape1199);

SoShape* SoShape1204 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1205 = new SoVRMLAppearance();
SoMaterial* SoMaterial1206 = new SoMaterial();
SoMaterial1206->setAmbientIntensity(0);
SoMaterial1206->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1206->setShininess(0);
SoVRMLAppearance1205->addChild(*SoMaterial1206);

SoShape1204->addChild(*SoVRMLAppearance1205);

SoIndexedFaceSet* SoIndexedFaceSet1207 = new SoIndexedFaceSet();
SoIndexedFaceSet1207->setSolid(false);
SoIndexedFaceSet1207->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1207->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1208 = new SoCoordinate();
SoCoordinate1208->setPoint(new float[]{17.45253,0.075,21.85187,17.31841,0.075,21.19389,17.85631,0.075,21.76956,17.72219,0.075,21.11158,18.2601,0.075,21.68725,18.12598,0.075,21.02927}, 18);
SoIndexedFaceSet1207->setCoord(*SoCoordinate1208);

SoShape1204->setGeometry(*SoIndexedFaceSet1207);

SoNode12->addChild(*SoShape1204);

SoShape* SoShape1209 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1210 = new SoVRMLAppearance();
SoMaterial* SoMaterial1211 = new SoMaterial();
SoMaterial1211->setAmbientIntensity(0);
SoMaterial1211->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1211->setShininess(0);
SoVRMLAppearance1210->addChild(*SoMaterial1211);

SoShape1209->addChild(*SoVRMLAppearance1210);

SoIndexedFaceSet* SoIndexedFaceSet1212 = new SoIndexedFaceSet();
SoIndexedFaceSet1212->setSolid(false);
SoIndexedFaceSet1212->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1212->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1213 = new SoCoordinate();
SoCoordinate1213->setPoint(new float[]{17.98787,0.075,20.3517,18.12199,0.075,21.00968,17.1803,0.075,20.51631,17.31441,0.075,21.17429}, 12);
SoIndexedFaceSet1212->setCoord(*SoCoordinate1213);

SoShape1209->setGeometry(*SoIndexedFaceSet1212);

SoNode12->addChild(*SoShape1209);

SoShape* SoShape1214 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1215 = new SoVRMLAppearance();
SoMaterial* SoMaterial1216 = new SoMaterial();
SoMaterial1216->setAmbientIntensity(0);
SoMaterial1216->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1216->setShininess(0);
SoVRMLAppearance1215->addChild(*SoMaterial1216);

SoShape1214->addChild(*SoVRMLAppearance1215);

SoIndexedFaceSet* SoIndexedFaceSet1217 = new SoIndexedFaceSet();
SoIndexedFaceSet1217->setSolid(false);
SoIndexedFaceSet1217->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1217->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1218 = new SoCoordinate();
SoCoordinate1218->setPoint(new float[]{17.98387,0.075,20.3321,17.78688,0.075,20.37226,17.58989,0.075,20.41241,17.84776,0.075,19.66432,17.65076,0.075,19.70448,17.45377,0.075,19.74463,17.71164,0.075,18.99655,17.51464,0.075,19.0367,17.31765,0.075,19.07685}, 27);
SoIndexedFaceSet1217->setCoord(*SoCoordinate1218);

SoShape1214->setGeometry(*SoIndexedFaceSet1217);

SoNode12->addChild(*SoShape1214);

SoShape* SoShape1219 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1220 = new SoVRMLAppearance();
SoMaterial* SoMaterial1221 = new SoMaterial();
SoMaterial1221->setAmbientIntensity(0);
SoMaterial1221->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1221->setShininess(0);
SoVRMLAppearance1220->addChild(*SoMaterial1221);

SoShape1219->addChild(*SoVRMLAppearance1220);

SoIndexedFaceSet* SoIndexedFaceSet1222 = new SoIndexedFaceSet();
SoIndexedFaceSet1222->setSolid(false);
SoIndexedFaceSet1222->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1222->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1223 = new SoCoordinate();
SoCoordinate1223->setPoint(new float[]{16.90407,0.075,19.16116,17.10106,0.075,19.121,17.29805,0.075,19.08085,17.04018,0.075,19.82894,17.23718,0.075,19.78878,17.43417,0.075,19.74863,17.1763,0.075,20.49671,17.37329,0.075,20.45656,17.57029,0.075,20.4164}, 27);
SoIndexedFaceSet1222->setCoord(*SoCoordinate1223);

SoShape1219->setGeometry(*SoIndexedFaceSet1222);

SoNode12->addChild(*SoShape1219);

SoShape* SoShape1224 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1225 = new SoVRMLAppearance();
SoMaterial* SoMaterial1226 = new SoMaterial();
SoMaterial1226->setAmbientIntensity(0);
SoMaterial1226->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1226->setShininess(0);
SoVRMLAppearance1225->addChild(*SoMaterial1226);

SoShape1224->addChild(*SoVRMLAppearance1225);

SoIndexedFaceSet* SoIndexedFaceSet1227 = new SoIndexedFaceSet();
SoIndexedFaceSet1227->setSolid(false);
SoIndexedFaceSet1227->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1227->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1228 = new SoCoordinate();
SoCoordinate1228->setPoint(new float[]{17.57352,0.075,18.31897,17.70764,0.075,18.97695,17.16974,0.075,18.40127,17.30386,0.075,19.05925,16.76595,0.075,18.48358,16.90007,0.075,19.14156}, 18);
SoIndexedFaceSet1227->setCoord(*SoCoordinate1228);

SoShape1224->setGeometry(*SoIndexedFaceSet1227);

SoNode12->addChild(*SoShape1224);

SoShape* SoShape1229 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1230 = new SoVRMLAppearance();
SoMaterial* SoMaterial1231 = new SoMaterial();
SoMaterial1231->setAmbientIntensity(0);
SoMaterial1231->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1231->setShininess(0);
SoVRMLAppearance1230->addChild(*SoMaterial1231);

SoShape1229->addChild(*SoVRMLAppearance1230);

SoIndexedFaceSet* SoIndexedFaceSet1232 = new SoIndexedFaceSet();
SoIndexedFaceSet1232->setSolid(false);
SoIndexedFaceSet1232->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1232->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1233 = new SoCoordinate();
SoCoordinate1233->setPoint(new float[]{17.43541,0.075,17.64139,17.56953,0.075,18.29937,17.03163,0.075,17.7237,17.16574,0.075,18.38168,16.62784,0.075,17.806,16.76196,0.075,18.46398}, 18);
SoIndexedFaceSet1232->setCoord(*SoCoordinate1233);

SoShape1229->setGeometry(*SoIndexedFaceSet1232);

SoNode12->addChild(*SoShape1229);

SoShape* SoShape1234 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1235 = new SoVRMLAppearance();
SoMaterial* SoMaterial1236 = new SoMaterial();
SoMaterial1236->setAmbientIntensity(0);
SoMaterial1236->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1236->setShininess(0);
SoVRMLAppearance1235->addChild(*SoMaterial1236);

SoShape1234->addChild(*SoVRMLAppearance1235);

SoIndexedFaceSet* SoIndexedFaceSet1237 = new SoIndexedFaceSet();
SoIndexedFaceSet1237->setSolid(false);
SoIndexedFaceSet1237->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1237->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1238 = new SoCoordinate();
SoCoordinate1238->setPoint(new float[]{16.7652,0.075,16.36655,16.96219,0.075,16.32639,17.15918,0.075,16.28624,16.90131,0.075,17.03433,17.09831,0.075,16.99417,17.2953,0.075,16.95402,17.03743,0.075,17.7021,17.23442,0.075,17.66195,17.43142,0.075,17.6218}, 27);
SoIndexedFaceSet1237->setCoord(*SoCoordinate1238);

SoShape1234->setGeometry(*SoIndexedFaceSet1237);

SoNode12->addChild(*SoShape1234);

SoShape* SoShape1239 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1240 = new SoVRMLAppearance();
SoMaterial* SoMaterial1241 = new SoMaterial();
SoMaterial1241->setAmbientIntensity(0);
SoMaterial1241->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1241->setShininess(0);
SoVRMLAppearance1240->addChild(*SoMaterial1241);

SoShape1239->addChild(*SoVRMLAppearance1240);

SoIndexedFaceSet* SoIndexedFaceSet1242 = new SoIndexedFaceSet();
SoIndexedFaceSet1242->setSolid(false);
SoIndexedFaceSet1242->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1242->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1243 = new SoCoordinate();
SoCoordinate1243->setPoint(new float[]{16.35161,0.075,16.45085,16.7456,0.075,16.37054,16.48773,0.075,17.11863,16.88172,0.075,17.03832,16.62385,0.075,17.78641,17.01783,0.075,17.7061}, 18);
SoIndexedFaceSet1242->setCoord(*SoCoordinate1243);

SoShape1239->setGeometry(*SoIndexedFaceSet1242);

SoNode12->addChild(*SoShape1239);

SoShape* SoShape1244 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1245 = new SoVRMLAppearance();
SoMaterial* SoMaterial1246 = new SoMaterial();
SoMaterial1246->setAmbientIntensity(0);
SoMaterial1246->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1246->setShininess(0);
SoVRMLAppearance1245->addChild(*SoMaterial1246);

SoShape1244->addChild(*SoVRMLAppearance1245);

SoIndexedFaceSet* SoIndexedFaceSet1247 = new SoIndexedFaceSet();
SoIndexedFaceSet1247->setSolid(false);
SoIndexedFaceSet1247->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1247->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1248 = new SoCoordinate();
SoCoordinate1248->setPoint(new float[]{17.02107,0.075,15.60866,17.15519,0.075,16.26664,16.2135,0.075,15.77327,16.34762,0.075,16.43125}, 12);
SoIndexedFaceSet1247->setCoord(*SoCoordinate1248);

SoShape1244->setGeometry(*SoIndexedFaceSet1247);

SoNode12->addChild(*SoShape1244);

SoShape* SoShape1249 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1250 = new SoVRMLAppearance();
SoMaterial* SoMaterial1251 = new SoMaterial();
SoMaterial1251->setAmbientIntensity(0);
SoMaterial1251->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1251->setShininess(0);
SoVRMLAppearance1250->addChild(*SoMaterial1251);

SoShape1249->addChild(*SoVRMLAppearance1250);

SoIndexedFaceSet* SoIndexedFaceSet1252 = new SoIndexedFaceSet();
SoIndexedFaceSet1252->setSolid(false);
SoIndexedFaceSet1252->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1252->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1253 = new SoCoordinate();
SoCoordinate1253->setPoint(new float[]{16.2095,0.075,15.75368,16.07538,0.075,15.0957,16.61329,0.075,15.67137,16.47917,0.075,15.01339,17.01707,0.075,15.58907,16.88296,0.075,14.93109}, 18);
SoIndexedFaceSet1252->setCoord(*SoCoordinate1253);

SoShape1249->setGeometry(*SoIndexedFaceSet1252);

SoNode12->addChild(*SoShape1249);

SoShape* SoShape1254 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1255 = new SoVRMLAppearance();
SoMaterial* SoMaterial1256 = new SoMaterial();
SoMaterial1256->setAmbientIntensity(0);
SoMaterial1256->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1256->setShininess(0);
SoVRMLAppearance1255->addChild(*SoMaterial1256);

SoShape1254->addChild(*SoVRMLAppearance1255);

SoIndexedFaceSet* SoIndexedFaceSet1257 = new SoIndexedFaceSet();
SoIndexedFaceSet1257->setSolid(false);
SoIndexedFaceSet1257->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1257->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1258 = new SoCoordinate();
SoCoordinate1258->setPoint(new float[]{16.87896,0.075,14.91149,16.48497,0.075,14.9918,16.60673,0.075,13.57593,16.21274,0.075,13.65624}, 12);
SoIndexedFaceSet1257->setCoord(*SoCoordinate1258);

SoShape1254->setGeometry(*SoIndexedFaceSet1257);

SoNode12->addChild(*SoShape1254);

SoShape* SoShape1259 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1260 = new SoVRMLAppearance();
SoMaterial* SoMaterial1261 = new SoMaterial();
SoMaterial1261->setAmbientIntensity(0);
SoMaterial1261->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1261->setShininess(0);
SoVRMLAppearance1260->addChild(*SoMaterial1261);

SoShape1259->addChild(*SoVRMLAppearance1260);

SoIndexedFaceSet* SoIndexedFaceSet1262 = new SoIndexedFaceSet();
SoIndexedFaceSet1262->setSolid(false);
SoIndexedFaceSet1262->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1262->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1263 = new SoCoordinate();
SoCoordinate1263->setPoint(new float[]{16.46538,0.075,14.99579,16.07139,0.075,15.0761,16.19314,0.075,13.66024,15.79916,0.075,13.74055}, 12);
SoIndexedFaceSet1262->setCoord(*SoCoordinate1263);

SoShape1259->setGeometry(*SoIndexedFaceSet1262);

SoNode12->addChild(*SoShape1259);

SoShape* SoShape1264 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1265 = new SoVRMLAppearance();
SoMaterial* SoMaterial1266 = new SoMaterial();
SoMaterial1266->setAmbientIntensity(0);
SoMaterial1266->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1266->setShininess(0);
SoVRMLAppearance1265->addChild(*SoMaterial1266);

SoShape1264->addChild(*SoVRMLAppearance1265);

SoIndexedFaceSet* SoIndexedFaceSet1267 = new SoIndexedFaceSet();
SoIndexedFaceSet1267->setSolid(false);
SoIndexedFaceSet1267->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1267->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1268 = new SoCoordinate();
SoCoordinate1268->setPoint(new float[]{16.46861,0.075,12.89836,16.60273,0.075,13.55634,15.66104,0.075,13.06297,15.79516,0.075,13.72095}, 12);
SoIndexedFaceSet1267->setCoord(*SoCoordinate1268);

SoShape1264->setGeometry(*SoIndexedFaceSet1267);

SoNode12->addChild(*SoShape1264);

SoShape* SoShape1269 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1270 = new SoVRMLAppearance();
SoMaterial* SoMaterial1271 = new SoMaterial();
SoMaterial1271->setAmbientIntensity(0);
SoMaterial1271->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1271->setShininess(0);
SoVRMLAppearance1270->addChild(*SoMaterial1271);

SoShape1269->addChild(*SoVRMLAppearance1270);

SoIndexedFaceSet* SoIndexedFaceSet1272 = new SoIndexedFaceSet();
SoIndexedFaceSet1272->setSolid(false);
SoIndexedFaceSet1272->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1272->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1273 = new SoCoordinate();
SoCoordinate1273->setPoint(new float[]{15.65705,0.075,13.04337,15.52293,0.075,12.38539,16.06083,0.075,12.96107,15.92671,0.075,12.30309,16.46462,0.075,12.87876,16.3305,0.075,12.22078}, 18);
SoIndexedFaceSet1272->setCoord(*SoCoordinate1273);

SoShape1269->setGeometry(*SoIndexedFaceSet1272);

SoNode12->addChild(*SoShape1269);

SoShape* SoShape1274 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1275 = new SoVRMLAppearance();
SoMaterial* SoMaterial1276 = new SoMaterial();
SoMaterial1276->setAmbientIntensity(0);
SoMaterial1276->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1276->setShininess(0);
SoVRMLAppearance1275->addChild(*SoMaterial1276);

SoShape1274->addChild(*SoVRMLAppearance1275);

SoIndexedFaceSet* SoIndexedFaceSet1277 = new SoIndexedFaceSet();
SoIndexedFaceSet1277->setSolid(false);
SoIndexedFaceSet1277->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1277->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1278 = new SoCoordinate();
SoCoordinate1278->setPoint(new float[]{16.3265,0.075,12.20118,15.93252,0.075,12.28149,16.05427,0.075,10.86563,15.66028,0.075,10.94594}, 12);
SoIndexedFaceSet1277->setCoord(*SoCoordinate1278);

SoShape1274->setGeometry(*SoIndexedFaceSet1277);

SoNode12->addChild(*SoShape1274);

SoShape* SoShape1279 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1280 = new SoVRMLAppearance();
SoMaterial* SoMaterial1281 = new SoMaterial();
SoMaterial1281->setAmbientIntensity(0);
SoMaterial1281->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1281->setShininess(0);
SoVRMLAppearance1280->addChild(*SoMaterial1281);

SoShape1279->addChild(*SoVRMLAppearance1280);

SoIndexedFaceSet* SoIndexedFaceSet1282 = new SoIndexedFaceSet();
SoIndexedFaceSet1282->setSolid(false);
SoIndexedFaceSet1282->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1282->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1283 = new SoCoordinate();
SoCoordinate1283->setPoint(new float[]{15.91292,0.075,12.28549,15.51893,0.075,12.3658,15.64069,0.075,10.94993,15.2467,0.075,11.03024}, 12);
SoIndexedFaceSet1282->setCoord(*SoCoordinate1283);

SoShape1279->setGeometry(*SoIndexedFaceSet1282);

SoNode12->addChild(*SoShape1279);

SoShape* SoShape1284 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1285 = new SoVRMLAppearance();
SoMaterial* SoMaterial1286 = new SoMaterial();
SoMaterial1286->setAmbientIntensity(0);
SoMaterial1286->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1286->setShininess(0);
SoVRMLAppearance1285->addChild(*SoMaterial1286);

SoShape1284->addChild(*SoVRMLAppearance1285);

SoIndexedFaceSet* SoIndexedFaceSet1287 = new SoIndexedFaceSet();
SoIndexedFaceSet1287->setSolid(false);
SoIndexedFaceSet1287->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1287->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1288 = new SoCoordinate();
SoCoordinate1288->setPoint(new float[]{15.24271,0.075,11.01064,15.10859,0.075,10.35266,16.05028,0.075,10.84603,15.91616,0.075,10.18805}, 12);
SoIndexedFaceSet1287->setCoord(*SoCoordinate1288);

SoShape1284->setGeometry(*SoIndexedFaceSet1287);

SoNode12->addChild(*SoShape1284);

SoShape* SoShape1289 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1290 = new SoVRMLAppearance();
SoMaterial* SoMaterial1291 = new SoMaterial();
SoMaterial1291->setAmbientIntensity(0);
SoMaterial1291->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1291->setShininess(0);
SoVRMLAppearance1290->addChild(*SoMaterial1291);

SoShape1289->addChild(*SoVRMLAppearance1290);

SoIndexedFaceSet* SoIndexedFaceSet1292 = new SoIndexedFaceSet();
SoIndexedFaceSet1292->setSolid(false);
SoIndexedFaceSet1292->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1292->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1293 = new SoCoordinate();
SoCoordinate1293->setPoint(new float[]{15.10459,0.075,10.33307,14.97047,0.075,9.675087,15.91216,0.075,10.16846,15.77804,0.075,9.510475}, 12);
SoIndexedFaceSet1292->setCoord(*SoCoordinate1293);

SoShape1289->setGeometry(*SoIndexedFaceSet1292);

SoNode12->addChild(*SoShape1289);

SoShape* SoShape1294 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1295 = new SoVRMLAppearance();
SoMaterial* SoMaterial1296 = new SoMaterial();
SoMaterial1296->setAmbientIntensity(0);
SoMaterial1296->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1296->setShininess(0);
SoVRMLAppearance1295->addChild(*SoMaterial1296);

SoShape1294->addChild(*SoVRMLAppearance1295);

SoIndexedFaceSet* SoIndexedFaceSet1297 = new SoIndexedFaceSet();
SoIndexedFaceSet1297->setSolid(false);
SoIndexedFaceSet1297->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1297->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1298 = new SoCoordinate();
SoCoordinate1298->setPoint(new float[]{15.77405,0.075,9.490878,15.38006,0.075,9.571187,15.50181,0.075,8.155322,15.10783,0.075,8.235631}, 12);
SoIndexedFaceSet1297->setCoord(*SoCoordinate1298);

SoShape1294->setGeometry(*SoIndexedFaceSet1297);

SoNode12->addChild(*SoShape1294);

SoShape* SoShape1299 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1300 = new SoVRMLAppearance();
SoMaterial* SoMaterial1301 = new SoMaterial();
SoMaterial1301->setAmbientIntensity(0);
SoMaterial1301->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1301->setShininess(0);
SoVRMLAppearance1300->addChild(*SoMaterial1301);

SoShape1299->addChild(*SoVRMLAppearance1300);

SoIndexedFaceSet* SoIndexedFaceSet1302 = new SoIndexedFaceSet();
SoIndexedFaceSet1302->setSolid(false);
SoIndexedFaceSet1302->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1302->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1303 = new SoCoordinate();
SoCoordinate1303->setPoint(new float[]{15.36046,0.075,9.575181,15.16347,0.075,9.615335,14.96648,0.075,9.65549,15.22435,0.075,8.907403,15.02735,0.075,8.947557,14.83036,0.075,8.987712,15.08823,0.075,8.239626,14.89124,0.075,8.279779,14.69424,0.075,8.319934}, 27);
SoIndexedFaceSet1302->setCoord(*SoCoordinate1303);

SoShape1299->setGeometry(*SoIndexedFaceSet1302);

SoNode12->addChild(*SoShape1299);

SoShape* SoShape1304 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1305 = new SoVRMLAppearance();
SoMaterial* SoMaterial1306 = new SoMaterial();
SoMaterial1306->setAmbientIntensity(0);
SoMaterial1306->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1306->setShininess(0);
SoVRMLAppearance1305->addChild(*SoMaterial1306);

SoShape1304->addChild(*SoVRMLAppearance1305);

SoIndexedFaceSet* SoIndexedFaceSet1307 = new SoIndexedFaceSet();
SoIndexedFaceSet1307->setSolid(false);
SoIndexedFaceSet1307->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1307->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1308 = new SoCoordinate();
SoCoordinate1308->setPoint(new float[]{14.69025,0.075,8.300337,14.55613,0.075,7.642357,15.49782,0.075,8.135725,15.3637,0.075,7.477746}, 12);
SoIndexedFaceSet1307->setCoord(*SoCoordinate1308);

SoShape1304->setGeometry(*SoIndexedFaceSet1307);

SoNode12->addChild(*SoShape1304);

SoShape* SoShape1309 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1310 = new SoVRMLAppearance();
SoMaterial* SoMaterial1311 = new SoMaterial();
SoMaterial1311->setAmbientIntensity(0);
SoMaterial1311->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1311->setShininess(0);
SoVRMLAppearance1310->addChild(*SoMaterial1311);

SoShape1309->addChild(*SoVRMLAppearance1310);

SoIndexedFaceSet* SoIndexedFaceSet1312 = new SoIndexedFaceSet();
SoIndexedFaceSet1312->setSolid(false);
SoIndexedFaceSet1312->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1312->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1313 = new SoCoordinate();
SoCoordinate1313->setPoint(new float[]{14.55214,0.075,7.62276,14.41802,0.075,6.964781,15.35971,0.075,7.458149,15.22559,0.075,6.800169}, 12);
SoIndexedFaceSet1312->setCoord(*SoCoordinate1313);

SoShape1309->setGeometry(*SoIndexedFaceSet1312);

SoNode12->addChild(*SoShape1309);

SoShape* SoShape1314 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1315 = new SoVRMLAppearance();
SoMaterial* SoMaterial1316 = new SoMaterial();
SoMaterial1316->setAmbientIntensity(0);
SoMaterial1316->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1316->setShininess(0);
SoVRMLAppearance1315->addChild(*SoMaterial1316);

SoShape1314->addChild(*SoVRMLAppearance1315);

SoIndexedFaceSet* SoIndexedFaceSet1317 = new SoIndexedFaceSet();
SoIndexedFaceSet1317->setSolid(false);
SoIndexedFaceSet1317->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1317->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1318 = new SoCoordinate();
SoCoordinate1318->setPoint(new float[]{14.55537,0.075,5.525325,14.94936,0.075,5.445017,14.82761,0.075,6.860881,15.22159,0.075,6.780572}, 12);
SoIndexedFaceSet1317->setCoord(*SoCoordinate1318);

SoShape1314->setGeometry(*SoIndexedFaceSet1317);

SoNode12->addChild(*SoShape1314);

SoShape* SoShape1319 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1320 = new SoVRMLAppearance();
SoMaterial* SoMaterial1321 = new SoMaterial();
SoMaterial1321->setAmbientIntensity(0);
SoMaterial1321->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1321->setShininess(0);
SoVRMLAppearance1320->addChild(*SoMaterial1321);

SoShape1319->addChild(*SoVRMLAppearance1320);

SoIndexedFaceSet* SoIndexedFaceSet1322 = new SoIndexedFaceSet();
SoIndexedFaceSet1322->setSolid(false);
SoIndexedFaceSet1322->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1322->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1323 = new SoCoordinate();
SoCoordinate1323->setPoint(new float[]{14.14179,0.075,5.609628,14.53578,0.075,5.52932,14.41402,0.075,6.945184,14.80801,0.075,6.864876}, 12);
SoIndexedFaceSet1322->setCoord(*SoCoordinate1323);

SoShape1319->setGeometry(*SoIndexedFaceSet1322);

SoNode12->addChild(*SoShape1319);

SoShape* SoShape1324 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1325 = new SoVRMLAppearance();
SoMaterial* SoMaterial1326 = new SoMaterial();
SoMaterial1326->setAmbientIntensity(0);
SoMaterial1326->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1326->setShininess(0);
SoVRMLAppearance1325->addChild(*SoMaterial1326);

SoShape1324->addChild(*SoVRMLAppearance1325);

SoIndexedFaceSet* SoIndexedFaceSet1327 = new SoIndexedFaceSet();
SoIndexedFaceSet1327->setSolid(false);
SoIndexedFaceSet1327->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1327->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1328 = new SoCoordinate();
SoCoordinate1328->setPoint(new float[]{14.13779,0.075,5.590031,14.00367,0.075,4.932052,14.94536,0.075,5.42542,14.81124,0.075,4.76744}, 12);
SoIndexedFaceSet1327->setCoord(*SoCoordinate1328);

SoShape1324->setGeometry(*SoIndexedFaceSet1327);

SoNode12->addChild(*SoShape1324);

SoShape* SoShape1329 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1330 = new SoVRMLAppearance();
SoMaterial* SoMaterial1331 = new SoMaterial();
SoMaterial1331->setAmbientIntensity(0);
SoMaterial1331->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1331->setShininess(0);
SoVRMLAppearance1330->addChild(*SoMaterial1331);

SoShape1329->addChild(*SoVRMLAppearance1330);

SoIndexedFaceSet* SoIndexedFaceSet1332 = new SoIndexedFaceSet();
SoIndexedFaceSet1332->setSolid(false);
SoIndexedFaceSet1332->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1332->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1333 = new SoCoordinate();
SoCoordinate1333->setPoint(new float[]{13.99968,0.075,4.912455,13.86556,0.075,4.254475,14.80725,0.075,4.747843,14.67313,0.075,4.089864}, 12);
SoIndexedFaceSet1332->setCoord(*SoCoordinate1333);

SoShape1329->setGeometry(*SoIndexedFaceSet1332);

SoNode12->addChild(*SoShape1329);

SoShape* SoShape1334 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1335 = new SoVRMLAppearance();
SoMaterial* SoMaterial1336 = new SoMaterial();
SoMaterial1336->setAmbientIntensity(0);
SoMaterial1336->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1336->setShininess(0);
SoVRMLAppearance1335->addChild(*SoMaterial1336);

SoShape1334->addChild(*SoVRMLAppearance1335);

SoIndexedFaceSet* SoIndexedFaceSet1337 = new SoIndexedFaceSet();
SoIndexedFaceSet1337->setSolid(false);
SoIndexedFaceSet1337->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1337->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1338 = new SoCoordinate();
SoCoordinate1338->setPoint(new float[]{14.00292,0.075,2.815019,14.3969,0.075,2.734711,14.13903,0.075,3.482797,14.53302,0.075,3.402489,14.27515,0.075,4.150575,14.66914,0.075,4.070267}, 18);
SoIndexedFaceSet1337->setCoord(*SoCoordinate1338);

SoShape1334->setGeometry(*SoIndexedFaceSet1337);

SoNode12->addChild(*SoShape1334);

SoShape* SoShape1339 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1340 = new SoVRMLAppearance();
SoMaterial* SoMaterial1341 = new SoMaterial();
SoMaterial1341->setAmbientIntensity(0);
SoMaterial1341->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1341->setShininess(0);
SoVRMLAppearance1340->addChild(*SoMaterial1341);

SoShape1339->addChild(*SoVRMLAppearance1340);

SoIndexedFaceSet* SoIndexedFaceSet1342 = new SoIndexedFaceSet();
SoIndexedFaceSet1342->setSolid(false);
SoIndexedFaceSet1342->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1342->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1343 = new SoCoordinate();
SoCoordinate1343->setPoint(new float[]{13.58933,0.075,2.899323,13.98332,0.075,2.819014,13.86157,0.075,4.234878,14.25555,0.075,4.15457}, 12);
SoIndexedFaceSet1342->setCoord(*SoCoordinate1343);

SoShape1339->setGeometry(*SoIndexedFaceSet1342);

SoNode12->addChild(*SoShape1339);

SoShape* SoShape1344 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1345 = new SoVRMLAppearance();
SoMaterial* SoMaterial1346 = new SoMaterial();
SoMaterial1346->setAmbientIntensity(0);
SoMaterial1346->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1346->setShininess(0);
SoVRMLAppearance1345->addChild(*SoMaterial1346);

SoShape1344->addChild(*SoVRMLAppearance1345);

SoIndexedFaceSet* SoIndexedFaceSet1347 = new SoIndexedFaceSet();
SoIndexedFaceSet1347->setSolid(false);
SoIndexedFaceSet1347->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1347->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1348 = new SoCoordinate();
SoCoordinate1348->setPoint(new float[]{16.90159,0.075,23.37562,16.76747,0.075,22.71765,17.70916,0.075,23.21101,17.57504,0.075,22.55303}, 12);
SoIndexedFaceSet1347->setCoord(*SoCoordinate1348);

SoShape1344->setGeometry(*SoIndexedFaceSet1347);

SoNode12->addChild(*SoShape1344);

SoShape* SoShape1349 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1350 = new SoVRMLAppearance();
SoMaterial* SoMaterial1351 = new SoMaterial();
SoMaterial1351->setAmbientIntensity(0);
SoMaterial1351->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1351->setShininess(0);
SoVRMLAppearance1350->addChild(*SoMaterial1351);

SoShape1349->addChild(*SoVRMLAppearance1350);

SoIndexedFaceSet* SoIndexedFaceSet1352 = new SoIndexedFaceSet();
SoIndexedFaceSet1352->setSolid(false);
SoIndexedFaceSet1352->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1352->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1353 = new SoCoordinate();
SoCoordinate1353->setPoint(new float[]{16.76348,0.075,22.69805,16.69641,0.075,22.36906,16.62936,0.075,22.04007,17.16726,0.075,22.61574,17.1002,0.075,22.28675,17.03314,0.075,21.95776,17.57105,0.075,22.53344,17.50399,0.075,22.20445,17.43693,0.075,21.87546}, 27);
SoIndexedFaceSet1352->setCoord(*SoCoordinate1353);

SoShape1349->setGeometry(*SoIndexedFaceSet1352);

SoNode12->addChild(*SoShape1349);

SoShape* SoShape1354 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1355 = new SoVRMLAppearance();
SoMaterial* SoMaterial1356 = new SoMaterial();
SoMaterial1356->setAmbientIntensity(0);
SoMaterial1356->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1356->setShininess(0);
SoVRMLAppearance1355->addChild(*SoMaterial1356);

SoShape1354->addChild(*SoVRMLAppearance1355);

SoIndexedFaceSet* SoIndexedFaceSet1357 = new SoIndexedFaceSet();
SoIndexedFaceSet1357->setSolid(false);
SoIndexedFaceSet1357->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1357->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1358 = new SoCoordinate();
SoCoordinate1358->setPoint(new float[]{16.76671,0.075,20.60061,16.96371,0.075,20.56046,17.1607,0.075,20.5203,16.90283,0.075,21.26839,17.09982,0.075,21.22824,17.29682,0.075,21.18808,17.03895,0.075,21.93617,17.23594,0.075,21.89602,17.43293,0.075,21.85586}, 27);
SoIndexedFaceSet1357->setCoord(*SoCoordinate1358);

SoShape1354->setGeometry(*SoIndexedFaceSet1357);

SoNode12->addChild(*SoShape1354);

SoShape* SoShape1359 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1360 = new SoVRMLAppearance();
SoMaterial* SoMaterial1361 = new SoMaterial();
SoMaterial1361->setAmbientIntensity(0);
SoMaterial1361->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1361->setShininess(0);
SoVRMLAppearance1360->addChild(*SoMaterial1361);

SoShape1359->addChild(*SoVRMLAppearance1360);

SoIndexedFaceSet* SoIndexedFaceSet1362 = new SoIndexedFaceSet();
SoIndexedFaceSet1362->setSolid(false);
SoIndexedFaceSet1362->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1362->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1363 = new SoCoordinate();
SoCoordinate1363->setPoint(new float[]{16.35313,0.075,20.68492,16.74711,0.075,20.60461,16.48924,0.075,21.35269,16.88323,0.075,21.27238,16.62536,0.075,22.02047,17.01935,0.075,21.94016}, 18);
SoIndexedFaceSet1362->setCoord(*SoCoordinate1363);

SoShape1359->setGeometry(*SoIndexedFaceSet1362);

SoNode12->addChild(*SoShape1359);

SoShape* SoShape1364 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1365 = new SoVRMLAppearance();
SoMaterial* SoMaterial1366 = new SoMaterial();
SoMaterial1366->setAmbientIntensity(0);
SoMaterial1366->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1366->setShininess(0);
SoVRMLAppearance1365->addChild(*SoMaterial1366);

SoShape1364->addChild(*SoVRMLAppearance1365);

SoIndexedFaceSet* SoIndexedFaceSet1367 = new SoIndexedFaceSet();
SoIndexedFaceSet1367->setSolid(false);
SoIndexedFaceSet1367->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1367->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1368 = new SoCoordinate();
SoCoordinate1368->setPoint(new float[]{16.34913,0.075,20.66532,16.21501,0.075,20.00734,17.1567,0.075,20.50071,17.02258,0.075,19.84273}, 12);
SoIndexedFaceSet1367->setCoord(*SoCoordinate1368);

SoShape1364->setGeometry(*SoIndexedFaceSet1367);

SoNode12->addChild(*SoShape1364);

SoShape* SoShape1369 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1370 = new SoVRMLAppearance();
SoMaterial* SoMaterial1371 = new SoMaterial();
SoMaterial1371->setAmbientIntensity(0);
SoMaterial1371->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1371->setShininess(0);
SoVRMLAppearance1370->addChild(*SoMaterial1371);

SoShape1369->addChild(*SoVRMLAppearance1370);

SoIndexedFaceSet* SoIndexedFaceSet1372 = new SoIndexedFaceSet();
SoIndexedFaceSet1372->setSolid(false);
SoIndexedFaceSet1372->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1372->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1373 = new SoCoordinate();
SoCoordinate1373->setPoint(new float[]{16.21102,0.075,19.98774,16.0769,0.075,19.32976,17.01859,0.075,19.82313,16.88447,0.075,19.16515}, 12);
SoIndexedFaceSet1372->setCoord(*SoCoordinate1373);

SoShape1369->setGeometry(*SoIndexedFaceSet1372);

SoNode12->addChild(*SoShape1369);

SoShape* SoShape1374 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1375 = new SoVRMLAppearance();
SoMaterial* SoMaterial1376 = new SoMaterial();
SoMaterial1376->setAmbientIntensity(0);
SoMaterial1376->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1376->setShininess(0);
SoVRMLAppearance1375->addChild(*SoMaterial1376);

SoShape1374->addChild(*SoVRMLAppearance1375);

SoIndexedFaceSet* SoIndexedFaceSet1377 = new SoIndexedFaceSet();
SoIndexedFaceSet1377->setSolid(false);
SoIndexedFaceSet1377->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1377->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1378 = new SoCoordinate();
SoCoordinate1378->setPoint(new float[]{16.21426,0.075,17.89031,16.60824,0.075,17.81,16.48649,0.075,19.22586,16.88048,0.075,19.14555}, 12);
SoIndexedFaceSet1377->setCoord(*SoCoordinate1378);

SoShape1374->setGeometry(*SoIndexedFaceSet1377);

SoNode12->addChild(*SoShape1374);

SoShape* SoShape1379 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1380 = new SoVRMLAppearance();
SoMaterial* SoMaterial1381 = new SoMaterial();
SoMaterial1381->setAmbientIntensity(0);
SoMaterial1381->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1381->setShininess(0);
SoVRMLAppearance1380->addChild(*SoMaterial1381);

SoShape1379->addChild(*SoVRMLAppearance1380);

SoIndexedFaceSet* SoIndexedFaceSet1382 = new SoIndexedFaceSet();
SoIndexedFaceSet1382->setSolid(false);
SoIndexedFaceSet1382->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1382->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1383 = new SoCoordinate();
SoCoordinate1383->setPoint(new float[]{15.80067,0.075,17.97461,16.19466,0.075,17.8943,16.0729,0.075,19.31017,16.46689,0.075,19.22986}, 12);
SoIndexedFaceSet1382->setCoord(*SoCoordinate1383);

SoShape1379->setGeometry(*SoIndexedFaceSet1382);

SoNode12->addChild(*SoShape1379);

SoShape* SoShape1384 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1385 = new SoVRMLAppearance();
SoMaterial* SoMaterial1386 = new SoMaterial();
SoMaterial1386->setAmbientIntensity(0);
SoMaterial1386->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1386->setShininess(0);
SoVRMLAppearance1385->addChild(*SoMaterial1386);

SoShape1384->addChild(*SoVRMLAppearance1385);

SoIndexedFaceSet* SoIndexedFaceSet1387 = new SoIndexedFaceSet();
SoIndexedFaceSet1387->setSolid(false);
SoIndexedFaceSet1387->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1387->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1388 = new SoCoordinate();
SoCoordinate1388->setPoint(new float[]{15.79668,0.075,17.95501,15.66256,0.075,17.29703,16.60425,0.075,17.7904,16.47013,0.075,17.13242}, 12);
SoIndexedFaceSet1387->setCoord(*SoCoordinate1388);

SoShape1384->setGeometry(*SoIndexedFaceSet1387);

SoNode12->addChild(*SoShape1384);

SoShape* SoShape1389 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1390 = new SoVRMLAppearance();
SoMaterial* SoMaterial1391 = new SoMaterial();
SoMaterial1391->setAmbientIntensity(0);
SoMaterial1391->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1391->setShininess(0);
SoVRMLAppearance1390->addChild(*SoMaterial1391);

SoShape1389->addChild(*SoVRMLAppearance1390);

SoIndexedFaceSet* SoIndexedFaceSet1392 = new SoIndexedFaceSet();
SoIndexedFaceSet1392->setSolid(false);
SoIndexedFaceSet1392->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1392->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1393 = new SoCoordinate();
SoCoordinate1393->setPoint(new float[]{16.33201,0.075,16.45485,16.46614,0.075,17.11283,15.52444,0.075,16.61946,15.65856,0.075,17.27744}, 12);
SoIndexedFaceSet1392->setCoord(*SoCoordinate1393);

SoShape1389->setGeometry(*SoIndexedFaceSet1392);

SoNode12->addChild(*SoShape1389);

SoShape* SoShape1394 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1395 = new SoVRMLAppearance();
SoMaterial* SoMaterial1396 = new SoMaterial();
SoMaterial1396->setAmbientIntensity(0);
SoMaterial1396->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1396->setShininess(0);
SoVRMLAppearance1395->addChild(*SoMaterial1396);

SoShape1394->addChild(*SoVRMLAppearance1395);

SoIndexedFaceSet* SoIndexedFaceSet1397 = new SoIndexedFaceSet();
SoIndexedFaceSet1397->setSolid(false);
SoIndexedFaceSet1397->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1397->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1398 = new SoCoordinate();
SoCoordinate1398->setPoint(new float[]{16.32802,0.075,16.43525,16.13103,0.075,16.4754,15.93403,0.075,16.51556,16.1919,0.075,15.76747,15.99491,0.075,15.80762,15.79792,0.075,15.84778,16.05579,0.075,15.09969,15.85879,0.075,15.13985,15.6618,0.075,15.18}, 27);
SoIndexedFaceSet1397->setCoord(*SoCoordinate1398);

SoShape1394->setGeometry(*SoIndexedFaceSet1397);

SoNode12->addChild(*SoShape1394);

SoShape* SoShape1399 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1400 = new SoVRMLAppearance();
SoMaterial* SoMaterial1401 = new SoMaterial();
SoMaterial1401->setAmbientIntensity(0);
SoMaterial1401->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1401->setShininess(0);
SoVRMLAppearance1400->addChild(*SoMaterial1401);

SoShape1399->addChild(*SoVRMLAppearance1400);

SoIndexedFaceSet* SoIndexedFaceSet1402 = new SoIndexedFaceSet();
SoIndexedFaceSet1402->setSolid(false);
SoIndexedFaceSet1402->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1402->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1403 = new SoCoordinate();
SoCoordinate1403->setPoint(new float[]{15.91444,0.075,16.51955,15.52045,0.075,16.59986,15.6422,0.075,15.184,15.24822,0.075,15.2643}, 12);
SoIndexedFaceSet1402->setCoord(*SoCoordinate1403);

SoShape1399->setGeometry(*SoIndexedFaceSet1402);

SoNode12->addChild(*SoShape1399);

SoShape* SoShape1404 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1405 = new SoVRMLAppearance();
SoMaterial* SoMaterial1406 = new SoMaterial();
SoMaterial1406->setAmbientIntensity(0);
SoMaterial1406->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1406->setShininess(0);
SoVRMLAppearance1405->addChild(*SoMaterial1406);

SoShape1404->addChild(*SoVRMLAppearance1405);

SoIndexedFaceSet* SoIndexedFaceSet1407 = new SoIndexedFaceSet();
SoIndexedFaceSet1407->setSolid(false);
SoIndexedFaceSet1407->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1407->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1408 = new SoCoordinate();
SoCoordinate1408->setPoint(new float[]{15.91767,0.075,14.42212,16.05179,0.075,15.0801,15.1101,0.075,14.58673,15.24422,0.075,15.24471}, 12);
SoIndexedFaceSet1407->setCoord(*SoCoordinate1408);

SoShape1404->setGeometry(*SoIndexedFaceSet1407);

SoNode12->addChild(*SoShape1404);

SoShape* SoShape1409 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1410 = new SoVRMLAppearance();
SoMaterial* SoMaterial1411 = new SoMaterial();
SoMaterial1411->setAmbientIntensity(0);
SoMaterial1411->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1411->setShininess(0);
SoVRMLAppearance1410->addChild(*SoMaterial1411);

SoShape1409->addChild(*SoVRMLAppearance1410);

SoIndexedFaceSet* SoIndexedFaceSet1412 = new SoIndexedFaceSet();
SoIndexedFaceSet1412->setSolid(false);
SoIndexedFaceSet1412->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1412->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1413 = new SoCoordinate();
SoCoordinate1413->setPoint(new float[]{15.77956,0.075,13.74454,15.91368,0.075,14.40252,14.97199,0.075,13.90915,15.10611,0.075,14.56713}, 12);
SoIndexedFaceSet1412->setCoord(*SoCoordinate1413);

SoShape1409->setGeometry(*SoIndexedFaceSet1412);

SoNode12->addChild(*SoShape1409);

SoShape* SoShape1414 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1415 = new SoVRMLAppearance();
SoMaterial* SoMaterial1416 = new SoMaterial();
SoMaterial1416->setAmbientIntensity(0);
SoMaterial1416->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1416->setShininess(0);
SoVRMLAppearance1415->addChild(*SoMaterial1416);

SoShape1414->addChild(*SoVRMLAppearance1415);

SoIndexedFaceSet* SoIndexedFaceSet1417 = new SoIndexedFaceSet();
SoIndexedFaceSet1417->setSolid(false);
SoIndexedFaceSet1417->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1417->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1418 = new SoCoordinate();
SoCoordinate1418->setPoint(new float[]{15.77556,0.075,13.72494,15.38158,0.075,13.80525,15.63945,0.075,13.05717,15.24546,0.075,13.13747,15.50333,0.075,12.38939,15.10934,0.075,12.4697}, 18);
SoIndexedFaceSet1417->setCoord(*SoCoordinate1418);

SoShape1414->setGeometry(*SoIndexedFaceSet1417);

SoNode12->addChild(*SoShape1414);

SoShape* SoShape1419 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1420 = new SoVRMLAppearance();
SoMaterial* SoMaterial1421 = new SoMaterial();
SoMaterial1421->setAmbientIntensity(0);
SoMaterial1421->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1421->setShininess(0);
SoVRMLAppearance1420->addChild(*SoMaterial1421);

SoShape1419->addChild(*SoVRMLAppearance1420);

SoIndexedFaceSet* SoIndexedFaceSet1422 = new SoIndexedFaceSet();
SoIndexedFaceSet1422->setSolid(false);
SoIndexedFaceSet1422->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1422->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1423 = new SoCoordinate();
SoCoordinate1423->setPoint(new float[]{14.69576,0.075,12.554,15.08975,0.075,12.47369,14.96799,0.075,13.88955,15.36198,0.075,13.80925}, 12);
SoIndexedFaceSet1422->setCoord(*SoCoordinate1423);

SoShape1419->setGeometry(*SoIndexedFaceSet1422);

SoNode12->addChild(*SoShape1419);

SoShape* SoShape1424 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1425 = new SoVRMLAppearance();
SoMaterial* SoMaterial1426 = new SoMaterial();
SoMaterial1426->setAmbientIntensity(0);
SoMaterial1426->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1426->setShininess(0);
SoVRMLAppearance1425->addChild(*SoMaterial1426);

SoShape1424->addChild(*SoVRMLAppearance1425);

SoIndexedFaceSet* SoIndexedFaceSet1427 = new SoIndexedFaceSet();
SoIndexedFaceSet1427->setSolid(false);
SoIndexedFaceSet1427->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoIndexedFaceSet1427->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoCoordinate* SoCoordinate1428 = new SoCoordinate();
SoCoordinate1428->setPoint(new float[]{15.36522,0.075,11.71181,15.43228,0.075,12.0408,15.49934,0.075,12.36979,14.55765,0.075,11.87642,14.62471,0.075,12.20541,14.69177,0.075,12.5344}, 18);
SoIndexedFaceSet1427->setCoord(*SoCoordinate1428);

SoShape1424->setGeometry(*SoIndexedFaceSet1427);

SoNode12->addChild(*SoShape1424);

SoShape* SoShape1429 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1430 = new SoVRMLAppearance();
SoMaterial* SoMaterial1431 = new SoMaterial();
SoMaterial1431->setAmbientIntensity(0);
SoMaterial1431->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1431->setShininess(0);
SoVRMLAppearance1430->addChild(*SoMaterial1431);

SoShape1429->addChild(*SoVRMLAppearance1430);

SoIndexedFaceSet* SoIndexedFaceSet1432 = new SoIndexedFaceSet();
SoIndexedFaceSet1432->setSolid(false);
SoIndexedFaceSet1432->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1432->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1433 = new SoCoordinate();
SoCoordinate1433->setPoint(new float[]{14.55365,0.075,11.85682,14.41953,0.075,11.19885,14.95744,0.075,11.77452,14.82332,0.075,11.11654,15.36122,0.075,11.69221,15.2271,0.075,11.03423}, 18);
SoIndexedFaceSet1432->setCoord(*SoCoordinate1433);

SoShape1429->setGeometry(*SoIndexedFaceSet1432);

SoNode12->addChild(*SoShape1429);

SoShape* SoShape1434 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1435 = new SoVRMLAppearance();
SoMaterial* SoMaterial1436 = new SoMaterial();
SoMaterial1436->setAmbientIntensity(0);
SoMaterial1436->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1436->setShininess(0);
SoVRMLAppearance1435->addChild(*SoMaterial1436);

SoShape1434->addChild(*SoVRMLAppearance1435);

SoIndexedFaceSet* SoIndexedFaceSet1437 = new SoIndexedFaceSet();
SoIndexedFaceSet1437->setSolid(false);
SoIndexedFaceSet1437->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1437->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1438 = new SoCoordinate();
SoCoordinate1438->setPoint(new float[]{15.22311,0.075,11.01464,14.82912,0.075,11.09495,14.95088,0.075,9.679081,14.55689,0.075,9.75939}, 12);
SoIndexedFaceSet1437->setCoord(*SoCoordinate1438);

SoShape1434->setGeometry(*SoIndexedFaceSet1437);

SoNode12->addChild(*SoShape1434);

SoShape* SoShape1439 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1440 = new SoVRMLAppearance();
SoMaterial* SoMaterial1441 = new SoMaterial();
SoMaterial1441->setAmbientIntensity(0);
SoMaterial1441->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1441->setShininess(0);
SoVRMLAppearance1440->addChild(*SoMaterial1441);

SoShape1439->addChild(*SoVRMLAppearance1440);

SoIndexedFaceSet* SoIndexedFaceSet1442 = new SoIndexedFaceSet();
SoIndexedFaceSet1442->setSolid(false);
SoIndexedFaceSet1442->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1442->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1443 = new SoCoordinate();
SoCoordinate1443->setPoint(new float[]{14.1433,0.075,9.843693,14.53729,0.075,9.763384,14.41554,0.075,11.17925,14.80952,0.075,11.09894}, 12);
SoIndexedFaceSet1442->setCoord(*SoCoordinate1443);

SoShape1439->setGeometry(*SoIndexedFaceSet1442);

SoNode12->addChild(*SoShape1439);

SoShape* SoShape1444 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1445 = new SoVRMLAppearance();
SoMaterial* SoMaterial1446 = new SoMaterial();
SoMaterial1446->setAmbientIntensity(0);
SoMaterial1446->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1446->setShininess(0);
SoVRMLAppearance1445->addChild(*SoMaterial1446);

SoShape1444->addChild(*SoVRMLAppearance1445);

SoIndexedFaceSet* SoIndexedFaceSet1447 = new SoIndexedFaceSet();
SoIndexedFaceSet1447->setSolid(false);
SoIndexedFaceSet1447->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoIndexedFaceSet1447->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoCoordinate* SoCoordinate1448 = new SoCoordinate();
SoCoordinate1448->setPoint(new float[]{14.13931,0.075,9.824096,14.07225,0.075,9.495106,14.00519,0.075,9.166117,14.94688,0.075,9.659484,14.87982,0.075,9.330495,14.81276,0.075,9.001505}, 18);
SoIndexedFaceSet1447->setCoord(*SoCoordinate1448);

SoShape1444->setGeometry(*SoIndexedFaceSet1447);

SoNode12->addChild(*SoShape1444);

SoShape* SoShape1449 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1450 = new SoVRMLAppearance();
SoMaterial* SoMaterial1451 = new SoMaterial();
SoMaterial1451->setAmbientIntensity(0);
SoMaterial1451->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1451->setShininess(0);
SoVRMLAppearance1450->addChild(*SoMaterial1451);

SoShape1449->addChild(*SoVRMLAppearance1450);

SoIndexedFaceSet* SoIndexedFaceSet1452 = new SoIndexedFaceSet();
SoIndexedFaceSet1452->setSolid(false);
SoIndexedFaceSet1452->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1452->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1453 = new SoCoordinate();
SoCoordinate1453->setPoint(new float[]{14.67465,0.075,8.323929,14.74171,0.075,8.652918,14.80877,0.075,8.981908,14.27086,0.075,8.406234,14.33792,0.075,8.735224,14.40498,0.075,9.064214,13.86708,0.075,8.48854,13.93414,0.075,8.81753,14.00119,0.075,9.14652}, 27);
SoIndexedFaceSet1452->setCoord(*SoCoordinate1453);

SoShape1449->setGeometry(*SoIndexedFaceSet1452);

SoNode12->addChild(*SoShape1449);

SoShape* SoShape1454 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1455 = new SoVRMLAppearance();
SoMaterial* SoMaterial1456 = new SoMaterial();
SoMaterial1456->setAmbientIntensity(0);
SoMaterial1456->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1456->setShininess(0);
SoVRMLAppearance1455->addChild(*SoMaterial1456);

SoShape1454->addChild(*SoVRMLAppearance1455);

SoIndexedFaceSet* SoIndexedFaceSet1457 = new SoIndexedFaceSet();
SoIndexedFaceSet1457->setSolid(false);
SoIndexedFaceSet1457->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1457->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1458 = new SoCoordinate();
SoCoordinate1458->setPoint(new float[]{14.67065,0.075,8.304332,14.27667,0.075,8.38464,14.39842,0.075,6.968776,14.00443,0.075,7.049084}, 12);
SoIndexedFaceSet1457->setCoord(*SoCoordinate1458);

SoShape1454->setGeometry(*SoIndexedFaceSet1457);

SoNode12->addChild(*SoShape1454);

SoShape* SoShape1459 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1460 = new SoVRMLAppearance();
SoMaterial* SoMaterial1461 = new SoMaterial();
SoMaterial1461->setAmbientIntensity(0);
SoMaterial1461->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1461->setShininess(0);
SoVRMLAppearance1460->addChild(*SoMaterial1461);

SoShape1459->addChild(*SoVRMLAppearance1460);

SoIndexedFaceSet* SoIndexedFaceSet1462 = new SoIndexedFaceSet();
SoIndexedFaceSet1462->setSolid(false);
SoIndexedFaceSet1462->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1462->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1463 = new SoCoordinate();
SoCoordinate1463->setPoint(new float[]{13.59085,0.075,7.133387,13.98483,0.075,7.053079,13.72696,0.075,7.801165,14.12095,0.075,7.720857,13.86308,0.075,8.468943,14.25707,0.075,8.388635}, 18);
SoIndexedFaceSet1462->setCoord(*SoCoordinate1463);

SoShape1459->setGeometry(*SoIndexedFaceSet1462);

SoNode12->addChild(*SoShape1459);

SoShape* SoShape1464 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1465 = new SoVRMLAppearance();
SoMaterial* SoMaterial1466 = new SoMaterial();
SoMaterial1466->setAmbientIntensity(0);
SoMaterial1466->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1466->setShininess(0);
SoVRMLAppearance1465->addChild(*SoMaterial1466);

SoShape1464->addChild(*SoVRMLAppearance1465);

SoIndexedFaceSet* SoIndexedFaceSet1467 = new SoIndexedFaceSet();
SoIndexedFaceSet1467->setSolid(false);
SoIndexedFaceSet1467->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1467->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1468 = new SoCoordinate();
SoCoordinate1468->setPoint(new float[]{14.2603,0.075,6.291199,14.39442,0.075,6.949179,13.85652,0.075,6.373505,13.99064,0.075,7.031484,13.45273,0.075,6.455811,13.58685,0.075,7.11379}, 18);
SoIndexedFaceSet1467->setCoord(*SoCoordinate1468);

SoShape1464->setGeometry(*SoIndexedFaceSet1467);

SoNode12->addChild(*SoShape1464);

SoShape* SoShape1469 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1470 = new SoVRMLAppearance();
SoMaterial* SoMaterial1471 = new SoMaterial();
SoMaterial1471->setAmbientIntensity(0);
SoMaterial1471->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1471->setShininess(0);
SoVRMLAppearance1470->addChild(*SoMaterial1471);

SoShape1469->addChild(*SoVRMLAppearance1470);

SoIndexedFaceSet* SoIndexedFaceSet1472 = new SoIndexedFaceSet();
SoIndexedFaceSet1472->setSolid(false);
SoIndexedFaceSet1472->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1472->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1473 = new SoCoordinate();
SoCoordinate1473->setPoint(new float[]{13.44874,0.075,6.436213,13.31462,0.075,5.778234,13.85252,0.075,6.353908,13.71841,0.075,5.695929,14.25631,0.075,6.271602,14.12219,0.075,5.613623}, 18);
SoIndexedFaceSet1472->setCoord(*SoCoordinate1473);

SoShape1469->setGeometry(*SoIndexedFaceSet1472);

SoNode12->addChild(*SoShape1469);

SoShape* SoShape1474 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1475 = new SoVRMLAppearance();
SoMaterial* SoMaterial1476 = new SoMaterial();
SoMaterial1476->setAmbientIntensity(0);
SoMaterial1476->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1476->setShininess(0);
SoVRMLAppearance1475->addChild(*SoMaterial1476);

SoShape1474->addChild(*SoVRMLAppearance1475);

SoIndexedFaceSet* SoIndexedFaceSet1477 = new SoIndexedFaceSet();
SoIndexedFaceSet1477->setSolid(false);
SoIndexedFaceSet1477->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1477->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1478 = new SoCoordinate();
SoCoordinate1478->setPoint(new float[]{14.1182,0.075,5.594026,13.72421,0.075,5.674334,13.98208,0.075,4.926248,13.58809,0.075,5.006556,13.84596,0.075,4.25847,13.45198,0.075,4.338778}, 18);
SoIndexedFaceSet1477->setCoord(*SoCoordinate1478);

SoShape1474->setGeometry(*SoIndexedFaceSet1477);

SoNode12->addChild(*SoShape1474);

SoShape* SoShape1479 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1480 = new SoVRMLAppearance();
SoMaterial* SoMaterial1481 = new SoMaterial();
SoMaterial1481->setAmbientIntensity(0);
SoMaterial1481->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1481->setShininess(0);
SoVRMLAppearance1480->addChild(*SoMaterial1481);

SoShape1479->addChild(*SoVRMLAppearance1480);

SoIndexedFaceSet* SoIndexedFaceSet1482 = new SoIndexedFaceSet();
SoIndexedFaceSet1482->setSolid(false);
SoIndexedFaceSet1482->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1482->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1483 = new SoCoordinate();
SoCoordinate1483->setPoint(new float[]{13.03839,0.075,4.423081,13.43238,0.075,4.342773,13.17451,0.075,5.090859,13.5685,0.075,5.010551,13.31063,0.075,5.758637,13.70461,0.075,5.678329}, 18);
SoIndexedFaceSet1482->setCoord(*SoCoordinate1483);

SoShape1479->setGeometry(*SoIndexedFaceSet1482);

SoNode12->addChild(*SoShape1479);

SoShape* SoShape1484 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1485 = new SoVRMLAppearance();
SoMaterial* SoMaterial1486 = new SoMaterial();
SoMaterial1486->setAmbientIntensity(0);
SoMaterial1486->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1486->setShininess(0);
SoVRMLAppearance1485->addChild(*SoMaterial1486);

SoShape1484->addChild(*SoVRMLAppearance1485);

SoIndexedFaceSet* SoIndexedFaceSet1487 = new SoIndexedFaceSet();
SoIndexedFaceSet1487->setSolid(false);
SoIndexedFaceSet1487->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1487->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1488 = new SoCoordinate();
SoCoordinate1488->setPoint(new float[]{13.0344,0.075,4.403484,12.90028,0.075,3.745505,13.84197,0.075,4.238873,13.70785,0.075,3.580894}, 12);
SoIndexedFaceSet1487->setCoord(*SoCoordinate1488);

SoShape1484->setGeometry(*SoIndexedFaceSet1487);

SoNode12->addChild(*SoShape1484);

SoShape* SoShape1489 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1490 = new SoVRMLAppearance();
SoMaterial* SoMaterial1491 = new SoMaterial();
SoMaterial1491->setAmbientIntensity(0);
SoMaterial1491->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1491->setShininess(0);
SoVRMLAppearance1490->addChild(*SoMaterial1491);

SoShape1489->addChild(*SoVRMLAppearance1490);

SoIndexedFaceSet* SoIndexedFaceSet1492 = new SoIndexedFaceSet();
SoIndexedFaceSet1492->setSolid(false);
SoIndexedFaceSet1492->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1492->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1493 = new SoCoordinate();
SoCoordinate1493->setPoint(new float[]{13.56973,0.075,2.903317,13.70385,0.075,3.561296,12.76216,0.075,3.067929,12.89628,0.075,3.725908}, 12);
SoIndexedFaceSet1492->setCoord(*SoCoordinate1493);

SoShape1489->setGeometry(*SoIndexedFaceSet1492);

SoNode12->addChild(*SoShape1489);

SoShape* SoShape1494 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1495 = new SoVRMLAppearance();
SoMaterial* SoMaterial1496 = new SoMaterial();
SoMaterial1496->setAmbientIntensity(0);
SoMaterial1496->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1496->setShininess(0);
SoVRMLAppearance1495->addChild(*SoMaterial1496);

SoShape1494->addChild(*SoVRMLAppearance1495);

SoIndexedFaceSet* SoIndexedFaceSet1497 = new SoIndexedFaceSet();
SoIndexedFaceSet1497->setSolid(false);
SoIndexedFaceSet1497->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1497->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1498 = new SoCoordinate();
SoCoordinate1498->setPoint(new float[]{16.47165,0.075,21.36649,16.60576,0.075,22.02447,15.66407,0.075,21.5311,15.79819,0.075,22.18908}, 12);
SoIndexedFaceSet1497->setCoord(*SoCoordinate1498);

SoShape1494->setGeometry(*SoIndexedFaceSet1497);

SoNode12->addChild(*SoShape1494);

SoShape* SoShape1499 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1500 = new SoVRMLAppearance();
SoMaterial* SoMaterial1501 = new SoMaterial();
SoMaterial1501->setAmbientIntensity(0);
SoMaterial1501->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1501->setShininess(0);
SoVRMLAppearance1500->addChild(*SoMaterial1501);

SoShape1499->addChild(*SoVRMLAppearance1500);

SoIndexedFaceSet* SoIndexedFaceSet1502 = new SoIndexedFaceSet();
SoIndexedFaceSet1502->setSolid(false);
SoIndexedFaceSet1502->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1502->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1503 = new SoCoordinate();
SoCoordinate1503->setPoint(new float[]{15.66008,0.075,21.5115,15.52596,0.075,20.85352,16.46765,0.075,21.34689,16.33353,0.075,20.68891}, 12);
SoIndexedFaceSet1502->setCoord(*SoCoordinate1503);

SoShape1499->setGeometry(*SoIndexedFaceSet1502);

SoNode12->addChild(*SoShape1499);

SoShape* SoShape1504 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1505 = new SoVRMLAppearance();
SoMaterial* SoMaterial1506 = new SoMaterial();
SoMaterial1506->setAmbientIntensity(0);
SoMaterial1506->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1506->setShininess(0);
SoVRMLAppearance1505->addChild(*SoMaterial1506);

SoShape1504->addChild(*SoVRMLAppearance1505);

SoIndexedFaceSet* SoIndexedFaceSet1507 = new SoIndexedFaceSet();
SoIndexedFaceSet1507->setSolid(false);
SoIndexedFaceSet1507->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1507->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1508 = new SoCoordinate();
SoCoordinate1508->setPoint(new float[]{15.66332,0.075,19.41407,15.86031,0.075,19.37391,16.0573,0.075,19.33376,15.79943,0.075,20.08184,15.99643,0.075,20.04169,16.19342,0.075,20.00154,15.93555,0.075,20.74962,16.13254,0.075,20.70947,16.32954,0.075,20.66931}, 27);
SoIndexedFaceSet1507->setCoord(*SoCoordinate1508);

SoShape1504->setGeometry(*SoIndexedFaceSet1507);

SoNode12->addChild(*SoShape1504);

SoShape* SoShape1509 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1510 = new SoVRMLAppearance();
SoMaterial* SoMaterial1511 = new SoMaterial();
SoMaterial1511->setAmbientIntensity(0);
SoMaterial1511->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1511->setShininess(0);
SoVRMLAppearance1510->addChild(*SoMaterial1511);

SoShape1509->addChild(*SoVRMLAppearance1510);

SoIndexedFaceSet* SoIndexedFaceSet1512 = new SoIndexedFaceSet();
SoIndexedFaceSet1512->setSolid(false);
SoIndexedFaceSet1512->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1512->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1513 = new SoCoordinate();
SoCoordinate1513->setPoint(new float[]{15.24973,0.075,19.49837,15.64372,0.075,19.41806,15.38585,0.075,20.16615,15.77984,0.075,20.08584,15.52197,0.075,20.83393,15.91595,0.075,20.75362}, 18);
SoIndexedFaceSet1512->setCoord(*SoCoordinate1513);

SoShape1509->setGeometry(*SoIndexedFaceSet1512);

SoNode12->addChild(*SoShape1509);

SoShape* SoShape1514 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1515 = new SoVRMLAppearance();
SoMaterial* SoMaterial1516 = new SoMaterial();
SoMaterial1516->setAmbientIntensity(0);
SoMaterial1516->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1516->setShininess(0);
SoVRMLAppearance1515->addChild(*SoMaterial1516);

SoShape1514->addChild(*SoVRMLAppearance1515);

SoIndexedFaceSet* SoIndexedFaceSet1517 = new SoIndexedFaceSet();
SoIndexedFaceSet1517->setSolid(false);
SoIndexedFaceSet1517->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1517->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1518 = new SoCoordinate();
SoCoordinate1518->setPoint(new float[]{15.91919,0.075,18.65618,16.05331,0.075,19.31416,15.11162,0.075,18.82079,15.24574,0.075,19.47877}, 12);
SoIndexedFaceSet1517->setCoord(*SoCoordinate1518);

SoShape1514->setGeometry(*SoIndexedFaceSet1517);

SoNode12->addChild(*SoShape1514);

SoShape* SoShape1519 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1520 = new SoVRMLAppearance();
SoMaterial* SoMaterial1521 = new SoMaterial();
SoMaterial1521->setAmbientIntensity(0);
SoMaterial1521->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1521->setShininess(0);
SoVRMLAppearance1520->addChild(*SoMaterial1521);

SoShape1519->addChild(*SoVRMLAppearance1520);

SoIndexedFaceSet* SoIndexedFaceSet1522 = new SoIndexedFaceSet();
SoIndexedFaceSet1522->setSolid(false);
SoIndexedFaceSet1522->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1522->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1523 = new SoCoordinate();
SoCoordinate1523->setPoint(new float[]{15.10762,0.075,18.8012,14.9735,0.075,18.14322,15.91519,0.075,18.63658,15.78107,0.075,17.97861}, 12);
SoIndexedFaceSet1522->setCoord(*SoCoordinate1523);

SoShape1519->setGeometry(*SoIndexedFaceSet1522);

SoNode12->addChild(*SoShape1519);

SoShape* SoShape1524 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1525 = new SoVRMLAppearance();
SoMaterial* SoMaterial1526 = new SoMaterial();
SoMaterial1526->setAmbientIntensity(0);
SoMaterial1526->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1526->setShininess(0);
SoVRMLAppearance1525->addChild(*SoMaterial1526);

SoShape1524->addChild(*SoVRMLAppearance1525);

SoIndexedFaceSet* SoIndexedFaceSet1527 = new SoIndexedFaceSet();
SoIndexedFaceSet1527->setSolid(false);
SoIndexedFaceSet1527->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1527->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1528 = new SoCoordinate();
SoCoordinate1528->setPoint(new float[]{15.11086,0.075,16.70376,15.50485,0.075,16.62345,15.38309,0.075,18.03932,15.77708,0.075,17.95901}, 12);
SoIndexedFaceSet1527->setCoord(*SoCoordinate1528);

SoShape1524->setGeometry(*SoIndexedFaceSet1527);

SoNode12->addChild(*SoShape1524);

SoShape* SoShape1529 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1530 = new SoVRMLAppearance();
SoMaterial* SoMaterial1531 = new SoMaterial();
SoMaterial1531->setAmbientIntensity(0);
SoMaterial1531->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1531->setShininess(0);
SoVRMLAppearance1530->addChild(*SoMaterial1531);

SoShape1529->addChild(*SoVRMLAppearance1530);

SoIndexedFaceSet* SoIndexedFaceSet1532 = new SoIndexedFaceSet();
SoIndexedFaceSet1532->setSolid(false);
SoIndexedFaceSet1532->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1532->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1533 = new SoCoordinate();
SoCoordinate1533->setPoint(new float[]{14.69728,0.075,16.78806,15.09126,0.075,16.70775,14.96951,0.075,18.12362,15.3635,0.075,18.04331}, 12);
SoIndexedFaceSet1532->setCoord(*SoCoordinate1533);

SoShape1529->setGeometry(*SoIndexedFaceSet1532);

SoNode12->addChild(*SoShape1529);

SoShape* SoShape1534 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1535 = new SoVRMLAppearance();
SoMaterial* SoMaterial1536 = new SoMaterial();
SoMaterial1536->setAmbientIntensity(0);
SoMaterial1536->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1536->setShininess(0);
SoVRMLAppearance1535->addChild(*SoMaterial1536);

SoShape1534->addChild(*SoVRMLAppearance1535);

SoIndexedFaceSet* SoIndexedFaceSet1537 = new SoIndexedFaceSet();
SoIndexedFaceSet1537->setSolid(false);
SoIndexedFaceSet1537->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1537->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1538 = new SoCoordinate();
SoCoordinate1538->setPoint(new float[]{15.36673,0.075,15.94588,15.43379,0.075,16.27486,15.50085,0.075,16.60386,14.96295,0.075,16.02818,15.03001,0.075,16.35717,15.09707,0.075,16.68616,14.55916,0.075,16.11049,14.62622,0.075,16.43948,14.69328,0.075,16.76847}, 27);
SoIndexedFaceSet1537->setCoord(*SoCoordinate1538);

SoShape1534->setGeometry(*SoIndexedFaceSet1537);

SoNode12->addChild(*SoShape1534);

SoShape* SoShape1539 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1540 = new SoVRMLAppearance();
SoMaterial* SoMaterial1541 = new SoMaterial();
SoMaterial1541->setAmbientIntensity(0);
SoMaterial1541->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1541->setShininess(0);
SoVRMLAppearance1540->addChild(*SoMaterial1541);

SoShape1539->addChild(*SoVRMLAppearance1540);

SoIndexedFaceSet* SoIndexedFaceSet1542 = new SoIndexedFaceSet();
SoIndexedFaceSet1542->setSolid(false);
SoIndexedFaceSet1542->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1542->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1543 = new SoCoordinate();
SoCoordinate1543->setPoint(new float[]{14.55517,0.075,16.09089,14.42105,0.075,15.43291,15.36274,0.075,15.92628,15.22862,0.075,15.2683}, 12);
SoIndexedFaceSet1542->setCoord(*SoCoordinate1543);

SoShape1539->setGeometry(*SoIndexedFaceSet1542);

SoNode12->addChild(*SoShape1539);

SoShape* SoShape1544 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1545 = new SoVRMLAppearance();
SoMaterial* SoMaterial1546 = new SoMaterial();
SoMaterial1546->setAmbientIntensity(0);
SoMaterial1546->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1546->setShininess(0);
SoVRMLAppearance1545->addChild(*SoMaterial1546);

SoShape1544->addChild(*SoVRMLAppearance1545);

SoIndexedFaceSet* SoIndexedFaceSet1547 = new SoIndexedFaceSet();
SoIndexedFaceSet1547->setSolid(false);
SoIndexedFaceSet1547->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1547->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1548 = new SoCoordinate();
SoCoordinate1548->setPoint(new float[]{14.5584,0.075,13.99345,14.95239,0.075,13.91315,14.83064,0.075,15.32901,15.22462,0.075,15.2487}, 12);
SoIndexedFaceSet1547->setCoord(*SoCoordinate1548);

SoShape1544->setGeometry(*SoIndexedFaceSet1547);

SoNode12->addChild(*SoShape1544);

SoShape* SoShape1549 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1550 = new SoVRMLAppearance();
SoMaterial* SoMaterial1551 = new SoMaterial();
SoMaterial1551->setAmbientIntensity(0);
SoMaterial1551->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1551->setShininess(0);
SoVRMLAppearance1550->addChild(*SoMaterial1551);

SoShape1549->addChild(*SoVRMLAppearance1550);

SoIndexedFaceSet* SoIndexedFaceSet1552 = new SoIndexedFaceSet();
SoIndexedFaceSet1552->setSolid(false);
SoIndexedFaceSet1552->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1552->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1553 = new SoCoordinate();
SoCoordinate1553->setPoint(new float[]{14.14482,0.075,14.07776,14.53881,0.075,13.99745,14.41705,0.075,15.41331,14.81104,0.075,15.333}, 12);
SoIndexedFaceSet1552->setCoord(*SoCoordinate1553);

SoShape1549->setGeometry(*SoIndexedFaceSet1552);

SoNode12->addChild(*SoShape1549);

SoShape* SoShape1554 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1555 = new SoVRMLAppearance();
SoMaterial* SoMaterial1556 = new SoMaterial();
SoMaterial1556->setAmbientIntensity(0);
SoMaterial1556->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1556->setShininess(0);
SoVRMLAppearance1555->addChild(*SoMaterial1556);

SoShape1554->addChild(*SoVRMLAppearance1555);

SoIndexedFaceSet* SoIndexedFaceSet1557 = new SoIndexedFaceSet();
SoIndexedFaceSet1557->setSolid(false);
SoIndexedFaceSet1557->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1557->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1558 = new SoCoordinate();
SoCoordinate1558->setPoint(new float[]{14.14083,0.075,14.05816,14.07377,0.075,13.72917,14.00671,0.075,13.40018,14.54461,0.075,13.97585,14.47755,0.075,13.64686,14.41049,0.075,13.31787,14.9484,0.075,13.89355,14.88134,0.075,13.56456,14.81428,0.075,13.23557}, 27);
SoIndexedFaceSet1557->setCoord(*SoCoordinate1558);

SoShape1554->setGeometry(*SoIndexedFaceSet1557);

SoNode12->addChild(*SoShape1554);

SoShape* SoShape1559 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1560 = new SoVRMLAppearance();
SoMaterial* SoMaterial1561 = new SoMaterial();
SoMaterial1561->setAmbientIntensity(0);
SoMaterial1561->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1561->setShininess(0);
SoVRMLAppearance1560->addChild(*SoMaterial1561);

SoShape1559->addChild(*SoVRMLAppearance1560);

SoIndexedFaceSet* SoIndexedFaceSet1562 = new SoIndexedFaceSet();
SoIndexedFaceSet1562->setSolid(false);
SoIndexedFaceSet1562->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1562->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1563 = new SoCoordinate();
SoCoordinate1563->setPoint(new float[]{14.67616,0.075,12.55799,14.81028,0.075,13.21597,13.86859,0.075,12.7226,14.00271,0.075,13.38058}, 12);
SoIndexedFaceSet1562->setCoord(*SoCoordinate1563);

SoShape1559->setGeometry(*SoIndexedFaceSet1562);

SoNode12->addChild(*SoShape1559);

SoShape* SoShape1564 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1565 = new SoVRMLAppearance();
SoMaterial* SoMaterial1566 = new SoMaterial();
SoMaterial1566->setAmbientIntensity(0);
SoMaterial1566->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1566->setShininess(0);
SoVRMLAppearance1565->addChild(*SoMaterial1566);

SoShape1564->addChild(*SoVRMLAppearance1565);

SoIndexedFaceSet* SoIndexedFaceSet1567 = new SoIndexedFaceSet();
SoIndexedFaceSet1567->setSolid(false);
SoIndexedFaceSet1567->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1567->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1568 = new SoCoordinate();
SoCoordinate1568->setPoint(new float[]{14.00595,0.075,11.28315,14.20294,0.075,11.24299,14.39993,0.075,11.20284,14.14207,0.075,11.95093,14.33906,0.075,11.91077,14.53605,0.075,11.87062,14.27818,0.075,12.6187,14.47517,0.075,12.57855,14.67217,0.075,12.5384}, 27);
SoIndexedFaceSet1567->setCoord(*SoCoordinate1568);

SoShape1564->setGeometry(*SoIndexedFaceSet1567);

SoNode12->addChild(*SoShape1564);

SoShape* SoShape1569 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1570 = new SoVRMLAppearance();
SoMaterial* SoMaterial1571 = new SoMaterial();
SoMaterial1571->setAmbientIntensity(0);
SoMaterial1571->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1571->setShininess(0);
SoVRMLAppearance1570->addChild(*SoMaterial1571);

SoShape1569->addChild(*SoVRMLAppearance1570);

SoIndexedFaceSet* SoIndexedFaceSet1572 = new SoIndexedFaceSet();
SoIndexedFaceSet1572->setSolid(false);
SoIndexedFaceSet1572->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1572->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1573 = new SoCoordinate();
SoCoordinate1573->setPoint(new float[]{13.59236,0.075,11.36745,13.98635,0.075,11.28714,13.8646,0.075,12.70301,14.25858,0.075,12.6227}, 12);
SoIndexedFaceSet1572->setCoord(*SoCoordinate1573);

SoShape1569->setGeometry(*SoIndexedFaceSet1572);

SoNode12->addChild(*SoShape1569);

SoShape* SoShape1574 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1575 = new SoVRMLAppearance();
SoMaterial* SoMaterial1576 = new SoMaterial();
SoMaterial1576->setAmbientIntensity(0);
SoMaterial1576->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1576->setShininess(0);
SoVRMLAppearance1575->addChild(*SoMaterial1576);

SoShape1574->addChild(*SoVRMLAppearance1575);

SoIndexedFaceSet* SoIndexedFaceSet1577 = new SoIndexedFaceSet();
SoIndexedFaceSet1577->setSolid(false);
SoIndexedFaceSet1577->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1577->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1578 = new SoCoordinate();
SoCoordinate1578->setPoint(new float[]{13.58837,0.075,11.34785,13.45425,0.075,10.68988,13.99216,0.075,11.26555,13.85804,0.075,10.60757,14.39594,0.075,11.18324,14.26182,0.075,10.52526}, 18);
SoIndexedFaceSet1577->setCoord(*SoCoordinate1578);

SoShape1574->setGeometry(*SoIndexedFaceSet1577);

SoNode12->addChild(*SoShape1574);

SoShape* SoShape1579 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1580 = new SoVRMLAppearance();
SoMaterial* SoMaterial1581 = new SoMaterial();
SoMaterial1581->setAmbientIntensity(0);
SoMaterial1581->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1581->setShininess(0);
SoVRMLAppearance1580->addChild(*SoMaterial1581);

SoShape1579->addChild(*SoVRMLAppearance1580);

SoIndexedFaceSet* SoIndexedFaceSet1582 = new SoIndexedFaceSet();
SoIndexedFaceSet1582->setSolid(false);
SoIndexedFaceSet1582->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoIndexedFaceSet1582->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoCoordinate* SoCoordinate1583 = new SoCoordinate();
SoCoordinate1583->setPoint(new float[]{13.45026,0.075,10.67028,13.3832,0.075,10.34129,13.31614,0.075,10.0123,14.25783,0.075,10.50567,14.19077,0.075,10.17668,14.12371,0.075,9.847688}, 18);
SoIndexedFaceSet1582->setCoord(*SoCoordinate1583);

SoShape1579->setGeometry(*SoIndexedFaceSet1582);

SoNode12->addChild(*SoShape1579);

SoShape* SoShape1584 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1585 = new SoVRMLAppearance();
SoMaterial* SoMaterial1586 = new SoMaterial();
SoMaterial1586->setAmbientIntensity(0);
SoMaterial1586->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1586->setShininess(0);
SoVRMLAppearance1585->addChild(*SoMaterial1586);

SoShape1584->addChild(*SoVRMLAppearance1585);

SoIndexedFaceSet* SoIndexedFaceSet1587 = new SoIndexedFaceSet();
SoIndexedFaceSet1587->setSolid(false);
SoIndexedFaceSet1587->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1587->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1588 = new SoCoordinate();
SoCoordinate1588->setPoint(new float[]{14.11971,0.075,9.828091,13.72573,0.075,9.908399,13.9836,0.075,9.160313,13.58961,0.075,9.240621,13.84748,0.075,8.492535,13.45349,0.075,8.572843}, 18);
SoIndexedFaceSet1587->setCoord(*SoCoordinate1588);

SoShape1584->setGeometry(*SoIndexedFaceSet1587);

SoNode12->addChild(*SoShape1584);

SoShape* SoShape1589 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1590 = new SoVRMLAppearance();
SoMaterial* SoMaterial1591 = new SoMaterial();
SoMaterial1591->setAmbientIntensity(0);
SoMaterial1591->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1591->setShininess(0);
SoVRMLAppearance1590->addChild(*SoMaterial1591);

SoShape1589->addChild(*SoVRMLAppearance1590);

SoIndexedFaceSet* SoIndexedFaceSet1592 = new SoIndexedFaceSet();
SoIndexedFaceSet1592->setSolid(false);
SoIndexedFaceSet1592->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1592->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1593 = new SoCoordinate();
SoCoordinate1593->setPoint(new float[]{13.03991,0.075,8.657146,13.2369,0.075,8.616992,13.4339,0.075,8.576838,13.17602,0.075,9.324924,13.37302,0.075,9.28477,13.57001,0.075,9.244616,13.31214,0.075,9.992702,13.50914,0.075,9.952547,13.70613,0.075,9.912394}, 27);
SoIndexedFaceSet1592->setCoord(*SoCoordinate1593);

SoShape1589->setGeometry(*SoIndexedFaceSet1592);

SoNode12->addChild(*SoShape1589);

SoShape* SoShape1594 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1595 = new SoVRMLAppearance();
SoMaterial* SoMaterial1596 = new SoMaterial();
SoMaterial1596->setAmbientIntensity(0);
SoMaterial1596->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1596->setShininess(0);
SoVRMLAppearance1595->addChild(*SoMaterial1596);

SoShape1594->addChild(*SoVRMLAppearance1595);

SoIndexedFaceSet* SoIndexedFaceSet1597 = new SoIndexedFaceSet();
SoIndexedFaceSet1597->setSolid(false);
SoIndexedFaceSet1597->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1597->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1598 = new SoCoordinate();
SoCoordinate1598->setPoint(new float[]{13.70936,0.075,7.814958,13.84348,0.075,8.472938,12.90179,0.075,7.979569,13.03591,0.075,8.637548}, 12);
SoIndexedFaceSet1597->setCoord(*SoCoordinate1598);

SoShape1594->setGeometry(*SoIndexedFaceSet1597);

SoNode12->addChild(*SoShape1594);

SoShape* SoShape1599 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1600 = new SoVRMLAppearance();
SoMaterial* SoMaterial1601 = new SoMaterial();
SoMaterial1601->setAmbientIntensity(0);
SoMaterial1601->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1601->setShininess(0);
SoVRMLAppearance1600->addChild(*SoMaterial1601);

SoShape1599->addChild(*SoVRMLAppearance1600);

SoIndexedFaceSet* SoIndexedFaceSet1602 = new SoIndexedFaceSet();
SoIndexedFaceSet1602->setSolid(false);
SoIndexedFaceSet1602->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1602->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1603 = new SoCoordinate();
SoCoordinate1603->setPoint(new float[]{13.57125,0.075,7.137382,13.70537,0.075,7.795361,12.76368,0.075,7.301993,12.8978,0.075,7.959972}, 12);
SoIndexedFaceSet1602->setCoord(*SoCoordinate1603);

SoShape1599->setGeometry(*SoIndexedFaceSet1602);

SoNode12->addChild(*SoShape1599);

SoShape* SoShape1604 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1605 = new SoVRMLAppearance();
SoMaterial* SoMaterial1606 = new SoMaterial();
SoMaterial1606->setAmbientIntensity(0);
SoMaterial1606->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1606->setShininess(0);
SoVRMLAppearance1605->addChild(*SoMaterial1606);

SoShape1604->addChild(*SoVRMLAppearance1605);

SoIndexedFaceSet* SoIndexedFaceSet1607 = new SoIndexedFaceSet();
SoIndexedFaceSet1607->setSolid(false);
SoIndexedFaceSet1607->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1607->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1608 = new SoCoordinate();
SoCoordinate1608->setPoint(new float[]{12.90104,0.075,5.862537,13.29502,0.075,5.782229,13.17327,0.075,7.198093,13.56726,0.075,7.117785}, 12);
SoIndexedFaceSet1607->setCoord(*SoCoordinate1608);

SoShape1604->setGeometry(*SoIndexedFaceSet1607);

SoNode12->addChild(*SoShape1604);

SoShape* SoShape1609 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1610 = new SoVRMLAppearance();
SoMaterial* SoMaterial1611 = new SoMaterial();
SoMaterial1611->setAmbientIntensity(0);
SoMaterial1611->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1611->setShininess(0);
SoVRMLAppearance1610->addChild(*SoMaterial1611);

SoShape1609->addChild(*SoVRMLAppearance1610);

SoIndexedFaceSet* SoIndexedFaceSet1612 = new SoIndexedFaceSet();
SoIndexedFaceSet1612->setSolid(false);
SoIndexedFaceSet1612->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1612->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1613 = new SoCoordinate();
SoCoordinate1613->setPoint(new float[]{12.48745,0.075,5.94684,12.88144,0.075,5.866532,12.75969,0.075,7.282396,13.15367,0.075,7.202087}, 12);
SoIndexedFaceSet1612->setCoord(*SoCoordinate1613);

SoShape1609->setGeometry(*SoIndexedFaceSet1612);

SoNode12->addChild(*SoShape1609);

SoShape* SoShape1614 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1615 = new SoVRMLAppearance();
SoMaterial* SoMaterial1616 = new SoMaterial();
SoMaterial1616->setAmbientIntensity(0);
SoMaterial1616->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1616->setShininess(0);
SoVRMLAppearance1615->addChild(*SoMaterial1616);

SoShape1614->addChild(*SoVRMLAppearance1615);

SoIndexedFaceSet* SoIndexedFaceSet1617 = new SoIndexedFaceSet();
SoIndexedFaceSet1617->setSolid(false);
SoIndexedFaceSet1617->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1617->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1618 = new SoCoordinate();
SoCoordinate1618->setPoint(new float[]{12.48346,0.075,5.927243,12.34934,0.075,5.269264,13.29103,0.075,5.762632,13.15691,0.075,5.104652}, 12);
SoIndexedFaceSet1617->setCoord(*SoCoordinate1618);

SoShape1614->setGeometry(*SoIndexedFaceSet1617);

SoNode12->addChild(*SoShape1614);

SoShape* SoShape1619 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1620 = new SoVRMLAppearance();
SoMaterial* SoMaterial1621 = new SoMaterial();
SoMaterial1621->setAmbientIntensity(0);
SoMaterial1621->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1621->setShininess(0);
SoVRMLAppearance1620->addChild(*SoMaterial1621);

SoShape1619->addChild(*SoVRMLAppearance1620);

SoIndexedFaceSet* SoIndexedFaceSet1622 = new SoIndexedFaceSet();
SoIndexedFaceSet1622->setSolid(false);
SoIndexedFaceSet1622->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1622->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1623 = new SoCoordinate();
SoCoordinate1623->setPoint(new float[]{12.34534,0.075,5.249667,12.21122,0.075,4.591687,13.15291,0.075,5.085055,13.0188,0.075,4.427076}, 12);
SoIndexedFaceSet1622->setCoord(*SoCoordinate1623);

SoShape1619->setGeometry(*SoIndexedFaceSet1622);

SoNode12->addChild(*SoShape1619);

SoShape* SoShape1624 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1625 = new SoVRMLAppearance();
SoMaterial* SoMaterial1626 = new SoMaterial();
SoMaterial1626->setAmbientIntensity(0);
SoMaterial1626->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1626->setShininess(0);
SoVRMLAppearance1625->addChild(*SoMaterial1626);

SoShape1624->addChild(*SoVRMLAppearance1625);

SoIndexedFaceSet* SoIndexedFaceSet1627 = new SoIndexedFaceSet();
SoIndexedFaceSet1627->setSolid(false);
SoIndexedFaceSet1627->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1627->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1628 = new SoCoordinate();
SoCoordinate1628->setPoint(new float[]{12.34858,0.075,3.152231,12.74257,0.075,3.071923,12.62081,0.075,4.487787,13.0148,0.075,4.407479}, 12);
SoIndexedFaceSet1627->setCoord(*SoCoordinate1628);

SoShape1624->setGeometry(*SoIndexedFaceSet1627);

SoNode12->addChild(*SoShape1624);

SoShape* SoShape1629 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1630 = new SoVRMLAppearance();
SoMaterial* SoMaterial1631 = new SoMaterial();
SoMaterial1631->setAmbientIntensity(0);
SoMaterial1631->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1631->setShininess(0);
SoVRMLAppearance1630->addChild(*SoMaterial1631);

SoShape1629->addChild(*SoVRMLAppearance1630);

SoIndexedFaceSet* SoIndexedFaceSet1632 = new SoIndexedFaceSet();
SoIndexedFaceSet1632->setSolid(false);
SoIndexedFaceSet1632->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1632->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1633 = new SoCoordinate();
SoCoordinate1633->setPoint(new float[]{11.935,0.075,3.236535,12.32898,0.075,3.156226,12.07111,0.075,3.904312,12.4651,0.075,3.824004,12.20723,0.075,4.57209,12.60122,0.075,4.491782}, 18);
SoIndexedFaceSet1632->setCoord(*SoCoordinate1633);

SoShape1629->setGeometry(*SoIndexedFaceSet1632);

SoNode12->addChild(*SoShape1629);

SoShape* SoShape1634 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1635 = new SoVRMLAppearance();
SoMaterial* SoMaterial1636 = new SoMaterial();
SoMaterial1636->setAmbientIntensity(0);
SoMaterial1636->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1636->setShininess(0);
SoVRMLAppearance1635->addChild(*SoMaterial1636);

SoShape1634->addChild(*SoVRMLAppearance1635);

SoIndexedFaceSet* SoIndexedFaceSet1637 = new SoIndexedFaceSet();
SoIndexedFaceSet1637->setSolid(false);
SoIndexedFaceSet1637->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1637->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1638 = new SoCoordinate();
SoCoordinate1638->setPoint(new float[]{11.931,0.075,3.216938,11.79688,0.075,2.558958,12.73857,0.075,3.052326,12.60445,0.075,2.394347}, 12);
SoIndexedFaceSet1637->setCoord(*SoCoordinate1638);

SoShape1634->setGeometry(*SoIndexedFaceSet1637);

SoNode12->addChild(*SoShape1634);

SoShape* SoShape1639 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1640 = new SoVRMLAppearance();
SoMaterial* SoMaterial1641 = new SoMaterial();
SoMaterial1641->setAmbientIntensity(0);
SoMaterial1641->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1641->setShininess(0);
SoVRMLAppearance1640->addChild(*SoMaterial1641);

SoShape1639->addChild(*SoVRMLAppearance1640);

SoIndexedFaceSet* SoIndexedFaceSet1642 = new SoIndexedFaceSet();
SoIndexedFaceSet1642->setSolid(false);
SoIndexedFaceSet1642->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1642->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1643 = new SoCoordinate();
SoCoordinate1643->setPoint(new float[]{15.36825,0.075,20.17994,15.50237,0.075,20.83792,14.56068,0.075,20.34455,14.6948,0.075,21.00253}, 12);
SoIndexedFaceSet1642->setCoord(*SoCoordinate1643);

SoShape1639->setGeometry(*SoIndexedFaceSet1642);

SoNode12->addChild(*SoShape1639);

SoShape* SoShape1644 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1645 = new SoVRMLAppearance();
SoMaterial* SoMaterial1646 = new SoMaterial();
SoMaterial1646->setAmbientIntensity(0);
SoMaterial1646->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1646->setShininess(0);
SoVRMLAppearance1645->addChild(*SoMaterial1646);

SoShape1644->addChild(*SoVRMLAppearance1645);

SoIndexedFaceSet* SoIndexedFaceSet1647 = new SoIndexedFaceSet();
SoIndexedFaceSet1647->setSolid(false);
SoIndexedFaceSet1647->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoIndexedFaceSet1647->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoCoordinate* SoCoordinate1648 = new SoCoordinate();
SoCoordinate1648->setPoint(new float[]{14.55668,0.075,20.32495,14.48962,0.075,19.99596,14.42256,0.075,19.66698,15.36425,0.075,20.16034,15.29719,0.075,19.83135,15.23013,0.075,19.50236}, 18);
SoIndexedFaceSet1647->setCoord(*SoCoordinate1648);

SoShape1644->setGeometry(*SoIndexedFaceSet1647);

SoNode12->addChild(*SoShape1644);

SoShape* SoShape1649 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1650 = new SoVRMLAppearance();
SoMaterial* SoMaterial1651 = new SoMaterial();
SoMaterial1651->setAmbientIntensity(0);
SoMaterial1651->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1651->setShininess(0);
SoVRMLAppearance1650->addChild(*SoMaterial1651);

SoShape1649->addChild(*SoVRMLAppearance1650);

SoIndexedFaceSet* SoIndexedFaceSet1652 = new SoIndexedFaceSet();
SoIndexedFaceSet1652->setSolid(false);
SoIndexedFaceSet1652->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1652->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1653 = new SoCoordinate();
SoCoordinate1653->setPoint(new float[]{14.55992,0.075,18.22752,14.95391,0.075,18.14721,14.83215,0.075,19.56307,15.22614,0.075,19.48277}, 12);
SoIndexedFaceSet1652->setCoord(*SoCoordinate1653);

SoShape1649->setGeometry(*SoIndexedFaceSet1652);

SoNode12->addChild(*SoShape1649);

SoShape* SoShape1654 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1655 = new SoVRMLAppearance();
SoMaterial* SoMaterial1656 = new SoMaterial();
SoMaterial1656->setAmbientIntensity(0);
SoMaterial1656->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1656->setShininess(0);
SoVRMLAppearance1655->addChild(*SoMaterial1656);

SoShape1654->addChild(*SoVRMLAppearance1655);

SoIndexedFaceSet* SoIndexedFaceSet1657 = new SoIndexedFaceSet();
SoIndexedFaceSet1657->setSolid(false);
SoIndexedFaceSet1657->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1657->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1658 = new SoCoordinate();
SoCoordinate1658->setPoint(new float[]{14.14634,0.075,18.31182,14.54032,0.075,18.23151,14.28245,0.075,18.9796,14.67644,0.075,18.89929,14.41857,0.075,19.64738,14.81256,0.075,19.56707}, 18);
SoIndexedFaceSet1657->setCoord(*SoCoordinate1658);

SoShape1654->setGeometry(*SoIndexedFaceSet1657);

SoNode12->addChild(*SoShape1654);

SoShape* SoShape1659 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1660 = new SoVRMLAppearance();
SoMaterial* SoMaterial1661 = new SoMaterial();
SoMaterial1661->setAmbientIntensity(0);
SoMaterial1661->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1661->setShininess(0);
SoVRMLAppearance1660->addChild(*SoMaterial1661);

SoShape1659->addChild(*SoVRMLAppearance1660);

SoIndexedFaceSet* SoIndexedFaceSet1662 = new SoIndexedFaceSet();
SoIndexedFaceSet1662->setSolid(false);
SoIndexedFaceSet1662->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1662->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1663 = new SoCoordinate();
SoCoordinate1663->setPoint(new float[]{14.14234,0.075,18.29222,14.00822,0.075,17.63424,14.94991,0.075,18.12761,14.81579,0.075,17.46964}, 12);
SoIndexedFaceSet1662->setCoord(*SoCoordinate1663);

SoShape1659->setGeometry(*SoIndexedFaceSet1662);

SoNode12->addChild(*SoShape1659);

SoShape* SoShape1664 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1665 = new SoVRMLAppearance();
SoMaterial* SoMaterial1666 = new SoMaterial();
SoMaterial1666->setAmbientIntensity(0);
SoMaterial1666->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1666->setShininess(0);
SoVRMLAppearance1665->addChild(*SoMaterial1666);

SoShape1664->addChild(*SoVRMLAppearance1665);

SoIndexedFaceSet* SoIndexedFaceSet1667 = new SoIndexedFaceSet();
SoIndexedFaceSet1667->setSolid(false);
SoIndexedFaceSet1667->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoIndexedFaceSet1667->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoCoordinate* SoCoordinate1668 = new SoCoordinate();
SoCoordinate1668->setPoint(new float[]{14.00423,0.075,17.61465,13.93717,0.075,17.28566,13.87011,0.075,16.95667,14.8118,0.075,17.45004,14.74474,0.075,17.12105,14.67768,0.075,16.79206}, 18);
SoIndexedFaceSet1667->setCoord(*SoCoordinate1668);

SoShape1664->setGeometry(*SoIndexedFaceSet1667);

SoNode12->addChild(*SoShape1664);

SoShape* SoShape1669 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1670 = new SoVRMLAppearance();
SoMaterial* SoMaterial1671 = new SoMaterial();
SoMaterial1671->setAmbientIntensity(0);
SoMaterial1671->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1671->setShininess(0);
SoVRMLAppearance1670->addChild(*SoMaterial1671);

SoShape1669->addChild(*SoVRMLAppearance1670);

SoIndexedFaceSet* SoIndexedFaceSet1672 = new SoIndexedFaceSet();
SoIndexedFaceSet1672->setSolid(false);
SoIndexedFaceSet1672->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1672->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1673 = new SoCoordinate();
SoCoordinate1673->setPoint(new float[]{14.67368,0.075,16.77246,14.2797,0.075,16.85277,14.53757,0.075,16.10468,14.14358,0.075,16.18499,14.40145,0.075,15.4369,14.00746,0.075,15.51721}, 18);
SoIndexedFaceSet1672->setCoord(*SoCoordinate1673);

SoShape1669->setGeometry(*SoIndexedFaceSet1672);

SoNode12->addChild(*SoShape1669);

SoShape* SoShape1674 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1675 = new SoVRMLAppearance();
SoMaterial* SoMaterial1676 = new SoMaterial();
SoMaterial1676->setAmbientIntensity(0);
SoMaterial1676->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1676->setShininess(0);
SoVRMLAppearance1675->addChild(*SoMaterial1676);

SoShape1674->addChild(*SoVRMLAppearance1675);

SoIndexedFaceSet* SoIndexedFaceSet1677 = new SoIndexedFaceSet();
SoIndexedFaceSet1677->setSolid(false);
SoIndexedFaceSet1677->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1677->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1678 = new SoCoordinate();
SoCoordinate1678->setPoint(new float[]{14.2601,0.075,16.85676,13.86611,0.075,16.93707,14.12398,0.075,16.18899,13.73,0.075,16.26929,13.98787,0.075,15.52121,13.59388,0.075,15.60152}, 18);
SoIndexedFaceSet1677->setCoord(*SoCoordinate1678);

SoShape1674->setGeometry(*SoIndexedFaceSet1677);

SoNode12->addChild(*SoShape1674);

SoShape* SoShape1679 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1680 = new SoVRMLAppearance();
SoMaterial* SoMaterial1681 = new SoMaterial();
SoMaterial1681->setAmbientIntensity(0);
SoMaterial1681->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1681->setShininess(0);
SoVRMLAppearance1680->addChild(*SoMaterial1681);

SoShape1679->addChild(*SoVRMLAppearance1680);

SoIndexedFaceSet* SoIndexedFaceSet1682 = new SoIndexedFaceSet();
SoIndexedFaceSet1682->setSolid(false);
SoIndexedFaceSet1682->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1682->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1683 = new SoCoordinate();
SoCoordinate1683->setPoint(new float[]{13.58989,0.075,15.58192,13.45577,0.075,14.92394,14.39746,0.075,15.41731,14.26334,0.075,14.75933}, 12);
SoIndexedFaceSet1682->setCoord(*SoCoordinate1683);

SoShape1679->setGeometry(*SoIndexedFaceSet1682);

SoNode12->addChild(*SoShape1679);

SoShape* SoShape1684 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1685 = new SoVRMLAppearance();
SoMaterial* SoMaterial1686 = new SoMaterial();
SoMaterial1686->setAmbientIntensity(0);
SoMaterial1686->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1686->setShininess(0);
SoVRMLAppearance1685->addChild(*SoMaterial1686);

SoShape1684->addChild(*SoVRMLAppearance1685);

SoIndexedFaceSet* SoIndexedFaceSet1687 = new SoIndexedFaceSet();
SoIndexedFaceSet1687->setSolid(false);
SoIndexedFaceSet1687->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1687->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1688 = new SoCoordinate();
SoCoordinate1688->setPoint(new float[]{12.3501,0.075,7.386296,12.54709,0.075,7.346142,12.74408,0.075,7.305988,12.48621,0.075,8.054074,12.68321,0.075,8.01392,12.8802,0.075,7.973765,12.62233,0.075,8.721852,12.81932,0.075,8.681698,13.01632,0.075,8.641543}, 27);
SoIndexedFaceSet1687->setCoord(*SoCoordinate1688);

SoShape1684->setGeometry(*SoIndexedFaceSet1687);

SoNode12->addChild(*SoShape1684);

SoShape* SoShape1689 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1690 = new SoVRMLAppearance();
SoMaterial* SoMaterial1691 = new SoMaterial();
SoMaterial1691->setAmbientIntensity(0);
SoMaterial1691->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1691->setShininess(0);
SoVRMLAppearance1690->addChild(*SoMaterial1691);

SoShape1689->addChild(*SoVRMLAppearance1690);

SoIndexedFaceSet* SoIndexedFaceSet1692 = new SoIndexedFaceSet();
SoIndexedFaceSet1692->setSolid(false);
SoIndexedFaceSet1692->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1692->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1693 = new SoCoordinate();
SoCoordinate1693->setPoint(new float[]{11.93651,0.075,7.470599,12.3305,0.075,7.390291,12.20875,0.075,8.806155,12.60273,0.075,8.725846}, 12);
SoIndexedFaceSet1692->setCoord(*SoCoordinate1693);

SoShape1689->setGeometry(*SoIndexedFaceSet1692);

SoNode12->addChild(*SoShape1689);

SoShape* SoShape1694 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1695 = new SoVRMLAppearance();
SoMaterial* SoMaterial1696 = new SoMaterial();
SoMaterial1696->setAmbientIntensity(0);
SoMaterial1696->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1696->setShininess(0);
SoVRMLAppearance1695->addChild(*SoMaterial1696);

SoShape1694->addChild(*SoVRMLAppearance1695);

SoIndexedFaceSet* SoIndexedFaceSet1697 = new SoIndexedFaceSet();
SoIndexedFaceSet1697->setSolid(false);
SoIndexedFaceSet1697->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1697->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1698 = new SoCoordinate();
SoCoordinate1698->setPoint(new float[]{12.60597,0.075,6.628411,12.74009,0.075,7.286391,12.20218,0.075,6.710717,12.3363,0.075,7.368696,11.7984,0.075,6.793023,11.93252,0.075,7.451002}, 18);
SoIndexedFaceSet1697->setCoord(*SoCoordinate1698);

SoShape1694->setGeometry(*SoIndexedFaceSet1697);

SoNode12->addChild(*SoShape1694);

SoShape* SoShape1699 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1700 = new SoVRMLAppearance();
SoMaterial* SoMaterial1701 = new SoMaterial();
SoMaterial1701->setAmbientIntensity(0);
SoMaterial1701->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1701->setShininess(0);
SoVRMLAppearance1700->addChild(*SoMaterial1701);

SoShape1699->addChild(*SoVRMLAppearance1700);

SoIndexedFaceSet* SoIndexedFaceSet1702 = new SoIndexedFaceSet();
SoIndexedFaceSet1702->setSolid(false);
SoIndexedFaceSet1702->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1702->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1703 = new SoCoordinate();
SoCoordinate1703->setPoint(new float[]{12.46786,0.075,5.950835,12.60197,0.075,6.608814,11.66028,0.075,6.115446,11.7944,0.075,6.773426}, 12);
SoIndexedFaceSet1702->setCoord(*SoCoordinate1703);

SoShape1699->setGeometry(*SoIndexedFaceSet1702);

SoNode12->addChild(*SoShape1699);

SoShape* SoShape1704 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1705 = new SoVRMLAppearance();
SoMaterial* SoMaterial1706 = new SoMaterial();
SoMaterial1706->setAmbientIntensity(0);
SoMaterial1706->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1706->setShininess(0);
SoVRMLAppearance1705->addChild(*SoMaterial1706);

SoShape1704->addChild(*SoVRMLAppearance1705);

SoIndexedFaceSet* SoIndexedFaceSet1707 = new SoIndexedFaceSet();
SoIndexedFaceSet1707->setSolid(false);
SoIndexedFaceSet1707->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1707->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1708 = new SoCoordinate();
SoCoordinate1708->setPoint(new float[]{11.79764,0.075,4.675991,11.99463,0.075,4.635836,12.19163,0.075,4.595682,11.93376,0.075,5.343768,12.13075,0.075,5.303614,12.32774,0.075,5.26346,12.06987,0.075,6.011546,12.26687,0.075,5.971392,12.46386,0.075,5.931238}, 27);
SoIndexedFaceSet1707->setCoord(*SoCoordinate1708);

SoShape1704->setGeometry(*SoIndexedFaceSet1707);

SoNode12->addChild(*SoShape1704);

SoShape* SoShape1709 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1710 = new SoVRMLAppearance();
SoMaterial* SoMaterial1711 = new SoMaterial();
SoMaterial1711->setAmbientIntensity(0);
SoMaterial1711->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1711->setShininess(0);
SoVRMLAppearance1710->addChild(*SoMaterial1711);

SoShape1709->addChild(*SoVRMLAppearance1710);

SoIndexedFaceSet* SoIndexedFaceSet1712 = new SoIndexedFaceSet();
SoIndexedFaceSet1712->setSolid(false);
SoIndexedFaceSet1712->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1712->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1713 = new SoCoordinate();
SoCoordinate1713->setPoint(new float[]{11.38406,0.075,4.760293,11.58105,0.075,4.720139,11.77804,0.075,4.679985,11.52017,0.075,5.428071,11.71717,0.075,5.387917,11.91416,0.075,5.347763,11.65629,0.075,6.095849,11.85328,0.075,6.055695,12.05028,0.075,6.015541}, 27);
SoIndexedFaceSet1712->setCoord(*SoCoordinate1713);

SoShape1709->setGeometry(*SoIndexedFaceSet1712);

SoNode12->addChild(*SoShape1709);

SoShape* SoShape1714 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1715 = new SoVRMLAppearance();
SoMaterial* SoMaterial1716 = new SoMaterial();
SoMaterial1716->setAmbientIntensity(0);
SoMaterial1716->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1716->setShininess(0);
SoVRMLAppearance1715->addChild(*SoMaterial1716);

SoShape1714->addChild(*SoVRMLAppearance1715);

SoIndexedFaceSet* SoIndexedFaceSet1717 = new SoIndexedFaceSet();
SoIndexedFaceSet1717->setSolid(false);
SoIndexedFaceSet1717->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1717->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1718 = new SoCoordinate();
SoCoordinate1718->setPoint(new float[]{11.38006,0.075,4.740696,11.24594,0.075,4.082717,12.18763,0.075,4.576085,12.05351,0.075,3.918105}, 12);
SoIndexedFaceSet1717->setCoord(*SoCoordinate1718);

SoShape1714->setGeometry(*SoIndexedFaceSet1717);

SoNode12->addChild(*SoShape1714);

SoShape* SoShape1719 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1720 = new SoVRMLAppearance();
SoMaterial* SoMaterial1721 = new SoMaterial();
SoMaterial1721->setAmbientIntensity(0);
SoMaterial1721->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1721->setShininess(0);
SoVRMLAppearance1720->addChild(*SoMaterial1721);

SoShape1719->addChild(*SoVRMLAppearance1720);

SoIndexedFaceSet* SoIndexedFaceSet1722 = new SoIndexedFaceSet();
SoIndexedFaceSet1722->setSolid(false);
SoIndexedFaceSet1722->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1722->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1723 = new SoCoordinate();
SoCoordinate1723->setPoint(new float[]{11.9154,0.075,3.240529,12.04952,0.075,3.898509,11.10783,0.075,3.40514,11.24195,0.075,4.06312}, 12);
SoIndexedFaceSet1722->setCoord(*SoCoordinate1723);

SoShape1719->setGeometry(*SoIndexedFaceSet1722);

SoNode12->addChild(*SoShape1719);

SoShape* SoShape1724 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1725 = new SoVRMLAppearance();
SoMaterial* SoMaterial1726 = new SoMaterial();
SoMaterial1726->setAmbientIntensity(0);
SoMaterial1726->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1726->setShininess(0);
SoVRMLAppearance1725->addChild(*SoMaterial1726);

SoShape1724->addChild(*SoVRMLAppearance1725);

SoIndexedFaceSet* SoIndexedFaceSet1727 = new SoIndexedFaceSet();
SoIndexedFaceSet1727->setSolid(false);
SoIndexedFaceSet1727->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1727->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1728 = new SoCoordinate();
SoCoordinate1728->setPoint(new float[]{11.24518,0.075,1.965685,11.63917,0.075,1.885376,11.51742,0.075,3.30124,11.9114,0.075,3.220932}, 12);
SoIndexedFaceSet1727->setCoord(*SoCoordinate1728);

SoShape1724->setGeometry(*SoIndexedFaceSet1727);

SoNode12->addChild(*SoShape1724);

SoShape* SoShape1729 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1730 = new SoVRMLAppearance();
SoMaterial* SoMaterial1731 = new SoMaterial();
SoMaterial1731->setAmbientIntensity(0);
SoMaterial1731->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1731->setShininess(0);
SoVRMLAppearance1730->addChild(*SoMaterial1731);

SoShape1729->addChild(*SoVRMLAppearance1730);

SoIndexedFaceSet* SoIndexedFaceSet1732 = new SoIndexedFaceSet();
SoIndexedFaceSet1732->setSolid(false);
SoIndexedFaceSet1732->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1732->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1733 = new SoCoordinate();
SoCoordinate1733->setPoint(new float[]{10.8316,0.075,2.049988,11.02859,0.075,2.009833,11.22559,0.075,1.969679,10.96772,0.075,2.717766,11.16471,0.075,2.677611,11.3617,0.075,2.637457,11.10383,0.075,3.385544,11.30083,0.075,3.345389,11.49782,0.075,3.305235}, 27);
SoIndexedFaceSet1732->setCoord(*SoCoordinate1733);

SoShape1729->setGeometry(*SoIndexedFaceSet1732);

SoNode12->addChild(*SoShape1729);

SoShape* SoShape1734 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1735 = new SoVRMLAppearance();
SoMaterial* SoMaterial1736 = new SoMaterial();
SoMaterial1736->setAmbientIntensity(0);
SoMaterial1736->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1736->setShininess(0);
SoVRMLAppearance1735->addChild(*SoMaterial1736);

SoShape1734->addChild(*SoVRMLAppearance1735);

SoIndexedFaceSet* SoIndexedFaceSet1737 = new SoIndexedFaceSet();
SoIndexedFaceSet1737->setSolid(false);
SoIndexedFaceSet1737->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1737->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1738 = new SoCoordinate();
SoCoordinate1738->setPoint(new float[]{13.45652,0.075,17.04097,13.85051,0.075,16.96066,13.59264,0.075,17.70875,13.98663,0.075,17.62844,13.72876,0.075,18.37653,14.12274,0.075,18.29622}, 18);
SoIndexedFaceSet1737->setCoord(*SoCoordinate1738);

SoShape1734->setGeometry(*SoIndexedFaceSet1737);

SoNode12->addChild(*SoShape1734);

SoShape* SoShape1739 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1740 = new SoVRMLAppearance();
SoMaterial* SoMaterial1741 = new SoMaterial();
SoMaterial1741->setAmbientIntensity(0);
SoMaterial1741->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1741->setShininess(0);
SoVRMLAppearance1740->addChild(*SoMaterial1741);

SoShape1739->addChild(*SoVRMLAppearance1740);

SoIndexedFaceSet* SoIndexedFaceSet1742 = new SoIndexedFaceSet();
SoIndexedFaceSet1742->setSolid(false);
SoIndexedFaceSet1742->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1742->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1743 = new SoCoordinate();
SoCoordinate1743->setPoint(new float[]{11.2467,0.075,6.199749,11.44369,0.075,6.159595,11.64069,0.075,6.119441,11.38282,0.075,6.867527,11.57981,0.075,6.827373,11.7768,0.075,6.787219,11.51893,0.075,7.535305,11.71593,0.075,7.495151,11.91292,0.075,7.454997}, 27);
SoIndexedFaceSet1742->setCoord(*SoCoordinate1743);

SoShape1739->setGeometry(*SoIndexedFaceSet1742);

SoNode12->addChild(*SoShape1739);

SoShape* SoShape1744 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1745 = new SoVRMLAppearance();
SoMaterial* SoMaterial1746 = new SoMaterial();
SoMaterial1746->setAmbientIntensity(0);
SoMaterial1746->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1746->setShininess(0);
SoVRMLAppearance1745->addChild(*SoMaterial1746);

SoShape1744->addChild(*SoVRMLAppearance1745);

SoIndexedFaceSet* SoIndexedFaceSet1747 = new SoIndexedFaceSet();
SoIndexedFaceSet1747->setSolid(false);
SoIndexedFaceSet1747->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1747->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1748 = new SoCoordinate();
SoCoordinate1748->setPoint(new float[]{10.83312,0.075,6.284052,11.03011,0.075,6.243898,11.2271,0.075,6.203744,10.96923,0.075,6.95183,11.16623,0.075,6.911676,11.36322,0.075,6.871522,11.10535,0.075,7.619608,11.30234,0.075,7.579454,11.49934,0.075,7.539299}, 27);
SoIndexedFaceSet1747->setCoord(*SoCoordinate1748);

SoShape1744->setGeometry(*SoIndexedFaceSet1747);

SoNode12->addChild(*SoShape1744);

SoShape* SoShape1749 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1750 = new SoVRMLAppearance();
SoMaterial* SoMaterial1751 = new SoMaterial();
SoMaterial1751->setAmbientIntensity(0);
SoMaterial1751->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1751->setShininess(0);
SoVRMLAppearance1750->addChild(*SoMaterial1751);

SoShape1749->addChild(*SoVRMLAppearance1750);

SoIndexedFaceSet* SoIndexedFaceSet1752 = new SoIndexedFaceSet();
SoIndexedFaceSet1752->setSolid(false);
SoIndexedFaceSet1752->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1752->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1753 = new SoCoordinate();
SoCoordinate1753->setPoint(new float[]{10.82912,0.075,6.264455,10.695,0.075,5.606476,11.63669,0.075,6.099844,11.50257,0.075,5.441864}, 12);
SoIndexedFaceSet1752->setCoord(*SoCoordinate1753);

SoShape1749->setGeometry(*SoIndexedFaceSet1752);

SoNode12->addChild(*SoShape1749);

SoShape* SoShape1754 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1755 = new SoVRMLAppearance();
SoMaterial* SoMaterial1756 = new SoMaterial();
SoMaterial1756->setAmbientIntensity(0);
SoMaterial1756->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1756->setShininess(0);
SoVRMLAppearance1755->addChild(*SoMaterial1756);

SoShape1754->addChild(*SoVRMLAppearance1755);

SoIndexedFaceSet* SoIndexedFaceSet1757 = new SoIndexedFaceSet();
SoIndexedFaceSet1757->setSolid(false);
SoIndexedFaceSet1757->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1757->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1758 = new SoCoordinate();
SoCoordinate1758->setPoint(new float[]{10.69101,0.075,5.586879,10.55689,0.075,4.928899,11.49858,0.075,5.422267,11.36446,0.075,4.764288}, 12);
SoIndexedFaceSet1757->setCoord(*SoCoordinate1758);

SoShape1754->setGeometry(*SoIndexedFaceSet1757);

SoNode12->addChild(*SoShape1754);

SoShape* SoShape1759 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1760 = new SoVRMLAppearance();
SoMaterial* SoMaterial1761 = new SoMaterial();
SoMaterial1761->setAmbientIntensity(0);
SoMaterial1761->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1761->setShininess(0);
SoVRMLAppearance1760->addChild(*SoMaterial1761);

SoShape1759->addChild(*SoVRMLAppearance1760);

SoIndexedFaceSet* SoIndexedFaceSet1762 = new SoIndexedFaceSet();
SoIndexedFaceSet1762->setSolid(false);
SoIndexedFaceSet1762->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1762->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1763 = new SoCoordinate();
SoCoordinate1763->setPoint(new float[]{10.69424,0.075,3.489444,11.08823,0.075,3.409135,10.96648,0.075,4.824999,11.36047,0.075,4.744691}, 12);
SoIndexedFaceSet1762->setCoord(*SoCoordinate1763);

SoShape1759->setGeometry(*SoIndexedFaceSet1762);

SoNode12->addChild(*SoShape1759);

SoShape* SoShape1764 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1765 = new SoVRMLAppearance();
SoMaterial* SoMaterial1766 = new SoMaterial();
SoMaterial1766->setAmbientIntensity(0);
SoMaterial1766->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1766->setShininess(0);
SoVRMLAppearance1765->addChild(*SoMaterial1766);

SoShape1764->addChild(*SoVRMLAppearance1765);

SoIndexedFaceSet* SoIndexedFaceSet1767 = new SoIndexedFaceSet();
SoIndexedFaceSet1767->setSolid(false);
SoIndexedFaceSet1767->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1767->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1768 = new SoCoordinate();
SoCoordinate1768->setPoint(new float[]{10.28066,0.075,3.573746,10.47765,0.075,3.533592,10.67465,0.075,3.493438,10.41678,0.075,4.241524,10.61377,0.075,4.20137,10.81076,0.075,4.161216,10.55289,0.075,4.909302,10.74989,0.075,4.869148,10.94688,0.075,4.828994}, 27);
SoIndexedFaceSet1767->setCoord(*SoCoordinate1768);

SoShape1764->setGeometry(*SoIndexedFaceSet1767);

SoNode12->addChild(*SoShape1764);

SoShape* SoShape1769 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1770 = new SoVRMLAppearance();
SoMaterial* SoMaterial1771 = new SoMaterial();
SoMaterial1771->setAmbientIntensity(0);
SoMaterial1771->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1771->setShininess(0);
SoVRMLAppearance1770->addChild(*SoMaterial1771);

SoShape1769->addChild(*SoVRMLAppearance1770);

SoIndexedFaceSet* SoIndexedFaceSet1772 = new SoIndexedFaceSet();
SoIndexedFaceSet1772->setSolid(false);
SoIndexedFaceSet1772->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1772->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1773 = new SoCoordinate();
SoCoordinate1773->setPoint(new float[]{10.27667,0.075,3.554149,10.14255,0.075,2.89617,11.08424,0.075,3.389538,10.95012,0.075,2.731559}, 12);
SoIndexedFaceSet1772->setCoord(*SoCoordinate1773);

SoShape1769->setGeometry(*SoIndexedFaceSet1772);

SoNode12->addChild(*SoShape1769);

SoShape* SoShape1774 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1775 = new SoVRMLAppearance();
SoMaterial* SoMaterial1776 = new SoMaterial();
SoMaterial1776->setAmbientIntensity(0);
SoMaterial1776->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1776->setShininess(0);
SoVRMLAppearance1775->addChild(*SoMaterial1776);

SoShape1774->addChild(*SoVRMLAppearance1775);

SoIndexedFaceSet* SoIndexedFaceSet1777 = new SoIndexedFaceSet();
SoIndexedFaceSet1777->setSolid(false);
SoIndexedFaceSet1777->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1777->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1778 = new SoCoordinate();
SoCoordinate1778->setPoint(new float[]{10.13855,0.075,2.876573,10.00443,0.075,2.218594,10.94612,0.075,2.711962,10.812,0.075,2.053982}, 12);
SoIndexedFaceSet1777->setCoord(*SoCoordinate1778);

SoShape1774->setGeometry(*SoIndexedFaceSet1777);

SoNode12->addChild(*SoShape1774);

SoShape* SoShape1779 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1780 = new SoVRMLAppearance();
SoMaterial* SoMaterial1781 = new SoMaterial();
SoMaterial1781->setAmbientIntensity(0);
SoMaterial1781->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1781->setShininess(0);
SoVRMLAppearance1780->addChild(*SoMaterial1781);

SoShape1779->addChild(*SoVRMLAppearance1780);

SoIndexedFaceSet* SoIndexedFaceSet1782 = new SoIndexedFaceSet();
SoIndexedFaceSet1782->setSolid(false);
SoIndexedFaceSet1782->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1782->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1783 = new SoCoordinate();
SoCoordinate1783->setPoint(new float[]{10.14007,0.075,7.110638,10.00595,0.075,6.452658,10.94764,0.075,6.946026,10.81352,0.075,6.288047}, 12);
SoIndexedFaceSet1782->setCoord(*SoCoordinate1783);

SoShape1779->setGeometry(*SoIndexedFaceSet1782);

SoNode12->addChild(*SoShape1779);

SoShape* SoShape1784 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1785 = new SoVRMLAppearance();
SoMaterial* SoMaterial1786 = new SoMaterial();
SoMaterial1786->setAmbientIntensity(0);
SoMaterial1786->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1786->setShininess(0);
SoVRMLAppearance1785->addChild(*SoMaterial1786);

SoShape1784->addChild(*SoVRMLAppearance1785);

SoIndexedFaceSet* SoIndexedFaceSet1787 = new SoIndexedFaceSet();
SoIndexedFaceSet1787->setSolid(false);
SoIndexedFaceSet1787->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1787->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1788 = new SoCoordinate();
SoCoordinate1788->setPoint(new float[]{10.1433,0.075,5.013202,10.53729,0.075,4.932894,10.27942,0.075,5.68098,10.67341,0.075,5.600672,10.41554,0.075,6.348758,10.80952,0.075,6.26845}, 18);
SoIndexedFaceSet1787->setCoord(*SoCoordinate1788);

SoShape1784->setGeometry(*SoIndexedFaceSet1787);

SoNode12->addChild(*SoShape1784);

SoShape* SoShape1789 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1790 = new SoVRMLAppearance();
SoMaterial* SoMaterial1791 = new SoMaterial();
SoMaterial1791->setAmbientIntensity(0);
SoMaterial1791->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1791->setShininess(0);
SoVRMLAppearance1790->addChild(*SoMaterial1791);

SoShape1789->addChild(*SoVRMLAppearance1790);

SoIndexedFaceSet* SoIndexedFaceSet1792 = new SoIndexedFaceSet();
SoIndexedFaceSet1792->setSolid(false);
SoIndexedFaceSet1792->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1792->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1793 = new SoCoordinate();
SoCoordinate1793->setPoint(new float[]{9.72972,0.075,5.097506,10.12371,0.075,5.017197,9.865837,0.075,5.765283,10.25982,0.075,5.684975,10.00195,0.075,6.433061,10.39594,0.075,6.352753}, 18);
SoIndexedFaceSet1792->setCoord(*SoCoordinate1793);

SoShape1789->setGeometry(*SoIndexedFaceSet1792);

SoNode12->addChild(*SoShape1789);

SoShape* SoShape1794 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1795 = new SoVRMLAppearance();
SoMaterial* SoMaterial1796 = new SoMaterial();
SoMaterial1796->setAmbientIntensity(0);
SoMaterial1796->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1796->setShininess(0);
SoVRMLAppearance1795->addChild(*SoMaterial1796);

SoShape1794->addChild(*SoVRMLAppearance1795);

SoIndexedFaceSet* SoIndexedFaceSet1797 = new SoIndexedFaceSet();
SoIndexedFaceSet1797->setSolid(false);
SoIndexedFaceSet1797->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1797->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1798 = new SoCoordinate();
SoCoordinate1798->setPoint(new float[]{10.39918,0.075,4.255318,10.5333,0.075,4.913297,9.591606,0.075,4.419929,9.725726,0.075,5.077909}, 12);
SoIndexedFaceSet1797->setCoord(*SoCoordinate1798);

SoShape1794->setGeometry(*SoIndexedFaceSet1797);

SoNode12->addChild(*SoShape1794);

SoShape* SoShape1799 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1800 = new SoVRMLAppearance();
SoMaterial* SoMaterial1801 = new SoMaterial();
SoMaterial1801->setAmbientIntensity(0);
SoMaterial1801->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1801->setShininess(0);
SoVRMLAppearance1800->addChild(*SoMaterial1801);

SoShape1799->addChild(*SoVRMLAppearance1800);

SoIndexedFaceSet* SoIndexedFaceSet1802 = new SoIndexedFaceSet();
SoIndexedFaceSet1802->setSolid(false);
SoIndexedFaceSet1802->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1802->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1803 = new SoCoordinate();
SoCoordinate1803->setPoint(new float[]{9.587612,0.075,4.400332,9.453492,0.075,3.742352,10.39518,0.075,4.235721,10.26106,0.075,3.577741}, 12);
SoIndexedFaceSet1802->setCoord(*SoCoordinate1803);

SoShape1799->setGeometry(*SoIndexedFaceSet1802);

SoNode12->addChild(*SoShape1799);

SoShape* SoShape1804 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1805 = new SoVRMLAppearance();
SoMaterial* SoMaterial1806 = new SoMaterial();
SoMaterial1806->setAmbientIntensity(0);
SoMaterial1806->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1806->setShininess(0);
SoVRMLAppearance1805->addChild(*SoMaterial1806);

SoShape1804->addChild(*SoVRMLAppearance1805);

SoIndexedFaceSet* SoIndexedFaceSet1807 = new SoIndexedFaceSet();
SoIndexedFaceSet1807->setSolid(false);
SoIndexedFaceSet1807->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1807->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1808 = new SoCoordinate();
SoCoordinate1808->setPoint(new float[]{9.590848,0.075,2.302897,9.984836,0.075,2.222588,9.863082,0.075,3.638453,10.25707,0.075,3.558144}, 12);
SoIndexedFaceSet1807->setCoord(*SoCoordinate1808);

SoShape1804->setGeometry(*SoIndexedFaceSet1807);

SoNode12->addChild(*SoShape1804);

SoShape* SoShape1809 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1810 = new SoVRMLAppearance();
SoMaterial* SoMaterial1811 = new SoMaterial();
SoMaterial1811->setAmbientIntensity(0);
SoMaterial1811->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1811->setShininess(0);
SoVRMLAppearance1810->addChild(*SoMaterial1811);

SoShape1809->addChild(*SoVRMLAppearance1810);

SoIndexedFaceSet* SoIndexedFaceSet1812 = new SoIndexedFaceSet();
SoIndexedFaceSet1812->setSolid(false);
SoIndexedFaceSet1812->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1812->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1813 = new SoCoordinate();
SoCoordinate1813->setPoint(new float[]{9.177264,0.075,2.3872,9.571251,0.075,2.306891,9.449498,0.075,3.722755,9.843485,0.075,3.642447}, 12);
SoIndexedFaceSet1812->setCoord(*SoCoordinate1813);

SoShape1809->setGeometry(*SoIndexedFaceSet1812);

SoNode12->addChild(*SoShape1809);

SoShape* SoShape1814 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1815 = new SoVRMLAppearance();
SoMaterial* SoMaterial1816 = new SoMaterial();
SoMaterial1816->setAmbientIntensity(0);
SoMaterial1816->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1816->setShininess(0);
SoVRMLAppearance1815->addChild(*SoMaterial1816);

SoShape1814->addChild(*SoVRMLAppearance1815);

SoIndexedFaceSet* SoIndexedFaceSet1817 = new SoIndexedFaceSet();
SoIndexedFaceSet1817->setSolid(false);
SoIndexedFaceSet1817->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1817->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1818 = new SoCoordinate();
SoCoordinate1818->setPoint(new float[]{9.17327,0.075,2.367603,9.03915,0.075,1.709623,9.577055,0.075,2.285297,9.442936,0.075,1.627318,9.980841,0.075,2.202991,9.846722,0.075,1.545012}, 18);
SoIndexedFaceSet1817->setCoord(*SoCoordinate1818);

SoShape1814->setGeometry(*SoIndexedFaceSet1817);

SoNode12->addChild(*SoShape1814);

SoShape* SoShape1819 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1820 = new SoVRMLAppearance();
SoMaterial* SoMaterial1821 = new SoMaterial();
SoMaterial1821->setAmbientIntensity(0);
SoMaterial1821->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1821->setShininess(0);
SoVRMLAppearance1820->addChild(*SoMaterial1821);

SoShape1819->addChild(*SoVRMLAppearance1820);

SoIndexedFaceSet* SoIndexedFaceSet1822 = new SoIndexedFaceSet();
SoIndexedFaceSet1822->setSolid(false);
SoIndexedFaceSet1822->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1822->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1823 = new SoCoordinate();
SoCoordinate1823->setPoint(new float[]{9.174786,0.075,6.601667,9.040667,0.075,5.943688,9.982357,0.075,6.437056,9.848237,0.075,5.779077}, 12);
SoIndexedFaceSet1822->setCoord(*SoCoordinate1823);

SoShape1819->setGeometry(*SoIndexedFaceSet1822);

SoNode12->addChild(*SoShape1819);

SoShape* SoShape1824 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1825 = new SoVRMLAppearance();
SoMaterial* SoMaterial1826 = new SoMaterial();
SoMaterial1826->setAmbientIntensity(0);
SoMaterial1826->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1826->setShininess(0);
SoVRMLAppearance1825->addChild(*SoMaterial1826);

SoShape1824->addChild(*SoVRMLAppearance1825);

SoIndexedFaceSet* SoIndexedFaceSet1827 = new SoIndexedFaceSet();
SoIndexedFaceSet1827->setSolid(false);
SoIndexedFaceSet1827->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1827->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1828 = new SoCoordinate();
SoCoordinate1828->setPoint(new float[]{9.036672,0.075,5.924091,8.902553,0.075,5.266111,9.844243,0.075,5.75948,9.710123,0.075,5.1015}, 12);
SoIndexedFaceSet1827->setCoord(*SoCoordinate1828);

SoShape1824->setGeometry(*SoIndexedFaceSet1827);

SoNode12->addChild(*SoShape1824);

SoShape* SoShape1829 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1830 = new SoVRMLAppearance();
SoMaterial* SoMaterial1831 = new SoMaterial();
SoMaterial1831->setAmbientIntensity(0);
SoMaterial1831->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1831->setShininess(0);
SoVRMLAppearance1830->addChild(*SoMaterial1831);

SoShape1829->addChild(*SoVRMLAppearance1830);

SoIndexedFaceSet* SoIndexedFaceSet1832 = new SoIndexedFaceSet();
SoIndexedFaceSet1832->setSolid(false);
SoIndexedFaceSet1832->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1832->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1833 = new SoCoordinate();
SoCoordinate1833->setPoint(new float[]{9.039908,0.075,3.826656,9.236902,0.075,3.786501,9.433895,0.075,3.746347,9.176025,0.075,4.494433,9.373018,0.075,4.454279,9.570012,0.075,4.414125,9.312142,0.075,5.162211,9.509135,0.075,5.122057,9.706129,0.075,5.081903}, 27);
SoIndexedFaceSet1832->setCoord(*SoCoordinate1833);

SoShape1829->setGeometry(*SoIndexedFaceSet1832);

SoNode12->addChild(*SoShape1829);

SoShape* SoShape1834 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1835 = new SoVRMLAppearance();
SoMaterial* SoMaterial1836 = new SoMaterial();
SoMaterial1836->setAmbientIntensity(0);
SoMaterial1836->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1836->setShininess(0);
SoVRMLAppearance1835->addChild(*SoMaterial1836);

SoShape1834->addChild(*SoVRMLAppearance1835);

SoIndexedFaceSet* SoIndexedFaceSet1837 = new SoIndexedFaceSet();
SoIndexedFaceSet1837->setSolid(false);
SoIndexedFaceSet1837->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1837->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1838 = new SoCoordinate();
SoCoordinate1838->setPoint(new float[]{9.292545,0.075,5.166206,8.898558,0.075,5.246514,9.156428,0.075,4.498428,8.762442,0.075,4.578736,9.020311,0.075,3.83065,8.626325,0.075,3.910959}, 18);
SoIndexedFaceSet1837->setCoord(*SoCoordinate1838);

SoShape1834->setGeometry(*SoIndexedFaceSet1837);

SoNode12->addChild(*SoShape1834);

SoShape* SoShape1839 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1840 = new SoVRMLAppearance();
SoMaterial* SoMaterial1841 = new SoMaterial();
SoMaterial1841->setAmbientIntensity(0);
SoMaterial1841->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1841->setShininess(0);
SoVRMLAppearance1840->addChild(*SoMaterial1841);

SoShape1839->addChild(*SoVRMLAppearance1840);

SoIndexedFaceSet* SoIndexedFaceSet1842 = new SoIndexedFaceSet();
SoIndexedFaceSet1842->setSolid(false);
SoIndexedFaceSet1842->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1842->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1843 = new SoCoordinate();
SoCoordinate1843->setPoint(new float[]{8.62233,0.075,3.891361,8.488211,0.075,3.233382,9.429901,0.075,3.72675,9.295781,0.075,3.068771}, 12);
SoIndexedFaceSet1842->setCoord(*SoCoordinate1843);

SoShape1839->setGeometry(*SoIndexedFaceSet1842);

SoNode12->addChild(*SoShape1839);

SoShape* SoShape1844 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1845 = new SoVRMLAppearance();
SoMaterial* SoMaterial1846 = new SoMaterial();
SoMaterial1846->setAmbientIntensity(0);
SoMaterial1846->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1846->setShininess(0);
SoVRMLAppearance1845->addChild(*SoMaterial1846);

SoShape1844->addChild(*SoVRMLAppearance1845);

SoIndexedFaceSet* SoIndexedFaceSet1847 = new SoIndexedFaceSet();
SoIndexedFaceSet1847->setSolid(false);
SoIndexedFaceSet1847->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1847->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1848 = new SoCoordinate();
SoCoordinate1848->setPoint(new float[]{8.484216,0.075,3.213785,8.350097,0.075,2.555806,9.291787,0.075,3.049174,9.157667,0.075,2.391194}, 12);
SoIndexedFaceSet1847->setCoord(*SoCoordinate1848);

SoShape1844->setGeometry(*SoIndexedFaceSet1847);

SoNode12->addChild(*SoShape1844);

SoShape* SoShape1849 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1850 = new SoVRMLAppearance();
SoMaterial* SoMaterial1851 = new SoMaterial();
SoMaterial1851->setAmbientIntensity(0);
SoMaterial1851->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1851->setShininess(0);
SoVRMLAppearance1850->addChild(*SoMaterial1851);

SoShape1849->addChild(*SoVRMLAppearance1850);

SoIndexedFaceSet* SoIndexedFaceSet1852 = new SoIndexedFaceSet();
SoIndexedFaceSet1852->setSolid(false);
SoIndexedFaceSet1852->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1852->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1853 = new SoCoordinate();
SoCoordinate1853->setPoint(new float[]{8.487453,0.075,1.11635,8.684446,0.075,1.076196,8.881439,0.075,1.036041,8.623569,0.075,1.784128,8.820562,0.075,1.743973,9.017556,0.075,1.703819,8.759686,0.075,2.451906,8.956679,0.075,2.411752,9.153673,0.075,2.371597}, 27);
SoIndexedFaceSet1852->setCoord(*SoCoordinate1853);

SoShape1849->setGeometry(*SoIndexedFaceSet1852);

SoNode12->addChild(*SoShape1849);

SoShape* SoShape1854 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1855 = new SoVRMLAppearance();
SoMaterial* SoMaterial1856 = new SoMaterial();
SoMaterial1856->setAmbientIntensity(0);
SoMaterial1856->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1856->setShininess(0);
SoVRMLAppearance1855->addChild(*SoMaterial1856);

SoShape1854->addChild(*SoVRMLAppearance1855);

SoIndexedFaceSet* SoIndexedFaceSet1857 = new SoIndexedFaceSet();
SoIndexedFaceSet1857->setSolid(false);
SoIndexedFaceSet1857->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1857->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1858 = new SoCoordinate();
SoCoordinate1858->setPoint(new float[]{8.073869,0.075,1.200653,8.270862,0.075,1.160499,8.467855,0.075,1.120344,8.209986,0.075,1.868431,8.406979,0.075,1.828277,8.603972,0.075,1.788122,8.346102,0.075,2.536209,8.543096,0.075,2.496054,8.740088,0.075,2.4559}, 27);
SoIndexedFaceSet1857->setCoord(*SoCoordinate1858);

SoShape1854->setGeometry(*SoIndexedFaceSet1857);

SoNode12->addChild(*SoShape1854);

SoShape* SoShape1859 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1860 = new SoVRMLAppearance();
SoMaterial* SoMaterial1861 = new SoMaterial();
SoMaterial1861->setAmbientIntensity(0);
SoMaterial1861->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1861->setShininess(0);
SoVRMLAppearance1860->addChild(*SoMaterial1861);

SoShape1859->addChild(*SoVRMLAppearance1860);

SoIndexedFaceSet* SoIndexedFaceSet1862 = new SoIndexedFaceSet();
SoIndexedFaceSet1862->setSolid(false);
SoIndexedFaceSet1862->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoIndexedFaceSet1862->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoCoordinate* SoCoordinate1863 = new SoCoordinate();
SoCoordinate1863->setPoint(new float[]{8.743325,0.075,0.3584649,8.810385,0.075,0.6874546,8.877445,0.075,1.016444,7.935755,0.075,0.5230764,8.002814,0.075,0.8520661,8.069874,0.075,1.181056}, 18);
SoIndexedFaceSet1862->setCoord(*SoCoordinate1863);

SoShape1859->setGeometry(*SoIndexedFaceSet1862);

SoNode12->addChild(*SoShape1859);

SoShape* SoShape1864 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1865 = new SoVRMLAppearance();
SoMaterial* SoMaterial1866 = new SoMaterial();
SoMaterial1866->setAmbientIntensity(0);
SoMaterial1866->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1866->setShininess(0);
SoVRMLAppearance1865->addChild(*SoMaterial1866);

SoShape1864->addChild(*SoVRMLAppearance1865);

SoIndexedFaceSet* SoIndexedFaceSet1867 = new SoIndexedFaceSet();
SoIndexedFaceSet1867->setSolid(false);
SoIndexedFaceSet1867->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1867->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1868 = new SoCoordinate();
SoCoordinate1868->setPoint(new float[]{8.488969,0.075,5.350414,8.882956,0.075,5.270106,8.761202,0.075,6.68597,9.155189,0.075,6.605662}, 12);
SoIndexedFaceSet1867->setCoord(*SoCoordinate1868);

SoShape1864->setGeometry(*SoIndexedFaceSet1867);

SoNode12->addChild(*SoShape1864);

SoShape* SoShape1869 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1870 = new SoVRMLAppearance();
SoMaterial* SoMaterial1871 = new SoMaterial();
SoMaterial1871->setAmbientIntensity(0);
SoMaterial1871->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1871->setShininess(0);
SoVRMLAppearance1870->addChild(*SoMaterial1871);

SoShape1869->addChild(*SoVRMLAppearance1870);

SoIndexedFaceSet* SoIndexedFaceSet1872 = new SoIndexedFaceSet();
SoIndexedFaceSet1872->setSolid(false);
SoIndexedFaceSet1872->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1872->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1873 = new SoCoordinate();
SoCoordinate1873->setPoint(new float[]{8.741605,0.075,6.689965,8.544612,0.075,6.730119,8.347618,0.075,6.770273,8.605488,0.075,6.022187,8.408495,0.075,6.062341,8.211501,0.075,6.102495,8.469372,0.075,5.354409,8.272378,0.075,5.394563,8.075385,0.075,5.434718}, 27);
SoIndexedFaceSet1872->setCoord(*SoCoordinate1873);

SoShape1869->setGeometry(*SoIndexedFaceSet1872);

SoNode12->addChild(*SoShape1869);

SoShape* SoShape1874 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1875 = new SoVRMLAppearance();
SoMaterial* SoMaterial1876 = new SoMaterial();
SoMaterial1876->setAmbientIntensity(0);
SoMaterial1876->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1876->setShininess(0);
SoVRMLAppearance1875->addChild(*SoMaterial1876);

SoShape1874->addChild(*SoVRMLAppearance1875);

SoIndexedFaceSet* SoIndexedFaceSet1877 = new SoIndexedFaceSet();
SoIndexedFaceSet1877->setSolid(false);
SoIndexedFaceSet1877->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1877->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1878 = new SoCoordinate();
SoCoordinate1878->setPoint(new float[]{8.07139,0.075,5.415121,7.937271,0.075,4.757141,8.878961,0.075,5.250509,8.744842,0.075,4.59253}, 12);
SoIndexedFaceSet1877->setCoord(*SoCoordinate1878);

SoShape1874->setGeometry(*SoIndexedFaceSet1877);

SoNode12->addChild(*SoShape1874);

SoShape* SoShape1879 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1880 = new SoVRMLAppearance();
SoMaterial* SoMaterial1881 = new SoMaterial();
SoMaterial1881->setAmbientIntensity(0);
SoMaterial1881->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1881->setShininess(0);
SoVRMLAppearance1880->addChild(*SoMaterial1881);

SoShape1879->addChild(*SoVRMLAppearance1880);

SoIndexedFaceSet* SoIndexedFaceSet1882 = new SoIndexedFaceSet();
SoIndexedFaceSet1882->setSolid(false);
SoIndexedFaceSet1882->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1882->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1883 = new SoCoordinate();
SoCoordinate1883->setPoint(new float[]{7.933276,0.075,4.737544,7.799157,0.075,4.079565,8.337062,0.075,4.655238,8.202942,0.075,3.997259,8.740847,0.075,4.572933,8.606728,0.075,3.914953}, 18);
SoIndexedFaceSet1882->setCoord(*SoCoordinate1883);

SoShape1879->setGeometry(*SoIndexedFaceSet1882);

SoNode12->addChild(*SoShape1879);

SoShape* SoShape1884 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1885 = new SoVRMLAppearance();
SoMaterial* SoMaterial1886 = new SoMaterial();
SoMaterial1886->setAmbientIntensity(0);
SoMaterial1886->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1886->setShininess(0);
SoVRMLAppearance1885->addChild(*SoMaterial1886);

SoShape1884->addChild(*SoVRMLAppearance1885);

SoIndexedFaceSet* SoIndexedFaceSet1887 = new SoIndexedFaceSet();
SoIndexedFaceSet1887->setSolid(false);
SoIndexedFaceSet1887->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1887->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1888 = new SoCoordinate();
SoCoordinate1888->setPoint(new float[]{7.936512,0.075,2.640109,8.3305,0.075,2.5598,8.208746,0.075,3.975665,8.602733,0.075,3.895356}, 12);
SoIndexedFaceSet1887->setCoord(*SoCoordinate1888);

SoShape1884->setGeometry(*SoIndexedFaceSet1887);

SoNode12->addChild(*SoShape1884);

SoShape* SoShape1889 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1890 = new SoVRMLAppearance();
SoMaterial* SoMaterial1891 = new SoMaterial();
SoMaterial1891->setAmbientIntensity(0);
SoMaterial1891->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1891->setShininess(0);
SoVRMLAppearance1890->addChild(*SoMaterial1891);

SoShape1889->addChild(*SoVRMLAppearance1890);

SoIndexedFaceSet* SoIndexedFaceSet1892 = new SoIndexedFaceSet();
SoIndexedFaceSet1892->setSolid(false);
SoIndexedFaceSet1892->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1892->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1893 = new SoCoordinate();
SoCoordinate1893->setPoint(new float[]{8.189149,0.075,3.979659,7.992156,0.075,4.019814,7.795162,0.075,4.059968,8.053032,0.075,3.311881,7.856039,0.075,3.352035,7.659045,0.075,3.39219,7.916915,0.075,2.644103,7.719922,0.075,2.684258,7.522929,0.075,2.724412}, 27);
SoIndexedFaceSet1892->setCoord(*SoCoordinate1893);

SoShape1889->setGeometry(*SoIndexedFaceSet1892);

SoNode12->addChild(*SoShape1889);

SoShape* SoShape1894 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1895 = new SoVRMLAppearance();
SoMaterial* SoMaterial1896 = new SoMaterial();
SoMaterial1896->setAmbientIntensity(0);
SoMaterial1896->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1896->setShininess(0);
SoVRMLAppearance1895->addChild(*SoMaterial1896);

SoShape1894->addChild(*SoVRMLAppearance1895);

SoIndexedFaceSet* SoIndexedFaceSet1897 = new SoIndexedFaceSet();
SoIndexedFaceSet1897->setSolid(false);
SoIndexedFaceSet1897->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1897->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1898 = new SoCoordinate();
SoCoordinate1898->setPoint(new float[]{7.518934,0.075,2.704815,7.384815,0.075,2.046835,8.326505,0.075,2.540203,8.192386,0.075,1.882224}, 12);
SoIndexedFaceSet1897->setCoord(*SoCoordinate1898);

SoShape1894->setGeometry(*SoIndexedFaceSet1897);

SoNode12->addChild(*SoShape1894);

SoShape* SoShape1899 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1900 = new SoVRMLAppearance();
SoMaterial* SoMaterial1901 = new SoMaterial();
SoMaterial1901->setAmbientIntensity(0);
SoMaterial1901->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1901->setShininess(0);
SoVRMLAppearance1900->addChild(*SoMaterial1901);

SoShape1899->addChild(*SoVRMLAppearance1900);

SoIndexedFaceSet* SoIndexedFaceSet1902 = new SoIndexedFaceSet();
SoIndexedFaceSet1902->setSolid(false);
SoIndexedFaceSet1902->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1902->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1903 = new SoCoordinate();
SoCoordinate1903->setPoint(new float[]{7.38082,0.075,2.027238,7.246701,0.075,1.369259,8.188391,0.075,1.862627,8.054272,0.075,1.204647}, 12);
SoIndexedFaceSet1902->setCoord(*SoCoordinate1903);

SoShape1899->setGeometry(*SoIndexedFaceSet1902);

SoNode12->addChild(*SoShape1899);

SoShape* SoShape1904 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1905 = new SoVRMLAppearance();
SoMaterial* SoMaterial1906 = new SoMaterial();
SoMaterial1906->setAmbientIntensity(0);
SoMaterial1906->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1906->setShininess(0);
SoVRMLAppearance1905->addChild(*SoMaterial1906);

SoShape1904->addChild(*SoVRMLAppearance1905);

SoIndexedFaceSet* SoIndexedFaceSet1907 = new SoIndexedFaceSet();
SoIndexedFaceSet1907->setSolid(false);
SoIndexedFaceSet1907->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1907->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1908 = new SoCoordinate();
SoCoordinate1908->setPoint(new float[]{7.384057,0.075,-0.07019704,7.58105,0.075,-0.1103513,7.778044,0.075,-0.1505055,7.520174,0.075,0.5975809,7.717167,0.075,0.5574267,7.91416,0.075,0.5172724,7.65629,0.075,1.265359,7.853283,0.075,1.225205,8.050277,0.075,1.18505}, 27);
SoIndexedFaceSet1907->setCoord(*SoCoordinate1908);

SoShape1904->setGeometry(*SoIndexedFaceSet1907);

SoNode12->addChild(*SoShape1904);

SoShape* SoShape1909 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1910 = new SoVRMLAppearance();
SoMaterial* SoMaterial1911 = new SoMaterial();
SoMaterial1911->setAmbientIntensity(0);
SoMaterial1911->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1911->setShininess(0);
SoVRMLAppearance1910->addChild(*SoMaterial1911);

SoShape1909->addChild(*SoVRMLAppearance1910);

SoIndexedFaceSet* SoIndexedFaceSet1912 = new SoIndexedFaceSet();
SoIndexedFaceSet1912->setSolid(false);
SoIndexedFaceSet1912->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1912->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1913 = new SoCoordinate();
SoCoordinate1913->setPoint(new float[]{6.970473,0.075,0.01410597,7.36446,0.075,-0.06620247,7.242706,0.075,1.349662,7.636693,0.075,1.269353}, 12);
SoIndexedFaceSet1912->setCoord(*SoCoordinate1913);

SoShape1909->setGeometry(*SoIndexedFaceSet1912);

SoNode12->addChild(*SoShape1909);

SoShape* SoShape1914 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1915 = new SoVRMLAppearance();
SoMaterial* SoMaterial1916 = new SoMaterial();
SoMaterial1916->setAmbientIntensity(0);
SoMaterial1916->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1916->setShininess(0);
SoVRMLAppearance1915->addChild(*SoMaterial1916);

SoShape1914->addChild(*SoVRMLAppearance1915);

SoIndexedFaceSet* SoIndexedFaceSet1917 = new SoIndexedFaceSet();
SoIndexedFaceSet1917->setSolid(false);
SoIndexedFaceSet1917->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1917->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1918 = new SoCoordinate();
SoCoordinate1918->setPoint(new float[]{7.382336,0.075,6.261303,7.315277,0.075,5.932313,7.248217,0.075,5.603323,7.786121,0.075,6.178997,7.719062,0.075,5.850008,7.652002,0.075,5.521018,8.189907,0.075,6.096692,8.122848,0.075,5.767702,8.055788,0.075,5.438712}, 27);
SoIndexedFaceSet1917->setCoord(*SoCoordinate1918);

SoShape1914->setGeometry(*SoIndexedFaceSet1917);

SoNode12->addChild(*SoShape1914);

SoShape* SoShape1919 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1920 = new SoVRMLAppearance();
SoMaterial* SoMaterial1921 = new SoMaterial();
SoMaterial1921->setAmbientIntensity(0);
SoMaterial1921->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1921->setShininess(0);
SoVRMLAppearance1920->addChild(*SoMaterial1921);

SoShape1919->addChild(*SoVRMLAppearance1920);

SoIndexedFaceSet* SoIndexedFaceSet1922 = new SoIndexedFaceSet();
SoIndexedFaceSet1922->setSolid(false);
SoIndexedFaceSet1922->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1922->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1923 = new SoCoordinate();
SoCoordinate1923->setPoint(new float[]{7.385573,0.075,4.163867,7.77956,0.075,4.083559,7.657806,0.075,5.499424,8.051793,0.075,5.419115}, 12);
SoIndexedFaceSet1922->setCoord(*SoCoordinate1923);

SoShape1919->setGeometry(*SoIndexedFaceSet1922);

SoNode12->addChild(*SoShape1919);

SoShape* SoShape1924 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1925 = new SoVRMLAppearance();
SoMaterial* SoMaterial1926 = new SoMaterial();
SoMaterial1926->setAmbientIntensity(0);
SoMaterial1926->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1926->setShininess(0);
SoVRMLAppearance1925->addChild(*SoMaterial1926);

SoShape1924->addChild(*SoVRMLAppearance1925);

SoIndexedFaceSet* SoIndexedFaceSet1927 = new SoIndexedFaceSet();
SoIndexedFaceSet1927->setSolid(false);
SoIndexedFaceSet1927->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1927->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1928 = new SoCoordinate();
SoCoordinate1928->setPoint(new float[]{6.971989,0.075,4.24817,7.365976,0.075,4.167862,7.244222,0.075,5.583726,7.638209,0.075,5.503418}, 12);
SoIndexedFaceSet1927->setCoord(*SoCoordinate1928);

SoShape1924->setGeometry(*SoIndexedFaceSet1927);

SoNode12->addChild(*SoShape1924);

SoShape* SoShape1929 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1930 = new SoVRMLAppearance();
SoMaterial* SoMaterial1931 = new SoMaterial();
SoMaterial1931->setAmbientIntensity(0);
SoMaterial1931->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1931->setShininess(0);
SoVRMLAppearance1930->addChild(*SoMaterial1931);

SoShape1929->addChild(*SoVRMLAppearance1930);

SoIndexedFaceSet* SoIndexedFaceSet1932 = new SoIndexedFaceSet();
SoIndexedFaceSet1932->setSolid(false);
SoIndexedFaceSet1932->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1932->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1933 = new SoCoordinate();
SoCoordinate1933->setPoint(new float[]{6.967994,0.075,4.228573,6.833875,0.075,3.570594,7.775565,0.075,4.063962,7.641446,0.075,3.405983}, 12);
SoIndexedFaceSet1932->setCoord(*SoCoordinate1933);

SoShape1929->setGeometry(*SoIndexedFaceSet1932);

SoNode12->addChild(*SoShape1929);

SoShape* SoShape1934 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1935 = new SoVRMLAppearance();
SoMaterial* SoMaterial1936 = new SoMaterial();
SoMaterial1936->setAmbientIntensity(0);
SoMaterial1936->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1936->setShininess(0);
SoVRMLAppearance1935->addChild(*SoMaterial1936);

SoShape1934->addChild(*SoVRMLAppearance1935);

SoIndexedFaceSet* SoIndexedFaceSet1937 = new SoIndexedFaceSet();
SoIndexedFaceSet1937->setSolid(false);
SoIndexedFaceSet1937->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1937->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1938 = new SoCoordinate();
SoCoordinate1938->setPoint(new float[]{6.82988,0.075,3.550997,6.695761,0.075,2.893018,7.637451,0.075,3.386386,7.503332,0.075,2.728406}, 12);
SoIndexedFaceSet1937->setCoord(*SoCoordinate1938);

SoShape1934->setGeometry(*SoIndexedFaceSet1937);

SoNode12->addChild(*SoShape1934);

SoShape* SoShape1939 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1940 = new SoVRMLAppearance();
SoMaterial* SoMaterial1941 = new SoMaterial();
SoMaterial1941->setAmbientIntensity(0);
SoMaterial1941->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1941->setShininess(0);
SoVRMLAppearance1940->addChild(*SoMaterial1941);

SoShape1939->addChild(*SoVRMLAppearance1940);

SoIndexedFaceSet* SoIndexedFaceSet1942 = new SoIndexedFaceSet();
SoIndexedFaceSet1942->setSolid(false);
SoIndexedFaceSet1942->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet1942->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate1943 = new SoCoordinate();
SoCoordinate1943->setPoint(new float[]{7.499337,0.075,2.708809,7.302343,0.075,2.748963,7.10535,0.075,2.789118,7.36322,0.075,2.041031,7.166227,0.075,2.081186,6.969234,0.075,2.12134,7.227104,0.075,1.373253,7.03011,0.075,1.413408,6.833117,0.075,1.453562}, 27);
SoIndexedFaceSet1942->setCoord(*SoCoordinate1943);

SoShape1939->setGeometry(*SoIndexedFaceSet1942);

SoNode12->addChild(*SoShape1939);

SoShape* SoShape1944 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1945 = new SoVRMLAppearance();
SoMaterial* SoMaterial1946 = new SoMaterial();
SoMaterial1946->setAmbientIntensity(0);
SoMaterial1946->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1946->setShininess(0);
SoVRMLAppearance1945->addChild(*SoMaterial1946);

SoShape1944->addChild(*SoVRMLAppearance1945);

SoIndexedFaceSet* SoIndexedFaceSet1947 = new SoIndexedFaceSet();
SoIndexedFaceSet1947->setSolid(false);
SoIndexedFaceSet1947->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1947->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1948 = new SoCoordinate();
SoCoordinate1948->setPoint(new float[]{6.419533,0.075,1.537865,6.813519,0.075,1.457556,6.691766,0.075,2.873421,7.085753,0.075,2.793112}, 12);
SoIndexedFaceSet1947->setCoord(*SoCoordinate1948);

SoShape1944->setGeometry(*SoIndexedFaceSet1947);

SoNode12->addChild(*SoShape1944);

SoShape* SoShape1949 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1950 = new SoVRMLAppearance();
SoMaterial* SoMaterial1951 = new SoMaterial();
SoMaterial1951->setAmbientIntensity(0);
SoMaterial1951->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1951->setShininess(0);
SoVRMLAppearance1950->addChild(*SoMaterial1951);

SoShape1949->addChild(*SoVRMLAppearance1950);

SoIndexedFaceSet* SoIndexedFaceSet1952 = new SoIndexedFaceSet();
SoIndexedFaceSet1952->setSolid(false);
SoIndexedFaceSet1952->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1952->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1953 = new SoCoordinate();
SoCoordinate1953->setPoint(new float[]{7.08899,0.075,0.695677,7.223109,0.075,1.353656,6.281419,0.075,0.8602884,6.415538,0.075,1.518268}, 12);
SoIndexedFaceSet1952->setCoord(*SoCoordinate1953);

SoShape1949->setGeometry(*SoIndexedFaceSet1952);

SoNode12->addChild(*SoShape1949);

SoShape* SoShape1954 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1955 = new SoVRMLAppearance();
SoMaterial* SoMaterial1956 = new SoMaterial();
SoMaterial1956->setAmbientIntensity(0);
SoMaterial1956->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1956->setShininess(0);
SoVRMLAppearance1955->addChild(*SoMaterial1956);

SoShape1954->addChild(*SoVRMLAppearance1955);

SoIndexedFaceSet* SoIndexedFaceSet1957 = new SoIndexedFaceSet();
SoIndexedFaceSet1957->setSolid(false);
SoIndexedFaceSet1957->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1957->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1958 = new SoCoordinate();
SoCoordinate1958->setPoint(new float[]{6.277424,0.075,0.8406914,6.143305,0.075,0.182712,7.084995,0.075,0.6760799,6.950876,0.075,0.01810054}, 12);
SoIndexedFaceSet1957->setCoord(*SoCoordinate1958);

SoShape1954->setGeometry(*SoIndexedFaceSet1957);

SoNode12->addChild(*SoShape1954);

SoShape* SoShape1959 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1960 = new SoVRMLAppearance();
SoMaterial* SoMaterial1961 = new SoMaterial();
SoMaterial1961->setAmbientIntensity(0);
SoMaterial1961->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1961->setShininess(0);
SoVRMLAppearance1960->addChild(*SoMaterial1961);

SoShape1959->addChild(*SoVRMLAppearance1960);

SoIndexedFaceSet* SoIndexedFaceSet1962 = new SoIndexedFaceSet();
SoIndexedFaceSet1962->setSolid(false);
SoIndexedFaceSet1962->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1962->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1963 = new SoCoordinate();
SoCoordinate1963->setPoint(new float[]{6.417054,0.075,5.752332,6.282935,0.075,5.094353,7.224625,0.075,5.587721,7.090506,0.075,4.929741}, 12);
SoIndexedFaceSet1962->setCoord(*SoCoordinate1963);

SoShape1959->setGeometry(*SoIndexedFaceSet1962);

SoNode12->addChild(*SoShape1959);

SoShape* SoShape1964 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1965 = new SoVRMLAppearance();
SoMaterial* SoMaterial1966 = new SoMaterial();
SoMaterial1966->setAmbientIntensity(0);
SoMaterial1966->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1966->setShininess(0);
SoVRMLAppearance1965->addChild(*SoMaterial1966);

SoShape1964->addChild(*SoVRMLAppearance1965);

SoIndexedFaceSet* SoIndexedFaceSet1967 = new SoIndexedFaceSet();
SoIndexedFaceSet1967->setSolid(false);
SoIndexedFaceSet1967->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet1967->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate1968 = new SoCoordinate();
SoCoordinate1968->setPoint(new float[]{6.27894,0.075,5.074756,6.144821,0.075,4.416777,6.682726,0.075,4.99245,6.548606,0.075,4.334471,7.086511,0.075,4.910144,6.952392,0.075,4.252165}, 18);
SoIndexedFaceSet1967->setCoord(*SoCoordinate1968);

SoShape1964->setGeometry(*SoIndexedFaceSet1967);

SoNode12->addChild(*SoShape1964);

SoShape* SoShape1969 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1970 = new SoVRMLAppearance();
SoMaterial* SoMaterial1971 = new SoMaterial();
SoMaterial1971->setAmbientIntensity(0);
SoMaterial1971->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1971->setShininess(0);
SoVRMLAppearance1970->addChild(*SoMaterial1971);

SoShape1969->addChild(*SoVRMLAppearance1970);

SoIndexedFaceSet* SoIndexedFaceSet1972 = new SoIndexedFaceSet();
SoIndexedFaceSet1972->setSolid(false);
SoIndexedFaceSet1972->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1972->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1973 = new SoCoordinate();
SoCoordinate1973->setPoint(new float[]{6.282177,0.075,2.977321,6.676164,0.075,2.897012,6.55441,0.075,4.312877,6.948397,0.075,4.232568}, 12);
SoIndexedFaceSet1972->setCoord(*SoCoordinate1973);

SoShape1969->setGeometry(*SoIndexedFaceSet1972);

SoNode12->addChild(*SoShape1969);

SoShape* SoShape1974 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1975 = new SoVRMLAppearance();
SoMaterial* SoMaterial1976 = new SoMaterial();
SoMaterial1976->setAmbientIntensity(0);
SoMaterial1976->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1976->setShininess(0);
SoVRMLAppearance1975->addChild(*SoMaterial1976);

SoShape1974->addChild(*SoVRMLAppearance1975);

SoIndexedFaceSet* SoIndexedFaceSet1977 = new SoIndexedFaceSet();
SoIndexedFaceSet1977->setSolid(false);
SoIndexedFaceSet1977->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1977->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1978 = new SoCoordinate();
SoCoordinate1978->setPoint(new float[]{5.868593,0.075,3.061624,6.26258,0.075,2.981315,6.140826,0.075,4.39718,6.534813,0.075,4.316871}, 12);
SoIndexedFaceSet1977->setCoord(*SoCoordinate1978);

SoShape1974->setGeometry(*SoIndexedFaceSet1977);

SoNode12->addChild(*SoShape1974);

SoShape* SoShape1979 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1980 = new SoVRMLAppearance();
SoMaterial* SoMaterial1981 = new SoMaterial();
SoMaterial1981->setAmbientIntensity(0);
SoMaterial1981->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1981->setShininess(0);
SoVRMLAppearance1980->addChild(*SoMaterial1981);

SoShape1979->addChild(*SoVRMLAppearance1980);

SoIndexedFaceSet* SoIndexedFaceSet1982 = new SoIndexedFaceSet();
SoIndexedFaceSet1982->setSolid(false);
SoIndexedFaceSet1982->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1982->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1983 = new SoCoordinate();
SoCoordinate1983->setPoint(new float[]{6.53805,0.075,2.219436,6.672169,0.075,2.877415,5.730479,0.075,2.384047,5.864598,0.075,3.042027}, 12);
SoIndexedFaceSet1982->setCoord(*SoCoordinate1983);

SoShape1979->setGeometry(*SoIndexedFaceSet1982);

SoNode12->addChild(*SoShape1979);

SoShape* SoShape1984 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1985 = new SoVRMLAppearance();
SoMaterial* SoMaterial1986 = new SoMaterial();
SoMaterial1986->setAmbientIntensity(0);
SoMaterial1986->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1986->setShininess(0);
SoVRMLAppearance1985->addChild(*SoMaterial1986);

SoShape1984->addChild(*SoVRMLAppearance1985);

SoIndexedFaceSet* SoIndexedFaceSet1987 = new SoIndexedFaceSet();
SoIndexedFaceSet1987->setSolid(false);
SoIndexedFaceSet1987->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1987->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1988 = new SoCoordinate();
SoCoordinate1988->setPoint(new float[]{5.726484,0.075,2.36445,5.592365,0.075,1.706471,6.534055,0.075,2.199839,6.399936,0.075,1.541859}, 12);
SoIndexedFaceSet1987->setCoord(*SoCoordinate1988);

SoShape1984->setGeometry(*SoIndexedFaceSet1987);

SoNode12->addChild(*SoShape1984);

SoShape* SoShape1989 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1990 = new SoVRMLAppearance();
SoMaterial* SoMaterial1991 = new SoMaterial();
SoMaterial1991->setAmbientIntensity(0);
SoMaterial1991->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1991->setShininess(0);
SoVRMLAppearance1990->addChild(*SoMaterial1991);

SoShape1989->addChild(*SoVRMLAppearance1990);

SoIndexedFaceSet* SoIndexedFaceSet1992 = new SoIndexedFaceSet();
SoIndexedFaceSet1992->setSolid(false);
SoIndexedFaceSet1992->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1992->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1993 = new SoCoordinate();
SoCoordinate1993->setPoint(new float[]{6.395941,0.075,1.522262,6.001954,0.075,1.602571,6.123708,0.075,0.1867066,5.729721,0.075,0.267015}, 12);
SoIndexedFaceSet1992->setCoord(*SoCoordinate1993);

SoShape1989->setGeometry(*SoIndexedFaceSet1992);

SoNode12->addChild(*SoShape1989);

SoShape* SoShape1994 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance1995 = new SoVRMLAppearance();
SoMaterial* SoMaterial1996 = new SoMaterial();
SoMaterial1996->setAmbientIntensity(0);
SoMaterial1996->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial1996->setShininess(0);
SoVRMLAppearance1995->addChild(*SoMaterial1996);

SoShape1994->addChild(*SoVRMLAppearance1995);

SoIndexedFaceSet* SoIndexedFaceSet1997 = new SoIndexedFaceSet();
SoIndexedFaceSet1997->setSolid(false);
SoIndexedFaceSet1997->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet1997->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate1998 = new SoCoordinate();
SoCoordinate1998->setPoint(new float[]{5.316137,0.075,0.351318,5.710124,0.075,0.2710096,5.58837,0.075,1.686874,5.982357,0.075,1.606565}, 12);
SoIndexedFaceSet1997->setCoord(*SoCoordinate1998);

SoShape1994->setGeometry(*SoIndexedFaceSet1997);

SoNode12->addChild(*SoShape1994);

SoShape* SoShape1999 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2000 = new SoVRMLAppearance();
SoMaterial* SoMaterial2001 = new SoMaterial();
SoMaterial2001->setAmbientIntensity(0);
SoMaterial2001->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2001->setShininess(0);
SoVRMLAppearance2000->addChild(*SoMaterial2001);

SoShape1999->addChild(*SoVRMLAppearance2000);

SoIndexedFaceSet* SoIndexedFaceSet2002 = new SoIndexedFaceSet();
SoIndexedFaceSet2002->setSolid(false);
SoIndexedFaceSet2002->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2002->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2003 = new SoCoordinate();
SoCoordinate2003->setPoint(new float[]{5.731237,0.075,4.50108,6.125224,0.075,4.420771,6.00347,0.075,5.836636,6.397457,0.075,5.756327}, 12);
SoIndexedFaceSet2002->setCoord(*SoCoordinate2003);

SoShape1999->setGeometry(*SoIndexedFaceSet2002);

SoNode12->addChild(*SoShape1999);

SoShape* SoShape2004 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2005 = new SoVRMLAppearance();
SoMaterial* SoMaterial2006 = new SoMaterial();
SoMaterial2006->setAmbientIntensity(0);
SoMaterial2006->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2006->setShininess(0);
SoVRMLAppearance2005->addChild(*SoMaterial2006);

SoShape2004->addChild(*SoVRMLAppearance2005);

SoIndexedFaceSet* SoIndexedFaceSet2007 = new SoIndexedFaceSet();
SoIndexedFaceSet2007->setSolid(false);
SoIndexedFaceSet2007->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2007->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2008 = new SoCoordinate();
SoCoordinate2008->setPoint(new float[]{5.983873,0.075,5.84063,5.589886,0.075,5.920938,5.71164,0.075,4.505074,5.317653,0.075,4.585382}, 12);
SoIndexedFaceSet2007->setCoord(*SoCoordinate2008);

SoShape2004->setGeometry(*SoIndexedFaceSet2007);

SoNode12->addChild(*SoShape2004);

SoShape* SoShape2009 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2010 = new SoVRMLAppearance();
SoMaterial* SoMaterial2011 = new SoMaterial();
SoMaterial2011->setAmbientIntensity(0);
SoMaterial2011->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2011->setShininess(0);
SoVRMLAppearance2010->addChild(*SoMaterial2011);

SoShape2009->addChild(*SoVRMLAppearance2010);

SoIndexedFaceSet* SoIndexedFaceSet2012 = new SoIndexedFaceSet();
SoIndexedFaceSet2012->setSolid(false);
SoIndexedFaceSet2012->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2012->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2013 = new SoCoordinate();
SoCoordinate2013->setPoint(new float[]{5.313658,0.075,4.565785,5.179539,0.075,3.907806,6.121229,0.075,4.401174,5.98711,0.075,3.743195}, 12);
SoIndexedFaceSet2012->setCoord(*SoCoordinate2013);

SoShape2009->setGeometry(*SoIndexedFaceSet2012);

SoNode12->addChild(*SoShape2009);

SoShape* SoShape2014 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2015 = new SoVRMLAppearance();
SoMaterial* SoMaterial2016 = new SoMaterial();
SoMaterial2016->setAmbientIntensity(0);
SoMaterial2016->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2016->setShininess(0);
SoVRMLAppearance2015->addChild(*SoMaterial2016);

SoShape2014->addChild(*SoVRMLAppearance2015);

SoIndexedFaceSet* SoIndexedFaceSet2017 = new SoIndexedFaceSet();
SoIndexedFaceSet2017->setSolid(false);
SoIndexedFaceSet2017->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2017->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2018 = new SoCoordinate();
SoCoordinate2018->setPoint(new float[]{5.175544,0.075,3.888209,5.041425,0.075,3.23023,5.983115,0.075,3.723598,5.848996,0.075,3.065618}, 12);
SoIndexedFaceSet2017->setCoord(*SoCoordinate2018);

SoShape2014->setGeometry(*SoIndexedFaceSet2017);

SoNode12->addChild(*SoShape2014);

SoShape* SoShape2019 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2020 = new SoVRMLAppearance();
SoMaterial* SoMaterial2021 = new SoMaterial();
SoMaterial2021->setAmbientIntensity(0);
SoMaterial2021->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2021->setShininess(0);
SoVRMLAppearance2020->addChild(*SoMaterial2021);

SoShape2019->addChild(*SoVRMLAppearance2020);

SoIndexedFaceSet* SoIndexedFaceSet2022 = new SoIndexedFaceSet();
SoIndexedFaceSet2022->setSolid(false);
SoIndexedFaceSet2022->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet2022->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate2023 = new SoCoordinate();
SoCoordinate2023->setPoint(new float[]{5.178781,0.075,1.790774,5.375774,0.075,1.75062,5.572768,0.075,1.710465,5.314898,0.075,2.458552,5.511891,0.075,2.418398,5.708885,0.075,2.378243,5.451015,0.075,3.12633,5.648008,0.075,3.086175,5.845001,0.075,3.046021}, 27);
SoIndexedFaceSet2022->setCoord(*SoCoordinate2023);

SoShape2019->setGeometry(*SoIndexedFaceSet2022);

SoNode12->addChild(*SoShape2019);

SoShape* SoShape2024 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2025 = new SoVRMLAppearance();
SoMaterial* SoMaterial2026 = new SoMaterial();
SoMaterial2026->setAmbientIntensity(0);
SoMaterial2026->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2026->setShininess(0);
SoVRMLAppearance2025->addChild(*SoMaterial2026);

SoShape2024->addChild(*SoVRMLAppearance2025);

SoIndexedFaceSet* SoIndexedFaceSet2027 = new SoIndexedFaceSet();
SoIndexedFaceSet2027->setSolid(false);
SoIndexedFaceSet2027->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2027->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2028 = new SoCoordinate();
SoCoordinate2028->setPoint(new float[]{4.765197,0.075,1.875077,5.159184,0.075,1.794768,5.03743,0.075,3.210633,5.431417,0.075,3.130324}, 12);
SoIndexedFaceSet2027->setCoord(*SoCoordinate2028);

SoShape2024->setGeometry(*SoIndexedFaceSet2027);

SoNode12->addChild(*SoShape2024);

SoShape* SoShape2029 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2030 = new SoVRMLAppearance();
SoMaterial* SoMaterial2031 = new SoMaterial();
SoMaterial2031->setAmbientIntensity(0);
SoMaterial2031->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2031->setShininess(0);
SoVRMLAppearance2030->addChild(*SoMaterial2031);

SoShape2029->addChild(*SoVRMLAppearance2030);

SoIndexedFaceSet* SoIndexedFaceSet2032 = new SoIndexedFaceSet();
SoIndexedFaceSet2032->setSolid(false);
SoIndexedFaceSet2032->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2032->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2033 = new SoCoordinate();
SoCoordinate2033->setPoint(new float[]{5.434654,0.075,1.032889,5.568773,0.075,1.690868,4.627083,0.075,1.1975,4.761202,0.075,1.85548}, 12);
SoIndexedFaceSet2032->setCoord(*SoCoordinate2033);

SoShape2029->setGeometry(*SoIndexedFaceSet2032);

SoNode12->addChild(*SoShape2029);

SoShape* SoShape2034 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2035 = new SoVRMLAppearance();
SoMaterial* SoMaterial2036 = new SoMaterial();
SoMaterial2036->setAmbientIntensity(0);
SoMaterial2036->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2036->setShininess(0);
SoVRMLAppearance2035->addChild(*SoMaterial2036);

SoShape2034->addChild(*SoVRMLAppearance2035);

SoIndexedFaceSet* SoIndexedFaceSet2037 = new SoIndexedFaceSet();
SoIndexedFaceSet2037->setSolid(false);
SoIndexedFaceSet2037->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2037->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2038 = new SoCoordinate();
SoCoordinate2038->setPoint(new float[]{4.623088,0.075,1.177903,4.488969,0.075,0.519924,5.430659,0.075,1.013292,5.29654,0.075,0.3553126}, 12);
SoIndexedFaceSet2037->setCoord(*SoCoordinate2038);

SoShape2034->setGeometry(*SoIndexedFaceSet2037);

SoNode12->addChild(*SoShape2034);

SoShape* SoShape2039 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2040 = new SoVRMLAppearance();
SoMaterial* SoMaterial2041 = new SoMaterial();
SoMaterial2041->setAmbientIntensity(0);
SoMaterial2041->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2041->setShininess(0);
SoVRMLAppearance2040->addChild(*SoMaterial2041);

SoShape2039->addChild(*SoVRMLAppearance2040);

SoIndexedFaceSet* SoIndexedFaceSet2042 = new SoIndexedFaceSet();
SoIndexedFaceSet2042->setSolid(false);
SoIndexedFaceSet2042->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2042->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2043 = new SoCoordinate();
SoCoordinate2043->setPoint(new float[]{4.762719,0.075,6.089544,4.628599,0.075,5.431565,5.570289,0.075,5.924933,5.43617,0.075,5.266953}, 12);
SoIndexedFaceSet2042->setCoord(*SoCoordinate2043);

SoShape2039->setGeometry(*SoIndexedFaceSet2042);

SoNode12->addChild(*SoShape2039);

SoShape* SoShape2044 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2045 = new SoVRMLAppearance();
SoMaterial* SoMaterial2046 = new SoMaterial();
SoMaterial2046->setAmbientIntensity(0);
SoMaterial2046->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2046->setShininess(0);
SoVRMLAppearance2045->addChild(*SoMaterial2046);

SoShape2044->addChild(*SoVRMLAppearance2045);

SoIndexedFaceSet* SoIndexedFaceSet2047 = new SoIndexedFaceSet();
SoIndexedFaceSet2047->setSolid(false);
SoIndexedFaceSet2047->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoIndexedFaceSet2047->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1}, 16);
SoCoordinate* SoCoordinate2048 = new SoCoordinate();
SoCoordinate2048->setPoint(new float[]{4.624605,0.075,5.411968,4.557545,0.075,5.082978,4.490485,0.075,4.753989,5.432175,0.075,5.247356,5.365116,0.075,4.918367,5.298056,0.075,4.589377}, 18);
SoIndexedFaceSet2047->setCoord(*SoCoordinate2048);

SoShape2044->setGeometry(*SoIndexedFaceSet2047);

SoNode12->addChild(*SoShape2044);

SoShape* SoShape2049 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2050 = new SoVRMLAppearance();
SoMaterial* SoMaterial2051 = new SoMaterial();
SoMaterial2051->setAmbientIntensity(0);
SoMaterial2051->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2051->setShininess(0);
SoVRMLAppearance2050->addChild(*SoMaterial2051);

SoShape2049->addChild(*SoVRMLAppearance2050);

SoIndexedFaceSet* SoIndexedFaceSet2052 = new SoIndexedFaceSet();
SoIndexedFaceSet2052->setSolid(false);
SoIndexedFaceSet2052->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2052->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2053 = new SoCoordinate();
SoCoordinate2053->setPoint(new float[]{4.627841,0.075,3.314533,5.021828,0.075,3.234224,4.900074,0.075,4.650089,5.294061,0.075,4.56978}, 12);
SoIndexedFaceSet2052->setCoord(*SoCoordinate2053);

SoShape2049->setGeometry(*SoIndexedFaceSet2052);

SoNode12->addChild(*SoShape2049);

SoShape* SoShape2054 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2055 = new SoVRMLAppearance();
SoMaterial* SoMaterial2056 = new SoMaterial();
SoMaterial2056->setAmbientIntensity(0);
SoMaterial2056->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2056->setShininess(0);
SoVRMLAppearance2055->addChild(*SoMaterial2056);

SoShape2054->addChild(*SoVRMLAppearance2055);

SoIndexedFaceSet* SoIndexedFaceSet2057 = new SoIndexedFaceSet();
SoIndexedFaceSet2057->setSolid(false);
SoIndexedFaceSet2057->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet2057->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate2058 = new SoCoordinate();
SoCoordinate2058->setPoint(new float[]{4.214257,0.075,3.398836,4.608244,0.075,3.318527,4.350374,0.075,4.066614,4.744361,0.075,3.986305,4.486491,0.075,4.734392,4.880477,0.075,4.654083}, 18);
SoIndexedFaceSet2057->setCoord(*SoCoordinate2058);

SoShape2054->setGeometry(*SoIndexedFaceSet2057);

SoNode12->addChild(*SoShape2054);

SoShape* SoShape2059 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2060 = new SoVRMLAppearance();
SoMaterial* SoMaterial2061 = new SoMaterial();
SoMaterial2061->setAmbientIntensity(0);
SoMaterial2061->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2061->setShininess(0);
SoVRMLAppearance2060->addChild(*SoMaterial2061);

SoShape2059->addChild(*SoVRMLAppearance2060);

SoIndexedFaceSet* SoIndexedFaceSet2062 = new SoIndexedFaceSet();
SoIndexedFaceSet2062->setSolid(false);
SoIndexedFaceSet2062->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2062->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2063 = new SoCoordinate();
SoCoordinate2063->setPoint(new float[]{4.210262,0.075,3.379239,4.076143,0.075,2.721259,5.017833,0.075,3.214627,4.883714,0.075,2.556648}, 12);
SoIndexedFaceSet2062->setCoord(*SoCoordinate2063);

SoShape2059->setGeometry(*SoIndexedFaceSet2062);

SoNode12->addChild(*SoShape2059);

SoShape* SoShape2064 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2065 = new SoVRMLAppearance();
SoMaterial* SoMaterial2066 = new SoMaterial();
SoMaterial2066->setAmbientIntensity(0);
SoMaterial2066->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2066->setShininess(0);
SoVRMLAppearance2065->addChild(*SoMaterial2066);

SoShape2064->addChild(*SoVRMLAppearance2065);

SoIndexedFaceSet* SoIndexedFaceSet2067 = new SoIndexedFaceSet();
SoIndexedFaceSet2067->setSolid(false);
SoIndexedFaceSet2067->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet2067->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate2068 = new SoCoordinate();
SoCoordinate2068->setPoint(new float[]{4.7456,0.075,1.879071,4.879719,0.075,2.537051,4.341815,0.075,1.961377,4.475934,0.075,2.619357,3.938029,0.075,2.043683,4.072148,0.075,2.701662}, 18);
SoIndexedFaceSet2067->setCoord(*SoCoordinate2068);

SoShape2064->setGeometry(*SoIndexedFaceSet2067);

SoNode12->addChild(*SoShape2064);

SoShape* SoShape2069 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2070 = new SoVRMLAppearance();
SoMaterial* SoMaterial2071 = new SoMaterial();
SoMaterial2071->setAmbientIntensity(0);
SoMaterial2071->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2071->setShininess(0);
SoVRMLAppearance2070->addChild(*SoMaterial2071);

SoShape2069->addChild(*SoVRMLAppearance2070);

SoIndexedFaceSet* SoIndexedFaceSet2072 = new SoIndexedFaceSet();
SoIndexedFaceSet2072->setSolid(false);
SoIndexedFaceSet2072->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2072->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2073 = new SoCoordinate();
SoCoordinate2073->setPoint(new float[]{4.741605,0.075,1.859474,4.347619,0.075,1.939783,4.469372,0.075,0.5239186,4.075385,0.075,0.604227}, 12);
SoIndexedFaceSet2072->setCoord(*SoCoordinate2073);

SoShape2069->setGeometry(*SoIndexedFaceSet2072);

SoNode12->addChild(*SoShape2069);

SoShape* SoShape2074 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2075 = new SoVRMLAppearance();
SoMaterial* SoMaterial2076 = new SoMaterial();
SoMaterial2076->setAmbientIntensity(0);
SoMaterial2076->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2076->setShininess(0);
SoVRMLAppearance2075->addChild(*SoMaterial2076);

SoShape2074->addChild(*SoVRMLAppearance2075);

SoIndexedFaceSet* SoIndexedFaceSet2077 = new SoIndexedFaceSet();
SoIndexedFaceSet2077->setSolid(false);
SoIndexedFaceSet2077->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2077->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2078 = new SoCoordinate();
SoCoordinate2078->setPoint(new float[]{4.328022,0.075,1.943777,3.934035,0.075,2.024086,4.055788,0.075,0.6082216,3.661801,0.075,0.68853}, 12);
SoIndexedFaceSet2077->setCoord(*SoCoordinate2078);

SoShape2074->setGeometry(*SoIndexedFaceSet2077);

SoNode12->addChild(*SoShape2074);

SoShape* SoShape2079 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2080 = new SoVRMLAppearance();
SoMaterial* SoMaterial2081 = new SoMaterial();
SoMaterial2081->setAmbientIntensity(0);
SoMaterial2081->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2081->setShininess(0);
SoVRMLAppearance2080->addChild(*SoMaterial2081);

SoShape2079->addChild(*SoVRMLAppearance2080);

SoIndexedFaceSet* SoIndexedFaceSet2082 = new SoIndexedFaceSet();
SoIndexedFaceSet2082->setSolid(false);
SoIndexedFaceSet2082->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2082->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2083 = new SoCoordinate();
SoCoordinate2083->setPoint(new float[]{4.331258,0.075,-0.1536579,4.465377,0.075,0.5043216,3.523687,0.075,0.0109536,3.657807,0.075,0.668933}, 12);
SoIndexedFaceSet2082->setCoord(*SoCoordinate2083);

SoShape2079->setGeometry(*SoIndexedFaceSet2082);

SoNode12->addChild(*SoShape2079);

SoShape* SoShape2084 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2085 = new SoVRMLAppearance();
SoMaterial* SoMaterial2086 = new SoMaterial();
SoMaterial2086->setAmbientIntensity(0);
SoMaterial2086->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2086->setShininess(0);
SoVRMLAppearance2085->addChild(*SoMaterial2086);

SoShape2084->addChild(*SoVRMLAppearance2085);

SoIndexedFaceSet* SoIndexedFaceSet2087 = new SoIndexedFaceSet();
SoIndexedFaceSet2087->setSolid(false);
SoIndexedFaceSet2087->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2087->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2088 = new SoCoordinate();
SoCoordinate2088->setPoint(new float[]{4.076901,0.075,4.838292,4.470888,0.075,4.757983,4.349134,0.075,6.173848,4.743122,0.075,6.093539}, 12);
SoIndexedFaceSet2087->setCoord(*SoCoordinate2088);

SoShape2084->setGeometry(*SoIndexedFaceSet2087);

SoNode12->addChild(*SoShape2084);

SoShape* SoShape2089 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2090 = new SoVRMLAppearance();
SoMaterial* SoMaterial2091 = new SoMaterial();
SoMaterial2091->setAmbientIntensity(0);
SoMaterial2091->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2091->setShininess(0);
SoVRMLAppearance2090->addChild(*SoMaterial2091);

SoShape2089->addChild(*SoVRMLAppearance2090);

SoIndexedFaceSet* SoIndexedFaceSet2092 = new SoIndexedFaceSet();
SoIndexedFaceSet2092->setSolid(false);
SoIndexedFaceSet2092->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2092->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2093 = new SoCoordinate();
SoCoordinate2093->setPoint(new float[]{3.663317,0.075,4.922595,4.057304,0.075,4.842286,3.935551,0.075,6.258151,4.329537,0.075,6.177842}, 12);
SoIndexedFaceSet2092->setCoord(*SoCoordinate2093);

SoShape2089->setGeometry(*SoIndexedFaceSet2092);

SoNode12->addChild(*SoShape2089);

SoShape* SoShape2094 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2095 = new SoVRMLAppearance();
SoMaterial* SoMaterial2096 = new SoMaterial();
SoMaterial2096->setAmbientIntensity(0);
SoMaterial2096->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2096->setShininess(0);
SoVRMLAppearance2095->addChild(*SoMaterial2096);

SoShape2094->addChild(*SoVRMLAppearance2095);

SoIndexedFaceSet* SoIndexedFaceSet2097 = new SoIndexedFaceSet();
SoIndexedFaceSet2097->setSolid(false);
SoIndexedFaceSet2097->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet2097->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate2098 = new SoCoordinate();
SoCoordinate2098->setPoint(new float[]{3.659323,0.075,4.902997,3.525203,0.075,4.245018,4.063108,0.075,4.820692,3.928989,0.075,4.162713,4.466894,0.075,4.738386,4.332774,0.075,4.080407}, 18);
SoIndexedFaceSet2097->setCoord(*SoCoordinate2098);

SoShape2094->setGeometry(*SoIndexedFaceSet2097);

SoNode12->addChild(*SoShape2094);

SoShape* SoShape2099 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2100 = new SoVRMLAppearance();
SoMaterial* SoMaterial2101 = new SoMaterial();
SoMaterial2101->setAmbientIntensity(0);
SoMaterial2101->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2101->setShininess(0);
SoVRMLAppearance2100->addChild(*SoMaterial2101);

SoShape2099->addChild(*SoVRMLAppearance2100);

SoIndexedFaceSet* SoIndexedFaceSet2102 = new SoIndexedFaceSet();
SoIndexedFaceSet2102->setSolid(false);
SoIndexedFaceSet2102->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2102->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2103 = new SoCoordinate();
SoCoordinate2103->setPoint(new float[]{4.19466,0.075,3.40283,4.32878,0.075,4.06081,3.387089,0.075,3.567442,3.521209,0.075,4.225421}, 12);
SoIndexedFaceSet2102->setCoord(*SoCoordinate2103);

SoShape2099->setGeometry(*SoIndexedFaceSet2102);

SoNode12->addChild(*SoShape2099);

SoShape* SoShape2104 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2105 = new SoVRMLAppearance();
SoMaterial* SoMaterial2106 = new SoMaterial();
SoMaterial2106->setAmbientIntensity(0);
SoMaterial2106->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2106->setShininess(0);
SoVRMLAppearance2105->addChild(*SoMaterial2106);

SoShape2104->addChild(*SoVRMLAppearance2105);

SoIndexedFaceSet* SoIndexedFaceSet2107 = new SoIndexedFaceSet();
SoIndexedFaceSet2107->setSolid(false);
SoIndexedFaceSet2107->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2107->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2108 = new SoCoordinate();
SoCoordinate2108->setPoint(new float[]{3.524445,0.075,2.127986,3.918432,0.075,2.047678,3.796679,0.075,3.463542,4.190666,0.075,3.383233}, 12);
SoIndexedFaceSet2107->setCoord(*SoCoordinate2108);

SoShape2104->setGeometry(*SoIndexedFaceSet2107);

SoNode12->addChild(*SoShape2104);

SoShape* SoShape2109 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2110 = new SoVRMLAppearance();
SoMaterial* SoMaterial2111 = new SoMaterial();
SoMaterial2111->setAmbientIntensity(0);
SoMaterial2111->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2111->setShininess(0);
SoVRMLAppearance2110->addChild(*SoMaterial2111);

SoShape2109->addChild(*SoVRMLAppearance2110);

SoIndexedFaceSet* SoIndexedFaceSet2112 = new SoIndexedFaceSet();
SoIndexedFaceSet2112->setSolid(false);
SoIndexedFaceSet2112->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2112->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2113 = new SoCoordinate();
SoCoordinate2113->setPoint(new float[]{3.777081,0.075,3.467536,3.383095,0.075,3.547845,3.504848,0.075,2.13198,3.110861,0.075,2.212289}, 12);
SoIndexedFaceSet2112->setCoord(*SoCoordinate2113);

SoShape2109->setGeometry(*SoIndexedFaceSet2112);

SoNode12->addChild(*SoShape2109);

SoShape* SoShape2114 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2115 = new SoVRMLAppearance();
SoMaterial* SoMaterial2116 = new SoMaterial();
SoMaterial2116->setAmbientIntensity(0);
SoMaterial2116->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2116->setShininess(0);
SoVRMLAppearance2115->addChild(*SoMaterial2116);

SoShape2114->addChild(*SoVRMLAppearance2115);

SoIndexedFaceSet* SoIndexedFaceSet2117 = new SoIndexedFaceSet();
SoIndexedFaceSet2117->setSolid(false);
SoIndexedFaceSet2117->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2117->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2118 = new SoCoordinate();
SoCoordinate2118->setPoint(new float[]{3.106867,0.075,2.192692,2.972747,0.075,1.534712,3.914438,0.075,2.02808,3.780318,0.075,1.370101}, 12);
SoIndexedFaceSet2117->setCoord(*SoCoordinate2118);

SoShape2114->setGeometry(*SoIndexedFaceSet2117);

SoNode12->addChild(*SoShape2114);

SoShape* SoShape2119 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2120 = new SoVRMLAppearance();
SoMaterial* SoMaterial2121 = new SoMaterial();
SoMaterial2121->setAmbientIntensity(0);
SoMaterial2121->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2121->setShininess(0);
SoVRMLAppearance2120->addChild(*SoMaterial2121);

SoShape2119->addChild(*SoVRMLAppearance2120);

SoIndexedFaceSet* SoIndexedFaceSet2122 = new SoIndexedFaceSet();
SoIndexedFaceSet2122->setSolid(false);
SoIndexedFaceSet2122->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet2122->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate2123 = new SoCoordinate();
SoCoordinate2123->setPoint(new float[]{2.968753,0.075,1.515115,2.834633,0.075,0.8571361,3.372538,0.075,1.43281,3.238419,0.075,0.7748303,3.776324,0.075,1.350504,3.642204,0.075,0.6925246}, 18);
SoIndexedFaceSet2122->setCoord(*SoCoordinate2123);

SoShape2119->setGeometry(*SoIndexedFaceSet2122);

SoNode12->addChild(*SoShape2119);

SoShape* SoShape2124 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2125 = new SoVRMLAppearance();
SoMaterial* SoMaterial2126 = new SoMaterial();
SoMaterial2126->setAmbientIntensity(0);
SoMaterial2126->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2126->setShininess(0);
SoVRMLAppearance2125->addChild(*SoMaterial2126);

SoShape2124->addChild(*SoVRMLAppearance2125);

SoIndexedFaceSet* SoIndexedFaceSet2127 = new SoIndexedFaceSet();
SoIndexedFaceSet2127->setSolid(false);
SoIndexedFaceSet2127->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet2127->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate2128 = new SoCoordinate();
SoCoordinate2128->setPoint(new float[]{3.63821,0.075,0.6729276,3.441216,0.075,0.7130818,3.244223,0.075,0.753236,3.502093,0.075,0.005149654,3.305099,0.075,0.04530387,3.108106,0.075,0.08545809,3.365976,0.075,-0.6626283,3.168983,0.075,-0.622474,2.971989,0.075,-0.5823198}, 27);
SoIndexedFaceSet2127->setCoord(*SoCoordinate2128);

SoShape2124->setGeometry(*SoIndexedFaceSet2127);

SoNode12->addChild(*SoShape2124);

SoShape* SoShape2129 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2130 = new SoVRMLAppearance();
SoMaterial* SoMaterial2131 = new SoMaterial();
SoMaterial2131->setAmbientIntensity(0);
SoMaterial2131->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2131->setShininess(0);
SoVRMLAppearance2130->addChild(*SoMaterial2131);

SoShape2129->addChild(*SoVRMLAppearance2130);

SoIndexedFaceSet* SoIndexedFaceSet2132 = new SoIndexedFaceSet();
SoIndexedFaceSet2132->setSolid(false);
SoIndexedFaceSet2132->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2132->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2133 = new SoCoordinate();
SoCoordinate2133->setPoint(new float[]{2.558405,0.075,-0.4980168,2.952392,0.075,-0.5783253,2.830639,0.075,0.837539,3.224626,0.075,0.7572306}, 12);
SoIndexedFaceSet2132->setCoord(*SoCoordinate2133);

SoShape2129->setGeometry(*SoIndexedFaceSet2132);

SoNode12->addChild(*SoShape2129);

SoShape* SoShape2134 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2135 = new SoVRMLAppearance();
SoMaterial* SoMaterial2136 = new SoMaterial();
SoMaterial2136->setAmbientIntensity(0);
SoMaterial2136->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2136->setShininess(0);
SoVRMLAppearance2135->addChild(*SoMaterial2136);

SoShape2134->addChild(*SoVRMLAppearance2135);

SoIndexedFaceSet* SoIndexedFaceSet2137 = new SoIndexedFaceSet();
SoIndexedFaceSet2137->setSolid(false);
SoIndexedFaceSet2137->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet2137->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate2138 = new SoCoordinate();
SoCoordinate2138->setPoint(new float[]{2.970269,0.075,5.74918,2.903209,0.075,5.42019,2.836149,0.075,5.091201,3.374054,0.075,5.666874,3.306994,0.075,5.337884,3.239935,0.075,5.008895,3.77784,0.075,5.584569,3.71078,0.075,5.255579,3.64372,0.075,4.926589}, 27);
SoIndexedFaceSet2137->setCoord(*SoCoordinate2138);

SoShape2134->setGeometry(*SoIndexedFaceSet2137);

SoNode12->addChild(*SoShape2134);

SoShape* SoShape2139 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2140 = new SoVRMLAppearance();
SoMaterial* SoMaterial2141 = new SoMaterial();
SoMaterial2141->setAmbientIntensity(0);
SoMaterial2141->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2141->setShininess(0);
SoVRMLAppearance2140->addChild(*SoMaterial2141);

SoShape2139->addChild(*SoVRMLAppearance2140);

SoIndexedFaceSet* SoIndexedFaceSet2142 = new SoIndexedFaceSet();
SoIndexedFaceSet2142->setSolid(false);
SoIndexedFaceSet2142->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2142->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2143 = new SoCoordinate();
SoCoordinate2143->setPoint(new float[]{2.973505,0.075,3.651745,3.367492,0.075,3.571436,3.245739,0.075,4.9873,3.639726,0.075,4.906992}, 12);
SoIndexedFaceSet2142->setCoord(*SoCoordinate2143);

SoShape2139->setGeometry(*SoIndexedFaceSet2142);

SoNode12->addChild(*SoShape2139);

SoShape* SoShape2144 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2145 = new SoVRMLAppearance();
SoMaterial* SoMaterial2146 = new SoMaterial();
SoMaterial2146->setAmbientIntensity(0);
SoMaterial2146->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2146->setShininess(0);
SoVRMLAppearance2145->addChild(*SoMaterial2146);

SoShape2144->addChild(*SoVRMLAppearance2145);

SoIndexedFaceSet* SoIndexedFaceSet2147 = new SoIndexedFaceSet();
SoIndexedFaceSet2147->setSolid(false);
SoIndexedFaceSet2147->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2147->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2148 = new SoCoordinate();
SoCoordinate2148->setPoint(new float[]{2.559921,0.075,3.736048,2.953908,0.075,3.655739,2.832155,0.075,5.071604,3.226142,0.075,4.991295}, 12);
SoIndexedFaceSet2147->setCoord(*SoCoordinate2148);

SoShape2144->setGeometry(*SoIndexedFaceSet2147);

SoNode12->addChild(*SoShape2144);

SoShape* SoShape2149 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2150 = new SoVRMLAppearance();
SoMaterial* SoMaterial2151 = new SoMaterial();
SoMaterial2151->setAmbientIntensity(0);
SoMaterial2151->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2151->setShininess(0);
SoVRMLAppearance2150->addChild(*SoMaterial2151);

SoShape2149->addChild(*SoVRMLAppearance2150);

SoIndexedFaceSet* SoIndexedFaceSet2152 = new SoIndexedFaceSet();
SoIndexedFaceSet2152->setSolid(false);
SoIndexedFaceSet2152->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2152->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2153 = new SoCoordinate();
SoCoordinate2153->setPoint(new float[]{3.229378,0.075,2.89386,3.363497,0.075,3.551839,2.421807,0.075,3.058471,2.555927,0.075,3.716451}, 12);
SoIndexedFaceSet2152->setCoord(*SoCoordinate2153);

SoShape2149->setGeometry(*SoIndexedFaceSet2152);

SoNode12->addChild(*SoShape2149);

SoShape* SoShape2154 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2155 = new SoVRMLAppearance();
SoMaterial* SoMaterial2156 = new SoMaterial();
SoMaterial2156->setAmbientIntensity(0);
SoMaterial2156->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2156->setShininess(0);
SoVRMLAppearance2155->addChild(*SoMaterial2156);

SoShape2154->addChild(*SoVRMLAppearance2155);

SoIndexedFaceSet* SoIndexedFaceSet2157 = new SoIndexedFaceSet();
SoIndexedFaceSet2157->setSolid(false);
SoIndexedFaceSet2157->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2157->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2158 = new SoCoordinate();
SoCoordinate2158->setPoint(new float[]{2.417813,0.075,3.038874,2.283693,0.075,2.380895,3.225384,0.075,2.874263,3.091264,0.075,2.216284}, 12);
SoIndexedFaceSet2157->setCoord(*SoCoordinate2158);

SoShape2154->setGeometry(*SoIndexedFaceSet2157);

SoNode12->addChild(*SoShape2154);

SoShape* SoShape2159 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2160 = new SoVRMLAppearance();
SoMaterial* SoMaterial2161 = new SoMaterial();
SoMaterial2161->setAmbientIntensity(0);
SoMaterial2161->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2161->setShininess(0);
SoVRMLAppearance2160->addChild(*SoMaterial2161);

SoShape2159->addChild(*SoVRMLAppearance2160);

SoIndexedFaceSet* SoIndexedFaceSet2162 = new SoIndexedFaceSet();
SoIndexedFaceSet2162->setSolid(false);
SoIndexedFaceSet2162->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2162->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2163 = new SoCoordinate();
SoCoordinate2163->setPoint(new float[]{3.08727,0.075,2.196687,2.693283,0.075,2.276995,2.815036,0.075,0.8611306,2.421049,0.075,0.941439}, 12);
SoIndexedFaceSet2162->setCoord(*SoCoordinate2163);

SoShape2159->setGeometry(*SoIndexedFaceSet2162);

SoNode12->addChild(*SoShape2159);

SoShape* SoShape2164 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2165 = new SoVRMLAppearance();
SoMaterial* SoMaterial2166 = new SoMaterial();
SoMaterial2166->setAmbientIntensity(0);
SoMaterial2166->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2166->setShininess(0);
SoVRMLAppearance2165->addChild(*SoMaterial2166);

SoShape2164->addChild(*SoVRMLAppearance2165);

SoIndexedFaceSet* SoIndexedFaceSet2167 = new SoIndexedFaceSet();
SoIndexedFaceSet2167->setSolid(false);
SoIndexedFaceSet2167->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2167->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2168 = new SoCoordinate();
SoCoordinate2168->setPoint(new float[]{2.673686,0.075,2.280989,2.279699,0.075,2.361298,2.401452,0.075,0.9454336,2.007465,0.075,1.025742}, 12);
SoIndexedFaceSet2167->setCoord(*SoCoordinate2168);

SoShape2164->setGeometry(*SoIndexedFaceSet2167);

SoNode12->addChild(*SoShape2164);

SoShape* SoShape2169 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2170 = new SoVRMLAppearance();
SoMaterial* SoMaterial2171 = new SoMaterial();
SoMaterial2171->setAmbientIntensity(0);
SoMaterial2171->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2171->setShininess(0);
SoVRMLAppearance2170->addChild(*SoMaterial2171);

SoShape2169->addChild(*SoVRMLAppearance2170);

SoIndexedFaceSet* SoIndexedFaceSet2172 = new SoIndexedFaceSet();
SoIndexedFaceSet2172->setSolid(false);
SoIndexedFaceSet2172->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2172->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2173 = new SoCoordinate();
SoCoordinate2173->setPoint(new float[]{2.003471,0.075,1.006145,1.869351,0.075,0.3481656,2.811042,0.075,0.8415336,2.676922,0.075,0.1835542}, 12);
SoIndexedFaceSet2172->setCoord(*SoCoordinate2173);

SoShape2169->setGeometry(*SoIndexedFaceSet2172);

SoNode12->addChild(*SoShape2169);

SoShape* SoShape2174 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2175 = new SoVRMLAppearance();
SoMaterial* SoMaterial2176 = new SoMaterial();
SoMaterial2176->setAmbientIntensity(0);
SoMaterial2176->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2176->setShininess(0);
SoVRMLAppearance2175->addChild(*SoMaterial2176);

SoShape2174->addChild(*SoVRMLAppearance2175);

SoIndexedFaceSet* SoIndexedFaceSet2177 = new SoIndexedFaceSet();
SoIndexedFaceSet2177->setSolid(false);
SoIndexedFaceSet2177->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet2177->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate2178 = new SoCoordinate();
SoCoordinate2178->setPoint(new float[]{1.866873,0.075,4.562633,1.732753,0.075,3.904654,2.270658,0.075,4.480328,2.136539,0.075,3.822348,2.674444,0.075,4.398022,2.540324,0.075,3.740042}, 18);
SoIndexedFaceSet2177->setCoord(*SoCoordinate2178);

SoShape2174->setGeometry(*SoIndexedFaceSet2177);

SoNode12->addChild(*SoShape2174);

SoShape* SoShape2179 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2180 = new SoVRMLAppearance();
SoMaterial* SoMaterial2181 = new SoMaterial();
SoMaterial2181->setAmbientIntensity(0);
SoMaterial2181->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2181->setShininess(0);
SoVRMLAppearance2180->addChild(*SoMaterial2181);

SoShape2179->addChild(*SoVRMLAppearance2180);

SoIndexedFaceSet* SoIndexedFaceSet2182 = new SoIndexedFaceSet();
SoIndexedFaceSet2182->setSolid(false);
SoIndexedFaceSet2182->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet2182->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate2183 = new SoCoordinate();
SoCoordinate2183->setPoint(new float[]{1.870109,0.075,2.465198,2.067103,0.075,2.425044,2.264096,0.075,2.38489,2.006226,0.075,3.132976,2.203219,0.075,3.092822,2.400213,0.075,3.052667,2.142343,0.075,3.800754,2.339336,0.075,3.7606,2.53633,0.075,3.720445}, 27);
SoIndexedFaceSet2182->setCoord(*SoCoordinate2183);

SoShape2179->setGeometry(*SoIndexedFaceSet2182);

SoNode12->addChild(*SoShape2179);

SoShape* SoShape2184 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2185 = new SoVRMLAppearance();
SoMaterial* SoMaterial2186 = new SoMaterial();
SoMaterial2186->setAmbientIntensity(0);
SoMaterial2186->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2186->setShininess(0);
SoVRMLAppearance2185->addChild(*SoMaterial2186);

SoShape2184->addChild(*SoVRMLAppearance2185);

SoIndexedFaceSet* SoIndexedFaceSet2187 = new SoIndexedFaceSet();
SoIndexedFaceSet2187->setSolid(false);
SoIndexedFaceSet2187->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2187->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2188 = new SoCoordinate();
SoCoordinate2188->setPoint(new float[]{1.456525,0.075,2.549501,1.850512,0.075,2.469193,1.728759,0.075,3.885057,2.122746,0.075,3.804748}, 12);
SoIndexedFaceSet2187->setCoord(*SoCoordinate2188);

SoShape2184->setGeometry(*SoIndexedFaceSet2187);

SoNode12->addChild(*SoShape2184);

SoShape* SoShape2189 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2190 = new SoVRMLAppearance();
SoMaterial* SoMaterial2191 = new SoMaterial();
SoMaterial2191->setAmbientIntensity(0);
SoMaterial2191->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2191->setShininess(0);
SoVRMLAppearance2190->addChild(*SoMaterial2191);

SoShape2189->addChild(*SoVRMLAppearance2190);

SoIndexedFaceSet* SoIndexedFaceSet2192 = new SoIndexedFaceSet();
SoIndexedFaceSet2192->setSolid(false);
SoIndexedFaceSet2192->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet2192->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate2193 = new SoCoordinate();
SoCoordinate2193->setPoint(new float[]{1.452531,0.075,2.529904,1.385471,0.075,2.200914,1.318411,0.075,1.871925,1.856316,0.075,2.447598,1.789257,0.075,2.118608,1.722197,0.075,1.789619,2.260102,0.075,2.365293,2.193042,0.075,2.036303,2.125982,0.075,1.707313}, 27);
SoIndexedFaceSet2192->setCoord(*SoCoordinate2193);

SoShape2189->setGeometry(*SoIndexedFaceSet2192);

SoNode12->addChild(*SoShape2189);

SoShape* SoShape2194 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2195 = new SoVRMLAppearance();
SoMaterial* SoMaterial2196 = new SoMaterial();
SoMaterial2196->setAmbientIntensity(0);
SoMaterial2196->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2196->setShininess(0);
SoVRMLAppearance2195->addChild(*SoMaterial2196);

SoShape2194->addChild(*SoVRMLAppearance2195);

SoIndexedFaceSet* SoIndexedFaceSet2197 = new SoIndexedFaceSet();
SoIndexedFaceSet2197->setSolid(false);
SoIndexedFaceSet2197->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoIndexedFaceSet2197->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1}, 16);
SoCoordinate* SoCoordinate2198 = new SoCoordinate();
SoCoordinate2198->setPoint(new float[]{1.314417,0.075,1.852327,1.180297,0.075,1.194348,1.718202,0.075,1.770022,1.584083,0.075,1.112042,2.121988,0.075,1.687716,1.987868,0.075,1.029737}, 18);
SoIndexedFaceSet2197->setCoord(*SoCoordinate2198);

SoShape2194->setGeometry(*SoIndexedFaceSet2197);

SoNode12->addChild(*SoShape2194);

SoShape* SoShape2199 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2200 = new SoVRMLAppearance();
SoMaterial* SoMaterial2201 = new SoMaterial();
SoMaterial2201->setAmbientIntensity(0);
SoMaterial2201->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2201->setShininess(0);
SoVRMLAppearance2200->addChild(*SoMaterial2201);

SoShape2199->addChild(*SoVRMLAppearance2200);

SoIndexedFaceSet* SoIndexedFaceSet2202 = new SoIndexedFaceSet();
SoIndexedFaceSet2202->setSolid(false);
SoIndexedFaceSet2202->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet2202->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate2203 = new SoCoordinate();
SoCoordinate2203->setPoint(new float[]{1.983874,0.075,1.01014,1.78688,0.075,1.050294,1.589887,0.075,1.090448,1.847757,0.075,0.3423617,1.650764,0.075,0.3825159,1.45377,0.075,0.4226701,1.71164,0.075,-0.3254162,1.514647,0.075,-0.285262,1.317653,0.075,-0.2451078}, 27);
SoIndexedFaceSet2202->setCoord(*SoCoordinate2203);

SoShape2199->setGeometry(*SoIndexedFaceSet2202);

SoNode12->addChild(*SoShape2199);

SoShape* SoShape2204 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2205 = new SoVRMLAppearance();
SoMaterial* SoMaterial2206 = new SoMaterial();
SoMaterial2206->setAmbientIntensity(0);
SoMaterial2206->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2206->setShininess(0);
SoVRMLAppearance2205->addChild(*SoMaterial2206);

SoShape2204->addChild(*SoVRMLAppearance2205);

SoIndexedFaceSet* SoIndexedFaceSet2207 = new SoIndexedFaceSet();
SoIndexedFaceSet2207->setSolid(false);
SoIndexedFaceSet2207->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet2207->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate2208 = new SoCoordinate();
SoCoordinate2208->setPoint(new float[]{0.9040694,0.075,-0.1608048,1.101063,0.075,-0.200959,1.298056,0.075,-0.2411132,1.040186,0.075,0.5069731,1.23718,0.075,0.4668189,1.434173,0.075,0.4266647,1.176303,0.075,1.174751,1.373296,0.075,1.134597,1.57029,0.075,1.094443}, 27);
SoIndexedFaceSet2207->setCoord(*SoCoordinate2208);

SoShape2204->setGeometry(*SoIndexedFaceSet2207);

SoNode12->addChild(*SoShape2204);

SoShape* SoShape2209 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2210 = new SoVRMLAppearance();
SoMaterial* SoMaterial2211 = new SoMaterial();
SoMaterial2211->setAmbientIntensity(0);
SoMaterial2211->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2211->setShininess(0);
SoVRMLAppearance2210->addChild(*SoMaterial2211);

SoShape2209->addChild(*SoVRMLAppearance2210);

SoIndexedFaceSet* SoIndexedFaceSet2212 = new SoIndexedFaceSet();
SoIndexedFaceSet2212->setSolid(false);
SoIndexedFaceSet2212->setTexCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoIndexedFaceSet2212->setCoordIndex(new int32_t[]{4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1}, 32);
SoCoordinate* SoCoordinate2213 = new SoCoordinate();
SoCoordinate2213->setPoint(new float[]{0.7667135,0.075,1.278651,0.9637069,0.075,1.238497,1.1607,0.075,1.198343,0.9028302,0.075,1.946429,1.099824,0.075,1.906275,1.296817,0.075,1.866121,1.038947,0.075,2.614207,1.23594,0.075,2.574053,1.432934,0.075,2.533899}, 27);
SoIndexedFaceSet2212->setCoord(*SoCoordinate2213);

SoShape2209->setGeometry(*SoIndexedFaceSet2212);

SoNode12->addChild(*SoShape2209);

SoShape* SoShape2214 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2215 = new SoVRMLAppearance();
SoMaterial* SoMaterial2216 = new SoMaterial();
SoMaterial2216->setAmbientIntensity(0);
SoMaterial2216->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2216->setShininess(0);
SoVRMLAppearance2215->addChild(*SoMaterial2216);

SoShape2214->addChild(*SoVRMLAppearance2215);

SoIndexedFaceSet* SoIndexedFaceSet2217 = new SoIndexedFaceSet();
SoIndexedFaceSet2217->setSolid(false);
SoIndexedFaceSet2217->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2217->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2218 = new SoCoordinate();
SoCoordinate2218->setPoint(new float[]{0.349135,0.075,1.343357,0.2150155,0.075,0.6853777,1.156706,0.075,1.178746,1.022586,0.075,0.5207662}, 12);
SoIndexedFaceSet2217->setCoord(*SoCoordinate2218);

SoShape2214->setGeometry(*SoIndexedFaceSet2217);

SoNode12->addChild(*SoShape2214);

SoShape* SoShape2219 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance2220 = new SoVRMLAppearance();
SoMaterial* SoMaterial2221 = new SoMaterial();
SoMaterial2221->setAmbientIntensity(0);
SoMaterial2221->setDiffuseColor(new float[]{0.5,0.5,0.5});
SoMaterial2221->setShininess(0);
SoVRMLAppearance2220->addChild(*SoMaterial2221);

SoShape2219->addChild(*SoVRMLAppearance2220);

SoIndexedFaceSet* SoIndexedFaceSet2222 = new SoIndexedFaceSet();
SoIndexedFaceSet2222->setSolid(false);
SoIndexedFaceSet2222->setTexCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoIndexedFaceSet2222->setCoordIndex(new int32_t[]{3,1,0,-1,3,0,2,-1}, 8);
SoCoordinate* SoCoordinate2223 = new SoCoordinate();
SoCoordinate2223->setPoint(new float[]{0.211021,0.075,0.6657807,0.07690154,0.075,0.007801231,1.018592,0.075,0.5011692,0.8844724,0.075,-0.1568102}, 12);
SoIndexedFaceSet2222->setCoord(*SoCoordinate2223);

SoShape2219->setGeometry(*SoIndexedFaceSet2222);

SoNode12->addChild(*SoShape2219);

SoSceneManager0->setSceneGraph(*SoNode12);

return 0;
}
