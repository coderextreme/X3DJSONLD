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
    component(level=1,name='H-Anim'),
    meta(content='HAnimModelFootLeft.x3d',name='title'),
    meta(content='Left foot, using high-fidelity definitions for H-Anim version 2.2',name='description'),
    meta(content='YOO Kwan Hee and Don Brutzman',name='creator'),
    meta(content='26 January 2015',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='not yet to scale',name='warning'),
    meta(content='TODO will X3D HAnim component add a new level to support LOA-4 functionality?',name='warning'),
    meta(content='https://www.web3d.org/working-groups/humanoid-animation-h-anim',name='reference'),
    meta(content='https://www.web3d.org/files/specifications/19774/V1.0',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html',name='reference'),
    meta(content='X3D H-Anim humanoid animation',name='subject'),
    meta(content='scene, DOCTYPE and Schema under development.',name='warning'),
    meta(content='Integrate and confirm Segment/Joint names, Viewpoints.',name='TODO'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='HAnimModelFootLeft.x3d'),
    HAnimHumanoid(DEF='Humanoid_Left_Foot',info=["humanoidVersion=2.0"],jointBindingPositions=[(0,0,0)],jointBindingRotations=[(0,0,1,0)],jointBindingScales=[(1,1,1)],loa=-1,name='Humanoid_Left_Foot',skeletalConfiguration='BASIC',version='2.0',displayBBox=false,
      skeleton=[
      HAnimJoint(DEF='hanim_HumanoidRoot',name='humanoid_root',displayBBox=false,
        children=[
        HAnimJoint(DEF='l_talocrural_joint',name='l_talocrural_joint',displayBBox=false,
          children=[
          HAnimSegment(DEF='l_talus',name='l_talus',displayBBox=false,
            children=[
            Transform(displayBBox=false,
              children=[
              Shape(DEF='HAnimJointShape',displayBBox=false,
                geometry=Sphere(radius=0.025),
                appearance=Appearance(DEF='HAnimJointAppearance',
                  material=Material(diffuseColor=(0,0,1))))]),
            Shape(displayBBox=false,
              appearance=Appearance(
                material=Material(emissiveColor=(1,1,1))),
              geometry=IndexedLineSet(DEF='TCtoTCN',coordIndex=[0,1],
                coord=Coordinate(point=[(0,0,0),(0.0,-0.3,0)]))),
            Shape(displayBBox=false,
              appearance=Appearance(
                material=Material(emissiveColor=(1,1,1))),
              geometry=IndexedLineSet(DEF='TCtoCC',coordIndex=[0,1],
                coord=Coordinate(point=[(0,0,0),(0.2,0.3,0)])))]),
          #  TCN 
          HAnimJoint(DEF='l_talocalcaneonavicular_joint',center=(0.0,-0.3,0),name='l_talocalcaneonavicular_joint',displayBBox=false,
            children=[
            HAnimSegment(DEF='l_navicular',name='l_navicular',displayBBox=false,
              children=[
              Transform(translation=(0.0,-0.3,0),displayBBox=false,
                children=[
                Shape(USE='HAnimJointShape',displayBBox=false)]),
              Shape(displayBBox=false,
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='TCNtoCN1',coordIndex=[0,1],
                  coord=Coordinate(point=[(0.0,-0.3,0),(-0.1,-0.45,0)]))),
              Shape(displayBBox=false,
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='TCNtoCN2',coordIndex=[0,1],
                  coord=Coordinate(point=[(0.0,-0.3,0),(0.0,-0.45,0)]))),
              Shape(displayBBox=false,
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='TCNtoCN3',coordIndex=[0,1],
                  coord=Coordinate(point=[(0.0,-0.3,0),(0.1,-0.4,0)])))]),
            #  CN1 
            HAnimJoint(DEF='l_cuneonavicular_joint1',center=(-0.1,-0.45,0),name='l_cuneonavicular_joint1',displayBBox=false,
              children=[
              HAnimSegment(DEF='l_cuneiform1',name='l_cuneiform1',displayBBox=false,
                children=[
                Transform(translation=(-0.1,-0.45,0),displayBBox=false,
                  children=[
                  Shape(USE='HAnimJointShape',displayBBox=false)]),
                Shape(displayBBox=false,
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CN1toTMT1',coordIndex=[0,1],
                    coord=Coordinate(point=[(-0.1,-0.45,0),(-0.1,-0.6,0)])))]),
              HAnimJoint(DEF='l_tarsometatarsal_joint1',center=(-0.1,-0.6,0),name='l_tarsometatarsal_joint1',displayBBox=false,
                children=[
                HAnimSegment(DEF='l_metatarsal1',name='l_metatarsal1',displayBBox=false,
                  children=[
                  Transform(translation=(-0.1,-0.6,0),displayBBox=false,
                    children=[
                    Shape(USE='HAnimJointShape',displayBBox=false)]),
                  Shape(displayBBox=false,
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='TMT1toMTP1',coordIndex=[0,1],
                      coord=Coordinate(point=[(-0.1,-0.6,0),(-0.1,-0.9,0)])))]),
                HAnimJoint(DEF='l_metatarsophalangeal_joint1',center=(-0.1,-0.9,0),name='l_metatarsophalangeal_joint1',displayBBox=false,
                  children=[
                  HAnimSegment(DEF='l_proximal_phalanges1',name='l_proximal_phalanges1',displayBBox=false,
                    children=[
                    Transform(translation=(-0.1,-0.9,0),displayBBox=false,
                      children=[
                      Shape(USE='HAnimJointShape',displayBBox=false)]),
                    Shape(displayBBox=false,
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='MTP1toIP1',coordIndex=[0,1],
                        coord=Coordinate(point=[(-0.1,-0.9,0),(-0.1,-1.05,0)])))]),
                  HAnimJoint(DEF='l_f_Interphalangeal_joint',center=(-0.1,-1.05,0),name='l_f_Interphalangeal_joint',displayBBox=false,
                    children=[
                    HAnimSegment(DEF='l_distal_phalanges1',name='l_distal_phalanges1',displayBBox=false,
                      children=[
                      Transform(translation=(-0.1,-1.05,0),displayBBox=false,
                        children=[
                        Shape(USE='HAnimJointShape',displayBBox=false)]),
                      Shape(displayBBox=false,
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='tiptoe_l_distal_phalanges1',coordIndex=[0,1],
                          coord=Coordinate(point=[(-0.1,-1.05,0),(-0.1,-1.1,0)])))])])])])]),
            #  CN2 
            HAnimJoint(DEF='l_cuneonavicular_joint2',center=(0.0,-0.45,0),name='l_cuneonavicular_joint2',displayBBox=false,
              children=[
              HAnimSegment(DEF='l_cuneiform2',name='l_cuneiform2',displayBBox=false,
                children=[
                Transform(translation=(0.0,-0.45,0),displayBBox=false,
                  children=[
                  Shape(USE='HAnimJointShape',displayBBox=false)]),
                Shape(displayBBox=false,
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CN2toTMT2',coordIndex=[0,1],
                    coord=Coordinate(point=[(0.0,-0.45,0),(0.05,-0.6,0)])))]),
              HAnimJoint(DEF='l_tarsometatarsal_joint2',center=(0.05,-0.6,0),name='l_tarsometatarsal_joint2',displayBBox=false,
                children=[
                HAnimSegment(DEF='l_metatarsal2',name='l_metatarsal2',displayBBox=false,
                  children=[
                  Transform(translation=(0.05,-0.6,0),displayBBox=false,
                    children=[
                    Shape(USE='HAnimJointShape',displayBBox=false)]),
                  Shape(displayBBox=false,
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='TMT2toMTP2',coordIndex=[0,1],
                      coord=Coordinate(point=[(0.05,-0.6,0),(0.05,-0.9,0)])))]),
                HAnimJoint(DEF='l_metatarsophalangeal_joint2',center=(0.05,-0.9,0),name='l_metatarsophalangeal_joint2',displayBBox=false,
                  children=[
                  HAnimSegment(DEF='l_proximal_phalanges2',name='l_proximal_phalanges2',displayBBox=false,
                    children=[
                    Transform(translation=(0.05,-0.9,0),displayBBox=false,
                      children=[
                      Shape(USE='HAnimJointShape',displayBBox=false)]),
                    Shape(displayBBox=false,
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='MTP2toPIP2',coordIndex=[0,1],
                        coord=Coordinate(point=[(0.05,-0.9,0),(0.05,-1.05,0)])))]),
                  HAnimJoint(DEF='l_f_proximal_Interphalangeal_joint2',center=(0.05,-1.05,0),name='l_f_proximal_Interphalangeal_joint2',displayBBox=false,
                    children=[
                    HAnimSegment(DEF='l_middle_phalanges2',name='l_middle_phalanges2',displayBBox=false,
                      children=[
                      Transform(translation=(0.05,-1.05,0),displayBBox=false,
                        children=[
                        Shape(USE='HAnimJointShape',displayBBox=false)]),
                      Shape(displayBBox=false,
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='PIP2toDIP2',coordIndex=[0,1],
                          coord=Coordinate(point=[(0.05,-1.05,0),(0.05,-1.12,0)])))]),
                    HAnimJoint(DEF='l_f_distal_Interphalangeal_joint2',center=(0.05,-1.12,0),name='l_f_distal_Interphalangeal_joint2',displayBBox=false,
                      children=[
                      HAnimSegment(DEF='l_distal_phalanges2',name='l_distal_phalanges2',displayBBox=false,
                        children=[
                        Transform(translation=(0.05,-1.12,0),displayBBox=false,
                          children=[
                          Shape(USE='HAnimJointShape',displayBBox=false)]),
                        Shape(displayBBox=false,
                          appearance=Appearance(
                            material=Material(emissiveColor=(1,1,1))),
                          geometry=IndexedLineSet(DEF='tiptoe_l_f_distal_Interphalangeal_joint2',coordIndex=[0,1],
                            coord=Coordinate(point=[(0.05,-1.12,0),(0.05,-1.16,0)])))])])])])])]),
            #  CN3 
            HAnimJoint(DEF='l_cuneonavicular_joint3',center=(0.1,-0.4,0),name='l_cuneonavicular_joint3',displayBBox=false,
              children=[
              HAnimSegment(DEF='l_cuneiform3',name='l_cuneiform3',displayBBox=false,
                children=[
                Transform(translation=(0.1,-0.4,0),displayBBox=false,
                  children=[
                  Shape(USE='HAnimJointShape',displayBBox=false)]),
                Shape(displayBBox=false,
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CN3toTMT3',coordIndex=[0,1],
                    coord=Coordinate(point=[(0.1,-0.4,0),(0.15,-0.6,0)])))]),
              HAnimJoint(DEF='l_tarsometatarsal_joint3',center=(0.15,-0.6,0),name='l_tarsometatarsal_joint3',displayBBox=false,
                children=[
                HAnimSegment(DEF='l_metatarsal3',name='l_metatarsal3',displayBBox=false,
                  children=[
                  Transform(translation=(0.15,-0.6,0),displayBBox=false,
                    children=[
                    Shape(USE='HAnimJointShape',displayBBox=false)]),
                  Shape(displayBBox=false,
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='TMT3toMTP3',coordIndex=[0,1],
                      coord=Coordinate(point=[(0.15,-0.6,0),(0.15,-0.9,0)])))]),
                HAnimJoint(DEF='l_metatarsophalangeal_joint3',center=(0.15,-0.9,0),name='l_metatarsophalangeal_joint3',displayBBox=false,
                  children=[
                  HAnimSegment(DEF='l_proximal_phalanges3',name='l_proximal_phalanges3',displayBBox=false,
                    children=[
                    Transform(translation=(0.15,-0.9,0),displayBBox=false,
                      children=[
                      Shape(USE='HAnimJointShape',displayBBox=false)]),
                    Shape(displayBBox=false,
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='MTP3toPIP3',coordIndex=[0,1],
                        coord=Coordinate(point=[(0.15,-0.9,0),(0.15,-1.05,0)])))]),
                  HAnimJoint(DEF='l_f_proximal_Interphalangeal_joint3',center=(0.15,-1.05,0),name='l_f_proximal_Interphalangeal_joint3',displayBBox=false,
                    children=[
                    HAnimSegment(DEF='l_middle_phalanges3',name='l_middle_phalanges3',displayBBox=false,
                      children=[
                      Transform(translation=(0.15,-1.05,0),displayBBox=false,
                        children=[
                        Shape(USE='HAnimJointShape',displayBBox=false)]),
                      Shape(displayBBox=false,
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='PIP3toDIP3',coordIndex=[0,1],
                          coord=Coordinate(point=[(0.15,-1.05,0),(0.15,-1.13,0)])))]),
                    HAnimJoint(DEF='l_f_distal_Interphalangeal_joint3',center=(0.15,-1.13,0),name='l_f_distal_Interphalangeal_joint3',displayBBox=false,
                      children=[
                      HAnimSegment(DEF='l_distal_phalanges3',name='l_distal_phalanges3',displayBBox=false,
                        children=[
                        Transform(translation=(0.15,-1.13,0),displayBBox=false,
                          children=[
                          Shape(USE='HAnimJointShape',displayBBox=false)]),
                        Shape(displayBBox=false,
                          appearance=Appearance(
                            material=Material(emissiveColor=(1,1,1))),
                          geometry=IndexedLineSet(DEF='tiptoe_l_f_distal_Interphalangeal_joint3',coordIndex=[0,1],
                            coord=Coordinate(point=[(0.15,-1.13,0),(0.15,-1.16,0)])))])])])])])])]),
          #  CC 
          HAnimJoint(DEF='l_calcaneuscuboid_joint',center=(0.2,0.3,0),name='l_calcaneuscuboid_joint',displayBBox=false,
            children=[
            HAnimSegment(DEF='l_calcaneus',name='l_calcaneus',displayBBox=false,
              children=[
              Transform(translation=(0.2,0.3,0),displayBBox=false,
                children=[
                Shape(USE='HAnimJointShape',displayBBox=false)]),
              Shape(displayBBox=false,
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='CCtoTT',coordIndex=[0,1],
                  coord=Coordinate(point=[(0.2,0.3,0),(0.21,-0.3,0)])))]),
            #  TT 
            HAnimJoint(DEF='l_transverse_tarsal_joint',center=(0.21,-0.3,0),name='l_transverse_tarsal_joint',displayBBox=false,
              children=[
              HAnimSegment(DEF='l_cuboid',name='l_cuboid',displayBBox=false,
                children=[
                Transform(translation=(0.21,-0.3,0),displayBBox=false,
                  children=[
                  Shape(USE='HAnimJointShape',displayBBox=false)]),
                Shape(displayBBox=false,
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='TTtoTMT4',coordIndex=[0,1],
                    coord=Coordinate(point=[(0.21,-0.3,0),(0.25,-0.58,0)]))),
                Shape(displayBBox=false,
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='TTtoTMT5',coordIndex=[0,1],
                    coord=Coordinate(point=[(0.21,-0.3,0),(0.33,-0.52,0)])))]),
              #  TMT4 
              HAnimJoint(DEF='l_tarsometatarsal_joint4',center=(0.25,-0.58,0),name='l_tarsometatarsal_joint4',displayBBox=false,
                children=[
                HAnimSegment(DEF='l_metatarsal4',name='l_metatarsal4',displayBBox=false,
                  children=[
                  Transform(translation=(0.25,-0.58,0),displayBBox=false,
                    children=[
                    Shape(USE='HAnimJointShape',displayBBox=false)]),
                  Shape(displayBBox=false,
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='TMT4toMTP4',coordIndex=[0,1],
                      coord=Coordinate(point=[(0.25,-0.58,0),(0.25,-0.87,0)])))]),
                HAnimJoint(DEF='l_metatarsophalangeal_joint4',center=(0.25,-0.87,0),name='l_metatarsophalangeal_joint4',displayBBox=false,
                  children=[
                  HAnimSegment(DEF='l_proximal_phalanges4',name='l_proximal_phalanges4',displayBBox=false,
                    children=[
                    Transform(translation=(0.25,-0.87,0),displayBBox=false,
                      children=[
                      Shape(USE='HAnimJointShape',displayBBox=false)]),
                    Shape(displayBBox=false,
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='MTP4toPIP4',coordIndex=[0,1],
                        coord=Coordinate(point=[(0.25,-0.87,0),(0.25,-1.0,0)])))]),
                  HAnimJoint(DEF='l_f_proximal_Interphalangeal_joint4',center=(0.25,-1.0,0),name='l_f_proximal_Interphalangeal_joint4',displayBBox=false,
                    children=[
                    HAnimSegment(DEF='l_middle_phalanges4',name='l_middle_phalanges4',displayBBox=false,
                      children=[
                      Transform(translation=(0.25,-1.0,0),displayBBox=false,
                        children=[
                        Shape(USE='HAnimJointShape',displayBBox=false)]),
                      Shape(displayBBox=false,
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='PIP4toDIP4',coordIndex=[0,1],
                          coord=Coordinate(point=[(0.25,-1.0,0),(0.25,-1.1,0)])))]),
                    HAnimJoint(DEF='l_f_distal_Interphalangeal_joint4',center=(0.25,-1.1,0),name='l_f_distal_Interphalangeal_joint4',displayBBox=false,
                      children=[
                      HAnimSegment(DEF='l_distal_phalanges4',name='l_distal_phalanges4',displayBBox=false,
                        children=[
                        Transform(translation=(0.25,-1.1,0),displayBBox=false,
                          children=[
                          Shape(USE='HAnimJointShape',displayBBox=false)]),
                        Shape(displayBBox=false,
                          appearance=Appearance(
                            material=Material(emissiveColor=(1,1,1))),
                          geometry=IndexedLineSet(DEF='tiptoe_l_f_distal_Interphalangeal_joint4',coordIndex=[0,1],
                            coord=Coordinate(point=[(0.25,-1.1,0),(0.25,-1.15,0)])))])])])])]),
              #  TMT5 
              HAnimJoint(DEF='l_tarsometatarsal_joint5',center=(0.33,-0.52,0),name='l_tarsometatarsal_joint5',displayBBox=false,
                children=[
                HAnimSegment(DEF='l_metatarsal5',name='l_metatarsal5',displayBBox=false,
                  children=[
                  Transform(translation=(0.33,-0.52,0),displayBBox=false,
                    children=[
                    Shape(USE='HAnimJointShape',displayBBox=false)]),
                  Shape(displayBBox=false,
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='TMT5toMTP5',coordIndex=[0,1],
                      coord=Coordinate(point=[(0.33,-0.52,0),(0.34,-0.8,0)])))]),
                HAnimJoint(DEF='l_metatarsophalangeal_joint5',center=(0.34,-0.8,0),name='l_metatarsophalangeal_joint5',displayBBox=false,
                  children=[
                  HAnimSegment(DEF='l_proximal_phalanges5',name='l_proximal_phalanges5',displayBBox=false,
                    children=[
                    Transform(translation=(0.34,-0.8,0),displayBBox=false,
                      children=[
                      Shape(USE='HAnimJointShape',displayBBox=false)]),
                    Shape(displayBBox=false,
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='MTP5toPIP5',coordIndex=[0,1],
                        coord=Coordinate(point=[(0.34,-0.8,0),(0.34,-0.95,0)])))]),
                  HAnimJoint(DEF='l_f_proximal_Interphalangeal_joint5',center=(0.34,-0.95,0),name='l_f_proximal_Interphalangeal_joint5',displayBBox=false,
                    children=[
                    HAnimSegment(DEF='l_middle_phalanges5',name='l_middle_phalanges5',displayBBox=false,
                      children=[
                      Transform(translation=(0.34,-0.95,0),displayBBox=false,
                        children=[
                        Shape(USE='HAnimJointShape',displayBBox=false)]),
                      Shape(displayBBox=false,
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='PIP5toDIP5',coordIndex=[0,1],
                          coord=Coordinate(point=[(0.34,-0.95,0),(0.34,-1.05,0)])))]),
                    HAnimJoint(DEF='l_f_distal_Interphalangeal_joint5',center=(0.34,-1.05,0),name='l_f_distal_Interphalangeal_joint5',displayBBox=false,
                      children=[
                      HAnimSegment(DEF='l_distal_phalanges5',name='l_distal_phalanges5',displayBBox=false,
                        children=[
                        Transform(translation=(0.34,-1.05,0),displayBBox=false,
                          children=[
                          Shape(USE='HAnimJointShape',displayBBox=false)]),
                        Shape(displayBBox=false,
                          appearance=Appearance(
                            material=Material(emissiveColor=(1,1,1))),
                          geometry=IndexedLineSet(DEF='tiptoe_l_f_distal_Interphalangeal_joint5',coordIndex=[0,1],
                            coord=Coordinate(point=[(0.34,-1.05,0),(0.34,-1.08,0)])))])])])])])])])])]),],
      joints=[
      HAnimJoint(USE='hanim_HumanoidRoot',displayBBox=false),
      HAnimJoint(USE='l_talocrural_joint',displayBBox=false),
      HAnimJoint(USE='l_talocalcaneonavicular_joint',displayBBox=false),
      HAnimJoint(USE='l_cuneonavicular_joint1',displayBBox=false),
      HAnimJoint(USE='l_tarsometatarsal_joint1',displayBBox=false),
      HAnimJoint(USE='l_metatarsophalangeal_joint1',displayBBox=false),
      HAnimJoint(USE='l_f_Interphalangeal_joint',displayBBox=false),
      HAnimJoint(USE='l_cuneonavicular_joint2',displayBBox=false),
      HAnimJoint(USE='l_tarsometatarsal_joint2',displayBBox=false),
      HAnimJoint(USE='l_metatarsophalangeal_joint2',displayBBox=false),
      HAnimJoint(USE='l_f_proximal_Interphalangeal_joint2',displayBBox=false),
      HAnimJoint(USE='l_f_distal_Interphalangeal_joint2',displayBBox=false),
      HAnimJoint(USE='l_cuneonavicular_joint3',displayBBox=false),
      HAnimJoint(USE='l_tarsometatarsal_joint3',displayBBox=false),
      HAnimJoint(USE='l_metatarsophalangeal_joint3',displayBBox=false),
      HAnimJoint(USE='l_f_proximal_Interphalangeal_joint3',displayBBox=false),
      HAnimJoint(USE='l_f_distal_Interphalangeal_joint3',displayBBox=false),
      HAnimJoint(USE='l_calcaneuscuboid_joint',displayBBox=false),
      HAnimJoint(USE='l_transverse_tarsal_joint',displayBBox=false),
      HAnimJoint(USE='l_tarsometatarsal_joint4',displayBBox=false),
      HAnimJoint(USE='l_metatarsophalangeal_joint4',displayBBox=false),
      HAnimJoint(USE='l_f_proximal_Interphalangeal_joint4',displayBBox=false),
      HAnimJoint(USE='l_f_distal_Interphalangeal_joint4',displayBBox=false),
      HAnimJoint(USE='l_tarsometatarsal_joint5',displayBBox=false),
      HAnimJoint(USE='l_metatarsophalangeal_joint5',displayBBox=false),
      HAnimJoint(USE='l_f_proximal_Interphalangeal_joint5',displayBBox=false),
      HAnimJoint(USE='l_f_distal_Interphalangeal_joint5',displayBBox=false)],
      segments=[
      HAnimSegment(USE='l_talus',displayBBox=false),
      HAnimSegment(USE='l_navicular',displayBBox=false),
      HAnimSegment(USE='l_cuneiform1',displayBBox=false),
      HAnimSegment(USE='l_metatarsal1',displayBBox=false),
      HAnimSegment(USE='l_proximal_phalanges1',displayBBox=false),
      HAnimSegment(USE='l_distal_phalanges1',displayBBox=false),
      HAnimSegment(USE='l_cuneiform2',displayBBox=false),
      HAnimSegment(USE='l_metatarsal2',displayBBox=false),
      HAnimSegment(USE='l_proximal_phalanges2',displayBBox=false),
      HAnimSegment(USE='l_middle_phalanges2',displayBBox=false),
      HAnimSegment(USE='l_distal_phalanges2',displayBBox=false),
      HAnimSegment(USE='l_cuneiform3',displayBBox=false),
      HAnimSegment(USE='l_metatarsal3',displayBBox=false),
      HAnimSegment(USE='l_proximal_phalanges3',displayBBox=false),
      HAnimSegment(USE='l_middle_phalanges3',displayBBox=false),
      HAnimSegment(USE='l_distal_phalanges3',displayBBox=false),
      HAnimSegment(USE='l_calcaneus',displayBBox=false),
      HAnimSegment(USE='l_cuboid',displayBBox=false),
      HAnimSegment(USE='l_metatarsal4',displayBBox=false),
      HAnimSegment(USE='l_proximal_phalanges4',displayBBox=false),
      HAnimSegment(USE='l_middle_phalanges4',displayBBox=false),
      HAnimSegment(USE='l_distal_phalanges4',displayBBox=false),
      HAnimSegment(USE='l_metatarsal5',displayBBox=false),
      HAnimSegment(USE='l_proximal_phalanges5',displayBBox=false),
      HAnimSegment(USE='l_middle_phalanges5',displayBBox=false),
      HAnimSegment(USE='l_distal_phalanges5',displayBBox=false)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HAnimModelFootLeft.py")