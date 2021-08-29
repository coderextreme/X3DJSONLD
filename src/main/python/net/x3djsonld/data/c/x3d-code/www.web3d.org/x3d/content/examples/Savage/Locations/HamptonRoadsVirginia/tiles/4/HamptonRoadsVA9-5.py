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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA9-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.80249998029902,-77.36799997694601,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[37,39,45,38,38,34,40,39,38,37,37,46,37,34,35,38,35,35,32,32,35,31,48,46,44,37,36,39,41,33,39,38,48,48,47,47,35,34,35,27,26,29,35,37,35,36,38,40,33,33,41,32,38,41,37,45,38,39,38,31,33,34,29,31,39,36,33,27,33,39,34,30,42,29,38,37,42,34,32,46,41,42,36,39,35,36,32,37,31,36,31,30,37,34,30,33,30,29,41,30,37,44,39,41,37,33,35,32,30,36,34,38,39,36,33,32,28,40,34,30,48,31,37,44,41,33,29,32,44,29,34,45,40,45,43,38,34,22,35,31,31,41,39,30,38,40,41,38,36,47,45,25,45,44,46,41,35,43,41,23,34,36,27,37,36,42,43,43,42,37,42,42,34,23,32,32,44,35,36,27,31,30,26,26,26,29,33,43,38,41,36,37,34,32,32,31,34,33,30,36,40,35,36,35,26,20,24,31,50,42,35,35,38,34,28,37,31,24,36,34,23,25,32,33,38,43,34,26,30,39,33,34,33,31,36,35,32,42,30,30,40,39,22,17,40,38,38,34,34,35,36,21,34,27,28,29,29,27,30,29,19,25,36,36,36,35,40,34,35,36,32,38,37,33,21,27,29,23,29,30,21,21,17,21,28,26,29,23,29,18,38,35,38,32,31,38,32,21,22,26,35,25,28,27,22,24,26,28,22,26,28,19,34,37,34,36,32,27,31,34,25,24,30,30,37,28,20,26,37,31,16,24,21,17,18,26,31,40,37,30,31,33,33,21,26,30,28,30,16,29,36,29,14,17,22,20,18,21,23,29,32,31,27,32,26,35,27,25,26,22,21,23,29,32,18,21,22,19,16,25,22,31,32,27,26,37,33,31,20,19,25,18,17,22,29,26,15,17,23,16,19,29,33,32,27,28,25,29,24,30,29,24,37,31,28,25,26,23,19,30,21,25,11,19,24,22,21,23,20,27,21,26,33,30,29,22,26,28,30,28,18,14,17,21,19,15,25,19,12,22,22,30,28,22,25,27,33,19,17,24,17,18,15,15,18,21,20,15,26,19,11,23,22,30,28,25,24,27,34,19,16,23,17,18],
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
