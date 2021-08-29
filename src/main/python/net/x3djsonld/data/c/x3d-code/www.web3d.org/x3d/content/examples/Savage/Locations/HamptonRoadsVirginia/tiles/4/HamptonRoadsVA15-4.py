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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA15-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.239999966678425,-77.49299997997281,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[41,35,39,40,35,35,32,30,25,33,29,32,30,34,34,33,30,30,32,31,23,28,42,44,37,34,33,37,34,33,26,26,28,27,30,38,35,31,30,31,32,30,33,29,43,37,37,41,39,37,35,33,31,35,28,26,27,31,34,33,31,30,32,29,28,28,37,40,38,37,44,43,32,38,29,29,25,31,28,28,30,34,33,30,32,29,32,27,39,36,38,30,36,38,32,33,31,29,29,29,30,31,31,32,29,37,30,32,26,29,41,36,40,37,42,33,40,31,30,34,27,25,30,27,31,33,36,28,29,28,31,27,38,39,35,39,42,32,32,43,36,34,31,25,27,30,31,30,28,30,29,28,29,30,27,31,34,28,37,31,43,30,39,35,31,24,27,26,33,28,28,29,28,30,29,32,31,42,30,35,28,35,30,32,33,32,31,32,29,31,29,31,31,32,29,29,26,34,32,35,32,39,25,40,37,33,40,28,30,29,33,31,31,30,30,32,30,28,27,28,31,30,32,29,32,32,40,36,30,29,32,25,25,29,30,46,30,29,37,29,28,31,34,23,26,36,32,39,35,34,33,32,29,26,29,30,29,30,26,31,29,31,33,34,30,33,31,30,35,47,41,31,30,29,26,24,28,30,33,29,27,30,31,34,31,32,21,31,30,35,32,32,35,31,29,26,27,28,31,34,33,28,31,25,33,30,30,28,27,30,34,38,36,33,31,30,30,27,27,41,27,32,35,34,31,28,26,25,31,29,27,32,31,42,40,36,30,30,33,27,25,28,25,28,27,34,27,25,26,31,31,27,28,31,32,39,41,28,29,31,32,30,27,25,25,32,29,27,30,27,25,26,28,27,35,37,37,41,41,30,29,31,29,32,28,28,26,27,30,31,28,26,27,31,31,30,30,37,33,40,33,31,34,31,38,30,31,26,23,28,26,30,30,27,27,27,30,28,33,36,39,33,31,34,40,31,33,29,29,25,29,21,23,25,30,28,25,29,27,31,33,38,39,34,35,32,36,29,30,27,28,28,25,19,24,26,28,32,26,23,31,36,35,37,41,34,36,35,34,30,30,27,29,27,25,20,23,27,30,30,28,24,33,34],
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
