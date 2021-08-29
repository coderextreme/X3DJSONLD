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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA13-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.42749997121862,-77.36799997694601,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[23,26,33,34,22,22,31,35,20,27,22,25,21,24,18,24,26,27,30,21,25,25,29,31,29,29,24,22,26,26,23,29,23,23,18,26,23,23,23,22,26,26,20,25,24,28,29,27,24,22,28,27,21,20,19,23,25,25,34,25,26,26,26,29,23,32,26,21,28,21,33,20,29,26,23,23,22,24,21,24,34,26,29,26,30,24,26,29,28,26,23,28,30,24,21,22,21,24,26,31,22,40,29,25,22,28,34,33,28,23,32,25,34,21,20,24,27,30,26,23,26,23,24,34,30,28,24,24,32,28,25,26,23,31,26,24,26,24,25,32,27,31,29,24,26,28,27,29,31,25,25,33,29,20,22,27,27,24,24,27,29,27,33,27,29,30,26,26,24,30,31,30,28,30,32,28,20,18,17,19,23,26,22,25,33,29,29,25,27,32,26,25,22,38,34,24,31,22,14,14,21,25,29,22,31,31,22,29,23,24,32,26,27,29,27,32,28,30,25,25,11,15,21,22,17,30,27,28,22,39,32,25,29,22,34,25,24,31,26,29,26,26,18,14,22,20,27,23,26,20,28,24,27,29,26,28,30,23,27,28,28,26,28,28,16,19,20,26,15,17,16,21,26,28,27,25,33,25,27,23,30,31,23,27,27,27,16,17,12,21,17,26,29,25,28,33,22,29,27,23,22,26,23,27,34,24,21,23,14,16,17,23,14,13,14,28,37,36,23,31,33,36,27,22,26,29,32,30,28,26,17,16,17,13,16,16,17,16,22,36,28,23,23,32,28,23,24,29,29,29,34,37,19,17,16,15,14,19,22,25,22,28,16,36,30,30,28,31,24,26,26,34,26,27,16,15,13,15,18,15,18,20,22,17,11,34,30,28,27,26,34,25,25,28,23,28,16,12,13,19,13,14,15,13,11,19,13,33,37,32,36,41,32,23,29,26,29,37,16,13,10,18,11,14,17,16,18,17,24,19,23,25,30,33,28,29,23,24,30,37,13,12,11,13,16,16,26,24,21,13,15,18,25,25,29,24,19,24,19,26,27,26,13,12,12,12,18,14,21,22,18,14,17,16,23,24,32,26,21,24,22,24,27,28],
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
