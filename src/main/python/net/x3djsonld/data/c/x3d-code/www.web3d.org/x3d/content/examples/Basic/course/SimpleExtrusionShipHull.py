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
    meta(content='SimpleExtrusionShipHull.x3d',name='title'),
    meta(content='Don Brutzman and MV4204 class',name='creator'),
    meta(content='29 October 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Using Extrusion to model a ship hull and deck.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/course/SimpleExtrusionShipHull.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SimpleExtrusionShipHull.x3d'),
    Viewpoint(description='Extruded ship hull and deck',orientation=(1,0,0,-0.2),position=(-2,8,40)),
    Transform(
      children=[
      Shape(
        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00)],orientation=[(0,1,0,0),(0,1,0,0),(0,1,0,0),(0,0,1,-0.5)],scale=[(4,4),(4,4),(4,4),(4,.1)],solid=False,spine=[(-20,0,0),(0,0,0),(10,0,0),(18,0.25,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.3,1),emissiveColor=(0.2,0.2,0.2)))),
      Shape(
        geometry=Extrusion(creaseAngle=1.57,crossSection=[(0.10,0.96),(0.10,-0.96)],scale=[(4,4),(4,4),(4,4),(4,.1)],solid=False,spine=[(-19.9,0,0),(0,0,0),(10,0,0),(17.5,0.25,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,0),emissiveColor=(0,0.2,0))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SimpleExtrusionShipHull.py")
