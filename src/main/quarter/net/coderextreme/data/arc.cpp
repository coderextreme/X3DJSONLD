
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
Someta2->setContent(QString("arc.x3d"));
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
Someta5->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d"));
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
//_T("		function set_location(value) {")+
//_T("                    old = translation;")+
//_T("		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
//_T("                    keyValue = new MFVec3f([old, translation]);")+
//_T("		    // Browser.println(keyValue);")+
//_T("		}"));
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

SoProtoBody13->addChild(*SoTransform14);

SoProtoDeclare10->addChild(*SoProtoBody13);

SoNode7->addChild(*SoProtoDeclare10);

SoProtoDeclare* SoProtoDeclare32 = new SoProtoDeclare();
SoProtoDeclare32->setName(QString("x3dconnector"));
SoProtoInterface* SoProtoInterface33 = new SoProtoInterface();
Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("startnode"));
Sofield34->setAccessType(QString("initializeOnly"));
Sofield34->setType(QString("SFNode"));
SoProtoInterface33->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("endnode"));
Sofield35->setAccessType(QString("initializeOnly"));
Sofield35->setType(QString("SFNode"));
SoProtoInterface33->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("set_startpoint"));
Sofield36->setAccessType(QString("inputOnly"));
Sofield36->setType(QString("SFVec3f"));
SoProtoInterface33->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("set_endpoint"));
Sofield37->setAccessType(QString("inputOnly"));
Sofield37->setType(QString("SFVec3f"));
SoProtoInterface33->addChild(*Sofield37);

SoProtoDeclare32->addChild(*SoProtoInterface33);

SoProtoBody* SoProtoBody38 = new SoProtoBody();
SoGroup* SoGroup39 = new SoGroup();
SoTransform* SoTransform40 = new SoTransform();
SoTransform40->setDEF(QString("trans"));
SoTransform* SoTransform41 = new SoTransform();
SoTransform41->setDEF(QString("rotscale"));
SoShape* SoShape42 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance43 = new SoVRMLAppearance();
SoMaterial* SoMaterial44 = new SoMaterial();
SoMaterial44->setDiffuseColor(new float[]{0.2,0.7,0.7});
SoMaterial44->setTransparency(0.5);
SoVRMLAppearance43->addChild(*SoMaterial44);

SoShape42->addChild(*SoVRMLAppearance43);

SoCylinder* SoCylinder45 = new SoCylinder();
SoCylinder45->setRadius(0.05);
SoShape42->setGeometry(*SoCylinder45);

SoTransform41->addChild(*SoShape42);

SoTransform40->addChild(*SoTransform41);

SoGroup39->addChild(*SoTransform40);

SoScript* SoScript46 = new SoScript();
SoScript46->setDEF(QString("S1"));
Sofield* Sofield47 = new Sofield();
Sofield47->setName(QString("startnode"));
Sofield47->setAccessType(QString("initializeOnly"));
Sofield47->setType(QString("SFNode"));
SoScript46->addChild(*Sofield47);

Sofield* Sofield48 = new Sofield();
Sofield48->setName(QString("endnode"));
Sofield48->setAccessType(QString("initializeOnly"));
Sofield48->setType(QString("SFNode"));
SoScript46->addChild(*Sofield48);

Sofield* Sofield49 = new Sofield();
Sofield49->setName(QString("position"));
Sofield49->setAccessType(QString("inputOutput"));
Sofield49->setType(QString("SFNode"));
SoTransform* SoTransform50 = new SoTransform();
SoTransform50->setUSE(QString("trans"));
Sofield49->addChild(*SoTransform50);

SoScript46->addChild(*Sofield49);

Sofield* Sofield51 = new Sofield();
Sofield51->setName(QString("rotscale"));
Sofield51->setAccessType(QString("inputOutput"));
Sofield51->setType(QString("SFNode"));
SoTransform* SoTransform52 = new SoTransform();
SoTransform52->setUSE(QString("rotscale"));
Sofield51->addChild(*SoTransform52);

SoScript46->addChild(*Sofield51);

Sofield* Sofield53 = new Sofield();
Sofield53->setName(QString("set_startpoint"));
Sofield53->setAccessType(QString("inputOnly"));
Sofield53->setType(QString("SFVec3f"));
SoScript46->addChild(*Sofield53);

Sofield* Sofield54 = new Sofield();
Sofield54->setName(QString("set_endpoint"));
Sofield54->setAccessType(QString("inputOnly"));
Sofield54->setType(QString("SFVec3f"));
SoScript46->addChild(*Sofield54);

SoIS* SoIS55 = new SoIS();
Soconnect* Soconnect56 = new Soconnect();
Soconnect56->setNodeField(QString("startnode"));
Soconnect56->setProtoField(QString("startnode"));
SoIS55->addChild(*Soconnect56);

Soconnect* Soconnect57 = new Soconnect();
Soconnect57->setNodeField(QString("endnode"));
Soconnect57->setProtoField(QString("endnode"));
SoIS55->addChild(*Soconnect57);

Soconnect* Soconnect58 = new Soconnect();
Soconnect58->setNodeField(QString("set_startpoint"));
Soconnect58->setProtoField(QString("set_startpoint"));
SoIS55->addChild(*Soconnect58);

Soconnect* Soconnect59 = new Soconnect();
Soconnect59->setNodeField(QString("set_endpoint"));
Soconnect59->setProtoField(QString("set_endpoint"));
SoIS55->addChild(*Soconnect59);

SoScript46->addChild(*SoIS55);


//SoScript46->setSourceCode(QString("ecmascript:")+
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
//_T("	    } else if (typeof SFRotation !== 'undefined') {")+
//_T("		    return {")+
//_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
//_T("			    translation : transl,")+
//_T("			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)")+
//_T("		    };")+
//_T("	    } else {")+
//_T("		    return {")+
//_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
//_T("			    translation : transl")+
//_T("		    };")+
//_T("	    }")+
//_T("	}")+
//_T("	function recompute_and_route(startpoint, endpoint) {")+
//_T("	      var trafo = recompute(startpoint, endpoint);")+
//_T("	      if (trafo) {")+
//_T("		      position.translation = trafo.translation;")+
//_T("		      rotscale.rotation = trafo.rotation;")+
//_T("		      rotscale.scale = trafo.scale;")+
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
SoGroup39->addChild(*SoScript46);

SoProtoBody38->addChild(*SoGroup39);

SoProtoDeclare32->addChild(*SoProtoBody38);

SoNode7->addChild(*SoProtoDeclare32);

SoProtoInstance* SoProtoInstance60 = new SoProtoInstance();
SoProtoInstance60->setName(QString("point"));
SoProtoInstance60->setDEF(QString("G1"));
SoNode7->addChild(*SoProtoInstance60);

SoProtoInstance* SoProtoInstance61 = new SoProtoInstance();
SoProtoInstance61->setName(QString("point"));
SoProtoInstance61->setDEF(QString("G2"));
SoNode7->addChild(*SoProtoInstance61);

SoProtoInstance* SoProtoInstance62 = new SoProtoInstance();
SoProtoInstance62->setName(QString("point"));
SoProtoInstance62->setDEF(QString("G3"));
SoNode7->addChild(*SoProtoInstance62);

SoProtoInstance* SoProtoInstance63 = new SoProtoInstance();
SoProtoInstance63->setName(QString("point"));
SoProtoInstance63->setDEF(QString("G4"));
SoNode7->addChild(*SoProtoInstance63);

SoProtoInstance* SoProtoInstance64 = new SoProtoInstance();
SoProtoInstance64->setName(QString("x3dconnector"));
SoProtoInstance64->setDEF(QString("connector1"));
SoField* SoField65 = new SoField();
SoField65->setName(QString("startnode"));
SoProtoInstance* SoProtoInstance66 = new SoProtoInstance();
SoProtoInstance66->setUSE(QString("G1"));
SoField65->addChild(*SoProtoInstance66);

SoProtoInstance64->addChild(*SoField65);

SoField* SoField67 = new SoField();
SoField67->setName(QString("endnode"));
SoProtoInstance* SoProtoInstance68 = new SoProtoInstance();
SoProtoInstance68->setUSE(QString("G2"));
SoField67->addChild(*SoProtoInstance68);

SoProtoInstance64->addChild(*SoField67);

SoField* SoField69 = new SoField();
SoField69->setName(QString("set_startpoint"));
SoProtoInstance64->addChild(*SoField69);

SoField* SoField70 = new SoField();
SoField70->setName(QString("set_endpoint"));
SoProtoInstance64->addChild(*SoField70);

SoNode7->addChild(*SoProtoInstance64);

SoProtoInstance* SoProtoInstance71 = new SoProtoInstance();
SoProtoInstance71->setName(QString("x3dconnector"));
SoProtoInstance71->setDEF(QString("connector2"));
SoField* SoField72 = new SoField();
SoField72->setName(QString("startnode"));
SoProtoInstance* SoProtoInstance73 = new SoProtoInstance();
SoProtoInstance73->setUSE(QString("G1"));
SoField72->addChild(*SoProtoInstance73);

SoProtoInstance71->addChild(*SoField72);

SoField* SoField74 = new SoField();
SoField74->setName(QString("endnode"));
SoProtoInstance* SoProtoInstance75 = new SoProtoInstance();
SoProtoInstance75->setUSE(QString("G3"));
SoField74->addChild(*SoProtoInstance75);

SoProtoInstance71->addChild(*SoField74);

SoField* SoField76 = new SoField();
SoField76->setName(QString("set_startpoint"));
SoProtoInstance71->addChild(*SoField76);

SoField* SoField77 = new SoField();
SoField77->setName(QString("set_endpoint"));
SoProtoInstance71->addChild(*SoField77);

SoNode7->addChild(*SoProtoInstance71);

SoProtoInstance* SoProtoInstance78 = new SoProtoInstance();
SoProtoInstance78->setName(QString("x3dconnector"));
SoProtoInstance78->setDEF(QString("connector3"));
SoField* SoField79 = new SoField();
SoField79->setName(QString("startnode"));
SoProtoInstance* SoProtoInstance80 = new SoProtoInstance();
SoProtoInstance80->setUSE(QString("G1"));
SoField79->addChild(*SoProtoInstance80);

SoProtoInstance78->addChild(*SoField79);

SoField* SoField81 = new SoField();
SoField81->setName(QString("endnode"));
SoProtoInstance* SoProtoInstance82 = new SoProtoInstance();
SoProtoInstance82->setUSE(QString("G4"));
SoField81->addChild(*SoProtoInstance82);

SoProtoInstance78->addChild(*SoField81);

SoField* SoField83 = new SoField();
SoField83->setName(QString("set_startpoint"));
SoProtoInstance78->addChild(*SoField83);

SoField* SoField84 = new SoField();
SoField84->setName(QString("set_endpoint"));
SoProtoInstance78->addChild(*SoField84);

SoNode7->addChild(*SoProtoInstance78);

SoROUTE* SoROUTE85 = new SoROUTE();
SoROUTE85->setFromNode(QString("G1"));
SoROUTE85->setFromField(QString("translation"));
SoROUTE85->setToNode(QString("connector1"));
SoROUTE85->setToField(QString("set_startpoint"));
SoNode7->addChild(*SoROUTE85);

SoROUTE* SoROUTE86 = new SoROUTE();
SoROUTE86->setFromNode(QString("G2"));
SoROUTE86->setFromField(QString("translation"));
SoROUTE86->setToNode(QString("connector1"));
SoROUTE86->setToField(QString("set_endpoint"));
SoNode7->addChild(*SoROUTE86);

SoROUTE* SoROUTE87 = new SoROUTE();
SoROUTE87->setFromNode(QString("G1"));
SoROUTE87->setFromField(QString("translation"));
SoROUTE87->setToNode(QString("connector2"));
SoROUTE87->setToField(QString("set_startpoint"));
SoNode7->addChild(*SoROUTE87);

SoROUTE* SoROUTE88 = new SoROUTE();
SoROUTE88->setFromNode(QString("G3"));
SoROUTE88->setFromField(QString("translation"));
SoROUTE88->setToNode(QString("connector2"));
SoROUTE88->setToField(QString("set_endpoint"));
SoNode7->addChild(*SoROUTE88);

SoROUTE* SoROUTE89 = new SoROUTE();
SoROUTE89->setFromNode(QString("G1"));
SoROUTE89->setFromField(QString("translation"));
SoROUTE89->setToNode(QString("connector3"));
SoROUTE89->setToField(QString("set_startpoint"));
SoNode7->addChild(*SoROUTE89);

SoROUTE* SoROUTE90 = new SoROUTE();
SoROUTE90->setFromNode(QString("G4"));
SoROUTE90->setFromField(QString("translation"));
SoROUTE90->setToNode(QString("connector3"));
SoROUTE90->setToField(QString("set_endpoint"));
SoNode7->addChild(*SoROUTE90);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}
