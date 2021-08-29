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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA7-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.989999984839216,-76.61799995878522,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[31,24,35,33,23,26,18,7,17,9,5,8,7,17,14,14,5,0,0,0,3,8,32,23,30,24,31,28,25,15,13,9,10,10,17,17,15,0,6,0,0,0,1,5,23,30,27,23,32,20,28,22,14,7,-2,6,7,9,13,3,0,0,4,-1,3,6,25,19,28,27,32,26,27,23,16,12,8,3,15,5,1,0,0,0,0,0,-1,0,22,13,15,19,21,29,24,25,19,23,12,7,8,7,3,0,0,0,0,3,8,6,9,19,19,21,22,28,29,28,12,12,5,8,6,6,0,0,7,9,10,8,6,10,29,14,17,20,22,23,18,23,10,9,4,0,0,0,0,0,7,11,9,9,6,5,18,9,11,28,19,21,27,25,29,8,2,0,0,10,7,-1,11,7,10,12,9,12,17,16,9,17,17,22,29,18,18,14,6,0,1,6,4,15,12,14,10,9,3,3,24,21,11,9,14,17,23,22,23,10,4,0,0,0,1,5,9,9,9,12,9,9,27,39,21,9,9,13,14,13,16,10,5,0,0,8,3,7,4,7,12,8,11,9,26,19,19,16,9,12,15,27,17,11,7,5,1,0,8,0,8,6,6,13,11,7,18,9,19,14,9,8,9,21,11,14,0,-1,7,0,-1,5,5,9,4,11,5,11,9,17,9,9,9,9,9,8,4,9,9,-1,1,2,13,2,6,7,5,8,6,7,27,23,18,24,17,17,9,9,9,4,6,0,0,1,6,8,4,6,8,12,18,12,16,25,20,31,24,24,25,29,15,0,9,0,4,8,10,8,5,9,13,14,11,19,35,31,32,23,30,32,20,19,24,-2,-1,0,1,0,10,8,15,17,14,22,6,5,34,33,25,28,29,20,22,20,14,-2,1,-3,10,0,17,6,13,11,19,16,20,14,22,30,26,28,30,20,16,23,15,7,8,-1,2,4,5,7,13,19,16,13,12,12,33,27,29,31,16,14,16,22,10,10,2,8,7,1,6,7,3,8,7,19,11,8,25,22,19,31,19,17,19,20,13,6,12,6,0,-1,2,4,7,16,15,14,14,17,20,13,15,20,20,19,23,17,11,16,14,-1,-1,4,5,7,6,12,13,12,22,21,22,12,16,19,25,20,23,18,10,13,11,-1,-1,3,5,7,6,12,12,11,23,23],
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
