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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA11-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.61499997575882,-76.74299996181202,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[14,14,14,22,20,28,30,30,22,23,20,24,14,12,16,23,9,14,17,11,16,20,11,10,14,15,23,23,15,12,15,23,24,24,21,17,22,16,14,25,24,14,20,19,11,10,16,14,14,14,15,14,13,14,15,26,12,22,12,12,21,19,21,13,10,15,14,18,13,14,14,15,14,14,23,19,14,26,17,25,16,11,4,7,22,10,12,14,23,20,26,16,15,23,23,21,14,16,15,10,13,16,15,11,13,14,23,9,12,9,22,17,20,9,14,14,22,13,13,20,20,19,13,11,15,13,13,10,13,19,8,10,12,19,19,16,19,17,13,20,17,19,29,15,16,24,16,15,12,18,12,18,12,13,17,14,24,27,19,18,22,24,16,24,13,22,16,17,18,25,16,19,14,22,10,14,11,15,21,23,17,11,19,18,18,16,18,20,18,26,24,24,17,25,10,13,28,23,15,12,17,20,14,13,25,18,28,25,23,14,21,19,16,23,31,28,17,11,16,11,24,19,19,20,27,14,18,24,23,18,23,24,8,33,23,28,32,23,14,17,12,8,24,14,14,12,16,11,19,13,20,17,30,22,32,30,37,12,24,4,12,9,16,16,10,20,25,23,16,13,21,17,16,25,26,23,27,26,13,20,20,20,6,23,20,18,21,13,12,17,16,23,26,11,18,7,25,33,25,26,16,11,15,14,16,12,11,13,20,16,16,23,25,24,19,8,14,18,5,20,19,13,20,15,13,29,27,28,12,12,18,20,12,15,11,12,12,10,12,17,7,10,14,7,23,12,26,24,15,14,24,13,24,15,15,14,17,12,11,24,16,19,26,8,27,26,14,13,28,27,15,17,32,23,16,20,13,17,10,10,25,15,29,26,20,22,26,21,26,31,31,15,17,20,18,26,11,23,7,13,12,15,15,13,20,13,16,16,25,24,30,14,29,13,17,22,19,14,10,16,12,11,20,10,21,27,12,27,15,19,16,22,26,22,13,15,13,20,21,24,13,10,12,17,18,17,12,26,25,25,21,16,20,23,28,18,14,22,9,15,15,20,12,9,13,14,20,19,11,25,26,24,17,16,20,20,28,20,15,23,10,18,16,22],
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
