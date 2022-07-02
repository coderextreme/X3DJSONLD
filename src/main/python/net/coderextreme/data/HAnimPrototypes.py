'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print((
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
#**********Human Model Protypes*********

ProtoDeclare(name="Humanoid1_1", appinfo="The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.", documentation="http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html", 
ProtoInterface=ProtoInterface(field=[field(name="name", accessType="inputOutput", type="SFString"),
field(name="version", accessType="inputOutput", appinfo="legal values: 1.1 or 2.0", type="SFString", value="1.1"),
field(name="humanoidVersion", accessType="inputOutput", appinfo="Version of the humanoid being modeled. Hint: HAnim version 2.0", type="SFString"),
field(name="info", accessType="inputOutput", type="MFString"),
field(name="translation", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="rotation", accessType="inputOutput", type="SFRotation", value=(0,0,1,0)),
field(name="center", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="scale", accessType="inputOutput", type="SFVec3f", value=(1,1,1)),
field(name="scaleOrientation", accessType="inputOutput", type="SFRotation", value=(0,0,1,0)),
field(name="bboxCenter", accessType="initializeOnly", type="SFVec3f", value=(0,0,0)),
field(name="bboxSize", accessType="initializeOnly", type="SFVec3f", value=(-1,-1,-1)),
field(name="humanoidBody", accessType="inputOutput", appinfo="HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton.", documentation="http://HAnim.org/Specifications/HAnim1.1/#humanoid", type="MFNode"),
field(name="skeleton", accessType="inputOutput", appinfo="HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody", documentation="http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html", type="MFNode"),
field(name="joints", accessType="inputOutput", appinfo="Container field for Joint nodes", type="MFNode"),
field(name="segments", accessType="inputOutput", appinfo="Container field for Segment nodes", type="MFNode"),
field(name="sites", accessType="inputOutput", appinfo="Container field for Site nodes", type="MFNode"),
field(name="viewpoints", accessType="inputOutput", appinfo="Container field for Viewpoint nodes", type="MFNode"),
field(name="skinCoord", accessType="inputOutput", appinfo="Hint: HAnim version 2.0", type="SFNode", children=[
#NULL
]),
field(name="skinNormal", accessType="inputOutput", appinfo="Hint: HAnim version 2.0", type="SFNode", children=[
#NULL
])
]), 
ProtoBody=ProtoBody(children=[
Transform(DEF="HumanoidTransform", 
IS=IS(connect=[connect(nodeField="translation", protoField="translation"),
connect(nodeField="rotation", protoField="rotation"),
connect(nodeField="center", protoField="center"),
connect(nodeField="scale", protoField="scale"),
connect(nodeField="scaleOrientation", protoField="scaleOrientation"),
connect(nodeField="bboxCenter", protoField="bboxCenter"),
connect(nodeField="bboxSize", protoField="bboxSize")
]), children=[
Group(DEF="HumanoidGroup1", 
IS=IS(connect=[connect(nodeField="children", protoField="humanoidBody")
])),
Group(DEF="HumanoidGroup2", 
IS=IS(connect=[connect(nodeField="children", protoField="skeleton")
])),
Group(DEF="HumanoidGroup3", 
IS=IS(connect=[connect(nodeField="children", protoField="viewpoints")
]))])])),
ProtoDeclare(name="Joint", appinfo="The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.", documentation="http://HAnim.org/Specifications/HAnim2001/part1/Joint.html", 
ProtoInterface=ProtoInterface(field=[field(name="name", accessType="inputOutput", type="SFString"),
field(name="ulimit", accessType="inputOutput", type="MFFloat"),
field(name="llimit", accessType="inputOutput", type="MFFloat"),
field(name="limitOrientation", accessType="inputOutput", type="SFRotation", value=(0,0,1,0)),
field(name="skinCoordIndex", accessType="inputOutput", type="MFInt32"),
field(name="skinCoordWeight", accessType="inputOutput", type="MFFloat"),
field(name="stiffness", accessType="inputOutput", type="MFFloat", value=[float(0),float(0),float(0)]),
field(name="translation", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="rotation", accessType="inputOutput", type="SFRotation", value=(0,0,1,0)),
field(name="scale", accessType="inputOutput", type="SFVec3f", value=(1,1,1)),
field(name="scaleOrientation", accessType="inputOutput", type="SFRotation", value=(0,0,1,0)),
field(name="center", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="bboxCenter", accessType="initializeOnly", type="SFVec3f", value=(0,0,0)),
field(name="bboxSize", accessType="initializeOnly", type="SFVec3f", value=(-1,-1,-1)),
field(name="children", accessType="inputOutput", type="MFNode"),
field(name="addChildren", accessType="inputOnly", type="MFNode"),
field(name="removeChildren", accessType="inputOnly", type="MFNode")
]), 
ProtoBody=ProtoBody(children=[
Transform(DEF="JointTransform", 
IS=IS(connect=[connect(nodeField="translation", protoField="translation"),
connect(nodeField="rotation", protoField="rotation"),
connect(nodeField="center", protoField="center"),
connect(nodeField="scale", protoField="scale"),
connect(nodeField="scaleOrientation", protoField="scaleOrientation"),
connect(nodeField="bboxCenter", protoField="bboxCenter"),
connect(nodeField="bboxSize", protoField="bboxSize"),
connect(nodeField="children", protoField="children"),
connect(nodeField="addChildren", protoField="addChildren"),
connect(nodeField="removeChildren", protoField="removeChildren")
]))])),
ProtoDeclare(name="Segment", appinfo="The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node.", documentation="http://HAnim.org/Specifications/HAnim2001/part1/Segment.html", 
ProtoInterface=ProtoInterface(field=[field(name="name", accessType="inputOutput", type="SFString"),
field(name="mass", accessType="inputOutput", type="SFFloat", value=0),
field(name="centerOfMass", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="momentsOfInertia", accessType="inputOutput", type="MFFloat", value=[float(0),float(0),float(0),float(0),float(0),float(0),float(0),float(0),float(0)]),
field(name="bboxCenter", accessType="initializeOnly", type="SFVec3f", value=(0,0,0)),
field(name="bboxSize", accessType="initializeOnly", type="SFVec3f", value=(-1,-1,-1)),
field(name="children", accessType="inputOutput", type="MFNode"),
field(name="addChildren", accessType="inputOnly", type="MFNode"),
field(name="removeChildren", accessType="inputOnly", type="MFNode"),
field(name="coord", accessType="inputOutput", appinfo="contains Coordinate nodes", type="SFNode", children=[
#NULL
]),
field(name="displacers", accessType="inputOutput", appinfo="contains Displacer nodes", type="MFNode")
]), 
ProtoBody=ProtoBody(children=[
Group(DEF="SegmentGroup", 
IS=IS(connect=[connect(nodeField="bboxCenter", protoField="bboxCenter"),
connect(nodeField="bboxSize", protoField="bboxSize"),
connect(nodeField="children", protoField="children"),
connect(nodeField="addChildren", protoField="addChildren"),
connect(nodeField="removeChildren", protoField="removeChildren")
]))])),
ProtoDeclare(name="Site", appinfo="The Site node can be used for three purposes: (a) to define an \"end effector\" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view \"through the eyes\" of the humanoid for use in multi-user worlds).", documentation="http://HAnim.org/Specifications/HAnim2001/part1/Site.html", 
ProtoInterface=ProtoInterface(field=[field(name="name", accessType="inputOutput", type="SFString"),
field(name="translation", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="rotation", accessType="inputOutput", type="SFRotation", value=(0,0,1,0)),
field(name="scale", accessType="inputOutput", type="SFVec3f", value=(1,1,1)),
field(name="scaleOrientation", accessType="inputOutput", type="SFRotation", value=(0,0,1,0)),
field(name="center", accessType="inputOutput", type="SFVec3f", value=(0,0,0)),
field(name="bboxCenter", accessType="initializeOnly", type="SFVec3f", value=(0,0,0)),
field(name="bboxSize", accessType="initializeOnly", type="SFVec3f", value=(-1,-1,-1)),
field(name="children", accessType="inputOutput", type="MFNode"),
field(name="addChildren", accessType="inputOnly", type="MFNode"),
field(name="removeChildren", accessType="inputOnly", type="MFNode")
]), 
ProtoBody=ProtoBody(children=[
Transform(DEF="SiteTransform", 
IS=IS(connect=[connect(nodeField="translation", protoField="translation"),
connect(nodeField="rotation", protoField="rotation"),
connect(nodeField="center", protoField="center"),
connect(nodeField="scale", protoField="scale"),
connect(nodeField="scaleOrientation", protoField="scaleOrientation"),
connect(nodeField="bboxCenter", protoField="bboxCenter"),
connect(nodeField="bboxSize", protoField="bboxSize"),
connect(nodeField="children", protoField="children"),
connect(nodeField="addChildren", protoField="addChildren"),
connect(nodeField="removeChildren", protoField="removeChildren")
]))])),
ProtoDeclare(name="Displacer", appinfo="A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment.", documentation="http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html", 
ProtoInterface=ProtoInterface(field=[field(name="name", accessType="inputOutput", type="SFString"),
field(name="coordIndex", accessType="inputOutput", type="MFInt32"),
field(name="displacements", accessType="inputOutput", type="MFVec3f")
]), 
ProtoBody=ProtoBody(children=[
WorldInfo(info=["null body node"])])),
Shape(
geometry=
Text(string=["Humanoid Animation","(HAnim) prototype","implementations"], 
fontStyle=
FontStyle(justify=["MIDDLE","MIDDLE"])), 
appearance=
Appearance(
material=
Material(ambientIntensity=0.25, diffuseColor=((0.795918,0.505869,0.093315)), shininess=0.39, specularColor=((0.923469,0.428866,0.006369))))),]))
.XML()))
