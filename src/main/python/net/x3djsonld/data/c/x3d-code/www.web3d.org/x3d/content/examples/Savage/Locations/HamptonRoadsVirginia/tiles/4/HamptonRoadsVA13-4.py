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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA13-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.42749997121862,-77.49299997997281,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[26,22,20,18,17,19,12,17,13,10,10,12,15,24,28,28,22,24,31,26,22,23,21,18,22,14,18,21,19,5,18,14,13,11,14,15,28,28,31,24,25,22,23,29,20,19,19,17,19,14,15,18,19,18,14,9,12,14,29,30,28,25,24,24,22,24,18,19,18,16,18,20,14,16,19,10,14,14,9,15,13,27,22,24,24,20,28,26,22,19,18,22,17,16,11,19,17,17,10,17,9,9,19,17,19,23,26,32,27,28,21,20,18,19,15,15,15,16,17,12,16,17,15,6,15,16,17,17,20,25,28,32,16,15,17,16,14,14,11,12,20,16,18,17,17,9,11,16,13,16,24,17,32,23,22,13,18,13,16,16,13,17,12,16,10,15,27,7,11,14,18,15,16,25,21,22,17,22,15,14,17,18,17,20,17,19,14,11,17,10,7,22,17,15,19,16,17,20,16,21,19,17,14,16,15,19,16,17,19,12,20,22,18,25,9,11,15,15,13,14,18,19,22,18,18,17,17,16,16,15,15,19,18,21,22,9,18,12,10,15,10,11,20,20,17,19,19,16,17,22,15,13,12,12,21,13,21,14,14,12,17,11,12,18,29,25,18,16,19,15,13,19,16,14,15,11,17,14,19,20,13,19,12,17,23,16,33,25,24,21,17,17,15,18,13,19,14,15,17,12,18,13,15,19,24,15,15,16,37,35,23,22,26,21,14,13,17,15,13,11,16,20,14,9,15,18,15,20,19,14,39,32,21,28,21,22,24,23,13,14,13,24,23,27,21,14,11,13,10,13,14,17,42,34,24,27,23,21,22,22,25,18,21,18,23,22,24,24,12,20,16,22,19,19,37,37,30,26,21,22,20,18,23,22,25,27,24,21,26,24,13,21,16,17,18,16,38,35,37,29,23,20,25,21,21,27,25,23,20,21,22,29,22,24,18,18,16,16,40,44,33,31,29,28,25,25,28,24,22,19,23,19,19,29,28,18,22,22,17,16,41,37,35,35,24,25,22,19,22,22,18,17,18,16,19,26,24,17,20,23,13,13,41,37,36,36,24,24,27,18,22,22,18,16,17,17,22,24,21,16,20,22,15,13],
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
