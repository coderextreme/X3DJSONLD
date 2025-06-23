#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "arc2.x3d";
head1.meta = new MFNode();

head1.meta[0] = meta2;

meta meta3 = createNode("meta");
meta3.name = "creator";
meta3.content = "Lost, Doug Sanden I think";
head1.meta[1] = meta3;

meta meta4 = createNode("meta");
meta4.name = "generator";
meta4.content = "manual";
head1.meta[2] = meta4;

meta meta5 = createNode("meta");
meta5.name = "identifier";
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/arc1.x3d";
head1.meta[3] = meta5;

meta meta6 = createNode("meta");
meta6.name = "description";
meta6.content = "a generic proto to connect two objects";
head1.meta[4] = meta6;

head = head1;

Viewpoint Viewpoint8 = createNode("Viewpoint");
Viewpoint8.position = new SFVec3f(new float[0,0,5]);
Viewpoint8.description = "Only Viewpoint";
children = new MFNode();

children[0] = Viewpoint8;

Background Background9 = createNode("Background");
Background9.skyColor = new MFColor(new float[0.4,0.4,0.4]);
children[1] = Background9;

Transform Transform10 = createNode("Transform");
Transform10.DEF = "G1";
Transform Transform11 = createNode("Transform");
Transform11.DEF = "DECLpoint_INSTANCE_node";
Shape Shape12 = createNode("Shape");
Sphere Sphere13 = createNode("Sphere");
Sphere13.radius = 0.1;
Shape12.geometry = Sphere13;

Appearance Appearance14 = createNode("Appearance");
Material Material15 = createNode("Material");
Material15.diffuseColor = new SFColor(new float[1,0,0]);
Appearance14.material = Material15;

Shape12.appearance = Appearance14;

Transform11.child = new undefined();

Transform11.child[0] = Shape12;

PositionInterpolator PositionInterpolator16 = createNode("PositionInterpolator");
PositionInterpolator16.DEF = "DECLpoint_INSTANCE_PI1";
PositionInterpolator16.key = new MFFloat(new float[0,1]);
PositionInterpolator16.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform11.children[1] = PositionInterpolator16;

Script Script17 = createNode("Script");
Script17.DEF = "DECLpoint_INSTANCE_MB1";
field field18 = createNode("field");
field18.name = "translation";
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.value = "0 0 0";
Script17.field = new MFNode();

Script17.field[0] = field18;

field field19 = createNode("field");
field19.name = "old";
field19.accessType = "inputOutput";
field19.type = "SFVec3f";
field19.value = "0 0 0";
Script17.field[1] = field19;

field field20 = createNode("field");
field20.name = "set_location";
field20.accessType = "inputOnly";
field20.type = "SFTime";
Script17.field[2] = field20;

field field21 = createNode("field");
field21.name = "keyValue";
field21.accessType = "inputOutput";
field21.type = "MFVec3f";
field21.value = "0 0 0 0 5 0";
Script17.field[3] = field21;


Script17.setSourceCode(`ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }`)
Transform11.children[2] = Script17;

TimeSensor TimeSensor22 = createNode("TimeSensor");
TimeSensor22.DEF = "DECLpoint_INSTANCE_CL1";
TimeSensor22.cycleInterval = 3;
TimeSensor22.loop = True;
Transform11.children[3] = TimeSensor22;

ROUTE ROUTE23 = createNode("ROUTE");
ROUTE23.fromNode = "DECLpoint_INSTANCE_CL1";
ROUTE23.fromField = "cycleTime";
ROUTE23.toNode = "DECLpoint_INSTANCE_MB1";
ROUTE23.toField = "set_location";
Transform11.children[4] = ROUTE23;

ROUTE ROUTE24 = createNode("ROUTE");
ROUTE24.fromNode = "DECLpoint_INSTANCE_CL1";
ROUTE24.fromField = "fraction_changed";
ROUTE24.toNode = "DECLpoint_INSTANCE_PI1";
ROUTE24.toField = "set_fraction";
Transform11.children[5] = ROUTE24;

ROUTE ROUTE25 = createNode("ROUTE");
ROUTE25.fromNode = "DECLpoint_INSTANCE_MB1";
ROUTE25.fromField = "keyValue";
ROUTE25.toNode = "DECLpoint_INSTANCE_PI1";
ROUTE25.toField = "keyValue";
Transform11.children[6] = ROUTE25;

ROUTE ROUTE26 = createNode("ROUTE");
ROUTE26.fromNode = "DECLpoint_INSTANCE_PI1";
ROUTE26.fromField = "value_changed";
ROUTE26.toNode = "DECLpoint_INSTANCE_node";
ROUTE26.toField = "set_translation";
Transform11.children[7] = ROUTE26;

ROUTE ROUTE27 = createNode("ROUTE");
ROUTE27.fromNode = "DECLpoint_INSTANCE_MB1";
ROUTE27.fromField = "translation_changed";
ROUTE27.toNode = "DECLpoint_INSTANCE_node";
ROUTE27.toField = "set_translation";
Transform11.children[8] = ROUTE27;

Transform10.children = new MFNode();

Transform10.children[0] = Transform11;

children[2] = Transform10;

Transform Transform28 = createNode("Transform");
Transform28.DEF = "G2";
Transform Transform29 = createNode("Transform");
Transform29.DEF = "DECLpoint_INSTANCE1000_node";
Shape Shape30 = createNode("Shape");
Sphere Sphere31 = createNode("Sphere");
Sphere31.radius = 0.1;
Shape30.geometry = Sphere31;

Appearance Appearance32 = createNode("Appearance");
Material Material33 = createNode("Material");
Material33.diffuseColor = new SFColor(new float[1,0,0]);
Appearance32.material = Material33;

Shape30.appearance = Appearance32;

Transform29.child = new undefined();

Transform29.child[0] = Shape30;

PositionInterpolator PositionInterpolator34 = createNode("PositionInterpolator");
PositionInterpolator34.DEF = "DECLpoint_INSTANCE1000_PI1";
PositionInterpolator34.key = new MFFloat(new float[0,1]);
PositionInterpolator34.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform29.children[1] = PositionInterpolator34;

Script Script35 = createNode("Script");
Script35.DEF = "DECLpoint_INSTANCE1000_MB1";
field field36 = createNode("field");
field36.name = "translation";
field36.accessType = "inputOutput";
field36.type = "SFVec3f";
field36.value = "0 0 0";
Script35.field = new MFNode();

Script35.field[0] = field36;

field field37 = createNode("field");
field37.name = "old";
field37.accessType = "inputOutput";
field37.type = "SFVec3f";
field37.value = "0 0 0";
Script35.field[1] = field37;

field field38 = createNode("field");
field38.name = "set_location";
field38.accessType = "inputOnly";
field38.type = "SFTime";
Script35.field[2] = field38;

field field39 = createNode("field");
field39.name = "keyValue";
field39.accessType = "inputOutput";
field39.type = "MFVec3f";
field39.value = "0 0 0 0 5 0";
Script35.field[3] = field39;


Script35.setSourceCode(`ecmascript:\n"+
"               function set_location(value) {\n"+
"                    old = translation;\n"+
"                    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f(old, translation);\n"+
"               }`)
Transform29.children[2] = Script35;

TimeSensor TimeSensor40 = createNode("TimeSensor");
TimeSensor40.DEF = "DECLpoint_INSTANCE1000_CL1";
TimeSensor40.cycleInterval = 3;
TimeSensor40.loop = True;
Transform29.children[3] = TimeSensor40;

ROUTE ROUTE41 = createNode("ROUTE");
ROUTE41.fromNode = "DECLpoint_INSTANCE1000_CL1";
ROUTE41.fromField = "cycleTime";
ROUTE41.toNode = "DECLpoint_INSTANCE1000_MB1";
ROUTE41.toField = "set_location";
Transform29.children[4] = ROUTE41;

ROUTE ROUTE42 = createNode("ROUTE");
ROUTE42.fromNode = "DECLpoint_INSTANCE1000_CL1";
ROUTE42.fromField = "fraction_changed";
ROUTE42.toNode = "DECLpoint_INSTANCE1000_PI1";
ROUTE42.toField = "set_fraction";
Transform29.children[5] = ROUTE42;

ROUTE ROUTE43 = createNode("ROUTE");
ROUTE43.fromNode = "DECLpoint_INSTANCE1000_MB1";
ROUTE43.fromField = "keyValue";
ROUTE43.toNode = "DECLpoint_INSTANCE1000_PI1";
ROUTE43.toField = "keyValue";
Transform29.children[6] = ROUTE43;

ROUTE ROUTE44 = createNode("ROUTE");
ROUTE44.fromNode = "DECLpoint_INSTANCE1000_PI1";
ROUTE44.fromField = "value_changed";
ROUTE44.toNode = "DECLpoint_INSTANCE1000_node";
ROUTE44.toField = "set_translation";
Transform29.children[7] = ROUTE44;

ROUTE ROUTE45 = createNode("ROUTE");
ROUTE45.fromNode = "DECLpoint_INSTANCE1000_MB1";
ROUTE45.fromField = "translation_changed";
ROUTE45.toNode = "DECLpoint_INSTANCE1000_node";
ROUTE45.toField = "set_translation";
Transform29.children[8] = ROUTE45;

Transform28.children = new MFNode();

Transform28.children[0] = Transform29;

children[3] = Transform28;

Transform Transform46 = createNode("Transform");
Transform46.DEF = "transC1";
Transform Transform47 = createNode("Transform");
Transform47.DEF = "rotscaleC1";
Shape Shape48 = createNode("Shape");
Appearance Appearance49 = createNode("Appearance");
Material Material50 = createNode("Material");
Material50.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material50.transparency = 0.5;
Appearance49.material = Material50;

Shape48.appearance = Appearance49;

Cylinder Cylinder51 = createNode("Cylinder");
Cylinder51.radius = 0.05;
Shape48.geometry = Cylinder51;

Transform47.child = new undefined();

Transform47.child[0] = Shape48;

Transform46.children = new MFNode();

Transform46.children[0] = Transform47;

children[4] = Transform46;

Script Script52 = createNode("Script");
Script52.DEF = "DECLx3dconnector_connector1_S1";
field field53 = createNode("field");
field53.name = "startnode";
field53.accessType = "initializeOnly";
field53.type = "SFNode";
Transform Transform54 = createNode("Transform");
Transform54.USE = "G1";
field53.children = new MFNode();

field53.children[0] = Transform54;

Script52.field = new MFNode();

Script52.field[0] = field53;

field field55 = createNode("field");
field55.name = "endnode";
field55.accessType = "initializeOnly";
field55.type = "SFNode";
Transform Transform56 = createNode("Transform");
Transform56.USE = "G2";
field55.children = new MFNode();

field55.children[0] = Transform56;

Script52.field[1] = field55;

field field57 = createNode("field");
field57.name = "transC1";
field57.accessType = "initializeOnly";
field57.type = "SFNode";
Transform Transform58 = createNode("Transform");
Transform58.USE = "transC1";
field57.children = new MFNode();

field57.children[0] = Transform58;

Script52.field[2] = field57;

field field59 = createNode("field");
field59.name = "rotscaleC1";
field59.accessType = "initializeOnly";
field59.type = "SFNode";
Transform Transform60 = createNode("Transform");
Transform60.USE = "rotscaleC1";
field59.children = new MFNode();

field59.children[0] = Transform60;

Script52.field[3] = field59;

field field61 = createNode("field");
field61.name = "set_startpoint";
field61.accessType = "inputOnly";
field61.type = "SFVec3f";
Script52.field[4] = field61;

field field62 = createNode("field");
field62.name = "set_endpoint";
field62.accessType = "inputOnly";
field62.type = "SFVec3f";
Script52.field[5] = field62;


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
"	      transC1.translation = trafo.translation;\n"+
"	      rotscaleC1.rotation = trafo.rotation;\n"+
"	      rotscaleC1.scale = trafo.scale;\n"+
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
children[5] = Script52;

ROUTE ROUTE63 = createNode("ROUTE");
ROUTE63.fromNode = "G1";
ROUTE63.fromField = "translation_changed";
ROUTE63.toNode = "DECLx3dconnector_connector1_S1";
ROUTE63.toField = "set_startpoint";
children[6] = ROUTE63;

ROUTE ROUTE64 = createNode("ROUTE");
ROUTE64.fromNode = "G2";
ROUTE64.fromField = "translation_changed";
ROUTE64.toNode = "DECLx3dconnector_connector1_S1";
ROUTE64.toField = "set_endpoint";
children[7] = ROUTE64;

}
