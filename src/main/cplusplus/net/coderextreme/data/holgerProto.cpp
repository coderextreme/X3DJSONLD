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
X3D0->setVersion("4.0");
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
meta5->setContent("Sat, 30 Dec 2023 10:14:10 GMT");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("generator");
meta6->setContent("manual");
head1->addMeta(*meta6);

Cmeta* meta7 = new Cmeta();
meta7->setName("generator");
meta7->setContent("x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy");
head1->addMeta(*meta7);

X3D0->setHead(*head1);

CScene* Scene8 = new CScene();
CProtoDeclare ProtoDeclare9 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="x3dconnector" ><ProtoInterface><field accessType="initializeOnly" type="SFNode" name="startnode"></field>
<field accessType="initializeOnly" type="SFNode" name="endnode"></field>
<field accessType="initializeOnly" type="SFNode" name="transnode"></field>
<field accessType="initializeOnly" type="SFNode" name="rotscalenode"></field>
<field accessType="inputOnly" type="SFVec3f" name="set_startpoint"></field>
<field accessType="inputOnly" type="SFVec3f" name="set_endpoint"></field>
</ProtoInterface>
<ProtoBody><Script DEF="S1" directOutput="true"><field accessType="initializeOnly" type="SFNode" name="startnode"></field>
<field accessType="initializeOnly" type="SFNode" name="endnode"></field>
<field accessType="initializeOnly" type="SFNode" name="transnode"></field>
<field accessType="initializeOnly" type="SFNode" name="rotscalenode"></field>
<field accessType="inputOnly" type="SFVec3f" name="set_startpoint"></field>
<field accessType="inputOnly" type="SFVec3f" name="set_endpoint"></field>
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
        }]]><IS><connect nodeField="startnode" protoField="startnode"></connect>
<connect nodeField="endnode" protoField="endnode"></connect>
<connect nodeField="transnode" protoField="transnode"></connect>
<connect nodeField="rotscalenode" protoField="rotscalenode"></connect>
<connect nodeField="set_startpoint" protoField="set_startpoint"></connect>
<connect nodeField="set_endpoint" protoField="set_endpoint"></connect>
</IS>
</Script>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare9->setName("x3dconnector");
CProtoInterface* ProtoInterface10 = new CProtoInterface();
Cfield* field11 = new Cfield();
field11->setAccessType("initializeOnly");
field11->setType("SFNode");
field11->setName("startnode");
ProtoInterface10->addField(*field11);

Cfield* field12 = new Cfield();
field12->setAccessType("initializeOnly");
field12->setType("SFNode");
field12->setName("endnode");
ProtoInterface10->addField(*field12);

Cfield* field13 = new Cfield();
field13->setAccessType("initializeOnly");
field13->setType("SFNode");
field13->setName("transnode");
ProtoInterface10->addField(*field13);

Cfield* field14 = new Cfield();
field14->setAccessType("initializeOnly");
field14->setType("SFNode");
field14->setName("rotscalenode");
ProtoInterface10->addField(*field14);

Cfield* field15 = new Cfield();
field15->setAccessType("inputOnly");
field15->setType("SFVec3f");
field15->setName("set_startpoint");
ProtoInterface10->addField(*field15);

Cfield* field16 = new Cfield();
field16->setAccessType("inputOnly");
field16->setType("SFVec3f");
field16->setName("set_endpoint");
ProtoInterface10->addField(*field16);

ProtoDeclare9->setProtoInterface(*ProtoInterface10);

CProtoBody* ProtoBody17 = new CProtoBody();
CScript* Script18 = (CScript *)(m_pScene.createNode("Script"));
Script18->setDEF("S1");
Script18->setDirectOutput(True);
Cfield* field19 = new Cfield();
field19->setAccessType("initializeOnly");
field19->setType("SFNode");
field19->setName("startnode");
Script18->addField(*field19);

Cfield* field20 = new Cfield();
field20->setAccessType("initializeOnly");
field20->setType("SFNode");
field20->setName("endnode");
Script18->addField(*field20);

Cfield* field21 = new Cfield();
field21->setAccessType("initializeOnly");
field21->setType("SFNode");
field21->setName("transnode");
Script18->addField(*field21);

Cfield* field22 = new Cfield();
field22->setAccessType("initializeOnly");
field22->setType("SFNode");
field22->setName("rotscalenode");
Script18->addField(*field22);

Cfield* field23 = new Cfield();
field23->setAccessType("inputOnly");
field23->setType("SFVec3f");
field23->setName("set_startpoint");
Script18->addField(*field23);

Cfield* field24 = new Cfield();
field24->setAccessType("inputOnly");
field24->setType("SFVec3f");
field24->setName("set_endpoint");
Script18->addField(*field24);


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
CIS* IS25 = new CIS();
Cconnect* connect26 = new Cconnect();
connect26->setNodeField("startnode");
connect26->setProtoField("startnode");
IS25->addConnect(*connect26);

Cconnect* connect27 = new Cconnect();
connect27->setNodeField("endnode");
connect27->setProtoField("endnode");
IS25->addConnect(*connect27);

Cconnect* connect28 = new Cconnect();
connect28->setNodeField("transnode");
connect28->setProtoField("transnode");
IS25->addConnect(*connect28);

Cconnect* connect29 = new Cconnect();
connect29->setNodeField("rotscalenode");
connect29->setProtoField("rotscalenode");
IS25->addConnect(*connect29);

Cconnect* connect30 = new Cconnect();
connect30->setNodeField("set_startpoint");
connect30->setProtoField("set_startpoint");
IS25->addConnect(*connect30);

Cconnect* connect31 = new Cconnect();
connect31->setNodeField("set_endpoint");
connect31->setProtoField("set_endpoint");
IS25->addConnect(*connect31);

Script18->setIS(*IS25);

ProtoBody17->addChildren(*Script18);

ProtoDeclare9->setProtoBody(*ProtoBody17);

group->addChildren(*ProtoDeclare9);

CWorldInfo* WorldInfo32 = (CWorldInfo *)(m_pScene.createNode("WorldInfo"));
WorldInfo32->setTitle("Connector Proto");
group->addChildren(*WorldInfo32);

CViewpoint* Viewpoint33 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint33->setDescription("Only Viewpoint");
Viewpoint33->setPosition(new float[3]{0,0,5});
group->addChildren(*Viewpoint33);

CBackground* Background34 = (CBackground *)(m_pScene.createNode("Background"));
Background34->setSkyColor(new float[3]{0.4,0.4,0.4});
group->addChildren(*Background34);

CTransform* Transform35 = (CTransform *)(m_pScene.createNode("Transform"));
Transform35->setDEF("G1");
CShape* Shape36 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance37 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material38 = (CMaterial *)(m_pScene.createNode("Material"));
Material38->setDiffuseColor(new float[3]{0.7,0.2,0.2});
Appearance37->setMaterial(*Material38);

Shape36->setAppearance(*Appearance37);

CSphere* Sphere39 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere39->setRadius(0.1);
Shape36->setGeometry(Sphere39);

Transform35->addChild(*Shape36);

CPlaneSensor* PlaneSensor40 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor40->setDEF("PS1");
PlaneSensor40->setDescription("Grab to move");
Transform35->addChildren(*PlaneSensor40);

group->addChildren(*Transform35);

CTransform* Transform41 = (CTransform *)(m_pScene.createNode("Transform"));
Transform41->setDEF("G2");
Transform41->setTranslation(new float[3]{1,-1,0.01});
CShape* Shape42 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance43 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material44 = (CMaterial *)(m_pScene.createNode("Material"));
Material44->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance43->setMaterial(*Material44);

Shape42->setAppearance(*Appearance43);

CSphere* Sphere45 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere45->setRadius(0.1);
Shape42->setGeometry(Sphere45);

Transform41->addChild(*Shape42);

CPlaneSensor* PlaneSensor46 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor46->setDEF("PS2");
PlaneSensor46->setDescription("Grab to move");
PlaneSensor46->setOffset(new float[3]{1,-1,0.01});
Transform41->addChildren(*PlaneSensor46);

group->addChildren(*Transform41);

CTransform* Transform47 = (CTransform *)(m_pScene.createNode("Transform"));
Transform47->setDEF("G3");
Transform47->setTranslation(new float[3]{1,1,0.01});
CShape* Shape48 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance49 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material50 = (CMaterial *)(m_pScene.createNode("Material"));
Material50->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance49->setMaterial(*Material50);

Shape48->setAppearance(*Appearance49);

CSphere* Sphere51 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere51->setRadius(0.1);
Shape48->setGeometry(Sphere51);

Transform47->addChild(*Shape48);

CPlaneSensor* PlaneSensor52 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor52->setDEF("PS3");
PlaneSensor52->setDescription("Grab to move");
PlaneSensor52->setOffset(new float[3]{1,1,0.01});
Transform47->addChildren(*PlaneSensor52);

group->addChildren(*Transform47);

CTransform* Transform53 = (CTransform *)(m_pScene.createNode("Transform"));
Transform53->setDEF("G4");
Transform53->setTranslation(new float[3]{-1,1,0.01});
CShape* Shape54 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance55 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material56 = (CMaterial *)(m_pScene.createNode("Material"));
Material56->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance55->setMaterial(*Material56);

Shape54->setAppearance(*Appearance55);

CSphere* Sphere57 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere57->setRadius(0.1);
Shape54->setGeometry(Sphere57);

Transform53->addChild(*Shape54);

CPlaneSensor* PlaneSensor58 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor58->setDEF("PS4");
PlaneSensor58->setDescription("Grab to move");
PlaneSensor58->setOffset(new float[3]{-1,1,0.01});
Transform53->addChildren(*PlaneSensor58);

group->addChildren(*Transform53);

CTransform* Transform59 = (CTransform *)(m_pScene.createNode("Transform"));
Transform59->setDEF("transC1");
CTransform* Transform60 = (CTransform *)(m_pScene.createNode("Transform"));
Transform60->setDEF("rotscaleC1");
CShape* Shape61 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance62 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material63 = (CMaterial *)(m_pScene.createNode("Material"));
Material63->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material63->setTransparency(0.5);
Appearance62->setMaterial(*Material63);

Shape61->setAppearance(*Appearance62);

CCylinder* Cylinder64 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder64->setRadius(0.05);
Shape61->setGeometry(Cylinder64);

Transform60->addChild(*Shape61);

Transform59->addChildren(*Transform60);

group->addChildren(*Transform59);

CTransform* Transform65 = (CTransform *)(m_pScene.createNode("Transform"));
Transform65->setDEF("transC2");
CTransform* Transform66 = (CTransform *)(m_pScene.createNode("Transform"));
Transform66->setDEF("rotscaleC2");
CShape* Shape67 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance68 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material69 = (CMaterial *)(m_pScene.createNode("Material"));
Material69->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material69->setTransparency(0.5);
Appearance68->setMaterial(*Material69);

Shape67->setAppearance(*Appearance68);

CCylinder* Cylinder70 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder70->setRadius(0.05);
Shape67->setGeometry(Cylinder70);

Transform66->addChild(*Shape67);

Transform65->addChildren(*Transform66);

group->addChildren(*Transform65);

CTransform* Transform71 = (CTransform *)(m_pScene.createNode("Transform"));
Transform71->setDEF("transC3");
CTransform* Transform72 = (CTransform *)(m_pScene.createNode("Transform"));
Transform72->setDEF("rotscaleC3");
CShape* Shape73 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance74 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material75 = (CMaterial *)(m_pScene.createNode("Material"));
Material75->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material75->setTransparency(0.5);
Appearance74->setMaterial(*Material75);

Shape73->setAppearance(*Appearance74);

CCylinder* Cylinder76 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder76->setRadius(0.05);
Shape73->setGeometry(Cylinder76);

Transform72->addChild(*Shape73);

Transform71->addChildren(*Transform72);

group->addChildren(*Transform71);

CProtoInstance* ProtoInstance77 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance77->setDEF("connector1");
ProtoInstance77->setName("x3dconnector");
CfieldValue* fieldValue78 = new CfieldValue();
fieldValue78->setName("startnode");
CTransform* Transform79 = (CTransform *)(m_pScene.createNode("Transform"));
Transform79->setUSE("G1");
fieldValue78->addChildren(*Transform79);

ProtoInstance77->addFieldValue(*fieldValue78);

CfieldValue* fieldValue80 = new CfieldValue();
fieldValue80->setName("endnode");
CTransform* Transform81 = (CTransform *)(m_pScene.createNode("Transform"));
Transform81->setUSE("G2");
fieldValue80->addChildren(*Transform81);

ProtoInstance77->addFieldValue(*fieldValue80);

CfieldValue* fieldValue82 = new CfieldValue();
fieldValue82->setName("transnode");
CTransform* Transform83 = (CTransform *)(m_pScene.createNode("Transform"));
Transform83->setUSE("transC1");
fieldValue82->addChildren(*Transform83);

ProtoInstance77->addFieldValue(*fieldValue82);

CfieldValue* fieldValue84 = new CfieldValue();
fieldValue84->setName("rotscalenode");
CTransform* Transform85 = (CTransform *)(m_pScene.createNode("Transform"));
Transform85->setUSE("rotscaleC1");
fieldValue84->addChildren(*Transform85);

ProtoInstance77->addFieldValue(*fieldValue84);

group->addChildren(*ProtoInstance77);

CProtoInstance* ProtoInstance86 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance86->setDEF("connector2");
ProtoInstance86->setName("x3dconnector");
CfieldValue* fieldValue87 = new CfieldValue();
fieldValue87->setName("startnode");
CTransform* Transform88 = (CTransform *)(m_pScene.createNode("Transform"));
Transform88->setUSE("G1");
fieldValue87->addChildren(*Transform88);

ProtoInstance86->addFieldValue(*fieldValue87);

CfieldValue* fieldValue89 = new CfieldValue();
fieldValue89->setName("endnode");
CTransform* Transform90 = (CTransform *)(m_pScene.createNode("Transform"));
Transform90->setUSE("G3");
fieldValue89->addChildren(*Transform90);

ProtoInstance86->addFieldValue(*fieldValue89);

CfieldValue* fieldValue91 = new CfieldValue();
fieldValue91->setName("transnode");
CTransform* Transform92 = (CTransform *)(m_pScene.createNode("Transform"));
Transform92->setUSE("transC2");
fieldValue91->addChildren(*Transform92);

ProtoInstance86->addFieldValue(*fieldValue91);

CfieldValue* fieldValue93 = new CfieldValue();
fieldValue93->setName("rotscalenode");
CTransform* Transform94 = (CTransform *)(m_pScene.createNode("Transform"));
Transform94->setUSE("rotscaleC2");
fieldValue93->addChildren(*Transform94);

ProtoInstance86->addFieldValue(*fieldValue93);

group->addChildren(*ProtoInstance86);

CProtoInstance* ProtoInstance95 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance95->setDEF("connector3");
ProtoInstance95->setName("x3dconnector");
CfieldValue* fieldValue96 = new CfieldValue();
fieldValue96->setName("startnode");
CTransform* Transform97 = (CTransform *)(m_pScene.createNode("Transform"));
Transform97->setUSE("G1");
fieldValue96->addChildren(*Transform97);

ProtoInstance95->addFieldValue(*fieldValue96);

CfieldValue* fieldValue98 = new CfieldValue();
fieldValue98->setName("endnode");
CTransform* Transform99 = (CTransform *)(m_pScene.createNode("Transform"));
Transform99->setUSE("G4");
fieldValue98->addChildren(*Transform99);

ProtoInstance95->addFieldValue(*fieldValue98);

CfieldValue* fieldValue100 = new CfieldValue();
fieldValue100->setName("transnode");
CTransform* Transform101 = (CTransform *)(m_pScene.createNode("Transform"));
Transform101->setUSE("transC3");
fieldValue100->addChildren(*Transform101);

ProtoInstance95->addFieldValue(*fieldValue100);

CfieldValue* fieldValue102 = new CfieldValue();
fieldValue102->setName("rotscalenode");
CTransform* Transform103 = (CTransform *)(m_pScene.createNode("Transform"));
Transform103->setUSE("rotscaleC3");
fieldValue102->addChildren(*Transform103);

ProtoInstance95->addFieldValue(*fieldValue102);

group->addChildren(*ProtoInstance95);

CROUTE* ROUTE104 = new CROUTE();
ROUTE104->setFromNode("PS1");
ROUTE104->setFromField("translation_changed");
ROUTE104->setToNode("G1");
ROUTE104->setToField("translation");
group->addChildren(*ROUTE104);

CROUTE* ROUTE105 = new CROUTE();
ROUTE105->setFromNode("PS2");
ROUTE105->setFromField("translation_changed");
ROUTE105->setToNode("G2");
ROUTE105->setToField("translation");
group->addChildren(*ROUTE105);

CROUTE* ROUTE106 = new CROUTE();
ROUTE106->setFromNode("PS3");
ROUTE106->setFromField("translation_changed");
ROUTE106->setToNode("G3");
ROUTE106->setToField("translation");
group->addChildren(*ROUTE106);

CROUTE* ROUTE107 = new CROUTE();
ROUTE107->setFromNode("PS4");
ROUTE107->setFromField("translation_changed");
ROUTE107->setToNode("G4");
ROUTE107->setToField("translation");
group->addChildren(*ROUTE107);

CROUTE* ROUTE108 = new CROUTE();
ROUTE108->setFromNode("G1");
ROUTE108->setFromField("translation");
ROUTE108->setToNode("connector1");
ROUTE108->setToField("set_startpoint");
group->addChildren(*ROUTE108);

CROUTE* ROUTE109 = new CROUTE();
ROUTE109->setFromNode("G2");
ROUTE109->setFromField("translation");
ROUTE109->setToNode("connector1");
ROUTE109->setToField("set_endpoint");
group->addChildren(*ROUTE109);

CROUTE* ROUTE110 = new CROUTE();
ROUTE110->setFromNode("G1");
ROUTE110->setFromField("translation");
ROUTE110->setToNode("connector2");
ROUTE110->setToField("set_startpoint");
group->addChildren(*ROUTE110);

CROUTE* ROUTE111 = new CROUTE();
ROUTE111->setFromNode("G3");
ROUTE111->setFromField("translation");
ROUTE111->setToNode("connector2");
ROUTE111->setToField("set_endpoint");
group->addChildren(*ROUTE111);

CROUTE* ROUTE112 = new CROUTE();
ROUTE112->setFromNode("G1");
ROUTE112->setFromField("translation");
ROUTE112->setToNode("connector3");
ROUTE112->setToField("set_startpoint");
group->addChildren(*ROUTE112);

CROUTE* ROUTE113 = new CROUTE();
ROUTE113->setFromNode("G4");
ROUTE113->setFromField("translation");
ROUTE113->setToNode("connector3");
ROUTE113->setToField("set_endpoint");
group->addChildren(*ROUTE113);

X3D0->setScene(*Scene8);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
