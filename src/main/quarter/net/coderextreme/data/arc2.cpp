
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
Someta2->setContent(QString("arc2.x3d"));
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

SoTransform* SoTransform10 = new SoTransform();
SoTransform10->setDEF(QString("G1"));
SoTransform* SoTransform11 = new SoTransform();
SoTransform11->setDEF(QString("DECLpoint_INSTANCE_node"));
SoShape* SoShape12 = new SoShape();
SoSphere* SoSphere13 = new SoSphere();
SoSphere13->setRadius(0.1);
SoShape12->setGeometry(*SoSphere13);

SoVRMLAppearance* SoVRMLAppearance14 = new SoVRMLAppearance();
SoMaterial* SoMaterial15 = new SoMaterial();
SoMaterial15->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance14->addChild(*SoMaterial15);

SoShape12->addChild(*SoVRMLAppearance14);

SoTransform11->addChild(*SoShape12);

SoPositionInterpolator* SoPositionInterpolator16 = new SoPositionInterpolator();
SoPositionInterpolator16->setDEF(QString("DECLpoint_INSTANCE_PI1"));
SoPositionInterpolator16->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator16->setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
SoTransform11->addChild(*SoPositionInterpolator16);

SoScript* SoScript17 = new SoScript();
SoScript17->setDEF(QString("DECLpoint_INSTANCE_MB1"));
Sofield* Sofield18 = new Sofield();
Sofield18->setName(QString("translation"));
Sofield18->setAccessType(QString("inputOutput"));
Sofield18->setType(QString("SFVec3f"));
Sofield18->setValue(QString("0 0 0"));
SoScript17->addChild(*Sofield18);

Sofield* Sofield19 = new Sofield();
Sofield19->setName(QString("old"));
Sofield19->setAccessType(QString("inputOutput"));
Sofield19->setType(QString("SFVec3f"));
Sofield19->setValue(QString("0 0 0"));
SoScript17->addChild(*Sofield19);

Sofield* Sofield20 = new Sofield();
Sofield20->setName(QString("set_location"));
Sofield20->setAccessType(QString("inputOnly"));
Sofield20->setType(QString("SFTime"));
SoScript17->addChild(*Sofield20);

Sofield* Sofield21 = new Sofield();
Sofield21->setName(QString("keyValue"));
Sofield21->setAccessType(QString("inputOutput"));
Sofield21->setType(QString("MFVec3f"));
Sofield21->setValue(QString("0 0 0 0 5 0"));
SoScript17->addChild(*Sofield21);


//SoScript17->setSourceCode(QString("ecmascript:")+
//_T("               function set_location(value) {")+
//_T("                    old = translation;")+
//_T("                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
//_T("                    keyValue = new MFVec3f([old, translation]);")+
//_T("               }"));
SoTransform11->addChild(*SoScript17);

SoTimeSensor* SoTimeSensor22 = new SoTimeSensor();
SoTimeSensor22->setDEF(QString("DECLpoint_INSTANCE_CL1"));
SoTimeSensor22->setCycleInterval(3);
SoTimeSensor22->setLoop(true);
SoTransform11->addChild(*SoTimeSensor22);

SoROUTE* SoROUTE23 = new SoROUTE();
SoROUTE23->setFromNode(QString("DECLpoint_INSTANCE_CL1"));
SoROUTE23->setFromField(QString("cycleTime"));
SoROUTE23->setToNode(QString("DECLpoint_INSTANCE_MB1"));
SoROUTE23->setToField(QString("set_location"));
SoTransform11->addChild(*SoROUTE23);

SoROUTE* SoROUTE24 = new SoROUTE();
SoROUTE24->setFromNode(QString("DECLpoint_INSTANCE_CL1"));
SoROUTE24->setFromField(QString("fraction_changed"));
SoROUTE24->setToNode(QString("DECLpoint_INSTANCE_PI1"));
SoROUTE24->setToField(QString("set_fraction"));
SoTransform11->addChild(*SoROUTE24);

SoROUTE* SoROUTE25 = new SoROUTE();
SoROUTE25->setFromNode(QString("DECLpoint_INSTANCE_MB1"));
SoROUTE25->setFromField(QString("keyValue"));
SoROUTE25->setToNode(QString("DECLpoint_INSTANCE_PI1"));
SoROUTE25->setToField(QString("keyValue"));
SoTransform11->addChild(*SoROUTE25);

SoROUTE* SoROUTE26 = new SoROUTE();
SoROUTE26->setFromNode(QString("DECLpoint_INSTANCE_PI1"));
SoROUTE26->setFromField(QString("value_changed"));
SoROUTE26->setToNode(QString("DECLpoint_INSTANCE_node"));
SoROUTE26->setToField(QString("set_translation"));
SoTransform11->addChild(*SoROUTE26);

SoROUTE* SoROUTE27 = new SoROUTE();
SoROUTE27->setFromNode(QString("DECLpoint_INSTANCE_MB1"));
SoROUTE27->setFromField(QString("translation_changed"));
SoROUTE27->setToNode(QString("DECLpoint_INSTANCE_node"));
SoROUTE27->setToField(QString("set_translation"));
SoTransform11->addChild(*SoROUTE27);

SoTransform10->addChild(*SoTransform11);

SoNode7->addChild(*SoTransform10);

SoTransform* SoTransform28 = new SoTransform();
SoTransform28->setDEF(QString("G2"));
SoTransform* SoTransform29 = new SoTransform();
SoTransform29->setDEF(QString("DECLpoint_INSTANCE1000_node"));
SoShape* SoShape30 = new SoShape();
SoSphere* SoSphere31 = new SoSphere();
SoSphere31->setRadius(0.1);
SoShape30->setGeometry(*SoSphere31);

SoVRMLAppearance* SoVRMLAppearance32 = new SoVRMLAppearance();
SoMaterial* SoMaterial33 = new SoMaterial();
SoMaterial33->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance32->addChild(*SoMaterial33);

SoShape30->addChild(*SoVRMLAppearance32);

SoTransform29->addChild(*SoShape30);

SoPositionInterpolator* SoPositionInterpolator34 = new SoPositionInterpolator();
SoPositionInterpolator34->setDEF(QString("DECLpoint_INSTANCE1000_PI1"));
SoPositionInterpolator34->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator34->setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
SoTransform29->addChild(*SoPositionInterpolator34);

SoScript* SoScript35 = new SoScript();
SoScript35->setDEF(QString("DECLpoint_INSTANCE1000_MB1"));
Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("translation"));
Sofield36->setAccessType(QString("inputOutput"));
Sofield36->setType(QString("SFVec3f"));
Sofield36->setValue(QString("0 0 0"));
SoScript35->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("old"));
Sofield37->setAccessType(QString("inputOutput"));
Sofield37->setType(QString("SFVec3f"));
Sofield37->setValue(QString("0 0 0"));
SoScript35->addChild(*Sofield37);

Sofield* Sofield38 = new Sofield();
Sofield38->setName(QString("set_location"));
Sofield38->setAccessType(QString("inputOnly"));
Sofield38->setType(QString("SFTime"));
SoScript35->addChild(*Sofield38);

Sofield* Sofield39 = new Sofield();
Sofield39->setName(QString("keyValue"));
Sofield39->setAccessType(QString("inputOutput"));
Sofield39->setType(QString("MFVec3f"));
Sofield39->setValue(QString("0 0 0 0 5 0"));
SoScript35->addChild(*Sofield39);


//SoScript35->setSourceCode(QString("ecmascript:")+
//_T("               function set_location(value) {")+
//_T("                    old = translation;")+
//_T("                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
//_T("                    keyValue = new MFVec3f([old, translation]);")+
//_T("               }"));
SoTransform29->addChild(*SoScript35);

SoTimeSensor* SoTimeSensor40 = new SoTimeSensor();
SoTimeSensor40->setDEF(QString("DECLpoint_INSTANCE1000_CL1"));
SoTimeSensor40->setCycleInterval(3);
SoTimeSensor40->setLoop(true);
SoTransform29->addChild(*SoTimeSensor40);

SoROUTE* SoROUTE41 = new SoROUTE();
SoROUTE41->setFromNode(QString("DECLpoint_INSTANCE1000_CL1"));
SoROUTE41->setFromField(QString("cycleTime"));
SoROUTE41->setToNode(QString("DECLpoint_INSTANCE1000_MB1"));
SoROUTE41->setToField(QString("set_location"));
SoTransform29->addChild(*SoROUTE41);

SoROUTE* SoROUTE42 = new SoROUTE();
SoROUTE42->setFromNode(QString("DECLpoint_INSTANCE1000_CL1"));
SoROUTE42->setFromField(QString("fraction_changed"));
SoROUTE42->setToNode(QString("DECLpoint_INSTANCE1000_PI1"));
SoROUTE42->setToField(QString("set_fraction"));
SoTransform29->addChild(*SoROUTE42);

SoROUTE* SoROUTE43 = new SoROUTE();
SoROUTE43->setFromNode(QString("DECLpoint_INSTANCE1000_MB1"));
SoROUTE43->setFromField(QString("keyValue"));
SoROUTE43->setToNode(QString("DECLpoint_INSTANCE1000_PI1"));
SoROUTE43->setToField(QString("keyValue"));
SoTransform29->addChild(*SoROUTE43);

SoROUTE* SoROUTE44 = new SoROUTE();
SoROUTE44->setFromNode(QString("DECLpoint_INSTANCE1000_PI1"));
SoROUTE44->setFromField(QString("value_changed"));
SoROUTE44->setToNode(QString("DECLpoint_INSTANCE1000_node"));
SoROUTE44->setToField(QString("set_translation"));
SoTransform29->addChild(*SoROUTE44);

SoROUTE* SoROUTE45 = new SoROUTE();
SoROUTE45->setFromNode(QString("DECLpoint_INSTANCE1000_MB1"));
SoROUTE45->setFromField(QString("translation_changed"));
SoROUTE45->setToNode(QString("DECLpoint_INSTANCE1000_node"));
SoROUTE45->setToField(QString("set_translation"));
SoTransform29->addChild(*SoROUTE45);

SoTransform28->addChild(*SoTransform29);

SoNode7->addChild(*SoTransform28);

SoTransform* SoTransform46 = new SoTransform();
SoTransform46->setDEF(QString("transC1"));
SoTransform* SoTransform47 = new SoTransform();
SoTransform47->setDEF(QString("rotscaleC1"));
SoShape* SoShape48 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance49 = new SoVRMLAppearance();
SoMaterial* SoMaterial50 = new SoMaterial();
SoMaterial50->setDiffuseColor(new float[]{0.2,0.7,0.7});
SoMaterial50->setTransparency(0.5);
SoVRMLAppearance49->addChild(*SoMaterial50);

SoShape48->addChild(*SoVRMLAppearance49);

SoCylinder* SoCylinder51 = new SoCylinder();
SoCylinder51->setRadius(0.05);
SoShape48->setGeometry(*SoCylinder51);

SoTransform47->addChild(*SoShape48);

SoTransform46->addChild(*SoTransform47);

SoNode7->addChild(*SoTransform46);

SoScript* SoScript52 = new SoScript();
SoScript52->setDEF(QString("DECLx3dconnector_connector1_S1"));
Sofield* Sofield53 = new Sofield();
Sofield53->setName(QString("startnode"));
Sofield53->setAccessType(QString("initializeOnly"));
Sofield53->setType(QString("SFNode"));
SoTransform* SoTransform54 = new SoTransform();
SoTransform54->setUSE(QString("G1"));
Sofield53->addChild(*SoTransform54);

SoScript52->addChild(*Sofield53);

Sofield* Sofield55 = new Sofield();
Sofield55->setName(QString("endnode"));
Sofield55->setAccessType(QString("initializeOnly"));
Sofield55->setType(QString("SFNode"));
SoTransform* SoTransform56 = new SoTransform();
SoTransform56->setUSE(QString("G2"));
Sofield55->addChild(*SoTransform56);

SoScript52->addChild(*Sofield55);

Sofield* Sofield57 = new Sofield();
Sofield57->setName(QString("transC1"));
Sofield57->setAccessType(QString("initializeOnly"));
Sofield57->setType(QString("SFNode"));
SoTransform* SoTransform58 = new SoTransform();
SoTransform58->setUSE(QString("transC1"));
Sofield57->addChild(*SoTransform58);

SoScript52->addChild(*Sofield57);

Sofield* Sofield59 = new Sofield();
Sofield59->setName(QString("rotscaleC1"));
Sofield59->setAccessType(QString("initializeOnly"));
Sofield59->setType(QString("SFNode"));
SoTransform* SoTransform60 = new SoTransform();
SoTransform60->setUSE(QString("rotscaleC1"));
Sofield59->addChild(*SoTransform60);

SoScript52->addChild(*Sofield59);

Sofield* Sofield61 = new Sofield();
Sofield61->setName(QString("set_startpoint"));
Sofield61->setAccessType(QString("inputOnly"));
Sofield61->setType(QString("SFVec3f"));
SoScript52->addChild(*Sofield61);

Sofield* Sofield62 = new Sofield();
Sofield62->setName(QString("set_endpoint"));
Sofield62->setAccessType(QString("inputOnly"));
Sofield62->setType(QString("SFVec3f"));
SoScript52->addChild(*Sofield62);


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
//_T("	      transC1.translation = trafo.translation;")+
//_T("	      rotscaleC1.rotation = trafo.rotation;")+
//_T("	      rotscaleC1.scale = trafo.scale;")+
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
SoNode7->addChild(*SoScript52);

SoROUTE* SoROUTE63 = new SoROUTE();
SoROUTE63->setFromNode(QString("G1"));
SoROUTE63->setFromField(QString("translation_changed"));
SoROUTE63->setToNode(QString("DECLx3dconnector_connector1_S1"));
SoROUTE63->setToField(QString("set_startpoint"));
SoNode7->addChild(*SoROUTE63);

SoROUTE* SoROUTE64 = new SoROUTE();
SoROUTE64->setFromNode(QString("G2"));
SoROUTE64->setFromField(QString("translation_changed"));
SoROUTE64->setToNode(QString("DECLx3dconnector_connector1_S1"));
SoROUTE64->setToField(QString("set_endpoint"));
SoNode7->addChild(*SoROUTE64);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}
