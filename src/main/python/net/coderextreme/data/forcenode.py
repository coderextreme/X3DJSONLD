# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(children=[meta(name="creator", content="John W Carlson"),
meta(name="created", content="December 13 2015"),
meta(name="title", content="forcenode.x3d"),
meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/force.x3d"),
meta(name="description", content="beginnings of a force directed graph in 3D"),
meta(name="generator", content="Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit"),
meta(name="translated", content="16 July 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
ProtoDeclare(name="node", 
ProtoInterface=ProtoInterface(field=[field(name="position", accessType="inputOutput", type="SFVec3f", value=(0,0,0))
]), 
ProtoBody=ProtoBody(children=[
Group(children=[
Transform(DEF="transform", 
IS=IS(connect=[connect(nodeField="translation", protoField="position")
]), children=[
Shape(
geometry=
Sphere(), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0))))),
Transform(translation=((1,0,1)), children=[
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
Script(DEF="MoveBall", field=[field(name="translation", accessType="inputOutput", type="SFVec3f", value=(50,50,0)),
field(name="old", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="set_cycle", accessType="inputOnly", type="SFTime"),
field(name="keyValue", accessType="outputOnly", type="MFVec3f")
], sourceCode="""['', '', 'ecmascript:', '\t\t\t\t\tfunction set_cycle(value) {', '                                                old = translation;', '\t\t\t\t\t\ttranslation = new SFVec3f(Math.random()*100-50, Math.random()*100-50, Math.random()*100-50);', '                                                keyValue = new MFVec3f([old, translation]);', '\t\t\t\t\t\t// Browser.println(translation);', '\t\t\t\t\t}', '', '']""",),
TimeSensor(DEF="nodeClock", cycleInterval=3, loop=True),
ROUTE(fromNode="nodeClock", fromField="cycleTime", toNode="MoveBall", toField="set_cycle"),
ROUTE(fromNode="nodeClock", fromField="fraction_changed", toNode="NodePosition", toField="set_fraction"),
ROUTE(fromNode="MoveBall", fromField="keyValue", toNode="NodePosition", toField="keyValue"),
ROUTE(fromNode="NodePosition", fromField="value_changed", toNode="transform", toField="set_translation")])])),
ProtoDeclare(name="cylinder", 
ProtoInterface=ProtoInterface(field=[field(name="set_positionA", accessType="inputOnly", type="SFVec3f"),
field(name="set_positionB", accessType="inputOnly", type="SFVec3f")
]), 
ProtoBody=ProtoBody(children=[
Group(children=[
Shape(
geometry=
Extrusion(DEF="extrusion", creaseAngle=0.785, crossSection=[(1.0,0.0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.0,-1.0),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.0,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.0,1.0),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.0,0.0)], spine=[(0,-50,0),(0,50,0)]), 
appearance=
Appearance(
material=
Material(diffuseColor=((0,1,0))))),
Script(DEF="MoveCylinder", field=[field(name="spine", accessType="inputOutput", type="MFVec3f", value=[(0,-50,0),(0,50,0)]),
field(name="set_endA", accessType="inputOnly", type="SFVec3f"),
field(name="set_endB", accessType="inputOnly", type="SFVec3f")
], 
IS=IS(connect=[connect(nodeField="set_endA", protoField="set_positionA"),
connect(nodeField="set_endB", protoField="set_positionB")
]), sourceCode="""['', '', 'ecmascript:', '', '                function set_endA(value) {', "\t\t    if (typeof spine === 'undefined') {", '\t\t        spine = new MFVec3f([value, value]);', '\t\t    } else {', '\t\t        spine = new MFVec3f([value, spine[1]]);', '\t\t    }', '                }', '', '                function set_endB(value) {', "\t\t    if (typeof spine === 'undefined') {", '\t\t        spine = new MFVec3f([value, value]);', '\t\t    } else {', '\t\t        spine = new MFVec3f([spine[0], value]);', '\t\t    }', '                }', '', '                function set_spine(value) {', '                    spine = value;', '                }', '', '']""",),
ROUTE(fromNode="MoveCylinder", fromField="spine", toNode="extrusion", toField="set_spine")])])),
Transform(DEF="HoldsContent", scale=((0.1,0.1,0.1)), children=[
PlaneSensor(DEF="clickGenerator", minPosition=((-50,-50)), maxPosition=((50,50)), description="click on background to add nodes, click on nodes to add links"),
ProtoInstance(name="node", DEF="nodeA", fieldValue=[fieldValue(name="position", value=[0.0,0.0,0.0])
]),
ProtoInstance(name="node", DEF="nodeB", fieldValue=[fieldValue(name="position", value=[50.0,50.0,50.0])
]),
ProtoInstance(name="node", DEF="nodeC", fieldValue=[fieldValue(name="position", value=[-50.0,-50.0,-50.0])
]),
ProtoInstance(name="node", DEF="nodeD", fieldValue=[fieldValue(name="position", value=[50.0,50.0,-50.0])
]),
ProtoInstance(name="cylinder", DEF="linkA", fieldValue=[fieldValue(name="set_positionA", value=[0,0,0]),
fieldValue(name="set_positionB", value=[50,50,50])
]),
ProtoInstance(name="cylinder", DEF="linkB", fieldValue=[fieldValue(name="set_positionA", value=[0,0,0]),
fieldValue(name="set_positionB", value=[-50,-50,-50])
]),
ProtoInstance(name="cylinder", DEF="linkC", fieldValue=[fieldValue(name="set_positionA", value=[50,50,50]),
fieldValue(name="set_positionB", value=[50,50,-50])
])]),
Script(DEF="clickHandler", field=[field(name="counter", accessType="inputOutput", value=0, type="SFInt32"),
field(name="node_changed", accessType="outputOnly", type="SFNode"),
field(name="add_node", accessType="inputOnly", value=False, type="SFBool")
], sourceCode="""['', '\t', 'ecmascript:', '\tfunction add_node(value) {', "                // Browser.print('hey ', counter);", '                counter = counter++;', '\t\tBrowser.appendTo(Browser.getDocument().querySelector("field [name=ModifiableNode]"),', '\t\t\t{ "ProtoInstance":', '\t\t\t\t{ "@name":"node",', '\t\t\t\t  "@DEF":"node\'+counter+\'",', '\t\t\t\t  "fieldValue": [', '\t\t\t\t\t{', '\t\t\t\t\t\t "@name":"position",', '\t\t\t\t\t\t "@value":[0.0,0.0,0.0]', '\t\t\t\t\t}', '\t\t\t\t  ]', '\t\t\t\t}', '\t\t\t});', '', '        }', '\t', '']""",),
ROUTE(fromNode="clickGenerator", fromField="isActive", toNode="clickHandler", toField="add_node"),
ROUTE(fromNode="nodeA", fromField="position", toNode="linkA", toField="set_positionA"),
ROUTE(fromNode="nodeB", fromField="position", toNode="linkA", toField="set_positionB"),
ROUTE(fromNode="nodeA", fromField="position", toNode="linkB", toField="set_positionA"),
ROUTE(fromNode="nodeC", fromField="position", toNode="linkB", toField="set_positionB"),
ROUTE(fromNode="nodeA", fromField="position", toNode="linkC", toField="set_positionA"),
ROUTE(fromNode="nodeD", fromField="position", toNode="linkC", toField="set_positionB")]))
.XML())
