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
    meta(content='RearAntenna.x3d',name='title'),
    meta(content='Rear antenna for the AAV7PA1',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='1 June 2001',name='created'),
    meta(content='13 June 2001',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/RearAntenna.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.1,0.2,0.8)]),
    Group(DEF='RearAntenna',
      children=[
      Transform(DEF='Base',
        children=[
        Shape(
          geometry=Cylinder(height=0.33,radius=0.15),
          appearance=Appearance(
            material=Material(diffuseColor=(0.1,0.1,0.1)))),
        Transform(DEF='TopDiskBase',translation=(0,0.1667,0),
          children=[
          Shape(
            geometry=Cylinder(height=0.01,radius=0.125),
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.6,0.2)))),
          Transform(translation=(0,0.02,0),
            children=[
            Shape(
              geometry=Sphere(radius=0.1),
              appearance=Appearance(
                material=Material(diffuseColor=(0.1,0.6,0.2))))]),
          Transform(DEF='TopBolt',translation=(0.07,0.01,0.07),
            children=[
            Shape(
              geometry=Cylinder(height=0.01,radius=0.02),
              appearance=Appearance(
                material=Material(diffuseColor=(0.15,0.15,0.3))))]),
          Transform(rotation=(0,1,0,1.57),
            children=[
            Transform(USE='TopBolt')]),
          Transform(rotation=(0,1,0,3.14),
            children=[
            Transform(USE='TopBolt')]),
          Transform(rotation=(0,1,0,4.71),
            children=[
            Transform(USE='TopBolt')])])]),
      Transform(scale=(0.066,0.175,0.066),translation=(0,0.25,0),
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=1.57,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(0.9,0.9),(0.975,0.975),(1,1),(0.975,0.975),(0.9,0.9),(0.75,0.75),(0.6,0.6),(0.525,0.525),(0.5,0.5),(0.475,0.475),(0.425,0.425)],solid=False,spine=[(0.0,0.0,0.0),(0.0,0.4,0.0),(0.0,0.8,0.0),(0.0,1.2,0.0),(0.0,1.6,0.0),(0.0,2.0,0.0),(0.0,2.4,0.0),(0.0,2.8,0.0),(0.0,3.2,0.0),(0.0,3.6,0.0),(0.0,4.0,0.0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.31,0.21,0.1667))))]),
      Transform(DEF='WhipAntenna',translation=(0,2.66,0),
        children=[
        Shape(
          geometry=Cylinder(height=3.66,radius=0.008),
          appearance=Appearance(
            material=Material(DEF='OliveDrab',diffuseColor=(0.15,0.15,0.15)))),
        Transform(translation=(0,1.85,0),
          children=[
          Shape(
            geometry=Sphere(radius=0.04),
            appearance=Appearance(
              material=Material(USE='OliveDrab')))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RearAntenna.py")
