let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let head1 = browser.currentScene.createNode("head");
let meta2 = browser.currentScene.createNode("meta");
meta2.name = "title";
meta2.content = "x3dconnectorProto.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

let meta3 = browser.currentScene.createNode("meta");
meta3.name = "creator";
meta3.content = "Lost, Doug Sanden I think";
head1.meta[1] = meta3;

let meta4 = browser.currentScene.createNode("meta");
meta4.name = "created";
meta4.content = "Unknown";
head1.meta[2] = meta4;

let meta5 = browser.currentScene.createNode("meta");
meta5.name = "modified";
meta5.content = "July 30 2023";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "generator";
meta6.content = "manual";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "identifier";
meta7.content = "https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d";
head1.meta[5] = meta7;

let meta8 = browser.currentScene.createNode("meta");
meta8.name = "description";
meta8.content = "a generic proto to connect two objects";
head1.meta[6] = meta8;

let meta9 = browser.currentScene.createNode("meta");
meta9.name = "license";
meta9.content = "https://www.web3d.org/x3d/content/examples/license.html";
head1.meta[7] = meta9;

head = head1;

let WorldInfo11 = browser.currentScene.createNode("WorldInfo");
WorldInfo11.title = "Connector Proto";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo11;

let Viewpoint12 = browser.currentScene.createNode("Viewpoint");
Viewpoint12.position = new SFVec3f(new float[0,0,5]);
Viewpoint12.description = "Only Viewpoint";
browser.currentScene.children[1] = Viewpoint12;

let Background13 = browser.currentScene.createNode("Background");
Background13.skyColor = new MFColor(new float[0.4,0.4,0.4]);
browser.currentScene.children[2] = Background13;

let Transform14 = browser.currentScene.createNode("Transform");
Transform14.DEF = "G1";
let Shape15 = browser.currentScene.createNode("Shape");
let Appearance16 = browser.currentScene.createNode("Appearance");
let Material17 = browser.currentScene.createNode("Material");
Material17.diffuseColor = new SFColor(new float[0.7,0.2,0.2]);
Appearance16.material = Material17;

Shape15.appearance = Appearance16;

let Sphere18 = browser.currentScene.createNode("Sphere");
Sphere18.radius = 0.1;
Shape15.geometry = Sphere18;

Transform14.child = new undefined();

Transform14.child[0] = Shape15;

let PlaneSensor19 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor19.description = "Grab to move";
PlaneSensor19.DEF = "PS1";
Transform14.children[1] = PlaneSensor19;

let ROUTE20 = browser.currentScene.createNode("ROUTE");
ROUTE20.fromNode = "PS1";
ROUTE20.fromField = "translation_changed";
ROUTE20.toNode = "G1";
ROUTE20.toField = "set_translation";
Transform14.children[2] = ROUTE20;

browser.currentScene.children[3] = Transform14;

let Transform21 = browser.currentScene.createNode("Transform");
Transform21.DEF = "G2";
Transform21.translation = new SFVec3f(new float[1,-1,0.01]);
let Shape22 = browser.currentScene.createNode("Shape");
let Appearance23 = browser.currentScene.createNode("Appearance");
let Material24 = browser.currentScene.createNode("Material");
Material24.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance23.material = Material24;

Shape22.appearance = Appearance23;

let Sphere25 = browser.currentScene.createNode("Sphere");
Sphere25.radius = 0.1;
Shape22.geometry = Sphere25;

Transform21.child = new undefined();

Transform21.child[0] = Shape22;

let PlaneSensor26 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor26.description = "Grab to move";
PlaneSensor26.offset = new SFVec3f(new float[1,-1,0.01]);
PlaneSensor26.DEF = "PS2";
Transform21.children[1] = PlaneSensor26;

let ROUTE27 = browser.currentScene.createNode("ROUTE");
ROUTE27.fromNode = "PS2";
ROUTE27.fromField = "translation_changed";
ROUTE27.toNode = "G2";
ROUTE27.toField = "set_translation";
Transform21.children[2] = ROUTE27;

browser.currentScene.children[4] = Transform21;

let Transform28 = browser.currentScene.createNode("Transform");
Transform28.DEF = "G3";
Transform28.translation = new SFVec3f(new float[1,1,0.01]);
let Shape29 = browser.currentScene.createNode("Shape");
let Appearance30 = browser.currentScene.createNode("Appearance");
let Material31 = browser.currentScene.createNode("Material");
Material31.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance30.material = Material31;

Shape29.appearance = Appearance30;

let Sphere32 = browser.currentScene.createNode("Sphere");
Sphere32.radius = 0.1;
Shape29.geometry = Sphere32;

Transform28.child = new undefined();

Transform28.child[0] = Shape29;

let PlaneSensor33 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor33.description = "Grab to move";
PlaneSensor33.offset = new SFVec3f(new float[1,1,0.01]);
PlaneSensor33.DEF = "PS3";
Transform28.children[1] = PlaneSensor33;

let ROUTE34 = browser.currentScene.createNode("ROUTE");
ROUTE34.fromNode = "PS3";
ROUTE34.fromField = "translation_changed";
ROUTE34.toNode = "G3";
ROUTE34.toField = "set_translation";
Transform28.children[2] = ROUTE34;

browser.currentScene.children[5] = Transform28;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.DEF = "G4";
Transform35.translation = new SFVec3f(new float[-1,1,0.01]);
let Shape36 = browser.currentScene.createNode("Shape");
let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
Material38.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance37.material = Material38;

Shape36.appearance = Appearance37;

let Sphere39 = browser.currentScene.createNode("Sphere");
Sphere39.radius = 0.1;
Shape36.geometry = Sphere39;

Transform35.child = new undefined();

Transform35.child[0] = Shape36;

let PlaneSensor40 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor40.description = "Grab to move";
PlaneSensor40.offset = new SFVec3f(new float[-1,1,0.01]);
PlaneSensor40.DEF = "PS4";
Transform35.children[1] = PlaneSensor40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "PS4";
ROUTE41.fromField = "translation_changed";
ROUTE41.toNode = "G4";
ROUTE41.toField = "set_translation";
Transform35.children[2] = ROUTE41;

browser.currentScene.children[6] = Transform35;

let Transform42 = browser.currentScene.createNode("Transform");
Transform42.DEF = "transC1";
let Transform43 = browser.currentScene.createNode("Transform");
Transform43.DEF = "rotscaleC1";
let Shape44 = browser.currentScene.createNode("Shape");
let Appearance45 = browser.currentScene.createNode("Appearance");
let Material46 = browser.currentScene.createNode("Material");
Material46.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material46.transparency = 0.5;
Appearance45.material = Material46;

Shape44.appearance = Appearance45;

let Cylinder47 = browser.currentScene.createNode("Cylinder");
Cylinder47.radius = 0.05;
Shape44.geometry = Cylinder47;

Transform43.child = new undefined();

Transform43.child[0] = Shape44;

Transform42.children = new MFNode();

Transform42.children[0] = Transform43;

browser.currentScene.children[7] = Transform42;

let Transform48 = browser.currentScene.createNode("Transform");
Transform48.DEF = "transC2";
let Transform49 = browser.currentScene.createNode("Transform");
Transform49.DEF = "rotscaleC2";
let Shape50 = browser.currentScene.createNode("Shape");
let Appearance51 = browser.currentScene.createNode("Appearance");
let Material52 = browser.currentScene.createNode("Material");
Material52.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material52.transparency = 0.5;
Appearance51.material = Material52;

Shape50.appearance = Appearance51;

let Cylinder53 = browser.currentScene.createNode("Cylinder");
Cylinder53.radius = 0.05;
Shape50.geometry = Cylinder53;

Transform49.child = new undefined();

Transform49.child[0] = Shape50;

Transform48.children = new MFNode();

Transform48.children[0] = Transform49;

browser.currentScene.children[8] = Transform48;

let Transform54 = browser.currentScene.createNode("Transform");
Transform54.DEF = "transC3";
let Transform55 = browser.currentScene.createNode("Transform");
Transform55.DEF = "rotscaleC3";
let Shape56 = browser.currentScene.createNode("Shape");
let Appearance57 = browser.currentScene.createNode("Appearance");
let Material58 = browser.currentScene.createNode("Material");
Material58.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material58.transparency = 0.5;
Appearance57.material = Material58;

Shape56.appearance = Appearance57;

let Cylinder59 = browser.currentScene.createNode("Cylinder");
Cylinder59.radius = 0.05;
Shape56.geometry = Cylinder59;

Transform55.child = new undefined();

Transform55.child[0] = Shape56;

Transform54.children = new MFNode();

Transform54.children[0] = Transform55;

browser.currentScene.children[9] = Transform54;

let ProtoDeclare60 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
let ProtoInterface61 = browser.currentScene.createNode("ProtoInterface");
let field62 = browser.currentScene.createNode("field");
field62.name = "startnode";
field62.accessType = "initializeOnly";
field62.type = "SFNode";
ProtoInterface61.field = new MFNode();

ProtoInterface61.field[0] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "endnode";
field63.accessType = "initializeOnly";
field63.type = "SFNode";
ProtoInterface61.field[1] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "transnode";
field64.accessType = "initializeOnly";
field64.type = "SFNode";
ProtoInterface61.field[2] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "rotscalenode";
field65.accessType = "initializeOnly";
field65.type = "SFNode";
ProtoInterface61.field[3] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "set_startpoint";
field66.accessType = "inputOnly";
field66.type = "SFVec3f";
ProtoInterface61.field[4] = field66;

let field67 = browser.currentScene.createNode("field");
field67.name = "set_endpoint";
field67.accessType = "inputOnly";
field67.type = "SFVec3f";
ProtoInterface61.field[5] = field67;

ProtoDeclare60.protoInterface = ProtoInterface61;

let ProtoBody68 = browser.currentScene.createNode("ProtoBody");
let Script69 = browser.currentScene.createNode("Script");
Script69.DEF = "S1";
Script69.directOutput = True;
let field70 = browser.currentScene.createNode("field");
field70.name = "startnode";
field70.accessType = "initializeOnly";
field70.type = "SFNode";
Script69.field = new MFNode();

Script69.field[0] = field70;

let field71 = browser.currentScene.createNode("field");
field71.name = "endnode";
field71.accessType = "initializeOnly";
field71.type = "SFNode";
Script69.field[1] = field71;

let field72 = browser.currentScene.createNode("field");
field72.name = "transnode";
field72.accessType = "initializeOnly";
field72.type = "SFNode";
Script69.field[2] = field72;

let field73 = browser.currentScene.createNode("field");
field73.name = "rotscalenode";
field73.accessType = "initializeOnly";
field73.type = "SFNode";
Script69.field[3] = field73;

let field74 = browser.currentScene.createNode("field");
field74.name = "set_startpoint";
field74.accessType = "inputOnly";
field74.type = "SFVec3f";
Script69.field[4] = field74;

let field75 = browser.currentScene.createNode("field");
field75.name = "set_endpoint";
field75.accessType = "inputOnly";
field75.type = "SFVec3f";
Script69.field[5] = field75;

let IS76 = browser.currentScene.createNode("IS");
let connect77 = browser.currentScene.createNode("connect");
connect77.nodeField = "startnode";
connect77.protoField = "startnode";
IS76.connect = new MFNode();

IS76.connect[0] = connect77;

let connect78 = browser.currentScene.createNode("connect");
connect78.nodeField = "endnode";
connect78.protoField = "endnode";
IS76.connect[1] = connect78;

let connect79 = browser.currentScene.createNode("connect");
connect79.nodeField = "transnode";
connect79.protoField = "transnode";
IS76.connect[2] = connect79;

let connect80 = browser.currentScene.createNode("connect");
connect80.nodeField = "rotscalenode";
connect80.protoField = "rotscalenode";
IS76.connect[3] = connect80;

let connect81 = browser.currentScene.createNode("connect");
connect81.nodeField = "set_startpoint";
connect81.protoField = "set_startpoint";
IS76.connect[4] = connect81;

let connect82 = browser.currentScene.createNode("connect");
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

browser.currentScene.children[10] = ProtoDeclare60;

let ProtoInstance83 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance83.name = "x3dconnector";
ProtoInstance83.DEF = "connector1";
let fieldValue84 = browser.currentScene.createNode("fieldValue");
fieldValue84.name = "startnode";
let Transform85 = browser.currentScene.createNode("Transform");
Transform85.USE = "G1";
fieldValue84.children = new MFNode();

fieldValue84.children[0] = Transform85;

ProtoInstance83.fieldValue = new MFNode();

ProtoInstance83.fieldValue[0] = fieldValue84;

let fieldValue86 = browser.currentScene.createNode("fieldValue");
fieldValue86.name = "endnode";
let Transform87 = browser.currentScene.createNode("Transform");
Transform87.USE = "G2";
fieldValue86.children = new MFNode();

fieldValue86.children[0] = Transform87;

ProtoInstance83.fieldValue[1] = fieldValue86;

let fieldValue88 = browser.currentScene.createNode("fieldValue");
fieldValue88.name = "transnode";
let Transform89 = browser.currentScene.createNode("Transform");
Transform89.USE = "transC1";
fieldValue88.children = new MFNode();

fieldValue88.children[0] = Transform89;

ProtoInstance83.fieldValue[2] = fieldValue88;

let fieldValue90 = browser.currentScene.createNode("fieldValue");
fieldValue90.name = "rotscalenode";
let Transform91 = browser.currentScene.createNode("Transform");
Transform91.USE = "rotscaleC1";
fieldValue90.children = new MFNode();

fieldValue90.children[0] = Transform91;

ProtoInstance83.fieldValue[3] = fieldValue90;

let fieldValue92 = browser.currentScene.createNode("fieldValue");
fieldValue92.name = "set_startpoint";
fieldValue92.value = "0 0 0";
ProtoInstance83.fieldValue[4] = fieldValue92;

let fieldValue93 = browser.currentScene.createNode("fieldValue");
fieldValue93.name = "set_endpoint";
fieldValue93.value = "0 0 0";
ProtoInstance83.fieldValue[5] = fieldValue93;

browser.currentScene.children[11] = ProtoInstance83;

let ProtoInstance94 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance94.name = "x3dconnector";
ProtoInstance94.DEF = "connector2";
let fieldValue95 = browser.currentScene.createNode("fieldValue");
fieldValue95.name = "startnode";
let Transform96 = browser.currentScene.createNode("Transform");
Transform96.USE = "G1";
fieldValue95.children = new MFNode();

fieldValue95.children[0] = Transform96;

ProtoInstance94.fieldValue = new MFNode();

ProtoInstance94.fieldValue[0] = fieldValue95;

let fieldValue97 = browser.currentScene.createNode("fieldValue");
fieldValue97.name = "endnode";
let Transform98 = browser.currentScene.createNode("Transform");
Transform98.USE = "G3";
fieldValue97.children = new MFNode();

fieldValue97.children[0] = Transform98;

ProtoInstance94.fieldValue[1] = fieldValue97;

let fieldValue99 = browser.currentScene.createNode("fieldValue");
fieldValue99.name = "transnode";
let Transform100 = browser.currentScene.createNode("Transform");
Transform100.USE = "transC2";
fieldValue99.children = new MFNode();

fieldValue99.children[0] = Transform100;

ProtoInstance94.fieldValue[2] = fieldValue99;

let fieldValue101 = browser.currentScene.createNode("fieldValue");
fieldValue101.name = "rotscalenode";
let Transform102 = browser.currentScene.createNode("Transform");
Transform102.USE = "rotscaleC2";
fieldValue101.children = new MFNode();

fieldValue101.children[0] = Transform102;

ProtoInstance94.fieldValue[3] = fieldValue101;

let fieldValue103 = browser.currentScene.createNode("fieldValue");
fieldValue103.name = "set_startpoint";
fieldValue103.value = "0 0 0";
ProtoInstance94.fieldValue[4] = fieldValue103;

let fieldValue104 = browser.currentScene.createNode("fieldValue");
fieldValue104.name = "set_endpoint";
fieldValue104.value = "0 0 0";
ProtoInstance94.fieldValue[5] = fieldValue104;

browser.currentScene.children[12] = ProtoInstance94;

let ProtoInstance105 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance105.name = "x3dconnector";
ProtoInstance105.DEF = "connector3";
let fieldValue106 = browser.currentScene.createNode("fieldValue");
fieldValue106.name = "startnode";
let Transform107 = browser.currentScene.createNode("Transform");
Transform107.USE = "G1";
fieldValue106.children = new MFNode();

fieldValue106.children[0] = Transform107;

ProtoInstance105.fieldValue = new MFNode();

ProtoInstance105.fieldValue[0] = fieldValue106;

let fieldValue108 = browser.currentScene.createNode("fieldValue");
fieldValue108.name = "endnode";
let Transform109 = browser.currentScene.createNode("Transform");
Transform109.USE = "G4";
fieldValue108.children = new MFNode();

fieldValue108.children[0] = Transform109;

ProtoInstance105.fieldValue[1] = fieldValue108;

let fieldValue110 = browser.currentScene.createNode("fieldValue");
fieldValue110.name = "transnode";
let Transform111 = browser.currentScene.createNode("Transform");
Transform111.USE = "transC3";
fieldValue110.children = new MFNode();

fieldValue110.children[0] = Transform111;

ProtoInstance105.fieldValue[2] = fieldValue110;

let fieldValue112 = browser.currentScene.createNode("fieldValue");
fieldValue112.name = "rotscalenode";
let Transform113 = browser.currentScene.createNode("Transform");
Transform113.USE = "rotscaleC3";
fieldValue112.children = new MFNode();

fieldValue112.children[0] = Transform113;

ProtoInstance105.fieldValue[3] = fieldValue112;

let fieldValue114 = browser.currentScene.createNode("fieldValue");
fieldValue114.name = "set_startpoint";
fieldValue114.value = "0 0 0";
ProtoInstance105.fieldValue[4] = fieldValue114;

let fieldValue115 = browser.currentScene.createNode("fieldValue");
fieldValue115.name = "set_endpoint";
fieldValue115.value = "0 0 0";
ProtoInstance105.fieldValue[5] = fieldValue115;

browser.currentScene.children[13] = ProtoInstance105;

let ROUTE116 = browser.currentScene.createNode("ROUTE");
ROUTE116.fromNode = "G1";
ROUTE116.fromField = "translation_changed";
ROUTE116.toNode = "connector1";
ROUTE116.toField = "set_startpoint";
browser.currentScene.children[14] = ROUTE116;

let ROUTE117 = browser.currentScene.createNode("ROUTE");
ROUTE117.fromNode = "G2";
ROUTE117.fromField = "translation_changed";
ROUTE117.toNode = "connector1";
ROUTE117.toField = "set_endpoint";
browser.currentScene.children[15] = ROUTE117;

let ROUTE118 = browser.currentScene.createNode("ROUTE");
ROUTE118.fromNode = "G1";
ROUTE118.fromField = "translation_changed";
ROUTE118.toNode = "connector2";
ROUTE118.toField = "set_startpoint";
browser.currentScene.children[16] = ROUTE118;

let ROUTE119 = browser.currentScene.createNode("ROUTE");
ROUTE119.fromNode = "G3";
ROUTE119.fromField = "translation_changed";
ROUTE119.toNode = "connector2";
ROUTE119.toField = "set_endpoint";
browser.currentScene.children[17] = ROUTE119;

let ROUTE120 = browser.currentScene.createNode("ROUTE");
ROUTE120.fromNode = "G1";
ROUTE120.fromField = "translation_changed";
ROUTE120.toNode = "connector3";
ROUTE120.toField = "set_startpoint";
browser.currentScene.children[18] = ROUTE120;

let ROUTE121 = browser.currentScene.createNode("ROUTE");
ROUTE121.fromNode = "G4";
ROUTE121.fromField = "translation_changed";
ROUTE121.toNode = "connector3";
ROUTE121.toField = "set_endpoint";
browser.currentScene.children[19] = ROUTE121;

