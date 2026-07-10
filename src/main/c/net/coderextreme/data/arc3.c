#include "C:/x3d-code/www.web3d.org/x3d/languages/c/Concretes.h"
void main(int argc, char ** argv) {
Browser browser = X3D.getBrowser();
X3D X3D0;
X3D0.profile = "Immersive";
X3D0.version = "4.0";
head head1 = createNode("head");
meta meta2 = createNode("meta");
meta2.name = "title";
meta2.content = "arc3.x3d";
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
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/x3dconnectorProto.x3d";
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
Transform10.DEF = "DECLpoint_G1_node";
Shape Shape11 = createNode("Shape");
Sphere Sphere12 = createNode("Sphere");
Sphere12.radius = 0.1;
Shape11.geometry = Sphere12;

Appearance Appearance13 = createNode("Appearance");
Material Material14 = createNode("Material");
Material14.diffuseColor = new SFColor(new float[1,0,0]);
Appearance13.material = Material14;

Shape11.appearance = Appearance13;

Transform10.child = new undefined();

Transform10.child[0] = Shape11;

PositionInterpolator PositionInterpolator15 = createNode("PositionInterpolator");
PositionInterpolator15.DEF = "DECLpoint_G1_PI1";
PositionInterpolator15.key = new MFFloat(new float[0,1]);
PositionInterpolator15.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform10.children[1] = PositionInterpolator15;

Script Script16 = createNode("Script");
Script16.DEF = "DECLpoint_G1_MB1";
field field17 = createNode("field");
field17.name = "translation";
field17.accessType = "inputOutput";
field17.type = "SFVec3f";
field17.value = "0 0 0";
Script16.field = new MFNode();

Script16.field[0] = field17;

field field18 = createNode("field");
field18.name = "old";
field18.accessType = "inputOutput";
field18.type = "SFVec3f";
field18.value = "0 0 0";
Script16.field[1] = field18;

field field19 = createNode("field");
field19.name = "set_location";
field19.accessType = "inputOnly";
field19.type = "SFTime";
Script16.field[2] = field19;

field field20 = createNode("field");
field20.name = "keyValue";
field20.accessType = "inputOutput";
field20.type = "MFVec3f";
field20.value = "0 0 0 0 5 0";
Script16.field[3] = field20;


Script16.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}`)
Transform10.children[2] = Script16;

TimeSensor TimeSensor21 = createNode("TimeSensor");
TimeSensor21.DEF = "DECLpoint_G1_CL1";
TimeSensor21.cycleInterval = 3;
TimeSensor21.loop = True;
Transform10.children[3] = TimeSensor21;

ROUTE ROUTE22 = createNode("ROUTE");
ROUTE22.fromNode = "DECLpoint_G1_CL1";
ROUTE22.fromField = "cycleTime";
ROUTE22.toNode = "DECLpoint_G1_MB1";
ROUTE22.toField = "set_location";
Transform10.children[4] = ROUTE22;

ROUTE ROUTE23 = createNode("ROUTE");
ROUTE23.fromNode = "DECLpoint_G1_CL1";
ROUTE23.fromField = "fraction_changed";
ROUTE23.toNode = "DECLpoint_G1_PI1";
ROUTE23.toField = "set_fraction";
Transform10.children[5] = ROUTE23;

ROUTE ROUTE24 = createNode("ROUTE");
ROUTE24.fromNode = "DECLpoint_G1_MB1";
ROUTE24.fromField = "keyValue";
ROUTE24.toNode = "DECLpoint_G1_PI1";
ROUTE24.toField = "keyValue";
Transform10.children[6] = ROUTE24;

ROUTE ROUTE25 = createNode("ROUTE");
ROUTE25.fromNode = "DECLpoint_G1_PI1";
ROUTE25.fromField = "value_changed";
ROUTE25.toNode = "DECLpoint_G1_node";
ROUTE25.toField = "set_translation";
Transform10.children[7] = ROUTE25;

children[2] = Transform10;

Transform Transform26 = createNode("Transform");
Transform26.DEF = "DECLpoint_G2_node";
Shape Shape27 = createNode("Shape");
Sphere Sphere28 = createNode("Sphere");
Sphere28.radius = 0.1;
Shape27.geometry = Sphere28;

Appearance Appearance29 = createNode("Appearance");
Material Material30 = createNode("Material");
Material30.diffuseColor = new SFColor(new float[1,0,0]);
Appearance29.material = Material30;

Shape27.appearance = Appearance29;

Transform26.child = new undefined();

Transform26.child[0] = Shape27;

PositionInterpolator PositionInterpolator31 = createNode("PositionInterpolator");
PositionInterpolator31.DEF = "DECLpoint_G2_PI1";
PositionInterpolator31.key = new MFFloat(new float[0,1]);
PositionInterpolator31.keyValue = new MFVec3f(new float[0,0,0,0,5,0]);
Transform26.children[1] = PositionInterpolator31;

Script Script32 = createNode("Script");
Script32.DEF = "DECLpoint_G2_MB1";
field field33 = createNode("field");
field33.name = "translation";
field33.accessType = "inputOutput";
field33.type = "SFVec3f";
field33.value = "0 0 0";
Script32.field = new MFNode();

Script32.field[0] = field33;

field field34 = createNode("field");
field34.name = "old";
field34.accessType = "inputOutput";
field34.type = "SFVec3f";
field34.value = "0 0 0";
Script32.field[1] = field34;

field field35 = createNode("field");
field35.name = "set_location";
field35.accessType = "inputOnly";
field35.type = "SFTime";
Script32.field[2] = field35;

field field36 = createNode("field");
field36.name = "keyValue";
field36.accessType = "inputOutput";
field36.type = "MFVec3f";
field36.value = "0 0 0 0 5 0";
Script32.field[3] = field36;


Script32.setSourceCode(`ecmascript:\n"+
"		function set_location(value) {\n"+
"                    old = translation;\n"+
"		    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);\n"+
"                    keyValue = new MFVec3f([old, translation]);\n"+
"		    // Browser.println(keyValue);\n"+
"		}`)
Transform26.children[2] = Script32;

TimeSensor TimeSensor37 = createNode("TimeSensor");
TimeSensor37.DEF = "DECLpoint_G2_CL1";
TimeSensor37.cycleInterval = 3;
TimeSensor37.loop = True;
Transform26.children[3] = TimeSensor37;

ROUTE ROUTE38 = createNode("ROUTE");
ROUTE38.fromNode = "DECLpoint_G2_CL1";
ROUTE38.fromField = "cycleTime";
ROUTE38.toNode = "DECLpoint_G2_MB1";
ROUTE38.toField = "set_location";
Transform26.children[4] = ROUTE38;

ROUTE ROUTE39 = createNode("ROUTE");
ROUTE39.fromNode = "DECLpoint_G2_CL1";
ROUTE39.fromField = "fraction_changed";
ROUTE39.toNode = "DECLpoint_G2_PI1";
ROUTE39.toField = "set_fraction";
Transform26.children[5] = ROUTE39;

ROUTE ROUTE40 = createNode("ROUTE");
ROUTE40.fromNode = "DECLpoint_G2_MB1";
ROUTE40.fromField = "keyValue";
ROUTE40.toNode = "DECLpoint_G2_PI1";
ROUTE40.toField = "keyValue";
Transform26.children[6] = ROUTE40;

ROUTE ROUTE41 = createNode("ROUTE");
ROUTE41.fromNode = "DECLpoint_G2_PI1";
ROUTE41.fromField = "value_changed";
ROUTE41.toNode = "DECLpoint_G2_node";
ROUTE41.toField = "set_translation";
Transform26.children[7] = ROUTE41;

children[3] = Transform26;

Group Group42 = createNode("Group");
Transform Transform43 = createNode("Transform");
Transform43.DEF = "DECLx3dconnector_connector1_trans";
Transform Transform44 = createNode("Transform");
Transform44.DEF = "DECLx3dconnector_connector1_rotscale";
Shape Shape45 = createNode("Shape");
Appearance Appearance46 = createNode("Appearance");
Material Material47 = createNode("Material");
Material47.diffuseColor = new SFColor(new float[0.2,0.7,0.7]);
Material47.transparency = 0.5;
Appearance46.material = Material47;

Shape45.appearance = Appearance46;

Cylinder Cylinder48 = createNode("Cylinder");
Cylinder48.radius = 0.05;
Shape45.geometry = Cylinder48;

Transform44.child = new undefined();

Transform44.child[0] = Shape45;

Transform43.children = new MFNode();

Transform43.children[0] = Transform44;

Group42.children = new MFNode();

Group42.children[0] = Transform43;

Script Script49 = createNode("Script");
Script49.DEF = "DECLx3dconnector_connector1_S1";
field field50 = createNode("field");
field50.name = "startnode";
field50.accessType = "initializeOnly";
field50.type = "SFNode";
Group Group51 = createNode("Group");
Group51.USE = "DECLpoint_G1_node";
field50.children = new MFNode();

field50.children[0] = Group51;

Script49.field = new MFNode();

Script49.field[0] = field50;

field field52 = createNode("field");
field52.name = "endnode";
field52.accessType = "initializeOnly";
field52.type = "SFNode";
Group Group53 = createNode("Group");
Group53.USE = "DECLpoint_G2_node";
field52.children = new MFNode();

field52.children[0] = Group53;

Script49.field[1] = field52;

field field54 = createNode("field");
field54.name = "position";
field54.accessType = "inputOutput";
field54.type = "SFNode";
Transform Transform55 = createNode("Transform");
Transform55.USE = "DECLx3dconnector_connector1_trans";
field54.children = new MFNode();

field54.children[0] = Transform55;

Script49.field[2] = field54;

field field56 = createNode("field");
field56.name = "rotscale";
field56.accessType = "inputOutput";
field56.type = "SFNode";
Transform Transform57 = createNode("Transform");
Transform57.USE = "DECLx3dconnector_connector1_rotscale";
field56.children = new MFNode();

field56.children[0] = Transform57;

Script49.field[3] = field56;

field field58 = createNode("field");
field58.name = "set_startpoint";
field58.accessType = "inputOnly";
field58.type = "SFVec3f";
Script49.field[4] = field58;

field field59 = createNode("field");
field59.name = "set_endpoint";
field59.accessType = "inputOnly";
field59.type = "SFVec3f";
Script49.field[5] = field59;


Script49.setSourceCode(`ecmascript:\n"+
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
Group42.children[1] = Script49;

children[4] = Group42;

ROUTE ROUTE60 = createNode("ROUTE");
ROUTE60.fromNode = "DECLpoint_G1_node";
ROUTE60.fromField = "translation";
ROUTE60.toNode = "DECLx3dconnector_connector1_S1";
ROUTE60.toField = "set_startpoint";
children[5] = ROUTE60;

ROUTE ROUTE61 = createNode("ROUTE");
ROUTE61.fromNode = "DECLpoint_G2_node";
ROUTE61.fromField = "translation";
ROUTE61.toNode = "DECLx3dconnector_connector1_S1";
ROUTE61.toField = "set_endpoint";
children[6] = ROUTE61;

}
