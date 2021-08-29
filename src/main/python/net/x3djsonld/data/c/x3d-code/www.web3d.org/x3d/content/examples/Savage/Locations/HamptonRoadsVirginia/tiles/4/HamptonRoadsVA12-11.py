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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA12-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.52124997348872,-76.61799995878522,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[22,27,19,13,23,13,9,13,10,17,30,20,20,19,16,14,25,9,17,6,11,8,14,16,18,22,25,9,15,24,18,16,18,18,15,32,21,17,11,8,28,25,12,15,14,14,16,19,22,15,24,20,15,14,16,25,24,14,14,20,12,14,14,12,7,10,16,20,16,29,21,25,13,15,24,31,20,24,17,25,21,28,11,25,11,8,9,12,23,16,21,16,23,28,17,18,15,34,31,14,19,25,20,23,11,20,27,5,10,11,20,23,32,30,15,16,20,13,19,20,31,23,23,24,21,27,23,24,11,13,9,14,22,12,19,15,15,16,15,26,27,26,28,23,26,24,24,22,26,21,24,17,12,10,22,11,16,26,12,13,19,21,25,28,18,19,20,22,26,22,27,21,15,18,8,5,10,23,13,12,14,10,11,17,14,24,22,19,23,22,25,24,9,18,14,17,16,14,12,19,27,20,16,15,21,16,14,21,26,24,18,23,25,19,11,20,15,20,14,7,13,23,14,19,22,11,16,20,18,17,19,20,22,25,10,21,9,23,7,16,24,7,23,11,16,17,13,16,7,13,16,18,15,21,22,21,19,10,12,5,6,22,20,5,12,14,15,21,20,24,24,12,16,14,15,22,14,22,13,9,13,8,6,8,18,22,18,12,23,25,31,21,19,24,24,22,14,15,18,15,21,20,8,14,1,6,7,13,27,13,15,13,21,22,27,24,24,21,33,20,25,26,13,9,7,20,11,11,7,7,23,28,12,14,11,25,15,14,15,15,32,17,23,26,19,5,15,14,9,8,8,10,22,18,20,15,24,13,19,13,23,19,20,19,15,14,10,9,5,8,6,7,16,8,22,14,17,14,18,15,15,15,20,27,17,30,14,10,7,17,5,6,3,15,13,10,20,17,30,21,18,22,17,15,17,17,18,14,15,18,10,3,8,6,11,11,7,6,18,11,21,16,18,14,17,20,18,19,26,25,12,11,6,4,4,5,6,8,9,6,18,32,27,16,12,14,14,21,26,25,28,15,15,17,14,9,17,14,14,6,19,10,17,18,14,21,17,25,23,25,22,26,21,22,14,17,13,11,14,14,21,7,7,15,19,17,15,21,17,27,21,22,21,28,21,24,14,15,15,10,15,18,23,9,8,17],
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
