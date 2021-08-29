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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA11-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.61499997575882,-76.36799995273162,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[16,19,19,22,23,9,5,10,6,7,8,4,18,8,6,5,6,6,6,7,16,15,16,18,25,19,19,21,7,16,24,12,12,7,9,8,8,12,6,3,8,7,4,5,22,20,20,21,26,18,22,14,7,7,5,8,23,5,7,8,6,7,6,8,9,9,25,21,17,24,22,5,14,8,5,6,19,19,14,9,8,12,6,8,7,6,9,5,16,25,19,21,15,6,8,13,18,3,2,7,19,4,6,5,2,3,6,4,4,6,6,19,6,4,12,14,14,8,6,14,4,3,4,11,12,4,6,2,5,2,2,3,6,12,18,2,5,14,10,13,22,7,5,6,6,3,11,13,3,6,2,4,5,7,4,15,12,5,15,7,5,3,6,11,7,-1,18,5,3,12,17,3,7,4,8,5,1,13,4,15,3,4,8,6,8,5,5,9,14,5,4,4,10,7,2,5,7,7,16,11,11,19,13,9,0,6,5,4,4,5,10,6,4,5,16,9,12,15,15,10,17,14,13,11,15,5,5,4,9,4,6,7,14,6,10,18,14,6,8,19,19,17,25,18,12,17,17,11,15,4,10,6,9,14,8,22,3,4,5,1,25,20,20,20,6,2,14,6,15,11,4,3,7,6,15,5,5,2,4,7,3,2,20,21,19,23,4,3,13,6,11,10,11,14,16,14,1,7,8,4,6,6,6,7,4,6,5,8,19,12,12,7,9,15,10,12,14,11,16,6,6,0,4,3,12,6,9,24,11,10,3,6,11,13,8,13,11,16,11,13,16,4,5,3,14,15,10,6,7,16,10,12,13,9,3,4,5,9,7,12,10,15,15,13,8,5,5,4,18,8,22,2,16,13,4,1,6,8,13,4,10,7,9,10,13,8,8,5,11,6,22,25,17,6,9,4,2,6,15,12,16,9,12,4,11,12,7,17,15,15,2,5,7,21,4,5,21,28,9,1,7,3,8,13,6,3,13,13,8,7,10,9,9,3,7,-1,5,22,26,21,25,13,4,5,5,3,7,14,4,14,12,8,12,11,13,9,13,5,2,4,6,6,25,8,2,6,7,2,7,14,3,12,10,9,13,9,12,9,11,3,5,4,3,5],
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
