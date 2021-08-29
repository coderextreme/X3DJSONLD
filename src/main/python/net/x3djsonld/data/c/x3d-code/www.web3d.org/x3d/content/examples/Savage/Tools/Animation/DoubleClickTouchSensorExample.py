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
    meta(content='DoubleClickTouchSensorExample.x3d',name='title'),
    meta(content='Double-click TouchSensor design pattern, showing example use.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='26 May 2003',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='DoubleClickTouchSensorPrototype.x3d',name='reference'),
    meta(content='http://www.web3d.org/x3d/specifications/ISO-IEC-19775-FDIS-X3dAbstractSpecification/Part01/components/pointingsensor.html#TouchSensor',name='reference'),
    meta(content='DoubleClickTouchSensor',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/DoubleClickTouchSensorExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='TimeSensor functionality commences after delayInterval pause',name='TimeDelaySensor',url=["TimeDelaySensorPrototype.x3d#TimeDelaySensor","../../../Savage/Tools/Animation/TimeDelaySensorPrototype.x3d#TimeDelaySensor","https://savage.nps.edu/Savage/Tools/Animation/TimeDelaySensorPrototype.x3d#TimeDelaySensor","TimeDelaySensorPrototype.wrl#TimeDelaySensor","../../../Savage/Tools/Animation/TimeDelaySensorPrototype.wrl#TimeDelaySensor","https://savage.nps.edu/Savage/Tools/Animation/TimeDelaySensorPrototype.wrl#TimeDelaySensor"],
      field=[
      field(accessType='inputOutput',appinfo='describe the purpose of this sensor',name='description',type='SFString'),
      field(accessType='inputOutput',name='startTime',type='SFTime'),
      field(accessType='inputOutput',name='enabled',type='SFBool'),
      field(accessType='inputOutput',appinfo='seconds',name='delayInterval',type='SFTime'),
      field(accessType='outputOnly',name='delayCompleteTime',type='SFTime'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool')]),
    ExternProtoDeclare(appinfo='DoubleClickTouchSensor functionality activates when user double clicks (or double selects) within maxDelayInterval',name='DoubleClickTouchSensor',url=["DoubleClickTouchSensorPrototype.x3d#DoubleClickTouchSensor","../../../Savage/Tools/Animation/DoubleClickTouchSensorPrototype.x3d#DoubleClickTouchSensor","https://savage.nps.edu/Savage/Tools/Animation/DoubleClickTouchSensorPrototype.x3d#DoubleClickTouchSensor","DoubleClickTouchSensorPrototype.wrl#DoubleClickTouchSensor","../../../Savage/Tools/Animation/DoubleClickTouchSensorPrototype.wrl#DoubleClickTouchSensor","https://savage.nps.edu/Savage/Tools/Animation/DoubleClickTouchSensorPrototype.wrl#DoubleClickTouchSensor"],
      field=[
      field(accessType='inputOutput',appinfo='describe the purpose of this sensor',name='description',type='SFString'),
      field(accessType='initializeOnly',appinfo='seconds',name='maxDelayInterval',type='SFTime'),
      field(accessType='inputOutput',name='enabled',type='SFBool'),
      field(accessType='outputOnly',name='isActive',type='SFBool'),
      field(accessType='outputOnly',name='isOver',type='SFBool'),
      field(accessType='outputOnly',appinfo='seconds',name='touchTime',type='SFTime'),
      field(accessType='outputOnly',name='hitPoint_changed',type='SFVec3f'),
      field(accessType='outputOnly',name='hitNormal_changed',type='SFVec3f'),
      field(accessType='outputOnly',name='hitTexCoord_changed',type='SFVec2f'),
      field(accessType='initializeOnly',name='metadata',type='SFNode'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool')]),
    #  ==================== 
    Group(DEF='TextTouchGroup',
      children=[
      Shape(
        geometry=Text(string=["Double-click text then","wait for 1-second time delay","before color changes"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(DEF='TextColor'))),
      ProtoInstance(DEF='TouchSensorActive',name='DoubleClickTouchSensor',
        fieldValue=[
        fieldValue(name='description',value='double click to initiate time delay and color change'),
        fieldValue(name='traceEnabled',value=True)]),
      #  ==================== 
      Group(DEF='TextAnimationGroup',
        children=[
        ProtoInstance(DEF='DelayTimer',name='TimeDelaySensor',
          fieldValue=[
          fieldValue(name='delayInterval',value=1),
          fieldValue(name='traceEnabled',value=True)]),
        TimeSensor(DEF='AnimationClock',cycleInterval=2),
        ROUTE(fromField='touchTime',fromNode='TouchSensorActive',toField='startTime',toNode='DelayTimer'),
        ROUTE(fromField='delayCompleteTime',fromNode='DelayTimer',toField='set_startTime',toNode='AnimationClock'),
        ColorInterpolator(DEF='ColorChangerRGB',key=[0,0.5,1],keyValue=[(1,0,0),(0,1,0),(0,0,1)]),
        ROUTE(fromField='value_changed',fromNode='ColorChangerRGB',toField='diffuseColor',toNode='TextColor'),
        ROUTE(fromField='fraction_changed',fromNode='AnimationClock',toField='set_fraction',toNode='ColorChangerRGB')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DoubleClickTouchSensorExample.py")
