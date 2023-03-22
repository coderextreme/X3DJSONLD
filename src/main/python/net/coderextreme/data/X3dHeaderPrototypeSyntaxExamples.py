# x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
ExternProtoDeclare(name="ViewPositionOrientation", url=["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"], field=[field(name="enabled", accessType="inputOutput", type="SFBool"),
field(name="traceEnabled", accessType="initializeOnly", type="SFBool"),
field(name="set_traceEnabled", accessType="inputOnly", type="SFBool"),
field(name="position_changed", accessType="outputOnly", type="SFVec3f"),
field(name="orientation_changed", accessType="outputOnly", type="SFRotation"),
field(name="outputViewpointString", accessType="outputOnly", type="MFString")
]),
ProtoDeclare(name="NewWorldInfoNode", 
ProtoBody=ProtoBody(children=[
WorldInfo(DEF="ExamplePrototypeBody")])),
ProtoInstance(name="NewWorldInfoNode"),
ProtoDeclare(name="EmissiveMaterial", 
ProtoInterface=ProtoInterface(field=[field(name="onlyColor", accessType="inputOutput", type="SFColor", value=(1,0,0))
]), 
ProtoBody=ProtoBody(children=[
#Override default diffuseColor value 0.8 0.8 0.8

Material(diffuseColor=((0,0,0)), 
IS=IS(connect=[connect(nodeField="emissiveColor", protoField="onlyColor")
])),])),
ProtoDeclare(name="ShiftGroupUp2m", 
ProtoInterface=ProtoInterface(field=[field(name="children", accessType="inputOutput", type="MFNode", children=[
Group(DEF="DefaultNodeValue", bboxSize=((2,2,2)), children=[
#Authors need to override this node when creating the ProtoInstance fieldValue name="children"
])])
]), 
ProtoBody=ProtoBody(children=[
Transform(translation=((0,2,0)), children=[
Group(
IS=IS(connect=[connect(nodeField="children", protoField="children")
]))])])),
ProtoInstance(name="ShiftGroupUp2m"),
#====================

Viewpoint(DEF="ExampleSingleElement", description="Hello syntax"),
Group(DEF="ExampleChildElement", children=[
Shape(
geometry=
Box(), 
appearance=
Appearance(
material=
Material(diffuseColor=((0.6,0.4,0.2)))))]),
Transform(DEF="TransformExampleUSE", rotation=((0,1,0,0.78)), translation=((0,2.5,0)), children=[
Group(USE="ExampleChildElement")]),
Collision(
proxy=Shape(
geometry=
Sphere(), 
appearance=
Appearance(
material=
Material())), children=[
Group(USE="ExampleChildElement")]),
Transform(translation=((0,-2.5,0)), children=[
Shape(
appearance=
Appearance(
material=
ProtoInstance(name="EmissiveMaterial", fieldValue=[fieldValue(name="onlyColor", value=[0.2,0.6,0.6])
])), 
geometry=
Text(string=["X3D Header Prototype syntax examples","(view console for EXTERNPROTO output)"], 
fontStyle=
FontStyle(justify=["MIDDLE","MIDDLE"], size=0.6)))]),
ProtoInstance(name="ViewPositionOrientation", fieldValue=[fieldValue(name="enabled", value=True)
]),
TimeSensor(DEF="Clock", cycleInterval=4, loop=True),
OrientationInterpolator(DEF="Spinner", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(3.14159)),(float(0),float(1),float(0),float(6.28318))]),
ROUTE(fromField="fraction_changed", fromNode="Clock", toField="set_fraction", toNode="Spinner"),
ROUTE(fromField="value_changed", fromNode="Spinner", toField="rotation", toNode="TransformExampleUSE"),
Inline(DEF="someInline", url=["someUrl.x3d","https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/someUrl.x3d"]),
IMPORT(AS="someInlineRoot", importedDEF="someName", inlineDEF="someInline"),
PositionInterpolator(DEF="StayInPlace", key=[float(0),float(1)], keyValue=[(0,0,0),(0,0,0)]),
ROUTE(fromField="fraction_changed", fromNode="Clock", toField="set_fraction", toNode="StayInPlace"),
ROUTE(fromField="value_changed", fromNode="StayInPlace", toField="set_translation", toNode="someInlineRoot"),]))
.XML())
