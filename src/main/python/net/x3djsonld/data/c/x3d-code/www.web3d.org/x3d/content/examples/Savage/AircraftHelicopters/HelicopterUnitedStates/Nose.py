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
    meta(content='Nose.x3d',name='title'),
    meta(content='This file defines a nose that is inlined to create the cockpit of a helicopter',name='description'),
    meta(content='Jane Wu (adapted from the original nose.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='9 January 2001',name='created'),
    meta(content='28 September 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Nose.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(rotation=(0.0,1.0,0.0,3.142),
        children=[
        Shape(DEF='NOSE',
          appearance=Appearance(DEF='DARK_GREEN',
            material=Material(diffuseColor=(0.0,0.4,0.2))),
          geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.5,crossSection=[(-0.78,0.10),(-0.73,0.36),(-0.645,0.49),(0.645,0.49),(0.73,0.36),(0.78,0.10),(0.78,-0.10),(0.55,-0.30),(0.0,-0.35),(-0.55,-0.30),(-0.78,-0.10),(-0.78,0.10)],endCap=False,scale=[(1.0,1.0),(1.0,1.0),(0.9,0.9),(0.8,0.8),(0.6,0.6),(0.4,0.4),(0.2,0.2),(0.1,0.1),(0.001,0.001)],solid=False,spine=[(0.0,0.0,0.0),(0.0,0.2,0.0),(0.0,0.4,0.0),(0.0,0.6,0.0),(0.0,0.7,0.0),(0.0,0.8,0.0),(0.0,0.85,0.0),(0.0,0.9,0.0),(0.0,0.92,0.0)]))]),
      Transform(translation=(0.0,0.995,0.0),
        children=[
        Shape(
          appearance=Appearance(DEF='OFF_WHITE',
            material=Material(diffuseColor=(0.75,0.75,0.75))),
          geometry=Cylinder(height=0.15,radius=0.02))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Nose.py")
