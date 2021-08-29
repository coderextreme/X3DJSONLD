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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/5/newport28-26.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.21960164167137,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[23,24,20,20,19,18,18,16,16,16,16,17,17,16,19,23,23,23,22,24,24,24,24,22,20,19,19,18,18,19,16,17,17,18,17,17,20,24,24,22,22,24,25,25,24,22,20,19,19,18,17,16,16,17,18,17,17,17,20,25,24,22,23,24,25,26,24,22,21,20,19,18,18,17,16,17,17,16,17,18,22,25,24,23,23,25,26,26,24,23,22,21,20,21,19,17,17,17,18,17,16,19,23,26,24,23,25,26,28,28,23,23,22,22,21,20,20,19,17,18,17,16,17,20,25,27,24,23,26,28,30,31,24,23,23,22,22,21,21,21,20,18,18,18,22,24,27,27,26,26,28,29,32,33,25,25,23,23,23,22,21,20,19,20,19,20,25,25,26,26,25,27,29,30,32,32,26,26,25,24,24,23,22,21,20,21,19,24,28,25,26,26,26,28,30,31,32,32,28,26,26,24,24,23,22,23,24,22,20,25,29,26,25,26,26,29,30,31,33,33,28,26,25,25,24,23,23,24,24,23,22,27,26,25,25,25,27,30,31,32,33,34,29,26,25,25,25,24,23,24,24,24,23,24,25,25,25,26,29,32,33,32,33,34,30,26,25,26,25,25,24,24,25,25,24,24,25,25,25,25,28,32,33,34,34,34,29,26,25,24,24,24,25,25,24,25,26,25,24,25,25,26,29,32,33,34,35,35,29,25,24,22,22,24,25,23,23,25,28,26,25,25,25,26,28,32,33,34,36,36,26,22,22,22,22,22,22,22,23,27,28,25,25,24,24,25,27,31,33,35,36,36,26,23,22,22,22,22,22,22,22,25,25,23,25,24,24,24,25,29,33,35,36,36,28,26,22,22,22,22,22,22,23,22,22,22,22,23,23,22,22,26,32,34,34,34,28,26,22,22,22,22,22,22,22,22,22,22,23,22,22,22,24,31,32,33,34,34,25,25,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,30,33,34,34,35,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,24,33,35,37,35,35,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,23,31,38,39,37,37,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,23,31,38,39,39,39,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,24,31,38,39,39,39],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
