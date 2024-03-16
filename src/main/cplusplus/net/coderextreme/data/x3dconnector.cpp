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
meta2->setContent("x3dconnector.x3d");
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
Transform10->setDEF("G1");
Shape* Shape11 = new Shape();
Appearance* Appearance12 = new Appearance();
Material* Material13 = new Material();
Material13->setDiffuseColor(new float[3]{0.7,0.2,0.2});
Appearance12->setMaterial(Material13);

Shape11->setAppearance(Appearance12);

Sphere* Sphere14 = new Sphere();
Sphere14->setRadius(0.1);
Shape11->setGeometry(Sphere14);

Transform10->addChild(Shape11);

PlaneSensor* PlaneSensor15 = new PlaneSensor();
PlaneSensor15->setDescription("Grab to move");
PlaneSensor15->setDEF("PS1");
Transform10->addChild(PlaneSensor15);

ROUTE* ROUTE16 = new ROUTE();
ROUTE16->setFromNode("PS1");
ROUTE16->setFromField("translation_changed");
ROUTE16->setToNode("G1");
ROUTE16->setToField("set_translation");
Transform10->addChild(ROUTE16);

Scene7->addChild(Transform10);

Transform* Transform17 = new Transform();
Transform17->setDEF("G2");
Transform17->setTranslation(new float[3]{1,-1,0.01});
Shape* Shape18 = new Shape();
Appearance* Appearance19 = new Appearance();
Material* Material20 = new Material();
Material20->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance19->setMaterial(Material20);

Shape18->setAppearance(Appearance19);

Sphere* Sphere21 = new Sphere();
Sphere21->setRadius(0.1);
Shape18->setGeometry(Sphere21);

Transform17->addChild(Shape18);

PlaneSensor* PlaneSensor22 = new PlaneSensor();
PlaneSensor22->setDescription("Grab to move");
PlaneSensor22->setOffset(new float[3]{1,-1,0.01});
PlaneSensor22->setDEF("PS2");
Transform17->addChild(PlaneSensor22);

ROUTE* ROUTE23 = new ROUTE();
ROUTE23->setFromNode("PS2");
ROUTE23->setFromField("translation_changed");
ROUTE23->setToNode("G2");
ROUTE23->setToField("set_translation");
Transform17->addChild(ROUTE23);

Scene7->addChild(Transform17);

Transform* Transform24 = new Transform();
Transform24->setDEF("transC1");
Transform* Transform25 = new Transform();
Transform25->setDEF("rotscaleC1");
Shape* Shape26 = new Shape();
Appearance* Appearance27 = new Appearance();
Material* Material28 = new Material();
Material28->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material28->setTransparency(0.5);
Appearance27->setMaterial(Material28);

Shape26->setAppearance(Appearance27);

Cylinder* Cylinder29 = new Cylinder();
Cylinder29->setRadius(0.05);
Shape26->setGeometry(Cylinder29);

Transform25->addChild(Shape26);

Transform24->addChild(Transform25);

Scene7->addChild(Transform24);

ProtoDeclare* ProtoDeclare30 = new ProtoDeclare();
ProtoDeclare30->setName("x3dconnector");
ProtoInterface* ProtoInterface31 = new ProtoInterface();
field* field32 = new field();
field32->setName("startnode");
field32->setAccessType("initializeOnly");
field32->setType("SFNode");
ProtoInterface31->addField(field32);

field* field33 = new field();
field33->setName("endnode");
field33->setAccessType("initializeOnly");
field33->setType("SFNode");
ProtoInterface31->addField(field33);

field* field34 = new field();
field34->setName("transnode");
field34->setAccessType("initializeOnly");
field34->setType("SFNode");
ProtoInterface31->addField(field34);

field* field35 = new field();
field35->setName("rotscalenode");
field35->setAccessType("initializeOnly");
field35->setType("SFNode");
ProtoInterface31->addField(field35);

field* field36 = new field();
field36->setName("set_startpoint");
field36->setAccessType("inputOnly");
field36->setType("SFVec3f");
ProtoInterface31->addField(field36);

field* field37 = new field();
field37->setName("set_endpoint");
field37->setAccessType("inputOnly");
field37->setType("SFVec3f");
ProtoInterface31->addField(field37);

ProtoDeclare30->setProtoInterface(ProtoInterface31);

ProtoBody* ProtoBody38 = new ProtoBody();
Script* Script39 = new Script();
Script39->setDEF("S1");
field* field40 = new field();
field40->setName("startnode");
field40->setAccessType("initializeOnly");
field40->setType("SFNode");
Script39->addField(field40);

field* field41 = new field();
field41->setName("endnode");
field41->setAccessType("initializeOnly");
field41->setType("SFNode");
Script39->addField(field41);

field* field42 = new field();
field42->setName("transnode");
field42->setAccessType("initializeOnly");
field42->setType("SFNode");
Script39->addField(field42);

field* field43 = new field();
field43->setName("rotscalenode");
field43->setAccessType("initializeOnly");
field43->setType("SFNode");
Script39->addField(field43);

field* field44 = new field();
field44->setName("set_startpoint");
field44->setAccessType("inputOnly");
field44->setType("SFVec3f");
Script39->addField(field44);

field* field45 = new field();
field45->setName("set_endpoint");
field45->setAccessType("inputOnly");
field45->setType("SFVec3f");
Script39->addField(field45);

IS* IS46 = new IS();
Connect* connect47 = new Connect();
connect47->setNodeField("startnode");
connect47->setProtoField("startnode");
IS46->addConnect(connect47);

Connect* connect48 = new Connect();
connect48->setNodeField("endnode");
connect48->setProtoField("endnode");
IS46->addConnect(connect48);

Connect* connect49 = new Connect();
connect49->setNodeField("transnode");
connect49->setProtoField("transnode");
IS46->addConnect(connect49);

Connect* connect50 = new Connect();
connect50->setNodeField("rotscalenode");
connect50->setProtoField("rotscalenode");
IS46->addConnect(connect50);

Connect* connect51 = new Connect();
connect51->setNodeField("set_startpoint");
connect51->setProtoField("set_startpoint");
IS46->addConnect(connect51);

Connect* connect52 = new Connect();
connect52->setNodeField("set_endpoint");
connect52->setProtoField("set_endpoint");
IS46->addConnect(connect52);

Script39->setIS(IS46);


Script39.setSourceCode(`ecmascript:\n"+
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
ProtoBody38->addChild(Script39);

ProtoDeclare30->setProtoBody(ProtoBody38);

Scene7->addChild(ProtoDeclare30);

ProtoInstance* ProtoInstance53 = new ProtoInstance();
ProtoInstance53->setName("x3dconnector");
ProtoInstance53->setDEF("connector1");
fieldValue* fieldValue54 = new fieldValue();
fieldValue54->setName("startnode");
Transform* Transform55 = new Transform();
Transform55->setUSE("G1");
fieldValue54->addChild(Transform55);

ProtoInstance53->addFieldValue(fieldValue54);

fieldValue* fieldValue56 = new fieldValue();
fieldValue56->setName("endnode");
Transform* Transform57 = new Transform();
Transform57->setUSE("G2");
fieldValue56->addChild(Transform57);

ProtoInstance53->addFieldValue(fieldValue56);

fieldValue* fieldValue58 = new fieldValue();
fieldValue58->setName("transnode");
Transform* Transform59 = new Transform();
Transform59->setUSE("transC1");
fieldValue58->addChild(Transform59);

ProtoInstance53->addFieldValue(fieldValue58);

fieldValue* fieldValue60 = new fieldValue();
fieldValue60->setName("rotscalenode");
Transform* Transform61 = new Transform();
Transform61->setUSE("rotscaleC1");
fieldValue60->addChild(Transform61);

ProtoInstance53->addFieldValue(fieldValue60);

fieldValue* fieldValue62 = new fieldValue();
fieldValue62->setName("set_startpoint");
ProtoInstance53->addFieldValue(fieldValue62);

fieldValue* fieldValue63 = new fieldValue();
fieldValue63->setName("set_endpoint");
ProtoInstance53->addFieldValue(fieldValue63);

Scene7->addChild(ProtoInstance53);

ROUTE* ROUTE64 = new ROUTE();
ROUTE64->setFromNode("G1");
ROUTE64->setFromField("translation_changed");
ROUTE64->setToNode("connector1");
ROUTE64->setToField("set_startpoint");
Scene7->addChild(ROUTE64);

ROUTE* ROUTE65 = new ROUTE();
ROUTE65->setFromNode("G2");
ROUTE65->setFromField("translation_changed");
ROUTE65->setToNode("connector1");
ROUTE65->setToField("set_endpoint");
Scene7->addChild(ROUTE65);

X3D0->setScene(Scene7);

X3D0->toXMLString();
}
