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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA2-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(37.45874999618971,-77.11799997089241,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[4,3,2,0,0,0,0,0,0,27,25,24,18,21,12,19,7,15,21,18,21,17,4,0,0,0,0,0,0,0,0,17,24,21,23,18,14,18,27,20,13,12,13,10,0,0,0,0,0,0,0,0,0,19,21,5,17,16,18,4,20,15,0,0,12,11,0,0,0,0,0,1,0,0,0,9,19,4,9,0,12,14,0,0,0,0,0,0,0,0,0,0,1,3,0,0,0,9,2,1,1,8,5,0,0,0,0,0,1,0,13,15,14,14,2,2,0,0,0,2,3,3,-1,1,0,0,0,0,7,0,0,0,22,21,21,13,6,4,4,0,4,4,7,5,3,0,0,0,0,8,7,6,5,1,23,24,17,22,11,1,1,0,10,3,3,1,0,0,0,6,8,4,5,6,8,4,27,18,27,9,15,12,2,0,9,3,6,0,0,0,0,8,8,11,5,6,7,4,30,21,21,19,4,5,10,0,9,1,0,0,0,0,7,4,9,8,4,8,4,4,23,19,20,20,1,18,10,0,0,5,0,0,0,0,6,9,6,8,5,5,7,4,24,27,14,2,2,13,16,16,19,0,0,0,0,12,6,15,8,5,8,13,4,2,30,28,24,17,15,17,12,17,21,17,0,0,0,7,14,6,7,11,14,7,7,6,26,21,25,20,24,20,25,19,20,7,5,9,5,12,9,12,7,9,10,6,6,7,31,29,26,16,27,22,19,25,22,12,8,9,5,9,17,5,8,7,7,7,6,6,36,35,38,26,26,27,21,26,32,25,0,8,30,34,11,4,10,7,6,6,11,6,30,30,28,24,25,20,27,16,29,27,12,1,14,25,33,14,10,7,10,7,6,9,39,30,29,21,25,25,19,22,19,-1,2,23,17,26,30,28,7,4,12,9,6,1,34,36,32,31,27,21,20,26,13,8,16,23,29,28,28,29,22,17,8,9,6,0,30,33,32,30,29,32,26,21,22,4,16,21,22,29,27,24,29,5,20,0,0,0,35,22,19,28,27,29,22,27,24,4,20,21,26,29,26,28,21,25,9,1,9,30,35,20,19,28,26,28,22,27,21,3,21,20,27,30,29,27,20,27,14,3,8,26],
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
