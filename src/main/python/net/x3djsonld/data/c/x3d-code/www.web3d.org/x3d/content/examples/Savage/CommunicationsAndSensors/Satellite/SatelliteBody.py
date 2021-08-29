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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='SatelliteBody.x3d',name='title'),
    meta(content='Simple satellite body.',name='description'),
    meta(content='Michael Hunsberger',name='creator'),
    meta(content='6 June 2001',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/Satellite/SatelliteBody.x3d',name='identifier'),
    meta(content='Satellite, Communications',name='subject'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(
        children=[
        Shape(
          appearance=Appearance(DEF='Silver',
            material=Material(diffuseColor=(.75,.75,.75))),
          geometry=Cylinder(height=4,radius=.75))]),
      Transform(translation=(0,2.5,0),
        children=[
        Shape(
          appearance=Appearance(USE='Silver'),
          geometry=Cone(bottomRadius=.75,height=1))]),
      Transform(translation=(2.5,0,0),
        children=[
        Shape(DEF='Wing',
          appearance=Appearance(
            material=Material(diffuseColor=(.75,.75,.75),transparency=.5)),
          geometry=Box(size=(3.0,2.0,.25)))]),
      Transform(translation=(-2.5,0,0),
        children=[
        Shape(USE='Wing')]),
      Transform(rotation=(0,0,1,1.57),
        children=[
        Shape(
          appearance=Appearance(USE='Silver'),
          geometry=Cylinder(radius=.1))]),
      Transform(translation=(0,-1.75,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,0))),
          geometry=Cone(bottomRadius=.7))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SatelliteBody.py")
