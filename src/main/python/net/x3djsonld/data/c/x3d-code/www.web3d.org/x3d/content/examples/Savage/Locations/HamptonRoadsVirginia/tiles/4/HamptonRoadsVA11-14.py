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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA11-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.61499997575882,-76.24299994970482,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[15,14,12,5,5,6,3,2,6,6,6,2,4,4,4,4,8,7,2,4,12,7,5,10,15,6,8,7,8,3,4,3,5,4,4,4,4,4,7,8,12,3,12,5,9,10,13,5,8,9,6,2,3,5,2,3,4,3,4,3,6,9,5,8,13,6,5,9,11,5,6,4,9,9,8,4,3,2,3,3,4,3,4,4,3,3,6,8,6,9,15,9,8,6,6,9,11,4,5,3,5,3,5,2,12,2,4,1,10,3,3,14,9,7,8,5,5,6,7,4,3,4,3,3,4,4,4,4,5,2,5,4,7,4,6,5,3,6,7,6,5,7,10,7,5,7,5,11,4,3,6,3,7,4,5,14,9,10,7,4,8,7,5,4,11,6,4,4,7,6,6,11,11,2,6,17,7,15,7,10,14,5,5,13,5,7,9,9,2,6,5,5,4,11,11,2,3,2,10,12,9,4,14,10,10,6,6,8,11,10,11,5,5,5,8,9,3,2,2,3,17,11,8,6,14,12,16,7,6,4,5,5,7,10,9,10,8,10,19,10,3,4,20,14,8,4,4,7,5,4,4,5,4,4,3,2,7,5,8,11,15,11,4,5,23,17,15,12,4,4,6,4,6,5,6,2,5,5,2,5,6,10,14,14,3,2,8,11,8,12,5,5,5,6,4,3,4,5,4,5,3,5,7,7,13,13,3,2,10,14,16,20,7,5,5,4,7,4,7,7,5,5,1,3,7,9,7,15,4,3,12,18,15,11,7,5,6,8,4,4,4,3,6,6,6,4,3,6,11,5,2,2,13,16,18,16,4,9,10,4,4,4,5,4,5,2,4,2,3,7,7,14,1,2,4,3,7,20,4,6,8,4,7,6,4,3,1,4,3,4,6,16,18,1,3,4,28,18,12,7,5,6,6,5,7,6,4,5,3,4,3,2,8,15,4,4,3,4,21,22,16,11,5,5,6,7,5,5,5,4,6,5,6,4,14,4,8,1,3,3,6,5,5,8,4,5,6,6,5,6,3,5,5,3,4,1,15,26,13,3,4,2,5,5,7,8,4,6,6,6,6,5,3,4,4,3,3,2,16,23,12,2,3,1],
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
