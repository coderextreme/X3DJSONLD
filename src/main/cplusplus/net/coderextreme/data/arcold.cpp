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
meta2->setContent("arcold.x3d");
head1->addMeta(*meta2);

Cmeta* meta3 = new Cmeta();
meta3->setName("creator");
meta3->setContent("John Carlson");
head1->addMeta(*meta3);

Cmeta* meta4 = new Cmeta();
meta4->setName("generator");
meta4->setContent("manual");
head1->addMeta(*meta4);

Cmeta* meta5 = new Cmeta();
meta5->setName("identifier");
meta5->setContent("https://coderextreme.net/X3DJSONLD/arc.x3d");
head1->addMeta(*meta5);

Cmeta* meta6 = new Cmeta();
meta6->setName("description");
meta6->setContent("an attempt to implement an arc in a graph");
head1->addMeta(*meta6);

X3D0->setHead(*head1);

CScene* Scene7 = new CScene();
CViewpoint* Viewpoint8 = (CViewpoint *)(m_pScene.createNode("Viewpoint"));
Viewpoint8->setPosition(new float[3]{0,0,5});
Viewpoint8->setDescription("a moving graph");
group->addChildren(*Viewpoint8);

CBackground* Background9 = (CBackground *)(m_pScene.createNode("Background"));
Background9->setSkyColor(new float[3]{0.4,0.4,0.4});
group->addChildren(*Background9);

CTransform* Transform10 = (CTransform *)(m_pScene.createNode("Transform"));
Transform10->setDEF("trans1");
CTransform* Transform11 = (CTransform *)(m_pScene.createNode("Transform"));
Transform11->setDEF("rotscale1");
CShape* Shape12 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance13 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material14 = (CMaterial *)(m_pScene.createNode("Material"));
Material14->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Appearance13->setMaterial(*Material14);

Shape12->setAppearance(*Appearance13);

CCylinder* Cylinder15 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder15->setRadius(0.1);
Shape12->setGeometry(Cylinder15);

Transform11->addChildren(*Shape12);

Transform10->addChildren(*Transform11);

group->addChildren(*Transform10);

CTransform* Transform16 = (CTransform *)(m_pScene.createNode("Transform"));
Transform16->setDEF("trans2");
CTransform* Transform17 = (CTransform *)(m_pScene.createNode("Transform"));
Transform17->setDEF("rotscale2");
CShape* Shape18 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance19 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material20 = (CMaterial *)(m_pScene.createNode("Material"));
Material20->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Appearance19->setMaterial(*Material20);

Shape18->setAppearance(*Appearance19);

CCylinder* Cylinder21 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder21->setRadius(0.1);
Shape18->setGeometry(Cylinder21);

Transform17->addChildren(*Shape18);

Transform16->addChildren(*Transform17);

group->addChildren(*Transform16);

CTransform* Transform22 = (CTransform *)(m_pScene.createNode("Transform"));
Transform22->setDEF("trans3");
CTransform* Transform23 = (CTransform *)(m_pScene.createNode("Transform"));
Transform23->setDEF("rotscale3");
CShape* Shape24 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance25 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material26 = (CMaterial *)(m_pScene.createNode("Material"));
Material26->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Appearance25->setMaterial(*Material26);

Shape24->setAppearance(*Appearance25);

CCylinder* Cylinder27 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder27->setRadius(0.1);
Shape24->setGeometry(Cylinder27);

Transform23->addChildren(*Shape24);

Transform22->addChildren(*Transform23);

group->addChildren(*Transform22);

CProtoDeclare ProtoDeclare28 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="point" ><ProtoInterface><field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="node"><IS><connect nodeField="translation" protoField="translation"></connect>
</IS>
<Shape><Sphere containerField="geometry" radius="0.1"></Sphere>
<Appearance><Material diffuseColor="1 0 0"></Material>
</Appearance>
</Shape>
<PositionInterpolator DEF="PI1" key="0 1" keyValue="0 0 0 0 5 0"></PositionInterpolator>
<Script DEF="MB1"><field name="translation" accessType="inputOutput" type="SFVec3f" value="50 50 0"></field>
<field name="old" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
<field name="set_location" accessType="inputOnly" type="SFTime"></field>
<field name="keyValue" accessType="outputOnly" type="MFVec3f"></field>
<![CDATA[ecmascript:
		function set_location(value) {
                    old = translation;
		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
                    keyValue = new MFVec3f([old, translation]);
		    // Browser.println(translation);
		}]]></Script>
<TimeSensor DEF="CL1" cycleInterval="3" loop="true"></TimeSensor>
<ROUTE fromNode="CL1" fromField="cycleTime" toNode="MB1" toField="set_location"></ROUTE>
<ROUTE fromNode="CL1" fromField="fraction_changed" toNode="PI1" toField="set_fraction"></ROUTE>
<ROUTE fromNode="MB1" fromField="keyValue" toNode="PI1" toField="keyValue"></ROUTE>
<ROUTE fromNode="PI1" fromField="value_changed" toNode="node" toField="set_translation"></ROUTE>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare28->setName("point");
CProtoInterface* ProtoInterface29 = new CProtoInterface();
Cfield* field30 = new Cfield();
field30->setName("translation");
field30->setAccessType("inputOutput");
field30->setType("SFVec3f");
field30->setValue("0 0 0");
ProtoInterface29->addField(*field30);

ProtoDeclare28->setProtoInterface(*ProtoInterface29);

CProtoBody* ProtoBody31 = new CProtoBody();
CTransform* Transform32 = (CTransform *)(m_pScene.createNode("Transform"));
Transform32->setDEF("node");
CIS* IS33 = new CIS();
Cconnect* connect34 = new Cconnect();
connect34->setNodeField("translation");
connect34->setProtoField("translation");
IS33->addConnect(*connect34);

Transform32->setIS(*IS33);

CShape* Shape35 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere36 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere36->setRadius(0.1);
Shape35->setGeometry(Sphere36);

CAppearance* Appearance37 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material38 = (CMaterial *)(m_pScene.createNode("Material"));
Material38->setDiffuseColor(new float[3]{1,0,0});
Appearance37->setMaterial(*Material38);

Shape35->setAppearance(*Appearance37);

Transform32->addChildren(*Shape35);

CPositionInterpolator* PositionInterpolator39 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator39->setDEF("PI1");
PositionInterpolator39->setKey(new float[2]{0,1}, 2);
PositionInterpolator39->setKeyValue(new float[6]{0,0,0,0,5,0});
Transform32->addChildren(*PositionInterpolator39);

CScript* Script40 = (CScript *)(m_pScene.createNode("Script"));
Script40->setDEF("MB1");
Cfield* field41 = new Cfield();
field41->setName("translation");
field41->setAccessType("inputOutput");
field41->setType("SFVec3f");
field41->setValue("50 50 0");
Script40->addField(*field41);

Cfield* field42 = new Cfield();
field42->setName("old");
field42->setAccessType("inputOutput");
field42->setType("SFVec3f");
field42->setValue("0 0 0");
Script40->addField(*field42);

Cfield* field43 = new Cfield();
field43->setName("set_location");
field43->setAccessType("inputOnly");
field43->setType("SFTime");
Script40->addField(*field43);

Cfield* field44 = new Cfield();
field44->setName("keyValue");
field44->setAccessType("outputOnly");
field44->setType("MFVec3f");
Script40->addField(*field44);


Script40.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}`)
Transform32->addChildren(*Script40);

CTimeSensor* TimeSensor45 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor45->setDEF("CL1");
TimeSensor45->setCycleInterval(3);
TimeSensor45->setLoop(True);
Transform32->addChildren(*TimeSensor45);

CROUTE* ROUTE46 = new CROUTE();
ROUTE46->setFromNode("CL1");
ROUTE46->setFromField("cycleTime");
ROUTE46->setToNode("MB1");
ROUTE46->setToField("set_location");
Transform32->addChildren(*ROUTE46);

CROUTE* ROUTE47 = new CROUTE();
ROUTE47->setFromNode("CL1");
ROUTE47->setFromField("fraction_changed");
ROUTE47->setToNode("PI1");
ROUTE47->setToField("set_fraction");
Transform32->addChildren(*ROUTE47);

CROUTE* ROUTE48 = new CROUTE();
ROUTE48->setFromNode("MB1");
ROUTE48->setFromField("keyValue");
ROUTE48->setToNode("PI1");
ROUTE48->setToField("keyValue");
Transform32->addChildren(*ROUTE48);

CROUTE* ROUTE49 = new CROUTE();
ROUTE49->setFromNode("PI1");
ROUTE49->setFromField("value_changed");
ROUTE49->setToNode("node");
ROUTE49->setToField("set_translation");
Transform32->addChildren(*ROUTE49);

ProtoBody31->addChildren(*Transform32);

ProtoDeclare28->setProtoBody(*ProtoBody31);

group->addChildren(*ProtoDeclare28);

//from doug sanden
CProtoDeclare ProtoDeclare50 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="x3dconnector" ><ProtoInterface><field name="startnode" accessType="inputOutput" type="SFNode"></field>
<field name="endnode" accessType="inputOutput" type="SFNode"></field>
<field name="transnode" accessType="inputOutput" type="SFNode"></field>
<field name="rotscalenode" accessType="inputOutput" type="SFNode"></field>
<field name="set_startpoint" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endpoint" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Script DEF="S1"><field name="startnode" accessType="inputOutput" type="SFNode"></field>
<field name="endnode" accessType="inputOutput" type="SFNode"></field>
<field name="transnode" accessType="inputOutput" type="SFNode"></field>
<field name="rotscalenode" accessType="inputOutput" type="SFNode"></field>
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
		if (typeof trafo !== 'undefined') {
			transnode.translation = trafo.translation;
			rotscalenode.rotation = trafo.rotation;
			rotscalenode.scale = trafo.scale;
		} else {
			Browser.print("recompute returned undefined");
		}
	}
        function initialize(){
            recompute_and_route(startnode.translation,endnode.translation);
        }
        function set_startpoint(val,t){
            recompute_and_route(val || startnode.translation,endnode.translation);
        }
        function set_endpoint(val,t){
            recompute_and_route(startnode.translation,val || endnode.translation);
        }]]></Script>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare50->setName("x3dconnector");
CProtoInterface* ProtoInterface51 = new CProtoInterface();
Cfield* field52 = new Cfield();
field52->setName("startnode");
field52->setAccessType("inputOutput");
field52->setType("SFNode");
ProtoInterface51->addField(*field52);

Cfield* field53 = new Cfield();
field53->setName("endnode");
field53->setAccessType("inputOutput");
field53->setType("SFNode");
ProtoInterface51->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("transnode");
field54->setAccessType("inputOutput");
field54->setType("SFNode");
ProtoInterface51->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("rotscalenode");
field55->setAccessType("inputOutput");
field55->setType("SFNode");
ProtoInterface51->addField(*field55);

Cfield* field56 = new Cfield();
field56->setName("set_startpoint");
field56->setAccessType("inputOnly");
field56->setType("SFVec3f");
ProtoInterface51->addField(*field56);

Cfield* field57 = new Cfield();
field57->setName("set_endpoint");
field57->setAccessType("inputOnly");
field57->setType("SFVec3f");
ProtoInterface51->addField(*field57);

ProtoDeclare50->setProtoInterface(*ProtoInterface51);

CProtoBody* ProtoBody58 = new CProtoBody();
CScript* Script59 = (CScript *)(m_pScene.createNode("Script"));
Script59->setDEF("S1");
Cfield* field60 = new Cfield();
field60->setName("startnode");
field60->setAccessType("inputOutput");
field60->setType("SFNode");
Script59->addField(*field60);

Cfield* field61 = new Cfield();
field61->setName("endnode");
field61->setAccessType("inputOutput");
field61->setType("SFNode");
Script59->addField(*field61);

Cfield* field62 = new Cfield();
field62->setName("transnode");
field62->setAccessType("inputOutput");
field62->setType("SFNode");
Script59->addField(*field62);

Cfield* field63 = new Cfield();
field63->setName("rotscalenode");
field63->setAccessType("inputOutput");
field63->setType("SFNode");
Script59->addField(*field63);

Cfield* field64 = new Cfield();
field64->setName("set_startpoint");
field64->setAccessType("inputOnly");
field64->setType("SFVec3f");
Script59->addField(*field64);

Cfield* field65 = new Cfield();
field65->setName("set_endpoint");
field65->setAccessType("inputOnly");
field65->setType("SFVec3f");
Script59->addField(*field65);

CIS* IS66 = new CIS();
Cconnect* connect67 = new Cconnect();
connect67->setNodeField("startnode");
connect67->setProtoField("startnode");
IS66->addConnect(*connect67);

Cconnect* connect68 = new Cconnect();
connect68->setNodeField("endnode");
connect68->setProtoField("endnode");
IS66->addConnect(*connect68);

Cconnect* connect69 = new Cconnect();
connect69->setNodeField("transnode");
connect69->setProtoField("transnode");
IS66->addConnect(*connect69);

Cconnect* connect70 = new Cconnect();
connect70->setNodeField("rotscalenode");
connect70->setProtoField("rotscalenode");
IS66->addConnect(*connect70);

Cconnect* connect71 = new Cconnect();
connect71->setNodeField("set_startpoint");
connect71->setProtoField("set_startpoint");
IS66->addConnect(*connect71);

Cconnect* connect72 = new Cconnect();
connect72->setNodeField("set_endpoint");
connect72->setProtoField("set_endpoint");
IS66->addConnect(*connect72);

Script59->setIS(*IS66);


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
ProtoBody58->addChildren(*Script59);

ProtoDeclare50->setProtoBody(*ProtoBody58);

group->addChildren(*ProtoDeclare50);

CProtoInstance* ProtoInstance73 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance73->setName("point");
ProtoInstance73->setDEF("G1");
group->addChildren(*ProtoInstance73);

CProtoInstance* ProtoInstance74 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance74->setName("point");
ProtoInstance74->setDEF("G2");
group->addChildren(*ProtoInstance74);

CProtoInstance* ProtoInstance75 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance75->setName("point");
ProtoInstance75->setDEF("G3");
group->addChildren(*ProtoInstance75);

CProtoInstance* ProtoInstance76 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance76->setName("point");
ProtoInstance76->setDEF("G4");
group->addChildren(*ProtoInstance76);

CProtoInstance* ProtoInstance77 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance77->setName("x3dconnector");
ProtoInstance77->setDEF("connector1");
CfieldValue* fieldValue78 = new CfieldValue();
fieldValue78->setName("startnode");
CProtoInstance* ProtoInstance79 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance79->setUSE("G1");
fieldValue78->addChildren(*ProtoInstance79);

ProtoInstance77->addFieldValue(*fieldValue78);

CfieldValue* fieldValue80 = new CfieldValue();
fieldValue80->setName("endnode");
CProtoInstance* ProtoInstance81 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance81->setUSE("G2");
fieldValue80->addChildren(*ProtoInstance81);

ProtoInstance77->addFieldValue(*fieldValue80);

CfieldValue* fieldValue82 = new CfieldValue();
fieldValue82->setName("transnode");
CTransform* Transform83 = (CTransform *)(m_pScene.createNode("Transform"));
Transform83->setUSE("trans1");
fieldValue82->addChildren(*Transform83);

ProtoInstance77->addFieldValue(*fieldValue82);

CfieldValue* fieldValue84 = new CfieldValue();
fieldValue84->setName("rotscalenode");
CTransform* Transform85 = (CTransform *)(m_pScene.createNode("Transform"));
Transform85->setUSE("rotscale1");
fieldValue84->addChildren(*Transform85);

ProtoInstance77->addFieldValue(*fieldValue84);

group->addChildren(*ProtoInstance77);

CProtoInstance* ProtoInstance86 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance86->setName("x3dconnector");
ProtoInstance86->setDEF("connector2");
CfieldValue* fieldValue87 = new CfieldValue();
fieldValue87->setName("startnode");
CProtoInstance* ProtoInstance88 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance88->setUSE("G1");
fieldValue87->addChildren(*ProtoInstance88);

ProtoInstance86->addFieldValue(*fieldValue87);

CfieldValue* fieldValue89 = new CfieldValue();
fieldValue89->setName("endnode");
CProtoInstance* ProtoInstance90 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance90->setUSE("G3");
fieldValue89->addChildren(*ProtoInstance90);

ProtoInstance86->addFieldValue(*fieldValue89);

CfieldValue* fieldValue91 = new CfieldValue();
fieldValue91->setName("transnode");
CTransform* Transform92 = (CTransform *)(m_pScene.createNode("Transform"));
Transform92->setUSE("trans2");
fieldValue91->addChildren(*Transform92);

ProtoInstance86->addFieldValue(*fieldValue91);

CfieldValue* fieldValue93 = new CfieldValue();
fieldValue93->setName("rotscalenode");
CTransform* Transform94 = (CTransform *)(m_pScene.createNode("Transform"));
Transform94->setUSE("rotscale2");
fieldValue93->addChildren(*Transform94);

ProtoInstance86->addFieldValue(*fieldValue93);

group->addChildren(*ProtoInstance86);

CProtoInstance* ProtoInstance95 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance95->setName("x3dconnector");
ProtoInstance95->setDEF("connector3");
CfieldValue* fieldValue96 = new CfieldValue();
fieldValue96->setName("startnode");
CProtoInstance* ProtoInstance97 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance97->setUSE("G1");
fieldValue96->addChildren(*ProtoInstance97);

ProtoInstance95->addFieldValue(*fieldValue96);

CfieldValue* fieldValue98 = new CfieldValue();
fieldValue98->setName("endnode");
CProtoInstance* ProtoInstance99 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance99->setUSE("G4");
fieldValue98->addChildren(*ProtoInstance99);

ProtoInstance95->addFieldValue(*fieldValue98);

CfieldValue* fieldValue100 = new CfieldValue();
fieldValue100->setName("transnode");
CTransform* Transform101 = (CTransform *)(m_pScene.createNode("Transform"));
Transform101->setUSE("trans3");
fieldValue100->addChildren(*Transform101);

ProtoInstance95->addFieldValue(*fieldValue100);

CfieldValue* fieldValue102 = new CfieldValue();
fieldValue102->setName("rotscalenode");
CTransform* Transform103 = (CTransform *)(m_pScene.createNode("Transform"));
Transform103->setUSE("rotscale3");
fieldValue102->addChildren(*Transform103);

ProtoInstance95->addFieldValue(*fieldValue102);

group->addChildren(*ProtoInstance95);

CROUTE* ROUTE104 = new CROUTE();
ROUTE104->setFromNode("G1");
ROUTE104->setFromField("translation_changed");
ROUTE104->setToNode("connector1");
ROUTE104->setToField("set_startpoint");
group->addChildren(*ROUTE104);

CROUTE* ROUTE105 = new CROUTE();
ROUTE105->setFromNode("G2");
ROUTE105->setFromField("translation_changed");
ROUTE105->setToNode("connector1");
ROUTE105->setToField("set_endpoint");
group->addChildren(*ROUTE105);

CROUTE* ROUTE106 = new CROUTE();
ROUTE106->setFromNode("G1");
ROUTE106->setFromField("translation_changed");
ROUTE106->setToNode("connector2");
ROUTE106->setToField("set_startpoint");
group->addChildren(*ROUTE106);

CROUTE* ROUTE107 = new CROUTE();
ROUTE107->setFromNode("G3");
ROUTE107->setFromField("translation_changed");
ROUTE107->setToNode("connector2");
ROUTE107->setToField("set_endpoint");
group->addChildren(*ROUTE107);

CROUTE* ROUTE108 = new CROUTE();
ROUTE108->setFromNode("G1");
ROUTE108->setFromField("translation_changed");
ROUTE108->setToNode("connector3");
ROUTE108->setToField("set_startpoint");
group->addChildren(*ROUTE108);

CROUTE* ROUTE109 = new CROUTE();
ROUTE109->setFromNode("G4");
ROUTE109->setFromField("translation_changed");
ROUTE109->setToNode("connector3");
ROUTE109->setToField("set_endpoint");
group->addChildren(*ROUTE109);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
