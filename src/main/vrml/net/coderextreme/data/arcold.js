let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.position = new SFVec3f(new float[0,0,5]);
Viewpoint2.description = "a moving graph";
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint2;

let Background3 = browser.currentScene.createNode("Background");
Background3.skyColor = new MFColor(new float[0.4,0.4,0.4]);
browser.currentScene.children[1] = Background3;

let Transform4 = browser.currentScene.createNode("Transform");
Transform4.DEF = "trans1";
let Transform5 = browser.currentScene.createNode("Transform");
Transform5.DEF = "rotscale1";
let Shape6 = browser.currentScene.createNode("Shape");
let Appearance7 = browser.currentScene.createNode("Appearance");
let Material8 = browser.currentScene.createNode("Material");
Material8.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Appearance7.material = Material8;

Shape6.appearance = Appearance7;

let Cylinder9 = browser.currentScene.createNode("Cylinder");
Cylinder9.radius = 0.1;
Shape6.geometry = Cylinder9;

Transform5.children = new MFNode();

Transform5.children[0] = Shape6;

Transform4.children = new MFNode();

Transform4.children[0] = Transform5;

browser.currentScene.children[2] = Transform4;

let Transform10 = browser.currentScene.createNode("Transform");
Transform10.DEF = "trans2";
let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "rotscale2";
let Shape12 = browser.currentScene.createNode("Shape");
let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

let Cylinder15 = browser.currentScene.createNode("Cylinder");
Cylinder15.radius = 0.1;
Shape12.geometry = Cylinder15;

Transform11.children = new MFNode();

Transform11.children[0] = Shape12;

Transform10.children = new MFNode();

Transform10.children[0] = Transform11;

browser.currentScene.children[3] = Transform10;

let Transform16 = browser.currentScene.createNode("Transform");
Transform16.DEF = "trans3";
let Transform17 = browser.currentScene.createNode("Transform");
Transform17.DEF = "rotscale3";
let Shape18 = browser.currentScene.createNode("Shape");
let Appearance19 = browser.currentScene.createNode("Appearance");
let Material20 = browser.currentScene.createNode("Material");
Material20.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Appearance19.material = Material20;

Shape18.appearance = Appearance19;

let Cylinder21 = browser.currentScene.createNode("Cylinder");
Cylinder21.radius = 0.1;
Shape18.geometry = Cylinder21;

Transform17.children = new MFNode();

Transform17.children[0] = Shape18;

Transform16.children = new MFNode();

Transform16.children[0] = Transform17;

browser.currentScene.children[4] = Transform16;

let ProtoDeclare22 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "https://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="point" ><ProtoInterface><field name="translation" accessType="inputOutput" type="SFVec3f" value="0 0 0"></field>
</ProtoInterface>
<ProtoBody><Transform DEF="node"><IS><connect nodeField="translation" protoField="translation"></connect>
</IS>
<Shape><Sphere containerField="geometry" radius="0.1"></Sphere>
<Appearance><Material diffuseColor="1 0 0"></Material>
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
ProtoDeclare22.name = "point";
let ProtoInterface23 = browser.currentScene.createNode("ProtoInterface");
let field24 = browser.currentScene.createNode("field");
field24.name = "translation";
field24.accessType = "inputOutput";
field24.type = "SFVec3f";
field24.value = "0 0 0";
ProtoInterface23.field = new MFNode();

ProtoInterface23.field[0] = field24;

ProtoDeclare22.protoInterface = ProtoInterface23;

let ProtoBody25 = browser.currentScene.createNode("ProtoBody");
let Transform26 = browser.currentScene.createNode("Transform");
Transform26.DEF = "node";
let IS27 = browser.currentScene.createNode("IS");
let connect28 = browser.currentScene.createNode("connect");
connect28.nodeField = "translation";
connect28.protoField = "translation";
IS27.connect = new MFNode();

IS27.connect[0] = connect28;

Transform26.iS = IS27;

let Shape29 = browser.currentScene.createNode("Shape");
let Sphere30 = browser.currentScene.createNode("Sphere");
Sphere30.radius = 0.1;
Shape29.geometry = Sphere30;

let Appearance31 = browser.currentScene.createNode("Appearance");
let Material32 = browser.currentScene.createNode("Material");
Material32.diffuseColor = new SFColor(new float[1,0,0]);
Appearance31.material = Material32;

Shape29.appearance = Appearance31;

Transform26.children = new MFNode();

Transform26.children[0] = Shape29;

let PositionInterpolator33 = browser.currentScene.createNode("PositionInterpolator");
PositionInterpolator33.DEF = "PI1";
PositionInterpolator33.key = new MFFloat(new float[0,1]);
PositionInterpolator33.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform26.children[1] = PositionInterpolator33;

let Script34 = browser.currentScene.createNode("Script");
Script34.DEF = "MB1";
let field35 = browser.currentScene.createNode("field");
field35.name = "translation";
field35.accessType = "inputOutput";
field35.type = "SFVec3f";
field35.value = "50 50 0";
Script34.field = new MFNode();

Script34.field[0] = field35;

let field36 = browser.currentScene.createNode("field");
field36.name = "old";
field36.accessType = "inputOutput";
field36.type = "SFVec3f";
field36.value = "0 0 0";
Script34.field[1] = field36;

let field37 = browser.currentScene.createNode("field");
field37.name = "set_location";
field37.accessType = "inputOnly";
field37.type = "SFTime";
Script34.field[2] = field37;

let field38 = browser.currentScene.createNode("field");
field38.name = "keyValue";
field38.accessType = "outputOnly";
field38.type = "MFVec3f";
Script34.field[3] = field38;


Script34.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(translation);\n"+
"		}`)
Transform26.children[2] = Script34;

let TimeSensor39 = browser.currentScene.createNode("TimeSensor");
TimeSensor39.DEF = "CL1";
TimeSensor39.cycleInterval = 3;
TimeSensor39.loop = True;
Transform26.children[3] = TimeSensor39;

let ROUTE40 = browser.currentScene.createNode("ROUTE");
ROUTE40.fromNode = "CL1";
ROUTE40.fromField = "cycleTime";
ROUTE40.toNode = "MB1";
ROUTE40.toField = "set_location";
Transform26.children[4] = ROUTE40;

let ROUTE41 = browser.currentScene.createNode("ROUTE");
ROUTE41.fromNode = "CL1";
ROUTE41.fromField = "fraction_changed";
ROUTE41.toNode = "PI1";
ROUTE41.toField = "set_fraction";
Transform26.children[5] = ROUTE41;

let ROUTE42 = browser.currentScene.createNode("ROUTE");
ROUTE42.fromNode = "MB1";
ROUTE42.fromField = "keyValue";
ROUTE42.toNode = "PI1";
ROUTE42.toField = "keyValue";
Transform26.children[6] = ROUTE42;

let ROUTE43 = browser.currentScene.createNode("ROUTE");
ROUTE43.fromNode = "PI1";
ROUTE43.fromField = "value_changed";
ROUTE43.toNode = "node";
ROUTE43.toField = "set_translation";
Transform26.children[7] = ROUTE43;

ProtoBody25.children = new MFNode();

ProtoBody25.children[0] = Transform26;

ProtoDeclare22.protoBody = ProtoBody25;

browser.currentScene.children[5] = ProtoDeclare22;

//from doug sanden
let ProtoDeclare44 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
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
ProtoDeclare44.name = "x3dconnector";
let ProtoInterface45 = browser.currentScene.createNode("ProtoInterface");
let field46 = browser.currentScene.createNode("field");
field46.name = "startnode";
field46.accessType = "inputOutput";
field46.type = "SFNode";
ProtoInterface45.field = new MFNode();

ProtoInterface45.field[0] = field46;

let field47 = browser.currentScene.createNode("field");
field47.name = "endnode";
field47.accessType = "inputOutput";
field47.type = "SFNode";
ProtoInterface45.field[1] = field47;

let field48 = browser.currentScene.createNode("field");
field48.name = "transnode";
field48.accessType = "inputOutput";
field48.type = "SFNode";
ProtoInterface45.field[2] = field48;

let field49 = browser.currentScene.createNode("field");
field49.name = "rotscalenode";
field49.accessType = "inputOutput";
field49.type = "SFNode";
ProtoInterface45.field[3] = field49;

let field50 = browser.currentScene.createNode("field");
field50.name = "set_startpoint";
field50.accessType = "inputOnly";
field50.type = "SFVec3f";
ProtoInterface45.field[4] = field50;

let field51 = browser.currentScene.createNode("field");
field51.name = "set_endpoint";
field51.accessType = "inputOnly";
field51.type = "SFVec3f";
ProtoInterface45.field[5] = field51;

ProtoDeclare44.protoInterface = ProtoInterface45;

let ProtoBody52 = browser.currentScene.createNode("ProtoBody");
let Script53 = browser.currentScene.createNode("Script");
Script53.DEF = "S1";
let field54 = browser.currentScene.createNode("field");
field54.name = "startnode";
field54.accessType = "inputOutput";
field54.type = "SFNode";
Script53.field = new MFNode();

Script53.field[0] = field54;

let field55 = browser.currentScene.createNode("field");
field55.name = "endnode";
field55.accessType = "inputOutput";
field55.type = "SFNode";
Script53.field[1] = field55;

let field56 = browser.currentScene.createNode("field");
field56.name = "transnode";
field56.accessType = "inputOutput";
field56.type = "SFNode";
Script53.field[2] = field56;

let field57 = browser.currentScene.createNode("field");
field57.name = "rotscalenode";
field57.accessType = "inputOutput";
field57.type = "SFNode";
Script53.field[3] = field57;

let field58 = browser.currentScene.createNode("field");
field58.name = "set_startpoint";
field58.accessType = "inputOnly";
field58.type = "SFVec3f";
Script53.field[4] = field58;

let field59 = browser.currentScene.createNode("field");
field59.name = "set_endpoint";
field59.accessType = "inputOnly";
field59.type = "SFVec3f";
Script53.field[5] = field59;

let IS60 = browser.currentScene.createNode("IS");
let connect61 = browser.currentScene.createNode("connect");
connect61.nodeField = "startnode";
connect61.protoField = "startnode";
IS60.connect = new MFNode();

IS60.connect[0] = connect61;

let connect62 = browser.currentScene.createNode("connect");
connect62.nodeField = "endnode";
connect62.protoField = "endnode";
IS60.connect[1] = connect62;

let connect63 = browser.currentScene.createNode("connect");
connect63.nodeField = "transnode";
connect63.protoField = "transnode";
IS60.connect[2] = connect63;

let connect64 = browser.currentScene.createNode("connect");
connect64.nodeField = "rotscalenode";
connect64.protoField = "rotscalenode";
IS60.connect[3] = connect64;

let connect65 = browser.currentScene.createNode("connect");
connect65.nodeField = "set_startpoint";
connect65.protoField = "set_startpoint";
IS60.connect[4] = connect65;

let connect66 = browser.currentScene.createNode("connect");
connect66.nodeField = "set_endpoint";
connect66.protoField = "set_endpoint";
IS60.connect[5] = connect66;

Script53.iS = IS60;


Script53.setSourceCode(`ecmascript:\n"+
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
ProtoBody52.children = new MFNode();

ProtoBody52.children[0] = Script53;

ProtoDeclare44.protoBody = ProtoBody52;

browser.currentScene.children[6] = ProtoDeclare44;

let ProtoInstance67 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance67.name = "point";
ProtoInstance67.DEF = "G1";
browser.currentScene.children[7] = ProtoInstance67;

let ProtoInstance68 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance68.name = "point";
ProtoInstance68.DEF = "G2";
browser.currentScene.children[8] = ProtoInstance68;

let ProtoInstance69 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance69.name = "point";
ProtoInstance69.DEF = "G3";
browser.currentScene.children[9] = ProtoInstance69;

let ProtoInstance70 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance70.name = "point";
ProtoInstance70.DEF = "G4";
browser.currentScene.children[10] = ProtoInstance70;

let ProtoInstance71 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance71.name = "x3dconnector";
ProtoInstance71.DEF = "connector1";
let fieldValue72 = browser.currentScene.createNode("fieldValue");
fieldValue72.name = "startnode";
let ProtoInstance73 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance73.USE = "G1";
fieldValue72.children = new MFNode();

fieldValue72.children[0] = ProtoInstance73;

ProtoInstance71.fieldValue = new MFNode();

ProtoInstance71.fieldValue[0] = fieldValue72;

let fieldValue74 = browser.currentScene.createNode("fieldValue");
fieldValue74.name = "endnode";
let ProtoInstance75 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance75.USE = "G2";
fieldValue74.children = new MFNode();

fieldValue74.children[0] = ProtoInstance75;

ProtoInstance71.fieldValue[1] = fieldValue74;

let fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "transnode";
let Transform77 = browser.currentScene.createNode("Transform");
Transform77.USE = "trans1";
fieldValue76.children = new MFNode();

fieldValue76.children[0] = Transform77;

ProtoInstance71.fieldValue[2] = fieldValue76;

let fieldValue78 = browser.currentScene.createNode("fieldValue");
fieldValue78.name = "rotscalenode";
let Transform79 = browser.currentScene.createNode("Transform");
Transform79.USE = "rotscale1";
fieldValue78.children = new MFNode();

fieldValue78.children[0] = Transform79;

ProtoInstance71.fieldValue[3] = fieldValue78;

browser.currentScene.children[11] = ProtoInstance71;

let ProtoInstance80 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance80.name = "x3dconnector";
ProtoInstance80.DEF = "connector2";
let fieldValue81 = browser.currentScene.createNode("fieldValue");
fieldValue81.name = "startnode";
let ProtoInstance82 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance82.USE = "G1";
fieldValue81.children = new MFNode();

fieldValue81.children[0] = ProtoInstance82;

ProtoInstance80.fieldValue = new MFNode();

ProtoInstance80.fieldValue[0] = fieldValue81;

let fieldValue83 = browser.currentScene.createNode("fieldValue");
fieldValue83.name = "endnode";
let ProtoInstance84 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance84.USE = "G3";
fieldValue83.children = new MFNode();

fieldValue83.children[0] = ProtoInstance84;

ProtoInstance80.fieldValue[1] = fieldValue83;

let fieldValue85 = browser.currentScene.createNode("fieldValue");
fieldValue85.name = "transnode";
let Transform86 = browser.currentScene.createNode("Transform");
Transform86.USE = "trans2";
fieldValue85.children = new MFNode();

fieldValue85.children[0] = Transform86;

ProtoInstance80.fieldValue[2] = fieldValue85;

let fieldValue87 = browser.currentScene.createNode("fieldValue");
fieldValue87.name = "rotscalenode";
let Transform88 = browser.currentScene.createNode("Transform");
Transform88.USE = "rotscale2";
fieldValue87.children = new MFNode();

fieldValue87.children[0] = Transform88;

ProtoInstance80.fieldValue[3] = fieldValue87;

browser.currentScene.children[12] = ProtoInstance80;

let ProtoInstance89 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance89.name = "x3dconnector";
ProtoInstance89.DEF = "connector3";
let fieldValue90 = browser.currentScene.createNode("fieldValue");
fieldValue90.name = "startnode";
let ProtoInstance91 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance91.USE = "G1";
fieldValue90.children = new MFNode();

fieldValue90.children[0] = ProtoInstance91;

ProtoInstance89.fieldValue = new MFNode();

ProtoInstance89.fieldValue[0] = fieldValue90;

let fieldValue92 = browser.currentScene.createNode("fieldValue");
fieldValue92.name = "endnode";
let ProtoInstance93 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance93.USE = "G4";
fieldValue92.children = new MFNode();

fieldValue92.children[0] = ProtoInstance93;

ProtoInstance89.fieldValue[1] = fieldValue92;

let fieldValue94 = browser.currentScene.createNode("fieldValue");
fieldValue94.name = "transnode";
let Transform95 = browser.currentScene.createNode("Transform");
Transform95.USE = "trans3";
fieldValue94.children = new MFNode();

fieldValue94.children[0] = Transform95;

ProtoInstance89.fieldValue[2] = fieldValue94;

let fieldValue96 = browser.currentScene.createNode("fieldValue");
fieldValue96.name = "rotscalenode";
let Transform97 = browser.currentScene.createNode("Transform");
Transform97.USE = "rotscale3";
fieldValue96.children = new MFNode();

fieldValue96.children[0] = Transform97;

ProtoInstance89.fieldValue[3] = fieldValue96;

browser.currentScene.children[13] = ProtoInstance89;

let ROUTE98 = browser.currentScene.createNode("ROUTE");
ROUTE98.fromNode = "G1";
ROUTE98.fromField = "translation_changed";
ROUTE98.toNode = "connector1";
ROUTE98.toField = "set_startpoint";
browser.currentScene.children[14] = ROUTE98;

let ROUTE99 = browser.currentScene.createNode("ROUTE");
ROUTE99.fromNode = "G2";
ROUTE99.fromField = "translation_changed";
ROUTE99.toNode = "connector1";
ROUTE99.toField = "set_endpoint";
browser.currentScene.children[15] = ROUTE99;

let ROUTE100 = browser.currentScene.createNode("ROUTE");
ROUTE100.fromNode = "G1";
ROUTE100.fromField = "translation_changed";
ROUTE100.toNode = "connector2";
ROUTE100.toField = "set_startpoint";
browser.currentScene.children[16] = ROUTE100;

let ROUTE101 = browser.currentScene.createNode("ROUTE");
ROUTE101.fromNode = "G3";
ROUTE101.fromField = "translation_changed";
ROUTE101.toNode = "connector2";
ROUTE101.toField = "set_endpoint";
browser.currentScene.children[17] = ROUTE101;

let ROUTE102 = browser.currentScene.createNode("ROUTE");
ROUTE102.fromNode = "G1";
ROUTE102.fromField = "translation_changed";
ROUTE102.toNode = "connector3";
ROUTE102.toField = "set_startpoint";
browser.currentScene.children[18] = ROUTE102;

let ROUTE103 = browser.currentScene.createNode("ROUTE");
ROUTE103.fromNode = "G4";
ROUTE103.fromField = "translation_changed";
ROUTE103.toNode = "connector3";
ROUTE103.toField = "set_endpoint";
browser.currentScene.children[19] = ROUTE103;

