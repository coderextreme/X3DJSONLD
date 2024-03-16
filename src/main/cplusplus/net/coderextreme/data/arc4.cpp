/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/CylinderExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Abstracts.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/Concretes.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/CylinderExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile("Immersive");
X3D0->setVersion("3.3");
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("arc4.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("creator");
meta3->setContent("Lost, Doug Sanden I think");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("generator");
meta4->setContent("manual");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("identifier");
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("description");
meta6->setContent("a generic proto to connect two objects");
head1->addMeta(meta6);

X3D0->setHead(head1);

Scene* Scene7 = new Scene();
Viewpoint* Viewpoint8 = new Viewpoint();
Viewpoint8->setPosition(new float[3]{0,0,5});
Viewpoint8->setDescription("Only Viewpoint");
Scene7->addChild(Viewpoint8);

Background* Background9 = new Background();
Background9->setSkyColor(new float[3]{0.4,0.4,0.4});
Scene7->addChild(Background9);

Transform* Transform10 = new Transform();
Transform10->setDEF("DECLpoint_G1_node");
Shape* Shape11 = new Shape();
Sphere* Sphere12 = new Sphere();
Sphere12->setRadius(0.1);
Shape11->setGeometry(Sphere12);

Appearance* Appearance13 = new Appearance();
Material* Material14 = new Material();
Material14->setDiffuseColor(new float[3]{1,0,0});
Appearance13->setMaterial(Material14);

Shape11->setAppearance(Appearance13);

Transform10->addChild(Shape11);

PositionInterpolator* PositionInterpolator15 = new PositionInterpolator();
PositionInterpolator15->setDEF("DECLpoint_G1_PI1");
PositionInterpolator15->setKey(new float[2]{0,1}, 2);
PositionInterpolator15->setKeyValue(new float[6]{0,0,0,0,5,0});
Transform10->addChild(PositionInterpolator15);

Script* Script16 = new Script();
Script16->setDEF("DECLpoint_G1_MB1");
field* field17 = new field();
field17->setName("translation");
field17->setAccessType("inputOutput");
field17->setType("SFVec3f");
field17->setValue("0 0 0");
Script16->addField(field17);

field* field18 = new field();
field18->setName("old");
field18->setAccessType("inputOutput");
field18->setType("SFVec3f");
field18->setValue("0 0 0");
Script16->addField(field18);

field* field19 = new field();
field19->setName("set_location");
field19->setAccessType("inputOnly");
field19->setType("SFTime");
Script16->addField(field19);

field* field20 = new field();
field20->setName("keyValue");
field20->setAccessType("inputOutput");
field20->setType("MFVec3f");
field20->setValue("0 0 0 0 5 0");
Script16->addField(field20);


Script16.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}`)
Transform10->addChild(Script16);

TimeSensor* TimeSensor21 = new TimeSensor();
TimeSensor21->setDEF("DECLpoint_G1_CL1");
TimeSensor21->setCycleInterval(3);
TimeSensor21->setLoop(True);
Transform10->addChild(TimeSensor21);

ROUTE* ROUTE22 = new ROUTE();
ROUTE22->setFromNode("DECLpoint_G1_CL1");
ROUTE22->setFromField("cycleTime");
ROUTE22->setToNode("DECLpoint_G1_MB1");
ROUTE22->setToField("set_location");
Transform10->addChild(ROUTE22);

ROUTE* ROUTE23 = new ROUTE();
ROUTE23->setFromNode("DECLpoint_G1_CL1");
ROUTE23->setFromField("fraction_changed");
ROUTE23->setToNode("DECLpoint_G1_PI1");
ROUTE23->setToField("set_fraction");
Transform10->addChild(ROUTE23);

ROUTE* ROUTE24 = new ROUTE();
ROUTE24->setFromNode("DECLpoint_G1_MB1");
ROUTE24->setFromField("keyValue");
ROUTE24->setToNode("DECLpoint_G1_PI1");
ROUTE24->setToField("keyValue");
Transform10->addChild(ROUTE24);

ROUTE* ROUTE25 = new ROUTE();
ROUTE25->setFromNode("DECLpoint_G1_PI1");
ROUTE25->setFromField("value_changed");
ROUTE25->setToNode("DECLpoint_G1_node");
ROUTE25->setToField("set_translation");
Transform10->addChild(ROUTE25);

Scene7->addChild(Transform10);

Transform* Transform26 = new Transform();
Transform26->setDEF("DECLpoint_G2_node");
Shape* Shape27 = new Shape();
Sphere* Sphere28 = new Sphere();
Sphere28->setRadius(0.1);
Shape27->setGeometry(Sphere28);

Appearance* Appearance29 = new Appearance();
Material* Material30 = new Material();
Material30->setDiffuseColor(new float[3]{1,0,0});
Appearance29->setMaterial(Material30);

Shape27->setAppearance(Appearance29);

Transform26->addChild(Shape27);

PositionInterpolator* PositionInterpolator31 = new PositionInterpolator();
PositionInterpolator31->setDEF("DECLpoint_G2_PI1");
PositionInterpolator31->setKey(new float[2]{0,1}, 2);
PositionInterpolator31->setKeyValue(new float[6]{0,0,0,0,5,0});
Transform26->addChild(PositionInterpolator31);

Script* Script32 = new Script();
Script32->setDEF("DECLpoint_G2_MB1");
field* field33 = new field();
field33->setName("translation");
field33->setAccessType("inputOutput");
field33->setType("SFVec3f");
field33->setValue("0 0 0");
Script32->addField(field33);

field* field34 = new field();
field34->setName("old");
field34->setAccessType("inputOutput");
field34->setType("SFVec3f");
field34->setValue("0 0 0");
Script32->addField(field34);

field* field35 = new field();
field35->setName("set_location");
field35->setAccessType("inputOnly");
field35->setType("SFTime");
Script32->addField(field35);

field* field36 = new field();
field36->setName("keyValue");
field36->setAccessType("inputOutput");
field36->setType("MFVec3f");
field36->setValue("0 0 0 0 5 0");
Script32->addField(field36);


Script32.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}`)
Transform26->addChild(Script32);

TimeSensor* TimeSensor37 = new TimeSensor();
TimeSensor37->setDEF("DECLpoint_G2_CL1");
TimeSensor37->setCycleInterval(3);
TimeSensor37->setLoop(True);
Transform26->addChild(TimeSensor37);

ROUTE* ROUTE38 = new ROUTE();
ROUTE38->setFromNode("DECLpoint_G2_CL1");
ROUTE38->setFromField("cycleTime");
ROUTE38->setToNode("DECLpoint_G2_MB1");
ROUTE38->setToField("set_location");
Transform26->addChild(ROUTE38);

ROUTE* ROUTE39 = new ROUTE();
ROUTE39->setFromNode("DECLpoint_G2_CL1");
ROUTE39->setFromField("fraction_changed");
ROUTE39->setToNode("DECLpoint_G2_PI1");
ROUTE39->setToField("set_fraction");
Transform26->addChild(ROUTE39);

ROUTE* ROUTE40 = new ROUTE();
ROUTE40->setFromNode("DECLpoint_G2_MB1");
ROUTE40->setFromField("keyValue");
ROUTE40->setToNode("DECLpoint_G2_PI1");
ROUTE40->setToField("keyValue");
Transform26->addChild(ROUTE40);

ROUTE* ROUTE41 = new ROUTE();
ROUTE41->setFromNode("DECLpoint_G2_PI1");
ROUTE41->setFromField("value_changed");
ROUTE41->setToNode("DECLpoint_G2_node");
ROUTE41->setToField("set_translation");
Transform26->addChild(ROUTE41);

Scene7->addChild(Transform26);

Group* Group42 = new Group();
Transform* Transform43 = new Transform();
Transform43->setDEF("DECLx3dconnector_connector1_trans");
Transform* Transform44 = new Transform();
Transform44->setDEF("DECLx3dconnector_connector1_rotscale");
Shape* Shape45 = new Shape();
Appearance* Appearance46 = new Appearance();
Material* Material47 = new Material();
Material47->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material47->setTransparency(0.5);
Appearance46->setMaterial(Material47);

Shape45->setAppearance(Appearance46);

Cylinder* Cylinder48 = new Cylinder();
Cylinder48->setRadius(0.05);
Shape45->setGeometry(Cylinder48);

Transform44->addChild(Shape45);

Transform43->addChild(Transform44);

Group42->addChild(Transform43);

Script* Script49 = new Script();
Script49->setDEF("DECLx3dconnector_connector1_S1");
field* field50 = new field();
field50->setName("startnode");
field50->setAccessType("initializeOnly");
field50->setType("SFNode");
Script49->addField(field50);

field* field51 = new field();
field51->setName("endnode");
field51->setAccessType("initializeOnly");
field51->setType("SFNode");
Script49->addField(field51);

field* field52 = new field();
field52->setName("position");
field52->setAccessType("inputOutput");
field52->setType("SFNode");
Transform* Transform53 = new Transform();
Transform53->setUSE("DECLx3dconnector_connector1_trans");
field52->addChild(Transform53);

Script49->addField(field52);

field* field54 = new field();
field54->setName("rotscale");
field54->setAccessType("inputOutput");
field54->setType("SFNode");
Transform* Transform55 = new Transform();
Transform55->setUSE("DECLx3dconnector_connector1_rotscale");
field54->addChild(Transform55);

Script49->addField(field54);

field* field56 = new field();
field56->setName("set_startpoint");
field56->setAccessType("inputOnly");
field56->setType("SFVec3f");
Script49->addField(field56);

field* field57 = new field();
field57->setName("set_endpoint");
field57->setAccessType("inputOnly");
field57->setType("SFVec3f");
Script49->addField(field57);


Script49.setSourceCode(`ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"		    if (typeof Quaternion !== 'undefined') {\n"+
"			    return {\n"+
"				    scale : new SFVec3f(1.0,1.0,1.0),\n"+
"				    translation : new SFVec3f(1.0,1.0,1.0),\n"+
"			    	    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), 1.0)\n"+
"			    };\n"+
"	    	    } else if (typeof SFRotation !== 'undefined') {\n"+
"			    return {\n"+
"				    scale : new SFVec3f(1.0,1.0,1.0),\n"+
"				    translation : new SFVec3f(1.0,1.0,1.0),\n"+
"			    	    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),1.0)\n"+
"			    };\n"+
"	    	    } else {\n"+
"			    return {\n"+
"				    scale : new SFVec3f(1.0,1.0,1.0),\n"+
"				    translation : new SFVec3f(1.0,1.0,1.0)\n"+
"			    };\n"+
"		    }\n"+
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
"	      position.translation = trafo.translation;\n"+
"	      rotscale.rotation = trafo.rotation;\n"+
"	      rotscale.scale = trafo.scale;\n"+
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
Group42->addChild(Script49);

Scene7->addChild(Group42);

ROUTE* ROUTE58 = new ROUTE();
ROUTE58->setFromNode("DECLpoint_G1_node");
ROUTE58->setFromField("translation_changed");
ROUTE58->setToNode("DECLx3dconnector_connector1_S1");
ROUTE58->setToField("set_startpoint");
Scene7->addChild(ROUTE58);

ROUTE* ROUTE59 = new ROUTE();
ROUTE59->setFromNode("DECLpoint_G2_node");
ROUTE59->setFromField("translation_changed");
ROUTE59->setToNode("DECLx3dconnector_connector1_S1");
ROUTE59->setToField("set_endpoint");
Scene7->addChild(ROUTE59);

X3D0->setScene(Scene7);

X3D0->toXMLString();
}
