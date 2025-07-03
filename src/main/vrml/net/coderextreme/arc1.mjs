const
   X3D     = require ("x_ite-node"),
   canvas  = X3D .createBrowser (),
   browser = canvas .browser,
   scene   = browser .currentScene;
async function main () {
scene.setProfile(browser.getProfile("Immersive"));
scene.addMetaData("title", "arc1.x3d");
scene.addMetaData("creator", "Lost, Doug Sanden I think");
scene.addMetaData("generator", "manual");
scene.addMetaData("identifier", "https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d");
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
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"               }`)
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

let ROUTE32 = browser.currentScene.createNode("ROUTE");
ROUTE32.fromNode = "MB1";
ROUTE32.fromField = "translation_changed";
ROUTE32.toNode = "node";
ROUTE32.toField = "set_translation";
Transform14ZZZ.children[8] = ROUTE32;

ProtoBody13YYY.children = new X3D.MFNode();

ProtoBody13ZZZ.children[0] = Transform14;

protoBody = ProtoBody13;

browser.currentScene.children[2] = ProtoDeclare10;

let Transform33 = browser.currentScene.createNode("Transform");
Transform33.DEF = "G1";
let ProtoInstance34 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance34.name = "point";
Transform33YYY.children = new X3D.MFNode();

Transform33ZZZ.children[0] = ProtoInstance34;

browser.currentScene.children[3] = Transform33;

let Transform35 = browser.currentScene.createNode("Transform");
Transform35.DEF = "G2";
let ProtoInstance36 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance36.name = "point";
Transform35YYY.children = new X3D.MFNode();

Transform35ZZZ.children[0] = ProtoInstance36;

browser.currentScene.children[4] = Transform35;

let Transform37 = browser.currentScene.createNode("Transform");
Transform37.DEF = "transC1";
let Transform38 = browser.currentScene.createNode("Transform");
Transform38.DEF = "rotscaleC1";
let Shape39 = browser.currentScene.createNode("Shape");
let Appearance40 = browser.currentScene.createNode("Appearance");
let Material41 = browser.currentScene.createNode("Material");
Material41.diffuseColor = new X3D.SFColor([0.2,0.7,0.7]);
Material41.transparency = 0.5;
material = Material41;

appearance = Appearance40;

let Cylinder42 = browser.currentScene.createNode("Cylinder");
Cylinder42.radius = 0.05;
geometry = Cylinder42;

Transform38YYY.child = new X3D.undefined();

Transform38ZZZ.child[0] = Shape39;

Transform37YYY.children = new X3D.MFNode();

Transform37ZZZ.children[0] = Transform38;

browser.currentScene.children[5] = Transform37;

let ProtoDeclare43 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoInterface45.getField("startnode")ProtoInterface44YYY.field = new X3D.MFNode();

ProtoInterface46.getField("endnode")ProtoInterface44YYY.field = new X3D.MFNode();

ProtoInterface47.getField("transnode")ProtoInterface44YYY.field = new X3D.MFNode();

ProtoInterface48.getField("rotscalenode")ProtoInterface44YYY.field = new X3D.MFNode();

ProtoInterface49.getField("set_startpoint")ProtoInterface44YYY.field = new X3D.MFNode();

ProtoInterface50.getField("set_endpoint")ProtoInterface44YYY.field = new X3D.MFNode();

protoInterface = ProtoInterface44;

let ProtoBody51 = browser.currentScene.createNode("ProtoBody");
let Script52 = browser.currentScene.createNode("Script");
Script52.DEF = "S1";
Script53.getField("startnode")Script52YYY.field = new X3D.MFNode();

Script54.getField("endnode")Script52YYY.field = new X3D.MFNode();

Script55.getField("transnode")Script52YYY.field = new X3D.MFNode();

Script56.getField("rotscalenode")Script52YYY.field = new X3D.MFNode();

Script57.getField("set_startpoint")Script52YYY.field = new X3D.MFNode();

Script58.getField("set_endpoint")Script52YYY.field = new X3D.MFNode();

let IS59 = browser.currentScene.createNode("IS");
let connect60 = browser.currentScene.createNode("connect");
connect60.nodeField = "startnode";
connect60.protoField = "startnode";
IS59YYY.connect = new X3D.MFNode();

IS59ZZZ.connect[0] = connect60;

let connect61 = browser.currentScene.createNode("connect");
connect61.nodeField = "endnode";
connect61.protoField = "endnode";
IS59ZZZ.connect[1] = connect61;

let connect62 = browser.currentScene.createNode("connect");
connect62.nodeField = "transnode";
connect62.protoField = "transnode";
IS59ZZZ.connect[2] = connect62;

let connect63 = browser.currentScene.createNode("connect");
connect63.nodeField = "rotscalenode";
connect63.protoField = "rotscalenode";
IS59ZZZ.connect[3] = connect63;

let connect64 = browser.currentScene.createNode("connect");
connect64.nodeField = "set_startpoint";
connect64.protoField = "set_startpoint";
IS59ZZZ.connect[4] = connect64;

let connect65 = browser.currentScene.createNode("connect");
connect65.nodeField = "set_endpoint";
connect65.protoField = "set_endpoint";
IS59ZZZ.connect[5] = connect65;

iS = IS59;


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
ProtoBody51YYY.children = new X3D.MFNode();

ProtoBody51ZZZ.children[0] = Script52;

protoBody = ProtoBody51;

browser.currentScene.children[6] = ProtoDeclare43;

let ProtoInstance66 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance66.name = "x3dconnector";
ProtoInstance66.DEF = "connector1";
let fieldValue67 = browser.currentScene.createNode("fieldValue");
fieldValue67.name = "startnode";
let Transform68 = browser.currentScene.createNode("Transform");
Transform68.USE = "G1";
fieldValue67YYY.children = new X3D.MFNode();

fieldValue67ZZZ.children[0] = Transform68;

ProtoInstance66YYY.fieldValue = new X3D.MFNode();

ProtoInstance66ZZZ.fieldValue[0] = fieldValue67;

let fieldValue69 = browser.currentScene.createNode("fieldValue");
fieldValue69.name = "endnode";
let Transform70 = browser.currentScene.createNode("Transform");
Transform70.USE = "G2";
fieldValue69YYY.children = new X3D.MFNode();

fieldValue69ZZZ.children[0] = Transform70;

ProtoInstance66ZZZ.fieldValue[1] = fieldValue69;

let fieldValue71 = browser.currentScene.createNode("fieldValue");
fieldValue71.name = "transnode";
let Transform72 = browser.currentScene.createNode("Transform");
Transform72.USE = "transC1";
fieldValue71YYY.children = new X3D.MFNode();

fieldValue71ZZZ.children[0] = Transform72;

ProtoInstance66ZZZ.fieldValue[2] = fieldValue71;

let fieldValue73 = browser.currentScene.createNode("fieldValue");
fieldValue73.name = "rotscalenode";
let Transform74 = browser.currentScene.createNode("Transform");
Transform74.USE = "rotscaleC1";
fieldValue73YYY.children = new X3D.MFNode();

fieldValue73ZZZ.children[0] = Transform74;

ProtoInstance66ZZZ.fieldValue[3] = fieldValue73;

let fieldValue75 = browser.currentScene.createNode("fieldValue");
fieldValue75.name = "set_startpoint";
ProtoInstance66ZZZ.fieldValue[4] = fieldValue75;

let fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "set_endpoint";
ProtoInstance66ZZZ.fieldValue[5] = fieldValue76;

browser.currentScene.children[7] = ProtoInstance66;

let ROUTE77 = browser.currentScene.createNode("ROUTE");
ROUTE77.fromNode = "G1";
ROUTE77.fromField = "translation_changed";
ROUTE77.toNode = "connector1";
ROUTE77.toField = "set_startpoint";
browser.currentScene.children[8] = ROUTE77;

let ROUTE78 = browser.currentScene.createNode("ROUTE");
ROUTE78.fromNode = "G2";
ROUTE78.fromField = "translation_changed";
ROUTE78.toNode = "connector1";
ROUTE78.toField = "set_endpoint";
browser.currentScene.children[9] = ROUTE78;

}
main ();
