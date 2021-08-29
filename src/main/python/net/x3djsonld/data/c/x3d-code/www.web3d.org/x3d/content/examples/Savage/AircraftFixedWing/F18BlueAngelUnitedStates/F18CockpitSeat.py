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
    meta(content='F18CockpitSeat.x3d',name='title'),
    meta(content='The pilot seat in cockpit of a Blue Angel.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='18 September 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/Cockpit.jpg',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/Cockpit_sketch.jpg',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/F18CockpitSeat.x3d',name='identifier'),
    meta(content='F18 cockpit seat',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.5702],groundColor=[(0.5,0.3,0.3),(0.5,0.3,0.3),(0.5,0.4,0.4)],skyAngle=[1.309,1.572],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    Transform(rotation=(0,0,-1,0.52),
      children=[
      Transform(rotation=(0,1,0,1.57),
        children=[
        Group(
          children=[
          Transform(translation=(0,0,-0.26),
            children=[
            Shape(
              appearance=Appearance(DEF='Seat',
                material=Material(ambientIntensity=0.3,shininess=0.1,specularColor=(0.7,0.7,0.8))),
              geometry=Box(size=(1.8,0.5,2.5)))]),
          Transform(translation=(0,1.5,0.75),
            children=[
            Shape(
              appearance=Appearance(USE='Seat'),
              geometry=Box(size=(1.8,2.7,0.5)))]),
          Transform(rotation=(-1,0,0,0.17),translation=(0,3.5,0.65),
            children=[
            Shape(
              appearance=Appearance(USE='Seat'),
              geometry=Box(size=(1,1.5,0.4)))]),
          Transform(
            children=[
            Transform(rotation=(-1,0,0,4.88),scale=(0.5,0.5,0.5),translation=(-1.35,3.5,0.62),
              children=[
              Shape(
                appearance=Appearance(DEF='SeatHolder',
                  material=Material(diffuseColor=(0.1,0.1,0.1),specularColor=(0,0.2,0.3))),
                geometry=Extrusion(DEF='headHolder',creaseAngle=2.5,crossSection=[(0.00,1.30),(.494,1.196),(.923,.923),(1.196,.494),(1.30,0.00),(1.196,-.494),(.923,-.923),(.494,-1.196),(0.00,-1.30)],scale=[(0.45,0.9),(0.1,0.8),(0.1,0.8),(0.45,0.9)],solid=False,spine=[(1.7,-0.4,0),(2.5,-0.4,0),(3.0,-0.4,0),(3.7,-0.4,0)]))])]),
          Transform(
            children=[
            Transform(rotation=(-1,0,0,4.7),scale=(0.8,0.8,1.2),translation=(-2.15,1.4,0.8),
              children=[
              Shape(
                appearance=Appearance(USE='SeatHolder'),
                geometry=Extrusion(DEF='backHolder',creaseAngle=2.5,crossSection=[(0.00,1.30),(.494,1.196),(.923,.923),(1.196,.494),(1.30,0.00),(1.196,-.494),(.923,-.923),(.494,-1.196),(0.00,-1.30)],scale=[(0.45,0.9),(0.1,0.8),(0.1,0.8),(0.45,0.9)],solid=False,spine=[(1.7,-0.4,0),(2.5,-0.4,0),(3.0,-0.4,0),(3.7,-0.4,0)]))])]),
          Transform(
            children=[
            Transform(rotation=(1,0,0,3.14),scale=(0.35,0.8,1),translation=(-1.48,-0.13,-0.25),
              children=[
              Shape(
                appearance=Appearance(USE='SeatHolder'),
                geometry=Extrusion(DEF='seatLeft',creaseAngle=2.5,crossSection=[(0.00,1.30),(.494,1.196),(.923,.923),(1.196,.494),(1.30,0.00),(1.196,-.494),(.923,-.923),(.494,-1.196),(0.00,-1.30)],scale=[(0.1,0.8),(0.4,0.8),(0.4,0.8),(0.1,0.8)],solid=False,spine=[(1.7,-0.4,0),(2.5,-0.4,0),(3.0,-0.4,0),(3.7,-0.4,0)]))])]),
          Transform(
            children=[
            Transform(rotation=(1,0,0,3.14),scale=(0.35,0.8,1),translation=(-0.4,-0.13,-0.25),
              children=[
              Shape(
                appearance=Appearance(USE='SeatHolder'),
                geometry=Extrusion(DEF='seatRight',creaseAngle=2.5,crossSection=[(0.00,1.30),(.494,1.196),(.923,.923),(1.196,.494),(1.30,0.00),(1.196,-.494),(.923,-.923),(.494,-1.196),(0.00,-1.30)],scale=[(0.1,0.8),(0.4,0.8),(0.4,0.8),(0.1,0.8)],solid=False,spine=[(1.7,-0.4,0),(2.5,-0.4,0),(3.0,-0.4,0),(3.7,-0.4,0)]))])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for F18CockpitSeat.py")
