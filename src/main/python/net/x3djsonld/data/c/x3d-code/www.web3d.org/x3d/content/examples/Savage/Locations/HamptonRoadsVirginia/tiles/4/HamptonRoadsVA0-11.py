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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA0-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.64625000072991,-76.61799995878522,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[26,25,42,33,39,35,38,39,37,40,33,35,29,37,34,35,34,31,22,27,22,15,22,23,29,32,36,37,34,38,39,42,32,34,36,34,41,44,36,37,34,32,28,21,18,20,21,32,37,25,34,37,43,39,30,34,43,43,33,41,33,31,32,30,35,34,28,32,32,31,36,29,34,35,36,29,35,32,29,36,36,33,37,32,39,39,41,40,37,29,33,38,27,36,30,30,30,32,26,30,38,38,29,37,31,19,40,32,42,40,26,27,33,41,38,19,27,27,24,26,31,40,40,40,30,22,34,34,29,37,33,31,39,35,35,34,26,40,39,35,31,18,24,22,23,25,30,27,22,38,34,37,37,39,37,35,30,34,32,34,40,39,35,33,30,13,13,13,23,28,38,35,33,33,33,29,28,31,30,22,33,34,38,35,32,30,31,31,33,26,23,36,36,38,29,33,35,33,29,31,23,30,30,25,45,40,33,33,38,34,29,31,13,34,35,33,30,35,36,31,11,24,26,25,31,30,37,41,34,30,29,38,32,26,28,22,42,35,38,37,38,37,36,38,33,33,38,31,28,29,28,31,34,29,33,31,32,26,23,35,33,37,40,41,26,35,38,38,36,31,28,31,26,27,32,30,15,21,13,19,35,29,34,34,32,34,27,28,38,32,32,36,29,30,35,22,30,23,32,25,13,19,21,32,35,35,31,26,31,30,34,35,35,35,24,30,30,35,33,32,19,24,6,15,20,32,39,33,30,26,31,37,31,31,37,40,30,18,29,28,33,30,34,23,12,6,23,24,30,33,30,30,27,24,25,30,33,38,31,26,24,20,28,35,30,28,35,17,13,16,21,33,35,29,27,34,25,23,33,32,29,35,35,31,20,26,31,27,33,32,8,17,23,29,31,27,25,18,20,33,25,29,32,37,28,26,33,16,28,32,29,20,21,7,19,13,21,13,14,26,28,32,40,29,28,37,32,31,30,25,21,25,27,30,25,25,8,10,14,5,17,13,27,34,30,31,27,39,38,17,30,14,17,30,28,33,27,17,15,19,2,12,17,20,28,35,29,35,27,40,36,15,31,14,16,29,30,34,27,13,14,23,7,19],
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
