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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA10-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.70874997802892,-76.99299996786561,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[27,29,18,9,2,11,10,7,5,10,11,9,7,6,10,11,15,16,22,30,11,12,31,7,4,11,26,7,6,14,10,10,10,12,15,9,0,7,16,20,23,18,11,14,7,10,10,13,13,11,11,13,3,1,19,4,13,7,7,17,10,15,14,19,10,11,13,10,13,14,13,21,12,7,9,-3,7,10,2,11,14,6,14,9,20,26,12,12,20,17,22,12,21,18,19,21,10,7,0,19,7,4,9,16,15,-3,13,5,11,12,16,20,8,19,13,14,13,13,18,15,6,6,9,3,22,15,14,6,11,9,6,13,22,18,16,19,18,11,22,18,15,10,15,12,12,9,4,10,6,6,9,9,12,10,35,17,22,20,17,13,14,13,21,21,15,11,10,13,13,15,9,12,8,9,15,13,29,31,23,23,20,12,15,16,18,21,25,15,10,9,6,11,13,9,9,12,15,19,25,29,19,21,20,9,13,18,9,13,23,13,15,12,8,16,13,10,11,6,19,15,30,31,26,27,27,16,11,11,6,13,15,15,15,7,13,14,5,7,10,10,20,21,32,23,27,23,24,14,31,14,16,12,6,12,9,12,12,9,5,9,15,8,16,11,16,29,27,29,23,15,17,16,15,16,11,11,7,4,13,9,16,22,21,22,14,17,25,24,30,21,19,14,18,19,13,18,11,13,9,7,7,8,16,17,19,15,11,11,25,24,30,20,19,23,17,24,21,21,20,17,8,9,4,6,10,8,17,17,10,9,29,21,24,25,20,18,18,18,23,21,22,15,12,4,8,5,7,9,20,10,7,12,23,18,23,23,26,12,20,18,19,21,15,18,4,7,8,5,10,13,8,11,22,8,28,23,31,21,23,37,14,12,14,15,9,-1,5,6,8,6,7,12,13,10,10,7,28,31,24,16,31,25,14,12,14,14,17,5,12,9,5,7,17,11,9,22,16,15,25,18,17,16,12,13,12,25,12,15,18,13,5,6,9,16,15,14,18,7,26,22,21,16,15,13,12,24,30,12,12,11,8,15,6,7,9,15,14,12,15,12,11,19,16,24,11,11,18,15,14,19,15,7,6,12,9,7,12,12,10,17,10,26,20,20,22,23,11,12,18,14,16,19,16,9,6,11,9,7,9,13,10,14,9,22,20,23],
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
