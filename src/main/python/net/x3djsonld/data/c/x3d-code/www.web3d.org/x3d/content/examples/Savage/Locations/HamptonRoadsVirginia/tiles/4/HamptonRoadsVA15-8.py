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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA15-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.239999966678425,-76.99299996786561,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[21,21,25,22,24,18,28,21,21,30,25,20,31,18,38,21,23,18,21,27,20,26,32,28,30,26,16,24,17,19,25,27,26,22,39,27,26,28,29,23,19,28,18,21,25,24,18,23,22,31,16,21,29,18,23,25,34,24,26,22,25,22,25,21,22,24,27,23,23,26,28,27,22,21,22,31,37,27,36,24,29,19,20,22,20,21,28,31,23,23,29,24,21,18,27,23,22,24,23,29,22,24,30,18,21,23,22,25,28,23,23,25,28,31,26,19,24,32,22,19,27,21,20,22,25,17,23,23,34,26,34,23,30,21,22,33,27,26,20,20,22,24,22,16,27,21,18,16,17,17,19,30,23,28,25,27,20,23,23,18,25,19,23,17,14,21,22,15,24,24,18,22,23,26,14,22,32,20,28,22,20,17,21,16,19,14,16,18,17,16,25,21,26,19,21,21,23,22,22,19,18,18,17,20,14,15,14,13,13,25,15,26,22,25,17,20,25,18,16,20,22,21,13,25,15,19,13,18,12,15,15,18,22,25,30,25,25,16,25,18,12,20,18,17,13,18,21,15,16,20,15,24,28,13,27,25,27,31,27,18,16,17,16,17,18,20,12,14,20,24,18,16,24,18,24,25,30,22,15,21,20,18,14,23,18,20,19,14,17,13,20,22,18,21,21,21,20,31,26,18,23,17,16,19,19,18,15,22,21,16,18,18,14,19,17,19,16,21,23,15,16,17,21,15,14,11,16,16,21,23,22,19,10,17,11,15,24,21,13,24,21,21,14,18,20,11,11,12,19,26,19,28,18,11,12,17,14,15,24,28,15,15,23,20,15,13,11,14,21,20,23,16,27,24,24,18,16,11,10,13,14,15,14,14,18,15,9,11,18,16,14,20,16,18,25,28,21,25,18,14,16,18,28,26,18,16,15,17,13,25,20,14,17,20,22,14,17,22,24,27,17,17,17,13,16,21,12,17,13,17,18,22,14,27,21,12,19,21,18,21,24,26,20,21,10,8,15,12,14,18,11,14,22,22,25,19,16,18,23,18,18,17,21,22,19,23,12,9,15,13,14,17,11,18,19,23,19,13,17,16,24,20,17,17],
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
