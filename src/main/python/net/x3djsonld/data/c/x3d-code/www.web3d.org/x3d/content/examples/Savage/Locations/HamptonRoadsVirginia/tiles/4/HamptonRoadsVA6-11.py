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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA6-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.083749987109314,-76.61799995878522,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[15,1,-1,7,12,10,13,6,10,7,15,12,7,8,16,10,12,12,9,-2,2,1,15,8,6,11,18,16,8,14,5,18,7,7,11,14,10,15,11,15,9,1,1,0,11,0,9,5,10,17,17,11,3,15,12,15,18,10,7,10,9,14,10,2,0,1,23,11,16,9,9,11,12,10,11,7,12,9,19,12,10,14,11,18,4,11,11,6,19,17,17,11,16,19,14,18,8,13,8,6,8,16,9,10,6,14,15,8,11,7,19,19,20,10,19,12,19,19,17,9,5,10,8,14,7,5,7,13,11,7,15,11,27,20,28,19,3,24,16,19,26,18,14,7,13,12,7,6,1,12,11,10,12,11,30,24,22,22,13,12,15,18,27,9,16,10,1,3,7,12,2,11,11,8,4,5,23,28,23,22,11,18,18,19,20,12,12,6,7,4,12,7,1,11,8,16,1,0,23,29,23,17,16,13,24,21,21,20,9,6,7,6,4,5,18,7,0,0,0,0,24,24,19,18,21,26,23,25,17,11,14,16,6,6,12,19,6,0,0,8,5,2,26,34,27,22,18,20,15,17,18,9,11,9,9,19,8,20,11,6,11,8,9,4,22,22,27,20,18,23,23,19,20,12,6,13,11,9,19,9,3,1,7,8,16,11,28,22,22,35,23,25,16,20,17,10,9,8,9,12,3,3,1,6,5,14,5,1,17,28,25,21,25,23,23,17,15,11,5,11,26,9,2,2,6,10,11,7,0,0,37,16,18,26,21,24,22,26,18,9,8,8,8,2,7,7,16,13,6,6,0,0,28,34,28,13,13,20,21,20,21,6,10,6,5,5,14,11,13,13,16,7,0,0,26,30,25,20,31,23,27,22,0,0,5,9,9,10,13,15,2,12,12,0,0,0,30,27,36,25,25,28,24,23,9,5,5,7,12,10,13,11,9,1,0,0,0,0,31,34,25,24,24,19,17,17,7,5,7,5,20,8,6,6,5,0,0,0,0,3,30,24,33,32,20,26,15,8,20,6,7,8,8,16,10,10,5,0,0,0,2,9,31,24,35,33,23,26,18,7,17,9,5,8,7,17,14,14,5,0,0,0,3,8],
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
