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
    meta(content='Door.x3d',name='title'),
    meta(content='3D extruded image of Bridge Door Entrance.',name='description'),
    meta(content='Foo, Khee Loon',name='creator'),
    meta(content='10 February 2001',name='created'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/Door.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Extrusion(convex=False,creaseAngle=2,crossSection=[(0,0),(0,3),(1.5,3),(1.5,0),(0.2,0),(0.2,0.2),(1.3,0.2),(1.3,0.8),(1,0.8),(1,1),(1.3,1),(1.3,2.2),(1,2.2),(1,2.4),(1.3,2.4),(1.3,2.8),(0.2,2.8),(0.2,0),(0,0)],spine=[(0,0,0),(0,0.5,0)]))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Door.py")
