####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python HAnim2SpecificationLOA3Invisible.py
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
    meta(content='HAnim2SpecificationLOA3Invisible.x3d',name='title'),
    meta(content='HAnim Specification reference example providing full coverage (and no illustrated visibility) of all specified HAnim constructs, also suitable for re-use as an authoring template.',name='description'),
    meta(content='https://www.web3d.org/files/specifications/19774/V1.0/HAnim/BodyDimensionsAndLOAs.html#LOA3ExampleSourceWithDiamonds',name='reference'),
    meta(content='24 April 2013',name='created'),
    meta(content='23 December 2021',name='modified'),
    meta(content='Matthew T. Beitler, Joe D. Williams, Don Brutzman',name='creator'),
    meta(content='HAnim2SpecificationLOA3Illustrated.x3d',name='reference'),
    meta(content='HAnim2SpecificationLOA3Animation.x3d',name='reference'),
    meta(content='HAnimSpecificationExampleChangeLog.txt',name='reference'),
    meta(content='images/BonesAllSkeletonFrontViewLOA1.png',name='Image'),
    meta(content='images/BonesAllSkeletonFrontViewLOA2.png',name='Image'),
    meta(content='images/BonesAllSkeletonFrontViewLOA3.png',name='Image'),
    meta(content='move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations',name='TODO'),
    meta(content='insert MetadataInteger nodes indicating LOA for each Joint and Segment',name='TODO'),
    meta(content='Norman Badler et al., ANTHROPOMETRY FOR COMPUTER GRAPHICS HUMAN FIGURES, University of Pennsylvania, 1989.',name='reference'),
    meta(content='http://www.cis.upenn.edu/~badler/anthro/89-71.ps',name='reference'),
    meta(content='tables/AnthropometryForComputerGraphicsHumanFigures89-71.pdf',name='reference'),
    meta(content='Don Brutzman and Joe Williams',name='translator'),
    meta(content='BS Contact Geo 8.001, http://www.bitmanagement.de/en/products/interactive-3d-clients/bs-contact-geo',name='generator'),
    meta(content='originals/LOA3ExampleSourceWithDiamondsOriginal.wrl',name='reference'),
    meta(content='originals/LOA3ExampleSourceWithDiamondsOriginal.x3d',name='reference'),
    meta(content='originals/LOA3ExampleSourceWithDiamondsOriginalBsContactExport.x3d',name='reference'),
    meta(content='HAnim Specification Table 4.4 - Face Joint object names, https://www.web3d.org/files/specifications/19774/V1.0/HAnim/concepts.html#FaceJointObjectNames',name='reference'),
    meta(content='X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit',name='generator'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Specifications/HAnim2SpecificationLOA3Invisible.x3d',name='identifier'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.3,0.3,0.3)]),
    NavigationInfo(),
    Group(DEF='Original_WorldInfo',
      children=[
      WorldInfo(info=[" HANIM 200x Default Joint Centers, Level-Of-Articulation 3 HANIM 200x (VRML97) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 200x (VRML97) Author email: beitler@cis.upenn.edu or beitler@acm.org HANIM 200x (VRML97) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 200x (VRML97) Compliance Date: August 12, 2003 HANIM 200x Compliance Information: http://HAnim.org/Specifications/HAnim200x Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps "],title='HANIM 200x Default Joint Centers, LOA3')]),
    #  TODO move viewpoints to be internal to HAnimHumanoid 
    #  Viewpoint centerOfRotation="0 0.9149 0.0016" matches initial at-rest locaton of the sacroliac. Note that these viewpoints are external to the HAnimHumanoid and do not move with the human. 
    Viewpoint(centerOfRotation=(0,0.9149,0.0016),description='Humanoid LOA 3 Front',position=(0,0.4,4)),
    Viewpoint(centerOfRotation=(0,0.9149,0.0016),description='Humanoid LOA 3 Front Close',position=(0,0.8,2)),
    Viewpoint(centerOfRotation=(0,0.9149,0.0016),description='Humanoid LOA 3 Front Closer',position=(0,1.2,1)),
    Viewpoint(centerOfRotation=(0,1.5,0.0016),description='Humanoid LOA 3 Front Face',position=(0,1.63,1)),
    Viewpoint(centerOfRotation=(0,0.9149,0.0016),description='Humanoid LOA 3 Right Side',orientation=(0,1,0,1.5708),position=(2.6,0.8,0)),
    Viewpoint(centerOfRotation=(0,0.9149,0.0016),description='Humanoid LOA 3 Right Side Close',orientation=(0,1,0,1.2),position=(1,0.8,0.5)),
    Viewpoint(centerOfRotation=(0,0.9149,0.0016),description='Humanoid LOA 3 Left Side Close',orientation=(0,1,0,-1.2),position=(-1,0.8,0.5)),
    Viewpoint(centerOfRotation=(0,0.9149,0.0016),description='Humanoid LOA 3 Left Side',orientation=(0,1,0,-1.5708),position=(-2.6,0.8,0)),
    Viewpoint(centerOfRotation=(0,0.9149,0.0016),description='Humanoid LOA 3 Top',orientation=(1,0,0,-1.5708),position=(0,3.5,0)),
    HAnimHumanoid(DEF='hanim_humanoid',loa=3,name='humanoid',version='2.0',
      metadata=MetadataSet(name='HAnimHumanoid.info',reference='https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid',
        value=[
        MetadataString(name='authorName',value=['Matthew T. Beitler Joe D. Williams Don Brutzman']),
        MetadataString(name='authorEmail',value=['HAnim@web3D.org']),
        MetadataString(name='copyright',value=['none']),
        MetadataString(name='creationDate',value=['12 May 1999']),
        MetadataFloat(name='height',value=[1.7504]),
        MetadataString(name='humanoidVersion',value=['2.0']),
        MetadataString(name='usageRestrictions',value=['none'])]),
      skeleton=[
      HAnimJoint(DEF='hanim_humanoid_root',center=(0,0.824,0.0277),name='humanoid_root',ulimit=[0,0,0],llimit=[0,0,0],
        children=[
        HAnimSegment(DEF='hanim_sacrum',name='sacrum'),
        HAnimJoint(DEF='hanim_sacroiliac',center=(0,0.9149,0.0016),name='sacroiliac',ulimit=[0,0,0],llimit=[0,0,0],
          children=[
          HAnimSegment(DEF='hanim_pelvis',name='pelvis',
            children=[
            HAnimSite(DEF='hanim_r_iliocristale_pt',name='r_iliocristale_pt',translation=(-0.1525,1.0628,0.0035)),
            HAnimSite(DEF='hanim_r_trochanterion_pt',name='r_trochanterion_pt',translation=(-0.1689,0.8419,0.0352)),
            HAnimSite(DEF='hanim_l_iliocristale_pt',name='l_iliocristale_pt',translation=(0.1612,1.0537,0.0008)),
            HAnimSite(DEF='hanim_l_trochanterion_pt',name='l_trochanterion_pt',translation=(0.1677,0.8336,0.0303)),
            HAnimSite(DEF='hanim_r_asis_pt',name='r_asis_pt',translation=(-0.0887,1.0021,0.1112)),
            HAnimSite(DEF='hanim_l_asis_pt',name='l_asis_pt',translation=(0.0925,0.9983,0.1052)),
            HAnimSite(DEF='hanim_r_psis_pt',name='r_psis_pt',translation=(-0.0716,1.019,-0.1138)),
            HAnimSite(DEF='hanim_l_psis_pt',name='l_psis_pt',translation=(0.0774,1.019,-0.1151)),
            HAnimSite(DEF='hanim_crotch_pt',name='crotch_pt',translation=(0.0034,0.8266,0.0257))]),
          HAnimJoint(DEF='hanim_l_hip',center=(0.0961,0.9124,-0.0001),name='l_hip',ulimit=[0,0,0],llimit=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_l_thigh',name='l_thigh',
              children=[
              HAnimSite(DEF='hanim_l_knee_crease_pt',name='l_knee_crease_pt',translation=(0.0993,0.4881,-0.0309)),
              HAnimSite(DEF='hanim_l_femoral_lateral_epicondyle_pt',name='l_femoral_lateral_epicondyle_pt',translation=(0.1598,0.4967,0.0297)),
              HAnimSite(DEF='hanim_l_femoral_medial_epicondyle_pt',name='l_femoral_medial_epicondyle_pt',translation=(0.0398,0.4946,0.0303))]),
            HAnimJoint(DEF='hanim_l_knee',center=(0.104,0.4867,0.0308),name='l_knee',ulimit=[0,0,0],llimit=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_l_calf',name='l_calf'),
              HAnimJoint(DEF='hanim_l_talocrural',center=(0.1101,0.0656,-0.0736),name='l_talocrural',ulimit=[0,0,0],llimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_l_talus',name='l_talus',
                  children=[
                  HAnimSite(DEF='hanim_l_lateral_malleolus_pt',name='l_lateral_malleolus_pt',translation=(0.1308,0.0597,-0.1032)),
                  HAnimSite(DEF='hanim_l_medial_malleolus_pt',name='l_medial_malleolus_pt',translation=(0.089,0.0716,-0.0881)),
                  HAnimSite(DEF='hanim_l_sphyrion_pt',name='l_sphyrion_pt',translation=(0.089,0.0575,-0.0943)),
                  HAnimSite(DEF='hanim_l_calcaneus_posterior_pt',name='l_calcaneus_posterior_pt',translation=(0.0974,0.0259,-0.1171))]),
                HAnimJoint(DEF='hanim_l_tarsometatarsal_2',center=(0.1086,0.0001,-0.0368),name='l_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_l_metatarsal_2',name='l_metatarsal_2'),
                  HAnimJoint(DEF='hanim_l_metatarsophalangeal_2',center=(0.1086,0.0001,0.0368),name='l_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_l_tarsal_proximal_phalanx_2',name='l_tarsal_proximal_phalanx_2',
                      children=[
                      HAnimSite(DEF='hanim_l_metatarsal_phalanx_1_pt',name='l_metatarsal_phalanx_1_pt',translation=(0.0816,0.0232,0.0106))]),
                    HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_2',center=(0.1086,0,0.0762),name='l_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_l_tarsal_distal_phalanx_2',name='l_tarsal_distal_phalanx_2',
                        children=[
                        HAnimSite(DEF='hanim_l_forefoot_tip',name='l_forefoot_tip',translation=(0.1354,0.0016,0.1476)),
                        HAnimSite(DEF='hanim_l_metatarsal_phalanx_5_pt',name='l_metatarsal_phalanx_5_pt',translation=(0.1825,0.007,0.0928)),
                        HAnimSite(DEF='hanim_l_tarsal_distal_phalanx_2_pt',name='l_tarsal_distal_phalanx_2_pt',translation=(0.1195,0.0079,0.1433))])])])])])])]),
          HAnimJoint(DEF='hanim_r_hip',center=(-0.0961,0.9124,-0.0001),name='r_hip',ulimit=[0,0,0],llimit=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_r_thigh',name='r_thigh',
              children=[
              HAnimSite(DEF='hanim_r_knee_crease_pt',name='r_knee_crease_pt',translation=(-0.0825,0.4932,-0.0326)),
              HAnimSite(DEF='hanim_r_femoral_lateral_epicondyle_pt',name='r_femoral_lateral_epicondyle_pt',translation=(-0.1421,0.4992,0.031)),
              HAnimSite(DEF='hanim_r_femoral_medial_epicondyle_pt',name='r_femoral_medial_epicondyle_pt',translation=(-0.0221,0.5014,0.0289))]),
            HAnimJoint(DEF='hanim_r_knee',center=(-0.104,0.4867,0.0308),name='r_knee',ulimit=[0,0,0],llimit=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_r_calf',name='r_calf'),
              HAnimJoint(DEF='hanim_r_talocrural',center=(-0.1101,0.0656,-0.0736),name='r_talocrural',ulimit=[0,0,0],llimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_r_talus',name='r_talus',
                  children=[
                  HAnimSite(DEF='hanim_r_lateral_malleolus_pt',name='r_lateral_malleolus_pt',translation=(-0.1006,0.0658,-0.1075)),
                  HAnimSite(DEF='hanim_r_medial_malleolus_pt',name='r_medial_malleolus_pt',translation=(-0.0591,0.076,-0.0928)),
                  HAnimSite(DEF='hanim_r_sphyrion_pt',name='r_sphyrion_pt',translation=(-0.0603,0.061,-0.1002)),
                  HAnimSite(DEF='hanim_r_calcaneus_posterior_pt',name='r_calcaneus_posterior_pt',translation=(-0.0692,0.0297,-0.1221))]),
                HAnimJoint(DEF='hanim_r_tarsometatarsal_2',center=(-0.1086,0.0001,-0.0368),name='r_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_r_metatarsal_2',name='r_metatarsal_2'),
                  HAnimJoint(DEF='hanim_r_metatarsophalangeal_2',center=(-0.1086,0.0001,0.0368),name='r_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_r_tarsal_proximal_phalanx_2',name='r_tarsal_proximal_phalanx_2',
                      children=[
                      HAnimSite(DEF='hanim_r_metatarsal_phalanx_1_pt',name='r_metatarsal_phalanx_1_pt',translation=(-0.0521,0.026,0.0127))]),
                    HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_2',center=(-0.1086,0,0.0762),name='r_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_r_tarsal_distal_phalanx_2',name='r_tarsal_distal_phalanx_2',
                        children=[
                        HAnimSite(DEF='hanim_r_forefoot_tip',name='r_forefoot_tip',translation=(-0.1043,0.0227,0.145)),
                        HAnimSite(DEF='hanim_r_metatarsal_phalanx_5_pt',name='r_metatarsal_phalanx_5_pt',translation=(-0.1523,0.0166,0.0895)),
                        HAnimSite(DEF='hanim_r_tarsal_distal_phalanx_2_pt',name='r_tarsal_distal_phalanx_2_pt',translation=(-0.0883,0.0134,0.1383))])])])])])])])]),
        HAnimJoint(DEF='hanim_vl5',center=(0.0028,1.0568,-0.0776),name='vl5',ulimit=[0,0,0],llimit=[0,0,0],
          children=[
          HAnimSegment(DEF='hanim_l5',name='l5',
            children=[
            HAnimSite(DEF='hanim_waist_preferred_posterior_pt',name='waist_preferred_posterior_pt',translation=(0,1.0915,-0.1091)),
            HAnimSite(DEF='hanim_navel_pt',name='navel_pt',translation=(0.0069,1.0966,0.1017))]),
          HAnimJoint(DEF='hanim_vl4',center=(0.0035,1.0925,-0.0787),name='vl4',ulimit=[0,0,0],llimit=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_l4',name='l4'),
            HAnimJoint(DEF='hanim_vl3',center=(0.0041,1.1276,-0.0796),name='vl3',ulimit=[0,0,0],llimit=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_l3',name='l3'),
              HAnimJoint(DEF='hanim_vl2',center=(0.0045,1.1546,-0.08),name='vl2',ulimit=[0,0,0],llimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_l2',name='l2',
                  children=[
                  HAnimSite(DEF='hanim_r_rib10_pt',name='r_rib10_pt',translation=(-0.0711,1.1941,0.1016)),
                  HAnimSite(DEF='hanim_l_rib10_pt',name='l_rib10_pt',translation=(0.0871,1.1925,0.0992)),
                  HAnimSite(DEF='hanim_rib10_midspine_pt',name='rib10_midspine_pt',translation=(0.0049,1.1908,-0.1113))]),
                HAnimJoint(DEF='hanim_vl1',center=(0.0048,1.1912,-0.0805),name='vl1',ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_l1',name='l1'),
                  HAnimJoint(DEF='hanim_vt12',center=(0.0051,1.2278,-0.0808),name='vt12',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_t12',name='t12'),
                    HAnimJoint(DEF='hanim_vt11',center=(0.0053,1.2679,-0.081),name='vt11',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_t11',name='t11'),
                      HAnimJoint(DEF='hanim_vt10',center=(0.0056,1.2848,-0.0822),name='vt10',ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='hanim_t10',name='t10',
                          children=[
                          HAnimSite(DEF='hanim_substernale_pt',name='substernale_pt',translation=(0.0085,1.2995,0.1147))]),
                        HAnimJoint(DEF='hanim_vt9',center=(0.0057,1.3126,-0.0838),name='vt9',ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='hanim_t9',name='t9',
                            children=[
                            HAnimSite(DEF='hanim_r_thelion_pt',name='r_thelion_pt',translation=(-0.0736,1.3385,0.1217)),
                            HAnimSite(DEF='hanim_l_thelion_pt',name='l_thelion_pt',translation=(0.0918,1.3382,0.1192))]),
                          HAnimJoint(DEF='hanim_vt8',center=(0.0057,1.3382,-0.0845),name='vt8',ulimit=[0,0,0],llimit=[0,0,0],
                            children=[
                            HAnimSegment(DEF='hanim_t8',name='t8'),
                            HAnimJoint(DEF='hanim_vt7',center=(0.0058,1.3625,-0.0833),name='vt7',ulimit=[0,0,0],llimit=[0,0,0],
                              children=[
                              HAnimSegment(DEF='hanim_t7',name='t7'),
                              HAnimJoint(DEF='hanim_vt6',center=(0.0059,1.3866,-0.08),name='vt6',ulimit=[0,0,0],llimit=[0,0,0],
                                children=[
                                HAnimSegment(DEF='hanim_t6',name='t6'),
                                HAnimJoint(DEF='hanim_vt5',center=(0.006,1.4102,-0.0745),name='vt5',ulimit=[0,0,0],llimit=[0,0,0],
                                  children=[
                                  HAnimSegment(DEF='hanim_t5',name='t5'),
                                  HAnimJoint(DEF='hanim_vt4',center=(0.0061,1.432,-0.0675),name='vt4',ulimit=[0,0,0],llimit=[0,0,0],
                                    children=[
                                    HAnimSegment(DEF='hanim_t4',name='t4'),
                                    HAnimJoint(DEF='hanim_vt3',center=(0.0062,1.4583,-0.057),name='vt3',ulimit=[0,0,0],llimit=[0,0,0],
                                      children=[
                                      HAnimSegment(DEF='hanim_t3',name='t3'),
                                      HAnimJoint(DEF='hanim_vt2',center=(0.0063,1.4761,-0.0484),name='vt2',ulimit=[0,0,0],llimit=[0,0,0],
                                        children=[
                                        HAnimSegment(DEF='hanim_t2',name='t2'),
                                        HAnimJoint(DEF='hanim_vt1',center=(0.0065,1.4951,-0.0387),name='vt1',ulimit=[0,0,0],llimit=[0,0,0],
                                          children=[
                                          HAnimSegment(DEF='hanim_t1',name='t1',
                                            children=[
                                            HAnimSite(DEF='hanim_suprasternale_pt',name='suprasternale_pt',translation=(0.0084,1.4714,0.0551)),
                                            HAnimSite(DEF='hanim_cervicale_pt',name='cervicale_pt',translation=(0.0064,1.52,-0.0815))]),
                                          HAnimJoint(DEF='hanim_vc7',center=(0.0066,1.5132,-0.0301),name='vc7',ulimit=[0,0,0],llimit=[0,0,0],
                                            children=[
                                            HAnimSegment(DEF='hanim_c7',name='c7',
                                              children=[
                                              HAnimSite(DEF='hanim_r_neck_base_pt',name='r_neck_base_pt',translation=(-0.0419,1.5149,-0.022)),
                                              HAnimSite(DEF='hanim_l_neck_base_pt',name='l_neck_base_pt',translation=(0.0646,1.5141,-0.038))]),
                                            HAnimJoint(DEF='hanim_vc6',center=(0.0066,1.5357,-0.0143),name='vc6',ulimit=[0,0,0],llimit=[0,0,0],
                                              children=[
                                              HAnimSegment(DEF='hanim_c6',name='c6'),
                                              HAnimJoint(DEF='hanim_vc5',center=(0.0066,1.552,-0.0082),name='vc5',ulimit=[0,0,0],llimit=[0,0,0],
                                                children=[
                                                HAnimSegment(DEF='hanim_c5',name='c5'),
                                                HAnimJoint(DEF='hanim_vc4',center=(0.0066,1.5662,-0.0084),name='vc4',ulimit=[0,0,0],llimit=[0,0,0],
                                                  children=[
                                                  HAnimSegment(DEF='hanim_c4',name='c4'),
                                                  HAnimJoint(DEF='hanim_vc3',center=(0.0066,1.58,-0.0103),name='vc3',ulimit=[0,0,0],llimit=[0,0,0],
                                                    children=[
                                                    HAnimSegment(DEF='hanim_c3',name='c3'),
                                                    HAnimJoint(DEF='hanim_vc2',center=(0.0066,1.5928,-0.0103),name='vc2',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_c2',name='c2'),
                                                      HAnimJoint(DEF='hanim_vc1',center=(0.0066,1.6144,-0.0034),name='vc1',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_c1',name='c1'),
                                                        HAnimJoint(DEF='hanim_skullbase',center=(0.0044,1.6209,0.0236),name='skullbase',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_skull',name='skull',
                                                            children=[
                                                            HAnimSite(DEF='hanim_skull_vertex_tip',name='skull_vertex_tip',translation=(0.005,1.7504,0.0055),
                                                              #  TODO move skull_tip x to zero, check others for symmetry 
                                                              ),
                                                            HAnimSite(DEF='hanim_sellion_pt',name='sellion_pt',translation=(0.0058,1.6316,0.0852)),
                                                            HAnimSite(DEF='hanim_r_infraorbitale_pt',name='r_infraorbitale_pt',translation=(-0.0237,1.6171,0.0752)),
                                                            HAnimSite(DEF='hanim_l_infraorbitale_pt',name='l_infraorbitale_pt',translation=(0.0341,1.6171,0.0752)),
                                                            HAnimSite(DEF='hanim_supramenton_pt',name='supramenton_pt',translation=(0.0061,1.541,0.0805)),
                                                            HAnimSite(DEF='hanim_r_tragion_pt',name='r_tragion_pt',translation=(-0.0646,1.6347,0.0302)),
                                                            HAnimSite(DEF='hanim_r_gonion_pt',name='r_gonion_pt',translation=(-0.052,1.5529,0.0347)),
                                                            HAnimSite(DEF='hanim_l_tragion_pt',name='l_tragion_pt',translation=(0.0739,1.6348,0.0282)),
                                                            HAnimSite(DEF='hanim_l_gonion_pt',name='l_gonion_pt',translation=(0.0631,1.553,0.033)),
                                                            HAnimSite(DEF='hanim_nuchale_pt',name='nuchale_pt',translation=(0.0039,1.5972,-0.0796))]),
                                                          HAnimJoint(DEF='hanim_l_eyeball_joint',center=(0.0336,1.6332,0.0502),name='l_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_l_eyeball',name='l_eyeball',
                                                              children=[
                                                              HAnimSite(DEF='hanim_l_eyeball_site_view',name='l_eyeball_site_view',translation=(0.034,1.64,0.05),
                                                                children=[
                                                                Viewpoint(DEF='hanim_l_eyeball_site_viewpoint',description='l_eyeball_site_viewpoint looking forward',orientation=(0,1,0,3.141593),position=(0,0,0))])])]),
                                                          HAnimJoint(DEF='hanim_l_eyelid_joint',center=(0.0336,1.6332,0.0502),name='l_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_l_eyelid',name='l_eyelid')]),
                                                          HAnimJoint(DEF='hanim_l_eyebrow_joint',center=(0.0336,1.635,0.0506),name='l_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_l_eyebrow',name='l_eyebrow')]),
                                                          HAnimJoint(DEF='hanim_r_eyeball_joint',center=(-0.0336,1.6332,0.0502),name='r_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_eyeball',name='r_eyeball',
                                                              children=[
                                                              HAnimSite(DEF='hanim_r_eyeball_site_view',name='r_eyeball_site_view',translation=(-0.034,1.64,0.05),
                                                                children=[
                                                                Viewpoint(DEF='hanim_r_eyeball_site_viewpoint',description='r_eyeball_site_viewpoint looking forward',orientation=(0,1,0,3.141593),position=(0,0,0))])])]),
                                                          HAnimJoint(DEF='hanim_r_eyelid_joint',center=(-0.0336,1.6332,0.0502),name='r_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_eyelid',name='r_eyelid')]),
                                                          HAnimJoint(DEF='hanim_r_eyebrow_joint',center=(-0.0336,1.635,0.0506),name='r_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_eyebrow',name='r_eyebrow')]),
                                                          HAnimJoint(DEF='hanim_temporomandibular',center=(0.0,1.63,0.015),name='temporomandibular',ulimit=[0,0,0],llimit=[0,0,0],
                                                            #  Single joint, single segment for jaw, two sites for left/right TMJs https://en.wikipedia.org/wiki/Temporomandibular_joint 
                                                            children=[
                                                            HAnimSegment(DEF='hanim_jaw',name='jaw',
                                                              children=[
                                                              HAnimSite(DEF='hanim_temporomandibular_l_site_pt',name='temporomandibular_l_site_pt',translation=(0.045,1.63,0.0)),
                                                              HAnimSite(DEF='hanim_temporomandibular_r_site_pt',name='temporomandibular_r_site_pt',translation=(-0.045,1.63,0.0))])])])])])])])])])]),
                                          HAnimJoint(DEF='hanim_l_sternoclavicular',center=(0.082,1.4488,-0.0353),name='l_sternoclavicular',ulimit=[0,0,0],llimit=[0,0,0],
                                            children=[
                                            HAnimSegment(DEF='hanim_l_clavicle',name='l_clavicle',
                                              children=[
                                              HAnimSite(DEF='hanim_l_clavicle_pt',name='l_clavicle_pt',translation=(0.0271,1.4943,0.0394)),
                                              HAnimSite(DEF='hanim_l_acromion_pt',name='l_acromion_pt',translation=(0.2032,1.476,-0.049)),
                                              HAnimSite(DEF='hanim_l_axilla_proximal_pt',name='l_axilla_proximal_pt',translation=(0.1777,1.4065,-0.0075)),
                                              HAnimSite(DEF='hanim_l_axilla_distal_pt',name='l_axilla_distal_pt',translation=(0.1706,1.4072,-0.0875))]),
                                            HAnimJoint(DEF='hanim_l_acromioclavicular',center=(0.0962,1.4269,-0.0424),name='l_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0],
                                              children=[
                                              HAnimSegment(DEF='hanim_l_scapula',name='l_scapula'),
                                              HAnimJoint(DEF='hanim_l_shoulder',center=(0.2029,1.4376,-0.0387),name='l_shoulder',ulimit=[0,0,0],llimit=[0,0,0],
                                                children=[
                                                HAnimSegment(DEF='hanim_l_upperarm',name='l_upperarm',
                                                  children=[
                                                  HAnimSite(DEF='hanim_l_humeral_lateral_epicondyle_pt',name='l_humeral_lateral_epicondyle_pt',translation=(0.228,1.1482,-0.11))]),
                                                HAnimJoint(DEF='hanim_l_elbow',center=(0.2014,1.1357,-0.0682),name='l_elbow',ulimit=[0,0,0],llimit=[0,0,0],
                                                  children=[
                                                  HAnimSegment(DEF='hanim_l_forearm',name='l_forearm',
                                                    children=[
                                                    HAnimSite(DEF='hanim_l_radial_styloid_pt',name='l_radial_styloid_pt',translation=(0.1901,0.8645,-0.0415)),
                                                    HAnimSite(DEF='hanim_l_olecranon_pt',name='l_olecranon_pt',translation=(0.1962,1.1375,-0.1123)),
                                                    HAnimSite(DEF='hanim_l_humeral_medial_epicondyle_pt',name='l_humeral_medial_epicondyle_pt',translation=(0.1735,1.1272,-0.1113)),
                                                    HAnimSite(DEF='hanim_l_radiale_pt',name='l_radiale_pt',translation=(0.2182,1.1212,-0.1167))]),
                                                  HAnimJoint(DEF='hanim_l_radiocarpal',center=(0.1984,0.8663,-0.0583),name='l_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0],
                                                    children=[
                                                    HAnimSegment(DEF='hanim_l_carpal',name='l_carpal',
                                                      children=[
                                                      HAnimSite(DEF='hanim_l_metacarpal_phalanx_2_pt',name='l_metacarpal_phalanx_2_pt',translation=(0.2009,0.8139,-0.0237)),
                                                      HAnimSite(DEF='hanim_l_ulnar_styloid_pt',name='l_ulnar_styloid_pt',translation=(0.2142,0.8529,-0.0648)),
                                                      HAnimSite(DEF='hanim_l_metacarpal_phalanx_5_pt',name='l_metacarpal_phalanx_5_pt',translation=(0.1929,0.786,-0.1122)),
                                                      HAnimSite(DEF='hanim_l_hand_front_view',name='l_hand_front_view',translation=(0.3,0.75,0.45),
                                                        children=[
                                                        Viewpoint(DEF='hanim_l_hand_front_viewpoint',centerOfRotation=(0,0.7,0),description='left hand front',position=(0,0,0))])]),
                                                    HAnimJoint(DEF='hanim_l_carpometacarpal_1',center=(0.1924,0.8472,-0.0534),name='l_carpometacarpal_1',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_l_metacarpal_1',name='l_metacarpal_1'),
                                                      HAnimJoint(DEF='hanim_l_metacarpophalangeal_1',center=(0.1951,0.8226,0.0246),name='l_metacarpophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_1',name='l_carpal_proximal_phalanx_1'),
                                                        HAnimJoint(DEF='hanim_l_carpal_interphalangeal_1',center=(0.1955,0.8159,0.0464),name='l_carpal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_l_carpal_distal_phalanx_1',name='l_carpal_distal_phalanx_1',
                                                            children=[
                                                            HAnimSite(DEF='hanim_l_carpal_distal_phalanx_1_tip',name='l_carpal_distal_phalanx_1_tip',translation=(0.1982,0.8061,0.0759))])])])]),
                                                    HAnimJoint(DEF='hanim_l_carpometacarpal_2',center=(0.1983,0.8024,-0.028),name='l_carpometacarpal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_l_metacarpal_2',name='l_metacarpal_2'),
                                                      HAnimJoint(DEF='hanim_l_metacarpophalangeal_2',center=(0.1983,0.7815,-0.028),name='l_metacarpophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_2',name='l_carpal_proximal_phalanx_2'),
                                                        HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_2',center=(0.2017,0.7363,-0.0248),name='l_carpal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_l_carpal_middle_phalanx_2',name='l_carpal_middle_phalanx_2'),
                                                          HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_2',center=(0.2028,0.7139,-0.0236),name='l_carpal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_l_carpal_distal_phalanx_2',name='l_carpal_distal_phalanx_2',
                                                              children=[
                                                              HAnimSite(DEF='hanim_l_carpal_distal_phalanx_2_tip',name='l_carpal_distal_phalanx_2_tip',translation=(0.2089,0.6858,-0.0245)),
                                                              HAnimSite(DEF='hanim_l_dactylion_pt',name='l_dactylion_pt',translation=(0.2056,0.6743,-0.0482))])])])])]),
                                                    HAnimJoint(DEF='hanim_l_carpometacarpal_3',center=(0.1987,0.8029,-0.053),name='l_carpometacarpal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_l_metacarpal_3',name='l_metacarpal_3'),
                                                      HAnimJoint(DEF='hanim_l_metacarpophalangeal_3',center=(0.1987,0.7818,-0.053),name='l_metacarpophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_3',name='l_carpal_proximal_phalanx_3'),
                                                        HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_3',center=(0.2013,0.7273,-0.0503),name='l_carpal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_l_carpal_middle_phalanx_3',name='l_carpal_middle_phalanx_3'),
                                                          HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_3',center=(0.2026,0.7011,-0.0494),name='l_carpal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_l_carpal_distal_phalanx_3',name='l_carpal_distal_phalanx_3',
                                                              children=[
                                                              HAnimSite(DEF='hanim_l_carpal_distal_phalanx_3_tip',name='l_carpal_distal_phalanx_3_tip',translation=(0.208,0.6731,-0.0491))])])])])]),
                                                    HAnimJoint(DEF='hanim_l_carpometacarpal_4',center=(0.1956,0.8019,-0.0794),name='l_carpometacarpal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_l_metacarpal_4',name='l_metacarpal_4'),
                                                      HAnimJoint(DEF='hanim_l_metacarpophalangeal_4',center=(0.1956,0.7815,-0.0794),name='l_metacarpophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_4',name='l_carpal_proximal_phalanx_4'),
                                                        HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_4',center=(0.1973,0.7287,-0.0777),name='l_carpal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_l_carpal_middle_phalanx_4',name='l_carpal_middle_phalanx_4'),
                                                          HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_4',center=(0.1983,0.7045,-0.0767),name='l_carpal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_l_carpal_distal_phalanx_4',name='l_carpal_distal_phalanx_4',
                                                              children=[
                                                              HAnimSite(DEF='hanim_l_carpal_distal_phalanx_4_tip',name='l_carpal_distal_phalanx_4_tip',translation=(0.2035,0.675,-0.0756))])])])])]),
                                                    HAnimJoint(DEF='hanim_l_carpometacarpal_5',center=(0.1925,0.8066,-0.1036),name='l_carpometacarpal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_l_metacarpal_5',name='l_metacarpal_5'),
                                                      HAnimJoint(DEF='hanim_l_metacarpophalangeal_5',center=(0.1925,0.7866,-0.1036),name='l_metacarpophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_5',name='l_carpal_proximal_phalanx_5'),
                                                        HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_5',center=(0.1938,0.7452,-0.1024),name='l_carpal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_l_carpal_middle_phalanx_5',name='l_carpal_middle_phalanx_5'),
                                                          HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_5',center=(0.1948,0.7277,-0.1017),name='l_carpal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_l_carpal_distal_phalanx_5',name='l_carpal_distal_phalanx_5',
                                                              children=[
                                                              HAnimSite(DEF='hanim_l_carpal_distal_phalanx_5_tip',name='l_carpal_distal_phalanx_5_tip',translation=(0.2014,0.7009,-0.1012))])])])])])])])])])]),
                                          HAnimJoint(DEF='hanim_r_sternoclavicular',center=(-0.082,1.4488,-0.0353),name='r_sternoclavicular',ulimit=[0,0,0],llimit=[0,0,0],
                                            children=[
                                            HAnimSegment(DEF='hanim_r_clavicle',name='r_clavicle',
                                              children=[
                                              HAnimSite(DEF='hanim_r_clavicle_pt',name='r_clavicle_pt',translation=(-0.0115,1.4943,0.04)),
                                              HAnimSite(DEF='hanim_r_acromion_pt',name='r_acromion_pt',translation=(-0.1905,1.4791,-0.0431)),
                                              HAnimSite(DEF='hanim_r_axilla_proximal_pt',name='r_axilla_proximal_pt',translation=(-0.1626,1.4072,-0.0031)),
                                              HAnimSite(DEF='hanim_r_axilla_distal_pt',name='r_axilla_distal_pt',translation=(-0.1603,1.4098,-0.0826))]),
                                            HAnimJoint(DEF='hanim_r_acromioclavicular',center=(-0.0962,1.4269,-0.0424),name='r_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0],
                                              children=[
                                              HAnimSegment(DEF='hanim_r_scapula',name='r_scapula'),
                                              HAnimJoint(DEF='hanim_r_shoulder',center=(-0.2029,1.4376,-0.0387),name='r_shoulder',ulimit=[0,0,0],llimit=[0,0,0],
                                                children=[
                                                HAnimSegment(DEF='hanim_r_upperarm',name='r_upperarm',
                                                  children=[
                                                  HAnimSite(DEF='hanim_r_humeral_lateral_epicondyle_pt',name='r_humeral_lateral_epicondyle_pt',translation=(-0.2224,1.1517,-0.1033))]),
                                                HAnimJoint(DEF='hanim_r_elbow',center=(-0.2014,1.1357,-0.0682),name='r_elbow',ulimit=[0,0,0],llimit=[0,0,0],
                                                  children=[
                                                  HAnimSegment(DEF='hanim_r_forearm',name='r_forearm',
                                                    children=[
                                                    HAnimSite(DEF='hanim_r_radial_styloid_pt',name='r_radial_styloid_pt',translation=(-0.1884,0.8676,-0.036)),
                                                    HAnimSite(DEF='hanim_r_olecranon_pt',name='r_olecranon_pt',translation=(-0.1907,1.1405,-0.1065)),
                                                    HAnimSite(DEF='hanim_r_humeral_medial_epicondyle_pt',name='r_humeral_medial_epicondyle_pt',translation=(-0.168,1.1298,-0.1062)),
                                                    HAnimSite(DEF='hanim_r_radiale_pt',name='r_radiale_pt',translation=(-0.213,1.1305,-0.1091))]),
                                                  HAnimJoint(DEF='hanim_r_radiocarpal',center=(-0.1984,0.8663,-0.0583),name='r_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0],
                                                    children=[
                                                    HAnimSegment(DEF='hanim_r_carpal',name='r_carpal',
                                                      children=[
                                                      HAnimSite(DEF='hanim_r_metacarpal_phalanx_2_pt',name='r_metacarpal_phalanx_2_pt',translation=(-0.1977,0.8169,-0.0177)),
                                                      HAnimSite(DEF='hanim_r_ulnar_styloid_pt',name='r_ulnar_styloid_pt',translation=(-0.2117,0.8562,-0.0584)),
                                                      HAnimSite(DEF='hanim_r_metacarpal_phalanx_5_pt',name='r_metacarpal_phalanx_5_pt',translation=(-0.1929,0.789,-0.1064)),
                                                      HAnimSite(DEF='hanim_r_hand_front_view',name='r_hand_front_view',translation=(-0.3,0.75,0.45),
                                                        children=[
                                                        Viewpoint(DEF='hanim_r_hand_front_viewpoint',centerOfRotation=(0,0.7,0),description='right hand front',position=(0,0,0))])]),
                                                    HAnimJoint(DEF='hanim_r_carpometacarpal_1',center=(-0.1924,0.8472,-0.0534),name='r_carpometacarpal_1',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_r_metacarpal_1',name='r_metacarpal_1'),
                                                      HAnimJoint(DEF='hanim_r_metacarpophalangeal_1',center=(-0.1951,0.8226,0.0246),name='r_metacarpophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_r_carpal_proximal_phalanx_1',name='r_carpal_proximal_phalanx_1'),
                                                        HAnimJoint(DEF='hanim_r_carpal_interphalangeal_1',center=(-0.1955,0.8159,0.0464),name='r_carpal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_r_carpal_distal_phalanx_1',name='r_carpal_distal_phalanx_1',
                                                            children=[
                                                            HAnimSite(DEF='hanim_r_carpal_distal_phalanx_1_tip',name='r_carpal_distal_phalanx_1_tip',translation=(-0.1869,0.809,0.082))])])])]),
                                                    HAnimJoint(DEF='hanim_r_carpometacarpal_2',center=(-0.1983,0.8024,-0.028),name='r_carpometacarpal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_r_metacarpal_2',name='r_metacarpal_2'),
                                                      HAnimJoint(DEF='hanim_r_metacarpophalangeal_2',center=(-0.1983,0.7815,-0.028),name='r_metacarpophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_r_carpal_proximal_phalanx_2',name='r_carpal_proximal_phalanx_2'),
                                                        HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_2',center=(-0.2017,0.7363,-0.0248),name='r_carpal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_r_carpal_middle_phalanx_2',name='r_carpal_middle_phalanx_2'),
                                                          HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_2',center=(-0.2028,0.7139,-0.0236),name='r_carpal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_carpal_distal_phalanx_2',name='r_carpal_distal_phalanx_2',
                                                              children=[
                                                              HAnimSite(DEF='hanim_r_carpal_distal_phalanx_2_tip',name='r_carpal_distal_phalanx_2_tip',translation=(-0.198,0.6883,-0.018)),
                                                              HAnimSite(DEF='hanim_r_dactylion_pt',name='r_dactylion_pt',translation=(-0.1941,0.6772,-0.0423))])])])])]),
                                                    HAnimJoint(DEF='hanim_r_carpometacarpal_3',center=(-0.1987,0.8029,-0.053),name='r_carpometacarpal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_r_metacarpal_3',name='r_metacarpal_3'),
                                                      HAnimJoint(DEF='hanim_r_metacarpophalangeal_3',center=(-0.1987,0.7818,-0.053),name='r_metacarpophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_r_carpal_proximal_phalanx_3',name='r_carpal_proximal_phalanx_3'),
                                                        HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_3',center=(-0.2013,0.7273,-0.0503),name='r_carpal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_r_carpal_middle_phalanx_3',name='r_carpal_middle_phalanx_3'),
                                                          HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_3',center=(-0.2026,0.7011,-0.0494),name='r_carpal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_carpal_distal_phalanx_3',name='r_carpal_distal_phalanx_3',
                                                              children=[
                                                              HAnimSite(DEF='hanim_r_carpal_distal_phalanx_3_tip',name='r_carpal_distal_phalanx_3_tip',translation=(-0.1969,0.6758,-0.0427))])])])])]),
                                                    HAnimJoint(DEF='hanim_r_carpometacarpal_4',center=(-0.1956,0.8019,-0.0794),name='r_carpometacarpal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_r_metacarpal_4',name='r_metacarpal_4'),
                                                      HAnimJoint(DEF='hanim_r_metacarpophalangeal_4',center=(-0.1956,0.7815,-0.0794),name='r_metacarpophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_r_carpal_proximal_phalanx_4',name='r_carpal_proximal_phalanx_4'),
                                                        HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_4',center=(-0.1973,0.7287,-0.0777),name='r_carpal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_r_carpal_middle_phalanx_4',name='r_carpal_middle_phalanx_4'),
                                                          HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_4',center=(-0.1983,0.7045,-0.0767),name='r_carpal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_carpal_distal_phalanx_4',name='r_carpal_distal_phalanx_4',
                                                              children=[
                                                              HAnimSite(DEF='hanim_r_carpal_distal_phalanx_4_tip',name='r_carpal_distal_phalanx_4_tip',translation=(-0.1934,0.6778,-0.0693))])])])])]),
                                                    HAnimJoint(DEF='hanim_r_carpometacarpal_5',center=(-0.1925,0.8066,-0.1036),name='r_carpometacarpal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_r_metacarpal_5',name='r_metacarpal_5'),
                                                      HAnimJoint(DEF='hanim_r_metacarpophalangeal_5',center=(-0.1925,0.7866,-0.1036),name='r_metacarpophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_r_carpal_proximal_phalanx_5',name='r_carpal_proximal_phalanx_5'),
                                                        HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_5',center=(-0.1938,0.7452,-0.1024),name='r_carpal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_r_carpal_middle_phalanx_5',name='r_carpal_middle_phalanx_5'),
                                                          HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_5',center=(-0.1948,0.7277,-0.1017),name='r_carpal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_carpal_distal_phalanx_5',name='r_carpal_distal_phalanx_5',
                                                              children=[
                                                              HAnimSite(DEF='hanim_r_carpal_distal_phalanx_5_tip',name='r_carpal_distal_phalanx_5_tip',translation=(-0.1938,0.7035,-0.0949))])])])])])])])])])])])])])])])])])])])])])])])])])])])]),],
      sites=[
      HAnimSite(USE='hanim_crotch_pt'),
      HAnimSite(USE='hanim_skull_vertex_tip'),
      HAnimSite(USE='hanim_sellion_pt'),
      HAnimSite(USE='hanim_supramenton_pt'),
      HAnimSite(USE='hanim_nuchale_pt'),
      HAnimSite(USE='hanim_suprasternale_pt'),
      HAnimSite(USE='hanim_cervicale_pt'),
      HAnimSite(USE='hanim_substernale_pt'),
      HAnimSite(USE='hanim_rib10_midspine_pt'),
      HAnimSite(USE='hanim_waist_preferred_posterior_pt'),
      HAnimSite(USE='hanim_navel_pt'),
      HAnimSite(USE='hanim_l_acromion_pt'),
      HAnimSite(USE='hanim_r_acromion_pt'),
      HAnimSite(USE='hanim_r_asis_pt'),
      HAnimSite(USE='hanim_l_asis_pt'),
      HAnimSite(USE='hanim_l_axilla_distal_pt'),
      HAnimSite(USE='hanim_r_axilla_distal_pt'),
      HAnimSite(USE='hanim_l_axilla_proximal_pt'),
      HAnimSite(USE='hanim_r_axilla_proximal_pt'),
      HAnimSite(USE='hanim_l_calcaneus_posterior_pt'),
      HAnimSite(USE='hanim_r_calcaneus_posterior_pt'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_1_tip'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_1_tip'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_2_tip'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_2_tip'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_3_tip'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_3_tip'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_4_tip'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_4_tip'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_5_tip'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_5_tip'),
      HAnimSite(USE='hanim_l_clavicle_pt'),
      HAnimSite(USE='hanim_r_clavicle_pt'),
      HAnimSite(USE='hanim_l_dactylion_pt'),
      HAnimSite(USE='hanim_r_dactylion_pt'),
      HAnimSite(USE='hanim_l_femoral_lateral_epicondyle_pt'),
      HAnimSite(USE='hanim_r_femoral_lateral_epicondyle_pt'),
      HAnimSite(USE='hanim_l_femoral_medial_epicondyle_pt'),
      HAnimSite(USE='hanim_r_femoral_medial_epicondyle_pt'),
      HAnimSite(USE='hanim_l_forefoot_tip'),
      HAnimSite(USE='hanim_r_forefoot_tip'),
      HAnimSite(USE='hanim_r_gonion_pt'),
      HAnimSite(USE='hanim_l_gonion_pt'),
      HAnimSite(USE='hanim_l_humeral_lateral_epicondyle_pt'),
      HAnimSite(USE='hanim_r_humeral_lateral_epicondyle_pt'),
      HAnimSite(USE='hanim_l_humeral_medial_epicondyle_pt'),
      HAnimSite(USE='hanim_r_humeral_medial_epicondyle_pt'),
      HAnimSite(USE='hanim_r_iliocristale_pt'),
      HAnimSite(USE='hanim_l_iliocristale_pt'),
      HAnimSite(USE='hanim_r_infraorbitale_pt'),
      HAnimSite(USE='hanim_l_infraorbitale_pt'),
      HAnimSite(USE='hanim_l_knee_crease_pt'),
      HAnimSite(USE='hanim_r_knee_crease_pt'),
      HAnimSite(USE='hanim_l_lateral_malleolus_pt'),
      HAnimSite(USE='hanim_r_lateral_malleolus_pt'),
      HAnimSite(USE='hanim_l_medial_malleolus_pt'),
      HAnimSite(USE='hanim_r_medial_malleolus_pt'),
      HAnimSite(USE='hanim_l_metacarpal_phalanx_2_pt'),
      HAnimSite(USE='hanim_r_metacarpal_phalanx_2_pt'),
      HAnimSite(USE='hanim_l_metacarpal_phalanx_5_pt'),
      HAnimSite(USE='hanim_r_metacarpal_phalanx_5_pt'),
      HAnimSite(USE='hanim_l_metatarsal_phalanx_1_pt'),
      HAnimSite(USE='hanim_r_metatarsal_phalanx_1_pt'),
      HAnimSite(USE='hanim_l_metatarsal_phalanx_5_pt'),
      HAnimSite(USE='hanim_r_metatarsal_phalanx_5_pt'),
      HAnimSite(USE='hanim_r_neck_base_pt'),
      HAnimSite(USE='hanim_l_neck_base_pt'),
      HAnimSite(USE='hanim_l_olecranon_pt'),
      HAnimSite(USE='hanim_r_olecranon_pt'),
      HAnimSite(USE='hanim_r_psis_pt'),
      HAnimSite(USE='hanim_l_psis_pt'),
      HAnimSite(USE='hanim_l_radial_styloid_pt'),
      HAnimSite(USE='hanim_r_radial_styloid_pt'),
      HAnimSite(USE='hanim_l_radiale_pt'),
      HAnimSite(USE='hanim_r_radiale_pt'),
      HAnimSite(USE='hanim_r_rib10_pt'),
      HAnimSite(USE='hanim_l_rib10_pt'),
      HAnimSite(USE='hanim_temporomandibular_l_site_pt'),
      HAnimSite(USE='hanim_temporomandibular_r_site_pt'),
      HAnimSite(USE='hanim_l_sphyrion_pt'),
      HAnimSite(USE='hanim_r_sphyrion_pt'),
      HAnimSite(USE='hanim_l_tarsal_distal_phalanx_2_pt'),
      HAnimSite(USE='hanim_r_tarsal_distal_phalanx_2_pt'),
      HAnimSite(USE='hanim_r_thelion_pt'),
      HAnimSite(USE='hanim_l_thelion_pt'),
      HAnimSite(USE='hanim_r_tragion_pt'),
      HAnimSite(USE='hanim_l_tragion_pt'),
      HAnimSite(USE='hanim_r_trochanterion_pt'),
      HAnimSite(USE='hanim_l_trochanterion_pt'),
      HAnimSite(USE='hanim_l_ulnar_styloid_pt'),
      HAnimSite(USE='hanim_r_ulnar_styloid_pt')],
      viewpoints=[
      HAnimSite(DEF='hanim_l_inclined_view',name='l_inclined_view',rotation=(-0.113,0.993,0.0347,0.671),translation=(1.62,1.05,2.06),
        children=[
        Viewpoint(DEF='hanim_l_inclined_viewpoint',description='left inclined',position=(0,0,0))]),
      HAnimSite(DEF='hanim_r_inclined_view',name='r_inclined_view',rotation=(-0.113,-0.993,0.0347,0.671),translation=(-1.62,1.05,2.06),
        children=[
        Viewpoint(DEF='hanim_r_inclined_viewpoint',centerOfRotation=(0,0.9,0),description='right inclined',position=(0,0,0))]),
      HAnimSite(DEF='hanim_front_view',name='front_view',translation=(0,0.85,2.58),
        children=[
        Viewpoint(DEF='hanim_front_viewpoint',centerOfRotation=(0,0.9,0),description='front',position=(0,0,0))]),
      HAnimSite(DEF='hanim_back_view',name='back_view',rotation=(0,1,0,3.14),translation=(0,0.85,-2.58),
        children=[
        Viewpoint(DEF='hanim_back_viewpoint',centerOfRotation=(0,0.9,0),description='back',position=(0,0,0))]),
      HAnimSite(DEF='hanim_l_side_view',name='l_side_view',rotation=(0,1,0,1.5708),translation=(2.6,0.854,0),
        children=[
        Viewpoint(DEF='hanim_l_side_viewpoint',centerOfRotation=(0,0.9,0),description='left side',position=(0,0,0))]),
      HAnimSite(DEF='hanim_Top_view',name='Top_view',rotation=(1,0,0,-1.57),translation=(0,3.5,0),
        children=[
        Viewpoint(DEF='hanim_Top_viewpoint',centerOfRotation=(0,0.9,0),description='Top',position=(0,0,0))]),
      HAnimSite(DEF='hanim_front_close_view',name='front_close_view',translation=(0,0.854,1.575),
        children=[
        Viewpoint(DEF='hanim_front_close_viewpoint',centerOfRotation=(0,0,1.575),description='front close',position=(0,0,0))]),
      HAnimSite(DEF='hanim_side_close_view',name='side_close_view',rotation=(0,1,0,1.5708),translation=(1.56,0.854,0),
        children=[
        Viewpoint(DEF='hanim_side_close_viewpoint',centerOfRotation=(1.6,0,0),description='side close',position=(0,0,0))]),
      HAnimSite(DEF='hanim_head_front_close_view',name='head_front_close_view',translation=(0,1.5,1),
        children=[
        Viewpoint(DEF='hanim_head_front_close_viewpoint',centerOfRotation=(0,0,1),description='head front close',position=(0,0,0))]),
      HAnimSite(DEF='hanim_chest_front_close_view',name='chest_front_close_view',translation=(0,1.2,1),
        children=[
        Viewpoint(DEF='hanim_chest_front_close_viewpoint',centerOfRotation=(0,0,1),description='chest front close',position=(0,0,0))]),
      HAnimSite(DEF='hanim_pelvis_front_close_view',name='pelvis_front_close_view',translation=(0,0.8,1),
        children=[
        Viewpoint(DEF='hanim_pelvis_front_close_viewpoint',centerOfRotation=(0,0,1),description='pelvis front close',position=(0,0,0))]),
      HAnimSite(DEF='hanim_knees_front_close_view',name='knees_front_close_view',translation=(0,0.4,1),
        children=[
        Viewpoint(DEF='hanim_knees_front_close_viewpoint',centerOfRotation=(0,0.4,0),description='knees front close',position=(0,0,0))]),
      HAnimSite(DEF='hanim_feet_front_close_view',name='feet_front_close_view',translation=(0,0,1),
        children=[
        Viewpoint(DEF='hanim_feet_front_close_viewpoint',description='feet front close',position=(0,0,0))]),
      HAnimSite(DEF='hanim_eye_level_view',name='eye_level_view',translation=(0,1.6332,0.0502),
        children=[
        Viewpoint(DEF='hanim_eye_level_viewpoint',description='eye level looking forward',orientation=(0,1,0,3.141593),position=(0,0,0))]),
      HAnimSite(USE='hanim_l_eyeball_site_view'),
      HAnimSite(USE='hanim_r_eyeball_site_view'),
      HAnimSite(USE='hanim_l_hand_front_view'),
      HAnimSite(USE='hanim_r_hand_front_view')],
      #  original HAnimHumanoid info='"authorName=Matthew T. Beitler Joe D. Williams Don Brutzman" "authorEmail=HAnim@web3D.org" "copyright=none" "creationDate=12 May 1999" "usageRestrictions=none" "humanoidVersion=2.0" "height=1.7504"' 
      #  Only one root HAnimJoint is allowed 
      #  USE nodes go here for access by inverse kinematics (IK) engines and other tools 
      #  Top-level HAnimSite/Viewpoint nodes that move with the human center but are unaffected by body animation 
      #  TODO move relevant HAnimSite/Viewpoint pairs into skeleton at appropriate locations, if so also revert containerField to default 
      #  right between the eyes, stationary position not animating except with body itself 
      joints=[
      HAnimJoint(USE='hanim_humanoid_root',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_sacroiliac',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vl5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vl4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vl3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vl2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vl1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt12',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt11',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt10',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt9',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt8',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt7',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt6',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vt1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc7',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc6',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_vc1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_skullbase',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_temporomandibular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_elbow',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_elbow',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_hip',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_hip',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_knee',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_knee',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_shoulder',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_shoulder',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_sternoclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_sternoclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_talocrural',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_talocrural',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0])],
      segments=[
      HAnimSegment(USE='hanim_pelvis'),
      HAnimSegment(USE='hanim_skull'),
      HAnimSegment(USE='hanim_jaw'),
      HAnimSegment(USE='hanim_c1'),
      HAnimSegment(USE='hanim_c2'),
      HAnimSegment(USE='hanim_c3'),
      HAnimSegment(USE='hanim_c4'),
      HAnimSegment(USE='hanim_c5'),
      HAnimSegment(USE='hanim_c6'),
      HAnimSegment(USE='hanim_c7'),
      HAnimSegment(USE='hanim_t1'),
      HAnimSegment(USE='hanim_t2'),
      HAnimSegment(USE='hanim_t3'),
      HAnimSegment(USE='hanim_t4'),
      HAnimSegment(USE='hanim_t5'),
      HAnimSegment(USE='hanim_t6'),
      HAnimSegment(USE='hanim_t7'),
      HAnimSegment(USE='hanim_t8'),
      HAnimSegment(USE='hanim_t9'),
      HAnimSegment(USE='hanim_t10'),
      HAnimSegment(USE='hanim_t11'),
      HAnimSegment(USE='hanim_t12'),
      HAnimSegment(USE='hanim_l1'),
      HAnimSegment(USE='hanim_l2'),
      HAnimSegment(USE='hanim_l3'),
      HAnimSegment(USE='hanim_l4'),
      HAnimSegment(USE='hanim_l5'),
      HAnimSegment(USE='hanim_sacrum'),
      HAnimSegment(USE='hanim_l_calf'),
      HAnimSegment(USE='hanim_r_calf'),
      HAnimSegment(USE='hanim_l_carpal'),
      HAnimSegment(USE='hanim_r_carpal'),
      HAnimSegment(USE='hanim_l_carpal_distal_phalanx_1'),
      HAnimSegment(USE='hanim_r_carpal_distal_phalanx_1'),
      HAnimSegment(USE='hanim_l_carpal_distal_phalanx_2'),
      HAnimSegment(USE='hanim_r_carpal_distal_phalanx_2'),
      HAnimSegment(USE='hanim_l_carpal_distal_phalanx_3'),
      HAnimSegment(USE='hanim_r_carpal_distal_phalanx_3'),
      HAnimSegment(USE='hanim_l_carpal_distal_phalanx_4'),
      HAnimSegment(USE='hanim_r_carpal_distal_phalanx_4'),
      HAnimSegment(USE='hanim_l_carpal_distal_phalanx_5'),
      HAnimSegment(USE='hanim_r_carpal_distal_phalanx_5'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_2'),
      HAnimSegment(USE='hanim_r_carpal_middle_phalanx_2'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_3'),
      HAnimSegment(USE='hanim_r_carpal_middle_phalanx_3'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_4'),
      HAnimSegment(USE='hanim_r_carpal_middle_phalanx_4'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_5'),
      HAnimSegment(USE='hanim_r_carpal_middle_phalanx_5'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_1'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_1'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_2'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_2'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_3'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_3'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_4'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_4'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_5'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_5'),
      HAnimSegment(USE='hanim_l_clavicle'),
      HAnimSegment(USE='hanim_r_clavicle'),
      HAnimSegment(USE='hanim_l_eyeball'),
      HAnimSegment(USE='hanim_r_eyeball'),
      HAnimSegment(USE='hanim_l_eyebrow'),
      HAnimSegment(USE='hanim_r_eyebrow'),
      HAnimSegment(USE='hanim_l_eyelid'),
      HAnimSegment(USE='hanim_r_eyelid'),
      HAnimSegment(USE='hanim_l_forearm'),
      HAnimSegment(USE='hanim_r_forearm'),
      HAnimSegment(USE='hanim_l_metacarpal_1'),
      HAnimSegment(USE='hanim_r_metacarpal_1'),
      HAnimSegment(USE='hanim_l_metacarpal_2'),
      HAnimSegment(USE='hanim_r_metacarpal_2'),
      HAnimSegment(USE='hanim_l_metacarpal_3'),
      HAnimSegment(USE='hanim_r_metacarpal_3'),
      HAnimSegment(USE='hanim_l_metacarpal_4'),
      HAnimSegment(USE='hanim_r_metacarpal_4'),
      HAnimSegment(USE='hanim_l_metacarpal_5'),
      HAnimSegment(USE='hanim_r_metacarpal_5'),
      HAnimSegment(USE='hanim_l_metatarsal_2'),
      HAnimSegment(USE='hanim_r_metatarsal_2'),
      HAnimSegment(USE='hanim_l_scapula'),
      HAnimSegment(USE='hanim_r_scapula'),
      HAnimSegment(USE='hanim_l_talus'),
      HAnimSegment(USE='hanim_r_talus'),
      HAnimSegment(USE='hanim_l_tarsal_distal_phalanx_2'),
      HAnimSegment(USE='hanim_r_tarsal_distal_phalanx_2'),
      HAnimSegment(USE='hanim_l_tarsal_proximal_phalanx_2'),
      HAnimSegment(USE='hanim_r_tarsal_proximal_phalanx_2'),
      HAnimSegment(USE='hanim_l_thigh'),
      HAnimSegment(USE='hanim_r_thigh'),
      HAnimSegment(USE='hanim_l_upperarm'),
      HAnimSegment(USE='hanim_r_upperarm')],)])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for HAnim2SpecificationLOA3Invisible.py:')
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

print("python HAnim2SpecificationLOA3Invisible.py load and self-test diagnostics complete.")
