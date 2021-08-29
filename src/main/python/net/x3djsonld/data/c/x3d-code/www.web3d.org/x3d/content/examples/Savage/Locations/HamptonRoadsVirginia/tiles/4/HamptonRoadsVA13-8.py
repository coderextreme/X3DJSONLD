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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA13-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.42749997121862,-76.99299996786561,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[19,18,17,13,13,14,22,25,17,11,14,19,14,28,23,10,10,10,13,15,8,7,25,20,16,20,19,13,23,21,15,17,13,28,15,10,19,15,11,8,10,20,22,15,29,21,19,17,24,14,23,18,18,24,22,12,18,17,6,11,5,9,9,13,18,21,20,17,18,19,26,20,15,23,12,30,16,22,15,20,7,9,7,10,21,24,13,19,21,19,25,30,26,20,19,22,20,19,27,20,14,20,16,8,11,17,10,26,26,13,18,25,17,19,19,20,20,17,15,18,20,23,25,20,9,10,9,10,15,19,26,24,10,17,24,22,15,27,23,25,22,23,22,21,15,16,21,11,13,8,12,18,18,17,17,10,18,31,23,33,13,12,24,20,22,20,20,17,14,9,14,16,15,16,34,31,21,22,13,24,22,19,15,13,31,24,19,19,20,19,12,8,18,20,24,27,13,28,19,13,13,16,15,18,20,19,19,21,16,24,29,22,21,13,19,9,15,18,23,22,18,18,12,25,12,18,18,18,18,18,35,18,16,6,6,19,15,16,17,24,23,22,15,18,19,19,15,17,20,27,22,17,15,21,22,13,12,20,18,23,14,23,21,22,20,19,20,18,21,14,24,11,23,12,16,13,17,10,14,13,23,19,17,16,21,23,16,18,24,20,20,13,8,14,10,9,19,13,12,18,19,16,24,16,24,25,19,12,16,24,27,31,18,16,16,15,12,14,24,25,34,24,25,22,24,21,21,23,25,22,20,19,30,17,18,16,14,17,18,28,27,20,16,27,19,25,27,23,32,27,21,12,21,21,23,18,16,14,19,25,13,29,21,36,22,29,31,19,21,21,29,19,21,17,23,18,29,20,28,16,25,22,26,21,22,27,30,20,25,24,25,18,14,15,18,25,20,16,21,26,26,14,9,16,27,24,21,22,23,21,22,30,22,19,15,19,23,16,24,18,31,28,21,16,7,13,22,19,33,23,25,31,29,28,20,24,11,17,19,24,18,25,22,19,20,20,13,19,28,30,31,25,30,23,23,25,21,19,23,21,25,24,17,24,21,18,20,19,11,18,28,31,35,25,26,26,22,27,21,19,24,22,24,24],
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
