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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA2-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.45874999618971,-76.74299996181202,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[33,36,43,34,45,46,29,37,31,35,36,37,31,24,19,34,37,25,19,23,22,0,27,40,37,37,39,38,27,33,22,27,33,33,32,35,11,37,36,32,19,10,19,15,38,31,22,42,40,42,27,37,18,24,14,36,28,39,29,31,41,34,17,21,18,14,38,29,25,31,32,41,27,27,18,31,24,26,33,34,27,7,7,16,13,17,4,2,26,23,27,32,29,30,29,24,29,7,12,32,26,19,14,10,17,15,4,2,-1,2,15,36,27,35,36,33,43,38,29,32,2,11,15,1,1,18,23,21,42,16,6,26,18,27,29,34,36,32,34,40,42,29,11,31,26,19,31,21,30,36,31,5,23,20,23,36,39,37,28,35,33,27,32,30,25,25,26,27,37,28,39,39,30,38,30,31,39,39,43,36,30,31,32,26,37,23,31,17,26,29,19,29,39,41,23,35,38,38,34,37,33,42,35,33,33,29,37,24,31,33,29,25,25,32,30,30,21,40,34,43,33,32,39,39,43,27,28,31,31,30,34,30,26,31,19,29,41,32,21,32,36,41,31,23,37,40,38,27,28,30,28,32,32,37,30,35,26,28,35,39,23,31,41,40,22,25,43,39,37,17,26,27,28,16,34,40,31,25,32,30,31,40,36,29,22,29,27,35,34,43,30,28,14,29,29,22,27,28,34,21,29,36,31,31,36,38,24,25,17,32,27,32,27,26,29,26,14,42,33,33,36,38,32,33,23,29,25,21,18,29,24,35,33,26,29,25,34,10,25,37,25,24,22,41,41,30,29,24,34,33,24,32,13,28,27,26,26,25,23,15,32,37,5,31,35,35,37,28,29,34,39,27,23,29,7,28,25,23,28,16,23,11,28,30,7,17,28,21,32,29,34,31,29,28,36,34,27,13,15,23,29,31,9,2,31,33,21,30,12,22,25,30,31,24,29,28,32,40,12,19,14,21,21,21,21,22,8,29,19,20,27,21,27,29,31,31,22,27,34,32,5,1,1,20,16,13,10,3,21,18,16,24,15,17,21,20,24,34,22,25,25,32,2,4,3,19,17,13,12,5,18,16,17,23,14,17,19,17,26,36,23,30,26,35],
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
