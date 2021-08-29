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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA1-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.55249999845981,-76.99299996786561,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[10,1,0,6,16,2,4,1,1,3,1,9,13,15,21,21,38,3,4,10,17,15,9,14,8,10,3,3,1,1,1,1,1,5,8,6,1,35,22,7,3,1,18,20,14,12,17,16,14,3,6,2,1,5,5,4,5,4,6,1,1,28,7,10,11,11,17,27,30,25,20,8,5,5,6,5,1,7,2,1,7,1,1,1,9,8,13,15,27,33,30,23,31,27,14,12,10,2,5,4,7,6,5,1,5,5,8,11,4,9,23,36,38,35,35,12,22,15,10,0,5,4,12,5,2,3,10,9,1,1,8,7,22,38,27,27,25,38,32,27,11,1,1,7,10,2,1,0,10,3,-1,10,9,6,42,40,40,29,34,30,38,28,24,25,9,13,3,11,9,1,1,16,15,12,13,12,35,47,48,33,38,33,28,27,28,30,14,14,14,9,13,2,1,1,15,16,17,19,38,39,34,47,31,30,30,30,23,27,24,28,12,8,12,7,0,0,3,18,8,7,35,44,36,31,34,29,22,24,27,32,29,34,26,4,17,0,5,7,9,0,0,2,37,37,36,26,26,28,25,28,22,25,31,25,17,9,15,0,2,0,0,1,1,1,28,28,37,25,28,15,19,18,19,18,15,23,12,23,17,0,0,10,4,2,0,0,23,28,31,19,16,9,10,9,11,17,14,11,23,14,6,1,0,22,-1,1,0,10,23,17,10,20,19,13,12,10,13,14,11,20,17,20,15,0,18,13,-1,2,0,0,25,16,10,9,17,13,7,9,10,11,14,10,11,17,19,18,6,5,0,11,0,0,23,18,21,20,19,12,13,16,14,12,13,11,10,12,20,20,14,21,15,-1,1,1,14,26,22,14,18,9,15,12,10,8,13,10,16,15,13,12,15,20,10,1,2,0,15,23,16,13,12,11,10,12,12,14,10,11,12,22,14,16,18,24,30,2,1,0,15,17,17,15,19,10,12,16,19,19,10,10,16,16,17,15,17,17,22,28,17,0,15,15,10,11,15,22,22,11,21,10,6,11,16,18,17,14,21,20,19,17,4,0,17,11,11,8,15,17,12,13,9,10,6,10,10,14,16,15,18,18,23,25,7,0,17,11,10,8,13,17,10,12,10,9,7,14,10,15,14,16,17,17,22,25,0,0],
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
