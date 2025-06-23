#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "arc.x3d";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d";
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

ProtoDeclare ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
</ProtoDeclare>`);
ProtoDeclare10.name = "point";
ProtoInterface ProtoInterface11 = createNode("ProtoInterface");
field field12 = createNode("field");
field12.name = "translation";
field12.accessType = "inputOutput";
field12.type = "SFVec3f";
field12.value = "0 0 0";
ProtoInterface11.field = new MFNode();

ProtoInterface11.field[0] = field12;

ProtoDeclare10.protoInterface = ProtoInterface11;

ProtoBody ProtoBody13 = createNode("ProtoBody");
Transform Transform14 = createNode("Transform");
Transform14.DEF = "node";
IS IS15 = createNode("IS");
connect connect16 = createNode("connect");
connect16.nodeField = "translation";
connect16.protoField = "translation";
IS15.connect = new MFNode();

IS15.connect[0] = connect16;

Transform14.iS = IS15;

Shape Shape17 = createNode("Shape");
Sphere Sphere18 = createNode("Sphere");
Sphere18.radius = 0.1;
Shape17.geometry = Sphere18;

Appearance Appearance19 = createNode("Appearance");
Material Material20 = createNode("Material");
Material20.diffuseColor = new SFColor(new float[1,0,0]);
Appearance19.material = Material20;

Shape17.appearance = Appearance19;

Transform14.child = new undefined();

Transform14.child[0] = Shape17;

PositionInterpolator PositionInterpolator21 = createNode("PositionInterpolator");
PositionInterpolator21.DEF = "PI1";
PositionInterpolator21.key = new MFFloat(new float[0,1]);
PositionInterpolator21.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform14.children[1] = PositionInterpolator21;

Script Script22 = createNode("Script");
Script22.DEF = "MB1";
field field23 = createNode("field");
field23.name = "translation";
field23.accessType = "inputOutput";
field23.type = "SFVec3f";
field23.value = "50 50 0";
Script22.field = new MFNode();

Script22.field[0] = field23;

field field24 = createNode("field");
field24.name = "old";
field24.accessType = "inputOutput";
field24.type = "SFVec3f";
field24.value = "0 0 0";
Script22.field[1] = field24;

field field25 = createNode("field");
field25.name = "set_location";
field25.accessType = "inputOnly";
field25.type = "SFTime";
Script22.field[2] = field25;

field field26 = createNode("field");
field26.name = "keyValue";
field26.accessType = "inputOutput";
field26.type = "MFVec3f";
field26.value = "0 0 0 0 5 0";
Script22.field[3] = field26;


Script22.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}`)
Transform14.children[2] = Script22;

TimeSensor TimeSensor27 = createNode("TimeSensor");
TimeSensor27.DEF = "CL1";
TimeSensor27.cycleInterval = 3;
TimeSensor27.loop = True;
Transform14.children[3] = TimeSensor27;

ROUTE ROUTE28 = createNode("ROUTE");
ROUTE28.fromNode = "CL1";
ROUTE28.fromField = "cycleTime";
ROUTE28.toNode = "MB1";
ROUTE28.toField = "set_location";
Transform14.children[4] = ROUTE28;

ROUTE ROUTE29 = createNode("ROUTE");
ROUTE29.fromNode = "CL1";
ROUTE29.fromField = "fraction_changed";
ROUTE29.toNode = "PI1";
ROUTE29.toField = "set_fraction";
Transform14.children[5] = ROUTE29;

ROUTE ROUTE30 = createNode("ROUTE");
ROUTE30.fromNode = "MB1";
ROUTE30.fromField = "keyValue";
ROUTE30.toNode = "PI1";
ROUTE30.toField = "keyValue";
Transform14.children[6] = ROUTE30;

ROUTE ROUTE31 = createNode("ROUTE");
ROUTE31.fromNode = "PI1";
ROUTE31.fromField = "value_changed";
ROUTE31.toNode = "node";
ROUTE31.toField = "set_translation";
Transform14.children[7] = ROUTE31;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Transform14;

ProtoDeclare10.protoBody = ProtoBody13;

children[2] = ProtoDeclare10;

ProtoDeclare ProtoDeclare32 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="x3dconnector" ><ProtoInterface><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
<field name="endnode" accessType="initializeOnly" type="SFNode"></field>
<field name="set_startpoint" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endpoint" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Group><Transform DEF="trans"><Transform DEF="rotscale"><Shape><Appearance containerField="appearance"><Material containerField="material" diffuseColor="0.2 0.7 0.7" transparency="0.5"></Material>
</Appearance>
<Cylinder radius="0.05"></Cylinder>
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
</ProtoDeclare>`);
ProtoDeclare32.name = "x3dconnector";
ProtoInterface ProtoInterface33 = createNode("ProtoInterface");
field field34 = createNode("field");
field34.name = "startnode";
field34.accessType = "initializeOnly";
field34.type = "SFNode";
ProtoInterface33.field = new MFNode();

ProtoInterface33.field[0] = field34;

field field35 = createNode("field");
field35.name = "endnode";
field35.accessType = "initializeOnly";
field35.type = "SFNode";
ProtoInterface33.field[1] = field35;

field field36 = createNode("field");
field36.name = "set_startpoint";
field36.accessType = "inputOnly";
field36.type = "SFVec3f";
ProtoInterface33.field[2] = field36;

field field37 = createNode("field");
field37.name = "set_endpoint";
field37.accessType = "inputOnly";
field37.type = "SFVec3f";
ProtoInterface33.field[3] = field37;

ProtoDeclare32.protoInterface = ProtoInterface33;

ProtoBody ProtoBody38 = createNode("ProtoBody");
Group Group39 = createNode("Group");
Transform Transform40 = createNode("Transform");
Transform40.DEF = "trans";
Transform Transform41 = createNode("Transform");
Transform41.DEF = "rotscale";
Shape Shape42 = createNode("Shape");
Appearance Appearance43 = createNode("Appearance");
Material Material44 = createNode("Material");
Material44.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material44.transparency = 0.5;
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

Cylinder Cylinder45 = createNode("Cylinder");
Cylinder45.radius = 0.05;
Shape42.geometry = Cylinder45;

Transform41.child = new undefined();

Transform41.child[0] = Shape42;

Transform40.children = new MFNode();

Transform40.children[0] = Transform41;

Group39.children = new MFNode();

Group39.children[0] = Transform40;

Script Script46 = createNode("Script");
Script46.DEF = "S1";
field field47 = createNode("field");
field47.name = "startnode";
field47.accessType = "initializeOnly";
field47.type = "SFNode";
Script46.field = new MFNode();

Script46.field[0] = field47;

field field48 = createNode("field");
field48.name = "endnode";
field48.accessType = "initializeOnly";
field48.type = "SFNode";
Script46.field[1] = field48;

field field49 = createNode("field");
field49.name = "position";
field49.accessType = "inputOutput";
field49.type = "SFNode";
Transform Transform50 = createNode("Transform");
Transform50.USE = "trans";
field49.children = new MFNode();

field49.children[0] = Transform50;

Script46.field[2] = field49;

field field51 = createNode("field");
field51.name = "rotscale";
field51.accessType = "inputOutput";
field51.type = "SFNode";
Transform Transform52 = createNode("Transform");
Transform52.USE = "rotscale";
field51.children = new MFNode();

field51.children[0] = Transform52;

Script46.field[3] = field51;

field field53 = createNode("field");
field53.name = "set_startpoint";
field53.accessType = "inputOnly";
field53.type = "SFVec3f";
Script46.field[4] = field53;

field field54 = createNode("field");
field54.name = "set_endpoint";
field54.accessType = "inputOnly";
field54.type = "SFVec3f";
Script46.field[5] = field54;

IS IS55 = createNode("IS");
connect connect56 = createNode("connect");
connect56.nodeField = "startnode";
connect56.protoField = "startnode";
IS55.connect = new MFNode();

IS55.connect[0] = connect56;

connect connect57 = createNode("connect");
connect57.nodeField = "endnode";
connect57.protoField = "endnode";
IS55.connect[1] = connect57;

connect connect58 = createNode("connect");
connect58.nodeField = "set_startpoint";
connect58.protoField = "set_startpoint";
IS55.connect[2] = connect58;

connect connect59 = createNode("connect");
connect59.nodeField = "set_endpoint";
connect59.protoField = "set_endpoint";
IS55.connect[3] = connect59;

Script46.iS = IS55;


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
Group39.children[1] = Script46;

ProtoBody38.children = new MFNode();

ProtoBody38.children[0] = Group39;

ProtoDeclare32.protoBody = ProtoBody38;

children[3] = ProtoDeclare32;

ProtoInstance ProtoInstance60 = createNode("ProtoInstance");
ProtoInstance60.name = "point";
ProtoInstance60.DEF = "G1";
children[4] = ProtoInstance60;

ProtoInstance ProtoInstance61 = createNode("ProtoInstance");
ProtoInstance61.name = "point";
ProtoInstance61.DEF = "G2";
children[5] = ProtoInstance61;

ProtoInstance ProtoInstance62 = createNode("ProtoInstance");
ProtoInstance62.name = "point";
ProtoInstance62.DEF = "G3";
children[6] = ProtoInstance62;

ProtoInstance ProtoInstance63 = createNode("ProtoInstance");
ProtoInstance63.name = "point";
ProtoInstance63.DEF = "G4";
children[7] = ProtoInstance63;

ProtoInstance ProtoInstance64 = createNode("ProtoInstance");
ProtoInstance64.name = "x3dconnector";
ProtoInstance64.DEF = "connector1";
fieldValue fieldValue65 = createNode("fieldValue");
fieldValue65.name = "startnode";
ProtoInstance ProtoInstance66 = createNode("ProtoInstance");
ProtoInstance66.USE = "G1";
fieldValue65.children = new MFNode();

fieldValue65.children[0] = ProtoInstance66;

ProtoInstance64.fieldValue = new MFNode();

ProtoInstance64.fieldValue[0] = fieldValue65;

fieldValue fieldValue67 = createNode("fieldValue");
fieldValue67.name = "endnode";
ProtoInstance ProtoInstance68 = createNode("ProtoInstance");
ProtoInstance68.USE = "G2";
fieldValue67.children = new MFNode();

fieldValue67.children[0] = ProtoInstance68;

ProtoInstance64.fieldValue[1] = fieldValue67;

fieldValue fieldValue69 = createNode("fieldValue");
fieldValue69.name = "set_startpoint";
ProtoInstance64.fieldValue[2] = fieldValue69;

fieldValue fieldValue70 = createNode("fieldValue");
fieldValue70.name = "set_endpoint";
ProtoInstance64.fieldValue[3] = fieldValue70;

children[8] = ProtoInstance64;

ProtoInstance ProtoInstance71 = createNode("ProtoInstance");
ProtoInstance71.name = "x3dconnector";
ProtoInstance71.DEF = "connector2";
fieldValue fieldValue72 = createNode("fieldValue");
fieldValue72.name = "startnode";
ProtoInstance ProtoInstance73 = createNode("ProtoInstance");
ProtoInstance73.USE = "G1";
fieldValue72.children = new MFNode();

fieldValue72.children[0] = ProtoInstance73;

ProtoInstance71.fieldValue = new MFNode();

ProtoInstance71.fieldValue[0] = fieldValue72;

fieldValue fieldValue74 = createNode("fieldValue");
fieldValue74.name = "endnode";
ProtoInstance ProtoInstance75 = createNode("ProtoInstance");
ProtoInstance75.USE = "G3";
fieldValue74.children = new MFNode();

fieldValue74.children[0] = ProtoInstance75;

ProtoInstance71.fieldValue[1] = fieldValue74;

fieldValue fieldValue76 = createNode("fieldValue");
fieldValue76.name = "set_startpoint";
ProtoInstance71.fieldValue[2] = fieldValue76;

fieldValue fieldValue77 = createNode("fieldValue");
fieldValue77.name = "set_endpoint";
ProtoInstance71.fieldValue[3] = fieldValue77;

children[9] = ProtoInstance71;

ProtoInstance ProtoInstance78 = createNode("ProtoInstance");
ProtoInstance78.name = "x3dconnector";
ProtoInstance78.DEF = "connector3";
fieldValue fieldValue79 = createNode("fieldValue");
fieldValue79.name = "startnode";
ProtoInstance ProtoInstance80 = createNode("ProtoInstance");
ProtoInstance80.USE = "G1";
fieldValue79.children = new MFNode();

fieldValue79.children[0] = ProtoInstance80;

ProtoInstance78.fieldValue = new MFNode();

ProtoInstance78.fieldValue[0] = fieldValue79;

fieldValue fieldValue81 = createNode("fieldValue");
fieldValue81.name = "endnode";
ProtoInstance ProtoInstance82 = createNode("ProtoInstance");
ProtoInstance82.USE = "G4";
fieldValue81.children = new MFNode();

fieldValue81.children[0] = ProtoInstance82;

ProtoInstance78.fieldValue[1] = fieldValue81;

fieldValue fieldValue83 = createNode("fieldValue");
fieldValue83.name = "set_startpoint";
ProtoInstance78.fieldValue[2] = fieldValue83;

fieldValue fieldValue84 = createNode("fieldValue");
fieldValue84.name = "set_endpoint";
ProtoInstance78.fieldValue[3] = fieldValue84;

children[10] = ProtoInstance78;

ROUTE ROUTE85 = createNode("ROUTE");
ROUTE85.fromNode = "G1";
ROUTE85.fromField = "translation";
ROUTE85.toNode = "connector1";
ROUTE85.toField = "set_startpoint";
children[11] = ROUTE85;

ROUTE ROUTE86 = createNode("ROUTE");
ROUTE86.fromNode = "G2";
ROUTE86.fromField = "translation";
ROUTE86.toNode = "connector1";
ROUTE86.toField = "set_endpoint";
children[12] = ROUTE86;

ROUTE ROUTE87 = createNode("ROUTE");
ROUTE87.fromNode = "G1";
ROUTE87.fromField = "translation";
ROUTE87.toNode = "connector2";
ROUTE87.toField = "set_startpoint";
children[13] = ROUTE87;

ROUTE ROUTE88 = createNode("ROUTE");
ROUTE88.fromNode = "G3";
ROUTE88.fromField = "translation";
ROUTE88.toNode = "connector2";
ROUTE88.toField = "set_endpoint";
children[14] = ROUTE88;

ROUTE ROUTE89 = createNode("ROUTE");
ROUTE89.fromNode = "G1";
ROUTE89.fromField = "translation";
ROUTE89.toNode = "connector3";
ROUTE89.toField = "set_startpoint";
children[15] = ROUTE89;

ROUTE ROUTE90 = createNode("ROUTE");
ROUTE90.fromNode = "G4";
ROUTE90.fromField = "translation";
ROUTE90.toNode = "connector3";
ROUTE90.toField = "set_endpoint";
children[16] = ROUTE90;

}
