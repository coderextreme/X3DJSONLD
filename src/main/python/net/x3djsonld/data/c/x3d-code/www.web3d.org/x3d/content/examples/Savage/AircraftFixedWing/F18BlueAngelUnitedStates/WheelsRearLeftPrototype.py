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
    meta(content='WheelsRearLeftPrototype.x3d',name='title'),
    meta(content='This prototype performs the movement to raise and lower rear left wheels and axle. The clickable axle triggers an animation.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='18 October 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsRearLeftPrototype.x3d',name='identifier'),
    meta(content='rear left wheel Prototype, gear up and down animation',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='WheelsRearLeft',
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
          Transform(DEF='WheelsRearTransform',center=(0,3.8,0),
            children=[
            Transform(DEF='WheelsRearAxleTransform',center=(0.02,0.2,1.72),
              children=[
              Group(
                #  wheels axis connecting to fuselage 
                children=[
                Transform(DEF='WheelTransform',scale=(1.2,1.2,1.2),
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
                    Inline(DEF='Hub',url=["Hub.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/Hub.wrl","Hub.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/Hub.x3d"])]),
                  Transform(translation=(0,0,-0.30),
                    children=[
                    Inline(USE='Hub')]),
                  TouchSensor(DEF='WheelTouchSensor',description='pointer spins wheel'),
                  TimeSensor(DEF='Clock',cycleInterval=0.5,enabled=False,loop=True),
                  OrientationInterpolator(DEF='WheelInterpolator',key=[0,0.5,1.0],keyValue=[(0,0,1,0.0),(0,0,1,3.14),(0,0,1,6.28)]),
                  ROUTE(fromField='isOver',fromNode='WheelTouchSensor',toField='set_enabled',toNode='Clock'),
                  ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='WheelInterpolator'),
                  ROUTE(fromField='value_changed',fromNode='WheelInterpolator',toField='set_rotation',toNode='WheelTransform')])]),
              Group(
                children=[
                Transform(DEF='JointsAxisAndAssistantsTest',
                  children=[
                  Group(DEF='JointsAxisAndAssistants',
                    children=[
                    Transform(rotation=(-0.13,0.98,-0.13,1.59),scale=(0.1,0.1,0.1),translation=(0,0.15,1.55),
                      #  Joint center 
                      children=[
                      Shape(
                        appearance=Appearance(DEF='AxleColor',
                          material=Material(ambientIntensity=0.3,diffuseColor=(0.3,0.3,0.3),shininess=0.20,specularColor=(0.50,0.50,0.60))),
                        geometry=Extrusion(DEF='joint',creaseAngle=2.5,crossSection=[(0.00,1.30),(.494,1.196),(.923,.923),(1.196,.494),(1.30,0.00),(1.196,-.494),(.923,-.923),(.494,-1.196),(0.00,-1.30),(-.494,-1.196),(-.923,-.923),(-1.196,-.494),(-1.30,-0.00),(-1.196,.494),(-.923,.923),(-.494,1.196),(0.00,1.30)],spine=[(-2.5,1.5,0),(-2.5,1,0),(-2,0,0),(-2,0,0),(-1.5,-1,0),(-0.5,-1.5,0),(0.5,-1.5,0),(1.5,-1.5,0),(2,-1.0,0)]))]),
                    Transform(rotation=(-0.13,0.98,-0.13,1.59),scale=(0.07,0.07,0.07),translation=(0.30,0.15,1.55),
                      #  Joint side 
                      children=[
                      Shape(
                        appearance=Appearance(USE='AxleColor'),
                        geometry=Extrusion(USE='joint'))]),
                    Transform(rotation=(-0.13,0.98,-0.13,1.59),scale=(0.07,0.07,0.07),translation=(-0.30,0.15,1.55),
                      #  Joint side 
                      children=[
                      Shape(
                        appearance=Appearance(USE='AxleColor'),
                        geometry=Extrusion(USE='joint'))]),
                    Transform(rotation=(1,0,0,1.57),scale=(0.7,0.7,0.7),translation=(0,0,0.5),
                      #  Wheel connected axis. (black) 
                      children=[
                      Shape(
                        appearance=Appearance(USE='AxleColor'),
                        geometry=Cylinder(height=1.0,radius=0.1))]),
                    Transform(rotation=(1,0,0,1.57),scale=(0.7,0.7,0.7),translation=(0,0,0.65),
                      #  The second axis. (black) 
                      children=[
                      Shape(
                        appearance=Appearance(USE='AxleColor'),
                        geometry=Cylinder(height=0.4,radius=0.25))]),
                    Transform(rotation=(1,0,0,1.57),scale=(0.7,0.7,0.7),translation=(0,0,1.1),
                      #  assistant axle for rear wheel(white) 
                      children=[
                      Shape(
                        appearance=Appearance(
                          material=Material(diffuseColor=(1.0,1.0,1.0))),
                        geometry=Cylinder(height=1,radius=0.3))]),
                    Transform(rotation=(1,0,0,1.57),scale=(0.7,0.7,0.7),translation=(0.3,0,1.1),
                      #  assistant axle for rear wheel(white) 
                      children=[
                      Shape(
                        appearance=Appearance(DEF='AssistantAxleColor',
                          material=Material(diffuseColor=(1.0,1.0,1.0))),
                        geometry=Cylinder(height=1,radius=0.3))]),
                    Transform(rotation=(1,0,0,1.57),scale=(0.7,0.7,0.7),translation=(-0.3,0,1.1),
                      #  assistant axle for rear wheel(white) 
                      children=[
                      Shape(
                        appearance=Appearance(USE='AssistantAxleColor'),
                        geometry=Cylinder(height=1,radius=0.3))])])])])]),
            Transform(
              children=[
              Group(DEF='RearAxles',
                children=[
                Transform(rotation=(1,0,0,0.44),scale=(0.7,0.7,0.7),translation=(0,1.05,2.15),
                  #  main axle for rear wheels (white) 
                  children=[
                  Shape(
                    appearance=Appearance(USE='AssistantAxleColor'),
                    geometry=Box(size=(0.5,3,0.5)))]),
                Transform(rotation=(1,0,0,0.44),scale=(0.7,0.7,0.7),translation=(0.3,0.8,2),
                  #  assistant axle for rear wheel (white) 
                  children=[
                  Shape(
                    appearance=Appearance(USE='AssistantAxleColor'),
                    geometry=Cylinder(radius=0.2))]),
                Transform(rotation=(1,0,0,0.44),scale=(0.7,0.7,0.7),translation=(0.3,1.5,2.3),
                  #  assistant axle for rear wheel (white) 
                  children=[
                  Shape(
                    appearance=Appearance(USE='AssistantAxleColor'),
                    geometry=Cylinder(radius=0.3))]),
                Transform(rotation=(1,0,0,0.44),scale=(0.7,0.7,0.7),translation=(-0.3,0.8,2),
                  #  assistant axle for rear wheel (white) 
                  children=[
                  Shape(
                    appearance=Appearance(USE='AssistantAxleColor'),
                    geometry=Cylinder(radius=0.2))]),
                Transform(rotation=(1,0,0,0.44),scale=(0.7,0.7,0.7),translation=(-0.3,1.5,2.3),
                  #  assistant axle for rear wheel (white) 
                  children=[
                  Shape(
                    appearance=Appearance(USE='AssistantAxleColor'),
                    geometry=Cylinder(radius=0.3))]),
                Transform(rotation=(1,0,0,0.44),scale=(0.5,0.5,0.5),translation=(-0.3,0.2,1.72),
                  #  assistant axis under axle (black) 
                  children=[
                  Shape(
                    appearance=Appearance(USE='AxleColor'),
                    geometry=Cylinder(height=0.7,radius=0.2))]),
                Transform(rotation=(1,0,0,0.44),scale=(0.5,0.5,0.5),translation=(0,0.2,1.72),
                  #  assistant axis under axle (black) 
                  children=[
                  Shape(
                    appearance=Appearance(USE='AxleColor'),
                    geometry=Cylinder(height=0.7,radius=0.2))]),
                Transform(rotation=(1,0,0,0.44),scale=(0.5,0.5,0.5),translation=(0.3,0.2,1.72),
                  #  assistant axis under axle (black) 
                  children=[
                  Shape(
                    appearance=Appearance(USE='AxleColor'),
                    geometry=Cylinder(height=0.7,radius=0.2))])])]),
            Script(DEF='GearUpDownScript',
              field=[
              field(accessType='inputOnly',appinfo='eventIn: boolean true: wheels up false: wheels down',name='gearup',type='SFBool'),
              field(accessType='outputOnly',name='gearupOut',type='SFBool'),
              field(accessType='outputOnly',name='keyValue',type='MFRotation'),
              field(accessType='outputOnly',name='keyValue2',type='MFRotation'),
              field(accessType='initializeOnly',name='kV1',type='SFRotation'),
              field(accessType='initializeOnly',name='kV1Second',type='SFRotation'),
              field(accessType='initializeOnly',name='kV2',type='SFRotation'),
              field(accessType='initializeOnly',name='kV2Second',type='SFRotation'),
              field(accessType='initializeOnly',name='kV3',type='SFRotation'),
              field(accessType='initializeOnly',name='kV3Second',type='SFRotation'),
              field(accessType='initializeOnly',name='kV4',type='SFRotation'),
              field(accessType='initializeOnly',name='kV4Second',type='SFRotation'),
              field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
              field(accessType='inputOnly',name='animationStartTime',type='SFTime'),
              field(accessType='outputOnly',name='clockStartTime',type='SFTime'),
              field(accessType='initializeOnly',name='traceEnabled',type='SFBool')],
              IS=IS(
                connect=[
                connect(nodeField='gearup',protoField='gearup'),
                connect(nodeField='animationStartTime',protoField='animationStartTime'),
                connect(nodeField='gearupOut',protoField='gearupOut'),
                connect(nodeField='traceEnabled',protoField='traceEnabled')])),
            OrientationInterpolator(DEF='GearUpDownInterpolator',key=[0,0.5,0.75,1.0],keyValue=[(0,1,0,0.0),(0,1,0,0.44),(0,1,0,1.22),(0.21,0.95,0.21,1.62)]),
            OrientationInterpolator(DEF='GearUpDownInterpolator2',key=[0,0.25,0.5,1.0],keyValue=[(0,0,1,0.0),(0,0,1,0.44),(0,0,1,0.80),(-0.21,-0.21,0.95,1.62)]),
            TimeSensor(DEF='ClockAxleGearUpDownFirst',cycleInterval=4),
            TimeSensor(DEF='ClockAxleGearUpDownSecond',cycleInterval=8),
            ROUTE(fromField='clockStartTime',fromNode='GearUpDownScript',toField='set_startTime',toNode='ClockAxleGearUpDownFirst'),
            ROUTE(fromField='clockStartTime',fromNode='GearUpDownScript',toField='set_startTime',toNode='ClockAxleGearUpDownSecond'),
            ROUTE(fromField='gearupOut',fromNode='GearUpDownScript',toField='set_enabled',toNode='ClockAxleGearUpDownFirst'),
            ROUTE(fromField='gearupOut',fromNode='GearUpDownScript',toField='set_enabled',toNode='ClockAxleGearUpDownSecond'),
            ROUTE(fromField='keyValue',fromNode='GearUpDownScript',toField='set_keyValue',toNode='GearUpDownInterpolator'),
            ROUTE(fromField='keyValue2',fromNode='GearUpDownScript',toField='set_keyValue',toNode='GearUpDownInterpolator2'),
            ROUTE(fromField='fraction_changed',fromNode='ClockAxleGearUpDownFirst',toField='set_fraction',toNode='GearUpDownInterpolator'),
            ROUTE(fromField='fraction_changed',fromNode='ClockAxleGearUpDownSecond',toField='set_fraction',toNode='GearUpDownInterpolator2'),
            ROUTE(fromField='fraction_changed',fromNode='ClockAxleGearUpDownFirst',toField='set_fraction',toNode='GearUpDownScript'),
            ROUTE(fromField='value_changed',fromNode='GearUpDownInterpolator',toField='set_rotation',toNode='WheelsRearAxleTransform'),
            ROUTE(fromField='value_changed',fromNode='GearUpDownInterpolator2',toField='set_rotation',toNode='WheelsRearTransform')])])])),
    Background(skyColor=[(0.7,0.7,0.7)]),
    Anchor(description='WheelsRearLeftExample',parameter=["target=_blank"],url=["WheelsRearLeftExample.wrl","../../AircraftFixedWing/F18BlueAngelUnitedStates/WheelsRearLeftExample.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsRearLeftExample.wrl","WheelsRearLeftExample.x3d","../../AircraftFixedWing/F18BlueAngelUnitedStates/WheelsRearLeftExample.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsRearLeftExample.x3d"],
      children=[
      Shape(
        geometry=Text(string=["WheelsRearLeftPrototype","is a prototype definition file","","To see an example scene","click on this text and view","WheelsRearLeftExample"],
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

print ("python x3d.py load successful for WheelsRearLeftPrototype.py")
