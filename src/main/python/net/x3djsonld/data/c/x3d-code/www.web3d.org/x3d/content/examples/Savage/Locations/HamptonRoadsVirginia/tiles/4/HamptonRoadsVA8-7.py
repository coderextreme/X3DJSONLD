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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA8-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.89624998256912,-77.11799997089241,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=23,zSpacing=0.0042613638,height=[18,30,17,20,18,14,17,23,21,14,30,26,27,38,35,36,28,31,31,26,31,32,14,18,22,20,10,25,16,22,13,19,35,30,28,24,26,24,27,27,27,28,43,26,19,10,20,20,22,18,18,27,21,26,30,34,26,29,33,27,26,28,36,28,26,45,13,15,14,23,11,14,15,10,13,25,27,39,28,31,28,30,30,32,27,43,30,31,12,14,14,11,8,9,18,15,16,27,30,27,30,35,33,35,28,28,32,23,34,31,16,5,10,12,10,5,25,17,11,23,25,30,26,32,36,44,27,34,20,27,39,43,27,21,12,10,14,15,15,12,10,13,15,15,28,30,32,26,26,31,24,30,35,37,36,29,15,14,14,18,12,10,9,18,13,11,23,28,23,31,29,28,27,19,23,27,36,34,32,17,13,13,15,5,12,12,12,17,19,25,21,23,24,32,37,32,16,23,41,40,35,25,16,10,15,6,8,11,14,20,19,17,18,19,27,36,37,35,22,20,37,44,26,17,11,18,17,6,10,18,21,13,16,18,18,18,24,32,22,31,23,35,36,30,21,19,14,15,14,11,6,10,18,13,16,14,20,19,25,25,29,21,27,26,30,32,31,25,22,12,15,13,15,11,10,14,14,14,14,17,20,26,31,22,22,21,32,39,25,26,19,17,14,9,8,9,18,17,9,17,23,18,14,19,28,24,20,22,35,26,29,35,30,17,11,9,8,10,6,16,18,14,11,18,26,17,21,23,26,18,38,40,28,29,31,26,23,14,3,7,8,8,19,14,10,10,24,13,21,21,30,28,33,38,26,29,30,26,22,11,10,8,11,15,20,16,17,14,11,18,13,20,17,15,36,34,19,28,28,17,12,21,10,10,10,17,11,12,12,12,7,6,7,9,11,11,37,35,29,26,27,21,27,18,15,12,9,8,3,15,12,9,13,26,16,11,8,15,38,27,28,30,28,22,14,22,20,16,10,15,10,15,3,23,13,11,26,13,20,21,39,29,32,28,29,22,30,21,21,10,12,10,10,15,14,13,19,14,11,19,14,11,29,32,30,28,23,25,16,12,24,11,10,15,11,14,16,16,1,14,18,15,17,18,27,32,30,26,23,26,20,12,18,10,12,15,11,13,16,14,-1,16,16,15,15,16],
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
