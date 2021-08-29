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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA0-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.64625000072991,-76.49299995575842,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[15,26,17,26,30,27,33,33,20,28,22,12,24,11,15,15,19,16,15,23,13,13,21,25,29,30,38,26,38,32,24,27,12,10,22,17,14,15,19,20,21,20,11,18,34,33,35,33,37,33,23,34,30,20,20,17,15,29,12,11,20,14,16,20,12,18,40,38,39,30,33,25,26,28,25,28,12,17,17,18,12,9,21,13,23,23,21,13,40,38,39,27,22,32,27,17,19,19,23,12,18,15,15,9,18,11,12,17,14,16,31,32,31,34,33,34,24,37,21,14,17,15,16,8,11,14,19,13,13,13,19,15,39,31,28,35,33,28,24,32,15,10,13,14,19,2,6,14,12,16,15,11,9,6,29,30,35,35,32,31,34,34,27,23,13,15,8,18,18,13,13,24,20,11,16,15,33,24,30,28,32,28,37,30,31,9,9,12,4,11,8,13,10,16,13,15,15,16,31,24,23,24,32,36,30,20,8,7,9,10,16,9,16,13,12,12,13,8,12,14,37,26,29,25,32,33,23,20,6,7,9,4,0,4,10,10,21,19,11,17,11,9,41,29,35,14,35,29,10,14,4,0,0,15,18,18,15,16,7,6,19,16,15,17,34,23,15,29,35,15,7,8,5,0,11,15,14,17,20,13,9,8,14,14,16,7,26,20,14,39,36,8,9,7,5,9,6,11,14,12,13,4,7,16,13,18,11,17,26,33,35,32,32,9,13,6,12,0,4,12,16,13,6,0,5,9,10,10,10,16,30,30,34,27,28,20,20,9,2,0,3,19,15,16,20,0,7,4,11,8,12,18,29,21,29,20,16,11,4,11,9,0,9,4,14,12,11,0,12,0,8,6,19,11,27,19,33,15,8,11,16,4,10,0,8,8,19,4,5,15,0,7,2,15,15,15,13,2,30,9,9,9,11,19,18,0,0,0,0,0,7,2,2,0,10,9,9,12,5,1,7,12,14,7,8,9,17,0,0,0,0,0,0,0,0,0,8,27,14,12,12,22,0,7,17,10,5,7,12,16,19,8,6,0,0,0,0,0,12,13,17,12,19,21,0,8,15,8,5,8,14,13,20,10,6,0,0,0,0,0,0,14,18,12],
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
