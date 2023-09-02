# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="3.3", 
head=head(
children=[
meta(name="title", content="pp3.x3d"),
meta(name="creator", content="John Carlson"),
meta(name="translator", content="John Carlson"),
meta(name="created", content="5 May 2015"),
meta(name="modified", content="23 Dec 2022"),
meta(name="description", content="A process pipeline between three spheres (try typing on spheres and blue"),
meta(name="identifier", content="https://coderextreme.net/x3d/pp3.x3d"),
meta(name="generator", content="manual"),
meta(name="translated", content="02 September 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
ProtoDeclare(name="Process", 
ProtoBody=ProtoBody(children=[
Group(children=[
Comment(value=''' left '''),
Transform(scale=((0.5,0.5,0.5)), children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.7,1,0)), transparency=0.5)), 
geometry=
Extrusion(creaseAngle=0.785, crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)], spine=[(-2.5,0,0),(-1.5,0,0)])),
Comment(value=''' <Transform translation="-2.5 0 0"> <Shape> <Text DEF="LeftString" string='"l"'/> </Shape> </Transform> <StringSensor DEF="LeftSensor" enabled="false"/> <TouchSensor DEF="LeftTouch" enabled="true"/> '''),]),
Comment(value=''' right '''),
Transform(scale=((0.5,0.5,0.5)), children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0,0.7,1)), transparency=0.5)), 
geometry=
Extrusion(creaseAngle=0.785, crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)], spine=[(1.5,0,0),(2.5,0,0)])),
Transform(translation=((2,0,0)), children=[
Shape(
appearance=
Appearance(
material=
Material(DEF="MaterialLightBlue", diffuseColor=((1,1,1)))), 
geometry=
Text(DEF="RightString", string=["r"]))]),
StringSensor(DEF="RightSensor", enabled=False),
TouchSensor(description="touch to activate", DEF="RightTouch")]),
Comment(value=''' up '''),
Transform(scale=((0.5,0.5,0.5)), children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0,0.7,1)), transparency=0.5)), 
geometry=
Extrusion(creaseAngle=0.785, crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)], spine=[(0,1.5,0),(0,2.5,0)])),
Transform(translation=((-0.5,2,0)), children=[
Shape(
appearance=
Appearance(
material=
Material(USE="MaterialLightBlue")), 
geometry=
Text(DEF="UpString", string=["u"]))]),
StringSensor(DEF="UpSensor", enabled=False),
TouchSensor(description="touch to activate", DEF="UpTouch")]),
Comment(value=''' down '''),
Transform(scale=((0.5,0.5,0.5)), children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((0.7,1,0)), transparency=0.5)), 
geometry=
Extrusion(creaseAngle=0.785, crossSection=[(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0)], spine=[(0,-2.5,0),(0,-1.5,0)])),
Comment(value=''' <Transform translation="-0.5 -2.5 0"> <Shape> <Text DEF="DownString" string='"d"'/> </Shape> </Transform> <StringSensor DEF="DownSensor" enabled="false"/> <TouchSensor description='touch to activate' DEF="DownTouch" enabled="true"/> '''),]),
Comment(value=''' center '''),
Transform(children=[
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0.7)))), 
geometry=
Sphere()),
Transform(scale=((0.5,0.5,0.5)), translation=((-0.5,0,1)), children=[
Shape(
appearance=
Appearance(
material=
Material(USE="MaterialLightBlue")), 
geometry=
Text(DEF="CenterString"))]),
StringSensor(DEF="CenterSensor", enabled=False),
TouchSensor(description="touch to activate", DEF="CenterTouch")]),]),
Script(DEF="RightSingleToMultiString", field=[field(name="set_rightstring", accessType="inputOnly", type="SFString"),
field(name="rightlines", accessType="outputOnly", type="MFString")
], sourceCode="""['', 'ecmascript:', '', 'function initialize() {', '\trightlines = new MFString("");', '}', '', 'function set_rightstring(rightstr) {', '\trightlines = new MFString(rightstr);', '}', '']""",),
Script(DEF="UpSingleToMultiString", field=[field(name="set_upstring", accessType="inputOnly", type="SFString"),
field(name="uplines", accessType="outputOnly", type="MFString")
], sourceCode="""['', 'ecmascript:', '', 'function initialize() {', '\tuplines = new MFString("");', '}', '', 'function set_upstring(upstr) {', '\tuplines = new MFString(upstr);', '}', '']""",),
Script(DEF="CenterSingleToMultiString", field=[field(name="set_centerstring", accessType="inputOnly", type="SFString"),
field(name="centerlines", accessType="outputOnly", type="MFString")
], sourceCode="""['', 'ecmascript:', '', 'function initialize() {', '\tcenterlines = new MFString("");', '}', '', 'function set_centerstring(centerstr) {', '\tcenterlines = new MFString(centerstr);', '}', '']""",),
ROUTE(fromField="enteredText", fromNode="CenterSensor", toField="set_centerstring", toNode="CenterSingleToMultiString"),
ROUTE(fromField="centerlines", fromNode="CenterSingleToMultiString", toField="set_string", toNode="CenterString"),
ROUTE(fromField="isOver", fromNode="CenterTouch", toField="set_enabled", toNode="CenterSensor"),
ROUTE(fromField="enteredText", fromNode="RightSensor", toField="set_rightstring", toNode="RightSingleToMultiString"),
ROUTE(fromField="rightlines", fromNode="RightSingleToMultiString", toField="set_string", toNode="RightString"),
ROUTE(fromField="isOver", fromNode="RightTouch", toField="set_enabled", toNode="RightSensor"),
ROUTE(fromField="enteredText", fromNode="UpSensor", toField="set_upstring", toNode="UpSingleToMultiString"),
ROUTE(fromField="uplines", fromNode="UpSingleToMultiString", toField="set_string", toNode="UpString"),
ROUTE(fromField="isOver", fromNode="UpTouch", toField="set_enabled", toNode="UpSensor")])),
NavigationInfo(),
Viewpoint(description="Process pipes", orientation=((1,0,0,-0.4)), position=((0,5,12))),
Transform(translation=((0,-2.5,0)), children=[
ProtoInstance(name="Process")]),
Transform(children=[
ProtoInstance(name="Process")]),
Transform(translation=((0,2.5,0)), children=[
ProtoInstance(name="Process")])])))
output = model.JSON()
json.loads(output)
