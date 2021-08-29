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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA13-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.42749997121862,-76.86799996483882,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[7,13,8,11,11,14,9,12,14,10,18,11,15,15,16,12,20,21,31,23,24,23,15,16,13,16,8,16,12,9,7,14,14,22,18,33,21,25,20,24,24,28,20,21,21,22,16,11,8,14,8,12,16,28,15,19,20,35,28,22,22,24,21,20,16,17,19,20,15,14,7,13,12,16,23,30,20,21,32,31,20,18,23,25,24,23,12,14,13,17,22,28,23,15,19,23,20,13,20,16,25,26,16,20,26,28,31,36,22,16,24,26,24,33,22,17,23,24,18,23,28,22,22,17,30,26,23,28,23,25,19,22,17,33,21,26,19,10,21,27,18,14,21,18,22,18,20,26,20,28,40,28,26,25,31,17,34,24,19,18,24,25,11,13,11,19,24,14,17,28,26,23,31,24,19,20,28,28,30,29,31,30,16,18,12,11,13,20,24,17,19,22,32,18,25,44,36,27,22,29,25,28,30,13,11,13,24,20,16,23,22,13,19,29,31,25,38,22,25,27,22,23,33,32,23,18,13,19,10,25,13,25,22,33,25,29,26,33,27,22,20,20,22,26,25,22,24,23,22,14,17,12,27,22,23,22,23,30,28,27,29,28,22,21,23,29,29,32,28,22,11,15,11,11,23,25,18,23,27,23,21,39,26,27,25,24,12,24,15,23,17,26,16,10,26,21,27,24,19,25,23,15,33,23,25,22,25,29,22,10,18,21,13,27,16,20,12,16,13,12,13,21,18,22,32,25,22,22,25,22,12,24,17,19,10,19,26,18,15,16,13,19,16,31,17,21,22,27,27,24,21,17,17,35,18,15,6,18,16,12,22,18,14,18,25,29,32,26,17,17,22,38,32,31,25,22,26,25,23,12,12,14,15,19,22,25,20,26,22,20,20,24,23,34,31,16,16,22,32,18,18,20,25,16,9,20,20,16,19,29,25,20,19,25,24,22,27,13,24,25,33,21,16,13,19,12,14,13,15,15,14,21,21,22,21,24,24,14,13,16,24,34,30,20,13,19,28,18,11,15,13,14,17,18,23,27,20,19,24,28,9,9,24,35,30,20,15,24,25,18,11,18,18,13,20,20,25,26,21,19,23,27,7,9],
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
