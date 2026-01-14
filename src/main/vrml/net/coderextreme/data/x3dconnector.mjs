const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "x3dconnector.x3d");
scene.addMetaData("creator", "Lost, Doug Sanden I think");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d");
scene.addMetaData("description", "a generic proto to connect two objects");
await browser .loadComponents (scene);
let Viewpoint8 = browser.currentScene.createNode("Viewpoint");
Viewpoint8.position = new X3D.SFVec3f([0,0,5]);
Viewpoint8.description = "Only Viewpoint";
browser.currentScene.children = new X3D.MFNode();

browser.currentScene.children[0] = Viewpoint8;

let Background9 = browser.currentScene.createNode("Background");
Background9.skyColor = new X3D.MFColor([0.4,0.4,0.4]);
browser.currentScene.children[1] = Background9;

let Transform10 = browser.currentScene.createNode("Transform");
Transform10.DEF = "G1";
let Shape11 = browser.currentScene.createNode("Shape");
let Appearance12 = browser.currentScene.createNode("Appearance");
let Material13 = browser.currentScene.createNode("Material");
Material13.diffuseColor = new X3D.SFColor([0.7,0.2,0.2]);
material = Material13;

appearance = Appearance12;

let Sphere14 = browser.currentScene.createNode("Sphere");
Sphere14.radius = 0.1;
geometry = Sphere14;

Transform10YYY.child = new X3D.undefined();

Transform10ZZZ.child[0] = Shape11;

let PlaneSensor15 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor15.description = "Grab to move";
PlaneSensor15.DEF = "PS1";
Transform10ZZZ.children[1] = PlaneSensor15;

let ROUTE16 = browser.currentScene.createNode("ROUTE");
ROUTE16.fromNode = "PS1";
ROUTE16.fromField = "translation_changed";
ROUTE16.toNode = "G1";
ROUTE16.toField = "set_translation";
Transform10ZZZ.children[2] = ROUTE16;

browser.currentScene.children[2] = Transform10;

let Transform17 = browser.currentScene.createNode("Transform");
Transform17.DEF = "G2";
Transform17.translation = new X3D.SFVec3f([1,-1,0.01]);
let Shape18 = browser.currentScene.createNode("Shape");
let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new X3D.SFColor([0.2,0.7,0.2]);
material = Material20;

appearance = Appearance19;

let Sphere21 = browser.currentScene.createNode("Sphere");
Sphere21.radius = 0.1;
geometry = Sphere21;

Transform17YYY.child = new X3D.undefined();

Transform17ZZZ.child[0] = Shape18;

let PlaneSensor22 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor22.description = "Grab to move";
PlaneSensor22.offset = new X3D.SFVec3f([1,-1,0.01]);
PlaneSensor22.DEF = "PS2";
Transform17ZZZ.children[1] = PlaneSensor22;

let ROUTE23 = browser.currentScene.createNode("ROUTE");
ROUTE23.fromNode = "PS2";
ROUTE23.fromField = "translation_changed";
ROUTE23.toNode = "G2";
ROUTE23.toField = "set_translation";
Transform17ZZZ.children[2] = ROUTE23;

browser.currentScene.children[3] = Transform17;

let Transform24 = browser.currentScene.createNode("Transform");
Transform24.DEF = "transC1";
let Transform25 = browser.currentScene.createNode("Transform");
Transform25.DEF = "rotscaleC1";
let Shape26 = browser.currentScene.createNode("Shape");
let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.diffuseColor = new X3D.SFColor([0.2,0.7,0.7]);
Material28.transparency = 0.5;
material = Material28;

appearance = Appearance27;

let Cylinder29 = browser.currentScene.createNode("Cylinder");
Cylinder29.radius = 0.05;
geometry = Cylinder29;

Transform25YYY.child = new X3D.undefined();

Transform25ZZZ.child[0] = Shape26;

Transform24YYY.children = new X3D.MFNode();

Transform24ZZZ.children[0] = Transform25;

browser.currentScene.children[4] = Transform24;

let ProtoDeclare30 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare30.name = "x3dconnector";
ProtoInterface32.getField("startnode")ProtoInterface31YYY.field = new X3D.MFNode();

ProtoInterface33.getField("endnode")ProtoInterface31YYY.field = new X3D.MFNode();

ProtoInterface34.getField("transnode")ProtoInterface31YYY.field = new X3D.MFNode();

ProtoInterface35.getField("rotscalenode")ProtoInterface31YYY.field = new X3D.MFNode();

ProtoInterface36.getField("set_startpoint")ProtoInterface31YYY.field = new X3D.MFNode();

ProtoInterface37.getField("set_endpoint")ProtoInterface31YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface31;

let ProtoBody38 = browser.currentScene.createNode("ProtoBody");
let Script39 = browser.currentScene.createNode("Script");
Script39.DEF = "S1";
Script40.getField("startnode")Script39YYY.field = new X3D.MFNode();

Script41.getField("endnode")Script39YYY.field = new X3D.MFNode();

Script42.getField("transnode")Script39YYY.field = new X3D.MFNode();

Script43.getField("rotscalenode")Script39YYY.field = new X3D.MFNode();

Script44.getField("set_startpoint")Script39YYY.field = new X3D.MFNode();

Script45.getField("set_endpoint")Script39YYY.field = new X3D.MFNode();

let IS46 = browser.currentScene.createNode("IS");
let connect47 = browser.currentScene.createNode("connect");
connect47.nodeField = "startnode";
connect47.protoField = "startnode";
IS46YYY.connect = new X3D.MFNode();

IS46ZZZ.connect[0] = connect47;

let connect48 = browser.currentScene.createNode("connect");
connect48.nodeField = "endnode";
connect48.protoField = "endnode";
IS46ZZZ.connect[1] = connect48;

let connect49 = browser.currentScene.createNode("connect");
connect49.nodeField = "transnode";
connect49.protoField = "transnode";
IS46ZZZ.connect[2] = connect49;

let connect50 = browser.currentScene.createNode("connect");
connect50.nodeField = "rotscalenode";
connect50.protoField = "rotscalenode";
IS46ZZZ.connect[3] = connect50;

let connect51 = browser.currentScene.createNode("connect");
connect51.nodeField = "set_startpoint";
connect51.protoField = "set_startpoint";
IS46ZZZ.connect[4] = connect51;

let connect52 = browser.currentScene.createNode("connect");
connect52.nodeField = "set_endpoint";
connect52.protoField = "set_endpoint";
IS46ZZZ.connect[5] = connect52;

iS = IS46;


Script39.setSourceCode(`ecmascript:\n"+
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
ProtoBody38YYY.children = new X3D.MFNode();

ProtoBody38ZZZ.children[0] = Script39;

protoBody = ProtoBody38;

browser.currentScene.children[5] = ProtoDeclare30;

let ProtoInstance53 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance53.name = "x3dconnector";
ProtoInstance53.DEF = "connector1";
let fieldValue54 = browser.currentScene.createNode("fieldValue");
fieldValue54.name = "startnode";
let Transform55 = browser.currentScene.createNode("Transform");
Transform55.USE = "G1";
fieldValue54YYY.children = new X3D.MFNode();

fieldValue54ZZZ.children[0] = Transform55;

ProtoInstance53YYY.fieldValue = new X3D.MFNode();

ProtoInstance53ZZZ.fieldValue[0] = fieldValue54;

let fieldValue56 = browser.currentScene.createNode("fieldValue");
fieldValue56.name = "endnode";
let Transform57 = browser.currentScene.createNode("Transform");
Transform57.USE = "G2";
fieldValue56YYY.children = new X3D.MFNode();

fieldValue56ZZZ.children[0] = Transform57;

ProtoInstance53ZZZ.fieldValue[1] = fieldValue56;

let fieldValue58 = browser.currentScene.createNode("fieldValue");
fieldValue58.name = "transnode";
let Transform59 = browser.currentScene.createNode("Transform");
Transform59.USE = "transC1";
fieldValue58YYY.children = new X3D.MFNode();

fieldValue58ZZZ.children[0] = Transform59;

ProtoInstance53ZZZ.fieldValue[2] = fieldValue58;

let fieldValue60 = browser.currentScene.createNode("fieldValue");
fieldValue60.name = "rotscalenode";
let Transform61 = browser.currentScene.createNode("Transform");
Transform61.USE = "rotscaleC1";
fieldValue60YYY.children = new X3D.MFNode();

fieldValue60ZZZ.children[0] = Transform61;

ProtoInstance53ZZZ.fieldValue[3] = fieldValue60;

//<fieldValue name='set_startpoint'> </fieldValue> <fieldValue name='set_endpoint'> </fieldValue>
browser.currentScene.children[6] = ProtoInstance53;

let ROUTE62 = browser.currentScene.createNode("ROUTE");
ROUTE62.fromNode = "G1";
ROUTE62.fromField = "translation_changed";
ROUTE62.toNode = "connector1";
ROUTE62.toField = "set_startpoint";
browser.currentScene.children[7] = ROUTE62;

let ROUTE63 = browser.currentScene.createNode("ROUTE");
ROUTE63.fromNode = "G2";
ROUTE63.fromField = "translation_changed";
ROUTE63.toNode = "connector1";
ROUTE63.toField = "set_endpoint";
browser.currentScene.children[8] = ROUTE63;

}
main ();
