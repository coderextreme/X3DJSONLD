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
    meta(name='generator',content='h2.pl'),
    meta(content='John Carlson',name='creator'),
    meta(content='9 November 2020',name='created'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
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
    Viewpoint(description='default'),
    HAnimHumanoid(DEF='hanim_HAnim',info=["humanoidVersion=2.0"],name='HAnim',version='2.0',
      children=[
      HAnimJoint(DEF='hanim_humanoid_root',name='humanoid_root',center=(0.0000,0.8240,0.0277),
        children=[
        HAnimSegment(DEF='hanim_sacrum',name='sacrum',
          children=[
          Transform(translation=(0.0000,0.8240,0.0277),
            children=[
            Transform(
              #  Empty Transform 
              children=[
              Shape(USE='HAnimJointShape')])]),
          Shape(
            geometry=LineSet(vertexCount=[2],
              coord=Coordinate(point=[(0.0000,0.8240,0.0277),(0.0000,0.9149,0.0016)]),
              #  from humanoid_root to sacroiliac 
              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
          HAnimSite(DEF='hanim_buttocks_standing_wall_contact_point_pt',name='buttocks_standing_wall_contact_point_pt',translation=(0,1,0),
            children=[
            TouchSensor(description='HAnimSite buttocks_standing_wall_contact_point_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_crotch_pt',name='crotch_pt',translation=(0.0034,0.8266,0.0257),
            children=[
            TouchSensor(description='HAnimSite crotch_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_l_asis_pt',name='l_asis_pt',translation=(0.0925,0.9983,0.1052),
            children=[
            TouchSensor(description='HAnimSite l_asis_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_l_iliocristale_pt',name='l_iliocristale_pt',translation=(0.1612,1.0537,0.0008),
            children=[
            TouchSensor(description='HAnimSite l_iliocristale_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_l_psis_pt',name='l_psis_pt',translation=(0.0774,1.0190,-0.1151),
            children=[
            TouchSensor(description='HAnimSite l_psis_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_l_trochanterion_pt',name='l_trochanterion_pt',translation=(0.1677,0.8336,0.0303),
            children=[
            TouchSensor(description='HAnimSite l_trochanterion_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_r_asis_pt',name='r_asis_pt',translation=(-0.0887,1.0021,0.1112),
            children=[
            TouchSensor(description='HAnimSite r_asis_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_r_iliocristale_pt',name='r_iliocristale_pt',translation=(-0.1525,1.0628,0.0035),
            children=[
            TouchSensor(description='HAnimSite r_iliocristale_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_r_psis_pt',name='r_psis_pt',translation=(-0.0716,1.0190,-0.1138),
            children=[
            TouchSensor(description='HAnimSite r_psis_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_r_trochanterion_pt',name='r_trochanterion_pt',translation=(-0.1689,0.8419,0.0352),
            children=[
            TouchSensor(description='HAnimSite r_trochanterion_pt'),
            Shape(USE='HAnimSiteShape')]),
          Shape(
            geometry=LineSet(vertexCount=[2],
              coord=Coordinate(point=[(0.0000,0.8240,0.0277),(0.0028,1.0568,-0.0776)]),
              #  from humanoid_root to vl5 
              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
          HAnimSite(DEF='hanim_navel_pt',name='navel_pt',translation=(0.0069,1.0966,0.1017),
            children=[
            TouchSensor(description='HAnimSite navel_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_waist_preferred_anterior_pt',name='waist_preferred_anterior_pt',translation=(0,1,0),
            children=[
            TouchSensor(description='HAnimSite waist_preferred_anterior_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_waist_preferred_posterior_pt',name='waist_preferred_posterior_pt',translation=(0.2900,1.0915,-0.1091),
            children=[
            TouchSensor(description='HAnimSite waist_preferred_posterior_pt'),
            Shape(USE='HAnimSiteShape')])]),
        HAnimJoint(DEF='hanim_sacroiliac',name='sacroiliac',center=(0.0000,0.9149,0.0016),
          children=[
          HAnimSegment(DEF='hanim_pelvis',name='pelvis',
            children=[
            Transform(translation=(0.0000,0.9149,0.0016),
              children=[
              Transform(
                #  Empty Transform 
                children=[
                Shape(USE='HAnimJointShape')])]),
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0.0000,0.9149,0.0016),(0.0961,0.9124,-0.0001)]),
                #  from sacroiliac to l_hip 
                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
            HAnimSite(DEF='hanim_l_femoral_lateral_epicondyles_pt',name='l_femoral_lateral_epicondyles_pt',translation=(0.1598,0.4967,0.0297),
              children=[
              TouchSensor(description='HAnimSite l_femoral_lateral_epicondyles_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_l_femoral_medial_epicondyles_pt',name='l_femoral_medial_epicondyles_pt',translation=(0.0398,0.4946,0.0303),
              children=[
              TouchSensor(description='HAnimSite l_femoral_medial_epicondyles_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_l_knee_crease_pt',name='l_knee_crease_pt',translation=(0.0993,0.4881,-0.0309),
              children=[
              TouchSensor(description='HAnimSite l_knee_crease_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_l_suprapatella_pt',name='l_suprapatella_pt',translation=(0,1,0),
              children=[
              TouchSensor(description='HAnimSite l_suprapatella_pt'),
              Shape(USE='HAnimSiteShape')]),
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0.0000,0.9149,0.0016),(-0.0950,0.9171,0.0029)]),
                #  from sacroiliac to r_hip 
                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
            HAnimSite(DEF='hanim_r_femoral_lateral_epicondyles_pt',name='r_femoral_lateral_epicondyles_pt',translation=(-0.1421,0.4992,0.0310),
              children=[
              TouchSensor(description='HAnimSite r_femoral_lateral_epicondyles_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_r_femoral_medial_epicondyles_pt',name='r_femoral_medial_epicondyles_pt',translation=(-0.0221,0.5014,0.0289),
              children=[
              TouchSensor(description='HAnimSite r_femoral_medial_epicondyles_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_r_knee_crease_pt',name='r_knee_crease_pt',translation=(-0.0825,0.4932,-0.0326),
              children=[
              TouchSensor(description='HAnimSite r_knee_crease_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_r_suprapatella_pt',name='r_suprapatella_pt',translation=(0,1,0),
              children=[
              TouchSensor(description='HAnimSite r_suprapatella_pt'),
              Shape(USE='HAnimSiteShape')])]),
          HAnimJoint(DEF='hanim_l_hip',name='l_hip',center=(0.0961,0.9124,-0.0001),
            children=[
            HAnimSegment(DEF='hanim_l_thigh',name='l_thigh',
              children=[
              Transform(translation=(0.0961,0.9124,-0.0001),
                children=[
                Transform(
                  #  Empty Transform 
                  children=[
                  Shape(USE='HAnimJointShape')])]),
              Shape(
                geometry=LineSet(vertexCount=[2],
                  coord=Coordinate(point=[(0.0961,0.9124,-0.0001),(0.1040,0.4867,0.0308)]),
                  #  from l_hip to l_knee 
                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
              HAnimSite(DEF='hanim_l_lateral_malleolus_pt',name='l_lateral_malleolus_pt',translation=(0.1308,0.0597,-0.1032),
                children=[
                TouchSensor(description='HAnimSite l_lateral_malleolus_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='hanim_l_medial_malleolus_pt',name='l_medial_malleolus_pt',translation=(0.0890,0.0716,-0.0881),
                children=[
                TouchSensor(description='HAnimSite l_medial_malleolus_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='hanim_l_tibiale_pt',name='l_tibiale_pt',translation=(0,1,0),
                children=[
                TouchSensor(description='HAnimSite l_tibiale_pt'),
                Shape(USE='HAnimSiteShape')])]),
            HAnimJoint(DEF='hanim_l_knee',name='l_knee',center=(0.1040,0.4867,0.0308),
              children=[
              HAnimSegment(DEF='hanim_l_calf',name='l_calf',
                children=[
                Transform(translation=(0.1040,0.4867,0.0308),
                  children=[
                  Transform(
                    #  Empty Transform 
                    children=[
                    Shape(USE='HAnimJointShape')])]),
                Shape(
                  geometry=LineSet(vertexCount=[2],
                    coord=Coordinate(point=[(0.1040,0.4867,0.0308),(0.1101,0.0656,-0.0736)]),
                    #  from l_knee to l_talocrural 
                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                HAnimSite(DEF='hanim_l_calcaneus_posterior_pt',name='l_calcaneus_posterior_pt',translation=(0.0974,0.0259,-0.1171),
                  children=[
                  TouchSensor(description='HAnimSite l_calcaneus_posterior_pt'),
                  Shape(USE='HAnimSiteShape')]),
                HAnimSite(DEF='hanim_l_sphyrion_pt',name='l_sphyrion_pt',translation=(0.0890,0.0575,-0.0943),
                  children=[
                  TouchSensor(description='HAnimSite l_sphyrion_pt'),
                  Shape(USE='HAnimSiteShape')])]),
              HAnimJoint(DEF='hanim_l_talocrural',name='l_talocrural',center=(0.1101,0.0656,-0.0736),
                children=[
                HAnimSegment(DEF='hanim_l_talus',name='l_talus',
                  children=[
                  Transform(scale=(0.15,0.15,0.15),translation=(0.08,0.06,-0.025),rotation=(1,0,0,-1.57),
                    #  Transform left foot 
                    children=[
                    Transform(
                      #  Empty Transform left foot 
                      children=[
                      Shape(USE='HAnimJointShape')])]),
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(0.1101,0.0656,-0.0736),(0,1,0)]),
                      #  from l_talocrural to l_talocalcaneonavicular 
                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(0.1101,0.0656,-0.0736),(0,1,0)]),
                      #  from l_talocrural to l_calcaneocuboid 
                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                HAnimJoint(DEF='hanim_l_talocalcaneonavicular',name='l_talocalcaneonavicular',center=(0,1,0),
                  children=[
                  HAnimSegment(DEF='hanim_l_navicular',name='l_navicular',
                    children=[
                    Transform(translation=(0,1,0),
                      children=[
                      Transform(
                        #  Empty Transform 
                        children=[
                        Shape(USE='HAnimJointShape')])]),
                    Shape(
                      geometry=LineSet(vertexCount=[1],
                        coord=Coordinate(point=[(0,1,0)]),
                        #  from l_talocalcaneonavicular to l_cuneonavicular_1 
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                    Shape(
                      geometry=LineSet(vertexCount=[1],
                        coord=Coordinate(point=[(0,1,0)]),
                        #  from l_talocalcaneonavicular to l_cuneonavicular_2 
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                    Shape(
                      geometry=LineSet(vertexCount=[1],
                        coord=Coordinate(point=[(0,1,0)]),
                        #  from l_talocalcaneonavicular to l_cuneonavicular_3 
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                  HAnimJoint(DEF='hanim_l_cuneonavicular_1',name='l_cuneonavicular_1',center=(0,1,0),
                    children=[
                    HAnimSegment(DEF='hanim_l_cuneiform_1',name='l_cuneiform_1',
                      children=[
                      Transform(translation=(0,1,0),
                        children=[
                        Transform(
                          #  Empty Transform 
                          children=[
                          Shape(USE='HAnimJointShape')])]),
                      Shape(
                        geometry=LineSet(vertexCount=[1],
                          coord=Coordinate(point=[(0,1,0)]),
                          #  from l_cuneonavicular_1 to l_tarsometatarsal_1 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_1',name='l_tarsometatarsal_1',center=(0,1,0),
                      children=[
                      HAnimSegment(DEF='hanim_l_metatarsal_1',name='l_metatarsal_1',
                        children=[
                        Transform(translation=(0,1,0),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[1],
                            coord=Coordinate(point=[(0,1,0)]),
                            #  from l_tarsometatarsal_1 to l_metatarsophalangeal_1 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                        HAnimSite(DEF='hanim_l_metatarsal_phalanx_1_pt',name='l_metatarsal_phalanx_1_pt',translation=(0,1,0),
                          children=[
                          TouchSensor(description='HAnimSite l_metatarsal_phalanx_1_pt'),
                          Shape(USE='HAnimSiteShape')])]),
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_1',name='l_metatarsophalangeal_1',center=(0,1,0),
                        children=[
                        HAnimSegment(DEF='hanim_l_tarsal_proximal_phalanx_1',name='l_tarsal_proximal_phalanx_1',
                          children=[
                          Transform(translation=(0,1,0),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[1],
                              coord=Coordinate(point=[(0,1,0)]),
                              #  from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                          HAnimSite(DEF='hanim_l_tarsal_distal_phalanx_1_tip',name='l_tarsal_distal_phalanx_1_tip',translation=(0,1,0),
                            children=[
                            TouchSensor(description='HAnimSite l_tarsal_distal_phalanx_1_tip'),
                            Shape(USE='HAnimSiteShape')])]),
                        HAnimJoint(DEF='hanim_l_tarsal_interphalangeal_1',name='l_tarsal_interphalangeal_1',center=(0,1,0))])])]),
                  HAnimJoint(DEF='hanim_l_cuneonavicular_2',name='l_cuneonavicular_2',center=(0,1,0),
                    children=[
                    HAnimSegment(DEF='hanim_l_cuneiform_2',name='l_cuneiform_2',
                      children=[
                      Transform(translation=(0,1,0),
                        children=[
                        Transform(
                          #  Empty Transform 
                          children=[
                          Shape(USE='HAnimJointShape')])]),
                      Shape(
                        geometry=LineSet(vertexCount=[1],
                          coord=Coordinate(point=[(0,1,0)]),
                          #  from l_cuneonavicular_2 to l_tarsometatarsal_2 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_2',name='l_tarsometatarsal_2',center=(0,1,0),
                      children=[
                      HAnimSegment(DEF='hanim_l_metatarsal_2',name='l_metatarsal_2',
                        children=[
                        Transform(translation=(0,1,0),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[1],
                            coord=Coordinate(point=[(0,1,0)]),
                            #  from l_tarsometatarsal_2 to l_metatarsophalangeal_2 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_2',name='l_metatarsophalangeal_2',center=(0,1,0),
                        children=[
                        HAnimSegment(DEF='hanim_l_tarsal_proximal_phalanx_2',name='l_tarsal_proximal_phalanx_2',
                          children=[
                          Transform(translation=(0,1,0),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[1],
                              coord=Coordinate(point=[(0,1,0)]),
                              #  from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                        HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_2',name='l_tarsal_proximal_interphalangeal_2',center=(0,1,0),
                          children=[
                          HAnimSegment(DEF='hanim_l_tarsal_middle_phalanx_2',name='l_tarsal_middle_phalanx_2',
                            children=[
                            Transform(translation=(0,1,0),
                              children=[
                              Transform(
                                #  Empty Transform 
                                children=[
                                Shape(USE='HAnimJointShape')])]),
                            Shape(
                              geometry=LineSet(vertexCount=[1],
                                coord=Coordinate(point=[(0,1,0)]),
                                #  from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                            HAnimSite(DEF='hanim_l_tarsal_distal_phalanx_2_tip',name='l_tarsal_distal_phalanx_2_tip',translation=(0.1195,0.0079,0.1433),
                              children=[
                              TouchSensor(description='HAnimSite l_tarsal_distal_phalanx_2_tip'),
                              Shape(USE='HAnimSiteShape')])]),
                          HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_2',name='l_tarsal_distal_interphalangeal_2',center=(0,1,0))])])])]),
                  HAnimJoint(DEF='hanim_l_cuneonavicular_3',name='l_cuneonavicular_3',center=(0,1,0),
                    children=[
                    HAnimSegment(DEF='hanim_l_cuneiform_3',name='l_cuneiform_3',
                      children=[
                      Transform(translation=(0,1,0),
                        children=[
                        Transform(
                          #  Empty Transform 
                          children=[
                          Shape(USE='HAnimJointShape')])]),
                      Shape(
                        geometry=LineSet(vertexCount=[1],
                          coord=Coordinate(point=[(0,1,0)]),
                          #  from l_cuneonavicular_3 to l_tarsometatarsal_3 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_3',name='l_tarsometatarsal_3',center=(0,1,0),
                      children=[
                      HAnimSegment(DEF='hanim_l_metatarsal_3',name='l_metatarsal_3',
                        children=[
                        Transform(translation=(0,1,0),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[1],
                            coord=Coordinate(point=[(0,1,0)]),
                            #  from l_tarsometatarsal_3 to l_metatarsophalangeal_3 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_3',name='l_metatarsophalangeal_3',center=(0,1,0),
                        children=[
                        HAnimSegment(DEF='hanim_l_tarsal_proximal_phalanx_3',name='l_tarsal_proximal_phalanx_3',
                          children=[
                          Transform(translation=(0,1,0),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[1],
                              coord=Coordinate(point=[(0,1,0)]),
                              #  from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                        HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_3',name='l_tarsal_proximal_interphalangeal_3',center=(0,1,0),
                          children=[
                          HAnimSegment(DEF='hanim_l_tarsal_middle_phalanx_3',name='l_tarsal_middle_phalanx_3',
                            children=[
                            Transform(translation=(0,1,0),
                              children=[
                              Transform(
                                #  Empty Transform 
                                children=[
                                Shape(USE='HAnimJointShape')])]),
                            Shape(
                              geometry=LineSet(vertexCount=[1],
                                coord=Coordinate(point=[(0,1,0)]),
                                #  from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                            HAnimSite(DEF='hanim_l_tarsal_distal_phalanx_3_tip',name='l_tarsal_distal_phalanx_3_tip',translation=(0,1,0),
                              children=[
                              TouchSensor(description='HAnimSite l_tarsal_distal_phalanx_3_tip'),
                              Shape(USE='HAnimSiteShape')])]),
                          HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_3',name='l_tarsal_distal_interphalangeal_3',center=(0,1,0))])])])])]),
                HAnimJoint(DEF='hanim_l_calcaneocuboid',name='l_calcaneocuboid',center=(0,1,0),
                  children=[
                  HAnimSegment(DEF='hanim_l_calcaneus',name='l_calcaneus',
                    children=[
                    Transform(translation=(0,1,0),
                      children=[
                      Transform(
                        #  Empty Transform 
                        children=[
                        Shape(USE='HAnimJointShape')])]),
                    Shape(
                      geometry=LineSet(vertexCount=[1],
                        coord=Coordinate(point=[(0,1,0)]),
                        #  from l_calcaneocuboid to l_transversetarsal 
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                  HAnimJoint(DEF='hanim_l_transversetarsal',name='l_transversetarsal',center=(0,1,0),
                    children=[
                    HAnimSegment(DEF='hanim_l_cuboid',name='l_cuboid',
                      children=[
                      Transform(translation=(0,1,0),
                        children=[
                        Transform(
                          #  Empty Transform 
                          children=[
                          Shape(USE='HAnimJointShape')])]),
                      Shape(
                        geometry=LineSet(vertexCount=[1],
                          coord=Coordinate(point=[(0,1,0)]),
                          #  from l_transversetarsal to l_tarsometatarsal_4 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                      Shape(
                        geometry=LineSet(vertexCount=[1],
                          coord=Coordinate(point=[(0,1,0)]),
                          #  from l_transversetarsal to l_tarsometatarsal_5 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_4',name='l_tarsometatarsal_4',center=(0,1,0),
                      children=[
                      HAnimSegment(DEF='hanim_l_metatarsal_4',name='l_metatarsal_4',
                        children=[
                        Transform(translation=(0,1,0),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[1],
                            coord=Coordinate(point=[(0,1,0)]),
                            #  from l_tarsometatarsal_4 to l_metatarsophalangeal_4 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_4',name='l_metatarsophalangeal_4',center=(0,1,0),
                        children=[
                        HAnimSegment(DEF='hanim_l_tarsal_proximal_phalanx_4',name='l_tarsal_proximal_phalanx_4',
                          children=[
                          Transform(translation=(0,1,0),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[1],
                              coord=Coordinate(point=[(0,1,0)]),
                              #  from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                        HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_4',name='l_tarsal_proximal_interphalangeal_4',center=(0,1,0),
                          children=[
                          HAnimSegment(DEF='hanim_l_tarsal_middle_phalanx_4',name='l_tarsal_middle_phalanx_4',
                            children=[
                            Transform(translation=(0,1,0),
                              children=[
                              Transform(
                                #  Empty Transform 
                                children=[
                                Shape(USE='HAnimJointShape')])]),
                            Shape(
                              geometry=LineSet(vertexCount=[1],
                                coord=Coordinate(point=[(0,1,0)]),
                                #  from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                            HAnimSite(DEF='hanim_l_tarsal_distal_phalanx_4_tip',name='l_tarsal_distal_phalanx_4_tip',translation=(0,1,0),
                              children=[
                              TouchSensor(description='HAnimSite l_tarsal_distal_phalanx_4_tip'),
                              Shape(USE='HAnimSiteShape')])]),
                          HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_4',name='l_tarsal_distal_interphalangeal_4',center=(0,1,0))])])]),
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_5',name='l_tarsometatarsal_5',center=(0,1,0),
                      children=[
                      HAnimSegment(DEF='hanim_l_metatarsal_5',name='l_metatarsal_5',
                        children=[
                        Transform(translation=(0,1,0),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[1],
                            coord=Coordinate(point=[(0,1,0)]),
                            #  from l_tarsometatarsal_5 to l_metatarsophalangeal_5 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                        HAnimSite(DEF='hanim_l_metatarsal_phalanx_5_pt',name='l_metatarsal_phalanx_5_pt',translation=(0,1,0),
                          children=[
                          TouchSensor(description='HAnimSite l_metatarsal_phalanx_5_pt'),
                          Shape(USE='HAnimSiteShape')])]),
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_5',name='l_metatarsophalangeal_5',center=(0,1,0),
                        children=[
                        HAnimSegment(DEF='hanim_l_tarsal_proximal_phalanx_5',name='l_tarsal_proximal_phalanx_5',
                          children=[
                          Transform(translation=(0,1,0),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[1],
                              coord=Coordinate(point=[(0,1,0)]),
                              #  from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                        HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_5',name='l_tarsal_proximal_interphalangeal_5',center=(0,1,0),
                          children=[
                          HAnimSegment(DEF='hanim_l_tarsal_middle_phalanx_5',name='l_tarsal_middle_phalanx_5',
                            children=[
                            Transform(translation=(0,1,0),
                              children=[
                              Transform(
                                #  Empty Transform 
                                children=[
                                Shape(USE='HAnimJointShape')])]),
                            Shape(
                              geometry=LineSet(vertexCount=[1],
                                coord=Coordinate(point=[(0,1,0)]),
                                #  from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                            HAnimSite(DEF='hanim_l_tarsal_distal_phalanx_5_tip',name='l_tarsal_distal_phalanx_5_tip',translation=(0,1,0),
                              children=[
                              TouchSensor(description='HAnimSite l_tarsal_distal_phalanx_5_tip'),
                              Shape(USE='HAnimSiteShape')])]),
                          HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_5',name='l_tarsal_distal_interphalangeal_5',center=(0,1,0))])])])])])])])]),
          HAnimJoint(DEF='hanim_r_hip',name='r_hip',center=(-0.0950,0.9171,0.0029),
            children=[
            HAnimSegment(DEF='hanim_r_thigh',name='r_thigh',
              children=[
              Transform(translation=(-0.0950,0.9171,0.0029),
                children=[
                Transform(
                  #  Empty Transform 
                  children=[
                  Shape(USE='HAnimJointShape')])]),
              Shape(
                geometry=LineSet(vertexCount=[2],
                  coord=Coordinate(point=[(-0.0950,0.9171,0.0029),(-0.0867,0.4913,0.0318)]),
                  #  from r_hip to r_knee 
                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
              HAnimSite(DEF='hanim_r_lateral_malleolus_pt',name='r_lateral_malleolus_pt',translation=(-0.1006,0.0658,-0.1075),
                children=[
                TouchSensor(description='HAnimSite r_lateral_malleolus_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='hanim_r_medial_malleolus_pt',name='r_medial_malleolus_pt',translation=(-0.0591,0.0760,-0.0928),
                children=[
                TouchSensor(description='HAnimSite r_medial_malleolus_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='hanim_r_tibiale_pt',name='r_tibiale_pt',translation=(0,1,0),
                children=[
                TouchSensor(description='HAnimSite r_tibiale_pt'),
                Shape(USE='HAnimSiteShape')])]),
            HAnimJoint(DEF='hanim_r_knee',name='r_knee',center=(-0.0867,0.4913,0.0318),
              children=[
              HAnimSegment(DEF='hanim_r_calf',name='r_calf',
                children=[
                Transform(translation=(-0.0867,0.4913,0.0318),
                  children=[
                  Transform(
                    #  Empty Transform 
                    children=[
                    Shape(USE='HAnimJointShape')])]),
                Shape(
                  geometry=LineSet(vertexCount=[2],
                    coord=Coordinate(point=[(-0.0867,0.4913,0.0318),(-0.0801,0.0712,-0.0766)]),
                    #  from r_knee to r_talocrural 
                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                HAnimSite(DEF='hanim_r_calcaneus_posterior_pt',name='r_calcaneus_posterior_pt',translation=(-0.0692,0.0297,-0.1221),
                  children=[
                  TouchSensor(description='HAnimSite r_calcaneus_posterior_pt'),
                  Shape(USE='HAnimSiteShape')]),
                HAnimSite(DEF='hanim_r_sphyrion_pt',name='r_sphyrion_pt',translation=(-0.0603,0.0610,-0.1002),
                  children=[
                  TouchSensor(description='HAnimSite r_sphyrion_pt'),
                  Shape(USE='HAnimSiteShape')])]),
              HAnimJoint(DEF='hanim_r_talocrural',name='r_talocrural',center=(-0.0801,0.0712,-0.0766),
                children=[
                HAnimSegment(DEF='hanim_r_talus',name='r_talus',
                  children=[
                  Transform(scale=(0.15,0.15,0.15),translation=(-0.05,0.06,-0.025),rotation=(1,0,0,-1.57),
                    #  Transform right foot 
                    children=[
                    Transform(
                      #  Empty Transform right foot 
                      children=[
                      Shape(USE='HAnimJointShape')])]),
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(-0.0801,0.0712,-0.0766),(0,1,0)]),
                      #  from r_talocrural to r_talocalcaneonavicular 
                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(-0.0801,0.0712,-0.0766),(0,1,0)]),
                      #  from r_talocrural to r_calcaneocuboid 
                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                HAnimJoint(DEF='hanim_r_talocalcaneonavicular',name='r_talocalcaneonavicular',center=(0,1,0),
                  children=[
                  HAnimSegment(DEF='hanim_r_navicular',name='r_navicular',
                    children=[
                    Transform(translation=(0,1,0),
                      children=[
                      Transform(
                        #  Empty Transform 
                        children=[
                        Shape(USE='HAnimJointShape')])]),
                    Shape(
                      geometry=LineSet(vertexCount=[1],
                        coord=Coordinate(point=[(0,1,0)]),
                        #  from r_talocalcaneonavicular to r_cuneonavicular_1 
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                    Shape(
                      geometry=LineSet(vertexCount=[1],
                        coord=Coordinate(point=[(0,1,0)]),
                        #  from r_talocalcaneonavicular to r_cuneonavicular_2 
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                    Shape(
                      geometry=LineSet(vertexCount=[1],
                        coord=Coordinate(point=[(0,1,0)]),
                        #  from r_talocalcaneonavicular to r_cuneonavicular_3 
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                  HAnimJoint(DEF='hanim_r_cuneonavicular_1',name='r_cuneonavicular_1',center=(0,1,0),
                    children=[
                    HAnimSegment(DEF='hanim_r_cuneiform_1',name='r_cuneiform_1',
                      children=[
                      Transform(translation=(0,1,0),
                        children=[
                        Transform(
                          #  Empty Transform 
                          children=[
                          Shape(USE='HAnimJointShape')])]),
                      Shape(
                        geometry=LineSet(vertexCount=[1],
                          coord=Coordinate(point=[(0,1,0)]),
                          #  from r_cuneonavicular_1 to r_tarsometatarsal_1 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_1',name='r_tarsometatarsal_1',center=(0,1,0),
                      children=[
                      HAnimSegment(DEF='hanim_r_metatarsal_1',name='r_metatarsal_1',
                        children=[
                        Transform(translation=(0,1,0),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[1],
                            coord=Coordinate(point=[(0,1,0)]),
                            #  from r_tarsometatarsal_1 to r_metatarsophalangeal_1 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                        HAnimSite(DEF='hanim_r_metatarsal_phalanx_1_pt',name='r_metatarsal_phalanx_1_pt',translation=(0,1,0),
                          children=[
                          TouchSensor(description='HAnimSite r_metatarsal_phalanx_1_pt'),
                          Shape(USE='HAnimSiteShape')])]),
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_1',name='r_metatarsophalangeal_1',center=(0,1,0),
                        children=[
                        HAnimSegment(DEF='hanim_r_tarsal_proximal_phalanx_1',name='r_tarsal_proximal_phalanx_1',
                          children=[
                          Transform(translation=(0,1,0),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[1],
                              coord=Coordinate(point=[(0,1,0)]),
                              #  from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                          HAnimSite(DEF='hanim_r_tarsal_distal_phalanx_1_tip',name='r_tarsal_distal_phalanx_1_tip',translation=(0,1,0),
                            children=[
                            TouchSensor(description='HAnimSite r_tarsal_distal_phalanx_1_tip'),
                            Shape(USE='HAnimSiteShape')])]),
                        HAnimJoint(DEF='hanim_r_tarsal_interphalangeal_1',name='r_tarsal_interphalangeal_1',center=(0,1,0))])])]),
                  HAnimJoint(DEF='hanim_r_cuneonavicular_2',name='r_cuneonavicular_2',center=(0,1,0),
                    children=[
                    HAnimSegment(DEF='hanim_r_cuneiform_2',name='r_cuneiform_2',
                      children=[
                      Transform(translation=(0,1,0),
                        children=[
                        Transform(
                          #  Empty Transform 
                          children=[
                          Shape(USE='HAnimJointShape')])]),
                      Shape(
                        geometry=LineSet(vertexCount=[1],
                          coord=Coordinate(point=[(0,1,0)]),
                          #  from r_cuneonavicular_2 to r_tarsometatarsal_2 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_2',name='r_tarsometatarsal_2',center=(0,1,0),
                      children=[
                      HAnimSegment(DEF='hanim_r_metatarsal_2',name='r_metatarsal_2',
                        children=[
                        Transform(translation=(0,1,0),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[1],
                            coord=Coordinate(point=[(0,1,0)]),
                            #  from r_tarsometatarsal_2 to r_metatarsophalangeal_2 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_2',name='r_metatarsophalangeal_2',center=(0,1,0),
                        children=[
                        HAnimSegment(DEF='hanim_r_tarsal_proximal_phalanx_2',name='r_tarsal_proximal_phalanx_2',
                          children=[
                          Transform(translation=(0,1,0),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[1],
                              coord=Coordinate(point=[(0,1,0)]),
                              #  from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                        HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_2',name='r_tarsal_proximal_interphalangeal_2',center=(0,1,0),
                          children=[
                          HAnimSegment(DEF='hanim_r_tarsal_middle_phalanx_2',name='r_tarsal_middle_phalanx_2',
                            children=[
                            Transform(translation=(0,1,0),
                              children=[
                              Transform(
                                #  Empty Transform 
                                children=[
                                Shape(USE='HAnimJointShape')])]),
                            Shape(
                              geometry=LineSet(vertexCount=[1],
                                coord=Coordinate(point=[(0,1,0)]),
                                #  from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                            HAnimSite(DEF='hanim_r_tarsal_distal_phalanx_2_tip',name='r_tarsal_distal_phalanx_2_tip',translation=(-0.0883,0.0134,0.1383),
                              children=[
                              TouchSensor(description='HAnimSite r_tarsal_distal_phalanx_2_tip'),
                              Shape(USE='HAnimSiteShape')])]),
                          HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_2',name='r_tarsal_distal_interphalangeal_2',center=(0,1,0))])])])]),
                  HAnimJoint(DEF='hanim_r_cuneonavicular_3',name='r_cuneonavicular_3',center=(0,1,0),
                    children=[
                    HAnimSegment(DEF='hanim_r_cuneiform_3',name='r_cuneiform_3',
                      children=[
                      Transform(translation=(0,1,0),
                        children=[
                        Transform(
                          #  Empty Transform 
                          children=[
                          Shape(USE='HAnimJointShape')])]),
                      Shape(
                        geometry=LineSet(vertexCount=[1],
                          coord=Coordinate(point=[(0,1,0)]),
                          #  from r_cuneonavicular_3 to r_tarsometatarsal_3 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_3',name='r_tarsometatarsal_3',center=(0,1,0),
                      children=[
                      HAnimSegment(DEF='hanim_r_metatarsal_3',name='r_metatarsal_3',
                        children=[
                        Transform(translation=(0,1,0),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[1],
                            coord=Coordinate(point=[(0,1,0)]),
                            #  from r_tarsometatarsal_3 to r_metatarsophalangeal_3 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_3',name='r_metatarsophalangeal_3',center=(0,1,0),
                        children=[
                        HAnimSegment(DEF='hanim_r_tarsal_proximal_phalanx_3',name='r_tarsal_proximal_phalanx_3',
                          children=[
                          Transform(translation=(0,1,0),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[1],
                              coord=Coordinate(point=[(0,1,0)]),
                              #  from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                        HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_3',name='r_tarsal_proximal_interphalangeal_3',center=(0,1,0),
                          children=[
                          HAnimSegment(DEF='hanim_r_tarsal_middle_phalanx_3',name='r_tarsal_middle_phalanx_3',
                            children=[
                            Transform(translation=(0,1,0),
                              children=[
                              Transform(
                                #  Empty Transform 
                                children=[
                                Shape(USE='HAnimJointShape')])]),
                            Shape(
                              geometry=LineSet(vertexCount=[1],
                                coord=Coordinate(point=[(0,1,0)]),
                                #  from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                            HAnimSite(DEF='hanim_r_tarsal_distal_phalanx_3_tip',name='r_tarsal_distal_phalanx_3_tip',translation=(0,1,0),
                              children=[
                              TouchSensor(description='HAnimSite r_tarsal_distal_phalanx_3_tip'),
                              Shape(USE='HAnimSiteShape')])]),
                          HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_3',name='r_tarsal_distal_interphalangeal_3',center=(0,1,0))])])])])]),
                HAnimJoint(DEF='hanim_r_calcaneocuboid',name='r_calcaneocuboid',center=(0,1,0),
                  children=[
                  HAnimSegment(DEF='hanim_r_calcaneus',name='r_calcaneus',
                    children=[
                    Transform(translation=(0,1,0),
                      children=[
                      Transform(
                        #  Empty Transform 
                        children=[
                        Shape(USE='HAnimJointShape')])]),
                    Shape(
                      geometry=LineSet(vertexCount=[1],
                        coord=Coordinate(point=[(0,1,0)]),
                        #  from r_calcaneocuboid to r_transversetarsal 
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                  HAnimJoint(DEF='hanim_r_transversetarsal',name='r_transversetarsal',center=(0,1,0),
                    children=[
                    HAnimSegment(DEF='hanim_r_cuboid',name='r_cuboid',
                      children=[
                      Transform(translation=(0,1,0),
                        children=[
                        Transform(
                          #  Empty Transform 
                          children=[
                          Shape(USE='HAnimJointShape')])]),
                      Shape(
                        geometry=LineSet(vertexCount=[1],
                          coord=Coordinate(point=[(0,1,0)]),
                          #  from r_transversetarsal to r_tarsometatarsal_4 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                      Shape(
                        geometry=LineSet(vertexCount=[1],
                          coord=Coordinate(point=[(0,1,0)]),
                          #  from r_transversetarsal to r_tarsometatarsal_5 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_4',name='r_tarsometatarsal_4',center=(0,1,0),
                      children=[
                      HAnimSegment(DEF='hanim_r_metatarsal_4',name='r_metatarsal_4',
                        children=[
                        Transform(translation=(0,1,0),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[1],
                            coord=Coordinate(point=[(0,1,0)]),
                            #  from r_tarsometatarsal_4 to r_metatarsophalangeal_4 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_4',name='r_metatarsophalangeal_4',center=(0,1,0),
                        children=[
                        HAnimSegment(DEF='hanim_r_tarsal_proximal_phalanx_4',name='r_tarsal_proximal_phalanx_4',
                          children=[
                          Transform(translation=(0,1,0),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[1],
                              coord=Coordinate(point=[(0,1,0)]),
                              #  from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                        HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_4',name='r_tarsal_proximal_interphalangeal_4',center=(0,1,0),
                          children=[
                          HAnimSegment(DEF='hanim_r_tarsal_middle_phalanx_4',name='r_tarsal_middle_phalanx_4',
                            children=[
                            Transform(translation=(0,1,0),
                              children=[
                              Transform(
                                #  Empty Transform 
                                children=[
                                Shape(USE='HAnimJointShape')])]),
                            Shape(
                              geometry=LineSet(vertexCount=[1],
                                coord=Coordinate(point=[(0,1,0)]),
                                #  from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                            HAnimSite(DEF='hanim_r_tarsal_distal_phalanx_4_tip',name='r_tarsal_distal_phalanx_4_tip',translation=(0,1,0),
                              children=[
                              TouchSensor(description='HAnimSite r_tarsal_distal_phalanx_4_tip'),
                              Shape(USE='HAnimSiteShape')])]),
                          HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_4',name='r_tarsal_distal_interphalangeal_4',center=(0,1,0))])])]),
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_5',name='r_tarsometatarsal_5',center=(0,1,0),
                      children=[
                      HAnimSegment(DEF='hanim_r_metatarsal_5',name='r_metatarsal_5',
                        children=[
                        Transform(translation=(0,1,0),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[1],
                            coord=Coordinate(point=[(0,1,0)]),
                            #  from r_tarsometatarsal_5 to r_metatarsophalangeal_5 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                        HAnimSite(DEF='hanim_r_metatarsal_phalanx_5_pt',name='r_metatarsal_phalanx_5_pt',translation=(0,1,0),
                          children=[
                          TouchSensor(description='HAnimSite r_metatarsal_phalanx_5_pt'),
                          Shape(USE='HAnimSiteShape')])]),
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_5',name='r_metatarsophalangeal_5',center=(0,1,0),
                        children=[
                        HAnimSegment(DEF='hanim_r_tarsal_proximal_phalanx_5',name='r_tarsal_proximal_phalanx_5',
                          children=[
                          Transform(translation=(0,1,0),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[1],
                              coord=Coordinate(point=[(0,1,0)]),
                              #  from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                        HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_5',name='r_tarsal_proximal_interphalangeal_5',center=(0,1,0),
                          children=[
                          HAnimSegment(DEF='hanim_r_tarsal_middle_phalanx_5',name='r_tarsal_middle_phalanx_5',
                            children=[
                            Transform(translation=(0,1,0),
                              children=[
                              Transform(
                                #  Empty Transform 
                                children=[
                                Shape(USE='HAnimJointShape')])]),
                            Shape(
                              geometry=LineSet(vertexCount=[1],
                                coord=Coordinate(point=[(0,1,0)]),
                                #  from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                            HAnimSite(DEF='hanim_r_tarsal_distal_phalanx_5_tip',name='r_tarsal_distal_phalanx_5_tip',translation=(0,1,0),
                              children=[
                              TouchSensor(description='HAnimSite r_tarsal_distal_phalanx_5_tip'),
                              Shape(USE='HAnimSiteShape')])]),
                          HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_5',name='r_tarsal_distal_interphalangeal_5',center=(0,1,0))])])])])])])])])]),
        HAnimJoint(DEF='hanim_vl5',name='vl5',center=(0.0028,1.0568,-0.0776),
          children=[
          HAnimSegment(DEF='hanim_l5',name='l5',
            children=[
            Transform(translation=(0.0028,1.0568,-0.0776),
              children=[
              Transform(
                #  Empty Transform 
                children=[
                Shape(USE='HAnimJointShape')])]),
            Shape(
              geometry=LineSet(vertexCount=[2],
                coord=Coordinate(point=[(0.0028,1.0568,-0.0776),(0.0035,1.0925,-0.0787)]),
                #  from vl5 to vl4 
                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
          HAnimJoint(DEF='hanim_vl4',name='vl4',center=(0.0035,1.0925,-0.0787),
            children=[
            HAnimSegment(DEF='hanim_l4',name='l4',
              children=[
              Transform(translation=(0.0035,1.0925,-0.0787),
                children=[
                Transform(
                  #  Empty Transform 
                  children=[
                  Shape(USE='HAnimJointShape')])]),
              Shape(
                geometry=LineSet(vertexCount=[2],
                  coord=Coordinate(point=[(0.0035,1.0925,-0.0787),(0.0041,1.1276,-0.0796)]),
                  #  from vl4 to vl3 
                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
            HAnimJoint(DEF='hanim_vl3',name='vl3',center=(0.0041,1.1276,-0.0796),
              children=[
              HAnimSegment(DEF='hanim_l3',name='l3',
                children=[
                Transform(translation=(0.0041,1.1276,-0.0796),
                  children=[
                  Transform(
                    #  Empty Transform 
                    children=[
                    Shape(USE='HAnimJointShape')])]),
                Shape(
                  geometry=LineSet(vertexCount=[2],
                    coord=Coordinate(point=[(0.0041,1.1276,-0.0796),(0.0045,1.1546,-0.0800)]),
                    #  from vl3 to vl2 
                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                HAnimSite(DEF='hanim_l_rib10_pt',name='l_rib10_pt',translation=(0.0871,1.1925,0.0992),
                  children=[
                  TouchSensor(description='HAnimSite l_rib10_pt'),
                  Shape(USE='HAnimSiteShape')]),
                HAnimSite(DEF='hanim_r_rib10_pt',name='r_rib10_pt',translation=(-0.0711,1.1941,0.1016),
                  children=[
                  TouchSensor(description='HAnimSite r_rib10_pt'),
                  Shape(USE='HAnimSiteShape')]),
                HAnimSite(DEF='hanim_spine_2_middle_back_pt',name='spine_2_middle_back_pt',translation=(0,1,0),
                  children=[
                  TouchSensor(description='HAnimSite spine_2_middle_back_pt'),
                  Shape(USE='HAnimSiteShape')])]),
              HAnimJoint(DEF='hanim_vl2',name='vl2',center=(0.0045,1.1546,-0.0800),
                children=[
                HAnimSegment(DEF='hanim_l2',name='l2',
                  children=[
                  Transform(translation=(0.0045,1.1546,-0.0800),
                    children=[
                    Transform(
                      #  Empty Transform 
                      children=[
                      Shape(USE='HAnimJointShape')])]),
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      coord=Coordinate(point=[(0.0045,1.1546,-0.0800),(0.0048,1.1912,-0.0805)]),
                      #  from vl2 to vl1 
                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                HAnimJoint(DEF='hanim_vl1',name='vl1',center=(0.0048,1.1912,-0.0805),
                  children=[
                  HAnimSegment(DEF='hanim_l1',name='l1',
                    children=[
                    Transform(translation=(0.0048,1.1912,-0.0805),
                      children=[
                      Transform(
                        #  Empty Transform 
                        children=[
                        Shape(USE='HAnimJointShape')])]),
                    Shape(
                      geometry=LineSet(vertexCount=[2],
                        coord=Coordinate(point=[(0.0048,1.1912,-0.0805),(0.0051,1.2278,-0.0808)]),
                        #  from vl1 to vt12 
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                  HAnimJoint(DEF='hanim_vt12',name='vt12',center=(0.0051,1.2278,-0.0808),
                    children=[
                    HAnimSegment(DEF='hanim_t12',name='t12',
                      children=[
                      Transform(translation=(0.0051,1.2278,-0.0808),
                        children=[
                        Transform(
                          #  Empty Transform 
                          children=[
                          Shape(USE='HAnimJointShape')])]),
                      Shape(
                        geometry=LineSet(vertexCount=[2],
                          coord=Coordinate(point=[(0.0051,1.2278,-0.0808),(0.0053,1.2679,-0.0810)]),
                          #  from vt12 to vt11 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                    HAnimJoint(DEF='hanim_vt11',name='vt11',center=(0.0053,1.2679,-0.0810),
                      children=[
                      HAnimSegment(DEF='hanim_t11',name='t11',
                        children=[
                        Transform(translation=(0.0053,1.2679,-0.0810),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            coord=Coordinate(point=[(0.0053,1.2679,-0.0810),(0.0056,1.2848,-0.0822)]),
                            #  from vt11 to vt10 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                        HAnimSite(DEF='hanim_substernale_pt',name='substernale_pt',translation=(0.0085,1.2995,0.1147),
                          children=[
                          TouchSensor(description='HAnimSite substernale_pt'),
                          Shape(USE='HAnimSiteShape')])]),
                      HAnimJoint(DEF='hanim_vt10',name='vt10',center=(0.0056,1.2848,-0.0822),
                        children=[
                        HAnimSegment(DEF='hanim_t10',name='t10',
                          children=[
                          Transform(translation=(0.0056,1.2848,-0.0822),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[2],
                              coord=Coordinate(point=[(0.0056,1.2848,-0.0822),(0.0057,1.3126,-0.0838)]),
                              #  from vt10 to vt9 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                          HAnimSite(DEF='hanim_l_thelion_pt',name='l_thelion_pt',translation=(0.0918,1.3382,0.1192),
                            children=[
                            TouchSensor(description='HAnimSite l_thelion_pt'),
                            Shape(USE='HAnimSiteShape')]),
                          HAnimSite(DEF='hanim_r_thelion_pt',name='r_thelion_pt',translation=(-0.0736,1.3385,0.1217),
                            children=[
                            TouchSensor(description='HAnimSite r_thelion_pt'),
                            Shape(USE='HAnimSiteShape')])]),
                        HAnimJoint(DEF='hanim_vt9',name='vt9',center=(0.0057,1.3126,-0.0838),
                          children=[
                          HAnimSegment(DEF='hanim_t9',name='t9',
                            children=[
                            Transform(translation=(0.0057,1.3126,-0.0838),
                              children=[
                              Transform(
                                #  Empty Transform 
                                children=[
                                Shape(USE='HAnimJointShape')])]),
                            Shape(
                              geometry=LineSet(vertexCount=[2],
                                coord=Coordinate(point=[(0.0057,1.3126,-0.0838),(0.0057,1.3382,-0.0845)]),
                                #  from vt9 to vt8 
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                          HAnimJoint(DEF='hanim_vt8',name='vt8',center=(0.0057,1.3382,-0.0845),
                            children=[
                            HAnimSegment(DEF='hanim_t8',name='t8',
                              children=[
                              Transform(translation=(0.0057,1.3382,-0.0845),
                                children=[
                                Transform(
                                  #  Empty Transform 
                                  children=[
                                  Shape(USE='HAnimJointShape')])]),
                              Shape(
                                geometry=LineSet(vertexCount=[2],
                                  coord=Coordinate(point=[(0.0057,1.3382,-0.0845),(0.0058,1.3625,-0.0833)]),
                                  #  from vt8 to vt7 
                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                            HAnimJoint(DEF='hanim_vt7',name='vt7',center=(0.0058,1.3625,-0.0833),
                              children=[
                              HAnimSegment(DEF='hanim_t7',name='t7',
                                children=[
                                Transform(translation=(0.0058,1.3625,-0.0833),
                                  children=[
                                  Transform(
                                    #  Empty Transform 
                                    children=[
                                    Shape(USE='HAnimJointShape')])]),
                                Shape(
                                  geometry=LineSet(vertexCount=[2],
                                    coord=Coordinate(point=[(0.0058,1.3625,-0.0833),(0.0059,1.3866,-0.0800)]),
                                    #  from vt7 to vt6 
                                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                HAnimSite(DEF='hanim_l_chest_midsagittal_plane_pt',name='l_chest_midsagittal_plane_pt',translation=(0,1,0),
                                  children=[
                                  TouchSensor(description='HAnimSite l_chest_midsagittal_plane_pt'),
                                  Shape(USE='HAnimSiteShape')]),
                                HAnimSite(DEF='hanim_mesosternale_pt',name='mesosternale_pt',translation=(0,1,0),
                                  children=[
                                  TouchSensor(description='HAnimSite mesosternale_pt'),
                                  Shape(USE='HAnimSiteShape')]),
                                HAnimSite(DEF='hanim_r_chest_midsagittal_plane_pt',name='r_chest_midsagittal_plane_pt',translation=(0,1,0),
                                  children=[
                                  TouchSensor(description='HAnimSite r_chest_midsagittal_plane_pt'),
                                  Shape(USE='HAnimSiteShape')]),
                                HAnimSite(DEF='hanim_rear_center_midsagittal_plane_pt',name='rear_center_midsagittal_plane_pt',translation=(0,1,0),
                                  children=[
                                  TouchSensor(description='HAnimSite rear_center_midsagittal_plane_pt'),
                                  Shape(USE='HAnimSiteShape')])]),
                              HAnimJoint(DEF='hanim_vt6',name='vt6',center=(0.0059,1.3866,-0.0800),
                                children=[
                                HAnimSegment(DEF='hanim_t6',name='t6',
                                  children=[
                                  Transform(translation=(0.0059,1.3866,-0.0800),
                                    children=[
                                    Transform(
                                      #  Empty Transform 
                                      children=[
                                      Shape(USE='HAnimJointShape')])]),
                                  Shape(
                                    geometry=LineSet(vertexCount=[2],
                                      coord=Coordinate(point=[(0.0059,1.3866,-0.0800),(0.0060,1.4102,-0.0745)]),
                                      #  from vt6 to vt5 
                                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                  HAnimSite(DEF='hanim_spine_1_middle_back_pt',name='spine_1_middle_back_pt',translation=(0,1,0),
                                    children=[
                                    TouchSensor(description='HAnimSite spine_1_middle_back_pt'),
                                    Shape(USE='HAnimSiteShape')])]),
                                HAnimJoint(DEF='hanim_vt5',name='vt5',center=(0.0060,1.4102,-0.0745),
                                  children=[
                                  HAnimSegment(DEF='hanim_t5',name='t5',
                                    children=[
                                    Transform(translation=(0.0060,1.4102,-0.0745),
                                      children=[
                                      Transform(
                                        #  Empty Transform 
                                        children=[
                                        Shape(USE='HAnimJointShape')])]),
                                    Shape(
                                      geometry=LineSet(vertexCount=[2],
                                        coord=Coordinate(point=[(0.0060,1.4102,-0.0745),(0.0061,1.4320,-0.0675)]),
                                        #  from vt5 to vt4 
                                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                  HAnimJoint(DEF='hanim_vt4',name='vt4',center=(0.0061,1.4320,-0.0675),
                                    children=[
                                    HAnimSegment(DEF='hanim_t4',name='t4',
                                      children=[
                                      Transform(translation=(0.0061,1.4320,-0.0675),
                                        children=[
                                        Transform(
                                          #  Empty Transform 
                                          children=[
                                          Shape(USE='HAnimJointShape')])]),
                                      Shape(
                                        geometry=LineSet(vertexCount=[2],
                                          coord=Coordinate(point=[(0.0061,1.4320,-0.0675),(0.0062,1.4583,-0.0570)]),
                                          #  from vt4 to vt3 
                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                    HAnimJoint(DEF='hanim_vt3',name='vt3',center=(0.0062,1.4583,-0.0570),
                                      children=[
                                      HAnimSegment(DEF='hanim_t3',name='t3',
                                        children=[
                                        Transform(translation=(0.0062,1.4583,-0.0570),
                                          children=[
                                          Transform(
                                            #  Empty Transform 
                                            children=[
                                            Shape(USE='HAnimJointShape')])]),
                                        Shape(
                                          geometry=LineSet(vertexCount=[2],
                                            coord=Coordinate(point=[(0.0062,1.4583,-0.0570),(0.0063,1.4761,-0.0484)]),
                                            #  from vt3 to vt2 
                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                      HAnimJoint(DEF='hanim_vt2',name='vt2',center=(0.0063,1.4761,-0.0484),
                                        children=[
                                        HAnimSegment(DEF='hanim_t2',name='t2',
                                          children=[
                                          Transform(translation=(0.0063,1.4761,-0.0484),
                                            children=[
                                            Transform(
                                              #  Empty Transform 
                                              children=[
                                              Shape(USE='HAnimJointShape')])]),
                                          Shape(
                                            geometry=LineSet(vertexCount=[2],
                                              coord=Coordinate(point=[(0.0063,1.4761,-0.0484),(0.0065,1.4951,-0.0387)]),
                                              #  from vt2 to vt1 
                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                          HAnimSite(DEF='hanim_cervicale_pt',name='cervicale_pt',translation=(0.0064,1.520,-0.0815),
                                            children=[
                                            TouchSensor(description='HAnimSite cervicale_pt'),
                                            Shape(USE='HAnimSiteShape')]),
                                          HAnimSite(DEF='hanim_suprasternale_pt',name='suprasternale_pt',translation=(0.0084,1.4714,0.0551),
                                            children=[
                                            TouchSensor(description='HAnimSite suprasternale_pt'),
                                            Shape(USE='HAnimSiteShape')])]),
                                        HAnimJoint(DEF='hanim_vt1',name='vt1',center=(0.0065,1.4951,-0.0387),
                                          children=[
                                          HAnimSegment(DEF='hanim_t1',name='t1',
                                            children=[
                                            Transform(translation=(0.0065,1.4951,-0.0387),
                                              children=[
                                              Transform(
                                                #  Empty Transform 
                                                children=[
                                                Shape(USE='HAnimJointShape')])]),
                                            Shape(
                                              geometry=LineSet(vertexCount=[2],
                                                coord=Coordinate(point=[(0.0065,1.4951,-0.0387),(0.0066,1.5132,-0.0301)]),
                                                #  from vt1 to vc7 
                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                            HAnimSite(DEF='hanim_l_neck_base_pt',name='l_neck_base_pt',translation=(0.0646,1.5141,-0.0380),
                                              children=[
                                              TouchSensor(description='HAnimSite l_neck_base_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_r_neck_base_pt',name='r_neck_base_pt',translation=(-0.0419,1.5149,-0.0220),
                                              children=[
                                              TouchSensor(description='HAnimSite r_neck_base_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            Shape(
                                              geometry=LineSet(vertexCount=[2],
                                                coord=Coordinate(point=[(0.0065,1.4951,-0.0387),(0.0820,1.4488,-0.0353)]),
                                                #  from vt1 to l_sternoclavicular 
                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                            HAnimSite(DEF='hanim_l_acromion_pt',name='l_acromion_pt',translation=(0.2032,1.4760,-0.0490),
                                              children=[
                                              TouchSensor(description='HAnimSite l_acromion_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_l_axilla_distal_pt',name='l_axilla_distal_pt',translation=(0.1706,1.4072,-0.0875),
                                              children=[
                                              TouchSensor(description='HAnimSite l_axilla_distal_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_l_axilla_posterior_folds_pt',name='l_axilla_posterior_folds_pt',translation=(0,1,0),
                                              children=[
                                              TouchSensor(description='HAnimSite l_axilla_posterior_folds_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_l_axilla_proximal_pt',name='l_axilla_proximal_pt',translation=(0.1777,1.4065,-0.0075),
                                              children=[
                                              TouchSensor(description='HAnimSite l_axilla_proximal_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_l_clavicale_pt',name='l_clavicale_pt',translation=(0.0271,1.4943,0.0394),
                                              children=[
                                              TouchSensor(description='HAnimSite l_clavicale_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            Shape(
                                              geometry=LineSet(vertexCount=[2],
                                                coord=Coordinate(point=[(0.0065,1.4951,-0.0387),(-0.0694,1.4600,-0.0330)]),
                                                #  from vt1 to r_sternoclavicular 
                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                            HAnimSite(DEF='hanim_r_acromion_pt',name='r_acromion_pt',translation=(-0.1905,1.4791,-0.0431),
                                              children=[
                                              TouchSensor(description='HAnimSite r_acromion_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_r_axilla_distal_pt',name='r_axilla_distal_pt',translation=(-0.1603,1.4098,-0.0826),
                                              children=[
                                              TouchSensor(description='HAnimSite r_axilla_distal_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_r_axilla_posterior_folds_pt',name='r_axilla_posterior_folds_pt',translation=(0,1,0),
                                              children=[
                                              TouchSensor(description='HAnimSite r_axilla_posterior_folds_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_r_axilla_proximal_pt',name='r_axilla_proximal_pt',translation=(-0.1626,1.4072,-0.0031),
                                              children=[
                                              TouchSensor(description='HAnimSite r_axilla_proximal_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_r_clavicale_pt',name='r_clavicale_pt',translation=(-0.0115,1.4943,0.0400),
                                              children=[
                                              TouchSensor(description='HAnimSite r_clavicale_pt'),
                                              Shape(USE='HAnimSiteShape')])]),
                                          HAnimJoint(DEF='hanim_vc7',name='vc7',center=(0.0066,1.5132,-0.0301),
                                            children=[
                                            HAnimSegment(DEF='hanim_c7',name='c7',
                                              children=[
                                              Transform(translation=(0.0066,1.5132,-0.0301),
                                                children=[
                                                Transform(
                                                  #  Empty Transform 
                                                  children=[
                                                  Shape(USE='HAnimJointShape')])]),
                                              Shape(
                                                geometry=LineSet(vertexCount=[2],
                                                  coord=Coordinate(point=[(0.0066,1.5132,-0.0301),(0.0066,1.5357,-0.0143)]),
                                                  #  from vc7 to vc6 
                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                            HAnimJoint(DEF='hanim_vc6',name='vc6',center=(0.0066,1.5357,-0.0143),
                                              children=[
                                              HAnimSegment(DEF='hanim_c6',name='c6',
                                                children=[
                                                Transform(translation=(0.0066,1.5357,-0.0143),
                                                  children=[
                                                  Transform(
                                                    #  Empty Transform 
                                                    children=[
                                                    Shape(USE='HAnimJointShape')])]),
                                                Shape(
                                                  geometry=LineSet(vertexCount=[2],
                                                    coord=Coordinate(point=[(0.0066,1.5357,-0.0143),(0.0066,1.5520,-0.0082)]),
                                                    #  from vc6 to vc5 
                                                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                              HAnimJoint(DEF='hanim_vc5',name='vc5',center=(0.0066,1.5520,-0.0082),
                                                children=[
                                                HAnimSegment(DEF='hanim_c5',name='c5',
                                                  children=[
                                                  Transform(translation=(0.0066,1.5520,-0.0082),
                                                    children=[
                                                    Transform(
                                                      #  Empty Transform 
                                                      children=[
                                                      Shape(USE='HAnimJointShape')])]),
                                                  Shape(
                                                    geometry=LineSet(vertexCount=[2],
                                                      coord=Coordinate(point=[(0.0066,1.5520,-0.0082),(0.0066,1.5662,-0.0084)]),
                                                      #  from vc5 to vc4 
                                                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                HAnimJoint(DEF='hanim_vc4',name='vc4',center=(0.0066,1.5662,-0.0084),
                                                  children=[
                                                  HAnimSegment(DEF='hanim_c4',name='c4',
                                                    children=[
                                                    Transform(translation=(0.0066,1.5662,-0.0084),
                                                      children=[
                                                      Transform(
                                                        #  Empty Transform 
                                                        children=[
                                                        Shape(USE='HAnimJointShape')])]),
                                                    Shape(
                                                      geometry=LineSet(vertexCount=[2],
                                                        coord=Coordinate(point=[(0.0066,1.5662,-0.0084),(0.0066,1.5800,-0.0103)]),
                                                        #  from vc4 to vc3 
                                                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                  HAnimJoint(DEF='hanim_vc3',name='vc3',center=(0.0066,1.5800,-0.0103),
                                                    children=[
                                                    HAnimSegment(DEF='hanim_c3',name='c3',
                                                      children=[
                                                      Transform(translation=(0.0066,1.5800,-0.0103),
                                                        children=[
                                                        Transform(
                                                          #  Empty Transform 
                                                          children=[
                                                          Shape(USE='HAnimJointShape')])]),
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(0.0066,1.5800,-0.0103),(0.0066,1.5928,-0.0103)]),
                                                          #  from vc3 to vc2 
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                      HAnimSite(DEF='hanim_adams_apple_pt',name='adams_apple_pt',translation=(0,1,0),
                                                        children=[
                                                        TouchSensor(description='HAnimSite adams_apple_pt'),
                                                        Shape(USE='HAnimSiteShape')])]),
                                                    HAnimJoint(DEF='hanim_vc2',name='vc2',center=(0.0066,1.5928,-0.0103),
                                                      children=[
                                                      HAnimSegment(DEF='hanim_c2',name='c2',
                                                        children=[
                                                        Transform(translation=(0.0066,1.5928,-0.0103),
                                                          children=[
                                                          Transform(
                                                            #  Empty Transform 
                                                            children=[
                                                            Shape(USE='HAnimJointShape')])]),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            coord=Coordinate(point=[(0.0066,1.5928,-0.0103),(0.0066,1.6144,-0.0034)]),
                                                            #  from vc2 to vc1 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                      HAnimJoint(DEF='hanim_vc1',name='vc1',center=(0.0066,1.6144,-0.0034),
                                                        children=[
                                                        HAnimSegment(DEF='hanim_c1',name='c1',
                                                          children=[
                                                          Transform(translation=(0.0066,1.6144,-0.0034),
                                                            children=[
                                                            Transform(
                                                              #  Empty Transform 
                                                              children=[
                                                              Shape(USE='HAnimJointShape')])]),
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(0.0066,1.6144,-0.0034),(0.0044,1.6209,0.0236)]),
                                                              #  from vc1 to skullbase 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                          HAnimSite(DEF='hanim_glabella_pt',name='glabella_pt',translation=(0,1,0),
                                                            children=[
                                                            TouchSensor(description='HAnimSite glabella_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_l_ectocanthus_pt',name='l_ectocanthus_pt',translation=(0,1,0),
                                                            children=[
                                                            TouchSensor(description='HAnimSite l_ectocanthus_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_l_infraorbitale_pt',name='l_infraorbitale_pt',translation=(0.0341,1.6171,0.0752),
                                                            children=[
                                                            TouchSensor(description='HAnimSite l_infraorbitale_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_l_tragion_pt',name='l_tragion_pt',translation=(0.0739,1.6348,0.0282),
                                                            children=[
                                                            TouchSensor(description='HAnimSite l_tragion_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_nuchale_pt',name='nuchale_pt',translation=(0.0039,1.5972,-0.0796),
                                                            children=[
                                                            TouchSensor(description='HAnimSite nuchale_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_opisthocranion_pt',name='opisthocranion_pt',translation=(0,1,0),
                                                            children=[
                                                            TouchSensor(description='HAnimSite opisthocranion_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_r_ectocanthus_pt',name='r_ectocanthus_pt',translation=(0,1,0),
                                                            children=[
                                                            TouchSensor(description='HAnimSite r_ectocanthus_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_r_infraorbitale_pt',name='r_infraorbitale_pt',translation=(-0.0237,1.6171,0.0752),
                                                            children=[
                                                            TouchSensor(description='HAnimSite r_infraorbitale_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_r_tragion_pt',name='r_tragion_pt',translation=(-0.0646,1.6347,0.0302),
                                                            children=[
                                                            TouchSensor(description='HAnimSite r_tragion_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_sellion_pt',name='sellion_pt',translation=(0.0058,1.6316,0.0852),
                                                            children=[
                                                            TouchSensor(description='HAnimSite sellion_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_skull_vertex_pt',name='skull_vertex_pt',translation=(0.0050,1.7504,0.0055),
                                                            children=[
                                                            TouchSensor(description='HAnimSite skull_vertex_pt'),
                                                            Shape(USE='HAnimSiteShape')])]),
                                                        HAnimJoint(DEF='hanim_skullbase',name='skullbase',center=(0.0044,1.6209,0.0236),
                                                          children=[
                                                          HAnimSegment(DEF='hanim_skull',name='skull',
                                                            children=[
                                                            Transform(translation=(0.0044,1.6209,0.0236),
                                                              children=[
                                                              Transform(
                                                                #  Empty Transform 
                                                                children=[
                                                                Shape(USE='HAnimJointShape')])]),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0,1,0)]),
                                                                #  from skullbase to l_eyelid_joint 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0,1,0)]),
                                                                #  from skullbase to r_eyelid_joint 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0,1,0)]),
                                                                #  from skullbase to l_eyeball_joint 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0,1,0)]),
                                                                #  from skullbase to r_eyeball_joint 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0,1,0)]),
                                                                #  from skullbase to l_eyebrow_joint 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0,1,0)]),
                                                                #  from skullbase to r_eyebrow_joint 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0,1,0)]),
                                                                #  from skullbase to temporomandibular 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                            HAnimSite(DEF='hanim_l_gonion_pt',name='l_gonion_pt',translation=(0.0631,1.5530,0.0330),
                                                              children=[
                                                              TouchSensor(description='HAnimSite l_gonion_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='hanim_menton_pt',name='menton_pt',translation=(0,1,0),
                                                              children=[
                                                              TouchSensor(description='HAnimSite menton_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='hanim_r_gonion_pt',name='r_gonion_pt',translation=(-0.0520,1.5529,0.0347),
                                                              children=[
                                                              TouchSensor(description='HAnimSite r_gonion_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='hanim_supramenton_pt',name='supramenton_pt',translation=(0.0061,1.5410,0.0805),
                                                              children=[
                                                              TouchSensor(description='HAnimSite supramenton_pt'),
                                                              Shape(USE='HAnimSiteShape')])]),
                                                          HAnimJoint(DEF='hanim_l_eyelid_joint',name='l_eyelid_joint',center=(0,1,0)),
                                                          HAnimJoint(DEF='hanim_r_eyelid_joint',name='r_eyelid_joint',center=(0,1,0)),
                                                          HAnimJoint(DEF='hanim_l_eyeball_joint',name='l_eyeball_joint',center=(0,1,0)),
                                                          HAnimJoint(DEF='hanim_r_eyeball_joint',name='r_eyeball_joint',center=(0,1,0)),
                                                          HAnimJoint(DEF='hanim_l_eyebrow_joint',name='l_eyebrow_joint',center=(0,1,0)),
                                                          HAnimJoint(DEF='hanim_r_eyebrow_joint',name='r_eyebrow_joint',center=(0,1,0)),
                                                          HAnimJoint(DEF='hanim_temporomandibular',name='temporomandibular',center=(0,1,0))])])])])])])])]),
                                          HAnimJoint(DEF='hanim_l_sternoclavicular',name='l_sternoclavicular',center=(0.0820,1.4488,-0.0353),
                                            children=[
                                            HAnimSegment(DEF='hanim_l_clavicle',name='l_clavicle',
                                              children=[
                                              Transform(translation=(0.0820,1.4488,-0.0353),
                                                children=[
                                                Transform(
                                                  #  Empty Transform 
                                                  children=[
                                                  Shape(USE='HAnimJointShape')])]),
                                              Shape(
                                                geometry=LineSet(vertexCount=[2],
                                                  coord=Coordinate(point=[(0.0820,1.4488,-0.0353),(0.0962,1.4269,-0.0424)]),
                                                  #  from l_sternoclavicular to l_acromioclavicular 
                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                            HAnimJoint(DEF='hanim_l_acromioclavicular',name='l_acromioclavicular',center=(0.0962,1.4269,-0.0424),
                                              children=[
                                              HAnimSegment(DEF='hanim_l_scapula',name='l_scapula',
                                                children=[
                                                Transform(translation=(0.0962,1.4269,-0.0424),
                                                  children=[
                                                  Transform(
                                                    #  Empty Transform 
                                                    children=[
                                                    Shape(USE='HAnimJointShape')])]),
                                                Shape(
                                                  geometry=LineSet(vertexCount=[2],
                                                    coord=Coordinate(point=[(0.0962,1.4269,-0.0424),(0.2029,1.4376,-0.0387)]),
                                                    #  from l_acromioclavicular to l_shoulder 
                                                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                HAnimSite(DEF='hanim_l_bideltoid_pt',name='l_bideltoid_pt',translation=(0,1,0),
                                                  children=[
                                                  TouchSensor(description='HAnimSite l_bideltoid_pt'),
                                                  Shape(USE='HAnimSiteShape')]),
                                                HAnimSite(DEF='hanim_l_humeral_lateral_epicondyles_pt',name='l_humeral_lateral_epicondyles_pt',translation=(0.2280,1.1482,-0.1100),
                                                  children=[
                                                  TouchSensor(description='HAnimSite l_humeral_lateral_epicondyles_pt'),
                                                  Shape(USE='HAnimSiteShape')])]),
                                              HAnimJoint(DEF='hanim_l_shoulder',name='l_shoulder',center=(0.2029,1.4376,-0.0387),
                                                children=[
                                                HAnimSegment(DEF='hanim_l_upperarm',name='l_upperarm',
                                                  children=[
                                                  Transform(translation=(0.2029,1.4376,-0.0387),
                                                    children=[
                                                    Transform(
                                                      #  Empty Transform 
                                                      children=[
                                                      Shape(USE='HAnimJointShape')])]),
                                                  Shape(
                                                    geometry=LineSet(vertexCount=[2],
                                                      coord=Coordinate(point=[(0.2029,1.4376,-0.0387),(0.2014,1.1357,-0.0682)]),
                                                      #  from l_shoulder to l_elbow 
                                                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                  HAnimSite(DEF='hanim_l_humeral_medial_epicondyles_pt',name='l_humeral_medial_epicondyles_pt',translation=(0.1735,1.1272,-0.1113),
                                                    children=[
                                                    TouchSensor(description='HAnimSite l_humeral_medial_epicondyles_pt'),
                                                    Shape(USE='HAnimSiteShape')]),
                                                  HAnimSite(DEF='hanim_l_olecranon_pt',name='l_olecranon_pt',translation=(-0.1962,1.1375,-0.1123),
                                                    children=[
                                                    TouchSensor(description='HAnimSite l_olecranon_pt'),
                                                    Shape(USE='HAnimSiteShape')]),
                                                  HAnimSite(DEF='hanim_l_radial_styloid_pt',name='l_radial_styloid_pt',translation=(0.1901,0.8645,-0.0415),
                                                    children=[
                                                    TouchSensor(description='HAnimSite l_radial_styloid_pt'),
                                                    Shape(USE='HAnimSiteShape')]),
                                                  HAnimSite(DEF='hanim_l_radiale_pt',name='l_radiale_pt',translation=(0.2182,1.1212,-0.1167),
                                                    children=[
                                                    TouchSensor(description='HAnimSite l_radiale_pt'),
                                                    Shape(USE='HAnimSiteShape')])]),
                                                HAnimJoint(DEF='hanim_l_elbow',name='l_elbow',center=(0.2014,1.1357,-0.0682),
                                                  children=[
                                                  HAnimSegment(DEF='hanim_l_forearm',name='l_forearm',
                                                    children=[
                                                    Transform(translation=(0.2014,1.1357,-0.0682),
                                                      children=[
                                                      Transform(
                                                        #  Empty Transform 
                                                        children=[
                                                        Shape(USE='HAnimJointShape')])]),
                                                    Shape(
                                                      geometry=LineSet(vertexCount=[2],
                                                        coord=Coordinate(point=[(0.2014,1.1357,-0.0682),(0.1984,0.8663,-0.0583)]),
                                                        #  from l_elbow to l_radiocarpal 
                                                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                    HAnimSite(DEF='hanim_l_ulnar_styloid_pt',name='l_ulnar_styloid_pt',translation=(-0.2142,0.8529,-0.0648),
                                                      children=[
                                                      TouchSensor(description='HAnimSite l_ulnar_styloid_pt'),
                                                      Shape(USE='HAnimSiteShape')])]),
                                                  HAnimJoint(DEF='hanim_l_radiocarpal',name='l_radiocarpal',center=(0.1984,0.8663,-0.0583),
                                                    children=[
                                                    HAnimSegment(DEF='hanim_l_carpal',name='l_carpal',
                                                      children=[
                                                      Transform(scale=(0.2,0.2,0.2),translation=(0.20,0.85,-0.05),rotation=(0,0,1,-3.14),
                                                        #  Transform left hand 
                                                        children=[
                                                        Transform(rotation=(0,1,0,-1.57),
                                                          #  Transform left hand 
                                                          children=[
                                                          Shape(USE='HAnimJointShape')])]),
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(0.1984,0.8663,-0.0583),(0,1,0)]),
                                                          #  from l_radiocarpal to l_midcarpal_1 
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(0.1984,0.8663,-0.0583),(0,1,0)]),
                                                          #  from l_radiocarpal to l_midcarpal_2 
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(0.1984,0.8663,-0.0583),(0,1,0)]),
                                                          #  from l_radiocarpal to l_midcarpal_3 
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(0.1984,0.8663,-0.0583),(0,1,0)]),
                                                          #  from l_radiocarpal to l_midcarpal_4_5 
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                    HAnimJoint(DEF='hanim_l_midcarpal_1',name='l_midcarpal_1',center=(0,1,0),
                                                      children=[
                                                      HAnimSegment(DEF='hanim_l_trapezium',name='l_trapezium',
                                                        children=[
                                                        Transform(translation=(0,1,0),
                                                          children=[
                                                          Transform(
                                                            #  Empty Transform 
                                                            children=[
                                                            Shape(USE='HAnimJointShape')])]),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[1],
                                                            coord=Coordinate(point=[(0.1924,0.8472,-0.0534)]),
                                                            #  from l_midcarpal_1 to l_carpometacarpal_1 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_1',name='l_carpometacarpal_1',center=(0.1924,0.8472,-0.0534),
                                                        children=[
                                                        HAnimSegment(DEF='hanim_l_metacarpal_1',name='l_metacarpal_1',
                                                          children=[
                                                          Transform(translation=(0.1924,0.8472,-0.0534),
                                                            children=[
                                                            Transform(
                                                              #  Empty Transform 
                                                              children=[
                                                              Shape(USE='HAnimJointShape')])]),
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(0.1924,0.8472,-0.0534),(0.1951,0.8226,0.0246)]),
                                                              #  from l_carpometacarpal_1 to l_metacarpophalangeal_1 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_1',name='l_metacarpophalangeal_1',center=(0.1951,0.8226,0.0246),
                                                          children=[
                                                          HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_1',name='l_carpal_proximal_phalanx_1',
                                                            children=[
                                                            Transform(translation=(0.1951,0.8226,0.0246),
                                                              children=[
                                                              Transform(
                                                                #  Empty Transform 
                                                                children=[
                                                                Shape(USE='HAnimJointShape')])]),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.1951,0.8226,0.0246),(0.1955,0.8159,0.0464)]),
                                                                #  from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                            HAnimSite(DEF='hanim_l_carpal_distal_phalanx_1_tip',name='l_carpal_distal_phalanx_1_tip',translation=(0,1,0),
                                                              children=[
                                                              TouchSensor(description='HAnimSite l_carpal_distal_phalanx_1_tip'),
                                                              Shape(USE='HAnimSiteShape')])]),
                                                          HAnimJoint(DEF='hanim_l_carpal_interphalangeal_1',name='l_carpal_interphalangeal_1',center=(0.1955,0.8159,0.0464))])])]),
                                                    HAnimJoint(DEF='hanim_l_midcarpal_2',name='l_midcarpal_2',center=(0,1,0),
                                                      children=[
                                                      HAnimSegment(DEF='hanim_l_trapezoid',name='l_trapezoid',
                                                        children=[
                                                        Transform(translation=(0,1,0),
                                                          children=[
                                                          Transform(
                                                            #  Empty Transform 
                                                            children=[
                                                            Shape(USE='HAnimJointShape')])]),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[1],
                                                            coord=Coordinate(point=[(0.1983,0.8024,-0.0280)]),
                                                            #  from l_midcarpal_2 to l_carpometacarpal_2 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                        HAnimSite(DEF='hanim_l_metacarpal_phalanx_2_pt',name='l_metacarpal_phalanx_2_pt',translation=(0.2009,0.8139,-0.0237),
                                                          children=[
                                                          TouchSensor(description='HAnimSite l_metacarpal_phalanx_2_pt'),
                                                          Shape(USE='HAnimSiteShape')])]),
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_2',name='l_carpometacarpal_2',center=(0.1983,0.8024,-0.0280),
                                                        children=[
                                                        HAnimSegment(DEF='hanim_l_metacarpal_2',name='l_metacarpal_2',
                                                          children=[
                                                          Transform(translation=(0.1983,0.8024,-0.0280),
                                                            children=[
                                                            Transform(
                                                              #  Empty Transform 
                                                              children=[
                                                              Shape(USE='HAnimJointShape')])]),
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(0.1983,0.8024,-0.0280),(0.1983,0.7815,-0.0280)]),
                                                              #  from l_carpometacarpal_2 to l_metacarpophalangeal_2 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_2',name='l_metacarpophalangeal_2',center=(0.1983,0.7815,-0.0280),
                                                          children=[
                                                          HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_2',name='l_carpal_proximal_phalanx_2',
                                                            children=[
                                                            Transform(translation=(0.1983,0.7815,-0.0280),
                                                              children=[
                                                              Transform(
                                                                #  Empty Transform 
                                                                children=[
                                                                Shape(USE='HAnimJointShape')])]),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.1983,0.7815,-0.0280),(0.2017,0.7363,-0.0248)]),
                                                                #  from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                          HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_2',name='l_carpal_proximal_interphalangeal_2',center=(0.2017,0.7363,-0.0248),
                                                            children=[
                                                            HAnimSegment(DEF='hanim_l_carpal_middle_phalanx_2',name='l_carpal_middle_phalanx_2',
                                                              children=[
                                                              Transform(translation=(0.2017,0.7363,-0.0248),
                                                                children=[
                                                                Transform(
                                                                  #  Empty Transform 
                                                                  children=[
                                                                  Shape(USE='HAnimJointShape')])]),
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(0.2017,0.7363,-0.0248),(0.2028,0.7139,-0.0236)]),
                                                                  #  from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 
                                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                              HAnimSite(DEF='hanim_l_carpal_distal_phalanx_2_tip',name='l_carpal_distal_phalanx_2_tip',translation=(0,1,0),
                                                                children=[
                                                                TouchSensor(description='HAnimSite l_carpal_distal_phalanx_2_tip'),
                                                                Shape(USE='HAnimSiteShape')]),
                                                              HAnimSite(DEF='hanim_l_dactylion_pt',name='l_dactylion_pt',translation=(0.2056,0.6743,-0.0482),
                                                                children=[
                                                                TouchSensor(description='HAnimSite l_dactylion_pt'),
                                                                Shape(USE='HAnimSiteShape')])]),
                                                            HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_2',name='l_carpal_distal_interphalangeal_2',center=(0.2028,0.7139,-0.0236))])])])]),
                                                    HAnimJoint(DEF='hanim_l_midcarpal_3',name='l_midcarpal_3',center=(0,1,0),
                                                      children=[
                                                      HAnimSegment(DEF='hanim_l_capitate',name='l_capitate',
                                                        children=[
                                                        Transform(translation=(0,1,0),
                                                          children=[
                                                          Transform(
                                                            #  Empty Transform 
                                                            children=[
                                                            Shape(USE='HAnimJointShape')])]),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[1],
                                                            coord=Coordinate(point=[(0.1987,0.8029,-0.0530)]),
                                                            #  from l_midcarpal_3 to l_carpometacarpal_3 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                        HAnimSite(DEF='hanim_l_metacarpal_phalanx_3_pt',name='l_metacarpal_phalanx_3_pt',translation=(0,1,0),
                                                          children=[
                                                          TouchSensor(description='HAnimSite l_metacarpal_phalanx_3_pt'),
                                                          Shape(USE='HAnimSiteShape')])]),
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_3',name='l_carpometacarpal_3',center=(0.1987,0.8029,-0.0530),
                                                        children=[
                                                        HAnimSegment(DEF='hanim_l_metacarpal_3',name='l_metacarpal_3',
                                                          children=[
                                                          Transform(translation=(0.1987,0.8029,-0.0530),
                                                            children=[
                                                            Transform(
                                                              #  Empty Transform 
                                                              children=[
                                                              Shape(USE='HAnimJointShape')])]),
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(0.1987,0.8029,-0.0530),(0.1987,0.7818,-0.0530)]),
                                                              #  from l_carpometacarpal_3 to l_metacarpophalangeal_3 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_3',name='l_metacarpophalangeal_3',center=(0.1987,0.7818,-0.0530),
                                                          children=[
                                                          HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_3',name='l_carpal_proximal_phalanx_3',
                                                            children=[
                                                            Transform(translation=(0.1987,0.7818,-0.0530),
                                                              children=[
                                                              Transform(
                                                                #  Empty Transform 
                                                                children=[
                                                                Shape(USE='HAnimJointShape')])]),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.1987,0.7818,-0.0530),(0.2013,0.7273,-0.0503)]),
                                                                #  from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                          HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_3',name='l_carpal_proximal_interphalangeal_3',center=(0.2013,0.7273,-0.0503),
                                                            children=[
                                                            HAnimSegment(DEF='hanim_l_carpal_middle_phalanx_3',name='l_carpal_middle_phalanx_3',
                                                              children=[
                                                              Transform(translation=(0.2013,0.7273,-0.0503),
                                                                children=[
                                                                Transform(
                                                                  #  Empty Transform 
                                                                  children=[
                                                                  Shape(USE='HAnimJointShape')])]),
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(0.2013,0.7273,-0.0503),(0.2026,0.7011,-0.0494)]),
                                                                  #  from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 
                                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                              HAnimSite(DEF='hanim_l_carpal_distal_phalanx_3_tip',name='l_carpal_distal_phalanx_3_tip',translation=(0,1,0),
                                                                children=[
                                                                TouchSensor(description='HAnimSite l_carpal_distal_phalanx_3_tip'),
                                                                Shape(USE='HAnimSiteShape')])]),
                                                            HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_3',name='l_carpal_distal_interphalangeal_3',center=(0.2026,0.7011,-0.0494))])])])]),
                                                    HAnimJoint(DEF='hanim_l_midcarpal_4_5',name='l_midcarpal_4_5',center=(0,1,0),
                                                      children=[
                                                      HAnimSegment(DEF='hanim_l_hamate',name='l_hamate',
                                                        children=[
                                                        Transform(translation=(0,1,0),
                                                          children=[
                                                          Transform(
                                                            #  Empty Transform 
                                                            children=[
                                                            Shape(USE='HAnimJointShape')])]),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[1],
                                                            coord=Coordinate(point=[(0.1956,0.8019,-0.0794)]),
                                                            #  from l_midcarpal_4_5 to l_carpometacarpal_4 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[1],
                                                            coord=Coordinate(point=[(0.1925,0.8066,-0.1036)]),
                                                            #  from l_midcarpal_4_5 to l_carpometacarpal_5 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                        HAnimSite(DEF='hanim_l_metacarpal_phalanx_5_pt',name='l_metacarpal_phalanx_5_pt',translation=(0.1929,0.7860,-0.1122),
                                                          children=[
                                                          TouchSensor(description='HAnimSite l_metacarpal_phalanx_5_pt'),
                                                          Shape(USE='HAnimSiteShape')])]),
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_4',name='l_carpometacarpal_4',center=(0.1956,0.8019,-0.0794),
                                                        children=[
                                                        HAnimSegment(DEF='hanim_l_metacarpal_4',name='l_metacarpal_4',
                                                          children=[
                                                          Transform(translation=(0.1956,0.8019,-0.0794),
                                                            children=[
                                                            Transform(
                                                              #  Empty Transform 
                                                              children=[
                                                              Shape(USE='HAnimJointShape')])]),
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(0.1956,0.8019,-0.0794),(0.1956,0.7815,-0.0794)]),
                                                              #  from l_carpometacarpal_4 to l_metacarpophalangeal_4 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_4',name='l_metacarpophalangeal_4',center=(0.1956,0.7815,-0.0794),
                                                          children=[
                                                          HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_4',name='l_carpal_proximal_phalanx_4',
                                                            children=[
                                                            Transform(translation=(0.1956,0.7815,-0.0794),
                                                              children=[
                                                              Transform(
                                                                #  Empty Transform 
                                                                children=[
                                                                Shape(USE='HAnimJointShape')])]),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.1956,0.7815,-0.0794),(0.1973,0.7287,-0.0777)]),
                                                                #  from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                          HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_4',name='l_carpal_proximal_interphalangeal_4',center=(0.1973,0.7287,-0.0777),
                                                            children=[
                                                            HAnimSegment(DEF='hanim_l_carpal_middle_phalanx_4',name='l_carpal_middle_phalanx_4',
                                                              children=[
                                                              Transform(translation=(0.1973,0.7287,-0.0777),
                                                                children=[
                                                                Transform(
                                                                  #  Empty Transform 
                                                                  children=[
                                                                  Shape(USE='HAnimJointShape')])]),
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(0.1973,0.7287,-0.0777),(0.1983,0.7045,-0.0767)]),
                                                                  #  from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 
                                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                              HAnimSite(DEF='hanim_l_carpal_distal_phalanx_4_tip',name='l_carpal_distal_phalanx_4_tip',translation=(0,1,0),
                                                                children=[
                                                                TouchSensor(description='HAnimSite l_carpal_distal_phalanx_4_tip'),
                                                                Shape(USE='HAnimSiteShape')])]),
                                                            HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_4',name='l_carpal_distal_interphalangeal_4',center=(0.1983,0.7045,-0.0767))])])]),
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_5',name='l_carpometacarpal_5',center=(0.1925,0.8066,-0.1036),
                                                        children=[
                                                        HAnimSegment(DEF='hanim_l_metacarpal_5',name='l_metacarpal_5',
                                                          children=[
                                                          Transform(translation=(0.1925,0.8066,-0.1036),
                                                            children=[
                                                            Transform(
                                                              #  Empty Transform 
                                                              children=[
                                                              Shape(USE='HAnimJointShape')])]),
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(0.1925,0.8066,-0.1036),(0.1925,0.7866,-0.1036)]),
                                                              #  from l_carpometacarpal_5 to l_metacarpophalangeal_5 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_5',name='l_metacarpophalangeal_5',center=(0.1925,0.7866,-0.1036),
                                                          children=[
                                                          HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_5',name='l_carpal_proximal_phalanx_5',
                                                            children=[
                                                            Transform(translation=(0.1925,0.7866,-0.1036),
                                                              children=[
                                                              Transform(
                                                                #  Empty Transform 
                                                                children=[
                                                                Shape(USE='HAnimJointShape')])]),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(0.1925,0.7866,-0.1036),(0.1938,0.7452,-0.1024)]),
                                                                #  from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                          HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_5',name='l_carpal_proximal_interphalangeal_5',center=(0.1938,0.7452,-0.1024),
                                                            children=[
                                                            HAnimSegment(DEF='hanim_l_carpal_middle_phalanx_5',name='l_carpal_middle_phalanx_5',
                                                              children=[
                                                              Transform(translation=(0.1938,0.7452,-0.1024),
                                                                children=[
                                                                Transform(
                                                                  #  Empty Transform 
                                                                  children=[
                                                                  Shape(USE='HAnimJointShape')])]),
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(0.1938,0.7452,-0.1024),(0.1948,0.7277,-0.1017)]),
                                                                  #  from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 
                                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                              HAnimSite(DEF='hanim_l_carpal_distal_phalanx_5_tip',name='l_carpal_distal_phalanx_5_tip',translation=(0,1,0),
                                                                children=[
                                                                TouchSensor(description='HAnimSite l_carpal_distal_phalanx_5_tip'),
                                                                Shape(USE='HAnimSiteShape')])]),
                                                            HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_5',name='l_carpal_distal_interphalangeal_5',center=(0.1948,0.7277,-0.1017))])])])])])])])])]),
                                          HAnimJoint(DEF='hanim_r_sternoclavicular',name='r_sternoclavicular',center=(-0.0694,1.4600,-0.0330),
                                            children=[
                                            HAnimSegment(DEF='hanim_r_clavicle',name='r_clavicle',
                                              children=[
                                              Transform(translation=(-0.0694,1.4600,-0.0330),
                                                children=[
                                                Transform(
                                                  #  Empty Transform 
                                                  children=[
                                                  Shape(USE='HAnimJointShape')])]),
                                              Shape(
                                                geometry=LineSet(vertexCount=[2],
                                                  coord=Coordinate(point=[(-0.0694,1.4600,-0.0330),(-0.0836,1.4281,-0.0401)]),
                                                  #  from r_sternoclavicular to r_acromioclavicular 
                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                            HAnimJoint(DEF='hanim_r_acromioclavicular',name='r_acromioclavicular',center=(-0.0836,1.4281,-0.0401),
                                              children=[
                                              HAnimSegment(DEF='hanim_r_scapula',name='r_scapula',
                                                children=[
                                                Transform(translation=(-0.0836,1.4281,-0.0401),
                                                  children=[
                                                  Transform(
                                                    #  Empty Transform 
                                                    children=[
                                                    Shape(USE='HAnimJointShape')])]),
                                                Shape(
                                                  geometry=LineSet(vertexCount=[2],
                                                    coord=Coordinate(point=[(-0.0836,1.4281,-0.0401),(-0.1907,1.4407,-0.0325)]),
                                                    #  from r_acromioclavicular to r_shoulder 
                                                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                HAnimSite(DEF='hanim_r_bideltoid_pt',name='r_bideltoid_pt',translation=(0,1,0),
                                                  children=[
                                                  TouchSensor(description='HAnimSite r_bideltoid_pt'),
                                                  Shape(USE='HAnimSiteShape')]),
                                                HAnimSite(DEF='hanim_r_humeral_lateral_epicondyles_pt',name='r_humeral_lateral_epicondyles_pt',translation=(-0.2224,1.1517,-0.1033),
                                                  children=[
                                                  TouchSensor(description='HAnimSite r_humeral_lateral_epicondyles_pt'),
                                                  Shape(USE='HAnimSiteShape')])]),
                                              HAnimJoint(DEF='hanim_r_shoulder',name='r_shoulder',center=(-0.1907,1.4407,-0.0325),
                                                children=[
                                                HAnimSegment(DEF='hanim_r_upperarm',name='r_upperarm',
                                                  children=[
                                                  Transform(translation=(-0.1907,1.4407,-0.0325),
                                                    children=[
                                                    Transform(
                                                      #  Empty Transform 
                                                      children=[
                                                      Shape(USE='HAnimJointShape')])]),
                                                  Shape(
                                                    geometry=LineSet(vertexCount=[2],
                                                      coord=Coordinate(point=[(-0.1907,1.4407,-0.0325),(-0.1949,1.1388,-0.0620)]),
                                                      #  from r_shoulder to r_elbow 
                                                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                  HAnimSite(DEF='hanim_r_humeral_medial_epicondyles_pt',name='r_humeral_medial_epicondyles_pt',translation=(-0.1680,1.1298,-0.1062),
                                                    children=[
                                                    TouchSensor(description='HAnimSite r_humeral_medial_epicondyles_pt'),
                                                    Shape(USE='HAnimSiteShape')]),
                                                  HAnimSite(DEF='hanim_r_olecranon_pt',name='r_olecranon_pt',translation=(-0.1907,1.1405,-0.1065),
                                                    children=[
                                                    TouchSensor(description='HAnimSite r_olecranon_pt'),
                                                    Shape(USE='HAnimSiteShape')]),
                                                  HAnimSite(DEF='hanim_r_radial_styloid_pt',name='r_radial_styloid_pt',translation=(-0.1884,0.8676,-0.0360),
                                                    children=[
                                                    TouchSensor(description='HAnimSite r_radial_styloid_pt'),
                                                    Shape(USE='HAnimSiteShape')]),
                                                  HAnimSite(DEF='hanim_r_radiale_pt',name='r_radiale_pt',translation=(-0.2130,1.1305,-0.1091),
                                                    children=[
                                                    TouchSensor(description='HAnimSite r_radiale_pt'),
                                                    Shape(USE='HAnimSiteShape')])]),
                                                HAnimJoint(DEF='hanim_r_elbow',name='r_elbow',center=(-0.1949,1.1388,-0.0620),
                                                  children=[
                                                  HAnimSegment(DEF='hanim_r_forearm',name='r_forearm',
                                                    children=[
                                                    Transform(translation=(-0.1949,1.1388,-0.0620),
                                                      children=[
                                                      Transform(
                                                        #  Empty Transform 
                                                        children=[
                                                        Shape(USE='HAnimJointShape')])]),
                                                    Shape(
                                                      geometry=LineSet(vertexCount=[2],
                                                        coord=Coordinate(point=[(-0.1949,1.1388,-0.0620),(-0.1959,0.8694,-0.0521)]),
                                                        #  from r_elbow to r_radiocarpal 
                                                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                    HAnimSite(DEF='hanim_r_ulnar_styloid_pt',name='r_ulnar_styloid_pt',translation=(-0.2117,0.8562,-0.0584),
                                                      children=[
                                                      TouchSensor(description='HAnimSite r_ulnar_styloid_pt'),
                                                      Shape(USE='HAnimSiteShape')])]),
                                                  HAnimJoint(DEF='hanim_r_radiocarpal',name='r_radiocarpal',center=(-0.1959,0.8694,-0.0521),
                                                    children=[
                                                    HAnimSegment(DEF='hanim_r_carpal',name='r_carpal',
                                                      children=[
                                                      Transform(scale=(0.2,0.2,0.2),translation=(-0.20,0.85,-0.05),rotation=(0,0,1,-3.14),
                                                        #  Transform right hand 
                                                        children=[
                                                        Transform(rotation=(0,1,0,1.57),
                                                          #  Transform right hand 
                                                          children=[
                                                          Shape(USE='HAnimJointShape')])]),
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(-0.1959,0.8694,-0.0521),(0,1,0)]),
                                                          #  from r_radiocarpal to r_midcarpal_1 
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(-0.1959,0.8694,-0.0521),(0,1,0)]),
                                                          #  from r_radiocarpal to r_midcarpal_2 
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(-0.1959,0.8694,-0.0521),(0,1,0)]),
                                                          #  from r_radiocarpal to r_midcarpal_3 
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          coord=Coordinate(point=[(-0.1959,0.8694,-0.0521),(0,1,0)]),
                                                          #  from r_radiocarpal to r_midcarpal_4_5 
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                    HAnimJoint(DEF='hanim_r_midcarpal_1',name='r_midcarpal_1',center=(0,1,0),
                                                      children=[
                                                      HAnimSegment(DEF='hanim_r_trapezium',name='r_trapezium',
                                                        children=[
                                                        Transform(translation=(0,1,0),
                                                          children=[
                                                          Transform(
                                                            #  Empty Transform 
                                                            children=[
                                                            Shape(USE='HAnimJointShape')])]),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[1],
                                                            coord=Coordinate(point=[(-0.1899,0.8502,-0.0473)]),
                                                            #  from r_midcarpal_1 to r_carpometacarpal_1 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_1',name='r_carpometacarpal_1',center=(-0.1899,0.8502,-0.0473),
                                                        children=[
                                                        HAnimSegment(DEF='hanim_r_metacarpal_1',name='r_metacarpal_1',
                                                          children=[
                                                          Transform(translation=(-0.1899,0.8502,-0.0473),
                                                            children=[
                                                            Transform(
                                                              #  Empty Transform 
                                                              children=[
                                                              Shape(USE='HAnimJointShape')])]),
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(-0.1899,0.8502,-0.0473),(-0.1874,0.8256,0.0306)]),
                                                              #  from r_carpometacarpal_1 to r_metacarpophalangeal_1 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_1',name='r_metacarpophalangeal_1',center=(-0.1874,0.8256,0.0306),
                                                          children=[
                                                          HAnimSegment(DEF='hanim_r_carpal_proximal_phalanx_1',name='r_carpal_proximal_phalanx_1',
                                                            children=[
                                                            Transform(translation=(-0.1874,0.8256,0.0306),
                                                              children=[
                                                              Transform(
                                                                #  Empty Transform 
                                                                children=[
                                                                Shape(USE='HAnimJointShape')])]),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(-0.1874,0.8256,0.0306),(-0.1864,0.8190,0.0506)]),
                                                                #  from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                            HAnimSite(DEF='hanim_r_carpal_distal_phalanx_1_tip',name='r_carpal_distal_phalanx_1_tip',translation=(0,1,0),
                                                              children=[
                                                              TouchSensor(description='HAnimSite r_carpal_distal_phalanx_1_tip'),
                                                              Shape(USE='HAnimSiteShape')])]),
                                                          HAnimJoint(DEF='hanim_r_carpal_interphalangeal_1',name='r_carpal_interphalangeal_1',center=(-0.1864,0.8190,0.0506))])])]),
                                                    HAnimJoint(DEF='hanim_r_midcarpal_2',name='r_midcarpal_2',center=(0,1,0),
                                                      children=[
                                                      HAnimSegment(DEF='hanim_r_trapezoid',name='r_trapezoid',
                                                        children=[
                                                        Transform(translation=(0,1,0),
                                                          children=[
                                                          Transform(
                                                            #  Empty Transform 
                                                            children=[
                                                            Shape(USE='HAnimJointShape')])]),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[1],
                                                            coord=Coordinate(point=[(-0.1961,0.8055,-0.0218)]),
                                                            #  from r_midcarpal_2 to r_carpometacarpal_2 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                        HAnimSite(DEF='hanim_r_metacarpal_phalanx_2_pt',name='r_metacarpal_phalanx_2_pt',translation=(-0.1977,0.8169,-0.0177),
                                                          children=[
                                                          TouchSensor(description='HAnimSite r_metacarpal_phalanx_2_pt'),
                                                          Shape(USE='HAnimSiteShape')])]),
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_2',name='r_carpometacarpal_2',center=(-0.1961,0.8055,-0.0218),
                                                        children=[
                                                        HAnimSegment(DEF='hanim_r_metacarpal_2',name='r_metacarpal_2',
                                                          children=[
                                                          Transform(translation=(-0.1961,0.8055,-0.0218),
                                                            children=[
                                                            Transform(
                                                              #  Empty Transform 
                                                              children=[
                                                              Shape(USE='HAnimJointShape')])]),
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(-0.1961,0.8055,-0.0218),(-0.1961,0.7846,-0.0218)]),
                                                              #  from r_carpometacarpal_2 to r_metacarpophalangeal_2 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_2',name='r_metacarpophalangeal_2',center=(-0.1961,0.7846,-0.0218),
                                                          children=[
                                                          HAnimSegment(DEF='hanim_r_carpal_proximal_phalanx_2',name='r_carpal_proximal_phalanx_2',
                                                            children=[
                                                            Transform(translation=(-0.1961,0.7846,-0.0218),
                                                              children=[
                                                              Transform(
                                                                #  Empty Transform 
                                                                children=[
                                                                Shape(USE='HAnimJointShape')])]),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(-0.1961,0.7846,-0.0218),(-0.1954,0.7393,-0.0185)]),
                                                                #  from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                          HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_2',name='r_carpal_proximal_interphalangeal_2',center=(-0.1954,0.7393,-0.0185),
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_carpal_middle_phalanx_2',name='r_carpal_middle_phalanx_2',
                                                              children=[
                                                              Transform(translation=(-0.1954,0.7393,-0.0185),
                                                                children=[
                                                                Transform(
                                                                  #  Empty Transform 
                                                                  children=[
                                                                  Shape(USE='HAnimJointShape')])]),
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(-0.1954,0.7393,-0.0185),(-0.1945,0.7169,-0.0173)]),
                                                                  #  from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 
                                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                              HAnimSite(DEF='hanim_r_carpal_distal_phalanx_2_tip',name='r_carpal_distal_phalanx_2_tip',translation=(0,1,0),
                                                                children=[
                                                                TouchSensor(description='HAnimSite r_carpal_distal_phalanx_2_tip'),
                                                                Shape(USE='HAnimSiteShape')]),
                                                              HAnimSite(DEF='hanim_r_dactylion_pt',name='r_dactylion_pt',translation=(-0.1941,0.6772,-0.0423),
                                                                children=[
                                                                TouchSensor(description='HAnimSite r_dactylion_pt'),
                                                                Shape(USE='HAnimSiteShape')])]),
                                                            HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_2',name='r_carpal_distal_interphalangeal_2',center=(-0.1945,0.7169,-0.0173))])])])]),
                                                    HAnimJoint(DEF='hanim_r_midcarpal_3',name='r_midcarpal_3',center=(0,1,0),
                                                      children=[
                                                      HAnimSegment(DEF='hanim_r_capitate',name='r_capitate',
                                                        children=[
                                                        Transform(translation=(0,1,0),
                                                          children=[
                                                          Transform(
                                                            #  Empty Transform 
                                                            children=[
                                                            Shape(USE='HAnimJointShape')])]),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[1],
                                                            coord=Coordinate(point=[(-0.1972,0.8060,-0.0468)]),
                                                            #  from r_midcarpal_3 to r_carpometacarpal_3 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                        HAnimSite(DEF='hanim_r_metacarpal_phalanx_3_pt',name='r_metacarpal_phalanx_3_pt',translation=(0,1,0),
                                                          children=[
                                                          TouchSensor(description='HAnimSite r_metacarpal_phalanx_3_pt'),
                                                          Shape(USE='HAnimSiteShape')])]),
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_3',name='r_carpometacarpal_3',center=(-0.1972,0.8060,-0.0468),
                                                        children=[
                                                        HAnimSegment(DEF='hanim_r_metacarpal_3',name='r_metacarpal_3',
                                                          children=[
                                                          Transform(translation=(-0.1972,0.8060,-0.0468),
                                                            children=[
                                                            Transform(
                                                              #  Empty Transform 
                                                              children=[
                                                              Shape(USE='HAnimJointShape')])]),
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(-0.1972,0.8060,-0.0468),(-0.1972,0.7849,-0.0468)]),
                                                              #  from r_carpometacarpal_3 to r_metacarpophalangeal_3 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_3',name='r_metacarpophalangeal_3',center=(-0.1972,0.7849,-0.0468),
                                                          children=[
                                                          HAnimSegment(DEF='hanim_r_carpal_proximal_phalanx_3',name='r_carpal_proximal_phalanx_3',
                                                            children=[
                                                            Transform(translation=(-0.1972,0.7849,-0.0468),
                                                              children=[
                                                              Transform(
                                                                #  Empty Transform 
                                                                children=[
                                                                Shape(USE='HAnimJointShape')])]),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(-0.1972,0.7849,-0.0468),(-0.1950,0.7304,-0.0441)]),
                                                                #  from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                          HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_3',name='r_carpal_proximal_interphalangeal_3',center=(-0.1950,0.7304,-0.0441),
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_carpal_middle_phalanx_3',name='r_carpal_middle_phalanx_3',
                                                              children=[
                                                              Transform(translation=(-0.1950,0.7304,-0.0441),
                                                                children=[
                                                                Transform(
                                                                  #  Empty Transform 
                                                                  children=[
                                                                  Shape(USE='HAnimJointShape')])]),
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(-0.1950,0.7304,-0.0441),(-0.1939,0.7042,-0.0432)]),
                                                                  #  from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 
                                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                              HAnimSite(DEF='hanim_r_carpal_distal_phalanx_3_tip',name='r_carpal_distal_phalanx_3_tip',translation=(0,1,0),
                                                                children=[
                                                                TouchSensor(description='HAnimSite r_carpal_distal_phalanx_3_tip'),
                                                                Shape(USE='HAnimSiteShape')])]),
                                                            HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_3',name='r_carpal_distal_interphalangeal_3',center=(-0.1939,0.7042,-0.0432))])])])]),
                                                    HAnimJoint(DEF='hanim_r_midcarpal_4_5',name='r_midcarpal_4_5',center=(0,1,0),
                                                      children=[
                                                      HAnimSegment(DEF='hanim_r_hamate',name='r_hamate',
                                                        children=[
                                                        Transform(translation=(0,1,0),
                                                          children=[
                                                          Transform(
                                                            #  Empty Transform 
                                                            children=[
                                                            Shape(USE='HAnimJointShape')])]),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[1],
                                                            coord=Coordinate(point=[(-0.1951,0.8049,-0.0732)]),
                                                            #  from r_midcarpal_4_5 to r_carpometacarpal_4 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[1],
                                                            coord=Coordinate(point=[(-0.1926,0.8096,-0.0975)]),
                                                            #  from r_midcarpal_4_5 to r_carpometacarpal_5 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                        HAnimSite(DEF='hanim_r_metacarpal_phalanx_5_pt',name='r_metacarpal_phalanx_5_pt',translation=(-0.1929,0.7890,-0.1064),
                                                          children=[
                                                          TouchSensor(description='HAnimSite r_metacarpal_phalanx_5_pt'),
                                                          Shape(USE='HAnimSiteShape')])]),
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_4',name='r_carpometacarpal_4',center=(-0.1951,0.8049,-0.0732),
                                                        children=[
                                                        HAnimSegment(DEF='hanim_r_metacarpal_4',name='r_metacarpal_4',
                                                          children=[
                                                          Transform(translation=(-0.1951,0.8049,-0.0732),
                                                            children=[
                                                            Transform(
                                                              #  Empty Transform 
                                                              children=[
                                                              Shape(USE='HAnimJointShape')])]),
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(-0.1951,0.8049,-0.0732),(-0.1951,0.7845,-0.0732)]),
                                                              #  from r_carpometacarpal_4 to r_metacarpophalangeal_4 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_4',name='r_metacarpophalangeal_4',center=(-0.1951,0.7845,-0.0732),
                                                          children=[
                                                          HAnimSegment(DEF='hanim_r_carpal_proximal_phalanx_4',name='r_carpal_proximal_phalanx_4',
                                                            children=[
                                                            Transform(translation=(-0.1951,0.7845,-0.0732),
                                                              children=[
                                                              Transform(
                                                                #  Empty Transform 
                                                                children=[
                                                                Shape(USE='HAnimJointShape')])]),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(-0.1951,0.7845,-0.0732),(-0.1920,0.7318,-0.0716)]),
                                                                #  from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                          HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_4',name='r_carpal_proximal_interphalangeal_4',center=(-0.1920,0.7318,-0.0716),
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_carpal_middle_phalanx_4',name='r_carpal_middle_phalanx_4',
                                                              children=[
                                                              Transform(translation=(-0.1920,0.7318,-0.0716),
                                                                children=[
                                                                Transform(
                                                                  #  Empty Transform 
                                                                  children=[
                                                                  Shape(USE='HAnimJointShape')])]),
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(-0.1920,0.7318,-0.0716),(-0.1908,0.7077,-0.0706)]),
                                                                  #  from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 
                                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                              HAnimSite(DEF='hanim_r_carpal_distal_phalanx_4_tip',name='r_carpal_distal_phalanx_4_tip',translation=(0,1,0),
                                                                children=[
                                                                TouchSensor(description='HAnimSite r_carpal_distal_phalanx_4_tip'),
                                                                Shape(USE='HAnimSiteShape')])]),
                                                            HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_4',name='r_carpal_distal_interphalangeal_4',center=(-0.1908,0.7077,-0.0706))])])]),
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_5',name='r_carpometacarpal_5',center=(-0.1926,0.8096,-0.0975),
                                                        children=[
                                                        HAnimSegment(DEF='hanim_r_metacarpal_5',name='r_metacarpal_5',
                                                          children=[
                                                          Transform(translation=(-0.1926,0.8096,-0.0975),
                                                            children=[
                                                            Transform(
                                                              #  Empty Transform 
                                                              children=[
                                                              Shape(USE='HAnimJointShape')])]),
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              coord=Coordinate(point=[(-0.1926,0.8096,-0.0975),(-0.1926,0.7896,-0.0975)]),
                                                              #  from r_carpometacarpal_5 to r_metacarpophalangeal_5 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_5',name='r_metacarpophalangeal_5',center=(-0.1926,0.7896,-0.0975),
                                                          children=[
                                                          HAnimSegment(DEF='hanim_r_carpal_proximal_phalanx_5',name='r_carpal_proximal_phalanx_5',
                                                            children=[
                                                            Transform(translation=(-0.1926,0.7896,-0.0975),
                                                              children=[
                                                              Transform(
                                                                #  Empty Transform 
                                                                children=[
                                                                Shape(USE='HAnimJointShape')])]),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                coord=Coordinate(point=[(-0.1926,0.7896,-0.0975),(-0.1902,0.7483,-0.0963)]),
                                                                #  from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA')))]),
                                                          HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_5',name='r_carpal_proximal_interphalangeal_5',center=(-0.1902,0.7483,-0.0963),
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_carpal_middle_phalanx_5',name='r_carpal_middle_phalanx_5',
                                                              children=[
                                                              Transform(translation=(-0.1902,0.7483,-0.0963),
                                                                children=[
                                                                Transform(
                                                                  #  Empty Transform 
                                                                  children=[
                                                                  Shape(USE='HAnimJointShape')])]),
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  coord=Coordinate(point=[(-0.1902,0.7483,-0.0963),(-0.1908,0.7540,-0.0960)]),
                                                                  #  from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 
                                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'))),
                                                              HAnimSite(DEF='hanim_r_carpal_distal_phalanx_5_tip',name='r_carpal_distal_phalanx_5_tip',translation=(0,1,0),
                                                                children=[
                                                                TouchSensor(description='HAnimSite r_carpal_distal_phalanx_5_tip'),
                                                                Shape(USE='HAnimSiteShape')])]),
                                                            HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_5',name='r_carpal_distal_interphalangeal_5',center=(-0.1908,0.7540,-0.0960))])])])])])])])])])])])])])])])])])])])])])])])])])])])],
      joints=[
      HAnimJoint(USE='hanim_humanoid_root'),
      segments=[
      HAnimSegment(USE='hanim_sacrum'),
      sites=[
      HAnimSite(USE='hanim_buttocks_standing_wall_contact_point_pt'),
      HAnimSite(USE='hanim_crotch_pt'),
      HAnimSite(USE='hanim_l_asis_pt'),
      HAnimSite(USE='hanim_l_iliocristale_pt'),
      HAnimSite(USE='hanim_l_psis_pt'),
      HAnimSite(USE='hanim_l_trochanterion_pt'),
      HAnimSite(USE='hanim_r_asis_pt'),
      HAnimSite(USE='hanim_r_iliocristale_pt'),
      HAnimSite(USE='hanim_r_psis_pt'),
      HAnimSite(USE='hanim_r_trochanterion_pt'),
      HAnimSite(USE='hanim_navel_pt'),
      HAnimSite(USE='hanim_waist_preferred_anterior_pt'),
      HAnimSite(USE='hanim_waist_preferred_posterior_pt'),
      HAnimJoint(USE='hanim_sacroiliac'),
      HAnimSegment(USE='hanim_pelvis'),
      HAnimSite(USE='hanim_l_femoral_lateral_epicondyles_pt'),
      HAnimSite(USE='hanim_l_femoral_medial_epicondyles_pt'),
      HAnimSite(USE='hanim_l_knee_crease_pt'),
      HAnimSite(USE='hanim_l_suprapatella_pt'),
      HAnimSite(USE='hanim_r_femoral_lateral_epicondyles_pt'),
      HAnimSite(USE='hanim_r_femoral_medial_epicondyles_pt'),
      HAnimSite(USE='hanim_r_knee_crease_pt'),
      HAnimSite(USE='hanim_r_suprapatella_pt'),
      HAnimJoint(USE='hanim_l_hip'),
      HAnimSegment(USE='hanim_l_thigh'),
      HAnimSite(USE='hanim_l_lateral_malleolus_pt'),
      HAnimSite(USE='hanim_l_medial_malleolus_pt'),
      HAnimSite(USE='hanim_l_tibiale_pt'),
      HAnimJoint(USE='hanim_l_knee'),
      HAnimSegment(USE='hanim_l_calf'),
      HAnimSite(USE='hanim_l_calcaneus_posterior_pt'),
      HAnimSite(USE='hanim_l_sphyrion_pt'),
      HAnimJoint(USE='hanim_l_talocrural'),
      HAnimSegment(USE='hanim_l_talus'),
      HAnimJoint(USE='hanim_l_talocalcaneonavicular'),
      HAnimSegment(USE='hanim_l_navicular'),
      HAnimJoint(USE='hanim_l_cuneonavicular_1'),
      HAnimSegment(USE='hanim_l_cuneiform_1'),
      HAnimJoint(USE='hanim_l_tarsometatarsal_1'),
      HAnimSegment(USE='hanim_l_metatarsal_1'),
      HAnimSite(USE='hanim_l_metatarsal_phalanx_1_pt'),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_1'),
      HAnimSegment(USE='hanim_l_tarsal_proximal_phalanx_1'),
      HAnimSite(USE='hanim_l_tarsal_distal_phalanx_1_tip'),
      HAnimJoint(USE='hanim_l_tarsal_interphalangeal_1'),
      HAnimJoint(USE='hanim_l_cuneonavicular_2'),
      HAnimSegment(USE='hanim_l_cuneiform_2'),
      HAnimJoint(USE='hanim_l_tarsometatarsal_2'),
      HAnimSegment(USE='hanim_l_metatarsal_2'),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_2'),
      HAnimSegment(USE='hanim_l_tarsal_proximal_phalanx_2'),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_2'),
      HAnimSegment(USE='hanim_l_tarsal_middle_phalanx_2'),
      HAnimSite(USE='hanim_l_tarsal_distal_phalanx_2_tip'),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_2'),
      HAnimJoint(USE='hanim_l_cuneonavicular_3'),
      HAnimSegment(USE='hanim_l_cuneiform_3'),
      HAnimJoint(USE='hanim_l_tarsometatarsal_3'),
      HAnimSegment(USE='hanim_l_metatarsal_3'),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_3'),
      HAnimSegment(USE='hanim_l_tarsal_proximal_phalanx_3'),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_3'),
      HAnimSegment(USE='hanim_l_tarsal_middle_phalanx_3'),
      HAnimSite(USE='hanim_l_tarsal_distal_phalanx_3_tip'),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_3'),
      HAnimJoint(USE='hanim_l_calcaneocuboid'),
      HAnimSegment(USE='hanim_l_calcaneus'),
      HAnimJoint(USE='hanim_l_transversetarsal'),
      HAnimSegment(USE='hanim_l_cuboid'),
      HAnimJoint(USE='hanim_l_tarsometatarsal_4'),
      HAnimSegment(USE='hanim_l_metatarsal_4'),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_4'),
      HAnimSegment(USE='hanim_l_tarsal_proximal_phalanx_4'),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_4'),
      HAnimSegment(USE='hanim_l_tarsal_middle_phalanx_4'),
      HAnimSite(USE='hanim_l_tarsal_distal_phalanx_4_tip'),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_4'),
      HAnimJoint(USE='hanim_l_tarsometatarsal_5'),
      HAnimSegment(USE='hanim_l_metatarsal_5'),
      HAnimSite(USE='hanim_l_metatarsal_phalanx_5_pt'),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_5'),
      HAnimSegment(USE='hanim_l_tarsal_proximal_phalanx_5'),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_5'),
      HAnimSegment(USE='hanim_l_tarsal_middle_phalanx_5'),
      HAnimSite(USE='hanim_l_tarsal_distal_phalanx_5_tip'),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_5'),
      HAnimJoint(USE='hanim_r_hip'),
      HAnimSegment(USE='hanim_r_thigh'),
      HAnimSite(USE='hanim_r_lateral_malleolus_pt'),
      HAnimSite(USE='hanim_r_medial_malleolus_pt'),
      HAnimSite(USE='hanim_r_tibiale_pt'),
      HAnimJoint(USE='hanim_r_knee'),
      HAnimSegment(USE='hanim_r_calf'),
      HAnimSite(USE='hanim_r_calcaneus_posterior_pt'),
      HAnimSite(USE='hanim_r_sphyrion_pt'),
      HAnimJoint(USE='hanim_r_talocrural'),
      HAnimSegment(USE='hanim_r_talus'),
      HAnimJoint(USE='hanim_r_talocalcaneonavicular'),
      HAnimSegment(USE='hanim_r_navicular'),
      HAnimJoint(USE='hanim_r_cuneonavicular_1'),
      HAnimSegment(USE='hanim_r_cuneiform_1'),
      HAnimJoint(USE='hanim_r_tarsometatarsal_1'),
      HAnimSegment(USE='hanim_r_metatarsal_1'),
      HAnimSite(USE='hanim_r_metatarsal_phalanx_1_pt'),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_1'),
      HAnimSegment(USE='hanim_r_tarsal_proximal_phalanx_1'),
      HAnimSite(USE='hanim_r_tarsal_distal_phalanx_1_tip'),
      HAnimJoint(USE='hanim_r_tarsal_interphalangeal_1'),
      HAnimJoint(USE='hanim_r_cuneonavicular_2'),
      HAnimSegment(USE='hanim_r_cuneiform_2'),
      HAnimJoint(USE='hanim_r_tarsometatarsal_2'),
      HAnimSegment(USE='hanim_r_metatarsal_2'),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_2'),
      HAnimSegment(USE='hanim_r_tarsal_proximal_phalanx_2'),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_2'),
      HAnimSegment(USE='hanim_r_tarsal_middle_phalanx_2'),
      HAnimSite(USE='hanim_r_tarsal_distal_phalanx_2_tip'),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_2'),
      HAnimJoint(USE='hanim_r_cuneonavicular_3'),
      HAnimSegment(USE='hanim_r_cuneiform_3'),
      HAnimJoint(USE='hanim_r_tarsometatarsal_3'),
      HAnimSegment(USE='hanim_r_metatarsal_3'),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_3'),
      HAnimSegment(USE='hanim_r_tarsal_proximal_phalanx_3'),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_3'),
      HAnimSegment(USE='hanim_r_tarsal_middle_phalanx_3'),
      HAnimSite(USE='hanim_r_tarsal_distal_phalanx_3_tip'),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_3'),
      HAnimJoint(USE='hanim_r_calcaneocuboid'),
      HAnimSegment(USE='hanim_r_calcaneus'),
      HAnimJoint(USE='hanim_r_transversetarsal'),
      HAnimSegment(USE='hanim_r_cuboid'),
      HAnimJoint(USE='hanim_r_tarsometatarsal_4'),
      HAnimSegment(USE='hanim_r_metatarsal_4'),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_4'),
      HAnimSegment(USE='hanim_r_tarsal_proximal_phalanx_4'),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_4'),
      HAnimSegment(USE='hanim_r_tarsal_middle_phalanx_4'),
      HAnimSite(USE='hanim_r_tarsal_distal_phalanx_4_tip'),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_4'),
      HAnimJoint(USE='hanim_r_tarsometatarsal_5'),
      HAnimSegment(USE='hanim_r_metatarsal_5'),
      HAnimSite(USE='hanim_r_metatarsal_phalanx_5_pt'),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_5'),
      HAnimSegment(USE='hanim_r_tarsal_proximal_phalanx_5'),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_5'),
      HAnimSegment(USE='hanim_r_tarsal_middle_phalanx_5'),
      HAnimSite(USE='hanim_r_tarsal_distal_phalanx_5_tip'),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_5'),
      HAnimJoint(USE='hanim_vl5'),
      HAnimSegment(USE='hanim_l5'),
      HAnimJoint(USE='hanim_vl4'),
      HAnimSegment(USE='hanim_l4'),
      HAnimJoint(USE='hanim_vl3'),
      HAnimSegment(USE='hanim_l3'),
      HAnimSite(USE='hanim_l_rib10_pt'),
      HAnimSite(USE='hanim_r_rib10_pt'),
      HAnimSite(USE='hanim_spine_2_middle_back_pt'),
      HAnimJoint(USE='hanim_vl2'),
      HAnimSegment(USE='hanim_l2'),
      HAnimJoint(USE='hanim_vl1'),
      HAnimSegment(USE='hanim_l1'),
      HAnimJoint(USE='hanim_vt12'),
      HAnimSegment(USE='hanim_t12'),
      HAnimJoint(USE='hanim_vt11'),
      HAnimSegment(USE='hanim_t11'),
      HAnimSite(USE='hanim_substernale_pt'),
      HAnimJoint(USE='hanim_vt10'),
      HAnimSegment(USE='hanim_t10'),
      HAnimSite(USE='hanim_l_thelion_pt'),
      HAnimSite(USE='hanim_r_thelion_pt'),
      HAnimJoint(USE='hanim_vt9'),
      HAnimSegment(USE='hanim_t9'),
      HAnimJoint(USE='hanim_vt8'),
      HAnimSegment(USE='hanim_t8'),
      HAnimJoint(USE='hanim_vt7'),
      HAnimSegment(USE='hanim_t7'),
      HAnimSite(USE='hanim_l_chest_midsagittal_plane_pt'),
      HAnimSite(USE='hanim_mesosternale_pt'),
      HAnimSite(USE='hanim_r_chest_midsagittal_plane_pt'),
      HAnimSite(USE='hanim_rear_center_midsagittal_plane_pt'),
      HAnimJoint(USE='hanim_vt6'),
      HAnimSegment(USE='hanim_t6'),
      HAnimSite(USE='hanim_spine_1_middle_back_pt'),
      HAnimJoint(USE='hanim_vt5'),
      HAnimSegment(USE='hanim_t5'),
      HAnimJoint(USE='hanim_vt4'),
      HAnimSegment(USE='hanim_t4'),
      HAnimJoint(USE='hanim_vt3'),
      HAnimSegment(USE='hanim_t3'),
      HAnimJoint(USE='hanim_vt2'),
      HAnimSegment(USE='hanim_t2'),
      HAnimSite(USE='hanim_cervicale_pt'),
      HAnimSite(USE='hanim_suprasternale_pt'),
      HAnimJoint(USE='hanim_vt1'),
      HAnimSegment(USE='hanim_t1'),
      HAnimSite(USE='hanim_l_neck_base_pt'),
      HAnimSite(USE='hanim_r_neck_base_pt'),
      HAnimSite(USE='hanim_l_acromion_pt'),
      HAnimSite(USE='hanim_l_axilla_distal_pt'),
      HAnimSite(USE='hanim_l_axilla_posterior_folds_pt'),
      HAnimSite(USE='hanim_l_axilla_proximal_pt'),
      HAnimSite(USE='hanim_l_clavicale_pt'),
      HAnimSite(USE='hanim_r_acromion_pt'),
      HAnimSite(USE='hanim_r_axilla_distal_pt'),
      HAnimSite(USE='hanim_r_axilla_posterior_folds_pt'),
      HAnimSite(USE='hanim_r_axilla_proximal_pt'),
      HAnimSite(USE='hanim_r_clavicale_pt'),
      HAnimJoint(USE='hanim_vc7'),
      HAnimSegment(USE='hanim_c7'),
      HAnimJoint(USE='hanim_vc6'),
      HAnimSegment(USE='hanim_c6'),
      HAnimJoint(USE='hanim_vc5'),
      HAnimSegment(USE='hanim_c5'),
      HAnimJoint(USE='hanim_vc4'),
      HAnimSegment(USE='hanim_c4'),
      HAnimJoint(USE='hanim_vc3'),
      HAnimSegment(USE='hanim_c3'),
      HAnimSite(USE='hanim_adams_apple_pt'),
      HAnimJoint(USE='hanim_vc2'),
      HAnimSegment(USE='hanim_c2'),
      HAnimJoint(USE='hanim_vc1'),
      HAnimSegment(USE='hanim_c1'),
      HAnimSite(USE='hanim_glabella_pt'),
      HAnimSite(USE='hanim_l_ectocanthus_pt'),
      HAnimSite(USE='hanim_l_infraorbitale_pt'),
      HAnimSite(USE='hanim_l_tragion_pt'),
      HAnimSite(USE='hanim_nuchale_pt'),
      HAnimSite(USE='hanim_opisthocranion_pt'),
      HAnimSite(USE='hanim_r_ectocanthus_pt'),
      HAnimSite(USE='hanim_r_infraorbitale_pt'),
      HAnimSite(USE='hanim_r_tragion_pt'),
      HAnimSite(USE='hanim_sellion_pt'),
      HAnimSite(USE='hanim_skull_vertex_pt'),
      HAnimJoint(USE='hanim_skullbase'),
      HAnimSegment(USE='hanim_skull'),
      HAnimSite(USE='hanim_l_gonion_pt'),
      HAnimSite(USE='hanim_menton_pt'),
      HAnimSite(USE='hanim_r_gonion_pt'),
      HAnimSite(USE='hanim_supramenton_pt'),
      HAnimJoint(USE='hanim_l_eyelid_joint'),
      HAnimJoint(USE='hanim_r_eyelid_joint'),
      HAnimJoint(USE='hanim_l_eyeball_joint'),
      HAnimJoint(USE='hanim_r_eyeball_joint'),
      HAnimJoint(USE='hanim_l_eyebrow_joint'),
      HAnimJoint(USE='hanim_r_eyebrow_joint'),
      HAnimJoint(USE='hanim_temporomandibular'),
      HAnimJoint(USE='hanim_l_sternoclavicular'),
      HAnimSegment(USE='hanim_l_clavicle'),
      HAnimJoint(USE='hanim_l_acromioclavicular'),
      HAnimSegment(USE='hanim_l_scapula'),
      HAnimSite(USE='hanim_l_bideltoid_pt'),
      HAnimSite(USE='hanim_l_humeral_lateral_epicondyles_pt'),
      HAnimJoint(USE='hanim_l_shoulder'),
      HAnimSegment(USE='hanim_l_upperarm'),
      HAnimSite(USE='hanim_l_humeral_medial_epicondyles_pt'),
      HAnimSite(USE='hanim_l_olecranon_pt'),
      HAnimSite(USE='hanim_l_radial_styloid_pt'),
      HAnimSite(USE='hanim_l_radiale_pt'),
      HAnimJoint(USE='hanim_l_elbow'),
      HAnimSegment(USE='hanim_l_forearm'),
      HAnimSite(USE='hanim_l_ulnar_styloid_pt'),
      HAnimJoint(USE='hanim_l_radiocarpal'),
      HAnimSegment(USE='hanim_l_carpal'),
      HAnimJoint(USE='hanim_l_midcarpal_1'),
      HAnimSegment(USE='hanim_l_trapezium'),
      HAnimJoint(USE='hanim_l_carpometacarpal_1'),
      HAnimSegment(USE='hanim_l_metacarpal_1'),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_1'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_1'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_1_tip'),
      HAnimJoint(USE='hanim_l_carpal_interphalangeal_1'),
      HAnimJoint(USE='hanim_l_midcarpal_2'),
      HAnimSegment(USE='hanim_l_trapezoid'),
      HAnimSite(USE='hanim_l_metacarpal_phalanx_2_pt'),
      HAnimJoint(USE='hanim_l_carpometacarpal_2'),
      HAnimSegment(USE='hanim_l_metacarpal_2'),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_2'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_2'),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_2'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_2'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_2_tip'),
      HAnimSite(USE='hanim_l_dactylion_pt'),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_2'),
      HAnimJoint(USE='hanim_l_midcarpal_3'),
      HAnimSegment(USE='hanim_l_capitate'),
      HAnimSite(USE='hanim_l_metacarpal_phalanx_3_pt'),
      HAnimJoint(USE='hanim_l_carpometacarpal_3'),
      HAnimSegment(USE='hanim_l_metacarpal_3'),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_3'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_3'),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_3'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_3'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_3_tip'),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_3'),
      HAnimJoint(USE='hanim_l_midcarpal_4_5'),
      HAnimSegment(USE='hanim_l_hamate'),
      HAnimSite(USE='hanim_l_metacarpal_phalanx_5_pt'),
      HAnimJoint(USE='hanim_l_carpometacarpal_4'),
      HAnimSegment(USE='hanim_l_metacarpal_4'),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_4'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_4'),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_4'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_4'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_4_tip'),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_4'),
      HAnimJoint(USE='hanim_l_carpometacarpal_5'),
      HAnimSegment(USE='hanim_l_metacarpal_5'),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_5'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_5'),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_5'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_5'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_5_tip'),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_5'),
      HAnimJoint(USE='hanim_r_sternoclavicular'),
      HAnimSegment(USE='hanim_r_clavicle'),
      HAnimJoint(USE='hanim_r_acromioclavicular'),
      HAnimSegment(USE='hanim_r_scapula'),
      HAnimSite(USE='hanim_r_bideltoid_pt'),
      HAnimSite(USE='hanim_r_humeral_lateral_epicondyles_pt'),
      HAnimJoint(USE='hanim_r_shoulder'),
      HAnimSegment(USE='hanim_r_upperarm'),
      HAnimSite(USE='hanim_r_humeral_medial_epicondyles_pt'),
      HAnimSite(USE='hanim_r_olecranon_pt'),
      HAnimSite(USE='hanim_r_radial_styloid_pt'),
      HAnimSite(USE='hanim_r_radiale_pt'),
      HAnimJoint(USE='hanim_r_elbow'),
      HAnimSegment(USE='hanim_r_forearm'),
      HAnimSite(USE='hanim_r_ulnar_styloid_pt'),
      HAnimJoint(USE='hanim_r_radiocarpal'),
      HAnimSegment(USE='hanim_r_carpal'),
      HAnimJoint(USE='hanim_r_midcarpal_1'),
      HAnimSegment(USE='hanim_r_trapezium'),
      HAnimJoint(USE='hanim_r_carpometacarpal_1'),
      HAnimSegment(USE='hanim_r_metacarpal_1'),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_1'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_1'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_1_tip'),
      HAnimJoint(USE='hanim_r_carpal_interphalangeal_1'),
      HAnimJoint(USE='hanim_r_midcarpal_2'),
      HAnimSegment(USE='hanim_r_trapezoid'),
      HAnimSite(USE='hanim_r_metacarpal_phalanx_2_pt'),
      HAnimJoint(USE='hanim_r_carpometacarpal_2'),
      HAnimSegment(USE='hanim_r_metacarpal_2'),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_2'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_2'),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_2'),
      HAnimSegment(USE='hanim_r_carpal_middle_phalanx_2'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_2_tip'),
      HAnimSite(USE='hanim_r_dactylion_pt'),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_2'),
      HAnimJoint(USE='hanim_r_midcarpal_3'),
      HAnimSegment(USE='hanim_r_capitate'),
      HAnimSite(USE='hanim_r_metacarpal_phalanx_3_pt'),
      HAnimJoint(USE='hanim_r_carpometacarpal_3'),
      HAnimSegment(USE='hanim_r_metacarpal_3'),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_3'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_3'),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_3'),
      HAnimSegment(USE='hanim_r_carpal_middle_phalanx_3'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_3_tip'),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_3'),
      HAnimJoint(USE='hanim_r_midcarpal_4_5'),
      HAnimSegment(USE='hanim_r_hamate'),
      HAnimSite(USE='hanim_r_metacarpal_phalanx_5_pt'),
      HAnimJoint(USE='hanim_r_carpometacarpal_4'),
      HAnimSegment(USE='hanim_r_metacarpal_4'),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_4'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_4'),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_4'),
      HAnimSegment(USE='hanim_r_carpal_middle_phalanx_4'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_4_tip'),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_4'),
      HAnimJoint(USE='hanim_r_carpometacarpal_5'),
      HAnimSegment(USE='hanim_r_metacarpal_5'),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_5'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_5'),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_5'),
      HAnimSegment(USE='hanim_r_carpal_middle_phalanx_5')],
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_5_tip')],
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_5')])])
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