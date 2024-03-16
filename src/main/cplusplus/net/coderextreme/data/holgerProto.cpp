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
X3D0->setVersion("4.0");
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName("title");
meta2->setContent("x3dconnectorProto.x3d");
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName("creator");
meta3->setContent("Lost, Doug Sanden I think");
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName("created");
meta4->setContent("Unknown");
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName("modified");
meta5->setContent("Sat, 30 Dec 2023 10:14:10 GMT");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("generator");
meta6->setContent("manual");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("generator");
meta7->setContent("x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy");
head1->addMeta(meta7);

X3D0->setHead(head1);

Scene* Scene8 = new Scene();
ProtoDeclare* ProtoDeclare9 = new ProtoDeclare();
ProtoDeclare9->setName("x3dconnector");
ProtoInterface* ProtoInterface10 = new ProtoInterface();
field* field11 = new field();
field11->setAccessType("initializeOnly");
field11->setType("SFNode");
field11->setName("startnode");
ProtoInterface10->addField(field11);

field* field12 = new field();
field12->setAccessType("initializeOnly");
field12->setType("SFNode");
field12->setName("endnode");
ProtoInterface10->addField(field12);

field* field13 = new field();
field13->setAccessType("initializeOnly");
field13->setType("SFNode");
field13->setName("transnode");
ProtoInterface10->addField(field13);

field* field14 = new field();
field14->setAccessType("initializeOnly");
field14->setType("SFNode");
field14->setName("rotscalenode");
ProtoInterface10->addField(field14);

field* field15 = new field();
field15->setAccessType("inputOnly");
field15->setType("SFVec3f");
field15->setName("set_startpoint");
ProtoInterface10->addField(field15);

field* field16 = new field();
field16->setAccessType("inputOnly");
field16->setType("SFVec3f");
field16->setName("set_endpoint");
ProtoInterface10->addField(field16);

ProtoDeclare9->setProtoInterface(ProtoInterface10);

ProtoBody* ProtoBody17 = new ProtoBody();
Script* Script18 = new Script();
Script18->setDEF("S1");
Script18->setDirectOutput(True);
field* field19 = new field();
field19->setAccessType("initializeOnly");
field19->setType("SFNode");
field19->setName("startnode");
Script18->addField(field19);

field* field20 = new field();
field20->setAccessType("initializeOnly");
field20->setType("SFNode");
field20->setName("endnode");
Script18->addField(field20);

field* field21 = new field();
field21->setAccessType("initializeOnly");
field21->setType("SFNode");
field21->setName("transnode");
Script18->addField(field21);

field* field22 = new field();
field22->setAccessType("initializeOnly");
field22->setType("SFNode");
field22->setName("rotscalenode");
Script18->addField(field22);

field* field23 = new field();
field23->setAccessType("inputOnly");
field23->setType("SFVec3f");
field23->setName("set_startpoint");
Script18->addField(field23);

field* field24 = new field();
field24->setAccessType("inputOnly");
field24->setType("SFVec3f");
field24->setName("set_endpoint");
Script18->addField(field24);


Script18.setSourceCode(`ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"		return;\n"+
"	    }\n"+
"            var dif = endpoint.subtract(startpoint);\n"+
"            var dist = dif.length()*0.5;\n"+
"            var dif2 = dif.multiply(0.5);\n"+
"            var norm = dif.normalize();\n"+
"            var transl = startpoint.add(dif2);\n"+
"	    if (typeof Quaternion !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      if (trafo) {\n"+
"		      transnode.translation = trafo.translation;\n"+
"		      rotscalenode.rotation = trafo.rotation;\n"+
"		      rotscalenode.scale = trafo.scale;\n"+
"	      }\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val);\n"+
"        }`)
IS* IS25 = new IS();
Connect* connect26 = new Connect();
connect26->setNodeField("startnode");
connect26->setProtoField("startnode");
IS25->addConnect(connect26);

Connect* connect27 = new Connect();
connect27->setNodeField("endnode");
connect27->setProtoField("endnode");
IS25->addConnect(connect27);

Connect* connect28 = new Connect();
connect28->setNodeField("transnode");
connect28->setProtoField("transnode");
IS25->addConnect(connect28);

Connect* connect29 = new Connect();
connect29->setNodeField("rotscalenode");
connect29->setProtoField("rotscalenode");
IS25->addConnect(connect29);

Connect* connect30 = new Connect();
connect30->setNodeField("set_startpoint");
connect30->setProtoField("set_startpoint");
IS25->addConnect(connect30);

Connect* connect31 = new Connect();
connect31->setNodeField("set_endpoint");
connect31->setProtoField("set_endpoint");
IS25->addConnect(connect31);

Script18->setIS(IS25);

ProtoBody17->addChild(Script18);

ProtoDeclare9->setProtoBody(ProtoBody17);

Scene8->addChild(ProtoDeclare9);

WorldInfo* WorldInfo32 = new WorldInfo();
WorldInfo32->setTitle("Connector Proto");
Scene8->addChild(WorldInfo32);

Viewpoint* Viewpoint33 = new Viewpoint();
Viewpoint33->setDescription("Only Viewpoint");
Viewpoint33->setPosition(new float[3]{0,0,5});
Scene8->addChild(Viewpoint33);

Background* Background34 = new Background();
Background34->setSkyColor(new float[3]{0.4,0.4,0.4});
Scene8->addChild(Background34);

Transform* Transform35 = new Transform();
Transform35->setDEF("G1");
Shape* Shape36 = new Shape();
Appearance* Appearance37 = new Appearance();
Material* Material38 = new Material();
Material38->setDiffuseColor(new float[3]{0.7,0.2,0.2});
Appearance37->setMaterial(Material38);

Shape36->setAppearance(Appearance37);

Sphere* Sphere39 = new Sphere();
Sphere39->setRadius(0.1);
Shape36->setGeometry(Sphere39);

Transform35->addChild(Shape36);

PlaneSensor* PlaneSensor40 = new PlaneSensor();
PlaneSensor40->setDEF("PS1");
PlaneSensor40->setDescription("Grab to move");
Transform35->addChild(PlaneSensor40);

Scene8->addChild(Transform35);

Transform* Transform41 = new Transform();
Transform41->setDEF("G2");
Transform41->setTranslation(new float[3]{1,-1,0.01});
Shape* Shape42 = new Shape();
Appearance* Appearance43 = new Appearance();
Material* Material44 = new Material();
Material44->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance43->setMaterial(Material44);

Shape42->setAppearance(Appearance43);

Sphere* Sphere45 = new Sphere();
Sphere45->setRadius(0.1);
Shape42->setGeometry(Sphere45);

Transform41->addChild(Shape42);

PlaneSensor* PlaneSensor46 = new PlaneSensor();
PlaneSensor46->setDEF("PS2");
PlaneSensor46->setDescription("Grab to move");
PlaneSensor46->setOffset(new float[3]{1,-1,0.01});
Transform41->addChild(PlaneSensor46);

Scene8->addChild(Transform41);

Transform* Transform47 = new Transform();
Transform47->setDEF("G3");
Transform47->setTranslation(new float[3]{1,1,0.01});
Shape* Shape48 = new Shape();
Appearance* Appearance49 = new Appearance();
Material* Material50 = new Material();
Material50->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance49->setMaterial(Material50);

Shape48->setAppearance(Appearance49);

Sphere* Sphere51 = new Sphere();
Sphere51->setRadius(0.1);
Shape48->setGeometry(Sphere51);

Transform47->addChild(Shape48);

PlaneSensor* PlaneSensor52 = new PlaneSensor();
PlaneSensor52->setDEF("PS3");
PlaneSensor52->setDescription("Grab to move");
PlaneSensor52->setOffset(new float[3]{1,1,0.01});
Transform47->addChild(PlaneSensor52);

Scene8->addChild(Transform47);

Transform* Transform53 = new Transform();
Transform53->setDEF("G4");
Transform53->setTranslation(new float[3]{-1,1,0.01});
Shape* Shape54 = new Shape();
Appearance* Appearance55 = new Appearance();
Material* Material56 = new Material();
Material56->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance55->setMaterial(Material56);

Shape54->setAppearance(Appearance55);

Sphere* Sphere57 = new Sphere();
Sphere57->setRadius(0.1);
Shape54->setGeometry(Sphere57);

Transform53->addChild(Shape54);

PlaneSensor* PlaneSensor58 = new PlaneSensor();
PlaneSensor58->setDEF("PS4");
PlaneSensor58->setDescription("Grab to move");
PlaneSensor58->setOffset(new float[3]{-1,1,0.01});
Transform53->addChild(PlaneSensor58);

Scene8->addChild(Transform53);

Transform* Transform59 = new Transform();
Transform59->setDEF("transC1");
Transform* Transform60 = new Transform();
Transform60->setDEF("rotscaleC1");
Shape* Shape61 = new Shape();
Appearance* Appearance62 = new Appearance();
Material* Material63 = new Material();
Material63->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material63->setTransparency(0.5);
Appearance62->setMaterial(Material63);

Shape61->setAppearance(Appearance62);

Cylinder* Cylinder64 = new Cylinder();
Cylinder64->setRadius(0.05);
Shape61->setGeometry(Cylinder64);

Transform60->addChild(Shape61);

Transform59->addChild(Transform60);

Scene8->addChild(Transform59);

Transform* Transform65 = new Transform();
Transform65->setDEF("transC2");
Transform* Transform66 = new Transform();
Transform66->setDEF("rotscaleC2");
Shape* Shape67 = new Shape();
Appearance* Appearance68 = new Appearance();
Material* Material69 = new Material();
Material69->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material69->setTransparency(0.5);
Appearance68->setMaterial(Material69);

Shape67->setAppearance(Appearance68);

Cylinder* Cylinder70 = new Cylinder();
Cylinder70->setRadius(0.05);
Shape67->setGeometry(Cylinder70);

Transform66->addChild(Shape67);

Transform65->addChild(Transform66);

Scene8->addChild(Transform65);

Transform* Transform71 = new Transform();
Transform71->setDEF("transC3");
Transform* Transform72 = new Transform();
Transform72->setDEF("rotscaleC3");
Shape* Shape73 = new Shape();
Appearance* Appearance74 = new Appearance();
Material* Material75 = new Material();
Material75->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material75->setTransparency(0.5);
Appearance74->setMaterial(Material75);

Shape73->setAppearance(Appearance74);

Cylinder* Cylinder76 = new Cylinder();
Cylinder76->setRadius(0.05);
Shape73->setGeometry(Cylinder76);

Transform72->addChild(Shape73);

Transform71->addChild(Transform72);

Scene8->addChild(Transform71);

ProtoInstance* ProtoInstance77 = new ProtoInstance();
ProtoInstance77->setDEF("connector1");
ProtoInstance77->setName("x3dconnector");
fieldValue* fieldValue78 = new fieldValue();
fieldValue78->setName("startnode");
Transform* Transform79 = new Transform();
Transform79->setUSE("G1");
fieldValue78->addChild(Transform79);

ProtoInstance77->addFieldValue(fieldValue78);

fieldValue* fieldValue80 = new fieldValue();
fieldValue80->setName("endnode");
Transform* Transform81 = new Transform();
Transform81->setUSE("G2");
fieldValue80->addChild(Transform81);

ProtoInstance77->addFieldValue(fieldValue80);

fieldValue* fieldValue82 = new fieldValue();
fieldValue82->setName("transnode");
Transform* Transform83 = new Transform();
Transform83->setUSE("transC1");
fieldValue82->addChild(Transform83);

ProtoInstance77->addFieldValue(fieldValue82);

fieldValue* fieldValue84 = new fieldValue();
fieldValue84->setName("rotscalenode");
Transform* Transform85 = new Transform();
Transform85->setUSE("rotscaleC1");
fieldValue84->addChild(Transform85);

ProtoInstance77->addFieldValue(fieldValue84);

Scene8->addChild(ProtoInstance77);

ProtoInstance* ProtoInstance86 = new ProtoInstance();
ProtoInstance86->setDEF("connector2");
ProtoInstance86->setName("x3dconnector");
fieldValue* fieldValue87 = new fieldValue();
fieldValue87->setName("startnode");
Transform* Transform88 = new Transform();
Transform88->setUSE("G1");
fieldValue87->addChild(Transform88);

ProtoInstance86->addFieldValue(fieldValue87);

fieldValue* fieldValue89 = new fieldValue();
fieldValue89->setName("endnode");
Transform* Transform90 = new Transform();
Transform90->setUSE("G3");
fieldValue89->addChild(Transform90);

ProtoInstance86->addFieldValue(fieldValue89);

fieldValue* fieldValue91 = new fieldValue();
fieldValue91->setName("transnode");
Transform* Transform92 = new Transform();
Transform92->setUSE("transC2");
fieldValue91->addChild(Transform92);

ProtoInstance86->addFieldValue(fieldValue91);

fieldValue* fieldValue93 = new fieldValue();
fieldValue93->setName("rotscalenode");
Transform* Transform94 = new Transform();
Transform94->setUSE("rotscaleC2");
fieldValue93->addChild(Transform94);

ProtoInstance86->addFieldValue(fieldValue93);

Scene8->addChild(ProtoInstance86);

ProtoInstance* ProtoInstance95 = new ProtoInstance();
ProtoInstance95->setDEF("connector3");
ProtoInstance95->setName("x3dconnector");
fieldValue* fieldValue96 = new fieldValue();
fieldValue96->setName("startnode");
Transform* Transform97 = new Transform();
Transform97->setUSE("G1");
fieldValue96->addChild(Transform97);

ProtoInstance95->addFieldValue(fieldValue96);

fieldValue* fieldValue98 = new fieldValue();
fieldValue98->setName("endnode");
Transform* Transform99 = new Transform();
Transform99->setUSE("G4");
fieldValue98->addChild(Transform99);

ProtoInstance95->addFieldValue(fieldValue98);

fieldValue* fieldValue100 = new fieldValue();
fieldValue100->setName("transnode");
Transform* Transform101 = new Transform();
Transform101->setUSE("transC3");
fieldValue100->addChild(Transform101);

ProtoInstance95->addFieldValue(fieldValue100);

fieldValue* fieldValue102 = new fieldValue();
fieldValue102->setName("rotscalenode");
Transform* Transform103 = new Transform();
Transform103->setUSE("rotscaleC3");
fieldValue102->addChild(Transform103);

ProtoInstance95->addFieldValue(fieldValue102);

Scene8->addChild(ProtoInstance95);

ROUTE* ROUTE104 = new ROUTE();
ROUTE104->setFromNode("PS1");
ROUTE104->setFromField("translation_changed");
ROUTE104->setToNode("G1");
ROUTE104->setToField("translation");
Scene8->addChild(ROUTE104);

ROUTE* ROUTE105 = new ROUTE();
ROUTE105->setFromNode("PS2");
ROUTE105->setFromField("translation_changed");
ROUTE105->setToNode("G2");
ROUTE105->setToField("translation");
Scene8->addChild(ROUTE105);

ROUTE* ROUTE106 = new ROUTE();
ROUTE106->setFromNode("PS3");
ROUTE106->setFromField("translation_changed");
ROUTE106->setToNode("G3");
ROUTE106->setToField("translation");
Scene8->addChild(ROUTE106);

ROUTE* ROUTE107 = new ROUTE();
ROUTE107->setFromNode("PS4");
ROUTE107->setFromField("translation_changed");
ROUTE107->setToNode("G4");
ROUTE107->setToField("translation");
Scene8->addChild(ROUTE107);

ROUTE* ROUTE108 = new ROUTE();
ROUTE108->setFromNode("G1");
ROUTE108->setFromField("translation");
ROUTE108->setToNode("connector1");
ROUTE108->setToField("set_startpoint");
Scene8->addChild(ROUTE108);

ROUTE* ROUTE109 = new ROUTE();
ROUTE109->setFromNode("G2");
ROUTE109->setFromField("translation");
ROUTE109->setToNode("connector1");
ROUTE109->setToField("set_endpoint");
Scene8->addChild(ROUTE109);

ROUTE* ROUTE110 = new ROUTE();
ROUTE110->setFromNode("G1");
ROUTE110->setFromField("translation");
ROUTE110->setToNode("connector2");
ROUTE110->setToField("set_startpoint");
Scene8->addChild(ROUTE110);

ROUTE* ROUTE111 = new ROUTE();
ROUTE111->setFromNode("G3");
ROUTE111->setFromField("translation");
ROUTE111->setToNode("connector2");
ROUTE111->setToField("set_endpoint");
Scene8->addChild(ROUTE111);

ROUTE* ROUTE112 = new ROUTE();
ROUTE112->setFromNode("G1");
ROUTE112->setFromField("translation");
ROUTE112->setToNode("connector3");
ROUTE112->setToField("set_startpoint");
Scene8->addChild(ROUTE112);

ROUTE* ROUTE113 = new ROUTE();
ROUTE113->setFromNode("G4");
ROUTE113->setFromField("translation");
ROUTE113->setToNode("connector3");
ROUTE113->setToField("set_endpoint");
Scene8->addChild(ROUTE113);

X3D0->setScene(Scene8);

X3D0->toXMLString();
}
