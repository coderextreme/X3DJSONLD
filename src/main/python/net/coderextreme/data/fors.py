# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="3.3", 
head=Pyhead(
children=[
Pymeta(name="creator", content="John W Carlson"),
Pymeta(name="created", content="December 13 2015"),
Pymeta(name="title", content="fors.x3d"),
Pymeta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/force.x3d"),
Pymeta(name="description", content="beginnings of a force directed graph in 3D"),
Pymeta(name="generator", content="Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"),
Pymeta(name="translated", content="30 December 2023"),
Pymeta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
Pymeta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=PyScene(children=[
ProtoDeclare(name="node", 
ProtoInterface=PyProtoInterface(field=[Pyfield(name="position", accessType="inputOutput", type="SFVec3f", value=(0,0,0))
]), 
ProtoBody=PyProtoBody(children=[
Transform(DEF="transform", 
IS=PyIS(connect=[Pyconnect(nodeField="translation", protoField="position")
]), children=[
Shape(
geometry=
Sphere(), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0))))),
Transform(translation=((1,0,0)), children=[
Shape(
geometry=
Text(string=["Node"], 
fontStyle=
FontStyle(justify=["MIDDLE","MIDDLE"], size=5)), 
appearance=
Appearance(
material=
Material(diffuseColor=((0,0,1)))))])]),
PositionInterpolator(DEF="NodePosition", key=[float(0),float(1)], keyValue=[(0,0,0),(0,5,0)]),
Script(DEF="MoveBall", field=[Pyfield(name="translation", accessType="inputOutput", type="SFVec3f", value=(50,50,0)),
Pyfield(name="old", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
Pyfield(name="set_cycle", accessType="inputOnly", type="SFTime"),
Pyfield(name="keyValue", accessType="outputOnly", type="MFVec3f")
], sourceCode="""['', '', 'ecmascript:', '\t\t\t\t\tfunction set_cycle(value) {', '                                                old = translation;', '\t\t\t\t\t\ttranslation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);', '                                                keyValue = new MFVec3f([old, translation]);', '\t\t\t\t\t\t// Browser.println(translation);', '\t\t\t\t\t}', '', '']""",),
TimeSensor(DEF="nodeClock", cycleInterval=3, loop=True),
ROUTE(fromNode="nodeClock", fromField="cycleTime", toNode="MoveBall", toField="set_cycle"),
ROUTE(fromNode="nodeClock", fromField="fraction_changed", toNode="NodePosition", toField="set_fraction"),
ROUTE(fromNode="MoveBall", fromField="keyValue", toNode="NodePosition", toField="keyValue"),
ROUTE(fromNode="NodePosition", fromField="value_changed", toNode="transform", toField="set_translation")])),
ProtoDeclare(name="cyl", 
ProtoInterface=PyProtoInterface(field=[Pyfield(name="set_positionA", accessType="inputOnly", type="SFVec3f"),
Pyfield(name="set_positionB", accessType="inputOnly", type="SFVec3f")
]), 
ProtoBody=PyProtoBody(children=[
Shape(
geometry=
Extrusion(DEF="extrusion", creaseAngle=0.785, crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)], spine=[(0,-50,0),(0,50,0)]), 
appearance=
Appearance(
material=
Material(diffuseColor=((0,1,0))))),
Script(DEF="MoveCylinder", field=[Pyfield(name="spine", accessType="inputOutput", type="MFVec3f", value=[(0,-50,0),(0,50,0)]),
Pyfield(name="set_endA", accessType="inputOnly", type="SFVec3f"),
Pyfield(name="set_endB", accessType="inputOnly", type="SFVec3f")
], 
IS=PyIS(connect=[Pyconnect(nodeField="set_endA", protoField="set_positionA"),
Pyconnect(nodeField="set_endB", protoField="set_positionB")
]), sourceCode="""['', '', 'ecmascript:', '', '                function set_endA(value) {', "\t\t    if (typeof spine === 'undefined') {", '\t\t        spine = new MFVec3f([value, value]);', '\t\t    } else {', '\t\t        spine = new MFVec3f([value, spine[1]]);', '\t\t    }', '                }', '', '                function set_endB(value) {', "\t\t    if (typeof spine === 'undefined') {", '\t\t        spine = new MFVec3f([value, value]);', '\t\t    } else {', '\t\t        spine = new MFVec3f([spine[0], value]);', '\t\t    }', '                }', '', '                function set_spine(value) {', '                    spine = value;', '                }', '', '']""",),
ROUTE(fromNode="MoveCylinder", fromField="spine", toNode="extrusion", toField="set_spine")])),
Transform(DEF="HoldsContent", scale=((0.1,0.1,0.1)), children=[
PlaneSensor(DEF="clickGenerator", minPosition=((-50,-50)), maxPosition=((50,50)), description="click on background to add nodes, click on nodes to add links"),
ProtoInstance(name="node", DEF="nodeA", fieldValue=[PyfieldValue(name="position", value=[0.0,0.0,0.0])
]),
ProtoInstance(name="node", DEF="nodeB", fieldValue=[PyfieldValue(name="position", value=[50.0,50.0,50.0])
]),
ProtoInstance(name="cyl", DEF="linkA", fieldValue=[PyfieldValue(name="set_positionA", value=[0,0,0]),
PyfieldValue(name="set_positionB", value=[50,50,50])
])]),
ROUTE(fromNode="nodeA", fromField="position", toNode="linkA", toField="set_positionA"),
ROUTE(fromNode="nodeB", fromField="position", toNode="linkA", toField="set_positionB")])))
output = model.JSON()
json.loads(output)
