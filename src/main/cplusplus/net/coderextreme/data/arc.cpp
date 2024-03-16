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
meta2->setContent("arc.x3d");
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
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d");
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

ProtoDeclare* ProtoDeclare10 = new ProtoDeclare();
ProtoDeclare10->setName("point");
ProtoInterface* ProtoInterface11 = new ProtoInterface();
field* field12 = new field();
field12->setName("translation");
field12->setAccessType("inputOutput");
field12->setType("SFVec3f");
field12->setValue("0 0 0");
ProtoInterface11->addField(field12);

ProtoDeclare10->setProtoInterface(ProtoInterface11);

ProtoBody* ProtoBody13 = new ProtoBody();
Transform* Transform14 = new Transform();
Transform14->setDEF("node");
IS* IS15 = new IS();
Connect* connect16 = new Connect();
connect16->setNodeField("translation");
connect16->setProtoField("translation");
IS15->addConnect(connect16);

Transform14->setIS(IS15);

Shape* Shape17 = new Shape();
Sphere* Sphere18 = new Sphere();
Sphere18->setRadius(0.1);
Shape17->setGeometry(Sphere18);

Appearance* Appearance19 = new Appearance();
Material* Material20 = new Material();
Material20->setDiffuseColor(new float[3]{1,0,0});
Appearance19->setMaterial(Material20);

Shape17->setAppearance(Appearance19);

Transform14->addChild(Shape17);

PositionInterpolator* PositionInterpolator21 = new PositionInterpolator();
PositionInterpolator21->setDEF("PI1");
PositionInterpolator21->setKey(new float[2]{0,1}, 2);
PositionInterpolator21->setKeyValue(new float[6]{0,0,0,0,5,0});
Transform14->addChild(PositionInterpolator21);

Script* Script22 = new Script();
Script22->setDEF("MB1");
field* field23 = new field();
field23->setName("translation");
field23->setAccessType("inputOutput");
field23->setType("SFVec3f");
field23->setValue("50 50 0");
Script22->addField(field23);

field* field24 = new field();
field24->setName("old");
field24->setAccessType("inputOutput");
field24->setType("SFVec3f");
field24->setValue("0 0 0");
Script22->addField(field24);

field* field25 = new field();
field25->setName("set_location");
field25->setAccessType("inputOnly");
field25->setType("SFTime");
Script22->addField(field25);

field* field26 = new field();
field26->setName("keyValue");
field26->setAccessType("inputOutput");
field26->setType("MFVec3f");
field26->setValue("0 0 0 0 5 0");
Script22->addField(field26);


Script22.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}`)
Transform14->addChild(Script22);

TimeSensor* TimeSensor27 = new TimeSensor();
TimeSensor27->setDEF("CL1");
TimeSensor27->setCycleInterval(3);
TimeSensor27->setLoop(True);
Transform14->addChild(TimeSensor27);

ROUTE* ROUTE28 = new ROUTE();
ROUTE28->setFromNode("CL1");
ROUTE28->setFromField("cycleTime");
ROUTE28->setToNode("MB1");
ROUTE28->setToField("set_location");
Transform14->addChild(ROUTE28);

ROUTE* ROUTE29 = new ROUTE();
ROUTE29->setFromNode("CL1");
ROUTE29->setFromField("fraction_changed");
ROUTE29->setToNode("PI1");
ROUTE29->setToField("set_fraction");
Transform14->addChild(ROUTE29);

ROUTE* ROUTE30 = new ROUTE();
ROUTE30->setFromNode("MB1");
ROUTE30->setFromField("keyValue");
ROUTE30->setToNode("PI1");
ROUTE30->setToField("keyValue");
Transform14->addChild(ROUTE30);

ROUTE* ROUTE31 = new ROUTE();
ROUTE31->setFromNode("PI1");
ROUTE31->setFromField("value_changed");
ROUTE31->setToNode("node");
ROUTE31->setToField("set_translation");
Transform14->addChild(ROUTE31);

ProtoBody13->addChild(Transform14);

ProtoDeclare10->setProtoBody(ProtoBody13);

Scene7->addChild(ProtoDeclare10);

ProtoDeclare* ProtoDeclare32 = new ProtoDeclare();
ProtoDeclare32->setName("x3dconnector");
ProtoInterface* ProtoInterface33 = new ProtoInterface();
field* field34 = new field();
field34->setName("startnode");
field34->setAccessType("initializeOnly");
field34->setType("SFNode");
ProtoInterface33->addField(field34);

field* field35 = new field();
field35->setName("endnode");
field35->setAccessType("initializeOnly");
field35->setType("SFNode");
ProtoInterface33->addField(field35);

field* field36 = new field();
field36->setName("set_startpoint");
field36->setAccessType("inputOnly");
field36->setType("SFVec3f");
ProtoInterface33->addField(field36);

field* field37 = new field();
field37->setName("set_endpoint");
field37->setAccessType("inputOnly");
field37->setType("SFVec3f");
ProtoInterface33->addField(field37);

ProtoDeclare32->setProtoInterface(ProtoInterface33);

ProtoBody* ProtoBody38 = new ProtoBody();
Group* Group39 = new Group();
Transform* Transform40 = new Transform();
Transform40->setDEF("trans");
Transform* Transform41 = new Transform();
Transform41->setDEF("rotscale");
Shape* Shape42 = new Shape();
Appearance* Appearance43 = new Appearance();
Material* Material44 = new Material();
Material44->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material44->setTransparency(0.5);
Appearance43->setMaterial(Material44);

Shape42->setAppearance(Appearance43);

Cylinder* Cylinder45 = new Cylinder();
Cylinder45->setRadius(0.05);
Shape42->setGeometry(Cylinder45);

Transform41->addChild(Shape42);

Transform40->addChild(Transform41);

Group39->addChild(Transform40);

Script* Script46 = new Script();
Script46->setDEF("S1");
field* field47 = new field();
field47->setName("startnode");
field47->setAccessType("initializeOnly");
field47->setType("SFNode");
Script46->addField(field47);

field* field48 = new field();
field48->setName("endnode");
field48->setAccessType("initializeOnly");
field48->setType("SFNode");
Script46->addField(field48);

field* field49 = new field();
field49->setName("position");
field49->setAccessType("inputOutput");
field49->setType("SFNode");
Transform* Transform50 = new Transform();
Transform50->setUSE("trans");
field49->addChild(Transform50);

Script46->addField(field49);

field* field51 = new field();
field51->setName("rotscale");
field51->setAccessType("inputOutput");
field51->setType("SFNode");
Transform* Transform52 = new Transform();
Transform52->setUSE("rotscale");
field51->addChild(Transform52);

Script46->addField(field51);

field* field53 = new field();
field53->setName("set_startpoint");
field53->setAccessType("inputOnly");
field53->setType("SFVec3f");
Script46->addField(field53);

field* field54 = new field();
field54->setName("set_endpoint");
field54->setAccessType("inputOnly");
field54->setType("SFVec3f");
Script46->addField(field54);

IS* IS55 = new IS();
Connect* connect56 = new Connect();
connect56->setNodeField("startnode");
connect56->setProtoField("startnode");
IS55->addConnect(connect56);

Connect* connect57 = new Connect();
connect57->setNodeField("endnode");
connect57->setProtoField("endnode");
IS55->addConnect(connect57);

Connect* connect58 = new Connect();
connect58->setNodeField("set_startpoint");
connect58->setProtoField("set_startpoint");
IS55->addConnect(connect58);

Connect* connect59 = new Connect();
connect59->setNodeField("set_endpoint");
connect59->setProtoField("set_endpoint");
IS55->addConnect(connect59);

Script46->setIS(IS55);


Script46.setSourceCode(`ecmascript:\n"+
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
Group39->addChild(Script46);

ProtoBody38->addChild(Group39);

ProtoDeclare32->setProtoBody(ProtoBody38);

Scene7->addChild(ProtoDeclare32);

ProtoInstance* ProtoInstance60 = new ProtoInstance();
ProtoInstance60->setName("point");
ProtoInstance60->setDEF("G1");
Scene7->addChild(ProtoInstance60);

ProtoInstance* ProtoInstance61 = new ProtoInstance();
ProtoInstance61->setName("point");
ProtoInstance61->setDEF("G2");
Scene7->addChild(ProtoInstance61);

ProtoInstance* ProtoInstance62 = new ProtoInstance();
ProtoInstance62->setName("point");
ProtoInstance62->setDEF("G3");
Scene7->addChild(ProtoInstance62);

ProtoInstance* ProtoInstance63 = new ProtoInstance();
ProtoInstance63->setName("point");
ProtoInstance63->setDEF("G4");
Scene7->addChild(ProtoInstance63);

ProtoInstance* ProtoInstance64 = new ProtoInstance();
ProtoInstance64->setName("x3dconnector");
ProtoInstance64->setDEF("connector1");
fieldValue* fieldValue65 = new fieldValue();
fieldValue65->setName("startnode");
ProtoInstance* ProtoInstance66 = new ProtoInstance();
ProtoInstance66->setUSE("G1");
fieldValue65->addChild(ProtoInstance66);

ProtoInstance64->addFieldValue(fieldValue65);

fieldValue* fieldValue67 = new fieldValue();
fieldValue67->setName("endnode");
ProtoInstance* ProtoInstance68 = new ProtoInstance();
ProtoInstance68->setUSE("G2");
fieldValue67->addChild(ProtoInstance68);

ProtoInstance64->addFieldValue(fieldValue67);

fieldValue* fieldValue69 = new fieldValue();
fieldValue69->setName("set_startpoint");
ProtoInstance64->addFieldValue(fieldValue69);

fieldValue* fieldValue70 = new fieldValue();
fieldValue70->setName("set_endpoint");
ProtoInstance64->addFieldValue(fieldValue70);

Scene7->addChild(ProtoInstance64);

ProtoInstance* ProtoInstance71 = new ProtoInstance();
ProtoInstance71->setName("x3dconnector");
ProtoInstance71->setDEF("connector2");
fieldValue* fieldValue72 = new fieldValue();
fieldValue72->setName("startnode");
ProtoInstance* ProtoInstance73 = new ProtoInstance();
ProtoInstance73->setUSE("G1");
fieldValue72->addChild(ProtoInstance73);

ProtoInstance71->addFieldValue(fieldValue72);

fieldValue* fieldValue74 = new fieldValue();
fieldValue74->setName("endnode");
ProtoInstance* ProtoInstance75 = new ProtoInstance();
ProtoInstance75->setUSE("G3");
fieldValue74->addChild(ProtoInstance75);

ProtoInstance71->addFieldValue(fieldValue74);

fieldValue* fieldValue76 = new fieldValue();
fieldValue76->setName("set_startpoint");
ProtoInstance71->addFieldValue(fieldValue76);

fieldValue* fieldValue77 = new fieldValue();
fieldValue77->setName("set_endpoint");
ProtoInstance71->addFieldValue(fieldValue77);

Scene7->addChild(ProtoInstance71);

ProtoInstance* ProtoInstance78 = new ProtoInstance();
ProtoInstance78->setName("x3dconnector");
ProtoInstance78->setDEF("connector3");
fieldValue* fieldValue79 = new fieldValue();
fieldValue79->setName("startnode");
ProtoInstance* ProtoInstance80 = new ProtoInstance();
ProtoInstance80->setUSE("G1");
fieldValue79->addChild(ProtoInstance80);

ProtoInstance78->addFieldValue(fieldValue79);

fieldValue* fieldValue81 = new fieldValue();
fieldValue81->setName("endnode");
ProtoInstance* ProtoInstance82 = new ProtoInstance();
ProtoInstance82->setUSE("G4");
fieldValue81->addChild(ProtoInstance82);

ProtoInstance78->addFieldValue(fieldValue81);

fieldValue* fieldValue83 = new fieldValue();
fieldValue83->setName("set_startpoint");
ProtoInstance78->addFieldValue(fieldValue83);

fieldValue* fieldValue84 = new fieldValue();
fieldValue84->setName("set_endpoint");
ProtoInstance78->addFieldValue(fieldValue84);

Scene7->addChild(ProtoInstance78);

ROUTE* ROUTE85 = new ROUTE();
ROUTE85->setFromNode("G1");
ROUTE85->setFromField("translation");
ROUTE85->setToNode("connector1");
ROUTE85->setToField("set_startpoint");
Scene7->addChild(ROUTE85);

ROUTE* ROUTE86 = new ROUTE();
ROUTE86->setFromNode("G2");
ROUTE86->setFromField("translation");
ROUTE86->setToNode("connector1");
ROUTE86->setToField("set_endpoint");
Scene7->addChild(ROUTE86);

ROUTE* ROUTE87 = new ROUTE();
ROUTE87->setFromNode("G1");
ROUTE87->setFromField("translation");
ROUTE87->setToNode("connector2");
ROUTE87->setToField("set_startpoint");
Scene7->addChild(ROUTE87);

ROUTE* ROUTE88 = new ROUTE();
ROUTE88->setFromNode("G3");
ROUTE88->setFromField("translation");
ROUTE88->setToNode("connector2");
ROUTE88->setToField("set_endpoint");
Scene7->addChild(ROUTE88);

ROUTE* ROUTE89 = new ROUTE();
ROUTE89->setFromNode("G1");
ROUTE89->setFromField("translation");
ROUTE89->setToNode("connector3");
ROUTE89->setToField("set_startpoint");
Scene7->addChild(ROUTE89);

ROUTE* ROUTE90 = new ROUTE();
ROUTE90->setFromNode("G4");
ROUTE90->setFromField("translation");
ROUTE90->setToNode("connector3");
ROUTE90->setToField("set_endpoint");
Scene7->addChild(ROUTE90);

X3D0->setScene(Scene7);

X3D0->toXMLString();
}
