/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/stylesheets/cpp/concretes.h"
int main(int argc, char ** argv) {
CX3DScene m_pScene;
CBrowser browser = X3D.getBrowser();
CX3D* X3D0 = new CX3D();
CGroup* group = (CGroup*)(m_pScene.createNode("Group"));
group->addChildren(X3D0);
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
Chead* head1 = new Chead();
Cmeta* meta2 = new Cmeta();
meta2->setName("title");
meta2->setContent("arc2.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("Lost, Doug Sanden I think");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("generator");
meta4->setContent("manual");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("identifier");
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("description");
meta6->setContent("a generic proto to connect two objects");
head1->addMeta(*meta6);

X3D0->setHead(*head1);

CScene* Scene7 = new CScene();
CViewpoint* Viewpoint8 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint8->setPosition(new float[3]{0,0,5});
Viewpoint8->setDescription("Only Viewpoint");
group->addChildren(*Viewpoint8);

CBackground* Background9 = (CBackground *)(m_pScene.createNode("Background"));
Background9->setSkyColor(new float[3]{0.4,0.4,0.4});
group->addChildren(*Background9);

CTransform* Transform10 = (CTransform *)(m_pScene.createNode("Transform"));
Transform10->setDEF("G1");
CTransform* Transform11 = (CTransform *)(m_pScene.createNode("Transform"));
Transform11->setDEF("DECLpoint_INSTANCE_node");
CShape* Shape12 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere13 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere13->setRadius(0.1);
Shape12->setGeometry(Sphere13);

CAppearance* Appearance14 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material15 = (CMaterial *)(m_pScene.createNode("Material"));
Material15->setDiffuseColor(new float[3]{1,0,0});
Appearance14->setMaterial(*Material15);

Shape12->setAppearance(*Appearance14);

Transform11->addChild(*Shape12);

CPositionInterpolator* PositionInterpolator16 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator16->setDEF("DECLpoint_INSTANCE_PI1");
PositionInterpolator16->setKey(new float[2]{0,1}, 2);
PositionInterpolator16->setKeyValue(new float[6]{0,0,0,0,5,0});
Transform11->addChildren(*PositionInterpolator16);

CScript* Script17 = (CScript *)(m_pScene.createNode("Script"));
Script17->setDEF("DECLpoint_INSTANCE_MB1");
Cfield* field18 = new Cfield();
field18->setName("translation");
field18->setAccessType("inputOutput");
field18->setType("SFVec3f");
field18->setValue("0 0 0");
Script17->addField(*field18);

Cfield* field19 = new Cfield();
field19->setName("old");
field19->setAccessType("inputOutput");
field19->setType("SFVec3f");
field19->setValue("0 0 0");
Script17->addField(*field19);

Cfield* field20 = new Cfield();
field20->setName("set_location");
field20->setAccessType("inputOnly");
field20->setType("SFTime");
Script17->addField(*field20);

Cfield* field21 = new Cfield();
field21->setName("keyValue");
field21->setAccessType("inputOutput");
field21->setType("MFVec3f");
field21->setValue("0 0 0 0 5 0");
Script17->addField(*field21);


Script17.setSourceCode(`ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }`)
Transform11->addChildren(*Script17);

CTimeSensor* TimeSensor22 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor22->setDEF("DECLpoint_INSTANCE_CL1");
TimeSensor22->setCycleInterval(3);
TimeSensor22->setLoop(True);
Transform11->addChildren(*TimeSensor22);

CROUTE* ROUTE23 = new CROUTE();
ROUTE23->setFromNode("DECLpoint_INSTANCE_CL1");
ROUTE23->setFromField("cycleTime");
ROUTE23->setToNode("DECLpoint_INSTANCE_MB1");
ROUTE23->setToField("set_location");
Transform11->addChildren(*ROUTE23);

CROUTE* ROUTE24 = new CROUTE();
ROUTE24->setFromNode("DECLpoint_INSTANCE_CL1");
ROUTE24->setFromField("fraction_changed");
ROUTE24->setToNode("DECLpoint_INSTANCE_PI1");
ROUTE24->setToField("set_fraction");
Transform11->addChildren(*ROUTE24);

CROUTE* ROUTE25 = new CROUTE();
ROUTE25->setFromNode("DECLpoint_INSTANCE_MB1");
ROUTE25->setFromField("keyValue");
ROUTE25->setToNode("DECLpoint_INSTANCE_PI1");
ROUTE25->setToField("keyValue");
Transform11->addChildren(*ROUTE25);

CROUTE* ROUTE26 = new CROUTE();
ROUTE26->setFromNode("DECLpoint_INSTANCE_PI1");
ROUTE26->setFromField("value_changed");
ROUTE26->setToNode("DECLpoint_INSTANCE_node");
ROUTE26->setToField("set_translation");
Transform11->addChildren(*ROUTE26);

CROUTE* ROUTE27 = new CROUTE();
ROUTE27->setFromNode("DECLpoint_INSTANCE_MB1");
ROUTE27->setFromField("translation_changed");
ROUTE27->setToNode("DECLpoint_INSTANCE_node");
ROUTE27->setToField("set_translation");
Transform11->addChildren(*ROUTE27);

Transform10->addChildren(*Transform11);

group->addChildren(*Transform10);

CTransform* Transform28 = (CTransform *)(m_pScene.createNode("Transform"));
Transform28->setDEF("G2");
CTransform* Transform29 = (CTransform *)(m_pScene.createNode("Transform"));
Transform29->setDEF("DECLpoint_INSTANCE1000_node");
CShape* Shape30 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere31 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere31->setRadius(0.1);
Shape30->setGeometry(Sphere31);

CAppearance* Appearance32 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material33 = (CMaterial *)(m_pScene.createNode("Material"));
Material33->setDiffuseColor(new float[3]{1,0,0});
Appearance32->setMaterial(*Material33);

Shape30->setAppearance(*Appearance32);

Transform29->addChild(*Shape30);

CPositionInterpolator* PositionInterpolator34 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator34->setDEF("DECLpoint_INSTANCE1000_PI1");
PositionInterpolator34->setKey(new float[2]{0,1}, 2);
PositionInterpolator34->setKeyValue(new float[6]{0,0,0,0,5,0});
Transform29->addChildren(*PositionInterpolator34);

CScript* Script35 = (CScript *)(m_pScene.createNode("Script"));
Script35->setDEF("DECLpoint_INSTANCE1000_MB1");
Cfield* field36 = new Cfield();
field36->setName("translation");
field36->setAccessType("inputOutput");
field36->setType("SFVec3f");
field36->setValue("0 0 0");
Script35->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("old");
field37->setAccessType("inputOutput");
field37->setType("SFVec3f");
field37->setValue("0 0 0");
Script35->addField(*field37);

Cfield* field38 = new Cfield();
field38->setName("set_location");
field38->setAccessType("inputOnly");
field38->setType("SFTime");
Script35->addField(*field38);

Cfield* field39 = new Cfield();
field39->setName("keyValue");
field39->setAccessType("inputOutput");
field39->setType("MFVec3f");
field39->setValue("0 0 0 0 5 0");
Script35->addField(*field39);


Script35.setSourceCode(`ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }`)
Transform29->addChildren(*Script35);

CTimeSensor* TimeSensor40 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor40->setDEF("DECLpoint_INSTANCE1000_CL1");
TimeSensor40->setCycleInterval(3);
TimeSensor40->setLoop(True);
Transform29->addChildren(*TimeSensor40);

CROUTE* ROUTE41 = new CROUTE();
ROUTE41->setFromNode("DECLpoint_INSTANCE1000_CL1");
ROUTE41->setFromField("cycleTime");
ROUTE41->setToNode("DECLpoint_INSTANCE1000_MB1");
ROUTE41->setToField("set_location");
Transform29->addChildren(*ROUTE41);

CROUTE* ROUTE42 = new CROUTE();
ROUTE42->setFromNode("DECLpoint_INSTANCE1000_CL1");
ROUTE42->setFromField("fraction_changed");
ROUTE42->setToNode("DECLpoint_INSTANCE1000_PI1");
ROUTE42->setToField("set_fraction");
Transform29->addChildren(*ROUTE42);

CROUTE* ROUTE43 = new CROUTE();
ROUTE43->setFromNode("DECLpoint_INSTANCE1000_MB1");
ROUTE43->setFromField("keyValue");
ROUTE43->setToNode("DECLpoint_INSTANCE1000_PI1");
ROUTE43->setToField("keyValue");
Transform29->addChildren(*ROUTE43);

CROUTE* ROUTE44 = new CROUTE();
ROUTE44->setFromNode("DECLpoint_INSTANCE1000_PI1");
ROUTE44->setFromField("value_changed");
ROUTE44->setToNode("DECLpoint_INSTANCE1000_node");
ROUTE44->setToField("set_translation");
Transform29->addChildren(*ROUTE44);

CROUTE* ROUTE45 = new CROUTE();
ROUTE45->setFromNode("DECLpoint_INSTANCE1000_MB1");
ROUTE45->setFromField("translation_changed");
ROUTE45->setToNode("DECLpoint_INSTANCE1000_node");
ROUTE45->setToField("set_translation");
Transform29->addChildren(*ROUTE45);

Transform28->addChildren(*Transform29);

group->addChildren(*Transform28);

CTransform* Transform46 = (CTransform *)(m_pScene.createNode("Transform"));
Transform46->setDEF("transC1");
CTransform* Transform47 = (CTransform *)(m_pScene.createNode("Transform"));
Transform47->setDEF("rotscaleC1");
CShape* Shape48 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance49 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material50 = (CMaterial *)(m_pScene.createNode("Material"));
Material50->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material50->setTransparency(0.5);
Appearance49->setMaterial(*Material50);

Shape48->setAppearance(*Appearance49);

CCylinder* Cylinder51 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder51->setRadius(0.05);
Shape48->setGeometry(Cylinder51);

Transform47->addChild(*Shape48);

Transform46->addChildren(*Transform47);

group->addChildren(*Transform46);

CScript* Script52 = (CScript *)(m_pScene.createNode("Script"));
Script52->setDEF("DECLx3dconnector_connector1_S1");
Cfield* field53 = new Cfield();
field53->setName("startnode");
field53->setAccessType("initializeOnly");
field53->setType("SFNode");
CTransform* Transform54 = (CTransform *)(m_pScene.createNode("Transform"));
Transform54->setUSE("G1");
field53->addChildren(*Transform54);

Script52->addField(*field53);

Cfield* field55 = new Cfield();
field55->setName("endnode");
field55->setAccessType("initializeOnly");
field55->setType("SFNode");
CTransform* Transform56 = (CTransform *)(m_pScene.createNode("Transform"));
Transform56->setUSE("G2");
field55->addChildren(*Transform56);

Script52->addField(*field55);

Cfield* field57 = new Cfield();
field57->setName("transC1");
field57->setAccessType("initializeOnly");
field57->setType("SFNode");
CTransform* Transform58 = (CTransform *)(m_pScene.createNode("Transform"));
Transform58->setUSE("transC1");
field57->addChildren(*Transform58);

Script52->addField(*field57);

Cfield* field59 = new Cfield();
field59->setName("rotscaleC1");
field59->setAccessType("initializeOnly");
field59->setType("SFNode");
CTransform* Transform60 = (CTransform *)(m_pScene.createNode("Transform"));
Transform60->setUSE("rotscaleC1");
field59->addChildren(*Transform60);

Script52->addField(*field59);

Cfield* field61 = new Cfield();
field61->setName("set_startpoint");
field61->setAccessType("inputOnly");
field61->setType("SFVec3f");
Script52->addField(*field61);

Cfield* field62 = new Cfield();
field62->setName("set_endpoint");
field62->setAccessType("inputOnly");
field62->setType("SFVec3f");
Script52->addField(*field62);


Script52.setSourceCode(`ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"		return;\n"+
"	    }\n"+
"            var dif = endpoint.subtract(startpoint);\n"+
"            var dist = dif.length()*0.5;\n"+
"            var dif2 = dif.multiply(0.5);\n"+
"            var norm = dif.normalize();\n"+
"            var transl = startpoint.add(dif2);\n"+
"	    if (typeof Quaternion !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      transC1.translation = trafo.translation;\n"+
"	      rotscaleC1.rotation = trafo.rotation;\n"+
"	      rotscaleC1.scale = trafo.scale;\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val);\n"+
"        }`)
group->addChildren(*Script52);

CROUTE* ROUTE63 = new CROUTE();
ROUTE63->setFromNode("G1");
ROUTE63->setFromField("translation_changed");
ROUTE63->setToNode("DECLx3dconnector_connector1_S1");
ROUTE63->setToField("set_startpoint");
group->addChildren(*ROUTE63);

CROUTE* ROUTE64 = new CROUTE();
ROUTE64->setFromNode("G2");
ROUTE64->setFromField("translation_changed");
ROUTE64->setToNode("DECLx3dconnector_connector1_S1");
ROUTE64->setToField("set_endpoint");
group->addChildren(*ROUTE64);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
