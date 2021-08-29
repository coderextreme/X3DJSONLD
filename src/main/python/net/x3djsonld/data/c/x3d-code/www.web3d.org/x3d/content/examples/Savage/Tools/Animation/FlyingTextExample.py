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
    meta(content='FlyingTextExample.x3d',name='title'),
    meta(content='Prototype definition for a flying text message. Waypoints, time intervals, cycleInterval and text message can be overridden.',name='description'),
    meta(content='Murat Onder',name='creator'),
    meta(content='2 June 2004',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='FlyingTextExample.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/FlyingTextExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='DoubleClickTouchSensor functionality activates when user double clicks (or double selects) within maxDelayInterval',name='DoubleClickTouchSensor',url=["../../Savage/Tools/Animation/DoubleClickTouchSensorPrototype.x3d#DoubleClickTouchSensor","../../../Savage/Tools/Animation/DoubleClickTouchSensorPrototype.x3d#DoubleClickTouchSensor","https://savage.nps.edu/Savage/Tools/Animation/DoubleClickTouchSensorPrototype.x3d#DoubleClickTouchSensor","../../../Savage/Tools/Animation/DoubleClickTouchSensorPrototype.wrl#DoubleClickTouchSensor","../../Savage/Tools/Animation/DoubleClickTouchSensorPrototype.wrl#DoubleClickTouchSensor","https://savage.nps.edu/Savage/Tools/Animation/DoubleClickTouchSensorPrototype.wrl#DoubleClickTouchSensor"],
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
    ProtoInstance(DEF='ExampleDoubleClickTouchSensor',name='DoubleClickTouchSensor',
      fieldValue=[
      fieldValue(name='description',value='double click to initiate time-delayed event'),
      fieldValue(name='maxDelayInterval',value=1)]),
    ExternProtoDeclare(appinfo='Visualize message transfer between two points as flying text',name='FlyingText',url=["../../../Savage/Tools/Animation/FlyingTextPrototype.x3d#FlyingText","https://savage.nps.edu/Savage/Tools/Animation/FlyingTextPrototype.x3d#FlyingText","../../../Savage/Tools/Animation/FlyingTextPrototype.wrl#FlyingText","https://savage.nps.edu/Savage/Tools/Animation/FlyingTextPrototype.wrl#FlyingText"],
      field=[
      field(accessType='initializeOnly',name='waypoints',type='MFVec3f'),
      field(accessType='inputOnly',name='set_waypoints',type='MFVec3f'),
      field(accessType='initializeOnly',name='timeIntervals',type='MFTime'),
      field(accessType='inputOnly',name='set_timeIntervals',type='MFTime'),
      field(accessType='initializeOnly',name='textMessage',type='MFString'),
      field(accessType='inputOnly',name='set_textMessage',type='MFString'),
      field(accessType='initializeOnly',name='visible',type='SFBool'),
      field(accessType='inputOnly',name='set_visible',type='SFBool'),
      field(accessType='initializeOnly',name='loop',type='SFBool'),
      field(accessType='initializeOnly',name='axisOfRotation',type='SFVec3f'),
      field(accessType='initializeOnly',name='timeSensorEnabled',type='SFBool'),
      field(accessType='inputOutput',name='startTime',type='SFTime'),
      field(accessType='inputOnly',name='set_startTime',type='SFTime'),
      field(accessType='inputOutput',name='stopTime',type='SFTime'),
      field(accessType='inputOnly',name='set_stopTime',type='SFTime'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
      field(accessType='inputOutput',name='textDiffuseColor',type='SFColor'),
      field(accessType='inputOutput',name='fontStyle',type='SFNode')]),
    Background(groundAngle=[1.309,1.570796],groundColor=[(.1,.1,0),(.5,.25,.2),(.6,.6,.2)],skyAngle=[1.309,1.571],skyColor=[(.7,.3,0),(.6,.4,0),(1,1,0)]),
    Transform(DEF='ProtoInstanceTransform',
      children=[
      ProtoInstance(DEF='FlyingTextInstance',name='FlyingText',
        fieldValue=[
        fieldValue(name='waypoints',value=[(0,0,0),(-4,0,0),(4,2,-2),(0,-2,2),(0,0,0)]),
        fieldValue(name='timeIntervals',value=[5,4,1,3]),
        fieldValue(name='textMessage',value=["flying","text"])])]),
    Group(
      children=[
      TouchSensor(DEF='TouchRedSphere',description='touch to start animation'),
      ROUTE(fromField='touchTime',fromNode='TouchRedSphere',toField='set_startTime',toNode='FlyingTextInstance'),
      Transform(translation=(-4,0,0),
        children=[
        Shape(
          geometry=Sphere(radius=.2),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0))))]),
      Transform(translation=(4,2,-2),
        children=[
        Shape(
          geometry=Sphere(radius=.2),
          appearance=Appearance(
            material=Material(diffuseColor=(0,1,0))))]),
      Transform(translation=(0,-2,2),
        children=[
        Shape(
          geometry=Sphere(radius=.2),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,1))))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FlyingTextExample.py")
