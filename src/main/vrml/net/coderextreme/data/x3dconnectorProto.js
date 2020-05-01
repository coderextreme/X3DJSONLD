let browser = X3D.getBrowser();
let X3D0 = {};
X3D0.profile = "Immersive";
X3D0.version = "3.3";
let Viewpoint2 = browser.currentScene.createNode("Viewpoint");
Viewpoint2.position = new SFVec3f(new float[0,0,5]);
Viewpoint2.description = "Only Viewpoint";
Viewpoint2.orientation = new SFRotation(new float[0,0,1,0]);
browser.currentScene.children = new MFNode();

browser.currentScene.children[0] = Viewpoint2;

let Background3 = browser.currentScene.createNode("Background");
Background3.skyColor = new MFColor(new float[0.4,0.4,0.4]);
browser.currentScene.children[1] = Background3;

let Transform4 = browser.currentScene.createNode("Transform");
Transform4.DEF = "G1";
let Shape5 = browser.currentScene.createNode("Shape");
let Appearance6 = browser.currentScene.createNode("Appearance");
let Material7 = browser.currentScene.createNode("Material");
Material7.diffuseColor = new SFColor(new float[0.7,0.2,0.2]);
Appearance6.material = Material7;

Shape5.appearance = Appearance6;

let Sphere8 = browser.currentScene.createNode("Sphere");
Sphere8.radius = 0.1;
Shape5.geometry = Sphere8;

Transform4.children = new MFNode();

Transform4.children[0] = Shape5;

let PlaneSensor9 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor9.description = "Grab to move";
PlaneSensor9.DEF = "PS1";
Transform4.children[1] = PlaneSensor9;

let ROUTE10 = browser.currentScene.createNode("ROUTE");
ROUTE10.fromNode = "PS1";
ROUTE10.fromField = "translation_changed";
ROUTE10.toNode = "G1";
ROUTE10.toField = "set_translation";
Transform4.children[2] = ROUTE10;

browser.currentScene.children[2] = Transform4;

let Transform11 = browser.currentScene.createNode("Transform");
Transform11.DEF = "G2";
Transform11.translation = new SFVec3f(new float[1,-1,0.01]);
let Shape12 = browser.currentScene.createNode("Shape");
let Appearance13 = browser.currentScene.createNode("Appearance");
let Material14 = browser.currentScene.createNode("Material");
Material14.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance13.material = Material14;

Shape12.appearance = Appearance13;

let Sphere15 = browser.currentScene.createNode("Sphere");
Sphere15.radius = 0.1;
Shape12.geometry = Sphere15;

Transform11.children = new MFNode();

Transform11.children[0] = Shape12;

let PlaneSensor16 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor16.description = "Grab to move";
PlaneSensor16.offset = new SFVec3f(new float[1,-1,0.01]);
PlaneSensor16.DEF = "PS2";
Transform11.children[1] = PlaneSensor16;

let ROUTE17 = browser.currentScene.createNode("ROUTE");
ROUTE17.fromNode = "PS2";
ROUTE17.fromField = "translation_changed";
ROUTE17.toNode = "G2";
ROUTE17.toField = "set_translation";
Transform11.children[2] = ROUTE17;

browser.currentScene.children[3] = Transform11;

let Transform18 = browser.currentScene.createNode("Transform");
Transform18.DEF = "G3";
Transform18.translation = new SFVec3f(new float[1,1,0.01]);
let Shape19 = browser.currentScene.createNode("Shape");
let Appearance20 = browser.currentScene.createNode("Appearance");
let Material21 = browser.currentScene.createNode("Material");
Material21.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance20.material = Material21;

Shape19.appearance = Appearance20;

let Sphere22 = browser.currentScene.createNode("Sphere");
Sphere22.radius = 0.1;
Shape19.geometry = Sphere22;

Transform18.children = new MFNode();

Transform18.children[0] = Shape19;

let PlaneSensor23 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor23.description = "Grab to move";
PlaneSensor23.offset = new SFVec3f(new float[1,1,0.01]);
PlaneSensor23.DEF = "PS3";
Transform18.children[1] = PlaneSensor23;

let ROUTE24 = browser.currentScene.createNode("ROUTE");
ROUTE24.fromNode = "PS3";
ROUTE24.fromField = "translation_changed";
ROUTE24.toNode = "G3";
ROUTE24.toField = "set_translation";
Transform18.children[2] = ROUTE24;

browser.currentScene.children[4] = Transform18;

let Transform25 = browser.currentScene.createNode("Transform");
Transform25.DEF = "G4";
Transform25.translation = new SFVec3f(new float[-1,1,0.01]);
let Shape26 = browser.currentScene.createNode("Shape");
let Appearance27 = browser.currentScene.createNode("Appearance");
let Material28 = browser.currentScene.createNode("Material");
Material28.diffuseColor = new SFColor(new float[0.2,0.7,0.2]);
Appearance27.material = Material28;

Shape26.appearance = Appearance27;

let Sphere29 = browser.currentScene.createNode("Sphere");
Sphere29.radius = 0.1;
Shape26.geometry = Sphere29;

Transform25.children = new MFNode();

Transform25.children[0] = Shape26;

let PlaneSensor30 = browser.currentScene.createNode("PlaneSensor");
PlaneSensor30.description = "Grab to move";
PlaneSensor30.offset = new SFVec3f(new float[-1,1,0.01]);
PlaneSensor30.DEF = "PS4";
Transform25.children[1] = PlaneSensor30;

let ROUTE31 = browser.currentScene.createNode("ROUTE");
ROUTE31.fromNode = "PS4";
ROUTE31.fromField = "translation_changed";
ROUTE31.toNode = "G4";
ROUTE31.toField = "set_translation";
Transform25.children[2] = ROUTE31;

browser.currentScene.children[5] = Transform25;

let Transform32 = browser.currentScene.createNode("Transform");
Transform32.DEF = "transC1";
let Transform33 = browser.currentScene.createNode("Transform");
Transform33.DEF = "rotscaleC1";
let Shape34 = browser.currentScene.createNode("Shape");
let Appearance35 = browser.currentScene.createNode("Appearance");
let Material36 = browser.currentScene.createNode("Material");
Material36.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material36.transparency = 0.5;
Appearance35.material = Material36;

Shape34.appearance = Appearance35;

let Cylinder37 = browser.currentScene.createNode("Cylinder");
Cylinder37.radius = 0.05;
Shape34.geometry = Cylinder37;

Transform33.children = new MFNode();

Transform33.children[0] = Shape34;

Transform32.children = new MFNode();

Transform32.children[0] = Transform33;

browser.currentScene.children[6] = Transform32;

let Transform38 = browser.currentScene.createNode("Transform");
Transform38.DEF = "transC2";
let Transform39 = browser.currentScene.createNode("Transform");
Transform39.DEF = "rotscaleC2";
let Shape40 = browser.currentScene.createNode("Shape");
let Appearance41 = browser.currentScene.createNode("Appearance");
let Material42 = browser.currentScene.createNode("Material");
Material42.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material42.transparency = 0.5;
Appearance41.material = Material42;

Shape40.appearance = Appearance41;

let Cylinder43 = browser.currentScene.createNode("Cylinder");
Cylinder43.radius = 0.05;
Shape40.geometry = Cylinder43;

Transform39.children = new MFNode();

Transform39.children[0] = Shape40;

Transform38.children = new MFNode();

Transform38.children[0] = Transform39;

browser.currentScene.children[7] = Transform38;

let Transform44 = browser.currentScene.createNode("Transform");
Transform44.DEF = "transC3";
let Transform45 = browser.currentScene.createNode("Transform");
Transform45.DEF = "rotscaleC3";
let Shape46 = browser.currentScene.createNode("Shape");
let Appearance47 = browser.currentScene.createNode("Appearance");
let Material48 = browser.currentScene.createNode("Material");
Material48.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material48.transparency = 0.5;
Appearance47.material = Material48;

Shape46.appearance = Appearance47;

let Cylinder49 = browser.currentScene.createNode("Cylinder");
Cylinder49.radius = 0.05;
Shape46.geometry = Cylinder49;

Transform45.children = new MFNode();

Transform45.children[0] = Shape46;

Transform44.children = new MFNode();

Transform44.children[0] = Transform45;

browser.currentScene.children[8] = Transform44;

let ProtoDeclare50 = browser.createX3DFromString(`<?xml version="1.0" encoding="undefined"?>
<!DOCTYPE X3D PUBLIC "ISO//Web3D//DTD X3D undefined//EN" "http://www.web3d.org/specifications/x3d-undefined.dtd">
<ProtoDeclare name="x3dconnector" ><ProtoInterface><field accessType="initializeOnly" name="startnode" type="SFNode"></field>
<field accessType="initializeOnly" name="endnode" type="SFNode"></field>
<field accessType="initializeOnly" name="transnode" type="SFNode"></field>
<field accessType="initializeOnly" name="rotscalenode" type="SFNode"></field>
<field accessType="inputOnly" name="set_startpoint" type="SFVec3f"></field>
<field accessType="inputOnly" name="set_endpoint" type="SFVec3f"></field>
</ProtoInterface>
<ProtoBody><Script DEF="S1"><field accessType="initializeOnly" name="startnode" type="SFNode"></field>
<field accessType="initializeOnly" name="endnode" type="SFNode"></field>
<field accessType="initializeOnly" name="transnode" type="SFNode"></field>
<field accessType="initializeOnly" name="rotscalenode" type="SFNode"></field>
<field accessType="inputOnly" name="set_startpoint" type="SFVec3f"></field>
<field accessType="inputOnly" name="set_endpoint" type="SFVec3f"></field>
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
ProtoDeclare50.name = "x3dconnector";
let ProtoInterface51 = browser.currentScene.createNode("ProtoInterface");
let field52 = browser.currentScene.createNode("field");
field52.accessType = "initializeOnly";
field52.name = "startnode";
field52.type = "SFNode";
ProtoInterface51.field = new MFNode();

ProtoInterface51.field[0] = field52;

let field53 = browser.currentScene.createNode("field");
field53.accessType = "initializeOnly";
field53.name = "endnode";
field53.type = "SFNode";
ProtoInterface51.field[1] = field53;

let field54 = browser.currentScene.createNode("field");
field54.accessType = "initializeOnly";
field54.name = "transnode";
field54.type = "SFNode";
ProtoInterface51.field[2] = field54;

let field55 = browser.currentScene.createNode("field");
field55.accessType = "initializeOnly";
field55.name = "rotscalenode";
field55.type = "SFNode";
ProtoInterface51.field[3] = field55;

let field56 = browser.currentScene.createNode("field");
field56.accessType = "inputOnly";
field56.name = "set_startpoint";
field56.type = "SFVec3f";
ProtoInterface51.field[4] = field56;

let field57 = browser.currentScene.createNode("field");
field57.accessType = "inputOnly";
field57.name = "set_endpoint";
field57.type = "SFVec3f";
ProtoInterface51.field[5] = field57;

ProtoDeclare50.protoInterface = ProtoInterface51;

let ProtoBody58 = browser.currentScene.createNode("ProtoBody");
let Script59 = browser.currentScene.createNode("Script");
Script59.DEF = "S1";
let field60 = browser.currentScene.createNode("field");
field60.accessType = "initializeOnly";
field60.name = "startnode";
field60.type = "SFNode";
Script59.field = new MFNode();

Script59.field[0] = field60;

let field61 = browser.currentScene.createNode("field");
field61.accessType = "initializeOnly";
field61.name = "endnode";
field61.type = "SFNode";
Script59.field[1] = field61;

let field62 = browser.currentScene.createNode("field");
field62.accessType = "initializeOnly";
field62.name = "transnode";
field62.type = "SFNode";
Script59.field[2] = field62;

let field63 = browser.currentScene.createNode("field");
field63.accessType = "initializeOnly";
field63.name = "rotscalenode";
field63.type = "SFNode";
Script59.field[3] = field63;

let field64 = browser.currentScene.createNode("field");
field64.accessType = "inputOnly";
field64.name = "set_startpoint";
field64.type = "SFVec3f";
Script59.field[4] = field64;

let field65 = browser.currentScene.createNode("field");
field65.accessType = "inputOnly";
field65.name = "set_endpoint";
field65.type = "SFVec3f";
Script59.field[5] = field65;

let IS66 = browser.currentScene.createNode("IS");
let connect67 = browser.currentScene.createNode("connect");
connect67.nodeField = "startnode";
connect67.protoField = "startnode";
IS66.connect = new MFNode();

IS66.connect[0] = connect67;

let connect68 = browser.currentScene.createNode("connect");
connect68.nodeField = "endnode";
connect68.protoField = "endnode";
IS66.connect[1] = connect68;

let connect69 = browser.currentScene.createNode("connect");
connect69.nodeField = "transnode";
connect69.protoField = "transnode";
IS66.connect[2] = connect69;

let connect70 = browser.currentScene.createNode("connect");
connect70.nodeField = "rotscalenode";
connect70.protoField = "rotscalenode";
IS66.connect[3] = connect70;

let connect71 = browser.currentScene.createNode("connect");
connect71.nodeField = "set_startpoint";
connect71.protoField = "set_startpoint";
IS66.connect[4] = connect71;

let connect72 = browser.currentScene.createNode("connect");
connect72.nodeField = "set_endpoint";
connect72.protoField = "set_endpoint";
IS66.connect[5] = connect72;

Script59.iS = IS66;


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
ProtoBody58.children = new MFNode();

ProtoBody58.children[0] = Script59;

ProtoDeclare50.protoBody = ProtoBody58;

browser.currentScene.children[9] = ProtoDeclare50;

let ProtoInstance73 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance73.name = "x3dconnector";
ProtoInstance73.DEF = "connector1";
let fieldValue74 = browser.currentScene.createNode("fieldValue");
fieldValue74.name = "startnode";
let Transform75 = browser.currentScene.createNode("Transform");
Transform75.USE = "G1";
fieldValue74.children = new MFNode();

fieldValue74.children[0] = Transform75;

ProtoInstance73.fieldValue = new MFNode();

ProtoInstance73.fieldValue[0] = fieldValue74;

let fieldValue76 = browser.currentScene.createNode("fieldValue");
fieldValue76.name = "endnode";
let Transform77 = browser.currentScene.createNode("Transform");
Transform77.USE = "G2";
fieldValue76.children = new MFNode();

fieldValue76.children[0] = Transform77;

ProtoInstance73.fieldValue[1] = fieldValue76;

let fieldValue78 = browser.currentScene.createNode("fieldValue");
fieldValue78.name = "transnode";
let Transform79 = browser.currentScene.createNode("Transform");
Transform79.USE = "transC1";
fieldValue78.children = new MFNode();

fieldValue78.children[0] = Transform79;

ProtoInstance73.fieldValue[2] = fieldValue78;

let fieldValue80 = browser.currentScene.createNode("fieldValue");
fieldValue80.name = "rotscalenode";
let Transform81 = browser.currentScene.createNode("Transform");
Transform81.USE = "rotscaleC1";
fieldValue80.children = new MFNode();

fieldValue80.children[0] = Transform81;

ProtoInstance73.fieldValue[3] = fieldValue80;

let fieldValue82 = browser.currentScene.createNode("fieldValue");
fieldValue82.name = "set_startpoint";
ProtoInstance73.fieldValue[4] = fieldValue82;

let fieldValue83 = browser.currentScene.createNode("fieldValue");
fieldValue83.name = "set_endpoint";
ProtoInstance73.fieldValue[5] = fieldValue83;

browser.currentScene.children[10] = ProtoInstance73;

let ProtoInstance84 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance84.name = "x3dconnector";
ProtoInstance84.DEF = "connector2";
let fieldValue85 = browser.currentScene.createNode("fieldValue");
fieldValue85.name = "startnode";
let Transform86 = browser.currentScene.createNode("Transform");
Transform86.USE = "G1";
fieldValue85.children = new MFNode();

fieldValue85.children[0] = Transform86;

ProtoInstance84.fieldValue = new MFNode();

ProtoInstance84.fieldValue[0] = fieldValue85;

let fieldValue87 = browser.currentScene.createNode("fieldValue");
fieldValue87.name = "endnode";
let Transform88 = browser.currentScene.createNode("Transform");
Transform88.USE = "G3";
fieldValue87.children = new MFNode();

fieldValue87.children[0] = Transform88;

ProtoInstance84.fieldValue[1] = fieldValue87;

let fieldValue89 = browser.currentScene.createNode("fieldValue");
fieldValue89.name = "transnode";
let Transform90 = browser.currentScene.createNode("Transform");
Transform90.USE = "transC2";
fieldValue89.children = new MFNode();

fieldValue89.children[0] = Transform90;

ProtoInstance84.fieldValue[2] = fieldValue89;

let fieldValue91 = browser.currentScene.createNode("fieldValue");
fieldValue91.name = "rotscalenode";
let Transform92 = browser.currentScene.createNode("Transform");
Transform92.USE = "rotscaleC2";
fieldValue91.children = new MFNode();

fieldValue91.children[0] = Transform92;

ProtoInstance84.fieldValue[3] = fieldValue91;

let fieldValue93 = browser.currentScene.createNode("fieldValue");
fieldValue93.name = "set_startpoint";
ProtoInstance84.fieldValue[4] = fieldValue93;

let fieldValue94 = browser.currentScene.createNode("fieldValue");
fieldValue94.name = "set_endpoint";
ProtoInstance84.fieldValue[5] = fieldValue94;

browser.currentScene.children[11] = ProtoInstance84;

let ProtoInstance95 = browser.currentScene.createNode("ProtoInstance");
ProtoInstance95.name = "x3dconnector";
ProtoInstance95.DEF = "connector3";
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

let fieldValue104 = browser.currentScene.createNode("fieldValue");
fieldValue104.name = "set_startpoint";
ProtoInstance95.fieldValue[4] = fieldValue104;

let fieldValue105 = browser.currentScene.createNode("fieldValue");
fieldValue105.name = "set_endpoint";
ProtoInstance95.fieldValue[5] = fieldValue105;

browser.currentScene.children[12] = ProtoInstance95;

let ROUTE106 = browser.currentScene.createNode("ROUTE");
ROUTE106.fromNode = "G1";
ROUTE106.fromField = "translation_changed";
ROUTE106.toNode = "connector1";
ROUTE106.toField = "set_startpoint";
browser.currentScene.children[13] = ROUTE106;

let ROUTE107 = browser.currentScene.createNode("ROUTE");
ROUTE107.fromNode = "G2";
ROUTE107.fromField = "translation_changed";
ROUTE107.toNode = "connector1";
ROUTE107.toField = "set_endpoint";
browser.currentScene.children[14] = ROUTE107;

let ROUTE108 = browser.currentScene.createNode("ROUTE");
ROUTE108.fromNode = "G1";
ROUTE108.fromField = "translation_changed";
ROUTE108.toNode = "connector2";
ROUTE108.toField = "set_startpoint";
browser.currentScene.children[15] = ROUTE108;

let ROUTE109 = browser.currentScene.createNode("ROUTE");
ROUTE109.fromNode = "G3";
ROUTE109.fromField = "translation_changed";
ROUTE109.toNode = "connector2";
ROUTE109.toField = "set_endpoint";
browser.currentScene.children[16] = ROUTE109;

let ROUTE110 = browser.currentScene.createNode("ROUTE");
ROUTE110.fromNode = "G1";
ROUTE110.fromField = "translation_changed";
ROUTE110.toNode = "connector3";
ROUTE110.toField = "set_startpoint";
browser.currentScene.children[17] = ROUTE110;

let ROUTE111 = browser.currentScene.createNode("ROUTE");
ROUTE111.fromNode = "G4";
ROUTE111.fromField = "translation_changed";
ROUTE111.toNode = "connector3";
ROUTE111.toField = "set_endpoint";
browser.currentScene.children[18] = ROUTE111;

