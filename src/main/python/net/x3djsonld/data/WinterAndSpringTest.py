####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python WinterAndSpringTest.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    component(level=1,name='HAnim'),
    meta(content='WinterAndSpringTest.x3d',name='title'),
    meta(content='3D Male Scan combined with JoeKick, 3 Korean characters Ru,Mi,Min from HAnim, CCBYSA music plus designs from Rhino. MaleScan modified in Cinema4D for articulation and translations, geometric values from Rhino, txt file for centers. Models vary. HAnim version 2 LOA-3 Humanoids with textured skin, 3 Korean characters, plus scan. Math for lines and intersections.',name='description'),
    meta(content='Carol McDonald, Katy Schildmeyer, Joe D. Williams and Don Brutzman',name='creator'),
    meta(content='May through September 2023',name='created'),
    meta(content='2 June 2023',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter09Ru.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter10Mi.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/KoreanCharacter11Min.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/WinterAndSpringTest.x3d',name='identifier'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["X3D Humanoid LOA3 skeleton plus others","Lots points"],title='X3D HANIM LOA3 (modified) Skeleton, Lots points Skin, texcoords, Displacer, translations'),
    NavigationInfo(DEF='Start_NavigationInfo',headlight=False),
    Viewpoint(centerOfRotation=(0,1,0),description='Male',position=(0,1,-2)),
    Background(DEF='gray_Background'),
    Background(DEF='dark_gray_Background'),
    Background(DEF='black_Background'),
    Background(DEF='blue_Background'),
    SpotLight(DEF='light1',ambientIntensity=0.7,beamWidth=1.5,color=(0.8,0.8,1),cutOffAngle=0.6,direction=(0,0,0),location=(0,3,3),radius=10),
    PointLight(DEF='light2',ambientIntensity=0.7,color=(0.8,0.8,1),location=(0,10,-7)),
    #  External from the Humanoid viewpoints 
    Viewpoint(DEF='Scene_InclinedView',centerOfRotation=(0,0.85,0),description='Scene_Inclined View',orientation=(-0.113,0.993,0.0347,0.671),position=(1.62,1.05,3.06)),
    Viewpoint(DEF='Scene_IFrontView',centerOfRotation=(0,0.8,0),description='Scene_Front View',position=(0,0.8,2.58)),
    Viewpoint(DEF='Scene_OldMan_ISideView',centerOfRotation=(0,0.8,0),description='Scene_Side View',orientation=(0,1,0,1.5708),position=(-2.6,1.5,1)),
    Viewpoint(DEF='Scene_ISideView',centerOfRotation=(0,0.8,0),description='Scene_Side View',orientation=(0,1,0,1.5708),position=(-5.0,1.5,1)),
    Viewpoint(DEF='Scene_Full_ISideView',centerOfRotation=(0,0.8,0),description='Scene_Side View',orientation=(0,1,0,1.5708),position=(-10,1.5,1)),
    Viewpoint(DEF='Scene_OneBush_ISideView',centerOfRotation=(0,0.8,0),description='Scene_Side View',orientation=(0,1,0,1.5708),position=(-20,1.5,1)),
    Viewpoint(DEF='Scene_TwoBush_ISideView',centerOfRotation=(0,0.8,0),description='Scene_Side View',orientation=(0,1,0,1.5708),position=(-10,1.5,1)),
    Viewpoint(DEF='Scene_BackView',centerOfRotation=(0,1.5,0),description='Scene_Back View',orientation=(0,1,0,3.14),position=(0,1.5,-5)),
    Viewpoint(DEF='Scene_OldMan_BackView',centerOfRotation=(0,1.5,0),description='Scene_Back View',orientation=(0,1,0,3.14),position=(0,1.5,-2.5)),
    Viewpoint(DEF='Scene_Full_BackView',centerOfRotation=(0,1.5,0),description='Scene_Back View',orientation=(0,1,15,3.14),position=(0,1.5,-20)),
    Viewpoint(DEF='Scene_TopView',centerOfRotation=(0,1.5,0),description='Scene_Top View',orientation=(1,0,0,-1.5708),position=(0,3.5,0)),
    Group(DEF='OldMan_Humanoid',
      children=[
      HAnimHumanoid(DEF='OldMan',loa=3,name='Walk',version='2.0',
        metadata=MetadataSet(name='warnings',reference='HAnim',
          value=[
          MetadataString(name='SymmetricalLeftRight',reference='correction options: ignore, warn, average, left, right, largest, smallest',value=["ignore"])]),
        skeleton=[
        HAnimJoint(DEF='OldMan_humanoid_root',name='humanoid_root',ulimit=[0,0,0],llimit=[0,0,0],
          #  TODO center='x 0.9155 z' 
          children=[
          HAnimSegment(DEF='OldMan_sacrum',name='sacrum',
            children=[
            HAnimSite(DEF='OldMan_RootBack_view',name='RootBack_view',
              children=[
              Transform(DEF='hanimcordsys',scale=(0.175,0.175,0.175),
                children=[
                Viewpoint(DEF='ViewBodyRootAxes',description='Joe_HAnim Root HAnimSite Coordinate Axes View'),
                Shape(DEF='AxisLinesShape',
                  #  RGB lines showing XYZ axes 
                  geometry=IndexedLineSet(colorIndex=[0,1,2],colorPerVertex=False,coordIndex=[0,1,-1,0,2,-1,0,3,-1],
                    coord=Coordinate(point=[(0,0,0),(1.0,0,0),(0,1.0,0),(0,0,1.0)]),
                    color=Color(color=[(1,0,0),(0,0.6,0),(0,0,1)])))],
                skin=[
                Shape(DEF='OldMan_Shape',
                  appearance=Appearance(DEF='OldMan_skin_Appearance',
                    material=Material(DEF='OldMan_skin_Material',diffuseColor=(0.3,0.3,0.6),emissiveColor=(0.3,0.3,0.6)),
                    texture=ImageTexture(DEF='OldManSkinImageTexture',url=["OldManBodyTexture29.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/JoeBodyTexture29.png"]),
                    textureTransform=TextureTransform(DEF='KickTextureTransform')),
                  geometry=IndexedFaceSet(DEF='OldMan_skin_IndexedFaceSet'))])])]),
          HAnimJoint(DEF='OldMan_sacroiliac',name='sacroiliac',ulimit=[0,0,0],llimit=[0,0,0],
            #  TODO center='x 0.952 z' 
            #  High hip 
            children=[
            HAnimJoint(DEF='OldMan_l_hip',name='l_hip',ulimit=[0,0,0],llimit=[0,0,0],
              #  TODO center='x 0.879 z' Low hip 
              children=[
              HAnimJoint(DEF='OldMan_l_knee',name='l_knee',ulimit=[0,0,0],llimit=[0,0,0],
                #  center='x 0.461 z' 
                children=[
                HAnimJoint(DEF='OldMan_l_talocrural',name='l_talocrural',ulimit=[0,0,0],llimit=[0,0,0],
                  #  Ankle 
                  children=[
                  HAnimJoint(DEF='Joe_l_tarsometatarsal_2',name='l_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimJoint(DEF='Joe_l_metatarsophalangeal_2',name='l_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimJoint(DEF='Joe_l_tarsal_distal_interphalangeal_2',center=(0.115,0.02,0.122),name='l_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0])])])])]),
              HAnimJoint(DEF='OldMan_r_hip',name='l_hip',ulimit=[0,0,0],llimit=[0,0,0],
                #  Low hip 
                children=[
                HAnimJoint(DEF='OldMan_r_knee',name='l_knee',ulimit=[0,0,0],llimit=[0,0,0]),
                HAnimJoint(DEF='OldMan_r_talocrural',name='l_talocrural',ulimit=[0,0,0],llimit=[0,0,0],
                  #  Ankle 
                  children=[
                  HAnimJoint(DEF='Joe_r_tarsometatarsal_2',center=(-0.1,0.015,-0.01),name='r_tarsometatarsal_2',skinCoordIndex=[374,375,376],skinCoordWeight=[1,1,1],ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimJoint(DEF='Joe_r_metatarsophalangeal_2',center=(-0.115,0.037,0.09),name='r_metatarsophalangeal_2',skinCoordIndex=[377,378,379,380],skinCoordWeight=[1,1,1,1],ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimJoint(DEF='Joe_r_tarsal_distal_interphalangeal_2',center=(-0.1,0.01,0.14),name='r_tarsal_distal_interphalangeal_2',skinCoordIndex=[381,382,383,384,385,386,387,388,389],skinCoordWeight=[1,1,1,1,1,1,1,1,1],ulimit=[0,0,0],llimit=[0,0,0])])])])])]),
            HAnimJoint(DEF='OldMan_vl5',name='vl5',ulimit=[0,0,0],llimit=[0,0,0],
              #  Abdomen 
              children=[
              HAnimJoint(DEF='MeshName_vl4',name='vl4',ulimit=[0,0,0],llimit=[0,0,0],
                children=[
                HAnimJoint(DEF='OldMan_vl3',name='vl3',ulimit=[0,0,0],llimit=[0,0,0],
                  #  center='x 1.098 z' 
                  #  Low=' ist=' 
                  children=[
                  HAnimJoint(DEF='MeshName_vl2',name='vl2',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimJoint(DEF='OldMan_vl1',name='vl1',ulimit=[0,0,0],llimit=[0,0,0],
                      #  center='x 1.171 z' 
                      #  High waist 
                      children=[
                      HAnimJoint(DEF='MeshName_vt12',name='vt12',ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimJoint(DEF='OldMan_vt11',name='vt11',ulimit=[0,0,0],llimit=[0,0,0],
                          #  Ribcage=' 
                          children=[
                          HAnimJoint(DEF='MeshName_vt10',name='vt10',ulimit=[0,0,0],llimit=[0,0,0],
                            children=[
                            HAnimJoint(DEF='MeshName_vt9',name='vt9',ulimit=[0,0,0],llimit=[0,0,0],
                              children=[
                              HAnimJoint(DEF='MeshName_vt8',name='vt8',ulimit=[0,0,0],llimit=[0,0,0],
                                children=[
                                HAnimJoint(DEF='OldMan_vt7',name='vt7',ulimit=[0,0,0],llimit=[0,0,0],
                                  #  Sternum=' 
                                  children=[
                                  HAnimJoint(DEF='MeshName_vt6',name='vt6',ulimit=[0,0,0],llimit=[0,0,0],
                                    children=[
                                    HAnimJoint(DEF='MeshName_vt5',name='vt5',ulimit=[0,0,0],llimit=[0,0,0],
                                      children=[
                                      HAnimJoint(DEF='OldMan_vt4',name='vt4',ulimit=[0,0,0],llimit=[0,0,0],
                                        #  Chest 
                                        children=[
                                        HAnimJoint(DEF='MeshName_vt3',name='vt3',ulimit=[0,0,0],llimit=[0,0,0],
                                          children=[
                                          HAnimJoint(DEF='OldMan_vt2',name='vt2',ulimit=[0,0,0],llimit=[0,0,0],
                                            #  High Chest 
                                            children=[
                                            HAnimJoint(DEF='MeshName_vt1',name='vt1',ulimit=[0,0,0],llimit=[0,0,0],
                                              children=[
                                              HAnimJoint(DEF='OldMan_vc7',name='vc7',ulimit=[0,0,0],llimit=[0,0,0],
                                                #  Low neck 
                                                children=[
                                                HAnimJoint(DEF='MeshName_vc6',name='vc6',ulimit=[0,0,0],llimit=[0,0,0],
                                                  children=[
                                                  HAnimJoint(DEF='MeshName_vc5',name='vc5',ulimit=[0,0,0],llimit=[0,0,0],
                                                    children=[
                                                    HAnimJoint(DEF='OldMan_vc4',name='vc4',ulimit=[0,0,0],llimit=[0,0,0],
                                                      #  Mid=' ck=' 
                                                      children=[
                                                      HAnimJoint(DEF='MeshName_vc3',name='vc3',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='MeshName_vc2',name='vc2',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='OldMan_vc1',name='vc1',ulimit=[0,0,0],llimit=[0,0,0],
                                                            #  High=' ck=' 
                                                            children=[
                                                            HAnimJoint(DEF='OldMan_skullbase',name='skullbase',ulimit=[0,0,0],llimit=[0,0,0],
                                                              displacers=[
                                                              HAnimDisplacer(DEF='Joe_skull_tip_raiser_action',coordIndex=[0,1,2,3,4,5,6,7,8,9],displacements=[(0,0.15,0),(0,0,0.15),(-0.1,0,0.15),(0.1,0,0.05),(0,-0.02,0.05),(-0.15,0,0),(-0.05,0,0),(0.15,0,0),(0.05,0,0),(0,0,-0.15)],name='skull_tip_raiser_action'),],
                                                              children=[
                                                              HAnimJoint(DEF='OldMan_l_eyelid_joint',name='l_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0]),
                                                              HAnimJoint(DEF='OldMan_l_eyeball_joint',name='l_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0]),
                                                              HAnimJoint(DEF='OldMan_l_eyebrow_joint',name='l_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0]),
                                                              HAnimJoint(DEF='OldMan_r_eyelid_joint',name='r_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0]),
                                                              HAnimJoint(DEF='OldMan_r_eyeball_joint',name='r_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0]),
                                                              HAnimJoint(DEF='OldMan_r_eyebrow_joint',name='r_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0]),
                                                              HAnimJoint(DEF='OldMan_temporomandibular',name='temporomandibular',ulimit=[0,0,0],llimit=[0,0,0])])])])])])])])]),
                                              HAnimJoint(DEF='OldMan_l_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0],
                                                children=[
                                                HAnimJoint(DEF='OldMan_l_sternoclavicular',name='l_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0],
                                                  children=[
                                                  HAnimJoint(DEF='OldMan_l_shoulder',name='l_shoulder',ulimit=[0,0,0],llimit=[0,0,0],
                                                    children=[
                                                    HAnimJoint(DEF='OldMan_l_elbow',name='l_elbow',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimJoint(DEF='OldMan_l_radiocarpal',name='l_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimJoint(DEF='OldMan_l_carpometacarpal_1',name='l_carpometacarpal_1',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='OldMan_l_metacarpophalangeal_1',name='l_metacarpophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='OldMan_l_carpal_interphalangeal_1',name='l_carpal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0])]),
                                                          HAnimJoint(DEF='OldMan_l_carpometacarpal_2',name='l_carpometacarpal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='OldMan_l_metacarpophalangeal_2',name='l_metacarpophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                              children=[
                                                              HAnimJoint(DEF='OldMan_l_carpal_proximal_interphalangeal_2',name='l_carpal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                                children=[
                                                                HAnimJoint(DEF='OldMan_l_carpal_distal_interphalangeal_2',name='l_carpal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0])])]),
                                                            HAnimJoint(DEF='OldMan_l_carpometacarpal_3',name='l_carpometacarpal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                              children=[
                                                              HAnimJoint(DEF='OldMan_l_metacarpophalangeal_3',name='l_metacarpophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                                children=[
                                                                HAnimJoint(DEF='OldMan_l_carpal_proximal_interphalangeal_3',name='l_carpal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                                  children=[
                                                                  HAnimJoint(DEF='OldMan_l_carpal_distal_interphalangeal_3',name='l_carpal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0])])]),
                                                              HAnimJoint(DEF='OldMan_l_carpometacarpal_4',name='l_carpometacarpal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                                children=[
                                                                HAnimJoint(DEF='OldMan_l_metacarpophalangeal_4',name='l_metacarpophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                                  children=[
                                                                  HAnimJoint(DEF='OldMan_l_carpal_proximal_interphalangeal_4',name='l_carpal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                                    children=[
                                                                    HAnimJoint(DEF='OldMan_l_carpal_distal_interphalangeal_4',name='l_carpal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0])])]),
                                                                HAnimJoint(DEF='OldMan_l_carpometacarpal_5',name='l_carpometacarpal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                                  children=[
                                                                  HAnimJoint(DEF='OldMan_l_metacarpophalangeal_5',name='l_metacarpophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                                    children=[
                                                                    HAnimJoint(DEF='OldMan_l_carpal_proximal_interphalangeal_5',name='l_carpal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                                      children=[
                                                                      HAnimJoint(DEF='OldMan_l_carpal_distal_interphalangeal_5',name='l_carpal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0])])])])])])])]),
                                                        HAnimJoint(DEF='OldMan_r_sternoclavicular',name='r_sternoclavicular',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimJoint(DEF='OldMan_r_acromioclavicular',name='r_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimJoint(DEF='OldMan_r_shoulder',name='r_shoulder',ulimit=[0,0,0],llimit=[0,0,0],
                                                              children=[
                                                              HAnimJoint(DEF='OldMan_r_elbow',name='r_elbow',ulimit=[0,0,0],llimit=[0,0,0],
                                                                children=[
                                                                HAnimJoint(DEF='OldMan_r_radiocarpal',name='r_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0],
                                                                  children=[
                                                                  HAnimJoint(DEF='OldMan_r_carpometacarpal_1',name='r_carpometacarpal_1',ulimit=[0,0,0],llimit=[0,0,0],
                                                                    children=[
                                                                    HAnimJoint(DEF='OldMan_r_metacarpophalangeal_1',name='r_metacarpophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0],
                                                                      children=[
                                                                      HAnimJoint(DEF='OldMan_r_carpal_interphalangeal_1',name='r_carpal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0])]),
                                                                    HAnimJoint(DEF='OldMan_r_carpometacarpal_2',name='r_carpometacarpal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                                      children=[
                                                                      HAnimJoint(DEF='OldMan_r_metacarpophalangeal_2',name='r_metacarpophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                                        children=[
                                                                        HAnimJoint(DEF='OldMan_r_carpal_proximal_interphalangeal_2',name='r_carpal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                                          children=[
                                                                          HAnimJoint(DEF='OldMan_r_carpal_distal_interphalangeal_2',name='r_carpal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0])])]),
                                                                      HAnimJoint(DEF='OldMan_r_carpometacarpal_3',name='r_carpometacarpal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                                        children=[
                                                                        HAnimJoint(DEF='OldMan_r_metacarpophalangeal_3',name='r_metacarpophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                                          children=[
                                                                          HAnimJoint(DEF='OldMan_r_carpal_proximal_interphalangeal_3',name='r_carpal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                                            children=[
                                                                            HAnimJoint(DEF='OldMan_r_carpal_distal_interphalangeal_3',name='r_carpal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0])])]),
                                                                        HAnimJoint(DEF='OldMan_r_carpometacarpal_4',name='r_carpometacarpal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                                          children=[
                                                                          HAnimJoint(DEF='OldMan_r_metacarpophalangeal_4',name='r_metacarpophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                                            children=[
                                                                            HAnimJoint(DEF='OldMan_r_carpal_proximal_interphalangeal_4',name='r_carpal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                                              children=[
                                                                              HAnimJoint(DEF='OldMan_r_carpal_distal_interphalangeal_4',name='r_carpal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0])])]),
                                                                          HAnimJoint(DEF='OldMan_r_carpometacarpal_5',name='r_carpometacarpal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                                            children=[
                                                                            HAnimJoint(DEF='OldMan_r_metacarpophalangeal_5',name='r_metacarpophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                                              children=[
                                                                              HAnimJoint(DEF='OldMan_r_carpal_proximal_interphalangeal_5',name='r_carpal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                                                children=[
                                                                                HAnimJoint(DEF='OldMan_r_carpal_distal_interphalangeal_5',name='r_carpal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])],)])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for WinterAndSpringTest.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python WinterAndSpringTest.py load and self-test diagnostics complete.")
