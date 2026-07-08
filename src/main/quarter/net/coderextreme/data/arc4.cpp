
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
Someta2->setContent(QString("arc4.x3d"));
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
Someta5->setContent(QString("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d"));
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
SoTransform10->setDEF(QString("DECLpoint_G1_node"));
SoShape* SoShape11 = new SoShape();
SoSphere* SoSphere12 = new SoSphere();
SoSphere12->setRadius(0.1);
SoShape11->setGeometry(*SoSphere12);

SoVRMLAppearance* SoVRMLAppearance13 = new SoVRMLAppearance();
SoMaterial* SoMaterial14 = new SoMaterial();
SoMaterial14->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance13->addChild(*SoMaterial14);

SoShape11->addChild(*SoVRMLAppearance13);

SoTransform10->addChild(*SoShape11);

SoPositionInterpolator* SoPositionInterpolator15 = new SoPositionInterpolator();
SoPositionInterpolator15->setDEF(QString("DECLpoint_G1_PI1"));
SoPositionInterpolator15->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator15->setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
SoTransform10->addChild(*SoPositionInterpolator15);

SoScript* SoScript16 = new SoScript();
SoScript16->setDEF(QString("DECLpoint_G1_MB1"));
Sofield* Sofield17 = new Sofield();
Sofield17->setName(QString("translation"));
Sofield17->setAccessType(QString("inputOutput"));
Sofield17->setType(QString("SFVec3f"));
Sofield17->setValue(QString("0 0 0"));
SoScript16->addChild(*Sofield17);

Sofield* Sofield18 = new Sofield();
Sofield18->setName(QString("old"));
Sofield18->setAccessType(QString("inputOutput"));
Sofield18->setType(QString("SFVec3f"));
Sofield18->setValue(QString("0 0 0"));
SoScript16->addChild(*Sofield18);

Sofield* Sofield19 = new Sofield();
Sofield19->setName(QString("set_location"));
Sofield19->setAccessType(QString("inputOnly"));
Sofield19->setType(QString("SFTime"));
SoScript16->addChild(*Sofield19);

Sofield* Sofield20 = new Sofield();
Sofield20->setName(QString("keyValue"));
Sofield20->setAccessType(QString("inputOutput"));
Sofield20->setType(QString("MFVec3f"));
Sofield20->setValue(QString("0 0 0 0 5 0"));
SoScript16->addChild(*Sofield20);


//SoScript16->setSourceCode(QString("ecmascript:")+
//_T("		function set_location(value) {")+
//_T("                    old = translation;")+
//_T("		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
//_T("                    keyValue = new MFVec3f([old, translation]);")+
//_T("		    // Browser.println(keyValue);")+
//_T("		}"));
SoTransform10->addChild(*SoScript16);

SoTimeSensor* SoTimeSensor21 = new SoTimeSensor();
SoTimeSensor21->setDEF(QString("DECLpoint_G1_CL1"));
SoTimeSensor21->setCycleInterval(3);
SoTimeSensor21->setLoop(true);
SoTransform10->addChild(*SoTimeSensor21);

SoROUTE* SoROUTE22 = new SoROUTE();
SoROUTE22->setFromNode(QString("DECLpoint_G1_CL1"));
SoROUTE22->setFromField(QString("cycleTime"));
SoROUTE22->setToNode(QString("DECLpoint_G1_MB1"));
SoROUTE22->setToField(QString("set_location"));
SoTransform10->addChild(*SoROUTE22);

SoROUTE* SoROUTE23 = new SoROUTE();
SoROUTE23->setFromNode(QString("DECLpoint_G1_CL1"));
SoROUTE23->setFromField(QString("fraction_changed"));
SoROUTE23->setToNode(QString("DECLpoint_G1_PI1"));
SoROUTE23->setToField(QString("set_fraction"));
SoTransform10->addChild(*SoROUTE23);

SoROUTE* SoROUTE24 = new SoROUTE();
SoROUTE24->setFromNode(QString("DECLpoint_G1_MB1"));
SoROUTE24->setFromField(QString("keyValue"));
SoROUTE24->setToNode(QString("DECLpoint_G1_PI1"));
SoROUTE24->setToField(QString("keyValue"));
SoTransform10->addChild(*SoROUTE24);

SoROUTE* SoROUTE25 = new SoROUTE();
SoROUTE25->setFromNode(QString("DECLpoint_G1_PI1"));
SoROUTE25->setFromField(QString("value_changed"));
SoROUTE25->setToNode(QString("DECLpoint_G1_node"));
SoROUTE25->setToField(QString("set_translation"));
SoTransform10->addChild(*SoROUTE25);

SoNode7->addChild(*SoTransform10);

SoTransform* SoTransform26 = new SoTransform();
SoTransform26->setDEF(QString("DECLpoint_G2_node"));
SoShape* SoShape27 = new SoShape();
SoSphere* SoSphere28 = new SoSphere();
SoSphere28->setRadius(0.1);
SoShape27->setGeometry(*SoSphere28);

SoVRMLAppearance* SoVRMLAppearance29 = new SoVRMLAppearance();
SoMaterial* SoMaterial30 = new SoMaterial();
SoMaterial30->setDiffuseColor(new float[]{1.0,0.0,0.0});
SoVRMLAppearance29->addChild(*SoMaterial30);

SoShape27->addChild(*SoVRMLAppearance29);

SoTransform26->addChild(*SoShape27);

SoPositionInterpolator* SoPositionInterpolator31 = new SoPositionInterpolator();
SoPositionInterpolator31->setDEF(QString("DECLpoint_G2_PI1"));
SoPositionInterpolator31->setKey(new float[]{0.0,1.0}, 2);
SoPositionInterpolator31->setKeyValue(new float[]{0.0,0.0,0.0,0.0,5.0,0.0}, 6);
SoTransform26->addChild(*SoPositionInterpolator31);

SoScript* SoScript32 = new SoScript();
SoScript32->setDEF(QString("DECLpoint_G2_MB1"));
Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("translation"));
Sofield33->setAccessType(QString("inputOutput"));
Sofield33->setType(QString("SFVec3f"));
Sofield33->setValue(QString("0 0 0"));
SoScript32->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("old"));
Sofield34->setAccessType(QString("inputOutput"));
Sofield34->setType(QString("SFVec3f"));
Sofield34->setValue(QString("0 0 0"));
SoScript32->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("set_location"));
Sofield35->setAccessType(QString("inputOnly"));
Sofield35->setType(QString("SFTime"));
SoScript32->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("keyValue"));
Sofield36->setAccessType(QString("inputOutput"));
Sofield36->setType(QString("MFVec3f"));
Sofield36->setValue(QString("0 0 0 0 5 0"));
SoScript32->addChild(*Sofield36);


//SoScript32->setSourceCode(QString("ecmascript:")+
//_T("		function set_location(value) {")+
//_T("                    old = translation;")+
//_T("		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);")+
//_T("                    keyValue = new MFVec3f([old, translation]);")+
//_T("		    // Browser.println(keyValue);")+
//_T("		}"));
SoTransform26->addChild(*SoScript32);

SoTimeSensor* SoTimeSensor37 = new SoTimeSensor();
SoTimeSensor37->setDEF(QString("DECLpoint_G2_CL1"));
SoTimeSensor37->setCycleInterval(3);
SoTimeSensor37->setLoop(true);
SoTransform26->addChild(*SoTimeSensor37);

SoROUTE* SoROUTE38 = new SoROUTE();
SoROUTE38->setFromNode(QString("DECLpoint_G2_CL1"));
SoROUTE38->setFromField(QString("cycleTime"));
SoROUTE38->setToNode(QString("DECLpoint_G2_MB1"));
SoROUTE38->setToField(QString("set_location"));
SoTransform26->addChild(*SoROUTE38);

SoROUTE* SoROUTE39 = new SoROUTE();
SoROUTE39->setFromNode(QString("DECLpoint_G2_CL1"));
SoROUTE39->setFromField(QString("fraction_changed"));
SoROUTE39->setToNode(QString("DECLpoint_G2_PI1"));
SoROUTE39->setToField(QString("set_fraction"));
SoTransform26->addChild(*SoROUTE39);

SoROUTE* SoROUTE40 = new SoROUTE();
SoROUTE40->setFromNode(QString("DECLpoint_G2_MB1"));
SoROUTE40->setFromField(QString("keyValue"));
SoROUTE40->setToNode(QString("DECLpoint_G2_PI1"));
SoROUTE40->setToField(QString("keyValue"));
SoTransform26->addChild(*SoROUTE40);

SoROUTE* SoROUTE41 = new SoROUTE();
SoROUTE41->setFromNode(QString("DECLpoint_G2_PI1"));
SoROUTE41->setFromField(QString("value_changed"));
SoROUTE41->setToNode(QString("DECLpoint_G2_node"));
SoROUTE41->setToField(QString("set_translation"));
SoTransform26->addChild(*SoROUTE41);

SoNode7->addChild(*SoTransform26);

SoGroup* SoGroup42 = new SoGroup();
SoTransform* SoTransform43 = new SoTransform();
SoTransform43->setDEF(QString("DECLx3dconnector_connector1_trans"));
SoTransform* SoTransform44 = new SoTransform();
SoTransform44->setDEF(QString("DECLx3dconnector_connector1_rotscale"));
SoShape* SoShape45 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance46 = new SoVRMLAppearance();
SoMaterial* SoMaterial47 = new SoMaterial();
SoMaterial47->setDiffuseColor(new float[]{0.2,0.7,0.7});
SoMaterial47->setTransparency(0.5);
SoVRMLAppearance46->addChild(*SoMaterial47);

SoShape45->addChild(*SoVRMLAppearance46);

SoCylinder* SoCylinder48 = new SoCylinder();
SoCylinder48->setRadius(0.05);
SoShape45->setGeometry(*SoCylinder48);

SoTransform44->addChild(*SoShape45);

SoTransform43->addChild(*SoTransform44);

SoGroup42->addChild(*SoTransform43);

SoScript* SoScript49 = new SoScript();
SoScript49->setDEF(QString("DECLx3dconnector_connector1_S1"));
Sofield* Sofield50 = new Sofield();
Sofield50->setName(QString("startnode"));
Sofield50->setAccessType(QString("initializeOnly"));
Sofield50->setType(QString("SFNode"));
SoScript49->addChild(*Sofield50);

Sofield* Sofield51 = new Sofield();
Sofield51->setName(QString("endnode"));
Sofield51->setAccessType(QString("initializeOnly"));
Sofield51->setType(QString("SFNode"));
SoScript49->addChild(*Sofield51);

Sofield* Sofield52 = new Sofield();
Sofield52->setName(QString("position"));
Sofield52->setAccessType(QString("inputOutput"));
Sofield52->setType(QString("SFNode"));
SoTransform* SoTransform53 = new SoTransform();
SoTransform53->setUSE(QString("DECLx3dconnector_connector1_trans"));
Sofield52->addChild(*SoTransform53);

SoScript49->addChild(*Sofield52);

Sofield* Sofield54 = new Sofield();
Sofield54->setName(QString("rotscale"));
Sofield54->setAccessType(QString("inputOutput"));
Sofield54->setType(QString("SFNode"));
SoTransform* SoTransform55 = new SoTransform();
SoTransform55->setUSE(QString("DECLx3dconnector_connector1_rotscale"));
Sofield54->addChild(*SoTransform55);

SoScript49->addChild(*Sofield54);

Sofield* Sofield56 = new Sofield();
Sofield56->setName(QString("set_startpoint"));
Sofield56->setAccessType(QString("inputOnly"));
Sofield56->setType(QString("SFVec3f"));
SoScript49->addChild(*Sofield56);

Sofield* Sofield57 = new Sofield();
Sofield57->setName(QString("set_endpoint"));
Sofield57->setAccessType(QString("inputOnly"));
Sofield57->setType(QString("SFVec3f"));
SoScript49->addChild(*Sofield57);


//SoScript49->setSourceCode(QString("ecmascript:")+
//_T("        function recompute(startpoint,endpoint){")+
//_T("	    if (typeof endpoint === 'undefined') {")+
//_T("		    if (typeof Quaternion !== 'undefined') {")+
//_T("			    return {")+
//_T("				    scale : new SFVec3f(1.0,1.0,1.0),")+
//_T("				    translation : new SFVec3f(1.0,1.0,1.0),")+
//_T("			    	    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), 1.0)")+
//_T("			    };")+
//_T("	    	    } else if (typeof SFRotation !== 'undefined') {")+
//_T("			    return {")+
//_T("				    scale : new SFVec3f(1.0,1.0,1.0),")+
//_T("				    translation : new SFVec3f(1.0,1.0,1.0),")+
//_T("			    	    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),1.0)")+
//_T("			    };")+
//_T("	    	    } else {")+
//_T("			    return {")+
//_T("				    scale : new SFVec3f(1.0,1.0,1.0),")+
//_T("				    translation : new SFVec3f(1.0,1.0,1.0)")+
//_T("			    };")+
//_T("		    }")+
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
//_T("	      position.translation = trafo.translation;")+
//_T("	      rotscale.rotation = trafo.rotation;")+
//_T("	      rotscale.scale = trafo.scale;")+
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
SoGroup42->addChild(*SoScript49);

SoNode7->addChild(*SoGroup42);

SoROUTE* SoROUTE58 = new SoROUTE();
SoROUTE58->setFromNode(QString("DECLpoint_G1_node"));
SoROUTE58->setFromField(QString("translation_changed"));
SoROUTE58->setToNode(QString("DECLx3dconnector_connector1_S1"));
SoROUTE58->setToField(QString("set_startpoint"));
SoNode7->addChild(*SoROUTE58);

SoROUTE* SoROUTE59 = new SoROUTE();
SoROUTE59->setFromNode(QString("DECLpoint_G2_node"));
SoROUTE59->setFromField(QString("translation_changed"));
SoROUTE59->setToNode(QString("DECLx3dconnector_connector1_S1"));
SoROUTE59->setToField(QString("set_endpoint"));
SoNode7->addChild(*SoROUTE59);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}
