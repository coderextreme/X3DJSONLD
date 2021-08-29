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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='Rudder.x3d',name='title'),
    meta(content='Brazilian Naval Academy Training Ship',name='description'),
    meta(content='Claudio Coreixas',name='creator'),
    meta(content='20 October 2009',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='http://www.en.mar.mil.br',name='reference'),
    meta(content='ships parts',name='subject'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNavalAcademyBrazil/Rudder.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Shape(DEF='stbRudder',
        geometry=Extrusion(ccw=False,convex=False,crossSection=[(-0.2,0.01),(0,0.01),(0.05,0.35),(-0.24,0.4),(-0.2,0.01)],solid=False,spine=[(0,0,0.01),(0,0,-0.01)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.4,0.058824,0))))]),
    Transform(translation=(0,0.4,0),
      children=[
      Shape(DEF='stbRudderAxis',
        geometry=Cylinder(DEF='rudderAxis',height=0.1,radius=0.01),
        appearance=Appearance(
          material=Material(diffuseColor=(0.4,0.058824,0))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Rudder.py")
