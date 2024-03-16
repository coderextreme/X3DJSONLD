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
meta2->setContent("arc2.x3d");
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
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d");
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
Transform10->setDEF("G1");
Transform* Transform11 = new Transform();
Transform11->setDEF("DECLpoint_INSTANCE_node");
Shape* Shape12 = new Shape();
Sphere* Sphere13 = new Sphere();
Sphere13->setRadius(0.1);
Shape12->setGeometry(Sphere13);

Appearance* Appearance14 = new Appearance();
Material* Material15 = new Material();
Material15->setDiffuseColor(new float[3]{1,0,0});
Appearance14->setMaterial(Material15);

Shape12->setAppearance(Appearance14);

Transform11->addChild(Shape12);

PositionInterpolator* PositionInterpolator16 = new PositionInterpolator();
PositionInterpolator16->setDEF("DECLpoint_INSTANCE_PI1");
PositionInterpolator16->setKey(new float[2]{0,1}, 2);
PositionInterpolator16->setKeyValue(new float[6]{0,0,0,0,5,0});
Transform11->addChild(PositionInterpolator16);

Script* Script17 = new Script();
Script17->setDEF("DECLpoint_INSTANCE_MB1");
field* field18 = new field();
field18->setName("translation");
field18->setAccessType("inputOutput");
field18->setType("SFVec3f");
field18->setValue("0 0 0");
Script17->addField(field18);

field* field19 = new field();
field19->setName("old");
field19->setAccessType("inputOutput");
field19->setType("SFVec3f");
field19->setValue("0 0 0");
Script17->addField(field19);

field* field20 = new field();
field20->setName("set_location");
field20->setAccessType("inputOnly");
field20->setType("SFTime");
Script17->addField(field20);

field* field21 = new field();
field21->setName("keyValue");
field21->setAccessType("inputOutput");
field21->setType("MFVec3f");
field21->setValue("0 0 0 0 5 0");
Script17->addField(field21);


Script17.setSourceCode(`ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }`)
Transform11->addChild(Script17);

TimeSensor* TimeSensor22 = new TimeSensor();
TimeSensor22->setDEF("DECLpoint_INSTANCE_CL1");
TimeSensor22->setCycleInterval(3);
TimeSensor22->setLoop(True);
Transform11->addChild(TimeSensor22);

ROUTE* ROUTE23 = new ROUTE();
ROUTE23->setFromNode("DECLpoint_INSTANCE_CL1");
ROUTE23->setFromField("cycleTime");
ROUTE23->setToNode("DECLpoint_INSTANCE_MB1");
ROUTE23->setToField("set_location");
Transform11->addChild(ROUTE23);

ROUTE* ROUTE24 = new ROUTE();
ROUTE24->setFromNode("DECLpoint_INSTANCE_CL1");
ROUTE24->setFromField("fraction_changed");
ROUTE24->setToNode("DECLpoint_INSTANCE_PI1");
ROUTE24->setToField("set_fraction");
Transform11->addChild(ROUTE24);

ROUTE* ROUTE25 = new ROUTE();
ROUTE25->setFromNode("DECLpoint_INSTANCE_MB1");
ROUTE25->setFromField("keyValue");
ROUTE25->setToNode("DECLpoint_INSTANCE_PI1");
ROUTE25->setToField("keyValue");
Transform11->addChild(ROUTE25);

ROUTE* ROUTE26 = new ROUTE();
ROUTE26->setFromNode("DECLpoint_INSTANCE_PI1");
ROUTE26->setFromField("value_changed");
ROUTE26->setToNode("DECLpoint_INSTANCE_node");
ROUTE26->setToField("set_translation");
Transform11->addChild(ROUTE26);

ROUTE* ROUTE27 = new ROUTE();
ROUTE27->setFromNode("DECLpoint_INSTANCE_MB1");
ROUTE27->setFromField("translation_changed");
ROUTE27->setToNode("DECLpoint_INSTANCE_node");
ROUTE27->setToField("set_translation");
Transform11->addChild(ROUTE27);

Transform10->addChild(Transform11);

Scene7->addChild(Transform10);

Transform* Transform28 = new Transform();
Transform28->setDEF("G2");
Transform* Transform29 = new Transform();
Transform29->setDEF("DECLpoint_INSTANCE1000_node");
Shape* Shape30 = new Shape();
Sphere* Sphere31 = new Sphere();
Sphere31->setRadius(0.1);
Shape30->setGeometry(Sphere31);

Appearance* Appearance32 = new Appearance();
Material* Material33 = new Material();
Material33->setDiffuseColor(new float[3]{1,0,0});
Appearance32->setMaterial(Material33);

Shape30->setAppearance(Appearance32);

Transform29->addChild(Shape30);

PositionInterpolator* PositionInterpolator34 = new PositionInterpolator();
PositionInterpolator34->setDEF("DECLpoint_INSTANCE1000_PI1");
PositionInterpolator34->setKey(new float[2]{0,1}, 2);
PositionInterpolator34->setKeyValue(new float[6]{0,0,0,0,5,0});
Transform29->addChild(PositionInterpolator34);

Script* Script35 = new Script();
Script35->setDEF("DECLpoint_INSTANCE1000_MB1");
field* field36 = new field();
field36->setName("translation");
field36->setAccessType("inputOutput");
field36->setType("SFVec3f");
field36->setValue("0 0 0");
Script35->addField(field36);

field* field37 = new field();
field37->setName("old");
field37->setAccessType("inputOutput");
field37->setType("SFVec3f");
field37->setValue("0 0 0");
Script35->addField(field37);

field* field38 = new field();
field38->setName("set_location");
field38->setAccessType("inputOnly");
field38->setType("SFTime");
Script35->addField(field38);

field* field39 = new field();
field39->setName("keyValue");
field39->setAccessType("inputOutput");
field39->setType("MFVec3f");
field39->setValue("0 0 0 0 5 0");
Script35->addField(field39);


Script35.setSourceCode(`ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }`)
Transform29->addChild(Script35);

TimeSensor* TimeSensor40 = new TimeSensor();
TimeSensor40->setDEF("DECLpoint_INSTANCE1000_CL1");
TimeSensor40->setCycleInterval(3);
TimeSensor40->setLoop(True);
Transform29->addChild(TimeSensor40);

ROUTE* ROUTE41 = new ROUTE();
ROUTE41->setFromNode("DECLpoint_INSTANCE1000_CL1");
ROUTE41->setFromField("cycleTime");
ROUTE41->setToNode("DECLpoint_INSTANCE1000_MB1");
ROUTE41->setToField("set_location");
Transform29->addChild(ROUTE41);

ROUTE* ROUTE42 = new ROUTE();
ROUTE42->setFromNode("DECLpoint_INSTANCE1000_CL1");
ROUTE42->setFromField("fraction_changed");
ROUTE42->setToNode("DECLpoint_INSTANCE1000_PI1");
ROUTE42->setToField("set_fraction");
Transform29->addChild(ROUTE42);

ROUTE* ROUTE43 = new ROUTE();
ROUTE43->setFromNode("DECLpoint_INSTANCE1000_MB1");
ROUTE43->setFromField("keyValue");
ROUTE43->setToNode("DECLpoint_INSTANCE1000_PI1");
ROUTE43->setToField("keyValue");
Transform29->addChild(ROUTE43);

ROUTE* ROUTE44 = new ROUTE();
ROUTE44->setFromNode("DECLpoint_INSTANCE1000_PI1");
ROUTE44->setFromField("value_changed");
ROUTE44->setToNode("DECLpoint_INSTANCE1000_node");
ROUTE44->setToField("set_translation");
Transform29->addChild(ROUTE44);

ROUTE* ROUTE45 = new ROUTE();
ROUTE45->setFromNode("DECLpoint_INSTANCE1000_MB1");
ROUTE45->setFromField("translation_changed");
ROUTE45->setToNode("DECLpoint_INSTANCE1000_node");
ROUTE45->setToField("set_translation");
Transform29->addChild(ROUTE45);

Transform28->addChild(Transform29);

Scene7->addChild(Transform28);

Transform* Transform46 = new Transform();
Transform46->setDEF("transC1");
Transform* Transform47 = new Transform();
Transform47->setDEF("rotscaleC1");
Shape* Shape48 = new Shape();
Appearance* Appearance49 = new Appearance();
Material* Material50 = new Material();
Material50->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material50->setTransparency(0.5);
Appearance49->setMaterial(Material50);

Shape48->setAppearance(Appearance49);

Cylinder* Cylinder51 = new Cylinder();
Cylinder51->setRadius(0.05);
Shape48->setGeometry(Cylinder51);

Transform47->addChild(Shape48);

Transform46->addChild(Transform47);

Scene7->addChild(Transform46);

Script* Script52 = new Script();
Script52->setDEF("DECLx3dconnector_connector1_S1");
field* field53 = new field();
field53->setName("startnode");
field53->setAccessType("initializeOnly");
field53->setType("SFNode");
Transform* Transform54 = new Transform();
Transform54->setUSE("G1");
field53->addChild(Transform54);

Script52->addField(field53);

field* field55 = new field();
field55->setName("endnode");
field55->setAccessType("initializeOnly");
field55->setType("SFNode");
Transform* Transform56 = new Transform();
Transform56->setUSE("G2");
field55->addChild(Transform56);

Script52->addField(field55);

field* field57 = new field();
field57->setName("transC1");
field57->setAccessType("initializeOnly");
field57->setType("SFNode");
Transform* Transform58 = new Transform();
Transform58->setUSE("transC1");
field57->addChild(Transform58);

Script52->addField(field57);

field* field59 = new field();
field59->setName("rotscaleC1");
field59->setAccessType("initializeOnly");
field59->setType("SFNode");
Transform* Transform60 = new Transform();
Transform60->setUSE("rotscaleC1");
field59->addChild(Transform60);

Script52->addField(field59);

field* field61 = new field();
field61->setName("set_startpoint");
field61->setAccessType("inputOnly");
field61->setType("SFVec3f");
Script52->addField(field61);

field* field62 = new field();
field62->setName("set_endpoint");
field62->setAccessType("inputOnly");
field62->setType("SFVec3f");
Script52->addField(field62);


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
Scene7->addChild(Script52);

ROUTE* ROUTE63 = new ROUTE();
ROUTE63->setFromNode("G1");
ROUTE63->setFromField("translation_changed");
ROUTE63->setToNode("DECLx3dconnector_connector1_S1");
ROUTE63->setToField("set_startpoint");
Scene7->addChild(ROUTE63);

ROUTE* ROUTE64 = new ROUTE();
ROUTE64->setFromNode("G2");
ROUTE64->setFromField("translation_changed");
ROUTE64->setToNode("DECLx3dconnector_connector1_S1");
ROUTE64->setToField("set_endpoint");
Scene7->addChild(ROUTE64);

X3D0->setScene(Scene7);

X3D0->toXMLString();
}
