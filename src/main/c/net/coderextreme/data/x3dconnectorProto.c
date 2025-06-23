#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "x3dconnectorProto.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "Lost, Doug Sanden I think";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "created";
meta4.content = "Unknown";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "modified";
meta5.content = "July 30 2023";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "manual";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "identifier";
meta7.content = "https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d";
head1.meta[5] = meta7;

meta meta8 = createNode("meta");
meta8.name = "description";
meta8.content = "a generic proto to connect two objects";
head1.meta[6] = meta8;

meta meta9 = createNode("meta");
meta9.name = "license";
meta9.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[7] = meta9;

head = head1;

WorldInfo WorldInfo11 = createNode("WorldInfo");
WorldInfo11.title = "Connector Proto";
children = new MFNode();

children[0] = WorldInfo11;

Viewpoint Viewpoint12 = createNode("Viewpoint");
Viewpoint12.position = new SFVec3f(new float[0,0,5]);
Viewpoint12.description = "Only Viewpoint";
children[1] = Viewpoint12;

Background Background13 = createNode("Background");
Background13.skyColor = new MFColor(new float[0.4,0.4,0.4]);
children[2] = Background13;

Transform Transform14 = createNode("Transform");
Transform14.DEF = "G1";
Shape Shape15 = createNode("Shape");
Appearance Appearance16 = createNode("Appearance");
Material Material17 = createNode("Material");
Material17.diffuseColor = new SFColor(new float[0.7,0.2,0.2]);
Appearance16.material = Material17;

Shape15.appearance = Appearance16;

Sphere Sphere18 = createNode("Sphere");
Sphere18.radius = 0.1;
Shape15.geometry = Sphere18;

Transform14.child = new undefined();

Transform14.child[0] = Shape15;

PlaneSensor PlaneSensor19 = createNode("PlaneSensor");
PlaneSensor19.description = "Grab to move";
PlaneSensor19.DEF = "PS1";
Transform14.children[1] = PlaneSensor19;

ROUTE ROUTE20 = createNode("ROUTE");
ROUTE20.fromNode = "PS1";
ROUTE20.fromField = "translation_changed";
ROUTE20.toNode = "G1";
ROUTE20.toField = "set_translation";
Transform14.children[2] = ROUTE20;

children[3] = Transform14;

Transform Transform21 = createNode("Transform");
Transform21.DEF = "G2";
Transform21.translation = new SFVec3f(new float[1,-1,0.01]);
Shape Shape22 = createNode("Shape");
Appearance Appearance23 = createNode("Appearance");
Material Material24 = createNode("Material");
Material24.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance23.material = Material24;

Shape22.appearance = Appearance23;

Sphere Sphere25 = createNode("Sphere");
Sphere25.radius = 0.1;
Shape22.geometry = Sphere25;

Transform21.child = new undefined();

Transform21.child[0] = Shape22;

PlaneSensor PlaneSensor26 = createNode("PlaneSensor");
PlaneSensor26.description = "Grab to move";
PlaneSensor26.offset = new SFVec3f(new float[1,-1,0.01]);
PlaneSensor26.DEF = "PS2";
Transform21.children[1] = PlaneSensor26;

ROUTE ROUTE27 = createNode("ROUTE");
ROUTE27.fromNode = "PS2";
ROUTE27.fromField = "translation_changed";
ROUTE27.toNode = "G2";
ROUTE27.toField = "set_translation";
Transform21.children[2] = ROUTE27;

children[4] = Transform21;

Transform Transform28 = createNode("Transform");
Transform28.DEF = "G3";
Transform28.translation = new SFVec3f(new float[1,1,0.01]);
Shape Shape29 = createNode("Shape");
Appearance Appearance30 = createNode("Appearance");
Material Material31 = createNode("Material");
Material31.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance30.material = Material31;

Shape29.appearance = Appearance30;

Sphere Sphere32 = createNode("Sphere");
Sphere32.radius = 0.1;
Shape29.geometry = Sphere32;

Transform28.child = new undefined();

Transform28.child[0] = Shape29;

PlaneSensor PlaneSensor33 = createNode("PlaneSensor");
PlaneSensor33.description = "Grab to move";
PlaneSensor33.offset = new SFVec3f(new float[1,1,0.01]);
PlaneSensor33.DEF = "PS3";
Transform28.children[1] = PlaneSensor33;

ROUTE ROUTE34 = createNode("ROUTE");
ROUTE34.fromNode = "PS3";
ROUTE34.fromField = "translation_changed";
ROUTE34.toNode = "G3";
ROUTE34.toField = "set_translation";
Transform28.children[2] = ROUTE34;

children[5] = Transform28;

Transform Transform35 = createNode("Transform");
Transform35.DEF = "G4";
Transform35.translation = new SFVec3f(new float[-1,1,0.01]);
Shape Shape36 = createNode("Shape");
Appearance Appearance37 = createNode("Appearance");
Material Material38 = createNode("Material");
Material38.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance37.material = Material38;

Shape36.appearance = Appearance37;

Sphere Sphere39 = createNode("Sphere");
Sphere39.radius = 0.1;
Shape36.geometry = Sphere39;

Transform35.child = new undefined();

Transform35.child[0] = Shape36;

PlaneSensor PlaneSensor40 = createNode("PlaneSensor");
PlaneSensor40.description = "Grab to move";
PlaneSensor40.offset = new SFVec3f(new float[-1,1,0.01]);
PlaneSensor40.DEF = "PS4";
Transform35.children[1] = PlaneSensor40;

ROUTE ROUTE41 = createNode("ROUTE");
ROUTE41.fromNode = "PS4";
ROUTE41.fromField = "translation_changed";
ROUTE41.toNode = "G4";
ROUTE41.toField = "set_translation";
Transform35.children[2] = ROUTE41;

children[6] = Transform35;

Transform Transform42 = createNode("Transform");
Transform42.DEF = "transC1";
Transform Transform43 = createNode("Transform");
Transform43.DEF = "rotscaleC1";
Shape Shape44 = createNode("Shape");
Appearance Appearance45 = createNode("Appearance");
Material Material46 = createNode("Material");
Material46.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material46.transparency = 0.5;
Appearance45.material = Material46;

Shape44.appearance = Appearance45;

Cylinder Cylinder47 = createNode("Cylinder");
Cylinder47.radius = 0.05;
Shape44.geometry = Cylinder47;

Transform43.child = new undefined();

Transform43.child[0] = Shape44;

Transform42.children = new MFNode();

Transform42.children[0] = Transform43;

children[7] = Transform42;

Transform Transform48 = createNode("Transform");
Transform48.DEF = "transC2";
Transform Transform49 = createNode("Transform");
Transform49.DEF = "rotscaleC2";
Shape Shape50 = createNode("Shape");
Appearance Appearance51 = createNode("Appearance");
Material Material52 = createNode("Material");
Material52.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material52.transparency = 0.5;
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

Cylinder Cylinder53 = createNode("Cylinder");
Cylinder53.radius = 0.05;
Shape50.geometry = Cylinder53;

Transform49.child = new undefined();

Transform49.child[0] = Shape50;

Transform48.children = new MFNode();

Transform48.children[0] = Transform49;

children[8] = Transform48;

Transform Transform54 = createNode("Transform");
Transform54.DEF = "transC3";
Transform Transform55 = createNode("Transform");
Transform55.DEF = "rotscaleC3";
Shape Shape56 = createNode("Shape");
Appearance Appearance57 = createNode("Appearance");
Material Material58 = createNode("Material");
Material58.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material58.transparency = 0.5;
Appearance57.material = Material58;

Shape56.appearance = Appearance57;

Cylinder Cylinder59 = createNode("Cylinder");
Cylinder59.radius = 0.05;
Shape56.geometry = Cylinder59;

Transform55.child = new undefined();

Transform55.child[0] = Shape56;

Transform54.children = new MFNode();

Transform54.children[0] = Transform55;

children[9] = Transform54;

ProtoDeclare ProtoDeclare60 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="x3dconnector" ><ProtoInterface><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
<field name="endnode" accessType="initializeOnly" type="SFNode"></field>
<field name="transnode" accessType="initializeOnly" type="SFNode"></field>
<field name="rotscalenode" accessType="initializeOnly" type="SFNode"></field>
<field name="set_startpoint" accessType="inputOnly" type="SFVec3f"></field>
<field name="set_endpoint" accessType="inputOnly" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Script DEF="S1" directOutput="true"><field name="startnode" accessType="initializeOnly" type="SFNode"></field>
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
ProtoDeclare60.name = "x3dconnector";
ProtoInterface ProtoInterface61 = createNode("ProtoInterface");
field field62 = createNode("field");
field62.name = "startnode";
field62.accessType = "initializeOnly";
field62.type = "SFNode";
ProtoInterface61.field = new MFNode();

ProtoInterface61.field[0] = field62;

field field63 = createNode("field");
field63.name = "endnode";
field63.accessType = "initializeOnly";
field63.type = "SFNode";
ProtoInterface61.field[1] = field63;

field field64 = createNode("field");
field64.name = "transnode";
field64.accessType = "initializeOnly";
field64.type = "SFNode";
ProtoInterface61.field[2] = field64;

field field65 = createNode("field");
field65.name = "rotscalenode";
field65.accessType = "initializeOnly";
field65.type = "SFNode";
ProtoInterface61.field[3] = field65;

field field66 = createNode("field");
field66.name = "set_startpoint";
field66.accessType = "inputOnly";
field66.type = "SFVec3f";
ProtoInterface61.field[4] = field66;

field field67 = createNode("field");
field67.name = "set_endpoint";
field67.accessType = "inputOnly";
field67.type = "SFVec3f";
ProtoInterface61.field[5] = field67;

ProtoDeclare60.protoInterface = ProtoInterface61;

ProtoBody ProtoBody68 = createNode("ProtoBody");
Script Script69 = createNode("Script");
Script69.DEF = "S1";
Script69.directOutput = True;
field field70 = createNode("field");
field70.name = "startnode";
field70.accessType = "initializeOnly";
field70.type = "SFNode";
Script69.field = new MFNode();

Script69.field[0] = field70;

field field71 = createNode("field");
field71.name = "endnode";
field71.accessType = "initializeOnly";
field71.type = "SFNode";
Script69.field[1] = field71;

field field72 = createNode("field");
field72.name = "transnode";
field72.accessType = "initializeOnly";
field72.type = "SFNode";
Script69.field[2] = field72;

field field73 = createNode("field");
field73.name = "rotscalenode";
field73.accessType = "initializeOnly";
field73.type = "SFNode";
Script69.field[3] = field73;

field field74 = createNode("field");
field74.name = "set_startpoint";
field74.accessType = "inputOnly";
field74.type = "SFVec3f";
Script69.field[4] = field74;

field field75 = createNode("field");
field75.name = "set_endpoint";
field75.accessType = "inputOnly";
field75.type = "SFVec3f";
Script69.field[5] = field75;

IS IS76 = createNode("IS");
connect connect77 = createNode("connect");
connect77.nodeField = "startnode";
connect77.protoField = "startnode";
IS76.connect = new MFNode();

IS76.connect[0] = connect77;

connect connect78 = createNode("connect");
connect78.nodeField = "endnode";
connect78.protoField = "endnode";
IS76.connect[1] = connect78;

connect connect79 = createNode("connect");
connect79.nodeField = "transnode";
connect79.protoField = "transnode";
IS76.connect[2] = connect79;

connect connect80 = createNode("connect");
connect80.nodeField = "rotscalenode";
connect80.protoField = "rotscalenode";
IS76.connect[3] = connect80;

connect connect81 = createNode("connect");
connect81.nodeField = "set_startpoint";
connect81.protoField = "set_startpoint";
IS76.connect[4] = connect81;

connect connect82 = createNode("connect");
connect82.nodeField = "set_endpoint";
connect82.protoField = "set_endpoint";
IS76.connect[5] = connect82;

Script69.iS = IS76;


Script69.setSourceCode(`ecmascript:\n"+
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
ProtoBody68.children = new MFNode();

ProtoBody68.children[0] = Script69;

ProtoDeclare60.protoBody = ProtoBody68;

children[10] = ProtoDeclare60;

ProtoInstance ProtoInstance83 = createNode("ProtoInstance");
ProtoInstance83.name = "x3dconnector";
ProtoInstance83.DEF = "connector1";
fieldValue fieldValue84 = createNode("fieldValue");
fieldValue84.name = "startnode";
Transform Transform85 = createNode("Transform");
Transform85.USE = "G1";
fieldValue84.children = new MFNode();

fieldValue84.children[0] = Transform85;

ProtoInstance83.fieldValue = new MFNode();

ProtoInstance83.fieldValue[0] = fieldValue84;

fieldValue fieldValue86 = createNode("fieldValue");
fieldValue86.name = "endnode";
Transform Transform87 = createNode("Transform");
Transform87.USE = "G2";
fieldValue86.children = new MFNode();

fieldValue86.children[0] = Transform87;

ProtoInstance83.fieldValue[1] = fieldValue86;

fieldValue fieldValue88 = createNode("fieldValue");
fieldValue88.name = "transnode";
Transform Transform89 = createNode("Transform");
Transform89.USE = "transC1";
fieldValue88.children = new MFNode();

fieldValue88.children[0] = Transform89;

ProtoInstance83.fieldValue[2] = fieldValue88;

fieldValue fieldValue90 = createNode("fieldValue");
fieldValue90.name = "rotscalenode";
Transform Transform91 = createNode("Transform");
Transform91.USE = "rotscaleC1";
fieldValue90.children = new MFNode();

fieldValue90.children[0] = Transform91;

ProtoInstance83.fieldValue[3] = fieldValue90;

fieldValue fieldValue92 = createNode("fieldValue");
fieldValue92.name = "set_startpoint";
fieldValue92.value = "0 0 0";
ProtoInstance83.fieldValue[4] = fieldValue92;

fieldValue fieldValue93 = createNode("fieldValue");
fieldValue93.name = "set_endpoint";
fieldValue93.value = "0 0 0";
ProtoInstance83.fieldValue[5] = fieldValue93;

children[11] = ProtoInstance83;

ProtoInstance ProtoInstance94 = createNode("ProtoInstance");
ProtoInstance94.name = "x3dconnector";
ProtoInstance94.DEF = "connector2";
fieldValue fieldValue95 = createNode("fieldValue");
fieldValue95.name = "startnode";
Transform Transform96 = createNode("Transform");
Transform96.USE = "G1";
fieldValue95.children = new MFNode();

fieldValue95.children[0] = Transform96;

ProtoInstance94.fieldValue = new MFNode();

ProtoInstance94.fieldValue[0] = fieldValue95;

fieldValue fieldValue97 = createNode("fieldValue");
fieldValue97.name = "endnode";
Transform Transform98 = createNode("Transform");
Transform98.USE = "G3";
fieldValue97.children = new MFNode();

fieldValue97.children[0] = Transform98;

ProtoInstance94.fieldValue[1] = fieldValue97;

fieldValue fieldValue99 = createNode("fieldValue");
fieldValue99.name = "transnode";
Transform Transform100 = createNode("Transform");
Transform100.USE = "transC2";
fieldValue99.children = new MFNode();

fieldValue99.children[0] = Transform100;

ProtoInstance94.fieldValue[2] = fieldValue99;

fieldValue fieldValue101 = createNode("fieldValue");
fieldValue101.name = "rotscalenode";
Transform Transform102 = createNode("Transform");
Transform102.USE = "rotscaleC2";
fieldValue101.children = new MFNode();

fieldValue101.children[0] = Transform102;

ProtoInstance94.fieldValue[3] = fieldValue101;

fieldValue fieldValue103 = createNode("fieldValue");
fieldValue103.name = "set_startpoint";
fieldValue103.value = "0 0 0";
ProtoInstance94.fieldValue[4] = fieldValue103;

fieldValue fieldValue104 = createNode("fieldValue");
fieldValue104.name = "set_endpoint";
fieldValue104.value = "0 0 0";
ProtoInstance94.fieldValue[5] = fieldValue104;

children[12] = ProtoInstance94;

ProtoInstance ProtoInstance105 = createNode("ProtoInstance");
ProtoInstance105.name = "x3dconnector";
ProtoInstance105.DEF = "connector3";
fieldValue fieldValue106 = createNode("fieldValue");
fieldValue106.name = "startnode";
Transform Transform107 = createNode("Transform");
Transform107.USE = "G1";
fieldValue106.children = new MFNode();

fieldValue106.children[0] = Transform107;

ProtoInstance105.fieldValue = new MFNode();

ProtoInstance105.fieldValue[0] = fieldValue106;

fieldValue fieldValue108 = createNode("fieldValue");
fieldValue108.name = "endnode";
Transform Transform109 = createNode("Transform");
Transform109.USE = "G4";
fieldValue108.children = new MFNode();

fieldValue108.children[0] = Transform109;

ProtoInstance105.fieldValue[1] = fieldValue108;

fieldValue fieldValue110 = createNode("fieldValue");
fieldValue110.name = "transnode";
Transform Transform111 = createNode("Transform");
Transform111.USE = "transC3";
fieldValue110.children = new MFNode();

fieldValue110.children[0] = Transform111;

ProtoInstance105.fieldValue[2] = fieldValue110;

fieldValue fieldValue112 = createNode("fieldValue");
fieldValue112.name = "rotscalenode";
Transform Transform113 = createNode("Transform");
Transform113.USE = "rotscaleC3";
fieldValue112.children = new MFNode();

fieldValue112.children[0] = Transform113;

ProtoInstance105.fieldValue[3] = fieldValue112;

fieldValue fieldValue114 = createNode("fieldValue");
fieldValue114.name = "set_startpoint";
fieldValue114.value = "0 0 0";
ProtoInstance105.fieldValue[4] = fieldValue114;

fieldValue fieldValue115 = createNode("fieldValue");
fieldValue115.name = "set_endpoint";
fieldValue115.value = "0 0 0";
ProtoInstance105.fieldValue[5] = fieldValue115;

children[13] = ProtoInstance105;

ROUTE ROUTE116 = createNode("ROUTE");
ROUTE116.fromNode = "G1";
ROUTE116.fromField = "translation_changed";
ROUTE116.toNode = "connector1";
ROUTE116.toField = "set_startpoint";
children[14] = ROUTE116;

ROUTE ROUTE117 = createNode("ROUTE");
ROUTE117.fromNode = "G2";
ROUTE117.fromField = "translation_changed";
ROUTE117.toNode = "connector1";
ROUTE117.toField = "set_endpoint";
children[15] = ROUTE117;

ROUTE ROUTE118 = createNode("ROUTE");
ROUTE118.fromNode = "G1";
ROUTE118.fromField = "translation_changed";
ROUTE118.toNode = "connector2";
ROUTE118.toField = "set_startpoint";
children[16] = ROUTE118;

ROUTE ROUTE119 = createNode("ROUTE");
ROUTE119.fromNode = "G3";
ROUTE119.fromField = "translation_changed";
ROUTE119.toNode = "connector2";
ROUTE119.toField = "set_endpoint";
children[17] = ROUTE119;

ROUTE ROUTE120 = createNode("ROUTE");
ROUTE120.fromNode = "G1";
ROUTE120.fromField = "translation_changed";
ROUTE120.toNode = "connector3";
ROUTE120.toField = "set_startpoint";
children[18] = ROUTE120;

ROUTE ROUTE121 = createNode("ROUTE");
ROUTE121.fromNode = "G4";
ROUTE121.fromField = "translation_changed";
ROUTE121.toNode = "connector3";
ROUTE121.toField = "set_endpoint";
children[19] = ROUTE121;

}
