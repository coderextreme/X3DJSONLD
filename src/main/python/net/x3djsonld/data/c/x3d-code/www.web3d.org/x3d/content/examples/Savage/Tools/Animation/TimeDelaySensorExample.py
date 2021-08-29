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
    meta(content='TimeDelaySensorExample.x3d',name='title'),
    meta(content='Time delay sensor design pattern: example use.',name='description'),
    meta(content='Don Brutzman and MV4204 class',name='creator'),
    meta(content='18 August 2003',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='TimeDelaySensorPrototype.x3d',name='reference'),
    meta(content='http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/time.html',name='reference'),
    meta(content='http://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/utils.html',name='reference'),
    meta(content='TimeDelaySensor',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/TimeDelaySensorExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='TimeSensor functionality commences after delayInterval pause',name='TimeDelaySensor',url=["TimeDelaySensorPrototype.x3d#TimeDelaySensor","https://savage.nps.edu/Savage/Tools/Animation/TimeDelaySensorPrototype.x3d#TimeDelaySensor","TimeDelaySensorPrototype.wrl#TimeDelaySensor","https://savage.nps.edu/Savage/Tools/Animation/TimeDelaySensorPrototype.wrl#TimeDelaySensor"],
      field=[
      field(accessType='inputOutput',appinfo='describe the purpose of this sensor',name='description',type='SFString'),
      field(accessType='inputOutput',name='startTime',type='SFTime'),
      field(accessType='inputOutput',name='enabled',type='SFBool'),
      field(accessType='inputOutput',appinfo='seconds',name='delayInterval',type='SFTime'),
      field(accessType='outputOnly',name='delayCompleteTime',type='SFTime'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool')]),
    #  ==================== 
    Group(DEF='TextTouchGroup',
      children=[
      Shape(
        geometry=Text(string=["click text then wait for","3 second time delay","before color changes"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(DEF='TextColor'))),
      TouchSensor(DEF='TouchSensorActive',description='click to initiate time delay and color change')]),
    #  ==================== 
    Group(DEF='TextAnimationGroup',
      children=[
      ProtoInstance(DEF='DelayTimer',name='TimeDelaySensor',
        fieldValue=[
        fieldValue(name='delayInterval',value=3),
        fieldValue(name='traceEnabled',value=True)]),
      TimeSensor(DEF='AnimationClock',cycleInterval=2),
      ROUTE(fromField='touchTime',fromNode='TouchSensorActive',toField='set_startTime',toNode='DelayTimer'),
      ROUTE(fromField='delayCompleteTime',fromNode='DelayTimer',toField='set_startTime',toNode='AnimationClock'),
      ColorInterpolator(DEF='ColorChangerRGB',key=[0,0.5,1],keyValue=[(1,0,0),(0,1,0),(0,0,1)]),
      ROUTE(fromField='fraction_changed',fromNode='AnimationClock',toField='set_fraction',toNode='ColorChangerRGB'),
      ROUTE(fromField='value_changed',fromNode='ColorChangerRGB',toField='diffuseColor',toNode='TextColor')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TimeDelaySensorExample.py")
