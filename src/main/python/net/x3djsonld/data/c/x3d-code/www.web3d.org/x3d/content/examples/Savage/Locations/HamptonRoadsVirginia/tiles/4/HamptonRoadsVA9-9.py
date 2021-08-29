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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA9-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.80249998029902,-76.86799996483882,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[11,25,19,24,23,32,26,24,24,28,19,46,33,27,28,25,31,32,31,35,25,31,15,23,26,30,25,22,29,27,21,25,29,36,33,28,34,39,31,33,25,22,20,26,19,21,28,33,25,25,32,27,27,19,19,31,28,26,33,39,37,31,36,28,23,26,22,29,19,22,25,19,40,36,26,31,22,29,32,33,25,22,26,30,35,30,27,34,24,36,29,24,31,36,29,30,26,29,22,34,28,26,35,21,39,30,30,31,23,26,17,21,35,25,28,27,28,25,29,43,25,31,26,29,27,27,26,26,23,28,31,33,14,29,21,13,23,25,24,38,26,43,31,29,31,22,27,26,22,25,29,22,26,28,22,26,21,31,15,26,20,41,26,30,25,27,27,33,30,30,30,28,23,26,35,20,25,23,24,28,25,40,31,23,30,34,23,26,21,26,23,33,24,26,14,23,22,24,20,18,32,25,25,31,35,30,33,28,27,25,29,24,29,27,27,18,18,26,30,26,21,31,38,32,25,24,40,30,24,34,33,25,27,17,22,21,15,31,22,36,30,30,20,36,26,26,28,31,28,26,31,36,32,24,16,24,26,17,18,34,21,34,32,23,24,31,34,29,27,23,39,29,30,28,23,21,32,34,28,22,23,24,34,31,29,27,30,32,24,20,21,27,20,31,28,36,28,25,21,19,25,20,21,29,23,30,27,26,28,45,31,26,25,19,29,31,18,23,30,29,25,23,23,17,20,18,23,27,27,22,26,31,32,18,19,14,27,21,25,25,21,17,25,10,25,29,28,35,26,33,33,24,23,27,23,23,20,11,26,27,31,22,15,20,8,14,23,28,28,38,39,33,31,30,12,25,29,23,22,17,21,22,27,26,21,20,24,29,17,27,31,34,37,37,23,23,11,12,26,26,15,24,22,25,15,13,19,27,23,27,27,20,30,35,27,28,17,24,11,13,25,27,25,15,26,24,20,14,13,26,24,31,29,22,27,29,23,28,23,25,11,11,19,16,20,17,10,16,15,16,12,23,20,27,27,18,25,27,29,19,15,8,12,10,17,17,21,14,11,16,14,14,17,24,19,27,22,19,23,29,26,19,16,7],
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
