
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
Someta2->setContent(QString("arc1.x3d"));
Sohead1->addMeta(*Someta2);

Someta* Someta3 = new Someta();
Someta3->setName(QString("creator"));
Someta3->setContent(QString("Lost, Doug Sanden I think"));
Sohead1->addMeta(*Someta3);

Someta* Someta4 = new Someta();
Someta4->setName(QString("generator"));
Someta4->setContent(QString("manual"));
Sohead1->addMeta(*Someta4);

Someta* Someta5 = new Someta();
Someta5->setName(QString("identifier"));
Someta5->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d"));
Sohead1->addMeta(*Someta5);

Someta* Someta6 = new Someta();
Someta6->setName(QString("description"));
Someta6->setContent(QString("a generic proto to connect two objects"));
Sohead1->addMeta(*Someta6);

SoSceneManager0->setHead(*Sohead1);

SoNode* SoNode7 = new SoNode();
SoViewpoint* SoViewpoint8 = new SoViewpoint();
SoViewpoint8->setPosition(new float[]{0.0,0.0,5.0});
SoViewpoint8->setDescription(QString("Only Viewpoint"));
SoNode7->addChild(*SoViewpoint8);

SoBackground* SoBackground9 = new SoBackground();
SoBackground9->setSkyColor(new float[]{0.4,0.4,0.4}, 3);
SoNode7->addChild(*SoBackground9);

SoProtoDeclare* SoProtoDeclare10 = new SoProtoDeclare();
SoProtoDeclare10->setName(QString("point"));
SoProtoInterface* SoProtoInterface11 = new SoProtoInterface();
Sofield* Sofield12 = new Sofield();
Sofield12->setName(QString("translation"));
Sofield12->setAccessType(QString("inputOutput"));
Sofield12->setType(QString("SFVec3f"));
Sofield12->setValue(QString("0 0 0"));
SoProtoInterface11->addChild(*Sofield12);

SoProtoDeclare10->addChild(*SoProtoInterface11);

SoProtoBody* SoProtoBody13 = new SoProtoBody();
SoTransform* SoTransform14 = new SoTransform();
SoTransform14->setDEF(QString("node"));
SoIS* SoIS15 = new SoIS();
Soconnect* Soconnect16 = new Soconnect();
Soconnect16->setNodeField(QString("translation"));
Soconnect16->setProtoField(QString("translation"));
SoIS15->addChild(*Soconnect16);

SoTransform14->addChild(*SoIS15);

SoShape* SoShape17 = new SoShape();
SoSphere* SoSphere18 = new SoSphere();
SoSphere18->setRadius(0.1);
SoShape17->setGeometry(*SoSphere18);

SoVRMLAppearance* SoVRMLAppearance19 = new SoVRMLAppearance();
SoMaterial* SoMaterial20 = new SoMaterial();
SoMaterial20->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance19->addChild(*SoMaterial20);

SoShape17->addChild(*SoVRMLAppearance19);

SoTransform14->addChild(*SoShape17);

SoPositionInterpolator* SoPositionInterpolator21 = new SoPositionInterpolator();
SoPositionInterpolator21->setDEF(QString("PI1"));
SoPositionInterpolator21->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator21->setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
SoTransform14->addChild(*SoPositionInterpolator21);

SoScript* SoScript22 = new SoScript();
SoScript22->setDEF(QString("MB1"));
Sofield* Sofield23 = new Sofield();
Sofield23->setName(QString("translation"));
Sofield23->setAccessType(QString("inputOutput"));
Sofield23->setType(QString("SFVec3f"));
Sofield23->setValue(QString("50 50 0"));
SoScript22->addChild(*Sofield23);

Sofield* Sofield24 = new Sofield();
Sofield24->setName(QString("old"));
Sofield24->setAccessType(QString("inputOutput"));
Sofield24->setType(QString("SFVec3f"));
Sofield24->setValue(QString("0 0 0"));
SoScript22->addChild(*Sofield24);

Sofield* Sofield25 = new Sofield();
Sofield25->setName(QString("set_location"));
Sofield25->setAccessType(QString("inputOnly"));
Sofield25->setType(QString("SFTime"));
SoScript22->addChild(*Sofield25);

Sofield* Sofield26 = new Sofield();
Sofield26->setName(QString("keyValue"));
Sofield26->setAccessType(QString("inputOutput"));
Sofield26->setType(QString("MFVec3f"));
Sofield26->setValue(QString("0 0 0 0 5 0"));
SoScript22->addChild(*Sofield26);


//SoScript22->setSourceCode(QString("ecmascript:")+
//_T("               function set_location(value) {")+
//_T("                    old = translation;")+
//_T("                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
//_T("                    keyValue = new MFVec3f([old, translation]);")+
//_T("               }"));
SoTransform14->addChild(*SoScript22);

SoTimeSensor* SoTimeSensor27 = new SoTimeSensor();
SoTimeSensor27->setDEF(QString("CL1"));
SoTimeSensor27->setCycleInterval(3);
SoTimeSensor27->setLoop(true);
SoTransform14->addChild(*SoTimeSensor27);

SoROUTE* SoROUTE28 = new SoROUTE();
SoROUTE28->setFromNode(QString("CL1"));
SoROUTE28->setFromField(QString("cycleTime"));
SoROUTE28->setToNode(QString("MB1"));
SoROUTE28->setToField(QString("set_location"));
SoTransform14->addChild(*SoROUTE28);

SoROUTE* SoROUTE29 = new SoROUTE();
SoROUTE29->setFromNode(QString("CL1"));
SoROUTE29->setFromField(QString("fraction_changed"));
SoROUTE29->setToNode(QString("PI1"));
SoROUTE29->setToField(QString("set_fraction"));
SoTransform14->addChild(*SoROUTE29);

SoROUTE* SoROUTE30 = new SoROUTE();
SoROUTE30->setFromNode(QString("MB1"));
SoROUTE30->setFromField(QString("keyValue"));
SoROUTE30->setToNode(QString("PI1"));
SoROUTE30->setToField(QString("keyValue"));
SoTransform14->addChild(*SoROUTE30);

SoROUTE* SoROUTE31 = new SoROUTE();
SoROUTE31->setFromNode(QString("PI1"));
SoROUTE31->setFromField(QString("value_changed"));
SoROUTE31->setToNode(QString("node"));
SoROUTE31->setToField(QString("set_translation"));
SoTransform14->addChild(*SoROUTE31);

SoROUTE* SoROUTE32 = new SoROUTE();
SoROUTE32->setFromNode(QString("MB1"));
SoROUTE32->setFromField(QString("translation_changed"));
SoROUTE32->setToNode(QString("node"));
SoROUTE32->setToField(QString("set_translation"));
SoTransform14->addChild(*SoROUTE32);

SoProtoBody13->addChild(*SoTransform14);

SoProtoDeclare10->addChild(*SoProtoBody13);

SoNode7->addChild(*SoProtoDeclare10);

SoTransform* SoTransform33 = new SoTransform();
SoTransform33->setDEF(QString("G1"));
SoProtoInstance* SoProtoInstance34 = new SoProtoInstance();
SoProtoInstance34->setName(QString("point"));
SoTransform33->addChild(*SoProtoInstance34);

SoNode7->addChild(*SoTransform33);

SoTransform* SoTransform35 = new SoTransform();
SoTransform35->setDEF(QString("G2"));
SoProtoInstance* SoProtoInstance36 = new SoProtoInstance();
SoProtoInstance36->setName(QString("point"));
SoTransform35->addChild(*SoProtoInstance36);

SoNode7->addChild(*SoTransform35);

SoTransform* SoTransform37 = new SoTransform();
SoTransform37->setDEF(QString("transC1"));
SoTransform* SoTransform38 = new SoTransform();
SoTransform38->setDEF(QString("rotscaleC1"));
SoShape* SoShape39 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance40 = new SoVRMLAppearance();
SoMaterial* SoMaterial41 = new SoMaterial();
SoMaterial41->setDiffuseColor(new float[]{0.2,0.7,0.7});
SoMaterial41->setTransparency(0.5);
SoVRMLAppearance40->addChild(*SoMaterial41);

SoShape39->addChild(*SoVRMLAppearance40);

SoCylinder* SoCylinder42 = new SoCylinder();
SoCylinder42->setRadius(0.05);
SoShape39->setGeometry(*SoCylinder42);

SoTransform38->addChild(*SoShape39);

SoTransform37->addChild(*SoTransform38);

SoNode7->addChild(*SoTransform37);

SoProtoDeclare* SoProtoDeclare43 = new SoProtoDeclare();
SoProtoDeclare43->setName(QString("x3dconnector"));
SoProtoInterface* SoProtoInterface44 = new SoProtoInterface();
Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("startnode"));
Sofield45->setAccessType(QString("initializeOnly"));
Sofield45->setType(QString("SFNode"));
SoProtoInterface44->addChild(*Sofield45);

Sofield* Sofield46 = new Sofield();
Sofield46->setName(QString("endnode"));
Sofield46->setAccessType(QString("initializeOnly"));
Sofield46->setType(QString("SFNode"));
SoProtoInterface44->addChild(*Sofield46);

Sofield* Sofield47 = new Sofield();
Sofield47->setName(QString("transnode"));
Sofield47->setAccessType(QString("inputOutput"));
Sofield47->setType(QString("SFNode"));
SoProtoInterface44->addChild(*Sofield47);

Sofield* Sofield48 = new Sofield();
Sofield48->setName(QString("rotscalenode"));
Sofield48->setAccessType(QString("inputOutput"));
Sofield48->setType(QString("SFNode"));
SoProtoInterface44->addChild(*Sofield48);

Sofield* Sofield49 = new Sofield();
Sofield49->setName(QString("set_startpoint"));
Sofield49->setAccessType(QString("inputOnly"));
Sofield49->setType(QString("SFVec3f"));
SoProtoInterface44->addChild(*Sofield49);

Sofield* Sofield50 = new Sofield();
Sofield50->setName(QString("set_endpoint"));
Sofield50->setAccessType(QString("inputOnly"));
Sofield50->setType(QString("SFVec3f"));
SoProtoInterface44->addChild(*Sofield50);

SoProtoDeclare43->addChild(*SoProtoInterface44);

SoProtoBody* SoProtoBody51 = new SoProtoBody();
SoScript* SoScript52 = new SoScript();
SoScript52->setDEF(QString("S1"));
Sofield* Sofield53 = new Sofield();
Sofield53->setName(QString("startnode"));
Sofield53->setAccessType(QString("initializeOnly"));
Sofield53->setType(QString("SFNode"));
SoScript52->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setName(QString("endnode"));
Sofield54->setAccessType(QString("initializeOnly"));
Sofield54->setType(QString("SFNode"));
SoScript52->addChild(*Sofield54);

Sofield* Sofield55 = new Sofield();
Sofield55->setName(QString("transnode"));
Sofield55->setAccessType(QString("initializeOnly"));
Sofield55->setType(QString("SFNode"));
SoScript52->addChild(*Sofield55);

Sofield* Sofield56 = new Sofield();
Sofield56->setName(QString("rotscalenode"));
Sofield56->setAccessType(QString("initializeOnly"));
Sofield56->setType(QString("SFNode"));
SoScript52->addChild(*Sofield56);

Sofield* Sofield57 = new Sofield();
Sofield57->setName(QString("set_startpoint"));
Sofield57->setAccessType(QString("inputOnly"));
Sofield57->setType(QString("SFVec3f"));
SoScript52->addChild(*Sofield57);

Sofield* Sofield58 = new Sofield();
Sofield58->setName(QString("set_endpoint"));
Sofield58->setAccessType(QString("inputOnly"));
Sofield58->setType(QString("SFVec3f"));
SoScript52->addChild(*Sofield58);

SoIS* SoIS59 = new SoIS();
Soconnect* Soconnect60 = new Soconnect();
Soconnect60->setNodeField(QString("startnode"));
Soconnect60->setProtoField(QString("startnode"));
SoIS59->addChild(*Soconnect60);

Soconnect* Soconnect61 = new Soconnect();
Soconnect61->setNodeField(QString("endnode"));
Soconnect61->setProtoField(QString("endnode"));
SoIS59->addChild(*Soconnect61);

Soconnect* Soconnect62 = new Soconnect();
Soconnect62->setNodeField(QString("transnode"));
Soconnect62->setProtoField(QString("transnode"));
SoIS59->addChild(*Soconnect62);

Soconnect* Soconnect63 = new Soconnect();
Soconnect63->setNodeField(QString("rotscalenode"));
Soconnect63->setProtoField(QString("rotscalenode"));
SoIS59->addChild(*Soconnect63);

Soconnect* Soconnect64 = new Soconnect();
Soconnect64->setNodeField(QString("set_startpoint"));
Soconnect64->setProtoField(QString("set_startpoint"));
SoIS59->addChild(*Soconnect64);

Soconnect* Soconnect65 = new Soconnect();
Soconnect65->setNodeField(QString("set_endpoint"));
Soconnect65->setProtoField(QString("set_endpoint"));
SoIS59->addChild(*Soconnect65);

SoScript52->addChild(*SoIS59);


//SoScript52->setSourceCode(QString("ecmascript:")+
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
SoProtoBody51->addChild(*SoScript52);

SoProtoDeclare43->addChild(*SoProtoBody51);

SoNode7->addChild(*SoProtoDeclare43);

SoProtoInstance* SoProtoInstance66 = new SoProtoInstance();
SoProtoInstance66->setName(QString("x3dconnector"));
SoProtoInstance66->setDEF(QString("connector1"));
SoField* SoField67 = new SoField();
SoField67->setName(QString("startnode"));
SoTransform* SoTransform68 = new SoTransform();
SoTransform68->setUSE(QString("G1"));
SoField67->addChild(*SoTransform68);

SoProtoInstance66->addChild(*SoField67);

SoField* SoField69 = new SoField();
SoField69->setName(QString("endnode"));
SoTransform* SoTransform70 = new SoTransform();
SoTransform70->setUSE(QString("G2"));
SoField69->addChild(*SoTransform70);

SoProtoInstance66->addChild(*SoField69);

SoField* SoField71 = new SoField();
SoField71->setName(QString("transnode"));
SoTransform* SoTransform72 = new SoTransform();
SoTransform72->setUSE(QString("transC1"));
SoField71->addChild(*SoTransform72);

SoProtoInstance66->addChild(*SoField71);

SoField* SoField73 = new SoField();
SoField73->setName(QString("rotscalenode"));
SoTransform* SoTransform74 = new SoTransform();
SoTransform74->setUSE(QString("rotscaleC1"));
SoField73->addChild(*SoTransform74);

SoProtoInstance66->addChild(*SoField73);

SoField* SoField75 = new SoField();
SoField75->setName(QString("set_startpoint"));
SoProtoInstance66->addChild(*SoField75);

SoField* SoField76 = new SoField();
SoField76->setName(QString("set_endpoint"));
SoProtoInstance66->addChild(*SoField76);

SoNode7->addChild(*SoProtoInstance66);

SoROUTE* SoROUTE77 = new SoROUTE();
SoROUTE77->setFromNode(QString("G1"));
SoROUTE77->setFromField(QString("translation_changed"));
SoROUTE77->setToNode(QString("connector1"));
SoROUTE77->setToField(QString("set_startpoint"));
SoNode7->addChild(*SoROUTE77);

SoROUTE* SoROUTE78 = new SoROUTE();
SoROUTE78->setFromNode(QString("G2"));
SoROUTE78->setFromField(QString("translation_changed"));
SoROUTE78->setToNode(QString("connector1"));
SoROUTE78->setToField(QString("set_endpoint"));
SoNode7->addChild(*SoROUTE78);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}
