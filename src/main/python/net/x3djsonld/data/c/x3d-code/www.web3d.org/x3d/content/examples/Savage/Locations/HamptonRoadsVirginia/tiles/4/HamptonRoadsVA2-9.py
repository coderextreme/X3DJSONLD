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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA2-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.45874999618971,-76.86799996483882,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[0,0,5,3,11,2,18,42,25,31,36,24,36,36,44,39,38,36,19,30,33,33,0,0,0,-2,2,22,20,37,12,30,23,13,20,41,39,35,32,30,25,33,24,27,0,0,8,9,14,16,22,40,28,19,7,38,37,42,26,37,21,23,19,33,41,38,0,5,12,2,3,17,15,26,32,12,33,24,36,29,39,26,26,21,17,36,29,38,0,0,3,9,9,18,19,29,23,20,24,32,33,29,26,32,30,25,15,16,26,26,8,0,0,0,1,18,14,17,25,23,14,21,19,36,26,24,21,10,28,23,23,15,0,0,0,0,15,22,12,9,6,10,0,13,21,38,25,9,11,22,25,35,37,18,1,0,1,2,15,3,9,13,14,9,33,20,26,29,14,21,32,23,29,32,29,23,1,-1,9,6,-1,3,12,16,24,25,20,23,31,24,18,19,22,21,28,26,44,39,0,1,-1,-1,2,0,0,25,23,23,27,23,24,27,24,12,18,35,21,35,37,34,1,-1,20,-1,1,0,2,17,18,23,28,27,22,20,19,7,16,26,31,33,41,33,0,9,1,4,4,0,14,8,27,29,25,24,17,13,19,6,21,24,19,28,33,31,0,7,14,10,1,5,19,16,24,18,19,24,28,22,22,5,15,17,23,28,27,22,0,0,7,17,15,19,17,15,11,11,14,25,23,22,12,12,13,22,24,36,31,27,0,0,5,4,15,21,19,17,22,16,16,14,22,18,12,10,9,24,26,23,29,17,0,7,14,14,12,20,20,17,16,11,9,11,15,18,10,17,16,3,25,25,24,24,0,2,5,13,15,10,17,16,15,16,4,10,15,14,14,8,16,10,21,25,23,13,0,0,0,7,9,5,5,6,0,0,3,8,11,19,13,10,6,8,19,27,20,7,0,0,0,0,0,0,0,0,0,0,0,0,11,14,13,7,11,5,5,13,20,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,10,8,9,10,11,14,12,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,11,17,5,6,2,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,12,9,3,5,4,2],
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
