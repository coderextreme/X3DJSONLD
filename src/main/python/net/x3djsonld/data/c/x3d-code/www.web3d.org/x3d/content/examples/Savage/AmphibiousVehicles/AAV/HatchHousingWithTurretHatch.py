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
    meta(content='HatchHousingWithTurretHatch.x3d',name='title'),
    meta(content='Turret Housing with windows, Turret Hatch and Hinge Assembly for the AAVP7A1 - click and drag hatch to open.',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='30 May 2001',name='created'),
    meta(content='21 February 2010',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/HatchHousingWithTurretHatch.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(rotation=(0,-1,0,1.57),
        children=[
        Group(DEF='TurretRing',
          children=[
          Transform(DEF='TurretRingsection',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.15,0.66,0.25))),
              geometry=Extrusion(convex=False,crossSection=[(0,1),(-0.4,0.9),(-0.7,0.7),(-0.9,0.4),(-1,0),(-0.7,0),(-0.6,0.3),(-0.3,0.6),(0,0.7),(0,1)],scale=[(1,1),(1,1),(0.8,0.8),(0.75,0.75),(0.7475,0.7475),(0.7475,0.7475)],solid=False,spine=[(0,-0.0625,0),(0,0,0),(0,0.125,0),(0,0.15,0),(0,0.1525,0),(0,0.155,0)])),
            Transform(translation=(-0.85,0.085,0),
              children=[
              Transform(rotation=(0,0,1,0.6),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(DEF='Glass',diffuseColor=(0.8,0.8,0.5),emissiveColor=(0.8,0.8,0.8))),
                  geometry=Box(size=(0.175,0.025,0.45)))])]),
            Transform(rotation=(0,-1,0,0.79),
              children=[
              Transform(rotation=(0,0,1,0.6),translation=(-0.85,0.085,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(USE='Glass')),
                  geometry=Box(size=(0.175,0.025,0.45)))])])]),
          Transform(rotation=(0,1,0,1.57),
            children=[
            Transform(USE='TurretRingsection')]),
          Transform(rotation=(0,-1,0,1.57),
            children=[
            Transform(USE='TurretRingsection'),
            Transform(translation=(-0.85,0.085,0),
              children=[
              Transform(rotation=(0,0,1,0.6),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(0.15,0.66,0.25))),
                  geometry=Box(size=(0.175,0.025,0.45)))])])]),
          Transform(rotation=(0,1,0,3.14),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.15,0.66,0.25))),
              geometry=Extrusion(convex=False,crossSection=[(0,1),(-0.4,0.9),(-0.7,0.7),(-0.9,0.4),(-1,0),(-0.7,0),(-0.6,0.3),(-0.3,0.6),(0,0.7),(0,1)],scale=[(1,1),(1,1),(0.8,0.8),(0.75,0.75),(0.7475,0.7475),(0.7475,0.7475)],solid=False,spine=[(0,-0.0625,0),(0,0,0),(0,0.125,0),(0,0.15,0),(0,0.1525,0),(0,0.155,0)])),
            Transform(rotation=(0,-1,0,0.79),
              children=[
              Transform(rotation=(0,0,1,0.6),translation=(-0.85,0.085,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(USE='Glass')),
                  geometry=Box(size=(0.175,0.025,0.45)))])])])]),
        Group(DEF='MainTurretWindow',
          children=[
          Transform(rotation=(0,1,0,0.1125),
            children=[
            Transform(translation=(0.45,0.25,0),
              children=[
              Shape(
                geometry=Box(size=(0.33,0.33,0.75)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.15,0.66,0.25))))]),
            Transform(rotation=(0,0,1,1.57),translation=(0.625,0.25,0),
              children=[
              Shape(
                geometry=Box(size=(0.175,0.025,0.45)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.8,0.8,0.5),emissiveColor=(0.8,0.8,0.8))))])])])])]),
    Group(DEF='TurretHatch',
      children=[
      Transform(DEF='HatchCylinder',translation=(0.1125,0.0125,-0.66),
        children=[
        Transform(rotation=(0,1,0,3.1416),scale=(1.66,1.66,1.66),translation=(0,0.14,0),
          children=[
          Inline(url=["TurretHatch.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/TurretHatch.x3d","TurretHatch.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/TurretHatch.wrl"])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HatchHousingWithTurretHatch.py")
