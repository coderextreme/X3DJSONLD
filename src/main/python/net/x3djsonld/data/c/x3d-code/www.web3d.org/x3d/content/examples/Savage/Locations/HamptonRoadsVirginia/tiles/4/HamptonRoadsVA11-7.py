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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA11-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.61499997575882,-77.11799997089241,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[15,15,2,0,18,20,9,18,6,13,15,13,12,18,11,17,22,25,25,28,17,22,20,20,26,11,7,7,5,2,3,5,9,7,13,17,12,13,15,24,15,17,22,20,19,17,17,14,10,12,6,12,12,4,12,13,12,20,8,21,14,17,24,16,12,20,16,11,12,9,12,3,9,12,6,19,16,12,22,24,15,13,14,12,13,26,9,9,20,7,11,11,16,12,8,9,9,10,13,10,17,20,23,11,15,14,9,7,12,9,27,19,28,30,23,8,10,12,9,14,15,12,13,10,2,11,17,11,9,8,14,9,17,34,27,19,31,6,14,13,17,10,8,11,10,8,6,15,14,12,15,9,6,10,29,31,27,40,36,36,6,11,17,9,19,12,10,5,12,10,6,8,9,6,20,14,27,31,29,26,33,34,11,11,9,23,12,11,8,6,6,7,11,10,16,13,10,7,30,27,29,40,31,37,14,7,4,11,12,5,7,5,2,14,12,11,21,11,14,12,34,28,30,35,29,34,8,16,8,10,10,17,15,17,21,17,16,10,29,22,26,24,27,31,30,28,27,32,27,25,24,22,27,21,20,12,15,20,17,22,14,20,23,23,29,28,40,33,30,36,27,7,24,27,25,25,20,17,18,17,20,13,18,28,27,24,28,30,30,39,30,20,32,28,30,23,30,34,22,23,15,21,21,14,19,16,10,11,22,28,32,29,34,34,19,23,28,32,35,27,30,27,25,18,18,30,17,13,18,11,28,30,30,41,30,27,36,26,28,29,30,27,28,23,23,19,22,22,27,12,9,8,34,32,43,28,28,29,32,28,36,39,29,25,29,22,23,23,17,25,29,18,13,11,30,38,39,26,28,35,35,41,32,26,35,27,25,17,17,17,24,34,19,20,20,10,30,26,27,26,29,28,30,35,34,40,33,32,24,19,23,22,29,26,25,29,11,12,25,27,30,37,28,30,31,36,43,39,37,28,31,24,23,34,26,28,19,24,17,2,28,31,24,32,22,27,36,27,26,31,27,25,32,34,29,28,32,22,30,23,18,16,27,29,24,32,23,25,36,28,26,33,28,25,31,32,29,28,29,23,32,25,15,15],
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
