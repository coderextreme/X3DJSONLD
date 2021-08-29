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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA6-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.083749987109314,-76.74299996181202,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[33,23,25,25,34,28,36,35,26,19,18,26,26,20,26,24,27,19,30,14,19,15,41,23,22,25,25,25,27,29,36,25,23,18,20,16,27,26,23,27,18,29,17,15,26,24,36,25,26,28,25,26,31,25,25,25,17,19,25,25,27,24,23,16,9,11,43,44,39,27,26,29,24,27,33,32,30,23,22,17,19,21,26,23,15,13,8,23,29,23,37,26,26,26,24,36,28,23,25,25,27,19,17,18,21,15,26,21,7,19,34,40,46,26,27,24,28,22,29,31,34,23,21,17,19,17,17,14,18,17,15,19,36,34,28,30,30,23,24,28,23,27,30,25,25,17,17,15,27,22,22,28,17,27,34,28,29,28,30,25,22,26,23,21,22,24,24,18,19,20,22,20,15,19,23,30,30,28,40,39,38,32,29,29,25,25,27,23,19,30,16,18,20,18,20,19,28,23,19,29,36,31,39,34,26,25,23,28,25,27,19,21,18,18,25,25,30,21,29,23,27,32,30,26,28,29,30,26,27,24,24,24,21,31,32,26,29,24,29,30,22,24,30,28,30,28,29,26,24,22,15,20,21,24,31,23,24,31,24,24,33,29,30,26,35,26,30,35,27,33,24,31,34,25,13,24,22,25,32,27,25,25,23,24,24,22,25,39,29,40,33,27,27,22,34,25,26,20,29,24,27,27,32,34,24,31,25,28,27,23,34,33,32,30,28,23,25,19,27,26,25,25,24,27,24,32,31,23,27,17,28,27,27,34,41,40,29,21,31,27,20,17,26,26,25,20,33,25,24,27,29,37,27,29,23,34,39,31,29,30,21,16,27,29,16,19,25,19,18,23,31,26,30,28,21,30,26,26,29,33,29,23,30,19,20,24,28,15,26,19,18,17,28,27,23,26,22,25,27,39,28,36,21,24,36,17,31,19,19,27,20,24,26,23,14,20,30,30,25,35,23,35,26,33,30,32,45,30,42,21,21,18,19,15,23,18,20,28,28,31,35,27,27,24,25,37,35,32,36,30,38,24,23,32,27,25,20,28,29,28,28,30,33,28,29,23,27,38,34,31,34,31,37,24,23,32,24,18,19,28,32,29,27,31],
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
