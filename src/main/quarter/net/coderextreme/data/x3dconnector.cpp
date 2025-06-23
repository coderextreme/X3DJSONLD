
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
Someta2->setContent(QString("x3dconnector.x3d"));
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
SoTransform10->setDEF(QString("G1"));
SoShape* SoShape11 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance12 = new SoVRMLAppearance();
SoMaterial* SoMaterial13 = new SoMaterial();
SoMaterial13->setDiffuseColor(new float[]{0.7,0.2,0.2});
SoVRMLAppearance12->addChild(*SoMaterial13);

SoShape11->addChild(*SoVRMLAppearance12);

SoSphere* SoSphere14 = new SoSphere();
SoSphere14->setRadius(0.1);
SoShape11->setGeometry(*SoSphere14);

SoTransform10->addChild(*SoShape11);

SoPlaneSensor* SoPlaneSensor15 = new SoPlaneSensor();
SoPlaneSensor15->setDescription(QString("Grab to move"));
SoPlaneSensor15->setDEF(QString("PS1"));
SoTransform10->addChild(*SoPlaneSensor15);

SoROUTE* SoROUTE16 = new SoROUTE();
SoROUTE16->setFromNode(QString("PS1"));
SoROUTE16->setFromField(QString("translation_changed"));
SoROUTE16->setToNode(QString("G1"));
SoROUTE16->setToField(QString("set_translation"));
SoTransform10->addChild(*SoROUTE16);

SoNode7->addChild(*SoTransform10);

SoTransform* SoTransform17 = new SoTransform();
SoTransform17->setDEF(QString("G2"));
SoTransform17->setTranslation(new float[]{1.0,-1.0,0.01});
SoShape* SoShape18 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance19 = new SoVRMLAppearance();
SoMaterial* SoMaterial20 = new SoMaterial();
SoMaterial20->setDiffuseColor(new float[]{0.2,0.7,0.2});
SoVRMLAppearance19->addChild(*SoMaterial20);

SoShape18->addChild(*SoVRMLAppearance19);

SoSphere* SoSphere21 = new SoSphere();
SoSphere21->setRadius(0.1);
SoShape18->setGeometry(*SoSphere21);

SoTransform17->addChild(*SoShape18);

SoPlaneSensor* SoPlaneSensor22 = new SoPlaneSensor();
SoPlaneSensor22->setDescription(QString("Grab to move"));
SoPlaneSensor22->setOffset(new float[]{1.0,-1.0,0.01});
SoPlaneSensor22->setDEF(QString("PS2"));
SoTransform17->addChild(*SoPlaneSensor22);

SoROUTE* SoROUTE23 = new SoROUTE();
SoROUTE23->setFromNode(QString("PS2"));
SoROUTE23->setFromField(QString("translation_changed"));
SoROUTE23->setToNode(QString("G2"));
SoROUTE23->setToField(QString("set_translation"));
SoTransform17->addChild(*SoROUTE23);

SoNode7->addChild(*SoTransform17);

SoTransform* SoTransform24 = new SoTransform();
SoTransform24->setDEF(QString("transC1"));
SoTransform* SoTransform25 = new SoTransform();
SoTransform25->setDEF(QString("rotscaleC1"));
SoShape* SoShape26 = new SoShape();
SoVRMLAppearance* SoVRMLAppearance27 = new SoVRMLAppearance();
SoMaterial* SoMaterial28 = new SoMaterial();
SoMaterial28->setDiffuseColor(new float[]{0.2,0.7,0.7});
SoMaterial28->setTransparency(0.5);
SoVRMLAppearance27->addChild(*SoMaterial28);

SoShape26->addChild(*SoVRMLAppearance27);

SoCylinder* SoCylinder29 = new SoCylinder();
SoCylinder29->setRadius(0.05);
SoShape26->setGeometry(*SoCylinder29);

SoTransform25->addChild(*SoShape26);

SoTransform24->addChild(*SoTransform25);

SoNode7->addChild(*SoTransform24);

SoProtoDeclare* SoProtoDeclare30 = new SoProtoDeclare();
SoProtoDeclare30->setName(QString("x3dconnector"));
SoProtoInterface* SoProtoInterface31 = new SoProtoInterface();
Sofield* Sofield32 = new Sofield();
Sofield32->setName(QString("startnode"));
Sofield32->setAccessType(QString("initializeOnly"));
Sofield32->setType(QString("SFNode"));
SoProtoInterface31->addChild(*Sofield32);

Sofield* Sofield33 = new Sofield();
Sofield33->setName(QString("endnode"));
Sofield33->setAccessType(QString("initializeOnly"));
Sofield33->setType(QString("SFNode"));
SoProtoInterface31->addChild(*Sofield33);

Sofield* Sofield34 = new Sofield();
Sofield34->setName(QString("transnode"));
Sofield34->setAccessType(QString("initializeOnly"));
Sofield34->setType(QString("SFNode"));
SoProtoInterface31->addChild(*Sofield34);

Sofield* Sofield35 = new Sofield();
Sofield35->setName(QString("rotscalenode"));
Sofield35->setAccessType(QString("initializeOnly"));
Sofield35->setType(QString("SFNode"));
SoProtoInterface31->addChild(*Sofield35);

Sofield* Sofield36 = new Sofield();
Sofield36->setName(QString("set_startpoint"));
Sofield36->setAccessType(QString("inputOnly"));
Sofield36->setType(QString("SFVec3f"));
SoProtoInterface31->addChild(*Sofield36);

Sofield* Sofield37 = new Sofield();
Sofield37->setName(QString("set_endpoint"));
Sofield37->setAccessType(QString("inputOnly"));
Sofield37->setType(QString("SFVec3f"));
SoProtoInterface31->addChild(*Sofield37);

SoProtoDeclare30->addChild(*SoProtoInterface31);

SoProtoBody* SoProtoBody38 = new SoProtoBody();
SoScript* SoScript39 = new SoScript();
SoScript39->setDEF(QString("S1"));
Sofield* Sofield40 = new Sofield();
Sofield40->setName(QString("startnode"));
Sofield40->setAccessType(QString("initializeOnly"));
Sofield40->setType(QString("SFNode"));
SoScript39->addChild(*Sofield40);

Sofield* Sofield41 = new Sofield();
Sofield41->setName(QString("endnode"));
Sofield41->setAccessType(QString("initializeOnly"));
Sofield41->setType(QString("SFNode"));
SoScript39->addChild(*Sofield41);

Sofield* Sofield42 = new Sofield();
Sofield42->setName(QString("transnode"));
Sofield42->setAccessType(QString("initializeOnly"));
Sofield42->setType(QString("SFNode"));
SoScript39->addChild(*Sofield42);

Sofield* Sofield43 = new Sofield();
Sofield43->setName(QString("rotscalenode"));
Sofield43->setAccessType(QString("initializeOnly"));
Sofield43->setType(QString("SFNode"));
SoScript39->addChild(*Sofield43);

Sofield* Sofield44 = new Sofield();
Sofield44->setName(QString("set_startpoint"));
Sofield44->setAccessType(QString("inputOnly"));
Sofield44->setType(QString("SFVec3f"));
SoScript39->addChild(*Sofield44);

Sofield* Sofield45 = new Sofield();
Sofield45->setName(QString("set_endpoint"));
Sofield45->setAccessType(QString("inputOnly"));
Sofield45->setType(QString("SFVec3f"));
SoScript39->addChild(*Sofield45);

SoIS* SoIS46 = new SoIS();
Soconnect* Soconnect47 = new Soconnect();
Soconnect47->setNodeField(QString("startnode"));
Soconnect47->setProtoField(QString("startnode"));
SoIS46->addChild(*Soconnect47);

Soconnect* Soconnect48 = new Soconnect();
Soconnect48->setNodeField(QString("endnode"));
Soconnect48->setProtoField(QString("endnode"));
SoIS46->addChild(*Soconnect48);

Soconnect* Soconnect49 = new Soconnect();
Soconnect49->setNodeField(QString("transnode"));
Soconnect49->setProtoField(QString("transnode"));
SoIS46->addChild(*Soconnect49);

Soconnect* Soconnect50 = new Soconnect();
Soconnect50->setNodeField(QString("rotscalenode"));
Soconnect50->setProtoField(QString("rotscalenode"));
SoIS46->addChild(*Soconnect50);

Soconnect* Soconnect51 = new Soconnect();
Soconnect51->setNodeField(QString("set_startpoint"));
Soconnect51->setProtoField(QString("set_startpoint"));
SoIS46->addChild(*Soconnect51);

Soconnect* Soconnect52 = new Soconnect();
Soconnect52->setNodeField(QString("set_endpoint"));
Soconnect52->setProtoField(QString("set_endpoint"));
SoIS46->addChild(*Soconnect52);

SoScript39->addChild(*SoIS46);


//SoScript39->setSourceCode(QString("ecmascript:")+
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
SoProtoBody38->addChild(*SoScript39);

SoProtoDeclare30->addChild(*SoProtoBody38);

SoNode7->addChild(*SoProtoDeclare30);

SoProtoInstance* SoProtoInstance53 = new SoProtoInstance();
SoProtoInstance53->setName(QString("x3dconnector"));
SoProtoInstance53->setDEF(QString("connector1"));
SoField* SoField54 = new SoField();
SoField54->setName(QString("startnode"));
SoTransform* SoTransform55 = new SoTransform();
SoTransform55->setUSE(QString("G1"));
SoField54->addChild(*SoTransform55);

SoProtoInstance53->addChild(*SoField54);

SoField* SoField56 = new SoField();
SoField56->setName(QString("endnode"));
SoTransform* SoTransform57 = new SoTransform();
SoTransform57->setUSE(QString("G2"));
SoField56->addChild(*SoTransform57);

SoProtoInstance53->addChild(*SoField56);

SoField* SoField58 = new SoField();
SoField58->setName(QString("transnode"));
SoTransform* SoTransform59 = new SoTransform();
SoTransform59->setUSE(QString("transC1"));
SoField58->addChild(*SoTransform59);

SoProtoInstance53->addChild(*SoField58);

SoField* SoField60 = new SoField();
SoField60->setName(QString("rotscalenode"));
SoTransform* SoTransform61 = new SoTransform();
SoTransform61->setUSE(QString("rotscaleC1"));
SoField60->addChild(*SoTransform61);

SoProtoInstance53->addChild(*SoField60);

SoField* SoField62 = new SoField();
SoField62->setName(QString("set_startpoint"));
SoProtoInstance53->addChild(*SoField62);

SoField* SoField63 = new SoField();
SoField63->setName(QString("set_endpoint"));
SoProtoInstance53->addChild(*SoField63);

SoNode7->addChild(*SoProtoInstance53);

SoROUTE* SoROUTE64 = new SoROUTE();
SoROUTE64->setFromNode(QString("G1"));
SoROUTE64->setFromField(QString("translation_changed"));
SoROUTE64->setToNode(QString("connector1"));
SoROUTE64->setToField(QString("set_startpoint"));
SoNode7->addChild(*SoROUTE64);

SoROUTE* SoROUTE65 = new SoROUTE();
SoROUTE65->setFromNode(QString("G2"));
SoROUTE65->setFromField(QString("translation_changed"));
SoROUTE65->setToNode(QString("connector1"));
SoROUTE65->setToField(QString("set_endpoint"));
SoNode7->addChild(*SoROUTE65);

SoSceneManager0->setSceneGraph(*SoNode7);

return 0;
}
