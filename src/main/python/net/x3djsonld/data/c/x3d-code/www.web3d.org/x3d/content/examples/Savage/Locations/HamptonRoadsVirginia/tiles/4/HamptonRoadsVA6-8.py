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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA6-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.083749987109314,-76.99299996786561,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[32,33,33,35,35,37,37,34,30,38,29,54,39,34,28,31,35,36,40,36,35,26,35,41,36,31,27,33,39,26,25,36,29,42,46,26,24,32,44,22,25,22,23,24,42,38,38,25,40,24,19,24,25,29,24,23,32,22,37,30,34,32,33,25,28,22,44,41,40,34,39,29,36,35,25,25,36,35,33,20,24,32,36,36,46,32,32,30,39,37,42,35,41,46,36,40,31,25,30,28,28,26,34,33,31,36,32,33,37,40,38,39,33,36,39,44,34,30,30,30,21,21,27,32,34,37,29,24,34,28,39,41,42,47,42,45,38,32,40,30,32,35,26,26,25,33,33,36,25,31,29,28,36,36,39,46,34,33,40,33,28,30,35,23,36,37,26,30,23,31,28,37,40,31,29,32,38,51,38,37,26,42,30,31,35,39,21,18,19,22,33,28,25,29,36,25,30,33,35,36,38,31,26,32,30,34,29,31,21,24,23,21,32,26,23,32,35,30,28,34,33,39,37,35,28,33,28,26,30,36,32,34,14,28,23,28,30,29,36,35,37,27,34,25,35,32,31,31,26,28,27,35,38,30,37,17,20,20,35,34,31,27,31,38,27,26,20,33,31,31,20,25,36,34,22,44,39,28,24,30,27,30,36,30,27,32,40,30,34,30,31,23,28,31,37,38,30,29,33,22,32,29,42,40,36,26,28,35,34,29,26,33,17,25,21,29,35,26,29,25,16,14,21,29,38,43,39,30,33,34,31,29,29,27,30,18,21,35,30,36,29,29,28,17,19,32,32,43,32,25,18,27,33,29,34,41,37,40,19,28,28,26,22,23,19,14,21,25,26,31,30,29,18,26,39,29,32,40,38,30,34,21,24,22,25,19,20,12,18,29,30,34,34,29,32,33,36,31,32,28,34,29,33,28,23,24,26,26,17,13,22,31,29,34,26,29,23,22,35,27,23,34,27,23,30,35,28,31,28,27,23,24,24,29,26,41,30,24,31,27,33,36,23,30,25,27,18,18,24,19,26,25,16,23,31,34,27,26,18,27,38,40,30,37,26,29,26,26,18,26,23,20,24,24,18,21,30,34,28,26,21,27,38,39],
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
