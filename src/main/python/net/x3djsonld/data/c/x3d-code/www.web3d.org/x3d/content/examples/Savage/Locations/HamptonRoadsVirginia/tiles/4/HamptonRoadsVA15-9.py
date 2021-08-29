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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA15-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.239999966678425,-76.86799996483882,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[26,21,26,33,25,26,26,30,28,25,22,17,40,26,28,27,27,28,18,23,21,25,21,21,27,25,20,31,31,25,27,29,22,26,29,21,26,19,29,30,25,23,23,21,24,34,23,21,22,22,23,32,33,35,28,22,33,27,22,19,17,21,34,35,21,20,31,29,26,27,22,26,25,23,26,34,25,28,24,23,23,22,28,30,18,25,20,22,23,27,26,35,21,33,29,32,33,29,29,16,19,33,28,23,22,18,19,30,19,18,23,30,29,29,16,28,25,30,21,26,17,21,27,28,21,33,23,27,30,26,14,14,28,25,28,27,30,23,22,19,22,17,19,20,15,21,17,15,21,22,16,15,18,16,22,19,19,29,27,21,23,18,22,23,23,22,29,27,19,24,17,15,19,23,16,15,22,16,18,22,19,16,21,20,22,18,24,23,22,27,18,18,17,13,19,19,18,15,20,17,21,20,14,28,21,21,24,22,17,18,19,20,16,13,25,16,19,15,16,17,20,21,23,18,18,28,19,17,23,18,20,21,18,19,17,16,13,6,11,23,14,13,17,17,21,21,32,23,23,21,19,29,20,22,18,16,21,21,18,18,13,16,16,16,20,19,19,13,15,18,12,18,22,23,27,23,21,22,18,12,11,14,18,15,25,11,22,13,21,17,22,19,23,14,18,14,29,23,28,17,18,15,13,14,14,19,21,18,23,17,22,17,14,18,22,15,17,23,22,24,22,26,9,12,11,10,15,24,10,11,28,30,25,21,22,20,21,22,18,20,14,14,17,29,11,13,15,10,16,17,10,16,24,21,26,19,26,19,18,14,26,25,21,10,18,27,15,24,5,11,17,14,9,15,28,16,20,19,21,25,19,26,18,24,23,23,19,19,18,13,20,5,8,9,12,12,22,27,15,18,21,24,28,27,25,14,19,18,13,21,24,24,17,5,8,13,13,12,21,16,15,22,20,18,20,23,17,23,19,13,21,24,20,22,19,12,9,10,20,15,17,21,24,24,29,24,22,19,17,18,18,20,22,14,20,19,22,13,9,18,6,12,17,21,25,25,30,24,22,19,17,19,17,21,20,14,21,20,20,13,8,15,9,14],
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
