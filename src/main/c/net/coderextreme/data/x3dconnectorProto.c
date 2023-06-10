#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "3.3";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "x3dconnectorProto";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/x3dconnectorProto.x3d";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "a generic proto to connect two objects";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "license";
meta7.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[5] = meta7;

head = head1;

WorldInfo WorldInfo9 = createNode("WorldInfo");
WorldInfo9.title = "Connector Proto";
children = new MFNode();

children[0] = WorldInfo9;

Viewpoint Viewpoint10 = createNode("Viewpoint");
Viewpoint10.position = new SFVec3f(new float[0,0,5]);
Viewpoint10.description = "Only Viewpoint";
children[1] = Viewpoint10;

Background Background11 = createNode("Background");
Background11.skyColor = new MFColor(new float[0.4,0.4,0.4]);
children[2] = Background11;

Transform Transform12 = createNode("Transform");
Transform12.DEF = "G1";
Shape Shape13 = createNode("Shape");
Appearance Appearance14 = createNode("Appearance");
Material Material15 = createNode("Material");
Material15.diffuseColor = new SFColor(new float[0.7,0.2,0.2]);
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

Sphere Sphere16 = createNode("Sphere");
Sphere16.radius = 0.1;
Shape13.geometry = Sphere16;

Transform12.children = new MFNode();

Transform12.children[0] = Shape13;

PlaneSensor PlaneSensor17 = createNode("PlaneSensor");
PlaneSensor17.description = "Grab to move";
PlaneSensor17.DEF = "PS1";
Transform12.children[1] = PlaneSensor17;

ROUTE ROUTE18 = createNode("ROUTE");
ROUTE18.fromNode = "PS1";
ROUTE18.fromField = "translation_changed";
ROUTE18.toNode = "G1";
ROUTE18.toField = "set_translation";
Transform12.children[2] = ROUTE18;

children[3] = Transform12;

Transform Transform19 = createNode("Transform");
Transform19.DEF = "G2";
Transform19.translation = new SFVec3f(new float[1,-1,0.01]);
Shape Shape20 = createNode("Shape");
Appearance Appearance21 = createNode("Appearance");
Material Material22 = createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

Sphere Sphere23 = createNode("Sphere");
Sphere23.radius = 0.1;
Shape20.geometry = Sphere23;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

PlaneSensor PlaneSensor24 = createNode("PlaneSensor");
PlaneSensor24.description = "Grab to move";
PlaneSensor24.offset = new SFVec3f(new float[1,-1,0.01]);
PlaneSensor24.DEF = "PS2";
Transform19.children[1] = PlaneSensor24;

ROUTE ROUTE25 = createNode("ROUTE");
ROUTE25.fromNode = "PS2";
ROUTE25.fromField = "translation_changed";
ROUTE25.toNode = "G2";
ROUTE25.toField = "set_translation";
Transform19.children[2] = ROUTE25;

children[4] = Transform19;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "G3";
Transform26.translation = new SFVec3f(new float[1,1,0.01]);
Shape Shape27 = createNode("Shape");
Appearance Appearance28 = createNode("Appearance");
Material Material29 = createNode("Material");
Material29.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

Sphere Sphere30 = createNode("Sphere");
Sphere30.radius = 0.1;
Shape27.geometry = Sphere30;

Transform26.children = new MFNode();

Transform26.children[0] = Shape27;

PlaneSensor PlaneSensor31 = createNode("PlaneSensor");
PlaneSensor31.description = "Grab to move";
PlaneSensor31.offset = new SFVec3f(new float[1,1,0.01]);
PlaneSensor31.DEF = "PS3";
Transform26.children[1] = PlaneSensor31;

ROUTE ROUTE32 = createNode("ROUTE");
ROUTE32.fromNode = "PS3";
ROUTE32.fromField = "translation_changed";
ROUTE32.toNode = "G3";
ROUTE32.toField = "set_translation";
Transform26.children[2] = ROUTE32;

children[5] = Transform26;

Transform Transform33 = createNode("Transform");
Transform33.DEF = "G4";
Transform33.translation = new SFVec3f(new float[-1,1,0.01]);
Shape Shape34 = createNode("Shape");
Appearance Appearance35 = createNode("Appearance");
Material Material36 = createNode("Material");
Material36.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance35.material = Material36;

Shape34.appearance = Appearance35;

Sphere Sphere37 = createNode("Sphere");
Sphere37.radius = 0.1;
Shape34.geometry = Sphere37;

Transform33.children = new MFNode();

Transform33.children[0] = Shape34;

PlaneSensor PlaneSensor38 = createNode("PlaneSensor");
PlaneSensor38.description = "Grab to move";
PlaneSensor38.offset = new SFVec3f(new float[-1,1,0.01]);
PlaneSensor38.DEF = "PS4";
Transform33.children[1] = PlaneSensor38;

ROUTE ROUTE39 = createNode("ROUTE");
ROUTE39.fromNode = "PS4";
ROUTE39.fromField = "translation_changed";
ROUTE39.toNode = "G4";
ROUTE39.toField = "set_translation";
Transform33.children[2] = ROUTE39;

children[6] = Transform33;

Transform Transform40 = createNode("Transform");
Transform40.DEF = "transC1";
Transform Transform41 = createNode("Transform");
Transform41.DEF = "rotscaleC1";
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

Transform41.children = new MFNode();

Transform41.children[0] = Shape42;

Transform40.children = new MFNode();

Transform40.children[0] = Transform41;

children[7] = Transform40;

Transform Transform46 = createNode("Transform");
Transform46.DEF = "transC2";
Transform Transform47 = createNode("Transform");
Transform47.DEF = "rotscaleC2";
Shape Shape48 = createNode("Shape");
Appearance Appearance49 = createNode("Appearance");
Material Material50 = createNode("Material");
Material50.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material50.transparency = 0.5;
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

Cylinder Cylinder51 = createNode("Cylinder");
Cylinder51.radius = 0.05;
Shape48.geometry = Cylinder51;

Transform47.children = new MFNode();

Transform47.children[0] = Shape48;

Transform46.children = new MFNode();

Transform46.children[0] = Transform47;

children[8] = Transform46;

Transform Transform52 = createNode("Transform");
Transform52.DEF = "transC3";
Transform Transform53 = createNode("Transform");
Transform53.DEF = "rotscaleC3";
Shape Shape54 = createNode("Shape");
Appearance Appearance55 = createNode("Appearance");
Material Material56 = createNode("Material");
Material56.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material56.transparency = 0.5;
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

Cylinder Cylinder57 = createNode("Cylinder");
Cylinder57.radius = 0.05;
Shape54.geometry = Cylinder57;

Transform53.children = new MFNode();

Transform53.children[0] = Shape54;

Transform52.children = new MFNode();

Transform52.children[0] = Transform53;

children[9] = Transform52;

ProtoDeclare ProtoDeclare58 = browser.createX3DFromString(`<?xml version="1.0" encoding="UTF-8"?>
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
</ProtoDeclare>`);
ProtoDeclare58.name = "x3dconnector";
ProtoInterface ProtoInterface59 = createNode("ProtoInterface");
field field60 = createNode("field");
field60.name = "startnode";
field60.accessType = "initializeOnly";
field60.type = "SFNode";
ProtoInterface59.field = new MFNode();

ProtoInterface59.field[0] = field60;

field field61 = createNode("field");
field61.name = "endnode";
field61.accessType = "initializeOnly";
field61.type = "SFNode";
ProtoInterface59.field[1] = field61;

field field62 = createNode("field");
field62.name = "transnode";
field62.accessType = "initializeOnly";
field62.type = "SFNode";
ProtoInterface59.field[2] = field62;

field field63 = createNode("field");
field63.name = "rotscalenode";
field63.accessType = "initializeOnly";
field63.type = "SFNode";
ProtoInterface59.field[3] = field63;

field field64 = createNode("field");
field64.name = "set_startpoint";
field64.accessType = "inputOnly";
field64.type = "SFVec3f";
ProtoInterface59.field[4] = field64;

field field65 = createNode("field");
field65.name = "set_endpoint";
field65.accessType = "inputOnly";
field65.type = "SFVec3f";
ProtoInterface59.field[5] = field65;

ProtoDeclare58.protoInterface = ProtoInterface59;

ProtoBody ProtoBody66 = createNode("ProtoBody");
Script Script67 = createNode("Script");
Script67.DEF = "S1";
field field68 = createNode("field");
field68.name = "startnode";
field68.accessType = "initializeOnly";
field68.type = "SFNode";
Script67.field = new MFNode();

Script67.field[0] = field68;

field field69 = createNode("field");
field69.name = "endnode";
field69.accessType = "initializeOnly";
field69.type = "SFNode";
Script67.field[1] = field69;

field field70 = createNode("field");
field70.name = "transnode";
field70.accessType = "initializeOnly";
field70.type = "SFNode";
Script67.field[2] = field70;

field field71 = createNode("field");
field71.name = "rotscalenode";
field71.accessType = "initializeOnly";
field71.type = "SFNode";
Script67.field[3] = field71;

field field72 = createNode("field");
field72.name = "set_startpoint";
field72.accessType = "inputOnly";
field72.type = "SFVec3f";
Script67.field[4] = field72;

field field73 = createNode("field");
field73.name = "set_endpoint";
field73.accessType = "inputOnly";
field73.type = "SFVec3f";
Script67.field[5] = field73;

IS IS74 = createNode("IS");
connect connect75 = createNode("connect");
connect75.nodeField = "startnode";
connect75.protoField = "startnode";
IS74.connect = new MFNode();

IS74.connect[0] = connect75;

connect connect76 = createNode("connect");
connect76.nodeField = "endnode";
connect76.protoField = "endnode";
IS74.connect[1] = connect76;

connect connect77 = createNode("connect");
connect77.nodeField = "transnode";
connect77.protoField = "transnode";
IS74.connect[2] = connect77;

connect connect78 = createNode("connect");
connect78.nodeField = "rotscalenode";
connect78.protoField = "rotscalenode";
IS74.connect[3] = connect78;

connect connect79 = createNode("connect");
connect79.nodeField = "set_startpoint";
connect79.protoField = "set_startpoint";
IS74.connect[4] = connect79;

connect connect80 = createNode("connect");
connect80.nodeField = "set_endpoint";
connect80.protoField = "set_endpoint";
IS74.connect[5] = connect80;

Script67.iS = IS74;


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
ProtoBody66.children = new MFNode();

ProtoBody66.children[0] = Script67;

ProtoDeclare58.protoBody = ProtoBody66;

children[10] = ProtoDeclare58;

ProtoInstance ProtoInstance81 = createNode("ProtoInstance");
ProtoInstance81.name = "x3dconnector";
ProtoInstance81.DEF = "connector1";
fieldValue fieldValue82 = createNode("fieldValue");
fieldValue82.name = "startnode";
Transform Transform83 = createNode("Transform");
Transform83.USE = "G1";
fieldValue82.children = new MFNode();

fieldValue82.children[0] = Transform83;

ProtoInstance81.fieldValue = new MFNode();

ProtoInstance81.fieldValue[0] = fieldValue82;

fieldValue fieldValue84 = createNode("fieldValue");
fieldValue84.name = "endnode";
Transform Transform85 = createNode("Transform");
Transform85.USE = "G2";
fieldValue84.children = new MFNode();

fieldValue84.children[0] = Transform85;

ProtoInstance81.fieldValue[1] = fieldValue84;

fieldValue fieldValue86 = createNode("fieldValue");
fieldValue86.name = "transnode";
Transform Transform87 = createNode("Transform");
Transform87.USE = "transC1";
fieldValue86.children = new MFNode();

fieldValue86.children[0] = Transform87;

ProtoInstance81.fieldValue[2] = fieldValue86;

fieldValue fieldValue88 = createNode("fieldValue");
fieldValue88.name = "rotscalenode";
Transform Transform89 = createNode("Transform");
Transform89.USE = "rotscaleC1";
fieldValue88.children = new MFNode();

fieldValue88.children[0] = Transform89;

ProtoInstance81.fieldValue[3] = fieldValue88;

fieldValue fieldValue90 = createNode("fieldValue");
fieldValue90.name = "set_startpoint";
fieldValue90.value = "0 0 0";
ProtoInstance81.fieldValue[4] = fieldValue90;

fieldValue fieldValue91 = createNode("fieldValue");
fieldValue91.name = "set_endpoint";
fieldValue91.value = "0 0 0";
ProtoInstance81.fieldValue[5] = fieldValue91;

children[11] = ProtoInstance81;

ProtoInstance ProtoInstance92 = createNode("ProtoInstance");
ProtoInstance92.name = "x3dconnector";
ProtoInstance92.DEF = "connector2";
fieldValue fieldValue93 = createNode("fieldValue");
fieldValue93.name = "startnode";
Transform Transform94 = createNode("Transform");
Transform94.USE = "G1";
fieldValue93.children = new MFNode();

fieldValue93.children[0] = Transform94;

ProtoInstance92.fieldValue = new MFNode();

ProtoInstance92.fieldValue[0] = fieldValue93;

fieldValue fieldValue95 = createNode("fieldValue");
fieldValue95.name = "endnode";
Transform Transform96 = createNode("Transform");
Transform96.USE = "G3";
fieldValue95.children = new MFNode();

fieldValue95.children[0] = Transform96;

ProtoInstance92.fieldValue[1] = fieldValue95;

fieldValue fieldValue97 = createNode("fieldValue");
fieldValue97.name = "transnode";
Transform Transform98 = createNode("Transform");
Transform98.USE = "transC2";
fieldValue97.children = new MFNode();

fieldValue97.children[0] = Transform98;

ProtoInstance92.fieldValue[2] = fieldValue97;

fieldValue fieldValue99 = createNode("fieldValue");
fieldValue99.name = "rotscalenode";
Transform Transform100 = createNode("Transform");
Transform100.USE = "rotscaleC2";
fieldValue99.children = new MFNode();

fieldValue99.children[0] = Transform100;

ProtoInstance92.fieldValue[3] = fieldValue99;

fieldValue fieldValue101 = createNode("fieldValue");
fieldValue101.name = "set_startpoint";
fieldValue101.value = "0 0 0";
ProtoInstance92.fieldValue[4] = fieldValue101;

fieldValue fieldValue102 = createNode("fieldValue");
fieldValue102.name = "set_endpoint";
fieldValue102.value = "0 0 0";
ProtoInstance92.fieldValue[5] = fieldValue102;

children[12] = ProtoInstance92;

ProtoInstance ProtoInstance103 = createNode("ProtoInstance");
ProtoInstance103.name = "x3dconnector";
ProtoInstance103.DEF = "connector3";
fieldValue fieldValue104 = createNode("fieldValue");
fieldValue104.name = "startnode";
Transform Transform105 = createNode("Transform");
Transform105.USE = "G1";
fieldValue104.children = new MFNode();

fieldValue104.children[0] = Transform105;

ProtoInstance103.fieldValue = new MFNode();

ProtoInstance103.fieldValue[0] = fieldValue104;

fieldValue fieldValue106 = createNode("fieldValue");
fieldValue106.name = "endnode";
Transform Transform107 = createNode("Transform");
Transform107.USE = "G4";
fieldValue106.children = new MFNode();

fieldValue106.children[0] = Transform107;

ProtoInstance103.fieldValue[1] = fieldValue106;

fieldValue fieldValue108 = createNode("fieldValue");
fieldValue108.name = "transnode";
Transform Transform109 = createNode("Transform");
Transform109.USE = "transC3";
fieldValue108.children = new MFNode();

fieldValue108.children[0] = Transform109;

ProtoInstance103.fieldValue[2] = fieldValue108;

fieldValue fieldValue110 = createNode("fieldValue");
fieldValue110.name = "rotscalenode";
Transform Transform111 = createNode("Transform");
Transform111.USE = "rotscaleC3";
fieldValue110.children = new MFNode();

fieldValue110.children[0] = Transform111;

ProtoInstance103.fieldValue[3] = fieldValue110;

fieldValue fieldValue112 = createNode("fieldValue");
fieldValue112.name = "set_startpoint";
fieldValue112.value = "0 0 0";
ProtoInstance103.fieldValue[4] = fieldValue112;

fieldValue fieldValue113 = createNode("fieldValue");
fieldValue113.name = "set_endpoint";
fieldValue113.value = "0 0 0";
ProtoInstance103.fieldValue[5] = fieldValue113;

children[13] = ProtoInstance103;

ROUTE ROUTE114 = createNode("ROUTE");
ROUTE114.fromNode = "G1";
ROUTE114.fromField = "translation_changed";
ROUTE114.toNode = "connector1";
ROUTE114.toField = "set_startpoint";
children[14] = ROUTE114;

ROUTE ROUTE115 = createNode("ROUTE");
ROUTE115.fromNode = "G2";
ROUTE115.fromField = "translation_changed";
ROUTE115.toNode = "connector1";
ROUTE115.toField = "set_endpoint";
children[15] = ROUTE115;

ROUTE ROUTE116 = createNode("ROUTE");
ROUTE116.fromNode = "G1";
ROUTE116.fromField = "translation_changed";
ROUTE116.toNode = "connector2";
ROUTE116.toField = "set_startpoint";
children[16] = ROUTE116;

ROUTE ROUTE117 = createNode("ROUTE");
ROUTE117.fromNode = "G3";
ROUTE117.fromField = "translation_changed";
ROUTE117.toNode = "connector2";
ROUTE117.toField = "set_endpoint";
children[17] = ROUTE117;

ROUTE ROUTE118 = createNode("ROUTE");
ROUTE118.fromNode = "G1";
ROUTE118.fromField = "translation_changed";
ROUTE118.toNode = "connector3";
ROUTE118.toField = "set_startpoint";
children[18] = ROUTE118;

ROUTE ROUTE119 = createNode("ROUTE");
ROUTE119.fromNode = "G4";
ROUTE119.fromField = "translation_changed";
ROUTE119.toNode = "connector3";
ROUTE119.toField = "set_endpoint";
children[19] = ROUTE119;

}
