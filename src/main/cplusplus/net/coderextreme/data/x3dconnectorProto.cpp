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
meta5->setContent("July 30 2023");
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName("generator");
meta6->setContent("manual");
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName("identifier");
meta7->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d");
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName("description");
meta8->setContent("a generic proto to connect two objects");
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName("license");
meta9->setContent("https://www.web3d.org/x3d/content/examples/license.html");
head1->addMeta(meta9);

X3D0->setHead(head1);

Scene* Scene10 = new Scene();
WorldInfo* WorldInfo11 = new WorldInfo();
WorldInfo11->setTitle("Connector Proto");
Scene10->addChild(WorldInfo11);

Viewpoint* Viewpoint12 = new Viewpoint();
Viewpoint12->setPosition(new float[3]{0,0,5});
Viewpoint12->setDescription("Only Viewpoint");
Scene10->addChild(Viewpoint12);

Background* Background13 = new Background();
Background13->setSkyColor(new float[3]{0.4,0.4,0.4});
Scene10->addChild(Background13);

Transform* Transform14 = new Transform();
Transform14->setDEF("G1");
Shape* Shape15 = new Shape();
Appearance* Appearance16 = new Appearance();
Material* Material17 = new Material();
Material17->setDiffuseColor(new float[3]{0.7,0.2,0.2});
Appearance16->setMaterial(Material17);

Shape15->setAppearance(Appearance16);

Sphere* Sphere18 = new Sphere();
Sphere18->setRadius(0.1);
Shape15->setGeometry(Sphere18);

Transform14->addChild(Shape15);

PlaneSensor* PlaneSensor19 = new PlaneSensor();
PlaneSensor19->setDescription("Grab to move");
PlaneSensor19->setDEF("PS1");
Transform14->addChild(PlaneSensor19);

ROUTE* ROUTE20 = new ROUTE();
ROUTE20->setFromNode("PS1");
ROUTE20->setFromField("translation_changed");
ROUTE20->setToNode("G1");
ROUTE20->setToField("set_translation");
Transform14->addChild(ROUTE20);

Scene10->addChild(Transform14);

Transform* Transform21 = new Transform();
Transform21->setDEF("G2");
Transform21->setTranslation(new float[3]{1,-1,0.01});
Shape* Shape22 = new Shape();
Appearance* Appearance23 = new Appearance();
Material* Material24 = new Material();
Material24->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance23->setMaterial(Material24);

Shape22->setAppearance(Appearance23);

Sphere* Sphere25 = new Sphere();
Sphere25->setRadius(0.1);
Shape22->setGeometry(Sphere25);

Transform21->addChild(Shape22);

PlaneSensor* PlaneSensor26 = new PlaneSensor();
PlaneSensor26->setDescription("Grab to move");
PlaneSensor26->setOffset(new float[3]{1,-1,0.01});
PlaneSensor26->setDEF("PS2");
Transform21->addChild(PlaneSensor26);

ROUTE* ROUTE27 = new ROUTE();
ROUTE27->setFromNode("PS2");
ROUTE27->setFromField("translation_changed");
ROUTE27->setToNode("G2");
ROUTE27->setToField("set_translation");
Transform21->addChild(ROUTE27);

Scene10->addChild(Transform21);

Transform* Transform28 = new Transform();
Transform28->setDEF("G3");
Transform28->setTranslation(new float[3]{1,1,0.01});
Shape* Shape29 = new Shape();
Appearance* Appearance30 = new Appearance();
Material* Material31 = new Material();
Material31->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance30->setMaterial(Material31);

Shape29->setAppearance(Appearance30);

Sphere* Sphere32 = new Sphere();
Sphere32->setRadius(0.1);
Shape29->setGeometry(Sphere32);

Transform28->addChild(Shape29);

PlaneSensor* PlaneSensor33 = new PlaneSensor();
PlaneSensor33->setDescription("Grab to move");
PlaneSensor33->setOffset(new float[3]{1,1,0.01});
PlaneSensor33->setDEF("PS3");
Transform28->addChild(PlaneSensor33);

ROUTE* ROUTE34 = new ROUTE();
ROUTE34->setFromNode("PS3");
ROUTE34->setFromField("translation_changed");
ROUTE34->setToNode("G3");
ROUTE34->setToField("set_translation");
Transform28->addChild(ROUTE34);

Scene10->addChild(Transform28);

Transform* Transform35 = new Transform();
Transform35->setDEF("G4");
Transform35->setTranslation(new float[3]{-1,1,0.01});
Shape* Shape36 = new Shape();
Appearance* Appearance37 = new Appearance();
Material* Material38 = new Material();
Material38->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance37->setMaterial(Material38);

Shape36->setAppearance(Appearance37);

Sphere* Sphere39 = new Sphere();
Sphere39->setRadius(0.1);
Shape36->setGeometry(Sphere39);

Transform35->addChild(Shape36);

PlaneSensor* PlaneSensor40 = new PlaneSensor();
PlaneSensor40->setDescription("Grab to move");
PlaneSensor40->setOffset(new float[3]{-1,1,0.01});
PlaneSensor40->setDEF("PS4");
Transform35->addChild(PlaneSensor40);

ROUTE* ROUTE41 = new ROUTE();
ROUTE41->setFromNode("PS4");
ROUTE41->setFromField("translation_changed");
ROUTE41->setToNode("G4");
ROUTE41->setToField("set_translation");
Transform35->addChild(ROUTE41);

Scene10->addChild(Transform35);

Transform* Transform42 = new Transform();
Transform42->setDEF("transC1");
Transform* Transform43 = new Transform();
Transform43->setDEF("rotscaleC1");
Shape* Shape44 = new Shape();
Appearance* Appearance45 = new Appearance();
Material* Material46 = new Material();
Material46->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material46->setTransparency(0.5);
Appearance45->setMaterial(Material46);

Shape44->setAppearance(Appearance45);

Cylinder* Cylinder47 = new Cylinder();
Cylinder47->setRadius(0.05);
Shape44->setGeometry(Cylinder47);

Transform43->addChild(Shape44);

Transform42->addChild(Transform43);

Scene10->addChild(Transform42);

Transform* Transform48 = new Transform();
Transform48->setDEF("transC2");
Transform* Transform49 = new Transform();
Transform49->setDEF("rotscaleC2");
Shape* Shape50 = new Shape();
Appearance* Appearance51 = new Appearance();
Material* Material52 = new Material();
Material52->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material52->setTransparency(0.5);
Appearance51->setMaterial(Material52);

Shape50->setAppearance(Appearance51);

Cylinder* Cylinder53 = new Cylinder();
Cylinder53->setRadius(0.05);
Shape50->setGeometry(Cylinder53);

Transform49->addChild(Shape50);

Transform48->addChild(Transform49);

Scene10->addChild(Transform48);

Transform* Transform54 = new Transform();
Transform54->setDEF("transC3");
Transform* Transform55 = new Transform();
Transform55->setDEF("rotscaleC3");
Shape* Shape56 = new Shape();
Appearance* Appearance57 = new Appearance();
Material* Material58 = new Material();
Material58->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material58->setTransparency(0.5);
Appearance57->setMaterial(Material58);

Shape56->setAppearance(Appearance57);

Cylinder* Cylinder59 = new Cylinder();
Cylinder59->setRadius(0.05);
Shape56->setGeometry(Cylinder59);

Transform55->addChild(Shape56);

Transform54->addChild(Transform55);

Scene10->addChild(Transform54);

ProtoDeclare* ProtoDeclare60 = new ProtoDeclare();
ProtoDeclare60->setName("x3dconnector");
ProtoInterface* ProtoInterface61 = new ProtoInterface();
field* field62 = new field();
field62->setName("startnode");
field62->setAccessType("initializeOnly");
field62->setType("SFNode");
ProtoInterface61->addField(field62);

field* field63 = new field();
field63->setName("endnode");
field63->setAccessType("initializeOnly");
field63->setType("SFNode");
ProtoInterface61->addField(field63);

field* field64 = new field();
field64->setName("transnode");
field64->setAccessType("initializeOnly");
field64->setType("SFNode");
ProtoInterface61->addField(field64);

field* field65 = new field();
field65->setName("rotscalenode");
field65->setAccessType("initializeOnly");
field65->setType("SFNode");
ProtoInterface61->addField(field65);

field* field66 = new field();
field66->setName("set_startpoint");
field66->setAccessType("inputOnly");
field66->setType("SFVec3f");
ProtoInterface61->addField(field66);

field* field67 = new field();
field67->setName("set_endpoint");
field67->setAccessType("inputOnly");
field67->setType("SFVec3f");
ProtoInterface61->addField(field67);

ProtoDeclare60->setProtoInterface(ProtoInterface61);

ProtoBody* ProtoBody68 = new ProtoBody();
Script* Script69 = new Script();
Script69->setDEF("S1");
Script69->setDirectOutput(True);
field* field70 = new field();
field70->setName("startnode");
field70->setAccessType("initializeOnly");
field70->setType("SFNode");
Script69->addField(field70);

field* field71 = new field();
field71->setName("endnode");
field71->setAccessType("initializeOnly");
field71->setType("SFNode");
Script69->addField(field71);

field* field72 = new field();
field72->setName("transnode");
field72->setAccessType("initializeOnly");
field72->setType("SFNode");
Script69->addField(field72);

field* field73 = new field();
field73->setName("rotscalenode");
field73->setAccessType("initializeOnly");
field73->setType("SFNode");
Script69->addField(field73);

field* field74 = new field();
field74->setName("set_startpoint");
field74->setAccessType("inputOnly");
field74->setType("SFVec3f");
Script69->addField(field74);

field* field75 = new field();
field75->setName("set_endpoint");
field75->setAccessType("inputOnly");
field75->setType("SFVec3f");
Script69->addField(field75);

IS* IS76 = new IS();
Connect* connect77 = new Connect();
connect77->setNodeField("startnode");
connect77->setProtoField("startnode");
IS76->addConnect(connect77);

Connect* connect78 = new Connect();
connect78->setNodeField("endnode");
connect78->setProtoField("endnode");
IS76->addConnect(connect78);

Connect* connect79 = new Connect();
connect79->setNodeField("transnode");
connect79->setProtoField("transnode");
IS76->addConnect(connect79);

Connect* connect80 = new Connect();
connect80->setNodeField("rotscalenode");
connect80->setProtoField("rotscalenode");
IS76->addConnect(connect80);

Connect* connect81 = new Connect();
connect81->setNodeField("set_startpoint");
connect81->setProtoField("set_startpoint");
IS76->addConnect(connect81);

Connect* connect82 = new Connect();
connect82->setNodeField("set_endpoint");
connect82->setProtoField("set_endpoint");
IS76->addConnect(connect82);

Script69->setIS(IS76);


Script69.setSourceCode(`ecmascript:\n"+
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
"	      if (trafo) {\n"+
"		      transnode.translation = trafo.translation;\n"+
"		      rotscalenode.rotation = trafo.rotation;\n"+
"		      rotscalenode.scale = trafo.scale;\n"+
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
ProtoBody68->addChild(Script69);

ProtoDeclare60->setProtoBody(ProtoBody68);

Scene10->addChild(ProtoDeclare60);

ProtoInstance* ProtoInstance83 = new ProtoInstance();
ProtoInstance83->setName("x3dconnector");
ProtoInstance83->setDEF("connector1");
fieldValue* fieldValue84 = new fieldValue();
fieldValue84->setName("startnode");
Transform* Transform85 = new Transform();
Transform85->setUSE("G1");
fieldValue84->addChild(Transform85);

ProtoInstance83->addFieldValue(fieldValue84);

fieldValue* fieldValue86 = new fieldValue();
fieldValue86->setName("endnode");
Transform* Transform87 = new Transform();
Transform87->setUSE("G2");
fieldValue86->addChild(Transform87);

ProtoInstance83->addFieldValue(fieldValue86);

fieldValue* fieldValue88 = new fieldValue();
fieldValue88->setName("transnode");
Transform* Transform89 = new Transform();
Transform89->setUSE("transC1");
fieldValue88->addChild(Transform89);

ProtoInstance83->addFieldValue(fieldValue88);

fieldValue* fieldValue90 = new fieldValue();
fieldValue90->setName("rotscalenode");
Transform* Transform91 = new Transform();
Transform91->setUSE("rotscaleC1");
fieldValue90->addChild(Transform91);

ProtoInstance83->addFieldValue(fieldValue90);

fieldValue* fieldValue92 = new fieldValue();
fieldValue92->setName("set_startpoint");
fieldValue92->setValue("0 0 0");
ProtoInstance83->addFieldValue(fieldValue92);

fieldValue* fieldValue93 = new fieldValue();
fieldValue93->setName("set_endpoint");
fieldValue93->setValue("0 0 0");
ProtoInstance83->addFieldValue(fieldValue93);

Scene10->addChild(ProtoInstance83);

ProtoInstance* ProtoInstance94 = new ProtoInstance();
ProtoInstance94->setName("x3dconnector");
ProtoInstance94->setDEF("connector2");
fieldValue* fieldValue95 = new fieldValue();
fieldValue95->setName("startnode");
Transform* Transform96 = new Transform();
Transform96->setUSE("G1");
fieldValue95->addChild(Transform96);

ProtoInstance94->addFieldValue(fieldValue95);

fieldValue* fieldValue97 = new fieldValue();
fieldValue97->setName("endnode");
Transform* Transform98 = new Transform();
Transform98->setUSE("G3");
fieldValue97->addChild(Transform98);

ProtoInstance94->addFieldValue(fieldValue97);

fieldValue* fieldValue99 = new fieldValue();
fieldValue99->setName("transnode");
Transform* Transform100 = new Transform();
Transform100->setUSE("transC2");
fieldValue99->addChild(Transform100);

ProtoInstance94->addFieldValue(fieldValue99);

fieldValue* fieldValue101 = new fieldValue();
fieldValue101->setName("rotscalenode");
Transform* Transform102 = new Transform();
Transform102->setUSE("rotscaleC2");
fieldValue101->addChild(Transform102);

ProtoInstance94->addFieldValue(fieldValue101);

fieldValue* fieldValue103 = new fieldValue();
fieldValue103->setName("set_startpoint");
fieldValue103->setValue("0 0 0");
ProtoInstance94->addFieldValue(fieldValue103);

fieldValue* fieldValue104 = new fieldValue();
fieldValue104->setName("set_endpoint");
fieldValue104->setValue("0 0 0");
ProtoInstance94->addFieldValue(fieldValue104);

Scene10->addChild(ProtoInstance94);

ProtoInstance* ProtoInstance105 = new ProtoInstance();
ProtoInstance105->setName("x3dconnector");
ProtoInstance105->setDEF("connector3");
fieldValue* fieldValue106 = new fieldValue();
fieldValue106->setName("startnode");
Transform* Transform107 = new Transform();
Transform107->setUSE("G1");
fieldValue106->addChild(Transform107);

ProtoInstance105->addFieldValue(fieldValue106);

fieldValue* fieldValue108 = new fieldValue();
fieldValue108->setName("endnode");
Transform* Transform109 = new Transform();
Transform109->setUSE("G4");
fieldValue108->addChild(Transform109);

ProtoInstance105->addFieldValue(fieldValue108);

fieldValue* fieldValue110 = new fieldValue();
fieldValue110->setName("transnode");
Transform* Transform111 = new Transform();
Transform111->setUSE("transC3");
fieldValue110->addChild(Transform111);

ProtoInstance105->addFieldValue(fieldValue110);

fieldValue* fieldValue112 = new fieldValue();
fieldValue112->setName("rotscalenode");
Transform* Transform113 = new Transform();
Transform113->setUSE("rotscaleC3");
fieldValue112->addChild(Transform113);

ProtoInstance105->addFieldValue(fieldValue112);

fieldValue* fieldValue114 = new fieldValue();
fieldValue114->setName("set_startpoint");
fieldValue114->setValue("0 0 0");
ProtoInstance105->addFieldValue(fieldValue114);

fieldValue* fieldValue115 = new fieldValue();
fieldValue115->setName("set_endpoint");
fieldValue115->setValue("0 0 0");
ProtoInstance105->addFieldValue(fieldValue115);

Scene10->addChild(ProtoInstance105);

ROUTE* ROUTE116 = new ROUTE();
ROUTE116->setFromNode("G1");
ROUTE116->setFromField("translation_changed");
ROUTE116->setToNode("connector1");
ROUTE116->setToField("set_startpoint");
Scene10->addChild(ROUTE116);

ROUTE* ROUTE117 = new ROUTE();
ROUTE117->setFromNode("G2");
ROUTE117->setFromField("translation_changed");
ROUTE117->setToNode("connector1");
ROUTE117->setToField("set_endpoint");
Scene10->addChild(ROUTE117);

ROUTE* ROUTE118 = new ROUTE();
ROUTE118->setFromNode("G1");
ROUTE118->setFromField("translation_changed");
ROUTE118->setToNode("connector2");
ROUTE118->setToField("set_startpoint");
Scene10->addChild(ROUTE118);

ROUTE* ROUTE119 = new ROUTE();
ROUTE119->setFromNode("G3");
ROUTE119->setFromField("translation_changed");
ROUTE119->setToNode("connector2");
ROUTE119->setToField("set_endpoint");
Scene10->addChild(ROUTE119);

ROUTE* ROUTE120 = new ROUTE();
ROUTE120->setFromNode("G1");
ROUTE120->setFromField("translation_changed");
ROUTE120->setToNode("connector3");
ROUTE120->setToField("set_startpoint");
Scene10->addChild(ROUTE120);

ROUTE* ROUTE121 = new ROUTE();
ROUTE121->setFromNode("G4");
ROUTE121->setFromField("translation_changed");
ROUTE121->setToNode("connector3");
ROUTE121->setToField("set_endpoint");
Scene10->addChild(ROUTE121);

X3D0->setScene(Scene10);

X3D0->toXMLString();
}
