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
        texture=ImageTexture(url=['../../images/5/newport18-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[50,45,40,40,36,27,24,26,27,26,23,25,26,27,31,29,28,29,29,29,30,30,46,44,43,40,31,30,23,25,23,23,26,28,28,24,31,28,28,29,32,31,31,31,42,35,35,28,25,24,24,25,26,27,29,25,24,26,26,27,27,29,31,33,31,32,32,35,27,26,22,20,23,23,25,27,28,25,24,23,23,23,26,26,28,28,27,27,20,23,24,19,21,22,23,21,22,25,23,25,23,23,22,24,23,24,26,28,27,27,19,21,20,19,20,21,21,24,25,20,19,20,23,24,21,21,24,24,27,26,25,26,18,19,22,18,17,15,18,26,23,24,17,18,22,20,21,22,23,24,25,23,24,24,15,14,15,15,25,22,18,19,17,18,22,23,21,22,22,23,21,24,26,26,27,27,21,20,17,20,14,17,14,17,15,20,21,22,18,19,20,19,23,26,22,26,28,28,20,19,18,18,14,15,14,14,19,17,22,17,17,16,16,17,21,20,28,25,25,24,25,19,19,19,15,14,14,14,14,14,14,15,15,18,17,15,18,19,20,22,21,22,23,18,19,17,17,15,16,15,15,14,14,16,14,15,18,18,18,16,18,16,15,15,27,22,19,17,14,14,15,14,15,13,16,17,17,14,19,16,17,16,15,17,16,16,23,23,21,14,14,14,17,14,16,17,15,17,17,19,17,16,14,19,18,19,17,17,27,25,20,14,14,14,14,14,17,16,17,14,17,16,19,20,18,19,19,17,16,15,29,24,17,14,14,14,14,16,20,16,14,14,14,18,19,21,20,18,19,18,16,16,26,24,19,14,14,14,14,19,14,14,14,16,15,21,22,19,18,18,14,13,14,14,23,17,14,14,14,14,14,14,14,18,24,23,20,20,21,18,17,14,13,14,11,11,19,14,14,14,14,14,14,14,22,27,23,20,23,20,21,18,17,18,15,15,18,19,18,17,14,14,14,14,14,20,22,21,20,25,29,23,23,23,21,17,19,18,16,16,16,15,14,14,14,14,14,22,29,28,25,22,21,24,24,25,26,23,24,23,22,22,17,14,14,14,14,20,16,27,30,29,24,25,25,22,25,28,28,28,28,28,23,22,20,14,14,14,15,24,27,31,25,29,27,23,25,24,27,30,32,28,26,25,26,25,20,14,14,14,15,23,27,29,26,30,27,24,24,25,27,28,32,29,26,25,26,25],
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
