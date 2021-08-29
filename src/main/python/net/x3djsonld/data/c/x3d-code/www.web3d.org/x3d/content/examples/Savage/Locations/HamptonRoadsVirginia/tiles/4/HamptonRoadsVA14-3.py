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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA14-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.333749968948524,-77.6179999829996,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[36,38,38,45,39,35,32,31,25,35,35,31,30,39,39,45,45,41,42,38,40,41,42,44,39,38,42,41,31,29,30,33,31,36,44,39,45,46,48,40,41,39,39,39,40,39,38,35,35,38,34,25,27,24,30,35,38,40,37,40,39,42,40,40,36,38,36,29,33,32,37,32,25,24,33,31,30,29,34,34,40,37,40,37,44,40,41,41,31,32,38,29,34,26,23,25,28,36,36,38,42,38,42,38,35,38,41,40,40,38,35,36,30,33,27,24,30,35,32,36,36,35,38,37,38,38,40,45,39,38,39,37,26,31,29,27,24,26,29,34,36,33,41,42,43,36,40,39,40,44,39,39,43,39,19,22,25,30,26,22,27,33,37,34,40,35,40,41,40,34,41,37,40,45,44,39,24,26,26,25,26,25,27,22,34,34,35,44,34,36,40,34,33,39,38,39,40,42,26,23,20,24,21,23,20,20,26,26,31,34,32,38,38,39,37,33,36,39,43,41,28,25,40,24,22,19,34,28,22,30,29,30,39,37,38,38,43,38,33,38,39,40,29,36,29,27,26,20,21,26,20,30,28,36,41,36,40,47,36,38,37,39,37,41,28,28,29,31,30,29,31,26,26,26,36,32,36,39,39,40,37,33,36,35,38,42,34,33,29,34,30,31,25,27,26,24,36,28,36,34,42,42,39,39,30,39,37,34,31,38,31,33,35,33,27,31,28,24,31,33,33,38,43,39,37,34,35,37,37,36,31,38,39,33,36,31,29,22,24,21,29,20,30,41,37,43,40,36,32,28,37,44,26,30,29,32,39,35,33,31,21,24,22,27,21,30,31,40,37,38,31,35,40,45,30,32,29,25,29,33,36,28,25,22,22,25,24,32,30,39,40,37,33,42,32,39,24,24,32,29,30,32,29,27,28,23,22,20,22,27,25,28,26,39,34,36,35,29,24,25,21,26,29,21,27,26,24,27,22,23,23,23,25,26,36,31,35,40,38,34,23,24,29,26,22,24,24,26,30,22,26,22,21,22,18,26,34,40,35,43,35,37,23,25,27,25,29,26,28,23,26,22,23,23,23,24,26,23,20,32,41,43,39,42,22,27,25,25,28,27,27,23,25,22,23,23,24,22,24,22,20,32,41,42,40,41],
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
