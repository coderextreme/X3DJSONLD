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
        texture=ImageTexture(url=['../../images/5/newport27-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.19761628762797,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[28,29,24,19,18,17,16,15,13,13,17,19,18,17,20,24,26,25,25,28,30,31,29,31,25,20,19,18,17,15,15,14,14,15,14,16,19,25,24,25,25,30,27,27,30,32,26,22,19,19,18,18,21,16,13,14,16,17,20,22,18,21,24,30,25,26,31,33,28,23,21,20,19,21,25,16,15,13,13,16,17,15,19,24,27,29,25,27,31,33,29,25,21,20,20,23,28,20,18,18,15,13,14,13,16,22,20,21,26,27,30,32,28,24,21,20,21,23,27,26,25,25,21,16,14,15,16,19,24,25,25,26,30,30,26,22,21,21,22,23,26,27,27,32,26,17,15,14,17,18,24,27,29,29,27,29,23,22,22,22,24,24,24,25,25,25,25,21,17,15,15,19,26,27,28,29,26,27,24,22,23,23,25,25,25,26,24,23,23,22,20,18,16,17,22,24,27,28,25,26,25,24,24,24,26,27,26,29,24,25,23,20,19,19,22,20,18,19,26,27,23,24,24,25,25,25,26,29,31,32,28,28,33,28,27,26,27,29,20,20,20,20,24,24,25,25,27,26,27,29,30,35,29,28,34,32,31,31,33,27,22,24,26,26,20,22,22,25,26,27,28,28,30,31,30,29,31,31,29,32,28,22,26,29,29,28,16,17,22,24,25,27,27,28,29,29,29,29,37,36,29,28,28,29,31,35,32,31,19,18,18,20,22,23,24,26,27,27,26,28,35,33,30,27,28,32,38,39,37,35,23,23,23,19,20,20,21,22,22,24,23,24,26,27,25,25,26,33,37,38,34,33,23,23,21,20,20,20,20,20,20,21,22,23,25,25,25,26,27,30,34,33,28,27,22,21,21,21,21,20,21,21,21,21,22,23,24,25,27,32,32,32,33,30,25,24,22,22,22,22,22,22,22,22,22,21,22,22,23,24,28,36,35,34,30,25,22,22,22,22,23,23,23,23,24,25,23,21,22,22,23,23,28,38,36,31,27,23,23,24,22,23,23,24,24,24,25,25,22,22,22,22,23,23,30,36,32,28,22,22,22,22,23,24,25,25,25,24,24,22,22,22,22,22,23,24,32,35,29,22,23,23,22,22,24,25,26,27,26,25,24,22,22,22,22,22,22,23,29,29,23,22,26,26,24,25,24,25,27,27,26,25,24,22,22,22,22,22,22,23,28,28,22,22,26,26,25,25],
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
