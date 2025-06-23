
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
Someta2->setContent(QString("ArchPrototype.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("description"));
Someta3->setContent(QString("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js."));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("description"));
Someta4->setContent(QString("Possibility to create shapes related to arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information."));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("creator"));
Someta5->setContent(QString("Michele Foti, Don Brutzman"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("created"));
Someta6->setContent(QString("15 December 2014"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("modified"));
Someta7->setContent(QString("27 November 2015"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("reference"));
Someta8->setContent(QString("ArchModelingDiagrams.pdf"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("reference"));
Someta9->setContent(QString("https://en.wikipedia.org/wiki/Arch"));
Sohead1->addMeta(*Someta9);

Someta* Someta10 = new Someta();
Someta10->setName(QString("identifier"));
Someta10->setContent(QString("http://X3dGraphics.com/examples/X3dForAdvancedModeling/Buildings/ArchPrototype.x3d"));
Sohead1->addMeta(*Someta10);

Someta* Someta11 = new Someta();
Someta11->setName(QString("generator"));
Someta11->setContent(QString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"));
Sohead1->addMeta(*Someta11);

Someta* Someta12 = new Someta();
Someta12->setName(QString("license"));
Someta12->setContent(QString("../license.html"));
Sohead1->addMeta(*Someta12);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode13 = new SoNode();
SoProtoDeclare* SoProtoDeclare14 = new SoProtoDeclare();
SoProtoDeclare14->setName(QString("ArchPrototype"));
SoProtoDeclare14->setAppinfo(QString("Create an arch. Can modify general parameters: clearSpanWidth, riseHeight, depth, topAbutmentHeight, pierWidth, pierHeight. - Possibility to create shapes related to an arch: ArchHalf; IntradosOnly; ArchFilled; ArchHalfFilled; Lintel. See the reference file ArchModelingDiagrams.pdf to find further information. See also ArchPrototypeScript_more_readable.js.js."));
SoProtoInterface* SoProtoInterface15 = new SoProtoInterface();
//COLOR OF ARCH
//INPUT PARAMETERS
//General parameters: measures in meters
//Parameters to create to create shapes related to arch: put true to apply
Sofield* Sofield16 = new Sofield();
Sofield16->setName(QString("diffuseColor"));
Sofield16->setAccessType(QString("inputOutput"));
Sofield16->setAppinfo(QString("color of arch"));
Sofield16->setType(QString("SFColor"));
Sofield16->setValue(QString("0.2 0.8 0.8"));
SoProtoInterface15->addChild(*Sofield16);

Sofield* Sofield17 = new Sofield();
Sofield17->setName(QString("emissiveColor"));
Sofield17->setAccessType(QString("inputOutput"));
Sofield17->setAppinfo(QString("color of arch"));
Sofield17->setType(QString("SFColor"));
Sofield17->setValue(QString("0.2 0.8 0.8"));
SoProtoInterface15->addChild(*Sofield17);

Sofield* Sofield18 = new Sofield();
Sofield18->setName(QString("clearSpanWidth"));
Sofield18->setAccessType(QString("initializeOnly"));
Sofield18->setAppinfo(QString("clearSpanWidth: clearSpanWidth must be double of riseHeight to obtain an half circumference"));
Sofield18->setType(QString("SFFloat"));
Sofield18->setValue(QString("4"));
SoProtoInterface15->addChild(*Sofield18);

Sofield* Sofield19 = new Sofield();
Sofield19->setName(QString("riseHeight"));
Sofield19->setAccessType(QString("initializeOnly"));
Sofield19->setAppinfo(QString("riseHeight: riseHeight must be half of clearSpanWidth to obtain an half circumference"));
Sofield19->setType(QString("SFFloat"));
Sofield19->setValue(QString("2"));
SoProtoInterface15->addChild(*Sofield19);

Sofield* Sofield20 = new Sofield();
Sofield20->setName(QString("depth"));
Sofield20->setAccessType(QString("initializeOnly"));
Sofield20->setAppinfo(QString("depth"));
Sofield20->setType(QString("SFFloat"));
Sofield20->setValue(QString("3"));
SoProtoInterface15->addChild(*Sofield20);

Sofield* Sofield21 = new Sofield();
Sofield21->setName(QString("topAbutmentHeight"));
Sofield21->setAccessType(QString("initializeOnly"));
Sofield21->setAppinfo(QString("topAbutmentHeight:topAbutmentHeight=0 means no topAbutment"));
Sofield21->setType(QString("SFFloat"));
Sofield21->setValue(QString("0.5"));
SoProtoInterface15->addChild(*Sofield21);

Sofield* Sofield22 = new Sofield();
Sofield22->setName(QString("pierWidth"));
Sofield22->setAccessType(QString("initializeOnly"));
Sofield22->setAppinfo(QString("pierWidth:pierWidtht=0 means no pierWidth"));
Sofield22->setType(QString("SFFloat"));
Sofield22->setValue(QString("0.5"));
SoProtoInterface15->addChild(*Sofield22);

Sofield* Sofield23 = new Sofield();
Sofield23->setName(QString("pierHeight"));
Sofield23->setAccessType(QString("initializeOnly"));
Sofield23->setAppinfo(QString("pierHeight: pierHeight=0 means no pierHeight"));
Sofield23->setType(QString("SFFloat"));
Sofield23->setValue(QString("1"));
SoProtoInterface15->addChild(*Sofield23);

Sofield* Sofield24 = new Sofield();
Sofield24->setName(QString("archHalf"));
Sofield24->setAccessType(QString("initializeOnly"));
Sofield24->setAppinfo(QString("archHalf: can modify also clearSpanWidth, riseHeight, depth, pierWidth, pierHeight, topAbutmentHeight, archHalfExtensionWidth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalf width"));
Sofield24->setType(QString("SFBool"));
Sofield24->setValue(QString("false"));
SoProtoInterface15->addChild(*Sofield24);

Sofield* Sofield25 = new Sofield();
Sofield25->setName(QString("archHalfExtensionWidth"));
Sofield25->setAccessType(QString("initializeOnly"));
Sofield25->setAppinfo(QString("archHalfExtensionWidth: measure in meters, use only if archHalf=true, it is the width of the etension of the abutment of the archHalf. See the reference file ArchModelingDiagrams.pdf to find further information."));
Sofield25->setType(QString("SFFloat"));
Sofield25->setValue(QString("0"));
SoProtoInterface15->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setName(QString("onlyIntrados"));
Sofield26->setAccessType(QString("initializeOnly"));
Sofield26->setAppinfo(QString("onlyIntrados: note it is a flat curved surface, can modify also clearSpanWidth, riseHeight, depth at purpose, if needed apply archHalf=true."));
Sofield26->setType(QString("SFBool"));
Sofield26->setValue(QString("false"));
SoProtoInterface15->addChild(*Sofield26);

Sofield* Sofield27 = new Sofield();
Sofield27->setName(QString("archFilled"));
Sofield27->setAccessType(QString("initializeOnly"));
Sofield27->setAppinfo(QString("archFilled: note it is an half cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose."));
Sofield27->setType(QString("SFBool"));
Sofield27->setValue(QString("false"));
SoProtoInterface15->addChild(*Sofield27);

Sofield* Sofield28 = new Sofield();
Sofield28->setName(QString("archHalfFilled"));
Sofield28->setAccessType(QString("initializeOnly"));
Sofield28->setAppinfo(QString("archHalfFilled: note it is a quarter cylinder, can modify also clearSpanWidth, riseHeight, depth at purpose, clearSpanWidth measure refers to a full arc, consider clearSpanWidth/2 for the archHalfFilled width."));
Sofield28->setType(QString("SFBool"));
Sofield28->setValue(QString("false"));
SoProtoInterface15->addChild(*Sofield28);

Sofield* Sofield29 = new Sofield();
Sofield29->setName(QString("lintel"));
Sofield29->setAccessType(QString("initializeOnly"));
Sofield29->setAppinfo(QString("lintel: no arc is rendered, but a lintel: topAbutmentHeight on pierHeight, total height is pierHeight + topAbutmentHeight, if needed apply archHalf=true."));
Sofield29->setType(QString("SFBool"));
Sofield29->setValue(QString("false"));
SoProtoInterface15->addChild(*Sofield29);

SoProtoDeclare14->addChild(*SoProtoInterface15);

SoProtoBody* SoProtoBody30 = new SoProtoBody();
//First node determines node type of this prototype
//IndexedFaceset creates arch
SoTransform* SoTransform31 = new SoTransform();
SoTransform31->setDEF(QString("ArchTransform"));
SoShape* SoShape32 = new SoShape();
SoShape32->setDEF(QString("Arch"));
//note that convex='false' (meaning concave geometry) is crucial for this IFS of a geometric chord to render properly
SoIndexedFaceSet* SoIndexedFaceSet33 = new SoIndexedFaceSet();
SoIndexedFaceSet33->setDEF(QString("ArchIndex"));
SoIndexedFaceSet33->setConvex(false);
SoIndexedFaceSet33->setSolid(false);
SoCoordinate* SoCoordinate34 = new SoCoordinate();
SoCoordinate34->setDEF(QString("ArchChord"));
SoIndexedFaceSet33->setCoord(*SoCoordinate34);

SoShape32->setGeometry(*SoIndexedFaceSet33);

SoVRMLAppearance* SoVRMLAppearance35 = new SoVRMLAppearance();
SoMaterial* SoMaterial36 = new SoMaterial();
SoMaterial36->setDEF(QString("MaterialNode"));
SoIS* SoIS37 = new SoIS();
Soconnect* Soconnect38 = new Soconnect();
Soconnect38->setNodeField(QString("emissiveColor"));
Soconnect38->setProtoField(QString("emissiveColor"));
SoIS37->addChild(*Soconnect38);

Soconnect* Soconnect39 = new Soconnect();
Soconnect39->setNodeField(QString("diffuseColor"));
Soconnect39->setProtoField(QString("diffuseColor"));
SoIS37->addChild(*Soconnect39);

SoMaterial36->addChild(*SoIS37);

SoVRMLAppearance35->addChild(*SoMaterial36);

SoShape32->addChild(*SoVRMLAppearance35);

SoTransform31->addChild(*SoShape32);

SoProtoBody30->addChild(*SoTransform31);

//Subsequent nodes do not render, but still must be a valid X3D subgraph
//This embedded Script provides the X3D author with additional visibility and control over prototype inputs and outputs
SoScript* SoScript40 = new SoScript();
SoScript40->setDEF(QString("ArchPrototypeScript"));
SoScript40->setUrl(new QString[]{QString("../node/ArchPrototypeScript.js"), QString("https://coderextreme.net/X3DJSONLD/src/main/node/ArchPrototypeScript.js")}, 2);
//INPUT PARAMETERS
//General parameters
//Parameters to create to create shapes related to arch: put true to apply
//OUTPUT PARAMETERS
Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("clearSpanWidth"));
Sofield41->setAccessType(QString("initializeOnly"));
Sofield41->setAppinfo(QString("user or default input for clearSpanWidth parameter"));
Sofield41->setType(QString("SFFloat"));
SoScript40->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("riseHeight"));
Sofield42->setAccessType(QString("initializeOnly"));
Sofield42->setAppinfo(QString("user or default input for riseHeight parameter"));
Sofield42->setType(QString("SFFloat"));
SoScript40->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("depth"));
Sofield43->setAccessType(QString("initializeOnly"));
Sofield43->setAppinfo(QString("user or default input for depth parameter"));
Sofield43->setType(QString("SFFloat"));
SoScript40->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("topAbutmentHeight"));
Sofield44->setAccessType(QString("initializeOnly"));
Sofield44->setAppinfo(QString("user or default input for topAbutmentHeight parameter"));
Sofield44->setType(QString("SFFloat"));
SoScript40->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("pierWidth"));
Sofield45->setAccessType(QString("initializeOnly"));
Sofield45->setAppinfo(QString("user or default input for pierWidth parameter"));
Sofield45->setType(QString("SFFloat"));
SoScript40->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setName(QString("pierHeight"));
Sofield46->setAccessType(QString("initializeOnly"));
Sofield46->setAppinfo(QString("user or default input for pierHeight parameter"));
Sofield46->setType(QString("SFFloat"));
SoScript40->addChild(*Sofield46);

Sofield* Sofield47 = new Sofield();
Sofield47->setName(QString("archHalf"));
Sofield47->setAccessType(QString("initializeOnly"));
Sofield47->setAppinfo(QString("user or default input for archHalf parameter"));
Sofield47->setType(QString("SFBool"));
SoScript40->addChild(*Sofield47);

Sofield* Sofield48 = new Sofield();
Sofield48->setName(QString("archHalfExtensionWidth"));
Sofield48->setAccessType(QString("initializeOnly"));
Sofield48->setAppinfo(QString("user or default input for archHalfExtensionWidth parameter"));
Sofield48->setType(QString("SFFloat"));
SoScript40->addChild(*Sofield48);

Sofield* Sofield49 = new Sofield();
Sofield49->setName(QString("onlyIntrados"));
Sofield49->setAccessType(QString("initializeOnly"));
Sofield49->setAppinfo(QString("user or default input for onlyIntrados parameter"));
Sofield49->setType(QString("SFBool"));
SoScript40->addChild(*Sofield49);

Sofield* Sofield50 = new Sofield();
Sofield50->setName(QString("archFilled"));
Sofield50->setAccessType(QString("initializeOnly"));
Sofield50->setAppinfo(QString("user or default input for archFilled parameter"));
Sofield50->setType(QString("SFBool"));
SoScript40->addChild(*Sofield50);

Sofield* Sofield51 = new Sofield();
Sofield51->setName(QString("archHalfFilled"));
Sofield51->setAccessType(QString("initializeOnly"));
Sofield51->setAppinfo(QString("user or default input for archHalfFilled parameter"));
Sofield51->setType(QString("SFBool"));
SoScript40->addChild(*Sofield51);

Sofield* Sofield52 = new Sofield();
Sofield52->setName(QString("lintel"));
Sofield52->setAccessType(QString("initializeOnly"));
Sofield52->setAppinfo(QString("user or default input for lintel parameter"));
Sofield52->setType(QString("SFBool"));
SoScript40->addChild(*Sofield52);

Sofield* Sofield53 = new Sofield();
Sofield53->setName(QString("computedScale"));
Sofield53->setAccessType(QString("outputOnly"));
Sofield53->setAppinfo(QString("computedScale: modify scale field - NOTE it is not used to modify the whole arch, but to modify clearSpanWidth, riseHeight, depth. It does not affect topAbutmentHeight, pierWidth, pierHeight, archHalfExtensionWidth"));
Sofield53->setType(QString("SFVec3f"));
SoScript40->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setName(QString("pointOut"));
Sofield54->setAccessType(QString("outputOnly"));
Sofield54->setAppinfo(QString("send computed points to the Coordinate node"));
Sofield54->setType(QString("MFVec3f"));
SoScript40->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setName(QString("indexOut"));
Sofield55->setAccessType(QString("outputOnly"));
Sofield55->setAppinfo(QString("send computed indices to the IndexedFaceSet node"));
Sofield55->setType(QString("MFInt32"));
SoScript40->addChild(*Sofield55);

SoIS* SoIS56 = new SoIS();
Soconnect* Soconnect57 = new Soconnect();
Soconnect57->setNodeField(QString("clearSpanWidth"));
Soconnect57->setProtoField(QString("clearSpanWidth"));
SoIS56->addChild(*Soconnect57);

Soconnect* Soconnect58 = new Soconnect();
Soconnect58->setNodeField(QString("riseHeight"));
Soconnect58->setProtoField(QString("riseHeight"));
SoIS56->addChild(*Soconnect58);

Soconnect* Soconnect59 = new Soconnect();
Soconnect59->setNodeField(QString("depth"));
Soconnect59->setProtoField(QString("depth"));
SoIS56->addChild(*Soconnect59);

Soconnect* Soconnect60 = new Soconnect();
Soconnect60->setNodeField(QString("pierWidth"));
Soconnect60->setProtoField(QString("pierWidth"));
SoIS56->addChild(*Soconnect60);

Soconnect* Soconnect61 = new Soconnect();
Soconnect61->setNodeField(QString("topAbutmentHeight"));
Soconnect61->setProtoField(QString("topAbutmentHeight"));
SoIS56->addChild(*Soconnect61);

Soconnect* Soconnect62 = new Soconnect();
Soconnect62->setNodeField(QString("pierHeight"));
Soconnect62->setProtoField(QString("pierHeight"));
SoIS56->addChild(*Soconnect62);

Soconnect* Soconnect63 = new Soconnect();
Soconnect63->setNodeField(QString("archHalf"));
Soconnect63->setProtoField(QString("archHalf"));
SoIS56->addChild(*Soconnect63);

Soconnect* Soconnect64 = new Soconnect();
Soconnect64->setNodeField(QString("archHalfExtensionWidth"));
Soconnect64->setProtoField(QString("archHalfExtensionWidth"));
SoIS56->addChild(*Soconnect64);

Soconnect* Soconnect65 = new Soconnect();
Soconnect65->setNodeField(QString("onlyIntrados"));
Soconnect65->setProtoField(QString("onlyIntrados"));
SoIS56->addChild(*Soconnect65);

Soconnect* Soconnect66 = new Soconnect();
Soconnect66->setNodeField(QString("archFilled"));
Soconnect66->setProtoField(QString("archFilled"));
SoIS56->addChild(*Soconnect66);

Soconnect* Soconnect67 = new Soconnect();
Soconnect67->setNodeField(QString("archHalfFilled"));
Soconnect67->setProtoField(QString("archHalfFilled"));
SoIS56->addChild(*Soconnect67);

Soconnect* Soconnect68 = new Soconnect();
Soconnect68->setNodeField(QString("lintel"));
Soconnect68->setProtoField(QString("lintel"));
SoIS56->addChild(*Soconnect68);

SoScript40->addChild(*SoIS56);

SoProtoBody30->addChild(*SoScript40);

SoROUTE* SoROUTE69 = new SoROUTE();
SoROUTE69->setFromField(QString("computedScale"));
SoROUTE69->setFromNode(QString("ArchPrototypeScript"));
SoROUTE69->setToField(QString("scale"));
SoROUTE69->setToNode(QString("ArchTransform"));
SoProtoBody30->addChild(*SoROUTE69);

SoROUTE* SoROUTE70 = new SoROUTE();
SoROUTE70->setFromField(QString("pointOut"));
SoROUTE70->setFromNode(QString("ArchPrototypeScript"));
SoROUTE70->setToField(QString("point"));
SoROUTE70->setToNode(QString("ArchChord"));
SoProtoBody30->addChild(*SoROUTE70);

SoROUTE* SoROUTE71 = new SoROUTE();
SoROUTE71->setFromField(QString("indexOut"));
SoROUTE71->setFromNode(QString("ArchPrototypeScript"));
SoROUTE71->setToField(QString("set_coordIndex"));
SoROUTE71->setToNode(QString("ArchIndex"));
SoProtoBody30->addChild(*SoROUTE71);

SoProtoDeclare14->addChild(*SoProtoBody30);

SoNode13->addChild(*SoProtoDeclare14);

SoProtoInstance* SoProtoInstance72 = new SoProtoInstance();
SoProtoInstance72->setName(QString("ArchPrototype"));
SoProtoInstance72->setDEF(QString("ArchInstance"));
SoField* SoField73 = new SoField();
SoField73->setName(QString("diffuseColor"));
SoField73->setValue(QString("0.5 0.3 0.6"));
SoProtoInstance72->addChild(*SoField73);

SoField* SoField74 = new SoField();
SoField74->setName(QString("emissiveColor"));
SoField74->setValue(QString("0.5 0.3 0.6"));
SoProtoInstance72->addChild(*SoField74);

SoField* SoField75 = new SoField();
SoField75->setName(QString("clearSpanWidth"));
SoField75->setValue(QString("5"));
SoProtoInstance72->addChild(*SoField75);

SoField* SoField76 = new SoField();
SoField76->setName(QString("riseHeight"));
SoField76->setValue(QString("2.5"));
SoProtoInstance72->addChild(*SoField76);

SoField* SoField77 = new SoField();
SoField77->setName(QString("depth"));
SoField77->setValue(QString("2"));
SoProtoInstance72->addChild(*SoField77);

SoField* SoField78 = new SoField();
SoField78->setName(QString("topAbutmentHeight"));
SoField78->setValue(QString("0.6"));
SoProtoInstance72->addChild(*SoField78);

SoField* SoField79 = new SoField();
SoField79->setName(QString("pierWidth"));
SoField79->setValue(QString("1"));
SoProtoInstance72->addChild(*SoField79);

SoField* SoField80 = new SoField();
SoField80->setName(QString("pierHeight"));
SoField80->setValue(QString("2"));
SoProtoInstance72->addChild(*SoField80);

SoNode13->addChild(*SoProtoInstance72);

//Add any ROUTEs here that connect ProtoInstance to/from prior nodes in Scene (and outside of ProtoDeclare)
SoInline* SoInline81 = new SoInline();
SoInline81->setDEF(QString("CoordinateAxes"));
SoInline81->setUrl(new QString[]{QString("../data/CoordinateAxes.x3d")}, 1);
SoNode13->addChild(*SoInline81);

SoSceneManager0->setSceneGraph(*SoNode13);

return 0;
}
