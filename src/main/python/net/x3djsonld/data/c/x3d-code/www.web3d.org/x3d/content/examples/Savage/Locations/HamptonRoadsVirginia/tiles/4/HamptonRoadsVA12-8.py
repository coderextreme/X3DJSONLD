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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA12-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.52124997348872,-76.99299996786561,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[15,13,8,17,18,11,25,20,29,26,19,7,9,11,10,7,9,11,8,8,8,11,15,15,9,18,13,18,11,16,15,15,23,22,7,10,11,9,4,10,10,11,10,8,8,9,5,9,18,21,17,15,16,12,24,18,16,17,7,9,12,8,12,11,11,14,15,14,10,19,17,20,22,19,14,21,18,16,26,14,25,7,7,7,7,7,9,7,15,9,11,21,24,17,18,10,13,21,16,15,16,22,25,16,15,7,7,7,10,13,15,15,13,27,24,26,22,30,23,14,16,14,22,16,16,17,20,25,27,17,13,11,16,18,19,15,18,26,23,26,18,19,13,10,15,22,14,12,20,19,18,7,22,21,15,26,27,19,27,20,15,25,28,18,16,15,4,14,25,17,20,22,16,20,21,14,26,19,25,17,24,17,20,16,22,22,22,13,13,22,15,29,16,18,12,19,22,24,24,20,22,22,25,16,24,19,17,12,31,15,14,14,14,17,16,13,27,18,26,32,27,15,16,18,19,18,27,26,16,18,18,14,25,30,16,14,17,29,28,15,16,32,15,22,18,21,26,23,20,18,22,18,21,16,13,27,20,18,22,19,22,26,18,25,20,19,22,25,26,25,25,19,26,23,17,19,24,18,14,20,13,16,26,21,16,23,19,20,19,19,21,18,19,27,23,23,22,18,19,17,16,19,24,22,21,22,17,16,19,20,23,19,26,18,19,24,17,19,20,25,22,20,19,20,23,24,19,18,19,22,15,18,19,15,16,20,23,24,16,22,27,16,16,19,16,18,25,28,23,29,19,13,17,20,20,20,16,16,17,14,14,18,17,18,19,22,16,18,15,20,18,9,18,20,22,23,22,15,19,19,18,19,16,12,13,13,16,22,18,22,15,13,11,24,22,18,27,33,27,21,25,16,22,18,17,17,15,16,18,19,21,18,14,7,14,14,9,12,18,19,29,16,19,18,21,17,24,16,19,15,18,24,21,24,7,16,-2,11,8,16,33,17,25,13,16,17,25,21,16,14,16,19,12,24,20,11,8,13,7,16,13,15,19,20,17,13,13,14,25,20,16,11,13,19,14,26,23,11,10,11,17,15,13,8,19,18,17,13,13,14,22,25,17,11,14,19,14,28,23,10,10,10,13,15,8,7],
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
