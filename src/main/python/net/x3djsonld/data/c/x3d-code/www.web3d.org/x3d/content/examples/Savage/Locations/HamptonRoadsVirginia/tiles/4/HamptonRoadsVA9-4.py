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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA9-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.80249998029902,-77.49299997997281,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[32,24,33,31,27,24,30,23,22,22,25,37,43,40,43,47,39,40,40,39,37,37,25,35,28,26,26,25,25,26,23,23,20,26,37,40,34,36,42,37,40,36,38,48,26,27,29,36,36,25,24,28,26,22,22,21,27,29,41,41,41,28,33,31,32,35,26,26,32,32,30,24,24,27,26,24,22,26,25,23,33,42,39,37,42,31,28,33,31,25,32,29,28,24,27,24,27,28,23,23,26,27,28,24,34,37,39,33,32,31,36,29,28,29,28,31,27,26,22,33,28,28,27,27,24,25,29,38,35,37,27,34,28,31,34,24,28,27,31,21,31,28,25,24,23,25,24,30,29,30,37,38,43,40,36,28,28,26,29,27,30,32,28,25,25,22,24,23,24,25,29,32,21,40,47,46,33,32,32,29,31,30,27,26,27,26,27,20,22,27,24,25,25,20,28,38,44,44,33,30,30,35,31,32,30,24,27,21,23,25,20,19,22,20,23,25,25,25,49,30,34,40,33,38,31,32,34,31,22,23,22,23,19,19,28,18,20,20,26,24,34,23,29,37,36,33,28,36,34,34,28,29,23,32,25,27,22,20,22,23,22,21,21,22,27,33,30,31,30,37,29,31,26,27,29,38,22,28,21,17,18,30,17,20,22,36,34,27,36,31,31,32,33,28,30,29,26,27,25,25,26,16,26,31,22,22,25,29,33,30,31,31,28,32,29,30,30,34,25,30,27,26,26,31,18,20,24,24,25,22,36,32,26,29,26,24,30,33,25,30,34,27,27,27,30,21,21,17,22,21,21,16,41,34,29,35,28,38,25,24,28,32,32,30,25,25,27,29,16,20,19,17,15,14,34,37,34,35,33,29,26,23,25,26,32,30,28,30,32,22,20,23,23,22,18,18,33,35,29,29,26,27,29,26,23,33,31,28,34,25,29,25,20,23,17,25,15,15,38,25,32,28,26,28,27,24,31,31,34,29,34,31,27,26,22,23,20,21,18,19,42,37,33,29,28,30,26,25,25,25,28,24,29,24,28,32,28,21,27,18,16,18,44,37,32,31,28,33,26,26,24,23,27,24,29,24,27,30,25,18,26,19,14,15],
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
