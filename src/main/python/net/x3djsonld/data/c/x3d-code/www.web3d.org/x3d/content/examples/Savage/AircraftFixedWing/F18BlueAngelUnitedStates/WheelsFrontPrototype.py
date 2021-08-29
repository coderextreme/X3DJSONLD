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
    meta(content='WheelsFrontPrototype.x3d',name='title'),
    meta(content='This prototype performs raising and lowering front wheels and axle. The clickable axle triggers an animation based on the boolean.',name='description'),
    meta(content='Etsuko Lippi, Jane Wu',name='creator'),
    meta(content='11 July 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsFrontPrototype.x3d',name='identifier'),
    meta(content='front wheels prototype, gear up and down',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='WheelsFront',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='boolean eventIn: true = wheels up false = wheels down.',name='gearup',type='SFBool'),
        field(accessType='inputOnly',name='animationStartTime',type='SFTime'),
        field(accessType='outputOnly',name='gearupOut',type='SFBool'),
        field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
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
                      appearance=Appearance(
                        material=Material(DEF='white1',diffuseColor=(1,1,1))),
                      geometry=Extrusion(crossSection=[(0.00,1.30),(0.10,1.30),(0.10,0.00),(0.10,-1.30),(0.00,-1.30),(0.00,0.00),(0.00,1.30)],spine=[(0,0,1.30),(0,.494,1.196),(0,.923,.923),(0,1.196,.494),(0,1.30,0.00),(0,1.196,-.494),(0,.923,-.923),(0,.494,-1.196),(0,0.00,-1.30),(0,-.494,-1.196),(0,-.923,-.923),(0,-1.196,-.494),(0,-1.30,0),(0,-1.196,.494),(0,-.923,.923),(0,-.494,1.196),(0,0.00,1.30)]))]),
                  Transform(rotation=(0,1,0,1.571),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(USE='white1')),
                      geometry=Extrusion(crossSection=[(-0.10,1.30),(0.00,1.30),(0.00,0.00),(0.00,-1.30),(-0.10,-1.30),(-0.10,0.00),(-0.10,1.30)],spine=[(0,0,1.30),(0,.494,1.196),(0,.923,.923),(0,1.196,.494),(0,1.30,0.00),(0,1.196,-.494),(0,.923,-.923),(0,.494,-1.196),(0,0.00,-1.30),(0,-.494,-1.196),(0,-.923,-.923),(0,-1.196,-.494),(0,-1.30,0),(0,-1.196,.494),(0,-.923,.923),(0,-.494,1.196),(0,0.00,1.30)]))]),
                  Transform(rotation=(0,1,0,1.571),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(diffuseColor=(0,0.25,0.5))),
                      geometry=Extrusion(crossSection=[(-0.30,1.30),(-0.10,1.30),(-0.10,0.00),(-0.10,-1.30),(-0.30,-1.30),(-0.30,0.00),(-0.30,1.30)],spine=[(0,0,1.30),(0,.494,1.196),(0,.923,.923),(0,1.196,.494),(0,1.30,0.00),(0,1.196,-.494),(0,.923,-.923),(0,.494,-1.196),(0,0.00,-1.30),(0,-.494,-1.196),(0,-.923,-.923),(0,-1.196,-.494),(0,-1.30,0),(0,-1.196,.494),(0,-.923,.923),(0,-.494,1.196),(0,0.00,1.30)]))])]),
                Transform(translation=(0,0,0.30),
                  children=[
                  Inline(DEF='Hub',url=["Hub.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18/Hub.wrl","Hub.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18/Hub.x3d"])]),
                Transform(translation=(0,0,-0.30),
                  children=[
                  Inline(USE='Hub')]),
                TouchSensor(DEF='WheelTouchSensor',description='click to retract'),
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
                      appearance=Appearance(
                        material=Material(DEF='white',diffuseColor=(1,1,1))),
                      geometry=Extrusion(crossSection=[(0.00,1.30),(0.10,1.30),(0.10,0.00),(0.10,-1.30),(0.00,-1.30),(0.00,0.00),(0.00,1.30)],spine=[(0,0,1.30),(0,.494,1.196),(0,.923,.923),(0,1.196,.494),(0,1.30,0.00),(0,1.196,-.494),(0,.923,-.923),(0,.494,-1.196),(0,0.00,-1.30),(0,-.494,-1.196),(0,-.923,-.923),(0,-1.196,-.494),(0,-1.30,0),(0,-1.196,.494),(0,-.923,.923),(0,-.494,1.196),(0,0.00,1.30)]))]),
                  Transform(rotation=(0,1,0,1.571),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(USE='white')),
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
                    geometry=Cylinder(radius=0.3))])])]),
            Script(DEF='GearUpDownScript',
              field=[
              field(accessType='inputOnly',appinfo='eventIn: boolean true: wheels up false: wheels down',name='gearup',type='SFBool'),
              field(accessType='outputOnly',name='gearupOut',type='SFBool'),
              field(accessType='outputOnly',name='keyValue',type='MFRotation'),
              field(accessType='initializeOnly',name='kV1',type='SFRotation'),
              field(accessType='initializeOnly',name='kV2',type='SFRotation'),
              field(accessType='initializeOnly',name='kV3',type='SFRotation'),
              field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
              field(accessType='inputOnly',name='animationStartTime',type='SFTime'),
              field(accessType='outputOnly',name='clockStartTime',type='SFTime'),
              field(accessType='initializeOnly',name='traceEnabled',type='SFBool')],
              IS=IS(
                connect=[
                connect(nodeField='gearup',protoField='gearup'),
                connect(nodeField='animationStartTime',protoField='animationStartTime'),
                connect(nodeField='gearupOut',protoField='gearupOut'),
                connect(nodeField='traceEnabled',protoField='traceEnabled')]))]),
          Viewpoint(description='Front Wheels Side View Point'),
          Viewpoint(description='Front Wheels View Point',orientation=(.2,-.97,.138,1.1899),position=(-3.1,-.1,2.3)),
          OrientationInterpolator(DEF='GearUpDownInterpolator',key=[0,0.5,1.0],keyValue=[(0,0,1,0.0),(0,0,1,0.79),(0,0,1,1.70)]),
          TimeSensor(DEF='ClockAxleGearUpDown',cycleInterval=4),
          ROUTE(fromField='clockStartTime',fromNode='GearUpDownScript',toField='set_startTime',toNode='ClockAxleGearUpDown'),
          ROUTE(fromField='gearupOut',fromNode='GearUpDownScript',toField='set_enabled',toNode='ClockAxleGearUpDown'),
          ROUTE(fromField='keyValue',fromNode='GearUpDownScript',toField='set_keyValue',toNode='GearUpDownInterpolator'),
          ROUTE(fromField='fraction_changed',fromNode='ClockAxleGearUpDown',toField='set_fraction',toNode='GearUpDownInterpolator'),
          ROUTE(fromField='fraction_changed',fromNode='ClockAxleGearUpDown',toField='set_fraction',toNode='GearUpDownScript'),
          ROUTE(fromField='value_changed',fromNode='GearUpDownInterpolator',toField='set_rotation',toNode='WheelsFrontAxleTransform')])])),
    #  ============================= 
    Background(skyColor=[(0.7,0.7,0.7)]),
    Anchor(description='WheelsFrontExample',parameter=["target=_blank"],url=["WheelsFrontExample.wrl","../../AircraftFixedWing/F18BlueAngelUnitedStates/WheelsFrontExample.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsFrontExample.wrl","WheelsFrontExample.x3d","../../AircraftFixedWing/F18BlueAngelUnitedStates/WheelsFrontExample.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsFrontExample.x3d"],
      children=[
      Shape(
        geometry=Text(string=["WheelsFrontPrototype","is a prototype definition file","","To see an example scene","click on this text and view","WheelsFrontExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(),)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WheelsFrontPrototype.py")
