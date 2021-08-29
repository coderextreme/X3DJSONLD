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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA2-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.45874999618971,-76.61799995878522,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[0,0,0,0,0,0,0,0,0,3,6,10,22,17,18,18,8,15,20,21,11,13,15,0,0,0,0,0,0,0,0,0,0,0,8,12,8,18,16,15,15,21,13,18,14,10,0,0,0,0,0,0,0,0,0,0,4,9,19,13,14,9,15,18,13,11,2,3,0,0,0,0,0,0,0,0,0,0,8,11,9,8,8,18,18,14,18,21,2,0,5,0,0,0,0,0,0,0,0,0,5,7,3,10,8,12,15,14,6,7,26,18,21,22,0,0,0,0,0,0,0,0,0,1,7,0,16,14,14,13,17,19,20,20,16,11,10,0,0,0,0,0,0,0,0,0,0,0,12,13,22,15,10,7,31,14,21,13,12,16,8,0,0,0,0,0,0,0,0,0,5,16,16,19,7,10,38,29,12,23,12,16,14,0,0,0,0,0,0,0,0,0,0,0,16,16,14,8,43,20,38,29,19,6,0,0,0,0,0,0,0,0,0,0,0,0,0,13,13,11,41,20,12,22,12,12,16,3,3,0,0,0,0,0,0,0,0,0,0,0,12,13,40,32,14,28,30,29,22,3,17,11,11,24,1,0,0,0,0,0,0,0,13,21,29,26,19,26,32,27,33,4,11,12,15,4,13,0,0,0,0,0,0,0,8,14,25,37,35,28,36,35,27,28,3,33,25,21,14,19,0,0,0,0,0,0,13,15,29,38,38,33,35,38,24,9,17,11,25,27,28,13,21,0,0,0,0,0,6,11,32,38,41,36,32,19,29,27,26,23,10,24,32,23,16,9,0,0,0,0,5,13,29,34,28,33,25,32,36,25,5,23,24,30,14,32,21,28,22,0,0,0,0,0,34,35,37,34,26,29,39,25,7,27,27,29,30,35,24,24,10,16,0,0,0,0,40,36,34,40,33,34,35,26,28,30,34,39,23,28,33,33,28,27,9,12,0,0,32,39,28,37,36,29,25,26,19,33,38,34,35,28,25,34,34,37,34,15,23,15,32,24,39,40,34,38,18,22,25,30,31,29,33,29,33,33,29,25,35,26,19,18,35,23,39,41,36,36,20,22,24,31,32,30,33,31,34,35,32,27,34,28,19,19],
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
