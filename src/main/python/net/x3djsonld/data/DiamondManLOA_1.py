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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    component(level=1,name='H-Anim'),
    meta(content='DiamondManLOA_1.x3d',name='title'),
    meta(content='HAnim skeletal structure for Level of Action (LOA) one, with diamonds at the Joint centers. LOA-1 is typical low-end real-time 3D hierarchy.',name='description'),
    meta(content='Matthew T. Beitler',name='creator'),
    meta(content='Joel S. Pawloski',name='translator'),
    meta(content='12 November 2001',name='created'),
    meta(content='13 March 2021',name='modified'),
    meta(content='images/BonesAllSkeletonFrontViewLOA1.png',name='Image'),
    meta(content='(a) "Diamonds are a girl\'s best friend." (b) "Gosh, it sure is chilly in here."',name='motto'),
    meta(content='Still needs comments on CAESAR feature points inserted',name='warning'),
    meta(content='HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Two',name='reference'),
    meta(content='http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa',name='reference'),
    meta(content='http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1.wrl',name='reference'),
    meta(content='http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA1-diamond.wrl',name='reference'),
    meta(content='http://ece.uwaterloo.ca/~HAnim',name='reference'),
    meta(content='http://www.cis.upenn.edu/~badler/anthro/89-71.pdf',name='reference'),
    meta(content='http://www.cis.upenn.edu/~badler/anthro/89-71.ps',name='reference'),
    meta(content='http://www.cis.upenn.edu/~beitler',name='reference'),
    meta(content='humanoid_landmark_locations.gif',name='Image'),
    meta(content='http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif',name='Image'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA_1.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 1 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"],title='HANIM 1.1 Default Joint Centers, LOA1'),
    NavigationInfo(speed=1.5),
    Viewpoint(centerOfRotation=(0,1,0),description='Diamond Man, LOA 1',position=(0,1,3)),
    HAnimHumanoid(DEF='hanim_humanoid',name='humanoid',version='1.0',
      metadata=MetadataSet(name='HAnimHumanoid.info',reference='https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid',
        value=[
        MetadataString(name='authorEmail',value=['beitler@graphics.cis.upenn.edu beitler@acm.org']),
        MetadataString(name='authorName',value=['Matthew T. Beitler']),
        MetadataString(name='copyright',value=['Copyright 1999 Matthew T. Beitler']),
        MetadataString(name='humanoidVersion',value=['JointCenters 1.1 LOA1']),
        MetadataString(name='usageRestrictions',value=['PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose.'])]),
      skeleton=[
      HAnimJoint(DEF='hanim_HumanoidRoot',center=(0.0,0.8240,0.0277),name='HumanoidRoot',stiffness=[0,0,0],
        children=[
        HAnimJoint(DEF='hanim_sacroiliac',center=(0.0,0.9149,0.0016),name='sacroiliac',stiffness=[0,0,0],
          children=[
          HAnimSegment(DEF='hanim_pelvis',name='pelvis',
            children=[
            Transform(translation=(0.0,0.9149,0.0016),
              children=[
              Shape(DEF='DiamondShape',
                geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1],creaseAngle=0.5,
                  coord=Coordinate(DEF='points',point=[(0,0.01,0),(-0.01,0,0),(0,0,0.01),(0.01,0,0),(0,0,-0.01),(0,-0.01,0)])),
                appearance=Appearance(
                  material=Material(diffuseColor=(1,1,0))))])]),
          HAnimJoint(DEF='hanim_l_hip',center=(0.0961,0.9124,-0.0001),name='l_hip',stiffness=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_l_thigh',name='l_thigh',
              children=[
              Transform(translation=(0.0961,0.9124,-0.0001),
                children=[
                Shape(USE='DiamondShape')]),
              HAnimSite(DEF='hanim_l_knee_crease_pt',name='l_knee_crease_pt',translation=(0.0993,0.4881,-0.0309)),
              HAnimSite(DEF='hanim_l_femoral_lateral_epicn_pt',name='l_femoral_lateral_epicn_pt',translation=(0.1598,0.4967,0.0297)),
              HAnimSite(DEF='hanim_l_femoral_medial_epicn_pt',name='l_femoral_medial_epicn_pt',translation=(0.0398,0.4946,0.0303))]),
            HAnimJoint(DEF='hanim_l_knee',center=(0.1040,0.4867,0.0308),name='l_knee',stiffness=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_l_calf',name='l_calf',
                children=[
                Transform(translation=(0.1040,0.4867,0.0308),
                  children=[
                  Shape(USE='DiamondShape')])]),
              HAnimJoint(DEF='hanim_l_ankle',center=(0.1101,0.0656,-0.0736),name='l_ankle',stiffness=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_l_hindfoot',name='l_hindfoot',
                  children=[
                  Transform(translation=(0.1101,0.0656,-0.0736),
                    children=[
                    Shape(USE='DiamondShape')]),
                  HAnimSite(DEF='hanim_l_lateral_malleolus_pt',name='l_lateral_malleolus_pt',translation=(0.1308,0.0597,-0.1032)),
                  HAnimSite(DEF='hanim_l_medial_malleolus_pt',name='l_medial_malleolus_pt',translation=(0.0890,0.0716,-0.0881)),
                  HAnimSite(DEF='hanim_l_sphyrion_pt',name='l_sphyrion_pt',translation=(0.0890,0.0575,-0.0943)),
                  HAnimSite(DEF='hanim_l_calcaneous_post_pt',name='l_calcaneous_post_pt',translation=(0.0974,0.0259,-0.1171))]),
                HAnimJoint(DEF='hanim_l_midtarsal',center=(0.1086,0.0001,0.0368),name='l_midtarsal',stiffness=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_l_middistal',name='l_middistal',
                    children=[
                    HAnimSite(DEF='hanim_l_middistal_tip',name='l_middistal_tip',translation=(0.1354,0.0016,0.1476)),
                    HAnimSite(DEF='hanim_l_metatarsal_pha5_pt',name='l_metatarsal_pha5_pt',translation=(0.1825,0.0070,0.0928)),
                    HAnimSite(DEF='hanim_l_metatarsal_pha1_pt',name='l_metatarsal_pha1_pt',translation=(0.0816,0.0232,0.0106)),
                    HAnimSite(DEF='hanim_l_digit2_pt',name='l_digit2_pt',translation=(0.1195,0.0079,0.1433))])])])])]),
          HAnimJoint(DEF='hanim_r_hip',center=(-0.0950,0.9171,0.0029),name='r_hip',stiffness=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_r_thigh',name='r_thigh',
              children=[
              Transform(translation=(-0.0950,0.9171,0.0029),
                children=[
                Shape(USE='DiamondShape')]),
              HAnimSite(DEF='hanim_r_knee_crease_pt',name='r_knee_crease_pt',translation=(-0.0825,0.4932,-0.0326)),
              HAnimSite(DEF='hanim_r_femoral_lateral_epicn_pt',name='r_femoral_lateral_epicn_pt',translation=(-0.1421,0.4992,0.0310)),
              HAnimSite(DEF='hanim_r_femoral_medial_epicn_pt',name='r_femoral_medial_epicn_pt',translation=(-0.0221,0.5014,0.0289))]),
            HAnimJoint(DEF='hanim_r_knee',center=(-0.0867,0.4913,0.0318),name='r_knee',stiffness=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_r_calf',name='r_calf',
                children=[
                Transform(translation=(-0.0867,0.4913,0.0318),
                  children=[
                  Shape(USE='DiamondShape')])]),
              HAnimJoint(DEF='hanim_r_ankle',center=(-0.0801,0.0712,-0.0766),name='r_ankle',stiffness=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_r_hindfoot',name='r_hindfoot',
                  children=[
                  Transform(translation=(-0.0801,0.0712,-0.0766),
                    children=[
                    Shape(USE='DiamondShape')]),
                  HAnimSite(DEF='hanim_r_lateral_malleolus_pt',name='r_lateral_malleolus_pt',translation=(-0.1006,0.0658,-0.1075)),
                  HAnimSite(DEF='hanim_r_medial_malleolus_pt',name='r_medial_malleolus_pt',translation=(-0.0591,0.0760,-0.0928)),
                  HAnimSite(DEF='hanim_r_sphyrion_pt',name='r_sphyrion_pt',translation=(-0.0603,0.0610,-0.1002)),
                  HAnimSite(DEF='hanim_r_calcaneous_post_pt',name='r_calcaneous_post_pt',translation=(-0.0692,0.0297,-0.1221))]),
                HAnimJoint(DEF='hanim_r_midtarsal',center=(-0.0801,0.0,0.0368),name='r_midtarsal',stiffness=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_r_middistal',name='r_middistal',
                    children=[
                    HAnimSite(DEF='hanim_r_middistal_tip',name='r_middistal_tip',translation=(-0.1043,-0.0227,0.1450)),
                    HAnimSite(DEF='hanim_r_metatarsal_pha5_pt',name='r_metatarsal_pha5_pt',translation=(-0.1523,0.0166,0.0895)),
                    HAnimSite(DEF='hanim_r_metatarsal_pha1_pt',name='r_metatarsal_pha1_pt',translation=(-0.0521,0.0260,0.0127)),
                    HAnimSite(DEF='hanim_r_digit2_pt',name='r_digit2_pt',translation=(-0.0883,0.0134,0.1383))])])])])])]),
        HAnimJoint(DEF='hanim_vl1',center=(-0.00405,1.07,-0.0275),name='vl1',stiffness=[0,0,0],
          children=[
          HAnimSegment(DEF='hanim_l1',name='l1'),
          HAnimJoint(DEF='hanim_l_shoulder',center=(0.2029,1.4376,-0.0387),name='l_shoulder',stiffness=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_l_upperarm',name='l_upperarm',
              children=[
              Transform(translation=(0.2029,1.4376,-0.0387),
                children=[
                Shape(USE='DiamondShape')]),
              Transform(DEF='l_upperarm_adjust',center=(0.182,1.22,-0.047),rotation=(1,0,0,0.119),translation=(0.2029,1.4376,-0.0387)),
              HAnimSite(DEF='hanim_l_humeral_lateral_epicn_pt',name='l_humeral_lateral_epicn_pt',translation=(0.2280,1.1482,-0.1100))]),
            HAnimJoint(DEF='hanim_l_elbow',center=(0.2014,1.1357,-0.0682),name='l_elbow',stiffness=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_l_forearm',name='l_forearm',
                children=[
                Transform(translation=(0.2014,1.1357,-0.0682),
                  children=[
                  Shape(USE='DiamondShape')]),
                Transform(DEF='l_forearm_adjust',center=(0.198,0.961,-0.0405),rotation=(-1,0,0,0.1),translation=(0.2014,1.1357,-0.0682)),
                HAnimSite(DEF='hanim_l_radial_styloid_pt',name='l_radial_styloid_pt',translation=(0.1901,0.8645,-0.0415)),
                HAnimSite(DEF='hanim_l_olecranon_pt',name='l_olecranon_pt',translation=(-0.1962,1.1375,-0.1123)),
                HAnimSite(DEF='hanim_l_humeral_medial_epicn_pt',name='l_humeral_medial_epicn_pt',translation=(0.1735,1.1272,-0.1113)),
                HAnimSite(DEF='hanim_l_radiale_pt',name='l_radiale_pt',translation=(0.2182,1.1212,-0.1167))]),
              HAnimJoint(DEF='hanim_l_wrist',center=(0.1984,0.8663,-0.0583),name='l_wrist',stiffness=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_l_hand',name='l_hand',
                  children=[
                  Transform(translation=(0.1984,0.8663,-0.0583),
                    children=[
                    Shape(USE='DiamondShape')]),
                  Transform(DEF='l_hand_adjust',center=(0.213,0.811,-0.0338),rotation=(-0.06361,-0.9967,0.04988,1.333),translation=(0.1984,0.8663,-0.0583)),
                  HAnimSite(DEF='hanim_l_hand_tip',name='l_hand_tip',translation=(0.2080,0.6731,-0.0491)),
                  HAnimSite(DEF='hanim_l_metacarpal_pha2_pt',name='l_metacarpal_pha2_pt',translation=(0.2009,0.8139,-0.0237)),
                  HAnimSite(DEF='hanim_l_dactylion_pt',name='l_dactylion_pt',translation=(0.2056,0.6743,-0.0482)),
                  HAnimSite(DEF='hanim_l_ulnar_styloid_pt',name='l_ulnar_styloid_pt',translation=(-0.2142,0.8529,-0.0648)),
                  HAnimSite(DEF='hanim_l_metacarpal_pha5_pt',name='l_metacarpal_pha5_pt',translation=(0.1929,0.7860,-0.1122))])])])]),
          HAnimJoint(DEF='hanim_r_shoulder',center=(-0.1907,1.4407,-0.0325),name='r_shoulder',stiffness=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_r_upperarm',name='r_upperarm',
              children=[
              Transform(translation=(-0.1907,1.4407,-0.0325),
                children=[
                Shape(USE='DiamondShape')]),
              Transform(DEF='r_upperarm_adjust',center=(-0.182,1.22,-0.047),rotation=(1,0,0,0.0836),translation=(-0.1907,1.4407,-0.0325)),
              HAnimSite(DEF='hanim_r_humeral_lateral_epicn_pt',name='r_humeral_lateral_epicn_pt',translation=(-0.2224,1.1517,-0.1033))]),
            HAnimJoint(DEF='hanim_r_elbow',center=(-0.1949,1.1388,-0.0620),name='r_elbow',stiffness=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_r_forearm',name='r_forearm',
                children=[
                Transform(translation=(-0.1949,1.1388,-0.0620),
                  children=[
                  Shape(USE='DiamondShape')]),
                Transform(DEF='r_forearm_adjust',center=(-0.198,0.961,-0.0397),rotation=(-1,0,0,0.1254),translation=(-0.1949,1.1388,-0.0620)),
                HAnimSite(DEF='hanim_r_radial_styloid_pt',name='r_radial_styloid_pt',translation=(-0.1884,0.8676,-0.0360)),
                HAnimSite(DEF='hanim_r_olecranon_pt',name='r_olecranon_pt',translation=(-0.1907,1.1405,-0.1065)),
                HAnimSite(DEF='hanim_r_humeral_medial_epicn_pt',name='r_humeral_medial_epicn_pt',translation=(-0.1680,1.1298,-0.1062)),
                HAnimSite(DEF='hanim_r_radiale_pt',name='r_radiale_pt',translation=(-0.2130,1.1305,-0.1091))]),
              HAnimJoint(DEF='hanim_r_wrist',center=(-0.1959,0.8694,-0.0521),name='r_wrist',stiffness=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_r_hand',name='r_hand',
                  children=[
                  Transform(translation=(-0.1959,0.8694,-0.0521),
                    children=[
                    Shape(USE='DiamondShape')]),
                  Transform(DEF='r_hand_adjust',center=(-0.217,0.811,-0.0338),rotation=(-0.09024,0.994,-0.0624,1.216)),
                  HAnimSite(DEF='hanim_r_hand_tip',name='r_hand_tip',translation=(-0.1969,0.6758,-0.0427)),
                  HAnimSite(DEF='hanim_r_metacarpal_pha2_pt',name='r_metacarpal_pha2_pt',translation=(-0.1977,0.8169,-0.0177)),
                  HAnimSite(DEF='hanim_r_dactylion_pt',name='r_dactylion_pt',translation=(-0.1941,0.6772,-0.0423)),
                  HAnimSite(DEF='hanim_r_ulnar_styloid_pt',name='r_ulnar_styloid_pt',translation=(-0.2117,0.8562,-0.0584)),
                  HAnimSite(DEF='hanim_r_metacarpal_pha5_pt',name='r_metacarpal_pha5_pt',translation=(-0.1929,0.7890,-0.1064))])])])]),
          HAnimJoint(DEF='hanim_vc4',center=(0,1.43,-0.0458),name='vc4',stiffness=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_c4',name='c4')])]),
        HAnimJoint(DEF='hanim_vl5',center=(0.0028,1.0568,-0.0776),name='vl5',stiffness=[0,0,0],
          children=[
          HAnimJoint(DEF='hanim_skullbase',center=(0.0044,1.6209,0.0236),name='skullbase',stiffness=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_skull',name='skull',
              children=[
              Transform(translation=(0.0044,1.6209,0.0236),
                children=[
                Shape(USE='DiamondShape')]),
              HAnimSite(DEF='hanim_skull_tip',name='skull_tip',translation=(0.0050,1.7504,0.0055)),
              HAnimSite(DEF='hanim_sellion_pt',name='sellion_pt',translation=(0.0058,1.6316,0.0852)),
              HAnimSite(DEF='hanim_r_infraorbitale_pt',name='r_infraorbitale_pt',translation=(-0.0237,1.6171,0.0752)),
              HAnimSite(DEF='hanim_l_infraorbitale_pt',name='l_infraorbitale_pt',translation=(0.0341,1.6171,0.0752)),
              HAnimSite(DEF='hanim_supramenton_pt',name='supramenton_pt',translation=(0.0061,1.5410,0.0805)),
              HAnimSite(DEF='hanim_r_tragion_pt',name='r_tragion_pt',translation=(-0.0646,1.6347,0.0302)),
              HAnimSite(DEF='hanim_r_gonion_pt',name='r_gonion_pt',translation=(-0.0520,1.5529,0.0347)),
              HAnimSite(DEF='hanim_l_tragion_pt',name='l_tragion_pt',translation=(0.0739,1.6348,0.0282)),
              HAnimSite(DEF='hanim_l_gonion_pt',name='l_gonion_pt',translation=(0.0631,1.5530,0.0330)),
              HAnimSite(DEF='hanim_nuchale_pt',name='nuchale_pt',translation=(0.0039,1.5972,-0.0796))])])])]),],
      sites=[
      HAnimSite(USE='hanim_skull_tip'),
      HAnimSite(USE='hanim_sellion_pt'),
      HAnimSite(USE='hanim_supramenton_pt'),
      HAnimSite(USE='hanim_nuchale_pt'),
      HAnimSite(USE='hanim_l_calcaneous_post_pt'),
      HAnimSite(USE='hanim_r_calcaneous_post_pt'),
      HAnimSite(USE='hanim_l_dactylion_pt'),
      HAnimSite(USE='hanim_r_dactylion_pt'),
      HAnimSite(USE='hanim_l_digit2_pt'),
      HAnimSite(USE='hanim_r_digit2_pt'),
      HAnimSite(USE='hanim_l_femoral_lateral_epicn_pt'),
      HAnimSite(USE='hanim_r_femoral_lateral_epicn_pt'),
      HAnimSite(USE='hanim_l_femoral_medial_epicn_pt'),
      HAnimSite(USE='hanim_r_femoral_medial_epicn_pt'),
      HAnimSite(USE='hanim_r_gonion_pt'),
      HAnimSite(USE='hanim_l_gonion_pt'),
      HAnimSite(USE='hanim_l_hand_tip'),
      HAnimSite(USE='hanim_r_hand_tip'),
      HAnimSite(USE='hanim_l_humeral_lateral_epicn_pt'),
      HAnimSite(USE='hanim_r_humeral_lateral_epicn_pt'),
      HAnimSite(USE='hanim_l_humeral_medial_epicn_pt'),
      HAnimSite(USE='hanim_r_humeral_medial_epicn_pt'),
      HAnimSite(USE='hanim_r_infraorbitale_pt'),
      HAnimSite(USE='hanim_l_infraorbitale_pt'),
      HAnimSite(USE='hanim_l_knee_crease_pt'),
      HAnimSite(USE='hanim_r_knee_crease_pt'),
      HAnimSite(USE='hanim_l_lateral_malleolus_pt'),
      HAnimSite(USE='hanim_r_lateral_malleolus_pt'),
      HAnimSite(USE='hanim_l_medial_malleolus_pt'),
      HAnimSite(USE='hanim_r_medial_malleolus_pt'),
      HAnimSite(USE='hanim_l_metacarpal_pha2_pt'),
      HAnimSite(USE='hanim_r_metacarpal_pha2_pt'),
      HAnimSite(USE='hanim_l_metacarpal_pha5_pt'),
      HAnimSite(USE='hanim_r_metacarpal_pha5_pt'),
      HAnimSite(USE='hanim_l_metatarsal_pha1_pt'),
      HAnimSite(USE='hanim_r_metatarsal_pha1_pt'),
      HAnimSite(USE='hanim_l_metatarsal_pha5_pt'),
      HAnimSite(USE='hanim_r_metatarsal_pha5_pt'),
      HAnimSite(USE='hanim_l_middistal_tip'),
      HAnimSite(USE='hanim_r_middistal_tip'),
      HAnimSite(USE='hanim_l_olecranon_pt'),
      HAnimSite(USE='hanim_r_olecranon_pt'),
      HAnimSite(USE='hanim_l_radial_styloid_pt'),
      HAnimSite(USE='hanim_r_radial_styloid_pt'),
      HAnimSite(USE='hanim_l_radiale_pt'),
      HAnimSite(USE='hanim_r_radiale_pt'),
      HAnimSite(USE='hanim_l_sphyrion_pt'),
      HAnimSite(USE='hanim_r_sphyrion_pt'),
      HAnimSite(USE='hanim_r_tragion_pt'),
      HAnimSite(USE='hanim_l_tragion_pt'),
      HAnimSite(USE='hanim_l_ulnar_styloid_pt'),
      HAnimSite(USE='hanim_r_ulnar_styloid_pt')],
      viewpoints=[
      HAnimSite(DEF='hanim_DiamondManLOA_1_view',name='DiamondManLOA_1_view',
        children=[
        Viewpoint(DEF='InclinedView',description='Inclined View',orientation=(-0.113,0.993,0.0347,0.671),position=(1.62,1.05,2.06)),
        Viewpoint(DEF='FrontView',description='Front View',position=(0,0.854,2.57665)),
        Viewpoint(DEF='SideView',description='Side View',orientation=(0,1,0,1.57079),position=(2.5929,0.854,0)),
        Viewpoint(DEF='TopView',description='Top View',orientation=(1,0,0,-1.57079),position=(0,3.4495,0))]),],
      #  HAnimHumanoid original info='"authorEmail=beitler@graphics.cis.upenn.edu beitler@acm.org" "authorName=Matthew T. Beitler" "copyright=Copyright 1999 Matthew T. Beitler" "humanoidVersion=JointCenters 1.1 LOA1" "usageRestrictions=PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."' 
      joints=[
      HAnimJoint(USE='hanim_HumanoidRoot',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_sacroiliac',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_vl1',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_vc4',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_skullbase',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_vl5',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_l_ankle',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_r_ankle',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_l_elbow',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_r_elbow',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_l_hip',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_r_hip',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_l_knee',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_r_knee',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_l_midtarsal',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_r_midtarsal',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_l_shoulder',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_r_shoulder',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_l_wrist',stiffness=[0,0,0]),
      HAnimJoint(USE='hanim_r_wrist',stiffness=[0,0,0])],
      segments=[
      HAnimSegment(USE='hanim_pelvis'),
      HAnimSegment(USE='hanim_l1'),
      HAnimSegment(USE='hanim_c4'),
      HAnimSegment(USE='hanim_skull'),
      HAnimSegment(USE='hanim_l_calf'),
      HAnimSegment(USE='hanim_r_calf'),
      HAnimSegment(USE='hanim_l_forearm'),
      HAnimSegment(USE='hanim_r_forearm'),
      HAnimSegment(USE='hanim_l_hand'),
      HAnimSegment(USE='hanim_r_hand'),
      HAnimSegment(USE='hanim_l_hindfoot'),
      HAnimSegment(USE='hanim_r_hindfoot'),
      HAnimSegment(USE='hanim_l_middistal'),
      HAnimSegment(USE='hanim_r_middistal'),
      HAnimSegment(USE='hanim_l_thigh'),
      HAnimSegment(USE='hanim_r_thigh'),
      HAnimSegment(USE='hanim_l_upperarm'),
      HAnimSegment(USE='hanim_r_upperarm')],)])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DiamondManLOA_1.py")
