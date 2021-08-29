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
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA11-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.61499997575882,-76.49299995575842,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[20,22,20,20,24,19,17,19,23,16,20,20,21,21,18,21,24,19,17,20,13,16,21,24,22,22,19,15,20,22,25,22,23,23,23,21,22,25,18,18,21,18,19,16,20,17,21,19,19,22,14,24,19,23,1,12,15,15,23,25,18,17,15,14,17,22,21,19,17,25,22,15,16,20,21,19,23,30,5,6,11,17,17,19,15,16,16,25,20,20,16,23,19,16,16,17,17,16,24,30,7,10,6,7,11,4,16,17,21,16,25,19,24,24,18,23,24,15,22,30,15,17,21,19,17,18,7,6,9,8,5,6,21,21,22,24,22,23,20,20,21,21,12,22,17,17,14,20,16,5,6,22,5,6,24,19,17,25,22,23,21,20,8,5,1,18,13,17,17,10,18,4,6,19,6,4,22,13,23,24,25,25,20,16,16,6,7,8,12,16,16,14,12,12,20,3,13,1,14,19,16,23,19,21,21,5,9,7,4,7,3,16,22,15,4,15,15,1,16,16,17,15,25,20,29,26,25,8,4,6,9,6,4,18,7,6,7,6,4,20,15,17,21,13,19,22,18,11,12,7,7,6,2,6,6,4,6,10,5,6,4,7,6,25,14,15,19,24,22,7,15,12,8,9,5,9,7,6,6,5,6,4,5,12,4,6,16,12,18,22,22,6,10,13,6,8,5,6,5,5,4,16,4,3,1,24,6,4,11,10,4,11,14,4,14,15,7,7,9,4,6,5,10,1,6,10,8,3,4,19,9,13,13,10,7,11,13,8,17,5,7,5,7,5,7,23,27,2,2,10,7,3,8,13,10,4,4,19,15,6,7,4,8,6,4,6,8,14,13,4,5,16,13,13,14,10,15,10,7,16,20,5,5,7,6,9,5,6,6,6,7,9,5,1,7,4,14,15,15,15,9,7,5,8,7,8,7,9,7,6,6,8,4,7,3,2,2,2,10,11,17,15,17,18,16,19,14,17,7,5,9,14,6,7,6,4,7,4,3,9,7,9,9,18,17,18,17,17,13,18,7,5,4,8,7,5,6,5,6,8,23,25,8,10,13,18,16,20,19,18,13,19,7,4,5,9,7,6,7,5,6,7,22,25],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.989999984839216,-76.99299996786561,0))))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
