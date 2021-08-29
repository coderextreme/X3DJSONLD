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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA9-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.80249998029902,-76.24299994970482,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[4,16,16,4,6,7,17,17,14,22,6,10,4,3,3,4,14,4,7,7,3,3,22,14,9,13,6,5,17,6,13,20,6,3,4,4,2,4,4,4,6,6,1,3,14,17,4,7,17,7,24,23,19,10,10,5,3,3,6,4,2,6,11,4,3,3,21,8,23,19,11,8,19,19,19,19,4,2,4,5,5,2,6,2,8,8,10,7,23,14,21,19,7,7,20,16,18,15,2,4,1,4,8,4,2,4,8,9,7,5,26,9,8,7,12,13,17,7,16,2,5,8,3,2,11,2,2,4,5,5,8,6,23,13,6,14,3,4,5,7,5,4,3,4,4,0,3,3,4,4,2,10,5,10,14,14,10,3,9,5,12,5,5,3,3,3,4,3,5,3,7,4,5,7,5,16,7,7,5,7,5,5,16,12,6,3,5,2,1,3,2,4,4,3,4,3,4,3,4,6,4,7,4,12,6,19,5,8,4,5,1,2,4,4,3,2,5,3,6,5,3,6,15,3,4,10,6,14,4,1,2,4,3,5,4,2,5,4,5,4,4,4,5,12,12,5,3,8,17,5,5,4,2,3,2,2,3,5,15,4,4,6,4,14,9,4,11,5,11,3,4,1,3,4,3,6,4,4,3,2,2,3,6,5,6,9,5,5,6,12,11,22,19,3,1,17,2,8,2,4,3,4,4,6,5,6,3,2,11,4,6,9,10,5,7,3,3,16,6,2,2,3,4,4,5,5,5,4,3,2,3,2,8,17,6,5,4,4,1,7,8,4,2,2,4,3,5,3,1,3,5,5,18,13,2,7,5,7,9,1,7,5,17,3,7,2,8,4,4,4,4,2,5,6,6,5,13,4,3,15,3,6,1,5,6,19,17,5,17,4,5,3,3,5,4,3,3,5,6,5,3,14,11,4,4,5,3,16,7,4,18,4,4,4,3,13,4,4,6,12,6,2,6,7,11,0,11,6,3,13,6,13,9,1,2,2,3,3,4,13,6,7,3,6,4,7,16,6,7,5,9,10,6,5,6,4,5,4,3,2,2,4,7,7,3,6,3,6,15,7,6,6,12,9,6,5,4,4,10,5,3,3,2,5],
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
