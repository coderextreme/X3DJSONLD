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
meta2->setContent("arcold.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("creator");
meta3->setContent("John Carlson");
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
meta6->setContent("an attempt to implement an arc in a graph");
head1->addMeta(meta6);

X3D0->setHead(head1);

Scene* Scene7 = new Scene();
Viewpoint* Viewpoint8 = new Viewpoint();
Viewpoint8->setPosition(new float[3]{0,0,5});
Viewpoint8->setDescription("a moving graph");
Scene7->addChild(Viewpoint8);

Background* Background9 = new Background();
Background9->setSkyColor(new float[3]{0.4,0.4,0.4});
Scene7->addChild(Background9);

Transform* Transform10 = new Transform();
Transform10->setDEF("trans1");
Transform* Transform11 = new Transform();
Transform11->setDEF("rotscale1");
Shape* Shape12 = new Shape();
Appearance* Appearance13 = new Appearance();
Material* Material14 = new Material();
Material14->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Appearance13->setMaterial(Material14);

Shape12->setAppearance(Appearance13);

Cylinder* Cylinder15 = new Cylinder();
Cylinder15->setRadius(0.1);
Shape12->setGeometry(Cylinder15);

Transform11->addChild(Shape12);

Transform10->addChild(Transform11);

Scene7->addChild(Transform10);

Transform* Transform16 = new Transform();
Transform16->setDEF("trans2");
Transform* Transform17 = new Transform();
Transform17->setDEF("rotscale2");
Shape* Shape18 = new Shape();
Appearance* Appearance19 = new Appearance();
Material* Material20 = new Material();
Material20->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Appearance19->setMaterial(Material20);

Shape18->setAppearance(Appearance19);

Cylinder* Cylinder21 = new Cylinder();
Cylinder21->setRadius(0.1);
Shape18->setGeometry(Cylinder21);

Transform17->addChild(Shape18);

Transform16->addChild(Transform17);

Scene7->addChild(Transform16);

Transform* Transform22 = new Transform();
Transform22->setDEF("trans3");
Transform* Transform23 = new Transform();
Transform23->setDEF("rotscale3");
Shape* Shape24 = new Shape();
Appearance* Appearance25 = new Appearance();
Material* Material26 = new Material();
Material26->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Appearance25->setMaterial(Material26);

Shape24->setAppearance(Appearance25);

Cylinder* Cylinder27 = new Cylinder();
Cylinder27->setRadius(0.1);
Shape24->setGeometry(Cylinder27);

Transform23->addChild(Shape24);

Transform22->addChild(Transform23);

Scene7->addChild(Transform22);

ProtoDeclare* ProtoDeclare28 = new ProtoDeclare();
ProtoDeclare28->setName("point");
ProtoInterface* ProtoInterface29 = new ProtoInterface();
field* field30 = new field();
field30->setName("translation");
field30->setAccessType("inputOutput");
field30->setType("SFVec3f");
field30->setValue("0 0 0");
ProtoInterface29->addField(field30);

ProtoDeclare28->setProtoInterface(ProtoInterface29);

ProtoBody* ProtoBody31 = new ProtoBody();
Transform* Transform32 = new Transform();
Transform32->setDEF("node");
IS* IS33 = new IS();
Connect* connect34 = new Connect();
connect34->setNodeField("translation");
connect34->setProtoField("translation");
IS33->addConnect(connect34);

Transform32->setIS(IS33);

Shape* Shape35 = new Shape();
Sphere* Sphere36 = new Sphere();
Sphere36->setRadius(0.1);
Shape35->setGeometry(Sphere36);

Appearance* Appearance37 = new Appearance();
Material* Material38 = new Material();
Material38->setDiffuseColor(new float[3]{1,0,0});
Appearance37->setMaterial(Material38);

Shape35->setAppearance(Appearance37);

Transform32->addChild(Shape35);

PositionInterpolator* PositionInterpolator39 = new PositionInterpolator();
PositionInterpolator39->setDEF("PI1");
PositionInterpolator39->setKey(new float[2]{0,1}, 2);
PositionInterpolator39->setKeyValue(new float[6]{0,0,0,0,5,0});
Transform32->addChild(PositionInterpolator39);

Script* Script40 = new Script();
Script40->setDEF("MB1");
field* field41 = new field();
field41->setName("translation");
field41->setAccessType("inputOutput");
field41->setType("SFVec3f");
field41->setValue("50 50 0");
Script40->addField(field41);

field* field42 = new field();
field42->setName("old");
field42->setAccessType("inputOutput");
field42->setType("SFVec3f");
field42->setValue("0 0 0");
Script40->addField(field42);

field* field43 = new field();
field43->setName("set_location");
field43->setAccessType("inputOnly");
field43->setType("SFTime");
Script40->addField(field43);

field* field44 = new field();
field44->setName("keyValue");
field44->setAccessType("outputOnly");
field44->setType("MFVec3f");
Script40->addField(field44);


Script40.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}`)
Transform32->addChild(Script40);

TimeSensor* TimeSensor45 = new TimeSensor();
TimeSensor45->setDEF("CL1");
TimeSensor45->setCycleInterval(3);
TimeSensor45->setLoop(True);
Transform32->addChild(TimeSensor45);

ROUTE* ROUTE46 = new ROUTE();
ROUTE46->setFromNode("CL1");
ROUTE46->setFromField("cycleTime");
ROUTE46->setToNode("MB1");
ROUTE46->setToField("set_location");
Transform32->addChild(ROUTE46);

ROUTE* ROUTE47 = new ROUTE();
ROUTE47->setFromNode("CL1");
ROUTE47->setFromField("fraction_changed");
ROUTE47->setToNode("PI1");
ROUTE47->setToField("set_fraction");
Transform32->addChild(ROUTE47);

ROUTE* ROUTE48 = new ROUTE();
ROUTE48->setFromNode("MB1");
ROUTE48->setFromField("keyValue");
ROUTE48->setToNode("PI1");
ROUTE48->setToField("keyValue");
Transform32->addChild(ROUTE48);

ROUTE* ROUTE49 = new ROUTE();
ROUTE49->setFromNode("PI1");
ROUTE49->setFromField("value_changed");
ROUTE49->setToNode("node");
ROUTE49->setToField("set_translation");
Transform32->addChild(ROUTE49);

ProtoBody31->addChild(Transform32);

ProtoDeclare28->setProtoBody(ProtoBody31);

Scene7->addChild(ProtoDeclare28);

//from doug sanden
ProtoDeclare* ProtoDeclare50 = new ProtoDeclare();
ProtoDeclare50->setName("x3dconnector");
ProtoInterface* ProtoInterface51 = new ProtoInterface();
field* field52 = new field();
field52->setName("startnode");
field52->setAccessType("inputOutput");
field52->setType("SFNode");
ProtoInterface51->addField(field52);

field* field53 = new field();
field53->setName("endnode");
field53->setAccessType("inputOutput");
field53->setType("SFNode");
ProtoInterface51->addField(field53);

field* field54 = new field();
field54->setName("transnode");
field54->setAccessType("inputOutput");
field54->setType("SFNode");
ProtoInterface51->addField(field54);

field* field55 = new field();
field55->setName("rotscalenode");
field55->setAccessType("inputOutput");
field55->setType("SFNode");
ProtoInterface51->addField(field55);

field* field56 = new field();
field56->setName("set_startpoint");
field56->setAccessType("inputOnly");
field56->setType("SFVec3f");
ProtoInterface51->addField(field56);

field* field57 = new field();
field57->setName("set_endpoint");
field57->setAccessType("inputOnly");
field57->setType("SFVec3f");
ProtoInterface51->addField(field57);

ProtoDeclare50->setProtoInterface(ProtoInterface51);

ProtoBody* ProtoBody58 = new ProtoBody();
Script* Script59 = new Script();
Script59->setDEF("S1");
field* field60 = new field();
field60->setName("startnode");
field60->setAccessType("inputOutput");
field60->setType("SFNode");
Script59->addField(field60);

field* field61 = new field();
field61->setName("endnode");
field61->setAccessType("inputOutput");
field61->setType("SFNode");
Script59->addField(field61);

field* field62 = new field();
field62->setName("transnode");
field62->setAccessType("inputOutput");
field62->setType("SFNode");
Script59->addField(field62);

field* field63 = new field();
field63->setName("rotscalenode");
field63->setAccessType("inputOutput");
field63->setType("SFNode");
Script59->addField(field63);

field* field64 = new field();
field64->setName("set_startpoint");
field64->setAccessType("inputOnly");
field64->setType("SFVec3f");
Script59->addField(field64);

field* field65 = new field();
field65->setName("set_endpoint");
field65->setAccessType("inputOnly");
field65->setType("SFVec3f");
Script59->addField(field65);

IS* IS66 = new IS();
Connect* connect67 = new Connect();
connect67->setNodeField("startnode");
connect67->setProtoField("startnode");
IS66->addConnect(connect67);

Connect* connect68 = new Connect();
connect68->setNodeField("endnode");
connect68->setProtoField("endnode");
IS66->addConnect(connect68);

Connect* connect69 = new Connect();
connect69->setNodeField("transnode");
connect69->setProtoField("transnode");
IS66->addConnect(connect69);

Connect* connect70 = new Connect();
connect70->setNodeField("rotscalenode");
connect70->setProtoField("rotscalenode");
IS66->addConnect(connect70);

Connect* connect71 = new Connect();
connect71->setNodeField("set_startpoint");
connect71->setProtoField("set_startpoint");
IS66->addConnect(connect71);

Connect* connect72 = new Connect();
connect72->setNodeField("set_endpoint");
connect72->setProtoField("set_endpoint");
IS66->addConnect(connect72);

Script59->setIS(IS66);


Script59.setSourceCode(`ecmascript:\n"+
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
"		var trafo = recompute(startpoint, endpoint);\n"+
"		if (typeof trafo !== 'undefined') {\n"+
"			transnode.translation = trafo.translation;\n"+
"			rotscalenode.rotation = trafo.rotation;\n"+
"			rotscalenode.scale = trafo.scale;\n"+
"		} else {\n"+
"			Browser.print(\"recompute returned undefined\");\n"+
"		}\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val || startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val || endnode.translation);\n"+
"        }`)
ProtoBody58->addChild(Script59);

ProtoDeclare50->setProtoBody(ProtoBody58);

Scene7->addChild(ProtoDeclare50);

ProtoInstance* ProtoInstance73 = new ProtoInstance();
ProtoInstance73->setName("point");
ProtoInstance73->setDEF("G1");
Scene7->addChild(ProtoInstance73);

ProtoInstance* ProtoInstance74 = new ProtoInstance();
ProtoInstance74->setName("point");
ProtoInstance74->setDEF("G2");
Scene7->addChild(ProtoInstance74);

ProtoInstance* ProtoInstance75 = new ProtoInstance();
ProtoInstance75->setName("point");
ProtoInstance75->setDEF("G3");
Scene7->addChild(ProtoInstance75);

ProtoInstance* ProtoInstance76 = new ProtoInstance();
ProtoInstance76->setName("point");
ProtoInstance76->setDEF("G4");
Scene7->addChild(ProtoInstance76);

ProtoInstance* ProtoInstance77 = new ProtoInstance();
ProtoInstance77->setName("x3dconnector");
ProtoInstance77->setDEF("connector1");
fieldValue* fieldValue78 = new fieldValue();
fieldValue78->setName("startnode");
ProtoInstance* ProtoInstance79 = new ProtoInstance();
ProtoInstance79->setUSE("G1");
fieldValue78->addChild(ProtoInstance79);

ProtoInstance77->addFieldValue(fieldValue78);

fieldValue* fieldValue80 = new fieldValue();
fieldValue80->setName("endnode");
ProtoInstance* ProtoInstance81 = new ProtoInstance();
ProtoInstance81->setUSE("G2");
fieldValue80->addChild(ProtoInstance81);

ProtoInstance77->addFieldValue(fieldValue80);

fieldValue* fieldValue82 = new fieldValue();
fieldValue82->setName("transnode");
Transform* Transform83 = new Transform();
Transform83->setUSE("trans1");
fieldValue82->addChild(Transform83);

ProtoInstance77->addFieldValue(fieldValue82);

fieldValue* fieldValue84 = new fieldValue();
fieldValue84->setName("rotscalenode");
Transform* Transform85 = new Transform();
Transform85->setUSE("rotscale1");
fieldValue84->addChild(Transform85);

ProtoInstance77->addFieldValue(fieldValue84);

Scene7->addChild(ProtoInstance77);

ProtoInstance* ProtoInstance86 = new ProtoInstance();
ProtoInstance86->setName("x3dconnector");
ProtoInstance86->setDEF("connector2");
fieldValue* fieldValue87 = new fieldValue();
fieldValue87->setName("startnode");
ProtoInstance* ProtoInstance88 = new ProtoInstance();
ProtoInstance88->setUSE("G1");
fieldValue87->addChild(ProtoInstance88);

ProtoInstance86->addFieldValue(fieldValue87);

fieldValue* fieldValue89 = new fieldValue();
fieldValue89->setName("endnode");
ProtoInstance* ProtoInstance90 = new ProtoInstance();
ProtoInstance90->setUSE("G3");
fieldValue89->addChild(ProtoInstance90);

ProtoInstance86->addFieldValue(fieldValue89);

fieldValue* fieldValue91 = new fieldValue();
fieldValue91->setName("transnode");
Transform* Transform92 = new Transform();
Transform92->setUSE("trans2");
fieldValue91->addChild(Transform92);

ProtoInstance86->addFieldValue(fieldValue91);

fieldValue* fieldValue93 = new fieldValue();
fieldValue93->setName("rotscalenode");
Transform* Transform94 = new Transform();
Transform94->setUSE("rotscale2");
fieldValue93->addChild(Transform94);

ProtoInstance86->addFieldValue(fieldValue93);

Scene7->addChild(ProtoInstance86);

ProtoInstance* ProtoInstance95 = new ProtoInstance();
ProtoInstance95->setName("x3dconnector");
ProtoInstance95->setDEF("connector3");
fieldValue* fieldValue96 = new fieldValue();
fieldValue96->setName("startnode");
ProtoInstance* ProtoInstance97 = new ProtoInstance();
ProtoInstance97->setUSE("G1");
fieldValue96->addChild(ProtoInstance97);

ProtoInstance95->addFieldValue(fieldValue96);

fieldValue* fieldValue98 = new fieldValue();
fieldValue98->setName("endnode");
ProtoInstance* ProtoInstance99 = new ProtoInstance();
ProtoInstance99->setUSE("G4");
fieldValue98->addChild(ProtoInstance99);

ProtoInstance95->addFieldValue(fieldValue98);

fieldValue* fieldValue100 = new fieldValue();
fieldValue100->setName("transnode");
Transform* Transform101 = new Transform();
Transform101->setUSE("trans3");
fieldValue100->addChild(Transform101);

ProtoInstance95->addFieldValue(fieldValue100);

fieldValue* fieldValue102 = new fieldValue();
fieldValue102->setName("rotscalenode");
Transform* Transform103 = new Transform();
Transform103->setUSE("rotscale3");
fieldValue102->addChild(Transform103);

ProtoInstance95->addFieldValue(fieldValue102);

Scene7->addChild(ProtoInstance95);

ROUTE* ROUTE104 = new ROUTE();
ROUTE104->setFromNode("G1");
ROUTE104->setFromField("translation_changed");
ROUTE104->setToNode("connector1");
ROUTE104->setToField("set_startpoint");
Scene7->addChild(ROUTE104);

ROUTE* ROUTE105 = new ROUTE();
ROUTE105->setFromNode("G2");
ROUTE105->setFromField("translation_changed");
ROUTE105->setToNode("connector1");
ROUTE105->setToField("set_endpoint");
Scene7->addChild(ROUTE105);

ROUTE* ROUTE106 = new ROUTE();
ROUTE106->setFromNode("G1");
ROUTE106->setFromField("translation_changed");
ROUTE106->setToNode("connector2");
ROUTE106->setToField("set_startpoint");
Scene7->addChild(ROUTE106);

ROUTE* ROUTE107 = new ROUTE();
ROUTE107->setFromNode("G3");
ROUTE107->setFromField("translation_changed");
ROUTE107->setToNode("connector2");
ROUTE107->setToField("set_endpoint");
Scene7->addChild(ROUTE107);

ROUTE* ROUTE108 = new ROUTE();
ROUTE108->setFromNode("G1");
ROUTE108->setFromField("translation_changed");
ROUTE108->setToNode("connector3");
ROUTE108->setToField("set_startpoint");
Scene7->addChild(ROUTE108);

ROUTE* ROUTE109 = new ROUTE();
ROUTE109->setFromNode("G4");
ROUTE109->setFromField("translation_changed");
ROUTE109->setToNode("connector3");
ROUTE109->setToField("set_endpoint");
Scene7->addChild(ROUTE109);

X3D0->setScene(Scene7);

X3D0->toXMLString();
}
