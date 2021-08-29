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
        texture=ImageTexture(url=['../../images/5/newport27-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.15364557954115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[46,47,46,43,39,33,28,26,25,24,25,25,25,23,22,22,21,21,19,15,11,11,45,46,44,41,38,31,28,27,26,25,25,27,26,24,23,22,22,21,20,16,11,10,46,45,43,41,37,31,28,26,26,25,27,28,27,24,23,22,22,21,19,16,12,11,46,45,43,41,36,30,28,26,25,26,29,29,27,24,23,22,22,21,20,17,11,10,47,44,43,42,36,30,28,26,26,27,31,30,28,25,23,23,23,24,20,17,11,9,47,45,45,41,34,30,28,26,27,31,35,33,29,26,25,23,23,23,20,14,8,7,45,41,43,43,35,31,29,26,30,35,38,34,30,27,25,23,22,21,19,14,9,8,43,39,37,37,35,33,29,29,33,38,39,34,30,27,26,24,21,18,15,12,7,7,39,34,31,31,30,29,30,32,35,41,40,35,31,28,27,23,19,16,12,9,5,4,34,31,31,30,30,32,35,36,38,41,39,33,29,28,27,22,17,14,10,6,2,2,33,31,31,31,31,33,36,38,40,42,39,34,29,27,26,21,17,14,11,6,5,4,33,32,31,31,32,35,36,39,41,42,39,33,30,28,25,20,16,13,8,5,2,2,32,31,31,31,32,34,37,39,41,42,38,33,29,28,26,21,16,11,5,4,2,2,31,31,31,31,32,34,37,38,41,42,36,32,30,29,27,21,14,9,5,3,2,2,32,31,31,31,33,35,37,38,40,40,36,32,30,30,29,24,15,7,5,3,2,3,34,32,32,31,34,37,38,38,39,39,34,30,27,26,26,25,17,9,4,3,4,4,34,33,36,34,36,39,39,40,39,37,32,30,26,25,23,20,16,15,15,12,6,5,35,35,35,37,39,41,40,39,37,33,31,30,26,25,24,18,16,16,16,16,16,16,36,37,36,36,41,42,41,38,36,33,31,29,26,26,24,18,16,16,16,16,16,16,35,37,37,38,44,45,42,40,37,35,34,31,29,27,23,17,16,16,16,16,16,16,35,36,38,41,47,47,45,42,39,38,37,33,30,28,22,17,16,16,16,16,16,16,35,37,38,42,48,46,43,43,41,40,39,34,29,23,20,18,16,16,16,16,16,16,38,38,40,44,48,44,40,39,40,39,39,36,29,25,17,16,16,16,16,16,16,16,38,38,40,45,48,44,39,38,39,39,39,36,29,25,17,16,16,16,16,16,16,16],
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
