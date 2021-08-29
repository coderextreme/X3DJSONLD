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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA8-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.89624998256912,-76.74299996181202,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[36,30,35,33,36,23,26,27,34,25,24,20,24,34,23,28,20,22,20,21,21,22,20,34,33,34,34,31,26,29,26,26,31,31,32,25,30,20,14,22,36,27,13,21,19,28,29,32,23,23,26,38,14,26,28,20,23,35,20,26,15,7,16,36,31,24,34,37,25,29,27,27,17,23,26,19,27,16,26,21,22,26,16,15,16,26,16,17,33,24,25,34,25,31,36,21,29,19,32,17,19,10,22,21,16,24,21,27,23,19,27,26,26,29,24,28,27,30,25,23,23,15,17,17,23,21,18,28,29,22,29,24,28,27,26,38,24,25,27,24,25,29,34,25,14,25,18,21,30,20,28,21,19,28,37,21,39,23,23,28,22,26,19,25,24,22,20,19,23,23,33,28,22,18,22,18,28,27,30,29,28,29,23,27,30,28,28,25,26,29,33,20,27,20,19,22,22,34,34,31,24,37,25,20,28,32,27,23,30,28,23,42,23,22,21,33,29,26,29,27,25,33,35,26,34,26,30,24,29,38,37,17,29,31,31,35,28,19,26,20,27,28,26,32,34,31,24,25,24,36,35,24,26,25,30,33,23,22,33,25,22,25,21,21,39,34,33,33,34,33,27,30,33,39,23,30,21,25,17,23,18,17,23,23,25,22,39,30,30,33,31,26,41,29,33,37,29,34,25,18,29,31,26,24,19,21,19,19,39,30,25,28,29,23,25,32,33,35,36,20,29,24,27,27,24,23,23,30,19,19,30,48,34,40,32,26,21,23,30,28,41,23,36,20,27,18,16,21,23,22,11,17,32,39,33,24,19,23,26,27,23,26,33,35,34,31,30,24,26,31,33,25,26,25,26,35,41,20,32,29,25,26,18,31,22,30,21,19,20,25,20,29,19,24,20,22,32,20,23,20,22,24,22,36,28,27,30,29,37,23,23,21,28,28,22,22,24,27,26,29,21,32,24,28,26,25,37,25,21,27,20,27,24,20,27,33,30,24,26,24,29,20,16,27,25,21,24,35,39,38,33,25,22,24,23,29,29,30,27,27,24,29,37,27,24,14,23,25,32,30,35,34,40,34,32,33,22,24,40,18,20,23,24,21,31,30,23,17,23,26,32,31,31,29,37,36,32,33,25,22,35,18,21,23,25,20],
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
