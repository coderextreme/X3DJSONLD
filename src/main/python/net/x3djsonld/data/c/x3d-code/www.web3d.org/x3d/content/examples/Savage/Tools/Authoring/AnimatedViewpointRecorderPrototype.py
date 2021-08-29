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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='AnimatedViewpointRecorderPrototype.x3d',name='title'),
    meta(content='Record camera position and orientation as user navigates, then filter values and produce output, both into the console output window and as a replayable node group. Future work: further filtering.',name='description'),
    meta(content='Don Brutzman, Ken Curtin, Duane Davis, Christos Kalogrias',name='creator'),
    meta(content='24 October 2003',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='AnimatedViewpointRecorderExample.x3d',name='reference'),
    meta(content='AnimatedViewpointRecorderSample.x3d',name='reference'),
    meta(content='http://www.realism.com/Web3D/Examples#WhereAmI',name='reference'),
    meta(content='http://www.realism.com/vrml/Example/WhereAmI/WhereAmI_Proto.wrl',name='reference'),
    meta(content='recording animated viewpoint tour',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/AnimatedViewpointRecorderPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  ==================== 
    children=[
    ProtoDeclare(appinfo='AnimatedViewpointRecorder captures view position and orientation tour to create a guided tour animation. The recording output goes to the browser console where the .x3d (or .x3dv) output can be cut/pasted for further use.',name='AnimatedViewpointRecorder',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='Set start=true to commence recording viewpoint position/orientation.',name='start',type='SFBool'),
        field(accessType='inputOnly',appinfo='Set stop=true to finish recording viewpoint position/orientation. Resulting VRML is added to scene resulting X3D and VRML is output to console.',name='stop',type='SFBool'),
        field(accessType='initializeOnly',appinfo='default 0.1 seconds',name='samplingInterval',type='SFTime',value=0.1),
        field(accessType='initializeOnly',appinfo='whether to output .x3d syntax on browser console',name='outputX3D',type='SFBool',value=True),
        field(accessType='initializeOnly',appinfo='whether to output .x3d syntax on browser console',name='outputClassicVRML',type='SFBool',value=False),
        field(accessType='initializeOnly',appinfo='TODO not yet implemented',name='filterDeadTime',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Group(DEF='NewViewpointGroup'),
          #  it's a big old world out there! 
          ProximitySensor(DEF='WhereSensor',size=(1000000000,1000000000,1000000000)),
          Script(DEF='RecordingScript',directOutput=True,
            field=[
            field(accessType='inputOnly',name='start',type='SFBool'),
            field(accessType='inputOnly',name='stop',type='SFBool'),
            field(accessType='initializeOnly',appinfo='seconds',name='samplingInterval',type='SFTime'),
            field(accessType='initializeOnly',appinfo='whether to output .x3d syntax on browser console',name='outputX3D',type='SFBool'),
            field(accessType='initializeOnly',appinfo='whether to output .x3d syntax on browser console',name='outputClassicVRML',type='SFBool'),
            field(accessType='outputOnly',appinfo='persistent state variable',name='recordingInProgress',type='SFBool'),
            field(accessType='inputOnly',name='set_position',type='SFVec3f'),
            field(accessType='inputOnly',name='set_orientation',type='SFRotation'),
            field(accessType='initializeOnly',name='positionArray',type='MFVec3f'),
            field(accessType='initializeOnly',name='positionTimeArray',type='MFTime'),
            field(accessType='initializeOnly',name='orientationArray',type='MFRotation'),
            field(accessType='initializeOnly',name='orientationTimeArray',type='MFTime'),
            field(accessType='initializeOnly',appinfo='not yet implemented',name='filterDeadTime',type='SFBool'),
            field(accessType='initializeOnly',name='newViewpointGroup',type='SFNode',
              children=[
              Group(USE='NewViewpointGroup')]),
            field(accessType='initializeOnly',appinfo='persistent holding variable',name='numberOfToursCreated',type='SFInt32',value=0),
            field(accessType='initializeOnly',appinfo='persistent holding variable',name='precedingPosition',type='SFVec3f',value=(0,0,0)),
            field(accessType='initializeOnly',appinfo='persistent holding variable',name='precedingOrientation',type='SFRotation',value=(0,1,0,0)),
            field(accessType='initializeOnly',appinfo='persistent holding variable',name='precedingPositionSampleTime',type='SFTime',value=0),
            field(accessType='initializeOnly',appinfo='persistent holding variable',name='precedingOrientationSampleTime',type='SFTime',value=0),
            field(accessType='initializeOnly',appinfo='normalization factor',name='r',type='SFFloat',value=1),
            field(accessType='initializeOnly',appinfo='track output of ProximitySensor',name='positionEventsReceived',type='SFBool',value=False),
            field(accessType='initializeOnly',appinfo='track output of ProximitySensor',name='orientationEventsReceived',type='SFBool',value=False)],
            IS=IS(
              connect=[
              connect(nodeField='start',protoField='start'),
              connect(nodeField='stop',protoField='stop'),
              connect(nodeField='samplingInterval',protoField='samplingInterval'),
              connect(nodeField='outputX3D',protoField='outputX3D'),
              connect(nodeField='outputClassicVRML',protoField='outputClassicVRML'),
              connect(nodeField='filterDeadTime',protoField='filterDeadTime')])),
          Group(DEF='RouteHolder',
            children=[
            ROUTE(fromField='position_changed',fromNode='WhereSensor',toField='set_position',toNode='RecordingScript'),
            ROUTE(fromField='orientation_changed',fromNode='WhereSensor',toField='set_orientation',toNode='RecordingScript'),
            ROUTE(fromField='recordingInProgress',fromNode='RecordingScript',toField='enabled',toNode='WhereSensor')])])])),
    #  ==================== 
    Background(groundColor=[(0.2,0.4,0.2)],skyColor=[(0.2,0.2,0.4)]),
    Viewpoint(description='Animated Viewpoint Recorder',position=(0,0,14)),
    Anchor(description='AnimatedViewpointRecorder Example',url=["AnimatedViewpointRecorderExample.x3d","https://savage.nps.edu/Savage/Tools/Authoring/AnimatedViewpointRecorderExample.x3d","AnimatedViewpointRecorderExample.wrl","https://savage.nps.edu/Savage/Tools/Authoring/AnimatedViewpointRecorderExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["AnimatedViewpointRecorderPrototype","is a prototype definition file","","Click this text to see","AnimatedViewpointRecorderExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=1.2)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.6,0.8,0.4))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AnimatedViewpointRecorderPrototype.py")
