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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA12-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.52124997348872,-77.36799997694601,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[31,28,28,36,32,31,31,33,24,25,23,28,32,31,29,29,20,33,31,35,24,29,26,34,27,26,28,30,31,25,35,22,24,39,30,33,32,29,20,29,31,29,27,25,29,34,37,29,30,34,26,23,33,35,40,23,25,29,32,26,26,28,33,30,24,27,31,25,29,23,22,30,32,39,42,27,28,27,27,33,24,26,24,26,30,34,22,24,28,33,26,28,31,30,28,32,38,29,24,26,27,26,23,20,21,25,20,20,29,25,30,27,29,31,30,30,24,28,27,28,31,29,28,29,26,25,16,20,27,24,26,24,30,29,31,30,30,31,30,28,30,30,38,37,26,25,28,28,28,28,24,27,18,27,31,38,26,34,32,26,40,33,31,48,30,34,30,33,30,26,28,35,27,26,22,26,35,29,35,30,31,37,31,31,33,32,26,31,33,26,28,25,25,28,24,21,29,21,34,37,34,24,28,35,33,24,32,29,25,27,30,25,31,27,30,31,30,33,33,25,31,35,30,33,36,38,29,32,28,37,26,28,29,29,32,29,31,30,32,30,28,27,34,34,37,31,29,37,29,27,35,31,28,24,26,34,28,25,23,29,27,26,26,27,34,26,33,32,34,31,28,23,31,28,27,36,33,27,27,26,25,27,25,23,26,31,25,29,31,28,29,41,26,30,23,26,30,25,32,36,26,31,26,24,24,30,27,31,28,30,35,29,26,25,28,30,30,25,29,25,29,26,36,30,26,30,21,27,25,23,30,28,32,29,26,29,26,27,33,23,27,26,31,32,33,26,40,22,24,17,21,20,28,31,28,27,33,33,24,27,24,27,29,25,28,30,20,24,27,24,19,19,22,26,28,29,31,27,24,27,27,31,31,24,30,23,23,25,23,21,17,21,22,17,18,19,29,33,29,29,24,24,23,28,28,33,19,23,26,29,20,30,29,23,24,22,19,18,30,38,32,26,26,27,36,24,32,31,25,41,30,27,20,17,18,18,26,22,29,28,32,23,27,26,23,28,27,25,31,28,28,28,28,26,22,21,21,24,24,23,29,27,22,26,33,35,21,19,28,33,25,31,21,27,25,23,16,28,26,28,32,21,26,24,23,26,33,34,22,22,31,35,20,27,22,25,21,24,18,24,26,27,30,21,25,25],
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
