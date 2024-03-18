####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python Humanoid4_1.py
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
    component(name='HAnim',level=1),
    meta(content='Humanoid4_1.x3d',name='title'),
    meta(content='http://www.web3d.org/x3d/content/examples/HumanoidAnimation/Humanoid4_1.x3d',name='identifier'),
    meta(content='An attempt at a standard LOA-4 skeleton',name='description'),
    meta(content='h2.pl',name='generator'),
    meta(content='14 Jan 2023',name='modified'),
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
          color=Color(color=[(1,0,0),(0,0.6,0),(0,0,1)]),
          coord=Coordinate(point=[(0,0,0),(0.1,0,0),(0,0.1,0),(0,0,0.1)])))]),
    Group(
      #  DEFS for markers of skeleton joints, segments, and sites 
      children=[
      Transform(
        children=[
        Transform(translation=(0,2,0),
          children=[
          Shape(DEF='HAnimRootShape',
            appearance=Appearance(
              material=Material(DEF='HAnimRootMaterial',diffuseColor=(0.8,0,0),transparency=0.3)),
            geometry=Sphere(radius=0.02))]),
        Transform(translation=(0,2.1,0),
          children=[
          Shape(DEF='HAnimJointShape',
            appearance=Appearance(
              material=Material(DEF='HAnimJointMaterial',diffuseColor=(0,0,0.8),transparency=0.3)),
            geometry=Sphere(radius=0.02))]),
        Transform(translation=(0,2.05,0),
          children=[
          Shape(DEF='HAnimSegmentLine',
            geometry=LineSet(vertexCount=[2],
              color=ColorRGBA(DEF='HAnimSegmentLineColorRGBA',color=[(1,1,0,1),(1,1,0,0.1)]),
              coord=Coordinate(point=[(-0.05,0,0),(0.05,0,0)])))]),
        Transform(translation=(0,2.1,0),
          children=[
          Shape(DEF='HAnimSiteShape',
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,0),transparency=0.3)),
            geometry=IndexedFaceSet(DEF='DiamondIFS',coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1],creaseAngle=0.5,solid=False,
              color=ColorRGBA(DEF='HAnimSiteColorRGBA',color=[(1,1,0,1),(1,1,0,0.1),(1,1,0,1),(1,1,0,0.1),(1,1,0,1),(1,1,0,0.1)]),
              coord=Coordinate(point=[(0,0.01,0),(-0.01,0,0),(0,0,0.01),(0.01,0,0),(0,0,-0.01),(0,-0.01,0)])))])])]),
    NavigationInfo(speed=1.5),
    Viewpoint(description='default'),
    HAnimHumanoid(DEF='hanim_HAnim',name='HAnim',info=["humanoidVersion=2.0"],version='2.0',
      skeleton=[
      HAnimJoint(DEF='hanim_humanoid_root',name='humanoid_root',center=(0,0.824,0.0277),llimit=[0,0,0],ulimit=[0,0,0],
        children=[
        HAnimSegment(DEF='hanim_sacrum',name='sacrum',
          children=[
          Transform(translation=(0,0.824,0.0277),
            children=[
            Transform(
              #  Empty Transform 
              children=[
              Shape(USE='HAnimJointShape')])]),
          Shape(
            geometry=LineSet(vertexCount=[2],
              #  from humanoid_root to sacroiliac vertices 2 
              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
              coord=Coordinate(point=[(0,0.824,0.0277),(0,0.9149,0.0016)]))),
          HAnimSite(DEF='hanim_buttocks_standing_wall_contact_point_pt',
            children=[
            TouchSensor(description='HAnimSite buttocks_standing_wall_contact_point_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_crotch_pt',translation=(0.0034,0.8266,0.0257),
            children=[
            TouchSensor(description='HAnimSite crotch_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_l_asis_pt',translation=(0.0925,0.9983,0.1052),
            children=[
            TouchSensor(description='HAnimSite l_asis_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_l_iliocristale_pt',translation=(0.1612,1.0537,8.0E-4),
            children=[
            TouchSensor(description='HAnimSite l_iliocristale_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_l_psis_pt',translation=(0.0774,1.019,-0.1151),
            children=[
            TouchSensor(description='HAnimSite l_psis_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_l_trochanterion_pt',translation=(0.1677,0.8336,0.0303),
            children=[
            TouchSensor(description='HAnimSite l_trochanterion_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_r_asis_pt',translation=(-0.0887,1.0021,0.1112),
            children=[
            TouchSensor(description='HAnimSite r_asis_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_r_iliocristale_pt',translation=(-0.1525,1.0628,0.0035),
            children=[
            TouchSensor(description='HAnimSite r_iliocristale_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_r_psis_pt',translation=(-0.0716,1.019,-0.1138),
            children=[
            TouchSensor(description='HAnimSite r_psis_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_r_trochanterion_pt',translation=(-0.1689,0.8419,0.0352),
            children=[
            TouchSensor(description='HAnimSite r_trochanterion_pt'),
            Shape(USE='HAnimSiteShape')]),
          Shape(
            geometry=LineSet(vertexCount=[2],
              #  from humanoid_root to vl5 vertices 2 
              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
              coord=Coordinate(point=[(0,0.824,0.0277),(0.0028,1.0568,-0.0776)]))),
          HAnimSite(DEF='hanim_navel_pt',translation=(0.0069,1.0966,0.1017),
            children=[
            TouchSensor(description='HAnimSite navel_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_waist_preferred_anterior_pt',
            children=[
            TouchSensor(description='HAnimSite waist_preferred_anterior_pt'),
            Shape(USE='HAnimSiteShape')]),
          HAnimSite(DEF='hanim_waist_preferred_posterior_pt',translation=(0.29,1.0915,-0.1091),
            children=[
            TouchSensor(description='HAnimSite waist_preferred_posterior_pt'),
            Shape(USE='HAnimSiteShape')])]),
        HAnimJoint(DEF='hanim_sacroiliac',name='sacroiliac',center=(0,0.9149,0.0016),llimit=[0,0,0],ulimit=[0,0,0],
          children=[
          HAnimSegment(DEF='hanim_pelvis',name='pelvis',
            children=[
            Transform(translation=(0,0.9149,0.0016),
              children=[
              Transform(
                #  Empty Transform 
                children=[
                Shape(USE='HAnimJointShape')])]),
            Shape(
              geometry=LineSet(vertexCount=[2],
                #  from sacroiliac to l_hip vertices 2 
                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                coord=Coordinate(point=[(0,0.9149,0.0016),(0.0961,0.9124,-1.0E-4)]))),
            HAnimSite(DEF='hanim_l_femoral_lateral_epicondyles_pt',name='l_femoral_lateral_epicondyles_pt',translation=(0.1598,0.4967,0.0297),
              children=[
              TouchSensor(description='HAnimSite l_femoral_lateral_epicondyles_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_l_femoral_medial_epicondyles_pt',name='l_femoral_medial_epicondyles_pt',translation=(0.0398,0.4946,0.0303),
              children=[
              TouchSensor(description='HAnimSite l_femoral_medial_epicondyles_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_l_knee_crease_pt',translation=(0.0993,0.4881,-0.0309),
              children=[
              TouchSensor(description='HAnimSite l_knee_crease_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_l_suprapatella_pt',
              children=[
              TouchSensor(description='HAnimSite l_suprapatella_pt'),
              Shape(USE='HAnimSiteShape')]),
            Shape(
              geometry=LineSet(vertexCount=[2],
                #  from sacroiliac to r_hip vertices 2 
                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                coord=Coordinate(point=[(0,0.9149,0.0016),(-0.095,0.9171,0.0029)]))),
            HAnimSite(DEF='hanim_r_femoral_lateral_epicondyles_pt',name='r_femoral_lateral_epicondyles_pt',translation=(-0.1421,0.4992,0.031),
              children=[
              TouchSensor(description='HAnimSite r_femoral_lateral_epicondyles_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_r_femoral_medial_epicondyles_pt',name='r_femoral_medial_epicondyles_pt',translation=(-0.0221,0.5014,0.0289),
              children=[
              TouchSensor(description='HAnimSite r_femoral_medial_epicondyles_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_r_knee_crease_pt',translation=(-0.0825,0.4932,-0.0326),
              children=[
              TouchSensor(description='HAnimSite r_knee_crease_pt'),
              Shape(USE='HAnimSiteShape')]),
            HAnimSite(DEF='hanim_r_suprapatella_pt',
              children=[
              TouchSensor(description='HAnimSite r_suprapatella_pt'),
              Shape(USE='HAnimSiteShape')])]),
          HAnimJoint(DEF='hanim_l_hip',name='l_hip',center=(0.0961,0.9124,-1.0E-4),llimit=[0,0,0],ulimit=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_l_thigh',name='l_thigh',
              children=[
              Transform(translation=(0.0961,0.9124,-1.0E-4),
                children=[
                Transform(
                  #  Empty Transform 
                  children=[
                  Shape(USE='HAnimJointShape')])]),
              Shape(
                geometry=LineSet(vertexCount=[2],
                  #  from l_hip to l_knee vertices 2 
                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                  coord=Coordinate(point=[(0.0961,0.9124,-1.0E-4),(0.104,0.4867,0.0308)]))),
              HAnimSite(DEF='hanim_l_lateral_malleolus_pt',translation=(0.1308,0.0597,-0.1032),
                children=[
                TouchSensor(description='HAnimSite l_lateral_malleolus_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='hanim_l_medial_malleolus_pt',translation=(0.089,0.0716,-0.0881),
                children=[
                TouchSensor(description='HAnimSite l_medial_malleolus_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='hanim_l_tibiale_pt',
                children=[
                TouchSensor(description='HAnimSite l_tibiale_pt'),
                Shape(USE='HAnimSiteShape')])]),
            HAnimJoint(DEF='hanim_l_knee',name='l_knee',center=(0.104,0.4867,0.0308),llimit=[0,0,0],ulimit=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_l_calf',name='l_calf',
                children=[
                Transform(translation=(0.104,0.4867,0.0308),
                  children=[
                  Transform(
                    #  Empty Transform 
                    children=[
                    Shape(USE='HAnimJointShape')])]),
                Shape(
                  geometry=LineSet(vertexCount=[2],
                    #  from l_knee to l_talocrural vertices 2 
                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                    coord=Coordinate(point=[(0.104,0.4867,0.0308),(0.1101,0.0656,-0.0736)]))),
                HAnimSite(DEF='hanim_l_calcaneus_posterior_pt',translation=(0.0974,0.0259,-0.1171),
                  children=[
                  TouchSensor(description='HAnimSite l_calcaneus_posterior_pt'),
                  Shape(USE='HAnimSiteShape')]),
                HAnimSite(DEF='hanim_l_sphyrion_pt',translation=(0.089,0.0575,-0.0943),
                  children=[
                  TouchSensor(description='HAnimSite l_sphyrion_pt'),
                  Shape(USE='HAnimSiteShape')])]),
              HAnimJoint(DEF='hanim_l_talocrural',name='l_talocrural',center=(0.1101,0.0656,-0.0736),llimit=[0,0,0],ulimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_l_talus',name='l_talus',
                  children=[
                  Transform(rotation=(1,0,0,-1.57),scale=(0.15,0.15,0.15),translation=(0.08,0.06,-0.025),
                    #  Transform left foot 
                    children=[
                    Transform(
                      #  Empty Transform left foot 
                      children=[
                      Shape(USE='HAnimJointShape')])]),
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      #  from l_talocrural to l_talocalcaneonavicular vertices 2 
                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                      coord=Coordinate(point=[(0.1101,0.0656,-0.0736),(3.4715,0.0374,0.6807)]))),
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      #  from l_talocrural to l_calcaneocuboid vertices 2 
                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                      coord=Coordinate(point=[(0.1101,0.0656,-0.0736),(3.9515,0.0653,-0.6895)])))]),
                HAnimJoint(DEF='hanim_l_talocalcaneonavicular',name='l_talocalcaneonavicular',center=(3.4715,0.0374,0.6807),llimit=[0,0,0],ulimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_l_navicular',name='l_navicular',
                    children=[
                    Transform(translation=(3.4715,0.0374,0.6807),
                      children=[
                      Transform(
                        #  Empty Transform 
                        children=[
                        Shape(USE='HAnimJointShape')])]),
                    Shape(
                      geometry=LineSet(vertexCount=[2],
                        #  from l_talocalcaneonavicular to l_cuneonavicular_1 vertices 2 
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                        coord=Coordinate(point=[(3.4715,0.0374,0.6807),(2.9855,0.0311,1.2819)]))),
                    Shape(
                      geometry=LineSet(vertexCount=[2],
                        #  from l_talocalcaneonavicular to l_cuneonavicular_2 vertices 2 
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                        coord=Coordinate(point=[(3.4715,0.0374,0.6807),(3.6105,0.033,1.4168)]))),
                    Shape(
                      geometry=LineSet(vertexCount=[2],
                        #  from l_talocalcaneonavicular to l_cuneonavicular_3 vertices 2 
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                        coord=Coordinate(point=[(3.4715,0.0374,0.6807),(4.1235,0.0328,1.3453)])))]),
                  HAnimJoint(DEF='hanim_l_cuneonavicular_1',name='l_cuneonavicular_1',center=(2.9855,0.0311,1.2819),llimit=[0,0,0],ulimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_l_cuneiform_1',name='l_cuneiform_1',
                      children=[
                      Transform(translation=(2.9855,0.0311,1.2819),
                        children=[
                        Transform(
                          #  Empty Transform 
                          children=[
                          Shape(USE='HAnimJointShape')])]),
                      Shape(
                        geometry=LineSet(vertexCount=[2],
                          #  from l_cuneonavicular_1 to l_tarsometatarsal_1 vertices 2 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                          coord=Coordinate(point=[(2.9855,0.0311,1.2819),(2.8635,0.0194,2.4285)])))]),
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_1',name='l_tarsometatarsal_1',center=(2.8635,0.0194,2.4285),llimit=[0,0,0],ulimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_l_metatarsal_1',name='l_metatarsal_1',
                        children=[
                        Transform(translation=(2.8635,0.0194,2.4285),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            #  from l_tarsometatarsal_1 to l_metatarsophalangeal_1 vertices 2 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                            coord=Coordinate(point=[(2.8635,0.0194,2.4285),(2.7525,0.0077,4.6255)]))),
                        HAnimSite(DEF='hanim_l_metatarsal_phalanx_1_pt',
                          children=[
                          TouchSensor(description='HAnimSite l_metatarsal_phalanx_1_pt'),
                          Shape(USE='HAnimSiteShape')])]),
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_1',name='l_metatarsophalangeal_1',center=(2.7525,0.0077,4.6255),llimit=[0,0,0],ulimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='hanim_l_tarsal_proximal_phalanx_1',name='l_tarsal_proximal_phalanx_1',
                          children=[
                          Transform(translation=(2.7525,0.0077,4.6255),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[2],
                              #  from l_metatarsophalangeal_1 to l_tarsal_interphalangeal_1 vertices 2 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                              coord=Coordinate(point=[(2.7525,0.0077,4.6255),(2.7525,0.0077,4.6255)]))),
                          HAnimSite(DEF='hanim_l_tarsal_distal_phalanx_1_tip',
                            children=[
                            TouchSensor(description='HAnimSite l_tarsal_distal_phalanx_1_tip'),
                            Shape(USE='HAnimSiteShape')])]),
                        HAnimJoint(DEF='hanim_l_tarsal_interphalangeal_1',name='l_tarsal_interphalangeal_1',llimit=[0,0,0],ulimit=[0,0,0])])])]),
                  HAnimJoint(DEF='hanim_l_cuneonavicular_2',name='l_cuneonavicular_2',center=(3.6105,0.033,1.4168),llimit=[0,0,0],ulimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_l_cuneiform_2',name='l_cuneiform_2',
                      children=[
                      Transform(translation=(3.6105,0.033,1.4168),
                        children=[
                        Transform(
                          #  Empty Transform 
                          children=[
                          Shape(USE='HAnimJointShape')])]),
                      Shape(
                        geometry=LineSet(vertexCount=[2],
                          #  from l_cuneonavicular_2 to l_tarsometatarsal_2 vertices 2 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                          coord=Coordinate(point=[(3.6105,0.033,1.4168),(3.5555,0.0232,2.2895)])))]),
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_2',name='l_tarsometatarsal_2',center=(3.5555,0.0232,2.2895),llimit=[0,0,0],ulimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_l_metatarsal_2',name='l_metatarsal_2',
                        children=[
                        Transform(translation=(3.5555,0.0232,2.2895),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            #  from l_tarsometatarsal_2 to l_metatarsophalangeal_2 vertices 2 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                            coord=Coordinate(point=[(3.5555,0.0232,2.2895),(3.6595,0.0085,4.8125)])))]),
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_2',name='l_metatarsophalangeal_2',center=(3.6595,0.0085,4.8125),llimit=[0,0,0],ulimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='hanim_l_tarsal_proximal_phalanx_2',name='l_tarsal_proximal_phalanx_2',
                          children=[
                          Transform(translation=(3.6595,0.0085,4.8125),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[2],
                              #  from l_metatarsophalangeal_2 to l_tarsal_proximal_interphalangeal_2 vertices 2 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                              coord=Coordinate(point=[(3.6595,0.0085,4.8125),(3.7385,0.0054,5.5315)])))]),
                        HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_2',name='l_tarsal_proximal_interphalangeal_2',center=(3.7385,0.0054,5.5315),llimit=[0,0,0],ulimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='hanim_l_tarsal_middle_phalanx_2',name='l_tarsal_middle_phalanx_2',
                            children=[
                            Transform(translation=(3.7385,0.0054,5.5315),
                              children=[
                              Transform(
                                #  Empty Transform 
                                children=[
                                Shape(USE='HAnimJointShape')])]),
                            Shape(
                              geometry=LineSet(vertexCount=[2],
                                #  from l_tarsal_proximal_interphalangeal_2 to l_tarsal_distal_interphalangeal_2 vertices 2 
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                coord=Coordinate(point=[(3.7385,0.0054,5.5315),(3.7385,0.0017,5.9505)]))),
                            HAnimSite(DEF='hanim_l_tarsal_distal_phalanx_2_tip',translation=(0.1195,0.0079,0.1433),
                              children=[
                              TouchSensor(description='HAnimSite l_tarsal_distal_phalanx_2_tip'),
                              Shape(USE='HAnimSiteShape')])]),
                          HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_2',name='l_tarsal_distal_interphalangeal_2',center=(3.7385,0.0017,5.9505),llimit=[0,0,0],ulimit=[0,0,0])])])])]),
                  HAnimJoint(DEF='hanim_l_cuneonavicular_3',name='l_cuneonavicular_3',center=(4.1235,0.0328,1.3453),llimit=[0,0,0],ulimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_l_cuneiform_3',name='l_cuneiform_3',
                      children=[
                      Transform(translation=(4.1235,0.0328,1.3453),
                        children=[
                        Transform(
                          #  Empty Transform 
                          children=[
                          Shape(USE='HAnimJointShape')])]),
                      Shape(
                        geometry=LineSet(vertexCount=[2],
                          #  from l_cuneonavicular_3 to l_tarsometatarsal_3 vertices 2 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                          coord=Coordinate(point=[(4.1235,0.0328,1.3453),(3.7385,0.0017,5.9505)])))]),
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_3',name='l_tarsometatarsal_3',llimit=[0,0,0],ulimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_l_metatarsal_3',name='l_metatarsal_3',
                        children=[
                        Transform(translation=(4.1235,0.0328,1.3453),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            #  from l_tarsometatarsal_3 to l_metatarsophalangeal_3 vertices 1 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                            coord=Coordinate(point=[(4.2795,0.0086,4.7055)])))]),
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_3',name='l_metatarsophalangeal_3',center=(4.2795,0.0086,4.7055),llimit=[0,0,0],ulimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='hanim_l_tarsal_proximal_phalanx_3',name='l_tarsal_proximal_phalanx_3',
                          children=[
                          Transform(translation=(4.2795,0.0086,4.7055),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[2],
                              #  from l_metatarsophalangeal_3 to l_tarsal_proximal_interphalangeal_3 vertices 2 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                              coord=Coordinate(point=[(4.2795,0.0086,4.7055),(4.3855,0.0044,5.3745)])))]),
                        HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_3',name='l_tarsal_proximal_interphalangeal_3',center=(4.3855,0.0044,5.3745),llimit=[0,0,0],ulimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='hanim_l_tarsal_middle_phalanx_3',name='l_tarsal_middle_phalanx_3',
                            children=[
                            Transform(translation=(4.3855,0.0044,5.3745),
                              children=[
                              Transform(
                                #  Empty Transform 
                                children=[
                                Shape(USE='HAnimJointShape')])]),
                            Shape(
                              geometry=LineSet(vertexCount=[2],
                                #  from l_tarsal_proximal_interphalangeal_3 to l_tarsal_distal_interphalangeal_3 vertices 2 
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                coord=Coordinate(point=[(4.3855,0.0044,5.3745),(4.4545,0.0017,5.7845)]))),
                            HAnimSite(DEF='hanim_l_tarsal_distal_phalanx_3_tip',
                              children=[
                              TouchSensor(description='HAnimSite l_tarsal_distal_phalanx_3_tip'),
                              Shape(USE='HAnimSiteShape')])]),
                          HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_3',name='l_tarsal_distal_interphalangeal_3',center=(4.4545,0.0017,5.7845),llimit=[0,0,0],ulimit=[0,0,0])])])])])]),
                HAnimJoint(DEF='hanim_l_calcaneocuboid',name='l_calcaneocuboid',center=(3.9515,0.0653,-0.6895),llimit=[0,0,0],ulimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_l_calcaneus',name='l_calcaneus',
                    children=[
                    Transform(translation=(3.9515,0.0653,-0.6895),
                      children=[
                      Transform(
                        #  Empty Transform 
                        children=[
                        Shape(USE='HAnimJointShape')])]),
                    Shape(
                      geometry=LineSet(vertexCount=[2],
                        #  from l_calcaneocuboid to l_transversetarsal vertices 2 
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                        coord=Coordinate(point=[(3.9515,0.0653,-0.6895),(4.9085,0.0353,0.5574)])))]),
                  HAnimJoint(DEF='hanim_l_transversetarsal',name='l_transversetarsal',center=(4.9085,0.0353,0.5574),llimit=[0,0,0],ulimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_l_cuboid',name='l_cuboid',
                      children=[
                      Transform(translation=(4.9085,0.0353,0.5574),
                        children=[
                        Transform(
                          #  Empty Transform 
                          children=[
                          Shape(USE='HAnimJointShape')])]),
                      Shape(
                        geometry=LineSet(vertexCount=[2],
                          #  from l_transversetarsal to l_tarsometatarsal_4 vertices 2 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                          coord=Coordinate(point=[(4.9085,0.0353,0.5574),(4.7245,0.0211,2.1725)]))),
                      Shape(
                        geometry=LineSet(vertexCount=[2],
                          #  from l_transversetarsal to l_tarsometatarsal_5 vertices 2 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                          coord=Coordinate(point=[(4.9085,0.0353,0.5574),(5.3615,0.0164,2.0085)])))]),
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_4',name='l_tarsometatarsal_4',center=(4.7245,0.0211,2.1725),llimit=[0,0,0],ulimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_l_metatarsal_4',name='l_metatarsal_4',
                        children=[
                        Transform(translation=(4.7245,0.0211,2.1725),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            #  from l_tarsometatarsal_4 to l_metatarsophalangeal_4 vertices 2 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                            coord=Coordinate(point=[(4.7245,0.0211,2.1725),(4.8745,0.0076,4.5165)])))]),
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_4',name='l_metatarsophalangeal_4',center=(4.8745,0.0076,4.5165),llimit=[0,0,0],ulimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='hanim_l_tarsal_proximal_phalanx_4',name='l_tarsal_proximal_phalanx_4',
                          children=[
                          Transform(translation=(4.8745,0.0076,4.5165),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[2],
                              #  from l_metatarsophalangeal_4 to l_tarsal_proximal_interphalangeal_4 vertices 2 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                              coord=Coordinate(point=[(4.8745,0.0076,4.5165),(5.0655,0.0049,5.1895)])))]),
                        HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_4',name='l_tarsal_proximal_interphalangeal_4',center=(5.0655,0.0049,5.1895),llimit=[0,0,0],ulimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='hanim_l_tarsal_middle_phalanx_4',name='l_tarsal_middle_phalanx_4',
                            children=[
                            Transform(translation=(5.0655,0.0049,5.1895),
                              children=[
                              Transform(
                                #  Empty Transform 
                                children=[
                                Shape(USE='HAnimJointShape')])]),
                            Shape(
                              geometry=LineSet(vertexCount=[2],
                                #  from l_tarsal_proximal_interphalangeal_4 to l_tarsal_distal_interphalangeal_4 vertices 2 
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                coord=Coordinate(point=[(5.0655,0.0049,5.1895),(5.1325,0.0011,5.5175)]))),
                            HAnimSite(DEF='hanim_l_tarsal_distal_phalanx_4_tip',
                              children=[
                              TouchSensor(description='HAnimSite l_tarsal_distal_phalanx_4_tip'),
                              Shape(USE='HAnimSiteShape')])]),
                          HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_4',name='l_tarsal_distal_interphalangeal_4',center=(5.1325,0.0011,5.5175),llimit=[0,0,0],ulimit=[0,0,0])])])]),
                    HAnimJoint(DEF='hanim_l_tarsometatarsal_5',name='l_tarsometatarsal_5',center=(5.3615,0.0164,2.0085),llimit=[0,0,0],ulimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_l_metatarsal_5',name='l_metatarsal_5',
                        children=[
                        Transform(translation=(5.3615,0.0164,2.0085),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            #  from l_tarsometatarsal_5 to l_metatarsophalangeal_5 vertices 2 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                            coord=Coordinate(point=[(5.3615,0.0164,2.0085),(5.5055,0.0067,4.3115)]))),
                        HAnimSite(DEF='hanim_l_metatarsal_phalanx_5_pt',
                          children=[
                          TouchSensor(description='HAnimSite l_metatarsal_phalanx_5_pt'),
                          Shape(USE='HAnimSiteShape')])]),
                      HAnimJoint(DEF='hanim_l_metatarsophalangeal_5',name='l_metatarsophalangeal_5',center=(5.5055,0.0067,4.3115),llimit=[0,0,0],ulimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='hanim_l_tarsal_proximal_phalanx_5',name='l_tarsal_proximal_phalanx_5',
                          children=[
                          Transform(translation=(5.5055,0.0067,4.3115),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[2],
                              #  from l_metatarsophalangeal_5 to l_tarsal_proximal_interphalangeal_5 vertices 2 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                              coord=Coordinate(point=[(5.5055,0.0067,4.3115),(5.6085,0.003,4.6485)])))]),
                        HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_5',name='l_tarsal_proximal_interphalangeal_5',center=(5.6085,0.003,4.6485),llimit=[0,0,0],ulimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='hanim_l_tarsal_middle_phalanx_5',name='l_tarsal_middle_phalanx_5',
                            children=[
                            Transform(translation=(5.6085,0.003,4.6485),
                              children=[
                              Transform(
                                #  Empty Transform 
                                children=[
                                Shape(USE='HAnimJointShape')])]),
                            Shape(
                              geometry=LineSet(vertexCount=[2],
                                #  from l_tarsal_proximal_interphalangeal_5 to l_tarsal_distal_interphalangeal_5 vertices 2 
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                coord=Coordinate(point=[(5.6085,0.003,4.6485),(5.6485,0,4.9925)]))),
                            HAnimSite(DEF='hanim_l_tarsal_distal_phalanx_5_tip',
                              children=[
                              TouchSensor(description='HAnimSite l_tarsal_distal_phalanx_5_tip'),
                              Shape(USE='HAnimSiteShape')])]),
                          HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_5',name='l_tarsal_distal_interphalangeal_5',center=(5.6485,0,4.9925),llimit=[0,0,0],ulimit=[0,0,0])])])])])])])])]),
          HAnimJoint(DEF='hanim_r_hip',name='r_hip',center=(-0.095,0.9171,0.0029),llimit=[0,0,0],ulimit=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_r_thigh',name='r_thigh',
              children=[
              Transform(translation=(-0.095,0.9171,0.0029),
                children=[
                Transform(
                  #  Empty Transform 
                  children=[
                  Shape(USE='HAnimJointShape')])]),
              Shape(
                geometry=LineSet(vertexCount=[2],
                  #  from r_hip to r_knee vertices 2 
                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                  coord=Coordinate(point=[(-0.095,0.9171,0.0029),(-0.0867,0.4913,0.0318)]))),
              HAnimSite(DEF='hanim_r_lateral_malleolus_pt',translation=(-0.1006,0.0658,-0.1075),
                children=[
                TouchSensor(description='HAnimSite r_lateral_malleolus_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='hanim_r_medial_malleolus_pt',translation=(-0.0591,0.076,-0.0928),
                children=[
                TouchSensor(description='HAnimSite r_medial_malleolus_pt'),
                Shape(USE='HAnimSiteShape')]),
              HAnimSite(DEF='hanim_r_tibiale_pt',
                children=[
                TouchSensor(description='HAnimSite r_tibiale_pt'),
                Shape(USE='HAnimSiteShape')])]),
            HAnimJoint(DEF='hanim_r_knee',name='r_knee',center=(-0.0867,0.4913,0.0318),llimit=[0,0,0],ulimit=[0,0,0],
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
                    #  from r_knee to r_talocrural vertices 2 
                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                    coord=Coordinate(point=[(-0.0867,0.4913,0.0318),(-0.0801,0.0712,-0.0766)]))),
                HAnimSite(DEF='hanim_r_calcaneus_posterior_pt',translation=(-0.0692,0.0297,-0.1221),
                  children=[
                  TouchSensor(description='HAnimSite r_calcaneus_posterior_pt'),
                  Shape(USE='HAnimSiteShape')]),
                HAnimSite(DEF='hanim_r_sphyrion_pt',translation=(-0.0603,0.061,-0.1002),
                  children=[
                  TouchSensor(description='HAnimSite r_sphyrion_pt'),
                  Shape(USE='HAnimSiteShape')])]),
              HAnimJoint(DEF='hanim_r_talocrural',name='r_talocrural',center=(-0.0801,0.0712,-0.0766),llimit=[0,0,0],ulimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_r_talus',name='r_talus',
                  children=[
                  Transform(rotation=(1,0,0,-1.57),scale=(0.15,0.15,0.15),translation=(-0.05,0.06,-0.025),
                    #  Transform right foot 
                    children=[
                    Transform(
                      #  Empty Transform right foot 
                      children=[
                      Shape(USE='HAnimJointShape')])]),
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      #  from r_talocrural to r_talocalcaneonavicular vertices 2 
                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                      coord=Coordinate(point=[(-0.0801,0.0712,-0.0766),(-3.4725,0.0374,0.6807)]))),
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      #  from r_talocrural to r_calcaneocuboid vertices 2 
                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                      coord=Coordinate(point=[(-0.0801,0.0712,-0.0766),(-3.9515,0.0653,-0.6895)])))]),
                HAnimJoint(DEF='hanim_r_talocalcaneonavicular',name='r_talocalcaneonavicular',center=(-3.4725,0.0374,0.6807),llimit=[0,0,0],ulimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_r_navicular',name='r_navicular',
                    children=[
                    Transform(translation=(-3.4725,0.0374,0.6807),
                      children=[
                      Transform(
                        #  Empty Transform 
                        children=[
                        Shape(USE='HAnimJointShape')])]),
                    Shape(
                      geometry=LineSet(vertexCount=[2],
                        #  from r_talocalcaneonavicular to r_cuneonavicular_1 vertices 2 
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                        coord=Coordinate(point=[(-3.4725,0.0374,0.6807),(-2.9855,0.0311,1.2819)]))),
                    Shape(
                      geometry=LineSet(vertexCount=[2],
                        #  from r_talocalcaneonavicular to r_cuneonavicular_2 vertices 2 
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                        coord=Coordinate(point=[(-3.4725,0.0374,0.6807),(-3.6105,0.033,1.4168)]))),
                    Shape(
                      geometry=LineSet(vertexCount=[2],
                        #  from r_talocalcaneonavicular to r_cuneonavicular_3 vertices 2 
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                        coord=Coordinate(point=[(-3.4725,0.0374,0.6807),(-4.1245,0.0328,1.3453)])))]),
                  HAnimJoint(DEF='hanim_r_cuneonavicular_1',name='r_cuneonavicular_1',center=(-2.9855,0.0311,1.2819),llimit=[0,0,0],ulimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_r_cuneiform_1',name='r_cuneiform_1',
                      children=[
                      Transform(translation=(-2.9855,0.0311,1.2819),
                        children=[
                        Transform(
                          #  Empty Transform 
                          children=[
                          Shape(USE='HAnimJointShape')])]),
                      Shape(
                        geometry=LineSet(vertexCount=[2],
                          #  from r_cuneonavicular_1 to r_tarsometatarsal_1 vertices 2 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                          coord=Coordinate(point=[(-2.9855,0.0311,1.2819),(-2.8645,0.0194,2.4285)])))]),
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_1',name='r_tarsometatarsal_1',center=(-2.8645,0.0194,2.4285),llimit=[0,0,0],ulimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_r_metatarsal_1',name='r_metatarsal_1',
                        children=[
                        Transform(translation=(-2.8645,0.0194,2.4285),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            #  from r_tarsometatarsal_1 to r_metatarsophalangeal_1 vertices 2 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                            coord=Coordinate(point=[(-2.8645,0.0194,2.4285),(-2.7535,0.0077,4.6255)]))),
                        HAnimSite(DEF='hanim_r_metatarsal_phalanx_1_pt',
                          children=[
                          TouchSensor(description='HAnimSite r_metatarsal_phalanx_1_pt'),
                          Shape(USE='HAnimSiteShape')])]),
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_1',name='r_metatarsophalangeal_1',center=(-2.7535,0.0077,4.6255),llimit=[0,0,0],ulimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='hanim_r_tarsal_proximal_phalanx_1',name='r_tarsal_proximal_phalanx_1',
                          children=[
                          Transform(translation=(-2.7535,0.0077,4.6255),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[2],
                              #  from r_metatarsophalangeal_1 to r_tarsal_interphalangeal_1 vertices 2 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                              coord=Coordinate(point=[(-2.7535,0.0077,4.6255),(-2.7535,0.0077,4.6255)]))),
                          HAnimSite(DEF='hanim_r_tarsal_distal_phalanx_1_tip',
                            children=[
                            TouchSensor(description='HAnimSite r_tarsal_distal_phalanx_1_tip'),
                            Shape(USE='HAnimSiteShape')])]),
                        HAnimJoint(DEF='hanim_r_tarsal_interphalangeal_1',name='r_tarsal_interphalangeal_1',llimit=[0,0,0],ulimit=[0,0,0])])])]),
                  HAnimJoint(DEF='hanim_r_cuneonavicular_2',name='r_cuneonavicular_2',center=(-3.6105,0.033,1.4168),llimit=[0,0,0],ulimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_r_cuneiform_2',name='r_cuneiform_2',
                      children=[
                      Transform(translation=(-3.6105,0.033,1.4168),
                        children=[
                        Transform(
                          #  Empty Transform 
                          children=[
                          Shape(USE='HAnimJointShape')])]),
                      Shape(
                        geometry=LineSet(vertexCount=[2],
                          #  from r_cuneonavicular_2 to r_tarsometatarsal_2 vertices 2 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                          coord=Coordinate(point=[(-3.6105,0.033,1.4168),(-3.5565,0.0232,2.2895)])))]),
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_2',name='r_tarsometatarsal_2',center=(-3.5565,0.0232,2.2895),llimit=[0,0,0],ulimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_r_metatarsal_2',name='r_metatarsal_2',
                        children=[
                        Transform(translation=(-3.5565,0.0232,2.2895),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            #  from r_tarsometatarsal_2 to r_metatarsophalangeal_2 vertices 2 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                            coord=Coordinate(point=[(-3.5565,0.0232,2.2895),(-3.6595,0.0085,4.8125)])))]),
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_2',name='r_metatarsophalangeal_2',center=(-3.6595,0.0085,4.8125),llimit=[0,0,0],ulimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='hanim_r_tarsal_proximal_phalanx_2',name='r_tarsal_proximal_phalanx_2',
                          children=[
                          Transform(translation=(-3.6595,0.0085,4.8125),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[2],
                              #  from r_metatarsophalangeal_2 to r_tarsal_proximal_interphalangeal_2 vertices 2 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                              coord=Coordinate(point=[(-3.6595,0.0085,4.8125),(-3.7385,0.0054,5.5315)])))]),
                        HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_2',name='r_tarsal_proximal_interphalangeal_2',center=(-3.7385,0.0054,5.5315),llimit=[0,0,0],ulimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='hanim_r_tarsal_middle_phalanx_2',name='r_tarsal_middle_phalanx_2',
                            children=[
                            Transform(translation=(-3.7385,0.0054,5.5315),
                              children=[
                              Transform(
                                #  Empty Transform 
                                children=[
                                Shape(USE='HAnimJointShape')])]),
                            Shape(
                              geometry=LineSet(vertexCount=[2],
                                #  from r_tarsal_proximal_interphalangeal_2 to r_tarsal_distal_interphalangeal_2 vertices 2 
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                coord=Coordinate(point=[(-3.7385,0.0054,5.5315),(-3.7385,0.0017,5.9505)]))),
                            HAnimSite(DEF='hanim_r_tarsal_distal_phalanx_2_tip',translation=(-0.0883,0.0134,0.1383),
                              children=[
                              TouchSensor(description='HAnimSite r_tarsal_distal_phalanx_2_tip'),
                              Shape(USE='HAnimSiteShape')])]),
                          HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_2',name='r_tarsal_distal_interphalangeal_2',center=(-3.7385,0.0017,5.9505),llimit=[0,0,0],ulimit=[0,0,0])])])])]),
                  HAnimJoint(DEF='hanim_r_cuneonavicular_3',name='r_cuneonavicular_3',center=(-4.1245,0.0328,1.3453),llimit=[0,0,0],ulimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_r_cuneiform_3',name='r_cuneiform_3',
                      children=[
                      Transform(translation=(-4.1245,0.0328,1.3453),
                        children=[
                        Transform(
                          #  Empty Transform 
                          children=[
                          Shape(USE='HAnimJointShape')])]),
                      Shape(
                        geometry=LineSet(vertexCount=[2],
                          #  from r_cuneonavicular_3 to r_tarsometatarsal_3 vertices 2 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                          coord=Coordinate(point=[(-4.1245,0.0328,1.3453),(-3.7385,0.0017,5.9505)])))]),
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_3',name='r_tarsometatarsal_3',llimit=[0,0,0],ulimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_r_metatarsal_3',name='r_metatarsal_3',
                        children=[
                        Transform(translation=(-4.1245,0.0328,1.3453),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            #  from r_tarsometatarsal_3 to r_metatarsophalangeal_3 vertices 1 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                            coord=Coordinate(point=[(-4.2795,0.0086,4.7055)])))]),
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_3',name='r_metatarsophalangeal_3',center=(-4.2795,0.0086,4.7055),llimit=[0,0,0],ulimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='hanim_r_tarsal_proximal_phalanx_3',name='r_tarsal_proximal_phalanx_3',
                          children=[
                          Transform(translation=(-4.2795,0.0086,4.7055),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[2],
                              #  from r_metatarsophalangeal_3 to r_tarsal_proximal_interphalangeal_3 vertices 2 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                              coord=Coordinate(point=[(-4.2795,0.0086,4.7055),(-4.3865,0.0044,5.3745)])))]),
                        HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_3',name='r_tarsal_proximal_interphalangeal_3',center=(-4.3865,0.0044,5.3745),llimit=[0,0,0],ulimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='hanim_r_tarsal_middle_phalanx_3',name='r_tarsal_middle_phalanx_3',
                            children=[
                            Transform(translation=(-4.3865,0.0044,5.3745),
                              children=[
                              Transform(
                                #  Empty Transform 
                                children=[
                                Shape(USE='HAnimJointShape')])]),
                            Shape(
                              geometry=LineSet(vertexCount=[2],
                                #  from r_tarsal_proximal_interphalangeal_3 to r_tarsal_distal_interphalangeal_3 vertices 2 
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                coord=Coordinate(point=[(-4.3865,0.0044,5.3745),(-4.4545,0.0017,5.7845)]))),
                            HAnimSite(DEF='hanim_r_tarsal_distal_phalanx_3_tip',
                              children=[
                              TouchSensor(description='HAnimSite r_tarsal_distal_phalanx_3_tip'),
                              Shape(USE='HAnimSiteShape')])]),
                          HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_3',name='r_tarsal_distal_interphalangeal_3',center=(-4.4545,0.0017,5.7845),llimit=[0,0,0],ulimit=[0,0,0])])])])])]),
                HAnimJoint(DEF='hanim_r_calcaneocuboid',name='r_calcaneocuboid',center=(-3.9515,0.0653,-0.6895),llimit=[0,0,0],ulimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_r_calcaneus',name='r_calcaneus',
                    children=[
                    Transform(translation=(-3.9515,0.0653,-0.6895),
                      children=[
                      Transform(
                        #  Empty Transform 
                        children=[
                        Shape(USE='HAnimJointShape')])]),
                    Shape(
                      geometry=LineSet(vertexCount=[2],
                        #  from r_calcaneocuboid to r_transversetarsal vertices 2 
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                        coord=Coordinate(point=[(-3.9515,0.0653,-0.6895),(-4.9095,0.0353,0.5574)])))]),
                  HAnimJoint(DEF='hanim_r_transversetarsal',name='r_transversetarsal',center=(-4.9095,0.0353,0.5574),llimit=[0,0,0],ulimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_r_cuboid',name='r_cuboid',
                      children=[
                      Transform(translation=(-4.9095,0.0353,0.5574),
                        children=[
                        Transform(
                          #  Empty Transform 
                          children=[
                          Shape(USE='HAnimJointShape')])]),
                      Shape(
                        geometry=LineSet(vertexCount=[2],
                          #  from r_transversetarsal to r_tarsometatarsal_4 vertices 2 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                          coord=Coordinate(point=[(-4.9095,0.0353,0.5574),(-4.7255,0.0211,2.1725)]))),
                      Shape(
                        geometry=LineSet(vertexCount=[2],
                          #  from r_transversetarsal to r_tarsometatarsal_5 vertices 2 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                          coord=Coordinate(point=[(-4.9095,0.0353,0.5574),(-5.3615,0.0164,2.0085)])))]),
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_4',name='r_tarsometatarsal_4',center=(-4.7255,0.0211,2.1725),llimit=[0,0,0],ulimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_r_metatarsal_4',name='r_metatarsal_4',
                        children=[
                        Transform(translation=(-4.7255,0.0211,2.1725),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            #  from r_tarsometatarsal_4 to r_metatarsophalangeal_4 vertices 2 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                            coord=Coordinate(point=[(-4.7255,0.0211,2.1725),(-4.8755,0.0076,4.5165)])))]),
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_4',name='r_metatarsophalangeal_4',center=(-4.8755,0.0076,4.5165),llimit=[0,0,0],ulimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='hanim_r_tarsal_proximal_phalanx_4',name='r_tarsal_proximal_phalanx_4',
                          children=[
                          Transform(translation=(-4.8755,0.0076,4.5165),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[2],
                              #  from r_metatarsophalangeal_4 to r_tarsal_proximal_interphalangeal_4 vertices 2 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                              coord=Coordinate(point=[(-4.8755,0.0076,4.5165),(-5.0655,0.0049,5.1895)])))]),
                        HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_4',name='r_tarsal_proximal_interphalangeal_4',center=(-5.0655,0.0049,5.1895),llimit=[0,0,0],ulimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='hanim_r_tarsal_middle_phalanx_4',name='r_tarsal_middle_phalanx_4',
                            children=[
                            Transform(translation=(-5.0655,0.0049,5.1895),
                              children=[
                              Transform(
                                #  Empty Transform 
                                children=[
                                Shape(USE='HAnimJointShape')])]),
                            Shape(
                              geometry=LineSet(vertexCount=[2],
                                #  from r_tarsal_proximal_interphalangeal_4 to r_tarsal_distal_interphalangeal_4 vertices 2 
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                coord=Coordinate(point=[(-5.0655,0.0049,5.1895),(-5.1335,0.0011,5.5175)]))),
                            HAnimSite(DEF='hanim_r_tarsal_distal_phalanx_4_tip',
                              children=[
                              TouchSensor(description='HAnimSite r_tarsal_distal_phalanx_4_tip'),
                              Shape(USE='HAnimSiteShape')])]),
                          HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_4',name='r_tarsal_distal_interphalangeal_4',center=(-5.1335,0.0011,5.5175),llimit=[0,0,0],ulimit=[0,0,0])])])]),
                    HAnimJoint(DEF='hanim_r_tarsometatarsal_5',name='r_tarsometatarsal_5',center=(-5.3615,0.0164,2.0085),llimit=[0,0,0],ulimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_r_metatarsal_5',name='r_metatarsal_5',
                        children=[
                        Transform(translation=(-5.3615,0.0164,2.0085),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            #  from r_tarsometatarsal_5 to r_metatarsophalangeal_5 vertices 2 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                            coord=Coordinate(point=[(-5.3615,0.0164,2.0085),(-5.5055,0.0067,4.3115)]))),
                        HAnimSite(DEF='hanim_r_metatarsal_phalanx_5_pt',
                          children=[
                          TouchSensor(description='HAnimSite r_metatarsal_phalanx_5_pt'),
                          Shape(USE='HAnimSiteShape')])]),
                      HAnimJoint(DEF='hanim_r_metatarsophalangeal_5',name='r_metatarsophalangeal_5',center=(-5.5055,0.0067,4.3115),llimit=[0,0,0],ulimit=[0,0,0],
                        children=[
                        HAnimSegment(DEF='hanim_r_tarsal_proximal_phalanx_5',name='r_tarsal_proximal_phalanx_5',
                          children=[
                          Transform(translation=(-5.5055,0.0067,4.3115),
                            children=[
                            Transform(
                              #  Empty Transform 
                              children=[
                              Shape(USE='HAnimJointShape')])]),
                          Shape(
                            geometry=LineSet(vertexCount=[2],
                              #  from r_metatarsophalangeal_5 to r_tarsal_proximal_interphalangeal_5 vertices 2 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                              coord=Coordinate(point=[(-5.5055,0.0067,4.3115),(-5.6085,0.003,4.6485)])))]),
                        HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_5',name='r_tarsal_proximal_interphalangeal_5',center=(-5.6085,0.003,4.6485),llimit=[0,0,0],ulimit=[0,0,0],
                          children=[
                          HAnimSegment(DEF='hanim_r_tarsal_middle_phalanx_5',name='r_tarsal_middle_phalanx_5',
                            children=[
                            Transform(translation=(-5.6085,0.003,4.6485),
                              children=[
                              Transform(
                                #  Empty Transform 
                                children=[
                                Shape(USE='HAnimJointShape')])]),
                            Shape(
                              geometry=LineSet(vertexCount=[2],
                                #  from r_tarsal_proximal_interphalangeal_5 to r_tarsal_distal_interphalangeal_5 vertices 2 
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                coord=Coordinate(point=[(-5.6085,0.003,4.6485),(-5.6495,0,4.9925)]))),
                            HAnimSite(DEF='hanim_r_tarsal_distal_phalanx_5_tip',
                              children=[
                              TouchSensor(description='HAnimSite r_tarsal_distal_phalanx_5_tip'),
                              Shape(USE='HAnimSiteShape')])]),
                          HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_5',name='r_tarsal_distal_interphalangeal_5',center=(-5.6495,0,4.9925),llimit=[0,0,0],ulimit=[0,0,0])])])])])])])])])]),
        HAnimJoint(DEF='hanim_vl5',name='vl5',center=(0.0028,1.0568,-0.0776),llimit=[0,0,0],ulimit=[0,0,0],
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
                #  from vl5 to vl4 vertices 2 
                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                coord=Coordinate(point=[(0.0028,1.0568,-0.0776),(0.0035,1.0925,-0.0787)])))]),
          HAnimJoint(DEF='hanim_vl4',name='vl4',center=(0.0035,1.0925,-0.0787),llimit=[0,0,0],ulimit=[0,0,0],
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
                  #  from vl4 to vl3 vertices 2 
                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                  coord=Coordinate(point=[(0.0035,1.0925,-0.0787),(0.0041,1.1276,-0.0796)])))]),
            HAnimJoint(DEF='hanim_vl3',name='vl3',center=(0.0041,1.1276,-0.0796),llimit=[0,0,0],ulimit=[0,0,0],
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
                    #  from vl3 to vl2 vertices 2 
                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                    coord=Coordinate(point=[(0.0041,1.1276,-0.0796),(0.0045,1.1546,-0.08)]))),
                HAnimSite(DEF='hanim_l_rib10_pt',translation=(0.0871,1.1925,0.0992),
                  children=[
                  TouchSensor(description='HAnimSite l_rib10_pt'),
                  Shape(USE='HAnimSiteShape')]),
                HAnimSite(DEF='hanim_r_rib10_pt',translation=(-0.0711,1.1941,0.1016),
                  children=[
                  TouchSensor(description='HAnimSite r_rib10_pt'),
                  Shape(USE='HAnimSiteShape')]),
                HAnimSite(DEF='hanim_spine_2_middle_back_pt',name='spine_2_middle_back_pt',
                  children=[
                  TouchSensor(description='HAnimSite spine_2_middle_back_pt'),
                  Shape(USE='HAnimSiteShape')])]),
              HAnimJoint(DEF='hanim_vl2',name='vl2',center=(0.0045,1.1546,-0.08),llimit=[0,0,0],ulimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_l2',name='l2',
                  children=[
                  Transform(translation=(0.0045,1.1546,-0.08),
                    children=[
                    Transform(
                      #  Empty Transform 
                      children=[
                      Shape(USE='HAnimJointShape')])]),
                  Shape(
                    geometry=LineSet(vertexCount=[2],
                      #  from vl2 to vl1 vertices 2 
                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                      coord=Coordinate(point=[(0.0045,1.1546,-0.08),(0.0048,1.1912,-0.0805)])))]),
                HAnimJoint(DEF='hanim_vl1',name='vl1',center=(0.0048,1.1912,-0.0805),llimit=[0,0,0],ulimit=[0,0,0],
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
                        #  from vl1 to vt12 vertices 2 
                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                        coord=Coordinate(point=[(0.0048,1.1912,-0.0805),(0.0051,1.2278,-0.0808)])))]),
                  HAnimJoint(DEF='hanim_vt12',name='vt12',center=(0.0051,1.2278,-0.0808),llimit=[0,0,0],ulimit=[0,0,0],
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
                          #  from vt12 to vt11 vertices 2 
                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                          coord=Coordinate(point=[(0.0051,1.2278,-0.0808),(0.0053,1.2679,-0.081)])))]),
                    HAnimJoint(DEF='hanim_vt11',name='vt11',center=(0.0053,1.2679,-0.081),llimit=[0,0,0],ulimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_t11',name='t11',
                        children=[
                        Transform(translation=(0.0053,1.2679,-0.081),
                          children=[
                          Transform(
                            #  Empty Transform 
                            children=[
                            Shape(USE='HAnimJointShape')])]),
                        Shape(
                          geometry=LineSet(vertexCount=[2],
                            #  from vt11 to vt10 vertices 2 
                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                            coord=Coordinate(point=[(0.0053,1.2679,-0.081),(0.0056,1.2848,-0.0822)]))),
                        HAnimSite(DEF='hanim_substernale_pt',translation=(0.0085,1.2995,0.1147),
                          children=[
                          TouchSensor(description='HAnimSite substernale_pt'),
                          Shape(USE='HAnimSiteShape')])]),
                      HAnimJoint(DEF='hanim_vt10',name='vt10',center=(0.0056,1.2848,-0.0822),llimit=[0,0,0],ulimit=[0,0,0],
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
                              #  from vt10 to vt9 vertices 2 
                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                              coord=Coordinate(point=[(0.0056,1.2848,-0.0822),(0.0057,1.3126,-0.0838)]))),
                          HAnimSite(DEF='hanim_l_thelion_pt',translation=(0.0918,1.3382,0.1192),
                            children=[
                            TouchSensor(description='HAnimSite l_thelion_pt'),
                            Shape(USE='HAnimSiteShape')]),
                          HAnimSite(DEF='hanim_r_thelion_pt',translation=(-0.0736,1.3385,0.1217),
                            children=[
                            TouchSensor(description='HAnimSite r_thelion_pt'),
                            Shape(USE='HAnimSiteShape')])]),
                        HAnimJoint(DEF='hanim_vt9',name='vt9',center=(0.0057,1.3126,-0.0838),llimit=[0,0,0],ulimit=[0,0,0],
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
                                #  from vt9 to vt8 vertices 2 
                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                coord=Coordinate(point=[(0.0057,1.3126,-0.0838),(0.0057,1.3382,-0.0845)])))]),
                          HAnimJoint(DEF='hanim_vt8',name='vt8',center=(0.0057,1.3382,-0.0845),llimit=[0,0,0],ulimit=[0,0,0],
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
                                  #  from vt8 to vt7 vertices 2 
                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                  coord=Coordinate(point=[(0.0057,1.3382,-0.0845),(0.0058,1.3625,-0.0833)])))]),
                            HAnimJoint(DEF='hanim_vt7',name='vt7',center=(0.0058,1.3625,-0.0833),llimit=[0,0,0],ulimit=[0,0,0],
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
                                    #  from vt7 to vt6 vertices 2 
                                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                    coord=Coordinate(point=[(0.0058,1.3625,-0.0833),(0.0059,1.3866,-0.08)]))),
                                HAnimSite(DEF='hanim_l_chest_midsagittal_plane_pt',
                                  children=[
                                  TouchSensor(description='HAnimSite l_chest_midsagittal_plane_pt'),
                                  Shape(USE='HAnimSiteShape')]),
                                HAnimSite(DEF='hanim_mesosternale_pt',
                                  children=[
                                  TouchSensor(description='HAnimSite mesosternale_pt'),
                                  Shape(USE='HAnimSiteShape')]),
                                HAnimSite(DEF='hanim_r_chest_midsagittal_plane_pt',
                                  children=[
                                  TouchSensor(description='HAnimSite r_chest_midsagittal_plane_pt'),
                                  Shape(USE='HAnimSiteShape')]),
                                HAnimSite(DEF='hanim_rear_center_midsagittal_plane_pt',
                                  children=[
                                  TouchSensor(description='HAnimSite rear_center_midsagittal_plane_pt'),
                                  Shape(USE='HAnimSiteShape')])]),
                              HAnimJoint(DEF='hanim_vt6',name='vt6',center=(0.0059,1.3866,-0.08),llimit=[0,0,0],ulimit=[0,0,0],
                                children=[
                                HAnimSegment(DEF='hanim_t6',name='t6',
                                  children=[
                                  Transform(translation=(0.0059,1.3866,-0.08),
                                    children=[
                                    Transform(
                                      #  Empty Transform 
                                      children=[
                                      Shape(USE='HAnimJointShape')])]),
                                  Shape(
                                    geometry=LineSet(vertexCount=[2],
                                      #  from vt6 to vt5 vertices 2 
                                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                      coord=Coordinate(point=[(0.0059,1.3866,-0.08),(0.006,1.4102,-0.0745)]))),
                                  HAnimSite(DEF='hanim_spine_1_middle_back_pt',
                                    children=[
                                    TouchSensor(description='HAnimSite spine_1_middle_back_pt'),
                                    Shape(USE='HAnimSiteShape')])]),
                                HAnimJoint(DEF='hanim_vt5',name='vt5',center=(0.006,1.4102,-0.0745),llimit=[0,0,0],ulimit=[0,0,0],
                                  children=[
                                  HAnimSegment(DEF='hanim_t5',name='t5',
                                    children=[
                                    Transform(translation=(0.006,1.4102,-0.0745),
                                      children=[
                                      Transform(
                                        #  Empty Transform 
                                        children=[
                                        Shape(USE='HAnimJointShape')])]),
                                    Shape(
                                      geometry=LineSet(vertexCount=[2],
                                        #  from vt5 to vt4 vertices 2 
                                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                        coord=Coordinate(point=[(0.006,1.4102,-0.0745),(0.0061,1.432,-0.0675)])))]),
                                  HAnimJoint(DEF='hanim_vt4',name='vt4',center=(0.0061,1.432,-0.0675),llimit=[0,0,0],ulimit=[0,0,0],
                                    children=[
                                    HAnimSegment(DEF='hanim_t4',name='t4',
                                      children=[
                                      Transform(translation=(0.0061,1.432,-0.0675),
                                        children=[
                                        Transform(
                                          #  Empty Transform 
                                          children=[
                                          Shape(USE='HAnimJointShape')])]),
                                      Shape(
                                        geometry=LineSet(vertexCount=[2],
                                          #  from vt4 to vt3 vertices 2 
                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                          coord=Coordinate(point=[(0.0061,1.432,-0.0675),(0.0062,1.4583,-0.057)])))]),
                                    HAnimJoint(DEF='hanim_vt3',name='vt3',center=(0.0062,1.4583,-0.057),llimit=[0,0,0],ulimit=[0,0,0],
                                      children=[
                                      HAnimSegment(DEF='hanim_t3',name='t3',
                                        children=[
                                        Transform(translation=(0.0062,1.4583,-0.057),
                                          children=[
                                          Transform(
                                            #  Empty Transform 
                                            children=[
                                            Shape(USE='HAnimJointShape')])]),
                                        Shape(
                                          geometry=LineSet(vertexCount=[2],
                                            #  from vt3 to vt2 vertices 2 
                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                            coord=Coordinate(point=[(0.0062,1.4583,-0.057),(0.0063,1.4761,-0.0484)])))]),
                                      HAnimJoint(DEF='hanim_vt2',name='vt2',center=(0.0063,1.4761,-0.0484),llimit=[0,0,0],ulimit=[0,0,0],
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
                                              #  from vt2 to vt1 vertices 2 
                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                              coord=Coordinate(point=[(0.0063,1.4761,-0.0484),(0.0065,1.4951,-0.0387)]))),
                                          HAnimSite(DEF='hanim_cervicale_pt',translation=(0.0064,1.52,-0.0815),
                                            children=[
                                            TouchSensor(description='HAnimSite cervicale_pt'),
                                            Shape(USE='HAnimSiteShape')]),
                                          HAnimSite(DEF='hanim_suprasternale_pt',translation=(0.0084,1.4714,0.0551),
                                            children=[
                                            TouchSensor(description='HAnimSite suprasternale_pt'),
                                            Shape(USE='HAnimSiteShape')])]),
                                        HAnimJoint(DEF='hanim_vt1',name='vt1',center=(0.0065,1.4951,-0.0387),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                #  from vt1 to vc7 vertices 2 
                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                coord=Coordinate(point=[(0.0065,1.4951,-0.0387),(0.0066,1.5132,-0.0301)]))),
                                            HAnimSite(DEF='hanim_l_neck_base_pt',translation=(0.0646,1.5141,-0.038),
                                              children=[
                                              TouchSensor(description='HAnimSite l_neck_base_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_r_neck_base_pt',translation=(-0.0419,1.5149,-0.022),
                                              children=[
                                              TouchSensor(description='HAnimSite r_neck_base_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            Shape(
                                              geometry=LineSet(vertexCount=[2],
                                                #  from vt1 to l_sternoclavicular vertices 2 
                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                coord=Coordinate(point=[(0.0065,1.4951,-0.0387),(0.082,1.4488,-0.0353)]))),
                                            HAnimSite(DEF='hanim_l_acromion_pt',translation=(0.2032,1.476,-0.049),
                                              children=[
                                              TouchSensor(description='HAnimSite l_acromion_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_l_axilla_distal_pt',translation=(0.1706,1.4072,-0.0875),
                                              children=[
                                              TouchSensor(description='HAnimSite l_axilla_distal_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_l_axilla_posterior_folds_pt',
                                              children=[
                                              TouchSensor(description='HAnimSite l_axilla_posterior_folds_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_l_axilla_proximal_pt',translation=(0.1777,1.4065,-0.0075),
                                              children=[
                                              TouchSensor(description='HAnimSite l_axilla_proximal_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_l_clavicale_pt',name='l_clavicale_pt',translation=(0.0271,1.4943,0.0394),
                                              children=[
                                              TouchSensor(description='HAnimSite l_clavicale_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            Shape(
                                              geometry=LineSet(vertexCount=[2],
                                                #  from vt1 to r_sternoclavicular vertices 2 
                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                coord=Coordinate(point=[(0.0065,1.4951,-0.0387),(-0.0694,1.46,-0.033)]))),
                                            HAnimSite(DEF='hanim_r_acromion_pt',translation=(-0.1905,1.4791,-0.0431),
                                              children=[
                                              TouchSensor(description='HAnimSite r_acromion_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_r_axilla_distal_pt',translation=(-0.1603,1.4098,-0.0826),
                                              children=[
                                              TouchSensor(description='HAnimSite r_axilla_distal_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_r_axilla_posterior_folds_pt',
                                              children=[
                                              TouchSensor(description='HAnimSite r_axilla_posterior_folds_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_r_axilla_proximal_pt',translation=(-0.1626,1.4072,-0.0031),
                                              children=[
                                              TouchSensor(description='HAnimSite r_axilla_proximal_pt'),
                                              Shape(USE='HAnimSiteShape')]),
                                            HAnimSite(DEF='hanim_r_clavicale_pt',name='r_clavicale_pt',translation=(-0.0115,1.4943,0.04),
                                              children=[
                                              TouchSensor(description='HAnimSite r_clavicale_pt'),
                                              Shape(USE='HAnimSiteShape')])]),
                                          HAnimJoint(DEF='hanim_vc7',name='vc7',center=(0.0066,1.5132,-0.0301),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                  #  from vc7 to vc6 vertices 2 
                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                  coord=Coordinate(point=[(0.0066,1.5132,-0.0301),(0.0066,1.5357,-0.0143)])))]),
                                            HAnimJoint(DEF='hanim_vc6',name='vc6',center=(0.0066,1.5357,-0.0143),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                    #  from vc6 to vc5 vertices 2 
                                                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                    coord=Coordinate(point=[(0.0066,1.5357,-0.0143),(0.0066,1.552,-0.0082)])))]),
                                              HAnimJoint(DEF='hanim_vc5',name='vc5',center=(0.0066,1.552,-0.0082),llimit=[0,0,0],ulimit=[0,0,0],
                                                children=[
                                                HAnimSegment(DEF='hanim_c5',name='c5',
                                                  children=[
                                                  Transform(translation=(0.0066,1.552,-0.0082),
                                                    children=[
                                                    Transform(
                                                      #  Empty Transform 
                                                      children=[
                                                      Shape(USE='HAnimJointShape')])]),
                                                  Shape(
                                                    geometry=LineSet(vertexCount=[2],
                                                      #  from vc5 to vc4 vertices 2 
                                                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                      coord=Coordinate(point=[(0.0066,1.552,-0.0082),(0.0066,1.5662,-0.0084)])))]),
                                                HAnimJoint(DEF='hanim_vc4',name='vc4',center=(0.0066,1.5662,-0.0084),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                        #  from vc4 to vc3 vertices 2 
                                                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                        coord=Coordinate(point=[(0.0066,1.5662,-0.0084),(0.0066,1.58,-0.0103)])))]),
                                                  HAnimJoint(DEF='hanim_vc3',name='vc3',center=(0.0066,1.58,-0.0103),llimit=[0,0,0],ulimit=[0,0,0],
                                                    children=[
                                                    HAnimSegment(DEF='hanim_c3',name='c3',
                                                      children=[
                                                      Transform(translation=(0.0066,1.58,-0.0103),
                                                        children=[
                                                        Transform(
                                                          #  Empty Transform 
                                                          children=[
                                                          Shape(USE='HAnimJointShape')])]),
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          #  from vc3 to vc2 vertices 2 
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                          coord=Coordinate(point=[(0.0066,1.58,-0.0103),(0.0066,1.5928,-0.0103)]))),
                                                      HAnimSite(DEF='hanim_adams_apple_pt',
                                                        children=[
                                                        TouchSensor(description='HAnimSite adams_apple_pt'),
                                                        Shape(USE='HAnimSiteShape')])]),
                                                    HAnimJoint(DEF='hanim_vc2',name='vc2',center=(0.0066,1.5928,-0.0103),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                            #  from vc2 to vc1 vertices 2 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                            coord=Coordinate(point=[(0.0066,1.5928,-0.0103),(0.0066,1.6144,-0.0034)])))]),
                                                      HAnimJoint(DEF='hanim_vc1',name='vc1',center=(0.0066,1.6144,-0.0034),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                              #  from vc1 to skullbase vertices 2 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                              coord=Coordinate(point=[(0.0066,1.6144,-0.0034),(0.0044,1.6209,0.0236)]))),
                                                          HAnimSite(DEF='hanim_glabella_pt',
                                                            children=[
                                                            TouchSensor(description='HAnimSite glabella_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_l_ectocanthus_pt',
                                                            children=[
                                                            TouchSensor(description='HAnimSite l_ectocanthus_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_l_infraorbitale_pt',translation=(0.0341,1.6171,0.0752),
                                                            children=[
                                                            TouchSensor(description='HAnimSite l_infraorbitale_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_l_tragion_pt',translation=(0.0739,1.6348,0.0282),
                                                            children=[
                                                            TouchSensor(description='HAnimSite l_tragion_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_nuchale_pt',translation=(0.0039,1.5972,-0.0796),
                                                            children=[
                                                            TouchSensor(description='HAnimSite nuchale_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_opisthocranion_pt',
                                                            children=[
                                                            TouchSensor(description='HAnimSite opisthocranion_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_r_ectocanthus_pt',
                                                            children=[
                                                            TouchSensor(description='HAnimSite r_ectocanthus_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_r_infraorbitale_pt',translation=(-0.0237,1.6171,0.0752),
                                                            children=[
                                                            TouchSensor(description='HAnimSite r_infraorbitale_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_r_tragion_pt',translation=(-0.0646,1.6347,0.0302),
                                                            children=[
                                                            TouchSensor(description='HAnimSite r_tragion_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_sellion_pt',translation=(0.0058,1.6316,0.0852),
                                                            children=[
                                                            TouchSensor(description='HAnimSite sellion_pt'),
                                                            Shape(USE='HAnimSiteShape')]),
                                                          HAnimSite(DEF='hanim_skull_vertex_pt',translation=(0.005,1.7504,0.0055),
                                                            children=[
                                                            TouchSensor(description='HAnimSite skull_vertex_pt'),
                                                            Shape(USE='HAnimSiteShape')])]),
                                                        HAnimJoint(DEF='hanim_skullbase',name='skullbase',center=(0.0044,1.6209,0.0236),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                                #  from skullbase to l_eyelid_joint vertices 2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(2.2365,1.87,1.9285)]))),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                #  from skullbase to r_eyelid_joint vertices 2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(-2.2535,1.87,1.9285)]))),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                #  from skullbase to l_eyeball_joint vertices 2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(2.1305,1.8444,4.1555)]))),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                #  from skullbase to r_eyeball_joint vertices 2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(-2.1475,1.8444,4.1555)]))),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                #  from skullbase to l_eyebrow_joint vertices 2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(0.9581,1.8563,5.2175)]))),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                #  from skullbase to r_eyebrow_joint vertices 2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(-0.9751,1.8563,5.2175)]))),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                #  from skullbase to temporomandibular vertices 2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                coord=Coordinate(point=[(0.0044,1.6209,0.0236),(-0.0085,1.7229,1.148)]))),
                                                            HAnimSite(DEF='hanim_l_gonion_pt',translation=(0.0631,1.553,0.033),
                                                              children=[
                                                              TouchSensor(description='HAnimSite l_gonion_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='hanim_menton_pt',
                                                              children=[
                                                              TouchSensor(description='HAnimSite menton_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='hanim_r_gonion_pt',translation=(-0.052,1.5529,0.0347),
                                                              children=[
                                                              TouchSensor(description='HAnimSite r_gonion_pt'),
                                                              Shape(USE='HAnimSiteShape')]),
                                                            HAnimSite(DEF='hanim_supramenton_pt',translation=(0.0061,1.541,0.0805),
                                                              children=[
                                                              TouchSensor(description='HAnimSite supramenton_pt'),
                                                              Shape(USE='HAnimSiteShape')])]),
                                                          HAnimJoint(DEF='hanim_l_eyelid_joint',name='l_eyelid_joint',center=(2.2365,1.87,1.9285),llimit=[0,0,0],ulimit=[0,0,0]),
                                                          HAnimJoint(DEF='hanim_r_eyelid_joint',name='r_eyelid_joint',center=(-2.2535,1.87,1.9285),llimit=[0,0,0],ulimit=[0,0,0]),
                                                          HAnimJoint(DEF='hanim_l_eyeball_joint',name='l_eyeball_joint',center=(2.1305,1.8444,4.1555),llimit=[0,0,0],ulimit=[0,0,0]),
                                                          HAnimJoint(DEF='hanim_r_eyeball_joint',name='r_eyeball_joint',center=(-2.1475,1.8444,4.1555),llimit=[0,0,0],ulimit=[0,0,0]),
                                                          HAnimJoint(DEF='hanim_l_eyebrow_joint',name='l_eyebrow_joint',center=(0.9581,1.8563,5.2175),llimit=[0,0,0],ulimit=[0,0,0]),
                                                          HAnimJoint(DEF='hanim_r_eyebrow_joint',name='r_eyebrow_joint',center=(-0.9751,1.8563,5.2175),llimit=[0,0,0],ulimit=[0,0,0]),
                                                          HAnimJoint(DEF='hanim_temporomandibular',name='temporomandibular',center=(-0.0085,1.7229,1.148),llimit=[0,0,0],ulimit=[0,0,0])])])])])])])])]),
                                          HAnimJoint(DEF='hanim_l_sternoclavicular',name='l_sternoclavicular',center=(0.082,1.4488,-0.0353),llimit=[0,0,0],ulimit=[0,0,0],
                                            children=[
                                            HAnimSegment(DEF='hanim_l_clavicle',name='l_clavicle',
                                              children=[
                                              Transform(translation=(0.082,1.4488,-0.0353),
                                                children=[
                                                Transform(
                                                  #  Empty Transform 
                                                  children=[
                                                  Shape(USE='HAnimJointShape')])]),
                                              Shape(
                                                geometry=LineSet(vertexCount=[2],
                                                  #  from l_sternoclavicular to l_acromioclavicular vertices 2 
                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                  coord=Coordinate(point=[(0.082,1.4488,-0.0353),(0.0962,1.4269,-0.0424)])))]),
                                            HAnimJoint(DEF='hanim_l_acromioclavicular',name='l_acromioclavicular',center=(0.0962,1.4269,-0.0424),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                    #  from l_acromioclavicular to l_shoulder vertices 2 
                                                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                    coord=Coordinate(point=[(0.0962,1.4269,-0.0424),(0.2029,1.4376,-0.0387)]))),
                                                HAnimSite(DEF='hanim_l_bideltoid_pt',
                                                  children=[
                                                  TouchSensor(description='HAnimSite l_bideltoid_pt'),
                                                  Shape(USE='HAnimSiteShape')]),
                                                HAnimSite(DEF='hanim_l_humeral_lateral_epicondyles_pt',name='l_humeral_lateral_epicondyles_pt',translation=(0.228,1.1482,-0.11),
                                                  children=[
                                                  TouchSensor(description='HAnimSite l_humeral_lateral_epicondyles_pt'),
                                                  Shape(USE='HAnimSiteShape')])]),
                                              HAnimJoint(DEF='hanim_l_shoulder',name='l_shoulder',center=(0.2029,1.4376,-0.0387),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                      #  from l_shoulder to l_elbow vertices 2 
                                                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                      coord=Coordinate(point=[(0.2029,1.4376,-0.0387),(0.2014,1.1357,-0.0682)]))),
                                                  HAnimSite(DEF='hanim_l_humeral_medial_epicondyles_pt',name='l_humeral_medial_epicondyles_pt',translation=(0.1735,1.1272,-0.1113),
                                                    children=[
                                                    TouchSensor(description='HAnimSite l_humeral_medial_epicondyles_pt'),
                                                    Shape(USE='HAnimSiteShape')]),
                                                  HAnimSite(DEF='hanim_l_olecranon_pt',translation=(-0.1962,1.1375,-0.1123),
                                                    children=[
                                                    TouchSensor(description='HAnimSite l_olecranon_pt'),
                                                    Shape(USE='HAnimSiteShape')]),
                                                  HAnimSite(DEF='hanim_l_radial_styloid_pt',translation=(0.1901,0.8645,-0.0415),
                                                    children=[
                                                    TouchSensor(description='HAnimSite l_radial_styloid_pt'),
                                                    Shape(USE='HAnimSiteShape')]),
                                                  HAnimSite(DEF='hanim_l_radiale_pt',translation=(0.2182,1.1212,-0.1167),
                                                    children=[
                                                    TouchSensor(description='HAnimSite l_radiale_pt'),
                                                    Shape(USE='HAnimSiteShape')])]),
                                                HAnimJoint(DEF='hanim_l_elbow',name='l_elbow',center=(0.2014,1.1357,-0.0682),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                        #  from l_elbow to l_radiocarpal vertices 2 
                                                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                        coord=Coordinate(point=[(0.2014,1.1357,-0.0682),(0.1984,0.8663,-0.0583)]))),
                                                    HAnimSite(DEF='hanim_l_ulnar_styloid_pt',translation=(-0.2142,0.8529,-0.0648),
                                                      children=[
                                                      TouchSensor(description='HAnimSite l_ulnar_styloid_pt'),
                                                      Shape(USE='HAnimSiteShape')])]),
                                                  HAnimJoint(DEF='hanim_l_radiocarpal',name='l_radiocarpal',center=(0.1984,0.8663,-0.0583),llimit=[0,0,0],ulimit=[0,0,0],
                                                    children=[
                                                    HAnimSegment(DEF='hanim_l_carpal',name='l_carpal',
                                                      children=[
                                                      Transform(rotation=(0,0,1,-3.14),scale=(0.2,0.2,0.2),translation=(0.2,0.85,-0.05),
                                                        #  Transform left hand 
                                                        children=[
                                                        Transform(rotation=(0,1,0,-1.57),
                                                          #  Transform left hand 
                                                          children=[
                                                          Shape(USE='HAnimJointShape')])]),
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          #  from l_radiocarpal to l_midcarpal_1 vertices 2 
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                          coord=Coordinate(point=[(0.1984,0.8663,-0.0583),(8.0485,0.9213,1.3235)]))),
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          #  from l_radiocarpal to l_midcarpal_2 vertices 2 
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                          coord=Coordinate(point=[(0.1984,0.8663,-0.0583),(8.0485,0.9225,0.8386)]))),
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          #  from l_radiocarpal to l_midcarpal_3 vertices 2 
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                          coord=Coordinate(point=[(0.1984,0.8663,-0.0583),(8.0395,0.9246,0.2513)]))),
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          #  from l_radiocarpal to l_midcarpal_4_5 vertices 2 
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                          coord=Coordinate(point=[(0.1984,0.8663,-0.0583),(8.0395,0.921,-0.6795)])))]),
                                                    HAnimJoint(DEF='hanim_l_midcarpal_1',name='l_midcarpal_1',center=(8.0485,0.9213,1.3235),llimit=[0,0,0],ulimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_l_trapezium',name='l_trapezium',
                                                        children=[
                                                        Transform(translation=(8.0485,0.9213,1.3235),
                                                          children=[
                                                          Transform(
                                                            #  Empty Transform 
                                                            children=[
                                                            Shape(USE='HAnimJointShape')])]),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            #  from l_midcarpal_1 to l_carpometacarpal_1 vertices 2 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                            coord=Coordinate(point=[(8.0485,0.9213,1.3235),(0.1924,0.8472,-0.0534)])))]),
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_1',name='l_carpometacarpal_1',center=(0.1924,0.8472,-0.0534),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                              #  from l_carpometacarpal_1 to l_metacarpophalangeal_1 vertices 2 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                              coord=Coordinate(point=[(0.1924,0.8472,-0.0534),(0.1951,0.8226,0.0246)])))]),
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_1',name='l_metacarpophalangeal_1',center=(0.1951,0.8226,0.0246),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                                #  from l_metacarpophalangeal_1 to l_carpal_interphalangeal_1 vertices 2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                coord=Coordinate(point=[(0.1951,0.8226,0.0246),(0.1955,0.8159,0.0464)]))),
                                                            HAnimSite(DEF='hanim_l_carpal_distal_phalanx_1_tip',
                                                              children=[
                                                              TouchSensor(description='HAnimSite l_carpal_distal_phalanx_1_tip'),
                                                              Shape(USE='HAnimSiteShape')])]),
                                                          HAnimJoint(DEF='hanim_l_carpal_interphalangeal_1',name='l_carpal_interphalangeal_1',center=(0.1955,0.8159,0.0464),llimit=[0,0,0],ulimit=[0,0,0])])])]),
                                                    HAnimJoint(DEF='hanim_l_midcarpal_2',name='l_midcarpal_2',center=(8.0485,0.9225,0.8386),llimit=[0,0,0],ulimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_l_trapezoid',name='l_trapezoid',
                                                        children=[
                                                        Transform(translation=(8.0485,0.9225,0.8386),
                                                          children=[
                                                          Transform(
                                                            #  Empty Transform 
                                                            children=[
                                                            Shape(USE='HAnimJointShape')])]),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            #  from l_midcarpal_2 to l_carpometacarpal_2 vertices 2 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                            coord=Coordinate(point=[(8.0485,0.9225,0.8386),(0.1983,0.8024,-0.028)]))),
                                                        HAnimSite(DEF='hanim_l_metacarpal_phalanx_2_pt',translation=(0.2009,0.8139,-0.0237),
                                                          children=[
                                                          TouchSensor(description='HAnimSite l_metacarpal_phalanx_2_pt'),
                                                          Shape(USE='HAnimSiteShape')])]),
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_2',name='l_carpometacarpal_2',center=(0.1983,0.8024,-0.028),llimit=[0,0,0],ulimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_l_metacarpal_2',name='l_metacarpal_2',
                                                          children=[
                                                          Transform(translation=(0.1983,0.8024,-0.028),
                                                            children=[
                                                            Transform(
                                                              #  Empty Transform 
                                                              children=[
                                                              Shape(USE='HAnimJointShape')])]),
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              #  from l_carpometacarpal_2 to l_metacarpophalangeal_2 vertices 2 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                              coord=Coordinate(point=[(0.1983,0.8024,-0.028),(0.1983,0.7815,-0.028)])))]),
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_2',name='l_metacarpophalangeal_2',center=(0.1983,0.7815,-0.028),llimit=[0,0,0],ulimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_2',name='l_carpal_proximal_phalanx_2',
                                                            children=[
                                                            Transform(translation=(0.1983,0.7815,-0.028),
                                                              children=[
                                                              Transform(
                                                                #  Empty Transform 
                                                                children=[
                                                                Shape(USE='HAnimJointShape')])]),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                #  from l_metacarpophalangeal_2 to l_carpal_proximal_interphalangeal_2 vertices 2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                coord=Coordinate(point=[(0.1983,0.7815,-0.028),(0.2017,0.7363,-0.0248)])))]),
                                                          HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_2',name='l_carpal_proximal_interphalangeal_2',center=(0.2017,0.7363,-0.0248),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                                  #  from l_carpal_proximal_interphalangeal_2 to l_carpal_distal_interphalangeal_2 vertices 2 
                                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                  coord=Coordinate(point=[(0.2017,0.7363,-0.0248),(0.2028,0.7139,-0.0236)]))),
                                                              HAnimSite(DEF='hanim_l_carpal_distal_phalanx_2_tip',
                                                                children=[
                                                                TouchSensor(description='HAnimSite l_carpal_distal_phalanx_2_tip'),
                                                                Shape(USE='HAnimSiteShape')]),
                                                              HAnimSite(DEF='hanim_l_dactylion_pt',translation=(0.2056,0.6743,-0.0482),
                                                                children=[
                                                                TouchSensor(description='HAnimSite l_dactylion_pt'),
                                                                Shape(USE='HAnimSiteShape')])]),
                                                            HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_2',name='l_carpal_distal_interphalangeal_2',center=(0.2028,0.7139,-0.0236),llimit=[0,0,0],ulimit=[0,0,0])])])])]),
                                                    HAnimJoint(DEF='hanim_l_midcarpal_3',name='l_midcarpal_3',center=(8.0395,0.9246,0.2513),llimit=[0,0,0],ulimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_l_capitate',name='l_capitate',
                                                        children=[
                                                        Transform(translation=(8.0395,0.9246,0.2513),
                                                          children=[
                                                          Transform(
                                                            #  Empty Transform 
                                                            children=[
                                                            Shape(USE='HAnimJointShape')])]),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            #  from l_midcarpal_3 to l_carpometacarpal_3 vertices 2 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                            coord=Coordinate(point=[(8.0395,0.9246,0.2513),(0.1987,0.8029,-0.053)]))),
                                                        HAnimSite(DEF='hanim_l_metacarpal_phalanx_3_pt',
                                                          children=[
                                                          TouchSensor(description='HAnimSite l_metacarpal_phalanx_3_pt'),
                                                          Shape(USE='HAnimSiteShape')])]),
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_3',name='l_carpometacarpal_3',center=(0.1987,0.8029,-0.053),llimit=[0,0,0],ulimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_l_metacarpal_3',name='l_metacarpal_3',
                                                          children=[
                                                          Transform(translation=(0.1987,0.8029,-0.053),
                                                            children=[
                                                            Transform(
                                                              #  Empty Transform 
                                                              children=[
                                                              Shape(USE='HAnimJointShape')])]),
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              #  from l_carpometacarpal_3 to l_metacarpophalangeal_3 vertices 2 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                              coord=Coordinate(point=[(0.1987,0.8029,-0.053),(0.1987,0.7818,-0.053)])))]),
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_3',name='l_metacarpophalangeal_3',center=(0.1987,0.7818,-0.053),llimit=[0,0,0],ulimit=[0,0,0],
                                                          children=[
                                                          HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_3',name='l_carpal_proximal_phalanx_3',
                                                            children=[
                                                            Transform(translation=(0.1987,0.7818,-0.053),
                                                              children=[
                                                              Transform(
                                                                #  Empty Transform 
                                                                children=[
                                                                Shape(USE='HAnimJointShape')])]),
                                                            Shape(
                                                              geometry=LineSet(vertexCount=[2],
                                                                #  from l_metacarpophalangeal_3 to l_carpal_proximal_interphalangeal_3 vertices 2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                coord=Coordinate(point=[(0.1987,0.7818,-0.053),(0.2013,0.7273,-0.0503)])))]),
                                                          HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_3',name='l_carpal_proximal_interphalangeal_3',center=(0.2013,0.7273,-0.0503),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                                  #  from l_carpal_proximal_interphalangeal_3 to l_carpal_distal_interphalangeal_3 vertices 2 
                                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                  coord=Coordinate(point=[(0.2013,0.7273,-0.0503),(0.2026,0.7011,-0.0494)]))),
                                                              HAnimSite(DEF='hanim_l_carpal_distal_phalanx_3_tip',
                                                                children=[
                                                                TouchSensor(description='HAnimSite l_carpal_distal_phalanx_3_tip'),
                                                                Shape(USE='HAnimSiteShape')])]),
                                                            HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_3',name='l_carpal_distal_interphalangeal_3',center=(0.2026,0.7011,-0.0494),llimit=[0,0,0],ulimit=[0,0,0])])])])]),
                                                    HAnimJoint(DEF='hanim_l_midcarpal_4_5',name='l_midcarpal_4_5',center=(8.0395,0.921,-0.6795),llimit=[0,0,0],ulimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_l_hamate',name='l_hamate',
                                                        children=[
                                                        Transform(translation=(8.0395,0.921,-0.6795),
                                                          children=[
                                                          Transform(
                                                            #  Empty Transform 
                                                            children=[
                                                            Shape(USE='HAnimJointShape')])]),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            #  from l_midcarpal_4_5 to l_carpometacarpal_4 vertices 2 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                            coord=Coordinate(point=[(8.0395,0.921,-0.6795),(0.1956,0.8019,-0.0794)]))),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            #  from l_midcarpal_4_5 to l_carpometacarpal_5 vertices 2 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                            coord=Coordinate(point=[(8.0395,0.921,-0.6795),(0.1925,0.8066,-0.1036)]))),
                                                        HAnimSite(DEF='hanim_l_metacarpal_phalanx_5_pt',translation=(0.1929,0.786,-0.1122),
                                                          children=[
                                                          TouchSensor(description='HAnimSite l_metacarpal_phalanx_5_pt'),
                                                          Shape(USE='HAnimSiteShape')])]),
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_4',name='l_carpometacarpal_4',center=(0.1956,0.8019,-0.0794),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                              #  from l_carpometacarpal_4 to l_metacarpophalangeal_4 vertices 2 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                              coord=Coordinate(point=[(0.1956,0.8019,-0.0794),(0.1956,0.7815,-0.0794)])))]),
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_4',name='l_metacarpophalangeal_4',center=(0.1956,0.7815,-0.0794),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                                #  from l_metacarpophalangeal_4 to l_carpal_proximal_interphalangeal_4 vertices 2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                coord=Coordinate(point=[(0.1956,0.7815,-0.0794),(0.1973,0.7287,-0.0777)])))]),
                                                          HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_4',name='l_carpal_proximal_interphalangeal_4',center=(0.1973,0.7287,-0.0777),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                                  #  from l_carpal_proximal_interphalangeal_4 to l_carpal_distal_interphalangeal_4 vertices 2 
                                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                  coord=Coordinate(point=[(0.1973,0.7287,-0.0777),(0.1983,0.7045,-0.0767)]))),
                                                              HAnimSite(DEF='hanim_l_carpal_distal_phalanx_4_tip',
                                                                children=[
                                                                TouchSensor(description='HAnimSite l_carpal_distal_phalanx_4_tip'),
                                                                Shape(USE='HAnimSiteShape')])]),
                                                            HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_4',name='l_carpal_distal_interphalangeal_4',center=(0.1983,0.7045,-0.0767),llimit=[0,0,0],ulimit=[0,0,0])])])]),
                                                      HAnimJoint(DEF='hanim_l_carpometacarpal_5',name='l_carpometacarpal_5',center=(0.1925,0.8066,-0.1036),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                              #  from l_carpometacarpal_5 to l_metacarpophalangeal_5 vertices 2 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                              coord=Coordinate(point=[(0.1925,0.8066,-0.1036),(0.1925,0.7866,-0.1036)])))]),
                                                        HAnimJoint(DEF='hanim_l_metacarpophalangeal_5',name='l_metacarpophalangeal_5',center=(0.1925,0.7866,-0.1036),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                                #  from l_metacarpophalangeal_5 to l_carpal_proximal_interphalangeal_5 vertices 2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                coord=Coordinate(point=[(0.1925,0.7866,-0.1036),(0.1938,0.7452,-0.1024)])))]),
                                                          HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_5',name='l_carpal_proximal_interphalangeal_5',center=(0.1938,0.7452,-0.1024),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                                  #  from l_carpal_proximal_interphalangeal_5 to l_carpal_distal_interphalangeal_5 vertices 2 
                                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                  coord=Coordinate(point=[(0.1938,0.7452,-0.1024),(0.1948,0.7277,-0.1017)]))),
                                                              HAnimSite(DEF='hanim_l_carpal_distal_phalanx_5_tip',
                                                                children=[
                                                                TouchSensor(description='HAnimSite l_carpal_distal_phalanx_5_tip'),
                                                                Shape(USE='HAnimSiteShape')])]),
                                                            HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_5',name='l_carpal_distal_interphalangeal_5',center=(0.1948,0.7277,-0.1017),llimit=[0,0,0],ulimit=[0,0,0])])])])])])])])])]),
                                          HAnimJoint(DEF='hanim_r_sternoclavicular',name='r_sternoclavicular',center=(-0.0694,1.46,-0.033),llimit=[0,0,0],ulimit=[0,0,0],
                                            children=[
                                            HAnimSegment(DEF='hanim_r_clavicle',name='r_clavicle',
                                              children=[
                                              Transform(translation=(-0.0694,1.46,-0.033),
                                                children=[
                                                Transform(
                                                  #  Empty Transform 
                                                  children=[
                                                  Shape(USE='HAnimJointShape')])]),
                                              Shape(
                                                geometry=LineSet(vertexCount=[2],
                                                  #  from r_sternoclavicular to r_acromioclavicular vertices 2 
                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                  coord=Coordinate(point=[(-0.0694,1.46,-0.033),(-0.0836,1.4281,-0.0401)])))]),
                                            HAnimJoint(DEF='hanim_r_acromioclavicular',name='r_acromioclavicular',center=(-0.0836,1.4281,-0.0401),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                    #  from r_acromioclavicular to r_shoulder vertices 2 
                                                    color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                    coord=Coordinate(point=[(-0.0836,1.4281,-0.0401),(-0.1907,1.4407,-0.0325)]))),
                                                HAnimSite(DEF='hanim_r_bideltoid_pt',
                                                  children=[
                                                  TouchSensor(description='HAnimSite r_bideltoid_pt'),
                                                  Shape(USE='HAnimSiteShape')]),
                                                HAnimSite(DEF='hanim_r_humeral_lateral_epicondyles_pt',name='r_humeral_lateral_epicondyles_pt',translation=(-0.2224,1.1517,-0.1033),
                                                  children=[
                                                  TouchSensor(description='HAnimSite r_humeral_lateral_epicondyles_pt'),
                                                  Shape(USE='HAnimSiteShape')])]),
                                              HAnimJoint(DEF='hanim_r_shoulder',name='r_shoulder',center=(-0.1907,1.4407,-0.0325),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                      #  from r_shoulder to r_elbow vertices 2 
                                                      color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                      coord=Coordinate(point=[(-0.1907,1.4407,-0.0325),(-0.1949,1.1388,-0.062)]))),
                                                  HAnimSite(DEF='hanim_r_humeral_medial_epicondyles_pt',name='r_humeral_medial_epicondyles_pt',translation=(-0.168,1.1298,-0.1062),
                                                    children=[
                                                    TouchSensor(description='HAnimSite r_humeral_medial_epicondyles_pt'),
                                                    Shape(USE='HAnimSiteShape')]),
                                                  HAnimSite(DEF='hanim_r_olecranon_pt',translation=(-0.1907,1.1405,-0.1065),
                                                    children=[
                                                    TouchSensor(description='HAnimSite r_olecranon_pt'),
                                                    Shape(USE='HAnimSiteShape')]),
                                                  HAnimSite(DEF='hanim_r_radial_styloid_pt',translation=(-0.1884,0.8676,-0.036),
                                                    children=[
                                                    TouchSensor(description='HAnimSite r_radial_styloid_pt'),
                                                    Shape(USE='HAnimSiteShape')]),
                                                  HAnimSite(DEF='hanim_r_radiale_pt',translation=(-0.213,1.1305,-0.1091),
                                                    children=[
                                                    TouchSensor(description='HAnimSite r_radiale_pt'),
                                                    Shape(USE='HAnimSiteShape')])]),
                                                HAnimJoint(DEF='hanim_r_elbow',name='r_elbow',center=(-0.1949,1.1388,-0.062),llimit=[0,0,0],ulimit=[0,0,0],
                                                  children=[
                                                  HAnimSegment(DEF='hanim_r_forearm',name='r_forearm',
                                                    children=[
                                                    Transform(translation=(-0.1949,1.1388,-0.062),
                                                      children=[
                                                      Transform(
                                                        #  Empty Transform 
                                                        children=[
                                                        Shape(USE='HAnimJointShape')])]),
                                                    Shape(
                                                      geometry=LineSet(vertexCount=[2],
                                                        #  from r_elbow to r_radiocarpal vertices 2 
                                                        color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                        coord=Coordinate(point=[(-0.1949,1.1388,-0.062),(-0.1959,0.8694,-0.0521)]))),
                                                    HAnimSite(DEF='hanim_r_ulnar_styloid_pt',translation=(-0.2117,0.8562,-0.0584),
                                                      children=[
                                                      TouchSensor(description='HAnimSite r_ulnar_styloid_pt'),
                                                      Shape(USE='HAnimSiteShape')])]),
                                                  HAnimJoint(DEF='hanim_r_radiocarpal',name='r_radiocarpal',center=(-0.1959,0.8694,-0.0521),llimit=[0,0,0],ulimit=[0,0,0],
                                                    children=[
                                                    HAnimSegment(DEF='hanim_r_carpal',name='r_carpal',
                                                      children=[
                                                      Transform(rotation=(0,0,1,-3.14),scale=(0.2,0.2,0.2),translation=(-0.2,0.85,-0.05),
                                                        #  Transform right hand 
                                                        children=[
                                                        Transform(rotation=(0,1,0,1.57),
                                                          #  Transform right hand 
                                                          children=[
                                                          Shape(USE='HAnimJointShape')])]),
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          #  from r_radiocarpal to r_midcarpal_1 vertices 2 
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                          coord=Coordinate(point=[(-0.1959,0.8694,-0.0521),(-8.0515,0.9213,1.3235)]))),
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          #  from r_radiocarpal to r_midcarpal_2 vertices 2 
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                          coord=Coordinate(point=[(-0.1959,0.8694,-0.0521),(-8.0515,0.9225,0.8386)]))),
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          #  from r_radiocarpal to r_midcarpal_3 vertices 2 
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                          coord=Coordinate(point=[(-0.1959,0.8694,-0.0521),(-8.0405,0.9246,0.2513)]))),
                                                      Shape(
                                                        geometry=LineSet(vertexCount=[2],
                                                          #  from r_radiocarpal to r_midcarpal_4_5 vertices 2 
                                                          color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                          coord=Coordinate(point=[(-0.1959,0.8694,-0.0521),(-8.0405,0.921,-0.6795)])))]),
                                                    HAnimJoint(DEF='hanim_r_midcarpal_1',name='r_midcarpal_1',center=(-8.0515,0.9213,1.3235),llimit=[0,0,0],ulimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_r_trapezium',name='r_trapezium',
                                                        children=[
                                                        Transform(translation=(-8.0515,0.9213,1.3235),
                                                          children=[
                                                          Transform(
                                                            #  Empty Transform 
                                                            children=[
                                                            Shape(USE='HAnimJointShape')])]),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            #  from r_midcarpal_1 to r_carpometacarpal_1 vertices 2 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                            coord=Coordinate(point=[(-8.0515,0.9213,1.3235),(-0.1899,0.8502,-0.0473)])))]),
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_1',name='r_carpometacarpal_1',center=(-0.1899,0.8502,-0.0473),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                              #  from r_carpometacarpal_1 to r_metacarpophalangeal_1 vertices 2 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                              coord=Coordinate(point=[(-0.1899,0.8502,-0.0473),(-0.1874,0.8256,0.0306)])))]),
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_1',name='r_metacarpophalangeal_1',center=(-0.1874,0.8256,0.0306),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                                #  from r_metacarpophalangeal_1 to r_carpal_interphalangeal_1 vertices 2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                coord=Coordinate(point=[(-0.1874,0.8256,0.0306),(-0.1864,0.819,0.0506)]))),
                                                            HAnimSite(DEF='hanim_r_carpal_distal_phalanx_1_tip',
                                                              children=[
                                                              TouchSensor(description='HAnimSite r_carpal_distal_phalanx_1_tip'),
                                                              Shape(USE='HAnimSiteShape')])]),
                                                          HAnimJoint(DEF='hanim_r_carpal_interphalangeal_1',name='r_carpal_interphalangeal_1',center=(-0.1864,0.819,0.0506),llimit=[0,0,0],ulimit=[0,0,0])])])]),
                                                    HAnimJoint(DEF='hanim_r_midcarpal_2',name='r_midcarpal_2',center=(-8.0515,0.9225,0.8386),llimit=[0,0,0],ulimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_r_trapezoid',name='r_trapezoid',
                                                        children=[
                                                        Transform(translation=(-8.0515,0.9225,0.8386),
                                                          children=[
                                                          Transform(
                                                            #  Empty Transform 
                                                            children=[
                                                            Shape(USE='HAnimJointShape')])]),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            #  from r_midcarpal_2 to r_carpometacarpal_2 vertices 2 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                            coord=Coordinate(point=[(-8.0515,0.9225,0.8386),(-0.1961,0.8055,-0.0218)]))),
                                                        HAnimSite(DEF='hanim_r_metacarpal_phalanx_2_pt',translation=(-0.1977,0.8169,-0.0177),
                                                          children=[
                                                          TouchSensor(description='HAnimSite r_metacarpal_phalanx_2_pt'),
                                                          Shape(USE='HAnimSiteShape')])]),
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_2',name='r_carpometacarpal_2',center=(-0.1961,0.8055,-0.0218),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                              #  from r_carpometacarpal_2 to r_metacarpophalangeal_2 vertices 2 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                              coord=Coordinate(point=[(-0.1961,0.8055,-0.0218),(-0.1961,0.7846,-0.0218)])))]),
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_2',name='r_metacarpophalangeal_2',center=(-0.1961,0.7846,-0.0218),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                                #  from r_metacarpophalangeal_2 to r_carpal_proximal_interphalangeal_2 vertices 2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                coord=Coordinate(point=[(-0.1961,0.7846,-0.0218),(-0.1954,0.7393,-0.0185)])))]),
                                                          HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_2',name='r_carpal_proximal_interphalangeal_2',center=(-0.1954,0.7393,-0.0185),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                                  #  from r_carpal_proximal_interphalangeal_2 to r_carpal_distal_interphalangeal_2 vertices 2 
                                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                  coord=Coordinate(point=[(-0.1954,0.7393,-0.0185),(-0.1945,0.7169,-0.0173)]))),
                                                              HAnimSite(DEF='hanim_r_carpal_distal_phalanx_2_tip',
                                                                children=[
                                                                TouchSensor(description='HAnimSite r_carpal_distal_phalanx_2_tip'),
                                                                Shape(USE='HAnimSiteShape')]),
                                                              HAnimSite(DEF='hanim_r_dactylion_pt',translation=(-0.1941,0.6772,-0.0423),
                                                                children=[
                                                                TouchSensor(description='HAnimSite r_dactylion_pt'),
                                                                Shape(USE='HAnimSiteShape')])]),
                                                            HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_2',name='r_carpal_distal_interphalangeal_2',center=(-0.1945,0.7169,-0.0173),llimit=[0,0,0],ulimit=[0,0,0])])])])]),
                                                    HAnimJoint(DEF='hanim_r_midcarpal_3',name='r_midcarpal_3',center=(-8.0405,0.9246,0.2513),llimit=[0,0,0],ulimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_r_capitate',name='r_capitate',
                                                        children=[
                                                        Transform(translation=(-8.0405,0.9246,0.2513),
                                                          children=[
                                                          Transform(
                                                            #  Empty Transform 
                                                            children=[
                                                            Shape(USE='HAnimJointShape')])]),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            #  from r_midcarpal_3 to r_carpometacarpal_3 vertices 2 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                            coord=Coordinate(point=[(-8.0405,0.9246,0.2513),(-0.1972,0.806,-0.0468)]))),
                                                        HAnimSite(DEF='hanim_r_metacarpal_phalanx_3_pt',
                                                          children=[
                                                          TouchSensor(description='HAnimSite r_metacarpal_phalanx_3_pt'),
                                                          Shape(USE='HAnimSiteShape')])]),
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_3',name='r_carpometacarpal_3',center=(-0.1972,0.806,-0.0468),llimit=[0,0,0],ulimit=[0,0,0],
                                                        children=[
                                                        HAnimSegment(DEF='hanim_r_metacarpal_3',name='r_metacarpal_3',
                                                          children=[
                                                          Transform(translation=(-0.1972,0.806,-0.0468),
                                                            children=[
                                                            Transform(
                                                              #  Empty Transform 
                                                              children=[
                                                              Shape(USE='HAnimJointShape')])]),
                                                          Shape(
                                                            geometry=LineSet(vertexCount=[2],
                                                              #  from r_carpometacarpal_3 to r_metacarpophalangeal_3 vertices 2 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                              coord=Coordinate(point=[(-0.1972,0.806,-0.0468),(-0.1972,0.7849,-0.0468)])))]),
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_3',name='r_metacarpophalangeal_3',center=(-0.1972,0.7849,-0.0468),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                                #  from r_metacarpophalangeal_3 to r_carpal_proximal_interphalangeal_3 vertices 2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                coord=Coordinate(point=[(-0.1972,0.7849,-0.0468),(-0.195,0.7304,-0.0441)])))]),
                                                          HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_3',name='r_carpal_proximal_interphalangeal_3',center=(-0.195,0.7304,-0.0441),llimit=[0,0,0],ulimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_carpal_middle_phalanx_3',name='r_carpal_middle_phalanx_3',
                                                              children=[
                                                              Transform(translation=(-0.195,0.7304,-0.0441),
                                                                children=[
                                                                Transform(
                                                                  #  Empty Transform 
                                                                  children=[
                                                                  Shape(USE='HAnimJointShape')])]),
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  #  from r_carpal_proximal_interphalangeal_3 to r_carpal_distal_interphalangeal_3 vertices 2 
                                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                  coord=Coordinate(point=[(-0.195,0.7304,-0.0441),(-0.1939,0.7042,-0.0432)]))),
                                                              HAnimSite(DEF='hanim_r_carpal_distal_phalanx_3_tip',
                                                                children=[
                                                                TouchSensor(description='HAnimSite r_carpal_distal_phalanx_3_tip'),
                                                                Shape(USE='HAnimSiteShape')])]),
                                                            HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_3',name='r_carpal_distal_interphalangeal_3',center=(-0.1939,0.7042,-0.0432),llimit=[0,0,0],ulimit=[0,0,0])])])])]),
                                                    HAnimJoint(DEF='hanim_r_midcarpal_4_5',name='r_midcarpal_4_5',center=(-8.0405,0.921,-0.6795),llimit=[0,0,0],ulimit=[0,0,0],
                                                      children=[
                                                      HAnimSegment(DEF='hanim_r_hamate',name='r_hamate',
                                                        children=[
                                                        Transform(translation=(-8.0405,0.921,-0.6795),
                                                          children=[
                                                          Transform(
                                                            #  Empty Transform 
                                                            children=[
                                                            Shape(USE='HAnimJointShape')])]),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            #  from r_midcarpal_4_5 to r_carpometacarpal_4 vertices 2 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                            coord=Coordinate(point=[(-8.0405,0.921,-0.6795),(-0.1951,0.8049,-0.0732)]))),
                                                        Shape(
                                                          geometry=LineSet(vertexCount=[2],
                                                            #  from r_midcarpal_4_5 to r_carpometacarpal_5 vertices 2 
                                                            color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                            coord=Coordinate(point=[(-8.0405,0.921,-0.6795),(-0.1926,0.8096,-0.0975)]))),
                                                        HAnimSite(DEF='hanim_r_metacarpal_phalanx_5_pt',translation=(-0.1929,0.789,-0.1064),
                                                          children=[
                                                          TouchSensor(description='HAnimSite r_metacarpal_phalanx_5_pt'),
                                                          Shape(USE='HAnimSiteShape')])]),
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_4',name='r_carpometacarpal_4',center=(-0.1951,0.8049,-0.0732),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                              #  from r_carpometacarpal_4 to r_metacarpophalangeal_4 vertices 2 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                              coord=Coordinate(point=[(-0.1951,0.8049,-0.0732),(-0.1951,0.7845,-0.0732)])))]),
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_4',name='r_metacarpophalangeal_4',center=(-0.1951,0.7845,-0.0732),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                                #  from r_metacarpophalangeal_4 to r_carpal_proximal_interphalangeal_4 vertices 2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                coord=Coordinate(point=[(-0.1951,0.7845,-0.0732),(-0.192,0.7318,-0.0716)])))]),
                                                          HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_4',name='r_carpal_proximal_interphalangeal_4',center=(-0.192,0.7318,-0.0716),llimit=[0,0,0],ulimit=[0,0,0],
                                                            children=[
                                                            HAnimSegment(DEF='hanim_r_carpal_middle_phalanx_4',name='r_carpal_middle_phalanx_4',
                                                              children=[
                                                              Transform(translation=(-0.192,0.7318,-0.0716),
                                                                children=[
                                                                Transform(
                                                                  #  Empty Transform 
                                                                  children=[
                                                                  Shape(USE='HAnimJointShape')])]),
                                                              Shape(
                                                                geometry=LineSet(vertexCount=[2],
                                                                  #  from r_carpal_proximal_interphalangeal_4 to r_carpal_distal_interphalangeal_4 vertices 2 
                                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                  coord=Coordinate(point=[(-0.192,0.7318,-0.0716),(-0.1908,0.7077,-0.0706)]))),
                                                              HAnimSite(DEF='hanim_r_carpal_distal_phalanx_4_tip',
                                                                children=[
                                                                TouchSensor(description='HAnimSite r_carpal_distal_phalanx_4_tip'),
                                                                Shape(USE='HAnimSiteShape')])]),
                                                            HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_4',name='r_carpal_distal_interphalangeal_4',center=(-0.1908,0.7077,-0.0706),llimit=[0,0,0],ulimit=[0,0,0])])])]),
                                                      HAnimJoint(DEF='hanim_r_carpometacarpal_5',name='r_carpometacarpal_5',center=(-0.1926,0.8096,-0.0975),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                              #  from r_carpometacarpal_5 to r_metacarpophalangeal_5 vertices 2 
                                                              color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                              coord=Coordinate(point=[(-0.1926,0.8096,-0.0975),(-0.1926,0.7896,-0.0975)])))]),
                                                        HAnimJoint(DEF='hanim_r_metacarpophalangeal_5',name='r_metacarpophalangeal_5',center=(-0.1926,0.7896,-0.0975),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                                #  from r_metacarpophalangeal_5 to r_carpal_proximal_interphalangeal_5 vertices 2 
                                                                color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                coord=Coordinate(point=[(-0.1926,0.7896,-0.0975),(-0.1902,0.7483,-0.0963)])))]),
                                                          HAnimJoint(DEF='hanim_r_carpal_proximal_interphalangeal_5',name='r_carpal_proximal_interphalangeal_5',center=(-0.1902,0.7483,-0.0963),llimit=[0,0,0],ulimit=[0,0,0],
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
                                                                  #  from r_carpal_proximal_interphalangeal_5 to r_carpal_distal_interphalangeal_5 vertices 2 
                                                                  color=ColorRGBA(USE='HAnimSegmentLineColorRGBA'),
                                                                  coord=Coordinate(point=[(-0.1902,0.7483,-0.0963),(-0.1908,0.754,-0.096)]))),
                                                              HAnimSite(DEF='hanim_r_carpal_distal_phalanx_5_tip',
                                                                children=[
                                                                TouchSensor(description='HAnimSite r_carpal_distal_phalanx_5_tip'),
                                                                Shape(USE='HAnimSiteShape')])]),
                                                            HAnimJoint(DEF='hanim_r_carpal_distal_interphalangeal_5',name='r_carpal_distal_interphalangeal_5',center=(-0.1908,0.754,-0.096),llimit=[0,0,0],ulimit=[0,0,0])])])])])])])])])])])])])])])])])])])])])])])])])])])]),],
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
      HAnimSite(USE='hanim_l_femoral_lateral_epicondyles_pt'),
      HAnimSite(USE='hanim_l_femoral_medial_epicondyles_pt'),
      HAnimSite(USE='hanim_l_knee_crease_pt'),
      HAnimSite(USE='hanim_l_suprapatella_pt'),
      HAnimSite(USE='hanim_r_femoral_lateral_epicondyles_pt'),
      HAnimSite(USE='hanim_r_femoral_medial_epicondyles_pt'),
      HAnimSite(USE='hanim_r_knee_crease_pt'),
      HAnimSite(USE='hanim_r_suprapatella_pt'),
      HAnimSite(USE='hanim_l_lateral_malleolus_pt'),
      HAnimSite(USE='hanim_l_medial_malleolus_pt'),
      HAnimSite(USE='hanim_l_tibiale_pt'),
      HAnimSite(USE='hanim_l_calcaneus_posterior_pt'),
      HAnimSite(USE='hanim_l_sphyrion_pt'),
      HAnimSite(USE='hanim_l_metatarsal_phalanx_1_pt'),
      HAnimSite(USE='hanim_l_tarsal_distal_phalanx_1_tip'),
      HAnimSite(USE='hanim_l_tarsal_distal_phalanx_2_tip'),
      HAnimSite(USE='hanim_l_tarsal_distal_phalanx_3_tip'),
      HAnimSite(USE='hanim_l_tarsal_distal_phalanx_4_tip'),
      HAnimSite(USE='hanim_l_metatarsal_phalanx_5_pt'),
      HAnimSite(USE='hanim_l_tarsal_distal_phalanx_5_tip'),
      HAnimSite(USE='hanim_r_lateral_malleolus_pt'),
      HAnimSite(USE='hanim_r_medial_malleolus_pt'),
      HAnimSite(USE='hanim_r_tibiale_pt'),
      HAnimSite(USE='hanim_r_calcaneus_posterior_pt'),
      HAnimSite(USE='hanim_r_sphyrion_pt'),
      HAnimSite(USE='hanim_r_metatarsal_phalanx_1_pt'),
      HAnimSite(USE='hanim_r_tarsal_distal_phalanx_1_tip'),
      HAnimSite(USE='hanim_r_tarsal_distal_phalanx_2_tip'),
      HAnimSite(USE='hanim_r_tarsal_distal_phalanx_3_tip'),
      HAnimSite(USE='hanim_r_tarsal_distal_phalanx_4_tip'),
      HAnimSite(USE='hanim_r_metatarsal_phalanx_5_pt'),
      HAnimSite(USE='hanim_r_tarsal_distal_phalanx_5_tip'),
      HAnimSite(USE='hanim_l_rib10_pt'),
      HAnimSite(USE='hanim_r_rib10_pt'),
      HAnimSite(USE='hanim_spine_2_middle_back_pt'),
      HAnimSite(USE='hanim_substernale_pt'),
      HAnimSite(USE='hanim_l_thelion_pt'),
      HAnimSite(USE='hanim_r_thelion_pt'),
      HAnimSite(USE='hanim_l_chest_midsagittal_plane_pt'),
      HAnimSite(USE='hanim_mesosternale_pt'),
      HAnimSite(USE='hanim_r_chest_midsagittal_plane_pt'),
      HAnimSite(USE='hanim_rear_center_midsagittal_plane_pt'),
      HAnimSite(USE='hanim_spine_1_middle_back_pt'),
      HAnimSite(USE='hanim_cervicale_pt'),
      HAnimSite(USE='hanim_suprasternale_pt'),
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
      HAnimSite(USE='hanim_adams_apple_pt'),
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
      HAnimSite(USE='hanim_l_gonion_pt'),
      HAnimSite(USE='hanim_menton_pt'),
      HAnimSite(USE='hanim_r_gonion_pt'),
      HAnimSite(USE='hanim_supramenton_pt'),
      HAnimSite(USE='hanim_l_bideltoid_pt'),
      HAnimSite(USE='hanim_l_humeral_lateral_epicondyles_pt'),
      HAnimSite(USE='hanim_l_humeral_medial_epicondyles_pt'),
      HAnimSite(USE='hanim_l_olecranon_pt'),
      HAnimSite(USE='hanim_l_radial_styloid_pt'),
      HAnimSite(USE='hanim_l_radiale_pt'),
      HAnimSite(USE='hanim_l_ulnar_styloid_pt'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_1_tip'),
      HAnimSite(USE='hanim_l_metacarpal_phalanx_2_pt'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_2_tip'),
      HAnimSite(USE='hanim_l_dactylion_pt'),
      HAnimSite(USE='hanim_l_metacarpal_phalanx_3_pt'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_3_tip'),
      HAnimSite(USE='hanim_l_metacarpal_phalanx_5_pt'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_4_tip'),
      HAnimSite(USE='hanim_l_carpal_distal_phalanx_5_tip'),
      HAnimSite(USE='hanim_r_bideltoid_pt'),
      HAnimSite(USE='hanim_r_humeral_lateral_epicondyles_pt'),
      HAnimSite(USE='hanim_r_humeral_medial_epicondyles_pt'),
      HAnimSite(USE='hanim_r_olecranon_pt'),
      HAnimSite(USE='hanim_r_radial_styloid_pt'),
      HAnimSite(USE='hanim_r_radiale_pt'),
      HAnimSite(USE='hanim_r_ulnar_styloid_pt'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_1_tip'),
      HAnimSite(USE='hanim_r_metacarpal_phalanx_2_pt'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_2_tip'),
      HAnimSite(USE='hanim_r_dactylion_pt'),
      HAnimSite(USE='hanim_r_metacarpal_phalanx_3_pt'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_3_tip'),
      HAnimSite(USE='hanim_r_metacarpal_phalanx_5_pt'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_4_tip'),
      HAnimSite(USE='hanim_r_carpal_distal_phalanx_5_tip')],
      #  </LOD> 
      skinCoord=Coordinate(USE='TheSkinCoord'),
      joints=[
      HAnimJoint(USE='hanim_humanoid_root',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_sacroiliac',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_hip',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_knee',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_talocrural',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_talocalcaneonavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_cuneonavicular_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsometatarsal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_cuneonavicular_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_cuneonavicular_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsometatarsal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_calcaneocuboid',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_transversetarsal',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsometatarsal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsometatarsal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_hip',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_knee',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_talocrural',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_talocalcaneonavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_cuneonavicular_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsometatarsal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_cuneonavicular_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_cuneonavicular_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsometatarsal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_calcaneocuboid',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_transversetarsal',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsometatarsal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsometatarsal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
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
      HAnimJoint(USE='hanim_l_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_eyelid_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_eyeball_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_eyebrow_joint',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_temporomandibular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_sternoclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_shoulder',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_elbow',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_midcarpal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_midcarpal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_midcarpal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_midcarpal_4_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_sternoclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_acromioclavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_shoulder',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_elbow',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_midcarpal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_midcarpal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_midcarpal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_midcarpal_4_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpometacarpal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_metacarpophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_r_carpal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0])],
      segments=[
      HAnimSegment(USE='hanim_sacrum'),
      HAnimSegment(USE='hanim_pelvis'),
      HAnimSegment(USE='hanim_l_thigh'),
      HAnimSegment(USE='hanim_l_calf'),
      HAnimSegment(USE='hanim_l_talus'),
      HAnimSegment(USE='hanim_l_navicular'),
      HAnimSegment(USE='hanim_l_cuneiform_1'),
      HAnimSegment(USE='hanim_l_metatarsal_1'),
      HAnimSegment(USE='hanim_l_tarsal_proximal_phalanx_1'),
      HAnimSegment(USE='hanim_l_cuneiform_2'),
      HAnimSegment(USE='hanim_l_metatarsal_2'),
      HAnimSegment(USE='hanim_l_tarsal_proximal_phalanx_2'),
      HAnimSegment(USE='hanim_l_tarsal_middle_phalanx_2'),
      HAnimSegment(USE='hanim_l_cuneiform_3'),
      HAnimSegment(USE='hanim_l_metatarsal_3'),
      HAnimSegment(USE='hanim_l_tarsal_proximal_phalanx_3'),
      HAnimSegment(USE='hanim_l_tarsal_middle_phalanx_3'),
      HAnimSegment(USE='hanim_l_calcaneus'),
      HAnimSegment(USE='hanim_l_cuboid'),
      HAnimSegment(USE='hanim_l_metatarsal_4'),
      HAnimSegment(USE='hanim_l_tarsal_proximal_phalanx_4'),
      HAnimSegment(USE='hanim_l_tarsal_middle_phalanx_4'),
      HAnimSegment(USE='hanim_l_metatarsal_5'),
      HAnimSegment(USE='hanim_l_tarsal_proximal_phalanx_5'),
      HAnimSegment(USE='hanim_l_tarsal_middle_phalanx_5'),
      HAnimSegment(USE='hanim_r_thigh'),
      HAnimSegment(USE='hanim_r_calf'),
      HAnimSegment(USE='hanim_r_talus'),
      HAnimSegment(USE='hanim_r_navicular'),
      HAnimSegment(USE='hanim_r_cuneiform_1'),
      HAnimSegment(USE='hanim_r_metatarsal_1'),
      HAnimSegment(USE='hanim_r_tarsal_proximal_phalanx_1'),
      HAnimSegment(USE='hanim_r_cuneiform_2'),
      HAnimSegment(USE='hanim_r_metatarsal_2'),
      HAnimSegment(USE='hanim_r_tarsal_proximal_phalanx_2'),
      HAnimSegment(USE='hanim_r_tarsal_middle_phalanx_2'),
      HAnimSegment(USE='hanim_r_cuneiform_3'),
      HAnimSegment(USE='hanim_r_metatarsal_3'),
      HAnimSegment(USE='hanim_r_tarsal_proximal_phalanx_3'),
      HAnimSegment(USE='hanim_r_tarsal_middle_phalanx_3'),
      HAnimSegment(USE='hanim_r_calcaneus'),
      HAnimSegment(USE='hanim_r_cuboid'),
      HAnimSegment(USE='hanim_r_metatarsal_4'),
      HAnimSegment(USE='hanim_r_tarsal_proximal_phalanx_4'),
      HAnimSegment(USE='hanim_r_tarsal_middle_phalanx_4'),
      HAnimSegment(USE='hanim_r_metatarsal_5'),
      HAnimSegment(USE='hanim_r_tarsal_proximal_phalanx_5'),
      HAnimSegment(USE='hanim_r_tarsal_middle_phalanx_5'),
      HAnimSegment(USE='hanim_l5'),
      HAnimSegment(USE='hanim_l4'),
      HAnimSegment(USE='hanim_l3'),
      HAnimSegment(USE='hanim_l2'),
      HAnimSegment(USE='hanim_l1'),
      HAnimSegment(USE='hanim_t12'),
      HAnimSegment(USE='hanim_t11'),
      HAnimSegment(USE='hanim_t10'),
      HAnimSegment(USE='hanim_t9'),
      HAnimSegment(USE='hanim_t8'),
      HAnimSegment(USE='hanim_t7'),
      HAnimSegment(USE='hanim_t6'),
      HAnimSegment(USE='hanim_t5'),
      HAnimSegment(USE='hanim_t4'),
      HAnimSegment(USE='hanim_t3'),
      HAnimSegment(USE='hanim_t2'),
      HAnimSegment(USE='hanim_t1'),
      HAnimSegment(USE='hanim_c7'),
      HAnimSegment(USE='hanim_c6'),
      HAnimSegment(USE='hanim_c5'),
      HAnimSegment(USE='hanim_c4'),
      HAnimSegment(USE='hanim_c3'),
      HAnimSegment(USE='hanim_c2'),
      HAnimSegment(USE='hanim_c1'),
      HAnimSegment(USE='hanim_skull'),
      HAnimSegment(USE='hanim_l_clavicle'),
      HAnimSegment(USE='hanim_l_scapula'),
      HAnimSegment(USE='hanim_l_upperarm'),
      HAnimSegment(USE='hanim_l_forearm'),
      HAnimSegment(USE='hanim_l_carpal'),
      HAnimSegment(USE='hanim_l_trapezium'),
      HAnimSegment(USE='hanim_l_metacarpal_1'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_1'),
      HAnimSegment(USE='hanim_l_trapezoid'),
      HAnimSegment(USE='hanim_l_metacarpal_2'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_2'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_2'),
      HAnimSegment(USE='hanim_l_capitate'),
      HAnimSegment(USE='hanim_l_metacarpal_3'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_3'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_3'),
      HAnimSegment(USE='hanim_l_hamate'),
      HAnimSegment(USE='hanim_l_metacarpal_4'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_4'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_4'),
      HAnimSegment(USE='hanim_l_metacarpal_5'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_5'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_5'),
      HAnimSegment(USE='hanim_r_clavicle'),
      HAnimSegment(USE='hanim_r_scapula'),
      HAnimSegment(USE='hanim_r_upperarm'),
      HAnimSegment(USE='hanim_r_forearm'),
      HAnimSegment(USE='hanim_r_carpal'),
      HAnimSegment(USE='hanim_r_trapezium'),
      HAnimSegment(USE='hanim_r_metacarpal_1'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_1'),
      HAnimSegment(USE='hanim_r_trapezoid'),
      HAnimSegment(USE='hanim_r_metacarpal_2'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_2'),
      HAnimSegment(USE='hanim_r_carpal_middle_phalanx_2'),
      HAnimSegment(USE='hanim_r_capitate'),
      HAnimSegment(USE='hanim_r_metacarpal_3'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_3'),
      HAnimSegment(USE='hanim_r_carpal_middle_phalanx_3'),
      HAnimSegment(USE='hanim_r_hamate'),
      HAnimSegment(USE='hanim_r_metacarpal_4'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_4'),
      HAnimSegment(USE='hanim_r_carpal_middle_phalanx_4'),
      HAnimSegment(USE='hanim_r_metacarpal_5'),
      HAnimSegment(USE='hanim_r_carpal_proximal_phalanx_5'),
      HAnimSegment(USE='hanim_r_carpal_middle_phalanx_5')],)])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for Humanoid4_1.py:')
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

print("python Humanoid4_1.py load and self-test diagnostics complete.")
