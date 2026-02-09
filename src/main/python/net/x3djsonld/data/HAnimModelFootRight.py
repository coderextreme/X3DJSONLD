####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python HAnimModelFootRight.py
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
# Project home page:    # X3D Python Scene Access Interface Library (X3DPSAIL)
#                       # https://www.web3d.org/x3d/stylesheets/python/python.html
# Conversion generator: # https://www.web3d.org/x3d/stylesheets/X3dToPython.xslt
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    component(level=1,name='HAnim'),
    meta(content='HAnimModelFootRight.x3d',name='title'),
    meta(content='Right foot, using high-fidelity definitions for HAnim version 2.0',name='description'),
    meta(content='Kwan-Hee YOO, Don Brutzman and Joe Williams',name='creator'),
    meta(content='26 January 2015',name='created'),
    meta(content='23 December 2021',name='modified'),
    meta(content='not yet to scale',name='warning'),
    meta(content='Update all values to match HAnim2 A.7 Level of articulation four LOA-4',name='TODO'),
    meta(content='Add links to figures',name='TODO'),
    meta(content='Add Viewpoints to enable inspection',name='TODO'),
    meta(content='TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body',name='info'),
    meta(content='TODO will X3D HAnim component add a new level to support LOA-4 functionality?',name='warning'),
    meta(content='https://www.web3d.org/working-groups/humanoid-animation-HAnim',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19774/V2.0',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheFeet',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-FootJoints',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4',name='reference'),
    meta(content='https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html',name='reference'),
    meta(content='X3D HAnim humanoid animation',name='subject'),
    meta(content='Integrate and confirm Segment/Joint names, Viewpoints.',name='TODO'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='HAnimModelFootRight.x3d'),
    HAnimHumanoid(DEF='hanim_Foot_Right',loa=4,name='Foot_Right',version='2.0',
      children=[
      Comment(' original HAnimHumanoid info=\'"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams"\' '),],
      metadata=MetadataSet(name='HAnimHumanoid.info',reference='https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid',
        value=[
        MetadataString(name='authorName',value=['Kwan-Hee YOO, Don Brutzman and Joe Williams'])]),
      skeleton=[
      HAnimJoint(DEF='hanim_humanoid_root',name='humanoid_root',
        children=[
        Comment(' Might consider putting a HAnimSegment here, but that doesn\'t help with re-use of this foot model '),
        HAnimJoint(DEF='hanim_r_talocrural',description='connection joint of foot to leg above',name='r_talocrural',
          children=[
          HAnimSegment(DEF='hanim_r_talus',name='r_talus',
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
                coord=Coordinate(point=[(0,0,0),(-0.2,0.3,0)])))]),
          Comment(' TCN '),
          HAnimJoint(DEF='hanim_r_talocalcaneonavicular',center=(0.0,-0.3,0),name='r_talocalcaneonavicular',
            children=[
            HAnimSegment(DEF='hanim_r_navicular',name='r_navicular',
              children=[
              Transform(translation=(0.0,-0.3,0),
                children=[
                Shape(USE='HAnimJointShape')]),
              Shape(
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='TCNtoCN1',coordIndex=[0,1],
                  coord=Coordinate(point=[(0.0,-0.3,0),(0.1,-0.45,0)]))),
              Shape(
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='TCNtoCN2',coordIndex=[0,1],
                  coord=Coordinate(point=[(0.0,-0.3,0),(0.0,-0.45,0)]))),
              Shape(
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='TCNtoCN3',coordIndex=[0,1],
                  coord=Coordinate(point=[(0.0,-0.3,0),(-0.1,-0.4,0)])))]),
            Comment(' CN1 '),
            HAnimJoint(DEF='hanim_r_cuneonavicular_1',center=(0.1,-0.45,0),name='r_cuneonavicular_1',
              children=[
              HAnimSegment(DEF='hanim_r_cuneiform_1',name='r_cuneiform_1',
                children=[
                Transform(translation=(0.1,-0.45,0),
                  children=[
                  Shape(USE='HAnimJointShape')]),
                Shape(
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CN1toTMT1',coordIndex=[0,1],
                    coord=Coordinate(point=[(0.1,-0.45,0),(0.1,-0.6,0)])))]),
              HAnimJoint(DEF='hanim_r_tarsometatarsal_1',center=(0.1,-0.6,0),name='r_tarsometatarsal_1',
                children=[
                HAnimSegment(DEF='hanim_r_metatarsal_1',name='r_metatarsal_1',
                  children=[
                  Transform(translation=(0.1,-0.6,0),
                    children=[
                    Shape(USE='HAnimJointShape')]),
                  Shape(
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='TMT1toMTP1',coordIndex=[0,1],
                      coord=Coordinate(point=[(0.1,-0.6,0),(0.1,-0.9,0)])))]),
                HAnimJoint(DEF='hanim_r_metatarsophalangeal_1',center=(0.1,-0.9,0),name='r_metatarsophalangeal_1',
                  children=[
                  HAnimSegment(DEF='hanim_r_tarsal_proximal_phalanx_1',name='r_tarsal_proximal_phalanx_1',
                    children=[
                    Transform(translation=(0.1,-0.9,0),
                      children=[
                      Shape(USE='HAnimJointShape')]),
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='MTP1toIP1',coordIndex=[0,1],
                        coord=Coordinate(point=[(0.1,-0.9,0),(0.1,-1.05,0)])))]),
                  HAnimJoint(DEF='hanim_r_tarsal_interphalangeal_1',center=(0.1,-1.05,0),name='r_tarsal_interphalangeal_1',
                    children=[
                    HAnimSegment(DEF='hanim_r_tarsal_distal_phalanx_1',name='r_tarsal_distal_phalanx_1',
                      children=[
                      Transform(translation=(0.1,-1.05,0),
                        children=[
                        Shape(USE='HAnimJointShape')]),
                      Shape(
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='tiptoe_r_interphalangeal_',coordIndex=[0,1],
                          coord=Coordinate(point=[(0.1,-1.05,0),(0.1,-1.1,0)])))])])])])]),
            Comment(' CN2 '),
            HAnimJoint(DEF='hanim_r_cuneonavicular_2',center=(0.0,-0.45,0),name='r_cuneonavicular_2',
              children=[
              HAnimSegment(DEF='hanim_r_cuneiform_2',name='r_cuneiform_2',
                children=[
                Transform(translation=(0.0,-0.45,0),
                  children=[
                  Shape(USE='HAnimJointShape')]),
                Shape(
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CN2toTMT2',coordIndex=[0,1],
                    coord=Coordinate(point=[(0.0,-0.45,0),(-0.05,-0.6,0)])))]),
              HAnimJoint(DEF='hanim_r_tarsometatarsal_2',center=(-0.05,-0.6,0),name='r_tarsometatarsal_2',
                children=[
                HAnimSegment(DEF='hanim_r_metatarsal_2',name='r_metatarsal_2',
                  children=[
                  Transform(translation=(-0.05,-0.6,0),
                    children=[
                    Shape(USE='HAnimJointShape')]),
                  Shape(
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='TMT2toMTP2',coordIndex=[0,1],
                      coord=Coordinate(point=[(-0.05,-0.6,0),(-0.05,-0.9,0)])))]),
                HAnimJoint(DEF='hanim_r_metatarsophalangeal_2',center=(-0.05,-0.9,0),name='r_metatarsophalangeal_2',
                  children=[
                  HAnimSegment(DEF='hanim_r_tarsal_proximal_phalanx_2',name='r_tarsal_proximal_phalanx_2',
                    children=[
                    Transform(translation=(-0.05,-0.9,0),
                      children=[
                      Shape(USE='HAnimJointShape')]),
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='MTP2toPIP2',coordIndex=[0,1],
                        coord=Coordinate(point=[(-0.05,-0.9,0),(-0.05,-1.05,0)])))]),
                  HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_2',center=(-0.05,-1.05,0),name='r_tarsal_proximal_interphalangeal_2',
                    children=[
                    HAnimSegment(DEF='hanim_r_tarsal_middle_phalanx_2',name='r_tarsal_middle_phalanx_2',
                      children=[
                      Transform(translation=(-0.05,-1.05,0),
                        children=[
                        Shape(USE='HAnimJointShape')]),
                      Shape(
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='PIP2toDIP2',coordIndex=[0,1],
                          coord=Coordinate(point=[(-0.05,-1.05,0),(-0.05,-1.12,0)])))]),
                    HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_2',center=(-0.05,-1.12,0),name='r_tarsal_distal_interphalangeal_2',
                      children=[
                      HAnimSegment(DEF='hanim_r_tarsal_distal_phalanx_2',name='r_tarsal_distal_phalanx_2',
                        children=[
                        Transform(translation=(-0.05,-1.12,0),
                          children=[
                          Shape(USE='HAnimJointShape')]),
                        Shape(
                          appearance=Appearance(
                            material=Material(emissiveColor=(1,1,1))),
                          geometry=IndexedLineSet(DEF='tiptoe_r_tarsal_distal_interphalangeal_2',coordIndex=[0,1],
                            coord=Coordinate(point=[(-0.05,-1.12,0),(-0.05,-1.16,0)])))])])])])])]),
            Comment(' CN3 '),
            HAnimJoint(DEF='hanim_r_cuneonavicular_3',center=(-0.1,-0.4,0),name='r_cuneonavicular_3',
              children=[
              HAnimSegment(DEF='hanim_r_cuneiform_3',name='r_cuneiform_3',
                children=[
                Transform(translation=(-0.1,-0.4,0),
                  children=[
                  Shape(USE='HAnimJointShape')]),
                Shape(
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CN3toTMT3',coordIndex=[0,1],
                    coord=Coordinate(point=[(-0.1,-0.4,0),(-0.15,-0.6,0)])))]),
              HAnimJoint(DEF='hanim_r_tarsometatarsal_3',center=(-0.15,-0.6,0),name='r_tarsometatarsal_3',
                children=[
                HAnimSegment(DEF='hanim_r_metatarsal_3',name='r_metatarsal_3',
                  children=[
                  Transform(translation=(-0.15,-0.6,0),
                    children=[
                    Shape(USE='HAnimJointShape')]),
                  Shape(
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='TMT3toMTP3',coordIndex=[0,1],
                      coord=Coordinate(point=[(-0.15,-0.6,0),(-0.15,-0.9,0)])))]),
                HAnimJoint(DEF='hanim_r_metatarsophalangeal_3',center=(-0.15,-0.9,0),name='r_metatarsophalangeal_3',
                  children=[
                  HAnimSegment(DEF='hanim_r_tarsal_proximal_phalanx_3',name='r_tarsal_proximal_phalanx_3',
                    children=[
                    Transform(translation=(-0.15,-0.9,0),
                      children=[
                      Shape(USE='HAnimJointShape')]),
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='MTP3toPIP3',coordIndex=[0,1],
                        coord=Coordinate(point=[(-0.15,-0.9,0),(-0.15,-1.05,0)])))]),
                  HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_3',center=(-0.15,-1.05,0),name='r_tarsal_proximal_interphalangeal_3',
                    children=[
                    HAnimSegment(DEF='hanim_r_tarsal_middle_phalanx_3',name='r_tarsal_middle_phalanx_3',
                      children=[
                      Transform(translation=(-0.15,-1.05,0),
                        children=[
                        Shape(USE='HAnimJointShape')]),
                      Shape(
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='PIP3toDIP3',coordIndex=[0,1],
                          coord=Coordinate(point=[(-0.15,-1.05,0),(-0.15,-1.13,0)])))]),
                    HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_3',center=(-0.15,-1.13,0),name='r_tarsal_distal_interphalangeal_3',
                      children=[
                      HAnimSegment(DEF='hanim_r_tarsal_distal_phalanx_3',name='r_tarsal_distal_phalanx_3',
                        children=[
                        Transform(translation=(-0.15,-1.13,0),
                          children=[
                          Shape(USE='HAnimJointShape')]),
                        Shape(
                          appearance=Appearance(
                            material=Material(emissiveColor=(1,1,1))),
                          geometry=IndexedLineSet(DEF='tiptoe_r_tarsal_distal_interphalangeal_3',coordIndex=[0,1],
                            coord=Coordinate(point=[(-0.15,-1.13,0),(-0.15,-1.16,0)])))])])])])])])]),
          Comment(' CC '),
          HAnimJoint(DEF='hanim_r_calcaneocuboid',center=(-0.2,0.3,0),name='r_calcaneocuboid',
            children=[
            HAnimSegment(DEF='hanim_r_calcaneus',name='r_calcaneus',
              children=[
              Transform(translation=(-0.2,0.3,0),
                children=[
                Shape(USE='HAnimJointShape')]),
              Shape(
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='CCtoTT',coordIndex=[0,1],
                  coord=Coordinate(point=[(-0.2,0.3,0),(-0.21,-0.3,0)])))]),
            Comment(' TT '),
            HAnimJoint(DEF='hanim_r_transversetarsal',center=(-0.21,-0.3,0),name='r_transversetarsal',
              children=[
              HAnimSegment(DEF='hanim_r_cuboid',name='r_cuboid',
                children=[
                Transform(translation=(-0.21,-0.3,0),
                  children=[
                  Shape(USE='HAnimJointShape')]),
                Shape(
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='TTtoTMT4',coordIndex=[0,1],
                    coord=Coordinate(point=[(-0.21,-0.3,0),(-0.25,-0.58,0)]))),
                Shape(
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='TTtoTMT5',coordIndex=[0,1],
                    coord=Coordinate(point=[(-0.21,-0.3,0),(-0.33,-0.52,0)])))]),
              Comment(' TMT4 '),
              HAnimJoint(DEF='hanim_r_tarsometatarsal_4',center=(-0.25,-0.58,0),name='r_tarsometatarsal_4',
                children=[
                HAnimSegment(DEF='hanim_r_metatarsal_4',name='r_metatarsal_4',
                  children=[
                  Transform(translation=(-0.25,-0.58,0),
                    children=[
                    Shape(USE='HAnimJointShape')]),
                  Shape(
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='TMT4toMTP4',coordIndex=[0,1],
                      coord=Coordinate(point=[(-0.25,-0.58,0),(-0.25,-0.87,0)])))]),
                HAnimJoint(DEF='hanim_r_metatarsophalangeal_4',center=(-0.25,-0.87,0),name='r_metatarsophalangeal_4',
                  children=[
                  HAnimSegment(DEF='hanim_r_tarsal_proximal_phalanx_4',name='r_tarsal_proximal_phalanx_4',
                    children=[
                    Transform(translation=(-0.25,-0.87,0),
                      children=[
                      Shape(USE='HAnimJointShape')]),
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='MTP4toPIP4',coordIndex=[0,1],
                        coord=Coordinate(point=[(-0.25,-0.87,0),(-0.25,-1.0,0)])))]),
                  HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_4',center=(-0.25,-1.0,0),name='r_tarsal_proximal_interphalangeal_4',
                    children=[
                    HAnimSegment(DEF='hanim_r_tarsal_middle_phalanx_4',name='r_tarsal_middle_phalanx_4',
                      children=[
                      Transform(translation=(-0.25,-1.0,0),
                        children=[
                        Shape(USE='HAnimJointShape')]),
                      Shape(
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='PIP4toDIP4',coordIndex=[0,1],
                          coord=Coordinate(point=[(-0.25,-1.0,0),(-0.25,-1.1,0)])))]),
                    HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_4',center=(-0.25,-1.1,0),name='r_tarsal_distal_interphalangeal_4',
                      children=[
                      HAnimSegment(DEF='hanim_r_tarsal_distal_phalanx_4',name='r_tarsal_distal_phalanx_4',
                        children=[
                        Transform(translation=(-0.25,-1.1,0),
                          children=[
                          Shape(USE='HAnimJointShape')]),
                        Shape(
                          appearance=Appearance(
                            material=Material(emissiveColor=(1,1,1))),
                          geometry=IndexedLineSet(DEF='tiptoe_r_tarsal_distal_interphalangeal_4',coordIndex=[0,1],
                            coord=Coordinate(point=[(-0.25,-1.1,0),(-0.25,-1.15,0)])))])])])])]),
              Comment(' TMT5 '),
              HAnimJoint(DEF='hanim_r_tarsometatarsal_5',center=(-0.33,-0.52,0),name='r_tarsometatarsal_5',
                children=[
                HAnimSegment(DEF='hanim_r_metatarsal_5',name='r_metatarsal_5',
                  children=[
                  Transform(translation=(-0.33,-0.52,0),
                    children=[
                    Shape(USE='HAnimJointShape')]),
                  Shape(
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='TMT5toMTP5',coordIndex=[0,1],
                      coord=Coordinate(point=[(-0.33,-0.52,0),(-0.34,-0.8,0)])))]),
                HAnimJoint(DEF='hanim_r_metatarsophalangeal_5',center=(-0.34,-0.8,0),name='r_metatarsophalangeal_5',
                  children=[
                  HAnimSegment(DEF='hanim_r_tarsal_proximal_phalanx_5',name='r_tarsal_proximal_phalanx_5',
                    children=[
                    Transform(translation=(-0.34,-0.8,0),
                      children=[
                      Shape(USE='HAnimJointShape')]),
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='MTP5toPIP5',coordIndex=[0,1],
                        coord=Coordinate(point=[(-0.34,-0.8,0),(-0.34,-0.95,0)])))]),
                  HAnimJoint(DEF='hanim_r_tarsal_proximal_interphalangeal_5',center=(-0.34,-0.95,0),name='r_tarsal_proximal_interphalangeal_5',
                    children=[
                    HAnimSegment(DEF='hanim_r_tarsal_middle_phalanx_5',name='r_tarsal_middle_phalanx_5',
                      children=[
                      Transform(translation=(-0.34,-0.95,0),
                        children=[
                        Shape(USE='HAnimJointShape')]),
                      Shape(
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='PIP5toDIP5',coordIndex=[0,1],
                          coord=Coordinate(point=[(-0.34,-0.95,0),(-0.34,-1.05,0)])))]),
                    HAnimJoint(DEF='hanim_r_tarsal_distal_interphalangeal_5',center=(-0.34,-1.05,0),name='r_tarsal_distal_interphalangeal_5',
                      children=[
                      HAnimSegment(DEF='hanim_r_tarsal_distal_phalanx_5',name='r_tarsal_distal_phalanx_5',
                        children=[
                        Transform(translation=(-0.34,-1.05,0),
                          children=[
                          Shape(USE='HAnimJointShape')]),
                        Shape(
                          appearance=Appearance(
                            material=Material(emissiveColor=(1,1,1))),
                          geometry=IndexedLineSet(DEF='tiptoe_r_tarsal_distal_interphalangeal_5',coordIndex=[0,1],
                            coord=Coordinate(point=[(-0.34,-1.05,0),(-0.34,-1.08,0)])))])])])])])])])])])],
      joints=[
      HAnimJoint(USE='hanim_humanoid_root'),
      HAnimJoint(USE='hanim_r_calcaneocuboid'),
      HAnimJoint(USE='hanim_r_cuneonavicular_1'),
      HAnimJoint(USE='hanim_r_cuneonavicular_2'),
      HAnimJoint(USE='hanim_r_cuneonavicular_3'),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_1'),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_2'),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_3'),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_4'),
      HAnimJoint(USE='hanim_r_metatarsophalangeal_5'),
      HAnimJoint(USE='hanim_r_talocalcaneonavicular'),
      HAnimJoint(USE='hanim_r_talocrural'),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_2'),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_3'),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_4'),
      HAnimJoint(USE='hanim_r_tarsal_distal_interphalangeal_5'),
      HAnimJoint(USE='hanim_r_tarsal_interphalangeal_1'),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_2'),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_3'),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_4'),
      HAnimJoint(USE='hanim_r_tarsal_proximal_interphalangeal_5'),
      HAnimJoint(USE='hanim_r_tarsometatarsal_1'),
      HAnimJoint(USE='hanim_r_tarsometatarsal_2'),
      HAnimJoint(USE='hanim_r_tarsometatarsal_3'),
      HAnimJoint(USE='hanim_r_tarsometatarsal_4'),
      HAnimJoint(USE='hanim_r_tarsometatarsal_5'),
      HAnimJoint(USE='hanim_r_transversetarsal')],
      segments=[
      HAnimSegment(USE='hanim_r_calcaneus'),
      HAnimSegment(USE='hanim_r_cuboid'),
      HAnimSegment(USE='hanim_r_cuneiform_1'),
      HAnimSegment(USE='hanim_r_cuneiform_2'),
      HAnimSegment(USE='hanim_r_cuneiform_3'),
      HAnimSegment(USE='hanim_r_metatarsal_1'),
      HAnimSegment(USE='hanim_r_metatarsal_2'),
      HAnimSegment(USE='hanim_r_metatarsal_3'),
      HAnimSegment(USE='hanim_r_metatarsal_4'),
      HAnimSegment(USE='hanim_r_metatarsal_5'),
      HAnimSegment(USE='hanim_r_navicular'),
      HAnimSegment(USE='hanim_r_talus'),
      HAnimSegment(USE='hanim_r_tarsal_distal_phalanx_1'),
      HAnimSegment(USE='hanim_r_tarsal_distal_phalanx_2'),
      HAnimSegment(USE='hanim_r_tarsal_distal_phalanx_3'),
      HAnimSegment(USE='hanim_r_tarsal_distal_phalanx_4'),
      HAnimSegment(USE='hanim_r_tarsal_distal_phalanx_5'),
      HAnimSegment(USE='hanim_r_tarsal_middle_phalanx_2'),
      HAnimSegment(USE='hanim_r_tarsal_middle_phalanx_3'),
      HAnimSegment(USE='hanim_r_tarsal_middle_phalanx_4'),
      HAnimSegment(USE='hanim_r_tarsal_middle_phalanx_5'),
      HAnimSegment(USE='hanim_r_tarsal_proximal_phalanx_1'),
      HAnimSegment(USE='hanim_r_tarsal_proximal_phalanx_2'),
      HAnimSegment(USE='hanim_r_tarsal_proximal_phalanx_3'),
      HAnimSegment(USE='hanim_r_tarsal_proximal_phalanx_4'),
      HAnimSegment(USE='hanim_r_tarsal_proximal_phalanx_5')],)])
)

### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for HAnimModelFootRight.py:')
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

print("python HAnimModelFootRight.py load and self-test diagnostics complete.")
