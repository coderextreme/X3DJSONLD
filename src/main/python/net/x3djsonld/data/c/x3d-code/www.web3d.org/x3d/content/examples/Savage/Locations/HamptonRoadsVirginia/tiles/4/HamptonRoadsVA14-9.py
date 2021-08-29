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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA14-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.333749968948524,-76.86799996483882,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[24,35,30,20,15,24,25,18,11,18,18,13,20,20,25,26,21,19,23,27,7,9,25,20,23,21,13,27,19,17,20,31,17,23,26,13,13,19,22,25,20,32,17,7,23,19,20,13,16,17,22,24,30,22,21,13,27,22,17,22,24,20,22,28,11,9,23,21,21,24,21,26,30,30,26,20,26,32,22,22,19,12,25,26,24,23,21,15,23,23,24,18,26,19,21,22,23,26,25,22,30,19,17,18,25,23,27,20,27,21,21,19,23,15,18,21,25,22,21,22,29,22,22,21,19,24,17,32,20,19,30,29,31,26,21,24,16,20,20,34,20,23,21,25,24,22,20,20,16,16,16,19,20,30,21,23,35,21,21,16,33,31,29,29,25,22,20,32,26,25,19,22,22,19,23,0,19,21,22,24,21,21,17,24,23,26,29,28,21,15,20,27,22,22,25,23,24,0,27,23,24,24,26,21,24,16,28,21,21,31,29,19,27,33,24,21,20,25,35,0,23,24,20,28,37,24,19,29,23,20,21,24,22,26,25,28,21,20,37,36,30,0,23,26,24,22,29,22,33,29,22,38,24,29,36,22,26,26,24,24,22,24,29,6,34,22,19,23,36,24,24,21,34,26,24,21,23,31,36,40,24,23,25,21,42,0,29,29,24,24,24,22,23,29,22,27,22,19,32,27,41,30,22,28,23,15,34,0,23,34,23,21,33,29,21,19,26,23,23,19,22,27,34,26,30,21,26,26,0,0,21,36,23,23,23,36,26,24,29,23,27,23,22,23,23,28,23,32,19,33,14,0,24,30,28,29,25,40,32,33,24,27,33,29,24,24,23,24,36,20,21,30,31,0,25,23,25,25,24,27,36,24,24,23,36,24,24,24,21,20,32,32,19,25,33,0,23,28,35,25,25,21,25,25,22,30,23,24,25,22,25,22,23,23,23,32,35,14,22,30,26,21,27,28,28,28,23,38,31,28,24,34,27,24,25,23,34,31,35,29,23,23,29,23,18,22,33,25,29,30,27,22,28,28,30,28,26,20,25,23,29,23,24,21,24,29,24,26,27,30,28,24,29,19,40,27,27,28,26,28,20,23,23,23,26,21,26,33,25,26,26,30,28,25,22,17,40,26,28,27,27,28,18,23,21,25],
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
