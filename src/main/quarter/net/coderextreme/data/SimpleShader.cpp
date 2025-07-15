
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
Socomponent* Socomponent2 = new Socomponent();
Socomponent2->setName(QString("Shaders"));
Socomponent2->setLevel(1);
Sohead1->addChild(*Socomponent2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("title"));
Someta3->setContent(QString("SimpleShader.x3d"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Simple shader example"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("John Stewart"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("translator"));
Someta6->setContent(QString("Holger Seelig, John Carlson, Don Brutzman and Jeff Malnick"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("created"));
Someta7->setContent(QString("26 May 2009"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("translated"));
Someta8->setContent(QString("15 October 2009"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("modified"));
Someta9->setContent(QString("20 October 2019"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("reference"));
Someta10->setContent(QString("http://www.opengl.org/wiki/Fragment_Shader"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("reference"));
Someta11->setContent(QString("http://www.opengl.org/wiki/http://www.opengl.org/wiki/Vertex_Shader"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("reference"));
Someta12->setContent(QString("https://www.web3d.org/x3d/wiki/index.php/X3D_Plugfest"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("subject"));
Someta13->setContent(QString("X3D shader example"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("reference"));
Someta14->setContent(QString("originals/simpleShader.x3dv"));
Sohead1->addMeta(*Someta14);

Someta* Someta15 = new Someta();
Someta15->setName(QString("reference"));
Someta15->setContent(QString("ShaderTutorialInstantReality.pdf"));
Sohead1->addMeta(*Someta15);

Someta* Someta16 = new Someta();
Someta16->setName(QString("generator"));
Someta16->setContent(QString("Titania V3.0.3, http://titania.create3000.de"));
Sohead1->addMeta(*Someta16);

Someta* Someta17 = new Someta();
Someta17->setName(QString("info"));
Someta17->setContent(QString("World of Titania"));
Sohead1->addMeta(*Someta17);

Someta* Someta18 = new Someta();
Someta18->setName(QString("outputStyle"));
Someta18->setContent(QString("nicest"));
Sohead1->addMeta(*Someta18);

Someta* Someta19 = new Someta();
Someta19->setName(QString("generator"));
Someta19->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta19);

Someta* Someta20 = new Someta();
Someta20->setName(QString("identifier"));
Someta20->setContent(QString("https://www.web3d.org/x3d/content/examples/Basic/Shaders/SimpleShader.x3d"));
Sohead1->addMeta(*Someta20);

Someta* Someta21 = new Someta();
Someta21->setName(QString("license"));
Someta21->setContent(QString("../../license.html"));
Sohead1->addMeta(*Someta21);

//meta content='under development' name='warning'/
SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode22 = new SoNode();
SoProtoDeclare* SoProtoDeclare23 = new SoProtoDeclare();
SoProtoDeclare23->setName(QString("myPrototype"));
SoProtoInterface* SoProtoInterface24 = new SoProtoInterface();
Sofield* Sofield25 = new Sofield();
Sofield25->setName(QString("myInputRange"));
Sofield25->setAccessType(QString("initializeOnly"));
Sofield25->setType(QString("SFVec3f"));
Sofield25->setValue(QString("0.95 0.44 0.22"));
SoProtoInterface24->addChild(*Sofield25);

SoProtoDeclare23->addChild(*SoProtoInterface24);

SoProtoBody* SoProtoBody26 = new SoProtoBody();
SoTransform* SoTransform27 = new SoTransform();
SoTransform27->setDEF(QString("TR"));
SoShape* SoShape28 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance29 = new SoVRMLAppearance();
SoMaterial* SoMaterial30 = new SoMaterial();
SoMaterial30->setDiffuseColor(new float[]{0.5,0.5,0.9});
SoVRMLAppearance29->addChild(*SoMaterial30);

SoComposedShader* SoComposedShader31 = new SoComposedShader();
SoComposedShader31->setLanguage(QString("GLSL"));
Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("decis"));
Sofield32->setAccessType(QString("initializeOnly"));
Sofield32->setType(QString("SFVec3f"));
SoComposedShader31->addChild(*Sofield32);

SoIS* SoIS33 = new SoIS();
Soconnect* Soconnect34 = new Soconnect();
Soconnect34->setNodeField(QString("decis"));
Soconnect34->setProtoField(QString("myInputRange"));
SoIS33->addChild(*Soconnect34);

SoComposedShader31->addChild(*SoIS33);

SoShaderPart* SoShaderPart35 = new SoShaderPart();
SoShaderPart35->setType(QString("VERTEX"));
SoComposedShader31->setParts(*SoShaderPart35);

SoShaderPart* SoShaderPart36 = new SoShaderPart();
SoShaderPart36->setType(QString("FRAGMENT"));
SoComposedShader31->setParts(*SoShaderPart36);

SoVRMLAppearance29->addChild(*SoComposedShader31);

SoComposedShader* SoComposedShader37 = new SoComposedShader();
SoComposedShader37->setDEF(QString("Cobweb"));
SoComposedShader37->setLanguage(QString("GLSL"));
Sofield* Sofield38 = new Sofield();
Sofield38->setName(QString("decis"));
Sofield38->setAccessType(QString("initializeOnly"));
Sofield38->setType(QString("SFVec3f"));
Sofield38->setValue(QString("0.95 0.77 0.44"));
SoComposedShader37->addChild(*Sofield38);

SoShaderPart* SoShaderPart39 = new SoShaderPart();
SoShaderPart39->setType(QString("VERTEX"));
SoComposedShader37->setParts(*SoShaderPart39);

SoShaderPart* SoShaderPart40 = new SoShaderPart();
SoShaderPart40->setDEF(QString("_1"));
SoShaderPart40->setType(QString("FRAGMENT"));
SoComposedShader37->setParts(*SoShaderPart40);

SoVRMLAppearance29->addChild(*SoComposedShader37);

SoShape28->addChild(*SoVRMLAppearance29);

SoSphere* SoSphere41 = new SoSphere();
SoSphere41->setRadius(1.75);
SoShape28->setGeometry(*SoSphere41);

SoTransform27->addChild(*SoShape28);

SoProtoBody26->addChild(*SoTransform27);

SoProtoDeclare23->addChild(*SoProtoBody26);

SoNode22->addChild(*SoProtoDeclare23);

SoWorldInfo* SoWorldInfo42 = new SoWorldInfo();
SoWorldInfo42->setTitle(QString("SimpleShader"));
SoMetadataSet* SoMetadataSet43 = new SoMetadataSet();
SoMetadataSet43->X3DNode::setName(QString("Titania"));
SoMetadataSet43->setDEF(QString("Titania"));
SoMetadataSet43->X3DNode::setReference(QString("http://titania.create3000.de"));
SoMetadataSet* SoMetadataSet44 = new SoMetadataSet();
SoMetadataSet44->X3DNode::setName(QString("Selection"));
SoMetadataSet44->setDEF(QString("Selection"));
SoMetadataSet44->X3DNode::setReference(QString("http://titania.create3000.de"));
SoMetadataSet* SoMetadataSet45 = new SoMetadataSet();
SoMetadataSet45->X3DNode::setName(QString("nodes"));
SoMetadataSet45->setDEF(QString("nodes"));
SoMetadataSet45->X3DNode::setReference(QString("http://titania.create3000.de"));
//NULL
SoMetadataSet44->setValue((X3DNode *)&SoMetadataSet45);

SoMetadataSet43->setValue((X3DNode *)&SoMetadataSet44);

SoMetadataSet* SoMetadataSet46 = new SoMetadataSet();
SoMetadataSet46->X3DNode::setName(QString("NavigationInfo"));
SoMetadataSet46->setDEF(QString("NavigationInfo"));
SoMetadataSet46->X3DNode::setReference(QString("http://titania.create3000.de"));
SoMetadataString* SoMetadataString47 = new SoMetadataString();
SoMetadataString47->X3DNode::setName(QString("type"));
SoMetadataString47->setDEF(QString("type"));
SoMetadataString47->X3DNode::setReference(QString("http://titania.create3000.de"));
SoMetadataString47->setValue(new QString[]{QString("EXAMINE")}, 1);
SoMetadataSet46->setValue((X3DNode *)&SoMetadataString47);

SoMetadataSet43->setValue((X3DNode *)&SoMetadataSet46);

SoMetadataSet* SoMetadataSet48 = new SoMetadataSet();
SoMetadataSet48->X3DNode::setName(QString("Viewpoint"));
SoMetadataSet48->setDEF(QString("Viewpoint"));
SoMetadataSet48->X3DNode::setReference(QString("http://titania.create3000.de"));
SoMetadataDouble* SoMetadataDouble49 = new SoMetadataDouble();
SoMetadataDouble49->X3DNode::setName(QString("position"));
SoMetadataDouble49->setDEF(QString("position"));
SoMetadataDouble49->X3DNode::setReference(QString("http://titania.create3000.de"));
SoMetadataDouble49->setValue(new double[]{6.24067728185014,0.00250837343276661,2.92117542307615}, 3);
SoMetadataSet48->setValue((X3DNode *)&SoMetadataDouble49);

SoMetadataDouble* SoMetadataDouble50 = new SoMetadataDouble();
SoMetadataDouble50->X3DNode::setName(QString("orientation"));
SoMetadataDouble50->setDEF(QString("orientation"));
SoMetadataDouble50->X3DNode::setReference(QString("http://titania.create3000.de"));
SoMetadataDouble50->setValue(new double[]{-0.110173424710488,0.990158061907379,-0.0863065984000336,1.21146676119191}, 4);
SoMetadataSet48->setValue((X3DNode *)&SoMetadataDouble50);

SoMetadataDouble* SoMetadataDouble51 = new SoMetadataDouble();
SoMetadataDouble51->X3DNode::setName(QString("centerOfRotation"));
SoMetadataDouble51->setDEF(QString("centerOfRotation"));
SoMetadataDouble51->X3DNode::setReference(QString("http://titania.create3000.de"));
SoMetadataDouble51->setValue(new double[]{-0.808320198626341,-0.358072370409949,0.22817191560906}, 3);
SoMetadataSet48->setValue((X3DNode *)&SoMetadataDouble51);

SoMetadataSet43->setValue((X3DNode *)&SoMetadataSet48);

SoWorldInfo42->setMetadata(*SoMetadataSet43);

SoNode22->addChild(*SoWorldInfo42);

SoProtoInstance* SoProtoInstance52 = new SoProtoInstance();
SoProtoInstance52->setName(QString("myPrototype"));
SoNode22->addChild(*SoProtoInstance52);

SoSceneManager0->setSceneGraph(*SoNode22);

return 0;
}
