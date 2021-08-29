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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA0-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.64625000072991,-76.86799996483882,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[38,44,32,40,32,38,17,24,10,21,15,7,0,0,0,0,0,0,0,0,1,0,27,45,40,32,40,27,40,31,31,20,20,17,11,0,0,0,0,0,0,0,0,0,26,37,38,33,36,33,40,45,22,20,34,30,20,20,16,0,0,0,0,0,0,0,35,34,36,26,38,43,38,36,30,30,34,28,35,10,11,6,5,0,0,0,0,0,31,35,37,29,35,39,32,33,20,31,28,45,41,32,12,11,17,2,-1,0,0,0,36,41,31,32,41,39,36,28,36,29,29,24,22,12,28,13,17,20,1,1,0,0,34,33,35,28,29,42,30,33,27,28,17,22,13,18,15,31,18,12,11,0,0,0,32,32,46,15,31,35,38,34,31,35,13,32,28,29,24,31,29,18,19,2,0,0,33,30,28,14,30,36,45,33,30,30,33,28,37,36,30,32,23,25,22,13,0,0,32,33,15,20,27,32,41,30,23,29,24,30,33,34,30,32,20,25,35,0,0,0,34,25,35,33,26,36,28,30,27,27,24,28,28,35,34,29,34,25,25,2,23,0,17,27,26,35,38,41,28,24,26,31,36,23,31,31,32,30,13,22,27,3,36,31,14,35,33,17,21,30,35,36,36,41,30,17,35,22,27,24,32,8,29,2,30,32,29,18,15,35,37,46,46,39,41,30,30,40,19,24,34,18,32,29,2,0,1,2,17,31,34,39,19,24,38,39,33,34,30,36,34,10,23,9,18,9,1,14,9,22,24,33,33,34,27,34,32,46,38,36,20,15,25,31,18,29,1,21,25,31,20,22,40,31,30,35,29,35,36,41,38,25,35,31,16,28,38,21,13,30,30,22,31,30,30,28,33,34,33,32,41,46,35,35,35,25,31,38,28,20,23,19,30,31,30,32,15,21,28,33,30,40,39,37,40,37,35,30,39,37,37,15,31,17,28,32,28,38,43,30,26,39,32,36,38,25,36,37,38,38,36,24,37,31,30,32,11,27,32,33,17,29,36,37,27,36,22,24,35,37,38,38,34,21,22,28,26,37,33,40,37,32,15,30,37,36,24,35,20,24,34,39,39,37,31,20,24,26,28,39,33,40,37,30],
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
