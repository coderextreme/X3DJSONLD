'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
Viewpoint(position=((0,0,5)), description="a moving graph"),
Background(skyColor=[(0.4,0.4,0.4)]),
Transform(DEF="trans1", children=[
Transform(DEF="rotscale1", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.2,0.7,0.7)))), 
geometry=
Cylinder(radius=0.1))])]),
Transform(DEF="trans2", children=[
Transform(DEF="rotscale2", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.2,0.7,0.7)))), 
geometry=
Cylinder(radius=0.1))])]),
Transform(DEF="trans3", children=[
Transform(DEF="rotscale3", children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.2,0.7,0.7)))), 
geometry=
Cylinder(radius=0.1))])]),
ProtoDeclare(name="point", 
ProtoInterface=ProtoInterface(field=[field(name="translation", accessType="inputOutput", type="SFVec3f", value=(0,0,0))
]), 
ProtoBody=ProtoBody(children=[
Transform(DEF="node", 
IS=IS(connect=[connect(nodeField="translation", protoField="translation")
]), children=[
Shape(
geometry=
Sphere(radius=0.1), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0))))),
PositionInterpolator(DEF="PI1", key=[float(0),float(1)], keyValue=[(0,0,0),(0,5,0)]),
Script(DEF="MB1", field=[field(name="translation", accessType="inputOutput", type="SFVec3f", value=(50,50,0)),
field(name="old", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="set_location", accessType="inputOnly", type="SFTime"),
field(name="keyValue", accessType="outputOnly", type="MFVec3f")
], 
#['', '', 'ecmascript:', '\t\tfunction set_location(value) {', '                    old = translation;', '\t\t    translation = new SFVec3f(Math.random()*10-5, Math.random()*10-5, Math.random()*10-5);', '                    keyValue = new MFVec3f([old, translation]);', '\t\t    // Browser.println(translation);', '\t\t}', '', '']
),
TimeSensor(DEF="CL1", cycleInterval=3, loop=True),
ROUTE(fromNode="CL1", fromField="cycleTime", toNode="MB1", toField="set_location"),
ROUTE(fromNode="CL1", fromField="fraction_changed", toNode="PI1", toField="set_fraction"),
ROUTE(fromNode="MB1", fromField="keyValue", toNode="PI1", toField="keyValue"),
ROUTE(fromNode="PI1", fromField="value_changed", toNode="node", toField="set_translation")])])),
#from doug sanden

ProtoDeclare(name="x3dconnector", 
ProtoInterface=ProtoInterface(field=[field(name="startnode", accessType="inputOutput", type="SFNode"),
field(name="endnode", accessType="inputOutput", type="SFNode"),
field(name="transnode", accessType="inputOutput", type="SFNode"),
field(name="rotscalenode", accessType="inputOutput", type="SFNode"),
field(name="set_startpoint", accessType="inputOnly", type="SFVec3f"),
field(name="set_endpoint", accessType="inputOnly", type="SFVec3f")
]), 
ProtoBody=ProtoBody(children=[
Script(DEF="S1", field=[field(name="startnode", accessType="inputOutput", type="SFNode"),
field(name="endnode", accessType="inputOutput", type="SFNode"),
field(name="transnode", accessType="inputOutput", type="SFNode"),
field(name="rotscalenode", accessType="inputOutput", type="SFNode"),
field(name="set_startpoint", accessType="inputOnly", type="SFVec3f"),
field(name="set_endpoint", accessType="inputOnly", type="SFVec3f")
], 
IS=IS(connect=[connect(nodeField="startnode", protoField="startnode"),
connect(nodeField="endnode", protoField="endnode"),
connect(nodeField="transnode", protoField="transnode"),
connect(nodeField="rotscalenode", protoField="rotscalenode"),
connect(nodeField="set_startpoint", protoField="set_startpoint"),
connect(nodeField="set_endpoint", protoField="set_endpoint")
]), 
#['', '            ecmascript:', '        function recompute(startpoint,endpoint){', "\t    if (typeof endpoint === 'undefined') {", '\t\treturn;', '\t    }', '            var dif = endpoint.subtract(startpoint);', '            var dist = dif.length()*0.5;', '            var dif2 = dif.multiply(0.5);', '            var norm = dif.normalize();', '            var transl = startpoint.add(dif2);', "\t    if (typeof Quaternion !== 'undefined') {", '\t\t    return {', '\t\t\t    scale : new SFVec3f(1.0,dist,1.0),', '\t\t\t    translation : transl,', '\t\t\t    rotation : new Quaternion.rotateFromTo(new SFVec3f(0.0,1.0,0.0), norm)', '\t\t    };', '\t    } else {', '\t\t    return {', '\t\t\t    scale : new SFVec3f(1.0,dist,1.0),', '\t\t\t    translation : transl,', '\t\t\t    rotation : new SFRotation(new SFVec3f(0.0,1.0,0.0),norm)', '\t\t    };', '\t    }', '\t}', '\tfunction recompute_and_route(startpoint, endpoint) {', '\t\tvar trafo = recompute(startpoint, endpoint);', "\t\tif (typeof trafo !== 'undefined') {", '\t\t\ttransnode.translation = trafo.translation;', '\t\t\trotscalenode.rotation = trafo.rotation;', '\t\t\trotscalenode.scale = trafo.scale;', '\t\t} else {', '\t\t\tBrowser.print("recompute returned undefined");', '\t\t}', '\t}', '        function initialize(){', '            recompute_and_route(startnode.translation,endnode.translation);', '        }', '        function set_startpoint(val,t){', '            recompute_and_route(val || startnode.translation,endnode.translation);', '        }', '        function set_endpoint(val,t){', '            recompute_and_route(startnode.translation,val || endnode.translation);', '        }', '', '']
)])),
ProtoInstance(name="point", DEF="G1"),
ProtoInstance(name="point", DEF="G2"),
ProtoInstance(name="point", DEF="G3"),
ProtoInstance(name="point", DEF="G4"),
ProtoInstance(name="x3dconnector", DEF="connector1", fieldValue=[fieldValue(name="startnode", children=[
ProtoInstance(USE="G1")]),
fieldValue(name="endnode", children=[
ProtoInstance(USE="G2")]),
fieldValue(name="transnode", children=[
Transform(USE="trans1")]),
fieldValue(name="rotscalenode", children=[
Transform(USE="rotscale1")])
]),
ProtoInstance(name="x3dconnector", DEF="connector2", fieldValue=[fieldValue(name="startnode", children=[
ProtoInstance(USE="G1")]),
fieldValue(name="endnode", children=[
ProtoInstance(USE="G3")]),
fieldValue(name="transnode", children=[
Transform(USE="trans2")]),
fieldValue(name="rotscalenode", children=[
Transform(USE="rotscale2")])
]),
ProtoInstance(name="x3dconnector", DEF="connector3", fieldValue=[fieldValue(name="startnode", children=[
ProtoInstance(USE="G1")]),
fieldValue(name="endnode", children=[
ProtoInstance(USE="G4")]),
fieldValue(name="transnode", children=[
Transform(USE="trans3")]),
fieldValue(name="rotscalenode", children=[
Transform(USE="rotscale3")])
]),
ROUTE(fromNode="G1", fromField="translation_changed", toNode="connector1", toField="set_startpoint"),
ROUTE(fromNode="G2", fromField="translation_changed", toNode="connector1", toField="set_endpoint"),
ROUTE(fromNode="G1", fromField="translation_changed", toNode="connector2", toField="set_startpoint"),
ROUTE(fromNode="G3", fromField="translation_changed", toNode="connector2", toField="set_endpoint"),
ROUTE(fromNode="G1", fromField="translation_changed", toNode="connector3", toField="set_startpoint"),
ROUTE(fromNode="G4", fromField="translation_changed", toNode="connector3", toField="set_endpoint"),]))
.XML())
