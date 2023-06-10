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
meta2->setContent("x3dconnectorProto");
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

Cmeta* meta7 = new Cmeta();
meta7->setName("license");
meta7->setContent("https://www.web3d.org/x3d/content/examples/license.html");
head1->addMeta(*meta7);

X3D0->setHead(*head1);

CScene* Scene8 = new CScene();
CWorldInfo* WorldInfo9 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo9->setTitle("Connector Proto");
group->addChildren(*WorldInfo9);

CViewpoint* Viewpoint10 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint10->setPosition(new float[3]{0,0,5});
Viewpoint10->setDescription("Only Viewpoint");
group->addChildren(*Viewpoint10);

CBackground* Background11 = (CBackground *)(m_pScene.createNode("Background"));
Background11->setSkyColor(new float[3]{0.4,0.4,0.4});
group->addChildren(*Background11);

CTransform* Transform12 = (CTransform *)(m_pScene.createNode("Transform"));
Transform12->setDEF("G1");
CShape* Shape13 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance14 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material15 = (CMaterial *)(m_pScene.createNode("Material"));
Material15->setDiffuseColor(new float[3]{0.7,0.2,0.2});
Appearance14->setMaterial(*Material15);

Shape13->setAppearance(*Appearance14);

CSphere* Sphere16 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere16->setRadius(0.1);
Shape13->setGeometry(Sphere16);

Transform12->addChildren(*Shape13);

CPlaneSensor* PlaneSensor17 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor17->setDescription("Grab to move");
PlaneSensor17->setDEF("PS1");
Transform12->addChildren(*PlaneSensor17);

CROUTE* ROUTE18 = new CROUTE();
ROUTE18->setFromNode("PS1");
ROUTE18->setFromField("translation_changed");
ROUTE18->setToNode("G1");
ROUTE18->setToField("set_translation");
Transform12->addChildren(*ROUTE18);

group->addChildren(*Transform12);

CTransform* Transform19 = (CTransform *)(m_pScene.createNode("Transform"));
Transform19->setDEF("G2");
Transform19->setTranslation(new float[3]{1,-1,0.01});
CShape* Shape20 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance21 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material22 = (CMaterial *)(m_pScene.createNode("Material"));
Material22->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance21->setMaterial(*Material22);

Shape20->setAppearance(*Appearance21);

CSphere* Sphere23 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere23->setRadius(0.1);
Shape20->setGeometry(Sphere23);

Transform19->addChildren(*Shape20);

CPlaneSensor* PlaneSensor24 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor24->setDescription("Grab to move");
PlaneSensor24->setOffset(new float[3]{1,-1,0.01});
PlaneSensor24->setDEF("PS2");
Transform19->addChildren(*PlaneSensor24);

CROUTE* ROUTE25 = new CROUTE();
ROUTE25->setFromNode("PS2");
ROUTE25->setFromField("translation_changed");
ROUTE25->setToNode("G2");
ROUTE25->setToField("set_translation");
Transform19->addChildren(*ROUTE25);

group->addChildren(*Transform19);

CTransform* Transform26 = (CTransform *)(m_pScene.createNode("Transform"));
Transform26->setDEF("G3");
Transform26->setTranslation(new float[3]{1,1,0.01});
CShape* Shape27 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance28 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material29 = (CMaterial *)(m_pScene.createNode("Material"));
Material29->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance28->setMaterial(*Material29);

Shape27->setAppearance(*Appearance28);

CSphere* Sphere30 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere30->setRadius(0.1);
Shape27->setGeometry(Sphere30);

Transform26->addChildren(*Shape27);

CPlaneSensor* PlaneSensor31 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor31->setDescription("Grab to move");
PlaneSensor31->setOffset(new float[3]{1,1,0.01});
PlaneSensor31->setDEF("PS3");
Transform26->addChildren(*PlaneSensor31);

CROUTE* ROUTE32 = new CROUTE();
ROUTE32->setFromNode("PS3");
ROUTE32->setFromField("translation_changed");
ROUTE32->setToNode("G3");
ROUTE32->setToField("set_translation");
Transform26->addChildren(*ROUTE32);

group->addChildren(*Transform26);

CTransform* Transform33 = (CTransform *)(m_pScene.createNode("Transform"));
Transform33->setDEF("G4");
Transform33->setTranslation(new float[3]{-1,1,0.01});
CShape* Shape34 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance35 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material36 = (CMaterial *)(m_pScene.createNode("Material"));
Material36->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance35->setMaterial(*Material36);

Shape34->setAppearance(*Appearance35);

CSphere* Sphere37 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere37->setRadius(0.1);
Shape34->setGeometry(Sphere37);

Transform33->addChildren(*Shape34);

CPlaneSensor* PlaneSensor38 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor38->setDescription("Grab to move");
PlaneSensor38->setOffset(new float[3]{-1,1,0.01});
PlaneSensor38->setDEF("PS4");
Transform33->addChildren(*PlaneSensor38);

CROUTE* ROUTE39 = new CROUTE();
ROUTE39->setFromNode("PS4");
ROUTE39->setFromField("translation_changed");
ROUTE39->setToNode("G4");
ROUTE39->setToField("set_translation");
Transform33->addChildren(*ROUTE39);

group->addChildren(*Transform33);

CTransform* Transform40 = (CTransform *)(m_pScene.createNode("Transform"));
Transform40->setDEF("transC1");
CTransform* Transform41 = (CTransform *)(m_pScene.createNode("Transform"));
Transform41->setDEF("rotscaleC1");
CShape* Shape42 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance43 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material44 = (CMaterial *)(m_pScene.createNode("Material"));
Material44->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material44->setTransparency(0.5);
Appearance43->setMaterial(*Material44);

Shape42->setAppearance(*Appearance43);

CCylinder* Cylinder45 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder45->setRadius(0.05);
Shape42->setGeometry(Cylinder45);

Transform41->addChildren(*Shape42);

Transform40->addChildren(*Transform41);

group->addChildren(*Transform40);

CTransform* Transform46 = (CTransform *)(m_pScene.createNode("Transform"));
Transform46->setDEF("transC2");
CTransform* Transform47 = (CTransform *)(m_pScene.createNode("Transform"));
Transform47->setDEF("rotscaleC2");
CShape* Shape48 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance49 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material50 = (CMaterial *)(m_pScene.createNode("Material"));
Material50->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material50->setTransparency(0.5);
Appearance49->setMaterial(*Material50);

Shape48->setAppearance(*Appearance49);

CCylinder* Cylinder51 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder51->setRadius(0.05);
Shape48->setGeometry(Cylinder51);

Transform47->addChildren(*Shape48);

Transform46->addChildren(*Transform47);

group->addChildren(*Transform46);

CTransform* Transform52 = (CTransform *)(m_pScene.createNode("Transform"));
Transform52->setDEF("transC3");
CTransform* Transform53 = (CTransform *)(m_pScene.createNode("Transform"));
Transform53->setDEF("rotscaleC3");
CShape* Shape54 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance55 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material56 = (CMaterial *)(m_pScene.createNode("Material"));
Material56->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material56->setTransparency(0.5);
Appearance55->setMaterial(*Material56);

Shape54->setAppearance(*Appearance55);

CCylinder* Cylinder57 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder57->setRadius(0.05);
Shape54->setGeometry(Cylinder57);

Transform53->addChildren(*Shape54);

Transform52->addChildren(*Transform53);

group->addChildren(*Transform52);

CProtoDeclare ProtoDeclare58 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="UTF-8"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D 4.0//EN" "https://www.web3d.org/specifications/x3d-4.0.dtd">
<ProtoDeclare name="x3dconnector" ><ProtoInterface><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
<field name="endnode" accessType="initializeOnly" type="SFNode"></field>
<field name="transnode" accessType="initializeOnly" type="SFNode"></field>
<field name="rotscalenode" accessType="initializeOnly" type="SFNode"></field>
<field name="set_startpoint" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endpoint" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Script DEF="S1"><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
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
ProtoDeclare58->setName("x3dconnector");
CProtoInterface* ProtoInterface59 = new CProtoInterface();
Cfield* field60 = new Cfield();
field60->setName("startnode");
field60->setAccessType("initializeOnly");
field60->setType("SFNode");
ProtoInterface59->addField(*field60);

Cfield* field61 = new Cfield();
field61->setName("endnode");
field61->setAccessType("initializeOnly");
field61->setType("SFNode");
ProtoInterface59->addField(*field61);

Cfield* field62 = new Cfield();
field62->setName("transnode");
field62->setAccessType("initializeOnly");
field62->setType("SFNode");
ProtoInterface59->addField(*field62);

Cfield* field63 = new Cfield();
field63->setName("rotscalenode");
field63->setAccessType("initializeOnly");
field63->setType("SFNode");
ProtoInterface59->addField(*field63);

Cfield* field64 = new Cfield();
field64->setName("set_startpoint");
field64->setAccessType("inputOnly");
field64->setType("SFVec3f");
ProtoInterface59->addField(*field64);

Cfield* field65 = new Cfield();
field65->setName("set_endpoint");
field65->setAccessType("inputOnly");
field65->setType("SFVec3f");
ProtoInterface59->addField(*field65);

ProtoDeclare58->setProtoInterface(*ProtoInterface59);

CProtoBody* ProtoBody66 = new CProtoBody();
CScript* Script67 = (CScript *)(m_pScene.createNode("Script"));
Script67->setDEF("S1");
Cfield* field68 = new Cfield();
field68->setName("startnode");
field68->setAccessType("initializeOnly");
field68->setType("SFNode");
Script67->addField(*field68);

Cfield* field69 = new Cfield();
field69->setName("endnode");
field69->setAccessType("initializeOnly");
field69->setType("SFNode");
Script67->addField(*field69);

Cfield* field70 = new Cfield();
field70->setName("transnode");
field70->setAccessType("initializeOnly");
field70->setType("SFNode");
Script67->addField(*field70);

Cfield* field71 = new Cfield();
field71->setName("rotscalenode");
field71->setAccessType("initializeOnly");
field71->setType("SFNode");
Script67->addField(*field71);

Cfield* field72 = new Cfield();
field72->setName("set_startpoint");
field72->setAccessType("inputOnly");
field72->setType("SFVec3f");
Script67->addField(*field72);

Cfield* field73 = new Cfield();
field73->setName("set_endpoint");
field73->setAccessType("inputOnly");
field73->setType("SFVec3f");
Script67->addField(*field73);

CIS* IS74 = new CIS();
Cconnect* connect75 = new Cconnect();
connect75->setNodeField("startnode");
connect75->setProtoField("startnode");
IS74->addConnect(*connect75);

Cconnect* connect76 = new Cconnect();
connect76->setNodeField("endnode");
connect76->setProtoField("endnode");
IS74->addConnect(*connect76);

Cconnect* connect77 = new Cconnect();
connect77->setNodeField("transnode");
connect77->setProtoField("transnode");
IS74->addConnect(*connect77);

Cconnect* connect78 = new Cconnect();
connect78->setNodeField("rotscalenode");
connect78->setProtoField("rotscalenode");
IS74->addConnect(*connect78);

Cconnect* connect79 = new Cconnect();
connect79->setNodeField("set_startpoint");
connect79->setProtoField("set_startpoint");
IS74->addConnect(*connect79);

Cconnect* connect80 = new Cconnect();
connect80->setNodeField("set_endpoint");
connect80->setProtoField("set_endpoint");
IS74->addConnect(*connect80);

Script67->setIS(*IS74);


Script67.setSourceCode(`ecmascript:\n"+
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
ProtoBody66->addChildren(*Script67);

ProtoDeclare58->setProtoBody(*ProtoBody66);

group->addChildren(*ProtoDeclare58);

CProtoInstance* ProtoInstance81 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance81->setName("x3dconnector");
ProtoInstance81->setDEF("connector1");
CfieldValue* fieldValue82 = new CfieldValue();
fieldValue82->setName("startnode");
CTransform* Transform83 = (CTransform *)(m_pScene.createNode("Transform"));
Transform83->setUSE("G1");
fieldValue82->addChildren(*Transform83);

ProtoInstance81->addFieldValue(*fieldValue82);

CfieldValue* fieldValue84 = new CfieldValue();
fieldValue84->setName("endnode");
CTransform* Transform85 = (CTransform *)(m_pScene.createNode("Transform"));
Transform85->setUSE("G2");
fieldValue84->addChildren(*Transform85);

ProtoInstance81->addFieldValue(*fieldValue84);

CfieldValue* fieldValue86 = new CfieldValue();
fieldValue86->setName("transnode");
CTransform* Transform87 = (CTransform *)(m_pScene.createNode("Transform"));
Transform87->setUSE("transC1");
fieldValue86->addChildren(*Transform87);

ProtoInstance81->addFieldValue(*fieldValue86);

CfieldValue* fieldValue88 = new CfieldValue();
fieldValue88->setName("rotscalenode");
CTransform* Transform89 = (CTransform *)(m_pScene.createNode("Transform"));
Transform89->setUSE("rotscaleC1");
fieldValue88->addChildren(*Transform89);

ProtoInstance81->addFieldValue(*fieldValue88);

CfieldValue* fieldValue90 = new CfieldValue();
fieldValue90->setName("set_startpoint");
fieldValue90->setValue("0 0 0");
ProtoInstance81->addFieldValue(*fieldValue90);

CfieldValue* fieldValue91 = new CfieldValue();
fieldValue91->setName("set_endpoint");
fieldValue91->setValue("0 0 0");
ProtoInstance81->addFieldValue(*fieldValue91);

group->addChildren(*ProtoInstance81);

CProtoInstance* ProtoInstance92 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance92->setName("x3dconnector");
ProtoInstance92->setDEF("connector2");
CfieldValue* fieldValue93 = new CfieldValue();
fieldValue93->setName("startnode");
CTransform* Transform94 = (CTransform *)(m_pScene.createNode("Transform"));
Transform94->setUSE("G1");
fieldValue93->addChildren(*Transform94);

ProtoInstance92->addFieldValue(*fieldValue93);

CfieldValue* fieldValue95 = new CfieldValue();
fieldValue95->setName("endnode");
CTransform* Transform96 = (CTransform *)(m_pScene.createNode("Transform"));
Transform96->setUSE("G3");
fieldValue95->addChildren(*Transform96);

ProtoInstance92->addFieldValue(*fieldValue95);

CfieldValue* fieldValue97 = new CfieldValue();
fieldValue97->setName("transnode");
CTransform* Transform98 = (CTransform *)(m_pScene.createNode("Transform"));
Transform98->setUSE("transC2");
fieldValue97->addChildren(*Transform98);

ProtoInstance92->addFieldValue(*fieldValue97);

CfieldValue* fieldValue99 = new CfieldValue();
fieldValue99->setName("rotscalenode");
CTransform* Transform100 = (CTransform *)(m_pScene.createNode("Transform"));
Transform100->setUSE("rotscaleC2");
fieldValue99->addChildren(*Transform100);

ProtoInstance92->addFieldValue(*fieldValue99);

CfieldValue* fieldValue101 = new CfieldValue();
fieldValue101->setName("set_startpoint");
fieldValue101->setValue("0 0 0");
ProtoInstance92->addFieldValue(*fieldValue101);

CfieldValue* fieldValue102 = new CfieldValue();
fieldValue102->setName("set_endpoint");
fieldValue102->setValue("0 0 0");
ProtoInstance92->addFieldValue(*fieldValue102);

group->addChildren(*ProtoInstance92);

CProtoInstance* ProtoInstance103 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance103->setName("x3dconnector");
ProtoInstance103->setDEF("connector3");
CfieldValue* fieldValue104 = new CfieldValue();
fieldValue104->setName("startnode");
CTransform* Transform105 = (CTransform *)(m_pScene.createNode("Transform"));
Transform105->setUSE("G1");
fieldValue104->addChildren(*Transform105);

ProtoInstance103->addFieldValue(*fieldValue104);

CfieldValue* fieldValue106 = new CfieldValue();
fieldValue106->setName("endnode");
CTransform* Transform107 = (CTransform *)(m_pScene.createNode("Transform"));
Transform107->setUSE("G4");
fieldValue106->addChildren(*Transform107);

ProtoInstance103->addFieldValue(*fieldValue106);

CfieldValue* fieldValue108 = new CfieldValue();
fieldValue108->setName("transnode");
CTransform* Transform109 = (CTransform *)(m_pScene.createNode("Transform"));
Transform109->setUSE("transC3");
fieldValue108->addChildren(*Transform109);

ProtoInstance103->addFieldValue(*fieldValue108);

CfieldValue* fieldValue110 = new CfieldValue();
fieldValue110->setName("rotscalenode");
CTransform* Transform111 = (CTransform *)(m_pScene.createNode("Transform"));
Transform111->setUSE("rotscaleC3");
fieldValue110->addChildren(*Transform111);

ProtoInstance103->addFieldValue(*fieldValue110);

CfieldValue* fieldValue112 = new CfieldValue();
fieldValue112->setName("set_startpoint");
fieldValue112->setValue("0 0 0");
ProtoInstance103->addFieldValue(*fieldValue112);

CfieldValue* fieldValue113 = new CfieldValue();
fieldValue113->setName("set_endpoint");
fieldValue113->setValue("0 0 0");
ProtoInstance103->addFieldValue(*fieldValue113);

group->addChildren(*ProtoInstance103);

CROUTE* ROUTE114 = new CROUTE();
ROUTE114->setFromNode("G1");
ROUTE114->setFromField("translation_changed");
ROUTE114->setToNode("connector1");
ROUTE114->setToField("set_startpoint");
group->addChildren(*ROUTE114);

CROUTE* ROUTE115 = new CROUTE();
ROUTE115->setFromNode("G2");
ROUTE115->setFromField("translation_changed");
ROUTE115->setToNode("connector1");
ROUTE115->setToField("set_endpoint");
group->addChildren(*ROUTE115);

CROUTE* ROUTE116 = new CROUTE();
ROUTE116->setFromNode("G1");
ROUTE116->setFromField("translation_changed");
ROUTE116->setToNode("connector2");
ROUTE116->setToField("set_startpoint");
group->addChildren(*ROUTE116);

CROUTE* ROUTE117 = new CROUTE();
ROUTE117->setFromNode("G3");
ROUTE117->setFromField("translation_changed");
ROUTE117->setToNode("connector2");
ROUTE117->setToField("set_endpoint");
group->addChildren(*ROUTE117);

CROUTE* ROUTE118 = new CROUTE();
ROUTE118->setFromNode("G1");
ROUTE118->setFromField("translation_changed");
ROUTE118->setToNode("connector3");
ROUTE118->setToField("set_startpoint");
group->addChildren(*ROUTE118);

CROUTE* ROUTE119 = new CROUTE();
ROUTE119->setFromNode("G4");
ROUTE119->setFromField("translation_changed");
ROUTE119->setToNode("connector3");
ROUTE119->setToField("set_endpoint");
group->addChildren(*ROUTE119);

X3D0->setScene(*Scene8);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
