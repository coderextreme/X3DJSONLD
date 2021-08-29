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
        texture=ImageTexture(url=['../../images/5/newport14-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[33,35,42,43,43,44,41,33,28,23,19,20,18,19,24,19,20,29,34,24,32,33,28,31,37,36,37,37,34,30,24,19,20,23,20,22,25,27,27,35,36,31,36,37,28,28,30,29,28,29,30,27,23,17,19,22,23,23,27,32,32,33,36,38,37,37,26,27,27,27,27,29,33,28,19,15,19,22,24,27,29,35,36,36,38,37,36,35,27,27,30,30,31,31,33,33,21,15,19,23,27,31,38,47,50,50,50,48,46,47,24,25,28,31,30,29,28,28,20,17,21,20,21,32,44,57,62,63,62,61,58,58,23,24,29,31,31,27,21,22,17,18,20,21,25,34,45,54,65,69,70,68,65,64,25,23,24,28,27,22,15,17,22,21,18,20,30,35,44,55,68,74,76,75,75,74,24,21,20,21,21,20,16,17,27,27,20,22,30,35,44,55,70,77,80,81,81,81,18,19,18,21,21,19,20,18,27,30,24,20,23,33,45,56,75,79,77,79,82,82,20,22,20,24,27,26,23,23,28,27,21,20,22,34,42,54,71,77,76,77,81,82,23,21,20,20,22,25,26,31,29,25,23,22,21,30,38,52,67,74,74,77,78,78,23,22,22,22,22,22,23,24,30,31,30,27,23,27,36,52,63,72,74,78,83,83,24,26,26,24,23,25,27,22,30,35,35,32,28,25,37,49,60,69,73,79,83,84,25,26,26,25,24,28,34,28,36,37,37,34,34,30,35,47,60,66,72,79,83,83,25,25,25,25,24,27,31,34,40,41,41,34,36,39,33,47,61,68,72,79,80,78,22,25,25,28,25,27,30,37,43,46,47,38,39,41,34,47,59,68,73,77,78,77,22,23,25,25,25,30,34,41,48,54,53,43,44,43,36,44,57,67,73,80,77,77,23,25,25,23,25,30,39,46,54,59,54,49,52,49,40,39,54,64,73,78,77,76,28,27,26,25,24,31,38,46,57,60,58,58,56,54,41,38,51,62,70,74,72,70,31,27,24,25,25,30,37,45,57,61,60,62,58,54,43,38,41,53,61,65,64,63,30,28,23,25,28,31,37,48,56,58,56,63,57,54,43,38,38,45,48,55,59,58,29,28,23,24,27,33,39,53,59,56,56,62,57,55,47,38,38,43,46,47,53,53,29,28,23,24,27,34,39,53,59,56,56,62,58,55,48,38,38,43,47,45,52,52],
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
