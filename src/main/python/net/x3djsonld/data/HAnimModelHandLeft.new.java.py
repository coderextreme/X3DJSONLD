####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python HAnimModelHandLeft.py
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
    meta(content='HAnimModelHandLeft.x3d',name='title'),
    meta(content='Left hand, using high-fidelity definitions for HAnim version 2.0',name='description'),
    meta(content='Kwan-Hee YOO, Don Brutzman and Joe Williams',name='creator'),
    meta(content='26 January 2015',name='created'),
    meta(content='23 December 2021',name='modified'),
    meta(content='fix visible geometry for thumb and index finger, midcarpal_1 and midcarpal_2',name='TODO'),
    meta(content='HAnimModelHandRightSegmentVisualizationError.png',name='Image'),
    meta(content='not yet to scale, also relatively flat',name='error'),
    meta(content='TODO will X3D HAnim component add a new level to support LOA-4 functionality?',name='warning'),
    meta(content='TODO describe how to compute and apply offsets for center values whenever attaching this appendage to a body',name='info'),
    meta(content='https://www.web3d.org/working-groups/humanoid-animation-HAnim',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19774/V2.0',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#TheHands',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#f-HandJoints',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#Hierarchy4',name='reference'),
    meta(content='https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html',name='reference'),
    meta(content='X3D HAnim humanoid animation',name='subject'),
    meta(content='Integrate and confirm Segment/Joint names, Viewpoints.',name='TODO'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='HAnimModelHandLeft.x3d'),
    HAnimHumanoid(DEF='hanim_Hand_Left',name='Hand_Left',loa=4,version='2.0',
      metadata=MetadataSet(name='HAnimHumanoid.info',reference='https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid',
        value=[
        MetadataString(name='authorName',value=["Kwan-Hee YOO, Don Brutzman and Joe Williams"])]),
      skeleton=[
      HAnimJoint(DEF='hanim_humanoid_root',name='humanoid_root',llimit=[0,0,0],ulimit=[0,0,0],
        #  Might consider putting a HAnimSegment here, but that doesn't help with re-use of this hand model 
        children=[
        HAnimJoint(DEF='hanim_l_radiocarpal',name='l_radiocarpal',description='connection joint of hand to leg above',llimit=[0,0,0],ulimit=[0,0,0],
          children=[
          HAnimSegment(DEF='hanim_l_carpal',name='l_carpal',
            children=[
            Transform(
              children=[
              Shape(DEF='HAnimJointShape',
                appearance=Appearance(DEF='HAnimJointAppearanceBlue',
                  material=Material(diffuseColor=(0,0,1))),
                geometry=Sphere(radius=0.025))]),
            Shape(
              appearance=Appearance(
                material=Material(emissiveColor=(1,1,1))),
              geometry=IndexedLineSet(DEF='RCToMC12',coordIndex=[0,1],
                coord=Coordinate(point=[(0,0,0),(0.1,0.1,0)]))),
            Shape(
              appearance=Appearance(
                material=Material(emissiveColor=(1,1,1))),
              geometry=IndexedLineSet(DEF='RCToMC3',coordIndex=[0,1],
                coord=Coordinate(point=[(0,0,0),(0,0.07,0)]))),
            Shape(
              appearance=Appearance(
                material=Material(emissiveColor=(1,1,1))),
              geometry=IndexedLineSet(DEF='RCToMC45',coordIndex=[0,1],
                coord=Coordinate(point=[(0,0,0),(-0.1,0.1,0)])))]),
          #  MC1 
          HAnimJoint(DEF='hanim_l_midcarpal_1',name='l_midcarpal_1',center=(0.14,0.09,0),llimit=[0,0,0],ulimit=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_l_trapezium',name='l_trapezium',
              children=[
              Transform(translation=(0.14,0.09,0),
                children=[
                Shape(DEF='HAnimNewJointShape',
                  appearance=Appearance(DEF='HAnimJointAppearanceRed',
                    material=Material(diffuseColor=(1,0,0))),
                  geometry=Sphere(radius=0.025))]),
              Shape(
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='MC12toCMC1',coordIndex=[0,1],
                  coord=Coordinate(point=[(0.1,0.1,0),(0.2,0.15,0)]))),
              Shape(
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='MC1toCMC1',coordIndex=[0,1],
                  coord=Coordinate(point=[(0.1,0.1,0),(0.1,0.2,0)])))]),
            #  thumb finger 
            HAnimJoint(DEF='hanim_l_carpometacarpal_1',name='l_carpometacarpal_1',center=(0.2,0.15,0),llimit=[0,0,0],ulimit=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_l_metacarpal_1',name='l_metacarpal_1',
                children=[
                Transform(translation=(0.2,0.15,0),
                  children=[
                  Shape(USE='HAnimJointShape')]),
                Shape(
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CMC1toMCP1',coordIndex=[0,1],
                    coord=Coordinate(point=[(0.2,0.15,0),(0.3,0.3,0)])))]),
              HAnimJoint(DEF='hanim_l_metacarpophalangeal_1',name='l_metacarpophalangeal_1',center=(0.3,0.3,0),llimit=[0,0,0],ulimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_1',name='l_carpal_proximal_phalanx_1',
                  children=[
                  Transform(translation=(0.3,0.3,0),
                    children=[
                    Shape(USE='HAnimJointShape')]),
                  Shape(
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='MCP11toIP1',coordIndex=[0,1],
                      coord=Coordinate(point=[(0.3,0.3,0),(0.35,0.4,0)])))]),
                HAnimJoint(DEF='hanim_l_carpal_interphalangeal_1',name='l_carpal_interphalangeal_1',center=(0.35,0.4,0),llimit=[0,0,0],ulimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_l_carpal_distal_phalanx_1',name='l_carpal_distal_phalanx_1',
                    children=[
                    Transform(translation=(0.35,0.4,0),
                      children=[
                      Shape(USE='HAnimJointShape')]),
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='fingertip_l_carpal_interphalangeal_1',coordIndex=[0,1],
                        coord=Coordinate(point=[(0.35,0.4,0),(0.36,0.45,0)])))])])])])]),
          #  MC2 
          HAnimJoint(DEF='hanim_l_midcarpal_2',name='l_midcarpal_2',center=(0.07,0.07,0),llimit=[0,0,0],ulimit=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_l_trapezoid',name='l_trapezoid',
              children=[
              Transform(translation=(0.07,0.07,0),
                children=[
                Shape(USE='HAnimNewJointShape')]),
              Shape(
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='MC2toCMC2',coordIndex=[0,1],
                  coord=Coordinate(point=[(-0.1,0.1,0),(-0.1,0.2,0)])))]),
            #  index finger 
            HAnimJoint(DEF='hanim_l_carpometacarpal_2',name='l_carpometacarpal_2',center=(0.1,0.2,0),llimit=[0,0,0],ulimit=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_l_metacarpal_2',name='l_metacarpal_2',
                children=[
                Transform(translation=(0.1,0.2,0),
                  children=[
                  Shape(USE='HAnimJointShape')]),
                Shape(
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CMC2toMCP2',coordIndex=[0,1],
                    coord=Coordinate(point=[(0.1,0.2,0),(0.15,0.5,0)])))]),
              HAnimJoint(DEF='hanim_l_metacarpophalangeal_2',name='l_metacarpophalangeal_2',center=(0.15,0.5,0),llimit=[0,0,0],ulimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_2',name='l_carpal_proximal_phalanx_2',
                  children=[
                  Transform(translation=(0.15,0.5,0),
                    children=[
                    Shape(USE='HAnimJointShape')]),
                  Shape(
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='MCP2toPIP2',coordIndex=[0,1],
                      coord=Coordinate(point=[(0.15,0.5,0),(0.2,0.7,0)])))]),
                HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_2',name='l_carpal_proximal_interphalangeal_2',center=(0.2,0.7,0),llimit=[0,0,0],ulimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_l_carpal_middle_phalanx_2',name='l_carpal_middle_phalanx_2',
                    children=[
                    Transform(translation=(0.2,0.7,0),
                      children=[
                      Shape(USE='HAnimJointShape')]),
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='PIP2toDIP2',coordIndex=[0,1],
                        coord=Coordinate(point=[(0.2,0.7,0),(0.24,0.87,0)])))]),
                  HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_2',name='l_carpal_distal_interphalangeal_2',center=(0.24,0.87,0),llimit=[0,0,0],ulimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_l_carpal_distal_phalanx_2',name='l_carpal_distal_phalanx_2',
                      children=[
                      Transform(translation=(0.24,0.87,0),
                        children=[
                        Shape(USE='HAnimJointShape')]),
                      Shape(
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='fingertip_l_carpal_distal_interphalangeal_2',coordIndex=[0,1],
                          coord=Coordinate(point=[(0.24,0.87,0),(0.26,0.93,0)])))])])])])])]),
          #  MC3 
          HAnimJoint(DEF='hanim_l_midcarpal_3',name='l_midcarpal_3',center=(0,0.07,0),llimit=[0,0,0],ulimit=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_l_capitate',name='l_capitate',
              children=[
              Transform(translation=(0,0.07,0),
                children=[
                Shape(USE='HAnimNewJointShape')]),
              Shape(
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='MC3toCMC3',coordIndex=[0,1],
                  coord=Coordinate(point=[(0,0.07,0),(0,0.2,0)])))]),
            #  Middle fingle 
            HAnimJoint(DEF='hanim_l_carpometacarpal_3',name='l_carpometacarpal_3',center=(0,0.2,0),llimit=[0,0,0],ulimit=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_l_metacarpal_3',name='l_metacarpal_3',
                children=[
                Transform(translation=(0,0.2,0),
                  children=[
                  Shape(USE='HAnimJointShape')]),
                Shape(
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CMC3toMCP3',coordIndex=[0,1],
                    coord=Coordinate(point=[(0,0.2,0),(0.03,0.5,0)])))]),
              HAnimJoint(DEF='hanim_l_metacarpophalangeal_3',name='l_metacarpophalangeal_3',center=(0.03,0.5,0),llimit=[0,0,0],ulimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_3',name='l_carpal_proximal_phalanx_3',
                  children=[
                  Transform(translation=(0.03,0.5,0),
                    children=[
                    Shape(USE='HAnimJointShape')]),
                  Shape(
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='MCP3toPIP3',coordIndex=[0,1],
                      coord=Coordinate(point=[(0.03,0.5,0),(0.05,0.75,0)])))]),
                HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_3',name='l_carpal_proximal_interphalangeal_3',center=(0.05,0.75,0),llimit=[0,0,0],ulimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_l_carpal_middle_phalanx_3',name='l_carpal_middle_phalanx_3',
                    children=[
                    Transform(translation=(0.05,0.75,0),
                      children=[
                      Shape(USE='HAnimJointShape')]),
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='PIP3toDIP3',coordIndex=[0,1],
                        coord=Coordinate(point=[(0.05,0.75,0),(0.08,0.96,0)])))]),
                  HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_3',name='l_carpal_distal_interphalangeal_3',center=(0.08,0.96,0),llimit=[0,0,0],ulimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_l_carpal_distal_phalanx_3',name='l_carpal_distal_phalanx_3',
                      children=[
                      Transform(translation=(0.08,0.96,0),
                        children=[
                        Shape(USE='HAnimJointShape')]),
                      Shape(
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='fingertip_l_carpal_distal_interphalangeal_3',coordIndex=[0,1],
                          coord=Coordinate(point=[(0.08,0.96,0),(0.09,1.05,0)])))])])])])])]),
          #  MC45 
          HAnimJoint(DEF='hanim_l_midcarpal_4_5',name='l_midcarpal_4_5',center=(-0.1,0.1,0),llimit=[0,0,0],ulimit=[0,0,0],
            children=[
            HAnimSegment(DEF='hanim_l_hamate',name='l_hamate',
              children=[
              Transform(translation=(-0.1,0.1,0),
                children=[
                Shape(USE='HAnimNewJointShape')]),
              Shape(
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='MC45toCMC4',coordIndex=[0,1],
                  coord=Coordinate(point=[(-0.1,0.1,0),(-0.1,0.2,0)]))),
              Shape(
                appearance=Appearance(
                  material=Material(emissiveColor=(1,1,1))),
                geometry=IndexedLineSet(DEF='MC45toCMC5',coordIndex=[0,1],
                  coord=Coordinate(point=[(-0.1,0.1,0),(-0.15,0.17,0)])))]),
            #  ring finger 
            HAnimJoint(DEF='hanim_l_carpometacarpal_4',name='l_carpometacarpal_4',center=(-0.1,0.2,0),llimit=[0,0,0],ulimit=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_l_metacarpal_4',name='l_metacarpal_4',
                children=[
                Transform(translation=(-0.1,0.2,0),
                  children=[
                  Shape(USE='HAnimJointShape')]),
                Shape(
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CMC4toMCP4',coordIndex=[0,1],
                    coord=Coordinate(point=[(-0.1,0.2,0),(-0.1,0.47,0)])))]),
              HAnimJoint(DEF='hanim_l_metacarpophalangeal_4',name='l_metacarpophalangeal_4',center=(-0.1,0.47,0),llimit=[0,0,0],ulimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_4',name='l_carpal_proximal_phalanx_4',
                  children=[
                  Transform(translation=(-0.1,0.47,0),
                    children=[
                    Shape(USE='HAnimJointShape')]),
                  Shape(
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='MCP4toPIP4',coordIndex=[0,1],
                      coord=Coordinate(point=[(-0.1,0.47,0),(-0.1,0.7,0)])))]),
                HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_4',name='l_carpal_proximal_interphalangeal_4',center=(-0.1,0.7,0),llimit=[0,0,0],ulimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_l_carpal_middle_phalanx_4',name='l_carpal_middle_phalanx_4',
                    children=[
                    Transform(translation=(-0.1,0.7,0),
                      children=[
                      Shape(USE='HAnimJointShape')]),
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='PIP4toDIP4',coordIndex=[0,1],
                        coord=Coordinate(point=[(-0.1,0.7,0),(-0.1,0.93,0)])))]),
                  HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_4',name='l_carpal_distal_interphalangeal_4',center=(-0.1,0.93,0),llimit=[0,0,0],ulimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_l_carpal_distal_phalanx_4',name='l_carpal_distal_phalanx_4',
                      children=[
                      Transform(translation=(-0.1,0.93,0),
                        children=[
                        Shape(USE='HAnimJointShape')]),
                      Shape(
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='fingertip_l_carpal_distal_interphalangeal_4',coordIndex=[0,1],
                          coord=Coordinate(point=[(-0.1,0.93,0),(-0.1,1,0)])))])])])])]),
            #  pinky finger 
            HAnimJoint(DEF='hanim_l_carpometacarpal_5',name='l_carpometacarpal_5',center=(-0.15,0.17,0),llimit=[0,0,0],ulimit=[0,0,0],
              children=[
              HAnimSegment(DEF='hanim_l_metacarpal_5',name='l_metacarpal_5',
                children=[
                Transform(translation=(-0.15,0.17,0),
                  children=[
                  Shape(USE='HAnimJointShape')]),
                Shape(
                  appearance=Appearance(
                    material=Material(emissiveColor=(1,1,1))),
                  geometry=IndexedLineSet(DEF='CMC5toMCP5',coordIndex=[0,1],
                    coord=Coordinate(point=[(-0.15,0.17,0),(-0.2,0.4,0)])))]),
              HAnimJoint(DEF='hanim_l_metacarpophalangeal_5',name='l_metacarpophalangeal_5',center=(-0.2,0.4,0),llimit=[0,0,0],ulimit=[0,0,0],
                children=[
                HAnimSegment(DEF='hanim_l_carpal_proximal_phalanx_5',name='l_carpal_proximal_phalanx_5',
                  children=[
                  Transform(translation=(-0.2,0.4,0),
                    children=[
                    Shape(USE='HAnimJointShape')]),
                  Shape(
                    appearance=Appearance(
                      material=Material(emissiveColor=(1,1,1))),
                    geometry=IndexedLineSet(DEF='MCP5toPIP5',coordIndex=[0,1],
                      coord=Coordinate(point=[(-0.2,0.4,0),(-0.23,0.63,0)])))]),
                HAnimJoint(DEF='hanim_l_carpal_proximal_interphalangeal_5',name='l_carpal_proximal_interphalangeal_5',center=(-0.23,0.63,0),llimit=[0,0,0],ulimit=[0,0,0],
                  children=[
                  HAnimSegment(DEF='hanim_l_carpal_middle_phalanx_5',name='l_carpal_middle_phalanx_5',
                    children=[
                    Transform(translation=(-0.23,0.63,0),
                      children=[
                      Shape(USE='HAnimJointShape')]),
                    Shape(
                      appearance=Appearance(
                        material=Material(emissiveColor=(1,1,1))),
                      geometry=IndexedLineSet(DEF='PIP5toDIP5',coordIndex=[0,1],
                        coord=Coordinate(point=[(-0.23,0.63,0),(-0.25,0.79,0)])))]),
                  HAnimJoint(DEF='hanim_l_carpal_distal_interphalangeal_5',name='l_carpal_distal_interphalangeal_5',center=(-0.25,0.79,0),llimit=[0,0,0],ulimit=[0,0,0],
                    children=[
                    HAnimSegment(DEF='hanim_l_carpal_distal_phalanx_5',name='l_carpal_distal_phalanx_5',
                      children=[
                      Transform(translation=(-0.25,0.79,0),
                        children=[
                        Shape(USE='HAnimJointShape')]),
                      Shape(
                        appearance=Appearance(
                          material=Material(emissiveColor=(1,1,1))),
                        geometry=IndexedLineSet(DEF='fingertip_l_carpal_distal_interphalangeal_5',coordIndex=[0,1],
                          coord=Coordinate(point=[(-0.25,0.79,0),(-0.26,0.85,0)])))])])])])])])])]),],
      #  original HAnimHumanoid info='"authorName=Kwan-Hee YOO, Don Brutzman and Joe Williams"' 
      joints=[
      HAnimJoint(USE='hanim_humanoid_root',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_distal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_interphalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpal_proximal_interphalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_carpometacarpal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_4',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_metacarpophalangeal_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_midcarpal_1',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_midcarpal_2',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_midcarpal_3',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_midcarpal_4_5',ulimit=[0,0,0],llimit=[0,0,0]),
      HAnimJoint(USE='hanim_l_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0])],
      segments=[
      HAnimSegment(USE='hanim_l_capitate'),
      HAnimSegment(USE='hanim_l_carpal'),
      HAnimSegment(USE='hanim_l_carpal_distal_phalanx_1'),
      HAnimSegment(USE='hanim_l_carpal_distal_phalanx_2'),
      HAnimSegment(USE='hanim_l_carpal_distal_phalanx_3'),
      HAnimSegment(USE='hanim_l_carpal_distal_phalanx_4'),
      HAnimSegment(USE='hanim_l_carpal_distal_phalanx_5'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_2'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_3'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_4'),
      HAnimSegment(USE='hanim_l_carpal_middle_phalanx_5'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_1'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_2'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_3'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_4'),
      HAnimSegment(USE='hanim_l_carpal_proximal_phalanx_5'),
      HAnimSegment(USE='hanim_l_hamate'),
      HAnimSegment(USE='hanim_l_metacarpal_1'),
      HAnimSegment(USE='hanim_l_metacarpal_2'),
      HAnimSegment(USE='hanim_l_metacarpal_3'),
      HAnimSegment(USE='hanim_l_metacarpal_4'),
      HAnimSegment(USE='hanim_l_metacarpal_5'),
      HAnimSegment(USE='hanim_l_trapezium'),
      HAnimSegment(USE='hanim_l_trapezoid')],)])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for HAnimModelHandLeft.py:')
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

print("python HAnimModelHandLeft.py load and self-test diagnostics complete.")
