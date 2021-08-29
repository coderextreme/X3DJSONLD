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
    meta(content='WheelsFront.x3d',name='title'),
    meta(content='The front wheels and axle perform an animation of raising or lowering when user clicks text. Wheels spin when a cursor is over the wheels.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='11 July 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsFront.x3d',name='identifier'),
    meta(content='front wheels',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='ViewPositionOrientation provides provides console output of local position and orientation as user navigates',name='ViewPositionOrientation',url=["../../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"],
      field=[
      field(accessType='inputOutput',appinfo='Whether or not ViewPositionOrientation sends output to console.',name='enabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Output internal trace messages for debugging this node - developer use only can be ignored.',name='traceEnabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='Ability to turn output tracing on/off at runtime.',name='set_traceEnabled',type='SFBool'),
      field(accessType='outputOnly',appinfo='Output local position.',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='Output local orientation.',name='orientation_changed',type='SFRotation'),
      field(accessType='outputOnly',appinfo='MFString value of new Viewpoint',name='outputViewpointString',type='MFString')]),
    Background(skyColor=[(0.7,0.7,0.7)]),
    Viewpoint(description='Front Wheels Side View Point'),
    Switch(whichChoice=0,
      children=[
      ProtoInstance(name='ViewPositionOrientation')]),
    Group(
      children=[
      Transform(DEF='WheelsFrontAxleTransform',center=(0,3,0),
        children=[
        Group(
          #  wheels axis connecting to fuselage 
          children=[
          Transform(DEF='WheelTransform',
            children=[
            Transform(scale=(0.3,0.3,0.3),
              children=[
              Transform(rotation=(0,1,0,1.571),
                children=[
                Shape(DEF='wheel',
                  appearance=Appearance(
                    material=Material(DEF='black1',diffuseColor=(0,0,0),shininess=0.125,specularColor=(0.2,0.2,0.2))),
                  geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.00,1.30),(.494,1.196),(.923,.923),(1.196,.494),(1.30,0.00),(1.196,-.494),(.923,-.923),(.494,-1.196),(0.00,-1.30)],spine=[(0,0,1.30),(0,.494,1.196),(0,.923,.923),(0,1.196,.494),(0,1.30,0.00),(0,1.196,-.494),(0,.923,-.923),(0,.494,-1.196),(0,0.00,-1.30),(0,-.494,-1.196),(0,-.923,-.923),(0,-1.196,-.494),(0,-1.30,0),(0,-1.196,.494),(0,-.923,.923),(0,-.494,1.196),(0,0.00,1.30)])),
                Shape(DEF='inside_wheel',
                  appearance=Appearance(DEF='white1',
                    material=Material(diffuseColor=(1,1,1))),
                  geometry=Extrusion(crossSection=[(0.00,1.30),(0.10,1.30),(0.10,0.00),(0.10,-1.30),(0.00,-1.30),(0.00,0.00),(0.00,1.30)],spine=[(0,0,1.30),(0,.494,1.196),(0,.923,.923),(0,1.196,.494),(0,1.30,0.00),(0,1.196,-.494),(0,.923,-.923),(0,.494,-1.196),(0,0.00,-1.30),(0,-.494,-1.196),(0,-.923,-.923),(0,-1.196,-.494),(0,-1.30,0),(0,-1.196,.494),(0,-.923,.923),(0,-.494,1.196),(0,0.00,1.30)]))]),
              Transform(rotation=(0,1,0,1.571),
                children=[
                Shape(
                  appearance=Appearance(USE='white1'),
                  geometry=Extrusion(crossSection=[(-0.10,1.30),(0.00,1.30),(0.00,0.00),(0.00,-1.30),(-0.10,-1.30),(-0.10,0.00),(-0.10,1.30)],spine=[(0,0,1.30),(0,.494,1.196),(0,.923,.923),(0,1.196,.494),(0,1.30,0.00),(0,1.196,-.494),(0,.923,-.923),(0,.494,-1.196),(0,0.00,-1.30),(0,-.494,-1.196),(0,-.923,-.923),(0,-1.196,-.494),(0,-1.30,0),(0,-1.196,.494),(0,-.923,.923),(0,-.494,1.196),(0,0.00,1.30)]))]),
              Transform(rotation=(0,1,0,1.571),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0.25,0.5))),
                  geometry=Extrusion(crossSection=[(-0.30,1.30),(-0.10,1.30),(-0.10,0.00),(-0.10,-1.30),(-0.30,-1.30),(-0.30,0.00),(-0.30,1.30)],spine=[(0,0,1.30),(0,.494,1.196),(0,.923,.923),(0,1.196,.494),(0,1.30,0.00),(0,1.196,-.494),(0,.923,-.923),(0,.494,-1.196),(0,0.00,-1.30),(0,-.494,-1.196),(0,-.923,-.923),(0,-1.196,-.494),(0,-1.30,0),(0,-1.196,.494),(0,-.923,.923),(0,-.494,1.196),(0,0.00,1.30)]))])]),
            Transform(translation=(0,0,0.30),
              children=[
              Inline(DEF='Hub',url=["Hub.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/Hub.x3d","Hub.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/Hub.wrl"])]),
            Transform(translation=(0,0,-0.30),
              children=[
              Inline(USE='Hub')]),
            TouchSensor(DEF='WheelTouchSensor',description='touch wheel to spin'),
            TimeSensor(DEF='Clock',cycleInterval=0.5,enabled=False,loop=True),
            OrientationInterpolator(DEF='WheelInterpolator',key=[0,0.5,1.0],keyValue=[(0,0,1,0.0),(0,0,1,3.14),(0,0,1,6.28)]),
            ROUTE(fromField='isOver',fromNode='WheelTouchSensor',toField='set_enabled',toNode='Clock'),
            ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='WheelInterpolator'),
            ROUTE(fromField='value_changed',fromNode='WheelInterpolator',toField='set_rotation',toNode='WheelTransform'),
            Transform(scale=(0.3,0.3,0.3),translation=(0,0,1.5),
              children=[
              Transform(rotation=(0,1,0,1.571),
                children=[
                Shape(DEF='wheel2',
                  appearance=Appearance(
                    material=Material(DEF='black',diffuseColor=(0,0,0),shininess=0.125,specularColor=(0.2,0.2,0.2))),
                  geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.00,1.30),(.494,1.196),(.923,.923),(1.196,.494),(1.30,0.00),(1.196,-.494),(.923,-.923),(.494,-1.196),(0.00,-1.30)],spine=[(0,0,1.30),(0,.494,1.196),(0,.923,.923),(0,1.196,.494),(0,1.30,0.00),(0,1.196,-.494),(0,.923,-.923),(0,.494,-1.196),(0,0.00,-1.30),(0,-.494,-1.196),(0,-.923,-.923),(0,-1.196,-.494),(0,-1.30,0),(0,-1.196,.494),(0,-.923,.923),(0,-.494,1.196),(0,0.00,1.30)])),
                Shape(DEF='inside_wheel2',
                  appearance=Appearance(DEF='white',
                    material=Material(diffuseColor=(1,1,1))),
                  geometry=Extrusion(crossSection=[(0.00,1.30),(0.10,1.30),(0.10,0.00),(0.10,-1.30),(0.00,-1.30),(0.00,0.00),(0.00,1.30)],spine=[(0,0,1.30),(0,.494,1.196),(0,.923,.923),(0,1.196,.494),(0,1.30,0.00),(0,1.196,-.494),(0,.923,-.923),(0,.494,-1.196),(0,0.00,-1.30),(0,-.494,-1.196),(0,-.923,-.923),(0,-1.196,-.494),(0,-1.30,0),(0,-1.196,.494),(0,-.923,.923),(0,-.494,1.196),(0,0.00,1.30)]))]),
              Transform(rotation=(0,1,0,1.571),
                children=[
                Shape(
                  appearance=Appearance(USE='white'),
                  geometry=Extrusion(crossSection=[(-0.10,1.30),(0.00,1.30),(0.00,0.00),(0.00,-1.30),(-0.10,-1.30),(-0.10,0.00),(-0.10,1.30)],spine=[(0,0,1.30),(0,.494,1.196),(0,.923,.923),(0,1.196,.494),(0,1.30,0.00),(0,1.196,-.494),(0,.923,-.923),(0,.494,-1.196),(0,0.00,-1.30),(0,-.494,-1.196),(0,-.923,-.923),(0,-1.196,-.494),(0,-1.30,0),(0,-1.196,.494),(0,-.923,.923),(0,-.494,1.196),(0,0.00,1.30)]))]),
              Transform(rotation=(0,1,0,1.571),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0.25,0.5))),
                  geometry=Extrusion(crossSection=[(-0.30,1.30),(-0.10,1.30),(-0.10,0.00),(-0.10,-1.30),(-0.30,-1.30),(-0.30,0.00),(-0.30,1.30)],spine=[(0,0,1.30),(0,.494,1.196),(0,.923,.923),(0,1.196,.494),(0,1.30,0.00),(0,1.196,-.494),(0,.923,-.923),(0,.494,-1.196),(0,0.00,-1.30),(0,-.494,-1.196),(0,-.923,-.923),(0,-1.196,-.494),(0,-1.30,0),(0,-1.196,.494),(0,-.923,.923),(0,-.494,1.196),(0,0.00,1.30)]))])]),
            Transform(translation=(0,0,1.80),
              children=[
              Inline(USE='Hub')]),
            Transform(translation=(0,0,1.20),
              children=[
              Inline(USE='Hub')])])]),
        Group(
          children=[
          Transform(
            children=[
            Transform(translation=(0,0.55,0.75),
              children=[
              Shape(
                appearance=Appearance(DEF='axis',
                  material=Material(ambientIntensity=0.3,diffuseColor=(0.3,0.3,0.3),shininess=0.20,specularColor=(0.50,0.50,0.60))),
                geometry=Cylinder(height=1,radius=0.08))]),
            Transform(rotation=(1,0,0,1.57),scale=(0.7,0.7,0.7),translation=(0,0,1),
              #  Axis for wheelsFront 
              children=[
              Shape(
                appearance=Appearance(USE='axis'),
                geometry=Cylinder(radius=0.1))]),
            Transform(rotation=(1,0,0,1.57),scale=(0.7,0.7,0.7),translation=(0,0,0.75),
              #  Joint 
              children=[
              Shape(
                appearance=Appearance(USE='axis'),
                geometry=Cylinder(height=0.4,radius=0.15))]),
            Transform(scale=(0.7,0.7,0.7),translation=(0,1.5,0.75),
              #  main axle for front wheels 
              children=[
              Shape(
                appearance=Appearance(DEF='mainAxle',
                  material=Material(diffuseColor=(1.0,1.0,1.0))),
                geometry=Cylinder(height=3,radius=0.25))]),
            Transform(rotation=(0,0,-1,1.05),scale=(0.7,0.7,0.7),translation=(0.68,1.5,0.75),
              #  assistant axle for front wheels 
              children=[
              Shape(
                appearance=Appearance(USE='mainAxle'),
                geometry=Cylinder(radius=0.2))]),
            Transform(rotation=(0,0,-1,1.05),scale=(0.7,0.7,0.7),translation=(1.8,2.15,0.75),
              #  assistant axle for front wheels 
              children=[
              Shape(
                appearance=Appearance(USE='mainAxle'),
                geometry=Cylinder(radius=0.3))])]),
          Viewpoint(description='Front Wheels View Point',orientation=(.2,-.97,.138,1.1899),position=(-3.1,-.1,2.3))])])]),
    Group(DEF='Text',
      children=[
      Transform(DEF='GearUp',scale=(2,2,2),translation=(-4.5,1,3),
        children=[
        Shape(
          geometry=Text(string=["Gear Up"],
            fontStyle=FontStyle(DEF='TextFont',size=0.5)),
          appearance=Appearance(DEF='TextAppearance',
            material=Material(diffuseColor=(0.501961,1,0.745098)))),
        TouchSensor(DEF='AxleGearUpTouchSensor',description='gear up'),
        TimeSensor(DEF='ClockAxleGearUp',cycleInterval=4),
        OrientationInterpolator(DEF='AxleGearUpInterpolator',key=[0,0.5,1.0],keyValue=[(0,0,1,0.0),(0,0,1,0.79),(0,0,1,1.70)]),
        ROUTE(fromField='touchTime',fromNode='AxleGearUpTouchSensor',toField='set_startTime',toNode='ClockAxleGearUp'),
        ROUTE(fromField='fraction_changed',fromNode='ClockAxleGearUp',toField='set_fraction',toNode='AxleGearUpInterpolator'),
        ROUTE(fromField='value_changed',fromNode='AxleGearUpInterpolator',toField='set_rotation',toNode='WheelsFrontAxleTransform')]),
      Transform(DEF='GearDown',scale=(2,2,2),translation=(-4.5,0,3),
        children=[
        Shape(
          geometry=Text(string=["Gear Down"],
            fontStyle=FontStyle(USE='TextFont')),
          appearance=Appearance(USE='TextAppearance')),
        TouchSensor(DEF='AxleGearDownTouchSensor',description='gear down'),
        TimeSensor(DEF='ClockAxleGearDown',cycleInterval=4),
        OrientationInterpolator(DEF='AxleGearDownInterpolator',key=[0,0.5,1.0],keyValue=[(0,0,1,1.70),(0,0,1,0.79),(0,0,1,0.0)]),
        ROUTE(fromField='touchTime',fromNode='AxleGearDownTouchSensor',toField='set_startTime',toNode='ClockAxleGearDown'),
        ROUTE(fromField='fraction_changed',fromNode='ClockAxleGearDown',toField='set_fraction',toNode='AxleGearDownInterpolator'),
        ROUTE(fromField='value_changed',fromNode='AxleGearDownInterpolator',toField='set_rotation',toNode='WheelsFrontAxleTransform')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WheelsFront.py")
