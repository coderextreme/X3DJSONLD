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
        texture=ImageTexture(url=['../../images/5/newport28-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[25,31,41,39,29,31,34,38,39,40,40,41,41,42,44,46,44,38,36,36,38,38,22,30,38,36,26,27,34,38,39,40,40,41,42,43,44,45,43,39,36,36,39,39,22,28,32,30,25,25,32,38,39,39,40,41,42,43,45,45,43,40,37,36,38,39,22,24,29,27,25,26,32,37,39,39,40,41,42,43,44,45,44,41,37,37,39,39,26,27,24,25,25,25,31,36,40,39,39,40,41,42,43,45,45,42,38,37,40,40,29,30,25,25,25,25,30,35,39,39,39,39,41,41,44,46,46,42,38,38,41,42,30,30,25,25,25,25,30,35,38,39,38,38,40,41,45,48,46,43,40,39,42,42,31,29,25,25,25,26,30,33,36,36,36,38,39,41,44,48,44,43,41,41,43,43,31,29,25,25,25,26,33,33,34,35,38,39,40,41,45,48,44,42,41,43,45,44,32,28,25,25,25,26,32,35,36,35,39,39,39,40,45,46,44,42,41,44,45,45,31,28,25,25,25,26,32,35,38,37,38,39,38,41,44,45,44,43,43,45,44,44,31,26,25,25,25,25,30,34,38,38,38,38,37,39,42,43,42,43,43,45,44,43,30,26,25,25,26,27,30,34,39,39,39,37,36,38,41,42,41,42,45,46,44,43,30,25,25,25,29,29,32,35,39,40,39,38,35,35,39,40,40,44,46,46,44,44,29,27,26,30,31,32,33,36,39,40,38,37,35,34,36,38,40,45,47,47,46,45,29,29,31,30,31,33,34,35,39,39,37,36,34,34,37,38,42,47,49,47,46,45,25,25,28,32,33,33,32,35,39,39,37,35,34,35,37,38,43,48,48,47,45,45,25,25,28,32,32,31,33,35,38,37,35,34,34,35,38,39,42,46,46,45,43,42,25,25,26,28,28,30,32,35,36,37,35,33,36,36,38,40,42,44,43,42,37,36,25,25,25,25,26,28,29,30,35,36,32,29,34,37,39,40,37,41,40,38,34,34,25,26,25,25,26,27,28,29,32,36,33,28,33,38,39,39,37,40,40,35,34,34,25,25,25,25,26,27,28,29,29,35,33,28,31,37,39,40,36,38,38,35,34,34,25,25,25,25,26,27,28,28,29,33,31,28,33,39,39,39,36,35,35,34,34,34,25,25,25,25,26,27,28,28,29,32,31,28,33,39,39,39,36,35,34,34,34,34],
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
