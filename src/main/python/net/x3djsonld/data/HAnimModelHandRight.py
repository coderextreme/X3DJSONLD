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
    meta(content='HAnimModelHandRight.x3d',name='title'),
    meta(content='Right hand using high-fidelity definitions for H-Anim version 2.2',name='description'),
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
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandRight.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='HAnimModelHandRight.x3d'),
    HAnimHumanoid(DEF='Humanoid_Right_hand',jointBindingPositions=[(0,0,0)],jointBindingRotations=[(0,0,1,0)],jointBindingScales=[(1,1,1)],loa=-1,name='Humanoid_Right_hand',skeletalConfiguration='BASIC',version='2.0',displayBBox=false,
      skeleton=[
      HAnimJoint(DEF='hanim_HumanoidRoot',name='humanoid_root',displayBBox=false,
        children=[
        HAnimJoint(DEF='r_radiocarpal_joint',name='r_radiocarpal_joint',displayBBox=false,
          children=[
          HAnimSegment(DEF='r_wrist',name='r_wrist',displayBBox=false,
            children=[
            Transform(displayBBox=false,
              children=[
              Shape(DEF='HAnimJointShape',displayBBox=false,
                geometry=Sphere(radius=0.025),
                appearance=Appearance(DEF='HAnimJointAppearanceBlue',
                  material=Material(diffuseColor=(0,0,1))))]),
            Shape(displayBBox=false,
              appearance=Appearance(
                material=Material(emissiveColor=(1,1,1))),
              geometry=IndexedLineSet(DEF='RCToMC12',coordIndex=[0,1],
                coord=Coordinate(point=[(0,0,0),(-0.1,0.1,0)]))),
            Shape(displayBBox=false,
              appearance=Appearance(
                material=Material(emissiveColor=(1,1,1))),
              geometry=IndexedLineSet(DEF='RCToMC3',coordIndex=[0,1],
                coord=Coordinate(point=[(0,0,0),(0.0,0.07,0)]))),
            Shape(displayBBox=false,
              appearance=Appearance(
                material=Material(emissiveColor=(1,1,1))),
              geometry=IndexedLineSet(DEF='RCToMC45',coordIndex=[0,1],
                coord=Coordinate(point=[(0,0,0),(0.1,0.1,0)])))]),
          #  MC12 
          HAnimJoint(DEF='r_midcarpal_joint_12',center=(-0.1,0.1,0),name='r_midcarpal_joint_12',displayBBox=false,
            children=[
            HAnimSegment(DEF='r_trapezoid',name='r_trapezoid',displayBBox=false,
              children=[
              Transform(translation=(-0.1,0.1,0),displayBBox=false,
                children=[
                Shape(DEF='HAnimNewJointShape',displayBBox=false,
                  geometry=Sphere(radius=0.025),
                  appearance=Appearance(DEF='HAnimJointAppearanceRed',
                    material=Material(diffuseColor=(1,0,0))))]),
              Shape(displayBBox=false,
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='MC12toCMC1',coordIndex=[0,1],
                  coord=Coordinate(point=[(-0.1,0.1,0),(-0.2,0.15,0)]))),
              Shape(displayBBox=false,
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='MC12toCMC2',coordIndex=[0,1],
                  coord=Coordinate(point=[(-0.1,0.1,0),(-0.1,0.2,0)])))]),
            #  thumb finger 
            HAnimJoint(DEF='r_carpometacarpal_joint_1',center=(-0.2,0.15,0),name='r_carpometacarpal_joint_1',displayBBox=false,
              children=[
              HAnimSegment(DEF='r_metacarpal_1',name='r_metacarpal_1',displayBBox=false,
                children=[
                Transform(translation=(-0.2,0.15,0),displayBBox=false,
                  children=[
                  Shape(USE='HAnimJointShape',displayBBox=false)]),
                Shape(displayBBox=false,
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CMC1toMCP1',coordIndex=[0,1],
                    coord=Coordinate(point=[(-0.2,0.15,0),(-0.3,0.3,0)])))]),
              HAnimJoint(DEF='r_metacarpophalangeal_joint_1',center=(-0.3,0.3,0),name='r_metacarpophalangeal_joint_1',displayBBox=false,
                children=[
                HAnimSegment(DEF='r_proximal_phalanges1',name='r_proximal_phalanges1',displayBBox=false,
                  children=[
                  Transform(translation=(-0.3,0.3,0),displayBBox=false,
                    children=[
                    Shape(USE='HAnimJointShape',displayBBox=false)]),
                  Shape(displayBBox=false,
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='MCP11toIP1',coordIndex=[0,1],
                      coord=Coordinate(point=[(-0.3,0.3,0),(-0.35,0.4,0)])))]),
                HAnimJoint(DEF='r_interphalangeal_joint_1',center=(-0.35,0.4,0),name='r_interphalangeal_joint_1',displayBBox=false,
                  children=[
                  HAnimSegment(DEF='r_distal_phalanges1',name='r_distal_phalanges1',displayBBox=false,
                    children=[
                    Transform(translation=(-0.35,0.4,0),displayBBox=false,
                      children=[
                      Shape(USE='HAnimJointShape',displayBBox=false)]),
                    Shape(displayBBox=false,
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='fingertip_r_interphalangeal_joint_1',coordIndex=[0,1],
                        coord=Coordinate(point=[(-0.35,0.4,0),(-0.36,0.45,0)])))])])])]),
            #  index finger 
            HAnimJoint(DEF='r_carpometacarpal_joint_2',center=(-0.1,0.2,0),name='r_carpometacarpal_joint_2',displayBBox=false,
              children=[
              HAnimSegment(DEF='r_metacarpal_2',name='r_metacarpal_2',displayBBox=false,
                children=[
                Transform(translation=(-0.1,0.2,0),displayBBox=false,
                  children=[
                  Shape(USE='HAnimJointShape',displayBBox=false)]),
                Shape(displayBBox=false,
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CMC2toMCP2',coordIndex=[0,1],
                    coord=Coordinate(point=[(-0.1,0.2,0),(-0.15,0.5,0)])))]),
              HAnimJoint(DEF='r_metacarpophalangeal_joint_2',center=(-0.15,0.5,0),name='r_metacarpophalangeal_joint_2',displayBBox=false,
                children=[
                HAnimSegment(DEF='r_proximal_phalanges2',name='r_proximal_phalanges2',displayBBox=false,
                  children=[
                  Transform(translation=(-0.15,0.5,0),displayBBox=false,
                    children=[
                    Shape(USE='HAnimJointShape',displayBBox=false)]),
                  Shape(displayBBox=false,
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='MCP2toPIP2',coordIndex=[0,1],
                      coord=Coordinate(point=[(-0.15,0.5,0),(-0.2,0.7,0)])))]),
                HAnimJoint(DEF='r_proximal_interphalangeal_joint_2',center=(-0.2,0.7,0),name='r_proximal_interphalangeal_joint_2',displayBBox=false,
                  children=[
                  HAnimSegment(DEF='r_middle_phalanges2',name='r_middle_phalanges2',displayBBox=false,
                    children=[
                    Transform(translation=(-0.2,0.7,0),displayBBox=false,
                      children=[
                      Shape(USE='HAnimJointShape',displayBBox=false)]),
                    Shape(displayBBox=false,
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='PIP2toDIP2',coordIndex=[0,1],
                        coord=Coordinate(point=[(-0.2,0.7,0),(-0.24,0.87,0)])))]),
                  HAnimJoint(DEF='r_distal_interphalangeal_joint_2',center=(-0.24,0.87,0),name='r_distal_interphalangeal_joint_2',displayBBox=false,
                    children=[
                    HAnimSegment(DEF='r_distal_phalanges2',name='r_distal_phalanges2',displayBBox=false,
                      children=[
                      Transform(translation=(-0.24,0.87,0),displayBBox=false,
                        children=[
                        Shape(USE='HAnimJointShape',displayBBox=false)]),
                      Shape(displayBBox=false,
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='fingertip_r_distal_interphalangeal_joint_2',coordIndex=[0,1],
                          coord=Coordinate(point=[(-0.24,0.87,0),(-0.26,0.93,0)])))])])])])])]),
          #  MC3 
          HAnimJoint(DEF='r_midcarpal_joint_3',center=(0.0,0.07,0),name='r_midcarpal_joint_3',displayBBox=false,
            children=[
            HAnimSegment(DEF='r_capitate',name='r_capitate',displayBBox=false,
              children=[
              Transform(translation=(0.0,0.07,0),displayBBox=false,
                children=[
                Shape(USE='HAnimNewJointShape',displayBBox=false)]),
              Shape(displayBBox=false,
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='MC3toCMC3',coordIndex=[0,1],
                  coord=Coordinate(point=[(0.0,0.07,0),(0.0,0.2,0)])))]),
            #  Middle fingle 
            HAnimJoint(DEF='r_carpometacarpal_joint_3',center=(0.0,0.2,0),name='r_carpometacarpal_joint_3',displayBBox=false,
              children=[
              HAnimSegment(DEF='r_metacarpal_3',name='r_metacarpal_3',displayBBox=false,
                children=[
                Transform(translation=(0.0,0.2,0),displayBBox=false,
                  children=[
                  Shape(USE='HAnimJointShape',displayBBox=false)]),
                Shape(displayBBox=false,
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CMC3toMCP3',coordIndex=[0,1],
                    coord=Coordinate(point=[(0.0,0.2,0),(-0.03,0.5,0)])))]),
              HAnimJoint(DEF='r_metacarpophalangeal_joint_3',center=(-0.03,0.5,0),name='r_metacarpophalangeal_joint_3',displayBBox=false,
                children=[
                HAnimSegment(DEF='r_proximal_phalanges3',name='r_proximal_phalanges3',displayBBox=false,
                  children=[
                  Transform(translation=(-0.03,0.5,0),displayBBox=false,
                    children=[
                    Shape(USE='HAnimJointShape',displayBBox=false)]),
                  Shape(displayBBox=false,
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='MCP3toPIP3',coordIndex=[0,1],
                      coord=Coordinate(point=[(-0.03,0.5,0),(-0.05,0.75,0)])))]),
                HAnimJoint(DEF='r_proximal_interphalangeal_joint_3',center=(-0.05,0.75,0),name='r_proximal_interphalangeal_joint_3',displayBBox=false,
                  children=[
                  HAnimSegment(DEF='r_middle_phalanges3',name='r_middle_phalanges3',displayBBox=false,
                    children=[
                    Transform(translation=(-0.05,0.75,0),displayBBox=false,
                      children=[
                      Shape(USE='HAnimJointShape',displayBBox=false)]),
                    Shape(displayBBox=false,
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='PIP3toDIP3',coordIndex=[0,1],
                        coord=Coordinate(point=[(-0.05,0.75,0),(-0.08,0.96,0)])))]),
                  HAnimJoint(DEF='r_distal_interphalangeal_joint_3',center=(-0.08,0.96,0),name='r_distal_interphalangeal_joint_3',displayBBox=false,
                    children=[
                    HAnimSegment(DEF='r_distal_phalanges3',name='r_distal_phalanges3',displayBBox=false,
                      children=[
                      Transform(translation=(-0.08,0.96,0),displayBBox=false,
                        children=[
                        Shape(USE='HAnimJointShape',displayBBox=false)]),
                      Shape(displayBBox=false,
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='fingertip_r_distal_interphalangeal_joint_3',coordIndex=[0,1],
                          coord=Coordinate(point=[(-0.08,0.96,0),(-0.09,1.05,0)])))])])])])])]),
          #  MC45 
          HAnimJoint(DEF='r_midcarpal_joint_45',center=(0.1,0.1,0),name='r_midcarpal_joint_45',displayBBox=false,
            children=[
            HAnimSegment(DEF='r_hamate',name='r_hamate',displayBBox=false,
              children=[
              Transform(translation=(0.1,0.1,0),displayBBox=false,
                children=[
                Shape(USE='HAnimNewJointShape',displayBBox=false)]),
              Shape(displayBBox=false,
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='MC45toCMC4',coordIndex=[0,1],
                  coord=Coordinate(point=[(0.1,0.1,0),(0.1,0.2,0)]))),
              Shape(displayBBox=false,
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='MC45toCMC5',coordIndex=[0,1],
                  coord=Coordinate(point=[(0.1,0.1,0),(0.15,0.17,0)])))]),
            #  ring finger 
            HAnimJoint(DEF='r_carpometacarpal_joint_4',center=(0.1,0.2,0),name='r_carpometacarpal_joint_4',displayBBox=false,
              children=[
              HAnimSegment(DEF='r_metacarpal_4',name='r_metacarpal_4',displayBBox=false,
                children=[
                Transform(translation=(0.1,0.2,0),displayBBox=false,
                  children=[
                  Shape(USE='HAnimJointShape',displayBBox=false)]),
                Shape(displayBBox=false,
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CMC4toMCP4',coordIndex=[0,1],
                    coord=Coordinate(point=[(0.1,0.2,0),(0.1,0.47,0)])))]),
              HAnimJoint(DEF='r_metacarpophalangeal_joint_4',center=(0.1,0.47,0),name='r_metacarpophalangeal_joint_4',displayBBox=false,
                children=[
                HAnimSegment(DEF='r_proximal_phalanges4',name='r_proximal_phalanges4',displayBBox=false,
                  children=[
                  Transform(translation=(0.1,0.47,0),displayBBox=false,
                    children=[
                    Shape(USE='HAnimJointShape',displayBBox=false)]),
                  Shape(displayBBox=false,
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='MCP4toPIP4',coordIndex=[0,1],
                      coord=Coordinate(point=[(0.1,0.47,0),(0.1,0.7,0)])))]),
                HAnimJoint(DEF='r_proximal_interphalangeal_joint_4',center=(0.1,0.7,0),name='r_proximal_interphalangeal_joint_4',displayBBox=false,
                  children=[
                  HAnimSegment(DEF='r_middle_phalanges4',name='r_middle_phalanges4',displayBBox=false,
                    children=[
                    Transform(translation=(0.1,0.7,0),displayBBox=false,
                      children=[
                      Shape(USE='HAnimJointShape',displayBBox=false)]),
                    Shape(displayBBox=false,
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='PIP4toDIP4',coordIndex=[0,1],
                        coord=Coordinate(point=[(0.1,0.7,0),(0.1,0.93,0)])))]),
                  HAnimJoint(DEF='r_distal_interphalangeal_joint_4',center=(0.1,0.93,0),name='r_distal_interphalangeal_joint_4',displayBBox=false,
                    children=[
                    HAnimSegment(DEF='r_distal_phalanx4',name='r_distal_phalanx4',displayBBox=false,
                      children=[
                      Transform(translation=(0.1,0.93,0),displayBBox=false,
                        children=[
                        Shape(USE='HAnimJointShape',displayBBox=false)]),
                      Shape(displayBBox=false,
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='fingertip_r_distal_interphalangeal_joint_4',coordIndex=[0,1],
                          coord=Coordinate(point=[(0.1,0.93,0),(0.1,1.0,0)])))])])])])]),
            #  pinky finger 
            HAnimJoint(DEF='r_carpometacarpal_joint_5',center=(0.15,0.17,0),name='r_carpometacarpal_joint_5',displayBBox=false,
              children=[
              HAnimSegment(DEF='r_metacarpal_5',name='r_metacarpal_5',displayBBox=false,
                children=[
                Transform(translation=(0.15,0.17,0),displayBBox=false,
                  children=[
                  Shape(USE='HAnimJointShape',displayBBox=false)]),
                Shape(displayBBox=false,
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CMC5toMCP5',coordIndex=[0,1],
                    coord=Coordinate(point=[(0.15,0.17,0),(0.2,0.4,0)])))]),
              HAnimJoint(DEF='r_metacarpophalangeal_joint_5',center=(0.2,0.4,0),name='r_metacarpophalangeal_joint_5',displayBBox=false,
                children=[
                HAnimSegment(DEF='r_proximal_phalanges5',name='r_proximal_phalanges2',displayBBox=false,
                  children=[
                  Transform(translation=(0.2,0.4,0),displayBBox=false,
                    children=[
                    Shape(USE='HAnimJointShape',displayBBox=false)]),
                  Shape(displayBBox=false,
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='MCP5toPIP5',coordIndex=[0,1],
                      coord=Coordinate(point=[(0.2,0.4,0),(0.23,0.63,0)])))]),
                HAnimJoint(DEF='r_proximal_interphalangeal_joint_5',center=(0.23,0.63,0),name='r_proximal_interphalangeal_joint_5',displayBBox=false,
                  children=[
                  HAnimSegment(DEF='r_middle_phalanges5',name='r_middle_phalanges5',displayBBox=false,
                    children=[
                    Transform(translation=(0.23,0.63,0),displayBBox=false,
                      children=[
                      Shape(USE='HAnimJointShape',displayBBox=false)]),
                    Shape(displayBBox=false,
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='PIP5toDIP5',coordIndex=[0,1],
                        coord=Coordinate(point=[(0.23,0.63,0),(0.25,0.79,0)])))]),
                  HAnimJoint(DEF='r_distal_interphalangeal_joint_5',center=(0.25,0.79,0),name='r_distal_interphalangeal_joint_5',displayBBox=false,
                    children=[
                    HAnimSegment(DEF='r_distal_phalanges5',name='r_distal_phalanges5',displayBBox=false,
                      children=[
                      Transform(translation=(0.25,0.79,0),displayBBox=false,
                        children=[
                        Shape(USE='HAnimJointShape',displayBBox=false)]),
                      Shape(displayBBox=false,
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='fingertip_r_distal_interphalangeal_joint_5',coordIndex=[0,1],
                          coord=Coordinate(point=[(0.25,0.79,0),(0.26,0.85,0)])))])])])])])])])]),],
      joints=[
      HAnimJoint(USE='hanim_HumanoidRoot',displayBBox=false),
      HAnimJoint(USE='r_radiocarpal_joint',displayBBox=false),
      HAnimJoint(USE='r_midcarpal_joint_12',displayBBox=false),
      HAnimJoint(USE='r_carpometacarpal_joint_1',displayBBox=false),
      HAnimJoint(USE='r_metacarpophalangeal_joint_1',displayBBox=false),
      HAnimJoint(USE='r_interphalangeal_joint_1',displayBBox=false),
      HAnimJoint(USE='r_carpometacarpal_joint_2',displayBBox=false),
      HAnimJoint(USE='r_metacarpophalangeal_joint_2',displayBBox=false),
      HAnimJoint(USE='r_proximal_interphalangeal_joint_2',displayBBox=false),
      HAnimJoint(USE='r_distal_interphalangeal_joint_2',displayBBox=false),
      HAnimJoint(USE='r_midcarpal_joint_3',displayBBox=false),
      HAnimJoint(USE='r_carpometacarpal_joint_3',displayBBox=false),
      HAnimJoint(USE='r_metacarpophalangeal_joint_3',displayBBox=false),
      HAnimJoint(USE='r_proximal_interphalangeal_joint_3',displayBBox=false),
      HAnimJoint(USE='r_distal_interphalangeal_joint_3',displayBBox=false),
      HAnimJoint(USE='r_midcarpal_joint_45',displayBBox=false),
      HAnimJoint(USE='r_carpometacarpal_joint_4',displayBBox=false),
      HAnimJoint(USE='r_metacarpophalangeal_joint_4',displayBBox=false),
      HAnimJoint(USE='r_proximal_interphalangeal_joint_4',displayBBox=false),
      HAnimJoint(USE='r_distal_interphalangeal_joint_4',displayBBox=false),
      HAnimJoint(USE='r_carpometacarpal_joint_5',displayBBox=false),
      HAnimJoint(USE='r_metacarpophalangeal_joint_5',displayBBox=false),
      HAnimJoint(USE='r_proximal_interphalangeal_joint_5',displayBBox=false),
      HAnimJoint(USE='r_distal_interphalangeal_joint_5',displayBBox=false)],
      segments=[
      HAnimSegment(USE='r_wrist',displayBBox=false),
      HAnimSegment(USE='r_trapezoid',displayBBox=false),
      HAnimSegment(USE='r_metacarpal_1',displayBBox=false),
      HAnimSegment(USE='r_proximal_phalanges1',displayBBox=false),
      HAnimSegment(USE='r_distal_phalanges1',displayBBox=false),
      HAnimSegment(USE='r_metacarpal_2',displayBBox=false),
      HAnimSegment(USE='r_proximal_phalanges2',displayBBox=false),
      HAnimSegment(USE='r_middle_phalanges2',displayBBox=false),
      HAnimSegment(USE='r_distal_phalanges2',displayBBox=false),
      HAnimSegment(USE='r_capitate',displayBBox=false),
      HAnimSegment(USE='r_metacarpal_3',displayBBox=false),
      HAnimSegment(USE='r_proximal_phalanges3',displayBBox=false),
      HAnimSegment(USE='r_middle_phalanges3',displayBBox=false),
      HAnimSegment(USE='r_distal_phalanges3',displayBBox=false),
      HAnimSegment(USE='r_hamate',displayBBox=false),
      HAnimSegment(USE='r_metacarpal_4',displayBBox=false),
      HAnimSegment(USE='r_proximal_phalanges4',displayBBox=false),
      HAnimSegment(USE='r_middle_phalanges4',displayBBox=false),
      HAnimSegment(USE='r_distal_phalanx4',displayBBox=false),
      HAnimSegment(USE='r_metacarpal_5',displayBBox=false),
      HAnimSegment(USE='r_proximal_phalanges5',displayBBox=false),
      HAnimSegment(USE='r_middle_phalanges5',displayBBox=false),
      HAnimSegment(USE='r_distal_phalanges5',displayBBox=false)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HAnimModelHandRight.py")
