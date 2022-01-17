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
    meta(content='HAnimModelFootLeft.x3d',name='title'),
    meta(content='Left foot, using high-fidelity definitions for HAnim version 2.0',name='description'),
    meta(content='Kwan-Hee YOO, Don Brutzman and Joe Williams',name='creator'),
    meta(content='26 January 2015',name='created'),
    meta(content='23 December 2021',name='modified'),
    meta(content='not yet to scale',name='warning'),
    meta(content='TODO will X3D HAnim component add a new level to support LOA-4 functionality?',name='warning'),
    meta(content='TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body',name='info'),
    meta(content='https://www.web3d.org/working-groups/humanoid-animation-HAnim',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19774/V2.0',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4',name='reference'),
    meta(content='https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html',name='reference'),
    meta(content='X3D HAnim humanoid animation',name='subject'),
    meta(content='Integrate and confirm Segment/Joint names, Viewpoints.',name='TODO'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='HAnimModelFootLeft.x3d'),
    HAnimHumanoid(DEF='hanim_Foot_Left',loa=4,name='Foot_Left',version='2.0',
      metadata=MetadataSet(name='HAnimHumanoid.info',reference='https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid',
        value=[
        MetadataString(name='authorName',value=['Kwan-Hee YOO, Don Brutzman and Joe Williams'])]),
      skeleton=[
      HAnimJoint(DEF='hanim_humanoid_root',name='humanoid_root',ulimit=[0,0,0],llimit=[0,0,0],
        #  Might consider putting a HAnimSegment here, but that doesn't help with re-use of this foot model 
        children=[
        HAnimJoint(DEF='hanim_l_talocrural',description='connection joint of foot to leg above',name='l_talocrural',ulimit=[0,0,0],llimit=[0,0,0],
          children=[
          HAnimSegment(DEF='hanim_l_talus',name='l_talus',
            children=[
            Transform(
              children=[
              Shape(DEF='HAnimJointShape',
                geometry=Sphere(radius=0.025),
                appearance=Appearance(DEF='HAnimJointAppearance',
                  material=Material(diffuseColor=(0,0,1))))]),
            Shape(
              appearance=Appearance(
                material=Material(emissiveColor=(1,1,1))),
              geometry=IndexedLineSet(DEF='TCtoTCN',coordIndex=[0,1],
                coord=Coordinate(point=[(0,0,0),(0.0,-0.3,0)]))),
            Shape(
              appearance=Appearance(
                material=Material(emissiveColor=(1,1,1))),
              geometry=IndexedLineSet(DEF='TCtoCC',coordIndex=[0,1],
                coord=Coordinate(point=[(0,0,0),(0.2,0.3,0)])))]),
          #  TCN 
          HAnimJoint(DEF='hanim_l_talocalcaneonavicular',center=(0.0,-0.3,0),name='l_talocalcaneonavicular',ulimit=[0,0,0],llimit=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_l_navicular',name='l_navicular',
              children=[
              Transform(translation=(0.0,-0.3,0),
                children=[
                Shape(USE='HAnimJointShape')]),
              Shape(
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='TCNtoCN1',coordIndex=[0,1],
                  coord=Coordinate(point=[(0.0,-0.3,0),(-0.1,-0.45,0)]))),
              Shape(
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='TCNtoCN2',coordIndex=[0,1],
                  coord=Coordinate(point=[(0.0,-0.3,0),(0.0,-0.45,0)]))),
              Shape(
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='TCNtoCN3',coordIndex=[0,1],
                  coord=Coordinate(point=[(0.0,-0.3,0),(0.1,-0.4,0)])))]),
            #  CN1 
            HAnimJoint(DEF='hanim_l_cuneonavicular_1',center=(-0.1,-0.45,0),name='l_cuneonavicular_1',ulimit=[0,0,0],llimit=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_l_cuneiform_1',name='l_cuneiform_1',
                children=[
                Transform(translation=(-0.1,-0.45,0),
                  children=[
                  Shape(USE='HAnimJointShape')]),
                Shape(
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CN1toTMT1',coordIndex=[0,1],
                    coord=Coordinate(point=[(-0.1,-0.45,0),(-0.1,-0.6,0)])))]),
              HAnimJoint(DEF='hanim_l_tarsometatarsal_1',center=(-0.1,-0.6,0),name='l_tarsometatarsal_1',ulimit=[0,0,0],llimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_l_metatarsal_1',name='l_metatarsal_1',
                  children=[
                  Transform(translation=(-0.1,-0.6,0),
                    children=[
                    Shape(USE='HAnimJointShape')]),
                  Shape(
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='TMT1toMTP1',coordIndex=[0,1],
                      coord=Coordinate(point=[(-0.1,-0.6,0),(-0.1,-0.9,0)])))]),
                HAnimJoint(DEF='hanim_l_metatarsophalangeal_1',center=(-0.1,-0.9,0),name='l_metatarsophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_l_tarsal_proximal_phalanx_1',name='l_tarsal_proximal_phalanx_1',
                    children=[
                    Transform(translation=(-0.1,-0.9,0),
                      children=[
                      Shape(USE='HAnimJointShape')]),
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='MTP1toIP1',coordIndex=[0,1],
                        coord=Coordinate(point=[(-0.1,-0.9,0),(-0.1,-1.05,0)])))]),
                  HAnimJoint(DEF='hanim_l_tarsal_interphalangeal_1',center=(-0.1,-1.05,0),name='l_tarsal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_l_tarsal_distal_phalanx_1',name='l_tarsal_distal_phalanx_1',
                      children=[
                      Transform(translation=(-0.1,-1.05,0),
                        children=[
                        Shape(USE='HAnimJointShape')]),
                      Shape(
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='tiptoe_l_tarsal_distal_interphalangeal_1',coordIndex=[0,1],
                          coord=Coordinate(point=[(-0.1,-1.05,0),(-0.1,-1.1,0)])))])])])])]),
            #  CN2 
            HAnimJoint(DEF='hanim_l_cuneonavicular_2',center=(0.0,-0.45,0),name='l_cuneonavicular_2',ulimit=[0,0,0],llimit=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_l_cuneiform_2',name='l_cuneiform_2',
                children=[
                Transform(translation=(0.0,-0.45,0),
                  children=[
                  Shape(USE='HAnimJointShape')]),
                Shape(
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CN2toTMT2',coordIndex=[0,1],
                    coord=Coordinate(point=[(0.0,-0.45,0),(0.05,-0.6,0)])))]),
              HAnimJoint(DEF='hanim_l_tarsometatarsal_2',center=(0.05,-0.6,0),name='l_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_l_metatarsal_2',name='l_metatarsal_2',
                  children=[
                  Transform(translation=(0.05,-0.6,0),
                    children=[
                    Shape(USE='HAnimJointShape')]),
                  Shape(
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='TMT2toMTP2',coordIndex=[0,1],
                      coord=Coordinate(point=[(0.05,-0.6,0),(0.05,-0.9,0)])))]),
                HAnimJoint(DEF='hanim_l_metatarsophalangeal_2',center=(0.05,-0.9,0),name='l_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_l_tarsal_proximal_phalanx_2',name='l_tarsal_proximal_phalanx_2',
                    children=[
                    Transform(translation=(0.05,-0.9,0),
                      children=[
                      Shape(USE='HAnimJointShape')]),
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='MTP2toPIP2',coordIndex=[0,1],
                        coord=Coordinate(point=[(0.05,-0.9,0),(0.05,-1.05,0)])))]),
                  HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_2',center=(0.05,-1.05,0),name='l_tarsal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_l_tarsal_middle_phalanx_2',name='l_tarsal_middle_phalanx_2',
                      children=[
                      Transform(translation=(0.05,-1.05,0),
                        children=[
                        Shape(USE='HAnimJointShape')]),
                      Shape(
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='PIP2toDIP2',coordIndex=[0,1],
                          coord=Coordinate(point=[(0.05,-1.05,0),(0.05,-1.12,0)])))]),
                    HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_2',center=(0.05,-1.12,0),name='l_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_l_tarsal_distal_phalanx_2',name='l_tarsal_distal_phalanx_2',
                        children=[
                        Transform(translation=(0.05,-1.12,0),
                          children=[
                          Shape(USE='HAnimJointShape')]),
                        Shape(
                          appearance=Appearance(
                            material=Material(emissiveColor=(1,1,1))),
                          geometry=IndexedLineSet(DEF='tiptoe_l_tarsal_distal_phalanx_2',coordIndex=[0,1],
                            coord=Coordinate(point=[(0.05,-1.12,0),(0.05,-1.16,0)])))])])])])])]),
            #  CN3 
            HAnimJoint(DEF='hanim_l_cuneonavicular_3',center=(0.1,-0.4,0),name='l_cuneonavicular_3',ulimit=[0,0,0],llimit=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_l_cuneiform_3',name='l_cuneiform_3',
                children=[
                Transform(translation=(0.1,-0.4,0),
                  children=[
                  Shape(USE='HAnimJointShape')]),
                Shape(
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CN3toTMT3',coordIndex=[0,1],
                    coord=Coordinate(point=[(0.1,-0.4,0),(0.15,-0.6,0)])))]),
              HAnimJoint(DEF='hanim_l_tarsometatarsal_3',center=(0.15,-0.6,0),name='l_tarsometatarsal_3',ulimit=[0,0,0],llimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_l_metatarsal_3',name='l_metatarsal_3',
                  children=[
                  Transform(translation=(0.15,-0.6,0),
                    children=[
                    Shape(USE='HAnimJointShape')]),
                  Shape(
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='TMT3toMTP3',coordIndex=[0,1],
                      coord=Coordinate(point=[(0.15,-0.6,0),(0.15,-0.9,0)])))]),
                HAnimJoint(DEF='hanim_l_metatarsophalangeal_3',center=(0.15,-0.9,0),name='l_metatarsophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_l_tarsal_proximal_phalanx_3',name='l_tarsal_proximal_phalanx_3',
                    children=[
                    Transform(translation=(0.15,-0.9,0),
                      children=[
                      Shape(USE='HAnimJointShape')]),
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='MTP3toPIP3',coordIndex=[0,1],
                        coord=Coordinate(point=[(0.15,-0.9,0),(0.15,-1.05,0)])))]),
                  HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_3',center=(0.15,-1.05,0),name='l_tarsal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_l_tarsal_middle_phalanx_3',name='l_tarsal_middle_phalanx_3',
                      children=[
                      Transform(translation=(0.15,-1.05,0),
                        children=[
                        Shape(USE='HAnimJointShape')]),
                      Shape(
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='PIP3toDIP3',coordIndex=[0,1],
                          coord=Coordinate(point=[(0.15,-1.05,0),(0.15,-1.13,0)])))]),
                    HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_3',center=(0.15,-1.13,0),name='l_tarsal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_l_tarsal_distal_phalanx_3',name='l_tarsal_distal_phalanx_3',
                        children=[
                        Transform(translation=(0.15,-1.13,0),
                          children=[
                          Shape(USE='HAnimJointShape')]),
                        Shape(
                          appearance=Appearance(
                            material=Material(emissiveColor=(1,1,1))),
                          geometry=IndexedLineSet(DEF='tiptoe_l_tarsal_distal_interphalangeal_3',coordIndex=[0,1],
                            coord=Coordinate(point=[(0.15,-1.13,0),(0.15,-1.16,0)])))])])])])])])]),
          #  CC 
          HAnimJoint(DEF='hanim_l_calcaneocuboid',center=(0.2,0.3,0),name='l_calcaneocuboid',ulimit=[0,0,0],llimit=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_l_calcaneus',name='l_calcaneus',
              children=[
              Transform(translation=(0.2,0.3,0),
                children=[
                Shape(USE='HAnimJointShape')]),
              Shape(
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='CCtoTT',coordIndex=[0,1],
                  coord=Coordinate(point=[(0.2,0.3,0),(0.21,-0.3,0)])))]),
            #  TT 
            HAnimJoint(DEF='hanim_l_transversetarsal',center=(0.21,-0.3,0),name='l_transversetarsal',ulimit=[0,0,0],llimit=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_l_cuboid',name='l_cuboid',
                children=[
                Transform(translation=(0.21,-0.3,0),
                  children=[
                  Shape(USE='HAnimJointShape')]),
                Shape(
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='TTtoTMT4',coordIndex=[0,1],
                    coord=Coordinate(point=[(0.21,-0.3,0),(0.25,-0.58,0)]))),
                Shape(
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='TTtoTMT5',coordIndex=[0,1],
                    coord=Coordinate(point=[(0.21,-0.3,0),(0.33,-0.52,0)])))]),
              #  TMT4 
              HAnimJoint(DEF='hanim_l_tarsometatarsal_4',center=(0.25,-0.58,0),name='l_tarsometatarsal_4',ulimit=[0,0,0],llimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_l_metatarsal_4',name='l_metatarsal_4',
                  children=[
                  Transform(translation=(0.25,-0.58,0),
                    children=[
                    Shape(USE='HAnimJointShape')]),
                  Shape(
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='TMT4toMTP4',coordIndex=[0,1],
                      coord=Coordinate(point=[(0.25,-0.58,0),(0.25,-0.87,0)])))]),
                HAnimJoint(DEF='hanim_l_metatarsophalangeal_4',center=(0.25,-0.87,0),name='l_metatarsophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_l_tarsal_proximal_phalanx_4',name='l_tarsal_proximal_phalanx_4',
                    children=[
                    Transform(translation=(0.25,-0.87,0),
                      children=[
                      Shape(USE='HAnimJointShape')]),
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='MTP4toPIP4',coordIndex=[0,1],
                        coord=Coordinate(point=[(0.25,-0.87,0),(0.25,-1.0,0)])))]),
                  HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_4',center=(0.25,-1.0,0),name='l_tarsal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_l_tarsal_middle_phalanx_4',name='l_tarsal_middle_phalanx_4',
                      children=[
                      Transform(translation=(0.25,-1.0,0),
                        children=[
                        Shape(USE='HAnimJointShape')]),
                      Shape(
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='PIP4toDIP4',coordIndex=[0,1],
                          coord=Coordinate(point=[(0.25,-1.0,0),(0.25,-1.1,0)])))]),
                    HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_4',center=(0.25,-1.1,0),name='l_tarsal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_l_tarsal_distal_phalanx_4',name='l_tarsal_distal_phalanx_4',
                        children=[
                        Transform(translation=(0.25,-1.1,0),
                          children=[
                          Shape(USE='HAnimJointShape')]),
                        Shape(
                          appearance=Appearance(
                            material=Material(emissiveColor=(1,1,1))),
                          geometry=IndexedLineSet(DEF='tiptoe_l_tarsal_distal_interphalangeal_4',coordIndex=[0,1],
                            coord=Coordinate(point=[(0.25,-1.1,0),(0.25,-1.15,0)])))])])])])]),
              #  TMT5 
              HAnimJoint(DEF='hanim_l_tarsometatarsal_5',center=(0.33,-0.52,0),name='l_tarsometatarsal_5',ulimit=[0,0,0],llimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_l_metatarsal_5',name='l_metatarsal_5',
                  children=[
                  Transform(translation=(0.33,-0.52,0),
                    children=[
                    Shape(USE='HAnimJointShape')]),
                  Shape(
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='TMT5toMTP5',coordIndex=[0,1],
                      coord=Coordinate(point=[(0.33,-0.52,0),(0.34,-0.8,0)])))]),
                HAnimJoint(DEF='hanim_l_metatarsophalangeal_5',center=(0.34,-0.8,0),name='l_metatarsophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_l_tarsal_proximal_phalanx_5',name='l_tarsal_proximal_phalanx_5',
                    children=[
                    Transform(translation=(0.34,-0.8,0),
                      children=[
                      Shape(USE='HAnimJointShape')]),
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='MTP5toPIP5',coordIndex=[0,1],
                        coord=Coordinate(point=[(0.34,-0.8,0),(0.34,-0.95,0)])))]),
                  HAnimJoint(DEF='hanim_l_tarsal_proximal_interphalangeal_5',center=(0.34,-0.95,0),name='l_tarsal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_l_tarsal_middle_phalanx_5',name='l_tarsal_middle_phalanx_5',
                      children=[
                      Transform(translation=(0.34,-0.95,0),
                        children=[
                        Shape(USE='HAnimJointShape')]),
                      Shape(
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='PIP5toDIP5',coordIndex=[0,1],
                          coord=Coordinate(point=[(0.34,-0.95,0),(0.34,-1.05,0)])))]),
                    HAnimJoint(DEF='hanim_l_tarsal_distal_interphalangeal_5',center=(0.34,-1.05,0),name='l_tarsal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0],
                      children=[
                      HAnimSegment(DEF='hanim_l_tarsal_distal_phalanx_5',name='l_tarsal_distal_phalanx_5',
                        children=[
                        Transform(translation=(0.34,-1.05,0),
                          children=[
                          Shape(USE='HAnimJointShape')]),
                        Shape(
                          appearance=Appearance(
                            material=Material(emissiveColor=(1,1,1))),
                          geometry=IndexedLineSet(DEF='tiptoe_l_tarsal_distal_interphalangeal_5',coordIndex=[0,1],
                            coord=Coordinate(point=[(0.34,-1.05,0),(0.34,-1.08,0)])))])])])])])])])])]),],
      #  original HAnimHumanoid info='"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams"' 
      joints=[
      HAnimJoint(USE='hanim_humanoid_root',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_calcaneocuboid',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_cuneonavicular_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_cuneonavicular_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_cuneonavicular_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metatarsophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_talocalcaneonavicular',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_talocrural',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsometatarsal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsometatarsal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsometatarsal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsometatarsal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_tarsometatarsal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_transversetarsal',ulimit=[0,0,0],llimit=[0,0,0])],
      segments=[
      HAnimSegment(USE='hanim_l_calcaneus'),
      HAnimSegment(USE='hanim_l_cuboid'),
      HAnimSegment(USE='hanim_l_cuneiform_1'),
      HAnimSegment(USE='hanim_l_cuneiform_2'),
      HAnimSegment(USE='hanim_l_cuneiform_3'),
      HAnimSegment(USE='hanim_l_metatarsal_1'),
      HAnimSegment(USE='hanim_l_metatarsal_2'),
      HAnimSegment(USE='hanim_l_metatarsal_3'),
      HAnimSegment(USE='hanim_l_metatarsal_4'),
      HAnimSegment(USE='hanim_l_metatarsal_5'),
      HAnimSegment(USE='hanim_l_navicular'),
      HAnimSegment(USE='hanim_l_talus'),
      HAnimSegment(USE='hanim_l_tarsal_distal_phalanx_1'),
      HAnimSegment(USE='hanim_l_tarsal_distal_phalanx_2'),
      HAnimSegment(USE='hanim_l_tarsal_distal_phalanx_3'),
      HAnimSegment(USE='hanim_l_tarsal_distal_phalanx_4'),
      HAnimSegment(USE='hanim_l_tarsal_distal_phalanx_5'),
      HAnimSegment(USE='hanim_l_tarsal_middle_phalanx_2'),
      HAnimSegment(USE='hanim_l_tarsal_middle_phalanx_3'),
      HAnimSegment(USE='hanim_l_tarsal_middle_phalanx_4'),
      HAnimSegment(USE='hanim_l_tarsal_middle_phalanx_5'),
      HAnimSegment(USE='hanim_l_tarsal_proximal_phalanx_1'),
      HAnimSegment(USE='hanim_l_tarsal_proximal_phalanx_2'),
      HAnimSegment(USE='hanim_l_tarsal_proximal_phalanx_3'),
      HAnimSegment(USE='hanim_l_tarsal_proximal_phalanx_4'),
      HAnimSegment(USE='hanim_l_tarsal_proximal_phalanx_5')],)])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful")
except BaseException as err:
    print("*** Python-to-VRML export of VRML output failed:", err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (still testing)")
except SyntaxError as err:
    print("*** Python-to-JSON export of JSON output failed:", err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python x3d.py load and self-test complete for HAnimModelFootLeft.py")
