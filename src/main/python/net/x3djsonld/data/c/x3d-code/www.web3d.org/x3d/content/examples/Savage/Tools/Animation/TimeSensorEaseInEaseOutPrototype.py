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
    meta(content='TimeSensorEaseInEaseOutPrototype.x3d',name='title'),
    meta(content='Time sensor ease-in ease-out design pattern, implemented as a reusable prototype node.',name='description'),
    meta(content='Don Brutzman and MV4204 class',name='creator'),
    meta(content='4 April 2006',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='TimeSensorEaseInEaseOutExample.x3d',name='reference'),
    meta(content='TimeDelaySensorPrototype.x3d',name='reference'),
    meta(content='TimeSensorEaseInEaseOut',name='subject'),
    meta(content='X3D v3.1 or greater',name='info'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/TimeSensorEaseInEaseOutPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(appinfo='TimeSensorEaseInEaseOut is a TimeSensor node with gradual start and stop rates',name='TimeSensorEaseInEaseOut',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='whether sensor is active',name='enabled',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='repeat indefinitely when loop=true, repeat only once when loop=false',name='loop',type='SFBool',value=False),
        field(accessType='inputOutput',appinfo='loop duration in seconds',name='cycleInterval',type='SFTime',value=1),
        field(accessType='outputOnly',appinfo='fraction_changed sends values in range [0,1] showing time progress in the current cycle',name='fraction_changed',type='SFFloat'),
        field(accessType='outputOnly',appinfo='isActive true/false events are sent when TimeSensor starts/stops running',name='isActive',type='SFBool'),
        field(accessType='outputOnly',appinfo='isPaused true/false events are sent when TimeSensor is paused/resumed',name='isPaused',type='SFBool'),
        field(accessType='inputOutput',appinfo='when current time exceeds startTime, isActive becomes true and sensor becomes active',name='startTime',type='SFTime',value=0),
        field(accessType='inputOutput',appinfo='when current time exceeds stopTime, isActive becomes false and sensor becomes inactive',name='stopTime',type='SFTime',value=0),
        field(accessType='inputOutput',appinfo='when current time exceeds pauseTime, isPaused becomes false and sensor becomes paused',name='pauseTime',type='SFTime',value=0),
        field(accessType='inputOutput',appinfo='when current time exceeds resumeTime, isPaused becomes false and sensor resumes running',name='resumeTime',type='SFTime',value=0),
        field(accessType='outputOnly',appinfo='cycleTime sends a time event at startTime, and also at the beginning of each new cycle',name='cycleTime',type='SFTime'),
        field(accessType='outputOnly',appinfo='elapsed time since TimeSensor activated/running, cumulative in seconds, not counting any paused time',name='elapsedTime',type='SFTime'),
        field(accessType='outputOnly',appinfo='absolute time (since January 1, 1970) for each event loop',name='time',type='SFTime')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          TimeSensor(DEF='TimeDelayClock',
            IS=IS(
              connect=[
              connect(nodeField='enabled',protoField='enabled'),
              connect(nodeField='loop',protoField='loop'),
              connect(nodeField='cycleInterval',protoField='cycleInterval'),
              #  fraction_changed is handled by ScalarInterpolator 
              connect(nodeField='isActive',protoField='isActive'),
              connect(nodeField='isPaused',protoField='isPaused'),
              connect(nodeField='startTime',protoField='startTime'),
              connect(nodeField='stopTime',protoField='stopTime'),
              connect(nodeField='pauseTime',protoField='pauseTime'),
              connect(nodeField='resumeTime',protoField='resumeTime'),
              connect(nodeField='cycleTime',protoField='cycleTime'),
              connect(nodeField='elapsedTime',protoField='elapsedTime'),
              connect(nodeField='time',protoField='time')])),
          ScalarInterpolator(DEF='PiecewiseLinearDelayFilter',key=[0,0.1,0.9,1],keyValue=[0,0.03,0.97,1],
            IS=IS(
              connect=[
              connect(nodeField='value_changed',protoField='fraction_changed')])),
          ROUTE(fromField='fraction_changed',fromNode='TimeDelayClock',toField='set_fraction',toNode='PiecewiseLinearDelayFilter')])])),
    #  ====================================== 
    #  Example use 
    Anchor(description='TimeSensorEaseInEaseOut Example',url=["TimeSensorEaseInEaseOutExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/TimeSensorEaseInEaseOutExample.x3d","TimeSensorEaseInEaseOutExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/TimeSensorEaseInEaseOutExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["TimeSensorEaseInEaseOutPrototype","defines a prototype","","Click text to see","TimeSensorEaseInEaseOutExample scene"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.7)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TimeSensorEaseInEaseOutPrototype.py")
