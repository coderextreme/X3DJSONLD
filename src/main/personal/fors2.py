# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="3.3", 
head=head(
meta(name="creator", content="John W Carlson"),
meta(name="created", content="December 13 2015"),
meta(name="modified", content="April 18 2017"),
meta(name="title", content="fors2.x3d"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/fors2.x3d"),
meta(name="description", content="beginnings of a force directed graph in 3D"),
meta(name="generator", content="Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"),
meta(name="translated", content="26 August 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
ProtoDeclare(name="node", 
ProtoInterface=ProtoInterface(field=[field(name="position", accessType="inputOutput", type="SFVec3f", value=(0,0,0))
]), 
ProtoBody=ProtoBody(children=[
Transform(DEF="transform", 
IS=IS(connect=[connect(nodeField="translation", protoField="position")
]), children=[
Shape(
geometry=
Sphere(), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)))))]),
PositionInterpolator(DEF="NodePosition", key=[float(0),float(1)], keyValue=[(0,0,0),(0,5,0)]),
Script(DEF="MoveBall", field=[field(name="translation", accessType="inputOutput", type="SFVec3f", value=(50,50,0)),
field(name="old", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="set_cycle", accessType="inputOnly", type="SFTime"),
field(name="keyValue", accessType="outputOnly", type="MFVec3f")
], sourceCode="""['', ' ecmascript:', '\t\t\t\t\tfunction set_cycle(value) {', '                                                old = translation;', '\t\t\t\t\t\ttranslation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);', '                                                keyValue = new MFVec3f([old, translation]);', '\t\t\t\t\t\t// Browser.println(translation);', '\t\t\t\t\t}', '']""",),
TimeSensor(DEF="nodeClock", cycleInterval=3, loop=True),
ROUTE(fromNode="nodeClock", fromField="cycleTime", toNode="MoveBall", toField="set_cycle"),
ROUTE(fromNode="nodeClock", fromField="fraction_changed", toNode="NodePosition", toField="set_fraction"),
ROUTE(fromNode="MoveBall", fromField="keyValue", toNode="NodePosition", toField="keyValue"),
ROUTE(fromNode="NodePosition", fromField="value_changed", toNode="transform", toField="set_translation")])),
ProtoDeclare(name="cylinder", 
ProtoInterface=ProtoInterface(field=[field(name="positionA", accessType="inputOnly", type="SFVec3f"),
field(name="positionB", accessType="inputOnly", type="SFVec3f")
]), 
ProtoBody=ProtoBody(children=[
Shape(
geometry=
Extrusion(DEF="extrusion", creaseAngle=0.785, crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)], spine=[(0,-50,0),(0,0,0),(0,50,0)]), 
appearance=
Appearance(
material=
Material(diffuseColor=((0,1,0))))),
Script(DEF="MoveCylinder", field=[field(name="spine", accessType="inputOutput", type="MFVec3f", value=[(0,-50,0),(0,0,0),(0,50,0)]),
field(name="set_endA", accessType="inputOnly", type="SFVec3f"),
field(name="set_endB", accessType="inputOnly", type="SFVec3f")
], 
IS=IS(connect=[connect(nodeField="set_endA", protoField="positionA"),
connect(nodeField="set_endB", protoField="positionB")
]), sourceCode="""['', ' ecmascript:', '', '                function set_endA(value) {', '\t\t    if (typeof spine === "undefined") {', '\t\t        spine = new MFVec3f([value, value]);', '\t\t    } else {', '\t\t        spine = new MFVec3f([value, spine[1]]);', '\t\t    }', '                }', '', '                function set_endB(value) {', '\t\t    if (typeof spine === "undefined") {', '\t\t        spine = new MFVec3f([value, value]);', '\t\t    } else {', '\t\t        spine = new MFVec3f([spine[0], value]);', '\t\t    }', '                }', '', '                function set_spine(value) {', '\t\t    Browser.print(\'\n\'+\'"\');', '                    spine = value;', '                }', '']""",),
ROUTE(fromNode="MoveCylinder", fromField="spine", toNode="extrusion", toField="set_spine")])),
Transform(scale=((0.1,0.1,0.1)), children=[
ProtoInstance(name="node", DEF="nodeA", fieldValue=[fieldValue(name="position", value=[-50,-50,-50])
]),
ProtoInstance(name="node", DEF="nodeB", fieldValue=[fieldValue(name="position", value=[50,50,50])
]),
ProtoInstance(name="cylinder", DEF="linkA", fieldValue=[fieldValue(name="positionA", value=[0,0,0]),
fieldValue(name="positionB", value=[50,50,50])
])]),
ROUTE(fromNode="nodeA", fromField="position", toNode="linkA", toField="positionA"),
ROUTE(fromNode="nodeB", fromField="position", toNode="linkA", toField="positionB")])))
output = model.JSON()
json.loads(output)