#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "arc1.x3d";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d";
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
               }]]></Script>
<TimeSensor DEF="CL1" cycleInterval="3" loop="true"></TimeSensor>
<ROUTE fromNode="CL1" fromField="cycleTime" toNode="MB1" toField="set_location"></ROUTE>
<ROUTE fromNode="CL1" fromField="fraction_changed" toNode="PI1" toField="set_fraction"></ROUTE>
<ROUTE fromNode="MB1" fromField="keyValue" toNode="PI1" toField="keyValue"></ROUTE>
<ROUTE fromNode="PI1" fromField="value_changed" toNode="node" toField="set_translation"></ROUTE>
<ROUTE fromNode="MB1" fromField="translation_changed" toNode="node" toField="set_translation"></ROUTE>
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
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }`)
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

ROUTE ROUTE32 = createNode("ROUTE");
ROUTE32.fromNode = "MB1";
ROUTE32.fromField = "translation_changed";
ROUTE32.toNode = "node";
ROUTE32.toField = "set_translation";
Transform14.children[8] = ROUTE32;

ProtoBody13.children = new MFNode();

ProtoBody13.children[0] = Transform14;

ProtoDeclare10.protoBody = ProtoBody13;

children[2] = ProtoDeclare10;

Transform Transform33 = createNode("Transform");
Transform33.DEF = "G1";
ProtoInstance ProtoInstance34 = createNode("ProtoInstance");
ProtoInstance34.name = "point";
Transform33.children = new MFNode();

Transform33.children[0] = ProtoInstance34;

children[3] = Transform33;

Transform Transform35 = createNode("Transform");
Transform35.DEF = "G2";
ProtoInstance ProtoInstance36 = createNode("ProtoInstance");
ProtoInstance36.name = "point";
Transform35.children = new MFNode();

Transform35.children[0] = ProtoInstance36;

children[4] = Transform35;

Transform Transform37 = createNode("Transform");
Transform37.DEF = "transC1";
Transform Transform38 = createNode("Transform");
Transform38.DEF = "rotscaleC1";
Shape Shape39 = createNode("Shape");
Appearance Appearance40 = createNode("Appearance");
Material Material41 = createNode("Material");
Material41.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material41.transparency = 0.5;
Appearance40.material = Material41;

Shape39.appearance = Appearance40;

Cylinder Cylinder42 = createNode("Cylinder");
Cylinder42.radius = 0.05;
Shape39.geometry = Cylinder42;

Transform38.child = new undefined();

Transform38.child[0] = Shape39;

Transform37.children = new MFNode();

Transform37.children[0] = Transform38;

children[5] = Transform37;

ProtoDeclare ProtoDeclare43 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
</ProtoDeclare>`);
ProtoDeclare43.name = "x3dconnector";
ProtoInterface ProtoInterface44 = createNode("ProtoInterface");
field field45 = createNode("field");
field45.name = "startnode";
field45.accessType = "initializeOnly";
field45.type = "SFNode";
ProtoInterface44.field = new MFNode();

ProtoInterface44.field[0] = field45;

field field46 = createNode("field");
field46.name = "endnode";
field46.accessType = "initializeOnly";
field46.type = "SFNode";
ProtoInterface44.field[1] = field46;

field field47 = createNode("field");
field47.name = "transnode";
field47.accessType = "inputOutput";
field47.type = "SFNode";
ProtoInterface44.field[2] = field47;

field field48 = createNode("field");
field48.name = "rotscalenode";
field48.accessType = "inputOutput";
field48.type = "SFNode";
ProtoInterface44.field[3] = field48;

field field49 = createNode("field");
field49.name = "set_startpoint";
field49.accessType = "inputOnly";
field49.type = "SFVec3f";
ProtoInterface44.field[4] = field49;

field field50 = createNode("field");
field50.name = "set_endpoint";
field50.accessType = "inputOnly";
field50.type = "SFVec3f";
ProtoInterface44.field[5] = field50;

ProtoDeclare43.protoInterface = ProtoInterface44;

ProtoBody ProtoBody51 = createNode("ProtoBody");
Script Script52 = createNode("Script");
Script52.DEF = "S1";
field field53 = createNode("field");
field53.name = "startnode";
field53.accessType = "initializeOnly";
field53.type = "SFNode";
Script52.field = new MFNode();

Script52.field[0] = field53;

field field54 = createNode("field");
field54.name = "endnode";
field54.accessType = "initializeOnly";
field54.type = "SFNode";
Script52.field[1] = field54;

field field55 = createNode("field");
field55.name = "transnode";
field55.accessType = "initializeOnly";
field55.type = "SFNode";
Script52.field[2] = field55;

field field56 = createNode("field");
field56.name = "rotscalenode";
field56.accessType = "initializeOnly";
field56.type = "SFNode";
Script52.field[3] = field56;

field field57 = createNode("field");
field57.name = "set_startpoint";
field57.accessType = "inputOnly";
field57.type = "SFVec3f";
Script52.field[4] = field57;

field field58 = createNode("field");
field58.name = "set_endpoint";
field58.accessType = "inputOnly";
field58.type = "SFVec3f";
Script52.field[5] = field58;

IS IS59 = createNode("IS");
connect connect60 = createNode("connect");
connect60.nodeField = "startnode";
connect60.protoField = "startnode";
IS59.connect = new MFNode();

IS59.connect[0] = connect60;

connect connect61 = createNode("connect");
connect61.nodeField = "endnode";
connect61.protoField = "endnode";
IS59.connect[1] = connect61;

connect connect62 = createNode("connect");
connect62.nodeField = "transnode";
connect62.protoField = "transnode";
IS59.connect[2] = connect62;

connect connect63 = createNode("connect");
connect63.nodeField = "rotscalenode";
connect63.protoField = "rotscalenode";
IS59.connect[3] = connect63;

connect connect64 = createNode("connect");
connect64.nodeField = "set_startpoint";
connect64.protoField = "set_startpoint";
IS59.connect[4] = connect64;

connect connect65 = createNode("connect");
connect65.nodeField = "set_endpoint";
connect65.protoField = "set_endpoint";
IS59.connect[5] = connect65;

Script52.iS = IS59;


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
ProtoBody51.children = new MFNode();

ProtoBody51.children[0] = Script52;

ProtoDeclare43.protoBody = ProtoBody51;

children[6] = ProtoDeclare43;

ProtoInstance ProtoInstance66 = createNode("ProtoInstance");
ProtoInstance66.name = "x3dconnector";
ProtoInstance66.DEF = "connector1";
fieldValue fieldValue67 = createNode("fieldValue");
fieldValue67.name = "startnode";
Transform Transform68 = createNode("Transform");
Transform68.USE = "G1";
fieldValue67.children = new MFNode();

fieldValue67.children[0] = Transform68;

ProtoInstance66.fieldValue = new MFNode();

ProtoInstance66.fieldValue[0] = fieldValue67;

fieldValue fieldValue69 = createNode("fieldValue");
fieldValue69.name = "endnode";
Transform Transform70 = createNode("Transform");
Transform70.USE = "G2";
fieldValue69.children = new MFNode();

fieldValue69.children[0] = Transform70;

ProtoInstance66.fieldValue[1] = fieldValue69;

fieldValue fieldValue71 = createNode("fieldValue");
fieldValue71.name = "transnode";
Transform Transform72 = createNode("Transform");
Transform72.USE = "transC1";
fieldValue71.children = new MFNode();

fieldValue71.children[0] = Transform72;

ProtoInstance66.fieldValue[2] = fieldValue71;

fieldValue fieldValue73 = createNode("fieldValue");
fieldValue73.name = "rotscalenode";
Transform Transform74 = createNode("Transform");
Transform74.USE = "rotscaleC1";
fieldValue73.children = new MFNode();

fieldValue73.children[0] = Transform74;

ProtoInstance66.fieldValue[3] = fieldValue73;

fieldValue fieldValue75 = createNode("fieldValue");
fieldValue75.name = "set_startpoint";
ProtoInstance66.fieldValue[4] = fieldValue75;

fieldValue fieldValue76 = createNode("fieldValue");
fieldValue76.name = "set_endpoint";
ProtoInstance66.fieldValue[5] = fieldValue76;

children[7] = ProtoInstance66;

ROUTE ROUTE77 = createNode("ROUTE");
ROUTE77.fromNode = "G1";
ROUTE77.fromField = "translation_changed";
ROUTE77.toNode = "connector1";
ROUTE77.toField = "set_startpoint";
children[8] = ROUTE77;

ROUTE ROUTE78 = createNode("ROUTE");
ROUTE78.fromNode = "G2";
ROUTE78.fromField = "translation_changed";
ROUTE78.toNode = "connector1";
ROUTE78.toField = "set_endpoint";
children[9] = ROUTE78;

}
