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
    meta(content='RearRightWheel.x3d',name='title'),
    meta(content='F16 landing gear rear wheels',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='Murat ONDER, LTJG, Turkish Navy',name='translator'),
    meta(content='19 July 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F16FightingFalconTurkey/RearRightWheel.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(DEF='WheelsRearTransform',center=(0,3.7,0),rotation=(0,1,0,-1.57),
        children=[
        Transform(DEF='WheelsRearAxleTransform',center=(-0.03,0.25,1.735),
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
                Inline(DEF='Hub',url=["Hub.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F16FightingFalconTurkey/Hub.x3d","Hub.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F16FightingFalconTurkey/Hub.wrl"])]),
              Transform(translation=(0,0,-0.30),
                children=[
                Inline(USE='Hub')]),
              TouchSensor(DEF='WheelTouchSensor',description='When the mouse comes onto the wheel wheel starts to turn.'),
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
                    appearance=Appearance(DEF='AssistantAxleColor',
                      material=Material(diffuseColor=(1.0,1.0,1.0))),
                    geometry=Cylinder(height=1,radius=0.3))]),
                Transform(rotation=(1,0,0,1.57),scale=(0.7,0.7,0.7),translation=(0.3,0,1.1),
                  #  assistant axle for rear wheel(white) 
                  children=[
                  Shape(
                    appearance=Appearance(USE='AssistantAxleColor'),
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
                geometry=Cylinder(height=0.7,radius=0.2))])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RearRightWheel.py")
