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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA9-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.80249998029902,-76.74299996181202,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[31,30,23,17,23,26,32,31,31,29,37,36,32,33,25,22,35,18,21,23,25,20,26,24,24,20,26,27,31,29,34,37,35,32,34,21,27,29,36,23,25,20,31,24,26,17,18,16,23,26,36,26,24,27,31,30,24,32,21,25,25,26,27,23,23,22,34,29,16,30,20,30,26,40,36,25,36,28,27,23,27,36,23,28,22,23,25,23,26,26,16,21,19,28,30,31,34,29,33,35,25,30,30,29,21,25,25,17,29,24,33,19,29,21,24,23,25,20,23,39,41,31,27,31,32,30,25,14,18,22,17,21,28,25,28,15,28,17,23,22,19,33,29,31,31,36,32,20,32,24,27,27,27,28,20,28,27,18,23,13,22,19,23,26,36,27,22,23,23,29,18,17,17,21,20,22,24,31,28,18,26,16,14,24,36,29,30,39,20,22,16,32,21,17,21,15,28,18,26,31,26,16,26,16,20,32,26,35,28,33,34,33,31,22,30,34,30,19,25,21,30,22,23,18,18,19,31,36,30,31,31,26,32,23,20,22,15,19,19,30,22,21,23,24,22,21,23,12,18,21,32,38,27,27,25,29,28,16,23,22,25,32,27,34,27,25,20,18,26,18,20,34,34,24,26,28,31,28,30,39,41,31,29,27,33,30,26,22,17,21,19,21,14,26,24,22,25,34,33,34,22,19,28,35,25,20,22,21,22,20,17,21,23,21,27,19,23,20,20,30,24,35,40,25,30,33,26,35,30,26,24,22,17,18,16,23,18,14,20,21,22,30,33,38,38,29,28,32,25,25,29,17,30,19,17,14,23,25,15,17,17,31,31,29,34,22,32,26,35,27,31,24,18,28,23,27,23,22,18,13,19,20,17,21,32,37,38,36,27,24,37,31,21,34,20,26,24,26,18,24,18,26,25,27,16,13,29,34,26,18,30,29,22,27,17,24,22,23,25,22,19,29,19,37,22,22,24,13,20,20,23,29,26,29,23,34,42,26,22,22,8,16,18,27,32,29,34,22,33,19,24,16,27,24,33,35,30,29,33,20,27,23,7,15,16,28,31,29,37,24,33,18,24,18,24,26,31,34,30,30,31,21,26,25],
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
