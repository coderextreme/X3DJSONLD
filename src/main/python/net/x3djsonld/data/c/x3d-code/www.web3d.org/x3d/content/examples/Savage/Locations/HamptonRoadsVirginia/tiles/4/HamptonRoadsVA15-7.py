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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA15-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.239999966678425,-77.11799997089241,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[26,19,25,23,22,23,34,32,21,25,25,23,28,16,15,19,21,25,25,23,21,21,18,25,17,25,27,24,37,24,28,30,24,20,22,21,15,19,27,31,31,31,28,32,22,30,20,30,26,22,29,29,29,33,42,24,26,23,18,23,31,29,29,20,21,25,24,22,24,18,21,26,36,21,26,24,23,20,20,23,20,25,22,25,21,27,23,27,23,26,21,18,23,32,35,28,30,24,31,22,19,22,17,19,27,24,22,24,22,23,25,25,27,28,18,22,32,32,21,31,15,19,20,23,18,16,28,24,29,22,24,23,30,27,17,22,18,21,18,22,22,26,24,20,18,15,16,23,22,29,31,34,23,30,29,23,19,26,19,16,18,31,19,16,20,13,26,18,14,16,26,30,26,22,30,25,18,18,21,16,20,23,25,31,22,19,26,21,22,23,18,22,21,20,25,31,22,32,21,18,17,25,19,24,24,28,23,27,24,17,19,24,17,16,13,18,20,23,21,22,20,29,20,17,22,24,26,30,27,26,29,25,31,16,21,24,20,21,18,14,18,22,28,18,24,25,18,31,22,27,20,24,33,36,24,24,21,26,18,28,13,12,15,18,20,21,22,16,24,17,30,20,27,28,32,25,31,22,21,24,22,26,21,14,14,18,18,25,17,19,16,13,28,18,26,35,26,37,22,23,24,18,29,22,22,16,18,19,19,21,27,19,23,18,17,17,28,23,20,26,27,29,27,20,22,23,18,21,25,21,19,22,26,19,31,22,22,18,23,22,22,25,24,24,23,26,23,21,24,31,23,22,16,22,19,22,21,23,23,17,26,17,29,30,23,21,29,29,22,21,25,24,22,18,21,21,26,19,22,24,17,15,19,21,24,21,24,20,27,31,18,21,21,23,30,24,20,22,17,23,18,20,24,20,20,21,20,19,20,26,17,22,31,29,25,24,24,21,17,20,18,21,24,11,23,23,26,23,23,17,19,21,20,24,28,21,19,41,36,24,18,16,24,21,20,26,20,14,17,20,24,19,27,16,24,21,19,24,17,20,27,24,20,18,22,22,18,24,20,14,19,19,23,19,28,18,24,19,19,21,17,23,28,21],
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
