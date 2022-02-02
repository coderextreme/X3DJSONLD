#x3d.py package loaded, have fun with X3D Graphics!
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="LOA1_SwimmingFlutterKickAnimation.x3d"),
ProtoDeclare(name="LOA1_DivingAnimation", 
ProtoInterface=ProtoInterface(field=[field(name="cycleInterval", accessType="inputOutput", type="SFTime", value=7),
field(name="enabled", accessType="inputOutput", type="SFBool", value=True),
field(name="loop", accessType="inputOutput", type="SFBool", value=True),
field(name="startTime", accessType="inputOutput", type="SFTime", value=0),
field(name="stopTime", accessType="inputOutput", type="SFTime", value=-1),
field(name="fraction_changed", accessType="outputOnly", type="SFFloat"),
field(name="isActive", accessType="outputOnly", type="SFBool"),
field(name="HumanoidRoot_translation_changed", accessType="outputOnly", type="SFVec3f"),
field(name="HumanoidRoot_rotation_changed", accessType="outputOnly", type="SFRotation"),
field(name="lower_body_rotation_changed", accessType="outputOnly", type="SFRotation"),
field(name="l_hip_rotation_changed", accessType="outputOnly", type="SFRotation"),
field(name="l_knee_rotation_changed", accessType="outputOnly", type="SFRotation"),
field(name="l_ankle_rotation_changed", accessType="outputOnly", type="SFRotation"),
field(name="l_midtarsal_rotation_changed", accessType="outputOnly", type="SFRotation"),
field(name="r_hip_rotation_changed", accessType="outputOnly", type="SFRotation"),
field(name="r_knee_rotation_changed", accessType="outputOnly", type="SFRotation"),
field(name="r_ankle_rotation_changed", accessType="outputOnly", type="SFRotation"),
field(name="r_midtarsal_rotation_changed", accessType="outputOnly", type="SFRotation"),
field(name="vl5_rotation_changed", accessType="outputOnly", type="SFRotation"),
field(name="skullbase_rotation_changed", accessType="outputOnly", type="SFRotation"),
field(name="l_shoulder_rotation_changed", accessType="outputOnly", type="SFRotation"),
field(name="l_elbow_rotation_changed", accessType="outputOnly", type="SFRotation"),
field(name="l_wrist_rotation_changed", accessType="outputOnly", type="SFRotation"),
field(name="r_shoulder_rotation_changed", accessType="outputOnly", type="SFRotation"),
field(name="r_elbow_rotation_changed", accessType="outputOnly", type="SFRotation"),
field(name="r_wrist_rotation_changed", accessType="outputOnly", type="SFRotation")
]), 
ProtoBody=ProtoBody(children=[
Group(children=[
TimeSensor(DEF="TIMER", loop=True, 
IS=IS(connect=[connect(nodeField="cycleInterval", protoField="cycleInterval"),
connect(nodeField="enabled", protoField="enabled"),
connect(nodeField="loop", protoField="loop"),
connect(nodeField="startTime", protoField="startTime"),
connect(nodeField="stopTime", protoField="stopTime"),
connect(nodeField="fraction_changed", protoField="fraction_changed"),
connect(nodeField="isActive", protoField="isActive")
])),
PositionInterpolator(DEF="HUMANOIDROOT_POSITION_ANIMATOR", key=[float(0.0),float(0.04167),float(0.125),float(0.1667),float(0.2083),float(0.25),float(0.2917),float(0.375),float(0.4583),float(0.5),float(0.5417),float(0.5833),float(0.625),float(0.7083),float(0.75),float(0.7917),float(0.875),float(0.9167),float(1.0)], keyValue=[(0.0,-0.00928,0.0),(0.0,-0.003858,0.0),(0.0,-0.008847,0.0),(0.0,-0.01486,0.0),(0.0,-0.02641,0.0),(0.0,-0.03934,0.0),(0.0,-0.0502,0.0),(0.0,-0.07469,0.0),(0.0,-0.02732,0.0),(0.0,-0.01608,0.0),(0.0,-0.01129,0.0),(0.0,-0.005819,0.0),(0.0,-0.002004,0.0),(0.0,-0.002579,0.0),(0.0,-0.0143,0.0),(0.0,-0.03799,0.0),(0.0,-0.05648,0.0),(0.0,-0.045,0.0),(0.0,-0.00928,0.0)], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="HumanoidRoot_translation_changed")
])),
OrientationInterpolator(DEF="HUMANOIDROOT_ANIMATOR", key=[float(0.0),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="HumanoidRoot_rotation_changed")
])),
#no SACROILIAC_ANIMATOR

OrientationInterpolator(DEF="L_HIP_ANIMATOR", key=[float(0.0),float(0.25),float(0.375),float(0.6667),float(0.7917),float(0.9167),float(1.0)], keyValue=[(float(-0.873),float(0.06094),float(0.484),float(0.2865)),(float(0.9963),float(-0.01057),float(0.08481),float(0.2488)),(float(0.9965),float(0.01591),float(-0.08222),float(0.3836)),(float(-1.0),float(0.0),float(0.0),float(0.5518)),(float(-0.9964),float(0.02231),float(0.0817),float(0.5351)),(float(-0.9809),float(0.04912),float(0.1881),float(0.5204)),(float(-0.873),float(0.06094),float(0.484),float(0.2865))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_hip_rotation_changed")
])),
OrientationInterpolator(DEF="L_KNEE_ANIMATOR", key=[float(0.0),float(0.2083),float(0.375),float(0.5),float(0.6667),float(0.7917),float(0.9167),float(1.0)], keyValue=[(float(1.0),float(0.0),float(0.0),float(0.3226)),(float(1.0),float(0.0),float(0.0),float(0.1556)),(float(1.0),float(0.0),float(0.0),float(0.08678)),(float(1.0),float(0.0),float(0.0),float(0.8751)),(float(1.0),float(0.0),float(0.0),float(1.131)),(float(1.0),float(0.0),float(0.0),float(0.09961)),(float(1.0),float(0.0),float(0.0),float(0.3942)),(float(1.0),float(0.0),float(0.0),float(0.3226))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_knee_rotation_changed")
])),
OrientationInterpolator(DEF="L_ANKLE_ANIMATOR", key=[float(0.0),float(0.125),float(0.2083),float(0.375),float(0.4583),float(0.5),float(0.6667),float(0.75),float(0.7917),float(0.9167),float(1.0)], keyValue=[(float(1.0),float(0.0),float(0.0),float(0.6001)),(float(1.0),float(0.0),float(0.0),float(0.6509)),(float(1.0),float(0.0),float(0.0),float(0.6001)),(float(1.0),float(0.0),float(0.0),float(0.6001)),(float(1.0),float(0.0),float(0.0),float(0.6509)),(float(1.0),float(0.0),float(0.0),float(0.6001)),(float(1.0),float(0.0),float(0.0),float(0.6001)),(float(1.0),float(0.0),float(0.0),float(0.6509)),(float(1.0),float(0.0),float(0.0),float(0.6001)),(float(1.0),float(0.0),float(0.0),float(0.6509)),(float(1.0),float(0.0),float(0.0),float(0.6001))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_ankle_rotation_changed")
])),
#no L_MIDTARSAL_ANIMATOR

OrientationInterpolator(DEF="R_HIP_ANIMATOR", key=[float(0.0),float(0.125),float(0.2083),float(0.2917),float(0.5),float(0.7917),float(0.9167),float(1.0)], keyValue=[(float(-0.5831),float(0.03511),float(0.8116),float(0.1481)),(float(-0.995),float(0.02296),float(0.09674),float(0.4683)),(float(-1.0),float(0.00192),float(0.007964),float(0.4732)),(float(-0.998),float(-0.0158),float(-0.06102),float(0.5079)),(float(-0.9131),float(-0.06243),float(-0.403),float(0.3361)),(float(1.0),float(0.0),float(0.0),float(0.2571)),(float(0.9891),float(-0.02805),float(0.1444),float(0.3879)),(float(-0.5831),float(0.03511),float(0.8116),float(0.1481))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_hip_rotation_changed")
])),
OrientationInterpolator(DEF="R_KNEE_ANIMATOR", key=[float(0.0),float(0.125),float(0.2083),float(0.375),float(0.5),float(0.6667),float(0.9167),float(1.0)], keyValue=[(float(1.0),float(0.0),float(0.0),float(0.8573)),(float(1.0),float(0.0),float(0.0),float(0.5351)),(float(1.0),float(0.0),float(0.0),float(0.1756)),(float(1.0),float(0.0),float(0.0),float(0.1194)),(float(1.0),float(0.0),float(0.0),float(0.3153)),(float(1.0),float(0.0),float(0.0),float(0.09354)),(float(1.0),float(0.0),float(0.0),float(0.08558)),(float(1.0),float(0.0),float(0.0),float(0.8573))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_knee_rotation_changed")
])),
OrientationInterpolator(DEF="R_ANKLE_ANIMATOR", key=[float(0.0),float(0.125),float(0.2083),float(0.375),float(0.4583),float(0.5),float(0.6667),float(0.75),float(0.7917),float(0.9167),float(1.0)], keyValue=[(float(1.0),float(0.0),float(0.0),float(0.8001)),(float(1.0),float(0.0),float(0.0),float(0.8509)),(float(1.0),float(0.0),float(0.0),float(0.8001)),(float(1.0),float(0.0),float(0.0),float(0.8001)),(float(1.0),float(0.0),float(0.0),float(0.8509)),(float(1.0),float(0.0),float(0.0),float(0.8001)),(float(1.0),float(0.0),float(0.0),float(0.8001)),(float(1.0),float(0.0),float(0.0),float(0.8001)),(float(1.0),float(0.0),float(0.0),float(0.8001)),(float(1.0),float(0.0),float(0.0),float(0.8509)),(float(1.0),float(0.0),float(0.0),float(0.86001))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_ankle_rotation_changed")
])),
#no L_MIDTARSAL_ANIMATOR

OrientationInterpolator(DEF="VL5_ANIMATOR", key=[float(0.0),float(0.2083),float(0.375),float(0.75),float(0.8333),float(1.0)], keyValue=[(float(0.0),float(1.0),float(0.0),float(0.0826)),(float(-0.01972),float(-0.5974),float(0.8017),float(0.08231)),(float(0.009296),float(-0.9648),float(0.2627),float(0.1734)),(float(-0.01238),float(0.9549),float(-0.2968),float(0.08732)),(float(-0.008125),float(0.9691),float(-0.2463),float(0.158)),(float(0.0),float(1.0),float(0.0),float(0.0826))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="vl5_rotation_changed")
])),
OrientationInterpolator(DEF="SKULLBASE_ANIMATOR", key=[float(0.0),float(0.28),float(0.3),float(0.32),float(0.4),float(0.45),float(0.6),float(0.65),float(0.7),float(0.75),float(0.85),float(0.9),float(0.95),float(1.0)], keyValue=[(float(-1.0),float(0.0),float(0.0),float(1.0)),(float(-1.0),float(0.0),float(0.0),float(1.0)),(float(-1.0),float(0.0),float(0.0),float(0.999)),(float(-1.0),float(0.0),float(0.0),float(0.99)),(float(-1.0),float(0.0),float(0.0),float(0.99)),(float(-1.0),float(0.0),float(0.0),float(0.9)),(float(-1.0),float(0.0),float(0.0),float(0.9)),(float(-1.0),float(0.0),float(0.0),float(0.9)),(float(-1.0),float(0.0),float(0.0),float(0.9)),(float(-1.0),float(0.0),float(0.0),float(0.9)),(float(-1.0),float(0.0),float(0.0),float(0.9)),(float(-1.0),float(0.0),float(0.0),float(0.9)),(float(-1.0),float(0.0),float(0.0),float(0.9)),(float(-1.0),float(0.0),float(0.0),float(1.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="skullbase_rotation_changed")
])),
OrientationInterpolator(DEF="L_SHOULDER_ANIMATOR", key=[float(0.0),float(0.25),float(0.375),float(0.6667),float(0.7917),float(0.9167),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.1)),(float(0.0),float(0.0),float(1.0),float(0.2)),(float(0.0),float(0.0),float(1.0),float(0.2)),(float(0.86),float(0.25),float(0.42),float(0.5)),(float(0.86),float(0.25),float(0.42),float(0.8)),(float(0.86),float(0.25),float(0.42),float(0.4)),(float(0.86),float(0.25),float(0.42),float(0.2))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_shoulder_rotation_changed")
])),
OrientationInterpolator(DEF="L_ELBOW_ANIMATOR", key=[float(0.0),float(0.28),float(0.32),float(0.64),float(0.76),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(-1.0),float(0.0),float(0.0),float(0.1229)),(float(-1.0),float(0.0),float(0.0),float(0.1229)),(float(-1.0),float(0.0),float(0.0),float(0.5976)),(float(-1.0),float(0.0),float(0.0),float(0.3917)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_elbow_rotation_changed")
])),
OrientationInterpolator(DEF="L_WRIST_ANIMATOR", key=[float(0.0),float(0.32),float(0.64),float(0.88),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(0.067),float(0.98),float(-0.128),float(4.15)),(float(0.067),float(0.98),float(-0.128),float(4.15)),(float(0.067),float(0.98),float(-0.128),float(4.15)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_wrist_rotation_changed")
])),
OrientationInterpolator(DEF="R_SHOULDER_ANIMATOR", key=[float(0.0),float(0.45),float(0.64),float(0.76),float(0.88),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(0.9992),float(0.02042),float(0.03558),float(7.2)),(float(0.9989),float(-0.04623),float(0.005159),float(4.079)),(float(-0.8687),float(-0.2525),float(-0.4261),float(1.501)),(float(-0.941),float(-0.2893),float(-0.1754),float(0.4788)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_shoulder_rotation_changed")
])),
OrientationInterpolator(DEF="R_ELBOW_ANIMATOR", key=[float(0.0),float(0.28),float(0.32),float(0.64),float(0.76),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(-1.0),float(0.0),float(0.0),float(0.04151)),(float(-1.0),float(0.0),float(0.0),float(0.04151)),(float(-1.0),float(0.0),float(0.0),float(0.5855)),(float(-1.0),float(0.0),float(0.0),float(0.5852)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_elbow_rotation_changed")
])),
OrientationInterpolator(DEF="R_WRIST_ANIMATOR", key=[float(0.0),float(0.28),float(0.32),float(0.64),float(0.76),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(-0.0585279),float(0.983903),float(-0.168849),float(1.85956)),(float(-0.0585279),float(0.983903),float(-0.168849),float(1.85956)),(float(-0.00222418),float(0.99801),float(-0.0630095),float(1.46072)),(float(0.0),float(1.0),float(0.0),float(0.497349)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_wrist_rotation_changed")
])),]),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="HUMANOIDROOT_POSITION_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="HUMANOIDROOT_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="SKULLBASE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="VL5_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_HIP_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_KNEE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_ANKLE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_HIP_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_KNEE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_ANKLE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_SHOULDER_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_ELBOW_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_WRIST_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_SHOULDER_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_ELBOW_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_WRIST_ANIMATOR")])),
Viewpoint(description="LOA1_SwimmingFlutterKickAnimation scene", position=((0,0,12))),
Anchor(description="Nancy Diving", parameter=("target=_blank"), url=["NancyDiving.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.x3d","NancyDiving.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/NancyDiving.wrl"], children=[
Shape(
geometry=
Text(string=["LOA1_SwimmingFlutterKickAnimation.x3d","defines a prototype","for animating a humanoid.","","Click text to see example."], 
fontStyle=
FontStyle(justify=["MIDDLE","MIDDLE"], size=0.8)), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,0.2)))))])]))
.XML())
