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
    meta(content='ChaffTubes.x3d',name='title'),
    meta(content='Generic Chaff Tubes',name='description'),
    meta(content='LT Josh Hansen',name='creator'),
    meta(content='17 September 2001',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DD963SpruanceUnitedStates/ChaffTubes.x3d',name='identifier'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/weaps/mk-36.htm',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/weaps/mk-53.htm',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(rotation=(1,0,0,.5),translation=(.25,0,0),
        children=[
        Shape(
          geometry=Cylinder(height=1.5,radius=.15),
          appearance=Appearance(
            material=Material(diffuseColor=(.95,.95,.95))))]),
      Transform(rotation=(1,0,0,.75),translation=(-.25,0,0),
        children=[
        Shape(
          geometry=Cylinder(height=1.5,radius=.15),
          appearance=Appearance(
            material=Material(diffuseColor=(.95,.95,.95))))]),
      Transform(rotation=(1,0,0,.5),translation=(.25,0,.5),
        children=[
        Shape(
          geometry=Cylinder(height=1.5,radius=.15),
          appearance=Appearance(
            material=Material(diffuseColor=(.95,.95,.95))))]),
      Transform(rotation=(1,0,0,.75),translation=(-.25,0,.5),
        children=[
        Shape(
          geometry=Cylinder(height=1.5,radius=.15),
          appearance=Appearance(
            material=Material(diffuseColor=(.95,.95,.95))))]),
      Transform(rotation=(1,0,0,.5),translation=(.25,0,1),
        children=[
        Shape(
          geometry=Cylinder(height=1.5,radius=.15),
          appearance=Appearance(
            material=Material(diffuseColor=(.95,.95,.95))))]),
      Transform(rotation=(1,0,0,.75),translation=(-.25,0,1),
        children=[
        Shape(
          geometry=Cylinder(height=1.5,radius=.15),
          appearance=Appearance(
            material=Material(diffuseColor=(.95,.95,.95))))]),
      Transform(translation=(0,-.75,0),
        children=[
        Shape(
          geometry=Box(size=(1.5,.2,2)),
          appearance=Appearance(
            material=Material(diffuseColor=(.9,.9,.9))))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ChaffTubes.py")
