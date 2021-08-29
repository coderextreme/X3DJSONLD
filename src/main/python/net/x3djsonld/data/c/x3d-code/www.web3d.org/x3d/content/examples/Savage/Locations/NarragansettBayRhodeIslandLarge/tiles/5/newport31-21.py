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
        texture=ImageTexture(url=['../../images/5/newport31-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.32952841188842,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[15,18,18,17,20,24,30,27,26,26,27,26,28,26,28,27,26,23,24,23,24,24,15,13,14,17,20,24,32,32,26,26,27,28,31,28,29,29,27,24,23,23,23,24,19,18,16,15,18,21,25,27,26,27,32,32,32,30,30,31,28,27,26,22,22,23,20,20,19,17,17,17,18,23,25,26,29,32,33,32,29,33,32,28,26,22,22,24,22,22,21,20,18,17,18,22,24,25,27,29,30,32,30,33,33,30,27,25,22,23,19,22,23,21,19,17,18,21,21,23,25,27,28,29,32,34,33,32,31,27,23,23,21,22,21,21,18,17,18,20,20,21,24,26,27,29,34,35,32,29,28,26,26,26,22,22,22,21,19,18,17,20,20,20,24,26,27,30,35,34,28,26,25,26,25,25,19,21,21,21,20,22,16,19,21,21,23,27,29,33,37,31,26,25,25,25,26,26,17,18,20,22,21,20,18,17,18,21,22,27,32,35,35,26,24,24,25,26,32,33,17,17,20,21,20,20,19,19,17,21,22,28,34,37,33,25,22,24,27,31,38,39,20,19,21,21,20,20,21,20,19,20,23,29,34,34,29,23,22,23,27,37,43,44,20,21,21,20,20,21,22,22,20,20,22,28,32,29,23,22,22,25,27,42,47,48,23,23,21,20,22,23,24,23,21,20,21,26,30,25,23,23,23,25,31,39,43,44,24,24,24,24,23,23,24,24,24,23,20,24,28,23,22,26,25,25,31,36,40,41,24,24,24,24,24,24,24,25,25,25,20,21,25,23,23,29,26,25,33,39,42,42,23,25,24,21,23,22,23,27,27,26,23,20,21,22,24,27,31,26,38,41,43,43,24,23,21,21,21,21,23,29,28,27,25,24,24,24,24,26,33,29,38,45,44,43,23,22,22,22,22,23,24,26,28,28,26,26,26,26,26,25,34,33,31,45,47,46,23,22,22,24,25,25,25,24,25,26,26,26,26,26,27,26,33,38,34,38,45,46,23,23,23,23,26,24,24,24,23,24,24,26,27,27,28,29,30,38,36,33,39,41,24,23,24,24,24,23,23,24,23,22,23,25,28,28,29,29,31,36,39,39,37,39,23,23,24,24,24,23,23,24,24,25,25,22,25,28,29,30,30,34,41,41,41,40,23,23,24,24,24,23,23,23,24,25,27,23,25,28,29,31,29,34,40,42,41,41],
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
