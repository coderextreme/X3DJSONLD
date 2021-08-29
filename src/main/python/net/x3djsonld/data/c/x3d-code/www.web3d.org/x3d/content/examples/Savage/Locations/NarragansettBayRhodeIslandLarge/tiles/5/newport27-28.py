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
        texture=ImageTexture(url=['../../images/5/newport27-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[31,36,42,45,42,36,34,38,39,40,40,41,43,44,46,46,46,46,46,46,46,46,27,34,41,43,40,34,35,38,41,40,40,41,43,45,46,47,48,47,47,46,45,45,26,33,39,42,38,32,35,37,40,39,40,41,42,43,44,44,46,48,47,47,46,46,27,32,37,41,37,32,33,36,38,39,40,41,42,42,43,43,44,44,46,47,46,46,27,31,36,39,33,32,36,37,40,40,41,41,41,42,43,43,43,44,44,46,47,47,26,29,34,36,32,33,38,38,40,42,42,42,42,42,43,43,44,44,46,48,47,47,29,32,34,33,29,33,38,40,41,42,42,42,42,42,43,43,44,44,47,48,46,45,29,33,33,31,28,33,38,40,41,42,42,43,43,43,44,44,44,46,47,48,44,43,28,31,31,31,29,35,39,41,42,42,42,43,44,44,44,45,46,47,46,45,40,39,27,28,28,28,28,32,39,40,41,42,42,42,44,45,45,46,47,48,45,41,36,34,20,22,33,32,28,31,38,39,41,41,42,41,44,45,45,46,47,47,43,40,34,33,26,24,34,34,36,36,38,39,39,40,41,41,43,45,46,47,47,46,42,39,34,33,28,26,25,25,30,38,43,43,39,40,40,40,41,44,46,46,46,42,39,35,32,32,31,30,28,29,29,31,39,43,40,40,40,41,42,45,46,46,45,40,38,34,31,31,35,31,28,36,38,34,43,44,40,40,41,41,43,46,47,46,44,39,35,33,33,32,33,31,30,36,37,39,45,44,43,44,43,40,43,46,48,48,44,39,36,36,35,34,27,25,31,31,32,37,43,43,43,41,40,41,43,46,47,48,45,39,37,36,34,34,24,23,25,27,32,38,41,41,42,41,40,42,44,45,46,46,44,39,35,34,35,35,22,25,30,29,28,35,38,37,42,41,40,41,44,45,46,46,44,37,35,35,36,36,24,29,29,31,29,29,34,36,40,44,41,41,43,45,46,46,44,38,34,34,35,35,22,27,34,35,29,32,34,35,39,40,40,41,42,45,45,45,43,37,34,34,35,35,22,29,39,39,30,32,37,38,39,40,40,41,42,44,45,46,41,37,35,34,35,35,25,31,41,39,30,31,35,38,39,40,40,41,41,42,44,46,43,38,36,36,37,38,25,31,41,39,29,31,34,38,39,40,40,41,41,42,44,46,44,38,36,36,38,38],
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
