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
meta2->setContent("x3dconnectorProto.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("Lost, Doug Sanden I think");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("created");
meta4->setContent("Unknown");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("modified");
meta5->setContent("July 30 2023");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("generator");
meta6->setContent("manual");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("identifier");
meta7->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d");
head1->addMeta(*meta7);

Cmeta* meta8 = new Cmeta();
meta8->setName("description");
meta8->setContent("a generic proto to connect two objects");
head1->addMeta(*meta8);

Cmeta* meta9 = new Cmeta();
meta9->setName("license");
meta9->setContent("https://www.web3d.org/x3d/content/examples/license.html");
head1->addMeta(*meta9);

X3D0->setHead(*head1);

CScene* Scene10 = new CScene();
CWorldInfo* WorldInfo11 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo11->setTitle("Connector Proto");
group->addChildren(*WorldInfo11);

CViewpoint* Viewpoint12 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint12->setPosition(new float[3]{0,0,5});
Viewpoint12->setDescription("Only Viewpoint");
group->addChildren(*Viewpoint12);

CBackground* Background13 = (CBackground *)(m_pScene.createNode("Background"));
Background13->setSkyColor(new float[3]{0.4,0.4,0.4});
group->addChildren(*Background13);

CTransform* Transform14 = (CTransform *)(m_pScene.createNode("Transform"));
Transform14->setDEF("G1");
CShape* Shape15 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance16 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material17 = (CMaterial *)(m_pScene.createNode("Material"));
Material17->setDiffuseColor(new float[3]{0.7,0.2,0.2});
Appearance16->setMaterial(*Material17);

Shape15->setAppearance(*Appearance16);

CSphere* Sphere18 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere18->setRadius(0.1);
Shape15->setGeometry(Sphere18);

Transform14->addChild(*Shape15);

CPlaneSensor* PlaneSensor19 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor19->setDescription("Grab to move");
PlaneSensor19->setDEF("PS1");
Transform14->addChildren(*PlaneSensor19);

CROUTE* ROUTE20 = new CROUTE();
ROUTE20->setFromNode("PS1");
ROUTE20->setFromField("translation_changed");
ROUTE20->setToNode("G1");
ROUTE20->setToField("set_translation");
Transform14->addChildren(*ROUTE20);

group->addChildren(*Transform14);

CTransform* Transform21 = (CTransform *)(m_pScene.createNode("Transform"));
Transform21->setDEF("G2");
Transform21->setTranslation(new float[3]{1,-1,0.01});
CShape* Shape22 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance23 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material24 = (CMaterial *)(m_pScene.createNode("Material"));
Material24->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance23->setMaterial(*Material24);

Shape22->setAppearance(*Appearance23);

CSphere* Sphere25 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere25->setRadius(0.1);
Shape22->setGeometry(Sphere25);

Transform21->addChild(*Shape22);

CPlaneSensor* PlaneSensor26 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor26->setDescription("Grab to move");
PlaneSensor26->setOffset(new float[3]{1,-1,0.01});
PlaneSensor26->setDEF("PS2");
Transform21->addChildren(*PlaneSensor26);

CROUTE* ROUTE27 = new CROUTE();
ROUTE27->setFromNode("PS2");
ROUTE27->setFromField("translation_changed");
ROUTE27->setToNode("G2");
ROUTE27->setToField("set_translation");
Transform21->addChildren(*ROUTE27);

group->addChildren(*Transform21);

CTransform* Transform28 = (CTransform *)(m_pScene.createNode("Transform"));
Transform28->setDEF("G3");
Transform28->setTranslation(new float[3]{1,1,0.01});
CShape* Shape29 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance30 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material31 = (CMaterial *)(m_pScene.createNode("Material"));
Material31->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance30->setMaterial(*Material31);

Shape29->setAppearance(*Appearance30);

CSphere* Sphere32 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere32->setRadius(0.1);
Shape29->setGeometry(Sphere32);

Transform28->addChild(*Shape29);

CPlaneSensor* PlaneSensor33 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor33->setDescription("Grab to move");
PlaneSensor33->setOffset(new float[3]{1,1,0.01});
PlaneSensor33->setDEF("PS3");
Transform28->addChildren(*PlaneSensor33);

CROUTE* ROUTE34 = new CROUTE();
ROUTE34->setFromNode("PS3");
ROUTE34->setFromField("translation_changed");
ROUTE34->setToNode("G3");
ROUTE34->setToField("set_translation");
Transform28->addChildren(*ROUTE34);

group->addChildren(*Transform28);

CTransform* Transform35 = (CTransform *)(m_pScene.createNode("Transform"));
Transform35->setDEF("G4");
Transform35->setTranslation(new float[3]{-1,1,0.01});
CShape* Shape36 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance37 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material38 = (CMaterial *)(m_pScene.createNode("Material"));
Material38->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance37->setMaterial(*Material38);

Shape36->setAppearance(*Appearance37);

CSphere* Sphere39 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere39->setRadius(0.1);
Shape36->setGeometry(Sphere39);

Transform35->addChild(*Shape36);

CPlaneSensor* PlaneSensor40 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor40->setDescription("Grab to move");
PlaneSensor40->setOffset(new float[3]{-1,1,0.01});
PlaneSensor40->setDEF("PS4");
Transform35->addChildren(*PlaneSensor40);

CROUTE* ROUTE41 = new CROUTE();
ROUTE41->setFromNode("PS4");
ROUTE41->setFromField("translation_changed");
ROUTE41->setToNode("G4");
ROUTE41->setToField("set_translation");
Transform35->addChildren(*ROUTE41);

group->addChildren(*Transform35);

CTransform* Transform42 = (CTransform *)(m_pScene.createNode("Transform"));
Transform42->setDEF("transC1");
CTransform* Transform43 = (CTransform *)(m_pScene.createNode("Transform"));
Transform43->setDEF("rotscaleC1");
CShape* Shape44 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance45 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material46 = (CMaterial *)(m_pScene.createNode("Material"));
Material46->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material46->setTransparency(0.5);
Appearance45->setMaterial(*Material46);

Shape44->setAppearance(*Appearance45);

CCylinder* Cylinder47 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder47->setRadius(0.05);
Shape44->setGeometry(Cylinder47);

Transform43->addChild(*Shape44);

Transform42->addChildren(*Transform43);

group->addChildren(*Transform42);

CTransform* Transform48 = (CTransform *)(m_pScene.createNode("Transform"));
Transform48->setDEF("transC2");
CTransform* Transform49 = (CTransform *)(m_pScene.createNode("Transform"));
Transform49->setDEF("rotscaleC2");
CShape* Shape50 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance51 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material52 = (CMaterial *)(m_pScene.createNode("Material"));
Material52->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material52->setTransparency(0.5);
Appearance51->setMaterial(*Material52);

Shape50->setAppearance(*Appearance51);

CCylinder* Cylinder53 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder53->setRadius(0.05);
Shape50->setGeometry(Cylinder53);

Transform49->addChild(*Shape50);

Transform48->addChildren(*Transform49);

group->addChildren(*Transform48);

CTransform* Transform54 = (CTransform *)(m_pScene.createNode("Transform"));
Transform54->setDEF("transC3");
CTransform* Transform55 = (CTransform *)(m_pScene.createNode("Transform"));
Transform55->setDEF("rotscaleC3");
CShape* Shape56 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance57 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material58 = (CMaterial *)(m_pScene.createNode("Material"));
Material58->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material58->setTransparency(0.5);
Appearance57->setMaterial(*Material58);

Shape56->setAppearance(*Appearance57);

CCylinder* Cylinder59 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder59->setRadius(0.05);
Shape56->setGeometry(Cylinder59);

Transform55->addChild(*Shape56);

Transform54->addChildren(*Transform55);

group->addChildren(*Transform54);

CProtoDeclare ProtoDeclare60 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="x3dconnector" ><ProtoInterface><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
<field name="endnode" accessType="initializeOnly" type="SFNode"></field>
<field name="transnode" accessType="initializeOnly" type="SFNode"></field>
<field name="rotscalenode" accessType="initializeOnly" type="SFNode"></field>
<field name="set_startpoint" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endpoint" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Script DEF="S1" directOutput="true"><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
<field name="endnode" accessType="initializeOnly" type="SFNode"></field>
<field name="transnode" accessType="initializeOnly" type="SFNode"></field>
<field name="rotscalenode" accessType="initializeOnly" type="SFNode"></field>
<field name="set_startpoint" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endpoint" accessType="inputOnly" type="SFVec3f"></field>
<IS><connect nodeField="startnode" protoField="startnode"></connect>
<connect nodeField="endnode" protoField="endnode"></connect>
<connect nodeField="transnode" protoField="transnode"></connect>
<connect nodeField="rotscalenode" protoField="rotscalenode"></connect>
<connect nodeField="set_startpoint" protoField="set_startpoint"></connect>
<connect nodeField="set_endpoint" protoField="set_endpoint"></connect>
</IS>
<![CDATA[ecmascript:
        function recompute(startpoint,endpoint){
	    if (typeof endpoint === 'undefined') {
		return;
	    }
            var dif = endpoint.subtract(startpoint);
            var dist = dif.length()*0.5;
            var dif2 = dif.multiply(0.5);
            var norm = dif.normalize();
            var transl = startpoint.add(dif2);
	    if (typeof Quaternion !== 'undefined') {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)
		    };
	    } else {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
		    };
	    }
	}
	function recompute_and_route(startpoint, endpoint) {
	      var trafo = recompute(startpoint, endpoint);
	      if (trafo) {
		      transnode.translation = trafo.translation;
		      rotscalenode.rotation = trafo.rotation;
		      rotscalenode.scale = trafo.scale;
	      }
	}
        function initialize(){
            recompute_and_route(startnode.translation,endnode.translation);
        }
        function set_startpoint(val,t){
            recompute_and_route(val,endnode.translation);
        }
        function set_endpoint(val,t){
            recompute_and_route(startnode.translation,val);
        }]]></Script>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare60->setName("x3dconnector");
CProtoInterface* ProtoInterface61 = new CProtoInterface();
Cfield* field62 = new Cfield();
field62->setName("startnode");
field62->setAccessType("initializeOnly");
field62->setType("SFNode");
ProtoInterface61->addField(*field62);

Cfield* field63 = new Cfield();
field63->setName("endnode");
field63->setAccessType("initializeOnly");
field63->setType("SFNode");
ProtoInterface61->addField(*field63);

Cfield* field64 = new Cfield();
field64->setName("transnode");
field64->setAccessType("initializeOnly");
field64->setType("SFNode");
ProtoInterface61->addField(*field64);

Cfield* field65 = new Cfield();
field65->setName("rotscalenode");
field65->setAccessType("initializeOnly");
field65->setType("SFNode");
ProtoInterface61->addField(*field65);

Cfield* field66 = new Cfield();
field66->setName("set_startpoint");
field66->setAccessType("inputOnly");
field66->setType("SFVec3f");
ProtoInterface61->addField(*field66);

Cfield* field67 = new Cfield();
field67->setName("set_endpoint");
field67->setAccessType("inputOnly");
field67->setType("SFVec3f");
ProtoInterface61->addField(*field67);

ProtoDeclare60->setProtoInterface(*ProtoInterface61);

CProtoBody* ProtoBody68 = new CProtoBody();
CScript* Script69 = (CScript *)(m_pScene.createNode("Script"));
Script69->setDEF("S1");
Script69->setDirectOutput(True);
Cfield* field70 = new Cfield();
field70->setName("startnode");
field70->setAccessType("initializeOnly");
field70->setType("SFNode");
Script69->addField(*field70);

Cfield* field71 = new Cfield();
field71->setName("endnode");
field71->setAccessType("initializeOnly");
field71->setType("SFNode");
Script69->addField(*field71);

Cfield* field72 = new Cfield();
field72->setName("transnode");
field72->setAccessType("initializeOnly");
field72->setType("SFNode");
Script69->addField(*field72);

Cfield* field73 = new Cfield();
field73->setName("rotscalenode");
field73->setAccessType("initializeOnly");
field73->setType("SFNode");
Script69->addField(*field73);

Cfield* field74 = new Cfield();
field74->setName("set_startpoint");
field74->setAccessType("inputOnly");
field74->setType("SFVec3f");
Script69->addField(*field74);

Cfield* field75 = new Cfield();
field75->setName("set_endpoint");
field75->setAccessType("inputOnly");
field75->setType("SFVec3f");
Script69->addField(*field75);

CIS* IS76 = new CIS();
Cconnect* connect77 = new Cconnect();
connect77->setNodeField("startnode");
connect77->setProtoField("startnode");
IS76->addConnect(*connect77);

Cconnect* connect78 = new Cconnect();
connect78->setNodeField("endnode");
connect78->setProtoField("endnode");
IS76->addConnect(*connect78);

Cconnect* connect79 = new Cconnect();
connect79->setNodeField("transnode");
connect79->setProtoField("transnode");
IS76->addConnect(*connect79);

Cconnect* connect80 = new Cconnect();
connect80->setNodeField("rotscalenode");
connect80->setProtoField("rotscalenode");
IS76->addConnect(*connect80);

Cconnect* connect81 = new Cconnect();
connect81->setNodeField("set_startpoint");
connect81->setProtoField("set_startpoint");
IS76->addConnect(*connect81);

Cconnect* connect82 = new Cconnect();
connect82->setNodeField("set_endpoint");
connect82->setProtoField("set_endpoint");
IS76->addConnect(*connect82);

Script69->setIS(*IS76);


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
ProtoBody68->addChildren(*Script69);

ProtoDeclare60->setProtoBody(*ProtoBody68);

group->addChildren(*ProtoDeclare60);

CProtoInstance* ProtoInstance83 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance83->setName("x3dconnector");
ProtoInstance83->setDEF("connector1");
CfieldValue* fieldValue84 = new CfieldValue();
fieldValue84->setName("startnode");
CTransform* Transform85 = (CTransform *)(m_pScene.createNode("Transform"));
Transform85->setUSE("G1");
fieldValue84->addChildren(*Transform85);

ProtoInstance83->addFieldValue(*fieldValue84);

CfieldValue* fieldValue86 = new CfieldValue();
fieldValue86->setName("endnode");
CTransform* Transform87 = (CTransform *)(m_pScene.createNode("Transform"));
Transform87->setUSE("G2");
fieldValue86->addChildren(*Transform87);

ProtoInstance83->addFieldValue(*fieldValue86);

CfieldValue* fieldValue88 = new CfieldValue();
fieldValue88->setName("transnode");
CTransform* Transform89 = (CTransform *)(m_pScene.createNode("Transform"));
Transform89->setUSE("transC1");
fieldValue88->addChildren(*Transform89);

ProtoInstance83->addFieldValue(*fieldValue88);

CfieldValue* fieldValue90 = new CfieldValue();
fieldValue90->setName("rotscalenode");
CTransform* Transform91 = (CTransform *)(m_pScene.createNode("Transform"));
Transform91->setUSE("rotscaleC1");
fieldValue90->addChildren(*Transform91);

ProtoInstance83->addFieldValue(*fieldValue90);

CfieldValue* fieldValue92 = new CfieldValue();
fieldValue92->setName("set_startpoint");
fieldValue92->setValue("0 0 0");
ProtoInstance83->addFieldValue(*fieldValue92);

CfieldValue* fieldValue93 = new CfieldValue();
fieldValue93->setName("set_endpoint");
fieldValue93->setValue("0 0 0");
ProtoInstance83->addFieldValue(*fieldValue93);

group->addChildren(*ProtoInstance83);

CProtoInstance* ProtoInstance94 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance94->setName("x3dconnector");
ProtoInstance94->setDEF("connector2");
CfieldValue* fieldValue95 = new CfieldValue();
fieldValue95->setName("startnode");
CTransform* Transform96 = (CTransform *)(m_pScene.createNode("Transform"));
Transform96->setUSE("G1");
fieldValue95->addChildren(*Transform96);

ProtoInstance94->addFieldValue(*fieldValue95);

CfieldValue* fieldValue97 = new CfieldValue();
fieldValue97->setName("endnode");
CTransform* Transform98 = (CTransform *)(m_pScene.createNode("Transform"));
Transform98->setUSE("G3");
fieldValue97->addChildren(*Transform98);

ProtoInstance94->addFieldValue(*fieldValue97);

CfieldValue* fieldValue99 = new CfieldValue();
fieldValue99->setName("transnode");
CTransform* Transform100 = (CTransform *)(m_pScene.createNode("Transform"));
Transform100->setUSE("transC2");
fieldValue99->addChildren(*Transform100);

ProtoInstance94->addFieldValue(*fieldValue99);

CfieldValue* fieldValue101 = new CfieldValue();
fieldValue101->setName("rotscalenode");
CTransform* Transform102 = (CTransform *)(m_pScene.createNode("Transform"));
Transform102->setUSE("rotscaleC2");
fieldValue101->addChildren(*Transform102);

ProtoInstance94->addFieldValue(*fieldValue101);

CfieldValue* fieldValue103 = new CfieldValue();
fieldValue103->setName("set_startpoint");
fieldValue103->setValue("0 0 0");
ProtoInstance94->addFieldValue(*fieldValue103);

CfieldValue* fieldValue104 = new CfieldValue();
fieldValue104->setName("set_endpoint");
fieldValue104->setValue("0 0 0");
ProtoInstance94->addFieldValue(*fieldValue104);

group->addChildren(*ProtoInstance94);

CProtoInstance* ProtoInstance105 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance105->setName("x3dconnector");
ProtoInstance105->setDEF("connector3");
CfieldValue* fieldValue106 = new CfieldValue();
fieldValue106->setName("startnode");
CTransform* Transform107 = (CTransform *)(m_pScene.createNode("Transform"));
Transform107->setUSE("G1");
fieldValue106->addChildren(*Transform107);

ProtoInstance105->addFieldValue(*fieldValue106);

CfieldValue* fieldValue108 = new CfieldValue();
fieldValue108->setName("endnode");
CTransform* Transform109 = (CTransform *)(m_pScene.createNode("Transform"));
Transform109->setUSE("G4");
fieldValue108->addChildren(*Transform109);

ProtoInstance105->addFieldValue(*fieldValue108);

CfieldValue* fieldValue110 = new CfieldValue();
fieldValue110->setName("transnode");
CTransform* Transform111 = (CTransform *)(m_pScene.createNode("Transform"));
Transform111->setUSE("transC3");
fieldValue110->addChildren(*Transform111);

ProtoInstance105->addFieldValue(*fieldValue110);

CfieldValue* fieldValue112 = new CfieldValue();
fieldValue112->setName("rotscalenode");
CTransform* Transform113 = (CTransform *)(m_pScene.createNode("Transform"));
Transform113->setUSE("rotscaleC3");
fieldValue112->addChildren(*Transform113);

ProtoInstance105->addFieldValue(*fieldValue112);

CfieldValue* fieldValue114 = new CfieldValue();
fieldValue114->setName("set_startpoint");
fieldValue114->setValue("0 0 0");
ProtoInstance105->addFieldValue(*fieldValue114);

CfieldValue* fieldValue115 = new CfieldValue();
fieldValue115->setName("set_endpoint");
fieldValue115->setValue("0 0 0");
ProtoInstance105->addFieldValue(*fieldValue115);

group->addChildren(*ProtoInstance105);

CROUTE* ROUTE116 = new CROUTE();
ROUTE116->setFromNode("G1");
ROUTE116->setFromField("translation_changed");
ROUTE116->setToNode("connector1");
ROUTE116->setToField("set_startpoint");
group->addChildren(*ROUTE116);

CROUTE* ROUTE117 = new CROUTE();
ROUTE117->setFromNode("G2");
ROUTE117->setFromField("translation_changed");
ROUTE117->setToNode("connector1");
ROUTE117->setToField("set_endpoint");
group->addChildren(*ROUTE117);

CROUTE* ROUTE118 = new CROUTE();
ROUTE118->setFromNode("G1");
ROUTE118->setFromField("translation_changed");
ROUTE118->setToNode("connector2");
ROUTE118->setToField("set_startpoint");
group->addChildren(*ROUTE118);

CROUTE* ROUTE119 = new CROUTE();
ROUTE119->setFromNode("G3");
ROUTE119->setFromField("translation_changed");
ROUTE119->setToNode("connector2");
ROUTE119->setToField("set_endpoint");
group->addChildren(*ROUTE119);

CROUTE* ROUTE120 = new CROUTE();
ROUTE120->setFromNode("G1");
ROUTE120->setFromField("translation_changed");
ROUTE120->setToNode("connector3");
ROUTE120->setToField("set_startpoint");
group->addChildren(*ROUTE120);

CROUTE* ROUTE121 = new CROUTE();
ROUTE121->setFromNode("G4");
ROUTE121->setFromField("translation_changed");
ROUTE121->setToNode("connector3");
ROUTE121->setToField("set_endpoint");
group->addChildren(*ROUTE121);

X3D0->setScene(*Scene10);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
