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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA15-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.239999966678425,-76.49299995575842,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[24,15,14,6,16,15,8,8,11,22,17,8,19,13,15,15,16,9,15,19,0,0,8,21,15,9,17,7,4,12,4,6,5,4,12,4,5,12,13,8,9,7,6,0,16,7,14,6,14,8,5,18,6,6,9,6,11,11,5,13,8,16,15,7,6,13,12,5,7,15,5,7,12,10,7,4,6,12,7,10,6,10,5,8,18,6,4,8,7,10,4,20,11,16,11,5,7,3,5,13,13,8,8,7,11,4,9,5,8,4,16,9,5,19,15,6,5,4,18,10,13,12,18,0,7,6,12,5,8,4,12,2,17,14,21,8,9,4,7,8,12,18,15,10,7,10,9,5,5,17,7,6,11,5,10,5,10,17,6,6,9,5,21,1,6,7,18,12,12,6,6,16,11,18,15,8,8,4,3,7,0,0,0,0,4,10,8,11,12,7,0,9,5,6,8,10,8,7,14,8,9,10,17,1,0,0,9,11,9,10,10,6,0,0,15,4,11,18,12,6,4,5,13,6,8,12,22,6,0,5,14,11,9,14,8,12,5,8,8,6,10,0,5,6,7,12,9,11,18,17,0,0,0,0,6,0,1,0,0,0,0,0,0,0,16,10,5,19,11,16,19,13,21,11,20,13,0,0,0,0,0,0,0,0,0,0,9,3,6,5,20,14,4,15,17,6,4,12,12,16,7,17,0,0,0,0,0,0,9,5,10,5,14,15,9,6,4,16,4,21,8,13,1,0,0,0,0,0,0,0,14,4,11,13,17,11,11,6,5,3,13,17,3,0,0,0,0,0,0,0,0,0,12,13,13,4,12,7,4,18,9,4,-1,14,0,0,0,0,0,0,0,0,0,0,7,4,12,17,14,24,17,16,10,5,20,15,0,0,0,0,0,0,0,0,0,0,7,10,9,10,13,24,4,10,16,6,8,0,0,0,0,0,0,0,0,0,0,0,9,11,7,16,21,16,14,12,5,13,0,0,0,0,0,0,0,0,0,0,0,0,10,10,13,15,14,15,17,13,14,0,0,0,0,0,0,0,0,0,0,0,0,0,12,11,14,16,14,16,17,12,15,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
