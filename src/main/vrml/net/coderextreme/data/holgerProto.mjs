let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "4.0";
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
meta5.content = "Sat, 30 Dec 2023 10:14:10 GMT";
head1.meta[3] = meta5;

let meta6 = browser.currentScene.createNode("meta");
meta6.name = "generator";
meta6.content = "manual";
head1.meta[4] = meta6;

let meta7 = browser.currentScene.createNode("meta");
meta7.name = "generator";
meta7.content = "x3d-tidy V1.0.118, https://www.npmjs.com/package/x3d-tidy";
head1.meta[5] = meta7;

head = head1;

let ProtoDeclare9 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
let ProtoInterface10 = browser.currentScene.createNode("ProtoInterface");
let field11 = browser.currentScene.createNode("field");
field11.accessType = "initializeOnly";
field11.type = "SFNode";
field11.name = "startnode";
ProtoInterface10.field = new MFNode();

ProtoInterface10.field[0] = field11;

let field12 = browser.currentScene.createNode("field");
field12.accessType = "initializeOnly";
field12.type = "SFNode";
field12.name = "endnode";
ProtoInterface10.field[1] = field12;

let field13 = browser.currentScene.createNode("field");
field13.accessType = "initializeOnly";
field13.type = "SFNode";
field13.name = "transnode";
ProtoInterface10.field[2] = field13;

let field14 = browser.currentScene.createNode("field");
field14.accessType = "initializeOnly";
field14.type = "SFNode";
field14.name = "rotscalenode";
ProtoInterface10.field[3] = field14;

let field15 = browser.currentScene.createNode("field");
field15.accessType = "inputOnly";
field15.type = "SFVec3f";
field15.name = "set_startpoint";
ProtoInterface10.field[4] = field15;

let field16 = browser.currentScene.createNode("field");
field16.accessType = "inputOnly";
field16.type = "SFVec3f";
field16.name = "set_endpoint";
ProtoInterface10.field[5] = field16;

ProtoDeclare9.protoInterface = ProtoInterface10;

let ProtoBody17 = browser.currentScene.createNode("ProtoBody");
let Script18 = browser.currentScene.createNode("Script");
Script18.DEF = "S1";
Script18.directOutput = True;
let field19 = browser.currentScene.createNode("field");
field19.accessType = "initializeOnly";
field19.type = "SFNode";
field19.name = "startnode";
Script18.field = new MFNode();

Script18.field[0] = field19;

let field20 = browser.currentScene.createNode("field");
field20.accessType = "initializeOnly";
field20.type = "SFNode";
field20.name = "endnode";
Script18.field[1] = field20;

let field21 = browser.currentScene.createNode("field");
field21.accessType = "initializeOnly";
field21.type = "SFNode";
field21.name = "transnode";
Script18.field[2] = field21;

let field22 = browser.currentScene.createNode("field");
field22.accessType = "initializeOnly";
field22.type = "SFNode";
field22.name = "rotscalenode";
Script18.field[3] = field22;

let field23 = browser.currentScene.createNode("field");
field23.accessType = "inputOnly";
field23.type = "SFVec3f";
field23.name = "set_startpoint";
Script18.field[4] = field23;

let field24 = browser.currentScene.createNode("field");
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
let IS25 = browser.currentScene.createNode("IS");
let connect26 = browser.currentScene.createNode("connect");
connect26.nodeField = "startnode";
connect26.protoField = "startnode";
IS25.connect = new MFNode();

IS25.connect[0] = connect26;

let connect27 = browser.currentScene.createNode("connect");
connect27.nodeField = "endnode";
connect27.protoField = "endnode";
IS25.connect[1] = connect27;

let connect28 = browser.currentScene.createNode("connect");
connect28.nodeField = "transnode";
connect28.protoField = "transnode";
IS25.connect[2] = connect28;

let connect29 = browser.currentScene.createNode("connect");
connect29.nodeField = "rotscalenode";
connect29.protoField = "rotscalenode";
IS25.connect[3] = connect29;

let connect30 = browser.currentScene.createNode("connect");
connect30.nodeField = "set_startpoint";
connect30.protoField = "set_startpoint";
IS25.connect[4] = connect30;

let connect31 = browser.currentScene.createNode("connect");
connect31.nodeField = "set_endpoint";
connect31.protoField = "set_endpoint";
IS25.connect[5] = connect31;

Script18.iS = IS25;

ProtoBody17.children = new MFNode();

ProtoBody17.children[0] = Script18;

ProtoDeclare9.protoBody = ProtoBody17;

browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = ProtoDeclare9;

let WorldInfo32 = browser.currentScene.createNode("WorldInfo");
WorldInfo32.title = "Connector Proto";
browser.currentScene.children[1] = WorldInfo32;

let Viewpoint33 = browser.currentScene.createNode("Viewpoint");
Viewpoint33.description = "Only Viewpoint";
Viewpoint33.position = new SFVec3f(new float[0,0,5]);
browser.currentScene.children[2] = Viewpoint33;

let Background34 = browser.currentScene.createNode("Background");
Background34.skyColor = new MFColor(new float[0.4,0.4,0.4]);
browser.currentScene.children[3] = Background34;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.DEF = "G1";
let Shape36 = browser.currentScene.createNode("Shape");
let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
Material38.diffuseColor = new SFColor(new float[0.7,0.2,0.2]);
Appearance37.material = Material38;

Shape36.appearance = Appearance37;

let Sphere39 = browser.currentScene.createNode("Sphere");
Sphere39.radius = 0.1;
Shape36.geometry = Sphere39;

Transform35.child = new undefined();

Transform35.child[0] = Shape36;

let PlaneSensor40 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor40.DEF = "PS1";
PlaneSensor40.description = "Grab to move";
Transform35.children[1] = PlaneSensor40;

browser.currentScene.children[4] = Transform35;

let Transform41 = browser.currentScene.createNode("Transform");
Transform41.DEF = "G2";
Transform41.translation = new SFVec3f(new float[1,-1,0.01]);
let Shape42 = browser.currentScene.createNode("Shape");
let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance43.material = Material44;

Shape42.appearance = Appearance43;

let Sphere45 = browser.currentScene.createNode("Sphere");
Sphere45.radius = 0.1;
Shape42.geometry = Sphere45;

Transform41.child = new undefined();

Transform41.child[0] = Shape42;

let PlaneSensor46 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor46.DEF = "PS2";
PlaneSensor46.description = "Grab to move";
PlaneSensor46.offset = new SFVec3f(new float[1,-1,0.01]);
Transform41.children[1] = PlaneSensor46;

browser.currentScene.children[5] = Transform41;

let Transform47 = browser.currentScene.createNode("Transform");
Transform47.DEF = "G3";
Transform47.translation = new SFVec3f(new float[1,1,0.01]);
let Shape48 = browser.currentScene.createNode("Shape");
let Appearance49 = browser.currentScene.createNode("Appearance");
let Material50 = browser.currentScene.createNode("Material");
Material50.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

let Sphere51 = browser.currentScene.createNode("Sphere");
Sphere51.radius = 0.1;
Shape48.geometry = Sphere51;

Transform47.child = new undefined();

Transform47.child[0] = Shape48;

let PlaneSensor52 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor52.DEF = "PS3";
PlaneSensor52.description = "Grab to move";
PlaneSensor52.offset = new SFVec3f(new float[1,1,0.01]);
Transform47.children[1] = PlaneSensor52;

browser.currentScene.children[6] = Transform47;

let Transform53 = browser.currentScene.createNode("Transform");
Transform53.DEF = "G4";
Transform53.translation = new SFVec3f(new float[-1,1,0.01]);
let Shape54 = browser.currentScene.createNode("Shape");
let Appearance55 = browser.currentScene.createNode("Appearance");
let Material56 = browser.currentScene.createNode("Material");
Material56.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance55.material = Material56;

Shape54.appearance = Appearance55;

let Sphere57 = browser.currentScene.createNode("Sphere");
Sphere57.radius = 0.1;
Shape54.geometry = Sphere57;

Transform53.child = new undefined();

Transform53.child[0] = Shape54;

let PlaneSensor58 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor58.DEF = "PS4";
PlaneSensor58.description = "Grab to move";
PlaneSensor58.offset = new SFVec3f(new float[-1,1,0.01]);
Transform53.children[1] = PlaneSensor58;

browser.currentScene.children[7] = Transform53;

let Transform59 = browser.currentScene.createNode("Transform");
Transform59.DEF = "transC1";
let Transform60 = browser.currentScene.createNode("Transform");
Transform60.DEF = "rotscaleC1";
let Shape61 = browser.currentScene.createNode("Shape");
let Appearance62 = browser.currentScene.createNode("Appearance");
let Material63 = browser.currentScene.createNode("Material");
Material63.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material63.transparency = 0.5;
Appearance62.material = Material63;

Shape61.appearance = Appearance62;

let Cylinder64 = browser.currentScene.createNode("Cylinder");
Cylinder64.radius = 0.05;
Shape61.geometry = Cylinder64;

Transform60.child = new undefined();

Transform60.child[0] = Shape61;

Transform59.children = new MFNode();

Transform59.children[0] = Transform60;

browser.currentScene.children[8] = Transform59;

let Transform65 = browser.currentScene.createNode("Transform");
Transform65.DEF = "transC2";
let Transform66 = browser.currentScene.createNode("Transform");
Transform66.DEF = "rotscaleC2";
let Shape67 = browser.currentScene.createNode("Shape");
let Appearance68 = browser.currentScene.createNode("Appearance");
let Material69 = browser.currentScene.createNode("Material");
Material69.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material69.transparency = 0.5;
Appearance68.material = Material69;

Shape67.appearance = Appearance68;

let Cylinder70 = browser.currentScene.createNode("Cylinder");
Cylinder70.radius = 0.05;
Shape67.geometry = Cylinder70;

Transform66.child = new undefined();

Transform66.child[0] = Shape67;

Transform65.children = new MFNode();

Transform65.children[0] = Transform66;

browser.currentScene.children[9] = Transform65;

let Transform71 = browser.currentScene.createNode("Transform");
Transform71.DEF = "transC3";
let Transform72 = browser.currentScene.createNode("Transform");
Transform72.DEF = "rotscaleC3";
let Shape73 = browser.currentScene.createNode("Shape");
let Appearance74 = browser.currentScene.createNode("Appearance");
let Material75 = browser.currentScene.createNode("Material");
Material75.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material75.transparency = 0.5;
Appearance74.material = Material75;

Shape73.appearance = Appearance74;

let Cylinder76 = browser.currentScene.createNode("Cylinder");
Cylinder76.radius = 0.05;
Shape73.geometry = Cylinder76;

Transform72.child = new undefined();

Transform72.child[0] = Shape73;

Transform71.children = new MFNode();

Transform71.children[0] = Transform72;

browser.currentScene.children[10] = Transform71;

let ProtoInstance77 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance77.DEF = "connector1";
ProtoInstance77.name = "x3dconnector";
let fieldValue78 = browser.currentScene.createNode("fieldValue");
fieldValue78.name = "startnode";
let Transform79 = browser.currentScene.createNode("Transform");
Transform79.USE = "G1";
fieldValue78.children = new MFNode();

fieldValue78.children[0] = Transform79;

ProtoInstance77.fieldValue = new MFNode();

ProtoInstance77.fieldValue[0] = fieldValue78;

let fieldValue80 = browser.currentScene.createNode("fieldValue");
fieldValue80.name = "endnode";
let Transform81 = browser.currentScene.createNode("Transform");
Transform81.USE = "G2";
fieldValue80.children = new MFNode();

fieldValue80.children[0] = Transform81;

ProtoInstance77.fieldValue[1] = fieldValue80;

let fieldValue82 = browser.currentScene.createNode("fieldValue");
fieldValue82.name = "transnode";
let Transform83 = browser.currentScene.createNode("Transform");
Transform83.USE = "transC1";
fieldValue82.children = new MFNode();

fieldValue82.children[0] = Transform83;

ProtoInstance77.fieldValue[2] = fieldValue82;

let fieldValue84 = browser.currentScene.createNode("fieldValue");
fieldValue84.name = "rotscalenode";
let Transform85 = browser.currentScene.createNode("Transform");
Transform85.USE = "rotscaleC1";
fieldValue84.children = new MFNode();

fieldValue84.children[0] = Transform85;

ProtoInstance77.fieldValue[3] = fieldValue84;

browser.currentScene.children[11] = ProtoInstance77;

let ProtoInstance86 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance86.DEF = "connector2";
ProtoInstance86.name = "x3dconnector";
let fieldValue87 = browser.currentScene.createNode("fieldValue");
fieldValue87.name = "startnode";
let Transform88 = browser.currentScene.createNode("Transform");
Transform88.USE = "G1";
fieldValue87.children = new MFNode();

fieldValue87.children[0] = Transform88;

ProtoInstance86.fieldValue = new MFNode();

ProtoInstance86.fieldValue[0] = fieldValue87;

let fieldValue89 = browser.currentScene.createNode("fieldValue");
fieldValue89.name = "endnode";
let Transform90 = browser.currentScene.createNode("Transform");
Transform90.USE = "G3";
fieldValue89.children = new MFNode();

fieldValue89.children[0] = Transform90;

ProtoInstance86.fieldValue[1] = fieldValue89;

let fieldValue91 = browser.currentScene.createNode("fieldValue");
fieldValue91.name = "transnode";
let Transform92 = browser.currentScene.createNode("Transform");
Transform92.USE = "transC2";
fieldValue91.children = new MFNode();

fieldValue91.children[0] = Transform92;

ProtoInstance86.fieldValue[2] = fieldValue91;

let fieldValue93 = browser.currentScene.createNode("fieldValue");
fieldValue93.name = "rotscalenode";
let Transform94 = browser.currentScene.createNode("Transform");
Transform94.USE = "rotscaleC2";
fieldValue93.children = new MFNode();

fieldValue93.children[0] = Transform94;

ProtoInstance86.fieldValue[3] = fieldValue93;

browser.currentScene.children[12] = ProtoInstance86;

let ProtoInstance95 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance95.DEF = "connector3";
ProtoInstance95.name = "x3dconnector";
let fieldValue96 = browser.currentScene.createNode("fieldValue");
fieldValue96.name = "startnode";
let Transform97 = browser.currentScene.createNode("Transform");
Transform97.USE = "G1";
fieldValue96.children = new MFNode();

fieldValue96.children[0] = Transform97;

ProtoInstance95.fieldValue = new MFNode();

ProtoInstance95.fieldValue[0] = fieldValue96;

let fieldValue98 = browser.currentScene.createNode("fieldValue");
fieldValue98.name = "endnode";
let Transform99 = browser.currentScene.createNode("Transform");
Transform99.USE = "G4";
fieldValue98.children = new MFNode();

fieldValue98.children[0] = Transform99;

ProtoInstance95.fieldValue[1] = fieldValue98;

let fieldValue100 = browser.currentScene.createNode("fieldValue");
fieldValue100.name = "transnode";
let Transform101 = browser.currentScene.createNode("Transform");
Transform101.USE = "transC3";
fieldValue100.children = new MFNode();

fieldValue100.children[0] = Transform101;

ProtoInstance95.fieldValue[2] = fieldValue100;

let fieldValue102 = browser.currentScene.createNode("fieldValue");
fieldValue102.name = "rotscalenode";
let Transform103 = browser.currentScene.createNode("Transform");
Transform103.USE = "rotscaleC3";
fieldValue102.children = new MFNode();

fieldValue102.children[0] = Transform103;

ProtoInstance95.fieldValue[3] = fieldValue102;

browser.currentScene.children[13] = ProtoInstance95;

let ROUTE104 = browser.currentScene.createNode("ROUTE");
ROUTE104.fromNode = "PS1";
ROUTE104.fromField = "translation_changed";
ROUTE104.toNode = "G1";
ROUTE104.toField = "translation";
browser.currentScene.children[14] = ROUTE104;

let ROUTE105 = browser.currentScene.createNode("ROUTE");
ROUTE105.fromNode = "PS2";
ROUTE105.fromField = "translation_changed";
ROUTE105.toNode = "G2";
ROUTE105.toField = "translation";
browser.currentScene.children[15] = ROUTE105;

let ROUTE106 = browser.currentScene.createNode("ROUTE");
ROUTE106.fromNode = "PS3";
ROUTE106.fromField = "translation_changed";
ROUTE106.toNode = "G3";
ROUTE106.toField = "translation";
browser.currentScene.children[16] = ROUTE106;

let ROUTE107 = browser.currentScene.createNode("ROUTE");
ROUTE107.fromNode = "PS4";
ROUTE107.fromField = "translation_changed";
ROUTE107.toNode = "G4";
ROUTE107.toField = "translation";
browser.currentScene.children[17] = ROUTE107;

let ROUTE108 = browser.currentScene.createNode("ROUTE");
ROUTE108.fromNode = "G1";
ROUTE108.fromField = "translation";
ROUTE108.toNode = "connector1";
ROUTE108.toField = "set_startpoint";
browser.currentScene.children[18] = ROUTE108;

let ROUTE109 = browser.currentScene.createNode("ROUTE");
ROUTE109.fromNode = "G2";
ROUTE109.fromField = "translation";
ROUTE109.toNode = "connector1";
ROUTE109.toField = "set_endpoint";
browser.currentScene.children[19] = ROUTE109;

let ROUTE110 = browser.currentScene.createNode("ROUTE");
ROUTE110.fromNode = "G1";
ROUTE110.fromField = "translation";
ROUTE110.toNode = "connector2";
ROUTE110.toField = "set_startpoint";
browser.currentScene.children[20] = ROUTE110;

let ROUTE111 = browser.currentScene.createNode("ROUTE");
ROUTE111.fromNode = "G3";
ROUTE111.fromField = "translation";
ROUTE111.toNode = "connector2";
ROUTE111.toField = "set_endpoint";
browser.currentScene.children[21] = ROUTE111;

let ROUTE112 = browser.currentScene.createNode("ROUTE");
ROUTE112.fromNode = "G1";
ROUTE112.fromField = "translation";
ROUTE112.toNode = "connector3";
ROUTE112.toField = "set_startpoint";
browser.currentScene.children[22] = ROUTE112;

let ROUTE113 = browser.currentScene.createNode("ROUTE");
ROUTE113.fromNode = "G4";
ROUTE113.fromField = "translation";
ROUTE113.toNode = "connector3";
ROUTE113.toField = "set_endpoint";
browser.currentScene.children[23] = ROUTE113;

