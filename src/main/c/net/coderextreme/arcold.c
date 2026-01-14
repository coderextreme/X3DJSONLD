#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "arcold.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "John Carlson";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "generator";
meta4.content = "manual";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "an attempt to implement an arc in a graph";
head1.meta[4] = meta6;

head = head1;

Viewpoint Viewpoint8 = createNode("Viewpoint");
Viewpoint8.position = new SFVec3f(new float[0,0,5]);
Viewpoint8.description = "a moving graph";
children = new MFNode();

children[0] = Viewpoint8;

Background Background9 = createNode("Background");
Background9.skyColor = new MFColor(new float[0.4,0.4,0.4]);
children[1] = Background9;

Transform Transform10 = createNode("Transform");
Transform10.DEF = "trans1";
Transform Transform11 = createNode("Transform");
Transform11.DEF = "rotscale1";
Shape Shape12 = createNode("Shape");
Appearance Appearance13 = createNode("Appearance");
Material Material14 = createNode("Material");
Material14.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

Cylinder Cylinder15 = createNode("Cylinder");
Cylinder15.radius = 0.1;
Shape12.geometry = Cylinder15;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

Transform10.children = new MFNode();

Transform10.children[0] = Transform11;

children[2] = Transform10;

Transform Transform16 = createNode("Transform");
Transform16.DEF = "trans2";
Transform Transform17 = createNode("Transform");
Transform17.DEF = "rotscale2";
Shape Shape18 = createNode("Shape");
Appearance Appearance19 = createNode("Appearance");
Material Material20 = createNode("Material");
Material20.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

Cylinder Cylinder21 = createNode("Cylinder");
Cylinder21.radius = 0.1;
Shape18.geometry = Cylinder21;

Transform17.child = new undefined();

Transform17.child[0] = Shape18;

Transform16.children = new MFNode();

Transform16.children[0] = Transform17;

children[3] = Transform16;

Transform Transform22 = createNode("Transform");
Transform22.DEF = "trans3";
Transform Transform23 = createNode("Transform");
Transform23.DEF = "rotscale3";
Shape Shape24 = createNode("Shape");
Appearance Appearance25 = createNode("Appearance");
Material Material26 = createNode("Material");
Material26.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Appearance25.material = Material26;

Shape24.appearance = Appearance25;

Cylinder Cylinder27 = createNode("Cylinder");
Cylinder27.radius = 0.1;
Shape24.geometry = Cylinder27;

Transform23.child = new undefined();

Transform23.child[0] = Shape24;

Transform22.children = new MFNode();

Transform22.children[0] = Transform23;

children[4] = Transform22;

ProtoDeclare ProtoDeclare28 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="point" ><ProtoInterface><field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="node"><IS><connect nodeField="translation" protoField="translation"></connect>
</IS>
<Shape><Sphere radius="0.1"></Sphere>
<Appearance containerField="appearance"><Material containerField="material" diffuseColor="1 0 0"></Material>
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
</ProtoDeclare>`);
ProtoDeclare28.name = "point";
ProtoInterface ProtoInterface29 = createNode("ProtoInterface");
field field30 = createNode("field");
field30.name = "translation";
field30.accessType = "inputOutput";
field30.type = "SFVec3f";
field30.value = "0 0 0";
ProtoInterface29.field = new MFNode();

ProtoInterface29.field[0] = field30;

ProtoDeclare28.protoInterface = ProtoInterface29;

ProtoBody ProtoBody31 = createNode("ProtoBody");
Transform Transform32 = createNode("Transform");
Transform32.DEF = "node";
IS IS33 = createNode("IS");
connect connect34 = createNode("connect");
connect34.nodeField = "translation";
connect34.protoField = "translation";
IS33.connect = new MFNode();

IS33.connect[0] = connect34;

Transform32.iS = IS33;

Shape Shape35 = createNode("Shape");
Sphere Sphere36 = createNode("Sphere");
Sphere36.radius = 0.1;
Shape35.geometry = Sphere36;

Appearance Appearance37 = createNode("Appearance");
Material Material38 = createNode("Material");
Material38.diffuseColor = new SFColor(new float[1,0,0]);
Appearance37.material = Material38;

Shape35.appearance = Appearance37;

Transform32.child = new undefined();

Transform32.child[0] = Shape35;

PositionInterpolator PositionInterpolator39 = createNode("PositionInterpolator");
PositionInterpolator39.DEF = "PI1";
PositionInterpolator39.key = new MFFloat(new float[0,1]);
PositionInterpolator39.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform32.children[1] = PositionInterpolator39;

Script Script40 = createNode("Script");
Script40.DEF = "MB1";
field field41 = createNode("field");
field41.name = "translation";
field41.accessType = "inputOutput";
field41.type = "SFVec3f";
field41.value = "50 50 0";
Script40.field = new MFNode();

Script40.field[0] = field41;

field field42 = createNode("field");
field42.name = "old";
field42.accessType = "inputOutput";
field42.type = "SFVec3f";
field42.value = "0 0 0";
Script40.field[1] = field42;

field field43 = createNode("field");
field43.name = "set_location";
field43.accessType = "inputOnly";
field43.type = "SFTime";
Script40.field[2] = field43;

field field44 = createNode("field");
field44.name = "keyValue";
field44.accessType = "outputOnly";
field44.type = "MFVec3f";
Script40.field[3] = field44;


Script40.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}`)
Transform32.children[2] = Script40;

TimeSensor TimeSensor45 = createNode("TimeSensor");
TimeSensor45.DEF = "CL1";
TimeSensor45.cycleInterval = 3;
TimeSensor45.loop = True;
Transform32.children[3] = TimeSensor45;

ROUTE ROUTE46 = createNode("ROUTE");
ROUTE46.fromNode = "CL1";
ROUTE46.fromField = "cycleTime";
ROUTE46.toNode = "MB1";
ROUTE46.toField = "set_location";
Transform32.children[4] = ROUTE46;

ROUTE ROUTE47 = createNode("ROUTE");
ROUTE47.fromNode = "CL1";
ROUTE47.fromField = "fraction_changed";
ROUTE47.toNode = "PI1";
ROUTE47.toField = "set_fraction";
Transform32.children[5] = ROUTE47;

ROUTE ROUTE48 = createNode("ROUTE");
ROUTE48.fromNode = "MB1";
ROUTE48.fromField = "keyValue";
ROUTE48.toNode = "PI1";
ROUTE48.toField = "keyValue";
Transform32.children[6] = ROUTE48;

ROUTE ROUTE49 = createNode("ROUTE");
ROUTE49.fromNode = "PI1";
ROUTE49.fromField = "value_changed";
ROUTE49.toNode = "node";
ROUTE49.toField = "set_translation";
Transform32.children[7] = ROUTE49;

ProtoBody31.children = new MFNode();

ProtoBody31.children[0] = Transform32;

ProtoDeclare28.protoBody = ProtoBody31;

children[5] = ProtoDeclare28;

//from doug sanden
ProtoDeclare ProtoDeclare50 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
</ProtoDeclare>`);
ProtoDeclare50.name = "x3dconnector";
ProtoInterface ProtoInterface51 = createNode("ProtoInterface");
field field52 = createNode("field");
field52.name = "startnode";
field52.accessType = "inputOutput";
field52.type = "SFNode";
ProtoInterface51.field = new MFNode();

ProtoInterface51.field[0] = field52;

field field53 = createNode("field");
field53.name = "endnode";
field53.accessType = "inputOutput";
field53.type = "SFNode";
ProtoInterface51.field[1] = field53;

field field54 = createNode("field");
field54.name = "transnode";
field54.accessType = "inputOutput";
field54.type = "SFNode";
ProtoInterface51.field[2] = field54;

field field55 = createNode("field");
field55.name = "rotscalenode";
field55.accessType = "inputOutput";
field55.type = "SFNode";
ProtoInterface51.field[3] = field55;

field field56 = createNode("field");
field56.name = "set_startpoint";
field56.accessType = "inputOnly";
field56.type = "SFVec3f";
ProtoInterface51.field[4] = field56;

field field57 = createNode("field");
field57.name = "set_endpoint";
field57.accessType = "inputOnly";
field57.type = "SFVec3f";
ProtoInterface51.field[5] = field57;

ProtoDeclare50.protoInterface = ProtoInterface51;

ProtoBody ProtoBody58 = createNode("ProtoBody");
Script Script59 = createNode("Script");
Script59.DEF = "S1";
field field60 = createNode("field");
field60.name = "startnode";
field60.accessType = "inputOutput";
field60.type = "SFNode";
Script59.field = new MFNode();

Script59.field[0] = field60;

field field61 = createNode("field");
field61.name = "endnode";
field61.accessType = "inputOutput";
field61.type = "SFNode";
Script59.field[1] = field61;

field field62 = createNode("field");
field62.name = "transnode";
field62.accessType = "inputOutput";
field62.type = "SFNode";
Script59.field[2] = field62;

field field63 = createNode("field");
field63.name = "rotscalenode";
field63.accessType = "inputOutput";
field63.type = "SFNode";
Script59.field[3] = field63;

field field64 = createNode("field");
field64.name = "set_startpoint";
field64.accessType = "inputOnly";
field64.type = "SFVec3f";
Script59.field[4] = field64;

field field65 = createNode("field");
field65.name = "set_endpoint";
field65.accessType = "inputOnly";
field65.type = "SFVec3f";
Script59.field[5] = field65;

IS IS66 = createNode("IS");
connect connect67 = createNode("connect");
connect67.nodeField = "startnode";
connect67.protoField = "startnode";
IS66.connect = new MFNode();

IS66.connect[0] = connect67;

connect connect68 = createNode("connect");
connect68.nodeField = "endnode";
connect68.protoField = "endnode";
IS66.connect[1] = connect68;

connect connect69 = createNode("connect");
connect69.nodeField = "transnode";
connect69.protoField = "transnode";
IS66.connect[2] = connect69;

connect connect70 = createNode("connect");
connect70.nodeField = "rotscalenode";
connect70.protoField = "rotscalenode";
IS66.connect[3] = connect70;

connect connect71 = createNode("connect");
connect71.nodeField = "set_startpoint";
connect71.protoField = "set_startpoint";
IS66.connect[4] = connect71;

connect connect72 = createNode("connect");
connect72.nodeField = "set_endpoint";
connect72.protoField = "set_endpoint";
IS66.connect[5] = connect72;

Script59.iS = IS66;


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
ProtoBody58.children = new MFNode();

ProtoBody58.children[0] = Script59;

ProtoDeclare50.protoBody = ProtoBody58;

children[6] = ProtoDeclare50;

ProtoInstance ProtoInstance73 = createNode("ProtoInstance");
ProtoInstance73.name = "point";
ProtoInstance73.DEF = "G1";
children[7] = ProtoInstance73;

ProtoInstance ProtoInstance74 = createNode("ProtoInstance");
ProtoInstance74.name = "point";
ProtoInstance74.DEF = "G2";
children[8] = ProtoInstance74;

ProtoInstance ProtoInstance75 = createNode("ProtoInstance");
ProtoInstance75.name = "point";
ProtoInstance75.DEF = "G3";
children[9] = ProtoInstance75;

ProtoInstance ProtoInstance76 = createNode("ProtoInstance");
ProtoInstance76.name = "point";
ProtoInstance76.DEF = "G4";
children[10] = ProtoInstance76;

ProtoInstance ProtoInstance77 = createNode("ProtoInstance");
ProtoInstance77.name = "x3dconnector";
ProtoInstance77.DEF = "connector1";
fieldValue fieldValue78 = createNode("fieldValue");
fieldValue78.name = "startnode";
ProtoInstance ProtoInstance79 = createNode("ProtoInstance");
ProtoInstance79.USE = "G1";
fieldValue78.children = new MFNode();

fieldValue78.children[0] = ProtoInstance79;

ProtoInstance77.fieldValue = new MFNode();

ProtoInstance77.fieldValue[0] = fieldValue78;

fieldValue fieldValue80 = createNode("fieldValue");
fieldValue80.name = "endnode";
ProtoInstance ProtoInstance81 = createNode("ProtoInstance");
ProtoInstance81.USE = "G2";
fieldValue80.children = new MFNode();

fieldValue80.children[0] = ProtoInstance81;

ProtoInstance77.fieldValue[1] = fieldValue80;

fieldValue fieldValue82 = createNode("fieldValue");
fieldValue82.name = "transnode";
Transform Transform83 = createNode("Transform");
Transform83.USE = "trans1";
fieldValue82.children = new MFNode();

fieldValue82.children[0] = Transform83;

ProtoInstance77.fieldValue[2] = fieldValue82;

fieldValue fieldValue84 = createNode("fieldValue");
fieldValue84.name = "rotscalenode";
Transform Transform85 = createNode("Transform");
Transform85.USE = "rotscale1";
fieldValue84.children = new MFNode();

fieldValue84.children[0] = Transform85;

ProtoInstance77.fieldValue[3] = fieldValue84;

children[11] = ProtoInstance77;

ProtoInstance ProtoInstance86 = createNode("ProtoInstance");
ProtoInstance86.name = "x3dconnector";
ProtoInstance86.DEF = "connector2";
fieldValue fieldValue87 = createNode("fieldValue");
fieldValue87.name = "startnode";
ProtoInstance ProtoInstance88 = createNode("ProtoInstance");
ProtoInstance88.USE = "G1";
fieldValue87.children = new MFNode();

fieldValue87.children[0] = ProtoInstance88;

ProtoInstance86.fieldValue = new MFNode();

ProtoInstance86.fieldValue[0] = fieldValue87;

fieldValue fieldValue89 = createNode("fieldValue");
fieldValue89.name = "endnode";
ProtoInstance ProtoInstance90 = createNode("ProtoInstance");
ProtoInstance90.USE = "G3";
fieldValue89.children = new MFNode();

fieldValue89.children[0] = ProtoInstance90;

ProtoInstance86.fieldValue[1] = fieldValue89;

fieldValue fieldValue91 = createNode("fieldValue");
fieldValue91.name = "transnode";
Transform Transform92 = createNode("Transform");
Transform92.USE = "trans2";
fieldValue91.children = new MFNode();

fieldValue91.children[0] = Transform92;

ProtoInstance86.fieldValue[2] = fieldValue91;

fieldValue fieldValue93 = createNode("fieldValue");
fieldValue93.name = "rotscalenode";
Transform Transform94 = createNode("Transform");
Transform94.USE = "rotscale2";
fieldValue93.children = new MFNode();

fieldValue93.children[0] = Transform94;

ProtoInstance86.fieldValue[3] = fieldValue93;

children[12] = ProtoInstance86;

ProtoInstance ProtoInstance95 = createNode("ProtoInstance");
ProtoInstance95.name = "x3dconnector";
ProtoInstance95.DEF = "connector3";
fieldValue fieldValue96 = createNode("fieldValue");
fieldValue96.name = "startnode";
ProtoInstance ProtoInstance97 = createNode("ProtoInstance");
ProtoInstance97.USE = "G1";
fieldValue96.children = new MFNode();

fieldValue96.children[0] = ProtoInstance97;

ProtoInstance95.fieldValue = new MFNode();

ProtoInstance95.fieldValue[0] = fieldValue96;

fieldValue fieldValue98 = createNode("fieldValue");
fieldValue98.name = "endnode";
ProtoInstance ProtoInstance99 = createNode("ProtoInstance");
ProtoInstance99.USE = "G4";
fieldValue98.children = new MFNode();

fieldValue98.children[0] = ProtoInstance99;

ProtoInstance95.fieldValue[1] = fieldValue98;

fieldValue fieldValue100 = createNode("fieldValue");
fieldValue100.name = "transnode";
Transform Transform101 = createNode("Transform");
Transform101.USE = "trans3";
fieldValue100.children = new MFNode();

fieldValue100.children[0] = Transform101;

ProtoInstance95.fieldValue[2] = fieldValue100;

fieldValue fieldValue102 = createNode("fieldValue");
fieldValue102.name = "rotscalenode";
Transform Transform103 = createNode("Transform");
Transform103.USE = "rotscale3";
fieldValue102.children = new MFNode();

fieldValue102.children[0] = Transform103;

ProtoInstance95.fieldValue[3] = fieldValue102;

children[13] = ProtoInstance95;

ROUTE ROUTE104 = createNode("ROUTE");
ROUTE104.fromNode = "G1";
ROUTE104.fromField = "translation_changed";
ROUTE104.toNode = "connector1";
ROUTE104.toField = "set_startpoint";
children[14] = ROUTE104;

ROUTE ROUTE105 = createNode("ROUTE");
ROUTE105.fromNode = "G2";
ROUTE105.fromField = "translation_changed";
ROUTE105.toNode = "connector1";
ROUTE105.toField = "set_endpoint";
children[15] = ROUTE105;

ROUTE ROUTE106 = createNode("ROUTE");
ROUTE106.fromNode = "G1";
ROUTE106.fromField = "translation_changed";
ROUTE106.toNode = "connector2";
ROUTE106.toField = "set_startpoint";
children[16] = ROUTE106;

ROUTE ROUTE107 = createNode("ROUTE");
ROUTE107.fromNode = "G3";
ROUTE107.fromField = "translation_changed";
ROUTE107.toNode = "connector2";
ROUTE107.toField = "set_endpoint";
children[17] = ROUTE107;

ROUTE ROUTE108 = createNode("ROUTE");
ROUTE108.fromNode = "G1";
ROUTE108.fromField = "translation_changed";
ROUTE108.toNode = "connector3";
ROUTE108.toField = "set_startpoint";
children[18] = ROUTE108;

ROUTE ROUTE109 = createNode("ROUTE");
ROUTE109.fromNode = "G4";
ROUTE109.fromField = "translation_changed";
ROUTE109.toNode = "connector3";
ROUTE109.toField = "set_endpoint";
children[19] = ROUTE109;

}
