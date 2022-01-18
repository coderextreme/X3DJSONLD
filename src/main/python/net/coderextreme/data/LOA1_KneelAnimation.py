from x3d import *
print(
X3D(
  profile="Immersive", version="3.3", head=head(  children=[
      
          meta(name="title", content="LOA1_KneelAnimation.x3d"),
          meta(name="description", content="Humanoid animation prototype reusable by any Humanoid."),
          meta(name="creator", content="Tom Miller"),
          meta(name="translator", content="Curt Blais"),
          meta(name="translated", content="1 December 2001"),
          meta(name="modified", content="23 May 2020"),
          meta(name="reference", content="http://www.ballreich.net/vrml/HAnim/nancy_HAnim.wrl"),
          meta(name="reference", content="http://www.HAnim.org/Models/HAnim2001/boxman/protos/LOA1_WalkAnimation.wrl"),
          meta(name="reference", content="http://www.HAnim.org"),
          meta(name="reference", content="http://HAnim.org/Models"),
          meta(name="reference", content="http://HAnim.org/Nodes"),
          meta(name="subject", content="Nancy kneel Animation HAnim 2001"),
          meta(name="identifier", content="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/LOA1_KneelAnimation.x3d"),
          meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
          meta(name="license", content="../license.html"),
          meta(name="translated", content="18 January 2022"),
          meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
          meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")]), Scene=Scene(
    children=[
        WorldInfo(
          title="LOA1_KneelAnimation.x3d"),
        ProtoDeclare(
          name="LOA1_KneelAnimation", ProtoInterface=ProtoInterface(
            field=[
                field(name="cycleInterval", accessType="inputOutput", type="SFTime", value=2),
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
                field(name="r_wrist_rotation_changed", accessType="outputOnly", type="SFRotation")]), ProtoBody=ProtoBody(
            children=[
                Group(
                  children=[
                      TimeSensor(
                        DEF="TIMER", IS=IS(
                          connect=[
                              connect(nodeField="cycleInterval", protoField="cycleInterval"),
                              connect(nodeField="enabled", protoField="enabled"),
                              connect(nodeField="loop", protoField="loop"),
                              connect(nodeField="startTime", protoField="startTime"),
                              connect(nodeField="stopTime", protoField="stopTime"),
                              connect(nodeField="fraction_changed", protoField="fraction_changed"),
                              connect(nodeField="isActive", protoField="isActive")])),
                      PositionInterpolator(
                        DEF="HUMANOIDROOT_POSITION_ANIMATOR", key=[0,0.3125,0.625,1], keyValue=[0,0,0,0,-0.049999,0,0,-0.195,0,0,-0.439997,0], IS=IS(
                          connect=[
                              connect(nodeField="value_changed", protoField="HumanoidRoot_translation_changed")])),
                      OrientationInterpolator(
                        DEF="HUMANOIDROOT_ANIMATOR", key=[0,1], keyValue=[0,1,0,0,0,1,0,0], IS=IS(
                          connect=[
                              connect(nodeField="value_changed", protoField="HumanoidRoot_rotation_changed")])),#no SACROILIAC_ANIMATOR

                      OrientationInterpolator(
                        DEF="L_HIP_ANIMATOR", key=[0,0.3125,0.625,1], keyValue=[1,0,0,0,-1,0,0,0.619393,-1,0,0,1.069302,-1,0,0,1.937315], IS=IS(
                          connect=[
                              connect(nodeField="value_changed", protoField="l_hip_rotation_changed")])),
                      OrientationInterpolator(
                        DEF="L_KNEE_ANIMATOR", key=[0,0.3125,0.625,1], keyValue=[1,0,0,0,1,0,0,0.615228,1,0,0,0.984524,1,0,0,2.076941], IS=IS(
                          connect=[
                              connect(nodeField="value_changed", protoField="l_knee_rotation_changed")])),
                      OrientationInterpolator(
                        DEF="L_ANKLE_ANIMATOR", key=[0,0.3125,0.625,1], keyValue=[1,0,0,0,-1,0,0,0.017453,-1,0,0,0.069812,1,0,0,0.261799], IS=IS(
                          connect=[
                              connect(nodeField="value_changed", protoField="l_ankle_rotation_changed")])),#no L_MIDTARSAL_ANIMATOR

                      OrientationInterpolator(
                        DEF="R_HIP_ANIMATOR", key=[0,0.3125,1], keyValue=[1,0,0,0,1,0,0,0.523598,-1,0,0,0.157079], IS=IS(
                          connect=[
                              connect(nodeField="value_changed", protoField="r_hip_rotation_changed")])),
                      OrientationInterpolator(
                        DEF="R_KNEE_ANIMATOR", key=[0,0.3125,0.625,1], keyValue=[1,0,0,0,1,0,0,0.349065,1,0,0,1.023397,0.999934,0.008043,0.008185,1.727938], IS=IS(
                          connect=[
                              connect(nodeField="value_changed", protoField="r_knee_rotation_changed")])),
                      OrientationInterpolator(
                        DEF="R_ANKLE_ANIMATOR", key=[0,0.3125,0.625,1], keyValue=[1,0,0,0,-0.991692,-0.072372,0.106338,0.205053,-0.981083,-0.103267,0.163741,0.272231,-1,0,0,0.349065], IS=IS(
                          connect=[
                              connect(nodeField="value_changed", protoField="r_ankle_rotation_changed")])),#no R_MIDTARSAL_ANIMATOR

                      OrientationInterpolator(
                        DEF="VL5_ANIMATOR", key=[0,1], keyValue=[1,0,0,0,1,0,0,0.174533], IS=IS(
                          connect=[
                              connect(nodeField="value_changed", protoField="vl5_rotation_changed")])),#no SKULLBASE_ANIMATOR

                      OrientationInterpolator(
                        DEF="L_SHOULDER_ANIMATOR", key=[0,0.3125,0.625,1], keyValue=[1,0,0,0,-1,0,0,0.279252,-1,0,0,0.506145,-1,0,0,0.191986], IS=IS(
                          connect=[
                              connect(nodeField="value_changed", protoField="l_shoulder_rotation_changed")])),
                      OrientationInterpolator(
                        DEF="L_ELBOW_ANIMATOR", key=[0,0.3125,0.625,1], keyValue=[1,0,0,0,-1,0,0,0.052359,-1,0,0,0.296706,-1,0,0,1.431169], IS=IS(
                          connect=[
                              connect(nodeField="value_changed", protoField="l_elbow_rotation_changed")])),#no L_WRIST_ANIMATOR

                      OrientationInterpolator(
                        DEF="R_SHOULDER_ANIMATOR", key=[0,0.3125,0.625,1], keyValue=[1,0,0,0,-1,0,0,0.104719,-1,0,0,0.157079,1,0,0,0.314159], IS=IS(
                          connect=[
                              connect(nodeField="value_changed", protoField="r_shoulder_rotation_changed")])),
                      OrientationInterpolator(
                        DEF="R_ELBOW_ANIMATOR", key=[0,0.3125,0.625,1], keyValue=[1,0,0,0,-1,0,0,0.837757,-1,0,0,1.239183,-1,0,0,1.500983], IS=IS(
                          connect=[
                              connect(nodeField="value_changed", protoField="r_elbow_rotation_changed")])),#no R_WRIST_ANIMATOR
]),
                ROUTE(
                  fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="HUMANOIDROOT_POSITION_ANIMATOR"),
                ROUTE(
                  fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="HUMANOIDROOT_ANIMATOR"),
                ROUTE(
                  fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_HIP_ANIMATOR"),
                ROUTE(
                  fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_KNEE_ANIMATOR"),
                ROUTE(
                  fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_ANKLE_ANIMATOR"),
                ROUTE(
                  fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_HIP_ANIMATOR"),
                ROUTE(
                  fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_KNEE_ANIMATOR"),
                ROUTE(
                  fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_ANKLE_ANIMATOR"),
                ROUTE(
                  fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="VL5_ANIMATOR"),
                ROUTE(
                  fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_SHOULDER_ANIMATOR"),
                ROUTE(
                  fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="L_ELBOW_ANIMATOR"),
                ROUTE(
                  fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_SHOULDER_ANIMATOR"),
                ROUTE(
                  fromField="fraction_changed", fromNode="TIMER", toField="set_fraction", toNode="R_ELBOW_ANIMATOR")])),
        Anchor(
          description="InterchangableActorsViaDynamicRouting", parameter=("target=_blank"), url=["InterchangableActorsViaDynamicRouting.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.x3d","InterchangableActorsViaDynamicRouting.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/InterchangableActorsViaDynamicRouting.wrl"], children=[
              Shape(
                geometry=Text(
                    string=["LOA1_KneelAnimation.x3d","defines a prototype","for animating a humanoid.","","Click this text to see","InterchangableActorsViaDynamicRouting example."], fontStyle=FontStyle(
                        justify=["MIDDLE","MIDDLE"], size=0.8)), appearance=Appearance(
                    material=Material(
                        diffuseColor=(1,1,0.2))))])]))
.XML())
