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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA2-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.45874999618971,-76.49299995575842,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[13,13,7,4,11,0,0,0,6,11,0,0,0,0,0,0,0,0,0,0,0,0,18,14,9,0,3,3,6,18,1,0,5,0,0,0,0,0,0,0,0,0,0,0,11,8,8,4,17,4,4,4,1,9,0,0,3,0,0,0,1,-1,1,0,0,0,21,8,6,4,12,6,1,3,2,0,0,12,4,14,5,2,3,2,0,0,0,0,7,19,8,10,7,9,4,1,0,0,0,2,8,6,16,3,1,1,0,0,0,0,19,7,6,7,9,13,2,5,0,4,7,6,16,12,5,5,1,2,-1,3,0,0,7,3,11,6,13,13,7,5,8,15,7,3,19,9,7,2,3,2,3,1,0,0,10,6,4,11,9,9,4,3,3,0,1,13,5,3,16,5,11,3,0,1,0,-1,8,10,10,11,9,5,7,6,10,9,9,10,14,4,3,6,3,2,2,0,3,1,11,5,13,5,13,10,8,11,7,6,4,16,3,2,7,2,4,4,1,0,0,0,13,8,1,7,9,18,11,7,2,8,5,5,8,2,3,5,4,1,1,0,-1,0,21,9,3,9,16,10,10,9,9,15,1,5,2,1,1,8,7,0,1,0,0,-2,14,10,14,6,9,11,17,4,3,13,14,10,12,1,0,0,0,0,0,0,0,0,15,16,11,11,3,0,6,4,11,13,13,7,8,0,0,0,0,0,0,0,0,0,11,17,13,11,0,7,9,17,9,5,6,0,1,1,0,0,0,0,0,0,0,0,13,11,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,19,22,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0],
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
