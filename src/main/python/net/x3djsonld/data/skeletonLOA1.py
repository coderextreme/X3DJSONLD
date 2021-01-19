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

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    component(level=1,name='HAnim'),
    meta(content='JohnBoy.x3d',name='title'),
    meta(name='identifier',content='http://www.web3d.org/x3d/content/examples/HumanoidAnimation/JohnBoy.x3d'),
    meta(name='description',content='An attempt at a standard LOA-4 skeleton'),
    meta(name='generator',content='h.pl'),
    meta(content='John Carlson',name='creator'),
    meta(content='12 June 2020',name='created'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(speed=1.5),
    Viewpoint(centerOfRotation=(0,1,0),description='JohnBoy',position=(0,1,3)),
    HAnimHumanoid(DEF='STD_HAnim',info=["humanoidVersion=2.0"],name='HAnim',version='2.0',
      #  scale='0.0225 0.0225 0.0225' 
      children=[
      HAnimJoint(DEF='STD_Joint_humanoid_root',name='humanoid_root',center=(0.0000,0.8240,0.0277),
        children=[
        HAnimSegment(DEF='STD_HAnimSegment_HumanoidRoot',name='HAnimSegment_HumanoidRoot',
          children=[
          Viewpoint(description='View from (0 0 4) towards HAnimHumanoid center',position=(0,0,4)),
          Switch(whichChoice=0,
            children=[
            Transform(scale=(0.0225,0.0225,0.0225),
              children=[
              TouchSensor(description='HAnimHumanoid HAnimSegment HumanoidRoot'),
              Shape(DEF='HAnimRootShape',
                geometry=Sphere(DEF='HAnimJointSphere'),
                appearance=Appearance(
                  material=Material(DEF='HAnimRootMaterial',diffuseColor=(0.8,0,0),transparency=0.3)))]),
            Shape(DEF='HAnimJointShape',
              geometry=Sphere(USE='HAnimJointSphere'),
              appearance=Appearance(
                material=Material(DEF='HAnimJointMaterial',diffuseColor=(0,0,0.8),transparency=0.3))),
            Shape(
              geometry=LineSet(vertexCount=[2],
                color=ColorRGBA(DEF='HAnimSegmentLineColorRGBA',color=[(1,1,0,1),(1,1,0,0.1)]),
                coord=Coordinate(point=[(0,0,0),(0,0,0)]))),
            Shape(DEF='HAnimSiteShape',
              geometry=IndexedFaceSet(DEF='DiamondIFS',creaseAngle=0.5,solid=False,coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1],
                color=ColorRGBA(DEF='HAnimSiteColorRGBA',color=[(1,1,0,1),(1,1,0,0.1)]),
                coord=Coordinate(point=[(0,0.8,0),(-0.8,0,0),(0,0,0.8),(0.8,0,0),(0,0,-0.8),(0,-0.8,0)])),
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,0),transparency=0.3)))])]),
        HAnimSegment(DEF='STD_Segment_sacrum',name='sacrum'),
        HAnimJoint(DEF='STD_Joint_sacroiliac',name='sacroiliac',center=(0.0000,0.9149,0.0016),
          children=[
          HAnimSegment(DEF='STD_Segment_pelvis',name='pelvis',
            children=[
            HAnimSite(DEF='STD_Site_l_iliocristale_pt',name='l_iliocristale_pt',scale=(0.0225,0.0225,0.0225),translation=(0.1612,1.0537,0.0008),
              children=[
              TouchSensor(description='HAnimSite l_iliocristale_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_buttocks_standing_wall_contact_point_pt',name='buttocks_standing_wall_contact_point_pt',scale=(0.0225,0.0225,0.0225),
              children=[
              TouchSensor(description='HAnimSite buttocks_standing_wall_contact_point_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_r_trochanterion_pt',name='r_trochanterion_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.1689,0.8419,0.0352),
              children=[
              TouchSensor(description='HAnimSite r_trochanterion_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_l_asis_pt',name='l_asis_pt',scale=(0.0225,0.0225,0.0225),translation=(0.0925,0.9983,0.1052),
              children=[
              TouchSensor(description='HAnimSite l_asis_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_crotch_pt',name='crotch_pt',scale=(0.0225,0.0225,0.0225),translation=(0.0034,0.8266,0.0257),
              children=[
              TouchSensor(description='HAnimSite crotch_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_l_psis_pt',name='l_psis_pt',scale=(0.0225,0.0225,0.0225),translation=(0.0774,1.0190,-0.1151),
              children=[
              TouchSensor(description='HAnimSite l_psis_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_r_iliocristale_pt',name='r_iliocristale_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.1525,1.0628,0.0035),
              children=[
              TouchSensor(description='HAnimSite r_iliocristale_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_l_trochanterion_pt',name='l_trochanterion_pt',scale=(0.0225,0.0225,0.0225),translation=(0.1677,0.8336,0.0303),
              children=[
              TouchSensor(description='HAnimSite l_trochanterion_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_r_asis_pt',name='r_asis_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.0887,1.0021,0.1112),
              children=[
              TouchSensor(description='HAnimSite r_asis_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_r_psis_pt',name='r_psis_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.0716,1.0190,-0.1138),
              children=[
              TouchSensor(description='HAnimSite r_psis_pt'),
              Shape(USE='HAnimSiteShape')])]),
          HAnimJoint(DEF='STD_Joint_l_hip',name='l_hip',center=(0.0961,0.9124,-0.0001),
            children=[
            HAnimSegment(DEF='STD_Segment_l_thigh',name='l_thigh',
              children=[
              HAnimSite(DEF='STD_Site_l_femoral_lateral_epicondyles_pt',name='l_femoral_lateral_epicondyles_pt',scale=(0.0225,0.0225,0.0225),translation=(0.1598,0.4967,0.0297),
                children=[
                TouchSensor(description='HAnimSite l_femoral_lateral_epicondyles_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_l_knee_crease_pt',name='l_knee_crease_pt',scale=(0.0225,0.0225,0.0225),translation=(0.0993,0.4881,-0.0309),
                children=[
                TouchSensor(description='HAnimSite l_knee_crease_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_l_femoral_medial_epicondyles_pt',name='l_femoral_medial_epicondyles_pt',scale=(0.0225,0.0225,0.0225),translation=(0.0398,0.4946,0.0303),
                children=[
                TouchSensor(description='HAnimSite l_femoral_medial_epicondyles_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_l_suprapatella_pt',name='l_suprapatella_pt',scale=(0.0225,0.0225,0.0225),
                children=[
                TouchSensor(description='HAnimSite l_suprapatella_pt'),
                Shape(USE='HAnimSiteShape')])]),
            HAnimJoint(DEF='STD_Joint_l_knee',name='l_knee',center=(0.1040,0.4867,0.0308),
              children=[
              HAnimSegment(DEF='STD_Segment_l_calf',name='l_calf',
                children=[
                HAnimSite(DEF='STD_Site_l_lateral_malleolus_pt',name='l_lateral_malleolus_pt',scale=(0.0225,0.0225,0.0225),translation=(0.1308,0.0597,-0.1032),
                  children=[
                  TouchSensor(description='HAnimSite l_lateral_malleolus_pt'),
                  Shape(USE='HAnimSiteShape')]),
                HAnimSite(DEF='STD_Site_l_medial_malleolus_pt',name='l_medial_malleolus_pt',scale=(0.0225,0.0225,0.0225),translation=(0.0890,0.0716,-0.0881),
                  children=[
                  TouchSensor(description='HAnimSite l_medial_malleolus_pt'),
                  Shape(USE='HAnimSiteShape')]),
                HAnimSite(DEF='STD_Site_l_tibiale_pt',name='l_tibiale_pt',scale=(0.0225,0.0225,0.0225),
                  children=[
                  TouchSensor(description='HAnimSite l_tibiale_pt'),
                  Shape(USE='HAnimSiteShape')])]),
              HAnimJoint(DEF='STD_Joint_l_talocrural',name='l_talocrural',center=(0.1101,0.0656,-0.0736),
                children=[
                HAnimSegment(DEF='STD_Segment_l_talus',name='l_talus',
                  children=[
                  HAnimSite(DEF='STD_Site_l_sphyrion_pt',name='l_sphyrion_pt',scale=(0.0225,0.0225,0.0225),translation=(0.0890,0.0575,-0.0943),
                    children=[
                    TouchSensor(description='HAnimSite l_sphyrion_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='STD_Site_l_calcaneus_posterior_pt',name='l_calcaneus_posterior_pt',scale=(0.0225,0.0225,0.0225),translation=(0.0974,0.0259,-0.1171),
                    children=[
                    TouchSensor(description='HAnimSite l_calcaneus_posterior_pt'),
                    Shape(USE='HAnimSiteShape')])]),
                HAnimJoint(DEF='STD_Joint_l_metatarsophalangeal_2',name='l_metatarsophalangeal_2',
                  children=[
                  HAnimSegment(DEF='STD_Segment_l_tarsal_proximal_phalanx_2',name='l_tarsal_proximal_phalanx_2')])])])]),
          HAnimJoint(DEF='STD_Joint_r_hip',name='r_hip',center=(-0.0950,0.9171,0.0029),
            children=[
            HAnimSegment(DEF='STD_Segment_r_thigh',name='r_thigh',
              children=[
              HAnimSite(DEF='STD_Site_r_suprapatella_pt',name='r_suprapatella_pt',scale=(0.0225,0.0225,0.0225),
                children=[
                TouchSensor(description='HAnimSite r_suprapatella_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_r_knee_crease_pt',name='r_knee_crease_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.0825,0.4932,-0.0326),
                children=[
                TouchSensor(description='HAnimSite r_knee_crease_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_r_femoral_medial_epicondyles_pt',name='r_femoral_medial_epicondyles_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.0221,0.5014,0.0289),
                children=[
                TouchSensor(description='HAnimSite r_femoral_medial_epicondyles_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_r_femoral_lateral_epicondyles_pt',name='r_femoral_lateral_epicondyles_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.1421,0.4992,0.0310),
                children=[
                TouchSensor(description='HAnimSite r_femoral_lateral_epicondyles_pt'),
                Shape(USE='HAnimSiteShape')])]),
            HAnimJoint(DEF='STD_Joint_r_knee',name='r_knee',center=(-0.0867,0.4913,0.0318),
              children=[
              HAnimSegment(DEF='STD_Segment_r_calf',name='r_calf',
                children=[
                HAnimSite(DEF='STD_Site_r_tibiale_pt',name='r_tibiale_pt',scale=(0.0225,0.0225,0.0225),
                  children=[
                  TouchSensor(description='HAnimSite r_tibiale_pt'),
                  Shape(USE='HAnimSiteShape')]),
                HAnimSite(DEF='STD_Site_r_lateral_malleolus_pt',name='r_lateral_malleolus_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.1006,0.0658,-0.1075),
                  children=[
                  TouchSensor(description='HAnimSite r_lateral_malleolus_pt'),
                  Shape(USE='HAnimSiteShape')]),
                HAnimSite(DEF='STD_Site_r_medial_malleolus_pt',name='r_medial_malleolus_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.0591,0.0760,-0.0928),
                  children=[
                  TouchSensor(description='HAnimSite r_medial_malleolus_pt'),
                  Shape(USE='HAnimSiteShape')])]),
              HAnimJoint(DEF='STD_Joint_r_talocrural',name='r_talocrural',center=(-0.0801,0.0712,-0.0766),
                children=[
                HAnimSegment(DEF='STD_Segment_r_talus',name='r_talus',
                  children=[
                  HAnimSite(DEF='STD_Site_r_calcaneus_posterior_pt',name='r_calcaneus_posterior_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.0692,0.0297,-0.1221),
                    children=[
                    TouchSensor(description='HAnimSite r_calcaneus_posterior_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='STD_Site_r_sphyrion_pt',name='r_sphyrion_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.0603,0.0610,-0.1002),
                    children=[
                    TouchSensor(description='HAnimSite r_sphyrion_pt'),
                    Shape(USE='HAnimSiteShape')])]),
                HAnimJoint(DEF='STD_Joint_r_metatarsophalangeal_2',name='r_metatarsophalangeal_2',
                  children=[
                  HAnimSegment(DEF='STD_Segment_r_tarsal_proximal_phalanx_2',name='r_tarsal_proximal_phalanx_2')])])])])]),
        HAnimJoint(DEF='STD_Joint_vl5',name='vl5',center=(0.0028,1.0568,-0.0776),
          children=[
          HAnimSegment(DEF='STD_Segment_l5',name='l5',
            children=[
            HAnimSite(DEF='STD_Site_waist_preferred_posterior_pt',name='waist_preferred_posterior_pt',scale=(0.0225,0.0225,0.0225),translation=(0.2900,1.0915,-0.1091),
              children=[
              TouchSensor(description='HAnimSite waist_preferred_posterior_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_waist_preferred_anterior_pt',name='waist_preferred_anterior_pt',scale=(0.0225,0.0225,0.0225),
              children=[
              TouchSensor(description='HAnimSite waist_preferred_anterior_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='STD_Site_navel_pt',name='navel_pt',scale=(0.0225,0.0225,0.0225),translation=(0.0069,1.0966,0.1017),
              children=[
              TouchSensor(description='HAnimSite navel_pt'),
              Shape(USE='HAnimSiteShape')])]),
          HAnimJoint(DEF='STD_Joint_skullbase',name='skullbase',center=(0.0044,1.6209,0.0236),
            children=[
            HAnimSegment(DEF='STD_Segment_skull',name='skull',
              children=[
              HAnimSite(DEF='STD_Site_r_infraorbitale_pt',name='r_infraorbitale_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.0237,1.6171,0.0752),
                children=[
                TouchSensor(description='HAnimSite r_infraorbitale_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_l_ectocanthus_pt',name='l_ectocanthus_pt',scale=(0.0225,0.0225,0.0225),
                children=[
                TouchSensor(description='HAnimSite l_ectocanthus_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_r_tragion_pt',name='r_tragion_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.0646,1.6347,0.0302),
                children=[
                TouchSensor(description='HAnimSite r_tragion_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_r_ectocanthus_pt',name='r_ectocanthus_pt',scale=(0.0225,0.0225,0.0225),
                children=[
                TouchSensor(description='HAnimSite r_ectocanthus_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_l_infraorbitale_pt',name='l_infraorbitale_pt',scale=(0.0225,0.0225,0.0225),translation=(0.0341,1.6171,0.0752),
                children=[
                TouchSensor(description='HAnimSite l_infraorbitale_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_sellion_pt',name='sellion_pt',scale=(0.0225,0.0225,0.0225),translation=(0.0058,1.6316,0.0852),
                children=[
                TouchSensor(description='HAnimSite sellion_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_nuchale_pt',name='nuchale_pt',scale=(0.0225,0.0225,0.0225),translation=(0.0039,1.5972,-0.0796),
                children=[
                TouchSensor(description='HAnimSite nuchale_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_skull_vertex_pt',name='skull_vertex_pt',scale=(0.0225,0.0225,0.0225),translation=(0.0050,1.7504,0.0055),
                children=[
                TouchSensor(description='HAnimSite skull_vertex_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_glabella_pt',name='glabella_pt',scale=(0.0225,0.0225,0.0225),
                children=[
                TouchSensor(description='HAnimSite glabella_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_opisthocranion_pt',name='opisthocranion_pt',scale=(0.0225,0.0225,0.0225),
                children=[
                TouchSensor(description='HAnimSite opisthocranion_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='STD_Site_l_tragion_pt',name='l_tragion_pt',scale=(0.0225,0.0225,0.0225),translation=(0.0739,1.6348,0.0282),
                children=[
                TouchSensor(description='HAnimSite l_tragion_pt'),
                Shape(USE='HAnimSiteShape')])]),
            HAnimJoint(DEF='STD_Joint_l_shoulder',name='l_shoulder',center=(0.2029,1.4376,-0.0387),
              children=[
              HAnimSegment(DEF='STD_Segment_l_upperarm',name='l_upperarm',
                children=[
                HAnimSite(DEF='STD_Site_l_bideltoid_pt',name='l_bideltoid_pt',scale=(0.0225,0.0225,0.0225),
                  children=[
                  TouchSensor(description='HAnimSite l_bideltoid_pt'),
                  Shape(USE='HAnimSiteShape')]),
                HAnimSite(DEF='STD_Site_l_humeral_lateral_epicondyles_pt',name='l_humeral_lateral_epicondyles_pt',scale=(0.0225,0.0225,0.0225),translation=(0.2280,1.1482,-0.1100),
                  children=[
                  TouchSensor(description='HAnimSite l_humeral_lateral_epicondyles_pt'),
                  Shape(USE='HAnimSiteShape')])]),
              HAnimJoint(DEF='STD_Joint_l_elbow',name='l_elbow',center=(0.2014,1.1357,-0.0682),
                children=[
                HAnimSegment(DEF='STD_Segment_l_forearm',name='l_forearm',
                  children=[
                  HAnimSite(DEF='STD_Site_l_olecranon_pt',name='l_olecranon_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.1962,1.1375,-0.1123),
                    children=[
                    TouchSensor(description='HAnimSite l_olecranon_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='STD_Site_l_radial_styloid_pt',name='l_radial_styloid_pt',scale=(0.0225,0.0225,0.0225),translation=(0.1901,0.8645,-0.0415),
                    children=[
                    TouchSensor(description='HAnimSite l_radial_styloid_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='STD_Site_l_humeral_medial_epicondyles_pt',name='l_humeral_medial_epicondyles_pt',scale=(0.0225,0.0225,0.0225),translation=(0.1735,1.1272,-0.1113),
                    children=[
                    TouchSensor(description='HAnimSite l_humeral_medial_epicondyles_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='STD_Site_l_radiale_pt',name='l_radiale_pt',scale=(0.0225,0.0225,0.0225),translation=(0.2182,1.1212,-0.1167),
                    children=[
                    TouchSensor(description='HAnimSite l_radiale_pt'),
                    Shape(USE='HAnimSiteShape')])]),
                HAnimJoint(DEF='STD_Joint_l_radiocarpal',name='l_radiocarpal',center=(0.1984,0.8663,-0.0583),
                  children=[
                  HAnimSegment(DEF='STD_Segment_l_carpal',name='l_carpal',
                    children=[
                    HAnimSite(DEF='STD_Site_l_ulnar_styloid_pt',name='l_ulnar_styloid_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.2142,0.8529,-0.0648),
                      children=[
                      TouchSensor(description='HAnimSite l_ulnar_styloid_pt'),
                      Shape(USE='HAnimSiteShape')])])])])]),
            HAnimJoint(DEF='STD_Joint_r_shoulder',name='r_shoulder',center=(-0.1907,1.4407,-0.0325),
              children=[
              HAnimSegment(DEF='STD_Segment_r_upperarm',name='r_upperarm',
                children=[
                HAnimSite(DEF='STD_Site_r_humeral_lateral_epicondyles_pt',name='r_humeral_lateral_epicondyles_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.2224,1.1517,-0.1033),
                  children=[
                  TouchSensor(description='HAnimSite r_humeral_lateral_epicondyles_pt'),
                  Shape(USE='HAnimSiteShape')]),
                HAnimSite(DEF='STD_Site_r_bideltoid_pt',name='r_bideltoid_pt',scale=(0.0225,0.0225,0.0225),
                  children=[
                  TouchSensor(description='HAnimSite r_bideltoid_pt'),
                  Shape(USE='HAnimSiteShape')])]),
              HAnimJoint(DEF='STD_Joint_r_elbow',name='r_elbow',center=(-0.1949,1.1388,-0.0620),
                children=[
                HAnimSegment(DEF='STD_Segment_r_forearm',name='r_forearm',
                  children=[
                  HAnimSite(DEF='STD_Site_r_radiale_pt',name='r_radiale_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.2130,1.1305,-0.1091),
                    children=[
                    TouchSensor(description='HAnimSite r_radiale_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='STD_Site_r_humeral_medial_epicondyles_pt',name='r_humeral_medial_epicondyles_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.1680,1.1298,-0.1062),
                    children=[
                    TouchSensor(description='HAnimSite r_humeral_medial_epicondyles_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='STD_Site_r_radial_styloid_pt',name='r_radial_styloid_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.1884,0.8676,-0.0360),
                    children=[
                    TouchSensor(description='HAnimSite r_radial_styloid_pt'),
                    Shape(USE='HAnimSiteShape')]),
                  HAnimSite(DEF='STD_Site_r_olecranon_pt',name='r_olecranon_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.1907,1.1405,-0.1065),
                    children=[
                    TouchSensor(description='HAnimSite r_olecranon_pt'),
                    Shape(USE='HAnimSiteShape')])]),
                HAnimJoint(DEF='STD_Joint_r_radiocarpal',name='r_radiocarpal',center=(-0.1959,0.8694,-0.0521),
                  children=[
                  HAnimSegment(DEF='STD_Segment_r_carpal',name='r_carpal',
                    children=[
                    HAnimSite(DEF='STD_Site_r_ulnar_styloid_pt',name='r_ulnar_styloid_pt',scale=(0.0225,0.0225,0.0225),translation=(-0.2117,0.8562,-0.0584),
                      children=[
                      TouchSensor(description='HAnimSite r_ulnar_styloid_pt'),
                      Shape(USE='HAnimSiteShape')])])])])])])])])],
      joints=[
      HAnimJoint(USE='STD_Joint_humanoid_root'),
      segments=[
      HAnimSegment(USE='STD_Segment_sacrum'),
      HAnimJoint(USE='STD_Joint_sacroiliac'),
      HAnimSegment(USE='STD_Segment_pelvis'),
      sites=[
      HAnimSite(USE='STD_Site_l_iliocristale_pt'),
      HAnimSite(USE='STD_Site_buttocks_standing_wall_contact_point_pt'),
      HAnimSite(USE='STD_Site_r_trochanterion_pt'),
      HAnimSite(USE='STD_Site_l_asis_pt'),
      HAnimSite(USE='STD_Site_crotch_pt'),
      HAnimSite(USE='STD_Site_l_psis_pt'),
      HAnimSite(USE='STD_Site_r_iliocristale_pt'),
      HAnimSite(USE='STD_Site_l_trochanterion_pt'),
      HAnimSite(USE='STD_Site_r_asis_pt'),
      HAnimSite(USE='STD_Site_r_psis_pt'),
      HAnimJoint(USE='STD_Joint_l_hip'),
      HAnimSegment(USE='STD_Segment_l_thigh'),
      HAnimSite(USE='STD_Site_l_femoral_lateral_epicondyles_pt'),
      HAnimSite(USE='STD_Site_l_knee_crease_pt'),
      HAnimSite(USE='STD_Site_l_femoral_medial_epicondyles_pt'),
      HAnimSite(USE='STD_Site_l_suprapatella_pt'),
      HAnimJoint(USE='STD_Joint_l_knee'),
      HAnimSegment(USE='STD_Segment_l_calf'),
      HAnimSite(USE='STD_Site_l_lateral_malleolus_pt'),
      HAnimSite(USE='STD_Site_l_medial_malleolus_pt'),
      HAnimSite(USE='STD_Site_l_tibiale_pt'),
      HAnimJoint(USE='STD_Joint_l_talocrural'),
      HAnimSegment(USE='STD_Segment_l_talus'),
      HAnimSite(USE='STD_Site_l_sphyrion_pt'),
      HAnimSite(USE='STD_Site_l_calcaneus_posterior_pt'),
      HAnimJoint(USE='STD_Joint_l_metatarsophalangeal_2'),
      HAnimSegment(USE='STD_Segment_l_tarsal_proximal_phalanx_2'),
      HAnimJoint(USE='STD_Joint_r_hip'),
      HAnimSegment(USE='STD_Segment_r_thigh'),
      HAnimSite(USE='STD_Site_r_suprapatella_pt'),
      HAnimSite(USE='STD_Site_r_knee_crease_pt'),
      HAnimSite(USE='STD_Site_r_femoral_medial_epicondyles_pt'),
      HAnimSite(USE='STD_Site_r_femoral_lateral_epicondyles_pt'),
      HAnimJoint(USE='STD_Joint_r_knee'),
      HAnimSegment(USE='STD_Segment_r_calf'),
      HAnimSite(USE='STD_Site_r_tibiale_pt'),
      HAnimSite(USE='STD_Site_r_lateral_malleolus_pt'),
      HAnimSite(USE='STD_Site_r_medial_malleolus_pt'),
      HAnimJoint(USE='STD_Joint_r_talocrural'),
      HAnimSegment(USE='STD_Segment_r_talus'),
      HAnimSite(USE='STD_Site_r_calcaneus_posterior_pt'),
      HAnimSite(USE='STD_Site_r_sphyrion_pt'),
      HAnimJoint(USE='STD_Joint_r_metatarsophalangeal_2'),
      HAnimSegment(USE='STD_Segment_r_tarsal_proximal_phalanx_2'),
      HAnimJoint(USE='STD_Joint_vl5'),
      HAnimSegment(USE='STD_Segment_l5'),
      HAnimSite(USE='STD_Site_waist_preferred_posterior_pt'),
      HAnimSite(USE='STD_Site_waist_preferred_anterior_pt'),
      HAnimSite(USE='STD_Site_navel_pt'),
      HAnimJoint(USE='STD_Joint_skullbase'),
      HAnimSegment(USE='STD_Segment_skull'),
      HAnimSite(USE='STD_Site_r_infraorbitale_pt'),
      HAnimSite(USE='STD_Site_l_ectocanthus_pt'),
      HAnimSite(USE='STD_Site_r_tragion_pt'),
      HAnimSite(USE='STD_Site_r_ectocanthus_pt'),
      HAnimSite(USE='STD_Site_l_infraorbitale_pt'),
      HAnimSite(USE='STD_Site_sellion_pt'),
      HAnimSite(USE='STD_Site_nuchale_pt'),
      HAnimSite(USE='STD_Site_skull_vertex_pt'),
      HAnimSite(USE='STD_Site_glabella_pt'),
      HAnimSite(USE='STD_Site_opisthocranion_pt'),
      HAnimSite(USE='STD_Site_l_tragion_pt'),
      HAnimJoint(USE='STD_Joint_l_shoulder'),
      HAnimSegment(USE='STD_Segment_l_upperarm'),
      HAnimSite(USE='STD_Site_l_bideltoid_pt'),
      HAnimSite(USE='STD_Site_l_humeral_lateral_epicondyles_pt'),
      HAnimJoint(USE='STD_Joint_l_elbow'),
      HAnimSegment(USE='STD_Segment_l_forearm'),
      HAnimSite(USE='STD_Site_l_olecranon_pt'),
      HAnimSite(USE='STD_Site_l_radial_styloid_pt'),
      HAnimSite(USE='STD_Site_l_humeral_medial_epicondyles_pt'),
      HAnimSite(USE='STD_Site_l_radiale_pt'),
      HAnimJoint(USE='STD_Joint_l_radiocarpal'),
      HAnimSegment(USE='STD_Segment_l_carpal'),
      HAnimSite(USE='STD_Site_l_ulnar_styloid_pt'),
      HAnimJoint(USE='STD_Joint_r_shoulder'),
      HAnimSegment(USE='STD_Segment_r_upperarm'),
      HAnimSite(USE='STD_Site_r_humeral_lateral_epicondyles_pt'),
      HAnimSite(USE='STD_Site_r_bideltoid_pt'),
      HAnimJoint(USE='STD_Joint_r_elbow'),
      HAnimSegment(USE='STD_Segment_r_forearm'),
      HAnimSite(USE='STD_Site_r_radiale_pt'),
      HAnimSite(USE='STD_Site_r_humeral_medial_epicondyles_pt'),
      HAnimSite(USE='STD_Site_r_radial_styloid_pt'),
      HAnimSite(USE='STD_Site_r_olecranon_pt'),
      HAnimJoint(USE='STD_Joint_r_radiocarpal')],
      HAnimSegment(USE='STD_Segment_r_carpal')],
      HAnimSite(USE='STD_Site_r_ulnar_styloid_pt')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for JohnBoy.py")
