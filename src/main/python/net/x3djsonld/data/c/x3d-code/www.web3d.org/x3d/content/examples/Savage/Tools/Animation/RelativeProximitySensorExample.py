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
    meta(content='RelativeProximitySensorExample.x3d',name='title'),
    meta(content='RelativeProximitySensor design pattern: example use for paired object-to-object collision detection.',name='description'),
    meta(content='Don Brutzman and MV4204 class',name='creator'),
    meta(content='7 September 2004',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='RelativeProximitySensorPrototype.x3d',name='reference'),
    meta(content='Object-to-object collision detection',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/RelativeProximitySensorExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='RelativeProximitySensor measures paired object-to-object collision detection',name='RelativeProximitySensor',url=["RelativeProximitySensorPrototype.x3d#RelativeProximitySensor","https://savage.nps.edu/Savage/Tools/Animation/RelativeProximitySensorPrototype.x3d#RelativeProximitySensor","RelativeProximitySensorPrototype.wrl#RelativeProximitySensor","https://savage.nps.edu/Savage/Tools/Animation/RelativeProximitySensorPrototype.wrl#RelativeProximitySensor"],
      field=[
      field(accessType='inputOutput',appinfo='describe the purpose of this sensor',name='description',type='SFString'),
      field(accessType='initializeOnly',appinfo='where is the primary object',name='locationPrimary',type='SFVec3f'),
      field(accessType='inputOnly',appinfo='update location of the primary object',name='set_locationPrimary',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='where is the secondary object',name='locationSecondary',type='SFVec3f'),
      field(accessType='inputOnly',appinfo='update location of the secondary object',name='set_locationSecondary',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='distance for detecting object-to-object collision',name='proximityRangeThreshold',type='SFFloat'),
      field(accessType='inputOnly',appinfo='change threshold distance for detecting collision',name='set_proximityRangeThreshold',type='SFFloat'),
      field(accessType='outputOnly',appinfo='is object-to-object distance less than proximityRangeThreshold?',name='isInRange',type='SFBool'),
      field(accessType='outputOnly',appinfo='when did object-to-object range meet detection criteria?',name='isInRangeTime',type='SFTime'),
      field(accessType='initializeOnly',appinfo='whether sensor is active',name='enabled',type='SFBool'),
      field(accessType='inputOnly',name='set_enabled',type='SFBool')]),
    Viewpoint(description='RelativeProximitySensor test',position=(0,2,25)),
    #  ==================== 
    Group(DEF='TextTouchGroup',
      children=[
      Transform(translation=(0,5,0),
        children=[
        Shape(
          geometry=Text(string=["click text to watch object motion and","RelativeProximitySensor console alerts"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=1.8)),
          appearance=Appearance(
            material=Material(DEF='TextColor',diffuseColor=(0.8,0.1,0.1)))),
        Shape(
          geometry=Box(size=(25,4,0.01)),
          appearance=Appearance(
            material=Material(transparency=1)))]),
      TouchSensor(DEF='TouchSensorActive',description='click to initiate time delay and color change')]),
    #  ==================== 
    Group(DEF='ShapeAnimationGroup',
      children=[
      TimeSensor(DEF='AnimationClock',cycleInterval=4),
      ROUTE(fromField='touchTime',fromNode='TouchSensorActive',toField='set_startTime',toNode='AnimationClock'),
      Transform(DEF='LeftHandBoxTransform',translation=(-10,0,0),
        children=[
        Shape(
          geometry=Box(),
          appearance=Appearance(
            material=Material(diffuseColor=(0.1,0.8,0.1)))),
        PositionInterpolator(DEF='BoxMover',key=[0,0.5,1],keyValue=[(-10,0,0),(-3,0,0),(-10,0,0)]),
        ROUTE(fromField='fraction_changed',fromNode='AnimationClock',toField='set_fraction',toNode='BoxMover'),
        ROUTE(fromField='value_changed',fromNode='BoxMover',toField='set_translation',toNode='LeftHandBoxTransform')]),
      Transform(DEF='RightHandSphereTransform',translation=(10,0,0),
        children=[
        Shape(
          geometry=Sphere(),
          appearance=Appearance(
            material=Material(diffuseColor=(0.1,0.1,0.8)))),
        PositionInterpolator(DEF='SphereMover',key=[0,0.5,1],keyValue=[(10,0,0),(2,0,0),(10,0,0)]),
        ROUTE(fromField='fraction_changed',fromNode='AnimationClock',toField='set_fraction',toNode='SphereMover'),
        ROUTE(fromField='value_changed',fromNode='SphereMover',toField='set_translation',toNode='RightHandSphereTransform')])]),
    ProtoInstance(DEF='RPS',name='RelativeProximitySensor',
      fieldValue=[
      fieldValue(name='description',value='test case'),
      fieldValue(name='enabled',value=True),
      fieldValue(name='locationPrimary',value=(-10,0,0)),
      fieldValue(name='locationSecondary',value=(10,0,0))]),
    #  Connect interpolator output to monitor movement of first object. 
    ROUTE(fromField='value_changed',fromNode='BoxMover',toField='set_locationPrimary',toNode='RPS'),
    #  Test use of Transform output, which means that this sensor could be used to monitor other nodes that might have multiple movers. 
    ROUTE(fromField='translation_changed',fromNode='RightHandSphereTransform',toField='set_locationSecondary',toNode='RPS')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RelativeProximitySensorExample.py")
