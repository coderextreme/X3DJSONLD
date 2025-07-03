const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "arc.x3d");
scene.addMetaData("creator", "Lost, Doug Sanden I think");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/arc.x3d");
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

let ProtoDeclare10 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface12.getField("translation").setValue("0 0 0");
ProtoInterface11YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface11;

let ProtoBody13 = browser.currentScene.createNode("ProtoBody");
let Transform14 = browser.currentScene.createNode("Transform");
Transform14.DEF = "node";
let IS15 = browser.currentScene.createNode("IS");
let connect16 = browser.currentScene.createNode("connect");
connect16.nodeField = "translation";
connect16.protoField = "translation";
IS15YYY.connect = new X3D.MFNode();

IS15ZZZ.connect[0] = connect16;

iS = IS15;

let Shape17 = browser.currentScene.createNode("Shape");
let Sphere18 = browser.currentScene.createNode("Sphere");
Sphere18.radius = 0.1;
geometry = Sphere18;

let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new X3D.SFColor([1,0,0]);
material = Material20;

appearance = Appearance19;

Transform14YYY.child = new X3D.undefined();

Transform14ZZZ.child[0] = Shape17;

let PositionInterpolator21 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator21.DEF = "PI1";
PositionInterpolator21.key = new X3D.MFFloat([0,1]);
PositionInterpolator21.keyValue = new X3D.MFVec3f([0,0,0,0,5,0]);
Transform14ZZZ.children[1] = PositionInterpolator21;

let Script22 = browser.currentScene.createNode("Script");
Script22.DEF = "MB1";
Script23.getField("translation").setValue("50 50 0");
Script22YYY.field = new X3D.MFNode();

Script24.getField("old").setValue("0 0 0");
Script22YYY.field = new X3D.MFNode();

Script25.getField("set_location")Script22YYY.field = new X3D.MFNode();

Script26.getField("keyValue").setValue("0 0 0 0 5 0");
Script22YYY.field = new X3D.MFNode();


Script22.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}`)
Transform14ZZZ.children[2] = Script22;

let TimeSensor27 = browser.currentScene.createNode("TimeSensor");
TimeSensor27.DEF = "CL1";
TimeSensor27.cycleInterval = 3;
TimeSensor27.loop = True;
Transform14ZZZ.children[3] = TimeSensor27;

let ROUTE28 = browser.currentScene.createNode("ROUTE");
ROUTE28.fromNode = "CL1";
ROUTE28.fromField = "cycleTime";
ROUTE28.toNode = "MB1";
ROUTE28.toField = "set_location";
Transform14ZZZ.children[4] = ROUTE28;

let ROUTE29 = browser.currentScene.createNode("ROUTE");
ROUTE29.fromNode = "CL1";
ROUTE29.fromField = "fraction_changed";
ROUTE29.toNode = "PI1";
ROUTE29.toField = "set_fraction";
Transform14ZZZ.children[5] = ROUTE29;

let ROUTE30 = browser.currentScene.createNode("ROUTE");
ROUTE30.fromNode = "MB1";
ROUTE30.fromField = "keyValue";
ROUTE30.toNode = "PI1";
ROUTE30.toField = "keyValue";
Transform14ZZZ.children[6] = ROUTE30;

let ROUTE31 = browser.currentScene.createNode("ROUTE");
ROUTE31.fromNode = "PI1";
ROUTE31.fromField = "value_changed";
ROUTE31.toNode = "node";
ROUTE31.toField = "set_translation";
Transform14ZZZ.children[7] = ROUTE31;

ProtoBody13YYY.children = new X3D.MFNode();

ProtoBody13ZZZ.children[0] = Transform14;

protoBody = ProtoBody13;

browser.currentScene.children[2] = ProtoDeclare10;

let ProtoDeclare32 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface34.getField("startnode")ProtoInterface33YYY.field = new X3D.MFNode();

ProtoInterface35.getField("endnode")ProtoInterface33YYY.field = new X3D.MFNode();

ProtoInterface36.getField("set_startpoint")ProtoInterface33YYY.field = new X3D.MFNode();

ProtoInterface37.getField("set_endpoint")ProtoInterface33YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface33;

let ProtoBody38 = browser.currentScene.createNode("ProtoBody");
let Group39 = browser.currentScene.createNode("Group");
let Transform40 = browser.currentScene.createNode("Transform");
Transform40.DEF = "trans";
let Transform41 = browser.currentScene.createNode("Transform");
Transform41.DEF = "rotscale";
let Shape42 = browser.currentScene.createNode("Shape");
let Appearance43 = browser.currentScene.createNode("Appearance");
let Material44 = browser.currentScene.createNode("Material");
Material44.diffuseColor = new X3D.SFColor([0.2,0.7,0.7]);
Material44.transparency = 0.5;
material = Material44;

appearance = Appearance43;

let Cylinder45 = browser.currentScene.createNode("Cylinder");
Cylinder45.radius = 0.05;
geometry = Cylinder45;

Transform41YYY.child = new X3D.undefined();

Transform41ZZZ.child[0] = Shape42;

Transform40YYY.children = new X3D.MFNode();

Transform40ZZZ.children[0] = Transform41;

Group39YYY.children = new X3D.MFNode();

Group39ZZZ.children[0] = Transform40;

let Script46 = browser.currentScene.createNode("Script");
Script46.DEF = "S1";
Script47.getField("startnode")Script46YYY.field = new X3D.MFNode();

Script48.getField("endnode")Script46YYY.field = new X3D.MFNode();

Script49.getField("position")let Transform50 = browser.currentScene.createNode("Transform");
Transform50.USE = "trans";
field49YYY.children = new X3D.MFNode();

field49ZZZ.children[0] = Transform50;

Script46YYY.field = new X3D.MFNode();

Script51.getField("rotscale")let Transform52 = browser.currentScene.createNode("Transform");
Transform52.USE = "rotscale";
field51YYY.children = new X3D.MFNode();

field51ZZZ.children[0] = Transform52;

Script46YYY.field = new X3D.MFNode();

Script53.getField("set_startpoint")Script46YYY.field = new X3D.MFNode();

Script54.getField("set_endpoint")Script46YYY.field = new X3D.MFNode();

let IS55 = browser.currentScene.createNode("IS");
let connect56 = browser.currentScene.createNode("connect");
connect56.nodeField = "startnode";
connect56.protoField = "startnode";
IS55YYY.connect = new X3D.MFNode();

IS55ZZZ.connect[0] = connect56;

let connect57 = browser.currentScene.createNode("connect");
connect57.nodeField = "endnode";
connect57.protoField = "endnode";
IS55ZZZ.connect[1] = connect57;

let connect58 = browser.currentScene.createNode("connect");
connect58.nodeField = "set_startpoint";
connect58.protoField = "set_startpoint";
IS55ZZZ.connect[2] = connect58;

let connect59 = browser.currentScene.createNode("connect");
connect59.nodeField = "set_endpoint";
connect59.protoField = "set_endpoint";
IS55ZZZ.connect[3] = connect59;

iS = IS55;


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
Group39ZZZ.children[1] = Script46;

ProtoBody38YYY.children = new X3D.MFNode();

ProtoBody38ZZZ.children[0] = Group39;

protoBody = ProtoBody38;

browser.currentScene.children[3] = ProtoDeclare32;

let ProtoInstance60 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance60.name = "point";
ProtoInstance60.DEF = "G1";
browser.currentScene.children[4] = ProtoInstance60;

let ProtoInstance61 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance61.name = "point";
ProtoInstance61.DEF = "G2";
browser.currentScene.children[5] = ProtoInstance61;

let ProtoInstance62 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance62.name = "point";
ProtoInstance62.DEF = "G3";
browser.currentScene.children[6] = ProtoInstance62;

let ProtoInstance63 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance63.name = "point";
ProtoInstance63.DEF = "G4";
browser.currentScene.children[7] = ProtoInstance63;

let ProtoInstance64 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance64.name = "x3dconnector";
ProtoInstance64.DEF = "connector1";
let fieldValue65 = browser.currentScene.createNode("fieldValue");
fieldValue65.name = "startnode";
let ProtoInstance66 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance66.USE = "G1";
fieldValue65YYY.children = new X3D.MFNode();

fieldValue65ZZZ.children[0] = ProtoInstance66;

ProtoInstance64YYY.fieldValue = new X3D.MFNode();

ProtoInstance64ZZZ.fieldValue[0] = fieldValue65;

let fieldValue67 = browser.currentScene.createNode("fieldValue");
fieldValue67.name = "endnode";
let ProtoInstance68 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance68.USE = "G2";
fieldValue67YYY.children = new X3D.MFNode();

fieldValue67ZZZ.children[0] = ProtoInstance68;

ProtoInstance64ZZZ.fieldValue[1] = fieldValue67;

let fieldValue69 = browser.currentScene.createNode("fieldValue");
fieldValue69.name = "set_startpoint";
ProtoInstance64ZZZ.fieldValue[2] = fieldValue69;

let fieldValue70 = browser.currentScene.createNode("fieldValue");
fieldValue70.name = "set_endpoint";
ProtoInstance64ZZZ.fieldValue[3] = fieldValue70;

browser.currentScene.children[8] = ProtoInstance64;

let ProtoInstance71 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance71.name = "x3dconnector";
ProtoInstance71.DEF = "connector2";
let fieldValue72 = browser.currentScene.createNode("fieldValue");
fieldValue72.name = "startnode";
let ProtoInstance73 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance73.USE = "G1";
fieldValue72YYY.children = new X3D.MFNode();

fieldValue72ZZZ.children[0] = ProtoInstance73;

ProtoInstance71YYY.fieldValue = new X3D.MFNode();

ProtoInstance71ZZZ.fieldValue[0] = fieldValue72;

let fieldValue74 = browser.currentScene.createNode("fieldValue");
fieldValue74.name = "endnode";
let ProtoInstance75 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance75.USE = "G3";
fieldValue74YYY.children = new X3D.MFNode();

fieldValue74ZZZ.children[0] = ProtoInstance75;

ProtoInstance71ZZZ.fieldValue[1] = fieldValue74;

let fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "set_startpoint";
ProtoInstance71ZZZ.fieldValue[2] = fieldValue76;

let fieldValue77 = browser.currentScene.createNode("fieldValue");
fieldValue77.name = "set_endpoint";
ProtoInstance71ZZZ.fieldValue[3] = fieldValue77;

browser.currentScene.children[9] = ProtoInstance71;

let ProtoInstance78 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance78.name = "x3dconnector";
ProtoInstance78.DEF = "connector3";
let fieldValue79 = browser.currentScene.createNode("fieldValue");
fieldValue79.name = "startnode";
let ProtoInstance80 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance80.USE = "G1";
fieldValue79YYY.children = new X3D.MFNode();

fieldValue79ZZZ.children[0] = ProtoInstance80;

ProtoInstance78YYY.fieldValue = new X3D.MFNode();

ProtoInstance78ZZZ.fieldValue[0] = fieldValue79;

let fieldValue81 = browser.currentScene.createNode("fieldValue");
fieldValue81.name = "endnode";
let ProtoInstance82 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance82.USE = "G4";
fieldValue81YYY.children = new X3D.MFNode();

fieldValue81ZZZ.children[0] = ProtoInstance82;

ProtoInstance78ZZZ.fieldValue[1] = fieldValue81;

let fieldValue83 = browser.currentScene.createNode("fieldValue");
fieldValue83.name = "set_startpoint";
ProtoInstance78ZZZ.fieldValue[2] = fieldValue83;

let fieldValue84 = browser.currentScene.createNode("fieldValue");
fieldValue84.name = "set_endpoint";
ProtoInstance78ZZZ.fieldValue[3] = fieldValue84;

browser.currentScene.children[10] = ProtoInstance78;

let ROUTE85 = browser.currentScene.createNode("ROUTE");
ROUTE85.fromNode = "G1";
ROUTE85.fromField = "translation";
ROUTE85.toNode = "connector1";
ROUTE85.toField = "set_startpoint";
browser.currentScene.children[11] = ROUTE85;

let ROUTE86 = browser.currentScene.createNode("ROUTE");
ROUTE86.fromNode = "G2";
ROUTE86.fromField = "translation";
ROUTE86.toNode = "connector1";
ROUTE86.toField = "set_endpoint";
browser.currentScene.children[12] = ROUTE86;

let ROUTE87 = browser.currentScene.createNode("ROUTE");
ROUTE87.fromNode = "G1";
ROUTE87.fromField = "translation";
ROUTE87.toNode = "connector2";
ROUTE87.toField = "set_startpoint";
browser.currentScene.children[13] = ROUTE87;

let ROUTE88 = browser.currentScene.createNode("ROUTE");
ROUTE88.fromNode = "G3";
ROUTE88.fromField = "translation";
ROUTE88.toNode = "connector2";
ROUTE88.toField = "set_endpoint";
browser.currentScene.children[14] = ROUTE88;

let ROUTE89 = browser.currentScene.createNode("ROUTE");
ROUTE89.fromNode = "G1";
ROUTE89.fromField = "translation";
ROUTE89.toNode = "connector3";
ROUTE89.toField = "set_startpoint";
browser.currentScene.children[15] = ROUTE89;

let ROUTE90 = browser.currentScene.createNode("ROUTE");
ROUTE90.fromNode = "G4";
ROUTE90.fromField = "translation";
ROUTE90.toNode = "connector3";
ROUTE90.toField = "set_endpoint";
browser.currentScene.children[16] = ROUTE90;

}
main ();
