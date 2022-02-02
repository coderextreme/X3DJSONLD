#x3d.py package loaded, have fun with X3D Graphics!
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="LOA1_JumpAnimation.x3d"),
ProtoDeclare(name="LOA1_JumpAnimation", 
ProtoInterface=ProtoInterface(field=[field(name="cycleInterval", accessType="inputOutput", type="SFTime", value=2),
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
PositionInterpolator(DEF="HUMANOIDROOT_POSITION_ANIMATOR", key=[float(0.0),float(0.04),float(0.08),float(0.12),float(0.16),float(0.2),float(0.24),float(0.28),float(0.32),float(0.36),float(0.4),float(0.44),float(0.48),float(0.64),float(0.76),float(0.8),float(0.84),float(0.88),float(0.92),float(0.96),float(1.0)], keyValue=[(0.0,0.0,0.0),(0.0,-0.01264,-0.01289),(0.0,-0.04712,-0.03738),(-0.0003345,-0.1049,-0.05353),(-0.0005712,-0.1892,-0.06561),(-0.0008233,-0.286,-0.06276),(-0.0009591,-0.3795,-0.05148),(-0.00106,-0.4484,-0.03656),(-0.00106,-0.4484,-0.03656),(-0.001122,-0.3269,-0.1499),(-0.0008616,-0.13,-0.06358),(-0.0005128,-0.03123,-0.05488),(0.0004779,0.053,0.02732),(0.0001728,0.4148,0.006873),(0.0,0.03045,0.02148),(0.0,-0.01299,-0.01057),(0.0,-0.06932,-0.01064),(0.0001365,-0.1037,-0.005059),(0.0001279,-0.07198,-0.007596),(0.000141,-0.01626,-0.004935),(0.0,0.0,0.0)], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="HumanoidRoot_translation_changed")
])),
OrientationInterpolator(DEF="HUMANOIDROOT_ANIMATOR", key=[float(0.0),float(0.28),float(0.32),float(0.48),float(0.64),float(0.76),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(1.0),float(0.0),float(0.0),float(0.3273)),(float(1.0),float(0.0),float(0.0),float(0.3273)),(float(0.0),float(0.0),float(1.0),float(0.0)),(float(0.0),float(0.0),float(1.0),float(0.0)),(float(0.0),float(0.0),float(1.0),float(0.0)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="HumanoidRoot_rotation_changed")
])),
OrientationInterpolator(DEF="SACROILIAC_ANIMATOR", key=[float(0.0),float(0.28),float(0.32),float(0.48),float(0.76),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(1.0),float(0.0),float(0.0),float(0.1892)),(float(1.0),float(0.0),float(0.0),float(0.1892)),(float(0.0),float(0.0),float(1.0),float(0.0)),(float(0.0),float(0.0),float(1.0),float(0.0)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="lower_body_rotation_changed")
])),
OrientationInterpolator(DEF="L_HIP_ANIMATOR", key=[float(0.0),float(0.28),float(0.32),float(0.36),float(0.4),float(0.44),float(0.48),float(0.64),float(0.76),float(0.88),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(1.0),float(0.0),float(0.0),float(4.349)),(float(1.0),float(0.0),float(0.0),float(4.349)),(float(1.0),float(0.0),float(0.0),float(4.615)),(float(-1.0),float(0.0),float(0.0),float(0.9136)),(float(-1.0),float(0.0),float(0.0),float(0.3614)),(float(0.0),float(0.0),float(1.0),float(0.0)),(float(-1.0),float(0.0),float(0.0),float(0.7869)),(float(-1.0),float(0.0),float(0.0),float(0.3918)),(float(-1.0),float(0.0),float(0.0),float(0.5433)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_hip_rotation_changed")
])),
OrientationInterpolator(DEF="L_KNEE_ANIMATOR", key=[float(0.0),float(0.28),float(0.32),float(0.48),float(0.64),float(0.76),float(0.88),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(1.0),float(0.0),float(0.0),float(2.047)),(float(1.0),float(0.0),float(0.0),float(2.047)),(float(0.0),float(0.0),float(1.0),float(0.0)),(float(1.0),float(0.0),float(0.0),float(1.566)),(float(1.0),float(0.0),float(0.0),float(0.5913)),(float(1.0),float(0.0),float(0.0),float(0.9235)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_knee_rotation_changed")
])),
OrientationInterpolator(DEF="L_ANKLE_ANIMATOR", key=[float(0.0),float(0.28),float(0.32),float(0.36),float(0.4),float(0.44),float(0.48),float(0.64),float(0.76),float(0.84),float(0.88),float(0.92),float(0.96),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(-1.0),float(0.0),float(0.0),float(0.625)),(float(-1.0),float(0.0),float(0.0),float(0.625)),(float(-1.0),float(0.0),float(0.0),float(0.3364)),(float(-1.0),float(0.0),float(0.0),float(0.2742)),(float(-1.0),float(0.0),float(0.0),float(0.05078)),(float(1.0),float(0.0),float(0.0),float(0.2833)),(float(1.0),float(0.0),float(0.0),float(0.6667)),(float(1.0),float(0.0),float(0.0),float(0.2833)),(float(-1.0),float(0.0),float(0.0),float(0.2108)),(float(-1.0),float(0.0),float(0.0),float(0.375)),(float(-1.0),float(0.0),float(0.0),float(0.3146)),(float(-1.0),float(0.0),float(0.0),float(0.1174)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_ankle_rotation_changed")
])),
OrientationInterpolator(DEF="L_MIDTARSAL_ANIMATOR", key=[float(0),float(0.5),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(-0.2)),(float(1),float(0),float(0),float(0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_midtarsal_rotation_changed")
])),
OrientationInterpolator(DEF="R_HIP_ANIMATOR", key=[float(0.0),float(0.28),float(0.32),float(0.36),float(0.4),float(0.44),float(0.48),float(0.64),float(0.76),float(0.88),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(1.0),float(0.0),float(0.0),float(4.433)),(float(1.0),float(0.0),float(0.0),float(4.433)),(float(1.0),float(0.0),float(0.0),float(4.647)),(float(-1.0),float(0.0),float(0.0),float(0.8943)),(float(-1.0),float(0.0),float(0.0),float(0.3698)),(float(0.0),float(0.0),float(1.0),float(0.0)),(float(-1.0),float(0.0),float(0.0),float(0.4963)),(float(-1.0),float(0.0),float(0.0),float(0.3829)),(float(-1.0),float(0.0),float(0.0),float(0.5169)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_hip_rotation_changed")
])),
OrientationInterpolator(DEF="R_KNEE_ANIMATOR", key=[float(0.0),float(0.28),float(0.32),float(0.48),float(0.64),float(0.76),float(0.88),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(1.0),float(0.0),float(0.0),float(2.005)),(float(1.0),float(0.0),float(0.0),float(2.005)),(float(0.0),float(0.0),float(1.0),float(0.0)),(float(1.0),float(0.0),float(0.0),float(0.9507)),(float(1.0),float(0.0),float(0.0),float(0.5845)),(float(1.0),float(0.0),float(0.0),float(0.9054)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_knee_rotation_changed")
])),
OrientationInterpolator(DEF="R_ANKLE_ANIMATOR", key=[float(0.0),float(0.28),float(0.32),float(0.36),float(0.4),float(0.44),float(0.48),float(0.64),float(0.76),float(0.84),float(0.88),float(0.92),float(0.96),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(-1.0),float(0.0),float(0.0),float(0.6735)),(float(-1.0),float(0.0),float(0.0),float(0.6735)),(float(-1.0),float(0.0),float(0.0),float(0.3527)),(float(-1.0),float(0.0),float(0.0),float(0.3038)),(float(-1.0),float(0.0),float(0.0),float(0.07964)),(float(1.0),float(0.0),float(0.0),float(0.3001)),(float(1.0),float(0.0),float(0.0),float(0.6509)),(float(1.0),float(0.0),float(0.0),float(0.3001)),(float(-1.0),float(0.0),float(0.0),float(0.2087)),(float(-1.0),float(0.0),float(0.0),float(0.3756)),(float(-1.0),float(0.0),float(0.0),float(0.3279)),(float(-1.0),float(0.0),float(0.0),float(0.1193)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_ankle_rotation_changed")
])),
OrientationInterpolator(DEF="R_MIDTARSAL_ANIMATOR", key=[float(0),float(0.5),float(1)], keyValue=[(float(1),float(0),float(0),float(-0.2)),(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(-0.2))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_midtarsal_rotation_changed")
])),
OrientationInterpolator(DEF="VL5_ANIMATOR", key=[float(0),float(0.2083),float(0.375),float(0.75),float(0.8333),float(1)], keyValue=[(float(0),float(1),float(0),float(0.0826)),(float(-0.01972),float(-0.5974),float(0.8017),float(0.08231)),(float(0.009296),float(-0.9648),float(0.2627),float(0.1734)),(float(-0.01238),float(0.9549),float(-0.2968),float(0.08732)),(float(-0.008125),float(0.9691),float(-0.2463),float(0.158)),(float(0),float(1),float(0),float(0.0826))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="vl5_rotation_changed")
])),
OrientationInterpolator(DEF="SKULLBASE_ANIMATOR", key=[float(0.0),float(0.28),float(0.32),float(0.48),float(0.76),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(-1.0),float(0.0),float(0.0),float(0.5989)),(float(-1.0),float(0.0),float(0.0),float(0.5989)),(float(-1.0),float(0.0),float(0.0),float(0.3216)),(float(1.0),float(0.0),float(0.0),float(0.06503)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="skullbase_rotation_changed")
])),
OrientationInterpolator(DEF="L_SHOULDER_ANIMATOR", key=[float(0.0),float(0.28),float(0.32),float(0.64),float(0.76),float(0.88),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(-0.9987),float(0.02554),float(0.04498),float(1.57)),(float(-0.9987),float(0.02554),float(0.04498),float(1.57)),(float(1.0),float(0.0004113),float(0.003055),float(4.114)),(float(-0.8413),float(0.3238),float(0.4329),float(1.453)),(float(-0.877),float(0.4198),float(0.2337),float(0.6009)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_shoulder_rotation_changed")
])),
OrientationInterpolator(DEF="L_ELBOW_ANIMATOR", key=[float(0.0),float(0.28),float(0.32),float(0.64),float(0.76),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(-1.0),float(0.0),float(0.0),float(0.1229)),(float(-1.0),float(0.0),float(0.0),float(0.1229)),(float(-1.0),float(0.0),float(0.0),float(0.5976)),(float(-1.0),float(0.0),float(0.0),float(0.3917)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_elbow_rotation_changed")
])),
OrientationInterpolator(DEF="L_WRIST_ANIMATOR", key=[float(0.0),float(0.28),float(0.32),float(0.64),float(0.76),float(0.88),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(0.0672928),float(0.989475),float(-0.128107),float(4.15574)),(float(0.0672928),float(0.989475),float(-0.128107),float(4.15574)),(float(0.00364942),float(0.999901),float(0.0135896),float(4.5822)),(float(0.0),float(-1.0),float(0.0),float(0.655922)),(float(-0.00050618),float(-0.999999),float(0.0012782),float(1.28397)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_wrist_rotation_changed")
])),
OrientationInterpolator(DEF="R_SHOULDER_ANIMATOR", key=[float(0.0),float(0.28),float(0.32),float(0.64),float(0.76),float(0.88),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(0.9992),float(0.02042),float(0.03558),float(4.688)),(float(0.9992),float(0.02042),float(0.03558),float(4.688)),(float(0.9989),float(-0.04623),float(0.005159),float(4.079)),(float(-0.8687),float(-0.2525),float(-0.4261),float(1.501)),(float(-0.941),float(-0.2893),float(-0.1754),float(0.4788)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_shoulder_rotation_changed")
])),
OrientationInterpolator(DEF="R_ELBOW_ANIMATOR", key=[float(0.0),float(0.28),float(0.32),float(0.64),float(0.76),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(-1.0),float(0.0),float(0.0),float(0.04151)),(float(-1.0),float(0.0),float(0.0),float(0.04151)),(float(-1.0),float(0.0),float(0.0),float(0.5855)),(float(-1.0),float(0.0),float(0.0),float(0.5852)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_elbow_rotation_changed")
])),
OrientationInterpolator(DEF="R_WRIST_ANIMATOR", key=[float(0.0),float(0.28),float(0.32),float(0.64),float(0.76),float(1.0)], keyValue=[(float(0.0),float(0.0),float(1.0),float(0.0)),(float(-0.0585279),float(0.983903),float(-0.168849),float(1.85956)),(float(-0.0585279),float(0.983903),float(-0.168849),float(1.85956)),(float(-0.00222418),float(0.99801),float(-0.0630095),float(1.46072)),(float(0.0),float(1.0),float(0.0),float(0.497349)),(float(0.0),float(0.0),float(1.0),float(0.0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_wrist_rotation_changed")
]))]),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="HUMANOIDROOT_POSITION_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="HUMANOIDROOT_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="SACROILIAC_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_HIP_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_KNEE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_ANKLE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_MIDTARSAL_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_HIP_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_KNEE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_ANKLE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_MIDTARSAL_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="VL5_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="SKULLBASE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_SHOULDER_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_ELBOW_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_WRIST_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_SHOULDER_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_ELBOW_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_WRIST_ANIMATOR")])),
Anchor(description="see InterchangableActorsViaDynamicRouting scene", parameter=("target=_blank"), url=["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"], children=[
Shape(
geometry=
Text(string=["LOA1_JumpAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."], 
fontStyle=
FontStyle(justify=["MIDDLE","MIDDLE"], size=0.8)), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,0.2)))))])]))
.XML())
