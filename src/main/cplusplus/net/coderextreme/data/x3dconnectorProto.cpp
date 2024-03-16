#ifdef WIN32
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#endif
#define False false
#define True true
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/pch.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/SphereExample/framework.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/XML_PARSER.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/X3DLib.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glMath.h"
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Examples_X3DForWebAuthors/Chapter02/SphereExample/include/glut.h"
int main(int argc, char ** argv) {
X3D* X3D0 = new X3D();
X3D0->setProfile(CString("Immersive"));
X3D0->setVersion(CString("3.3"));
head* head1 = new head();
meta* meta2 = new meta();
meta2->setName(CString("title"));
meta2->setContent(CString("x3dconnectorProto.x3d"));
head1->addMeta(meta2);

meta* meta3 = new meta();
meta3->setName(CString("creator"));
meta3->setContent(CString("Lost, Doug Sanden I think"));
head1->addMeta(meta3);

meta* meta4 = new meta();
meta4->setName(CString("created"));
meta4->setContent(CString("Unknown"));
head1->addMeta(meta4);

meta* meta5 = new meta();
meta5->setName(CString("modified"));
meta5->setContent(CString("July 30 2023"));
head1->addMeta(meta5);

meta* meta6 = new meta();
meta6->setName(CString("generator"));
meta6->setContent(CString("manual"));
head1->addMeta(meta6);

meta* meta7 = new meta();
meta7->setName(CString("identifier"));
meta7->setContent(CString("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d"));
head1->addMeta(meta7);

meta* meta8 = new meta();
meta8->setName(CString("description"));
meta8->setContent(CString("a generic proto to connect two objects"));
head1->addMeta(meta8);

meta* meta9 = new meta();
meta9->setName(CString("license"));
meta9->setContent(CString("https://www.web3d.org/x3d/content/examples/license.html"));
head1->addMeta(meta9);

X3D0->setHead(head1);

Scene* Scene10 = new Scene();
WorldInfo* WorldInfo11 = new WorldInfo();
WorldInfo11->setTitle(CString("Connector Proto"));
Scene10->addChild(WorldInfo11);

Viewpoint* Viewpoint12 = new Viewpoint();
Viewpoint12->setPosition(new float[3]{0,0,5});
Viewpoint12->setDescription(CString("Only Viewpoint"));
Scene10->addChild(Viewpoint12);

Background* Background13 = new Background();
Background13->setSkyColor(new float[3]{0.4,0.4,0.4}, 3);
Scene10->addChild(Background13);

Transform* Transform14 = new Transform();
Transform14->setDEF(CString("G1"));
Shape* Shape15 = new Shape();
Appearance* Appearance16 = new Appearance();
Material* Material17 = new Material();
Material17->setDiffuseColor(new float[3]{0.7,0.2,0.2});
Appearance16->addChild(Material17);

Shape15->addChild(Appearance16);

Sphere* Sphere18 = new Sphere();
Sphere18->setRadius(0.1);
Shape15->setGeometry(Sphere18);

Transform14->addChild(Shape15);

PlaneSensor* PlaneSensor19 = new PlaneSensor();
PlaneSensor19->setDescription(CString("Grab to move"));
PlaneSensor19->setDEF(CString("PS1"));
Transform14->addChild(PlaneSensor19);

ROUTE* ROUTE20 = new ROUTE();
ROUTE20->setFromNode(CString("PS1"));
ROUTE20->setFromField(CString("translation_changed"));
ROUTE20->setToNode(CString("G1"));
ROUTE20->setToField(CString("set_translation"));
Transform14->addChild(ROUTE20);

Scene10->addChild(Transform14);

Transform* Transform21 = new Transform();
Transform21->setDEF(CString("G2"));
Transform21->setTranslation(new float[3]{1,-1,0.01});
Shape* Shape22 = new Shape();
Appearance* Appearance23 = new Appearance();
Material* Material24 = new Material();
Material24->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance23->addChild(Material24);

Shape22->addChild(Appearance23);

Sphere* Sphere25 = new Sphere();
Sphere25->setRadius(0.1);
Shape22->setGeometry(Sphere25);

Transform21->addChild(Shape22);

PlaneSensor* PlaneSensor26 = new PlaneSensor();
PlaneSensor26->setDescription(CString("Grab to move"));
PlaneSensor26->setOffset(new float[3]{1,-1,0.01});
PlaneSensor26->setDEF(CString("PS2"));
Transform21->addChild(PlaneSensor26);

ROUTE* ROUTE27 = new ROUTE();
ROUTE27->setFromNode(CString("PS2"));
ROUTE27->setFromField(CString("translation_changed"));
ROUTE27->setToNode(CString("G2"));
ROUTE27->setToField(CString("set_translation"));
Transform21->addChild(ROUTE27);

Scene10->addChild(Transform21);

Transform* Transform28 = new Transform();
Transform28->setDEF(CString("G3"));
Transform28->setTranslation(new float[3]{1,1,0.01});
Shape* Shape29 = new Shape();
Appearance* Appearance30 = new Appearance();
Material* Material31 = new Material();
Material31->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance30->addChild(Material31);

Shape29->addChild(Appearance30);

Sphere* Sphere32 = new Sphere();
Sphere32->setRadius(0.1);
Shape29->setGeometry(Sphere32);

Transform28->addChild(Shape29);

PlaneSensor* PlaneSensor33 = new PlaneSensor();
PlaneSensor33->setDescription(CString("Grab to move"));
PlaneSensor33->setOffset(new float[3]{1,1,0.01});
PlaneSensor33->setDEF(CString("PS3"));
Transform28->addChild(PlaneSensor33);

ROUTE* ROUTE34 = new ROUTE();
ROUTE34->setFromNode(CString("PS3"));
ROUTE34->setFromField(CString("translation_changed"));
ROUTE34->setToNode(CString("G3"));
ROUTE34->setToField(CString("set_translation"));
Transform28->addChild(ROUTE34);

Scene10->addChild(Transform28);

Transform* Transform35 = new Transform();
Transform35->setDEF(CString("G4"));
Transform35->setTranslation(new float[3]{-1,1,0.01});
Shape* Shape36 = new Shape();
Appearance* Appearance37 = new Appearance();
Material* Material38 = new Material();
Material38->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance37->addChild(Material38);

Shape36->addChild(Appearance37);

Sphere* Sphere39 = new Sphere();
Sphere39->setRadius(0.1);
Shape36->setGeometry(Sphere39);

Transform35->addChild(Shape36);

PlaneSensor* PlaneSensor40 = new PlaneSensor();
PlaneSensor40->setDescription(CString("Grab to move"));
PlaneSensor40->setOffset(new float[3]{-1,1,0.01});
PlaneSensor40->setDEF(CString("PS4"));
Transform35->addChild(PlaneSensor40);

ROUTE* ROUTE41 = new ROUTE();
ROUTE41->setFromNode(CString("PS4"));
ROUTE41->setFromField(CString("translation_changed"));
ROUTE41->setToNode(CString("G4"));
ROUTE41->setToField(CString("set_translation"));
Transform35->addChild(ROUTE41);

Scene10->addChild(Transform35);

Transform* Transform42 = new Transform();
Transform42->setDEF(CString("transC1"));
Transform* Transform43 = new Transform();
Transform43->setDEF(CString("rotscaleC1"));
Shape* Shape44 = new Shape();
Appearance* Appearance45 = new Appearance();
Material* Material46 = new Material();
Material46->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material46->setTransparency(0.5);
Appearance45->addChild(Material46);

Shape44->addChild(Appearance45);

Cylinder* Cylinder47 = new Cylinder();
Cylinder47->setRadius(0.05);
Shape44->setGeometry(Cylinder47);

Transform43->addChild(Shape44);

Transform42->addChild(Transform43);

Scene10->addChild(Transform42);

Transform* Transform48 = new Transform();
Transform48->setDEF(CString("transC2"));
Transform* Transform49 = new Transform();
Transform49->setDEF(CString("rotscaleC2"));
Shape* Shape50 = new Shape();
Appearance* Appearance51 = new Appearance();
Material* Material52 = new Material();
Material52->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material52->setTransparency(0.5);
Appearance51->addChild(Material52);

Shape50->addChild(Appearance51);

Cylinder* Cylinder53 = new Cylinder();
Cylinder53->setRadius(0.05);
Shape50->setGeometry(Cylinder53);

Transform49->addChild(Shape50);

Transform48->addChild(Transform49);

Scene10->addChild(Transform48);

Transform* Transform54 = new Transform();
Transform54->setDEF(CString("transC3"));
Transform* Transform55 = new Transform();
Transform55->setDEF(CString("rotscaleC3"));
Shape* Shape56 = new Shape();
Appearance* Appearance57 = new Appearance();
Material* Material58 = new Material();
Material58->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material58->setTransparency(0.5);
Appearance57->addChild(Material58);

Shape56->addChild(Appearance57);

Cylinder* Cylinder59 = new Cylinder();
Cylinder59->setRadius(0.05);
Shape56->setGeometry(Cylinder59);

Transform55->addChild(Shape56);

Transform54->addChild(Transform55);

Scene10->addChild(Transform54);

ProtoDeclare* ProtoDeclare60 = new ProtoDeclare();
ProtoDeclare60->setName(CString("x3dconnector"));
ProtoInterface* ProtoInterface61 = new ProtoInterface();
field* field62 = new field();
field62->setName(CString("startnode"));
field62->setAccessType(CString("initializeOnly"));
field62->setType(CString("SFNode"));
ProtoInterface61->addChild(field62);

field* field63 = new field();
field63->setName(CString("endnode"));
field63->setAccessType(CString("initializeOnly"));
field63->setType(CString("SFNode"));
ProtoInterface61->addChild(field63);

field* field64 = new field();
field64->setName(CString("transnode"));
field64->setAccessType(CString("initializeOnly"));
field64->setType(CString("SFNode"));
ProtoInterface61->addChild(field64);

field* field65 = new field();
field65->setName(CString("rotscalenode"));
field65->setAccessType(CString("initializeOnly"));
field65->setType(CString("SFNode"));
ProtoInterface61->addChild(field65);

field* field66 = new field();
field66->setName(CString("set_startpoint"));
field66->setAccessType(CString("inputOnly"));
field66->setType(CString("SFVec3f"));
ProtoInterface61->addChild(field66);

field* field67 = new field();
field67->setName(CString("set_endpoint"));
field67->setAccessType(CString("inputOnly"));
field67->setType(CString("SFVec3f"));
ProtoInterface61->addChild(field67);

ProtoDeclare60->addChild(ProtoInterface61);

ProtoBody* ProtoBody68 = new ProtoBody();
Script* Script69 = new Script();
Script69->setDEF(CString("S1"));
Script69->setDirectOutput(True);
field* field70 = new field();
field70->setName(CString("startnode"));
field70->setAccessType(CString("initializeOnly"));
field70->setType(CString("SFNode"));
Script69->addChild(field70);

field* field71 = new field();
field71->setName(CString("endnode"));
field71->setAccessType(CString("initializeOnly"));
field71->setType(CString("SFNode"));
Script69->addChild(field71);

field* field72 = new field();
field72->setName(CString("transnode"));
field72->setAccessType(CString("initializeOnly"));
field72->setType(CString("SFNode"));
Script69->addChild(field72);

field* field73 = new field();
field73->setName(CString("rotscalenode"));
field73->setAccessType(CString("initializeOnly"));
field73->setType(CString("SFNode"));
Script69->addChild(field73);

field* field74 = new field();
field74->setName(CString("set_startpoint"));
field74->setAccessType(CString("inputOnly"));
field74->setType(CString("SFVec3f"));
Script69->addChild(field74);

field* field75 = new field();
field75->setName(CString("set_endpoint"));
field75->setAccessType(CString("inputOnly"));
field75->setType(CString("SFVec3f"));
Script69->addChild(field75);

IS* IS76 = new IS();
Connect* connect77 = new Connect();
connect77->setNodeField(CString("startnode"));
connect77->setProtoField(CString("startnode"));
IS76->addChild(connect77);

Connect* connect78 = new Connect();
connect78->setNodeField(CString("endnode"));
connect78->setProtoField(CString("endnode"));
IS76->addChild(connect78);

Connect* connect79 = new Connect();
connect79->setNodeField(CString("transnode"));
connect79->setProtoField(CString("transnode"));
IS76->addChild(connect79);

Connect* connect80 = new Connect();
connect80->setNodeField(CString("rotscalenode"));
connect80->setProtoField(CString("rotscalenode"));
IS76->addChild(connect80);

Connect* connect81 = new Connect();
connect81->setNodeField(CString("set_startpoint"));
connect81->setProtoField(CString("set_startpoint"));
IS76->addChild(connect81);

Connect* connect82 = new Connect();
connect82->setNodeField(CString("set_endpoint"));
connect82->setProtoField(CString("set_endpoint"));
IS76->addChild(connect82);

Script69->addChild(IS76);


Script69->setSourceCode(CString("ecmascript:")+
_T("        function recompute(startpoint,endpoint){")+
_T("	    if (typeof endpoint === 'undefined') {")+
_T("		return;")+
_T("	    }")+
_T("            var dif = endpoint.subtract(startpoint);")+
_T("            var dist = dif.length()*0.5;")+
_T("            var dif2 = dif.multiply(0.5);")+
_T("            var norm = dif.normalize();")+
_T("            var transl = startpoint.add(dif2);")+
_T("	    if (typeof Quaternion !== 'undefined') {")+
_T("		    return {")+
_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
_T("			    translation : transl,")+
_T("			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)")+
_T("		    };")+
_T("	    } else {")+
_T("		    return {")+
_T("			    scale : new SFVec3f(1.0,dist,1.0),")+
_T("			    translation : transl,")+
_T("			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)")+
_T("		    };")+
_T("	    }")+
_T("	}")+
_T("	function recompute_and_route(startpoint, endpoint) {")+
_T("	      var trafo = recompute(startpoint, endpoint);")+
_T("	      if (trafo) {")+
_T("		      transnode.translation = trafo.translation;")+
_T("		      rotscalenode.rotation = trafo.rotation;")+
_T("		      rotscalenode.scale = trafo.scale;")+
_T("	      }")+
_T("	}")+
_T("        function initialize(){")+
_T("            recompute_and_route(startnode.translation,endnode.translation);")+
_T("        }")+
_T("        function set_startpoint(val,t){")+
_T("            recompute_and_route(val,endnode.translation);")+
_T("        }")+
_T("        function set_endpoint(val,t){")+
_T("            recompute_and_route(startnode.translation,val);")+
_T("        }"));
ProtoBody68->addChild(Script69);

ProtoDeclare60->addChild(ProtoBody68);

Scene10->addChild(ProtoDeclare60);

ProtoInstance* ProtoInstance83 = new ProtoInstance();
ProtoInstance83->setName(CString("x3dconnector"));
ProtoInstance83->setDEF(CString("connector1"));
fieldValue* fieldValue84 = new fieldValue();
fieldValue84->setName(&CString("startnode"));
Transform* Transform85 = new Transform();
Transform85->setUSE(CString("G1"));
fieldValue84->addChild(Transform85);

ProtoInstance83->addChild(fieldValue84);

fieldValue* fieldValue86 = new fieldValue();
fieldValue86->setName(&CString("endnode"));
Transform* Transform87 = new Transform();
Transform87->setUSE(CString("G2"));
fieldValue86->addChild(Transform87);

ProtoInstance83->addChild(fieldValue86);

fieldValue* fieldValue88 = new fieldValue();
fieldValue88->setName(&CString("transnode"));
Transform* Transform89 = new Transform();
Transform89->setUSE(CString("transC1"));
fieldValue88->addChild(Transform89);

ProtoInstance83->addChild(fieldValue88);

fieldValue* fieldValue90 = new fieldValue();
fieldValue90->setName(&CString("rotscalenode"));
Transform* Transform91 = new Transform();
Transform91->setUSE(CString("rotscaleC1"));
fieldValue90->addChild(Transform91);

ProtoInstance83->addChild(fieldValue90);

fieldValue* fieldValue92 = new fieldValue();
fieldValue92->setName(&CString("set_startpoint"));
fieldValue92->setValue(CString("0 0 0"));
ProtoInstance83->addChild(fieldValue92);

fieldValue* fieldValue93 = new fieldValue();
fieldValue93->setName(&CString("set_endpoint"));
fieldValue93->setValue(CString("0 0 0"));
ProtoInstance83->addChild(fieldValue93);

Scene10->addChild(ProtoInstance83);

ProtoInstance* ProtoInstance94 = new ProtoInstance();
ProtoInstance94->setName(CString("x3dconnector"));
ProtoInstance94->setDEF(CString("connector2"));
fieldValue* fieldValue95 = new fieldValue();
fieldValue95->setName(&CString("startnode"));
Transform* Transform96 = new Transform();
Transform96->setUSE(CString("G1"));
fieldValue95->addChild(Transform96);

ProtoInstance94->addChild(fieldValue95);

fieldValue* fieldValue97 = new fieldValue();
fieldValue97->setName(&CString("endnode"));
Transform* Transform98 = new Transform();
Transform98->setUSE(CString("G3"));
fieldValue97->addChild(Transform98);

ProtoInstance94->addChild(fieldValue97);

fieldValue* fieldValue99 = new fieldValue();
fieldValue99->setName(&CString("transnode"));
Transform* Transform100 = new Transform();
Transform100->setUSE(CString("transC2"));
fieldValue99->addChild(Transform100);

ProtoInstance94->addChild(fieldValue99);

fieldValue* fieldValue101 = new fieldValue();
fieldValue101->setName(&CString("rotscalenode"));
Transform* Transform102 = new Transform();
Transform102->setUSE(CString("rotscaleC2"));
fieldValue101->addChild(Transform102);

ProtoInstance94->addChild(fieldValue101);

fieldValue* fieldValue103 = new fieldValue();
fieldValue103->setName(&CString("set_startpoint"));
fieldValue103->setValue(CString("0 0 0"));
ProtoInstance94->addChild(fieldValue103);

fieldValue* fieldValue104 = new fieldValue();
fieldValue104->setName(&CString("set_endpoint"));
fieldValue104->setValue(CString("0 0 0"));
ProtoInstance94->addChild(fieldValue104);

Scene10->addChild(ProtoInstance94);

ProtoInstance* ProtoInstance105 = new ProtoInstance();
ProtoInstance105->setName(CString("x3dconnector"));
ProtoInstance105->setDEF(CString("connector3"));
fieldValue* fieldValue106 = new fieldValue();
fieldValue106->setName(&CString("startnode"));
Transform* Transform107 = new Transform();
Transform107->setUSE(CString("G1"));
fieldValue106->addChild(Transform107);

ProtoInstance105->addChild(fieldValue106);

fieldValue* fieldValue108 = new fieldValue();
fieldValue108->setName(&CString("endnode"));
Transform* Transform109 = new Transform();
Transform109->setUSE(CString("G4"));
fieldValue108->addChild(Transform109);

ProtoInstance105->addChild(fieldValue108);

fieldValue* fieldValue110 = new fieldValue();
fieldValue110->setName(&CString("transnode"));
Transform* Transform111 = new Transform();
Transform111->setUSE(CString("transC3"));
fieldValue110->addChild(Transform111);

ProtoInstance105->addChild(fieldValue110);

fieldValue* fieldValue112 = new fieldValue();
fieldValue112->setName(&CString("rotscalenode"));
Transform* Transform113 = new Transform();
Transform113->setUSE(CString("rotscaleC3"));
fieldValue112->addChild(Transform113);

ProtoInstance105->addChild(fieldValue112);

fieldValue* fieldValue114 = new fieldValue();
fieldValue114->setName(&CString("set_startpoint"));
fieldValue114->setValue(CString("0 0 0"));
ProtoInstance105->addChild(fieldValue114);

fieldValue* fieldValue115 = new fieldValue();
fieldValue115->setName(&CString("set_endpoint"));
fieldValue115->setValue(CString("0 0 0"));
ProtoInstance105->addChild(fieldValue115);

Scene10->addChild(ProtoInstance105);

ROUTE* ROUTE116 = new ROUTE();
ROUTE116->setFromNode(CString("G1"));
ROUTE116->setFromField(CString("translation_changed"));
ROUTE116->setToNode(CString("connector1"));
ROUTE116->setToField(CString("set_startpoint"));
Scene10->addChild(ROUTE116);

ROUTE* ROUTE117 = new ROUTE();
ROUTE117->setFromNode(CString("G2"));
ROUTE117->setFromField(CString("translation_changed"));
ROUTE117->setToNode(CString("connector1"));
ROUTE117->setToField(CString("set_endpoint"));
Scene10->addChild(ROUTE117);

ROUTE* ROUTE118 = new ROUTE();
ROUTE118->setFromNode(CString("G1"));
ROUTE118->setFromField(CString("translation_changed"));
ROUTE118->setToNode(CString("connector2"));
ROUTE118->setToField(CString("set_startpoint"));
Scene10->addChild(ROUTE118);

ROUTE* ROUTE119 = new ROUTE();
ROUTE119->setFromNode(CString("G3"));
ROUTE119->setFromField(CString("translation_changed"));
ROUTE119->setToNode(CString("connector2"));
ROUTE119->setToField(CString("set_endpoint"));
Scene10->addChild(ROUTE119);

ROUTE* ROUTE120 = new ROUTE();
ROUTE120->setFromNode(CString("G1"));
ROUTE120->setFromField(CString("translation_changed"));
ROUTE120->setToNode(CString("connector3"));
ROUTE120->setToField(CString("set_startpoint"));
Scene10->addChild(ROUTE120);

ROUTE* ROUTE121 = new ROUTE();
ROUTE121->setFromNode(CString("G4"));
ROUTE121->setFromField(CString("translation_changed"));
ROUTE121->setToNode(CString("connector3"));
ROUTE121->setToField(CString("set_endpoint"));
Scene10->addChild(ROUTE121);

X3D0->setScene(Scene10);

}
