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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA13-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.42749997121862,-77.11799997089241,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[29,19,20,25,26,16,24,21,20,24,24,20,25,19,19,26,20,28,26,22,25,19,38,24,20,22,20,21,18,16,19,20,25,18,19,18,18,23,22,23,33,35,33,25,19,19,28,21,19,22,19,19,20,22,19,15,17,14,19,18,18,23,25,19,34,29,24,19,23,28,32,21,27,19,25,24,19,19,27,21,21,19,23,16,15,28,17,20,27,32,21,22,19,17,30,23,19,16,17,27,26,15,21,26,17,12,18,14,18,21,26,26,24,19,14,17,17,26,27,18,20,21,13,15,19,24,17,10,14,14,25,18,29,20,17,14,21,24,17,25,25,13,19,17,17,18,20,26,20,19,20,21,19,10,21,20,22,18,20,20,18,26,17,18,14,22,25,21,24,21,20,21,18,25,16,17,21,17,16,21,28,21,19,14,19,20,22,16,19,25,18,29,21,37,21,20,8,21,25,19,25,25,28,20,18,21,19,16,16,21,23,28,23,31,24,22,17,21,20,19,20,22,22,23,21,24,25,29,21,14,21,22,23,23,29,22,24,19,26,17,27,18,26,22,20,30,30,29,30,19,23,26,25,22,23,22,32,22,23,35,25,21,23,15,26,19,28,24,29,29,28,24,29,25,21,33,33,36,36,35,22,22,20,22,21,20,21,19,21,28,18,22,30,30,25,27,21,24,33,28,32,25,31,24,27,27,24,16,24,24,22,27,20,20,22,23,30,21,30,28,31,25,29,30,29,26,24,19,25,16,25,30,20,23,30,21,25,26,21,23,31,28,28,20,23,21,26,28,27,27,25,20,29,27,23,24,29,26,30,24,28,33,23,29,26,35,31,36,26,29,28,18,22,21,27,31,24,26,29,27,23,27,28,31,34,27,26,20,32,28,32,30,33,20,20,23,27,22,25,26,36,41,26,25,28,24,22,24,28,37,30,25,26,28,21,21,27,20,31,24,26,26,32,36,30,29,26,28,27,27,27,24,31,22,36,24,26,23,19,24,25,25,30,29,25,31,27,29,31,23,23,26,38,30,27,21,20,27,25,26,23,18,23,26,30,27,25,29,27,29,28,23,23,25,40,28,26,21,22,29,25,26,25,17],
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
