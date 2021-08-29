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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA6-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.083749987109314,-77.36799997694601,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[20,28,28,24,23,34,25,24,30,30,30,30,36,36,32,38,33,30,22,25,29,24,22,22,22,22,21,21,22,24,27,28,28,30,37,37,32,32,33,34,32,29,28,25,22,23,25,21,22,25,28,29,25,31,31,41,40,30,35,34,32,31,29,24,33,24,20,20,22,24,21,23,29,27,31,31,34,41,36,36,32,30,32,24,29,32,28,26,22,19,25,27,28,26,27,25,26,36,37,42,36,34,37,34,32,28,24,30,32,30,24,35,31,30,31,26,34,35,36,39,38,39,43,37,42,37,44,41,35,26,31,28,24,22,24,34,29,32,43,40,37,39,37,39,40,38,41,40,36,35,32,28,28,33,24,29,29,33,25,27,31,36,36,38,37,40,39,40,39,45,37,34,35,27,27,32,25,26,32,34,27,33,38,40,35,43,39,33,31,39,38,33,32,36,37,24,31,34,27,27,32,33,38,43,41,43,39,40,39,33,29,30,38,29,32,37,47,35,22,22,26,27,37,39,37,40,38,44,40,41,35,43,33,37,32,29,37,38,39,42,23,21,30,41,34,45,38,38,46,39,43,42,34,34,37,39,39,36,38,35,34,22,21,25,37,44,39,50,52,52,48,41,37,43,32,41,39,38,34,35,23,26,20,30,32,31,45,42,42,42,35,48,45,37,38,38,35,39,40,37,34,28,33,39,30,40,33,30,42,44,40,39,39,37,38,28,34,28,26,33,30,31,26,38,37,40,34,37,32,34,47,46,37,42,35,42,38,36,35,34,32,32,30,32,34,41,41,41,33,37,36,37,40,42,35,33,32,30,44,43,39,41,38,36,39,37,36,36,40,38,39,36,39,36,44,46,37,39,37,34,44,38,42,44,40,36,39,47,43,35,37,31,37,28,32,34,48,42,45,51,52,43,36,39,44,45,41,42,38,41,35,36,35,33,35,28,26,31,50,46,50,48,44,50,42,36,40,41,38,36,41,38,42,38,39,38,41,32,40,37,43,44,51,40,54,43,50,37,44,39,35,40,40,34,43,36,36,42,36,42,46,42,45,42,49,40,52,43,48,37,42,39,36,39,41,34,42,35,35,42,36,42,47,43],
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
