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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA15-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.239999966678425,-76.61799995878522,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[7,7,6,6,6,7,6,10,14,16,22,18,18,10,14,16,17,19,17,18,16,24,4,9,7,5,6,8,9,14,18,22,19,23,16,15,16,14,14,17,18,14,8,8,10,14,9,8,8,5,9,15,16,16,21,26,18,10,7,10,17,14,7,5,5,16,4,4,8,6,3,5,6,18,14,13,19,15,7,7,4,13,12,14,21,7,16,12,15,7,5,6,6,6,18,11,13,13,18,8,5,6,8,10,10,10,15,18,16,7,4,17,3,8,5,26,11,9,21,12,22,14,15,5,8,4,12,8,10,12,6,16,3,4,7,19,4,9,13,15,14,9,13,16,17,11,4,5,24,5,16,5,17,17,6,7,16,19,20,6,14,13,11,13,15,16,7,6,12,17,8,7,6,11,4,10,4,6,4,15,15,7,7,15,7,7,15,8,5,3,21,2,8,5,10,1,2,8,3,7,10,4,22,7,8,8,7,5,4,14,7,4,2,5,7,16,5,5,11,14,2,7,4,4,6,6,6,6,15,7,8,6,7,4,9,5,8,15,4,15,12,4,16,4,6,6,5,9,10,7,9,14,14,5,6,6,10,15,22,7,9,14,5,5,9,3,7,8,5,3,7,6,14,5,10,13,15,8,9,10,16,3,9,5,4,16,6,7,5,5,7,8,8,9,5,5,6,6,13,19,11,11,12,7,5,12,10,9,4,4,9,7,5,5,5,5,12,2,4,14,10,8,4,10,8,6,5,14,6,9,7,4,5,6,7,9,5,7,5,4,13,4,13,5,15,8,10,4,9,4,8,14,13,9,0,0,6,4,5,6,11,5,4,5,11,10,6,6,9,7,2,18,10,12,6,8,0,0,2,7,4,9,5,4,12,4,10,11,13,6,6,5,4,4,7,7,8,0,0,0,8,2,4,6,5,18,11,6,14,9,12,6,5,5,1,11,8,7,1,0,0,0,0,7,5,4,12,13,8,1,9,12,18,12,13,5,9,4,4,9,0,0,0,0,0,3,7,15,7,16,8,9,13,7,16,7,11,3,11,15,12,10,0,0,0,0,0,5,7,14,8,16,9,8,15,6,15,8,9,3,12,14,14,12],
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
