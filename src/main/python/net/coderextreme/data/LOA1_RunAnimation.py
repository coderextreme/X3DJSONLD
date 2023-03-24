# x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(children=[meta(name="title", content="LOA1_RunAnimation.x3d"),
meta(name="description", content="Humanoid animation prototype reusable by any Humanoid."),
meta(name="creator", content="Cindy Ballreich cindy@ballreich.net 3Name3D"),
meta(name="rights", content="1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."),
meta(name="translator", content="Ozan APAYDIN"),
meta(name="translated", content="30 October 2001"),
meta(name="modified", content="23 May 2020"),
meta(name="reference", content="http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"),
meta(name="reference", content="http://www.HAnim.org"),
meta(name="reference", content="http://HAnim.org/Models"),
meta(name="reference", content="http://HAnim.org/Nodes"),
meta(name="subject", content="Nancy Run Animation HAnim 2001"),
meta(name="identifier", content="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_RunAnimation.x3d"),
meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
meta(name="license", content="../license.html"),
meta(name="translated", content="24 March 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
WorldInfo(title="LOA1_RunAnimation.x3d"),
ProtoDeclare(name="LOA1_RunAnimation", 
ProtoInterface=ProtoInterface(field=[field(name="cycleInterval", accessType="inputOutput", type="SFTime", value=1),
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
TimeSensor(DEF="TIMER", 
IS=IS(connect=[connect(nodeField="cycleInterval", protoField="cycleInterval"),
connect(nodeField="enabled", protoField="enabled"),
connect(nodeField="loop", protoField="loop"),
connect(nodeField="startTime", protoField="startTime"),
connect(nodeField="stopTime", protoField="stopTime"),
connect(nodeField="fraction_changed", protoField="fraction_changed"),
connect(nodeField="isActive", protoField="isActive")
])),
PositionInterpolator(DEF="HUMANOIDROOT_POSITION_ANIMATOR", key=[float(0.0),float(0.2182),float(0.2909),float(0.3091),float(0.7091),float(0.8),float(0.8182),float(1.0)], keyValue=[(0.0,-0.0351,0.0),(0.0,-0.0351,0.0),(0.0,-0.04087,0.0),(0.0,-0.04886,0.0),(0.0,-0.04051,0.0),(0.0,-0.03666,0.0),(0.0,-0.03666,0.0),(0.0,-0.0351,0.0)], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="HumanoidRoot_translation_changed")
])),
OrientationInterpolator(DEF="HUMANOIDROOT_ANIMATOR", key=[float(0),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="HumanoidRoot_rotation_changed")
])),
OrientationInterpolator(DEF="SACROILIAC_ANIMATOR", key=[float(0),float(1)], keyValue=[(float(0.9969),float(-0.05444),float(0.05596),float(0.07687)),(float(0.9969),float(-0.05444),float(0.05596),float(0.07687))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="lower_body_rotation_changed")
])),
OrientationInterpolator(DEF="L_HIP_ANIMATOR", key=[float(0.0),float(0.2182),float(0.4909),float(0.7455),float(1.0)], keyValue=[(float(-0.9986),float(0.03354),float(0.04001),float(1.212)),(float(-0.9889),float(0.1328),float(0.06696),float(0.4025)),(float(0.9894),float(0.1453),float(0.009351),float(0.4114)),(float(-0.9963),float(0.07032),float(0.05003),float(0.7035)),(float(-0.9986),float(0.03354),float(0.04001),float(1.212))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_hip_rotation_changed")
])),
OrientationInterpolator(DEF="L_KNEE_ANIMATOR", key=[float(0.0),float(0.2182),float(0.4909),float(0.7455),float(1.0)], keyValue=[(float(1.0),float(0.0),float(0.0),float(1.108)),(float(1.0),float(0.0),float(0.0),float(0.4265)),(float(1.0),float(0.0),float(0.0),float(0.7052)),(float(1.0),float(0.0),float(0.0),float(2.179)),(float(1.0),float(0.0),float(0.0),float(1.108))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_knee_rotation_changed")
])),
OrientationInterpolator(DEF="L_ANKLE_ANIMATOR", key=[float(0.0),float(0.2182),float(0.3091),float(0.4909),float(1.0)], keyValue=[(float(1.0),float(0.0),float(0.0),float(0.03543)),(float(-1.0),float(0.0),float(0.0),float(0.1037)),(float(-1.0),float(0.0),float(0.0),float(0.4328)),(float(1.0),float(0.0),float(0.0),float(0.1929)),(float(1.0),float(0.0),float(0.0),float(0.03543))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_ankle_rotation_changed")
])),
OrientationInterpolator(DEF="L_MIDTARSAL_ANIMATOR", key=[float(0),float(0.5),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(-0.2)),(float(1),float(0),float(0),float(0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_midtarsal_rotation_changed")
])),
OrientationInterpolator(DEF="R_HIP_ANIMATOR", key=[float(0.0),float(0.2182),float(0.4909),float(0.7455),float(1.0)], keyValue=[(float(0.9999),float(0.00293),float(-0.00989),float(0.402)),(float(-1.0),float(0.004977),float(-0.00497),float(0.5943)),(float(-1.0),float(0.003265),float(-0.001752),float(1.178)),(float(-0.9999),float(0.00815),float(-0.01093),float(0.3031)),(float(0.9999),float(0.00293),float(-0.00989),float(0.402))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_hip_rotation_changed")
])),
OrientationInterpolator(DEF="R_KNEE_ANIMATOR", key=[float(0.0),float(0.03636),float(0.2182),float(0.4909),float(0.7455),float(1.0)], keyValue=[(float(1.0),float(0.0),float(0.0),float(0.7004)),(float(1.0),float(0.0),float(0.0),float(1.011)),(float(1.0),float(0.0),float(0.0),float(1.892)),(float(1.0),float(0.0),float(0.0),float(1.188)),(float(1.0),float(0.0),float(0.0),float(0.3964)),(float(1.0),float(0.0),float(0.0),float(0.7004))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_knee_rotation_changed")
])),
OrientationInterpolator(DEF="R_ANKLE_ANIMATOR", key=[float(0.0),float(0.4909),float(0.7091),float(0.8),float(0.8182),float(1.0)], keyValue=[(float(1.0),float(0.0),float(0.0),float(0.2323)),(float(-1.0),float(0.0),float(0.0),float(0.07843)),(float(-1.0),float(0.0),float(0.0),float(0.09676)),(float(-1.0),float(0.0),float(0.0),float(0.3274)),(float(-1.0),float(0.0),float(0.0),float(0.3278)),(float(1.0),float(0.0),float(0.0),float(0.2323))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_ankle_rotation_changed")
])),
OrientationInterpolator(DEF="R_MIDTARSAL_ANIMATOR", key=[float(0),float(0.5),float(1)], keyValue=[(float(1),float(0),float(0),float(-0.2)),(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(-0.2))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_midtarsal_rotation_changed")
])),
OrientationInterpolator(DEF="VL5_ANIMATOR", key=[float(0.0),float(0.2545),float(0.4909),float(0.7636),float(1.0)], keyValue=[(float(0.7651),float(0.6382),float(0.08586),float(0.2712)),(float(0.9999),float(0.002845),float(-0.01547),float(0.3756)),(float(0.7459),float(-0.6505),float(-0.1432),float(0.2416)),(float(0.9984),float(0.05536),float(-0.01154),float(0.3488)),(float(0.7651),float(0.6382),float(0.08586),float(0.2712))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="vl5_rotation_changed")
])),
OrientationInterpolator(DEF="SKULLBASE_ANIMATOR", key=[float(0.0),float(0.4909),float(1.0)], keyValue=[(float(0.6517),float(-0.7559),float(0.06211),float(0.2508)),(float(0.6467),float(0.7527),float(-0.1238),float(0.2344)),(float(0.6517),float(-0.7559),float(0.06211),float(0.2508))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="skullbase_rotation_changed")
])),
OrientationInterpolator(DEF="L_SHOULDER_ANIMATOR", key=[float(0.0),float(0.2182),float(0.4909),float(0.7455),float(1.0)], keyValue=[(float(0.9907),float(-0.07264),float(0.115),float(1.135)),(float(0.9291),float(-0.1222),float(0.349),float(0.1695)),(float(-0.9892),float(0.1364),float(-0.05394),float(0.5112)),(float(0.9942),float(-0.0002052),float(0.1073),float(0.4975)),(float(0.9907),float(-0.07264),float(0.115),float(1.135))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_shoulder_rotation_changed")
])),
OrientationInterpolator(DEF="L_ELBOW_ANIMATOR", key=[float(0.0),float(0.2182),float(0.4909),float(0.7455),float(1.0)], keyValue=[(float(0.9985),float(0.03887),float(0.03802),float(4.689)),(float(-0.965),float(-0.1889),float(-0.1821),float(1.415)),(float(0.9758),float(0.1563),float(0.1529),float(4.666)),(float(-0.9956),float(-0.0936),float(0.009826),float(1.126)),(float(0.9985),float(0.03887),float(0.03802),float(4.689))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_elbow_rotation_changed")
])),
OrientationInterpolator(DEF="L_WRIST_ANIMATOR", key=[float(0.0),float(1.0)], keyValue=[(float(-0.0240995),float(-0.999682),float(0.00741506),float(0.120409)),(float(-0.0240995),float(-0.999682),float(0.00741506),float(0.120409))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_wrist_rotation_changed")
])),
OrientationInterpolator(DEF="R_SHOULDER_ANIMATOR", key=[float(0.0),float(0.2182),float(0.4909),float(0.7455),float(1.0)], keyValue=[(float(-1.0),float(0.0),float(0.0),float(0.6979)),(float(0.9094),float(0.2062),float(-0.3613),float(0.4157)),(float(0.9637),float(0.1537),float(-0.2185),float(1.353)),(float(0.4864),float(0.08841),float(-0.8693),float(0.1716)),(float(-1.0),float(0.0),float(0.0),float(0.6979))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_shoulder_rotation_changed")
])),
OrientationInterpolator(DEF="R_ELBOW_ANIMATOR", key=[float(0.0),float(0.2182),float(0.4909),float(0.7455),float(1.0)], keyValue=[(float(0.9353),float(-0.2978),float(-0.191),float(4.222)),(float(-0.9362),float(0.2924),float(-0.1952),float(1.05)),(float(0.9941),float(-0.09719),float(-0.04725),float(4.512)),(float(-0.9594),float(0.2653),float(0.09579),float(1.525)),(float(0.9353),float(-0.2978),float(-0.191),float(4.222))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_elbow_rotation_changed")
])),
OrientationInterpolator(DEF="R_WRIST_ANIMATOR", key=[float(0.0),float(1.0)], keyValue=[(float(-0.917742),float(-0.237244),float(-0.318536),float(0.214273)),(float(-0.917742),float(-0.237244),float(-0.318536),float(0.214273))], 
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
Comment(value=''' ====================================== '''),

Comment(value=''' Point to example use in case someone inspects this file '''),

Anchor(description="InterchangableActorsViaDynamicRouting", parameter=("target=_blank"), url=["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"], children=[
Shape(
geometry=
Text(string=["LOA1_RunAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."], 
fontStyle=
FontStyle(justify=["MIDDLE","MIDDLE"], size=0.8)), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,0.2)))))]),]))
.XML())
