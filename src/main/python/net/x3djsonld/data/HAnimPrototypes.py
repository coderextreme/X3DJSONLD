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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    #  Originally these fundamental prototypes were defined in InterchangableActorsViaDynamicRoutingPrototypes.x3d 
    meta(content='HAnimPrototypes.x3d',name='title'),
    meta(content='Example implementation of X3D Humanoid Animation (HAnim) nodes using X3D prototypes.',name='description'),
    meta(content='These are developmental examples that can assist X3D player implementations and support interoperability. They are not intended for author use in regular X3D scenes.',name='warning'),
    meta(content='Developer note: names for these HAnim Prototypes need to be corrected if used internally in an X3D player implementation (e.g. Joint to HAnimJoint).',name='warning'),
    meta(content='Need support for skin',name='warning'),
    meta(content='Ozan APAYDIN, Don Brutzman',name='creator'),
    meta(content='Ozan APAYDIN, Don Brutzman',name='translator'),
    meta(content='15 November 2001',name='created'),
    meta(content='23 May 2020',name='modified'),
    meta(content='upgrade to match support requirements for HAnim 2.2',name='TODO'),
    meta(content='https://www.web3d.org/files/specifications/19774/V1.0/HAnim/HAnim.html',name='reference'),
    meta(content='https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/hanim.html',name='reference'),
    meta(content='http://HAnim.org/Models/HAnim2001/boxman/boxman.wrl',name='reference'),
    meta(content='http://HAnim.org/Specifications/HAnim2001',name='reference'),
    meta(content='http://www.HAnim.org',name='reference'),
    meta(content='http://HAnim.org/Models',name='reference'),
    meta(content='http://HAnim.org/Specifications',name='reference'),
    meta(content='InterchangableActorsViaDynamicRoutingPrototypes.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Prototypes/HAnimPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  **********Human Model Protypes********* 
    children=[
    ProtoDeclare(appinfo='The Humanoid node serves as overall container for the Joint Segment Site and Viewpoint nodes which define the skeleton geometry and landmarks of the humanoid figure. Additionally the node provides a means for defining information about the author copyright and usage restrictions of the model.',documentation='http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html',name='Humanoid1_1',
      ProtoInterface=ProtoInterface(
        #  HAnim v1.1 field definitions 
        field=[
        field(accessType='inputOutput',name='name',type='SFString'),
        field(accessType='inputOutput',appinfo='legal values: 1.1 or 2.0',name='version',type='SFString',value='1.1'),
        field(accessType='inputOutput',appinfo='Version of the humanoid being modeled. Hint: HAnim version 2.0',name='humanoidVersion',type='SFString'),
        field(accessType='inputOutput',name='info',type='MFString'),
        field(accessType='inputOutput',name='translation',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='rotation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='inputOutput',name='center',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='scale',type='SFVec3f',value=(1,1,1)),
        field(accessType='inputOutput',name='scaleOrientation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='initializeOnly',name='bboxCenter',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',name='bboxSize',type='SFVec3f',value=(-1,-1,-1)),
        field(accessType='inputOutput',appinfo='HAnim 1.1 field container for body head. Hint: replaced by 2.0 skeleton.',documentation='http://HAnim.org/Specifications/HAnim1.1/#humanoid',name='humanoidBody',type='MFNode'),
        field(accessType='inputOutput',appinfo='HAnim 2.0 field container for body geometry Hint: replaces 1.1 humanoidBody',documentation='http://HAnim.org/Specifications/HAnim2001/part1/Humanoid.html',name='skeleton',type='MFNode'),
        field(accessType='inputOutput',appinfo='Container field for Joint nodes',name='joints',type='MFNode'),
        field(accessType='inputOutput',appinfo='Container field for Segment nodes',name='segments',type='MFNode'),
        field(accessType='inputOutput',appinfo='Container field for Site nodes',name='sites',type='MFNode'),
        field(accessType='inputOutput',appinfo='Container field for Viewpoint nodes',name='viewpoints',type='MFNode'),
        field(accessType='inputOutput',appinfo='Hint: HAnim version 2.0',name='skinCoord',type='SFNode',
          #  NULL 
          ),
        field(accessType='inputOutput',appinfo='Hint: HAnim version 2.0',name='skinNormal',type='SFNode',
          #  NULL 
          )]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='HumanoidTransform',
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='translation'),
            connect(nodeField='rotation',protoField='rotation'),
            connect(nodeField='center',protoField='center'),
            connect(nodeField='scale',protoField='scale'),
            connect(nodeField='scaleOrientation',protoField='scaleOrientation'),
            connect(nodeField='bboxCenter',protoField='bboxCenter'),
            connect(nodeField='bboxSize',protoField='bboxSize')]),
          children=[
          Group(DEF='HumanoidGroup1',
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='humanoidBody')])),
          Group(DEF='HumanoidGroup2',
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='skeleton')])),
          Group(DEF='HumanoidGroup3',
            IS=IS(
              connect=[
              connect(nodeField='children',protoField='viewpoints')]))])])),
    ProtoDeclare(appinfo='The Joint node is used as a building block to describe the articulations of the humanoid figure. Each articulation of the humanoid figure is represented by a Joint node each of which is organized into a hierarchy that describes the overall skeleton of the humanoid.',documentation='http://HAnim.org/Specifications/HAnim2001/part1/Joint.html',name='Joint',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='name',type='SFString'),
        field(accessType='inputOutput',name='ulimit',type='MFFloat'),
        field(accessType='inputOutput',name='llimit',type='MFFloat'),
        field(accessType='inputOutput',name='limitOrientation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='inputOutput',name='skinCoordIndex',type='MFInt32'),
        field(accessType='inputOutput',name='skinCoordWeight',type='MFFloat'),
        field(accessType='inputOutput',name='stiffness',type='MFFloat',value=[0,0,0]),
        field(accessType='inputOutput',name='translation',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='rotation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='inputOutput',name='scale',type='SFVec3f',value=(1,1,1)),
        field(accessType='inputOutput',name='scaleOrientation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='inputOutput',name='center',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',name='bboxCenter',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',name='bboxSize',type='SFVec3f',value=(-1,-1,-1)),
        field(accessType='inputOutput',name='children',type='MFNode'),
        field(accessType='inputOnly',name='addChildren',type='MFNode'),
        field(accessType='inputOnly',name='removeChildren',type='MFNode')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='JointTransform',
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='translation'),
            connect(nodeField='rotation',protoField='rotation'),
            connect(nodeField='center',protoField='center'),
            connect(nodeField='scale',protoField='scale'),
            connect(nodeField='scaleOrientation',protoField='scaleOrientation'),
            connect(nodeField='bboxCenter',protoField='bboxCenter'),
            connect(nodeField='bboxSize',protoField='bboxSize'),
            connect(nodeField='children',protoField='children'),
            connect(nodeField='addChildren',protoField='addChildren'),
            connect(nodeField='removeChildren',protoField='removeChildren')]))])),
    ProtoDeclare(appinfo='The Segment node is used describe the attributes of the physical links between the joints of the humanoid figure. Each body part (pelvis thigh calf etc.) of the humanoid figure is represented by a Segment node.',documentation='http://HAnim.org/Specifications/HAnim2001/part1/Segment.html',name='Segment',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='name',type='SFString'),
        field(accessType='inputOutput',name='mass',type='SFFloat',value=0),
        field(accessType='inputOutput',name='centerOfMass',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='momentsOfInertia',type='MFFloat',value=[0,0,0,0,0,0,0,0,0]),
        field(accessType='initializeOnly',name='bboxCenter',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',name='bboxSize',type='SFVec3f',value=(-1,-1,-1)),
        field(accessType='inputOutput',name='children',type='MFNode'),
        field(accessType='inputOnly',name='addChildren',type='MFNode'),
        field(accessType='inputOnly',name='removeChildren',type='MFNode'),
        field(accessType='inputOutput',appinfo='contains Coordinate nodes',name='coord',type='SFNode',
          #  NULL 
          ),
        field(accessType='inputOutput',appinfo='contains Displacer nodes',name='displacers',type='MFNode')]),
      ProtoBody=ProtoBody(
        children=[
        Group(DEF='SegmentGroup',
          IS=IS(
            connect=[
            connect(nodeField='bboxCenter',protoField='bboxCenter'),
            connect(nodeField='bboxSize',protoField='bboxSize'),
            connect(nodeField='children',protoField='children'),
            connect(nodeField='addChildren',protoField='addChildren'),
            connect(nodeField='removeChildren',protoField='removeChildren')]))])),
    ProtoDeclare(appinfo='The Site node can be used for three purposes: (a) to define an "end effector" location which can be used by an inverse kinematics system (b) to define an attachment point for accessories such as jewelry and clothing and (c) to define a location for a virtual camera in the reference frame of a Segment node (such as a view "through the eyes" of the humanoid for use in multi-user worlds).',documentation='http://HAnim.org/Specifications/HAnim2001/part1/Site.html',name='Site',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='name',type='SFString'),
        field(accessType='inputOutput',name='translation',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',name='rotation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='inputOutput',name='scale',type='SFVec3f',value=(1,1,1)),
        field(accessType='inputOutput',name='scaleOrientation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='inputOutput',name='center',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',name='bboxCenter',type='SFVec3f',value=(0,0,0)),
        field(accessType='initializeOnly',name='bboxSize',type='SFVec3f',value=(-1,-1,-1)),
        field(accessType='inputOutput',name='children',type='MFNode'),
        field(accessType='inputOnly',name='addChildren',type='MFNode'),
        field(accessType='inputOnly',name='removeChildren',type='MFNode')]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='SiteTransform',
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='translation'),
            connect(nodeField='rotation',protoField='rotation'),
            connect(nodeField='center',protoField='center'),
            connect(nodeField='scale',protoField='scale'),
            connect(nodeField='scaleOrientation',protoField='scaleOrientation'),
            connect(nodeField='bboxCenter',protoField='bboxCenter'),
            connect(nodeField='bboxSize',protoField='bboxSize'),
            connect(nodeField='children',protoField='children'),
            connect(nodeField='addChildren',protoField='addChildren'),
            connect(nodeField='removeChildren',protoField='removeChildren')]))])),
    ProtoDeclare(appinfo='A Displacer can be used in three different ways: (a) identify the vertices corresponding to a particular feature on a Segment (b) represent a particular muscular action which displaces the vertices in various directions (linearly or radially) and (c) represent a complete configuration of the vertices in a Segment.',documentation='http://HAnim.org/Specifications/HAnim2001/part1/Displacer.html',name='Displacer',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='name',type='SFString'),
        field(accessType='inputOutput',name='coordIndex',type='MFInt32'),
        field(accessType='inputOutput',name='displacements',type='MFVec3f')]),
      ProtoBody=ProtoBody(
        children=[
        WorldInfo(info=["null body node"])])),
    Shape(
      geometry=Text(string=["Humanoid Animation","(HAnim) prototype","implementations"],
        fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
      appearance=Appearance(
        material=Material(ambientIntensity=0.25,diffuseColor=(0.795918,0.505869,0.093315),shininess=0.39,specularColor=(0.923469,0.428866,0.006369),
          #  Universal Media Library: Autumn 9 
          )))])
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

print("python x3d.py load and self-test complete for HAnimPrototypes.py")
