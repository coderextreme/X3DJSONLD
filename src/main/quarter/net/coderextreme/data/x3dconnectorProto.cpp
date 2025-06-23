
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
Someta2->setContent(QString("x3dconnectorProto.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("creator"));
Someta3->setContent(QString("Lost, Doug Sanden I think"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("created"));
Someta4->setContent(QString("Unknown"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("modified"));
Someta5->setContent(QString("July 30 2023"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("generator"));
Someta6->setContent(QString("manual"));
Sohead1->addMeta(*Someta6);

Someta* Someta7 = new Someta();
Someta7->setName(QString("identifier"));
Someta7->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d"));
Sohead1->addMeta(*Someta7);

Someta* Someta8 = new Someta();
Someta8->setName(QString("description"));
Someta8->setContent(QString("a generic proto to connect two objects"));
Sohead1->addMeta(*Someta8);

Someta* Someta9 = new Someta();
Someta9->setName(QString("license"));
Someta9->setContent(QString("https://www.web3d.org/x3d/content/examples/license.html"));
Sohead1->addMeta(*Someta9);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode10 = new SoNode();
SoWorldInfo* SoWorldInfo11 = new SoWorldInfo();
SoWorldInfo11->setTitle(QString("Connector Proto"));
SoNode10->addChild(*SoWorldInfo11);

SoViewpoint* SoViewpoint12 = new SoViewpoint();
SoViewpoint12->setPosition(new float[]{0.0,0.0,5.0});
SoViewpoint12->setDescription(QString("Only Viewpoint"));
SoNode10->addChild(*SoViewpoint12);

SoBackground* SoBackground13 = new SoBackground();
SoBackground13->setSkyColor(new float[]{0.4,0.4,0.4}, 3);
SoNode10->addChild(*SoBackground13);

SoTransform* SoTransform14 = new SoTransform();
SoTransform14->setDEF(QString("G1"));
SoShape* SoShape15 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance16 = new SoVRMLAppearance();
SoMaterial* SoMaterial17 = new SoMaterial();
SoMaterial17->setDiffuseColor(new float[]{0.7,0.2,0.2});
SoVRMLAppearance16->addChild(*SoMaterial17);

SoShape15->addChild(*SoVRMLAppearance16);

SoSphere* SoSphere18 = new SoSphere();
SoSphere18->setRadius(0.1);
SoShape15->setGeometry(*SoSphere18);

SoTransform14->addChild(*SoShape15);

SoPlaneSensor* SoPlaneSensor19 = new SoPlaneSensor();
SoPlaneSensor19->setDescription(QString("Grab to move"));
SoPlaneSensor19->setDEF(QString("PS1"));
SoTransform14->addChild(*SoPlaneSensor19);

SoROUTE* SoROUTE20 = new SoROUTE();
SoROUTE20->setFromNode(QString("PS1"));
SoROUTE20->setFromField(QString("translation_changed"));
SoROUTE20->setToNode(QString("G1"));
SoROUTE20->setToField(QString("set_translation"));
SoTransform14->addChild(*SoROUTE20);

SoNode10->addChild(*SoTransform14);

SoTransform* SoTransform21 = new SoTransform();
SoTransform21->setDEF(QString("G2"));
SoTransform21->setTranslation(new float[]{1.0,-1.0,0.01});
SoShape* SoShape22 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance23 = new SoVRMLAppearance();
SoMaterial* SoMaterial24 = new SoMaterial();
SoMaterial24->setDiffuseColor(new float[]{0.2,0.7,0.2});
SoVRMLAppearance23->addChild(*SoMaterial24);

SoShape22->addChild(*SoVRMLAppearance23);

SoSphere* SoSphere25 = new SoSphere();
SoSphere25->setRadius(0.1);
SoShape22->setGeometry(*SoSphere25);

SoTransform21->addChild(*SoShape22);

SoPlaneSensor* SoPlaneSensor26 = new SoPlaneSensor();
SoPlaneSensor26->setDescription(QString("Grab to move"));
SoPlaneSensor26->setOffset(new float[]{1.0,-1.0,0.01});
SoPlaneSensor26->setDEF(QString("PS2"));
SoTransform21->addChild(*SoPlaneSensor26);

SoROUTE* SoROUTE27 = new SoROUTE();
SoROUTE27->setFromNode(QString("PS2"));
SoROUTE27->setFromField(QString("translation_changed"));
SoROUTE27->setToNode(QString("G2"));
SoROUTE27->setToField(QString("set_translation"));
SoTransform21->addChild(*SoROUTE27);

SoNode10->addChild(*SoTransform21);

SoTransform* SoTransform28 = new SoTransform();
SoTransform28->setDEF(QString("G3"));
SoTransform28->setTranslation(new float[]{1.0,1.0,0.01});
SoShape* SoShape29 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance30 = new SoVRMLAppearance();
SoMaterial* SoMaterial31 = new SoMaterial();
SoMaterial31->setDiffuseColor(new float[]{0.2,0.7,0.2});
SoVRMLAppearance30->addChild(*SoMaterial31);

SoShape29->addChild(*SoVRMLAppearance30);

SoSphere* SoSphere32 = new SoSphere();
SoSphere32->setRadius(0.1);
SoShape29->setGeometry(*SoSphere32);

SoTransform28->addChild(*SoShape29);

SoPlaneSensor* SoPlaneSensor33 = new SoPlaneSensor();
SoPlaneSensor33->setDescription(QString("Grab to move"));
SoPlaneSensor33->setOffset(new float[]{1.0,1.0,0.01});
SoPlaneSensor33->setDEF(QString("PS3"));
SoTransform28->addChild(*SoPlaneSensor33);

SoROUTE* SoROUTE34 = new SoROUTE();
SoROUTE34->setFromNode(QString("PS3"));
SoROUTE34->setFromField(QString("translation_changed"));
SoROUTE34->setToNode(QString("G3"));
SoROUTE34->setToField(QString("set_translation"));
SoTransform28->addChild(*SoROUTE34);

SoNode10->addChild(*SoTransform28);

SoTransform* SoTransform35 = new SoTransform();
SoTransform35->setDEF(QString("G4"));
SoTransform35->setTranslation(new float[]{-1.0,1.0,0.01});
SoShape* SoShape36 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance37 = new SoVRMLAppearance();
SoMaterial* SoMaterial38 = new SoMaterial();
SoMaterial38->setDiffuseColor(new float[]{0.2,0.7,0.2});
SoVRMLAppearance37->addChild(*SoMaterial38);

SoShape36->addChild(*SoVRMLAppearance37);

SoSphere* SoSphere39 = new SoSphere();
SoSphere39->setRadius(0.1);
SoShape36->setGeometry(*SoSphere39);

SoTransform35->addChild(*SoShape36);

SoPlaneSensor* SoPlaneSensor40 = new SoPlaneSensor();
SoPlaneSensor40->setDescription(QString("Grab to move"));
SoPlaneSensor40->setOffset(new float[]{-1.0,1.0,0.01});
SoPlaneSensor40->setDEF(QString("PS4"));
SoTransform35->addChild(*SoPlaneSensor40);

SoROUTE* SoROUTE41 = new SoROUTE();
SoROUTE41->setFromNode(QString("PS4"));
SoROUTE41->setFromField(QString("translation_changed"));
SoROUTE41->setToNode(QString("G4"));
SoROUTE41->setToField(QString("set_translation"));
SoTransform35->addChild(*SoROUTE41);

SoNode10->addChild(*SoTransform35);

SoTransform* SoTransform42 = new SoTransform();
SoTransform42->setDEF(QString("transC1"));
SoTransform* SoTransform43 = new SoTransform();
SoTransform43->setDEF(QString("rotscaleC1"));
SoShape* SoShape44 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance45 = new SoVRMLAppearance();
SoMaterial* SoMaterial46 = new SoMaterial();
SoMaterial46->setDiffuseColor(new float[]{0.2,0.7,0.7});
SoMaterial46->setTransparency(0.5);
SoVRMLAppearance45->addChild(*SoMaterial46);

SoShape44->addChild(*SoVRMLAppearance45);

SoCylinder* SoCylinder47 = new SoCylinder();
SoCylinder47->setRadius(0.05);
SoShape44->setGeometry(*SoCylinder47);

SoTransform43->addChild(*SoShape44);

SoTransform42->addChild(*SoTransform43);

SoNode10->addChild(*SoTransform42);

SoTransform* SoTransform48 = new SoTransform();
SoTransform48->setDEF(QString("transC2"));
SoTransform* SoTransform49 = new SoTransform();
SoTransform49->setDEF(QString("rotscaleC2"));
SoShape* SoShape50 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance51 = new SoVRMLAppearance();
SoMaterial* SoMaterial52 = new SoMaterial();
SoMaterial52->setDiffuseColor(new float[]{0.2,0.7,0.7});
SoMaterial52->setTransparency(0.5);
SoVRMLAppearance51->addChild(*SoMaterial52);

SoShape50->addChild(*SoVRMLAppearance51);

SoCylinder* SoCylinder53 = new SoCylinder();
SoCylinder53->setRadius(0.05);
SoShape50->setGeometry(*SoCylinder53);

SoTransform49->addChild(*SoShape50);

SoTransform48->addChild(*SoTransform49);

SoNode10->addChild(*SoTransform48);

SoTransform* SoTransform54 = new SoTransform();
SoTransform54->setDEF(QString("transC3"));
SoTransform* SoTransform55 = new SoTransform();
SoTransform55->setDEF(QString("rotscaleC3"));
SoShape* SoShape56 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance57 = new SoVRMLAppearance();
SoMaterial* SoMaterial58 = new SoMaterial();
SoMaterial58->setDiffuseColor(new float[]{0.2,0.7,0.7});
SoMaterial58->setTransparency(0.5);
SoVRMLAppearance57->addChild(*SoMaterial58);

SoShape56->addChild(*SoVRMLAppearance57);

SoCylinder* SoCylinder59 = new SoCylinder();
SoCylinder59->setRadius(0.05);
SoShape56->setGeometry(*SoCylinder59);

SoTransform55->addChild(*SoShape56);

SoTransform54->addChild(*SoTransform55);

SoNode10->addChild(*SoTransform54);

SoProtoDeclare* SoProtoDeclare60 = new SoProtoDeclare();
SoProtoDeclare60->setName(QString("x3dconnector"));
SoProtoInterface* SoProtoInterface61 = new SoProtoInterface();
Sofield* Sofield62 = new Sofield();
Sofield62->setName(QString("startnode"));
Sofield62->setAccessType(QString("initializeOnly"));
Sofield62->setType(QString("SFNode"));
SoProtoInterface61->addChild(*Sofield62);

Sofield* Sofield63 = new Sofield();
Sofield63->setName(QString("endnode"));
Sofield63->setAccessType(QString("initializeOnly"));
Sofield63->setType(QString("SFNode"));
SoProtoInterface61->addChild(*Sofield63);

Sofield* Sofield64 = new Sofield();
Sofield64->setName(QString("transnode"));
Sofield64->setAccessType(QString("initializeOnly"));
Sofield64->setType(QString("SFNode"));
SoProtoInterface61->addChild(*Sofield64);

Sofield* Sofield65 = new Sofield();
Sofield65->setName(QString("rotscalenode"));
Sofield65->setAccessType(QString("initializeOnly"));
Sofield65->setType(QString("SFNode"));
SoProtoInterface61->addChild(*Sofield65);

Sofield* Sofield66 = new Sofield();
Sofield66->setName(QString("set_startpoint"));
Sofield66->setAccessType(QString("inputOnly"));
Sofield66->setType(QString("SFVec3f"));
SoProtoInterface61->addChild(*Sofield66);

Sofield* Sofield67 = new Sofield();
Sofield67->setName(QString("set_endpoint"));
Sofield67->setAccessType(QString("inputOnly"));
Sofield67->setType(QString("SFVec3f"));
SoProtoInterface61->addChild(*Sofield67);

SoProtoDeclare60->addChild(*SoProtoInterface61);

SoProtoBody* SoProtoBody68 = new SoProtoBody();
SoScript* SoScript69 = new SoScript();
SoScript69->setDEF(QString("S1"));
SoScript69->setDirectOutput(true);
Sofield* Sofield70 = new Sofield();
Sofield70->setName(QString("startnode"));
Sofield70->setAccessType(QString("initializeOnly"));
Sofield70->setType(QString("SFNode"));
SoScript69->addChild(*Sofield70);

Sofield* Sofield71 = new Sofield();
Sofield71->setName(QString("endnode"));
Sofield71->setAccessType(QString("initializeOnly"));
Sofield71->setType(QString("SFNode"));
SoScript69->addChild(*Sofield71);

Sofield* Sofield72 = new Sofield();
Sofield72->setName(QString("transnode"));
Sofield72->setAccessType(QString("initializeOnly"));
Sofield72->setType(QString("SFNode"));
SoScript69->addChild(*Sofield72);

Sofield* Sofield73 = new Sofield();
Sofield73->setName(QString("rotscalenode"));
Sofield73->setAccessType(QString("initializeOnly"));
Sofield73->setType(QString("SFNode"));
SoScript69->addChild(*Sofield73);

Sofield* Sofield74 = new Sofield();
Sofield74->setName(QString("set_startpoint"));
Sofield74->setAccessType(QString("inputOnly"));
Sofield74->setType(QString("SFVec3f"));
SoScript69->addChild(*Sofield74);

Sofield* Sofield75 = new Sofield();
Sofield75->setName(QString("set_endpoint"));
Sofield75->setAccessType(QString("inputOnly"));
Sofield75->setType(QString("SFVec3f"));
SoScript69->addChild(*Sofield75);

SoIS* SoIS76 = new SoIS();
Soconnect* Soconnect77 = new Soconnect();
Soconnect77->setNodeField(QString("startnode"));
Soconnect77->setProtoField(QString("startnode"));
SoIS76->addChild(*Soconnect77);

Soconnect* Soconnect78 = new Soconnect();
Soconnect78->setNodeField(QString("endnode"));
Soconnect78->setProtoField(QString("endnode"));
SoIS76->addChild(*Soconnect78);

Soconnect* Soconnect79 = new Soconnect();
Soconnect79->setNodeField(QString("transnode"));
Soconnect79->setProtoField(QString("transnode"));
SoIS76->addChild(*Soconnect79);

Soconnect* Soconnect80 = new Soconnect();
Soconnect80->setNodeField(QString("rotscalenode"));
Soconnect80->setProtoField(QString("rotscalenode"));
SoIS76->addChild(*Soconnect80);

Soconnect* Soconnect81 = new Soconnect();
Soconnect81->setNodeField(QString("set_startpoint"));
Soconnect81->setProtoField(QString("set_startpoint"));
SoIS76->addChild(*Soconnect81);

Soconnect* Soconnect82 = new Soconnect();
Soconnect82->setNodeField(QString("set_endpoint"));
Soconnect82->setProtoField(QString("set_endpoint"));
SoIS76->addChild(*Soconnect82);

SoScript69->addChild(*SoIS76);


//SoScript69->setSourceCode(QString("ecmascript:")+
//_T("        function recompute(startpoint,endpoint){")+
//_T("	    if (typeof endpoint === 'undefined') {")+
//_T("		return;")+
//_T("	    }")+
//_T("            var dif = endpoint.subtract(startpoint);")+
//_T("            var dist = dif.length()*0.5;")+
//_T("            var dif2 = dif.multiply(0.5);")+
//_T("            var norm = dif.normalize();")+
//_T("            var transl = startpoint.add(dif2);")+
//_T("	    if (typeof Quaternion !== 'undefined') {")+
//_T("		    return {")+
//_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
//_T("			    translation : transl,")+
//_T("			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)")+
//_T("		    };")+
//_T("	    } else {")+
//_T("		    return {")+
//_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
//_T("			    translation : transl,")+
//_T("			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)")+
//_T("		    };")+
//_T("	    }")+
//_T("	}")+
//_T("	function recompute_and_route(startpoint, endpoint) {")+
//_T("	      var trafo = recompute(startpoint, endpoint);")+
//_T("	      if (trafo) {")+
//_T("		      transnode.translation = trafo.translation;")+
//_T("		      rotscalenode.rotation = trafo.rotation;")+
//_T("		      rotscalenode.scale = trafo.scale;")+
//_T("	      }")+
//_T("	}")+
//_T("        function initialize(){")+
//_T("            recompute_and_route(startnode.translation,endnode.translation);")+
//_T("        }")+
//_T("        function set_startpoint(val,t){")+
//_T("            recompute_and_route(val,endnode.translation);")+
//_T("        }")+
//_T("        function set_endpoint(val,t){")+
//_T("            recompute_and_route(startnode.translation,val);")+
//_T("        }"));
SoProtoBody68->addChild(*SoScript69);

SoProtoDeclare60->addChild(*SoProtoBody68);

SoNode10->addChild(*SoProtoDeclare60);

SoProtoInstance* SoProtoInstance83 = new SoProtoInstance();
SoProtoInstance83->setName(QString("x3dconnector"));
SoProtoInstance83->setDEF(QString("connector1"));
SoField* SoField84 = new SoField();
SoField84->setName(QString("startnode"));
SoTransform* SoTransform85 = new SoTransform();
SoTransform85->setUSE(QString("G1"));
SoField84->addChild(*SoTransform85);

SoProtoInstance83->addChild(*SoField84);

SoField* SoField86 = new SoField();
SoField86->setName(QString("endnode"));
SoTransform* SoTransform87 = new SoTransform();
SoTransform87->setUSE(QString("G2"));
SoField86->addChild(*SoTransform87);

SoProtoInstance83->addChild(*SoField86);

SoField* SoField88 = new SoField();
SoField88->setName(QString("transnode"));
SoTransform* SoTransform89 = new SoTransform();
SoTransform89->setUSE(QString("transC1"));
SoField88->addChild(*SoTransform89);

SoProtoInstance83->addChild(*SoField88);

SoField* SoField90 = new SoField();
SoField90->setName(QString("rotscalenode"));
SoTransform* SoTransform91 = new SoTransform();
SoTransform91->setUSE(QString("rotscaleC1"));
SoField90->addChild(*SoTransform91);

SoProtoInstance83->addChild(*SoField90);

SoField* SoField92 = new SoField();
SoField92->setName(QString("set_startpoint"));
SoField92->setValue(QString("0 0 0"));
SoProtoInstance83->addChild(*SoField92);

SoField* SoField93 = new SoField();
SoField93->setName(QString("set_endpoint"));
SoField93->setValue(QString("0 0 0"));
SoProtoInstance83->addChild(*SoField93);

SoNode10->addChild(*SoProtoInstance83);

SoProtoInstance* SoProtoInstance94 = new SoProtoInstance();
SoProtoInstance94->setName(QString("x3dconnector"));
SoProtoInstance94->setDEF(QString("connector2"));
SoField* SoField95 = new SoField();
SoField95->setName(QString("startnode"));
SoTransform* SoTransform96 = new SoTransform();
SoTransform96->setUSE(QString("G1"));
SoField95->addChild(*SoTransform96);

SoProtoInstance94->addChild(*SoField95);

SoField* SoField97 = new SoField();
SoField97->setName(QString("endnode"));
SoTransform* SoTransform98 = new SoTransform();
SoTransform98->setUSE(QString("G3"));
SoField97->addChild(*SoTransform98);

SoProtoInstance94->addChild(*SoField97);

SoField* SoField99 = new SoField();
SoField99->setName(QString("transnode"));
SoTransform* SoTransform100 = new SoTransform();
SoTransform100->setUSE(QString("transC2"));
SoField99->addChild(*SoTransform100);

SoProtoInstance94->addChild(*SoField99);

SoField* SoField101 = new SoField();
SoField101->setName(QString("rotscalenode"));
SoTransform* SoTransform102 = new SoTransform();
SoTransform102->setUSE(QString("rotscaleC2"));
SoField101->addChild(*SoTransform102);

SoProtoInstance94->addChild(*SoField101);

SoField* SoField103 = new SoField();
SoField103->setName(QString("set_startpoint"));
SoField103->setValue(QString("0 0 0"));
SoProtoInstance94->addChild(*SoField103);

SoField* SoField104 = new SoField();
SoField104->setName(QString("set_endpoint"));
SoField104->setValue(QString("0 0 0"));
SoProtoInstance94->addChild(*SoField104);

SoNode10->addChild(*SoProtoInstance94);

SoProtoInstance* SoProtoInstance105 = new SoProtoInstance();
SoProtoInstance105->setName(QString("x3dconnector"));
SoProtoInstance105->setDEF(QString("connector3"));
SoField* SoField106 = new SoField();
SoField106->setName(QString("startnode"));
SoTransform* SoTransform107 = new SoTransform();
SoTransform107->setUSE(QString("G1"));
SoField106->addChild(*SoTransform107);

SoProtoInstance105->addChild(*SoField106);

SoField* SoField108 = new SoField();
SoField108->setName(QString("endnode"));
SoTransform* SoTransform109 = new SoTransform();
SoTransform109->setUSE(QString("G4"));
SoField108->addChild(*SoTransform109);

SoProtoInstance105->addChild(*SoField108);

SoField* SoField110 = new SoField();
SoField110->setName(QString("transnode"));
SoTransform* SoTransform111 = new SoTransform();
SoTransform111->setUSE(QString("transC3"));
SoField110->addChild(*SoTransform111);

SoProtoInstance105->addChild(*SoField110);

SoField* SoField112 = new SoField();
SoField112->setName(QString("rotscalenode"));
SoTransform* SoTransform113 = new SoTransform();
SoTransform113->setUSE(QString("rotscaleC3"));
SoField112->addChild(*SoTransform113);

SoProtoInstance105->addChild(*SoField112);

SoField* SoField114 = new SoField();
SoField114->setName(QString("set_startpoint"));
SoField114->setValue(QString("0 0 0"));
SoProtoInstance105->addChild(*SoField114);

SoField* SoField115 = new SoField();
SoField115->setName(QString("set_endpoint"));
SoField115->setValue(QString("0 0 0"));
SoProtoInstance105->addChild(*SoField115);

SoNode10->addChild(*SoProtoInstance105);

SoROUTE* SoROUTE116 = new SoROUTE();
SoROUTE116->setFromNode(QString("G1"));
SoROUTE116->setFromField(QString("translation_changed"));
SoROUTE116->setToNode(QString("connector1"));
SoROUTE116->setToField(QString("set_startpoint"));
SoNode10->addChild(*SoROUTE116);

SoROUTE* SoROUTE117 = new SoROUTE();
SoROUTE117->setFromNode(QString("G2"));
SoROUTE117->setFromField(QString("translation_changed"));
SoROUTE117->setToNode(QString("connector1"));
SoROUTE117->setToField(QString("set_endpoint"));
SoNode10->addChild(*SoROUTE117);

SoROUTE* SoROUTE118 = new SoROUTE();
SoROUTE118->setFromNode(QString("G1"));
SoROUTE118->setFromField(QString("translation_changed"));
SoROUTE118->setToNode(QString("connector2"));
SoROUTE118->setToField(QString("set_startpoint"));
SoNode10->addChild(*SoROUTE118);

SoROUTE* SoROUTE119 = new SoROUTE();
SoROUTE119->setFromNode(QString("G3"));
SoROUTE119->setFromField(QString("translation_changed"));
SoROUTE119->setToNode(QString("connector2"));
SoROUTE119->setToField(QString("set_endpoint"));
SoNode10->addChild(*SoROUTE119);

SoROUTE* SoROUTE120 = new SoROUTE();
SoROUTE120->setFromNode(QString("G1"));
SoROUTE120->setFromField(QString("translation_changed"));
SoROUTE120->setToNode(QString("connector3"));
SoROUTE120->setToField(QString("set_startpoint"));
SoNode10->addChild(*SoROUTE120);

SoROUTE* SoROUTE121 = new SoROUTE();
SoROUTE121->setFromNode(QString("G4"));
SoROUTE121->setFromField(QString("translation_changed"));
SoROUTE121->setToNode(QString("connector3"));
SoROUTE121->setToField(QString("set_endpoint"));
SoNode10->addChild(*SoROUTE121);

SoSceneManager0->setSceneGraph(*SoNode10);

return 0;
}
