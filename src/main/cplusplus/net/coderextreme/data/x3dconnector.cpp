/* delete next 5 lines for Visual Studio */
#define FALSE false
#define TRUE true
#define WINAPI
#define AFX_EXT_CLASS
#define EXPORT32
#include "C:/x3d-code/www.web3d.org/x3d/languages/cpp/Concretes.h"
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
meta2->setContent("x3dconnector");
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

X3D0->setHead(*head1);

CScene* Scene7 = new CScene();
CViewpoint* Viewpoint8 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint8->setPosition(new float[3]{0,0,5});
Viewpoint8->setDescription("Only Viewpoint");
group->addChildren(*Viewpoint8);

CBackground* Background9 = (CBackground *)(m_pScene.createNode("Background"));
Background9->setSkyColor(new float[3]{0.4,0.4,0.4});
group->addChildren(*Background9);

CTransform* Transform10 = (CTransform *)(m_pScene.createNode("Transform"));
Transform10->setDEF("G1");
CShape* Shape11 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance12 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material13 = (CMaterial *)(m_pScene.createNode("Material"));
Material13->setDiffuseColor(new float[3]{0.7,0.2,0.2});
Appearance12->setMaterial(*Material13);

Shape11->setAppearance(*Appearance12);

CSphere* Sphere14 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere14->setRadius(0.1);
Shape11->setGeometry(Sphere14);

Transform10->addChildren(*Shape11);

CPlaneSensor* PlaneSensor15 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor15->setDescription("Grab to move");
PlaneSensor15->setDEF("PS1");
Transform10->addChildren(*PlaneSensor15);

CROUTE* ROUTE16 = new CROUTE();
ROUTE16->setFromNode("PS1");
ROUTE16->setFromField("translation_changed");
ROUTE16->setToNode("G1");
ROUTE16->setToField("set_translation");
Transform10->addChildren(*ROUTE16);

group->addChildren(*Transform10);

CTransform* Transform17 = (CTransform *)(m_pScene.createNode("Transform"));
Transform17->setDEF("G2");
Transform17->setTranslation(new float[3]{1,-1,0.01});
CShape* Shape18 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance19 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material20 = (CMaterial *)(m_pScene.createNode("Material"));
Material20->setDiffuseColor(new float[3]{0.2,0.7,0.2});
Appearance19->setMaterial(*Material20);

Shape18->setAppearance(*Appearance19);

CSphere* Sphere21 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere21->setRadius(0.1);
Shape18->setGeometry(Sphere21);

Transform17->addChildren(*Shape18);

CPlaneSensor* PlaneSensor22 = (CPlaneSensor *)(m_pScene.createNode("PlaneSensor"));
PlaneSensor22->setDescription("Grab to move");
PlaneSensor22->setOffset(new float[3]{1,-1,0.01});
PlaneSensor22->setDEF("PS2");
Transform17->addChildren(*PlaneSensor22);

CROUTE* ROUTE23 = new CROUTE();
ROUTE23->setFromNode("PS2");
ROUTE23->setFromField("translation_changed");
ROUTE23->setToNode("G2");
ROUTE23->setToField("set_translation");
Transform17->addChildren(*ROUTE23);

group->addChildren(*Transform17);

CTransform* Transform24 = (CTransform *)(m_pScene.createNode("Transform"));
Transform24->setDEF("transC1");
CTransform* Transform25 = (CTransform *)(m_pScene.createNode("Transform"));
Transform25->setDEF("rotscaleC1");
CShape* Shape26 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance27 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material28 = (CMaterial *)(m_pScene.createNode("Material"));
Material28->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material28->setTransparency(0.5);
Appearance27->setMaterial(*Material28);

Shape26->setAppearance(*Appearance27);

CCylinder* Cylinder29 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder29->setRadius(0.05);
Shape26->setGeometry(Cylinder29);

Transform25->addChildren(*Shape26);

Transform24->addChildren(*Transform25);

group->addChildren(*Transform24);

CProtoDeclare ProtoDeclare30 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
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
ProtoDeclare30->setName("x3dconnector");
CProtoInterface* ProtoInterface31 = new CProtoInterface();
Cfield* field32 = new Cfield();
field32->setName("startnode");
field32->setAccessType("initializeOnly");
field32->setType("SFNode");
ProtoInterface31->addField(*field32);

Cfield* field33 = new Cfield();
field33->setName("endnode");
field33->setAccessType("initializeOnly");
field33->setType("SFNode");
ProtoInterface31->addField(*field33);

Cfield* field34 = new Cfield();
field34->setName("transnode");
field34->setAccessType("initializeOnly");
field34->setType("SFNode");
ProtoInterface31->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("rotscalenode");
field35->setAccessType("initializeOnly");
field35->setType("SFNode");
ProtoInterface31->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("set_startpoint");
field36->setAccessType("inputOnly");
field36->setType("SFVec3f");
ProtoInterface31->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("set_endpoint");
field37->setAccessType("inputOnly");
field37->setType("SFVec3f");
ProtoInterface31->addField(*field37);

ProtoDeclare30->setProtoInterface(*ProtoInterface31);

CProtoBody* ProtoBody38 = new CProtoBody();
CScript* Script39 = (CScript *)(m_pScene.createNode("Script"));
Script39->setDEF("S1");
Cfield* field40 = new Cfield();
field40->setName("startnode");
field40->setAccessType("initializeOnly");
field40->setType("SFNode");
Script39->addField(*field40);

Cfield* field41 = new Cfield();
field41->setName("endnode");
field41->setAccessType("initializeOnly");
field41->setType("SFNode");
Script39->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("transnode");
field42->setAccessType("initializeOnly");
field42->setType("SFNode");
Script39->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("rotscalenode");
field43->setAccessType("initializeOnly");
field43->setType("SFNode");
Script39->addField(*field43);

Cfield* field44 = new Cfield();
field44->setName("set_startpoint");
field44->setAccessType("inputOnly");
field44->setType("SFVec3f");
Script39->addField(*field44);

Cfield* field45 = new Cfield();
field45->setName("set_endpoint");
field45->setAccessType("inputOnly");
field45->setType("SFVec3f");
Script39->addField(*field45);

CIS* IS46 = new CIS();
Cconnect* connect47 = new Cconnect();
connect47->setNodeField("startnode");
connect47->setProtoField("startnode");
IS46->addConnect(*connect47);

Cconnect* connect48 = new Cconnect();
connect48->setNodeField("endnode");
connect48->setProtoField("endnode");
IS46->addConnect(*connect48);

Cconnect* connect49 = new Cconnect();
connect49->setNodeField("transnode");
connect49->setProtoField("transnode");
IS46->addConnect(*connect49);

Cconnect* connect50 = new Cconnect();
connect50->setNodeField("rotscalenode");
connect50->setProtoField("rotscalenode");
IS46->addConnect(*connect50);

Cconnect* connect51 = new Cconnect();
connect51->setNodeField("set_startpoint");
connect51->setProtoField("set_startpoint");
IS46->addConnect(*connect51);

Cconnect* connect52 = new Cconnect();
connect52->setNodeField("set_endpoint");
connect52->setProtoField("set_endpoint");
IS46->addConnect(*connect52);

Script39->setIS(*IS46);


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
ProtoBody38->addChildren(*Script39);

ProtoDeclare30->setProtoBody(*ProtoBody38);

group->addChildren(*ProtoDeclare30);

CProtoInstance* ProtoInstance53 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance53->setName("x3dconnector");
ProtoInstance53->setDEF("connector1");
CfieldValue* fieldValue54 = new CfieldValue();
fieldValue54->setName("startnode");
CTransform* Transform55 = (CTransform *)(m_pScene.createNode("Transform"));
Transform55->setUSE("G1");
fieldValue54->addChildren(*Transform55);

ProtoInstance53->addFieldValue(*fieldValue54);

CfieldValue* fieldValue56 = new CfieldValue();
fieldValue56->setName("endnode");
CTransform* Transform57 = (CTransform *)(m_pScene.createNode("Transform"));
Transform57->setUSE("G2");
fieldValue56->addChildren(*Transform57);

ProtoInstance53->addFieldValue(*fieldValue56);

CfieldValue* fieldValue58 = new CfieldValue();
fieldValue58->setName("transnode");
CTransform* Transform59 = (CTransform *)(m_pScene.createNode("Transform"));
Transform59->setUSE("transC1");
fieldValue58->addChildren(*Transform59);

ProtoInstance53->addFieldValue(*fieldValue58);

CfieldValue* fieldValue60 = new CfieldValue();
fieldValue60->setName("rotscalenode");
CTransform* Transform61 = (CTransform *)(m_pScene.createNode("Transform"));
Transform61->setUSE("rotscaleC1");
fieldValue60->addChildren(*Transform61);

ProtoInstance53->addFieldValue(*fieldValue60);

CfieldValue* fieldValue62 = new CfieldValue();
fieldValue62->setName("set_startpoint");
ProtoInstance53->addFieldValue(*fieldValue62);

CfieldValue* fieldValue63 = new CfieldValue();
fieldValue63->setName("set_endpoint");
ProtoInstance53->addFieldValue(*fieldValue63);

group->addChildren(*ProtoInstance53);

CROUTE* ROUTE64 = new CROUTE();
ROUTE64->setFromNode("G1");
ROUTE64->setFromField("translation_changed");
ROUTE64->setToNode("connector1");
ROUTE64->setToField("set_startpoint");
group->addChildren(*ROUTE64);

CROUTE* ROUTE65 = new CROUTE();
ROUTE65->setFromNode("G2");
ROUTE65->setFromField("translation_changed");
ROUTE65->setToNode("connector1");
ROUTE65->setToField("set_endpoint");
group->addChildren(*ROUTE65);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
