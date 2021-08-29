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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA6-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.083749987109314,-76.86799996483882,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[26,33,24,14,22,20,21,20,23,28,35,28,14,22,22,20,19,37,23,23,36,33,24,23,26,18,24,20,20,18,22,22,23,13,21,19,20,20,27,36,36,24,37,41,22,19,19,27,18,27,26,18,28,15,25,20,20,20,24,20,24,31,23,39,40,26,30,27,34,29,24,22,22,20,19,17,12,20,15,38,40,26,28,26,32,23,41,43,40,27,29,28,44,27,17,15,14,22,16,20,16,29,33,31,31,32,30,25,30,29,41,34,34,37,30,37,16,18,18,18,12,21,29,29,34,34,35,31,24,31,32,34,36,37,35,32,31,25,23,16,16,18,23,20,28,30,30,28,37,33,26,22,28,36,32,33,32,27,22,25,16,18,18,20,18,16,26,27,27,29,29,33,22,21,34,34,33,29,20,20,18,16,18,15,22,15,12,17,17,24,34,29,30,31,19,33,25,30,34,37,31,20,27,23,25,21,16,12,18,19,23,21,24,24,26,24,22,20,19,19,27,34,33,24,21,23,28,22,13,14,14,14,30,30,31,14,27,33,29,26,25,27,38,35,25,25,22,23,21,11,13,27,22,23,30,31,26,19,21,25,24,24,29,30,32,40,27,20,24,24,24,12,13,24,16,24,27,18,36,31,31,29,24,20,34,35,35,34,20,30,32,22,19,18,10,15,12,19,17,27,31,24,23,24,35,24,33,25,34,26,33,26,23,26,15,18,19,17,13,22,23,21,17,17,27,19,23,33,25,27,27,35,25,36,34,18,13,26,21,16,15,20,18,19,32,18,21,29,26,28,31,28,26,30,41,32,23,17,14,17,16,14,11,19,12,12,17,30,25,30,30,33,20,27,33,19,19,24,17,27,13,15,8,25,20,30,27,29,31,25,22,26,28,37,19,21,22,29,30,23,15,16,12,16,14,22,34,25,38,30,24,32,27,30,16,21,19,22,27,31,31,31,23,16,19,15,21,21,28,33,23,35,27,33,30,30,39,27,20,25,40,33,26,39,22,20,9,9,19,22,26,35,32,34,31,31,36,25,37,34,27,35,39,34,23,40,21,22,7,11,20,23,25,35,32,36,32,32,30,26,37,32,27,33],
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
