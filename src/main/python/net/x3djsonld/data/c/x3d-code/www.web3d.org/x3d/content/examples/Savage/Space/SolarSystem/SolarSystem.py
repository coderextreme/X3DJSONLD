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
    meta(content='SolarSystem.x3d',name='title'),
    meta(content='Mike Perry',name='creator'),
    meta(content='8 August 2000',name='created'),
    meta(content='16 January 2014',name='modified'),
    meta(content='Nine Planet Solar system',name='description'),
    meta(content='https://savage.nps.edu/Savage/Space/SolarSystem/SolarSystem.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Shape(DEF='Sun',
        geometry=Sphere(DEF='SUN',radius=1.3),
        appearance=Appearance(
          texture=ImageTexture(url=["sun.jpg","https://savage.nps.edu/Savage/Space/SolarSystem/sun.jpg"]))),
      Transform(translation=(3.0,0.4,0),
        children=[
        Shape(DEF='Mercury',
          geometry=Sphere(radius=.1),
          appearance=Appearance(
            texture=ImageTexture(url=["mercury.jpg","https://savage.nps.edu/Savage/Space/SolarSystem/mercury.jpg"])))]),
      Transform(translation=(4.2,0.2,1.0),
        children=[
        Shape(DEF='Venus',
          geometry=Sphere(radius=.18),
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.2,0.9))))]),
      Transform(translation=(6,-0.1,1.0),
        children=[
        Shape(DEF='Earth',
          geometry=Sphere(radius=.19),
          appearance=Appearance(
            texture=ImageTexture(url=["earth-topo-small.gif","https://savage.nps.edu/Savage/Space/SolarSystem/earth-topo-small.gif"])))]),
      Transform(translation=(5.8,-0.3,1.0),
        children=[
        Shape(DEF='moon',
          geometry=Sphere(radius=.01),
          appearance=Appearance(
            texture=ImageTexture(url=["mercury.jpg","https://savage.nps.edu/Savage/Space/SolarSystem/mercury.jpg"])))]),
      Transform(translation=(7.0,0.3,1.0),
        children=[
        Shape(DEF='Mars',
          geometry=Sphere(radius=.16),
          appearance=Appearance(
            texture=ImageTexture(url=["mars.jpg","https://savage.nps.edu/Savage/Space/SolarSystem/mars.jpg"])))]),
      Transform(translation=(8.0,0.3,1.0),
        children=[
        Shape(DEF='Jupiter',
          geometry=Sphere(radius=.17),
          appearance=Appearance(
            texture=ImageTexture(url=["jupiter.jpg","https://savage.nps.edu/Savage/Space/SolarSystem/jupiter.jpg"])))]),
      Transform(translation=(8.8,0.24,1.0),
        children=[
        Shape(DEF='Saturn',
          geometry=Sphere(radius=.13),
          appearance=Appearance(
            texture=ImageTexture(url=["saturn.jpg","https://savage.nps.edu/Savage/Space/SolarSystem/saturn.jpg"])))]),
      Transform(rotation=(1,0,0,.585),translation=(8.8,0.24,1.0),
        children=[
        Shape(DEF='rings',
          geometry=Cone(bottomRadius=.35,height=.01),
          appearance=Appearance(
            texture=ImageTexture(url=["mars.jpg","https://savage.nps.edu/Savage/Space/SolarSystem/mars.jpg"])))]),
      Transform(translation=(9.9,0.24,0.89),
        children=[
        Shape(DEF='Neptune',
          geometry=Sphere(radius=.1),
          appearance=Appearance(
            texture=ImageTexture(url=["neptune.jpg","https://savage.nps.edu/Savage/Space/SolarSystem/neptune.jpg"])))]),
      Transform(translation=(10.4,0.24,0.89),
        children=[
        Shape(DEF='Pluto',
          geometry=Sphere(radius=.03),
          appearance=Appearance(
            material=Material(),))]),
      Transform(translation=(9.3,0.0,0.79),
        children=[
        Shape(DEF='Uranus',
          geometry=Sphere(radius=.07),
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.8,1.0))))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SolarSystem.py")
