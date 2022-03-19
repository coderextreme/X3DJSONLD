/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Concretes.h"
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
meta2->setContent("arc3.x3d");
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
meta5->setContent("https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d");
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
Transform10->setDEF("DECLpoint_G1_node");
CShape* Shape11 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere12 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere12->setRadius(0.1);
Shape11->setGeometry(Sphere12);

CAppearance* Appearance13 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material14 = (CMaterial *)(m_pScene.createNode("Material"));
Material14->setDiffuseColor(new float[3]{1,0,0});
Appearance13->setMaterial(*Material14);

Shape11->setAppearance(*Appearance13);

Transform10->addChildren(*Shape11);

CPositionInterpolator* PositionInterpolator15 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator15->setDEF("DECLpoint_G1_PI1");
PositionInterpolator15->setKey(new float[2]{0,1}, 2);
PositionInterpolator15->setKeyValue(new float[6]{0,0,0,0,5,0});
Transform10->addChildren(*PositionInterpolator15);

CScript* Script16 = (CScript *)(m_pScene.createNode("Script"));
Script16->setDEF("DECLpoint_G1_MB1");
Cfield* field17 = new Cfield();
field17->setName("translation");
field17->setAccessType("inputOutput");
field17->setType("SFVec3f");
field17->setValue("0 0 0");
Script16->addField(*field17);

Cfield* field18 = new Cfield();
field18->setName("old");
field18->setAccessType("inputOutput");
field18->setType("SFVec3f");
field18->setValue("0 0 0");
Script16->addField(*field18);

Cfield* field19 = new Cfield();
field19->setName("set_location");
field19->setAccessType("inputOnly");
field19->setType("SFTime");
Script16->addField(*field19);

Cfield* field20 = new Cfield();
field20->setName("keyValue");
field20->setAccessType("inputOutput");
field20->setType("MFVec3f");
field20->setValue("0 0 0 0 5 0");
Script16->addField(*field20);


Script16.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}`)
Transform10->addChildren(*Script16);

CTimeSensor* TimeSensor21 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor21->setDEF("DECLpoint_G1_CL1");
TimeSensor21->setCycleInterval(3);
TimeSensor21->setLoop(True);
Transform10->addChildren(*TimeSensor21);

CROUTE* ROUTE22 = new CROUTE();
ROUTE22->setFromNode("DECLpoint_G1_CL1");
ROUTE22->setFromField("cycleTime");
ROUTE22->setToNode("DECLpoint_G1_MB1");
ROUTE22->setToField("set_location");
Transform10->addChildren(*ROUTE22);

CROUTE* ROUTE23 = new CROUTE();
ROUTE23->setFromNode("DECLpoint_G1_CL1");
ROUTE23->setFromField("fraction_changed");
ROUTE23->setToNode("DECLpoint_G1_PI1");
ROUTE23->setToField("set_fraction");
Transform10->addChildren(*ROUTE23);

CROUTE* ROUTE24 = new CROUTE();
ROUTE24->setFromNode("DECLpoint_G1_MB1");
ROUTE24->setFromField("keyValue");
ROUTE24->setToNode("DECLpoint_G1_PI1");
ROUTE24->setToField("keyValue");
Transform10->addChildren(*ROUTE24);

CROUTE* ROUTE25 = new CROUTE();
ROUTE25->setFromNode("DECLpoint_G1_PI1");
ROUTE25->setFromField("value_changed");
ROUTE25->setToNode("DECLpoint_G1_node");
ROUTE25->setToField("set_translation");
Transform10->addChildren(*ROUTE25);

group->addChildren(*Transform10);

CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
Transform26->setDEF("DECLpoint_G2_node");
CShape* Shape27 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere28 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere28->setRadius(0.1);
Shape27->setGeometry(Sphere28);

CAppearance* Appearance29 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material30 = (CMaterial *)(m_pScene.createNode("Material"));
Material30->setDiffuseColor(new float[3]{1,0,0});
Appearance29->setMaterial(*Material30);

Shape27->setAppearance(*Appearance29);

Transform26->addChildren(*Shape27);

CPositionInterpolator* PositionInterpolator31 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator31->setDEF("DECLpoint_G2_PI1");
PositionInterpolator31->setKey(new float[2]{0,1}, 2);
PositionInterpolator31->setKeyValue(new float[6]{0,0,0,0,5,0});
Transform26->addChildren(*PositionInterpolator31);

CScript* Script32 = (CScript *)(m_pScene.createNode("Script"));
Script32->setDEF("DECLpoint_G2_MB1");
Cfield* field33 = new Cfield();
field33->setName("translation");
field33->setAccessType("inputOutput");
field33->setType("SFVec3f");
field33->setValue("0 0 0");
Script32->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("old");
field34->setAccessType("inputOutput");
field34->setType("SFVec3f");
field34->setValue("0 0 0");
Script32->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("set_location");
field35->setAccessType("inputOnly");
field35->setType("SFTime");
Script32->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("keyValue");
field36->setAccessType("inputOutput");
field36->setType("MFVec3f");
field36->setValue("0 0 0 0 5 0");
Script32->addField(*field36);


Script32.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}`)
Transform26->addChildren(*Script32);

CTimeSensor* TimeSensor37 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor37->setDEF("DECLpoint_G2_CL1");
TimeSensor37->setCycleInterval(3);
TimeSensor37->setLoop(True);
Transform26->addChildren(*TimeSensor37);

CROUTE* ROUTE38 = new CROUTE();
ROUTE38->setFromNode("DECLpoint_G2_CL1");
ROUTE38->setFromField("cycleTime");
ROUTE38->setToNode("DECLpoint_G2_MB1");
ROUTE38->setToField("set_location");
Transform26->addChildren(*ROUTE38);

CROUTE* ROUTE39 = new CROUTE();
ROUTE39->setFromNode("DECLpoint_G2_CL1");
ROUTE39->setFromField("fraction_changed");
ROUTE39->setToNode("DECLpoint_G2_PI1");
ROUTE39->setToField("set_fraction");
Transform26->addChildren(*ROUTE39);

CROUTE* ROUTE40 = new CROUTE();
ROUTE40->setFromNode("DECLpoint_G2_MB1");
ROUTE40->setFromField("keyValue");
ROUTE40->setToNode("DECLpoint_G2_PI1");
ROUTE40->setToField("keyValue");
Transform26->addChildren(*ROUTE40);

CROUTE* ROUTE41 = new CROUTE();
ROUTE41->setFromNode("DECLpoint_G2_PI1");
ROUTE41->setFromField("value_changed");
ROUTE41->setToNode("DECLpoint_G2_node");
ROUTE41->setToField("set_translation");
Transform26->addChildren(*ROUTE41);

group->addChildren(*Transform26);

CGroup* Group42 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform43 = (CTransform *)(m_pScene.createNode("Transform"));
Transform43->setDEF("DECLx3dconnector_connector1_trans");
CTransform* Transform44 = (CTransform *)(m_pScene.createNode("Transform"));
Transform44->setDEF("DECLx3dconnector_connector1_rotscale");
CShape* Shape45 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance46 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material47 = (CMaterial *)(m_pScene.createNode("Material"));
Material47->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material47->setTransparency(0.5);
Appearance46->setMaterial(*Material47);

Shape45->setAppearance(*Appearance46);

CCylinder* Cylinder48 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder48->setRadius(0.05);
Shape45->setGeometry(Cylinder48);

Transform44->addChildren(*Shape45);

Transform43->addChildren(*Transform44);

Group42->addChildren(*Transform43);

CScript* Script49 = (CScript *)(m_pScene.createNode("Script"));
Script49->setDEF("DECLx3dconnector_connector1_S1");
Cfield* field50 = new Cfield();
field50->setName("startnode");
field50->setAccessType("initializeOnly");
field50->setType("SFNode");
CGroup* Group51 = (CGroup *)(m_pScene.createNode("Group"));
Group51->setUSE("DECLpoint_G1_node");
field50->addChildren(*Group51);

Script49->addField(*field50);

Cfield* field52 = new Cfield();
field52->setName("endnode");
field52->setAccessType("initializeOnly");
field52->setType("SFNode");
CGroup* Group53 = (CGroup *)(m_pScene.createNode("Group"));
Group53->setUSE("DECLpoint_G2_node");
field52->addChildren(*Group53);

Script49->addField(*field52);

Cfield* field54 = new Cfield();
field54->setName("position");
field54->setAccessType("inputOutput");
field54->setType("SFNode");
CTransform* Transform55 = (CTransform *)(m_pScene.createNode("Transform"));
Transform55->setUSE("DECLx3dconnector_connector1_trans");
field54->addChildren(*Transform55);

Script49->addField(*field54);

Cfield* field56 = new Cfield();
field56->setName("rotscale");
field56->setAccessType("inputOutput");
field56->setType("SFNode");
CTransform* Transform57 = (CTransform *)(m_pScene.createNode("Transform"));
Transform57->setUSE("DECLx3dconnector_connector1_rotscale");
field56->addChildren(*Transform57);

Script49->addField(*field56);

Cfield* field58 = new Cfield();
field58->setName("set_startpoint");
field58->setAccessType("inputOnly");
field58->setType("SFVec3f");
Script49->addField(*field58);

Cfield* field59 = new Cfield();
field59->setName("set_endpoint");
field59->setAccessType("inputOnly");
field59->setType("SFVec3f");
Script49->addField(*field59);


Script49.setSourceCode(`ecmascript:\n"+
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
"	    } else if (typeof SFRotation !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      if (trafo) {\n"+
"		      position.translation = trafo.translation;\n"+
"		      rotscale.rotation = trafo.rotation;\n"+
"		      rotscale.scale = trafo.scale;\n"+
"	      }\n"+
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
Group42->addChildren(*Script49);

group->addChildren(*Group42);

CROUTE* ROUTE60 = new CROUTE();
ROUTE60->setFromNode("DECLpoint_G1_node");
ROUTE60->setFromField("translation");
ROUTE60->setToNode("DECLx3dconnector_connector1_S1");
ROUTE60->setToField("set_startpoint");
group->addChildren(*ROUTE60);

CROUTE* ROUTE61 = new CROUTE();
ROUTE61->setFromNode("DECLpoint_G2_node");
ROUTE61->setFromField("translation");
ROUTE61->setToNode("DECLx3dconnector_connector1_S1");
ROUTE61->setToField("set_endpoint");
group->addChildren(*ROUTE61);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
