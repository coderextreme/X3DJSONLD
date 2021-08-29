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
        texture=ImageTexture(url=['../../images/5/newport28-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[52,53,66,68,67,62,57,60,58,47,36,29,22,19,20,22,21,23,24,24,24,24,51,53,54,60,64,65,66,62,57,47,41,29,22,21,21,22,25,24,24,24,24,24,54,61,58,60,60,59,52,47,47,48,51,32,25,20,20,20,20,21,24,24,24,24,60,66,64,60,54,52,47,42,41,43,43,35,26,23,20,20,20,20,25,26,25,25,58,64,67,60,52,45,42,42,40,39,37,34,31,25,20,20,20,20,25,26,25,25,63,66,66,61,52,46,42,41,41,42,42,45,38,27,20,20,20,20,24,26,25,25,65,67,61,57,49,44,42,40,41,47,47,42,34,24,20,20,20,20,20,26,25,25,61,62,58,52,45,41,39,36,42,42,38,30,25,19,24,25,27,21,20,25,25,25,55,59,56,45,36,36,34,35,34,32,28,26,23,22,26,27,26,22,19,24,26,26,46,49,45,40,37,32,30,28,27,27,26,25,20,24,24,25,24,24,19,20,24,25,33,36,37,31,28,27,24,23,23,22,20,21,21,26,22,26,25,20,18,19,24,24,30,29,29,27,26,25,23,21,20,19,19,19,19,22,26,25,20,19,18,19,26,26,30,28,26,23,24,23,23,20,22,24,24,24,22,19,26,24,19,18,18,19,24,24,29,23,22,22,22,22,26,28,29,29,28,27,27,20,21,20,19,18,19,20,23,24,29,22,22,22,25,29,31,32,32,33,34,34,28,26,24,20,19,18,22,26,26,27,31,26,21,29,36,34,34,34,35,40,42,40,32,31,29,27,21,19,26,28,27,27,31,28,21,27,35,39,38,40,41,44,41,40,42,38,34,29,24,20,25,27,27,27,25,22,22,23,31,30,34,38,38,35,44,47,56,49,41,33,27,21,20,22,25,26,24,23,22,23,24,29,32,30,29,35,53,68,70,62,55,46,34,26,21,19,20,21,31,32,28,26,26,26,29,29,30,36,55,78,85,77,66,63,58,37,28,21,20,20,32,34,32,33,28,31,33,34,33,42,55,72,85,84,75,71,70,59,44,27,22,21,31,37,41,35,30,35,39,36,37,47,60,73,80,83,81,75,68,71,57,39,25,25,36,35,39,35,33,42,44,38,41,53,64,74,78,81,79,75,71,65,55,49,30,28,38,36,39,35,33,42,45,38,42,54,64,74,78,81,78,75,71,63,56,50,31,29],
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
