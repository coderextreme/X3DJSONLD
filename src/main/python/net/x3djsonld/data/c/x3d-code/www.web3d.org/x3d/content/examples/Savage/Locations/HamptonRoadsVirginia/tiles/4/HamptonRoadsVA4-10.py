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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA4-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.27124999164951,-76.74299996181202,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[16,2,33,21,17,19,33,14,13,15,16,19,12,7,19,0,0,0,0,0,0,0,19,20,26,17,16,8,7,4,19,20,14,9,13,0,17,0,0,0,0,0,0,0,19,21,23,16,20,12,13,17,18,14,11,9,0,1,21,0,0,0,0,0,0,0,20,24,22,19,19,20,16,24,23,16,15,12,0,14,11,0,0,0,0,0,0,0,22,14,6,18,21,18,22,24,20,18,16,9,8,3,16,0,0,0,0,0,0,0,22,21,25,21,20,20,16,21,21,21,16,18,2,6,10,16,0,0,0,0,0,0,27,17,23,20,23,24,19,19,33,20,18,17,7,16,13,14,0,0,0,0,0,0,27,26,23,21,28,26,33,27,24,16,18,7,15,16,17,13,0,0,0,0,0,0,30,30,26,29,29,29,27,28,20,29,14,11,20,12,14,7,0,0,0,0,0,0,36,28,26,32,37,36,18,28,30,30,23,17,17,15,13,14,0,0,0,0,0,0,29,35,36,32,39,26,31,31,32,22,17,2,16,9,15,11,0,0,0,0,0,0,40,34,29,25,22,26,22,21,9,20,6,10,16,8,9,0,0,0,0,0,0,0,37,36,36,31,16,20,13,15,19,10,16,22,15,15,17,0,0,0,0,0,0,0,41,34,35,30,29,21,16,13,20,16,14,19,13,21,0,0,0,0,0,0,0,0,36,35,30,28,21,16,24,11,16,15,10,18,21,11,0,0,0,0,0,0,0,0,37,27,38,32,22,22,17,14,13,14,20,22,21,23,0,0,0,0,0,0,0,0,32,28,33,28,28,31,17,19,24,24,20,21,26,29,0,0,0,0,0,0,0,0,32,27,32,26,31,25,25,22,16,16,24,23,27,22,0,0,0,0,0,0,0,0,31,36,26,26,24,35,33,29,16,21,17,21,22,20,0,0,0,0,0,0,0,0,32,36,36,26,28,31,30,34,27,18,21,25,16,18,12,0,0,0,0,0,0,0,31,32,28,33,25,29,32,34,33,23,29,25,16,22,27,0,0,0,0,0,0,0,31,33,29,31,25,27,34,34,32,24,27,26,16,22,22,0,0,0,0,0,0,0],
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
