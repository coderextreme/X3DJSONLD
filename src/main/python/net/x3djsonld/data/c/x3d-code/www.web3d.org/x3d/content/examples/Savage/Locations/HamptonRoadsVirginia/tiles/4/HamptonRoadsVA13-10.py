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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA13-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.42749997121862,-76.74299996181202,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[23,24,21,18,21,1,0,5,1,16,11,9,12,14,7,12,16,16,16,15,19,19,21,19,24,23,14,12,0,0,0,0,12,13,10,15,12,7,12,17,10,19,17,15,17,16,15,10,17,13,20,0,0,0,0,0,11,15,12,9,13,17,11,8,22,14,14,14,8,18,18,24,24,13,0,0,0,0,12,11,14,14,15,12,13,13,13,13,16,19,15,21,21,21,28,18,16,0,0,0,0,11,9,7,7,18,13,18,16,17,22,25,29,17,26,23,28,22,11,0,0,0,0,10,16,14,6,18,14,16,15,18,25,37,27,21,20,19,23,21,16,0,0,0,0,7,15,8,9,27,15,16,18,17,20,21,30,23,24,22,21,34,21,0,0,0,0,4,14,6,14,13,13,16,31,29,27,25,29,26,22,24,18,28,14,0,0,0,0,0,2,10,13,13,18,17,24,13,27,19,26,26,23,24,29,10,13,0,0,0,0,4,17,18,22,23,25,15,17,19,20,24,23,33,27,27,15,7,0,0,0,0,0,19,10,10,17,25,11,12,13,21,21,28,26,26,30,15,8,10,0,0,0,0,1,16,13,16,15,16,12,12,17,19,24,23,26,18,12,11,9,14,0,0,0,0,10,9,8,21,15,13,16,11,17,7,29,22,31,11,8,13,17,0,0,0,0,9,9,17,12,13,12,24,21,11,19,20,22,24,18,11,7,14,0,0,0,0,0,14,12,16,11,11,9,15,10,12,18,16,17,27,17,10,19,0,0,0,0,0,8,7,12,9,10,19,9,18,13,16,16,18,31,14,12,17,16,0,0,0,0,0,11,8,14,17,16,19,16,12,9,20,20,15,16,7,10,0,9,0,0,0,0,9,15,11,7,13,11,13,26,13,13,15,13,14,13,13,3,0,0,0,0,0,12,22,15,10,11,14,15,23,13,17,10,27,6,11,16,8,0,0,0,0,0,0,17,18,11,17,11,14,16,12,14,16,25,11,9,11,9,8,0,0,0,0,0,19,13,12,10,9,11,11,14,13,11,8,14,11,12,17,9,9,0,0,0,0,0,20,13,12,10,10,11,15,14,14,11,10,15,10,13,16],
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
