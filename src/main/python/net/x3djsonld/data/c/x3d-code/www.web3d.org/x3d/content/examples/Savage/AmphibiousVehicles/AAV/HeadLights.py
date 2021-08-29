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
    meta(content='HeadLights.x3d',name='title'),
    meta(content='Headlights for the AAV7PA1.',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='4 June 2001',name='created'),
    meta(content='18 December 2014',name='modified'),
    meta(content='AAV7PA1 Headlights',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/HeadLights.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0,0.66,1)]),
    Group(DEF='Headlights',
      children=[
      Transform(rotation=(-1,0,0,1.57),
        children=[
        Shape(
          geometry=Cone(bottomRadius=0.125,height=0.1),
          appearance=Appearance(
            material=Material(emissiveColor=(0.1,0.5,0.66),shininess=0.75))),
        Switch(whichChoice=0,
          children=[
          WorldInfo(),
          SpotLight(direction=(0,-1,0))])]),
      Transform(rotation=(-1,0,0,1.57),translation=(-0.25,0,0),
        children=[
        Shape(
          geometry=Cone(bottomRadius=0.125,height=0.1),
          appearance=Appearance(
            material=Material(emissiveColor=(0.1,0.5,0.66),shininess=0.75))),
        Switch(whichChoice=0,
          children=[
          WorldInfo(),
          SpotLight(direction=(0,-1,0))])]),
      Transform(rotation=(0,0,1,1.57),translation=(-0.125,0,-0.0625),
        children=[
        Shape(
          geometry=Box(size=(0.25,0.5,0.066)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.15,0.15,0.15)))),
        Transform(rotation=(0,1,0,1.57),translation=(0.149,0,0.1),
          children=[
          Shape(
            geometry=Box(size=(0.5,0.66,0.04)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.66,0.2))))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HeadLights.py")
