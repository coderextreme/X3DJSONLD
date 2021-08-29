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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA9-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.80249998029902,-76.61799995878522,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[20,25,18,26,21,29,20,26,21,22,21,27,26,22,23,22,25,23,18,19,23,31,24,26,34,27,23,20,21,17,25,22,25,15,20,23,18,21,24,25,27,21,18,21,22,25,22,25,20,24,23,29,25,18,25,12,5,31,17,20,16,25,21,23,22,16,23,25,25,31,28,25,25,23,21,19,24,15,15,7,23,22,24,17,23,16,15,18,24,26,31,42,22,31,19,24,18,22,24,18,29,24,23,24,27,27,21,16,21,18,21,23,22,28,23,24,22,31,22,22,17,12,18,23,29,25,28,23,21,20,22,30,28,19,39,30,26,22,23,25,26,25,18,7,15,21,28,25,23,22,20,17,16,19,22,29,28,33,32,20,22,20,24,19,17,15,9,11,22,25,26,20,17,23,23,24,18,17,18,33,37,20,25,19,20,18,12,17,22,25,27,22,26,18,21,14,16,19,21,30,26,20,21,19,19,22,27,16,17,26,21,20,29,21,23,20,23,15,24,18,21,21,30,18,24,23,21,17,26,22,28,17,9,23,22,21,24,16,22,23,19,15,34,22,27,34,16,31,11,14,20,16,17,16,14,25,15,23,22,18,22,23,23,16,30,20,18,14,22,19,13,22,19,24,15,20,23,22,24,20,20,14,21,20,21,26,21,15,33,22,18,24,18,20,28,15,11,17,17,22,22,18,21,19,24,22,14,20,26,22,20,21,16,32,23,22,24,17,12,21,11,26,19,19,19,18,21,22,16,25,17,32,27,28,29,31,25,18,16,20,14,25,17,17,23,20,20,21,23,19,20,18,28,22,22,22,30,29,17,26,20,26,18,26,25,13,29,19,23,20,19,20,20,19,26,32,21,23,34,24,25,19,23,28,20,22,22,19,25,19,22,22,20,23,21,22,23,24,19,23,27,28,25,13,25,29,25,26,25,14,28,25,20,21,17,18,24,17,22,26,31,28,24,19,25,17,16,21,18,20,28,13,22,22,24,16,23,22,18,20,23,27,19,32,31,19,23,30,23,21,18,21,22,27,18,26,23,19,21,23,17,21,25,26,19,31,30,21,21,30,25,25,22,21,18,27,17,30,21,21,21,22,15,20],
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
