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

newModel=X3D(profile='Interchange',version='3.1',
  head=head(
    children=[
    meta(content='HomeAquarium.x3d',name='title'),
    meta(content='Tsardas Nikolaos',name='creator'),
    meta(content='1 June 1998',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Student project showing a small aquarium.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/HomeAquarium.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='HomeAquarium.x3d'),
    Viewpoint(description='Water tank on a table',position=(0,0,20)),
    Group(
      children=[
      Transform(
        children=[
        Transform(translation=(0.0,0.25,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1.0,1.0,1.0),transparency=0.5)),
            geometry=Box(size=(12.0,4.5,4.0)))]),
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0,0,1),transparency=0.5)),
            geometry=Box(size=(12.0,4.0,4.0)))])]),
      Transform(translation=(0.0,-2.5,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.4,0.3))),
          geometry=Box(size=(16.0,1.0,8.0)))]),
      Transform(translation=(-7.5,-5.5,-3.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.4,0.3))),
          geometry=Box(size=(1.0,5.0,1.0)))]),
      Transform(translation=(7.5,-5.5,-3.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.4,0.3))),
          geometry=Box(size=(1.0,5.0,1.0)))]),
      Transform(translation=(-7.5,-5.5,3.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.4,0.3))),
          geometry=Box(size=(1.0,5.0,1.0)))]),
      Transform(translation=(7.5,-5.5,3.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.4,0.3))),
          geometry=Box(size=(1.0,5.0,1.0)))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HomeAquarium.py")
