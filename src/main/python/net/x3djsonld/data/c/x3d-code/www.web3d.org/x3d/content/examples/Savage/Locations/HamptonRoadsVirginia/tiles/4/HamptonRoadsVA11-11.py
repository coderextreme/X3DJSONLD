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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA11-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.61499997575882,-76.61799995878522,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[20,15,14,20,15,14,14,13,15,14,17,15,8,24,27,20,22,21,16,16,24,20,19,18,12,16,15,18,16,26,19,26,16,26,11,25,25,23,23,20,21,21,21,21,15,14,16,14,13,26,20,18,11,27,12,16,33,24,25,28,23,22,17,21,17,20,14,11,11,12,24,24,12,23,19,23,19,26,34,30,24,26,25,20,20,19,16,21,9,12,11,25,25,15,15,25,24,26,17,23,15,28,20,23,29,21,31,29,16,20,10,12,8,19,17,11,17,18,26,18,15,24,21,32,23,20,21,24,20,31,25,25,13,12,16,18,13,14,16,30,28,28,14,16,19,36,13,28,20,21,20,21,20,21,14,11,14,27,25,19,12,26,20,11,29,16,17,10,15,28,19,19,22,23,22,24,23,13,15,11,13,26,28,22,24,30,28,22,19,17,24,25,20,21,21,22,24,22,11,15,26,15,18,22,17,24,22,31,14,10,16,20,11,17,18,23,23,22,20,14,8,16,27,18,15,25,26,29,23,31,18,14,23,15,28,20,22,20,21,19,19,17,16,21,14,21,10,14,29,13,15,22,21,12,36,20,10,23,29,22,17,22,18,21,18,15,29,16,27,12,17,15,12,29,30,27,28,26,11,28,20,23,11,11,12,14,13,23,29,23,20,14,28,19,13,24,28,20,28,26,15,3,17,16,15,25,21,16,12,10,20,17,12,14,17,26,17,22,31,33,23,20,16,8,14,22,26,26,7,11,13,13,14,14,27,14,14,27,29,21,26,8,22,16,16,15,11,23,10,7,10,9,23,23,17,16,27,10,14,28,27,25,24,25,28,24,18,19,12,24,8,12,11,8,26,23,23,17,20,13,13,26,25,26,29,23,24,28,18,25,16,15,17,13,13,14,14,25,12,21,15,14,11,12,14,25,27,24,33,14,25,23,11,23,12,19,14,14,24,21,31,24,18,18,25,16,15,20,29,31,26,22,23,13,17,22,6,9,12,10,20,24,15,12,21,11,11,13,9,17,31,22,22,20,16,15,32,12,19,10,11,7,22,27,19,13,23,13,9,13,10,17,30,20,20,19,16,14,25,9,17,6,11,8],
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
