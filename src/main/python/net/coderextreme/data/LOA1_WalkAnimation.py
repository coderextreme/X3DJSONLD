# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="3.3", 
head=head(children=[meta(name="title", content="LOA1_WalkAnimation.x3d"),
meta(name="description", content="Humanoid animation prototype reusable by any Humanoid."),
meta(name="creator", content="Cindy Ballreich cindy@ballreich.net 3Name3D"),
meta(name="rights", content="1997 3Name3D / Yglesias, Wallock, Divekar, Inc., all rights reserved."),
meta(name="translator", content="Don Brutzman"),
meta(name="translated", content="1 October 2001"),
meta(name="modified", content="23 May 2020"),
meta(name="reference", content="http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"),
meta(name="reference", content="http://HAnim.org/Specifications/HAnim2001"),
meta(name="reference", content="http://HAnim.org/Models"),
meta(name="reference", content="http://HAnim.org/Nodes"),
meta(name="subject", content="Nancy Walk Animation HAnim 2001"),
meta(name="identifier", content="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_WalkAnimation.x3d"),
meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
meta(name="license", content="../license.html"),
meta(name="translated", content="24 March 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
WorldInfo(title="LOA1_WalkAnimation.x3d"),
ProtoDeclare(name="LOA1_WalkAnimation", 
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
TimeSensor(DEF="TIMER", 
IS=IS(connect=[connect(nodeField="cycleInterval", protoField="cycleInterval"),
connect(nodeField="enabled", protoField="enabled"),
connect(nodeField="loop", protoField="loop"),
connect(nodeField="startTime", protoField="startTime"),
connect(nodeField="stopTime", protoField="stopTime"),
connect(nodeField="fraction_changed", protoField="fraction_changed"),
connect(nodeField="isActive", protoField="isActive")
])),
PositionInterpolator(DEF="HUMANOIDROOT_POSITION_ANIMATOR", key=[float(0),float(0.04167),float(0.125),float(0.1667),float(0.2083),float(0.25),float(0.2917),float(0.375),float(0.4583),float(0.5),float(0.5417),float(0.5833),float(0.625),float(0.7083),float(0.75),float(0.7917),float(0.875),float(0.9167),float(1)], keyValue=[(0,-0.00928,0),(0,-0.003858,0),(0,-0.008847,0),(0,-0.01486,0),(0,-0.02641,0),(0,-0.03934,0),(0,-0.0502,0),(0,-0.07469,0),(0,-0.02732,0),(0,-0.01608,0),(0,-0.01129,0),(0,-0.005819,0),(0,-0.002004,0),(0,-0.002579,0),(0,-0.0143,0),(0,-0.03799,0),(0,-0.05648,0),(0,-0.045,0),(0,-0.00928,0)], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="HumanoidRoot_translation_changed")
])),
OrientationInterpolator(DEF="HUMANOIDROOT_ANIMATOR", key=[float(0),float(1)], keyValue=[(float(0),float(1),float(0),float(0)),(float(0),float(1),float(0),float(0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="HumanoidRoot_rotation_changed")
])),
OrientationInterpolator(DEF="SACROILIAC_ANIMATOR", key=[float(0),float(0.5),float(1.0)], keyValue=[(float(0.0),float(0.0),float(-1.0),float(0.1056)),(float(0.0),float(0.0),float(1.0),float(0.09018)),(float(0.0),float(0.0),float(-1.0),float(0.1056))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="lower_body_rotation_changed")
])),
OrientationInterpolator(DEF="L_HIP_ANIMATOR", key=[float(0),float(0.25),float(0.375),float(0.5),float(0.6667),float(0.7917),float(0.9167),float(1)], keyValue=[(float(-0.873),float(0.06094),float(0.484),float(0.2865)),(float(0.9963),float(-0.01057),float(0.08481),float(0.2488)),(float(0.9965),float(0.01591),float(-0.08222),float(0.3836)),(float(-0.7018),float(-0.03223),float(-0.7117),float(0.1289)),(float(-1),float(0),float(0),float(0.5518)),(float(-0.9964),float(0.02231),float(0.0817),float(0.5351)),(float(-0.9809),float(0.04912),float(0.1881),float(0.5204)),(float(-0.873),float(0.06094),float(0.484),float(0.2865))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_hip_rotation_changed")
])),
OrientationInterpolator(DEF="L_KNEE_ANIMATOR", key=[float(0),float(0.2083),float(0.375),float(0.5),float(0.6667),float(0.7917),float(0.9167),float(1)], keyValue=[(float(1),float(0),float(0),float(0.3226)),(float(1),float(0),float(0),float(0.1556)),(float(1),float(0),float(0),float(0.08678)),(float(1),float(0),float(0),float(0.8751)),(float(1),float(0),float(0),float(1.131)),(float(1),float(0),float(0),float(0.09961)),(float(1),float(0),float(0),float(0.3942)),(float(1),float(0),float(0),float(0.3226))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_knee_rotation_changed")
])),
OrientationInterpolator(DEF="L_ANKLE_ANIMATOR", key=[float(0),float(0.125),float(0.2083),float(0.375),float(0.6667),float(0.9167),float(1)], keyValue=[(float(-1),float(0),float(0),float(0.06714)),(float(-1),float(0),float(0),float(0.2152)),(float(-1),float(0),float(0),float(0.3184)),(float(-1),float(0),float(0),float(0.4717)),(float(-1),float(0),float(0),float(0.2912)),(float(1),float(0),float(0),float(0.1222)),(float(-1),float(0),float(0),float(0.06714))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_ankle_rotation_changed")
])),
OrientationInterpolator(DEF="L_MIDTARSAL_ANIMATOR", key=[float(0),float(0.5),float(1)], keyValue=[(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(-0.2)),(float(1),float(0),float(0),float(0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_midtarsal_rotation_changed")
])),
OrientationInterpolator(DEF="R_HIP_ANIMATOR", key=[float(0),float(0.125),float(0.2083),float(0.2917),float(0.375),float(0.5),float(0.6667),float(0.7917),float(0.9167),float(1)], keyValue=[(float(-0.5831),float(0.03511),float(0.8116),float(0.1481)),(float(-0.995),float(0.02296),float(0.09674),float(0.4683)),(float(-1),float(0.00192),float(0.007964),float(0.4732)),(float(-0.998),float(-0.0158),float(-0.06102),float(0.5079)),(float(-0.9911),float(-0.03541),float(-0.1286),float(0.5419)),(float(-0.9131),float(-0.06243),float(-0.403),float(0.3361)),(float(-0.4306),float(-0.07962),float(-0.899),float(0.07038)),(float(1),float(0),float(0),float(0.2571)),(float(0.9891),float(-0.02805),float(0.1444),float(0.3879)),(float(-0.5831),float(0.03511),float(0.8116),float(0.1481))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_hip_rotation_changed")
])),
OrientationInterpolator(DEF="R_KNEE_ANIMATOR", key=[float(0),float(0.125),float(0.2083),float(0.2917),float(0.375),float(0.5),float(0.6667),float(0.7917),float(0.9167),float(1)], keyValue=[(float(1),float(0),float(0),float(0.8573)),(float(1),float(0),float(0),float(0.8926)),(float(1),float(0),float(0),float(0.5351)),(float(1),float(0),float(0),float(0.1756)),(float(1),float(0),float(0),float(0.1194)),(float(1),float(0),float(0),float(0.3153)),(float(1),float(-1.176e-08),float(-4.971e-09),float(0.09354)),(float(1),float(0),float(0),float(0.08558)),(float(1),float(0),float(0),float(0.2475)),(float(1),float(0),float(0),float(0.8573))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_knee_rotation_changed")
])),
OrientationInterpolator(DEF="R_ANKLE_ANIMATOR", key=[float(0),float(0.125),float(0.2083),float(0.375),float(0.4583),float(0.5),float(0.6667),float(0.75),float(0.7917),float(0.9167),float(1)], keyValue=[(float(0),float(0),float(1),float(0)),(float(-1),float(0),float(0),float(0.3533)),(float(-1),float(0),float(0),float(0.1072)),(float(1),float(0),float(0),float(0.2612)),(float(1),float(-1.641e-07),float(1.827e-08),float(0.1268)),(float(-1),float(0),float(0),float(0.01793)),(float(-1),float(0),float(0),float(0.05824)),(float(-1),float(0),float(0),float(0.2398)),(float(-1),float(0),float(0),float(0.35)),(float(-1),float(0),float(0),float(0.3322)),(float(0),float(0),float(1),float(0))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_ankle_rotation_changed")
])),
OrientationInterpolator(DEF="R_MIDTARSAL_ANIMATOR", key=[float(0),float(0.5),float(1)], keyValue=[(float(1),float(0),float(0),float(-0.2)),(float(1),float(0),float(0),float(0)),(float(1),float(0),float(0),float(-0.2))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_midtarsal_rotation_changed")
])),
OrientationInterpolator(DEF="VL5_ANIMATOR", key=[float(0),float(0.2083),float(0.375),float(0.75),float(0.8333),float(1)], keyValue=[(float(0),float(1),float(0),float(0.0826)),(float(-0.01972),float(-0.5974),float(0.8017),float(0.08231)),(float(0.009296),float(-0.9648),float(0.2627),float(0.1734)),(float(-0.01238),float(0.9549),float(-0.2968),float(0.08732)),(float(-0.008125),float(0.9691),float(-0.2463),float(0.158)),(float(0),float(1),float(0),float(0.0826))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="vl5_rotation_changed")
])),
OrientationInterpolator(DEF="SKULLBASE_ANIMATOR", key=[float(0.0),float(0.375),float(0.4167),float(0.5),float(0.5833),float(0.6667),float(0.75),float(0.8333),float(0.9167),float(1.0)], keyValue=[(float(0.0),float(-1.0),float(0.0),float(0.08642)),(float(0.0),float(1.0),float(0.0),float(0.1825)),(float(0.0),float(1.0),float(0.0),float(0.1505)),(float(0.0),float(1.0),float(0.0),float(0.1053)),(float(0.0),float(1.0),float(0.0),float(0.04391)),(float(0.0),float(-1.0),float(0.0),float(0.03119)),(float(0.0),float(-1.0),float(0.0),float(0.07936)),(float(0.0),float(-1.0),float(0.0),float(0.1616)),(float(0.0),float(-1.0),float(0.0),float(0.155)),(float(0.0),float(-1.0),float(0.0),float(0.08642))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="skullbase_rotation_changed")
])),
OrientationInterpolator(DEF="L_SHOULDER_ANIMATOR", key=[float(0),float(0.375),float(0.9167),float(1)], keyValue=[(float(1),float(0),float(0),float(0.1189)),(float(-1),float(-5.928e-07),float(1.525e-07),float(0.1861)),(float(1),float(-2.038e-07),float(-1.257e-07),float(0.3357)),(float(1),float(0),float(0),float(0.1189))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_shoulder_rotation_changed")
])),
OrientationInterpolator(DEF="L_ELBOW_ANIMATOR", key=[float(0),float(0.375),float(0.9167),float(1)], keyValue=[(float(-1),float(-1.58298e-07),float(8.15967e-08),float(0.0659878)),(float(-1),float(-3.28826e-08),float(-2.31665e-08),float(0.488383)),(float(-1),float(3.06462e-06),float(-3.11947e-06),float(0.0177536)),(float(-1),float(-1.58298e-07),float(8.15967e-08),float(0.0659878))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_elbow_rotation_changed")
])),
OrientationInterpolator(DEF="L_WRIST_ANIMATOR", key=[float(0),float(0.375),float(0.9167),float(1)], keyValue=[(float(1.51276e-06),float(-1),float(1.7724e-06),float(0.461076)),(float(-0.330195),float(-0.927451),float(0.175516),float(0.538852)),(float(0.0327774),float(-0.999314),float(-0.0172185),float(0.492033)),(float(1.51276e-06),float(-1),float(1.7724e-06),float(0.461076))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="l_wrist_rotation_changed")
])),
OrientationInterpolator(DEF="R_SHOULDER_ANIMATOR", key=[float(0),float(0.375),float(0.9167),float(1)], keyValue=[(float(-1),float(-7.689e-07),float(-1.48e-07),float(0.09346)),(float(1),float(5.004e-08),float(2.254e-08),float(0.3197)),(float(-1),float(-1.104e-07),float(5.267e-10),float(0.1564)),(float(-1),float(-7.689e-07),float(-1.48e-07),float(0.09346))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_shoulder_rotation_changed")
])),
OrientationInterpolator(DEF="R_ELBOW_ANIMATOR", key=[float(0),float(0.375),float(0.9167),float(1)], keyValue=[(float(-1),float(-4.45619e-08),float(2.70318e-08),float(0.411508)),(float(-1),float(8.16742e-07),float(-1.09556e-07),float(0.0925011)),(float(-1),float(-2.47628e-08),float(-7.02862e-09),float(0.572568)),(float(-1),float(-4.45619e-08),float(2.70318e-08),float(0.411508))], 
IS=IS(connect=[connect(nodeField="value_changed", protoField="r_elbow_rotation_changed")
])),
OrientationInterpolator(DEF="R_WRIST_ANIMATOR", key=[float(0),float(0.375),float(0.9167),float(1)], keyValue=[(float(-0.8129),float(0.4759),float(-0.3357),float(0.1346)),(float(0.1533),float(-0.9878),float(0.02582),float(0.3902)),(float(-0.5701),float(0.7604),float(-0.311),float(0.366)),(float(-0.8129),float(0.4759),float(-0.3357),float(0.1346))], 
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
Text(string=["LOA1_WalkAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."], 
fontStyle=
FontStyle(justify=["MIDDLE","MIDDLE"], size=0.8)), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,0.2)))))]),]))
.XML())
