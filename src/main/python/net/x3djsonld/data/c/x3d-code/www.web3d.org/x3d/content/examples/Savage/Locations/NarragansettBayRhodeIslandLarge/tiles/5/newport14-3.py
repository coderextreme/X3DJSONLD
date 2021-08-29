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
        texture=ImageTexture(url=['../../images/5/newport14-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[22,28,34,34,30,27,24,21,16,22,24,28,30,31,33,33,30,29,27,27,26,26,28,33,34,31,30,28,28,23,20,20,19,21,24,28,30,30,29,27,26,26,26,26,37,37,35,32,31,30,26,26,25,18,14,19,24,24,25,25,28,28,27,27,27,27,43,39,37,35,32,33,29,26,26,24,16,18,22,23,24,25,27,27,27,25,26,26,48,42,39,37,35,33,31,27,25,24,15,14,15,17,20,27,29,29,28,25,26,26,49,43,38,36,35,34,31,26,24,21,15,13,14,16,23,27,28,28,29,27,25,25,51,44,41,37,34,33,30,26,24,19,17,16,17,15,22,24,26,28,29,26,25,25,49,45,41,38,34,31,26,23,21,19,19,18,16,16,18,20,26,28,27,25,25,25,46,42,39,36,32,29,24,22,21,20,20,18,18,17,18,23,27,26,27,27,26,26,46,43,40,36,30,25,25,22,20,20,20,18,16,19,21,24,26,26,28,28,27,27,47,45,41,32,26,22,21,15,16,16,16,17,16,21,24,25,23,24,26,27,26,26,45,38,29,25,23,19,19,15,18,17,16,18,20,22,23,22,20,23,26,28,27,27,38,28,19,23,20,18,18,19,21,22,19,19,23,24,24,25,25,25,27,27,27,27,30,24,19,24,19,16,16,17,20,24,23,21,21,26,26,27,27,26,26,26,26,26,28,29,24,20,19,17,15,17,22,25,23,25,21,24,27,27,27,24,25,27,26,26,33,30,25,19,19,17,16,19,25,27,25,28,26,23,21,26,26,23,26,28,27,27,29,23,20,21,19,17,16,19,25,27,27,28,30,28,22,24,25,24,23,28,28,28,23,20,22,24,20,20,18,17,18,23,27,30,33,33,31,28,27,25,19,23,29,29,23,21,24,29,24,21,19,16,17,24,28,32,35,37,35,32,29,25,20,21,32,31,26,25,27,29,23,22,22,20,18,24,28,33,36,37,34,31,28,28,24,22,29,29,26,27,28,25,25,22,20,20,21,23,28,30,31,32,31,27,27,28,28,24,26,27,26,29,29,26,25,24,22,22,22,22,25,28,26,26,26,27,30,31,27,26,26,27,27,30,30,27,24,24,21,19,21,23,23,24,23,22,24,29,30,32,28,27,27,26,28,30,30,27,25,24,21,19,21,23,22,23,23,22,24,29,30,31,29,27,27,26],
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
