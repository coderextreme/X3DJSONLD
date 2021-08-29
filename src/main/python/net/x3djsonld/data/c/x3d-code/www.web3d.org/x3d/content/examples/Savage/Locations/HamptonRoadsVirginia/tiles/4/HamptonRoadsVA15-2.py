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
        texture=ImageTexture(url=['../../images/4/HamptonRoadsVA15-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.239999966678425,-77.7429999860264,0.0),normalPerVertex=False,xDimension=22,xSpacing=0.005952381,zDimension=22,zSpacing=0.004464286,height=[45,41,42,40,40,36,28,35,29,33,35,30,26,26,31,28,30,22,25,24,27,22,43,43,39,33,37,30,36,39,37,37,33,32,26,28,28,29,25,22,24,23,28,23,40,43,41,39,54,37,39,40,44,39,36,33,39,36,32,27,23,27,24,20,25,28,44,46,44,40,41,34,44,41,42,42,38,37,39,36,36,32,26,24,23,22,21,26,41,44,42,42,41,39,39,37,41,43,39,34,36,39,38,36,33,40,25,23,24,24,39,39,38,41,38,41,43,41,36,37,38,38,36,42,37,36,34,39,32,30,33,38,40,47,40,37,43,41,42,41,39,36,32,34,35,39,36,32,39,38,39,37,36,38,41,43,40,40,32,39,40,37,39,36,38,33,37,31,36,38,40,38,42,36,38,36,39,38,38,45,37,40,34,47,37,34,39,37,38,38,34,28,29,31,38,36,38,38,33,33,33,37,35,30,30,37,40,38,37,40,38,38,38,35,36,27,33,37,38,39,29,27,26,27,29,30,26,30,31,35,37,45,43,36,36,34,36,35,30,38,38,37,30,25,27,26,29,26,26,29,29,31,26,38,39,38,37,37,34,33,32,36,38,42,26,27,27,29,26,26,25,31,31,24,29,36,34,39,38,34,37,31,25,38,36,40,25,27,27,26,31,27,26,26,24,25,27,27,34,34,36,36,35,35,26,41,36,37,35,28,34,33,35,33,32,28,23,23,25,26,24,34,37,44,37,35,30,30,31,35,33,33,38,37,35,33,32,30,28,27,28,26,22,31,39,41,37,37,34,26,28,35,35,38,39,41,39,45,33,35,28,28,24,27,36,30,30,37,39,34,35,35,31,33,39,37,41,42,41,36,37,40,34,35,35,26,26,25,35,38,35,34,31,34,25,33,42,40,43,42,41,42,40,37,38,38,34,26,24,23,33,33,39,38,34,34,31,35,35,41,39,38,38,39,40,37,33,37,29,24,33,28,26,39,36,35,37,31,33,39,36,38,39,39,38,44,38,37,37,31,26,25,26,23,27,33,38,39,37,26,31,31,34,38,38,39,38,42,39,37,36,31,26,25,27,23,25,34,37,39,36,24,31,29],
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
