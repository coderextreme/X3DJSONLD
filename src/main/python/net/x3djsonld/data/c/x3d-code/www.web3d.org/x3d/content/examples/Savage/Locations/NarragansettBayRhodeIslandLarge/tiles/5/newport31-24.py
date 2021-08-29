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
        texture=ImageTexture(url=['../../images/5/newport31-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[30,26,23,20,18,17,19,22,20,19,18,13,14,18,20,20,19,18,19,20,22,22,33,29,25,24,22,20,20,22,21,22,18,14,13,17,20,23,22,20,24,24,26,26,45,37,28,24,24,23,23,24,22,23,19,13,18,18,22,23,23,24,26,28,27,27,50,42,36,29,27,25,23,23,21,20,20,14,16,21,22,23,23,24,25,27,28,29,50,43,37,37,31,25,23,21,20,16,16,16,21,20,23,24,23,23,25,26,30,30,47,40,35,36,34,26,24,23,19,20,22,23,21,20,22,25,26,27,24,25,28,28,36,35,33,33,32,27,26,25,23,22,24,24,21,21,24,24,25,25,25,26,26,26,35,33,32,32,35,30,30,27,24,25,26,24,23,23,24,24,25,25,26,26,28,28,34,33,32,32,32,32,31,30,24,24,27,29,25,24,24,23,25,25,29,30,32,33,33,32,31,31,31,34,30,26,24,23,26,27,26,26,26,25,28,27,30,34,39,39,33,32,32,32,29,29,28,27,26,24,26,27,27,28,28,31,31,32,32,36,40,41,32,31,32,31,29,27,26,27,26,27,27,28,28,29,29,30,31,35,35,39,44,44,29,30,29,30,29,27,27,27,27,27,28,28,29,30,30,33,34,38,40,44,47,47,31,29,26,26,27,26,26,27,28,28,29,30,30,31,33,35,37,40,42,44,43,43,29,27,26,27,28,27,27,29,28,29,30,30,31,32,32,35,38,41,42,42,41,41,32,30,26,27,27,26,27,26,27,30,31,32,33,32,35,35,35,38,40,40,40,40,34,32,27,27,28,27,27,27,27,30,32,32,33,35,38,35,37,38,40,40,40,41,35,31,27,29,29,29,29,27,27,29,31,32,35,35,35,35,40,40,43,42,41,42,35,35,32,29,29,30,30,29,29,29,31,33,33,34,34,36,40,42,44,44,44,45,37,34,32,30,30,30,30,30,31,30,30,31,32,32,33,38,42,46,45,42,46,46,35,33,32,32,30,30,30,30,29,30,30,30,31,32,35,41,46,48,46,44,46,46,36,33,34,33,31,30,30,31,33,30,30,30,31,32,38,44,49,50,46,45,45,44,37,35,36,36,33,32,33,32,32,32,32,30,30,34,39,45,48,47,44,47,44,44,37,35,35,36,34,33,33,33,32,32,33,31,30,34,39,45,48,47,44,46,44,44],
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
