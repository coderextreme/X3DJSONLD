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
    meta(content='WeaponsPylon.x3d',name='title'),
    meta(content="This file defines a weapon system's pylon that is inlined to connect a rocket pod to a helicopter",name='description'),
    meta(content='Jane Wu (adapted from the original pylon.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='10 January 2001',name='created'),
    meta(content='Del Beilstein',name='contributor'),
    meta(content='1 January 2019',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/WeaponsPylon.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.0,0.2,0.05))),
      geometry=Extrusion(convex=False,creaseAngle=1.57,crossSection=[(0.1,0.0),(0.092,-0.038),(0.071,-0.071),(0.038,-0.092),(-0.071,-0.071),(-0.092,-0.038),(-0.1,0.0),(-0.092,0.038),(-0.071,0.071),(-0.038,0.092),(0.071,0.071),(0.092,0.038),(0.1,0.0)],solid=False,spine=[(0.0,0.0,0.0),(0.2,0.0,0.0),(0.3,0.1,0.0),(0.8,0.6,0.0),(1.05,0.6,0.0)]))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WeaponsPylon.py")
