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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='FollowerPrototypeDeclarations.x3d',name='title'),
    meta(content='Original implementation pattern as prototype declarations for Follower (Chaser and Damper) nodes, useful for browser developers.',name='description'),
    meta(content='Herbert Stocker',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='18 April 2006',name='created'),
    meta(content='2 December 2011',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='FollowerExternalPrototypeDeclarations.x3d',name='reference'),
    meta(content='originals/Chasers.wrl',name='reference'),
    meta(content='originals/Dampers.wrl',name='reference'),
    meta(content='Stocker_06_Followers.pdf',name='reference'),
    meta(content='http://www.hersto.com/Publications/Followers',name='reference'),
    meta(content='X3D version 3.0, 3.1',name='requires'),
    meta(content='X3D Follower Chaser Damper',name='subject'),
    meta(content='under development',name='warning'),
    meta(content='Rename and test these prototypes to match final names in X3D Specification Followers Component',name='TODO'),
    meta(content='Ensure full coverage of follower nodes in order to provide backwards compatibility with X3D v3.0 and v3.1.',name='TODO'),
    meta(content='Xj3D Player Bugzilla Issuehttp://bugzilla.xj3d.org/show_bug.cgi?id=639',name='TODO'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-19775-1.2-X3D-AbstractSpecification/Part01/components/followers.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Followers/FollowerPrototypeDeclarations.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["The ExternProto nodes found in this file implement principles described in the paper","Linear Filters - Animating Objects in a Flexible and Pleasing Way","They have been proposed and added to the X3D standard in 2006.","Webpage: http://www.hersto.net/Followers","","Please use the code in this file in any content or application you like","or modify it in any way.","","The code here works, however things like detecting when a transition has ended","and when the node can stop calculating and updating the output or secondary fields","like set_value or initial_destination are not yet implemented.","Nevertheless, set_destination and value_changed do work."],title='Damper nodes'),
    ProtoDeclare(name='PositionChaser',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='outputOnly',name='value_changed',type='SFVec3f'),
        field(accessType='inputOnly',name='set_value',type='SFVec3f'),
        field(accessType='initializeOnly',name='credits',type='MFString',value=["Initial idea and copyright by Herbert Stocker http://www.hersto.net"]),
        field(accessType='outputOnly',name='isActive',type='SFBool'),
        field(accessType='inputOnly',name='set_destination',type='SFVec3f'),
        field(accessType='initializeOnly',name='duration',type='SFTime',value=1.0),
        field(accessType='initializeOnly',name='initial_destination',type='SFVec3f',value=(0.0,0.0,0.0)),
        field(accessType='initializeOnly',name='initial_value',type='SFVec3f',value=(0.0,0.0,0.0))]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='ScreenPositionDamper_PositionChaser',
          field=[
          field(accessType='inputOnly',name='Tick',type='SFTime'),
          field(accessType='inputOnly',name='set_value',type='SFVec3f'),
          field(accessType='initializeOnly',name='duration',type='SFTime'),
          field(accessType='initializeOnly',name='Buffer',type='MFVec3f'),
          field(accessType='initializeOnly',name='bInitialized',type='SFBool',value=False),
          field(accessType='initializeOnly',name='BufferEndTime',type='SFTime',value=0.0),
          field(accessType='initializeOnly',name='cNumSupports',type='SFInt32',value=10),
          field(accessType='inputOnly',name='set_destination',type='SFVec3f'),
          field(accessType='outputOnly',name='value_changed',type='SFVec3f'),
          field(accessType='initializeOnly',name='cStepTime',type='SFTime',value=0.0),
          field(accessType='initializeOnly',name='previousValue',type='SFVec3f',value=(0.0,0.0,0.0)),
          field(accessType='initializeOnly',name='initial_destination',type='SFVec3f'),
          field(accessType='initializeOnly',name='destination',type='SFVec3f',value=(0.0,0.0,0.0)),
          field(accessType='outputOnly',name='isActive',type='SFBool'),
          field(accessType='initializeOnly',name='initial_value',type='SFVec3f')],
          IS=IS(
            connect=[
            connect(nodeField='set_value',protoField='set_value'),
            connect(nodeField='duration',protoField='duration'),
            connect(nodeField='set_destination',protoField='set_destination'),
            connect(nodeField='value_changed',protoField='value_changed'),
            connect(nodeField='initial_destination',protoField='initial_destination'),
            connect(nodeField='isActive',protoField='isActive'),
            connect(nodeField='initial_value',protoField='initial_value')])),
        TimeSensor(DEF='Tmer_PositionChaser',loop=True),
        ROUTE(fromField='time',fromNode='Tmer_PositionChaser',toField='Tick',toNode='ScreenPositionDamper_PositionChaser')])),
    ProtoDeclare(name='OrientationChaser',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='outputOnly',name='value_changed',type='SFRotation'),
        field(accessType='inputOnly',name='set_value',type='SFRotation'),
        field(accessType='initializeOnly',name='credits',type='MFString',value=["Initial idea and copyright by Herbert Stocker http://www.hersto.net/"]),
        field(accessType='outputOnly',name='isActive',type='SFBool'),
        field(accessType='inputOnly',name='set_destination',type='SFRotation'),
        field(accessType='initializeOnly',name='duration',type='SFTime',value=1.0),
        field(accessType='initializeOnly',name='initial_destination',type='SFRotation',value=(0.0,0.0,1.0,0.0)),
        field(accessType='initializeOnly',name='initial_value',type='SFRotation',value=(0.0,0.0,1.0,0.0))]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='ScreenPositionDamper_OrientationChaser',
          field=[
          field(accessType='inputOnly',name='Tick',type='SFTime'),
          field(accessType='inputOnly',name='set_value',type='SFRotation'),
          field(accessType='initializeOnly',name='duration',type='SFTime'),
          field(accessType='initializeOnly',name='Buffer',type='MFRotation'),
          field(accessType='initializeOnly',name='bInitialized',type='SFBool',value=False),
          field(accessType='initializeOnly',name='BufferEndTime',type='SFTime',value=0.0),
          field(accessType='initializeOnly',name='cNumSupports',type='SFInt32',value=10),
          field(accessType='inputOnly',name='set_destination',type='SFRotation'),
          field(accessType='outputOnly',name='value_changed',type='SFRotation'),
          field(accessType='initializeOnly',name='cStepTime',type='SFTime',value=0.0),
          field(accessType='initializeOnly',name='previousValue',type='SFRotation',value=(0.0,0.0,1.0,0.0)),
          field(accessType='initializeOnly',name='initial_destination',type='SFRotation'),
          field(accessType='initializeOnly',name='destination',type='SFRotation',value=(0.0,0.0,1.0,0.0)),
          field(accessType='outputOnly',name='isActive',type='SFBool'),
          field(accessType='initializeOnly',name='initial_value',type='SFRotation')],
          IS=IS(
            connect=[
            connect(nodeField='set_value',protoField='set_value'),
            connect(nodeField='duration',protoField='duration'),
            connect(nodeField='set_destination',protoField='set_destination'),
            connect(nodeField='value_changed',protoField='value_changed'),
            connect(nodeField='initial_destination',protoField='initial_destination'),
            connect(nodeField='isActive',protoField='isActive'),
            connect(nodeField='initial_value',protoField='initial_value')])),
        TimeSensor(DEF='Tmer_OrientationChaser',loop=True),
        ROUTE(fromField='time',fromNode='Tmer_OrientationChaser',toField='Tick',toNode='ScreenPositionDamper_OrientationChaser')])),
    ProtoDeclare(name='Position2fChaser',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='outputOnly',name='value_changed',type='SFVec2f'),
        field(accessType='inputOnly',name='set_value',type='SFVec2f'),
        field(accessType='initializeOnly',name='credits',type='MFString',value=["Initial idea and copyright by Herbert Stocker http://www.hersto.net/"]),
        field(accessType='outputOnly',name='isActive',type='SFBool'),
        field(accessType='inputOnly',name='set_destination',type='SFVec2f'),
        field(accessType='initializeOnly',name='duration',type='SFTime',value=1.0),
        field(accessType='initializeOnly',name='initial_destination',type='SFVec2f',value=(0.0,0.0)),
        field(accessType='initializeOnly',name='initial_value',type='SFVec2f',value=(0.0,0.0))]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='ScreenPositionDamper_Position2fChaser',
          field=[
          field(accessType='inputOnly',name='Tick',type='SFTime'),
          field(accessType='inputOnly',name='set_value',type='SFVec2f'),
          field(accessType='initializeOnly',name='duration',type='SFTime'),
          field(accessType='initializeOnly',name='Buffer',type='MFVec2f'),
          field(accessType='initializeOnly',name='bInitialized',type='SFBool',value=False),
          field(accessType='initializeOnly',name='BufferEndTime',type='SFTime',value=0.0),
          field(accessType='initializeOnly',name='cNumSupports',type='SFInt32',value=10),
          field(accessType='inputOnly',name='set_destination',type='SFVec2f'),
          field(accessType='outputOnly',name='value_changed',type='SFVec2f'),
          field(accessType='initializeOnly',name='cStepTime',type='SFTime',value=0.0),
          field(accessType='initializeOnly',name='previousValue',type='SFVec2f',value=(0.0,0.0)),
          field(accessType='initializeOnly',name='initial_destination',type='SFVec2f'),
          field(accessType='initializeOnly',name='destination',type='SFVec2f',value=(0.0,0.0)),
          field(accessType='outputOnly',name='isActive',type='SFBool'),
          field(accessType='initializeOnly',name='initial_value',type='SFVec2f')],
          IS=IS(
            connect=[
            connect(nodeField='set_value',protoField='set_value'),
            connect(nodeField='duration',protoField='duration'),
            connect(nodeField='set_destination',protoField='set_destination'),
            connect(nodeField='value_changed',protoField='value_changed'),
            connect(nodeField='initial_destination',protoField='initial_destination'),
            connect(nodeField='isActive',protoField='isActive'),
            connect(nodeField='initial_value',protoField='initial_value')])),
        TimeSensor(DEF='Tmer_Position2fChaser',loop=True),
        ROUTE(fromField='time',fromNode='Tmer_Position2fChaser',toField='Tick',toNode='ScreenPositionDamper_Position2fChaser')])),
    ProtoDeclare(name='PlacementChaser',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='outputOnly',name='isLoaded',type='SFBool'),
        field(accessType='inputOnly',name='set_valuePos',type='SFVec3f'),
        field(accessType='inputOnly',name='set_valueOri',type='SFRotation'),
        field(accessType='inputOnly',name='set_destinationPos',type='SFVec3f'),
        field(accessType='initializeOnly',name='credits',type='MFString',value=["Initial idea and copyright by Herbert Stocker http://www.hersto.net/"]),
        field(accessType='initializeOnly',name='duration',type='SFTime',value=1.0),
        field(accessType='inputOnly',name='set_destinationOri',type='SFRotation'),
        field(accessType='initializeOnly',name='initial_valuePos',type='SFVec3f',value=(0.0,0.0,0.0)),
        field(accessType='initializeOnly',name='initial_destinationPos',type='SFVec3f',value=(0.0,0.0,0.0)),
        field(accessType='outputOnly',name='valuePos_changed',type='SFVec3f'),
        field(accessType='initializeOnly',name='initial_valueOri',type='SFRotation',value=(0.0,0.0,1.0,0.0)),
        field(accessType='initializeOnly',name='initial_destinationOri',type='SFRotation',value=(0.0,0.0,1.0,0.0)),
        field(accessType='outputOnly',name='valueOri_changed',type='SFRotation'),
        field(accessType='outputOnly',name='isActive',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='ScreenPositionDamper_PlacementChaser',
          field=[
          field(accessType='initializeOnly',name='previousValueOri',type='SFRotation',value=(0.0,0.0,1.0,0.0)),
          field(accessType='inputOnly',name='Tick',type='SFTime'),
          field(accessType='initializeOnly',name='duration',type='SFTime'),
          field(accessType='inputOnly',name='set_destinationOri',type='SFRotation'),
          field(accessType='initializeOnly',name='bInitialized',type='SFBool',value=False),
          field(accessType='inputOnly',name='set_valueOri',type='SFRotation'),
          field(accessType='initializeOnly',name='previousValuePos',type='SFVec3f',value=(0.0,0.0,0.0)),
          field(accessType='initializeOnly',name='destinationOri',type='SFRotation',value=(0.0,0.0,1.0,0.0)),
          field(accessType='initializeOnly',name='initial_valueOri',type='SFRotation'),
          field(accessType='inputOnly',name='set_destinationPos',type='SFVec3f'),
          field(accessType='initializeOnly',name='BufferEndTime',type='SFTime',value=0.0),
          field(accessType='initializeOnly',name='cNumSupports',type='SFInt32',value=10),
          field(accessType='inputOnly',name='set_valuePos',type='SFVec3f'),
          field(accessType='initializeOnly',name='cStepTime',type='SFTime',value=0.0),
          field(accessType='initializeOnly',name='initial_destinationOri',type='SFRotation'),
          field(accessType='initializeOnly',name='BufferOri',type='MFRotation'),
          field(accessType='initializeOnly',name='destinationPos',type='SFVec3f',value=(0.0,0.0,0.0)),
          field(accessType='initializeOnly',name='initial_valuePos',type='SFVec3f'),
          field(accessType='outputOnly',name='valuePos_changed',type='SFVec3f'),
          field(accessType='outputOnly',name='isActive',type='SFBool'),
          field(accessType='initializeOnly',name='initial_destinationPos',type='SFVec3f'),
          field(accessType='outputOnly',name='valueOri_changed',type='SFRotation'),
          field(accessType='initializeOnly',name='BufferPos',type='MFVec3f')],
          IS=IS(
            connect=[
            connect(nodeField='duration',protoField='duration'),
            connect(nodeField='set_destinationOri',protoField='set_destinationOri'),
            connect(nodeField='set_valueOri',protoField='set_valueOri'),
            connect(nodeField='initial_valueOri',protoField='initial_valueOri'),
            connect(nodeField='set_destinationPos',protoField='set_destinationPos'),
            connect(nodeField='set_valuePos',protoField='set_valuePos'),
            connect(nodeField='initial_destinationOri',protoField='initial_destinationOri'),
            connect(nodeField='initial_valuePos',protoField='initial_valuePos'),
            connect(nodeField='valuePos_changed',protoField='valuePos_changed'),
            connect(nodeField='isActive',protoField='isActive'),
            connect(nodeField='initial_destinationPos',protoField='initial_destinationPos'),
            connect(nodeField='valueOri_changed',protoField='valueOri_changed')])),
        TimeSensor(DEF='Tmer_PlacementChaser',loop=True),
        ROUTE(fromField='time',fromNode='Tmer_PlacementChaser',toField='Tick',toNode='ScreenPositionDamper_PlacementChaser'),
        Script(DEF='LastNode',
          field=[
          field(accessType='outputOnly',name='isLoaded',type='SFBool')],
          IS=IS(
            connect=[
            connect(nodeField='isLoaded',protoField='isLoaded')]))])),
    ProtoDeclare(name='PositionDamper',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='outputOnly',name='isLoaded',type='SFBool'),
        field(accessType='outputOnly',name='value_changed',type='SFVec3f'),
        field(accessType='inputOnly',name='set_destination',type='SFVec3f'),
        field(accessType='initializeOnly',name='takeFirstInput',type='SFBool',value=True),
        field(accessType='initializeOnly',name='initial_destination',type='SFVec3f',value=(0.0,0.0,0.0)),
        field(accessType='initializeOnly',name='order',type='SFInt32',value=1),
        field(accessType='initializeOnly',name='credits',type='MFString',value=["Initial idea and copyright by Herbert Stocker http://www.hersto.net/"]),
        field(accessType='initializeOnly',name='reachThreshold',type='SFFloat',value=0.01),
        field(accessType='inputOutput',name='tau',type='SFFloat',value=1.0),
        field(accessType='inputOnly',name='set_value',type='SFVec3f'),
        field(accessType='outputOnly',name='reached',type='SFBool'),
        field(accessType='initializeOnly',name='initial_value',type='SFVec3f',value=(0.0,0.0,0.0)),
        field(accessType='outputOnly',name='isActive',type='SFBool'),
        field(accessType='initializeOnly',name='eps',type='SFFloat',value=0.0010)]),
      ProtoBody=ProtoBody(
        children=[
        ProtoDeclare(name='EFFS',
          ProtoInterface=ProtoInterface(
            field=[
            field(accessType='inputOutput',name='tau',type='SFFloat',value=1.0)]),
          ProtoBody=ProtoBody(
            children=[
            Group(),])),
        ProtoInstance(DEF='EFFS',name='EFFS',
          fieldValue=[
          fieldValue(name='tau',value=1.0)]),
        Script(DEF='Worker',
          field=[
          field(accessType='inputOnly',name='set_value',type='SFVec3f'),
          field(accessType='initializeOnly',name='IsCortona',type='SFBool',value=False),
          field(accessType='initializeOnly',name='bInitialized',type='SFBool',value=False),
          field(accessType='initializeOnly',name='reachThreshold',type='SFFloat'),
          field(accessType='initializeOnly',name='lastTick',type='SFTime',value=0.0),
          field(accessType='initializeOnly',name='bNeedToTakeFirstInput',type='SFBool',value=True),
          field(accessType='initializeOnly',name='value5',type='SFVec3f',value=(0.0,0.0,0.0)),
          field(accessType='initializeOnly',name='value4',type='SFVec3f',value=(0.0,0.0,0.0)),
          field(accessType='initializeOnly',name='value3',type='SFVec3f',value=(0.0,0.0,0.0)),
          field(accessType='initializeOnly',name='value2',type='SFVec3f',value=(0.0,0.0,0.0)),
          field(accessType='initializeOnly',name='input',type='SFVec3f'),
          field(accessType='initializeOnly',name='value1',type='SFVec3f',value=(0.0,0.0,0.0)),
          field(accessType='initializeOnly',name='eps',type='SFFloat'),
          field(accessType='inputOnly',name='set_destination',type='SFVec3f'),
          field(accessType='outputOnly',name='value_changed',type='SFVec3f'),
          field(accessType='initializeOnly',name='tau',type='SFFloat',value=1.0),
          field(accessType='initializeOnly',name='effs',type='SFNode',
            children=[
            ProtoInstance(USE='EFFS')]),
          field(accessType='initializeOnly',name='order',type='SFInt32'),
          field(accessType='outputOnly',name='needTimer',type='SFBool'),
          field(accessType='inputOnly',name='tick',type='SFTime'),
          field(accessType='inputOnly',name='set_tau',type='SFFloat'),
          field(accessType='initializeOnly',name='initial_value',type='SFVec3f'),
          field(accessType='outputOnly',name='reached',type='SFBool'),
          field(accessType='initializeOnly',name='takeFirstInput',type='SFBool')],
          IS=IS(
            connect=[
            connect(nodeField='set_value',protoField='set_value'),
            connect(nodeField='reachThreshold',protoField='reachThreshold'),
            connect(nodeField='input',protoField='initial_destination'),
            connect(nodeField='eps',protoField='eps'),
            connect(nodeField='set_destination',protoField='set_destination'),
            connect(nodeField='value_changed',protoField='value_changed'),
            connect(nodeField='order',protoField='order'),
            connect(nodeField='needTimer',protoField='isActive'),
            connect(nodeField='initial_value',protoField='initial_value'),
            connect(nodeField='reached',protoField='reached'),
            connect(nodeField='takeFirstInput',protoField='takeFirstInput')])),
        TimeSensor(DEF='Timer_PositionDamper',loop=True),
        ROUTE(fromField='needTimer',fromNode='Worker',toField='enabled',toNode='Timer_PositionDamper'),
        ROUTE(fromField='time',fromNode='Timer_PositionDamper',toField='tick',toNode='Worker')]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FollowerPrototypeDeclarations.py")
