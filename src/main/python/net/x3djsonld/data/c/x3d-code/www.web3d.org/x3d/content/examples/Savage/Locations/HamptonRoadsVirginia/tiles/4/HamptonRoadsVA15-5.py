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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA15-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.239999966678425,-77.36799997694601,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[28,26,25,13,24,22,16,11,12,11,11,12,12,16,13,13,16,12,23,18,23,22,29,22,26,15,16,21,18,23,9,10,11,9,13,7,11,17,12,19,14,15,11,9,28,18,12,16,18,24,16,21,13,11,14,10,10,14,12,16,23,22,23,8,21,19,27,22,19,16,9,17,19,20,8,17,11,15,14,10,11,19,17,23,20,14,23,27,29,21,23,26,18,13,20,18,21,11,13,17,14,10,14,18,15,17,19,16,17,17,27,32,29,32,30,11,10,15,25,24,13,20,12,11,16,18,10,16,21,12,19,17,30,31,26,29,29,32,34,7,23,15,16,18,10,15,20,16,14,18,12,12,12,18,32,29,30,35,34,31,22,19,9,12,19,13,10,15,18,11,23,23,10,11,14,13,34,29,31,29,30,33,34,30,27,8,17,12,12,19,9,12,20,13,10,11,11,11,28,31,29,30,29,27,30,31,37,35,15,11,8,9,17,9,19,13,18,9,10,12,31,32,31,31,30,29,36,32,32,9,12,8,7,8,17,14,22,14,8,10,12,11,34,29,29,33,30,35,38,30,24,13,8,11,8,11,10,17,18,21,16,11,15,13,32,28,33,31,28,28,29,32,17,7,11,12,17,9,12,10,20,13,19,12,13,16,28,31,30,30,28,29,29,31,25,17,18,16,15,11,14,22,19,7,17,11,18,9,29,30,33,27,28,27,29,35,30,4,6,15,14,11,9,12,17,17,7,17,10,12,27,30,35,32,31,28,23,31,31,7,8,14,17,12,16,14,20,16,20,8,6,9,27,29,31,29,33,29,30,25,27,30,9,12,14,11,12,13,14,14,14,14,12,15,30,30,32,34,31,28,26,29,29,28,30,21,15,17,15,11,6,14,15,15,14,14,28,35,29,31,32,39,29,24,25,26,27,26,28,10,13,10,4,6,15,10,11,9,31,41,41,32,38,29,29,26,26,26,30,34,25,35,31,15,8,15,16,9,7,14,36,31,38,36,38,31,34,29,29,23,28,29,25,35,29,33,6,9,14,5,7,8,34,31,39,35,38,29,36,29,26,21,26,26,27,34,27,33,9,10,14,3,8,9],
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
