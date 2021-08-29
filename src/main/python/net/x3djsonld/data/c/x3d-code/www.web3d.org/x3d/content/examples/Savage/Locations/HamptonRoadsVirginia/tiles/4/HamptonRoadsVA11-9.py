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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA11-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.61499997575882,-76.86799996483882,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[23,23,14,12,10,13,13,19,18,15,20,22,30,25,20,26,23,23,35,34,17,14,26,27,22,18,31,30,31,19,17,21,18,15,23,17,20,20,30,14,16,32,23,11,24,24,15,28,20,18,26,24,20,17,12,12,20,25,22,10,26,21,16,13,23,11,11,13,21,11,16,27,24,14,16,13,14,18,15,23,12,13,22,24,15,15,9,14,13,16,24,13,15,25,22,19,16,23,20,14,13,17,16,12,12,25,9,18,23,23,22,13,32,21,21,27,14,14,21,25,16,14,12,11,19,13,18,17,17,12,21,22,19,21,22,26,22,13,25,16,23,18,17,18,15,12,7,20,22,19,15,11,22,12,16,10,18,23,17,11,19,18,17,21,17,11,18,11,12,11,9,10,15,11,21,17,7,11,21,20,16,20,23,28,10,18,14,27,11,27,17,15,13,19,14,22,11,11,12,15,19,10,15,15,24,20,11,14,25,12,15,11,19,19,7,20,18,14,19,15,12,8,11,18,20,21,12,21,13,14,12,29,14,13,11,17,14,17,19,16,20,24,16,21,20,10,19,16,19,11,23,21,11,24,20,13,12,15,21,14,27,15,11,24,18,13,7,10,8,12,14,20,24,24,16,15,12,21,17,13,18,16,23,26,13,10,11,10,17,22,18,10,19,11,20,18,5,10,11,10,16,9,10,8,25,20,25,21,30,20,9,10,7,19,17,13,11,6,19,8,15,15,13,10,12,13,14,10,19,20,12,20,11,22,9,14,18,11,10,10,17,9,15,8,14,16,14,13,8,15,19,18,9,12,18,13,7,11,10,19,15,17,21,17,10,9,7,9,10,5,6,13,17,24,9,6,9,18,15,8,20,19,14,14,9,10,20,6,8,3,13,7,9,8,23,16,7,9,13,10,15,15,24,13,7,11,14,9,9,14,23,19,13,17,14,8,13,11,9,11,3,1,17,18,13,3,10,17,17,15,9,7,17,19,3,17,26,13,13,10,5,8,6,11,3,11,15,16,18,24,21,5,15,8,19,10,24,6,6,14,18,13,11,5,10,10,6,9,17,14,18,25,21,4,16,8,20,12,24,8,10,11,17,12],
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
