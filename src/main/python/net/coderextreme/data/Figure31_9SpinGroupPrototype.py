# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.0", 
head=head(children=[meta(name="title", content="Figure31_9SpinGroupPrototype.x3d"),
meta(name="creator", content="Figure 31.9, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland"),
meta(name="reference", content="http://www.wiley.com/legacy/compbooks/vrml2sbk/ch31/31fig09.htm"),
meta(name="translator", content="Don Brutzman"),
meta(name="created", content="24 October 2000"),
meta(name="modified", content="20 October 2019"),
meta(name="description", content="The SpinGroup prototype is used to automatically spin a group of three long rectangular boxes. Click on blue crossbar to activate second SpinGroup."),
meta(name="identifier", content="https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter31Prototypes/Figure31_9SpinGroupPrototype.x3d"),
meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
meta(name="license", content="../../license.html"),
meta(name="translated", content="11 April 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
WorldInfo(title="Figure31_9SpinGroupPrototype.x3d"),
ProtoDeclare(name="SpinGroup", 
ProtoInterface=ProtoInterface(field=[field(name="children", accessType="inputOutput", type="MFNode", children=[
Comment(value=''' NULL node initialization '''),
]),
field(name="cycleInterval", accessType="inputOutput", type="SFTime", value=1),
field(name="loop", accessType="inputOutput", type="SFBool", value=False),
field(name="startTime", accessType="inputOutput", type="SFTime", value=0),
field(name="stopTime", accessType="inputOutput", type="SFTime", value=0)
]), 
ProtoBody=ProtoBody(children=[
Transform(DEF="SpinGroupTransform", 
IS=IS(connect=[connect(nodeField="children", protoField="children")
])),
Comment(value=''' following nodes will not be rendered, only the first node of a ProtoBody is drawn '''),

TimeSensor(DEF="SpinGroupClock", 
IS=IS(connect=[connect(nodeField="cycleInterval", protoField="cycleInterval"),
connect(nodeField="loop", protoField="loop"),
connect(nodeField="startTime", protoField="startTime"),
connect(nodeField="stopTime", protoField="stopTime")
])),
OrientationInterpolator(DEF="Spinner", key=[float(0),float(0.5),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(3.14)),(float(0),float(1),float(0),float(6.28))]),
ROUTE(fromField="fraction_changed", fromNode="SpinGroupClock", toField="set_fraction", toNode="Spinner"),
ROUTE(fromField="value_changed", fromNode="Spinner", toField="set_rotation", toNode="SpinGroupTransform"),])),
Comment(value=''' Now the scene proper begins. Nothing renders in a ProtoDeclare (or ExternProtoDeclare). '''),

Viewpoint(description="Click on blue crossbar to activate second SpinGroup", orientation=((1,0,0,-0.52)), position=((0,18,30))),
Comment(value=''' Create an instance, meaning actual nodes that render '''),

ProtoInstance(name="SpinGroup", fieldValue=[fieldValue(name="cycleInterval", value=8),
fieldValue(name="loop", value=True),
fieldValue(name="children", children=[
Shape(
geometry=
Box(size=((25,2,2))), 
appearance=
Appearance(DEF="Green", 
material=
Material(diffuseColor=((0,1,0.3))))),
Shape(
geometry=
Box(size=((2,25,2))), 
appearance=
Appearance(USE="Green")),
ProtoInstance(name="SpinGroup", DEF="SecondSpinGroup", fieldValue=[fieldValue(name="cycleInterval", value=4),
fieldValue(name="loop", value=True),
fieldValue(name="stopTime", value=1),
fieldValue(name="children", children=[
TouchSensor(DEF="ActivateSecondSpinGroup", description="Activate second SpinGroup by clicking blue bar"),
Shape(
geometry=
Box(size=((2,2.05,25))), 
appearance=
Appearance(
material=
Material(diffuseColor=((0,0.3,1)))))])
])])
]),
ROUTE(fromField="touchTime", fromNode="ActivateSecondSpinGroup", toField="startTime", toNode="SecondSpinGroup"),]))
.XML())
