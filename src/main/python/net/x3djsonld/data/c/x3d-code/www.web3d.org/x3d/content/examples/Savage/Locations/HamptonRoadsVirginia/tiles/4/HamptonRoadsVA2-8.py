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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA2-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.45874999618971,-76.99299996786561,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[17,11,10,8,13,17,10,12,10,9,7,14,10,15,14,16,17,17,22,25,0,0,10,9,8,8,13,17,11,13,11,9,11,16,14,16,16,15,18,15,14,0,0,0,11,13,12,6,17,21,18,21,10,11,12,20,14,14,8,16,16,6,15,0,0,0,0,0,4,13,27,18,20,15,12,11,20,14,18,16,0,4,1,19,30,2,0,0,0,0,0,19,20,19,21,20,14,20,13,15,12,9,8,14,11,-1,9,27,19,0,0,0,0,17,5,18,21,17,18,16,19,13,14,8,11,14,13,8,17,19,17,8,1,0,0,12,10,17,20,22,18,9,9,20,16,10,13,20,19,11,11,7,0,0,4,0,0,16,24,25,25,16,16,11,14,11,17,12,16,15,9,10,1,14,0,1,4,0,0,13,17,19,15,20,18,18,10,7,11,22,9,12,13,8,0,8,0,1,4,0,0,11,12,12,10,15,13,21,16,21,12,10,11,16,13,10,5,0,0,0,4,3,0,0,11,9,19,16,14,15,21,18,17,17,10,15,15,20,16,1,0,1,2,6,0,0,0,12,16,19,20,16,14,23,12,3,5,14,16,16,21,3,0,0,6,5,0,0,0,6,15,13,5,6,9,7,16,5,19,13,14,13,16,19,0,0,7,6,0,0,0,0,2,6,7,4,3,13,9,19,11,3,6,12,7,16,8,0,6,5,6,0,0,0,0,6,7,7,5,7,2,3,5,2,2,-2,5,3,0,0,6,4,3,0,0,0,0,9,6,4,5,7,-1,5,7,11,1,4,0,0,0,0,9,4,9,0,0,0,0,0,4,5,7,7,6,2,4,4,4,7,0,0,0,0,1,2,0,0,0,0,0,0,0,4,5,7,6,5,6,0,1,0,0,0,0,0,0,0,0,28,29,19,0,0,0,0,2,0,4,2,0,0,0,0,0,0,0,0,0,25,7,16,27,33,32,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30,36,21,10,36,29,35,34,14,0,0,0,0,0,0,0,0,0,0,0,0,0,26,37,22,8,33,29,36,37,14,7,0,0,0,0,0,0,0,0,0,0,0,0],
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
