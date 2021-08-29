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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA13-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.42749997121862,-77.6179999829996,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[43,41,43,42,29,39,36,30,22,27,23,15,18,17,14,20,21,22,11,24,26,26,45,40,42,30,30,34,36,26,21,33,27,24,12,23,18,11,23,17,24,25,18,21,40,50,42,34,31,35,35,25,27,35,27,25,27,23,28,34,33,23,26,17,16,20,38,41,39,30,36,39,34,22,26,20,27,24,24,27,21,24,29,23,22,22,21,18,43,43,39,29,40,39,36,23,21,21,27,23,21,20,24,26,23,23,16,22,15,22,39,35,34,38,44,41,32,25,31,21,27,21,22,21,22,22,25,20,23,19,19,21,40,36,29,29,41,40,34,29,27,20,26,25,23,22,28,22,21,22,16,16,16,16,36,35,29,41,40,37,35,32,25,20,19,21,27,25,31,22,23,18,17,19,18,22,37,29,29,33,36,40,39,32,30,26,23,21,25,26,19,24,16,27,16,17,20,17,34,32,31,37,41,38,42,39,40,28,21,21,27,18,23,23,19,23,18,17,17,16,28,32,29,33,35,40,44,44,38,32,26,22,30,23,19,27,19,22,20,20,18,18,28,27,35,35,36,40,45,40,37,33,26,20,19,19,18,24,20,21,23,23,23,20,28,36,32,35,35,40,42,42,37,32,31,19,29,35,26,18,30,32,37,30,31,29,27,33,34,39,36,38,40,35,35,31,29,30,36,34,36,31,38,40,39,35,34,33,29,35,36,41,40,40,41,33,36,38,29,29,31,36,36,38,38,41,35,38,37,37,31,38,43,39,39,40,37,37,36,35,30,27,34,35,35,27,39,43,40,42,34,39,41,37,40,45,36,43,42,38,28,32,29,27,25,38,39,29,38,39,40,40,38,42,37,41,40,48,47,41,40,33,31,35,29,29,37,29,35,39,39,39,40,41,41,37,35,39,38,37,45,38,36,32,27,33,34,32,36,36,36,43,37,37,40,44,41,38,39,39,42,40,36,39,41,32,32,28,30,32,35,35,41,36,42,41,39,40,43,40,38,38,36,46,41,38,31,32,23,35,35,31,31,39,37,45,42,42,42,39,40,41,36,38,38,45,39,35,32,31,25,35,35,31,30,39,39,45,45,41,42,38,40,41],
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
