
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
Someta2->setContent(QString("ViewFrustumPrototype.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Define a view frustum associated with a given pair of Viewpoint and NavigationInfo nodes, provided as a reusable prototype."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("creator"));
Someta4->setContent(QString("Don Brutzman"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("translated"));
Someta5->setContent(QString("16 August 2008"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("modified"));
Someta6->setContent(QString("20 October 2019"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("reference"));
Someta7->setContent(QString("ViewFrustumExample.x3d"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("drawing"));
Someta8->setContent(QString("ViewFrustumComputation.png"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("Image"));
Someta9->setContent(QString("ViewFrustumOverheadView.png"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("Image"));
Someta10->setContent(QString("ViewFrustumObliqueView.png"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("subject"));
Someta11->setContent(QString("view culling frustum"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("identifier"));
Someta12->setContent(QString("https://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d"));
Sohead1->addMeta(*Someta12);

Someta* Someta13 = new Someta();
Someta13->setName(QString("generator"));
Someta13->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta13);

Someta* Someta14 = new Someta();
Someta14->setName(QString("license"));
Someta14->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta14);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode15 = new SoNode();
SoWorldInfo* SoWorldInfo16 = new SoWorldInfo();
SoWorldInfo16->setTitle(QString("ViewFrustumPrototype.x3d"));
SoNode15->addChild(*SoWorldInfo16);

SoProtoDeclare* SoProtoDeclare17 = new SoProtoDeclare();
SoProtoDeclare17->setName(QString("ViewFrustum"));
SoProtoDeclare17->setAppinfo(QString("Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes"));
SoProtoInterface* SoProtoInterface18 = new SoProtoInterface();
Sofield* Sofield19 = new Sofield();
Sofield19->setName(QString("ViewpointNode"));
Sofield19->setAccessType(QString("initializeOnly"));
Sofield19->setAppinfo(QString("required: insert Viewpoint DEF or USE node for view of interest"));
Sofield19->setType(QString("SFNode"));
//NULL node, ProtoInstance must provide
SoProtoInterface18->addChild(*Sofield19);

Sofield* Sofield20 = new Sofield();
Sofield20->setName(QString("NavigationInfoNode"));
Sofield20->setAccessType(QString("initializeOnly"));
Sofield20->setAppinfo(QString("required: insert NavigationInfo DEF or USE node of interest"));
Sofield20->setType(QString("SFNode"));
//NULL node, ProtoInstance must provide
SoProtoInterface18->addChild(*Sofield20);

Sofield* Sofield21 = new Sofield();
Sofield21->setName(QString("visible"));
Sofield21->setAccessType(QString("inputOutput"));
Sofield21->setAppinfo(QString("whether or not frustum geometry is rendered"));
Sofield21->setType(QString("SFBool"));
Sofield21->setValue(QString("true"));
SoProtoInterface18->addChild(*Sofield21);

Sofield* Sofield22 = new Sofield();
Sofield22->setName(QString("lineColor"));
Sofield22->setAccessType(QString("inputOutput"));
Sofield22->setAppinfo(QString("RGB color of ViewFrustum outline, default value 0.9 0.9 0.9"));
Sofield22->setType(QString("SFColor"));
Sofield22->setValue(QString("0.9 0.9 0.9"));
SoProtoInterface18->addChild(*Sofield22);

Sofield* Sofield23 = new Sofield();
Sofield23->setName(QString("frustumColor"));
Sofield23->setAccessType(QString("inputOutput"));
Sofield23->setAppinfo(QString("RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8"));
Sofield23->setType(QString("SFColor"));
Sofield23->setValue(QString("0.8 0.8 0.8"));
SoProtoInterface18->addChild(*Sofield23);

Sofield* Sofield24 = new Sofield();
Sofield24->setName(QString("transparency"));
Sofield24->setAccessType(QString("inputOutput"));
Sofield24->setAppinfo(QString("transparency of ViewFrustum hull geometry, default value 0.5"));
Sofield24->setType(QString("SFFloat"));
Sofield24->setValue(QString("0.5"));
SoProtoInterface18->addChild(*Sofield24);

Sofield* Sofield25 = new Sofield();
Sofield25->setName(QString("aspectRatio"));
Sofield25->setAccessType(QString("inputOutput"));
Sofield25->setAppinfo(QString("assumed ratio height/width, default value 0.75"));
Sofield25->setType(QString("SFFloat"));
Sofield25->setValue(QString("0.75"));
SoProtoInterface18->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setName(QString("trace"));
Sofield26->setAccessType(QString("initializeOnly"));
Sofield26->setAppinfo(QString("debug support, default false"));
Sofield26->setType(QString("SFBool"));
Sofield26->setValue(QString("false"));
SoProtoInterface18->addChild(*Sofield26);

SoProtoDeclare17->addChild(*SoProtoInterface18);

SoProtoBody* SoProtoBody27 = new SoProtoBody();
SoSwitch* SoSwitch28 = new SoSwitch();
SoSwitch28->setDEF(QString("VisibilitySwitch"));
SoSwitch28->setWhichChoice(-1);
SoTransform* SoTransform29 = new SoTransform();
SoTransform29->setDEF(QString("PositionTransform"));
SoTransform29->setRotation(new float[]{0.0,1.0,0.0,3.14159});
SoTransform* SoTransform30 = new SoTransform();
SoTransform30->setDEF(QString("OrientationTransform"));
SoShape* SoShape31 = new SoShape();
SoIndexedLineSet* SoIndexedLineSet32 = new SoIndexedLineSet();
SoIndexedLineSet32->setDEF(QString("FrustumLines"));
SoIndexedLineSet32->setCoordIndex(new int32_t[]{0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1}, 24);
SoCoordinate* SoCoordinate33 = new SoCoordinate();
SoCoordinate33->setDEF(QString("FrustumCoordinate"));
SoCoordinate33->setPoint(new float[]{0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}, 24);
SoIndexedLineSet32->setCoord(*SoCoordinate33);

SoShape31->setGeometry(*SoIndexedLineSet32);

SoVRMLAppearance* SoVRMLAppearance34 = new SoVRMLAppearance();
SoMaterial* SoMaterial35 = new SoMaterial();
SoIS* SoIS36 = new SoIS();
Soconnect* Soconnect37 = new Soconnect();
Soconnect37->setNodeField(QString("emissiveColor"));
Soconnect37->setProtoField(QString("lineColor"));
SoIS36->addChild(*Soconnect37);

SoMaterial35->addChild(*SoIS36);

SoVRMLAppearance34->addChild(*SoMaterial35);

SoShape31->addChild(*SoVRMLAppearance34);

SoTransform30->addChild(*SoShape31);

SoShape* SoShape38 = new SoShape();
SoExtrusion* SoExtrusion39 = new SoExtrusion();
SoExtrusion39->setDEF(QString("FrustumExtrusion"));
SoShape38->setGeometry(*SoExtrusion39);

SoVRMLAppearance* SoVRMLAppearance40 = new SoVRMLAppearance();
SoVRMLAppearance40->setDEF(QString("FrustumAppearance"));
SoMaterial* SoMaterial41 = new SoMaterial();
SoIS* SoIS42 = new SoIS();
Soconnect* Soconnect43 = new Soconnect();
Soconnect43->setNodeField(QString("diffuseColor"));
Soconnect43->setProtoField(QString("frustumColor"));
SoIS42->addChild(*Soconnect43);

Soconnect* Soconnect44 = new Soconnect();
Soconnect44->setNodeField(QString("transparency"));
Soconnect44->setProtoField(QString("transparency"));
SoIS42->addChild(*Soconnect44);

SoMaterial41->addChild(*SoIS42);

SoVRMLAppearance40->addChild(*SoMaterial41);

SoShape38->addChild(*SoVRMLAppearance40);

SoTransform30->addChild(*SoShape38);

SoShape* SoShape45 = new SoShape();
SoSphere* SoSphere46 = new SoSphere();
SoSphere46->setRadius(0.08);
SoShape45->setGeometry(*SoSphere46);

SoVRMLAppearance* SoVRMLAppearance47 = new SoVRMLAppearance();
SoVRMLAppearance47->setUSE(QString("FrustumAppearance"));
SoShape45->addChild(*SoVRMLAppearance47);

SoTransform30->addChild(*SoShape45);

SoTransform29->addChild(*SoTransform30);

SoSwitch28->addChild(*SoTransform29);

SoProtoBody27->addChild(*SoSwitch28);

SoScript* SoScript48 = new SoScript();
SoScript48->setDEF(QString("GeometryComputationScript"));
SoScript48->setDirectOutput(true);
SoScript48->setUrl(new QString[]{QString("ViewFrustumPrototypeScript.js")}, 1);
Sofield* Sofield49 = new Sofield();
Sofield49->setName(QString("visible"));
Sofield49->setAccessType(QString("inputOutput"));
Sofield49->setAppinfo(QString("Whether or not frustum geometry is rendered"));
Sofield49->setType(QString("SFBool"));
SoScript48->addChild(*Sofield49);

Sofield* Sofield50 = new Sofield();
Sofield50->setName(QString("visibilitySwitchSelection"));
Sofield50->setAccessType(QString("outputOnly"));
Sofield50->setAppinfo(QString("Adjust Switch selection to make geometry visible or not"));
Sofield50->setType(QString("SFInt32"));
SoScript48->addChild(*Sofield50);

Sofield* Sofield51 = new Sofield();
Sofield51->setName(QString("ViewpointNode"));
Sofield51->setAccessType(QString("initializeOnly"));
Sofield51->setType(QString("SFNode"));
//initialization node (if any) goes here
SoScript48->addChild(*Sofield51);

Sofield* Sofield52 = new Sofield();
Sofield52->setName(QString("NavigationInfoNode"));
Sofield52->setAccessType(QString("initializeOnly"));
Sofield52->setType(QString("SFNode"));
//initialization node (if any) goes here
SoScript48->addChild(*Sofield52);

Sofield* Sofield53 = new Sofield();
Sofield53->setName(QString("FrustumCoordinate"));
Sofield53->setAccessType(QString("initializeOnly"));
Sofield53->setType(QString("SFNode"));
SoCoordinate* SoCoordinate54 = new SoCoordinate();
SoCoordinate54->setUSE(QString("FrustumCoordinate"));
Sofield53->addChild(*SoCoordinate54);

SoScript48->addChild(*Sofield53);

Sofield* Sofield55 = new Sofield();
Sofield55->setName(QString("FrustumExtrusion"));
Sofield55->setAccessType(QString("initializeOnly"));
Sofield55->setType(QString("SFNode"));
SoExtrusion* SoExtrusion56 = new SoExtrusion();
SoExtrusion56->setUSE(QString("FrustumExtrusion"));
Sofield55->addChild(*SoExtrusion56);

SoScript48->addChild(*Sofield55);

Sofield* Sofield57 = new Sofield();
Sofield57->setName(QString("recompute"));
Sofield57->setAccessType(QString("inputOnly"));
Sofield57->setType(QString("SFBool"));
SoScript48->addChild(*Sofield57);

Sofield* Sofield58 = new Sofield();
Sofield58->setName(QString("aspectRatio"));
Sofield58->setAccessType(QString("inputOutput"));
Sofield58->setAppinfo(QString("assumed ratio height/width"));
Sofield58->setType(QString("SFFloat"));
SoScript48->addChild(*Sofield58);

Sofield* Sofield59 = new Sofield();
Sofield59->setName(QString("position_changed"));
Sofield59->setAccessType(QString("outputOnly"));
Sofield59->setType(QString("SFVec3f"));
SoScript48->addChild(*Sofield59);

Sofield* Sofield60 = new Sofield();
Sofield60->setName(QString("orientation_changed"));
Sofield60->setAccessType(QString("outputOnly"));
Sofield60->setType(QString("SFRotation"));
SoScript48->addChild(*Sofield60);

Sofield* Sofield61 = new Sofield();
Sofield61->setName(QString("spine_changed"));
Sofield61->setAccessType(QString("outputOnly"));
Sofield61->setType(QString("MFVec3f"));
SoScript48->addChild(*Sofield61);

Sofield* Sofield62 = new Sofield();
Sofield62->setName(QString("scale_changed"));
Sofield62->setAccessType(QString("outputOnly"));
Sofield62->setType(QString("MFVec2f"));
SoScript48->addChild(*Sofield62);

Sofield* Sofield63 = new Sofield();
Sofield63->setName(QString("point_changed"));
Sofield63->setAccessType(QString("outputOnly"));
Sofield63->setType(QString("MFVec3f"));
SoScript48->addChild(*Sofield63);

Sofield* Sofield64 = new Sofield();
Sofield64->setName(QString("trace"));
Sofield64->setAccessType(QString("initializeOnly"));
Sofield64->setType(QString("SFBool"));
SoScript48->addChild(*Sofield64);

SoIS* SoIS65 = new SoIS();
Soconnect* Soconnect66 = new Soconnect();
Soconnect66->setNodeField(QString("visible"));
Soconnect66->setProtoField(QString("visible"));
SoIS65->addChild(*Soconnect66);

Soconnect* Soconnect67 = new Soconnect();
Soconnect67->setNodeField(QString("ViewpointNode"));
Soconnect67->setProtoField(QString("ViewpointNode"));
SoIS65->addChild(*Soconnect67);

Soconnect* Soconnect68 = new Soconnect();
Soconnect68->setNodeField(QString("NavigationInfoNode"));
Soconnect68->setProtoField(QString("NavigationInfoNode"));
SoIS65->addChild(*Soconnect68);

Soconnect* Soconnect69 = new Soconnect();
Soconnect69->setNodeField(QString("aspectRatio"));
Soconnect69->setProtoField(QString("aspectRatio"));
SoIS65->addChild(*Soconnect69);

Soconnect* Soconnect70 = new Soconnect();
Soconnect70->setNodeField(QString("trace"));
Soconnect70->setProtoField(QString("trace"));
SoIS65->addChild(*Soconnect70);

SoScript48->addChild(*SoIS65);

SoProtoBody27->addChild(*SoScript48);

SoROUTE* SoROUTE71 = new SoROUTE();
SoROUTE71->setFromField(QString("visibilitySwitchSelection"));
SoROUTE71->setFromNode(QString("GeometryComputationScript"));
SoROUTE71->setToField(QString("whichChoice"));
SoROUTE71->setToNode(QString("VisibilitySwitch"));
SoProtoBody27->addChild(*SoROUTE71);

SoROUTE* SoROUTE72 = new SoROUTE();
SoROUTE72->setFromField(QString("position_changed"));
SoROUTE72->setFromNode(QString("GeometryComputationScript"));
SoROUTE72->setToField(QString("translation"));
SoROUTE72->setToNode(QString("PositionTransform"));
SoProtoBody27->addChild(*SoROUTE72);

SoROUTE* SoROUTE73 = new SoROUTE();
SoROUTE73->setFromField(QString("orientation_changed"));
SoROUTE73->setFromNode(QString("GeometryComputationScript"));
SoROUTE73->setToField(QString("rotation"));
SoROUTE73->setToNode(QString("OrientationTransform"));
SoProtoBody27->addChild(*SoROUTE73);

SoROUTE* SoROUTE74 = new SoROUTE();
SoROUTE74->setFromField(QString("spine_changed"));
SoROUTE74->setFromNode(QString("GeometryComputationScript"));
SoROUTE74->setToField(QString("set_spine"));
SoROUTE74->setToNode(QString("FrustumExtrusion"));
SoProtoBody27->addChild(*SoROUTE74);

SoROUTE* SoROUTE75 = new SoROUTE();
SoROUTE75->setFromField(QString("scale_changed"));
SoROUTE75->setFromNode(QString("GeometryComputationScript"));
SoROUTE75->setToField(QString("set_scale"));
SoROUTE75->setToNode(QString("FrustumExtrusion"));
SoProtoBody27->addChild(*SoROUTE75);

SoROUTE* SoROUTE76 = new SoROUTE();
SoROUTE76->setFromField(QString("point_changed"));
SoROUTE76->setFromNode(QString("GeometryComputationScript"));
SoROUTE76->setToField(QString("point"));
SoROUTE76->setToNode(QString("FrustumCoordinate"));
SoProtoBody27->addChild(*SoROUTE76);

SoProtoDeclare17->addChild(*SoProtoBody27);

SoNode15->addChild(*SoProtoDeclare17);

//Example use is in separate scene
SoAnchor* SoAnchor77 = new SoAnchor();
SoAnchor77->setDescription(QString("ViewFrustum Example"));
SoAnchor77->setUrl(new QString[]{QString("ViewFrustumExample.x3d")}, 1);
SoShape* SoShape78 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance79 = new SoVRMLAppearance();
SoMaterial* SoMaterial80 = new SoMaterial();
SoMaterial80->setDiffuseColor(new float[]{0.8,0.4,0.0});
SoVRMLAppearance79->addChild(*SoMaterial80);

SoShape78->addChild(*SoVRMLAppearance79);

SoText* SoText81 = new SoText();
SoText81->setString(new QString[]{QString("ViewFrustumPrototype.x3d"), QString("is a Prototype declaration file."), QString("For an example scene using the prototype,"), QString("click this text and view"), QString("ViewFrustumExample.x3d")}, 5);
SoFontStyle* SoFontStyle82 = new SoFontStyle();
SoFontStyle82->setJustify(new QString[]{QString("MIDDLE"), QString("MIDDLE")}, 2);
SoFontStyle82->setSize(0.8);
SoText81->setFontStyle(*SoFontStyle82);

SoShape78->setGeometry(*SoText81);

SoAnchor77->addChild(*SoShape78);

SoNode15->addChild(*SoAnchor77);

SoSceneManager0->setSceneGraph(*SoNode15);

return 0;
}
