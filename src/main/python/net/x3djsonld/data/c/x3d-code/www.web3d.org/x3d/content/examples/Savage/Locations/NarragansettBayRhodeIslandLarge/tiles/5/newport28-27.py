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
        texture=ImageTexture(url=['../../images/5/newport28-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.19761628762797,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[24,25,27,27,26,25,24,22,22,22,22,22,22,23,28,28,22,22,26,26,25,25,25,26,28,29,28,25,22,22,22,22,22,22,22,26,27,25,22,22,24,24,22,22,26,27,29,32,30,26,23,22,22,22,22,22,22,22,22,22,22,22,22,22,22,22,26,28,31,33,31,28,24,23,23,22,22,22,22,22,22,22,22,22,22,22,22,22,28,31,33,33,33,29,25,24,24,22,22,22,22,22,22,22,22,22,24,23,25,26,31,32,34,34,33,30,26,26,24,22,22,22,22,22,22,22,22,22,22,26,29,29,33,34,35,34,32,29,28,27,24,23,22,22,22,22,22,22,22,22,22,26,30,30,32,35,36,35,33,30,29,27,26,26,24,22,22,22,22,22,22,22,23,27,31,31,32,35,36,35,34,32,31,29,28,27,25,23,22,22,22,23,24,24,25,28,31,31,33,35,36,36,34,33,32,30,28,27,26,23,22,22,22,24,26,27,26,29,32,32,34,36,36,36,32,31,31,29,29,28,25,22,22,22,22,23,26,30,30,29,31,31,34,35,36,36,32,31,31,30,30,30,27,22,24,23,22,25,29,31,31,31,31,31,34,35,36,37,34,32,32,31,31,30,29,26,25,25,24,25,32,32,31,30,30,30,35,36,37,36,34,34,32,32,33,31,28,27,27,26,26,27,29,31,31,31,30,30,36,37,38,38,36,36,34,34,34,31,28,26,26,25,25,27,30,30,31,30,29,29,36,35,36,37,35,35,34,35,34,31,28,27,27,25,25,25,25,27,28,30,29,29,36,35,36,36,34,34,34,33,32,29,28,29,31,28,25,25,25,25,27,27,25,25,34,35,36,35,32,32,32,33,32,29,28,31,31,27,25,25,25,26,27,26,25,25,34,35,36,34,32,31,30,29,29,29,28,27,28,26,25,25,25,25,25,25,25,25,35,35,36,33,32,32,33,32,29,28,28,27,26,25,25,25,25,25,25,25,25,25,35,36,36,34,32,31,30,30,29,29,29,28,26,25,25,25,25,25,25,25,25,25,37,37,36,33,31,31,30,29,29,30,30,29,27,25,25,25,25,25,25,25,25,25,39,39,36,32,32,33,30,29,30,31,31,30,27,25,25,25,25,25,25,25,25,25,39,39,36,32,32,32,30,29,30,31,31,30,27,25,25,25,25,25,25,25,25,25],
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
