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
    meta(content='StyxMissileTube.x3d',name='title'),
    meta(content='Model of OSA-II missile boat missile launcher.',name='description'),
    meta(content='Scott Rosetti, LT USNR',name='creator'),
    meta(content='20 July 2003',name='created'),
    meta(content='21 November 2015',name='modified'),
    meta(content='Osa-II, missile boat, patrol craft, SAVAGE, X3D',name='subject'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/MissileAttackBoatOsaII/StyxMissileTube.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Transform(DEF='LAUNCHER',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1))),
          geometry=Cylinder(height=1.8,radius=.28)),
        Transform(translation=(0,-.9,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1))),
            geometry=Sphere(radius=.28))]),
        Transform(translation=(0,1,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1))),
            geometry=Cone(bottomRadius=.315,height=.2))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for StyxMissileTube.py")
