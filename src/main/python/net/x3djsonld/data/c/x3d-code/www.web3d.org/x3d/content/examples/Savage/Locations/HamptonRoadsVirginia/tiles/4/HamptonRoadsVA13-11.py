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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA13-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.42749997121862,-76.61799995878522,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[19,17,15,21,17,27,21,22,21,28,21,24,14,15,15,10,15,18,23,9,8,17,15,14,12,21,18,17,18,17,24,19,23,17,13,19,11,11,6,6,11,8,3,9,14,19,14,21,17,19,15,20,29,24,17,18,19,9,12,15,4,6,3,15,10,21,13,14,15,17,17,19,24,21,26,25,15,14,19,15,15,4,5,7,6,9,4,7,17,11,18,17,20,19,23,31,31,16,15,12,16,9,15,3,24,14,25,5,7,24,18,18,13,15,18,21,24,21,22,19,15,24,14,11,13,7,6,7,3,6,8,8,17,19,21,23,24,13,22,20,19,23,20,12,7,6,12,11,6,5,3,4,9,6,29,18,17,13,16,14,17,18,18,27,22,16,3,9,11,13,8,7,8,7,6,4,13,12,11,20,22,28,22,18,19,18,19,9,7,13,9,13,9,8,10,7,6,8,19,9,14,25,20,16,15,23,15,14,22,0,8,13,15,4,19,7,7,8,12,10,21,11,19,21,27,22,16,16,19,17,16,8,6,11,7,14,6,6,8,8,6,5,19,29,19,20,19,20,16,24,18,19,18,8,5,7,11,10,8,6,8,5,5,8,7,20,17,19,15,15,17,16,18,19,24,10,5,4,15,11,11,11,10,8,8,6,20,18,12,11,19,16,19,16,20,24,12,5,6,7,4,4,10,3,11,8,7,7,16,15,15,22,31,28,21,18,17,12,15,11,8,8,14,10,11,6,12,7,3,8,18,12,10,13,22,27,16,18,21,8,8,6,12,5,13,13,12,13,12,13,10,9,15,8,14,15,22,23,17,16,17,7,22,15,17,10,7,18,11,11,10,11,18,10,14,12,15,14,15,19,15,14,12,10,9,13,6,8,8,21,11,14,6,12,11,13,11,14,16,20,13,20,15,8,9,12,3,11,20,16,9,9,7,7,8,7,21,10,11,25,15,18,19,21,21,13,8,7,18,8,11,17,19,8,11,11,4,14,10,2,17,20,16,19,15,19,10,8,9,6,4,7,9,12,7,7,13,6,6,13,10,11,16,17,16,20,15,18,9,7,9,4,5,6,11,11,6,9,12,9,6,12,10,10],
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
