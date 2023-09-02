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
meta2->setContent("arc1.x3d");
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
meta5->setContent("https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d");
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
<Shape><Sphere radius="0.1"></Sphere>
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
               }]]></Script>
<TimeSensor DEF="CL1" cycleInterval="3" loop="true"></TimeSensor>
<ROUTE fromNode="CL1" fromField="cycleTime" toNode="MB1" toField="set_location"></ROUTE>
<ROUTE fromNode="CL1" fromField="fraction_changed" toNode="PI1" toField="set_fraction"></ROUTE>
<ROUTE fromNode="MB1" fromField="keyValue" toNode="PI1" toField="keyValue"></ROUTE>
<ROUTE fromNode="PI1" fromField="value_changed" toNode="node" toField="set_translation"></ROUTE>
<ROUTE fromNode="MB1" fromField="translation_changed" toNode="node" toField="set_translation"></ROUTE>
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

Transform14->addChild(*Shape17);

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
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }`)
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

CROUTE* ROUTE32 = new CROUTE();
ROUTE32->setFromNode("MB1");
ROUTE32->setFromField("translation_changed");
ROUTE32->setToNode("node");
ROUTE32->setToField("set_translation");
Transform14->addChildren(*ROUTE32);

ProtoBody13->addChildren(*Transform14);

ProtoDeclare10->setProtoBody(*ProtoBody13);

group->addChildren(*ProtoDeclare10);

CTransform* Transform33 = (CTransform *)(m_pScene.createNode("Transform"));
Transform33->setDEF("G1");
CProtoInstance* ProtoInstance34 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance34->setName("point");
Transform33->addChildren(*ProtoInstance34);

group->addChildren(*Transform33);

CTransform* Transform35 = (CTransform *)(m_pScene.createNode("Transform"));
Transform35->setDEF("G2");
CProtoInstance* ProtoInstance36 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance36->setName("point");
Transform35->addChildren(*ProtoInstance36);

group->addChildren(*Transform35);

CTransform* Transform37 = (CTransform *)(m_pScene.createNode("Transform"));
Transform37->setDEF("transC1");
CTransform* Transform38 = (CTransform *)(m_pScene.createNode("Transform"));
Transform38->setDEF("rotscaleC1");
CShape* Shape39 = (CShape *)(m_pScene.createNode("Shape"));
CAppearance* Appearance40 = (CAppearance *)(m_pScene.createNode("Appearance"));
CMaterial* Material41 = (CMaterial *)(m_pScene.createNode("Material"));
Material41->setDiffuseColor(new float[3]{0.2,0.7,0.7});
Material41->setTransparency(0.5);
Appearance40->setMaterial(*Material41);

Shape39->setAppearance(*Appearance40);

CCylinder* Cylinder42 = (CCylinder *)(m_pScene.createNode("Cylinder"));
Cylinder42->setRadius(0.05);
Shape39->setGeometry(Cylinder42);

Transform38->addChild(*Shape39);

Transform37->addChildren(*Transform38);

group->addChildren(*Transform37);

CProtoDeclare ProtoDeclare43 = browser.createX3DFromString(R"foo(<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="x3dconnector" ><ProtoInterface><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
<field name="endnode" accessType="initializeOnly" type="SFNode"></field>
<field name="transnode" accessType="inputOutput" type="SFNode"></field>
<field name="rotscalenode" accessType="inputOutput" type="SFNode"></field>
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
ProtoDeclare43->setName("x3dconnector");
CProtoInterface* ProtoInterface44 = new CProtoInterface();
Cfield* field45 = new Cfield();
field45->setName("startnode");
field45->setAccessType("initializeOnly");
field45->setType("SFNode");
ProtoInterface44->addField(*field45);

Cfield* field46 = new Cfield();
field46->setName("endnode");
field46->setAccessType("initializeOnly");
field46->setType("SFNode");
ProtoInterface44->addField(*field46);

Cfield* field47 = new Cfield();
field47->setName("transnode");
field47->setAccessType("inputOutput");
field47->setType("SFNode");
ProtoInterface44->addField(*field47);

Cfield* field48 = new Cfield();
field48->setName("rotscalenode");
field48->setAccessType("inputOutput");
field48->setType("SFNode");
ProtoInterface44->addField(*field48);

Cfield* field49 = new Cfield();
field49->setName("set_startpoint");
field49->setAccessType("inputOnly");
field49->setType("SFVec3f");
ProtoInterface44->addField(*field49);

Cfield* field50 = new Cfield();
field50->setName("set_endpoint");
field50->setAccessType("inputOnly");
field50->setType("SFVec3f");
ProtoInterface44->addField(*field50);

ProtoDeclare43->setProtoInterface(*ProtoInterface44);

CProtoBody* ProtoBody51 = new CProtoBody();
CScript* Script52 = (CScript *)(m_pScene.createNode("Script"));
Script52->setDEF("S1");
Cfield* field53 = new Cfield();
field53->setName("startnode");
field53->setAccessType("initializeOnly");
field53->setType("SFNode");
Script52->addField(*field53);

Cfield* field54 = new Cfield();
field54->setName("endnode");
field54->setAccessType("initializeOnly");
field54->setType("SFNode");
Script52->addField(*field54);

Cfield* field55 = new Cfield();
field55->setName("transnode");
field55->setAccessType("initializeOnly");
field55->setType("SFNode");
Script52->addField(*field55);

Cfield* field56 = new Cfield();
field56->setName("rotscalenode");
field56->setAccessType("initializeOnly");
field56->setType("SFNode");
Script52->addField(*field56);

Cfield* field57 = new Cfield();
field57->setName("set_startpoint");
field57->setAccessType("inputOnly");
field57->setType("SFVec3f");
Script52->addField(*field57);

Cfield* field58 = new Cfield();
field58->setName("set_endpoint");
field58->setAccessType("inputOnly");
field58->setType("SFVec3f");
Script52->addField(*field58);

CIS* IS59 = new CIS();
Cconnect* connect60 = new Cconnect();
connect60->setNodeField("startnode");
connect60->setProtoField("startnode");
IS59->addConnect(*connect60);

Cconnect* connect61 = new Cconnect();
connect61->setNodeField("endnode");
connect61->setProtoField("endnode");
IS59->addConnect(*connect61);

Cconnect* connect62 = new Cconnect();
connect62->setNodeField("transnode");
connect62->setProtoField("transnode");
IS59->addConnect(*connect62);

Cconnect* connect63 = new Cconnect();
connect63->setNodeField("rotscalenode");
connect63->setProtoField("rotscalenode");
IS59->addConnect(*connect63);

Cconnect* connect64 = new Cconnect();
connect64->setNodeField("set_startpoint");
connect64->setProtoField("set_startpoint");
IS59->addConnect(*connect64);

Cconnect* connect65 = new Cconnect();
connect65->setNodeField("set_endpoint");
connect65->setProtoField("set_endpoint");
IS59->addConnect(*connect65);

Script52->setIS(*IS59);


Script52.setSourceCode(`ecmascript:\n"+
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
ProtoBody51->addChildren(*Script52);

ProtoDeclare43->setProtoBody(*ProtoBody51);

group->addChildren(*ProtoDeclare43);

CProtoInstance* ProtoInstance66 = (CProtoInstance *)(m_pScene.createNode("ProtoInstance"));
ProtoInstance66->setName("x3dconnector");
ProtoInstance66->setDEF("connector1");
CfieldValue* fieldValue67 = new CfieldValue();
fieldValue67->setName("startnode");
CTransform* Transform68 = (CTransform *)(m_pScene.createNode("Transform"));
Transform68->setUSE("G1");
fieldValue67->addChildren(*Transform68);

ProtoInstance66->addFieldValue(*fieldValue67);

CfieldValue* fieldValue69 = new CfieldValue();
fieldValue69->setName("endnode");
CTransform* Transform70 = (CTransform *)(m_pScene.createNode("Transform"));
Transform70->setUSE("G2");
fieldValue69->addChildren(*Transform70);

ProtoInstance66->addFieldValue(*fieldValue69);

CfieldValue* fieldValue71 = new CfieldValue();
fieldValue71->setName("transnode");
CTransform* Transform72 = (CTransform *)(m_pScene.createNode("Transform"));
Transform72->setUSE("transC1");
fieldValue71->addChildren(*Transform72);

ProtoInstance66->addFieldValue(*fieldValue71);

CfieldValue* fieldValue73 = new CfieldValue();
fieldValue73->setName("rotscalenode");
CTransform* Transform74 = (CTransform *)(m_pScene.createNode("Transform"));
Transform74->setUSE("rotscaleC1");
fieldValue73->addChildren(*Transform74);

ProtoInstance66->addFieldValue(*fieldValue73);

CfieldValue* fieldValue75 = new CfieldValue();
fieldValue75->setName("set_startpoint");
ProtoInstance66->addFieldValue(*fieldValue75);

CfieldValue* fieldValue76 = new CfieldValue();
fieldValue76->setName("set_endpoint");
ProtoInstance66->addFieldValue(*fieldValue76);

group->addChildren(*ProtoInstance66);

CROUTE* ROUTE77 = new CROUTE();
ROUTE77->setFromNode("G1");
ROUTE77->setFromField("translation_changed");
ROUTE77->setToNode("connector1");
ROUTE77->setToField("set_startpoint");
group->addChildren(*ROUTE77);

CROUTE* ROUTE78 = new CROUTE();
ROUTE78->setFromNode("G2");
ROUTE78->setFromField("translation_changed");
ROUTE78->setToNode("connector1");
ROUTE78->setToField("set_endpoint");
group->addChildren(*ROUTE78);

X3D0->setScene(*Scene7);

m_pScene.addRootNode(group);
X3D0->toXMLString();
}
