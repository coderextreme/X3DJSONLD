let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let WorldInfo2 = browser.currentScene.createNode("WorldInfo");
WorldInfo2.title = "Connector Proto";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = WorldInfo2;

let Viewpoint3 = browser.currentScene.createNode("Viewpoint");
Viewpoint3.position = new SFVec3f(new float[0,0,5]);
Viewpoint3.description = "Only Viewpoint";
browser.currentScene.children[1] = Viewpoint3;

let Background4 = browser.currentScene.createNode("Background");
Background4.skyColor = new MFColor(new float[0.4,0.4,0.4]);
browser.currentScene.children[2] = Background4;

let Transform5 = browser.currentScene.createNode("Transform");
Transform5.DEF = "G1";
let Shape6 = browser.currentScene.createNode("Shape");
let Appearance7 = browser.currentScene.createNode("Appearance");
let Material8 = browser.currentScene.createNode("Material");
Material8.diffuseColor = new SFColor(new float[0.7,0.2,0.2]);
Appearance7.material = Material8;

Shape6.appearance = Appearance7;

let Sphere9 = browser.currentScene.createNode("Sphere");
Sphere9.radius = 0.1;
Shape6.geometry = Sphere9;

Transform5.children = new MFNode();

Transform5.children[0] = Shape6;

let PlaneSensor10 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor10.description = "Grab to move";
PlaneSensor10.DEF = "PS1";
Transform5.children[1] = PlaneSensor10;

let ROUTE11 = browser.currentScene.createNode("ROUTE");
ROUTE11.fromNode = "PS1";
ROUTE11.fromField = "translation_changed";
ROUTE11.toNode = "G1";
ROUTE11.toField = "set_translation";
Transform5.children[2] = ROUTE11;

browser.currentScene.children[3] = Transform5;

let Transform12 = browser.currentScene.createNode("Transform");
Transform12.DEF = "G2";
Transform12.translation = new SFVec3f(new float[1,-1,0.01]);
let Shape13 = browser.currentScene.createNode("Shape");
let Appearance14 = browser.currentScene.createNode("Appearance");
let Material15 = browser.currentScene.createNode("Material");
Material15.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance14.material = Material15;

Shape13.appearance = Appearance14;

let Sphere16 = browser.currentScene.createNode("Sphere");
Sphere16.radius = 0.1;
Shape13.geometry = Sphere16;

Transform12.children = new MFNode();

Transform12.children[0] = Shape13;

let PlaneSensor17 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor17.description = "Grab to move";
PlaneSensor17.offset = new SFVec3f(new float[1,-1,0.01]);
PlaneSensor17.DEF = "PS2";
Transform12.children[1] = PlaneSensor17;

let ROUTE18 = browser.currentScene.createNode("ROUTE");
ROUTE18.fromNode = "PS2";
ROUTE18.fromField = "translation_changed";
ROUTE18.toNode = "G2";
ROUTE18.toField = "set_translation";
Transform12.children[2] = ROUTE18;

browser.currentScene.children[4] = Transform12;

let Transform19 = browser.currentScene.createNode("Transform");
Transform19.DEF = "G3";
Transform19.translation = new SFVec3f(new float[1,1,0.01]);
let Shape20 = browser.currentScene.createNode("Shape");
let Appearance21 = browser.currentScene.createNode("Appearance");
let Material22 = browser.currentScene.createNode("Material");
Material22.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance21.material = Material22;

Shape20.appearance = Appearance21;

let Sphere23 = browser.currentScene.createNode("Sphere");
Sphere23.radius = 0.1;
Shape20.geometry = Sphere23;

Transform19.children = new MFNode();

Transform19.children[0] = Shape20;

let PlaneSensor24 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor24.description = "Grab to move";
PlaneSensor24.offset = new SFVec3f(new float[1,1,0.01]);
PlaneSensor24.DEF = "PS3";
Transform19.children[1] = PlaneSensor24;

let ROUTE25 = browser.currentScene.createNode("ROUTE");
ROUTE25.fromNode = "PS3";
ROUTE25.fromField = "translation_changed";
ROUTE25.toNode = "G3";
ROUTE25.toField = "set_translation";
Transform19.children[2] = ROUTE25;

browser.currentScene.children[5] = Transform19;

let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "G4";
Transform26.translation = new SFVec3f(new float[-1,1,0.01]);
let Shape27 = browser.currentScene.createNode("Shape");
let Appearance28 = browser.currentScene.createNode("Appearance");
let Material29 = browser.currentScene.createNode("Material");
Material29.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance28.material = Material29;

Shape27.appearance = Appearance28;

let Sphere30 = browser.currentScene.createNode("Sphere");
Sphere30.radius = 0.1;
Shape27.geometry = Sphere30;

Transform26.children = new MFNode();

Transform26.children[0] = Shape27;

let PlaneSensor31 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor31.description = "Grab to move";
PlaneSensor31.offset = new SFVec3f(new float[-1,1,0.01]);
PlaneSensor31.DEF = "PS4";
Transform26.children[1] = PlaneSensor31;

let ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromNode = "PS4";
ROUTE32.fromField = "translation_changed";
ROUTE32.toNode = "G4";
ROUTE32.toField = "set_translation";
Transform26.children[2] = ROUTE32;

browser.currentScene.children[6] = Transform26;

let Transform33 = browser.currentScene.createNode("Transform");
Transform33.DEF = "transC1";
let Transform34 = browser.currentScene.createNode("Transform");
Transform34.DEF = "rotscaleC1";
let Shape35 = browser.currentScene.createNode("Shape");
let Appearance36 = browser.currentScene.createNode("Appearance");
let Material37 = browser.currentScene.createNode("Material");
Material37.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material37.transparency = 0.5;
Appearance36.material = Material37;

Shape35.appearance = Appearance36;

let Cylinder38 = browser.currentScene.createNode("Cylinder");
Cylinder38.radius = 0.05;
Shape35.geometry = Cylinder38;

Transform34.children = new MFNode();

Transform34.children[0] = Shape35;

Transform33.children = new MFNode();

Transform33.children[0] = Transform34;

browser.currentScene.children[7] = Transform33;

let Transform39 = browser.currentScene.createNode("Transform");
Transform39.DEF = "transC2";
let Transform40 = browser.currentScene.createNode("Transform");
Transform40.DEF = "rotscaleC2";
let Shape41 = browser.currentScene.createNode("Shape");
let Appearance42 = browser.currentScene.createNode("Appearance");
let Material43 = browser.currentScene.createNode("Material");
Material43.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material43.transparency = 0.5;
Appearance42.material = Material43;

Shape41.appearance = Appearance42;

let Cylinder44 = browser.currentScene.createNode("Cylinder");
Cylinder44.radius = 0.05;
Shape41.geometry = Cylinder44;

Transform40.children = new MFNode();

Transform40.children[0] = Shape41;

Transform39.children = new MFNode();

Transform39.children[0] = Transform40;

browser.currentScene.children[8] = Transform39;

let Transform45 = browser.currentScene.createNode("Transform");
Transform45.DEF = "transC3";
let Transform46 = browser.currentScene.createNode("Transform");
Transform46.DEF = "rotscaleC3";
let Shape47 = browser.currentScene.createNode("Shape");
let Appearance48 = browser.currentScene.createNode("Appearance");
let Material49 = browser.currentScene.createNode("Material");
Material49.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material49.transparency = 0.5;
Appearance48.material = Material49;

Shape47.appearance = Appearance48;

let Cylinder50 = browser.currentScene.createNode("Cylinder");
Cylinder50.radius = 0.05;
Shape47.geometry = Cylinder50;

Transform46.children = new MFNode();

Transform46.children[0] = Shape47;

Transform45.children = new MFNode();

Transform45.children[0] = Transform46;

browser.currentScene.children[9] = Transform45;

let ProtoDeclare51 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare51.name = "x3dconnector";
let ProtoInterface52 = browser.currentScene.createNode("ProtoInterface");
let field53 = browser.currentScene.createNode("field");
field53.name = "startnode";
field53.accessType = "initializeOnly";
field53.type = "SFNode";
ProtoInterface52.field = new MFNode();

ProtoInterface52.field[0] = field53;

let field54 = browser.currentScene.createNode("field");
field54.name = "endnode";
field54.accessType = "initializeOnly";
field54.type = "SFNode";
ProtoInterface52.field[1] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "transnode";
field55.accessType = "initializeOnly";
field55.type = "SFNode";
ProtoInterface52.field[2] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "rotscalenode";
field56.accessType = "initializeOnly";
field56.type = "SFNode";
ProtoInterface52.field[3] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "set_startpoint";
field57.accessType = "inputOnly";
field57.type = "SFVec3f";
ProtoInterface52.field[4] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "set_endpoint";
field58.accessType = "inputOnly";
field58.type = "SFVec3f";
ProtoInterface52.field[5] = field58;

ProtoDeclare51.protoInterface = ProtoInterface52;

let ProtoBody59 = browser.currentScene.createNode("ProtoBody");
let Script60 = browser.currentScene.createNode("Script");
Script60.DEF = "S1";
let field61 = browser.currentScene.createNode("field");
field61.name = "startnode";
field61.accessType = "initializeOnly";
field61.type = "SFNode";
Script60.field = new MFNode();

Script60.field[0] = field61;

let field62 = browser.currentScene.createNode("field");
field62.name = "endnode";
field62.accessType = "initializeOnly";
field62.type = "SFNode";
Script60.field[1] = field62;

let field63 = browser.currentScene.createNode("field");
field63.name = "transnode";
field63.accessType = "initializeOnly";
field63.type = "SFNode";
Script60.field[2] = field63;

let field64 = browser.currentScene.createNode("field");
field64.name = "rotscalenode";
field64.accessType = "initializeOnly";
field64.type = "SFNode";
Script60.field[3] = field64;

let field65 = browser.currentScene.createNode("field");
field65.name = "set_startpoint";
field65.accessType = "inputOnly";
field65.type = "SFVec3f";
Script60.field[4] = field65;

let field66 = browser.currentScene.createNode("field");
field66.name = "set_endpoint";
field66.accessType = "inputOnly";
field66.type = "SFVec3f";
Script60.field[5] = field66;

let IS67 = browser.currentScene.createNode("IS");
let connect68 = browser.currentScene.createNode("connect");
connect68.nodeField = "startnode";
connect68.protoField = "startnode";
IS67.connect = new MFNode();

IS67.connect[0] = connect68;

let connect69 = browser.currentScene.createNode("connect");
connect69.nodeField = "endnode";
connect69.protoField = "endnode";
IS67.connect[1] = connect69;

let connect70 = browser.currentScene.createNode("connect");
connect70.nodeField = "transnode";
connect70.protoField = "transnode";
IS67.connect[2] = connect70;

let connect71 = browser.currentScene.createNode("connect");
connect71.nodeField = "rotscalenode";
connect71.protoField = "rotscalenode";
IS67.connect[3] = connect71;

let connect72 = browser.currentScene.createNode("connect");
connect72.nodeField = "set_startpoint";
connect72.protoField = "set_startpoint";
IS67.connect[4] = connect72;

let connect73 = browser.currentScene.createNode("connect");
connect73.nodeField = "set_endpoint";
connect73.protoField = "set_endpoint";
IS67.connect[5] = connect73;

Script60.iS = IS67;


Script60.setSourceCode(`ecmascript:\n"+
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
ProtoBody59.children = new MFNode();

ProtoBody59.children[0] = Script60;

ProtoDeclare51.protoBody = ProtoBody59;

browser.currentScene.children[10] = ProtoDeclare51;

let ProtoInstance74 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance74.name = "x3dconnector";
ProtoInstance74.DEF = "connector1";
let fieldValue75 = browser.currentScene.createNode("fieldValue");
fieldValue75.name = "startnode";
let Transform76 = browser.currentScene.createNode("Transform");
Transform76.USE = "G1";
fieldValue75.children = new MFNode();

fieldValue75.children[0] = Transform76;

ProtoInstance74.fieldValue = new MFNode();

ProtoInstance74.fieldValue[0] = fieldValue75;

let fieldValue77 = browser.currentScene.createNode("fieldValue");
fieldValue77.name = "endnode";
let Transform78 = browser.currentScene.createNode("Transform");
Transform78.USE = "G2";
fieldValue77.children = new MFNode();

fieldValue77.children[0] = Transform78;

ProtoInstance74.fieldValue[1] = fieldValue77;

let fieldValue79 = browser.currentScene.createNode("fieldValue");
fieldValue79.name = "transnode";
let Transform80 = browser.currentScene.createNode("Transform");
Transform80.USE = "transC1";
fieldValue79.children = new MFNode();

fieldValue79.children[0] = Transform80;

ProtoInstance74.fieldValue[2] = fieldValue79;

let fieldValue81 = browser.currentScene.createNode("fieldValue");
fieldValue81.name = "rotscalenode";
let Transform82 = browser.currentScene.createNode("Transform");
Transform82.USE = "rotscaleC1";
fieldValue81.children = new MFNode();

fieldValue81.children[0] = Transform82;

ProtoInstance74.fieldValue[3] = fieldValue81;

let fieldValue83 = browser.currentScene.createNode("fieldValue");
fieldValue83.name = "set_startpoint";
fieldValue83.value = "0 0 0";
ProtoInstance74.fieldValue[4] = fieldValue83;

let fieldValue84 = browser.currentScene.createNode("fieldValue");
fieldValue84.name = "set_endpoint";
fieldValue84.value = "0 0 0";
ProtoInstance74.fieldValue[5] = fieldValue84;

browser.currentScene.children[11] = ProtoInstance74;

let ProtoInstance85 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance85.name = "x3dconnector";
ProtoInstance85.DEF = "connector2";
let fieldValue86 = browser.currentScene.createNode("fieldValue");
fieldValue86.name = "startnode";
let Transform87 = browser.currentScene.createNode("Transform");
Transform87.USE = "G1";
fieldValue86.children = new MFNode();

fieldValue86.children[0] = Transform87;

ProtoInstance85.fieldValue = new MFNode();

ProtoInstance85.fieldValue[0] = fieldValue86;

let fieldValue88 = browser.currentScene.createNode("fieldValue");
fieldValue88.name = "endnode";
let Transform89 = browser.currentScene.createNode("Transform");
Transform89.USE = "G3";
fieldValue88.children = new MFNode();

fieldValue88.children[0] = Transform89;

ProtoInstance85.fieldValue[1] = fieldValue88;

let fieldValue90 = browser.currentScene.createNode("fieldValue");
fieldValue90.name = "transnode";
let Transform91 = browser.currentScene.createNode("Transform");
Transform91.USE = "transC2";
fieldValue90.children = new MFNode();

fieldValue90.children[0] = Transform91;

ProtoInstance85.fieldValue[2] = fieldValue90;

let fieldValue92 = browser.currentScene.createNode("fieldValue");
fieldValue92.name = "rotscalenode";
let Transform93 = browser.currentScene.createNode("Transform");
Transform93.USE = "rotscaleC2";
fieldValue92.children = new MFNode();

fieldValue92.children[0] = Transform93;

ProtoInstance85.fieldValue[3] = fieldValue92;

let fieldValue94 = browser.currentScene.createNode("fieldValue");
fieldValue94.name = "set_startpoint";
fieldValue94.value = "0 0 0";
ProtoInstance85.fieldValue[4] = fieldValue94;

let fieldValue95 = browser.currentScene.createNode("fieldValue");
fieldValue95.name = "set_endpoint";
fieldValue95.value = "0 0 0";
ProtoInstance85.fieldValue[5] = fieldValue95;

browser.currentScene.children[12] = ProtoInstance85;

let ProtoInstance96 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance96.name = "x3dconnector";
ProtoInstance96.DEF = "connector3";
let fieldValue97 = browser.currentScene.createNode("fieldValue");
fieldValue97.name = "startnode";
let Transform98 = browser.currentScene.createNode("Transform");
Transform98.USE = "G1";
fieldValue97.children = new MFNode();

fieldValue97.children[0] = Transform98;

ProtoInstance96.fieldValue = new MFNode();

ProtoInstance96.fieldValue[0] = fieldValue97;

let fieldValue99 = browser.currentScene.createNode("fieldValue");
fieldValue99.name = "endnode";
let Transform100 = browser.currentScene.createNode("Transform");
Transform100.USE = "G4";
fieldValue99.children = new MFNode();

fieldValue99.children[0] = Transform100;

ProtoInstance96.fieldValue[1] = fieldValue99;

let fieldValue101 = browser.currentScene.createNode("fieldValue");
fieldValue101.name = "transnode";
let Transform102 = browser.currentScene.createNode("Transform");
Transform102.USE = "transC3";
fieldValue101.children = new MFNode();

fieldValue101.children[0] = Transform102;

ProtoInstance96.fieldValue[2] = fieldValue101;

let fieldValue103 = browser.currentScene.createNode("fieldValue");
fieldValue103.name = "rotscalenode";
let Transform104 = browser.currentScene.createNode("Transform");
Transform104.USE = "rotscaleC3";
fieldValue103.children = new MFNode();

fieldValue103.children[0] = Transform104;

ProtoInstance96.fieldValue[3] = fieldValue103;

let fieldValue105 = browser.currentScene.createNode("fieldValue");
fieldValue105.name = "set_startpoint";
fieldValue105.value = "0 0 0";
ProtoInstance96.fieldValue[4] = fieldValue105;

let fieldValue106 = browser.currentScene.createNode("fieldValue");
fieldValue106.name = "set_endpoint";
fieldValue106.value = "0 0 0";
ProtoInstance96.fieldValue[5] = fieldValue106;

browser.currentScene.children[13] = ProtoInstance96;

let ROUTE107 = browser.currentScene.createNode("ROUTE");
ROUTE107.fromNode = "G1";
ROUTE107.fromField = "translation_changed";
ROUTE107.toNode = "connector1";
ROUTE107.toField = "set_startpoint";
browser.currentScene.children[14] = ROUTE107;

let ROUTE108 = browser.currentScene.createNode("ROUTE");
ROUTE108.fromNode = "G2";
ROUTE108.fromField = "translation_changed";
ROUTE108.toNode = "connector1";
ROUTE108.toField = "set_endpoint";
browser.currentScene.children[15] = ROUTE108;

let ROUTE109 = browser.currentScene.createNode("ROUTE");
ROUTE109.fromNode = "G1";
ROUTE109.fromField = "translation_changed";
ROUTE109.toNode = "connector2";
ROUTE109.toField = "set_startpoint";
browser.currentScene.children[16] = ROUTE109;

let ROUTE110 = browser.currentScene.createNode("ROUTE");
ROUTE110.fromNode = "G3";
ROUTE110.fromField = "translation_changed";
ROUTE110.toNode = "connector2";
ROUTE110.toField = "set_endpoint";
browser.currentScene.children[17] = ROUTE110;

let ROUTE111 = browser.currentScene.createNode("ROUTE");
ROUTE111.fromNode = "G1";
ROUTE111.fromField = "translation_changed";
ROUTE111.toNode = "connector3";
ROUTE111.toField = "set_startpoint";
browser.currentScene.children[18] = ROUTE111;

let ROUTE112 = browser.currentScene.createNode("ROUTE");
ROUTE112.fromNode = "G4";
ROUTE112.fromField = "translation_changed";
ROUTE112.toNode = "connector3";
ROUTE112.toField = "set_endpoint";
browser.currentScene.children[19] = ROUTE112;

