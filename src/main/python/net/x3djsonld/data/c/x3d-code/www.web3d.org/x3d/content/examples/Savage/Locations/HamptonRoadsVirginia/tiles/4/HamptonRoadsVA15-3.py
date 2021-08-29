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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA15-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.239999966678425,-77.6179999829996,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[22,27,25,25,28,27,27,23,25,22,23,23,24,22,24,22,20,32,41,42,40,41,23,22,26,29,25,24,28,26,22,21,19,22,21,21,22,23,19,25,37,35,44,42,28,27,27,25,25,29,21,24,21,24,18,18,21,26,23,23,20,22,19,29,41,43,26,26,29,27,31,25,25,23,26,20,21,25,26,23,24,26,27,18,24,23,23,37,24,27,25,25,25,30,22,23,22,23,20,33,31,24,27,22,18,22,24,23,33,39,38,40,31,44,33,29,33,29,34,29,31,33,20,24,23,28,19,22,25,33,34,41,38,40,39,39,31,27,26,25,27,27,31,26,24,16,17,23,18,27,24,25,33,38,36,39,37,39,44,34,22,30,35,25,26,25,35,28,20,26,19,21,21,29,27,27,38,40,39,34,36,28,25,32,29,23,28,27,25,32,24,20,18,26,16,22,22,31,39,39,39,38,34,33,34,29,27,23,23,25,25,27,25,19,19,18,15,20,26,32,37,36,37,37,38,32,32,27,26,36,23,22,22,26,22,20,17,19,16,25,30,31,42,40,39,44,34,32,29,27,30,32,28,22,20,20,17,22,15,17,15,21,34,34,40,38,39,35,38,31,27,28,31,29,25,24,22,23,30,22,18,20,17,24,30,30,37,41,38,43,34,39,29,30,29,30,30,25,21,24,20,18,19,21,20,21,19,21,35,37,39,37,34,34,28,26,30,26,33,25,22,26,23,20,18,17,25,22,30,27,35,36,43,37,43,36,28,27,25,27,25,28,24,28,19,16,18,21,27,26,28,27,33,35,36,40,42,36,31,33,22,29,25,27,23,23,22,15,16,19,26,30,21,28,33,36,39,38,35,34,31,29,28,24,24,25,29,21,18,17,25,19,17,22,35,35,35,35,35,32,32,35,42,31,32,27,24,29,29,20,19,18,23,16,21,23,31,30,39,34,36,38,28,35,36,35,24,21,27,23,26,22,20,20,21,22,17,20,21,33,31,35,36,33,34,27,30,30,25,26,26,21,25,25,26,22,19,17,18,23,28,33,29,35,35,34,34,28,29,29,26,26,25,21,26,27,26,25,19,16,20,23,29,35],
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
