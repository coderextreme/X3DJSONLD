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
        texture=ImageTexture(url=['../../images/5/newport19-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[20,19,17,16,17,18,19,20,21,22,22,24,26,28,33,38,41,40,38,35,35,35,24,20,17,17,18,18,19,20,21,24,27,28,30,31,35,38,37,36,36,37,36,36,23,19,19,18,18,19,19,20,22,26,28,30,32,33,34,34,34,34,34,35,35,35,21,20,19,19,18,19,20,21,24,26,27,29,30,31,33,34,35,35,34,34,36,36,22,20,20,21,19,19,21,22,24,25,27,28,32,34,35,35,36,35,34,34,34,34,22,19,21,21,19,20,24,28,28,28,30,33,34,34,35,35,34,34,36,39,38,38,21,21,23,22,19,20,28,31,32,33,34,35,35,35,35,35,34,34,37,40,42,42,23,24,23,22,20,22,29,31,32,33,35,36,36,36,34,34,34,36,38,38,41,42,24,24,23,20,19,25,30,32,33,34,36,37,37,36,36,34,35,35,39,39,43,43,24,24,22,20,23,24,30,33,35,36,38,38,38,37,37,36,37,37,38,40,44,45,24,24,22,22,26,29,28,31,35,38,39,38,38,37,38,38,39,39,40,41,45,45,26,25,23,23,28,32,33,33,35,37,38,38,38,37,38,40,41,41,40,42,47,47,31,26,24,24,29,32,34,36,37,38,37,38,38,38,37,39,42,42,42,44,48,48,33,27,25,28,32,33,35,37,39,39,37,37,38,38,38,40,41,42,43,45,48,49,31,26,26,30,33,35,37,38,40,39,37,37,38,38,39,40,42,42,44,45,47,48,29,27,29,32,34,36,38,40,41,38,37,37,38,39,41,42,42,43,44,45,48,49,30,30,32,34,36,38,40,42,41,39,37,38,38,40,42,43,43,43,44,45,47,49,31,31,31,35,38,40,41,43,41,39,37,38,38,41,43,43,43,44,45,45,49,50,33,32,34,37,41,42,43,43,41,39,39,38,39,42,44,44,43,43,44,46,54,55,34,32,36,40,43,45,46,44,42,41,40,39,40,43,45,43,44,44,45,47,56,56,35,34,37,41,44,46,48,47,45,42,43,41,42,44,44,43,44,45,45,50,57,57,35,36,39,43,46,47,49,49,47,45,45,42,44,45,45,46,45,46,47,51,55,55,36,38,40,42,46,48,49,49,47,47,45,45,46,46,46,47,45,46,47,54,55,54,36,38,40,42,46,48,49,49,47,47,45,45,46,46,46,47,45,46,47,54,55,54],
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
