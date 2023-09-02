####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python skeletonJoe.py
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
    meta(content='skeletonJoe.x3d',name='title'),
    meta(name='identifier',content='http://www.web3d.org/x3d/content/examples/HumanoidAnimation/skeletonJoe.x3d'),
    meta(name='description',content='An attempt at a standard LOA-4 skeleton'),
    meta(name='generator',content='h.pl'),
    meta(content='John Carlson',name='creator'),
    meta(content='12 June 2020',name='created'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='default'),
    Transform(
      #  DEF for markerfor XYZ axes 
      children=[
      Shape(DEF='AxisLinesShape',
        #  RGB lines showing XYZ axes 
        geometry=IndexedLineSet(colorIndex=[0,1,2],colorPerVertex=False,coordIndex=[0,1,-1,0,2,-1,0,3,-1],
          coord=Coordinate(point=[(0,0,0),(0.1,0,0),(0,0.1,0),(0,0,0.1)]),
          color=Color(color=[(1,0,0),(0,0.6,0),(0,0,1)])))]),
    Group(
      #  DEFS for markers of skeleton joints, segments, and sites 
      children=[
      Transform(
        children=[
        Transform(translation=(0,2,0),
          children=[
          Shape(DEF='HAnimRootShape',
            geometry=Sphere(radius=0.02),
            appearance=Appearance(
              material=Material(DEF='HAnimRootMaterial',diffuseColor=(0.8,0,0),transparency=0.3)))]),
        Transform(translation=(0,2.1,0),
          children=[
          Shape(DEF='HAnimJointShape',
            geometry=Sphere(radius=0.02),
            appearance=Appearance(
              material=Material(DEF='HAnimJointMaterial',diffuseColor=(0,0,0.8),transparency=0.3)))]),
        Transform(translation=(0,2.05,0),
          children=[
          Shape(DEF='HAnimSegmentLine',
            geometry=LineSet(vertexCount=[2],
              color=ColorRGBA(DEF='HAnimSegmentLineColorRGBA',color=[(1,1,0,1),(1,1,0,0.1)]),
              coord=Coordinate(point=[(-0.05,0,0),(0.05,0,0)])))]),
        Transform(translation=(0,2.1,0),
          children=[
          Shape(DEF='HAnimSiteShape',
            geometry=IndexedFaceSet(DEF='DiamondIFS',creaseAngle=0.5,solid=False,coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1],
              color=ColorRGBA(DEF='HAnimSiteColorRGBA',color=[(1,1,0,1),(1,1,0,0.1)]),
              coord=Coordinate(point=[(0,0.01,0),(-0.01,0,0),(0,0,0.01),(0.01,0,0),(0,0,-0.01),(0,-0.01,0)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,0),transparency=0.3)))])])]),
    NavigationInfo(speed=1.5),
    Viewpoint(centerOfRotation=(0,1,0),description='skeletonJoe',position=(0,1,3)),
    HAnimHumanoid(DEF='STD_HAnim',info=["humanoidVersion=2.0"],name='HAnim',version='2.0',
      sites=[
      HAnimSite(USE='STD_Site_r_iliocristale_pt'),
      HAnimSite(USE='STD_Site_l_iliocristale_pt'),
      HAnimSite(USE='STD_Site_buttocks_standing_wall_contact_point_pt'),
      HAnimSite(USE='STD_Site_crotch_pt'),
      HAnimSite(USE='STD_Site_l_asis_pt'),
      HAnimSite(USE='STD_Site_r_asis_pt'),
      HAnimSite(USE='STD_Site_l_trochanterion_pt'),
      HAnimSite(USE='STD_Site_r_trochanterion_pt'),
      HAnimSite(USE='STD_Site_l_psis_pt'),
      HAnimSite(USE='STD_Site_r_psis_pt'),
      HAnimSite(USE='STD_Site_l_suprapatella_pt'),
      HAnimSite(USE='STD_Site_l_femoral_lateral_epicondyles_pt'),
      HAnimSite(USE='STD_Site_l_femoral_medial_epicondyles_pt'),
      HAnimSite(USE='STD_Site_l_knee_crease_pt'),
      HAnimSite(USE='STD_Site_l_tibiale_pt'),
      HAnimSite(USE='STD_Site_l_medial_malleolus_pt'),
      HAnimSite(USE='STD_Site_l_lateral_malleolus_pt'),
      HAnimSite(USE='STD_Site_l_sphyrion_pt'),
      HAnimSite(USE='STD_Site_l_calcaneus_posterior_pt'),
      HAnimSite(USE='STD_Site_l_metatarsal_phalanx_1_pt'),
      HAnimSite(USE='STD_Site_l_tarsal_distal_phalanx_1_tip'),
      HAnimSite(USE='STD_Site_l_tarsal_distal_phalanx_2_tip'),
      HAnimSite(USE='STD_Site_l_tarsal_distal_phalanx_3_tip'),
      HAnimSite(USE='STD_Site_l_tarsal_distal_phalanx_4_tip'),
      HAnimSite(USE='STD_Site_l_metatarsal_phalanx_5_pt'),
      HAnimSite(USE='STD_Site_l_tarsal_distal_phalanx_5_tip'),
      HAnimSite(USE='STD_Site_r_femoral_lateral_epicondyles_pt'),
      HAnimSite(USE='STD_Site_r_femoral_medial_epicondyles_pt'),
      HAnimSite(USE='STD_Site_r_suprapatella_pt'),
      HAnimSite(USE='STD_Site_r_knee_crease_pt'),
      HAnimSite(USE='STD_Site_r_tibiale_pt'),
      HAnimSite(USE='STD_Site_r_medial_malleolus_pt'),
      HAnimSite(USE='STD_Site_r_lateral_malleolus_pt'),
      HAnimSite(USE='STD_Site_r_sphyrion_pt'),
      HAnimSite(USE='STD_Site_r_calcaneus_posterior_pt'),
      HAnimSite(USE='STD_Site_r_metatarsal_phalanx_1_pt'),
      HAnimSite(USE='STD_Site_r_tarsal_distal_phalanx_1_tip'),
      HAnimSite(USE='STD_Site_r_tarsal_distal_phalanx_2_tip'),
      HAnimSite(USE='STD_Site_r_tarsal_distal_phalanx_3_tip'),
      HAnimSite(USE='STD_Site_r_tarsal_distal_phalanx_4_tip'),
      HAnimSite(USE='STD_Site_r_metatarsal_phalanx_5_pt'),
      HAnimSite(USE='STD_Site_r_tarsal_distal_phalanx_5_tip'),
      HAnimSite(USE='STD_Site_waist_preferred_anterior_pt'),
      HAnimSite(USE='STD_Site_waist_preferred_posterior_pt'),
      HAnimSite(USE='STD_Site_navel_pt'),
      HAnimSite(USE='STD_Site_spine_2_middle_back_pt'),
      HAnimSite(USE='STD_Site_r_rib10_pt'),
      HAnimSite(USE='STD_Site_l_rib10_pt'),
      HAnimSite(USE='STD_Site_substernale_pt'),
      HAnimSite(USE='STD_Site_r_thelion_pt'),
      HAnimSite(USE='STD_Site_l_thelion_pt'),
      HAnimSite(USE='STD_Site_r_chest_midsagittal_plane_pt'),
      HAnimSite(USE='STD_Site_l_chest_midsagittal_plane_pt'),
      HAnimSite(USE='STD_Site_rear_center_midsagittal_plane_pt'),
      HAnimSite(USE='STD_Site_mesosternale_pt'),
      HAnimSite(USE='STD_Site_spine_1_middle_back_pt'),
      HAnimSite(USE='STD_Site_cervicale_pt'),
      HAnimSite(USE='STD_Site_suprasternale_pt'),
      HAnimSite(USE='STD_Site_l_neck_base_pt'),
      HAnimSite(USE='STD_Site_r_neck_base_pt'),
      HAnimSite(USE='STD_Site_adams_apple_pt'),
      HAnimSite(USE='STD_Site_glabella_pt'),
      HAnimSite(USE='STD_Site_sellion_pt'),
      HAnimSite(USE='STD_Site_r_tragion_pt'),
      HAnimSite(USE='STD_Site_l_tragion_pt'),
      HAnimSite(USE='STD_Site_l_infraorbitale_pt'),
      HAnimSite(USE='STD_Site_r_infraorbitale_pt'),
      HAnimSite(USE='STD_Site_l_ectocanthus_pt'),
      HAnimSite(USE='STD_Site_nuchale_pt'),
      HAnimSite(USE='STD_Site_r_ectocanthus_pt'),
      HAnimSite(USE='STD_Site_skull_vertex_pt'),
      HAnimSite(USE='STD_Site_opisthocranion_pt'),
      HAnimSite(USE='STD_Site_supramenton_pt'),
      HAnimSite(USE='STD_Site_menton_pt'),
      HAnimSite(USE='STD_Site_r_gonion_pt'),
      HAnimSite(USE='STD_Site_l_gonion_pt'),
      HAnimSite(USE='STD_Site_l_axilla_distal_pt'),
      HAnimSite(USE='STD_Site_l_axilla_posterior_folds_pt'),
      HAnimSite(USE='STD_Site_l_axilla_proximal_pt'),
      HAnimSite(USE='STD_Site_l_acromion_pt'),
      HAnimSite(USE='STD_Site_l_clavicale_pt'),
      HAnimSite(USE='STD_Site_l_bideltoid_pt'),
      HAnimSite(USE='STD_Site_l_humeral_lateral_epicondyles_pt'),
      HAnimSite(USE='STD_Site_l_olecranon_pt'),
      HAnimSite(USE='STD_Site_l_humeral_medial_epicondyles_pt'),
      HAnimSite(USE='STD_Site_l_radiale_pt'),
      HAnimSite(USE='STD_Site_l_radial_styloid_pt'),
      HAnimSite(USE='STD_Site_l_ulnar_styloid_pt'),
      HAnimSite(USE='STD_Site_l_carpal_distal_phalanx_1_tip'),
      HAnimSite(USE='STD_Site_l_metacarpal_phalanx_2_pt'),
      HAnimSite(USE='STD_Site_l_dactylion_pt'),
      HAnimSite(USE='STD_Site_l_carpal_distal_phalanx_2_tip'),
      HAnimSite(USE='STD_Site_l_metacarpal_phalanx_3_pt'),
      HAnimSite(USE='STD_Site_l_carpal_distal_phalanx_3_tip'),
      HAnimSite(USE='STD_Site_l_carpal_distal_phalanx_4_tip'),
      HAnimSite(USE='STD_Site_l_metacarpal_phalanx_5_pt'),
      HAnimSite(USE='STD_Site_l_carpal_distal_phalanx_5_tip'),
      HAnimSite(USE='STD_Site_r_axilla_distal_pt'),
      HAnimSite(USE='STD_Site_r_axilla_posterior_folds_pt'),
      HAnimSite(USE='STD_Site_r_axilla_proximal_pt'),
      HAnimSite(USE='STD_Site_r_acromion_pt'),
      HAnimSite(USE='STD_Site_r_clavicale_pt'),
      HAnimSite(USE='STD_Site_r_bideltoid_pt'),
      HAnimSite(USE='STD_Site_r_humeral_lateral_epicondyles_pt'),
      HAnimSite(USE='STD_Site_r_olecranon_pt'),
      HAnimSite(USE='STD_Site_r_radiale_pt'),
      HAnimSite(USE='STD_Site_r_radial_styloid_pt'),
      HAnimSite(USE='STD_Site_r_humeral_medial_epicondyles_pt'),
      HAnimSite(USE='STD_Site_r_ulnar_styloid_pt'),
      HAnimSite(USE='STD_Site_r_carpal_distal_phalanx_1_tip'),
      HAnimSite(USE='STD_Site_r_metacarpal_phalanx_2_pt'),
      HAnimSite(USE='STD_Site_r_dactylion_pt'),
      HAnimSite(USE='STD_Site_r_carpal_distal_phalanx_2_tip'),
      HAnimSite(USE='STD_Site_r_metacarpal_phalanx_3_pt'),
      HAnimSite(USE='STD_Site_r_carpal_distal_phalanx_3_tip'),
      HAnimSite(USE='STD_Site_r_carpal_distal_phalanx_4_tip'),
      HAnimSite(USE='STD_Site_r_metacarpal_phalanx_5_pt'),
      HAnimSite(USE='STD_Site_r_carpal_distal_phalanx_5_tip')],
      children=[
      HAnimJoint(DEF='STD_Joint_humanoid_root',name='humanoid_root',center=(0.0000,0.8240,0.0277),ulimit=[0,0,0],llimit=[0,0,0],
        children=[
        HAnimSegment(DEF='STD_Segment_sacrum',name='sacrum'),
        HAnimJoint(DEF='STD_Joint_sacroiliac',name='sacroiliac',center=(0.0000,0.9149,0.0016),ulimit=[0,0,0],llimit=[0,0,0],
          children=[
          HAnimSegment(DEF='STD_Segment_pelvis',name='pelvis',
            children=[
            HAnimSite(DEF='STD_Site_r_iliocristale_pt',name='r_iliocristale_pt',translation=(-0.1525,1.0628,0.0035),
              children=[
              TouchSensor(description='HAnimSite r_iliocristale_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_l_iliocristale_pt',name='l_iliocristale_pt',translation=(0.1612,1.0537,0.0008),
              children=[
              TouchSensor(description='HAnimSite l_iliocristale_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_buttocks_standing_wall_contact_point_pt',name='buttocks_standing_wall_contact_point_pt',
              children=[
              TouchSensor(description='HAnimSite buttocks_standing_wall_contact_point_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_crotch_pt',name='crotch_pt',translation=(0.0034,0.8266,0.0257),
              children=[
              TouchSensor(description='HAnimSite crotch_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_l_asis_pt',name='l_asis_pt',translation=(0.0925,0.9983,0.1052),
              children=[
              TouchSensor(description='HAnimSite l_asis_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_r_asis_pt',name='r_asis_pt',translation=(-0.0887,1.0021,0.1112),
              children=[
              TouchSensor(description='HAnimSite r_asis_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_l_trochanterion_pt',name='l_trochanterion_pt',translation=(0.1677,0.8336,0.0303),
              children=[
              TouchSensor(description='HAnimSite l_trochanterion_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_r_trochanterion_pt',name='r_trochanterion_pt',translation=(-0.1689,0.8419,0.0352),
              children=[
              TouchSensor(description='HAnimSite r_trochanterion_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_l_psis_pt',name='l_psis_pt',translation=(0.0774,1.0190,-0.1151),
              children=[
              TouchSensor(description='HAnimSite l_psis_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_r_psis_pt',name='r_psis_pt',translation=(-0.0716,1.0190,-0.1138),
              children=[
              TouchSensor(description='HAnimSite r_psis_pt'),
              Shape(USE='HAnimSiteShape')])]),
          HAnimJoint(DEF='STD_Joint_l_hip',name='l_hip',center=(0.0961,0.9124,-0.0001),ulimit=[0,0,0],llimit=[0,0,0],
            children=[
            HAnimSegment(DEF='STD_Segment_l_thigh',name='l_thigh',
              children=[
              HAnimSite(DEF='STD_Site_l_suprapatella_pt',name='l_suprapatella_pt',
                children=[
                TouchSensor(description='HAnimSite l_suprapatella_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_l_femoral_lateral_epicondyles_pt',name='l_femoral_lateral_epicondyles_pt',translation=(0.1598,0.4967,0.0297),
                children=[
                TouchSensor(description='HAnimSite l_femoral_lateral_epicondyles_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_l_femoral_medial_epicondyles_pt',name='l_femoral_medial_epicondyles_pt',translation=(0.0398,0.4946,0.0303),
                children=[
                TouchSensor(description='HAnimSite l_femoral_medial_epicondyles_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_l_knee_crease_pt',name='l_knee_crease_pt',translation=(0.0993,0.4881,-0.0309),
                children=[
                TouchSensor(description='HAnimSite l_knee_crease_pt'),
                Shape(USE='HAnimSiteShape')])]),
            HAnimJoint(DEF='STD_Joint_l_knee',name='l_knee',center=(0.1040,0.4867,0.0308),ulimit=[0,0,0],llimit=[0,0,0],
              children=[
              HAnimSegment(DEF='STD_Segment_l_calf',name='l_calf',
                children=[
                HAnimSite(DEF='STD_Site_l_tibiale_pt',name='l_tibiale_pt',
                  children=[
                  TouchSensor(description='HAnimSite l_tibiale_pt'),
                  Shape(USE='HAnimSiteShape')]),
                HAnimSite(DEF='STD_Site_l_medial_malleolus_pt',name='l_medial_malleolus_pt',translation=(0.0890,0.0716,-0.0881),
                  children=[
                  TouchSensor(description='HAnimSite l_medial_malleolus_pt'),
                  Shape(USE='HAnimSiteShape')]),
                HAnimSite(DEF='STD_Site_l_lateral_malleolus_pt',name='l_lateral_malleolus_pt',translation=(0.1308,0.0597,-0.1032),
                  children=[
                  TouchSensor(description='HAnimSite l_lateral_malleolus_pt'),
                  Shape(USE='HAnimSiteShape')])]),
              HAnimJoint(DEF='STD_Joint_l_talocrural',name='l_talocrural',center=(0.1101,0.0656,-0.0736),ulimit=[0,0,0],llimit=[0,0,0],
                children=[
                HAnimSegment(DEF='STD_Segment_l_talus',name='l_talus',
                  children=[
                  HAnimSite(DEF='STD_Site_l_sphyrion_pt',name='l_sphyrion_pt',translation=(0.0890,0.0575,-0.0943),
                    children=[
                    TouchSensor(description='HAnimSite l_sphyrion_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='STD_Site_l_calcaneus_posterior_pt',name='l_calcaneus_posterior_pt',translation=(0.0974,0.0259,-0.1171),
                    children=[
                    TouchSensor(description='HAnimSite l_calcaneus_posterior_pt'),
                    Shape(USE='HAnimSiteShape')])]),
                HAnimJoint(DEF='STD_Joint_l_talocalcaneonavicular',name='l_talocalcaneonavicular',ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='STD_Segment_l_navicular',name='l_navicular'),
                  HAnimJoint(DEF='STD_Joint_l_cuneonavicular_1',name='l_cuneonavicular_1',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='STD_Segment_l_cuneiform_1',name='l_cuneiform_1'),
                    HAnimJoint(DEF='STD_Joint_l_tarsometatarsal_1',name='l_tarsometatarsal_1',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='STD_Segment_l_metatarsal_1',name='l_metatarsal_1'),
                      HAnimJoint(DEF='STD_Joint_l_metatarsophalangeal_1',name='l_metatarsophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='STD_Segment_l_tarsal_proximal_phalanx_1',name='l_tarsal_proximal_phalanx_1',
                          children=[
                          HAnimSite(DEF='STD_Site_l_metatarsal_phalanx_1_pt',name='l_metatarsal_phalanx_1_pt',
                            children=[
                            TouchSensor(description='HAnimSite l_metatarsal_phalanx_1_pt'),
                            Shape(USE='HAnimSiteShape')])]),
                        HAnimJoint(DEF='STD_Joint_l_tarsal_interphalangeal_1',name='l_tarsal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='STD_Segment_l_tarsal_distal_phalanx_1',name='l_tarsal_distal_phalanx_1',
                            children=[
                            HAnimSite(DEF='STD_Site_l_tarsal_distal_phalanx_1_tip',name='l_tarsal_distal_phalanx_1_tip',
                              children=[
                              TouchSensor(description='HAnimSite l_tarsal_distal_phalanx_1_tip'),
                              Shape(USE='HAnimSiteShape')])])])])])]),
                  HAnimJoint(DEF='STD_Joint_l_cuneonavicular_2',name='l_cuneonavicular_2',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='STD_Segment_l_cuneiform_2',name='l_cuneiform_2'),
                    HAnimJoint(DEF='STD_Joint_l_tarsometatarsal_2',name='l_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='STD_Segment_l_metatarsal_2',name='l_metatarsal_2'),
                      HAnimJoint(DEF='STD_Joint_l_metatarsophalangeal_2',name='l_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='STD_Segment_l_tarsal_proximal_phalanx_2',name='l_tarsal_proximal_phalanx_2'),
                        HAnimJoint(DEF='STD_Joint_l_tarsal_proximal_interphalangeal_2',name='l_tarsal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='STD_Segment_l_tarsal_middle_phalanx_2',name='l_tarsal_middle_phalanx_2'),
                          HAnimJoint(DEF='STD_Joint_l_tarsal_distal_interphalangeal_2',name='l_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                            children=[
                            HAnimSegment(DEF='STD_Segment_l_tarsal_distal_phalanx_2',name='l_tarsal_distal_phalanx_2',
                              children=[
                              HAnimSite(DEF='STD_Site_l_tarsal_distal_phalanx_2_tip',name='l_tarsal_distal_phalanx_2_tip',translation=(0.1195,0.0079,0.1433),
                                children=[
                                TouchSensor(description='HAnimSite l_tarsal_distal_phalanx_2_tip'),
                                Shape(USE='HAnimSiteShape')])])])])])])]),
                  HAnimJoint(DEF='STD_Joint_l_cuneonavicular_3',name='l_cuneonavicular_3',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='STD_Segment_l_cuneiform_3',name='l_cuneiform_3'),
                    HAnimJoint(DEF='STD_Joint_l_tarsometatarsal_3',name='l_tarsometatarsal_3',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='STD_Segment_l_metatarsal_3',name='l_metatarsal_3'),
                      HAnimJoint(DEF='STD_Joint_l_metatarsophalangeal_3',name='l_metatarsophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='STD_Segment_l_tarsal_proximal_phalanx_3',name='l_tarsal_proximal_phalanx_3'),
                        HAnimJoint(DEF='STD_Joint_l_tarsal_proximal_interphalangeal_3',name='l_tarsal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='STD_Segment_l_tarsal_middle_phalanx_3',name='l_tarsal_middle_phalanx_3'),
                          HAnimJoint(DEF='STD_Joint_l_tarsal_distal_interphalangeal_3',name='l_tarsal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                            children=[
                            HAnimSegment(DEF='STD_Segment_l_tarsal_distal_phalanx_3',name='l_tarsal_distal_phalanx_3',
                              children=[
                              HAnimSite(DEF='STD_Site_l_tarsal_distal_phalanx_3_tip',name='l_tarsal_distal_phalanx_3_tip',
                                children=[
                                TouchSensor(description='HAnimSite l_tarsal_distal_phalanx_3_tip'),
                                Shape(USE='HAnimSiteShape')])])])])])])])]),
                HAnimJoint(DEF='STD_Joint_l_calcaneocuboid',name='l_calcaneocuboid',ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='STD_Segment_l_calcaneus',name='l_calcaneus'),
                  HAnimJoint(DEF='STD_Joint_l_transversetarsal',name='l_transversetarsal',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='STD_Segment_l_cuboid',name='l_cuboid'),
                    HAnimJoint(DEF='STD_Joint_l_tarsometatarsal_4',name='l_tarsometatarsal_4',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='STD_Segment_l_metatarsal_4',name='l_metatarsal_4'),
                      HAnimJoint(DEF='STD_Joint_l_metatarsophalangeal_4',name='l_metatarsophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='STD_Segment_l_tarsal_proximal_phalanx_4',name='l_tarsal_proximal_phalanx_4'),
                        HAnimJoint(DEF='STD_Joint_l_tarsal_proximal_interphalangeal_4',name='l_tarsal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='STD_Segment_l_tarsal_middle_phalanx_4',name='l_tarsal_middle_phalanx_4'),
                          HAnimJoint(DEF='STD_Joint_l_tarsal_distal_interphalangeal_4',name='l_tarsal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                            children=[
                            HAnimSegment(DEF='STD_Segment_l_tarsal_distal_phalanx_4',name='l_tarsal_distal_phalanx_4',
                              children=[
                              HAnimSite(DEF='STD_Site_l_tarsal_distal_phalanx_4_tip',name='l_tarsal_distal_phalanx_4_tip',
                                children=[
                                TouchSensor(description='HAnimSite l_tarsal_distal_phalanx_4_tip'),
                                Shape(USE='HAnimSiteShape')])])])])])]),
                    HAnimJoint(DEF='STD_Joint_l_tarsometatarsal_5',name='l_tarsometatarsal_5',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='STD_Segment_l_metatarsal_5',name='l_metatarsal_5'),
                      HAnimJoint(DEF='STD_Joint_l_metatarsophalangeal_5',name='l_metatarsophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='STD_Segment_l_tarsal_proximal_phalanx_5',name='l_tarsal_proximal_phalanx_5',
                          children=[
                          HAnimSite(DEF='STD_Site_l_metatarsal_phalanx_5_pt',name='l_metatarsal_phalanx_5_pt',
                            children=[
                            TouchSensor(description='HAnimSite l_metatarsal_phalanx_5_pt'),
                            Shape(USE='HAnimSiteShape')])]),
                        HAnimJoint(DEF='STD_Joint_l_tarsal_proximal_interphalangeal_5',name='l_tarsal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='STD_Segment_l_tarsal_middle_phalanx_5',name='l_tarsal_middle_phalanx_5'),
                          HAnimJoint(DEF='STD_Joint_l_tarsal_distal_interphalangeal_5',name='l_tarsal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                            children=[
                            HAnimSegment(DEF='STD_Segment_l_tarsal_distal_phalanx_5',name='l_tarsal_distal_phalanx_5',
                              children=[
                              HAnimSite(DEF='STD_Site_l_tarsal_distal_phalanx_5_tip',name='l_tarsal_distal_phalanx_5_tip',
                                children=[
                                TouchSensor(description='HAnimSite l_tarsal_distal_phalanx_5_tip'),
                                Shape(USE='HAnimSiteShape')])])])])])])])])])])]),
          HAnimJoint(DEF='STD_Joint_r_hip',name='r_hip',center=(-0.0950,0.9171,0.0029),ulimit=[0,0,0],llimit=[0,0,0],
            children=[
            HAnimSegment(DEF='STD_Segment_r_thigh',name='r_thigh',
              children=[
              HAnimSite(DEF='STD_Site_r_femoral_lateral_epicondyles_pt',name='r_femoral_lateral_epicondyles_pt',translation=(-0.1421,0.4992,0.0310),
                children=[
                TouchSensor(description='HAnimSite r_femoral_lateral_epicondyles_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_r_femoral_medial_epicondyles_pt',name='r_femoral_medial_epicondyles_pt',translation=(-0.0221,0.5014,0.0289),
                children=[
                TouchSensor(description='HAnimSite r_femoral_medial_epicondyles_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_r_suprapatella_pt',name='r_suprapatella_pt',
                children=[
                TouchSensor(description='HAnimSite r_suprapatella_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_r_knee_crease_pt',name='r_knee_crease_pt',translation=(-0.0825,0.4932,-0.0326),
                children=[
                TouchSensor(description='HAnimSite r_knee_crease_pt'),
                Shape(USE='HAnimSiteShape')])]),
            HAnimJoint(DEF='STD_Joint_r_knee',name='r_knee',center=(-0.0867,0.4913,0.0318),ulimit=[0,0,0],llimit=[0,0,0],
              children=[
              HAnimSegment(DEF='STD_Segment_r_calf',name='r_calf',
                children=[
                HAnimSite(DEF='STD_Site_r_tibiale_pt',name='r_tibiale_pt',
                  children=[
                  TouchSensor(description='HAnimSite r_tibiale_pt'),
                  Shape(USE='HAnimSiteShape')]),
                HAnimSite(DEF='STD_Site_r_medial_malleolus_pt',name='r_medial_malleolus_pt',translation=(-0.0591,0.0760,-0.0928),
                  children=[
                  TouchSensor(description='HAnimSite r_medial_malleolus_pt'),
                  Shape(USE='HAnimSiteShape')]),
                HAnimSite(DEF='STD_Site_r_lateral_malleolus_pt',name='r_lateral_malleolus_pt',translation=(-0.1006,0.0658,-0.1075),
                  children=[
                  TouchSensor(description='HAnimSite r_lateral_malleolus_pt'),
                  Shape(USE='HAnimSiteShape')])]),
              HAnimJoint(DEF='STD_Joint_r_talocrural',name='r_talocrural',center=(-0.0801,0.0712,-0.0766),ulimit=[0,0,0],llimit=[0,0,0],
                children=[
                HAnimSegment(DEF='STD_Segment_r_talus',name='r_talus',
                  children=[
                  HAnimSite(DEF='STD_Site_r_sphyrion_pt',name='r_sphyrion_pt',translation=(-0.0603,0.0610,-0.1002),
                    children=[
                    TouchSensor(description='HAnimSite r_sphyrion_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='STD_Site_r_calcaneus_posterior_pt',name='r_calcaneus_posterior_pt',translation=(-0.0692,0.0297,-0.1221),
                    children=[
                    TouchSensor(description='HAnimSite r_calcaneus_posterior_pt'),
                    Shape(USE='HAnimSiteShape')])]),
                HAnimJoint(DEF='STD_Joint_r_talocalcaneonavicular',name='r_talocalcaneonavicular',ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='STD_Segment_r_navicular',name='r_navicular'),
                  HAnimJoint(DEF='STD_Joint_r_cuneonavicular_1',name='r_cuneonavicular_1',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='STD_Segment_r_cuneiform_1',name='r_cuneiform_1'),
                    HAnimJoint(DEF='STD_Joint_r_tarsometatarsal_1',name='r_tarsometatarsal_1',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='STD_Segment_r_metatarsal_1',name='r_metatarsal_1'),
                      HAnimJoint(DEF='STD_Joint_r_metatarsophalangeal_1',name='r_metatarsophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='STD_Segment_r_tarsal_proximal_phalanx_1',name='r_tarsal_proximal_phalanx_1',
                          children=[
                          HAnimSite(DEF='STD_Site_r_metatarsal_phalanx_1_pt',name='r_metatarsal_phalanx_1_pt',
                            children=[
                            TouchSensor(description='HAnimSite r_metatarsal_phalanx_1_pt'),
                            Shape(USE='HAnimSiteShape')])]),
                        HAnimJoint(DEF='STD_Joint_r_tarsal_interphalangeal_1',name='r_tarsal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='STD_Segment_r_tarsal_distal_phalanx_1',name='r_tarsal_distal_phalanx_1',
                            children=[
                            HAnimSite(DEF='STD_Site_r_tarsal_distal_phalanx_1_tip',name='r_tarsal_distal_phalanx_1_tip',
                              children=[
                              TouchSensor(description='HAnimSite r_tarsal_distal_phalanx_1_tip'),
                              Shape(USE='HAnimSiteShape')])])])])])]),
                  HAnimJoint(DEF='STD_Joint_r_cuneonavicular_2',name='r_cuneonavicular_2',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='STD_Segment_r_cuneiform_2',name='r_cuneiform_2'),
                    HAnimJoint(DEF='STD_Joint_r_tarsometatarsal_2',name='r_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='STD_Segment_r_metatarsal_2',name='r_metatarsal_2'),
                      HAnimJoint(DEF='STD_Joint_r_metatarsophalangeal_2',name='r_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='STD_Segment_r_tarsal_proximal_phalanx_2',name='r_tarsal_proximal_phalanx_2'),
                        HAnimJoint(DEF='STD_Joint_r_tarsal_proximal_interphalangeal_2',name='r_tarsal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='STD_Segment_r_tarsal_middle_phalanx_2',name='r_tarsal_middle_phalanx_2'),
                          HAnimJoint(DEF='STD_Joint_r_tarsal_distal_interphalangeal_2',name='r_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                            children=[
                            HAnimSegment(DEF='STD_Segment_r_tarsal_distal_phalanx_2',name='r_tarsal_distal_phalanx_2',
                              children=[
                              HAnimSite(DEF='STD_Site_r_tarsal_distal_phalanx_2_tip',name='r_tarsal_distal_phalanx_2_tip',translation=(-0.0883,0.0134,0.1383),
                                children=[
                                TouchSensor(description='HAnimSite r_tarsal_distal_phalanx_2_tip'),
                                Shape(USE='HAnimSiteShape')])])])])])])]),
                  HAnimJoint(DEF='STD_Joint_r_cuneonavicular_3',name='r_cuneonavicular_3',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='STD_Segment_r_cuneiform_3',name='r_cuneiform_3'),
                    HAnimJoint(DEF='STD_Joint_r_tarsometatarsal_3',name='r_tarsometatarsal_3',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='STD_Segment_r_metatarsal_3',name='r_metatarsal_3'),
                      HAnimJoint(DEF='STD_Joint_r_metatarsophalangeal_3',name='r_metatarsophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='STD_Segment_r_tarsal_proximal_phalanx_3',name='r_tarsal_proximal_phalanx_3'),
                        HAnimJoint(DEF='STD_Joint_r_tarsal_proximal_interphalangeal_3',name='r_tarsal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='STD_Segment_r_tarsal_middle_phalanx_3',name='r_tarsal_middle_phalanx_3'),
                          HAnimJoint(DEF='STD_Joint_r_tarsal_distal_interphalangeal_3',name='r_tarsal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                            children=[
                            HAnimSegment(DEF='STD_Segment_r_tarsal_distal_phalanx_3',name='r_tarsal_distal_phalanx_3',
                              children=[
                              HAnimSite(DEF='STD_Site_r_tarsal_distal_phalanx_3_tip',name='r_tarsal_distal_phalanx_3_tip',
                                children=[
                                TouchSensor(description='HAnimSite r_tarsal_distal_phalanx_3_tip'),
                                Shape(USE='HAnimSiteShape')])])])])])])])]),
                HAnimJoint(DEF='STD_Joint_r_calcaneocuboid',name='r_calcaneocuboid',ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='STD_Segment_r_calcaneus',name='r_calcaneus'),
                  HAnimJoint(DEF='STD_Joint_r_transversetarsal',name='r_transversetarsal',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='STD_Segment_r_cuboid',name='r_cuboid'),
                    HAnimJoint(DEF='STD_Joint_r_tarsometatarsal_4',name='r_tarsometatarsal_4',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='STD_Segment_r_metatarsal_4',name='r_metatarsal_4'),
                      HAnimJoint(DEF='STD_Joint_r_metatarsophalangeal_4',name='r_metatarsophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='STD_Segment_r_tarsal_proximal_phalanx_4',name='r_tarsal_proximal_phalanx_4'),
                        HAnimJoint(DEF='STD_Joint_r_tarsal_proximal_interphalangeal_4',name='r_tarsal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='STD_Segment_r_tarsal_middle_phalanx_4',name='r_tarsal_middle_phalanx_4'),
                          HAnimJoint(DEF='STD_Joint_r_tarsal_distal_interphalangeal_4',name='r_tarsal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                            children=[
                            HAnimSegment(DEF='STD_Segment_r_tarsal_distal_phalanx_4',name='r_tarsal_distal_phalanx_4',
                              children=[
                              HAnimSite(DEF='STD_Site_r_tarsal_distal_phalanx_4_tip',name='r_tarsal_distal_phalanx_4_tip',
                                children=[
                                TouchSensor(description='HAnimSite r_tarsal_distal_phalanx_4_tip'),
                                Shape(USE='HAnimSiteShape')])])])])])]),
                    HAnimJoint(DEF='STD_Joint_r_tarsometatarsal_5',name='r_tarsometatarsal_5',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='STD_Segment_r_metatarsal_5',name='r_metatarsal_5'),
                      HAnimJoint(DEF='STD_Joint_r_metatarsophalangeal_5',name='r_metatarsophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='STD_Segment_r_tarsal_proximal_phalanx_5',name='r_tarsal_proximal_phalanx_5',
                          children=[
                          HAnimSite(DEF='STD_Site_r_metatarsal_phalanx_5_pt',name='r_metatarsal_phalanx_5_pt',
                            children=[
                            TouchSensor(description='HAnimSite r_metatarsal_phalanx_5_pt'),
                            Shape(USE='HAnimSiteShape')])]),
                        HAnimJoint(DEF='STD_Joint_r_tarsal_proximal_interphalangeal_5',name='r_tarsal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='STD_Segment_r_tarsal_middle_phalanx_5',name='r_tarsal_middle_phalanx_5'),
                          HAnimJoint(DEF='STD_Joint_r_tarsal_distal_interphalangeal_5',name='r_tarsal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                            children=[
                            HAnimSegment(DEF='STD_Segment_r_tarsal_distal_phalanx_5',name='r_tarsal_distal_phalanx_5',
                              children=[
                              HAnimSite(DEF='STD_Site_r_tarsal_distal_phalanx_5_tip',name='r_tarsal_distal_phalanx_5_tip',
                                children=[
                                TouchSensor(description='HAnimSite r_tarsal_distal_phalanx_5_tip'),
                                Shape(USE='HAnimSiteShape')])])])])])])])])])])])]),
        HAnimJoint(DEF='STD_Joint_vl5',name='vl5',center=(0.0028,1.0568,-0.0776),ulimit=[0,0,0],llimit=[0,0,0],
          children=[
          HAnimSegment(DEF='STD_Segment_l5',name='l5',
            children=[
            HAnimSite(DEF='STD_Site_waist_preferred_anterior_pt',name='waist_preferred_anterior_pt',
              children=[
              TouchSensor(description='HAnimSite waist_preferred_anterior_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_waist_preferred_posterior_pt',name='waist_preferred_posterior_pt',translation=(0.2900,1.0915,-0.1091),
              children=[
              TouchSensor(description='HAnimSite waist_preferred_posterior_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_navel_pt',name='navel_pt',translation=(0.0069,1.0966,0.1017),
              children=[
              TouchSensor(description='HAnimSite navel_pt'),
              Shape(USE='HAnimSiteShape')])]),
          HAnimJoint(DEF='STD_Joint_vl4',name='vl4',center=(0.0035,1.0925,-0.0787),ulimit=[0,0,0],llimit=[0,0,0],
            children=[
            HAnimSegment(DEF='STD_Segment_l4',name='l4'),
            HAnimJoint(DEF='STD_Joint_vl3',name='vl3',center=(0.0041,1.1276,-0.0796),ulimit=[0,0,0],llimit=[0,0,0],
              children=[
              HAnimSegment(DEF='STD_Segment_l3',name='l3'),
              HAnimJoint(DEF='STD_Joint_vl2',name='vl2',center=(0.0045,1.1546,-0.0800),ulimit=[0,0,0],llimit=[0,0,0],
                children=[
                HAnimSegment(DEF='STD_Segment_l2',name='l2',
                  children=[
                  HAnimSite(DEF='STD_Site_spine_2_middle_back_pt',name='spine_2_middle_back_pt',
                    children=[
                    TouchSensor(description='HAnimSite spine_2_middle_back_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='STD_Site_r_rib10_pt',name='r_rib10_pt',translation=(-0.0711,1.1941,0.1016),
                    children=[
                    TouchSensor(description='HAnimSite r_rib10_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='STD_Site_l_rib10_pt',name='l_rib10_pt',translation=(0.0871,1.1925,0.0992),
                    children=[
                    TouchSensor(description='HAnimSite l_rib10_pt'),
                    Shape(USE='HAnimSiteShape')])]),
                HAnimJoint(DEF='STD_Joint_vl1',name='vl1',center=(0.0048,1.1912,-0.0805),ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='STD_Segment_l1',name='l1'),
                  HAnimJoint(DEF='STD_Joint_vt12',name='vt12',center=(0.0051,1.2278,-0.0808),ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='STD_Segment_t12',name='t12'),
                    HAnimJoint(DEF='STD_Joint_vt11',name='vt11',center=(0.0053,1.2679,-0.0810),ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='STD_Segment_t11',name='t11'),
                      HAnimJoint(DEF='STD_Joint_vt10',name='vt10',center=(0.0056,1.2848,-0.0822),ulimit=[0,0,0],llimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='STD_Segment_t10',name='t10',
                          children=[
                          HAnimSite(DEF='STD_Site_substernale_pt',name='substernale_pt',translation=(0.0085,1.2995,0.1147),
                            children=[
                            TouchSensor(description='HAnimSite substernale_pt'),
                            Shape(USE='HAnimSiteShape')])]),
                        HAnimJoint(DEF='STD_Joint_vt9',name='vt9',center=(0.0057,1.3126,-0.0838),ulimit=[0,0,0],llimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='STD_Segment_t9',name='t9',
                            children=[
                            HAnimSite(DEF='STD_Site_r_thelion_pt',name='r_thelion_pt',translation=(-0.0736,1.3385,0.1217),
                              children=[
                              TouchSensor(description='HAnimSite r_thelion_pt'),
                              Shape(USE='HAnimSiteShape')]),
                            HAnimSite(DEF='STD_Site_l_thelion_pt',name='l_thelion_pt',translation=(0.0918,1.3382,0.1192),
                              children=[
                              TouchSensor(description='HAnimSite l_thelion_pt'),
                              Shape(USE='HAnimSiteShape')])]),
                          HAnimJoint(DEF='STD_Joint_vt8',name='vt8',center=(0.0057,1.3382,-0.0845),ulimit=[0,0,0],llimit=[0,0,0],
                            children=[
                            HAnimSegment(DEF='STD_Segment_t8',name='t8'),
                            HAnimJoint(DEF='STD_Joint_vt7',name='vt7',center=(0.0058,1.3625,-0.0833),ulimit=[0,0,0],llimit=[0,0,0],
                              children=[
                              HAnimSegment(DEF='STD_Segment_t7',name='t7'),
                              HAnimJoint(DEF='STD_Joint_vt6',name='vt6',center=(0.0059,1.3866,-0.0800),ulimit=[0,0,0],llimit=[0,0,0],
                                children=[
                                HAnimSegment(DEF='STD_Segment_t6',name='t6',
                                  children=[
                                  HAnimSite(DEF='STD_Site_r_chest_midsagittal_plane_pt',name='r_chest_midsagittal_plane_pt',
                                    children=[
                                    TouchSensor(description='HAnimSite r_chest_midsagittal_plane_pt'),
                                    Shape(USE='HAnimSiteShape')]),
                                  HAnimSite(DEF='STD_Site_l_chest_midsagittal_plane_pt',name='l_chest_midsagittal_plane_pt',
                                    children=[
                                    TouchSensor(description='HAnimSite l_chest_midsagittal_plane_pt'),
                                    Shape(USE='HAnimSiteShape')]),
                                  HAnimSite(DEF='STD_Site_rear_center_midsagittal_plane_pt',name='rear_center_midsagittal_plane_pt',
                                    children=[
                                    TouchSensor(description='HAnimSite rear_center_midsagittal_plane_pt'),
                                    Shape(USE='HAnimSiteShape')]),
                                  HAnimSite(DEF='STD_Site_mesosternale_pt',name='mesosternale_pt',
                                    children=[
                                    TouchSensor(description='HAnimSite mesosternale_pt'),
                                    Shape(USE='HAnimSiteShape')])]),
                                HAnimJoint(DEF='STD_Joint_vt5',name='vt5',center=(0.0060,1.4102,-0.0745),ulimit=[0,0,0],llimit=[0,0,0],
                                  children=[
                                  HAnimSegment(DEF='STD_Segment_t5',name='t5',
                                    children=[
                                    HAnimSite(DEF='STD_Site_spine_1_middle_back_pt',name='spine_1_middle_back_pt',
                                      children=[
                                      TouchSensor(description='HAnimSite spine_1_middle_back_pt'),
                                      Shape(USE='HAnimSiteShape')])]),
                                  HAnimJoint(DEF='STD_Joint_vt4',name='vt4',center=(0.0061,1.4320,-0.0675),ulimit=[0,0,0],llimit=[0,0,0],
                                    children=[
                                    HAnimSegment(DEF='STD_Segment_t4',name='t4'),
                                    HAnimJoint(DEF='STD_Joint_vt3',name='vt3',center=(0.0062,1.4583,-0.0570),ulimit=[0,0,0],llimit=[0,0,0],
                                      children=[
                                      HAnimSegment(DEF='STD_Segment_t3',name='t3'),
                                      HAnimJoint(DEF='STD_Joint_vt2',name='vt2',center=(0.0063,1.4761,-0.0484),ulimit=[0,0,0],llimit=[0,0,0],
                                        children=[
                                        HAnimSegment(DEF='STD_Segment_t2',name='t2'),
                                        HAnimJoint(DEF='STD_Joint_vt1',name='vt1',center=(0.0065,1.4951,-0.0387),ulimit=[0,0,0],llimit=[0,0,0],
                                          children=[
                                          HAnimSegment(DEF='STD_Segment_t1',name='t1',
                                            children=[
                                            HAnimSite(DEF='STD_Site_cervicale_pt',name='cervicale_pt',translation=(0.0064,1.520,-0.0815),
                                              children=[
                                              TouchSensor(description='HAnimSite cervicale_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='STD_Site_suprasternale_pt',name='suprasternale_pt',translation=(0.0084,1.4714,0.0551),
                                              children=[
                                              TouchSensor(description='HAnimSite suprasternale_pt'),
                                              Shape(USE='HAnimSiteShape')])]),
                                          HAnimJoint(DEF='STD_Joint_vc7',name='vc7',center=(0.0066,1.5132,-0.0301),ulimit=[0,0,0],llimit=[0,0,0],
                                            children=[
                                            HAnimSegment(DEF='STD_Segment_c7',name='c7',
                                              children=[
                                              HAnimSite(DEF='STD_Site_l_neck_base_pt',name='l_neck_base_pt',translation=(0.0646,1.5141,-0.0380),
                                                children=[
                                                TouchSensor(description='HAnimSite l_neck_base_pt'),
                                                Shape(USE='HAnimSiteShape')]),
                                              HAnimSite(DEF='STD_Site_r_neck_base_pt',name='r_neck_base_pt',translation=(-0.0419,1.5149,-0.0220),
                                                children=[
                                                TouchSensor(description='HAnimSite r_neck_base_pt'),
                                                Shape(USE='HAnimSiteShape')])]),
                                            HAnimJoint(DEF='STD_Joint_vc6',name='vc6',center=(0.0066,1.5357,-0.0143),ulimit=[0,0,0],llimit=[0,0,0],
                                              children=[
                                              HAnimSegment(DEF='STD_Segment_c6',name='c6'),
                                              HAnimJoint(DEF='STD_Joint_vc5',name='vc5',center=(0.0066,1.5520,-0.0082),ulimit=[0,0,0],llimit=[0,0,0],
                                                children=[
                                                HAnimSegment(DEF='STD_Segment_c5',name='c5'),
                                                HAnimJoint(DEF='STD_Joint_vc4',name='vc4',center=(0.0066,1.5662,-0.0084),ulimit=[0,0,0],llimit=[0,0,0],
                                                  children=[
                                                  HAnimSegment(DEF='STD_Segment_c4',name='c4'),
                                                  HAnimJoint(DEF='STD_Joint_vc3',name='vc3',center=(0.0066,1.5800,-0.0103),ulimit=[0,0,0],llimit=[0,0,0],
                                                    children=[
                                                    HAnimSegment(DEF='STD_Segment_c3',name='c3'),
                                                    HAnimJoint(DEF='STD_Joint_vc2',name='vc2',center=(0.0066,1.5928,-0.0103),ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='STD_Segment_c2',name='c2',
                                                        children=[
                                                        HAnimSite(DEF='STD_Site_adams_apple_pt',name='adams_apple_pt',
                                                          children=[
                                                          TouchSensor(description='HAnimSite adams_apple_pt'),
                                                          Shape(USE='HAnimSiteShape')])]),
                                                      HAnimJoint(DEF='STD_Joint_vc1',name='vc1',center=(0.0066,1.6144,-0.0034),ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='STD_Segment_c1',name='c1'),
                                                        HAnimJoint(DEF='STD_Joint_skullbase',name='skullbase',center=(0.0044,1.6209,0.0236),ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='STD_Segment_skull',name='skull',
                                                            children=[
                                                            HAnimSite(DEF='STD_Site_glabella_pt',name='glabella_pt',
                                                              children=[
                                                              TouchSensor(description='HAnimSite glabella_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='STD_Site_sellion_pt',name='sellion_pt',translation=(0.0058,1.6316,0.0852),
                                                              children=[
                                                              TouchSensor(description='HAnimSite sellion_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='STD_Site_r_tragion_pt',name='r_tragion_pt',translation=(-0.0646,1.6347,0.0302),
                                                              children=[
                                                              TouchSensor(description='HAnimSite r_tragion_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='STD_Site_l_tragion_pt',name='l_tragion_pt',translation=(0.0739,1.6348,0.0282),
                                                              children=[
                                                              TouchSensor(description='HAnimSite l_tragion_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='STD_Site_l_infraorbitale_pt',name='l_infraorbitale_pt',translation=(0.0341,1.6171,0.0752),
                                                              children=[
                                                              TouchSensor(description='HAnimSite l_infraorbitale_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='STD_Site_r_infraorbitale_pt',name='r_infraorbitale_pt',translation=(-0.0237,1.6171,0.0752),
                                                              children=[
                                                              TouchSensor(description='HAnimSite r_infraorbitale_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='STD_Site_l_ectocanthus_pt',name='l_ectocanthus_pt',
                                                              children=[
                                                              TouchSensor(description='HAnimSite l_ectocanthus_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='STD_Site_nuchale_pt',name='nuchale_pt',translation=(0.0039,1.5972,-0.0796),
                                                              children=[
                                                              TouchSensor(description='HAnimSite nuchale_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='STD_Site_r_ectocanthus_pt',name='r_ectocanthus_pt',
                                                              children=[
                                                              TouchSensor(description='HAnimSite r_ectocanthus_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='STD_Site_skull_vertex_pt',name='skull_vertex_pt',translation=(0.0050,1.7504,0.0055),
                                                              children=[
                                                              TouchSensor(description='HAnimSite skull_vertex_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='STD_Site_opisthocranion_pt',name='opisthocranion_pt',
                                                              children=[
                                                              TouchSensor(description='HAnimSite opisthocranion_pt'),
                                                              Shape(USE='HAnimSiteShape')])]),
                                                          HAnimJoint(DEF='STD_Joint_l_eyelid_joint',name='l_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='STD_Segment_l_eyelid',name='l_eyelid'),
                                                            HAnimJoint(DEF='STD_Joint_r_eyelid_joint',name='r_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0],
                                                              children=[
                                                              HAnimSegment(DEF='STD_Segment_r_eyelid',name='r_eyelid'),
                                                              HAnimJoint(DEF='STD_Joint_l_eyeball_joint',name='l_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0],
                                                                children=[
                                                                HAnimSegment(DEF='STD_Segment_l_eyeball',name='l_eyeball'),
                                                                HAnimJoint(DEF='STD_Joint_r_eyeball_joint',name='r_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0],
                                                                  children=[
                                                                  HAnimSegment(DEF='STD_Segment_r_eyeball',name='r_eyeball'),
                                                                  HAnimJoint(DEF='STD_Joint_l_eyebrow_joint',name='l_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0],
                                                                    children=[
                                                                    HAnimSegment(DEF='STD_Segment_l_eyebrow',name='l_eyebrow'),
                                                                    HAnimJoint(DEF='STD_Joint_r_eyebrow_joint',name='r_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0],
                                                                      children=[
                                                                      HAnimSegment(DEF='STD_Segment_r_eyebrow',name='r_eyebrow'),
                                                                      HAnimJoint(DEF='STD_Joint_temporomandibular',name='temporomandibular',ulimit=[0,0,0],llimit=[0,0,0],
                                                                        children=[
                                                                        HAnimSegment(DEF='STD_Segment_jaw',name='jaw',
                                                                          children=[
                                                                          HAnimSite(DEF='STD_Site_supramenton_pt',name='supramenton_pt',translation=(0.0061,1.5410,0.0805),
                                                                            children=[
                                                                            TouchSensor(description='HAnimSite supramenton_pt'),
                                                                            Shape(USE='HAnimSiteShape')]),
                                                                          HAnimSite(DEF='STD_Site_menton_pt',name='menton_pt',
                                                                            children=[
                                                                            TouchSensor(description='HAnimSite menton_pt'),
                                                                            Shape(USE='HAnimSiteShape')]),
                                                                          HAnimSite(DEF='STD_Site_r_gonion_pt',name='r_gonion_pt',translation=(-0.0520,1.5529,0.0347),
                                                                            children=[
                                                                            TouchSensor(description='HAnimSite r_gonion_pt'),
                                                                            Shape(USE='HAnimSiteShape')]),
                                                                          HAnimSite(DEF='STD_Site_l_gonion_pt',name='l_gonion_pt',translation=(0.0631,1.5530,0.0330),
                                                                            children=[
                                                                            TouchSensor(description='HAnimSite l_gonion_pt'),
                                                                            Shape(USE='HAnimSiteShape')])])])])])])])])])])])])])])])])]),
                                          HAnimJoint(DEF='STD_Joint_l_sternoclavicular',name='l_sternoclavicular',center=(0.0820,1.4488,-0.0353),ulimit=[0,0,0],llimit=[0,0,0],
                                            children=[
                                            HAnimSegment(DEF='STD_Segment_l_clavicle',name='l_clavicle',
                                              children=[
                                              HAnimSite(DEF='STD_Site_l_axilla_distal_pt',name='l_axilla_distal_pt',translation=(0.1706,1.4072,-0.0875),
                                                children=[
                                                TouchSensor(description='HAnimSite l_axilla_distal_pt'),
                                                Shape(USE='HAnimSiteShape')]),
                                              HAnimSite(DEF='STD_Site_l_axilla_posterior_folds_pt',name='l_axilla_posterior_folds_pt',
                                                children=[
                                                TouchSensor(description='HAnimSite l_axilla_posterior_folds_pt'),
                                                Shape(USE='HAnimSiteShape')]),
                                              HAnimSite(DEF='STD_Site_l_axilla_proximal_pt',name='l_axilla_proximal_pt',translation=(0.1777,1.4065,-0.0075),
                                                children=[
                                                TouchSensor(description='HAnimSite l_axilla_proximal_pt'),
                                                Shape(USE='HAnimSiteShape')]),
                                              HAnimSite(DEF='STD_Site_l_acromion_pt',name='l_acromion_pt',translation=(0.2032,1.4760,-0.0490),
                                                children=[
                                                TouchSensor(description='HAnimSite l_acromion_pt'),
                                                Shape(USE='HAnimSiteShape')]),
                                              HAnimSite(DEF='STD_Site_l_clavicale_pt',name='l_clavicale_pt',translation=(0.0271,1.4943,0.0394),
                                                children=[
                                                TouchSensor(description='HAnimSite l_clavicale_pt'),
                                                Shape(USE='HAnimSiteShape')])]),
                                            HAnimJoint(DEF='STD_Joint_l_acromioclavicular',name='l_acromioclavicular',center=(0.0962,1.4269,-0.0424),ulimit=[0,0,0],llimit=[0,0,0],
                                              children=[
                                              HAnimSegment(DEF='STD_Segment_l_scapula',name='l_scapula'),
                                              HAnimJoint(DEF='STD_Joint_l_shoulder',name='l_shoulder',center=(0.2029,1.4376,-0.0387),ulimit=[0,0,0],llimit=[0,0,0],
                                                children=[
                                                HAnimSegment(DEF='STD_Segment_l_upperarm',name='l_upperarm',
                                                  children=[
                                                  HAnimSite(DEF='STD_Site_l_bideltoid_pt',name='l_bideltoid_pt',
                                                    children=[
                                                    TouchSensor(description='HAnimSite l_bideltoid_pt'),
                                                    Shape(USE='HAnimSiteShape')]),
                                                  HAnimSite(DEF='STD_Site_l_humeral_lateral_epicondyles_pt',name='l_humeral_lateral_epicondyles_pt',translation=(0.2280,1.1482,-0.1100),
                                                    children=[
                                                    TouchSensor(description='HAnimSite l_humeral_lateral_epicondyles_pt'),
                                                    Shape(USE='HAnimSiteShape')])]),
                                                HAnimJoint(DEF='STD_Joint_l_elbow',name='l_elbow',center=(0.2014,1.1357,-0.0682),ulimit=[0,0,0],llimit=[0,0,0],
                                                  children=[
                                                  HAnimSegment(DEF='STD_Segment_l_forearm',name='l_forearm',
                                                    children=[
                                                    HAnimSite(DEF='STD_Site_l_olecranon_pt',name='l_olecranon_pt',translation=(-0.1962,1.1375,-0.1123),
                                                      children=[
                                                      TouchSensor(description='HAnimSite l_olecranon_pt'),
                                                      Shape(USE='HAnimSiteShape')]),
                                                    HAnimSite(DEF='STD_Site_l_humeral_medial_epicondyles_pt',name='l_humeral_medial_epicondyles_pt',translation=(0.1735,1.1272,-0.1113),
                                                      children=[
                                                      TouchSensor(description='HAnimSite l_humeral_medial_epicondyles_pt'),
                                                      Shape(USE='HAnimSiteShape')]),
                                                    HAnimSite(DEF='STD_Site_l_radiale_pt',name='l_radiale_pt',translation=(0.2182,1.1212,-0.1167),
                                                      children=[
                                                      TouchSensor(description='HAnimSite l_radiale_pt'),
                                                      Shape(USE='HAnimSiteShape')]),
                                                    HAnimSite(DEF='STD_Site_l_radial_styloid_pt',name='l_radial_styloid_pt',translation=(0.1901,0.8645,-0.0415),
                                                      children=[
                                                      TouchSensor(description='HAnimSite l_radial_styloid_pt'),
                                                      Shape(USE='HAnimSiteShape')])]),
                                                  HAnimJoint(DEF='STD_Joint_l_radiocarpal',name='l_radiocarpal',center=(0.1984,0.8663,-0.0583),ulimit=[0,0,0],llimit=[0,0,0],
                                                    children=[
                                                    HAnimSegment(DEF='STD_Segment_l_carpal',name='l_carpal',
                                                      children=[
                                                      HAnimSite(DEF='STD_Site_l_ulnar_styloid_pt',name='l_ulnar_styloid_pt',translation=(-0.2142,0.8529,-0.0648),
                                                        children=[
                                                        TouchSensor(description='HAnimSite l_ulnar_styloid_pt'),
                                                        Shape(USE='HAnimSiteShape')])]),
                                                    HAnimJoint(DEF='STD_Joint_l_midcarpal_1',name='l_midcarpal_1',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='STD_Segment_l_trapezium',name='l_trapezium'),
                                                      HAnimJoint(DEF='STD_Joint_l_carpometacarpal_1',name='l_carpometacarpal_1',center=(0.1924,0.8472,-0.0534),ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='STD_Segment_l_metacarpal_1',name='l_metacarpal_1'),
                                                        HAnimJoint(DEF='STD_Joint_l_metacarpophalangeal_1',name='l_metacarpophalangeal_1',center=(0.1951,0.8226,0.0246),ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='STD_Segment_l_carpal_proximal_phalanx_1',name='l_carpal_proximal_phalanx_1'),
                                                          HAnimJoint(DEF='STD_Joint_l_carpal_interphalangeal_1',name='l_carpal_interphalangeal_1',center=(0.1955,0.8159,0.0464),ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='STD_Segment_l_carpal_distal_phalanx_1',name='l_carpal_distal_phalanx_1',
                                                              children=[
                                                              HAnimSite(DEF='STD_Site_l_carpal_distal_phalanx_1_tip',name='l_carpal_distal_phalanx_1_tip',
                                                                children=[
                                                                TouchSensor(description='HAnimSite l_carpal_distal_phalanx_1_tip'),
                                                                Shape(USE='HAnimSiteShape')])])])])])]),
                                                    HAnimJoint(DEF='STD_Joint_l_midcarpal_2',name='l_midcarpal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='STD_Segment_l_trapezoid',name='l_trapezoid'),
                                                      HAnimJoint(DEF='STD_Joint_l_carpometacarpal_2',name='l_carpometacarpal_2',center=(0.1983,0.8024,-0.0280),ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='STD_Segment_l_metacarpal_2',name='l_metacarpal_2',
                                                          children=[
                                                          HAnimSite(DEF='STD_Site_l_metacarpal_phalanx_2_pt',name='l_metacarpal_phalanx_2_pt',translation=(0.2009,0.8139,-0.0237),
                                                            children=[
                                                            TouchSensor(description='HAnimSite l_metacarpal_phalanx_2_pt'),
                                                            Shape(USE='HAnimSiteShape')])]),
                                                        HAnimJoint(DEF='STD_Joint_l_metacarpophalangeal_2',name='l_metacarpophalangeal_2',center=(0.1983,0.7815,-0.0280),ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='STD_Segment_l_carpal_proximal_phalanx_2',name='l_carpal_proximal_phalanx_2'),
                                                          HAnimJoint(DEF='STD_Joint_l_carpal_proximal_interphalangeal_2',name='l_carpal_proximal_interphalangeal_2',center=(0.2017,0.7363,-0.0248),ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='STD_Segment_l_carpal_middle_phalanx_2',name='l_carpal_middle_phalanx_2'),
                                                            HAnimJoint(DEF='STD_Joint_l_carpal_distal_interphalangeal_2',name='l_carpal_distal_interphalangeal_2',center=(0.2028,0.7139,-0.0236),ulimit=[0,0,0],llimit=[0,0,0],
                                                              children=[
                                                              HAnimSegment(DEF='STD_Segment_l_carpal_distal_phalanx_2',name='l_carpal_distal_phalanx_2',
                                                                children=[
                                                                HAnimSite(DEF='STD_Site_l_dactylion_pt',name='l_dactylion_pt',translation=(0.2056,0.6743,-0.0482),
                                                                  children=[
                                                                  TouchSensor(description='HAnimSite l_dactylion_pt'),
                                                                  Shape(USE='HAnimSiteShape')]),
                                                                HAnimSite(DEF='STD_Site_l_carpal_distal_phalanx_2_tip',name='l_carpal_distal_phalanx_2_tip',
                                                                  children=[
                                                                  TouchSensor(description='HAnimSite l_carpal_distal_phalanx_2_tip'),
                                                                  Shape(USE='HAnimSiteShape')])])])])])])]),
                                                    HAnimJoint(DEF='STD_Joint_l_midcarpal_3',name='l_midcarpal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='STD_Segment_l_capitate',name='l_capitate'),
                                                      HAnimJoint(DEF='STD_Joint_l_carpometacarpal_3',name='l_carpometacarpal_3',center=(0.1987,0.8029,-0.0530),ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='STD_Segment_l_metacarpal_3',name='l_metacarpal_3',
                                                          children=[
                                                          HAnimSite(DEF='STD_Site_l_metacarpal_phalanx_3_pt',name='l_metacarpal_phalanx_3_pt',
                                                            children=[
                                                            TouchSensor(description='HAnimSite l_metacarpal_phalanx_3_pt'),
                                                            Shape(USE='HAnimSiteShape')])]),
                                                        HAnimJoint(DEF='STD_Joint_l_metacarpophalangeal_3',name='l_metacarpophalangeal_3',center=(0.1987,0.7818,-0.0530),ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='STD_Segment_l_carpal_proximal_phalanx_3',name='l_carpal_proximal_phalanx_3'),
                                                          HAnimJoint(DEF='STD_Joint_l_carpal_proximal_interphalangeal_3',name='l_carpal_proximal_interphalangeal_3',center=(0.2013,0.7273,-0.0503),ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='STD_Segment_l_carpal_middle_phalanx_3',name='l_carpal_middle_phalanx_3'),
                                                            HAnimJoint(DEF='STD_Joint_l_carpal_distal_interphalangeal_3',name='l_carpal_distal_interphalangeal_3',center=(0.2026,0.7011,-0.0494),ulimit=[0,0,0],llimit=[0,0,0],
                                                              children=[
                                                              HAnimSegment(DEF='STD_Segment_l_carpal_distal_phalanx_3',name='l_carpal_distal_phalanx_3',
                                                                children=[
                                                                HAnimSite(DEF='STD_Site_l_carpal_distal_phalanx_3_tip',name='l_carpal_distal_phalanx_3_tip',
                                                                  children=[
                                                                  TouchSensor(description='HAnimSite l_carpal_distal_phalanx_3_tip'),
                                                                  Shape(USE='HAnimSiteShape')])])])])])])]),
                                                    HAnimJoint(DEF='STD_Joint_l_midcarpal_4_5',name='l_midcarpal_4_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='STD_Segment_l_hamate',name='l_hamate'),
                                                      HAnimJoint(DEF='STD_Joint_l_carpometacarpal_4',name='l_carpometacarpal_4',center=(0.1956,0.8019,-0.0794),ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='STD_Segment_l_metacarpal_4',name='l_metacarpal_4'),
                                                        HAnimJoint(DEF='STD_Joint_l_metacarpophalangeal_4',name='l_metacarpophalangeal_4',center=(0.1956,0.7815,-0.0794),ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='STD_Segment_l_carpal_proximal_phalanx_4',name='l_carpal_proximal_phalanx_4'),
                                                          HAnimJoint(DEF='STD_Joint_l_carpal_proximal_interphalangeal_4',name='l_carpal_proximal_interphalangeal_4',center=(0.1973,0.7287,-0.0777),ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='STD_Segment_l_carpal_middle_phalanx_4',name='l_carpal_middle_phalanx_4'),
                                                            HAnimJoint(DEF='STD_Joint_l_carpal_distal_interphalangeal_4',name='l_carpal_distal_interphalangeal_4',center=(0.1983,0.7045,-0.0767),ulimit=[0,0,0],llimit=[0,0,0],
                                                              children=[
                                                              HAnimSegment(DEF='STD_Segment_l_carpal_distal_phalanx_4',name='l_carpal_distal_phalanx_4',
                                                                children=[
                                                                HAnimSite(DEF='STD_Site_l_carpal_distal_phalanx_4_tip',name='l_carpal_distal_phalanx_4_tip',
                                                                  children=[
                                                                  TouchSensor(description='HAnimSite l_carpal_distal_phalanx_4_tip'),
                                                                  Shape(USE='HAnimSiteShape')])])])])])]),
                                                      HAnimJoint(DEF='STD_Joint_l_carpometacarpal_5',name='l_carpometacarpal_5',center=(0.1925,0.8066,-0.1036),ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='STD_Segment_l_metacarpal_5',name='l_metacarpal_5',
                                                          children=[
                                                          HAnimSite(DEF='STD_Site_l_metacarpal_phalanx_5_pt',name='l_metacarpal_phalanx_5_pt',translation=(0.1929,0.7860,-0.1122),
                                                            children=[
                                                            TouchSensor(description='HAnimSite l_metacarpal_phalanx_5_pt'),
                                                            Shape(USE='HAnimSiteShape')])]),
                                                        HAnimJoint(DEF='STD_Joint_l_metacarpophalangeal_5',name='l_metacarpophalangeal_5',center=(0.1925,0.7866,-0.1036),ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='STD_Segment_l_carpal_proximal_phalanx_5',name='l_carpal_proximal_phalanx_5'),
                                                          HAnimJoint(DEF='STD_Joint_l_carpal_proximal_interphalangeal_5',name='l_carpal_proximal_interphalangeal_5',center=(0.1938,0.7452,-0.1024),ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='STD_Segment_l_carpal_middle_phalanx_5',name='l_carpal_middle_phalanx_5'),
                                                            HAnimJoint(DEF='STD_Joint_l_carpal_distal_interphalangeal_5',name='l_carpal_distal_interphalangeal_5',center=(0.1948,0.7277,-0.1017),ulimit=[0,0,0],llimit=[0,0,0],
                                                              children=[
                                                              HAnimSegment(DEF='STD_Segment_l_carpal_distal_phalanx_5',name='l_carpal_distal_phalanx_5',
                                                                children=[
                                                                HAnimSite(DEF='STD_Site_l_carpal_distal_phalanx_5_tip',name='l_carpal_distal_phalanx_5_tip',
                                                                  children=[
                                                                  TouchSensor(description='HAnimSite l_carpal_distal_phalanx_5_tip'),
                                                                  Shape(USE='HAnimSiteShape')])])])])])])])])])])])]),
                                          HAnimJoint(DEF='STD_Joint_r_sternoclavicular',name='r_sternoclavicular',center=(-0.0694,1.4600,-0.0330),ulimit=[0,0,0],llimit=[0,0,0],
                                            children=[
                                            HAnimSegment(DEF='STD_Segment_r_clavicle',name='r_clavicle',
                                              children=[
                                              HAnimSite(DEF='STD_Site_r_axilla_distal_pt',name='r_axilla_distal_pt',translation=(-0.1603,1.4098,-0.0826),
                                                children=[
                                                TouchSensor(description='HAnimSite r_axilla_distal_pt'),
                                                Shape(USE='HAnimSiteShape')]),
                                              HAnimSite(DEF='STD_Site_r_axilla_posterior_folds_pt',name='r_axilla_posterior_folds_pt',
                                                children=[
                                                TouchSensor(description='HAnimSite r_axilla_posterior_folds_pt'),
                                                Shape(USE='HAnimSiteShape')]),
                                              HAnimSite(DEF='STD_Site_r_axilla_proximal_pt',name='r_axilla_proximal_pt',translation=(-0.1626,1.4072,-0.0031),
                                                children=[
                                                TouchSensor(description='HAnimSite r_axilla_proximal_pt'),
                                                Shape(USE='HAnimSiteShape')]),
                                              HAnimSite(DEF='STD_Site_r_acromion_pt',name='r_acromion_pt',translation=(-0.1905,1.4791,-0.0431),
                                                children=[
                                                TouchSensor(description='HAnimSite r_acromion_pt'),
                                                Shape(USE='HAnimSiteShape')]),
                                              HAnimSite(DEF='STD_Site_r_clavicale_pt',name='r_clavicale_pt',translation=(-0.0115,1.4943,0.0400),
                                                children=[
                                                TouchSensor(description='HAnimSite r_clavicale_pt'),
                                                Shape(USE='HAnimSiteShape')])]),
                                            HAnimJoint(DEF='STD_Joint_r_acromioclavicular',name='r_acromioclavicular',center=(-0.0836,1.4281,-0.0401),ulimit=[0,0,0],llimit=[0,0,0],
                                              children=[
                                              HAnimSegment(DEF='STD_Segment_r_scapula',name='r_scapula'),
                                              HAnimJoint(DEF='STD_Joint_r_shoulder',name='r_shoulder',center=(-0.1907,1.4407,-0.0325),ulimit=[0,0,0],llimit=[0,0,0],
                                                children=[
                                                HAnimSegment(DEF='STD_Segment_r_upperarm',name='r_upperarm',
                                                  children=[
                                                  HAnimSite(DEF='STD_Site_r_bideltoid_pt',name='r_bideltoid_pt',
                                                    children=[
                                                    TouchSensor(description='HAnimSite r_bideltoid_pt'),
                                                    Shape(USE='HAnimSiteShape')]),
                                                  HAnimSite(DEF='STD_Site_r_humeral_lateral_epicondyles_pt',name='r_humeral_lateral_epicondyles_pt',translation=(-0.2224,1.1517,-0.1033),
                                                    children=[
                                                    TouchSensor(description='HAnimSite r_humeral_lateral_epicondyles_pt'),
                                                    Shape(USE='HAnimSiteShape')])]),
                                                HAnimJoint(DEF='STD_Joint_r_elbow',name='r_elbow',center=(-0.1949,1.1388,-0.0620),ulimit=[0,0,0],llimit=[0,0,0],
                                                  children=[
                                                  HAnimSegment(DEF='STD_Segment_r_forearm',name='r_forearm',
                                                    children=[
                                                    HAnimSite(DEF='STD_Site_r_olecranon_pt',name='r_olecranon_pt',translation=(-0.1907,1.1405,-0.1065),
                                                      children=[
                                                      TouchSensor(description='HAnimSite r_olecranon_pt'),
                                                      Shape(USE='HAnimSiteShape')]),
                                                    HAnimSite(DEF='STD_Site_r_radiale_pt',name='r_radiale_pt',translation=(-0.2130,1.1305,-0.1091),
                                                      children=[
                                                      TouchSensor(description='HAnimSite r_radiale_pt'),
                                                      Shape(USE='HAnimSiteShape')]),
                                                    HAnimSite(DEF='STD_Site_r_radial_styloid_pt',name='r_radial_styloid_pt',translation=(-0.1884,0.8676,-0.0360),
                                                      children=[
                                                      TouchSensor(description='HAnimSite r_radial_styloid_pt'),
                                                      Shape(USE='HAnimSiteShape')]),
                                                    HAnimSite(DEF='STD_Site_r_humeral_medial_epicondyles_pt',name='r_humeral_medial_epicondyles_pt',translation=(-0.1680,1.1298,-0.1062),
                                                      children=[
                                                      TouchSensor(description='HAnimSite r_humeral_medial_epicondyles_pt'),
                                                      Shape(USE='HAnimSiteShape')])]),
                                                  HAnimJoint(DEF='STD_Joint_r_radiocarpal',name='r_radiocarpal',center=(-0.1959,0.8694,-0.0521),ulimit=[0,0,0],llimit=[0,0,0],
                                                    children=[
                                                    HAnimSegment(DEF='STD_Segment_r_carpal',name='r_carpal',
                                                      children=[
                                                      HAnimSite(DEF='STD_Site_r_ulnar_styloid_pt',name='r_ulnar_styloid_pt',translation=(-0.2117,0.8562,-0.0584),
                                                        children=[
                                                        TouchSensor(description='HAnimSite r_ulnar_styloid_pt'),
                                                        Shape(USE='HAnimSiteShape')])]),
                                                    HAnimJoint(DEF='STD_Joint_r_midcarpal_1',name='r_midcarpal_1',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='STD_Segment_r_trapezium',name='r_trapezium'),
                                                      HAnimJoint(DEF='STD_Joint_r_carpometacarpal_1',name='r_carpometacarpal_1',center=(-0.1899,0.8502,-0.0473),ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='STD_Segment_r_metacarpal_1',name='r_metacarpal_1'),
                                                        HAnimJoint(DEF='STD_Joint_r_metacarpophalangeal_1',name='r_metacarpophalangeal_1',center=(-0.1874,0.8256,0.0306),ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='STD_Segment_r_carpal_proximal_phalanx_1',name='r_carpal_proximal_phalanx_1'),
                                                          HAnimJoint(DEF='STD_Joint_r_carpal_interphalangeal_1',name='r_carpal_interphalangeal_1',center=(-0.1864,0.8190,0.0506),ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='STD_Segment_r_carpal_distal_phalanx_1',name='r_carpal_distal_phalanx_1',
                                                              children=[
                                                              HAnimSite(DEF='STD_Site_r_carpal_distal_phalanx_1_tip',name='r_carpal_distal_phalanx_1_tip',
                                                                children=[
                                                                TouchSensor(description='HAnimSite r_carpal_distal_phalanx_1_tip'),
                                                                Shape(USE='HAnimSiteShape')])])])])])]),
                                                    HAnimJoint(DEF='STD_Joint_r_midcarpal_2',name='r_midcarpal_2',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='STD_Segment_r_trapezoid',name='r_trapezoid'),
                                                      HAnimJoint(DEF='STD_Joint_r_carpometacarpal_2',name='r_carpometacarpal_2',center=(-0.1961,0.8055,-0.0218),ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='STD_Segment_r_metacarpal_2',name='r_metacarpal_2',
                                                          children=[
                                                          HAnimSite(DEF='STD_Site_r_metacarpal_phalanx_2_pt',name='r_metacarpal_phalanx_2_pt',translation=(-0.1977,0.8169,-0.0177),
                                                            children=[
                                                            TouchSensor(description='HAnimSite r_metacarpal_phalanx_2_pt'),
                                                            Shape(USE='HAnimSiteShape')])]),
                                                        HAnimJoint(DEF='STD_Joint_r_metacarpophalangeal_2',name='r_metacarpophalangeal_2',center=(-0.1961,0.7846,-0.0218),ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='STD_Segment_r_carpal_proximal_phalanx_2',name='r_carpal_proximal_phalanx_2'),
                                                          HAnimJoint(DEF='STD_Joint_r_carpal_proximal_interphalangeal_2',name='r_carpal_proximal_interphalangeal_2',center=(-0.1954,0.7393,-0.0185),ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='STD_Segment_r_carpal_middle_phalanx_2',name='r_carpal_middle_phalanx_2'),
                                                            HAnimJoint(DEF='STD_Joint_r_carpal_distal_interphalangeal_2',name='r_carpal_distal_interphalangeal_2',center=(-0.1945,0.7169,-0.0173),ulimit=[0,0,0],llimit=[0,0,0],
                                                              children=[
                                                              HAnimSegment(DEF='STD_Segment_r_carpal_distal_phalanx_2',name='r_carpal_distal_phalanx_2',
                                                                children=[
                                                                HAnimSite(DEF='STD_Site_r_dactylion_pt',name='r_dactylion_pt',translation=(-0.1941,0.6772,-0.0423),
                                                                  children=[
                                                                  TouchSensor(description='HAnimSite r_dactylion_pt'),
                                                                  Shape(USE='HAnimSiteShape')]),
                                                                HAnimSite(DEF='STD_Site_r_carpal_distal_phalanx_2_tip',name='r_carpal_distal_phalanx_2_tip',
                                                                  children=[
                                                                  TouchSensor(description='HAnimSite r_carpal_distal_phalanx_2_tip'),
                                                                  Shape(USE='HAnimSiteShape')])])])])])])]),
                                                    HAnimJoint(DEF='STD_Joint_r_midcarpal_3',name='r_midcarpal_3',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='STD_Segment_r_capitate',name='r_capitate'),
                                                      HAnimJoint(DEF='STD_Joint_r_carpometacarpal_3',name='r_carpometacarpal_3',center=(-0.1972,0.8060,-0.0468),ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='STD_Segment_r_metacarpal_3',name='r_metacarpal_3',
                                                          children=[
                                                          HAnimSite(DEF='STD_Site_r_metacarpal_phalanx_3_pt',name='r_metacarpal_phalanx_3_pt',
                                                            children=[
                                                            TouchSensor(description='HAnimSite r_metacarpal_phalanx_3_pt'),
                                                            Shape(USE='HAnimSiteShape')])]),
                                                        HAnimJoint(DEF='STD_Joint_r_metacarpophalangeal_3',name='r_metacarpophalangeal_3',center=(-0.1972,0.7849,-0.0468),ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='STD_Segment_r_carpal_proximal_phalanx_3',name='r_carpal_proximal_phalanx_3'),
                                                          HAnimJoint(DEF='STD_Joint_r_carpal_proximal_interphalangeal_3',name='r_carpal_proximal_interphalangeal_3',center=(-0.1950,0.7304,-0.0441),ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='STD_Segment_r_carpal_middle_phalanx_3',name='r_carpal_middle_phalanx_3'),
                                                            HAnimJoint(DEF='STD_Joint_r_carpal_distal_interphalangeal_3',name='r_carpal_distal_interphalangeal_3',center=(-0.1939,0.7042,-0.0432),ulimit=[0,0,0],llimit=[0,0,0],
                                                              children=[
                                                              HAnimSegment(DEF='STD_Segment_r_carpal_distal_phalanx_3',name='r_carpal_distal_phalanx_3',
                                                                children=[
                                                                HAnimSite(DEF='STD_Site_r_carpal_distal_phalanx_3_tip',name='r_carpal_distal_phalanx_3_tip',
                                                                  children=[
                                                                  TouchSensor(description='HAnimSite r_carpal_distal_phalanx_3_tip'),
                                                                  Shape(USE='HAnimSiteShape')])])])])])])]),
                                                    HAnimJoint(DEF='STD_Joint_r_midcarpal_4_5',name='r_midcarpal_4_5',ulimit=[0,0,0],llimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='STD_Segment_r_hamate',name='r_hamate'),
                                                      HAnimJoint(DEF='STD_Joint_r_carpometacarpal_4',name='r_carpometacarpal_4',center=(-0.1951,0.8049,-0.0732),ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='STD_Segment_r_metacarpal_4',name='r_metacarpal_4'),
                                                        HAnimJoint(DEF='STD_Joint_r_metacarpophalangeal_4',name='r_metacarpophalangeal_4',center=(-0.1951,0.7845,-0.0732),ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='STD_Segment_r_carpal_proximal_phalanx_4',name='r_carpal_proximal_phalanx_4'),
                                                          HAnimJoint(DEF='STD_Joint_r_carpal_proximal_interphalangeal_4',name='r_carpal_proximal_interphalangeal_4',center=(-0.1920,0.7318,-0.0716),ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='STD_Segment_r_carpal_middle_phalanx_4',name='r_carpal_middle_phalanx_4'),
                                                            HAnimJoint(DEF='STD_Joint_r_carpal_distal_interphalangeal_4',name='r_carpal_distal_interphalangeal_4',center=(-0.1908,0.7077,-0.0706),ulimit=[0,0,0],llimit=[0,0,0],
                                                              children=[
                                                              HAnimSegment(DEF='STD_Segment_r_carpal_distal_phalanx_4',name='r_carpal_distal_phalanx_4',
                                                                children=[
                                                                HAnimSite(DEF='STD_Site_r_carpal_distal_phalanx_4_tip',name='r_carpal_distal_phalanx_4_tip',
                                                                  children=[
                                                                  TouchSensor(description='HAnimSite r_carpal_distal_phalanx_4_tip'),
                                                                  Shape(USE='HAnimSiteShape')])])])])])]),
                                                      HAnimJoint(DEF='STD_Joint_r_carpometacarpal_5',name='r_carpometacarpal_5',center=(-0.1926,0.8096,-0.0975),ulimit=[0,0,0],llimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='STD_Segment_r_metacarpal_5',name='r_metacarpal_5',
                                                          children=[
                                                          HAnimSite(DEF='STD_Site_r_metacarpal_phalanx_5_pt',name='r_metacarpal_phalanx_5_pt',translation=(-0.1929,0.7890,-0.1064),
                                                            children=[
                                                            TouchSensor(description='HAnimSite r_metacarpal_phalanx_5_pt'),
                                                            Shape(USE='HAnimSiteShape')])]),
                                                        HAnimJoint(DEF='STD_Joint_r_metacarpophalangeal_5',name='r_metacarpophalangeal_5',center=(-0.1926,0.7896,-0.0975),ulimit=[0,0,0],llimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='STD_Segment_r_carpal_proximal_phalanx_5',name='r_carpal_proximal_phalanx_5'),
                                                          HAnimJoint(DEF='STD_Joint_r_carpal_proximal_interphalangeal_5',name='r_carpal_proximal_interphalangeal_5',center=(-0.1902,0.7483,-0.0963),ulimit=[0,0,0],llimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='STD_Segment_r_carpal_middle_phalanx_5',name='r_carpal_middle_phalanx_5'),
                                                            HAnimJoint(DEF='STD_Joint_r_carpal_distal_interphalangeal_5',name='r_carpal_distal_interphalangeal_5',center=(-0.1908,0.7540,-0.0960),ulimit=[0,0,0],llimit=[0,0,0],
                                                              children=[
                                                              HAnimSegment(DEF='STD_Segment_r_carpal_distal_phalanx_5',name='r_carpal_distal_phalanx_5',
                                                                children=[
                                                                HAnimSite(DEF='STD_Site_r_carpal_distal_phalanx_5_tip',name='r_carpal_distal_phalanx_5_tip',
                                                                  children=[
                                                                  TouchSensor(description='HAnimSite r_carpal_distal_phalanx_5_tip'),
                                                                  Shape(USE='HAnimSiteShape')])])])])])])])])])])])])])])])])])])])])])])])])])])])])])])],
      joints=[
      HAnimJoint(USE='STD_Joint_humanoid_root',ulimit=[0,0,0],llimit=[0,0,0]),
      segments=[
      HAnimSegment(USE='STD_Segment_sacrum'),
      HAnimJoint(USE='STD_Joint_sacroiliac',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_pelvis'),
      HAnimJoint(USE='STD_Joint_l_hip',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_thigh'),
      HAnimJoint(USE='STD_Joint_l_knee',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_calf'),
      HAnimJoint(USE='STD_Joint_l_talocrural',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_talus'),
      HAnimJoint(USE='STD_Joint_l_talocalcaneonavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_navicular'),
      HAnimJoint(USE='STD_Joint_l_cuneonavicular_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_cuneiform_1'),
      HAnimJoint(USE='STD_Joint_l_tarsometatarsal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_metatarsal_1'),
      HAnimJoint(USE='STD_Joint_l_metatarsophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_tarsal_proximal_phalanx_1'),
      HAnimJoint(USE='STD_Joint_l_tarsal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_tarsal_distal_phalanx_1'),
      HAnimJoint(USE='STD_Joint_l_cuneonavicular_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_cuneiform_2'),
      HAnimJoint(USE='STD_Joint_l_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_metatarsal_2'),
      HAnimJoint(USE='STD_Joint_l_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_tarsal_proximal_phalanx_2'),
      HAnimJoint(USE='STD_Joint_l_tarsal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_tarsal_middle_phalanx_2'),
      HAnimJoint(USE='STD_Joint_l_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_tarsal_distal_phalanx_2'),
      HAnimJoint(USE='STD_Joint_l_cuneonavicular_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_cuneiform_3'),
      HAnimJoint(USE='STD_Joint_l_tarsometatarsal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_metatarsal_3'),
      HAnimJoint(USE='STD_Joint_l_metatarsophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_tarsal_proximal_phalanx_3'),
      HAnimJoint(USE='STD_Joint_l_tarsal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_tarsal_middle_phalanx_3'),
      HAnimJoint(USE='STD_Joint_l_tarsal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_tarsal_distal_phalanx_3'),
      HAnimJoint(USE='STD_Joint_l_calcaneocuboid',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_calcaneus'),
      HAnimJoint(USE='STD_Joint_l_transversetarsal',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_cuboid'),
      HAnimJoint(USE='STD_Joint_l_tarsometatarsal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_metatarsal_4'),
      HAnimJoint(USE='STD_Joint_l_metatarsophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_tarsal_proximal_phalanx_4'),
      HAnimJoint(USE='STD_Joint_l_tarsal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_tarsal_middle_phalanx_4'),
      HAnimJoint(USE='STD_Joint_l_tarsal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_tarsal_distal_phalanx_4'),
      HAnimJoint(USE='STD_Joint_l_tarsometatarsal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_metatarsal_5'),
      HAnimJoint(USE='STD_Joint_l_metatarsophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_tarsal_proximal_phalanx_5'),
      HAnimJoint(USE='STD_Joint_l_tarsal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_tarsal_middle_phalanx_5'),
      HAnimJoint(USE='STD_Joint_l_tarsal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_tarsal_distal_phalanx_5'),
      HAnimJoint(USE='STD_Joint_r_hip',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_thigh'),
      HAnimJoint(USE='STD_Joint_r_knee',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_calf'),
      HAnimJoint(USE='STD_Joint_r_talocrural',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_talus'),
      HAnimJoint(USE='STD_Joint_r_talocalcaneonavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_navicular'),
      HAnimJoint(USE='STD_Joint_r_cuneonavicular_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_cuneiform_1'),
      HAnimJoint(USE='STD_Joint_r_tarsometatarsal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_metatarsal_1'),
      HAnimJoint(USE='STD_Joint_r_metatarsophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_tarsal_proximal_phalanx_1'),
      HAnimJoint(USE='STD_Joint_r_tarsal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_tarsal_distal_phalanx_1'),
      HAnimJoint(USE='STD_Joint_r_cuneonavicular_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_cuneiform_2'),
      HAnimJoint(USE='STD_Joint_r_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_metatarsal_2'),
      HAnimJoint(USE='STD_Joint_r_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_tarsal_proximal_phalanx_2'),
      HAnimJoint(USE='STD_Joint_r_tarsal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_tarsal_middle_phalanx_2'),
      HAnimJoint(USE='STD_Joint_r_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_tarsal_distal_phalanx_2'),
      HAnimJoint(USE='STD_Joint_r_cuneonavicular_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_cuneiform_3'),
      HAnimJoint(USE='STD_Joint_r_tarsometatarsal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_metatarsal_3'),
      HAnimJoint(USE='STD_Joint_r_metatarsophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_tarsal_proximal_phalanx_3'),
      HAnimJoint(USE='STD_Joint_r_tarsal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_tarsal_middle_phalanx_3'),
      HAnimJoint(USE='STD_Joint_r_tarsal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_tarsal_distal_phalanx_3'),
      HAnimJoint(USE='STD_Joint_r_calcaneocuboid',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_calcaneus'),
      HAnimJoint(USE='STD_Joint_r_transversetarsal',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_cuboid'),
      HAnimJoint(USE='STD_Joint_r_tarsometatarsal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_metatarsal_4'),
      HAnimJoint(USE='STD_Joint_r_metatarsophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_tarsal_proximal_phalanx_4'),
      HAnimJoint(USE='STD_Joint_r_tarsal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_tarsal_middle_phalanx_4'),
      HAnimJoint(USE='STD_Joint_r_tarsal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_tarsal_distal_phalanx_4'),
      HAnimJoint(USE='STD_Joint_r_tarsometatarsal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_metatarsal_5'),
      HAnimJoint(USE='STD_Joint_r_metatarsophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_tarsal_proximal_phalanx_5'),
      HAnimJoint(USE='STD_Joint_r_tarsal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_tarsal_middle_phalanx_5'),
      HAnimJoint(USE='STD_Joint_r_tarsal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_tarsal_distal_phalanx_5'),
      HAnimJoint(USE='STD_Joint_vl5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l5'),
      HAnimJoint(USE='STD_Joint_vl4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l4'),
      HAnimJoint(USE='STD_Joint_vl3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l3'),
      HAnimJoint(USE='STD_Joint_vl2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l2'),
      HAnimJoint(USE='STD_Joint_vl1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l1'),
      HAnimJoint(USE='STD_Joint_vt12',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_t12'),
      HAnimJoint(USE='STD_Joint_vt11',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_t11'),
      HAnimJoint(USE='STD_Joint_vt10',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_t10'),
      HAnimJoint(USE='STD_Joint_vt9',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_t9'),
      HAnimJoint(USE='STD_Joint_vt8',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_t8'),
      HAnimJoint(USE='STD_Joint_vt7',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_t7'),
      HAnimJoint(USE='STD_Joint_vt6',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_t6'),
      HAnimJoint(USE='STD_Joint_vt5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_t5'),
      HAnimJoint(USE='STD_Joint_vt4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_t4'),
      HAnimJoint(USE='STD_Joint_vt3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_t3'),
      HAnimJoint(USE='STD_Joint_vt2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_t2'),
      HAnimJoint(USE='STD_Joint_vt1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_t1'),
      HAnimJoint(USE='STD_Joint_vc7',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_c7'),
      HAnimJoint(USE='STD_Joint_vc6',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_c6'),
      HAnimJoint(USE='STD_Joint_vc5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_c5'),
      HAnimJoint(USE='STD_Joint_vc4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_c4'),
      HAnimJoint(USE='STD_Joint_vc3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_c3'),
      HAnimJoint(USE='STD_Joint_vc2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_c2'),
      HAnimJoint(USE='STD_Joint_vc1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_c1'),
      HAnimJoint(USE='STD_Joint_skullbase',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_skull'),
      HAnimJoint(USE='STD_Joint_l_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_eyelid'),
      HAnimJoint(USE='STD_Joint_r_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_eyelid'),
      HAnimJoint(USE='STD_Joint_l_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_eyeball'),
      HAnimJoint(USE='STD_Joint_r_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_eyeball'),
      HAnimJoint(USE='STD_Joint_l_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_eyebrow'),
      HAnimJoint(USE='STD_Joint_r_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_eyebrow'),
      HAnimJoint(USE='STD_Joint_temporomandibular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_jaw'),
      HAnimJoint(USE='STD_Joint_l_sternoclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_clavicle'),
      HAnimJoint(USE='STD_Joint_l_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_scapula'),
      HAnimJoint(USE='STD_Joint_l_shoulder',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_upperarm'),
      HAnimJoint(USE='STD_Joint_l_elbow',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_forearm'),
      HAnimJoint(USE='STD_Joint_l_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_carpal'),
      HAnimJoint(USE='STD_Joint_l_midcarpal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_trapezium'),
      HAnimJoint(USE='STD_Joint_l_carpometacarpal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_metacarpal_1'),
      HAnimJoint(USE='STD_Joint_l_metacarpophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_carpal_proximal_phalanx_1'),
      HAnimJoint(USE='STD_Joint_l_carpal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_carpal_distal_phalanx_1'),
      HAnimJoint(USE='STD_Joint_l_midcarpal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_trapezoid'),
      HAnimJoint(USE='STD_Joint_l_carpometacarpal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_metacarpal_2'),
      HAnimJoint(USE='STD_Joint_l_metacarpophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_carpal_proximal_phalanx_2'),
      HAnimJoint(USE='STD_Joint_l_carpal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_carpal_middle_phalanx_2'),
      HAnimJoint(USE='STD_Joint_l_carpal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_carpal_distal_phalanx_2'),
      HAnimJoint(USE='STD_Joint_l_midcarpal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_capitate'),
      HAnimJoint(USE='STD_Joint_l_carpometacarpal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_metacarpal_3'),
      HAnimJoint(USE='STD_Joint_l_metacarpophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_carpal_proximal_phalanx_3'),
      HAnimJoint(USE='STD_Joint_l_carpal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_carpal_middle_phalanx_3'),
      HAnimJoint(USE='STD_Joint_l_carpal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_carpal_distal_phalanx_3'),
      HAnimJoint(USE='STD_Joint_l_midcarpal_4_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_hamate'),
      HAnimJoint(USE='STD_Joint_l_carpometacarpal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_metacarpal_4'),
      HAnimJoint(USE='STD_Joint_l_metacarpophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_carpal_proximal_phalanx_4'),
      HAnimJoint(USE='STD_Joint_l_carpal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_carpal_middle_phalanx_4'),
      HAnimJoint(USE='STD_Joint_l_carpal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_carpal_distal_phalanx_4'),
      HAnimJoint(USE='STD_Joint_l_carpometacarpal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_metacarpal_5'),
      HAnimJoint(USE='STD_Joint_l_metacarpophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_carpal_proximal_phalanx_5'),
      HAnimJoint(USE='STD_Joint_l_carpal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_carpal_middle_phalanx_5'),
      HAnimJoint(USE='STD_Joint_l_carpal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_l_carpal_distal_phalanx_5'),
      HAnimJoint(USE='STD_Joint_r_sternoclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_clavicle'),
      HAnimJoint(USE='STD_Joint_r_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_scapula'),
      HAnimJoint(USE='STD_Joint_r_shoulder',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_upperarm'),
      HAnimJoint(USE='STD_Joint_r_elbow',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_forearm'),
      HAnimJoint(USE='STD_Joint_r_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_carpal'),
      HAnimJoint(USE='STD_Joint_r_midcarpal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_trapezium'),
      HAnimJoint(USE='STD_Joint_r_carpometacarpal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_metacarpal_1'),
      HAnimJoint(USE='STD_Joint_r_metacarpophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_carpal_proximal_phalanx_1'),
      HAnimJoint(USE='STD_Joint_r_carpal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_carpal_distal_phalanx_1'),
      HAnimJoint(USE='STD_Joint_r_midcarpal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_trapezoid'),
      HAnimJoint(USE='STD_Joint_r_carpometacarpal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_metacarpal_2'),
      HAnimJoint(USE='STD_Joint_r_metacarpophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_carpal_proximal_phalanx_2'),
      HAnimJoint(USE='STD_Joint_r_carpal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_carpal_middle_phalanx_2'),
      HAnimJoint(USE='STD_Joint_r_carpal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_carpal_distal_phalanx_2'),
      HAnimJoint(USE='STD_Joint_r_midcarpal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_capitate'),
      HAnimJoint(USE='STD_Joint_r_carpometacarpal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_metacarpal_3'),
      HAnimJoint(USE='STD_Joint_r_metacarpophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_carpal_proximal_phalanx_3'),
      HAnimJoint(USE='STD_Joint_r_carpal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_carpal_middle_phalanx_3'),
      HAnimJoint(USE='STD_Joint_r_carpal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_carpal_distal_phalanx_3'),
      HAnimJoint(USE='STD_Joint_r_midcarpal_4_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_hamate'),
      HAnimJoint(USE='STD_Joint_r_carpometacarpal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_metacarpal_4'),
      HAnimJoint(USE='STD_Joint_r_metacarpophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_carpal_proximal_phalanx_4'),
      HAnimJoint(USE='STD_Joint_r_carpal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_carpal_middle_phalanx_4'),
      HAnimJoint(USE='STD_Joint_r_carpal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_carpal_distal_phalanx_4'),
      HAnimJoint(USE='STD_Joint_r_carpometacarpal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_metacarpal_5'),
      HAnimJoint(USE='STD_Joint_r_metacarpophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_carpal_proximal_phalanx_5'),
      HAnimJoint(USE='STD_Joint_r_carpal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimSegment(USE='STD_Segment_r_carpal_middle_phalanx_5'),
      HAnimJoint(USE='STD_Joint_r_carpal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0])],
      HAnimSegment(USE='STD_Segment_r_carpal_distal_phalanx_5')],)])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for skeletonJoe.py:')
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

print("python skeletonJoe.py load and self-test diagnostics complete.")
