
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
Socomponent* Socomponent2 = new Socomponent();
Socomponent2->setName(QString("ParticleSystems"));
Socomponent2->setLevel(3);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("comment"));
Someta3->setContent(QString("World of Titania"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("created"));
Someta4->setContent(QString("Sun, 01 May 2016 01:57:45 GMT"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("holger"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("creator"));
Someta6->setContent(QString("Holger Seelig"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("generator"));
Someta7->setContent(QString("Titania V1.4.2, http://titania.create3000.de"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("generator"));
Someta8->setContent(QString("Sunrize X3D Editor V1.6.10, https://create3000.github.io/sunrize/"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("identifier"));
Someta9->setContent(QString("file:///home/holger/Projekte/Cobweb/excite/tests/Components/ParticleSystems/VolumeEmitter.x3d"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("modified"));
Someta10->setContent(QString("Mon, 22 Apr 2024 19:55:06 GMT"));
Sohead1->addMeta(*Someta10);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode11 = new SoNode();
SoWorldInfo* SoWorldInfo12 = new SoWorldInfo();
SoWorldInfo12->setTitle(QString("VolumeEmitter"));
SoMetadataSet* SoMetadataSet13 = new SoMetadataSet();
SoMetadataSet13->X3DNode::setName(QString("Titania"));
SoMetadataSet13->setDEF(QString("Titania"));
SoMetadataSet13->X3DNode::setReference(QString("http://titania.create3000.de"));
SoMetadataSet* SoMetadataSet14 = new SoMetadataSet();
SoMetadataSet14->X3DNode::setName(QString("NavigationInfo"));
SoMetadataSet14->setDEF(QString("NavigationInfo"));
SoMetadataSet14->X3DNode::setReference(QString("http://titania.create3000.de"));
SoMetadataString* SoMetadataString15 = new SoMetadataString();
SoMetadataString15->X3DNode::setName(QString("type"));
SoMetadataString15->setDEF(QString("type"));
SoMetadataString15->X3DNode::setReference(QString("http://titania.create3000.de"));
SoMetadataString15->setValue(new QString[]{QString("EXAMINE")}, 1);
SoMetadataSet14->setValue((X3DNode *)&SoMetadataString15);

SoMetadataSet13->setValue((X3DNode *)&SoMetadataSet14);

SoMetadataSet* SoMetadataSet16 = new SoMetadataSet();
SoMetadataSet16->X3DNode::setName(QString("Viewpoint"));
SoMetadataSet16->setDEF(QString("Viewpoint"));
SoMetadataSet16->X3DNode::setReference(QString("http://titania.create3000.de"));
SoMetadataDouble* SoMetadataDouble17 = new SoMetadataDouble();
SoMetadataDouble17->X3DNode::setName(QString("position"));
SoMetadataDouble17->setDEF(QString("position"));
SoMetadataDouble17->X3DNode::setReference(QString("http://titania.create3000.de"));
SoMetadataDouble17->setValue(new double[]{0.0,0.0,10.0}, 3);
SoMetadataSet16->setValue((X3DNode *)&SoMetadataDouble17);

SoMetadataDouble* SoMetadataDouble18 = new SoMetadataDouble();
SoMetadataDouble18->X3DNode::setName(QString("orientation"));
SoMetadataDouble18->setDEF(QString("orientation"));
SoMetadataDouble18->X3DNode::setReference(QString("http://titania.create3000.de"));
SoMetadataDouble18->setValue(new double[]{0.0,0.0,1.0,0.0}, 4);
SoMetadataSet16->setValue((X3DNode *)&SoMetadataDouble18);

SoMetadataDouble* SoMetadataDouble19 = new SoMetadataDouble();
SoMetadataDouble19->X3DNode::setName(QString("centerOfRotation"));
SoMetadataDouble19->setDEF(QString("centerOfRotation"));
SoMetadataDouble19->X3DNode::setReference(QString("http://titania.create3000.de"));
SoMetadataDouble19->setValue(new double[]{0.0,0.0,0.0}, 3);
SoMetadataSet16->setValue((X3DNode *)&SoMetadataDouble19);

SoMetadataSet13->setValue((X3DNode *)&SoMetadataSet16);

SoMetadataSet* SoMetadataSet20 = new SoMetadataSet();
SoMetadataSet20->X3DNode::setName(QString("Selection"));
SoMetadataSet20->setDEF(QString("Selection"));
SoMetadataSet20->X3DNode::setReference(QString("http://titania.create3000.de"));
SoMetadataSet* SoMetadataSet21 = new SoMetadataSet();
SoMetadataSet21->X3DNode::setName(QString("previous"));
SoMetadataSet21->setDEF(QString("previous"));
SoMetadataSet21->X3DNode::setReference(QString("http://titania.create3000.de"));
SoMetadataSet20->setValue((X3DNode *)&SoMetadataSet21);

SoMetadataSet13->setValue((X3DNode *)&SoMetadataSet20);

SoWorldInfo12->setMetadata(*SoMetadataSet13);

SoNode11->addChild(*SoWorldInfo12);

SoBackground* SoBackground22 = new SoBackground();
SoBackground22->setDEF(QString("Gray"));
SoBackground22->setSkyColor(new float[]{0.2,0.2,0.2}, 3);
SoNode11->addChild(*SoBackground22);

SoOrthoViewpoint* SoOrthoViewpoint23 = new SoOrthoViewpoint();
SoOrthoViewpoint23->setDescription(QString("OrthoViewpoint"));
SoOrthoViewpoint23->setFieldOfView(new float[]{-1.5,-1.5,1.5,1.5}, 4);
SoNode11->addChild(*SoOrthoViewpoint23);

SoViewpoint* SoViewpoint24 = new SoViewpoint();
SoViewpoint24->setDescription(QString("Viewpoint"));
SoViewpoint24->setPosition(new float[]{0.0,0.0,8.0});
SoNode11->addChild(*SoViewpoint24);

SoParticleSystem* SoParticleSystem25 = new SoParticleSystem();
SoParticleSystem25->setGeometryType(QString("POINT"));
SoParticleSystem25->setMaxParticles(100000);
SoParticleSystem25->setParticleLifetime(60);
SoParticleSystem25->setLifetimeVariation(0.01);
SoParticleSystem25->setParticleSize(new float[]{0.1,0.1});
SoParticleSystem25->setColorKey(new float[]{0.0,0.1,0.4,1.0}, 4);
SoVolumeEmitter* SoVolumeEmitter26 = new SoVolumeEmitter();
SoVolumeEmitter26->setDirection(new float[]{0.0,0.0,0.0});
SoVolumeEmitter26->setMass(0.01);
SoVolumeEmitter26->setSurfaceArea(0.01);
SoCoordinate* SoCoordinate27 = new SoCoordinate();
SoCoordinate27->setPoint(new float[]{0.0277709,-1.0,1.0,2.02777,-1.0,1.0,2.02777,1.0,1.0,0.0277709,1.0,1.0,0.0277709,-1.0,-1.0,2.02777,-1.0,-1.0,2.02777,1.0,-1.0,0.0277709,1.0,-1.0,-1.01983,1.0,0.0,-1.01983,0.974928,-0.222521,-1.06609,0.974928,-0.217658,-1.11034,0.974928,-0.203283,-1.15062,0.974928,-0.180023,-1.18519,0.974928,-0.148896,-1.21254,0.974928,-0.11126,-1.23146,0.974928,-0.0687627,-1.24113,0.974928,-0.0232598,-1.24113,0.974928,0.0232598,-1.23146,0.974928,0.0687627,-1.21254,0.974928,0.11126,-1.18519,0.974928,0.148896,-1.15062,0.974928,0.180023,-1.11034,0.974928,0.203283,-1.06609,0.974928,0.217658,-1.01983,0.974928,0.222521,-0.973561,0.974928,0.217658,-0.929318,0.974928,0.203283,-0.889031,0.974928,0.180023,-0.85446,0.974928,0.148896,-0.827116,0.974928,0.11126,-0.808195,0.974928,0.0687627,-0.798523,0.974928,0.0232598,-0.798523,0.974928,-0.0232598,-0.808195,0.974928,-0.0687627,-0.827116,0.974928,-0.11126,-0.85446,0.974928,-0.148896,-0.889031,0.974928,-0.180023,-0.929318,0.974928,-0.203283,-0.973561,0.974928,-0.217658,-1.01983,0.900969,-0.433884,-1.11004,0.900969,-0.424402,-1.19631,0.900969,-0.396373,-1.27486,0.900969,-0.351019,-1.34227,0.900969,-0.290325,-1.39558,0.900969,-0.216942,-1.43248,0.900969,-0.134077,-1.45134,0.900969,-0.0453532,-1.45134,0.900969,0.0453532,-1.43248,0.900969,0.134077,-1.39558,0.900969,0.216942,-1.34227,0.900969,0.290325,-1.27486,0.900969,0.351019,-1.19631,0.900969,0.396373,-1.11004,0.900969,0.424402,-1.01983,0.900969,0.433884,-0.929616,0.900969,0.424402,-0.843349,0.900969,0.396373,-0.764795,0.900969,0.351019,-0.697387,0.900969,0.290325,-0.644071,0.900969,0.216942,-0.607177,0.900969,0.134077,-0.588318,0.900969,0.0453532,-0.588318,0.900969,-0.0453532,-0.607177,0.900969,-0.134077,-0.644071,0.900969,-0.216942,-0.697387,0.900969,-0.290325,-0.764795,0.900969,-0.351019,-0.843349,0.900969,-0.396373,-0.929616,0.900969,-0.424402,-1.01983,0.781832,-0.62349,-1.14946,0.781832,-0.609865,-1.27343,0.781832,-0.569586,-1.38631,0.781832,-0.504414,-1.48317,0.781832,-0.417196,-1.55979,0.781832,-0.311745,-1.6128,0.781832,-0.192669,-1.6399,0.781832,-0.0651724,-1.6399,0.781832,0.0651724,-1.6128,0.781832,0.192669,-1.55979,0.781832,0.311745,-1.48317,0.781832,0.417196,-1.38631,0.781832,0.504414,-1.27343,0.781832,0.569586,-1.14946,0.781832,0.609865,-1.01983,0.781832,0.62349,-0.890194,0.781832,0.609865,-0.766229,0.781832,0.569586,-0.653347,0.781832,0.504414,-0.556482,0.781832,0.417196,-0.479867,0.781832,0.311745,-0.426851,0.781832,0.192669,-0.399751,0.781832,0.0651724,-0.399751,0.781832,-0.0651724,-0.426851,0.781832,-0.192669,-0.479867,0.781832,-0.311745,-0.556482,0.781832,-0.417196,-0.653347,0.781832,-0.504414,-0.766229,0.781832,-0.569586,-0.890194,0.781832,-0.609865,-1.01983,0.62349,-0.781832,-1.18238,0.62349,-0.764747,-1.33783,0.62349,-0.714239,-1.47938,0.62349,-0.632515,-1.60084,0.62349,-0.523147,-1.69692,0.62349,-0.390916,-1.7634,0.62349,-0.241599,-1.79738,0.62349,-0.0817236,-1.79738,0.62349,0.0817236,-1.7634,0.62349,0.241599,-1.69692,0.62349,0.390916,-1.60084,0.62349,0.523147,-1.47938,0.62349,0.632515,-1.33783,0.62349,0.714239,-1.18238,0.62349,0.764747,-1.01983,0.62349,0.781832,-0.857273,0.62349,0.764747,-0.701826,0.62349,0.714239,-0.560276,0.62349,0.632515,-0.438811,0.62349,0.523147,-0.342739,0.62349,0.390916,-0.276259,0.62349,0.241599,-0.242277,0.62349,0.0817236,-0.242277,0.62349,-0.0817236,-0.276259,0.62349,-0.241599,-0.342739,0.62349,-0.390916,-0.438811,0.62349,-0.523147,-0.560276,0.62349,-0.632515,-0.701826,0.62349,-0.714239,-0.857273,0.62349,-0.764747,-1.01983,0.433884,-0.900969,-1.20715,0.433884,-0.881281,-1.38629,0.433884,-0.823076,-1.54941,0.433884,-0.728899,-1.68938,0.433884,-0.602866,-1.80009,0.433884,-0.450484,-1.8767,0.433884,-0.278415,-1.91586,0.433884,-0.0941769,-1.91586,0.433884,0.0941769,-1.8767,0.433884,0.278415,-1.80009,0.433884,0.450484,-1.68938,0.433884,0.602866,-1.54941,0.433884,0.728899,-1.38629,0.433884,0.823076,-1.20715,0.433884,0.881281,-1.01983,0.433884,0.900969,-0.832503,0.433884,0.881281,-0.653368,0.433884,0.823076,-0.490249,0.433884,0.728899,-0.350275,0.433884,0.602866,-0.239563,0.433884,0.450484,-0.162953,0.433884,0.278415,-0.123792,0.433884,0.0941769,-0.123792,0.433884,-0.0941769,-0.162953,0.433884,-0.278415,-0.239563,0.433884,-0.450484,-0.350275,0.433884,-0.602866,-0.490249,0.433884,-0.728899,-0.653368,0.433884,-0.823076,-0.832503,0.433884,-0.881281,-1.01983,0.222521,-0.974928,-1.22253,0.222521,-0.953623,-1.41637,0.222521,-0.890641,-1.59288,0.222521,-0.788733,-1.74434,0.222521,-0.652354,-1.86414,0.222521,-0.487464,-1.94704,0.222521,-0.301269,-1.98942,0.222521,-0.101908,-1.98942,0.222521,0.101908,-1.94704,0.222521,0.301269,-1.86414,0.222521,0.487464,-1.74434,0.222521,0.652354,-1.59288,0.222521,0.788733,-1.41637,0.222521,0.890641,-1.22253,0.222521,0.953623,-1.01983,0.222521,0.974928,-0.817126,0.222521,0.953623,-0.623286,0.222521,0.890641,-0.446777,0.222521,0.788733,-0.295313,0.222521,0.652354,-0.175513,0.222521,0.487464,-0.0926139,0.222521,0.301269,-0.0502383,0.222521,0.101908,-0.0502383,0.222521,-0.101908,-0.0926139,0.222521,-0.301269,-0.175513,0.222521,-0.487464,-0.295313,0.222521,-0.652354,-0.446777,0.222521,-0.788733,-0.623286,0.222521,-0.890641,-0.817126,0.222521,-0.953623,-1.01983,6.12323e-17,-1.0,-1.22774,6.12323e-17,-0.978148,-1.42657,6.12323e-17,-0.913545,-1.60761,6.12323e-17,-0.809017,-1.76297,6.12323e-17,-0.669131,-1.88585,6.12323e-17,-0.5,-1.97089,6.12323e-17,-0.309017,-2.01435,6.12323e-17,-0.104528,-2.01435,6.12323e-17,0.104528,-1.97089,6.12323e-17,0.309017,-1.88585,6.12323e-17,0.5,-1.76297,6.12323e-17,0.669131,-1.60761,6.12323e-17,0.809017,-1.42657,6.12323e-17,0.913545,-1.22774,6.12323e-17,0.978148,-1.01983,6.12323e-17,1.0,-0.811914,6.12323e-17,0.978148,-0.613089,6.12323e-17,0.913545,-0.43204,6.12323e-17,0.809017,-0.27668,6.12323e-17,0.669131,-0.1538,6.12323e-17,0.5,-0.0687689,6.12323e-17,0.309017,-0.0253035,6.12323e-17,0.104528,-0.0253035,6.12323e-17,-0.104528,-0.0687689,6.12323e-17,-0.309017,-0.1538,6.12323e-17,-0.5,-0.27668,6.12323e-17,-0.669131,-0.43204,6.12323e-17,-0.809017,-0.613089,6.12323e-17,-0.913545,-0.811914,6.12323e-17,-0.978148,-1.01983,-0.222521,-0.974928,-1.22253,-0.222521,-0.953623,-1.41637,-0.222521,-0.890641,-1.59288,-0.222521,-0.788733,-1.74434,-0.222521,-0.652354,-1.86414,-0.222521,-0.487464,-1.94704,-0.222521,-0.301269,-1.98942,-0.222521,-0.101908,-1.98942,-0.222521,0.101908,-1.94704,-0.222521,0.301269,-1.86414,-0.222521,0.487464,-1.74434,-0.222521,0.652354,-1.59288,-0.222521,0.788733,-1.41637,-0.222521,0.890641,-1.22253,-0.222521,0.953623,-1.01983,-0.222521,0.974928,-0.817126,-0.222521,0.953623,-0.623286,-0.222521,0.890641,-0.446777,-0.222521,0.788733,-0.295313,-0.222521,0.652354,-0.175513,-0.222521,0.487464,-0.0926139,-0.222521,0.301269,-0.0502383,-0.222521,0.101908,-0.0502383,-0.222521,-0.101908,-0.0926139,-0.222521,-0.301269,-0.175513,-0.222521,-0.487464,-0.295313,-0.222521,-0.652354,-0.446777,-0.222521,-0.788733,-0.623286,-0.222521,-0.890641,-0.817126,-0.222521,-0.953623,-1.01983,-0.433884,-0.900969,-1.20715,-0.433884,-0.881281,-1.38629,-0.433884,-0.823076,-1.54941,-0.433884,-0.728899,-1.68938,-0.433884,-0.602866,-1.80009,-0.433884,-0.450484,-1.8767,-0.433884,-0.278415,-1.91586,-0.433884,-0.0941769,-1.91586,-0.433884,0.0941769,-1.8767,-0.433884,0.278415,-1.80009,-0.433884,0.450484,-1.68938,-0.433884,0.602866,-1.54941,-0.433884,0.728899,-1.38629,-0.433884,0.823076,-1.20715,-0.433884,0.881281,-1.01983,-0.433884,0.900969,-0.832503,-0.433884,0.881281,-0.653368,-0.433884,0.823076,-0.490249,-0.433884,0.728899,-0.350275,-0.433884,0.602866,-0.239563,-0.433884,0.450484,-0.162953,-0.433884,0.278415,-0.123792,-0.433884,0.0941769,-0.123792,-0.433884,-0.0941769,-0.162953,-0.433884,-0.278415,-0.239563,-0.433884,-0.450484,-0.350275,-0.433884,-0.602866,-0.490249,-0.433884,-0.728899,-0.653368,-0.433884,-0.823076,-0.832503,-0.433884,-0.881281,-1.01983,-0.62349,-0.781832,-1.18238,-0.62349,-0.764747,-1.33783,-0.62349,-0.714239,-1.47938,-0.62349,-0.632515,-1.60084,-0.62349,-0.523147,-1.69692,-0.62349,-0.390916,-1.7634,-0.62349,-0.241599,-1.79738,-0.62349,-0.0817236,-1.79738,-0.62349,0.0817236,-1.7634,-0.62349,0.241599,-1.69692,-0.62349,0.390916,-1.60084,-0.62349,0.523147,-1.47938,-0.62349,0.632515,-1.33783,-0.62349,0.714239,-1.18238,-0.62349,0.764747,-1.01983,-0.62349,0.781832,-0.857273,-0.62349,0.764747,-0.701826,-0.62349,0.714239,-0.560276,-0.62349,0.632515,-0.438811,-0.62349,0.523147,-0.342739,-0.62349,0.390916,-0.276259,-0.62349,0.241599,-0.242277,-0.62349,0.0817236,-0.242277,-0.62349,-0.0817236,-0.276259,-0.62349,-0.241599,-0.342739,-0.62349,-0.390916,-0.438811,-0.62349,-0.523147,-0.560276,-0.62349,-0.632515,-0.701826,-0.62349,-0.714239,-0.857273,-0.62349,-0.764747,-1.01983,-0.781832,-0.62349,-1.14946,-0.781832,-0.609865,-1.27343,-0.781832,-0.569586,-1.38631,-0.781832,-0.504414,-1.48317,-0.781832,-0.417196,-1.55979,-0.781832,-0.311745,-1.6128,-0.781832,-0.192669,-1.6399,-0.781832,-0.0651724,-1.6399,-0.781832,0.0651724,-1.6128,-0.781832,0.192669,-1.55979,-0.781832,0.311745,-1.48317,-0.781832,0.417196,-1.38631,-0.781832,0.504414,-1.27343,-0.781832,0.569586,-1.14946,-0.781832,0.609865,-1.01983,-0.781832,0.62349,-0.890194,-0.781832,0.609865,-0.766229,-0.781832,0.569586,-0.653347,-0.781832,0.504414,-0.556482,-0.781832,0.417196,-0.479867,-0.781832,0.311745,-0.426851,-0.781832,0.192669,-0.399751,-0.781832,0.0651724,-0.399751,-0.781832,-0.0651724,-0.426851,-0.781832,-0.192669,-0.479867,-0.781832,-0.311745,-0.556482,-0.781832,-0.417196,-0.653347,-0.781832,-0.504414,-0.766229,-0.781832,-0.569586,-0.890194,-0.781832,-0.609865,-1.01983,-0.900969,-0.433884,-1.11004,-0.900969,-0.424402,-1.19631,-0.900969,-0.396373,-1.27486,-0.900969,-0.351019,-1.34227,-0.900969,-0.290325,-1.39558,-0.900969,-0.216942,-1.43248,-0.900969,-0.134077,-1.45134,-0.900969,-0.0453532,-1.45134,-0.900969,0.0453532,-1.43248,-0.900969,0.134077,-1.39558,-0.900969,0.216942,-1.34227,-0.900969,0.290325,-1.27486,-0.900969,0.351019,-1.19631,-0.900969,0.396373,-1.11004,-0.900969,0.424402,-1.01983,-0.900969,0.433884,-0.929616,-0.900969,0.424402,-0.843349,-0.900969,0.396373,-0.764795,-0.900969,0.351019,-0.697387,-0.900969,0.290325,-0.644071,-0.900969,0.216942,-0.607177,-0.900969,0.134077,-0.588318,-0.900969,0.0453532,-0.588318,-0.900969,-0.0453532,-0.607177,-0.900969,-0.134077,-0.644071,-0.900969,-0.216942,-0.697387,-0.900969,-0.290325,-0.764795,-0.900969,-0.351019,-0.843349,-0.900969,-0.396373,-0.929616,-0.900969,-0.424402,-1.01983,-0.974928,-0.222521,-1.06609,-0.974928,-0.217658,-1.11034,-0.974928,-0.203283,-1.15062,-0.974928,-0.180023,-1.18519,-0.974928,-0.148896,-1.21254,-0.974928,-0.11126,-1.23146,-0.974928,-0.0687627,-1.24113,-0.974928,-0.0232598,-1.24113,-0.974928,0.0232598,-1.23146,-0.974928,0.0687627,-1.21254,-0.974928,0.11126,-1.18519,-0.974928,0.148896,-1.15062,-0.974928,0.180023,-1.11034,-0.974928,0.203283,-1.06609,-0.974928,0.217658,-1.01983,-0.974928,0.222521,-0.973561,-0.974928,0.217658,-0.929318,-0.974928,0.203283,-0.889031,-0.974928,0.180023,-0.85446,-0.974928,0.148896,-0.827116,-0.974928,0.11126,-0.808195,-0.974928,0.0687627,-0.798523,-0.974928,0.0232598,-0.798523,-0.974928,-0.0232598,-0.808195,-0.974928,-0.0687627,-0.827116,-0.974928,-0.11126,-0.85446,-0.974928,-0.148896,-0.889031,-0.974928,-0.180023,-0.929318,-0.974928,-0.203283,-0.973561,-0.974928,-0.217658,-1.01983,-1.0,0.0}, 1200);
SoVolumeEmitter26->setCoord(*SoCoordinate27);

SoParticleSystem25->setEmitter(SoVolumeEmitter26);

SoVRMLAppearance* SoVRMLAppearance28 = new SoVRMLAppearance();
SoPointProperties* SoPointProperties29 = new SoPointProperties();
SoPointProperties29->setPointSizeScaleFactor(2);
SoPointProperties29->setPointSizeMaxValue(2);
SoVRMLAppearance28->setPointProperties(SoPointProperties29);

SoParticleSystem25->addChildren(*SoVRMLAppearance28);

SoNode11->addChild(*SoParticleSystem25);

SoClipPlane* SoClipPlane30 = new SoClipPlane();
SoClipPlane30->setPlane(new float[]{0.0,0.0,1.0,0.2});
SoNode11->addChild(*SoClipPlane30);

SoClipPlane* SoClipPlane31 = new SoClipPlane();
SoClipPlane31->setPlane(new float[]{0.0,0.0,-1.0,0.2});
SoNode11->addChild(*SoClipPlane31);

SoTransform* SoTransform32 = new SoTransform();
SoTransform32->setDEF(QString("IndexedLineSet"));
SoShape* SoShape33 = new SoShape();
SoIndexedLineSet* SoIndexedLineSet34 = new SoIndexedLineSet();
SoIndexedLineSet34->setColorPerVertex(false);
SoIndexedLineSet34->setColorIndex(new int[]{0,1,2}, 3);
SoIndexedLineSet34->setCoordIndex(new int32_t[]{0,1,-1,2,3,-1,4,5,-1}, 9);
SoColor* SoColor35 = new SoColor();
SoColor35->setColor(new float[]{1.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,1.0}, 9);
SoIndexedLineSet34->setColor(*SoColor35);

SoCoordinate* SoCoordinate36 = new SoCoordinate();
SoCoordinate36->setPoint(new float[]{-1.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.0,1.0,0.0,0.0,0.0,-1.0,0.0,0.0,1.0}, 18);
SoIndexedLineSet34->setCoord(*SoCoordinate36);

SoShape33->setGeometry(*SoIndexedLineSet34);

SoTransform32->addChild(*SoShape33);

SoNode11->addChild(*SoTransform32);

SoSceneManager0->setSceneGraph(*SoNode11);

return 0;
}
