#x3d.py package 4.0.60 loaded, have fun with X3D Graphics!
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="3.3", 
head=head(), 
Scene=Scene(children=[
WorldInfo(title="LOA1_KneelAnimation.x3d"),
ProtoDeclare(name="LOA1_KneelAnimation", 
ProtoInterface=ProtoInterface(field=[field(name="cycleInterval", accessType="inputOutput", type="SFTime", value=2),
field(name="enabled", accessType="inputOutput", type="SFBool", value=True),
field(name="loop", accessType="inputOutput", type="SFBool", value=False),
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
TimeSensor(DEF="TIMER", 
IS=IS(connect=[connect(nodeField="cycleInterval", protoField="cycleInterval"),
connect(nodeField="enabled", protoField="enabled"),
connect(nodeField="loop", protoField="loop"),
connect(nodeField="startTime", protoField="startTime"),
connect(nodeField="stopTime", protoField="stopTime"),
connect(nodeField="fraction_changed", protoField="fraction_changed"),
connect(nodeField="isActive", protoField="isActive")
])),
PositionInterpolator(DEF="HUMANOIDROOT_POSITION_ANIMATOR", key=[float(0),float(0.3125),float(0.625),float(1)], keyValue=[(0,0,0),(0,-0.049999,0),(0,-0.195,0),(0,-0.439997,0)], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="HumanoidRoot_translation_changed")
])),
OrientationInterpolator(DEF="HUMANOIDROOT_ANIMATOR", key=[float(0),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="HumanoidRoot_rotation_changed")
])),
#no SACROILIAC_ANIMATOR

OrientationInterpolator(DEF="L_HIP_ANIMATOR", key=[float(0),float(0.3125),float(0.625),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(-1),float(0),float(0),float(0.619393)),(float(-1),float(0),float(0),float(1.069302)),(float(-1),float(0),float(0),float(1.937315))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_hip_rotation_changed")
])),
OrientationInterpolator(DEF="L_KNEE_ANIMATOR", key=[float(0),float(0.3125),float(0.625),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.615228)),(float(1),float(0),float(0),float(0.984524)),(float(1),float(0),float(0),float(2.076941))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_knee_rotation_changed")
])),
OrientationInterpolator(DEF="L_ANKLE_ANIMATOR", key=[float(0),float(0.3125),float(0.625),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(-1),float(0),float(0),float(0.017453)),(float(-1),float(0),float(0),float(0.069812)),(float(1),float(0),float(0),float(0.261799))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_ankle_rotation_changed")
])),
#no L_MIDTARSAL_ANIMATOR

OrientationInterpolator(DEF="R_HIP_ANIMATOR", key=[float(0),float(0.3125),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.523598)),(float(-1),float(0),float(0),float(0.157079))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_hip_rotation_changed")
])),
OrientationInterpolator(DEF="R_KNEE_ANIMATOR", key=[float(0),float(0.3125),float(0.625),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.349065)),(float(1),float(0),float(0),float(1.023397)),(float(0.999934),float(0.008043),float(0.008185),float(1.727938))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_knee_rotation_changed")
])),
OrientationInterpolator(DEF="R_ANKLE_ANIMATOR", key=[float(0),float(0.3125),float(0.625),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(-0.991692),float(-0.072372),float(0.106338),float(0.205053)),(float(-0.981083),float(-0.103267),float(0.163741),float(0.272231)),(float(-1),float(0),float(0),float(0.349065))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_ankle_rotation_changed")
])),
#no R_MIDTARSAL_ANIMATOR

OrientationInterpolator(DEF="VL5_ANIMATOR", key=[float(0),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(0.174533))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="vl5_rotation_changed")
])),
#no SKULLBASE_ANIMATOR

OrientationInterpolator(DEF="L_SHOULDER_ANIMATOR", key=[float(0),float(0.3125),float(0.625),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(-1),float(0),float(0),float(0.279252)),(float(-1),float(0),float(0),float(0.506145)),(float(-1),float(0),float(0),float(0.191986))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_shoulder_rotation_changed")
])),
OrientationInterpolator(DEF="L_ELBOW_ANIMATOR", key=[float(0),float(0.3125),float(0.625),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(-1),float(0),float(0),float(0.052359)),(float(-1),float(0),float(0),float(0.296706)),(float(-1),float(0),float(0),float(1.431169))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_elbow_rotation_changed")
])),
#no L_WRIST_ANIMATOR

OrientationInterpolator(DEF="R_SHOULDER_ANIMATOR", key=[float(0),float(0.3125),float(0.625),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(-1),float(0),float(0),float(0.104719)),(float(-1),float(0),float(0),float(0.157079)),(float(1),float(0),float(0),float(0.314159))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_shoulder_rotation_changed")
])),
OrientationInterpolator(DEF="R_ELBOW_ANIMATOR", key=[float(0),float(0.3125),float(0.625),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(-1),float(0),float(0),float(0.837757)),(float(-1),float(0),float(0),float(1.239183)),(float(-1),float(0),float(0),float(1.500983))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_elbow_rotation_changed")
])),
#no R_WRIST_ANIMATOR
]),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="HUMANOIDROOT_POSITION_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="HUMANOIDROOT_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_HIP_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_KNEE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_ANKLE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_HIP_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_KNEE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_ANKLE_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="VL5_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_SHOULDER_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_ELBOW_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_SHOULDER_ANIMATOR"),
ROUTE(fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_ELBOW_ANIMATOR")])),
Anchor(description="InterchangableActorsViaDynamicRouting", parameter=("target=_blank"), url=["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"], children=[
Shape(
geometry=
Text(string=["LOA1_KneelAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."], 
fontStyle=
FontStyle(justify=["MIDDLE","MIDDLE"], size=0.8)), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,0.2)))))])]))
.XML())
