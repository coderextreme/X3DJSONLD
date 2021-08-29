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
    meta(content='SkidTube.x3d',name='title'),
    meta(content='This file defines a skid tube that is inlined to create the skids of a helicopter',name='description'),
    meta(content='Jane Wu (adapted from the original skidtube.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='12 January 2001',name='created'),
    meta(content='15 March 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/SkidTube.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(rotation=(0.0,0.0,1.0,-1.57),
        children=[
        Shape(
          appearance=Appearance(DEF='GRAY',
            material=Material(diffuseColor=(0.25,0.25,0.25))),
          geometry=Cylinder(height=2.9,radius=0.1)),
        Transform(translation=(0.0,1.45,0.0),
          children=[
          Shape(
            appearance=Appearance(USE='GRAY'),
            geometry=Extrusion(convex=False,creaseAngle=1.57,crossSection=[(0.1,0.0),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(0.0,-0.1),(-0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.1,0.0),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0.0,0.1),(0.038,0.092),(0.071,0.071),(0.092,0.038),(0.1,0.0)],spine=[(0.0,0.0,0.0),(0.0,0.05,0.0),(-0.025,0.1,0.0),(-0.025,0.125,0.0),(-0.1,0.15,0.0),(-0.15,0.15,0.0)]))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SkidTube.py")
