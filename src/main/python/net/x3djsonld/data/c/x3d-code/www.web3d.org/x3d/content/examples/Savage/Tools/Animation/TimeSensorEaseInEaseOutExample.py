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
    meta(content='TimeSensorEaseInEaseOutExample.x3d',name='title'),
    meta(content='Time sensor ease-in ease-out design pattern: example use.',name='description'),
    meta(content='Don Brutzman and MV4205 class',name='creator'),
    meta(content='4 April 2006',name='created'),
    meta(content='18 October 2009',name='modified'),
    meta(content='TimeSensorEaseInEaseOutPrototype.x3d',name='reference'),
    meta(content='TimeDelaySensorExample.x3d',name='reference'),
    meta(content='TimeSensorEaseInEaseOut.png',name='reference'),
    meta(content='TimeDelaySensor',name='subject'),
    meta(content='X3D v3.1 or greater',name='info'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/TimeSensorEaseInEaseOutExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='TimeSensorEaseInEaseOut is a TimeSensor node with gradual start and stop rates',name='TimeSensorEaseInEaseOut',url=["TimeSensorEaseInEaseOutPrototype.x3d#TimeSensorEaseInEaseOut","../../../Savage/Tools/Animation/TimeSensorEaseInEaseOutPrototype.x3d#TimeSensorEaseInEaseOut","https://savage.nps.edu/Savage/Tools/Animation/TimeSensorEaseInEaseOutPrototype.x3d#TimeSensorEaseInEaseOut","TimeSensorEaseInEaseOutPrototype.wrl#TimeSensorEaseInEaseOut","../../../Savage/Tools/Animation/TimeSensorEaseInEaseOutPrototype.wrl#TimeSensorEaseInEaseOut","https://savage.nps.edu/Savage/Tools/Animation/TimeSensorEaseInEaseOutPrototype.wrl#TimeSensorEaseInEaseOut"],
      field=[
      field(accessType='inputOutput',appinfo='whether sensor is active',name='enabled',type='SFBool'),
      field(accessType='inputOutput',appinfo='loop duration in seconds',name='cycleInterval',type='SFTime'),
      field(accessType='outputOnly',appinfo='fraction_changed sends values in range [0,1] showing time progress in the current cycle',name='fraction_changed',type='SFFloat'),
      field(accessType='inputOutput',appinfo='repeat indefinitely when loop=true, repeat only once when loop=false',name='loop',type='SFBool'),
      field(accessType='outputOnly',appinfo='isActive true/false events are sent when TimeSensor starts/stops running',name='isActive',type='SFBool'),
      field(accessType='inputOutput',appinfo='when current time exceeds startTime, isActive becomes true and sensor becomes active',name='startTime',type='SFTime'),
      field(accessType='inputOutput',appinfo='when current time exceeds stopTime, isActive becomes false and sensor becomes inactive',name='stopTime',type='SFTime'),
      field(accessType='outputOnly',appinfo='cycleTime sends a time event at startTime, and also at the beginning of each new cycle',name='cycleTime',type='SFTime'),
      field(accessType='outputOnly',appinfo='absolute time (since January 1, 1970) for each event loop',name='time',type='SFTime'),
      field(accessType='inputOutput',appinfo='when current time exceeds pauseTime, isPaused becomes false and sensor becomes paused',name='pauseTime',type='SFTime'),
      field(accessType='outputOnly',appinfo='isPaused true/false events are sent when TimeSensor is paused/resumed',name='isPaused',type='SFBool'),
      field(accessType='outputOnly',appinfo='elapsed time since TimeSensor activated/running, cumulative in seconds, not counting any paused time',name='elapsedTime',type='SFTime'),
      field(accessType='inputOutput',appinfo='when current time exceeds resumeTime, isPaused becomes false and sensor resumes running',name='resumeTime',type='SFTime')]),
    #  ==================== 
    Transform(DEF='TransformBoxLinear',translation=(-3,2,0),
      children=[
      Shape(
        geometry=Box(),
        appearance=Appearance(
          material=Material(),))]),
    Transform(DEF='TransformBoxEasy',translation=(-3,1,0),
      children=[
      Shape(
        geometry=Box(),
        appearance=Appearance(
          material=Material(diffuseColor=(0.9,0.3,0.2))))]),
    Transform(translation=(0,-2,0),
      children=[
      Group(DEF='TextTouchGroup',
        children=[
        Shape(
          geometry=Text(string=["click text to move Boxes:","linear TimeSensor grey","EaseInEaseOut red"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=Material(DEF='TextColor',diffuseColor=(0,0.7,0.7)))),
        TouchSensor(DEF='TouchSensorActive',description='click to initiate time delay and color change')])]),
    #  ==================== 
    Group(DEF='TextAnimationLinearGroup',
      children=[
      TimeSensor(DEF='LinearClock',cycleInterval=3),
      ROUTE(fromField='touchTime',fromNode='TouchSensorActive',toField='set_startTime',toNode='LinearClock'),
      PositionInterpolator(DEF='MoveLinear',key=[0,1],keyValue=[(-3,2,0),(3,2,0)]),
      ROUTE(fromField='fraction_changed',fromNode='LinearClock',toField='set_fraction',toNode='MoveLinear'),
      ROUTE(fromField='value_changed',fromNode='MoveLinear',toField='set_translation',toNode='TransformBoxLinear')]),
    Group(DEF='TextAnimationEasedGroup',
      children=[
      ProtoInstance(DEF='EasyClock',name='TimeSensorEaseInEaseOut',
        fieldValue=[
        fieldValue(name='cycleInterval',value=3)]),
      ROUTE(fromField='touchTime',fromNode='TouchSensorActive',toField='startTime',toNode='EasyClock'),
      PositionInterpolator(DEF='MoveEasy',key=[0,1],keyValue=[(-3,1,0),(3,1,0)]),
      ROUTE(fromField='fraction_changed',fromNode='EasyClock',toField='set_fraction',toNode='MoveEasy'),
      ROUTE(fromField='value_changed',fromNode='MoveEasy',toField='set_translation',toNode='TransformBoxEasy')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TimeSensorEaseInEaseOutExample.py")
