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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA0-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.64625000072991,-76.74299996181202,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[0,7,9,12,24,14,29,18,27,23,23,26,32,33,29,24,24,21,27,28,24,26,0,0,0,13,2,10,5,15,18,28,25,24,29,30,30,27,23,2,15,23,23,22,0,0,5,3,2,10,21,16,20,18,23,24,29,30,31,26,21,1,21,33,20,18,0,0,0,2,6,7,6,17,18,14,17,19,29,31,32,26,29,18,6,3,25,28,0,0,0,2,18,9,6,8,15,20,19,19,30,31,36,34,26,1,22,29,26,37,0,0,0,0,10,6,5,5,11,25,21,20,25,31,31,29,28,4,24,29,36,26,0,0,0,0,4,9,7,3,11,10,20,24,8,20,21,25,0,19,25,32,34,39,0,0,0,0,0,8,10,2,1,8,16,23,21,20,23,14,3,24,33,34,30,37,0,0,0,0,0,5,8,2,13,2,8,16,18,13,13,1,9,32,29,30,31,28,0,0,0,0,0,0,16,3,9,0,11,-1,2,0,10,13,21,19,21,30,32,29,0,0,0,0,0,0,3,3,3,1,3,2,6,8,4,11,26,3,30,33,19,11,31,0,0,0,0,0,2,2,2,0,4,0,4,15,4,4,23,24,17,4,18,36,32,0,0,0,0,0,0,3,0,0,0,0,7,10,14,9,10,26,33,29,12,26,2,6,0,0,0,0,0,0,0,1,5,4,8,8,7,3,11,34,26,28,29,27,22,19,0,0,0,0,0,0,0,4,7,5,3,11,5,11,17,27,33,33,28,31,22,31,38,3,0,0,0,0,0,2,5,4,3,2,5,14,20,24,34,31,29,31,30,25,32,39,0,0,0,0,0,0,0,1,1,14,18,13,21,20,29,31,31,27,32,37,38,31,26,1,0,0,0,0,0,2,1,1,14,21,11,17,28,30,27,27,38,40,43,38,37,29,0,0,0,0,0,2,3,2,2,18,14,11,18,23,28,25,33,32,40,34,22,9,4,0,0,0,0,0,0,2,2,5,5,15,20,25,27,14,32,31,30,9,26,27,32,17,0,0,0,0,0,0,0,0,11,20,18,24,17,17,30,30,26,8,26,29,33,17,0,0,0,0,0,0,0,0,9,22,19,23,17,17],
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
