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
    meta(content='WheelsFrontMediumLOD.x3d',name='title'),
    meta(content='The medium Level-of-Detail (LOD) of front wheels and axle. This LOD will be shown at the point of view of 600 meters. It does not include any animation.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='11 July 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsFrontMediumLOD.x3d',name='identifier'),
    meta(content='front wheels, Blue Angel',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.7,0.7,0.7)]),
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
              Inline(DEF='Hub',url=["Hub.wrl","Hub.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18/Hub.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18/Hub.x3d"])]),
            Transform(translation=(0,0,-0.30),
              children=[
              Inline(USE='Hub')]),
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
                geometry=Cylinder(radius=0.3))])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WheelsFrontMediumLOD.py")
