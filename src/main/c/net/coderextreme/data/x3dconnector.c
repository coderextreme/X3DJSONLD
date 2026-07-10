#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "x3dconnector.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "Lost, Doug Sanden I think";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "generator";
meta4.content = "manual";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "a generic proto to connect two objects";
head1.meta[4] = meta6;

head = head1;

Viewpoint Viewpoint8 = createNode("Viewpoint");
Viewpoint8.position = new SFVec3f(new float[0,0,5]);
Viewpoint8.description = "Only Viewpoint";
children = new MFNode();

children[0] = Viewpoint8;

Background Background9 = createNode("Background");
Background9.skyColor = new MFColor(new float[0.4,0.4,0.4]);
children[1] = Background9;

Transform Transform10 = createNode("Transform");
Transform10.DEF = "G1";
Shape Shape11 = createNode("Shape");
Appearance Appearance12 = createNode("Appearance");
Material Material13 = createNode("Material");
Material13.diffuseColor = new SFColor(new float[0.7,0.2,0.2]);
Appearance12.material = Material13;

Shape11.appearance = Appearance12;

Sphere Sphere14 = createNode("Sphere");
Sphere14.radius = 0.1;
Shape11.geometry = Sphere14;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

PlaneSensor PlaneSensor15 = createNode("PlaneSensor");
PlaneSensor15.description = "Grab to move";
PlaneSensor15.DEF = "PS1";
Transform10.children[1] = PlaneSensor15;

ROUTE ROUTE16 = createNode("ROUTE");
ROUTE16.fromNode = "PS1";
ROUTE16.fromField = "translation_changed";
ROUTE16.toNode = "G1";
ROUTE16.toField = "set_translation";
Transform10.children[2] = ROUTE16;

children[2] = Transform10;

Transform Transform17 = createNode("Transform");
Transform17.DEF = "G2";
Transform17.translation = new SFVec3f(new float[1,-1,0.01]);
Shape Shape18 = createNode("Shape");
Appearance Appearance19 = createNode("Appearance");
Material Material20 = createNode("Material");
Material20.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

Sphere Sphere21 = createNode("Sphere");
Sphere21.radius = 0.1;
Shape18.geometry = Sphere21;

Transform17.child = new undefined();

Transform17.child[0] = Shape18;

PlaneSensor PlaneSensor22 = createNode("PlaneSensor");
PlaneSensor22.description = "Grab to move";
PlaneSensor22.offset = new SFVec3f(new float[1,-1,0.01]);
PlaneSensor22.DEF = "PS2";
Transform17.children[1] = PlaneSensor22;

ROUTE ROUTE23 = createNode("ROUTE");
ROUTE23.fromNode = "PS2";
ROUTE23.fromField = "translation_changed";
ROUTE23.toNode = "G2";
ROUTE23.toField = "set_translation";
Transform17.children[2] = ROUTE23;

children[3] = Transform17;

Transform Transform24 = createNode("Transform");
Transform24.DEF = "transC1";
Transform Transform25 = createNode("Transform");
Transform25.DEF = "rotscaleC1";
Shape Shape26 = createNode("Shape");
Appearance Appearance27 = createNode("Appearance");
Material Material28 = createNode("Material");
Material28.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material28.transparency = 0.5;
Appearance27.material = Material28;

Shape26.appearance = Appearance27;

Cylinder Cylinder29 = createNode("Cylinder");
Cylinder29.radius = 0.05;
Shape26.geometry = Cylinder29;

Transform25.child = new undefined();

Transform25.child[0] = Shape26;

Transform24.children = new MFNode();

Transform24.children[0] = Transform25;

children[4] = Transform24;

ProtoDeclare ProtoDeclare30 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
</ProtoDeclare>`);
ProtoDeclare30.name = "x3dconnector";
ProtoInterface ProtoInterface31 = createNode("ProtoInterface");
field field32 = createNode("field");
field32.name = "startnode";
field32.accessType = "initializeOnly";
field32.type = "SFNode";
ProtoInterface31.field = new MFNode();

ProtoInterface31.field[0] = field32;

field field33 = createNode("field");
field33.name = "endnode";
field33.accessType = "initializeOnly";
field33.type = "SFNode";
ProtoInterface31.field[1] = field33;

field field34 = createNode("field");
field34.name = "transnode";
field34.accessType = "initializeOnly";
field34.type = "SFNode";
ProtoInterface31.field[2] = field34;

field field35 = createNode("field");
field35.name = "rotscalenode";
field35.accessType = "initializeOnly";
field35.type = "SFNode";
ProtoInterface31.field[3] = field35;

field field36 = createNode("field");
field36.name = "set_startpoint";
field36.accessType = "inputOnly";
field36.type = "SFVec3f";
ProtoInterface31.field[4] = field36;

field field37 = createNode("field");
field37.name = "set_endpoint";
field37.accessType = "inputOnly";
field37.type = "SFVec3f";
ProtoInterface31.field[5] = field37;

ProtoDeclare30.protoInterface = ProtoInterface31;

ProtoBody ProtoBody38 = createNode("ProtoBody");
Script Script39 = createNode("Script");
Script39.DEF = "S1";
field field40 = createNode("field");
field40.name = "startnode";
field40.accessType = "initializeOnly";
field40.type = "SFNode";
Script39.field = new MFNode();

Script39.field[0] = field40;

field field41 = createNode("field");
field41.name = "endnode";
field41.accessType = "initializeOnly";
field41.type = "SFNode";
Script39.field[1] = field41;

field field42 = createNode("field");
field42.name = "transnode";
field42.accessType = "initializeOnly";
field42.type = "SFNode";
Script39.field[2] = field42;

field field43 = createNode("field");
field43.name = "rotscalenode";
field43.accessType = "initializeOnly";
field43.type = "SFNode";
Script39.field[3] = field43;

field field44 = createNode("field");
field44.name = "set_startpoint";
field44.accessType = "inputOnly";
field44.type = "SFVec3f";
Script39.field[4] = field44;

field field45 = createNode("field");
field45.name = "set_endpoint";
field45.accessType = "inputOnly";
field45.type = "SFVec3f";
Script39.field[5] = field45;

IS IS46 = createNode("IS");
connect connect47 = createNode("connect");
connect47.nodeField = "startnode";
connect47.protoField = "startnode";
IS46.connect = new MFNode();

IS46.connect[0] = connect47;

connect connect48 = createNode("connect");
connect48.nodeField = "endnode";
connect48.protoField = "endnode";
IS46.connect[1] = connect48;

connect connect49 = createNode("connect");
connect49.nodeField = "transnode";
connect49.protoField = "transnode";
IS46.connect[2] = connect49;

connect connect50 = createNode("connect");
connect50.nodeField = "rotscalenode";
connect50.protoField = "rotscalenode";
IS46.connect[3] = connect50;

connect connect51 = createNode("connect");
connect51.nodeField = "set_startpoint";
connect51.protoField = "set_startpoint";
IS46.connect[4] = connect51;

connect connect52 = createNode("connect");
connect52.nodeField = "set_endpoint";
connect52.protoField = "set_endpoint";
IS46.connect[5] = connect52;

Script39.iS = IS46;


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
ProtoBody38.children = new MFNode();

ProtoBody38.children[0] = Script39;

ProtoDeclare30.protoBody = ProtoBody38;

children[5] = ProtoDeclare30;

ProtoInstance ProtoInstance53 = createNode("ProtoInstance");
ProtoInstance53.name = "x3dconnector";
ProtoInstance53.DEF = "connector1";
fieldValue fieldValue54 = createNode("fieldValue");
fieldValue54.name = "startnode";
Transform Transform55 = createNode("Transform");
Transform55.USE = "G1";
fieldValue54.children = new MFNode();

fieldValue54.children[0] = Transform55;

ProtoInstance53.fieldValue = new MFNode();

ProtoInstance53.fieldValue[0] = fieldValue54;

fieldValue fieldValue56 = createNode("fieldValue");
fieldValue56.name = "endnode";
Transform Transform57 = createNode("Transform");
Transform57.USE = "G2";
fieldValue56.children = new MFNode();

fieldValue56.children[0] = Transform57;

ProtoInstance53.fieldValue[1] = fieldValue56;

fieldValue fieldValue58 = createNode("fieldValue");
fieldValue58.name = "transnode";
Transform Transform59 = createNode("Transform");
Transform59.USE = "transC1";
fieldValue58.children = new MFNode();

fieldValue58.children[0] = Transform59;

ProtoInstance53.fieldValue[2] = fieldValue58;

fieldValue fieldValue60 = createNode("fieldValue");
fieldValue60.name = "rotscalenode";
Transform Transform61 = createNode("Transform");
Transform61.USE = "rotscaleC1";
fieldValue60.children = new MFNode();

fieldValue60.children[0] = Transform61;

ProtoInstance53.fieldValue[3] = fieldValue60;

//<fieldValue name='set_startpoint'>
//</fieldValue>
//<fieldValue name='set_endpoint'>
//</fieldValue>
children[6] = ProtoInstance53;

ROUTE ROUTE62 = createNode("ROUTE");
ROUTE62.fromNode = "G1";
ROUTE62.fromField = "translation_changed";
ROUTE62.toNode = "connector1";
ROUTE62.toField = "set_startpoint";
children[7] = ROUTE62;

ROUTE ROUTE63 = createNode("ROUTE");
ROUTE63.fromNode = "G2";
ROUTE63.fromField = "translation_changed";
ROUTE63.toNode = "connector1";
ROUTE63.toField = "set_endpoint";
children[8] = ROUTE63;

}
