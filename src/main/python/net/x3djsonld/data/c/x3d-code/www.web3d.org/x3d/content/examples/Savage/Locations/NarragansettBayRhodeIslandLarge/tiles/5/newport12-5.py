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
        texture=ImageTexture(url=['../../images/5/newport12-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[42,39,37,35,28,24,18,16,16,16,16,16,16,16,16,16,16,16,16,15,18,19,42,38,36,37,29,25,20,16,16,19,19,21,16,16,16,16,17,18,17,17,20,21,44,40,38,36,28,24,21,18,17,17,17,19,16,16,16,16,16,17,16,17,21,23,43,41,40,38,29,24,22,22,21,20,20,20,18,16,16,16,16,16,17,20,22,24,37,38,39,39,36,32,29,24,18,16,16,16,16,16,16,16,16,16,16,18,23,25,31,30,31,34,34,31,29,23,16,16,16,16,16,16,16,16,16,16,18,16,21,25,32,27,23,27,27,24,17,16,16,16,16,16,16,16,16,16,16,16,16,19,24,27,32,27,23,22,16,16,16,16,16,16,16,16,16,16,16,16,16,20,19,23,27,29,27,24,17,16,16,16,16,16,16,16,16,16,16,16,16,16,16,23,28,32,32,34,22,18,16,16,16,16,16,16,16,16,16,16,16,16,16,16,15,25,32,38,42,42,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,18,30,40,45,46,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,26,33,39,40,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,20,26,29,35,37,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,18,24,29,34,35,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,22,28,32,34,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,18,19,23,28,30,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,17,16,17,21,26,29,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,18,20,16,18,20,23,25,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,19,19,17,19,23,24,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,18,21,21,19,19,24,26,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,17,22,21,24,24,20,20,16,16,16,16,16,16,16,16,16,16,16,16,16,16,16,17,19,21,25,26,22,22,15,14,16,16,17,16,16,16,16,16,16,16,16,16,16,16,17,19,23,23,22,20,15,14,16,16,17,17,17,16,16,16,16,16,16,16,16,16,17,20,23,23,24,21],
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
