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
    meta(content='SkidRight.x3d',name='title'),
    meta(content='Defines the skid on the right side of a cobra helicopter.',name='description'),
    meta(content='Jane Wu',name='creator'),
    meta(content='17 March 2001',name='created'),
    meta(content='12 March 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/SkidRight.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Shape(
        appearance=Appearance(DEF='Gray',
          material=Material(diffuseColor=(0.25,0.25,0.25))),
        geometry=Cylinder(height=3.5,radius=0.075)),
      Transform(translation=(0.0,1.75,0.0),
        children=[
        Shape(DEF='Tip',
          appearance=Appearance(USE='Gray'),
          geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.1,0.0),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0.0,-0.1),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.1,0.0),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0.0,0.1),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.1,0.0)],scale=[(0.75,0.75),(0.75,0.75),(0.75,0.75),(0.75,0.75),(0.75,0.75),(0.75,0.75)],spine=[(0.0,0.0,0.0),(0.0,0.05,0.0),(-0.025,0.1,0.0),(-0.05,0.125,0.0),(-0.075,0.15,0.0),(-0.125,0.175,0.0)]))]),
      Transform(rotation=(1,0,0,3.14),translation=(0.0,-1.75,0.0),
        children=[
        Shape(USE='Tip')]),
      #  Back Support 
      Transform(rotation=(0.58,-0.58,0.58,2.09),translation=(0.0,-1.25,-1),
        children=[
        Shape(DEF='Support',
          appearance=Appearance(USE='Gray'),
          geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.1,0.0),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0.0,-0.1),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.1,0.0),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0.0,0.1),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.1,0.0)],scale=[(0.75,0.75),(0.75,0.75),(0.75,0.75),(0.75,0.75)],spine=[(1.0,0.0,0.0),(.92,.38,0.0),(.71,.71,0.0),(.38,.92,0.0)]))]),
      #  Front Support 
      Transform(rotation=(0.58,-0.58,0.58,2.09),translation=(0.0,0.75,-1),
        children=[
        Shape(USE='Support')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SkidRight.py")
