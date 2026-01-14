
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
SoSceneManager0->setVersion(QString("3.3"));
Sohead* Sohead1 = new Sohead();
Someta* Someta2 = new Someta();
Someta2->setName(QString("title"));
Someta2->setContent(QString("arcold.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("creator"));
Someta3->setContent(QString("John Carlson"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("generator"));
Someta4->setContent(QString("manual"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("identifier"));
Someta5->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/personal/arc.x3d"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("description"));
Someta6->setContent(QString("an attempt to implement an arc in a graph"));
Sohead1->addMeta(*Someta6);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode7 = new SoNode();
SoViewpoint* SoViewpoint8 = new SoViewpoint();
SoViewpoint8->setPosition(new float[]{0.0,0.0,5.0});
SoViewpoint8->setDescription(QString("a moving graph"));
SoNode7->addChild(*SoViewpoint8);

SoBackground* SoBackground9 = new SoBackground();
SoBackground9->setSkyColor(new float[]{0.4,0.4,0.4}, 3);
SoNode7->addChild(*SoBackground9);

SoTransform* SoTransform10 = new SoTransform();
SoTransform10->setDEF(QString("trans1"));
SoTransform* SoTransform11 = new SoTransform();
SoTransform11->setDEF(QString("rotscale1"));
SoShape* SoShape12 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance13 = new SoVRMLAppearance();
SoMaterial* SoMaterial14 = new SoMaterial();
SoMaterial14->setDiffuseColor(new float[]{0.2,0.7,0.7});
SoVRMLAppearance13->addChild(*SoMaterial14);

SoShape12->addChild(*SoVRMLAppearance13);

SoCylinder* SoCylinder15 = new SoCylinder();
SoCylinder15->setRadius(0.1);
SoShape12->setGeometry(*SoCylinder15);

SoTransform11->addChild(*SoShape12);

SoTransform10->addChild(*SoTransform11);

SoNode7->addChild(*SoTransform10);

SoTransform* SoTransform16 = new SoTransform();
SoTransform16->setDEF(QString("trans2"));
SoTransform* SoTransform17 = new SoTransform();
SoTransform17->setDEF(QString("rotscale2"));
SoShape* SoShape18 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance19 = new SoVRMLAppearance();
SoMaterial* SoMaterial20 = new SoMaterial();
SoMaterial20->setDiffuseColor(new float[]{0.2,0.7,0.7});
SoVRMLAppearance19->addChild(*SoMaterial20);

SoShape18->addChild(*SoVRMLAppearance19);

SoCylinder* SoCylinder21 = new SoCylinder();
SoCylinder21->setRadius(0.1);
SoShape18->setGeometry(*SoCylinder21);

SoTransform17->addChild(*SoShape18);

SoTransform16->addChild(*SoTransform17);

SoNode7->addChild(*SoTransform16);

SoTransform* SoTransform22 = new SoTransform();
SoTransform22->setDEF(QString("trans3"));
SoTransform* SoTransform23 = new SoTransform();
SoTransform23->setDEF(QString("rotscale3"));
SoShape* SoShape24 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance25 = new SoVRMLAppearance();
SoMaterial* SoMaterial26 = new SoMaterial();
SoMaterial26->setDiffuseColor(new float[]{0.2,0.7,0.7});
SoVRMLAppearance25->addChild(*SoMaterial26);

SoShape24->addChild(*SoVRMLAppearance25);

SoCylinder* SoCylinder27 = new SoCylinder();
SoCylinder27->setRadius(0.1);
SoShape24->setGeometry(*SoCylinder27);

SoTransform23->addChild(*SoShape24);

SoTransform22->addChild(*SoTransform23);

SoNode7->addChild(*SoTransform22);

SoProtoDeclare* SoProtoDeclare28 = new SoProtoDeclare();
SoProtoDeclare28->setName(QString("point"));
SoProtoInterface* SoProtoInterface29 = new SoProtoInterface();
Sofield* Sofield30 = new Sofield();
Sofield30->setName(QString("translation"));
Sofield30->setAccessType(QString("inputOutput"));
Sofield30->setType(QString("SFVec3f"));
Sofield30->setValue(QString("0 0 0"));
SoProtoInterface29->addChild(*Sofield30);

SoProtoDeclare28->addChild(*SoProtoInterface29);

SoProtoBody* SoProtoBody31 = new SoProtoBody();
SoTransform* SoTransform32 = new SoTransform();
SoTransform32->setDEF(QString("node"));
SoIS* SoIS33 = new SoIS();
Soconnect* Soconnect34 = new Soconnect();
Soconnect34->setNodeField(QString("translation"));
Soconnect34->setProtoField(QString("translation"));
SoIS33->addChild(*Soconnect34);

SoTransform32->addChild(*SoIS33);

SoShape* SoShape35 = new SoShape();
SoSphere* SoSphere36 = new SoSphere();
SoSphere36->setRadius(0.1);
SoShape35->setGeometry(*SoSphere36);

SoVRMLAppearance* SoVRMLAppearance37 = new SoVRMLAppearance();
SoMaterial* SoMaterial38 = new SoMaterial();
SoMaterial38->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance37->addChild(*SoMaterial38);

SoShape35->addChild(*SoVRMLAppearance37);

SoTransform32->addChild(*SoShape35);

SoPositionInterpolator* SoPositionInterpolator39 = new SoPositionInterpolator();
SoPositionInterpolator39->setDEF(QString("PI1"));
SoPositionInterpolator39->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator39->setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
SoTransform32->addChild(*SoPositionInterpolator39);

SoScript* SoScript40 = new SoScript();
SoScript40->setDEF(QString("MB1"));
Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("translation"));
Sofield41->setAccessType(QString("inputOutput"));
Sofield41->setType(QString("SFVec3f"));
Sofield41->setValue(QString("50 50 0"));
SoScript40->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("old"));
Sofield42->setAccessType(QString("inputOutput"));
Sofield42->setType(QString("SFVec3f"));
Sofield42->setValue(QString("0 0 0"));
SoScript40->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("set_location"));
Sofield43->setAccessType(QString("inputOnly"));
Sofield43->setType(QString("SFTime"));
SoScript40->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("keyValue"));
Sofield44->setAccessType(QString("outputOnly"));
Sofield44->setType(QString("MFVec3f"));
SoScript40->addChild(*Sofield44);


//SoScript40->setSourceCode(QString("ecmascript:")+
//_T("		function set_location(value) {")+
//_T("                    old = translation;")+
//_T("		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
//_T("                    keyValue = new MFVec3f([old, translation]);")+
//_T("		    // Browser.println(translation);")+
//_T("		}"));
SoTransform32->addChild(*SoScript40);

SoTimeSensor* SoTimeSensor45 = new SoTimeSensor();
SoTimeSensor45->setDEF(QString("CL1"));
SoTimeSensor45->setCycleInterval(3);
SoTimeSensor45->setLoop(true);
SoTransform32->addChild(*SoTimeSensor45);

SoROUTE* SoROUTE46 = new SoROUTE();
SoROUTE46->setFromNode(QString("CL1"));
SoROUTE46->setFromField(QString("cycleTime"));
SoROUTE46->setToNode(QString("MB1"));
SoROUTE46->setToField(QString("set_location"));
SoTransform32->addChild(*SoROUTE46);

SoROUTE* SoROUTE47 = new SoROUTE();
SoROUTE47->setFromNode(QString("CL1"));
SoROUTE47->setFromField(QString("fraction_changed"));
SoROUTE47->setToNode(QString("PI1"));
SoROUTE47->setToField(QString("set_fraction"));
SoTransform32->addChild(*SoROUTE47);

SoROUTE* SoROUTE48 = new SoROUTE();
SoROUTE48->setFromNode(QString("MB1"));
SoROUTE48->setFromField(QString("keyValue"));
SoROUTE48->setToNode(QString("PI1"));
SoROUTE48->setToField(QString("keyValue"));
SoTransform32->addChild(*SoROUTE48);

SoROUTE* SoROUTE49 = new SoROUTE();
SoROUTE49->setFromNode(QString("PI1"));
SoROUTE49->setFromField(QString("value_changed"));
SoROUTE49->setToNode(QString("node"));
SoROUTE49->setToField(QString("set_translation"));
SoTransform32->addChild(*SoROUTE49);

SoProtoBody31->addChild(*SoTransform32);

SoProtoDeclare28->addChild(*SoProtoBody31);

SoNode7->addChild(*SoProtoDeclare28);

//from doug sanden
SoProtoDeclare* SoProtoDeclare50 = new SoProtoDeclare();
SoProtoDeclare50->setName(QString("x3dconnector"));
SoProtoInterface* SoProtoInterface51 = new SoProtoInterface();
Sofield* Sofield52 = new Sofield();
Sofield52->setName(QString("startnode"));
Sofield52->setAccessType(QString("inputOutput"));
Sofield52->setType(QString("SFNode"));
SoProtoInterface51->addChild(*Sofield52);

Sofield* Sofield53 = new Sofield();
Sofield53->setName(QString("endnode"));
Sofield53->setAccessType(QString("inputOutput"));
Sofield53->setType(QString("SFNode"));
SoProtoInterface51->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setName(QString("transnode"));
Sofield54->setAccessType(QString("inputOutput"));
Sofield54->setType(QString("SFNode"));
SoProtoInterface51->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setName(QString("rotscalenode"));
Sofield55->setAccessType(QString("inputOutput"));
Sofield55->setType(QString("SFNode"));
SoProtoInterface51->addChild(*Sofield55);

Sofield* Sofield56 = new Sofield();
Sofield56->setName(QString("set_startpoint"));
Sofield56->setAccessType(QString("inputOnly"));
Sofield56->setType(QString("SFVec3f"));
SoProtoInterface51->addChild(*Sofield56);

Sofield* Sofield57 = new Sofield();
Sofield57->setName(QString("set_endpoint"));
Sofield57->setAccessType(QString("inputOnly"));
Sofield57->setType(QString("SFVec3f"));
SoProtoInterface51->addChild(*Sofield57);

SoProtoDeclare50->addChild(*SoProtoInterface51);

SoProtoBody* SoProtoBody58 = new SoProtoBody();
SoScript* SoScript59 = new SoScript();
SoScript59->setDEF(QString("S1"));
Sofield* Sofield60 = new Sofield();
Sofield60->setName(QString("startnode"));
Sofield60->setAccessType(QString("inputOutput"));
Sofield60->setType(QString("SFNode"));
SoScript59->addChild(*Sofield60);

Sofield* Sofield61 = new Sofield();
Sofield61->setName(QString("endnode"));
Sofield61->setAccessType(QString("inputOutput"));
Sofield61->setType(QString("SFNode"));
SoScript59->addChild(*Sofield61);

Sofield* Sofield62 = new Sofield();
Sofield62->setName(QString("transnode"));
Sofield62->setAccessType(QString("inputOutput"));
Sofield62->setType(QString("SFNode"));
SoScript59->addChild(*Sofield62);

Sofield* Sofield63 = new Sofield();
Sofield63->setName(QString("rotscalenode"));
Sofield63->setAccessType(QString("inputOutput"));
Sofield63->setType(QString("SFNode"));
SoScript59->addChild(*Sofield63);

Sofield* Sofield64 = new Sofield();
Sofield64->setName(QString("set_startpoint"));
Sofield64->setAccessType(QString("inputOnly"));
Sofield64->setType(QString("SFVec3f"));
SoScript59->addChild(*Sofield64);

Sofield* Sofield65 = new Sofield();
Sofield65->setName(QString("set_endpoint"));
Sofield65->setAccessType(QString("inputOnly"));
Sofield65->setType(QString("SFVec3f"));
SoScript59->addChild(*Sofield65);

SoIS* SoIS66 = new SoIS();
Soconnect* Soconnect67 = new Soconnect();
Soconnect67->setNodeField(QString("startnode"));
Soconnect67->setProtoField(QString("startnode"));
SoIS66->addChild(*Soconnect67);

Soconnect* Soconnect68 = new Soconnect();
Soconnect68->setNodeField(QString("endnode"));
Soconnect68->setProtoField(QString("endnode"));
SoIS66->addChild(*Soconnect68);

Soconnect* Soconnect69 = new Soconnect();
Soconnect69->setNodeField(QString("transnode"));
Soconnect69->setProtoField(QString("transnode"));
SoIS66->addChild(*Soconnect69);

Soconnect* Soconnect70 = new Soconnect();
Soconnect70->setNodeField(QString("rotscalenode"));
Soconnect70->setProtoField(QString("rotscalenode"));
SoIS66->addChild(*Soconnect70);

Soconnect* Soconnect71 = new Soconnect();
Soconnect71->setNodeField(QString("set_startpoint"));
Soconnect71->setProtoField(QString("set_startpoint"));
SoIS66->addChild(*Soconnect71);

Soconnect* Soconnect72 = new Soconnect();
Soconnect72->setNodeField(QString("set_endpoint"));
Soconnect72->setProtoField(QString("set_endpoint"));
SoIS66->addChild(*Soconnect72);

SoScript59->addChild(*SoIS66);


//SoScript59->setSourceCode(QString("ecmascript:")+
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
//_T("		var trafo = recompute(startpoint, endpoint);")+
//_T("		if (typeof trafo !== 'undefined') {")+
//_T("			transnode.translation = trafo.translation;")+
//_T("			rotscalenode.rotation = trafo.rotation;")+
//_T("			rotscalenode.scale = trafo.scale;")+
//_T("		} else {")+
//_T("			Browser.print(\"recompute returned undefined\");")+
//_T("		}")+
//_T("	}")+
//_T("        function initialize(){")+
//_T("            recompute_and_route(startnode.translation,endnode.translation);")+
//_T("        }")+
//_T("        function set_startpoint(val,t){")+
//_T("            recompute_and_route(val || startnode.translation,endnode.translation);")+
//_T("        }")+
//_T("        function set_endpoint(val,t){")+
//_T("            recompute_and_route(startnode.translation,val || endnode.translation);")+
//_T("        }"));
SoProtoBody58->addChild(*SoScript59);

SoProtoDeclare50->addChild(*SoProtoBody58);

SoNode7->addChild(*SoProtoDeclare50);

SoProtoInstance* SoProtoInstance73 = new SoProtoInstance();
SoProtoInstance73->setName(QString("point"));
SoProtoInstance73->setDEF(QString("G1"));
SoNode7->addChild(*SoProtoInstance73);

SoProtoInstance* SoProtoInstance74 = new SoProtoInstance();
SoProtoInstance74->setName(QString("point"));
SoProtoInstance74->setDEF(QString("G2"));
SoNode7->addChild(*SoProtoInstance74);

SoProtoInstance* SoProtoInstance75 = new SoProtoInstance();
SoProtoInstance75->setName(QString("point"));
SoProtoInstance75->setDEF(QString("G3"));
SoNode7->addChild(*SoProtoInstance75);

SoProtoInstance* SoProtoInstance76 = new SoProtoInstance();
SoProtoInstance76->setName(QString("point"));
SoProtoInstance76->setDEF(QString("G4"));
SoNode7->addChild(*SoProtoInstance76);

SoProtoInstance* SoProtoInstance77 = new SoProtoInstance();
SoProtoInstance77->setName(QString("x3dconnector"));
SoProtoInstance77->setDEF(QString("connector1"));
SoField* SoField78 = new SoField();
SoField78->setName(QString("startnode"));
SoProtoInstance* SoProtoInstance79 = new SoProtoInstance();
SoProtoInstance79->setUSE(QString("G1"));
SoField78->addChild(*SoProtoInstance79);

SoProtoInstance77->addChild(*SoField78);

SoField* SoField80 = new SoField();
SoField80->setName(QString("endnode"));
SoProtoInstance* SoProtoInstance81 = new SoProtoInstance();
SoProtoInstance81->setUSE(QString("G2"));
SoField80->addChild(*SoProtoInstance81);

SoProtoInstance77->addChild(*SoField80);

SoField* SoField82 = new SoField();
SoField82->setName(QString("transnode"));
SoTransform* SoTransform83 = new SoTransform();
SoTransform83->setUSE(QString("trans1"));
SoField82->addChild(*SoTransform83);

SoProtoInstance77->addChild(*SoField82);

SoField* SoField84 = new SoField();
SoField84->setName(QString("rotscalenode"));
SoTransform* SoTransform85 = new SoTransform();
SoTransform85->setUSE(QString("rotscale1"));
SoField84->addChild(*SoTransform85);

SoProtoInstance77->addChild(*SoField84);

SoNode7->addChild(*SoProtoInstance77);

SoProtoInstance* SoProtoInstance86 = new SoProtoInstance();
SoProtoInstance86->setName(QString("x3dconnector"));
SoProtoInstance86->setDEF(QString("connector2"));
SoField* SoField87 = new SoField();
SoField87->setName(QString("startnode"));
SoProtoInstance* SoProtoInstance88 = new SoProtoInstance();
SoProtoInstance88->setUSE(QString("G1"));
SoField87->addChild(*SoProtoInstance88);

SoProtoInstance86->addChild(*SoField87);

SoField* SoField89 = new SoField();
SoField89->setName(QString("endnode"));
SoProtoInstance* SoProtoInstance90 = new SoProtoInstance();
SoProtoInstance90->setUSE(QString("G3"));
SoField89->addChild(*SoProtoInstance90);

SoProtoInstance86->addChild(*SoField89);

SoField* SoField91 = new SoField();
SoField91->setName(QString("transnode"));
SoTransform* SoTransform92 = new SoTransform();
SoTransform92->setUSE(QString("trans2"));
SoField91->addChild(*SoTransform92);

SoProtoInstance86->addChild(*SoField91);

SoField* SoField93 = new SoField();
SoField93->setName(QString("rotscalenode"));
SoTransform* SoTransform94 = new SoTransform();
SoTransform94->setUSE(QString("rotscale2"));
SoField93->addChild(*SoTransform94);

SoProtoInstance86->addChild(*SoField93);

SoNode7->addChild(*SoProtoInstance86);

SoProtoInstance* SoProtoInstance95 = new SoProtoInstance();
SoProtoInstance95->setName(QString("x3dconnector"));
SoProtoInstance95->setDEF(QString("connector3"));
SoField* SoField96 = new SoField();
SoField96->setName(QString("startnode"));
SoProtoInstance* SoProtoInstance97 = new SoProtoInstance();
SoProtoInstance97->setUSE(QString("G1"));
SoField96->addChild(*SoProtoInstance97);

SoProtoInstance95->addChild(*SoField96);

SoField* SoField98 = new SoField();
SoField98->setName(QString("endnode"));
SoProtoInstance* SoProtoInstance99 = new SoProtoInstance();
SoProtoInstance99->setUSE(QString("G4"));
SoField98->addChild(*SoProtoInstance99);

SoProtoInstance95->addChild(*SoField98);

SoField* SoField100 = new SoField();
SoField100->setName(QString("transnode"));
SoTransform* SoTransform101 = new SoTransform();
SoTransform101->setUSE(QString("trans3"));
SoField100->addChild(*SoTransform101);

SoProtoInstance95->addChild(*SoField100);

SoField* SoField102 = new SoField();
SoField102->setName(QString("rotscalenode"));
SoTransform* SoTransform103 = new SoTransform();
SoTransform103->setUSE(QString("rotscale3"));
SoField102->addChild(*SoTransform103);

SoProtoInstance95->addChild(*SoField102);

SoNode7->addChild(*SoProtoInstance95);

SoROUTE* SoROUTE104 = new SoROUTE();
SoROUTE104->setFromNode(QString("G1"));
SoROUTE104->setFromField(QString("translation_changed"));
SoROUTE104->setToNode(QString("connector1"));
SoROUTE104->setToField(QString("set_startpoint"));
SoNode7->addChild(*SoROUTE104);

SoROUTE* SoROUTE105 = new SoROUTE();
SoROUTE105->setFromNode(QString("G2"));
SoROUTE105->setFromField(QString("translation_changed"));
SoROUTE105->setToNode(QString("connector1"));
SoROUTE105->setToField(QString("set_endpoint"));
SoNode7->addChild(*SoROUTE105);

SoROUTE* SoROUTE106 = new SoROUTE();
SoROUTE106->setFromNode(QString("G1"));
SoROUTE106->setFromField(QString("translation_changed"));
SoROUTE106->setToNode(QString("connector2"));
SoROUTE106->setToField(QString("set_startpoint"));
SoNode7->addChild(*SoROUTE106);

SoROUTE* SoROUTE107 = new SoROUTE();
SoROUTE107->setFromNode(QString("G3"));
SoROUTE107->setFromField(QString("translation_changed"));
SoROUTE107->setToNode(QString("connector2"));
SoROUTE107->setToField(QString("set_endpoint"));
SoNode7->addChild(*SoROUTE107);

SoROUTE* SoROUTE108 = new SoROUTE();
SoROUTE108->setFromNode(QString("G1"));
SoROUTE108->setFromField(QString("translation_changed"));
SoROUTE108->setToNode(QString("connector3"));
SoROUTE108->setToField(QString("set_startpoint"));
SoNode7->addChild(*SoROUTE108);

SoROUTE* SoROUTE109 = new SoROUTE();
SoROUTE109->setFromNode(QString("G4"));
SoROUTE109->setFromField(QString("translation_changed"));
SoROUTE109->setToNode(QString("connector3"));
SoROUTE109->setToField(QString("set_endpoint"));
SoNode7->addChild(*SoROUTE109);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}
