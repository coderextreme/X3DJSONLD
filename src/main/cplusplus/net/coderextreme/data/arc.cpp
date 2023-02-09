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
meta2->setContent("arc");
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

CProtoDeclare ProtoDeclare10 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
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
<field name="keyValue" accessType="inputOutput" type="MFVec3f" value="0 0 0 0 5 0"></field>
<![CDATA[ecmascript:
		function set_location(value) {
                    old = translation;
		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);
                    keyValue = new MFVec3f([old, translation]);
		    // Browser.println(keyValue);
		}]]></Script>
<TimeSensor DEF="CL1" cycleInterval="3" loop="true"></TimeSensor>
<ROUTE fromNode="CL1" fromField="cycleTime" toNode="MB1" toField="set_location"></ROUTE>
<ROUTE fromNode="CL1" fromField="fraction_changed" toNode="PI1" toField="set_fraction"></ROUTE>
<ROUTE fromNode="MB1" fromField="keyValue" toNode="PI1" toField="keyValue"></ROUTE>
<ROUTE fromNode="PI1" fromField="value_changed" toNode="node" toField="set_translation"></ROUTE>
</Transform>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare10->setName("point");
CProtoInterface* ProtoInterface11 = new CProtoInterface();
Cfield* field12 = new Cfield();
field12->setName("translation");
field12->setAccessType("inputOutput");
field12->setType("SFVec3f");
field12->setValue("0 0 0");
ProtoInterface11->addField(*field12);

ProtoDeclare10->setProtoInterface(*ProtoInterface11);

CProtoBody* ProtoBody13 = new CProtoBody();
CTransform* Transform14 = (CTransform *)(m_pScene.createNode("Transform"));
Transform14->setDEF("node");
CIS* IS15 = new CIS();
Cconnect* connect16 = new Cconnect();
connect16->setNodeField("translation");
connect16->setProtoField("translation");
IS15->addConnect(*connect16);

Transform14->setIS(*IS15);

CShape* Shape17 = (CShape *)(m_pScene.createNode("Shape"));
CSphere* Sphere18 = (CSphere *)(m_pScene.createNode("Sphere"));
Sphere18->setRadius(0.1);
Shape17->setGeometry(Sphere18);

CAppearance* Appearance19 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material20 = (CMaterial *)(m_pScene.createNode("Material"));
Material20->setDiffuseColor(new float[3]{1,0,0});
Appearance19->setMaterial(*Material20);

Shape17->setAppearance(*Appearance19);

Transform14->addChildren(*Shape17);

CPositionInterpolator* PositionInterpolator21 = (CPositionInterpolator *)(m_pScene.createNode("PositionInterpolator"));
PositionInterpolator21->setDEF("PI1");
PositionInterpolator21->setKey(new float[2]{0,1}, 2);
PositionInterpolator21->setKeyValue(new float[6]{0,0,0,0,5,0});
Transform14->addChildren(*PositionInterpolator21);

CScript* Script22 = (CScript *)(m_pScene.createNode("Script"));
Script22->setDEF("MB1");
Cfield* field23 = new Cfield();
field23->setName("translation");
field23->setAccessType("inputOutput");
field23->setType("SFVec3f");
field23->setValue("50 50 0");
Script22->addField(*field23);

Cfield* field24 = new Cfield();
field24->setName("old");
field24->setAccessType("inputOutput");
field24->setType("SFVec3f");
field24->setValue("0 0 0");
Script22->addField(*field24);

Cfield* field25 = new Cfield();
field25->setName("set_location");
field25->setAccessType("inputOnly");
field25->setType("SFTime");
Script22->addField(*field25);

Cfield* field26 = new Cfield();
field26->setName("keyValue");
field26->setAccessType("inputOutput");
field26->setType("MFVec3f");
field26->setValue("0 0 0 0 5 0");
Script22->addField(*field26);


Script22.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}`)
Transform14->addChildren(*Script22);

CTimeSensor* TimeSensor27 = (CTimeSensor *)(m_pScene.createNode("TimeSensor"));
TimeSensor27->setDEF("CL1");
TimeSensor27->setCycleInterval(3);
TimeSensor27->setLoop(True);
Transform14->addChildren(*TimeSensor27);

CROUTE* ROUTE28 = new CROUTE();
ROUTE28->setFromNode("CL1");
ROUTE28->setFromField("cycleTime");
ROUTE28->setToNode("MB1");
ROUTE28->setToField("set_location");
Transform14->addChildren(*ROUTE28);

CROUTE* ROUTE29 = new CROUTE();
ROUTE29->setFromNode("CL1");
ROUTE29->setFromField("fraction_changed");
ROUTE29->setToNode("PI1");
ROUTE29->setToField("set_fraction");
Transform14->addChildren(*ROUTE29);

CROUTE* ROUTE30 = new CROUTE();
ROUTE30->setFromNode("MB1");
ROUTE30->setFromField("keyValue");
ROUTE30->setToNode("PI1");
ROUTE30->setToField("keyValue");
Transform14->addChildren(*ROUTE30);

CROUTE* ROUTE31 = new CROUTE();
ROUTE31->setFromNode("PI1");
ROUTE31->setFromField("value_changed");
ROUTE31->setToNode("node");
ROUTE31->setToField("set_translation");
Transform14->addChildren(*ROUTE31);

ProtoBody13->addChildren(*Transform14);

ProtoDeclare10->setProtoBody(*ProtoBody13);

group->addChildren(*ProtoDeclare10);

CProtoDeclare ProtoDeclare32 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="x3dconnector" ><ProtoInterface><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
<field name="endnode" accessType="initializeOnly" type="SFNode"></field>
<field name="set_startpoint" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endpoint" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="trans"><Transform DEF="rotscale"><Shape><Appearance><Material diffuseColor="0.2 0.7 0.7" transparency="0.5"></Material>
</Appearance>
<Cylinder containerField="geometry" radius="0.05"></Cylinder>
</Shape>
</Transform>
</Transform>
<Script DEF="S1"><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
<field name="endnode" accessType="initializeOnly" type="SFNode"></field>
<field name="position" accessType="inputOutput" type="SFNode"><Transform USE="trans"></Transform>
</field>
<field name="rotscale" accessType="inputOutput" type="SFNode"><Transform USE="rotscale"></Transform>
</field>
<field name="set_startpoint" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endpoint" accessType="inputOnly" type="SFVec3f"></field>
<IS><connect nodeField="startnode" protoField="startnode"></connect>
<connect nodeField="endnode" protoField="endnode"></connect>
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
	    } else if (typeof SFRotation !== 'undefined') {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl,
			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)
		    };
	    } else {
		    return {
			    scale : new SFVec3f(1.0,dist,1.0),
			    translation : transl
		    };
	    }
	}
	function recompute_and_route(startpoint, endpoint) {
	      var trafo = recompute(startpoint, endpoint);
	      if (trafo) {
		      position.translation = trafo.translation;
		      rotscale.rotation = trafo.rotation;
		      rotscale.scale = trafo.scale;
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
</Group>
</ProtoBody>
</ProtoDeclare>)foo");
ProtoDeclare32->setName("x3dconnector");
CProtoInterface* ProtoInterface33 = new CProtoInterface();
Cfield* field34 = new Cfield();
field34->setName("startnode");
field34->setAccessType("initializeOnly");
field34->setType("SFNode");
ProtoInterface33->addField(*field34);

Cfield* field35 = new Cfield();
field35->setName("endnode");
field35->setAccessType("initializeOnly");
field35->setType("SFNode");
ProtoInterface33->addField(*field35);

Cfield* field36 = new Cfield();
field36->setName("set_startpoint");
field36->setAccessType("inputOnly");
field36->setType("SFVec3f");
ProtoInterface33->addField(*field36);

Cfield* field37 = new Cfield();
field37->setName("set_endpoint");
field37->setAccessType("inputOnly");
field37->setType("SFVec3f");
ProtoInterface33->addField(*field37);

ProtoDeclare32->setProtoInterface(*ProtoInterface33);

CProtoBody* ProtoBody38 = new CProtoBody();
CGroup* Group39 = (CGroup *)(m_pScene.createNode("Group"));
CTransform* Transform40 = (CTransform *)(m_pScene.createNode("Transform"));
Transform40->setDEF("trans");
CTransform* Transform41 = (CTransform *)(m_pScene.createNode("Transform"));
Transform41->setDEF("rotscale");
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

Group39->addChildren(*Transform40);

CScript* Script46 = (CScript *)(m_pScene.createNode("Script"));
Script46->setDEF("S1");
Cfield* field47 = new Cfield();
field47->setName("startnode");
field47->setAccessType("initializeOnly");
field47->setType("SFNode");
Script46->addField(*field47);

Cfield* field48 = new Cfield();
field48->setName("endnode");
field48->setAccessType("initializeOnly");
field48->setType("SFNode");
Script46->addField(*field48);

Cfield* field49 = new Cfield();
field49->setName("position");
field49->setAccessType("inputOutput");
field49->setType("SFNode");
CTransform* Transform50 = (CTransform *)(m_pScene.createNode("Transform"));
Transform50->setUSE("trans");
field49->addChildren(*Transform50);

Script46->addField(*field49);

Cfield* field51 = new Cfield();
field51->setName("rotscale");
field51->setAccessType("inputOutput");
field51->setType("SFNode");
CTransform* Transform52 = (CTransform *)(m_pScene.createNode("Transform"));
Transform52->setUSE("rotscale");
field51->addChildren(*Transform52);

Script46->addField(*field51);

Cfield* field53 = new Cfield();
field53->setName("set_startpoint");
field53->setAccessType("inputOnly");
field53->setType("SFVec3f");
Script46->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("set_endpoint");
field54->setAccessType("inputOnly");
field54->setType("SFVec3f");
Script46->addField(*field54);

CIS* IS55 = new CIS();
Cconnect* connect56 = new Cconnect();
connect56->setNodeField("startnode");
connect56->setProtoField("startnode");
IS55->addConnect(*connect56);

Cconnect* connect57 = new Cconnect();
connect57->setNodeField("endnode");
connect57->setProtoField("endnode");
IS55->addConnect(*connect57);

Cconnect* connect58 = new Cconnect();
connect58->setNodeField("set_startpoint");
connect58->setProtoField("set_startpoint");
IS55->addConnect(*connect58);

Cconnect* connect59 = new Cconnect();
connect59->setNodeField("set_endpoint");
connect59->setProtoField("set_endpoint");
IS55->addConnect(*connect59);

Script46->setIS(*IS55);


Script46.setSourceCode(`ecmascript:\n"+
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
"	    } else if (typeof SFRotation !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      if (trafo) {\n"+
"		      position.translation = trafo.translation;\n"+
"		      rotscale.rotation = trafo.rotation;\n"+
"		      rotscale.scale = trafo.scale;\n"+
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
Group39->addChildren(*Script46);

ProtoBody38->addChildren(*Group39);

ProtoDeclare32->setProtoBody(*ProtoBody38);

group->addChildren(*ProtoDeclare32);

CProtoInstance* ProtoInstance60 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance60->setName("point");
ProtoInstance60->setDEF("G1");
group->addChildren(*ProtoInstance60);

CProtoInstance* ProtoInstance61 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance61->setName("point");
ProtoInstance61->setDEF("G2");
group->addChildren(*ProtoInstance61);

CProtoInstance* ProtoInstance62 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance62->setName("point");
ProtoInstance62->setDEF("G3");
group->addChildren(*ProtoInstance62);

CProtoInstance* ProtoInstance63 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance63->setName("point");
ProtoInstance63->setDEF("G4");
group->addChildren(*ProtoInstance63);

CProtoInstance* ProtoInstance64 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance64->setName("x3dconnector");
ProtoInstance64->setDEF("connector1");
CfieldValue* fieldValue65 = new CfieldValue();
fieldValue65->setName("startnode");
CProtoInstance* ProtoInstance66 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance66->setUSE("G1");
fieldValue65->addChildren(*ProtoInstance66);

ProtoInstance64->addFieldValue(*fieldValue65);

CfieldValue* fieldValue67 = new CfieldValue();
fieldValue67->setName("endnode");
CProtoInstance* ProtoInstance68 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance68->setUSE("G2");
fieldValue67->addChildren(*ProtoInstance68);

ProtoInstance64->addFieldValue(*fieldValue67);

CfieldValue* fieldValue69 = new CfieldValue();
fieldValue69->setName("set_startpoint");
ProtoInstance64->addFieldValue(*fieldValue69);

CfieldValue* fieldValue70 = new CfieldValue();
fieldValue70->setName("set_endpoint");
ProtoInstance64->addFieldValue(*fieldValue70);

group->addChildren(*ProtoInstance64);

CProtoInstance* ProtoInstance71 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance71->setName("x3dconnector");
ProtoInstance71->setDEF("connector2");
CfieldValue* fieldValue72 = new CfieldValue();
fieldValue72->setName("startnode");
CProtoInstance* ProtoInstance73 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance73->setUSE("G1");
fieldValue72->addChildren(*ProtoInstance73);

ProtoInstance71->addFieldValue(*fieldValue72);

CfieldValue* fieldValue74 = new CfieldValue();
fieldValue74->setName("endnode");
CProtoInstance* ProtoInstance75 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance75->setUSE("G3");
fieldValue74->addChildren(*ProtoInstance75);

ProtoInstance71->addFieldValue(*fieldValue74);

CfieldValue* fieldValue76 = new CfieldValue();
fieldValue76->setName("set_startpoint");
ProtoInstance71->addFieldValue(*fieldValue76);

CfieldValue* fieldValue77 = new CfieldValue();
fieldValue77->setName("set_endpoint");
ProtoInstance71->addFieldValue(*fieldValue77);

group->addChildren(*ProtoInstance71);

CProtoInstance* ProtoInstance78 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance78->setName("x3dconnector");
ProtoInstance78->setDEF("connector3");
CfieldValue* fieldValue79 = new CfieldValue();
fieldValue79->setName("startnode");
CProtoInstance* ProtoInstance80 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance80->setUSE("G1");
fieldValue79->addChildren(*ProtoInstance80);

ProtoInstance78->addFieldValue(*fieldValue79);

CfieldValue* fieldValue81 = new CfieldValue();
fieldValue81->setName("endnode");
CProtoInstance* ProtoInstance82 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance82->setUSE("G4");
fieldValue81->addChildren(*ProtoInstance82);

ProtoInstance78->addFieldValue(*fieldValue81);

CfieldValue* fieldValue83 = new CfieldValue();
fieldValue83->setName("set_startpoint");
ProtoInstance78->addFieldValue(*fieldValue83);

CfieldValue* fieldValue84 = new CfieldValue();
fieldValue84->setName("set_endpoint");
ProtoInstance78->addFieldValue(*fieldValue84);

group->addChildren(*ProtoInstance78);

CROUTE* ROUTE85 = new CROUTE();
ROUTE85->setFromNode("G1");
ROUTE85->setFromField("translation");
ROUTE85->setToNode("connector1");
ROUTE85->setToField("set_startpoint");
group->addChildren(*ROUTE85);

CROUTE* ROUTE86 = new CROUTE();
ROUTE86->setFromNode("G2");
ROUTE86->setFromField("translation");
ROUTE86->setToNode("connector1");
ROUTE86->setToField("set_endpoint");
group->addChildren(*ROUTE86);

CROUTE* ROUTE87 = new CROUTE();
ROUTE87->setFromNode("G1");
ROUTE87->setFromField("translation");
ROUTE87->setToNode("connector2");
ROUTE87->setToField("set_startpoint");
group->addChildren(*ROUTE87);

CROUTE* ROUTE88 = new CROUTE();
ROUTE88->setFromNode("G3");
ROUTE88->setFromField("translation");
ROUTE88->setToNode("connector2");
ROUTE88->setToField("set_endpoint");
group->addChildren(*ROUTE88);

CROUTE* ROUTE89 = new CROUTE();
ROUTE89->setFromNode("G1");
ROUTE89->setFromField("translation");
ROUTE89->setToNode("connector3");
ROUTE89->setToField("set_startpoint");
group->addChildren(*ROUTE89);

CROUTE* ROUTE90 = new CROUTE();
ROUTE90->setFromNode("G4");
ROUTE90->setFromField("translation");
ROUTE90->setToNode("connector3");
ROUTE90->setToField("set_endpoint");
group->addChildren(*ROUTE90);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
