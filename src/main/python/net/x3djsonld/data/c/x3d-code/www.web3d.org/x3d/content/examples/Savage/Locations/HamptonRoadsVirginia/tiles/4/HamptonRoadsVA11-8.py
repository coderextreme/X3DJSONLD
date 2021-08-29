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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA11-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.61499997575882,-76.99299996786561,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[22,23,11,12,18,14,16,19,16,9,6,11,9,7,9,13,10,14,9,22,20,23,20,23,19,18,12,15,22,23,19,6,14,13,12,8,15,16,12,21,20,11,20,26,20,15,20,19,13,14,14,17,18,14,11,7,6,1,15,14,15,13,12,11,22,24,9,5,17,20,16,25,19,16,14,11,10,8,16,15,17,11,15,10,11,23,12,11,9,8,8,9,7,12,20,16,24,11,13,7,8,12,13,15,12,24,22,21,14,13,9,10,6,14,18,16,14,19,15,12,7,7,9,14,20,24,22,9,19,25,26,22,10,8,7,10,8,11,17,25,7,7,9,15,5,13,18,14,16,26,12,13,28,19,14,14,6,7,5,9,13,9,5,7,14,10,4,14,14,19,22,26,19,19,16,16,7,10,14,12,10,15,9,13,11,8,12,11,9,18,13,19,18,10,13,17,8,7,12,13,13,13,12,11,14,9,15,7,10,10,18,15,22,20,17,16,23,19,13,12,24,26,19,17,6,13,2,6,14,7,9,11,12,11,12,17,25,18,24,20,15,12,23,23,20,15,3,6,-1,4,9,7,14,10,10,13,7,14,25,23,14,9,14,16,24,18,17,16,17,9,9,5,9,17,10,7,10,12,18,13,12,24,11,14,12,18,11,9,16,7,3,16,8,8,4,7,10,5,5,16,11,14,18,16,21,16,17,11,11,10,15,5,11,15,7,28,13,7,10,7,8,12,16,13,13,10,13,9,19,30,8,8,11,11,9,13,12,27,21,7,13,12,9,11,11,17,11,11,15,12,9,12,11,15,6,14,20,17,15,19,16,7,9,11,3,7,8,9,4,15,13,7,4,9,10,13,19,13,23,28,12,23,19,7,14,14,10,7,7,10,13,14,14,5,7,9,12,11,21,16,9,13,22,23,17,8,12,11,8,10,13,12,14,12,12,17,1,7,2,9,18,17,11,17,15,28,26,13,7,14,7,11,11,13,9,12,8,14,8,9,16,13,7,20,18,11,25,18,27,24,20,7,10,12,11,9,10,12,8,8,8,5,15,13,8,17,18,11,25,20,29,26,19,7,9,11,10,7,9,11,8,8,8,11],
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
