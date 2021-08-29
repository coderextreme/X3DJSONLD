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
        texture=ImageTexture(url=['../../images/5/newport28-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.15364557954115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[38,38,40,45,48,44,39,38,39,39,39,36,29,25,17,16,16,16,16,16,16,16,39,40,42,47,46,41,38,37,39,35,35,34,28,23,17,16,16,16,16,16,16,16,39,40,42,46,44,39,37,37,39,32,32,31,27,22,17,16,16,16,16,16,15,13,39,40,43,45,43,38,37,38,38,30,28,30,29,22,17,16,16,16,16,16,11,10,40,41,41,42,39,37,36,40,39,30,28,32,28,23,18,17,16,16,16,12,9,9,42,42,41,38,37,37,37,43,37,30,28,28,25,24,20,17,17,15,13,10,7,6,42,43,41,38,36,36,36,32,29,28,29,31,26,23,20,19,19,16,14,8,5,5,43,43,40,36,35,34,32,28,29,32,33,34,31,27,24,24,22,18,14,7,5,4,44,42,39,35,36,34,32,32,32,34,35,34,34,30,29,27,24,21,14,8,5,4,45,41,37,34,34,33,33,33,33,36,37,38,39,37,34,30,28,24,15,9,5,5,44,40,36,34,34,34,34,35,34,34,34,35,37,39,37,35,33,27,18,12,5,5,43,38,35,36,35,34,34,35,35,36,36,38,41,40,36,34,35,31,20,13,7,7,43,41,40,38,34,35,35,35,36,39,41,44,45,44,35,35,33,30,24,17,12,12,44,43,42,38,36,34,35,36,36,40,46,48,48,44,35,32,33,33,28,22,17,16,45,44,42,40,39,35,35,35,37,43,49,51,51,44,37,32,26,25,27,26,23,22,45,43,42,41,36,34,36,34,34,43,51,55,52,42,36,33,29,26,23,24,26,25,45,41,40,38,35,34,36,34,36,44,52,57,50,40,35,30,30,30,25,23,23,22,42,39,39,37,34,34,36,33,36,44,54,55,46,36,33,28,30,30,27,27,26,25,36,34,35,34,34,34,36,32,34,44,54,49,41,34,29,28,28,29,29,31,28,25,34,34,34,34,34,33,34,32,32,42,51,43,36,29,27,30,32,30,31,34,27,25,34,34,36,34,34,34,36,31,31,43,47,38,32,25,25,26,29,31,35,37,25,24,34,34,34,34,34,36,36,30,31,43,42,34,26,21,22,25,27,29,32,33,30,30,34,34,34,34,33,36,35,30,30,40,35,29,21,20,19,21,23,25,26,31,37,39,34,34,34,34,33,36,35,30,30,39,34,28,21,20,19,20,22,24,25,31,38,40],
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
