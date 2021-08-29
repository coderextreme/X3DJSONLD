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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA13-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.42749997121862,-77.24299997391921,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[25,25,24,27,22,36,28,35,22,20,24,27,20,32,23,22,26,19,20,23,25,29,25,21,27,23,25,25,26,21,30,23,19,30,30,24,25,19,25,22,25,20,23,38,32,26,31,25,28,28,26,21,27,23,29,30,26,23,21,23,29,21,23,20,22,19,29,27,28,29,19,24,25,21,24,29,30,25,24,20,27,28,20,28,29,28,24,24,23,34,34,22,25,27,22,32,21,27,21,22,20,19,18,32,23,20,21,25,29,27,26,29,27,24,24,22,33,20,26,27,21,21,24,18,20,31,28,22,23,21,26,26,20,27,31,26,26,23,30,25,27,22,33,35,25,26,15,28,27,22,19,22,16,29,28,31,27,29,25,32,32,22,24,26,25,25,22,24,30,19,20,30,31,26,18,21,22,23,27,23,25,28,24,21,22,21,20,23,20,21,23,25,20,19,34,17,20,21,25,22,29,24,27,28,31,31,31,23,24,21,25,16,29,34,23,24,31,18,23,25,26,33,23,25,23,22,26,23,27,25,27,25,23,20,18,22,28,23,28,21,20,20,28,26,29,28,24,24,29,28,22,25,27,22,23,26,31,23,21,29,20,24,25,26,27,29,35,35,24,29,19,27,28,25,23,25,22,26,28,22,25,23,31,37,27,26,23,28,24,27,27,28,30,31,28,25,32,25,31,27,26,33,24,31,34,32,23,21,26,26,30,27,26,27,24,25,26,42,24,22,22,31,32,24,25,29,24,25,21,24,37,29,26,28,29,19,25,25,24,30,24,26,23,23,31,21,23,29,28,24,25,25,27,26,25,30,9,31,24,31,26,40,22,30,27,24,28,25,35,33,30,29,29,29,28,22,29,25,30,31,30,27,22,28,31,28,25,24,31,30,33,29,28,28,26,27,37,23,20,30,35,34,37,32,32,27,19,25,28,32,31,33,26,32,23,24,28,27,37,26,38,28,33,35,28,33,33,28,26,22,23,31,32,30,31,35,36,28,31,31,26,27,24,32,34,33,34,30,32,32,26,31,26,30,32,31,30,35,27,28,28,25,28,28,28,35,32,33,33,29,33,32,26,29,26,30,29,33,32,35,27,29,28,23],
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
