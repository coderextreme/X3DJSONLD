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
        texture=ImageTexture(url=['../../images/5/newport14-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[31,33,30,22,17,21,26,30,34,39,43,45,45,40,40,40,40,39,37,30,22,21,30,32,34,28,20,17,21,25,28,32,36,41,43,43,41,42,44,43,39,34,27,26,33,33,33,31,24,17,18,21,24,28,31,33,35,39,39,44,47,46,42,36,29,29,35,33,31,27,24,19,14,16,21,25,27,29,33,38,42,45,47,48,44,39,33,32,37,33,29,26,23,21,16,17,19,23,26,29,32,36,43,45,45,45,46,41,37,35,34,30,27,25,23,21,18,16,16,21,26,29,32,35,41,47,47,47,46,43,38,37,28,27,26,22,22,22,20,20,16,20,25,30,34,38,42,45,47,47,47,44,39,38,28,26,26,23,20,20,19,19,17,17,21,29,35,39,43,46,46,47,45,43,38,37,26,26,26,23,20,18,19,19,21,22,23,29,35,40,41,43,46,44,45,44,41,41,24,24,24,24,23,21,21,24,25,25,21,25,31,37,41,44,44,44,44,44,43,42,24,24,24,25,24,24,24,22,25,25,22,24,28,33,37,41,45,44,44,42,41,41,24,23,24,25,23,25,25,23,22,21,23,23,25,28,32,37,41,43,43,40,41,41,24,25,26,27,25,23,23,25,23,21,23,24,25,25,27,31,36,39,42,43,44,45,25,27,26,25,27,24,23,23,23,23,24,27,26,25,25,26,29,34,39,44,45,46,27,26,25,23,24,23,23,23,22,23,26,28,26,27,28,26,26,30,36,40,45,45,26,25,23,23,24,24,24,22,22,25,26,29,29,30,29,29,26,26,31,37,44,45,23,23,22,24,27,25,24,23,24,27,29,28,30,30,31,31,29,27,28,35,42,43,22,22,23,24,25,25,25,25,25,26,28,30,31,31,31,32,32,30,27,31,39,40,23,23,25,23,24,24,24,23,23,24,26,30,32,32,31,31,32,31,29,29,34,35,24,26,25,26,26,26,25,25,24,24,26,26,28,30,31,30,30,31,33,31,32,33,23,26,27,26,25,24,22,22,22,23,25,26,26,26,29,30,32,32,32,32,30,30,21,24,24,24,23,24,24,24,24,23,24,26,28,25,25,27,27,30,33,32,31,31,19,20,23,22,21,23,24,25,25,26,25,25,27,26,24,24,24,27,29,30,30,30,19,20,23,22,21,22,23,25,25,26,25,25,27,26,24,24,24,26,29,29,29,30],
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
