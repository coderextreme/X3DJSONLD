const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "arcold.x3d");
scene.addMetaData("creator", "John Carlson");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/personal/arc.x3d");
scene.addMetaData("description", "an attempt to implement an arc in a graph");
await browser .loadComponents (scene);
let Viewpoint8 = browser.currentScene.createNode("Viewpoint");
Viewpoint8.position = new X3D.SFVec3f([0,0,5]);
Viewpoint8.description = "a moving graph";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Viewpoint8;

let Background9 = browser.currentScene.createNode("Background");
Background9.skyColor = new X3D.MFColor([0.4,0.4,0.4]);
browser.currentScene.children[1] = Background9;

let Transform10 = browser.currentScene.createNode("Transform");
Transform10.DEF = "trans1";
let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "rotscale1";
let Shape12 = browser.currentScene.createNode("Shape");
let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new X3D.SFColor([0.2,0.7,0.7]);
material = Material14;

appearance = Appearance13;

let Cylinder15 = browser.currentScene.createNode("Cylinder");
Cylinder15.radius = 0.1;
geometry = Cylinder15;

Transform11YYY.child = new X3D.undefined();

Transform11ZZZ.child[0] = Shape12;

Transform10YYY.children = new X3D.MFNode();

Transform10ZZZ.children[0] = Transform11;

browser.currentScene.children[2] = Transform10;

let Transform16 = browser.currentScene.createNode("Transform");
Transform16.DEF = "trans2";
let Transform17 = browser.currentScene.createNode("Transform");
Transform17.DEF = "rotscale2";
let Shape18 = browser.currentScene.createNode("Shape");
let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new X3D.SFColor([0.2,0.7,0.7]);
material = Material20;

appearance = Appearance19;

let Cylinder21 = browser.currentScene.createNode("Cylinder");
Cylinder21.radius = 0.1;
geometry = Cylinder21;

Transform17YYY.child = new X3D.undefined();

Transform17ZZZ.child[0] = Shape18;

Transform16YYY.children = new X3D.MFNode();

Transform16ZZZ.children[0] = Transform17;

browser.currentScene.children[3] = Transform16;

let Transform22 = browser.currentScene.createNode("Transform");
Transform22.DEF = "trans3";
let Transform23 = browser.currentScene.createNode("Transform");
Transform23.DEF = "rotscale3";
let Shape24 = browser.currentScene.createNode("Shape");
let Appearance25 = browser.currentScene.createNode("Appearance");
let Material26 = browser.currentScene.createNode("Material");
Material26.diffuseColor = new X3D.SFColor([0.2,0.7,0.7]);
material = Material26;

appearance = Appearance25;

let Cylinder27 = browser.currentScene.createNode("Cylinder");
Cylinder27.radius = 0.1;
geometry = Cylinder27;

Transform23YYY.child = new X3D.undefined();

Transform23ZZZ.child[0] = Shape24;

Transform22YYY.children = new X3D.MFNode();

Transform22ZZZ.children[0] = Transform23;

browser.currentScene.children[4] = Transform22;

let ProtoDeclare28 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface30.getField("translation").setValue("0 0 0");
ProtoInterface29YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface29;

let ProtoBody31 = browser.currentScene.createNode("ProtoBody");
let Transform32 = browser.currentScene.createNode("Transform");
Transform32.DEF = "node";
let IS33 = browser.currentScene.createNode("IS");
let connect34 = browser.currentScene.createNode("connect");
connect34.nodeField = "translation";
connect34.protoField = "translation";
IS33YYY.connect = new X3D.MFNode();

IS33ZZZ.connect[0] = connect34;

iS = IS33;

let Shape35 = browser.currentScene.createNode("Shape");
let Sphere36 = browser.currentScene.createNode("Sphere");
Sphere36.radius = 0.1;
geometry = Sphere36;

let Appearance37 = browser.currentScene.createNode("Appearance");
let Material38 = browser.currentScene.createNode("Material");
Material38.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material38;

appearance = Appearance37;

Transform32YYY.child = new X3D.undefined();

Transform32ZZZ.child[0] = Shape35;

let PositionInterpolator39 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator39.DEF = "PI1";
PositionInterpolator39.key = new X3D.MFFloat([0,1]);
PositionInterpolator39.keyValue = new X3D.MFVec3f([0,0,0,0,5,0]);
Transform32ZZZ.children[1] = PositionInterpolator39;

let Script40 = browser.currentScene.createNode("Script");
Script40.DEF = "MB1";
Script41.getField("translation").setValue("50 50 0");
Script40YYY.field = new X3D.MFNode();

Script42.getField("old").setValue("0 0 0");
Script40YYY.field = new X3D.MFNode();

Script43.getField("set_location")Script40YYY.field = new X3D.MFNode();

Script44.getField("keyValue")Script40YYY.field = new X3D.MFNode();


Script40.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}`)
Transform32ZZZ.children[2] = Script40;

let TimeSensor45 = browser.currentScene.createNode("TimeSensor");
TimeSensor45.DEF = "CL1";
TimeSensor45.cycleInterval = 3;
TimeSensor45.loop = True;
Transform32ZZZ.children[3] = TimeSensor45;

let ROUTE46 = browser.currentScene.createNode("ROUTE");
ROUTE46.fromNode = "CL1";
ROUTE46.fromField = "cycleTime";
ROUTE46.toNode = "MB1";
ROUTE46.toField = "set_location";
Transform32ZZZ.children[4] = ROUTE46;

let ROUTE47 = browser.currentScene.createNode("ROUTE");
ROUTE47.fromNode = "CL1";
ROUTE47.fromField = "fraction_changed";
ROUTE47.toNode = "PI1";
ROUTE47.toField = "set_fraction";
Transform32ZZZ.children[5] = ROUTE47;

let ROUTE48 = browser.currentScene.createNode("ROUTE");
ROUTE48.fromNode = "MB1";
ROUTE48.fromField = "keyValue";
ROUTE48.toNode = "PI1";
ROUTE48.toField = "keyValue";
Transform32ZZZ.children[6] = ROUTE48;

let ROUTE49 = browser.currentScene.createNode("ROUTE");
ROUTE49.fromNode = "PI1";
ROUTE49.fromField = "value_changed";
ROUTE49.toNode = "node";
ROUTE49.toField = "set_translation";
Transform32ZZZ.children[7] = ROUTE49;

ProtoBody31YYY.children = new X3D.MFNode();

ProtoBody31ZZZ.children[0] = Transform32;

protoBody = ProtoBody31;

browser.currentScene.children[5] = ProtoDeclare28;

//from doug sanden
let ProtoDeclare50 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface52.getField("startnode")ProtoInterface51YYY.field = new X3D.MFNode();

ProtoInterface53.getField("endnode")ProtoInterface51YYY.field = new X3D.MFNode();

ProtoInterface54.getField("transnode")ProtoInterface51YYY.field = new X3D.MFNode();

ProtoInterface55.getField("rotscalenode")ProtoInterface51YYY.field = new X3D.MFNode();

ProtoInterface56.getField("set_startpoint")ProtoInterface51YYY.field = new X3D.MFNode();

ProtoInterface57.getField("set_endpoint")ProtoInterface51YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface51;

let ProtoBody58 = browser.currentScene.createNode("ProtoBody");
let Script59 = browser.currentScene.createNode("Script");
Script59.DEF = "S1";
Script60.getField("startnode")Script59YYY.field = new X3D.MFNode();

Script61.getField("endnode")Script59YYY.field = new X3D.MFNode();

Script62.getField("transnode")Script59YYY.field = new X3D.MFNode();

Script63.getField("rotscalenode")Script59YYY.field = new X3D.MFNode();

Script64.getField("set_startpoint")Script59YYY.field = new X3D.MFNode();

Script65.getField("set_endpoint")Script59YYY.field = new X3D.MFNode();

let IS66 = browser.currentScene.createNode("IS");
let connect67 = browser.currentScene.createNode("connect");
connect67.nodeField = "startnode";
connect67.protoField = "startnode";
IS66YYY.connect = new X3D.MFNode();

IS66ZZZ.connect[0] = connect67;

let connect68 = browser.currentScene.createNode("connect");
connect68.nodeField = "endnode";
connect68.protoField = "endnode";
IS66ZZZ.connect[1] = connect68;

let connect69 = browser.currentScene.createNode("connect");
connect69.nodeField = "transnode";
connect69.protoField = "transnode";
IS66ZZZ.connect[2] = connect69;

let connect70 = browser.currentScene.createNode("connect");
connect70.nodeField = "rotscalenode";
connect70.protoField = "rotscalenode";
IS66ZZZ.connect[3] = connect70;

let connect71 = browser.currentScene.createNode("connect");
connect71.nodeField = "set_startpoint";
connect71.protoField = "set_startpoint";
IS66ZZZ.connect[4] = connect71;

let connect72 = browser.currentScene.createNode("connect");
connect72.nodeField = "set_endpoint";
connect72.protoField = "set_endpoint";
IS66ZZZ.connect[5] = connect72;

iS = IS66;


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
ProtoBody58YYY.children = new X3D.MFNode();

ProtoBody58ZZZ.children[0] = Script59;

protoBody = ProtoBody58;

browser.currentScene.children[6] = ProtoDeclare50;

let ProtoInstance73 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance73.name = "point";
ProtoInstance73.DEF = "G1";
browser.currentScene.children[7] = ProtoInstance73;

let ProtoInstance74 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance74.name = "point";
ProtoInstance74.DEF = "G2";
browser.currentScene.children[8] = ProtoInstance74;

let ProtoInstance75 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance75.name = "point";
ProtoInstance75.DEF = "G3";
browser.currentScene.children[9] = ProtoInstance75;

let ProtoInstance76 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance76.name = "point";
ProtoInstance76.DEF = "G4";
browser.currentScene.children[10] = ProtoInstance76;

let ProtoInstance77 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance77.name = "x3dconnector";
ProtoInstance77.DEF = "connector1";
let fieldValue78 = browser.currentScene.createNode("fieldValue");
fieldValue78.name = "startnode";
let ProtoInstance79 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance79.USE = "G1";
fieldValue78YYY.children = new X3D.MFNode();

fieldValue78ZZZ.children[0] = ProtoInstance79;

ProtoInstance77YYY.fieldValue = new X3D.MFNode();

ProtoInstance77ZZZ.fieldValue[0] = fieldValue78;

let fieldValue80 = browser.currentScene.createNode("fieldValue");
fieldValue80.name = "endnode";
let ProtoInstance81 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance81.USE = "G2";
fieldValue80YYY.children = new X3D.MFNode();

fieldValue80ZZZ.children[0] = ProtoInstance81;

ProtoInstance77ZZZ.fieldValue[1] = fieldValue80;

let fieldValue82 = browser.currentScene.createNode("fieldValue");
fieldValue82.name = "transnode";
let Transform83 = browser.currentScene.createNode("Transform");
Transform83.USE = "trans1";
fieldValue82YYY.children = new X3D.MFNode();

fieldValue82ZZZ.children[0] = Transform83;

ProtoInstance77ZZZ.fieldValue[2] = fieldValue82;

let fieldValue84 = browser.currentScene.createNode("fieldValue");
fieldValue84.name = "rotscalenode";
let Transform85 = browser.currentScene.createNode("Transform");
Transform85.USE = "rotscale1";
fieldValue84YYY.children = new X3D.MFNode();

fieldValue84ZZZ.children[0] = Transform85;

ProtoInstance77ZZZ.fieldValue[3] = fieldValue84;

browser.currentScene.children[11] = ProtoInstance77;

let ProtoInstance86 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance86.name = "x3dconnector";
ProtoInstance86.DEF = "connector2";
let fieldValue87 = browser.currentScene.createNode("fieldValue");
fieldValue87.name = "startnode";
let ProtoInstance88 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance88.USE = "G1";
fieldValue87YYY.children = new X3D.MFNode();

fieldValue87ZZZ.children[0] = ProtoInstance88;

ProtoInstance86YYY.fieldValue = new X3D.MFNode();

ProtoInstance86ZZZ.fieldValue[0] = fieldValue87;

let fieldValue89 = browser.currentScene.createNode("fieldValue");
fieldValue89.name = "endnode";
let ProtoInstance90 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance90.USE = "G3";
fieldValue89YYY.children = new X3D.MFNode();

fieldValue89ZZZ.children[0] = ProtoInstance90;

ProtoInstance86ZZZ.fieldValue[1] = fieldValue89;

let fieldValue91 = browser.currentScene.createNode("fieldValue");
fieldValue91.name = "transnode";
let Transform92 = browser.currentScene.createNode("Transform");
Transform92.USE = "trans2";
fieldValue91YYY.children = new X3D.MFNode();

fieldValue91ZZZ.children[0] = Transform92;

ProtoInstance86ZZZ.fieldValue[2] = fieldValue91;

let fieldValue93 = browser.currentScene.createNode("fieldValue");
fieldValue93.name = "rotscalenode";
let Transform94 = browser.currentScene.createNode("Transform");
Transform94.USE = "rotscale2";
fieldValue93YYY.children = new X3D.MFNode();

fieldValue93ZZZ.children[0] = Transform94;

ProtoInstance86ZZZ.fieldValue[3] = fieldValue93;

browser.currentScene.children[12] = ProtoInstance86;

let ProtoInstance95 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance95.name = "x3dconnector";
ProtoInstance95.DEF = "connector3";
let fieldValue96 = browser.currentScene.createNode("fieldValue");
fieldValue96.name = "startnode";
let ProtoInstance97 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance97.USE = "G1";
fieldValue96YYY.children = new X3D.MFNode();

fieldValue96ZZZ.children[0] = ProtoInstance97;

ProtoInstance95YYY.fieldValue = new X3D.MFNode();

ProtoInstance95ZZZ.fieldValue[0] = fieldValue96;

let fieldValue98 = browser.currentScene.createNode("fieldValue");
fieldValue98.name = "endnode";
let ProtoInstance99 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance99.USE = "G4";
fieldValue98YYY.children = new X3D.MFNode();

fieldValue98ZZZ.children[0] = ProtoInstance99;

ProtoInstance95ZZZ.fieldValue[1] = fieldValue98;

let fieldValue100 = browser.currentScene.createNode("fieldValue");
fieldValue100.name = "transnode";
let Transform101 = browser.currentScene.createNode("Transform");
Transform101.USE = "trans3";
fieldValue100YYY.children = new X3D.MFNode();

fieldValue100ZZZ.children[0] = Transform101;

ProtoInstance95ZZZ.fieldValue[2] = fieldValue100;

let fieldValue102 = browser.currentScene.createNode("fieldValue");
fieldValue102.name = "rotscalenode";
let Transform103 = browser.currentScene.createNode("Transform");
Transform103.USE = "rotscale3";
fieldValue102YYY.children = new X3D.MFNode();

fieldValue102ZZZ.children[0] = Transform103;

ProtoInstance95ZZZ.fieldValue[3] = fieldValue102;

browser.currentScene.children[13] = ProtoInstance95;

let ROUTE104 = browser.currentScene.createNode("ROUTE");
ROUTE104.fromNode = "G1";
ROUTE104.fromField = "translation_changed";
ROUTE104.toNode = "connector1";
ROUTE104.toField = "set_startpoint";
browser.currentScene.children[14] = ROUTE104;

let ROUTE105 = browser.currentScene.createNode("ROUTE");
ROUTE105.fromNode = "G2";
ROUTE105.fromField = "translation_changed";
ROUTE105.toNode = "connector1";
ROUTE105.toField = "set_endpoint";
browser.currentScene.children[15] = ROUTE105;

let ROUTE106 = browser.currentScene.createNode("ROUTE");
ROUTE106.fromNode = "G1";
ROUTE106.fromField = "translation_changed";
ROUTE106.toNode = "connector2";
ROUTE106.toField = "set_startpoint";
browser.currentScene.children[16] = ROUTE106;

let ROUTE107 = browser.currentScene.createNode("ROUTE");
ROUTE107.fromNode = "G3";
ROUTE107.fromField = "translation_changed";
ROUTE107.toNode = "connector2";
ROUTE107.toField = "set_endpoint";
browser.currentScene.children[17] = ROUTE107;

let ROUTE108 = browser.currentScene.createNode("ROUTE");
ROUTE108.fromNode = "G1";
ROUTE108.fromField = "translation_changed";
ROUTE108.toNode = "connector3";
ROUTE108.toField = "set_startpoint";
browser.currentScene.children[18] = ROUTE108;

let ROUTE109 = browser.currentScene.createNode("ROUTE");
ROUTE109.fromNode = "G4";
ROUTE109.fromField = "translation_changed";
ROUTE109.toNode = "connector3";
ROUTE109.toField = "set_endpoint";
browser.currentScene.children[19] = ROUTE109;

}
main ();
