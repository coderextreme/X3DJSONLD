###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    component(level=1,name='H-Anim'),
    meta(content='BoxMan.x3d',name='title'),
    meta(content='A Seamless VRML Human, demonstrating the H-Anim 2001 Specification. Animation scripting via EcmaScript.',name='description'),
    meta(content='James Smith - james@vapourtech.com',name='creator'),
    meta(content='Don Brutzman and Matt Beitler',name='translator'),
    meta(content='1 March 2001',name='created'),
    meta(content='19 October 2001',name='translated'),
    meta(content='17 November 2014',name='modified'),
    meta(content='http://h-anim.org',name='reference'),
    meta(content='boxman.original.wrl',name='reference'),
    meta(content='reconcile z-coordinate mismatches using source anthropometry, see source for details',name='TODO'),
    meta(content='http://h-anim.org/Models/H-Anim2001/boxman',name='reference'),
    meta(content='http://h-anim.org/Models/H-Anim2001/boxman/boxman.wrl',name='reference'),
    meta(content='http://www.vapourtech.com/team/james/boxman.wrl',name='reference'),
    meta(content='http://h-anim.org/Specifications/H-Anim2001',name='reference'),
    meta(content='http://h-anim.org/Models',name='reference'),
    meta(content='http://h-anim.org/Nodes',name='reference'),
    meta(content='http://www.web3d.org/x3d/content/X3dToVrml97.xslt',name='reference'),
    meta(content='(C) 2000 James Smith - james@vapourtech.com',name='rights'),
    meta(content='http://www.vapourtech.com',name='reference'),
    meta(content='BoxMan H-Anim 2.0',name='subject'),
    meta(content='http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/BoxMan.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["(C) 2000 James Smith - james@vapourtech.com","http://www.vapourtech.com/team/james/boxman.wrl","Blaxxun compatibility by Tu Lam - TuL@seamless-solutions.com"],title='BoxMan - A Seamless VRML Human'),
    Background(groundColor=[(0.6,0.6,0.6)],skyColor=[(0.75,0.75,0.75)]),
    #  H-Anim node prototypes are provided automatically by the X3dToVrml97.xsl translation stylesheet when converting to VRML97 (which didn't include H-Anim) 
    HAnimHumanoid(DEF='HUMANOID',info=["authorName=James Smith","authorEmail=james@vapourtech.com","copyright=(C) 2000 James Smith - james@vapourtech.com","humanoidVersion=2.0"],name='Humanoid',version='2.0',
      skeleton=[
      HAnimJoint(DEF='hanim_HumanoidRoot',center=(0.0,0.9723,-0.0728),name='HumanoidRoot',skinCoordIndex=[0,1,2,3,4,5,6,7,8,9,10,11],skinCoordWeight=[1,1,1,1,1,1,1,1,1,1,1,1],
        children=[
        HAnimSegment(DEF='hanim_sacrum',name='sacrum',
          children=[
          Transform(translation=(0.0,0.9723,-0.0728),
            children=[
            Shape(DEF='SphereYellow',
              appearance=Appearance(
                material=Material(diffuseColor=(1.0,1.0,0.0))),
              geometry=Sphere(radius=0.02))])]),
        HAnimJoint(DEF='hanim_l_hip',center=(0.0956,0.9364,0.0),name='l_hip',skinCoordIndex=[12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43],skinCoordWeight=[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5],
          children=[
          HAnimSegment(DEF='hanim_l_thigh',name='l_thigh',
            #  TODO reconcile z-coordinate mismatch using source anthropometry 
            children=[
            Transform(translation=(0.0956,0.9346,0.0),
              children=[
              Shape(USE='SphereYellow')])]),
          HAnimJoint(DEF='hanim_l_knee',center=(0.0956,0.5095,-0.0036),name='l_knee',skinCoordIndex=[36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63],skinCoordWeight=[0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1],
            children=[
            HAnimSegment(DEF='hanim_l_calf',name='l_calf',
              children=[
              Transform(translation=(0.0956,0.5095,-0.0036),
                children=[
                Shape(USE='SphereYellow')])]),
            HAnimJoint(DEF='hanim_l_ankle',center=(0.0946,0.0762,-0.0261),name='l_ankle',skinCoordIndex=[64,65,66,67,68,69,70,71],skinCoordWeight=[1,1,1,1,1,1,1,1],
              children=[
              HAnimSegment(DEF='hanim_l_hindfoot',name='l_hindfoot',
                children=[
                Transform(translation=(0.0946,0.0762,-0.0261),
                  children=[
                  Shape(USE='SphereYellow')])]),
              HAnimJoint(DEF='hanim_l_midtarsal',center=(0.1079,0.0317,0.0670),name='l_midtarsal',skinCoordIndex=[72,73,74,75,76,77,78,79],skinCoordWeight=[1,1,1,1,1,1,1,1],
                children=[
                HAnimSegment(DEF='hanim_l_middistal',name='l_middistal',
                  children=[
                  Transform(translation=(0.1079,0.0317,0.0670),
                    children=[
                    Shape(USE='SphereYellow')]),
                  HAnimSite(DEF='hanim_l_middle_distal_tip',name='l_middle_distal_tip',translation=(.095,.0005,.1924)),
                  Transform(translation=(0.095,5.0E-4,0.1924),
                    children=[
                    Shape(DEF='SphereRed',
                      appearance=Appearance(
                        material=Material(diffuseColor=(1.0,0.0,0.0))),
                      geometry=Sphere(radius=0.02))])])])])])]),
        HAnimJoint(DEF='hanim_r_hip',center=(-0.0956,0.9364,0.0),name='r_hip',skinCoordIndex=[80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111],skinCoordWeight=[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5],
          children=[
          HAnimSegment(DEF='hanim_r_thigh',name='r_thigh',
            #  TODO reconcile z-coordinate mismatch using source anthropometry 
            children=[
            Transform(translation=(-0.0956,0.9346,0.0),
              children=[
              Shape(USE='SphereYellow')])]),
          HAnimJoint(DEF='hanim_r_knee',center=(-0.0956,0.5095,-0.0036),name='r_knee',skinCoordIndex=[104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131],skinCoordWeight=[0.5,0.5,0.5,0.5,0.5,0.5,0.5,0.5,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1],
            children=[
            HAnimSegment(DEF='hanim_r_calf',name='r_calf',
              children=[
              Transform(translation=(-0.0956,0.5095,-0.0036),
                children=[
                Shape(USE='SphereYellow')])]),
            HAnimJoint(DEF='hanim_r_ankle',center=(-0.0946,0.0762,-0.0261),name='r_ankle',skinCoordIndex=[132,133,134,135,136,137,138,139],skinCoordWeight=[1,1,1,1,1,1,1,1],
              children=[
              HAnimSegment(DEF='hanim_r_hindfoot',name='r_hindfoot',
                children=[
                Transform(translation=(-0.0946,0.0762,-0.0261),
                  children=[
                  Shape(USE='SphereYellow')])]),
              HAnimJoint(DEF='hanim_r_midtarsal',center=(-0.1079,0.0317,0.0670),name='r_midtarsal',skinCoordIndex=[140,141,142,143,144,145,146,147],skinCoordWeight=[1,1,1,1,1,1,1,1],
                children=[
                HAnimSegment(DEF='hanim_r_middistal',name='r_middistal',
                  children=[
                  Transform(translation=(-0.1079,0.0317,0.0670),
                    children=[
                    Shape(USE='SphereYellow')]),
                  HAnimSite(DEF='hanim_r_middle_distal_tip',name='r_middle_distal_tip',translation=(-.095,.0005,.1924)),
                  Transform(translation=(-0.0950,0.0005,0.1924),
                    children=[
                    Shape(USE='SphereRed')])])])])])]),
        HAnimJoint(DEF='hanim_vl5',center=(0.0,1.0817,-0.0728),name='vl5',skinCoordIndex=[148,149,150,151,152,153,154,155,156,157,158,159,160,161,162,163,164,165,166,167],skinCoordWeight=[1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1],
          children=[
          HAnimSegment(DEF='hanim_l5',name='l5',
            children=[
            Transform(translation=(0.0,1.0817,-0.0728),
              children=[
              Shape(USE='SphereYellow')])]),
          HAnimJoint(DEF='hanim_skullbase',center=(0.0,1.6440,0.036),name='skullbase',skinCoordIndex=[168,169,170,171,172,173,174,175],skinCoordWeight=[1,1,1,1,1,1,1,1],
            displacers=HAnimDisplacer(DEF='hanim_skullbase_displacer',displacements=[(0,.031993,0)],coordIndex=[168],weight=1.0),
            children=[
            HAnimSegment(DEF='hanim_skull',name='skull',
              #  TODO reconcile z-coordinate mismatch using source anthropometry 
              children=[
              Transform(translation=(0.0,1.6440,0.0036),
                children=[
                Shape(USE='SphereYellow')]),
              HAnimSite(DEF='hanim_skull_tip',name='skull_tip',translation=(-0.0029,1.7771,0.0274)),
              Transform(translation=(-0.0029,1.7771,0.0274),
                children=[
                Shape(USE='SphereYellow')])])]),
          HAnimJoint(DEF='hanim_l_shoulder',center=(0.1968,1.4642,-0.0265),name='l_shoulder',skinCoordIndex=[176,177,178,179,180,181,182,183],skinCoordWeight=[1,1,1,1,1,1,1,1],
            children=[
            HAnimSegment(DEF='hanim_l_upperarm',name='l_upperarm',
              children=[
              Transform(translation=(0.1968,1.4642,-0.0265),
                children=[
                Shape(USE='SphereYellow')])]),
            HAnimJoint(DEF='hanim_l_elbow',center=(0.1982,1.1622,-0.0557),name='l_elbow',skinCoordIndex=[184,185,186,187,188,189,190,191],skinCoordWeight=[1,1,1,1,1,1,1,1],
              children=[
              HAnimSegment(DEF='hanim_l_forearm',name='l_forearm',
                children=[
                Transform(translation=(0.1982,1.1622,-0.0557),
                  children=[
                  Shape(USE='SphereYellow')])]),
              HAnimJoint(DEF='hanim_l_wrist',center=(0.1972,0.8929,-0.0690),name='l_wrist',skinCoordIndex=[192,193,194,195,196,197,198,199],skinCoordWeight=[1,1,1,1,1,1,1,1],
                children=[
                HAnimSegment(DEF='hanim_l_hand',name='l_hand',
                  children=[
                  Transform(translation=(0.1972,0.8929,-0.0690),
                    children=[
                    Shape(USE='SphereYellow')]),
                  HAnimSite(DEF='hanim_l_hand_tip',name='l_hand_tip',translation=(0.1912,0.6976,-0.0710)),
                  Transform(translation=(0.1912,0.6976,-0.0710),
                    children=[
                    Shape(USE='SphereRed')])])])])]),
          HAnimJoint(DEF='hanim_r_shoulder',center=(-0.1968,1.4642,-0.0265),name='r_shoulder',skinCoordIndex=[200,201,202,203,204,205,206,207],skinCoordWeight=[1,1,1,1,1,1,1,1],
            children=[
            HAnimSegment(DEF='hanim_r_upperarm',name='r_upperarm',
              children=[
              Transform(translation=(-0.1968,1.4642,-0.0265),
                children=[
                Shape(USE='SphereYellow')])]),
            HAnimJoint(DEF='hanim_r_elbow',center=(-0.1982,1.1622,-0.0557),name='r_elbow',skinCoordIndex=[208,209,210,211,212,213,214,215],skinCoordWeight=[1,1,1,1,1,1,1,1],
              children=[
              HAnimSegment(DEF='hanim_r_forearm',name='r_forearm',
                children=[
                Transform(translation=(-0.1982,1.1622,-0.0557),
                  children=[
                  Shape(USE='SphereYellow')])]),
              HAnimJoint(DEF='hanim_r_wrist',center=(-0.1972,0.8929,-0.0690),name='r_wrist',skinCoordIndex=[216,217,218,219,220,221,222,223],skinCoordWeight=[1,1,1,1,1,1,1,1],
                children=[
                HAnimSegment(DEF='hanim_r_hand',name='r_hand',
                  children=[
                  Transform(translation=(-0.1972,0.8929,-0.0690),
                    children=[
                    Shape(USE='SphereYellow')]),
                  HAnimSite(DEF='hanim_r_hand_tip',name='r_hand_tip',translation=(-0.1912,0.6976,-0.0710)),
                  Transform(translation=(-0.1912,0.6976,-0.0710),
                    children=[
                    Shape(USE='SphereRed')])])])])])])]),],
      #  # sacrum (12) # l_thigh (28) # l_calf (24) # l_hindfoot (8) # l_middistal (8) # r_thigh (28) # r_calf (24) # r_hindfoot (8) # r_middistal (8) # l5 (20) # skull (8) # l_upperarm (8) # l_forearm (8) # l_hand (8) # r_upperarm (8) # r_forearm (8) # r_hand (8) 
      skinCoord=Coordinate(DEF='SKINCOORD',point=[(-.05,1,.05),(.05,1,.05),(.03,.97,-.1),(-.03,.97,-.1),(.03,.94,-.075),(-.03,.94,-.075),(0,.92,0),(0,.94,.03),(-0.12,1.06,.05),(0.12,1.06,.05),(0.12,1.06,-.1),(-0.12,1.06,-.1),(.0456,.9364,.05),(.1456,.9364,.05),(.1456,.9364,-.05),(.0456,.9364,-.05),(.0456,.9,.05),(.1456,.9,.05),(.1456,.9,-.05),(.0456,.9,-.05),(.0456,.8,.05),(.1456,.8,.05),(.1456,.8,-.05),(.0456,.8,-.05),(.0456,.7,.05),(.1456,.7,.05),(.1456,.7,-.05),(.0456,.7,-.05),(.0456,.6,.05),(.1456,.6,.05),(.1456,.6,-.05),(.0456,.6,-.05),(.0456,.55,.05),(.1456,.55,.05),(.1456,.55,-.05),(.0456,.55,-.05),(.0456,.52,.05),(.1456,.52,.05),(.1456,.52,-.05),(.0456,.52,-.05),(.0456,.5,.05),(.1456,.5,.05),(.1456,.5,-.05),(.0456,.5,-.05),(.0454,.43,.045),(.1454,.43,.045),(.1454,.43,-.055),(.0454,.43,-.055),(.0452,.36,.04),(.1452,.36,.04),(.1452,.36,-.06),(.0452,.36,-.06),(.045,.29,.035),(.145,.29,.035),(.145,.29,-.065),(.045,.29,-.065),(.0448,.21,.03),(.1448,.21,.03),(.1448,.21,-.07),(.0448,.21,-.07),(.0446,.1262,.025),(.1446,.1262,.025),(.1446,.1262,-.075),(.0446,.1262,-.075),(.0446,.0762,.025),(.1446,.0762,.025),(.1446,0,-.075),(.0446,0,-.075),(.0446,.0562,.057),(.1446,.0562,.057),(.1446,0,.057),(.0446,0,.057),(.0446,.0562,.087),(.1446,.0562,.087),(.1446,0,.087),(.0446,0,.087),(.0446,.0562,.1924),(.1446,.0562,.1924),(.1446,0,.1924),(.0446,0,.1924),(-.0456,.9364,.05),(-.1456,.9364,.05),(-.1456,.9364,-.05),(-.0456,.9364,-.05),(-.0456,.9,.05),(-.1456,.9,.05),(-.1456,.9,-.05),(-.0456,.9,-.05),(-.0456,.8,.05),(-.1456,.8,.05),(-.1456,.8,-.05),(-.0456,.8,-.05),(-.0456,.7,.05),(-.1456,.7,.05),(-.1456,.7,-.05),(-.0456,.7,-.05),(-.0456,.6,.05),(-.1456,.6,.05),(-.1456,.6,-.05),(-.0456,.6,-.05),(-.0456,.55,.05),(-.1456,.55,.05),(-.1456,.55,-.05),(-.0456,.55,-.05),(-.0456,.52,.05),(-.1456,.52,.05),(-.1456,.52,-.05),(-.0456,.52,-.05),(-.0456,.5,.05),(-.1456,.5,.05),(-.1456,.5,-.05),(-.0456,.5,-.05),(-.0454,.43,.045),(-.1454,.43,.045),(-.1454,.43,-.055),(-.0454,.43,-.055),(-.0452,.36,.04),(-.1452,.36,.04),(-.1452,.36,-.06),(-.0452,.36,-.06),(-.045,.29,.035),(-.145,.29,.035),(-.145,.29,-.065),(-.045,.29,-.065),(-.0448,.21,.03),(-.1448,.21,.03),(-.1448,.21,-.07),(-.0448,.21,-.07),(-.0446,.1262,.025),(-.1446,.1262,.025),(-.1446,.1262,-.075),(-.0446,.1262,-.075),(-.0446,.0762,.025),(-.1446,.0762,.025),(-.1446,0,-.075),(-.0446,0,-.075),(-.0446,.0562,.057),(-.1446,.0562,.057),(-.1446,0,.057),(-.0446,0,.057),(-.0446,.0562,.087),(-.1446,.0562,.087),(-.1446,0,.087),(-.0446,0,.087),(-.0446,.0562,.1924),(-.1446,.0562,.1924),(-.1446,0,.1924),(-.0446,0,.1924),(-0.12,1.10,.05),(0.12,1.10,.05),(0.12,1.10,-.1),(-0.12,1.10,-.1),(-.14,1.42,0.045),(.14,1.42,0.045),(.14,1.42,-0.09),(-.14,1.42,-0.09),(-.24,1.52,0.035),(.24,1.52,0.035),(.24,1.52,-0.09),(-.24,1.52,-0.09),(-.05,1.56,0.030),(.05,1.56,0.030),(.05,1.56,-0.06),(-.05,1.56,-0.06),(-.05,1.60,0.060),(.05,1.60,0.060),(.05,1.62,-0.03),(-.05,1.62,-0.03),(-0.07,1.777,0.13),(0.07,1.777,0.13),(0.07,1.777,-0.03),(-0.07,1.777,-0.03),(-0.07,1.60,0.13),(0.07,1.60,0.13),(0.07,1.66,-0.03),(-0.07,1.66,-0.03),(.16,1.42,0.015),(.24,1.5,0.015),(.24,1.5,-0.075),(.16,1.42,-0.075),(.17,1.18,-0.025),(.23,1.18,-0.025),(.23,1.18,-0.085),(.17,1.18,-0.085),(.17,1.14,-0.025),(.23,1.14,-0.025),(.23,1.14,-0.085),(.17,1.14,-0.085),(.18,.91,-0.05),(.22,.91,-0.05),(.22,.91,-0.09),(.18,.91,-0.09),(.18,.87,-0.02),(.22,.87,-0.02),(.22,.87,-0.1),(.18,.87,-0.1),(.18,.6976,-0.02),(.22,.6976,-0.02),(.22,.6976,-0.1),(.18,.6976,-0.1),(-.16,1.42,0.015),(-.24,1.5,0.015),(-.24,1.5,-0.075),(-.16,1.42,-0.075),(-.17,1.18,-0.025),(-.23,1.18,-0.025),(-.23,1.18,-0.085),(-.17,1.18,-0.085),(-.17,1.14,-0.025),(-.23,1.14,-0.025),(-.23,1.14,-0.085),(-.17,1.14,-0.085),(-.18,.91,-0.05),(-.22,.91,-0.05),(-.22,.91,-0.09),(-.18,.91,-0.09),(-.18,.87,-0.02),(-.22,.87,-0.02),(-.22,.87,-0.1),(-.18,.87,-0.1),(-.18,.6976,-0.02),(-.22,.6976,-0.02),(-.22,.6976,-0.1),(-.18,.6976,-0.1)]),
      skin=[
      Group(
        children=[
        Shape(DEF='TrouserSkin',
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,1),transparency=0.5)),
          #  # 0: sacrum (8) # 1: l_hip joint (8) # 2: r_hip joint (8) # 3: l_thigh (48) # 4: l_knee joint (8) # 5: l_calf (40) # 10: r_thigh (48) # 11: r_knee joint (8) # 12: r_calf (40) 
          geometry=IndexedFaceSet(coordIndex=[0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1],
            coord=Coordinate(USE='SKINCOORD'))),
        Shape(DEF='ShoeSkin',
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0),transparency=0.5)),
          #  # 6: l_ankle joint (8) # 7: l_hindfoot (8) # 8: l_midtarsal joint (8) # 9: l_middistal (10) # 13: r_ankle joint (8) # 14: r_hindfoot (8) # 15: r_midtarsal joint (8) # 16: r_middistal (10) 
          geometry=IndexedFaceSet(coordIndex=[60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1],
            coord=Coordinate(USE='SKINCOORD'))),
        Shape(DEF='ShirtSkin',
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,0),transparency=0.5)),
          #  # 17: vl5_joint (8) # 18: l5 (28) # 21: l_shoulder joint (8) # 22: l_upperarm (8) # 23: l_elbow joint (8) # 24: l_forearm (8) # 27: r_shoulder joint (8) # 28: r_upperarm (8) # 29: r_elbow joint (8) # 30: r_forearm (8) 
          geometry=IndexedFaceSet(coordIndex=[148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1],
            coord=Coordinate(USE='SKINCOORD'))),
        Shape(DEF='HeadHandsFleshToneSkin',
          appearance=Appearance(
            material=Material(diffuseColor=(1,0.75,0.75),transparency=0.5)),
          #  # 19: skullbase joint (8) # 20: skull (10) # 25: l_wrist joint (8) # 26: l_hand (10) # 31: r_wrist joint (8) # 32: r_hand (10) 
          geometry=IndexedFaceSet(coordIndex=[172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1],
            coord=Coordinate(USE='SKINCOORD'))),
        Shape(DEF='SkinLines',
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))),
          #  Combined set of prior IFS coordIndex values 
          geometry=IndexedLineSet(coordIndex=[0,7,1,-1,8,0,1,-1,1,9,8,-1,10,2,3,-1,3,11,10,-1,2,4,5,-1,5,3,2,-1,4,6,5,-1,7,12,1,-1,1,12,13,-1,13,9,1,-1,9,13,14,-1,14,10,9,-1,10,14,15,-1,15,2,10,-1,12,7,6,-1,6,15,12,-1,15,6,4,-1,4,2,15,-1,0,80,7,-1,81,80,0,-1,0,8,81,-1,82,81,8,-1,8,11,82,-1,83,82,11,-1,11,3,83,-1,6,7,80,-1,80,83,6,-1,5,6,83,-1,83,3,5,-1,12,16,17,-1,17,13,12,-1,13,17,18,-1,18,14,13,-1,14,18,19,-1,19,15,14,-1,15,19,16,-1,16,12,15,-1,16,20,21,-1,21,17,16,-1,17,21,22,-1,22,18,17,-1,18,22,23,-1,23,19,18,-1,19,23,20,-1,20,16,19,-1,20,24,25,-1,25,21,20,-1,21,25,26,-1,26,22,21,-1,22,26,27,-1,27,23,22,-1,23,27,24,-1,24,20,23,-1,24,28,29,-1,29,25,24,-1,25,29,30,-1,30,26,25,-1,26,30,31,-1,31,27,26,-1,27,31,28,-1,28,24,27,-1,28,32,33,-1,33,29,28,-1,29,33,34,-1,34,30,29,-1,30,34,35,-1,35,31,30,-1,31,35,32,-1,32,28,31,-1,32,36,37,-1,37,33,32,-1,33,37,38,-1,38,34,33,-1,34,38,39,-1,39,35,34,-1,35,39,36,-1,36,32,35,-1,36,40,41,-1,41,37,36,-1,37,41,42,-1,42,38,37,-1,38,42,43,-1,43,39,38,-1,39,43,40,-1,40,36,39,-1,40,44,45,-1,45,41,40,-1,41,45,46,-1,46,42,41,-1,42,46,47,-1,47,43,42,-1,43,47,44,-1,44,40,43,-1,44,48,49,-1,49,45,44,-1,45,49,50,-1,50,46,45,-1,46,50,51,-1,51,47,46,-1,47,51,48,-1,48,44,47,-1,48,52,53,-1,53,49,48,-1,49,53,54,-1,54,50,49,-1,50,54,55,-1,55,51,50,-1,51,55,52,-1,52,48,51,-1,52,56,57,-1,57,53,52,-1,53,57,58,-1,58,54,53,-1,54,58,59,-1,59,55,54,-1,55,59,56,-1,56,52,55,-1,56,60,61,-1,61,57,56,-1,57,61,62,-1,62,58,57,-1,58,62,63,-1,63,59,58,-1,59,63,60,-1,60,56,59,-1,81,85,84,-1,84,80,81,-1,82,86,85,-1,85,81,82,-1,83,87,86,-1,86,82,83,-1,80,84,87,-1,87,83,80,-1,85,89,88,-1,88,84,85,-1,86,90,89,-1,89,85,86,-1,87,91,90,-1,90,86,87,-1,84,88,91,-1,91,87,84,-1,89,93,92,-1,92,88,89,-1,90,94,93,-1,93,89,90,-1,91,95,94,-1,94,90,91,-1,88,92,95,-1,95,91,88,-1,93,97,96,-1,96,92,93,-1,94,98,97,-1,97,93,94,-1,95,99,98,-1,98,94,95,-1,92,96,99,-1,99,95,92,-1,97,101,100,-1,100,96,97,-1,98,102,101,-1,101,97,98,-1,99,103,102,-1,102,98,99,-1,96,100,103,-1,103,99,96,-1,101,105,104,-1,104,100,101,-1,102,106,105,-1,105,101,102,-1,103,107,106,-1,106,102,103,-1,100,104,107,-1,107,103,100,-1,105,109,108,-1,108,104,105,-1,106,110,109,-1,109,105,106,-1,107,111,110,-1,110,106,107,-1,104,108,111,-1,111,107,104,-1,109,113,112,-1,112,108,109,-1,110,114,113,-1,113,109,110,-1,111,115,114,-1,114,110,111,-1,108,112,115,-1,115,111,108,-1,113,117,116,-1,116,112,113,-1,114,118,117,-1,117,113,114,-1,115,119,118,-1,118,114,115,-1,112,116,119,-1,119,115,112,-1,117,121,120,-1,120,116,117,-1,118,122,121,-1,121,117,118,-1,119,123,122,-1,122,118,119,-1,116,120,123,-1,123,119,116,-1,121,125,124,-1,124,120,121,-1,122,126,125,-1,125,121,122,-1,123,127,126,-1,126,122,123,-1,120,124,127,-1,127,123,120,-1,125,129,128,-1,128,124,125,-1,126,130,129,-1,129,125,126,-1,127,131,130,-1,130,126,127,-1,124,128,131,-1,131,127,124,-1,60,64,65,-1,65,61,60,-1,61,65,66,-1,66,62,61,-1,62,66,67,-1,67,63,62,-1,63,67,64,-1,64,60,63,-1,64,68,69,-1,69,65,64,-1,65,69,70,-1,70,66,65,-1,66,70,71,-1,71,67,66,-1,67,71,68,-1,68,64,67,-1,68,72,73,-1,73,69,68,-1,69,73,74,-1,74,70,69,-1,70,74,75,-1,75,71,70,-1,71,75,72,-1,72,68,71,-1,72,76,77,-1,77,73,72,-1,73,77,78,-1,78,74,73,-1,74,78,79,-1,79,75,74,-1,75,79,76,-1,76,72,75,-1,76,79,78,-1,78,77,76,-1,129,133,132,-1,132,128,129,-1,130,134,133,-1,133,129,130,-1,131,135,134,-1,134,130,131,-1,128,132,135,-1,135,131,128,-1,133,137,136,-1,136,132,133,-1,134,138,137,-1,137,133,134,-1,135,139,138,-1,138,134,135,-1,132,136,139,-1,139,135,132,-1,137,141,140,-1,140,136,137,-1,138,142,141,-1,141,137,138,-1,139,143,142,-1,142,138,139,-1,136,140,143,-1,143,139,136,-1,141,145,144,-1,144,140,141,-1,142,146,145,-1,145,141,142,-1,143,147,146,-1,146,142,143,-1,140,144,147,-1,147,143,140,-1,145,146,147,-1,147,144,145,-1,148,8,9,-1,9,149,148,-1,149,9,10,-1,10,150,149,-1,150,10,11,-1,11,151,150,-1,151,11,8,-1,8,148,151,-1,152,148,149,-1,149,153,152,-1,153,149,150,-1,150,154,153,-1,154,150,151,-1,151,155,154,-1,155,151,148,-1,148,152,155,-1,156,152,153,-1,153,157,156,-1,158,154,155,-1,155,159,158,-1,160,156,157,-1,157,161,160,-1,161,157,158,-1,158,162,161,-1,162,158,159,-1,159,163,162,-1,163,159,156,-1,156,160,163,-1,164,160,161,-1,161,165,164,-1,165,161,162,-1,162,166,165,-1,166,162,163,-1,163,167,166,-1,167,163,160,-1,160,164,167,-1,153,176,177,-1,177,157,153,-1,157,177,178,-1,178,158,157,-1,158,178,179,-1,179,154,158,-1,154,179,176,-1,176,153,154,-1,176,180,181,-1,181,177,176,-1,177,181,182,-1,182,178,177,-1,178,182,183,-1,183,179,178,-1,179,183,180,-1,180,176,179,-1,180,184,185,-1,185,181,180,-1,181,185,186,-1,186,182,181,-1,182,186,187,-1,187,183,182,-1,183,187,184,-1,184,180,183,-1,184,188,189,-1,189,185,184,-1,185,189,190,-1,190,186,185,-1,186,190,191,-1,191,187,186,-1,187,191,188,-1,188,184,187,-1,152,156,201,-1,201,200,152,-1,156,159,202,-1,202,201,156,-1,159,155,203,-1,203,202,159,-1,155,152,200,-1,200,203,155,-1,201,205,204,-1,204,200,201,-1,202,206,205,-1,205,201,202,-1,203,207,206,-1,206,202,203,-1,200,204,207,-1,207,203,200,-1,205,209,208,-1,208,204,205,-1,206,210,209,-1,209,205,206,-1,207,211,210,-1,210,206,207,-1,204,208,211,-1,211,207,204,-1,209,213,212,-1,212,208,209,-1,210,214,213,-1,213,209,210,-1,211,215,214,-1,214,210,211,-1,208,212,215,-1,215,211,208,-1,172,164,165,-1,165,173,172,-1,173,165,166,-1,166,174,173,-1,174,166,167,-1,167,175,174,-1,175,167,164,-1,164,172,175,-1,168,172,173,-1,173,169,168,-1,169,173,174,-1,174,170,169,-1,170,174,175,-1,175,171,170,-1,171,175,172,-1,172,168,171,-1,171,168,169,-1,169,170,171,-1,188,192,193,-1,193,189,188,-1,189,193,194,-1,194,190,189,-1,190,194,195,-1,195,191,190,-1,191,195,192,-1,192,188,191,-1,192,196,197,-1,197,193,192,-1,193,197,198,-1,198,194,193,-1,194,198,199,-1,199,195,194,-1,195,199,196,-1,196,192,195,-1,196,199,198,-1,198,197,196,-1,213,217,216,-1,216,212,213,-1,214,218,217,-1,217,213,214,-1,215,219,218,-1,218,214,215,-1,212,216,219,-1,219,215,212,-1,217,221,220,-1,220,216,217,-1,218,222,221,-1,221,217,218,-1,219,223,222,-1,222,218,219,-1,216,220,223,-1,223,219,216,-1,221,222,223,-1,223,220,221,-1],
            coord=Coordinate(USE='SKINCOORD')))]),],
      #  top-level joint references 
      joints=[
      HAnimJoint(USE='hanim_r_wrist'),
      HAnimJoint(USE='hanim_r_elbow'),
      HAnimJoint(USE='hanim_r_shoulder'),
      HAnimJoint(USE='hanim_l_wrist'),
      HAnimJoint(USE='hanim_l_elbow'),
      HAnimJoint(USE='hanim_l_shoulder'),
      HAnimJoint(USE='hanim_skullbase'),
      HAnimJoint(USE='hanim_vl5'),
      HAnimJoint(USE='hanim_r_midtarsal'),
      HAnimJoint(USE='hanim_r_ankle'),
      HAnimJoint(USE='hanim_r_knee'),
      HAnimJoint(USE='hanim_r_hip'),
      HAnimJoint(USE='hanim_l_midtarsal'),
      HAnimJoint(USE='hanim_l_ankle'),
      HAnimJoint(USE='hanim_l_knee'),
      HAnimJoint(USE='hanim_l_hip'),
      HAnimJoint(USE='hanim_HumanoidRoot')],
      #  top-level site references 
      sites=[
      HAnimSite(USE='hanim_l_middle_distal_tip'),
      HAnimSite(USE='hanim_r_middle_distal_tip'),
      HAnimSite(USE='hanim_skull_tip'),
      HAnimSite(USE='hanim_l_hand_tip'),
      HAnimSite(USE='hanim_r_hand_tip')],
      #  top-level segment references 
      segments=[
      HAnimSegment(USE='hanim_sacrum'),
      HAnimSegment(USE='hanim_l_thigh'),
      HAnimSegment(USE='hanim_l_calf'),
      HAnimSegment(USE='hanim_l_hindfoot'),
      HAnimSegment(USE='hanim_l_middistal'),
      HAnimSegment(USE='hanim_r_thigh'),
      HAnimSegment(USE='hanim_r_calf'),
      HAnimSegment(USE='hanim_r_hindfoot'),
      HAnimSegment(USE='hanim_r_middistal'),
      HAnimSegment(USE='hanim_l5'),
      HAnimSegment(USE='hanim_skull'),
      HAnimSegment(USE='hanim_l_upperarm'),
      HAnimSegment(USE='hanim_l_forearm'),
      HAnimSegment(USE='hanim_l_hand'),
      HAnimSegment(USE='hanim_r_upperarm'),
      HAnimSegment(USE='hanim_r_forearm'),
      HAnimSegment(USE='hanim_r_hand')],
      #  top-level viewpoint references 
      viewpoints=[
      Viewpoint(DEF='Inclined_View',description='Inclined View',orientation=(0,1,0,.78),position=(2,1,2)),
      Viewpoint(DEF='Best_View',description='Best View',orientation=(0,1,0,-1.57),position=(-2,.25,0)),
      Viewpoint(DEF='Front_View',description='Front View',position=(0,1,3)),
      Viewpoint(DEF='Side_View',description='Side View',orientation=(0,1,0,1.57),position=(3,1,0)),
      Viewpoint(DEF='Top_View',description='Top View',orientation=(1,0,0,-1.57),position=(0,3,0))]),
    # ExternProtoDeclare name='LOA1_WalkAnimation' url='"LOA1_WalkAnimation.wrl#LOA1_WalkAnimation" "http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/LOA1_WalkAnimation.wrl#LOA1_WalkAnimation" "http://h-anim.org/Models/H-Anim2001/boxman/protos/LOA1WalkAnimation.wrl#LOA1WalkAnimation" "LOA1_WalkAnimation.x3d#LOA1_WalkAnimation" "http://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/LOA1_WalkAnimation.x3d#LOA1_WalkAnimation" "http://h-anim.org/Models/H-Anim2001/boxman/protos/LOA1WalkAnimation.x3d#LOA1WalkAnimation"'>
      <field accessType='inputOutput' name='cycleInterval' type='SFTime'/>
      <field accessType='inputOutput' name='enabled' type='SFBool'/>
      <field accessType='inputOutput' name='loop' type='SFBool'/>
      <field accessType='inputOutput' name='startTime' type='SFTime'/>
      <field accessType='inputOutput' name='stopTime' type='SFTime'/>
      <field accessType='outputOnly' name='fraction_changed' type='SFFloat'/>
      <field accessType='outputOnly' name='HumanoidRoot_translation_changed' type='SFVec3f'/>
      <field accessType='outputOnly' name='HumanoidRoot_rotation_changed' type='SFRotation'/>
      <field accessType='outputOnly' name='l_hip_rotation_changed' type='SFRotation'/>
      <field accessType='outputOnly' name='l_knee_rotation_changed' type='SFRotation'/>
      <field accessType='outputOnly' name='l_ankle_rotation_changed' type='SFRotation'/>
      <field accessType='outputOnly' name='l_midtarsal_rotation_changed' type='SFRotation'/>
      <field accessType='outputOnly' name='r_hip_rotation_changed' type='SFRotation'/>
      <field accessType='outputOnly' name='r_knee_rotation_changed' type='SFRotation'/>
      <field accessType='outputOnly' name='r_ankle_rotation_changed' type='SFRotation'/>
      <field accessType='outputOnly' name='r_midtarsal_rotation_changed' type='SFRotation'/>
      <field accessType='outputOnly' name='vl5_rotation_changed' type='SFRotation'/>
      <field accessType='outputOnly' name='skullbase_rotation_changed' type='SFRotation'/>
      <field accessType='outputOnly' name='l_shoulder_rotation_changed' type='SFRotation'/>
      <field accessType='outputOnly' name='l_elbow_rotation_changed' type='SFRotation'/>
      <field accessType='outputOnly' name='l_wrist_rotation_changed' type='SFRotation'/>
      <field accessType='outputOnly' name='r_shoulder_rotation_changed' type='SFRotation'/>
      <field accessType='outputOnly' name='r_elbow_rotation_changed' type='SFRotation'/>
      <field accessType='outputOnly' name='r_wrist_rotation_changed' type='SFRotation'/>
      <field accessType='outputOnly' name='isActive' type='SFBool'/>
    </ExternProtoDeclare>
    <ProtoInstance DEF='ANIMATOR' name='LOA1_WalkAnimation'/
    Group(
      #  ROUTE information for TIMER node:  [from fraction_changed to HUMANOIDROOT_POSITION_ANIMATOR.set_fraction ] [from fraction_changed to HUMANOIDROOT_ANIMATOR.set_fraction ] [from fraction_changed to SACROILIAC_ANIMATOR.set_fraction ] [from fraction_changed to L_HIP_ANIMATOR.set_fraction ] [from fraction_changed to L_KNEE_ANIMATOR.set_fraction ] [from fraction_changed to L_ANKLE_ANIMATOR.set_fraction ] [from fraction_changed to L_MIDTARSAL_ANIMATOR.set_fraction ] [from fraction_changed to R_HIP_ANIMATOR.set_fraction ] [from fraction_changed to R_KNEE_ANIMATOR.set_fraction ] [from fraction_changed to R_ANKLE_ANIMATOR.set_fraction ] [from fraction_changed to R_MIDTARSAL_ANIMATOR.set_fraction ] [from fraction_changed to VL5_ANIMATOR.set_fraction ] [from fraction_changed to SKULLBASE_ANIMATOR.set_fraction ] [from fraction_changed to L_SHOULDER_ANIMATOR.set_fraction ] [from fraction_changed to L_ELBOW_ANIMATOR.set_fraction ] [from fraction_changed to L_WRIST_ANIMATOR.set_fraction ] [from fraction_changed to R_SHOULDER_ANIMATOR.set_fraction ] [from fraction_changed to R_ELBOW_ANIMATOR.set_fraction ] [from fraction_changed to R_WRIST_ANIMATOR.set_fraction ] 
      children=[
      TimeSensor(DEF='TIMER',cycleInterval=2,loop=True,
        # field name='cycleInterval' type='SFTime' value='2' accessType='inputOutput'/> 
<field name='enabled' type='SFBool' value='true' accessType='inputOutput'/> 
<field name='loop' type='SFBool' value='true' accessType='inputOutput'/> 
<field name='startTime' type='SFTime' value='0' accessType='inputOutput'/> 
<field name='stopTime' type='SFTime' value='-1' accessType='inputOutput'/!
        # IS>
<connect nodeField='cycleInterval' protoField='cycleInterval'/> 
<connect nodeField='enabled' protoField='enabled'/> 
<connect nodeField='loop' protoField='loop'/> 
<connect nodeField='startTime' protoField='startTime'/> 
<connect nodeField='stopTime' protoField='stopTime'/> 
<connect nodeField='fraction_changed' protoField='fraction_changed'/> 
<connect nodeField='isActive' protoField='isActive'/>
</IS
        ),
      #  ROUTE information for HUMANOIDROOT_POSITION_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      PositionInterpolator(DEF='HUMANOIDROOT_POSITION_ANIMATOR',key=[0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1],keyValue=[(0,-0.00928,0),(0,-0.003858,0),(0,-0.008847,0),(0,-0.01486,0),(0,-0.02641,0),(0,-0.03934,0),(0,-0.0502,0),(0,-0.07469,0),(0,-0.02732,0),(0,-0.01608,0),(0,-0.01129,0),(0,-0.005819,0),(0,-0.002004,0),(0,-0.002579,0),(0,-0.0143,0),(0,-0.03799,0),(0,-0.05648,0),(0,-0.045,0),(0,-0.00928,0)],
        # IS>
<connect nodeField='value_changed' protoField='HumanoidRoot_translation_changed'/>
</IS
        ),
      #  ROUTE information for HUMANOIDROOT_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      OrientationInterpolator(DEF='HUMANOIDROOT_ANIMATOR',key=[0,1],keyValue=[(0,1,0,0),(0,1,0,0)],
        # IS>
<connect nodeField='value_changed' protoField='HumanoidRoot_rotation_changed'/>
</IS
        ),
      #  ROUTE information for SACROILIAC_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      OrientationInterpolator(DEF='SACROILIAC_ANIMATOR',key=[0,0.5,1.0],keyValue=[(0.0,0.0,-1.0,0.1056),(0.0,0.0,1.0,0.09018),(0.0,0.0,-1.0,0.1056)],
        # IS>
<connect nodeField='value_changed' protoField='lower_body_rotation_changed'/>
</IS
        ),
      #  ROUTE information for L_HIP_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      OrientationInterpolator(DEF='L_HIP_ANIMATOR',key=[0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1],keyValue=[(-0.873,0.06094,0.484,0.2865),(0.9963,-0.01057,0.08481,0.2488),(0.9965,0.01591,-0.08222,0.3836),(-0.7018,-0.03223,-0.7117,0.1289),(-1,0,0,0.5518),(-0.9964,0.02231,0.0817,0.5351),(-0.9809,0.04912,0.1881,0.5204),(-0.873,0.06094,0.484,0.2865)],
        # IS>
<connect nodeField='value_changed' protoField='l_hip_rotation_changed'/>
</IS
        ),
      #  ROUTE information for L_KNEE_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      OrientationInterpolator(DEF='L_KNEE_ANIMATOR',key=[0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1],keyValue=[(1,0,0,0.3226),(1,0,0,0.1556),(1,0,0,0.08678),(1,0,0,0.8751),(1,0,0,1.131),(1,0,0,0.09961),(1,0,0,0.3942),(1,0,0,0.3226)],
        # IS>
<connect nodeField='value_changed' protoField='l_knee_rotation_changed'/>
</IS
        ),
      #  ROUTE information for L_ANKLE_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      OrientationInterpolator(DEF='L_ANKLE_ANIMATOR',key=[0,0.125,0.2083,0.375,0.6667,0.9167,1],keyValue=[(-1,0,0,0.06714),(-1,0,0,0.2152),(-1,0,0,0.3184),(-1,0,0,0.4717),(-1,0,0,0.2912),(1,0,0,0.1222),(-1,0,0,0.06714)],
        # IS>
<connect nodeField='value_changed' protoField='l_ankle_rotation_changed'/>
</IS
        ),
      #  ROUTE information for L_MIDTARSAL_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      OrientationInterpolator(DEF='L_MIDTARSAL_ANIMATOR',key=[0,0.5,1],keyValue=[(1,0,0,0),(1,0,0,-0.2),(1,0,0,0)],
        # IS>
<connect nodeField='value_changed' protoField='l_midtarsal_rotation_changed'/>
</IS
        ),
      #  ROUTE information for R_HIP_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      OrientationInterpolator(DEF='R_HIP_ANIMATOR',key=[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1],keyValue=[(-0.5831,0.03511,0.8116,0.1481),(-0.995,0.02296,0.09674,0.4683),(-1,0.00192,0.007964,0.4732),(-0.998,-0.0158,-0.06102,0.5079),(-0.9911,-0.03541,-0.1286,0.5419),(-0.9131,-0.06243,-0.403,0.3361),(-0.4306,-0.07962,-0.899,0.07038),(1,0,0,0.2571),(0.9891,-0.02805,0.1444,0.3879),(-0.5831,0.03511,0.8116,0.1481)],
        # IS>
<connect nodeField='value_changed' protoField='r_hip_rotation_changed'/>
</IS
        ),
      #  ROUTE information for R_KNEE_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      OrientationInterpolator(DEF='R_KNEE_ANIMATOR',key=[0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1],keyValue=[(1,0,0,0.8573),(1,0,0,0.8926),(1,0,0,0.5351),(1,0,0,0.1756),(1,0,0,0.1194),(1,0,0,0.3153),(1,-1.176e-08,-4.971e-09,0.09354),(1,0,0,0.08558),(1,0,0,0.2475),(1,0,0,0.8573)],
        # IS>
<connect nodeField='value_changed' protoField='r_knee_rotation_changed'/>
<IS
        ),
      #  ROUTE information for R_ANKLE_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      OrientationInterpolator(DEF='R_ANKLE_ANIMATOR',key=[0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.7917,0.9167,1],keyValue=[(0,0,1,0),(-1,0,0,0.3533),(-1,0,0,0.1072),(1,0,0,0.2612),(1,-1.641e-07,1.827e-08,0.1268),(-1,0,0,0.01793),(-1,0,0,0.05824),(-1,0,0,0.2398),(-1,0,0,0.35),(-1,0,0,0.3322),(0,0,1,0)],
        # IS>
<connect nodeField='value_changed' protoField='r_ankle_rotation_changed'/>
<IS
        ),
      #  ROUTE information for R_MIDTARSAL_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      OrientationInterpolator(DEF='R_MIDTARSAL_ANIMATOR',key=[0,0.5,1],keyValue=[(1,0,0,-0.2),(1,0,0,0),(1,0,0,-0.2)],
        # IS>
<connect nodeField='value_changed' protoField='r_midtarsal_rotation_changed'/>
<IS
        ),
      #  ROUTE information for VL5_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      OrientationInterpolator(DEF='VL5_ANIMATOR',key=[0,0.2083,0.375,0.75,0.8333,1],keyValue=[(0,1,0,0.0826),(-0.01972,-0.5974,0.8017,0.08231),(0.009296,-0.9648,0.2627,0.1734),(-0.01238,0.9549,-0.2968,0.08732),(-0.008125,0.9691,-0.2463,0.158),(0,1,0,0.0826)],
        # IS>
<connect nodeField='value_changed' protoField='vl5_rotation_changed'/>
<IS
        ),
      #  ROUTE information for SKULLBASE_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      OrientationInterpolator(DEF='SKULLBASE_ANIMATOR',key=[0.0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1.0],keyValue=[(0.0,-1.0,0.0,0.08642),(0.0,1.0,0.0,0.1825),(0.0,1.0,0.0,0.1505),(0.0,1.0,0.0,0.1053),(0.0,1.0,0.0,0.04391),(0.0,-1.0,0.0,0.03119),(0.0,-1.0,0.0,0.07936),(0.0,-1.0,0.0,0.1616),(0.0,-1.0,0.0,0.155),(0.0,-1.0,0.0,0.08642)],
        # IS>
<connect nodeField='value_changed' protoField='skullbase_rotation_changed'/>
<IS
        ),
      #  ROUTE information for L_SHOULDER_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      OrientationInterpolator(DEF='L_SHOULDER_ANIMATOR',key=[0,0.375,0.9167,1],keyValue=[(1,0,0,0.1189),(-1,-5.928e-07,1.525e-07,0.1861),(1,-2.038e-07,-1.257e-07,0.3357),(1,0,0,0.1189)],
        # IS>
<connect nodeField='value_changed' protoField='l_shoulder_rotation_changed'/>
<IS
        ),
      #  ROUTE information for L_ELBOW_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      OrientationInterpolator(DEF='L_ELBOW_ANIMATOR',key=[0,0.375,0.9167,1],keyValue=[(-1,-1.58298e-07,8.15967e-08,0.0659878),(-1,-3.28826e-08,-2.31665e-08,0.488383),(-1,3.06462e-06,-3.11947e-06,0.0177536),(-1,-1.58298e-07,8.15967e-08,0.0659878)],
        # IS>
<connect nodeField='value_changed' protoField='l_elbow_rotation_changed'/>
<IS
        ),
      #  ROUTE information for L_WRIST_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      OrientationInterpolator(DEF='L_WRIST_ANIMATOR',key=[0,0.375,0.9167,1],keyValue=[(1.51276e-06,-1,1.7724e-06,0.461076),(-0.330195,-0.927451,0.175516,0.538852),(0.0327774,-0.999314,-0.0172185,0.492033),(1.51276e-06,-1,1.7724e-06,0.461076)],
        # IS>
<connect nodeField='value_changed' protoField='l_wrist_rotation_changed'/>
<IS
        ),
      #  ROUTE information for R_SHOULDER_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      OrientationInterpolator(DEF='R_SHOULDER_ANIMATOR',key=[0,0.375,0.9167,1],keyValue=[(-1,-7.689e-07,-1.48e-07,0.09346),(1,5.004e-08,2.254e-08,0.3197),(-1,-1.104e-07,5.267e-10,0.1564),(-1,-7.689e-07,-1.48e-07,0.09346)],
        # IS>
<connect nodeField='value_changed' protoField='r_shoulder_rotation_changed'/>
<IS
        ),
      #  ROUTE information for R_ELBOW_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      OrientationInterpolator(DEF='R_ELBOW_ANIMATOR',key=[0,0.375,0.9167,1],keyValue=[(-1,-4.45619e-08,2.70318e-08,0.411508),(-1,8.16742e-07,-1.09556e-07,0.0925011),(-1,-2.47628e-08,-7.02862e-09,0.572568),(-1,-4.45619e-08,2.70318e-08,0.411508)],
        # IS>
<connect nodeField='value_changed' protoField='r_elbow_rotation_changed'/>
<IS
        ),
      #  ROUTE information for R_WRIST_ANIMATOR node:  [from TIMER.fraction_changed to set_fraction ] 
      OrientationInterpolator(DEF='R_WRIST_ANIMATOR',key=[0,0.375,0.9167,1],keyValue=[(-0.8129,0.4759,-0.3357,0.1346),(0.1533,-0.9878,0.02582,0.3902),(-0.5701,0.7604,-0.311,0.366),(-0.8129,0.4759,-0.3357,0.1346)],
        # IS>
<connect nodeField='value_changed' protoField='r_wrist_rotation_changed'/>
<IS
        )]),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='HUMANOIDROOT_POSITION_ANIMATOR',toField='set_fraction'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='HUMANOIDROOT_ANIMATOR',toField='set_fraction'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='SACROILIAC_ANIMATOR',toField='set_fraction'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='L_HIP_ANIMATOR',toField='set_fraction'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='L_KNEE_ANIMATOR',toField='set_fraction'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='L_ANKLE_ANIMATOR',toField='set_fraction'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='L_MIDTARSAL_ANIMATOR',toField='set_fraction'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='R_HIP_ANIMATOR',toField='set_fraction'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='R_KNEE_ANIMATOR',toField='set_fraction'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='R_ANKLE_ANIMATOR',toField='set_fraction'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='R_MIDTARSAL_ANIMATOR',toField='set_fraction'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='VL5_ANIMATOR',toField='set_fraction'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='SKULLBASE_ANIMATOR',toField='set_fraction'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='L_SHOULDER_ANIMATOR',toField='set_fraction'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='L_ELBOW_ANIMATOR',toField='set_fraction'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='L_WRIST_ANIMATOR',toField='set_fraction'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='R_SHOULDER_ANIMATOR',toField='set_fraction'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='R_ELBOW_ANIMATOR',toField='set_fraction'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='R_WRIST_ANIMATOR',toField='set_fraction'),
    #  Animation ROUTEs 
    ROUTE(fromField='value_changed',fromNode='HUMANOIDROOT_POSITION_ANIMATOR',toField='set_translation',toNode='hanim_HumanoidRoot'),
    ROUTE(fromField='value_changed',fromNode='HUMANOIDROOT_ANIMATOR',toField='set_rotation',toNode='hanim_HumanoidRoot'),
    ROUTE(fromField='value_changed',fromNode='L_HIP_ANIMATOR',toField='set_rotation',toNode='hanim_l_hip'),
    ROUTE(fromField='value_changed',fromNode='L_KNEE_ANIMATOR',toField='set_rotation',toNode='hanim_l_knee'),
    ROUTE(fromField='value_changed',fromNode='L_ANKLE_ANIMATOR',toField='set_rotation',toNode='hanim_l_ankle'),
    ROUTE(fromField='value_changed',fromNode='L_MIDTARSAL_ANIMATOR',toField='set_rotation',toNode='hanim_l_midtarsal'),
    ROUTE(fromField='value_changed',fromNode='R_HIP_ANIMATOR',toField='set_rotation',toNode='hanim_r_hip'),
    ROUTE(fromField='value_changed',fromNode='R_KNEE_ANIMATOR',toField='set_rotation',toNode='hanim_r_knee'),
    ROUTE(fromField='value_changed',fromNode='R_ANKLE_ANIMATOR',toField='set_rotation',toNode='hanim_r_ankle'),
    ROUTE(fromField='value_changed',fromNode='R_MIDTARSAL_ANIMATOR',toField='set_rotation',toNode='hanim_r_midtarsal'),
    ROUTE(fromField='value_changed',fromNode='VL5_ANIMATOR',toField='set_rotation',toNode='hanim_vl5'),
    ROUTE(fromField='value_changed',fromNode='SKULLBASE_ANIMATOR',toField='set_rotation',toNode='hanim_skullbase'),
    ROUTE(fromField='value_changed',fromNode='L_SHOULDER_ANIMATOR',toField='set_rotation',toNode='hanim_l_shoulder'),
    ROUTE(fromField='value_changed',fromNode='L_ELBOW_ANIMATOR',toField='set_rotation',toNode='hanim_l_elbow'),
    ROUTE(fromField='value_changed',fromNode='L_WRIST_ANIMATOR',toField='set_rotation',toNode='hanim_l_wrist'),
    ROUTE(fromField='value_changed',fromNode='R_SHOULDER_ANIMATOR',toField='set_rotation',toNode='hanim_r_shoulder'),
    ROUTE(fromField='value_changed',fromNode='R_ELBOW_ANIMATOR',toField='set_rotation',toNode='hanim_r_elbow'),
    ROUTE(fromField='value_changed',fromNode='R_WRIST_ANIMATOR',toField='set_rotation',toNode='hanim_r_wrist'),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='hanim_skullbase_displacer',toField='weight')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BoxMan.py")