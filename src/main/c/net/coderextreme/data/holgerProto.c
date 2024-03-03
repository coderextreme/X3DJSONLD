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
meta5.content = "Sat, 30 Dec 2023 10:14:10 GMT";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "generator";
meta6.content = "manual";
head1.meta[4] = meta6;

meta meta7 = createNode("meta");
meta7.name = "generator";
meta7.content = "x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy";
head1.meta[5] = meta7;

head = head1;

ProtoDeclare ProtoDeclare9 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="x3dconnector" ><ProtoInterface><field accessType="initializeOnly" type="SFNode" name="startnode"></field>
<field accessType="initializeOnly" type="SFNode" name="endnode"></field>
<field accessType="initializeOnly" type="SFNode" name="transnode"></field>
<field accessType="initializeOnly" type="SFNode" name="rotscalenode"></field>
<field accessType="inputOnly" type="SFVec3f" name="set_startpoint"></field>
<field accessType="inputOnly" type="SFVec3f" name="set_endpoint"></field>
</ProtoInterface>
<ProtoBody><Script DEF="S1" directOutput="true"><field accessType="initializeOnly" type="SFNode" name="startnode"></field>
<field accessType="initializeOnly" type="SFNode" name="endnode"></field>
<field accessType="initializeOnly" type="SFNode" name="transnode"></field>
<field accessType="initializeOnly" type="SFNode" name="rotscalenode"></field>
<field accessType="inputOnly" type="SFVec3f" name="set_startpoint"></field>
<field accessType="inputOnly" type="SFVec3f" name="set_endpoint"></field>
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
        }]]><IS><connect nodeField="startnode" protoField="startnode"></connect>
<connect nodeField="endnode" protoField="endnode"></connect>
<connect nodeField="transnode" protoField="transnode"></connect>
<connect nodeField="rotscalenode" protoField="rotscalenode"></connect>
<connect nodeField="set_startpoint" protoField="set_startpoint"></connect>
<connect nodeField="set_endpoint" protoField="set_endpoint"></connect>
</IS>
</Script>
</ProtoBody>
</ProtoDeclare>`);
ProtoDeclare9.name = "x3dconnector";
ProtoInterface ProtoInterface10 = createNode("ProtoInterface");
field field11 = createNode("field");
field11.accessType = "initializeOnly";
field11.type = "SFNode";
field11.name = "startnode";
ProtoInterface10.field = new MFNode();

ProtoInterface10.field[0] = field11;

field field12 = createNode("field");
field12.accessType = "initializeOnly";
field12.type = "SFNode";
field12.name = "endnode";
ProtoInterface10.field[1] = field12;

field field13 = createNode("field");
field13.accessType = "initializeOnly";
field13.type = "SFNode";
field13.name = "transnode";
ProtoInterface10.field[2] = field13;

field field14 = createNode("field");
field14.accessType = "initializeOnly";
field14.type = "SFNode";
field14.name = "rotscalenode";
ProtoInterface10.field[3] = field14;

field field15 = createNode("field");
field15.accessType = "inputOnly";
field15.type = "SFVec3f";
field15.name = "set_startpoint";
ProtoInterface10.field[4] = field15;

field field16 = createNode("field");
field16.accessType = "inputOnly";
field16.type = "SFVec3f";
field16.name = "set_endpoint";
ProtoInterface10.field[5] = field16;

ProtoDeclare9.protoInterface = ProtoInterface10;

ProtoBody ProtoBody17 = createNode("ProtoBody");
Script Script18 = createNode("Script");
Script18.DEF = "S1";
Script18.directOutput = True;
field field19 = createNode("field");
field19.accessType = "initializeOnly";
field19.type = "SFNode";
field19.name = "startnode";
Script18.field = new MFNode();

Script18.field[0] = field19;

field field20 = createNode("field");
field20.accessType = "initializeOnly";
field20.type = "SFNode";
field20.name = "endnode";
Script18.field[1] = field20;

field field21 = createNode("field");
field21.accessType = "initializeOnly";
field21.type = "SFNode";
field21.name = "transnode";
Script18.field[2] = field21;

field field22 = createNode("field");
field22.accessType = "initializeOnly";
field22.type = "SFNode";
field22.name = "rotscalenode";
Script18.field[3] = field22;

field field23 = createNode("field");
field23.accessType = "inputOnly";
field23.type = "SFVec3f";
field23.name = "set_startpoint";
Script18.field[4] = field23;

field field24 = createNode("field");
field24.accessType = "inputOnly";
field24.type = "SFVec3f";
field24.name = "set_endpoint";
Script18.field[5] = field24;


Script18.setSourceCode(`ecmascript:\n"+
"        function recompute(startpoint,endpoint){\n"+
"	    if (typeof endpoint === 'undefined') {\n"+
"		return;\n"+
"	    }\n"+
"            var dif = endpoint.subtract(startpoint);\n"+
"            var dist = dif.length()*0.5;\n"+
"            var dif2 = dif.multiply(0.5);\n"+
"            var norm = dif.normalize();\n"+
"            var transl = startpoint.add(dif2);\n"+
"	    if (typeof Quaternion !== 'undefined') {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)\n"+
"		    };\n"+
"	    } else {\n"+
"		    return {\n"+
"			    scale : new SFVec3f(1.0,dist,1.0),\n"+
"			    translation : transl,\n"+
"			    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)\n"+
"		    };\n"+
"	    }\n"+
"	}\n"+
"	function recompute_and_route(startpoint, endpoint) {\n"+
"	      var trafo = recompute(startpoint, endpoint);\n"+
"	      if (trafo) {\n"+
"		      transnode.translation = trafo.translation;\n"+
"		      rotscalenode.rotation = trafo.rotation;\n"+
"		      rotscalenode.scale = trafo.scale;\n"+
"	      }\n"+
"	}\n"+
"        function initialize(){\n"+
"            recompute_and_route(startnode.translation,endnode.translation);\n"+
"        }\n"+
"        function set_startpoint(val,t){\n"+
"            recompute_and_route(val,endnode.translation);\n"+
"        }\n"+
"        function set_endpoint(val,t){\n"+
"            recompute_and_route(startnode.translation,val);\n"+
"        }`)
IS IS25 = createNode("IS");
connect connect26 = createNode("connect");
connect26.nodeField = "startnode";
connect26.protoField = "startnode";
IS25.connect = new MFNode();

IS25.connect[0] = connect26;

connect connect27 = createNode("connect");
connect27.nodeField = "endnode";
connect27.protoField = "endnode";
IS25.connect[1] = connect27;

connect connect28 = createNode("connect");
connect28.nodeField = "transnode";
connect28.protoField = "transnode";
IS25.connect[2] = connect28;

connect connect29 = createNode("connect");
connect29.nodeField = "rotscalenode";
connect29.protoField = "rotscalenode";
IS25.connect[3] = connect29;

connect connect30 = createNode("connect");
connect30.nodeField = "set_startpoint";
connect30.protoField = "set_startpoint";
IS25.connect[4] = connect30;

connect connect31 = createNode("connect");
connect31.nodeField = "set_endpoint";
connect31.protoField = "set_endpoint";
IS25.connect[5] = connect31;

Script18.iS = IS25;

ProtoBody17.children = new MFNode();

ProtoBody17.children[0] = Script18;

ProtoDeclare9.protoBody = ProtoBody17;

children = new MFNode();

children[0] = ProtoDeclare9;

WorldInfo WorldInfo32 = createNode("WorldInfo");
WorldInfo32.title = "Connector Proto";
children[1] = WorldInfo32;

Viewpoint Viewpoint33 = createNode("Viewpoint");
Viewpoint33.description = "Only Viewpoint";
Viewpoint33.position = new SFVec3f(new float[0,0,5]);
children[2] = Viewpoint33;

Background Background34 = createNode("Background");
Background34.skyColor = new MFColor(new float[0.4,0.4,0.4]);
children[3] = Background34;

Transform Transform35 = createNode("Transform");
Transform35.DEF = "G1";
Shape Shape36 = createNode("Shape");
Appearance Appearance37 = createNode("Appearance");
Material Material38 = createNode("Material");
Material38.diffuseColor = new SFColor(new float[0.7,0.2,0.2]);
Appearance37.material = Material38;

Shape36.appearance = Appearance37;

Sphere Sphere39 = createNode("Sphere");
Sphere39.radius = 0.1;
Shape36.geometry = Sphere39;

Transform35.child = new undefined();

Transform35.child[0] = Shape36;

PlaneSensor PlaneSensor40 = createNode("PlaneSensor");
PlaneSensor40.DEF = "PS1";
PlaneSensor40.description = "Grab to move";
Transform35.children[1] = PlaneSensor40;

children[4] = Transform35;

Transform Transform41 = createNode("Transform");
Transform41.DEF = "G2";
Transform41.translation = new SFVec3f(new float[1,-1,0.01]);
Shape Shape42 = createNode("Shape");
Appearance Appearance43 = createNode("Appearance");
Material Material44 = createNode("Material");
Material44.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

Sphere Sphere45 = createNode("Sphere");
Sphere45.radius = 0.1;
Shape42.geometry = Sphere45;

Transform41.child = new undefined();

Transform41.child[0] = Shape42;

PlaneSensor PlaneSensor46 = createNode("PlaneSensor");
PlaneSensor46.DEF = "PS2";
PlaneSensor46.description = "Grab to move";
PlaneSensor46.offset = new SFVec3f(new float[1,-1,0.01]);
Transform41.children[1] = PlaneSensor46;

children[5] = Transform41;

Transform Transform47 = createNode("Transform");
Transform47.DEF = "G3";
Transform47.translation = new SFVec3f(new float[1,1,0.01]);
Shape Shape48 = createNode("Shape");
Appearance Appearance49 = createNode("Appearance");
Material Material50 = createNode("Material");
Material50.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

Sphere Sphere51 = createNode("Sphere");
Sphere51.radius = 0.1;
Shape48.geometry = Sphere51;

Transform47.child = new undefined();

Transform47.child[0] = Shape48;

PlaneSensor PlaneSensor52 = createNode("PlaneSensor");
PlaneSensor52.DEF = "PS3";
PlaneSensor52.description = "Grab to move";
PlaneSensor52.offset = new SFVec3f(new float[1,1,0.01]);
Transform47.children[1] = PlaneSensor52;

children[6] = Transform47;

Transform Transform53 = createNode("Transform");
Transform53.DEF = "G4";
Transform53.translation = new SFVec3f(new float[-1,1,0.01]);
Shape Shape54 = createNode("Shape");
Appearance Appearance55 = createNode("Appearance");
Material Material56 = createNode("Material");
Material56.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

Sphere Sphere57 = createNode("Sphere");
Sphere57.radius = 0.1;
Shape54.geometry = Sphere57;

Transform53.child = new undefined();

Transform53.child[0] = Shape54;

PlaneSensor PlaneSensor58 = createNode("PlaneSensor");
PlaneSensor58.DEF = "PS4";
PlaneSensor58.description = "Grab to move";
PlaneSensor58.offset = new SFVec3f(new float[-1,1,0.01]);
Transform53.children[1] = PlaneSensor58;

children[7] = Transform53;

Transform Transform59 = createNode("Transform");
Transform59.DEF = "transC1";
Transform Transform60 = createNode("Transform");
Transform60.DEF = "rotscaleC1";
Shape Shape61 = createNode("Shape");
Appearance Appearance62 = createNode("Appearance");
Material Material63 = createNode("Material");
Material63.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material63.transparency = 0.5;
Appearance62.material = Material63;

Shape61.appearance = Appearance62;

Cylinder Cylinder64 = createNode("Cylinder");
Cylinder64.radius = 0.05;
Shape61.geometry = Cylinder64;

Transform60.child = new undefined();

Transform60.child[0] = Shape61;

Transform59.children = new MFNode();

Transform59.children[0] = Transform60;

children[8] = Transform59;

Transform Transform65 = createNode("Transform");
Transform65.DEF = "transC2";
Transform Transform66 = createNode("Transform");
Transform66.DEF = "rotscaleC2";
Shape Shape67 = createNode("Shape");
Appearance Appearance68 = createNode("Appearance");
Material Material69 = createNode("Material");
Material69.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material69.transparency = 0.5;
Appearance68.material = Material69;

Shape67.appearance = Appearance68;

Cylinder Cylinder70 = createNode("Cylinder");
Cylinder70.radius = 0.05;
Shape67.geometry = Cylinder70;

Transform66.child = new undefined();

Transform66.child[0] = Shape67;

Transform65.children = new MFNode();

Transform65.children[0] = Transform66;

children[9] = Transform65;

Transform Transform71 = createNode("Transform");
Transform71.DEF = "transC3";
Transform Transform72 = createNode("Transform");
Transform72.DEF = "rotscaleC3";
Shape Shape73 = createNode("Shape");
Appearance Appearance74 = createNode("Appearance");
Material Material75 = createNode("Material");
Material75.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material75.transparency = 0.5;
Appearance74.material = Material75;

Shape73.appearance = Appearance74;

Cylinder Cylinder76 = createNode("Cylinder");
Cylinder76.radius = 0.05;
Shape73.geometry = Cylinder76;

Transform72.child = new undefined();

Transform72.child[0] = Shape73;

Transform71.children = new MFNode();

Transform71.children[0] = Transform72;

children[10] = Transform71;

ProtoInstance ProtoInstance77 = createNode("ProtoInstance");
ProtoInstance77.DEF = "connector1";
ProtoInstance77.name = "x3dconnector";
fieldValue fieldValue78 = createNode("fieldValue");
fieldValue78.name = "startnode";
Transform Transform79 = createNode("Transform");
Transform79.USE = "G1";
fieldValue78.children = new MFNode();

fieldValue78.children[0] = Transform79;

ProtoInstance77.fieldValue = new MFNode();

ProtoInstance77.fieldValue[0] = fieldValue78;

fieldValue fieldValue80 = createNode("fieldValue");
fieldValue80.name = "endnode";
Transform Transform81 = createNode("Transform");
Transform81.USE = "G2";
fieldValue80.children = new MFNode();

fieldValue80.children[0] = Transform81;

ProtoInstance77.fieldValue[1] = fieldValue80;

fieldValue fieldValue82 = createNode("fieldValue");
fieldValue82.name = "transnode";
Transform Transform83 = createNode("Transform");
Transform83.USE = "transC1";
fieldValue82.children = new MFNode();

fieldValue82.children[0] = Transform83;

ProtoInstance77.fieldValue[2] = fieldValue82;

fieldValue fieldValue84 = createNode("fieldValue");
fieldValue84.name = "rotscalenode";
Transform Transform85 = createNode("Transform");
Transform85.USE = "rotscaleC1";
fieldValue84.children = new MFNode();

fieldValue84.children[0] = Transform85;

ProtoInstance77.fieldValue[3] = fieldValue84;

children[11] = ProtoInstance77;

ProtoInstance ProtoInstance86 = createNode("ProtoInstance");
ProtoInstance86.DEF = "connector2";
ProtoInstance86.name = "x3dconnector";
fieldValue fieldValue87 = createNode("fieldValue");
fieldValue87.name = "startnode";
Transform Transform88 = createNode("Transform");
Transform88.USE = "G1";
fieldValue87.children = new MFNode();

fieldValue87.children[0] = Transform88;

ProtoInstance86.fieldValue = new MFNode();

ProtoInstance86.fieldValue[0] = fieldValue87;

fieldValue fieldValue89 = createNode("fieldValue");
fieldValue89.name = "endnode";
Transform Transform90 = createNode("Transform");
Transform90.USE = "G3";
fieldValue89.children = new MFNode();

fieldValue89.children[0] = Transform90;

ProtoInstance86.fieldValue[1] = fieldValue89;

fieldValue fieldValue91 = createNode("fieldValue");
fieldValue91.name = "transnode";
Transform Transform92 = createNode("Transform");
Transform92.USE = "transC2";
fieldValue91.children = new MFNode();

fieldValue91.children[0] = Transform92;

ProtoInstance86.fieldValue[2] = fieldValue91;

fieldValue fieldValue93 = createNode("fieldValue");
fieldValue93.name = "rotscalenode";
Transform Transform94 = createNode("Transform");
Transform94.USE = "rotscaleC2";
fieldValue93.children = new MFNode();

fieldValue93.children[0] = Transform94;

ProtoInstance86.fieldValue[3] = fieldValue93;

children[12] = ProtoInstance86;

ProtoInstance ProtoInstance95 = createNode("ProtoInstance");
ProtoInstance95.DEF = "connector3";
ProtoInstance95.name = "x3dconnector";
fieldValue fieldValue96 = createNode("fieldValue");
fieldValue96.name = "startnode";
Transform Transform97 = createNode("Transform");
Transform97.USE = "G1";
fieldValue96.children = new MFNode();

fieldValue96.children[0] = Transform97;

ProtoInstance95.fieldValue = new MFNode();

ProtoInstance95.fieldValue[0] = fieldValue96;

fieldValue fieldValue98 = createNode("fieldValue");
fieldValue98.name = "endnode";
Transform Transform99 = createNode("Transform");
Transform99.USE = "G4";
fieldValue98.children = new MFNode();

fieldValue98.children[0] = Transform99;

ProtoInstance95.fieldValue[1] = fieldValue98;

fieldValue fieldValue100 = createNode("fieldValue");
fieldValue100.name = "transnode";
Transform Transform101 = createNode("Transform");
Transform101.USE = "transC3";
fieldValue100.children = new MFNode();

fieldValue100.children[0] = Transform101;

ProtoInstance95.fieldValue[2] = fieldValue100;

fieldValue fieldValue102 = createNode("fieldValue");
fieldValue102.name = "rotscalenode";
Transform Transform103 = createNode("Transform");
Transform103.USE = "rotscaleC3";
fieldValue102.children = new MFNode();

fieldValue102.children[0] = Transform103;

ProtoInstance95.fieldValue[3] = fieldValue102;

children[13] = ProtoInstance95;

ROUTE ROUTE104 = createNode("ROUTE");
ROUTE104.fromNode = "PS1";
ROUTE104.fromField = "translation_changed";
ROUTE104.toNode = "G1";
ROUTE104.toField = "translation";
children[14] = ROUTE104;

ROUTE ROUTE105 = createNode("ROUTE");
ROUTE105.fromNode = "PS2";
ROUTE105.fromField = "translation_changed";
ROUTE105.toNode = "G2";
ROUTE105.toField = "translation";
children[15] = ROUTE105;

ROUTE ROUTE106 = createNode("ROUTE");
ROUTE106.fromNode = "PS3";
ROUTE106.fromField = "translation_changed";
ROUTE106.toNode = "G3";
ROUTE106.toField = "translation";
children[16] = ROUTE106;

ROUTE ROUTE107 = createNode("ROUTE");
ROUTE107.fromNode = "PS4";
ROUTE107.fromField = "translation_changed";
ROUTE107.toNode = "G4";
ROUTE107.toField = "translation";
children[17] = ROUTE107;

ROUTE ROUTE108 = createNode("ROUTE");
ROUTE108.fromNode = "G1";
ROUTE108.fromField = "translation";
ROUTE108.toNode = "connector1";
ROUTE108.toField = "set_startpoint";
children[18] = ROUTE108;

ROUTE ROUTE109 = createNode("ROUTE");
ROUTE109.fromNode = "G2";
ROUTE109.fromField = "translation";
ROUTE109.toNode = "connector1";
ROUTE109.toField = "set_endpoint";
children[19] = ROUTE109;

ROUTE ROUTE110 = createNode("ROUTE");
ROUTE110.fromNode = "G1";
ROUTE110.fromField = "translation";
ROUTE110.toNode = "connector2";
ROUTE110.toField = "set_startpoint";
children[20] = ROUTE110;

ROUTE ROUTE111 = createNode("ROUTE");
ROUTE111.fromNode = "G3";
ROUTE111.fromField = "translation";
ROUTE111.toNode = "connector2";
ROUTE111.toField = "set_endpoint";
children[21] = ROUTE111;

ROUTE ROUTE112 = createNode("ROUTE");
ROUTE112.fromNode = "G1";
ROUTE112.fromField = "translation";
ROUTE112.toNode = "connector3";
ROUTE112.toField = "set_startpoint";
children[22] = ROUTE112;

ROUTE ROUTE113 = createNode("ROUTE");
ROUTE113.fromNode = "G4";
ROUTE113.fromField = "translation";
ROUTE113.toNode = "connector3";
ROUTE113.toField = "set_endpoint";
children[23] = ROUTE113;

}
