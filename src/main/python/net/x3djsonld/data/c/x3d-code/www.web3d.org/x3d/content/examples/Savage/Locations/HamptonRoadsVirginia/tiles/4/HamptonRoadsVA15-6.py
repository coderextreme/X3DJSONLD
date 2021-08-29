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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA15-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.239999966678425,-77.24299997391921,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[22,19,12,17,24,25,22,32,28,26,28,31,28,25,32,32,25,22,31,18,21,26,9,14,11,12,20,23,25,28,27,34,29,27,28,28,24,27,30,31,29,30,23,18,19,12,12,17,21,18,29,26,27,28,30,26,26,34,25,31,28,28,24,25,28,22,27,11,18,17,11,23,22,26,34,25,25,26,27,25,27,28,34,26,27,22,23,24,17,17,21,15,18,22,24,19,22,26,27,32,26,26,28,31,24,28,25,24,24,23,17,22,12,21,11,16,28,22,21,30,19,31,25,25,24,22,31,28,19,24,26,25,18,18,13,20,19,11,20,20,19,24,22,32,24,27,18,19,18,22,19,14,23,30,13,14,13,12,13,18,15,20,22,18,18,24,17,17,24,23,18,22,29,22,22,29,11,7,12,9,10,10,16,17,21,24,25,22,20,16,17,25,18,26,15,20,18,18,12,14,17,18,12,18,13,16,19,23,20,22,22,21,21,25,24,23,26,19,17,21,11,19,10,20,11,15,10,10,27,21,24,16,22,25,20,20,28,23,25,21,18,20,13,20,10,14,11,9,10,17,17,19,19,17,16,21,27,19,23,22,19,23,22,28,16,10,9,10,10,7,11,17,18,19,18,22,16,15,23,23,18,23,21,20,20,20,9,10,14,16,9,21,9,14,17,17,17,18,20,27,22,26,22,20,20,22,19,18,12,8,17,14,10,15,10,13,12,18,18,16,21,24,25,25,29,23,18,22,16,19,9,7,15,18,12,10,6,12,18,13,16,11,23,26,20,29,27,22,23,23,21,19,15,14,15,9,14,12,9,9,15,21,17,14,19,18,20,18,23,25,26,27,18,16,14,10,16,12,6,10,10,8,10,15,11,16,16,20,15,20,23,20,22,20,17,21,9,8,11,17,11,13,8,8,14,14,14,11,12,21,16,21,16,19,26,15,18,20,14,8,10,10,11,10,12,10,8,8,19,10,15,11,17,16,16,18,18,21,12,17,8,10,12,9,8,13,15,8,7,11,11,10,13,15,9,15,17,16,19,21,21,18,9,8,11,10,9,13,14,11,10,11,12,9,13,16,9,14,18,17,19,23,22,20],
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
