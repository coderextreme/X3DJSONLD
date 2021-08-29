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
        texture=ImageTexture(url=['../../images/4/bosphorus9-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.11691829101653,28.882589547476528,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[146,115,67,140,124,140,139,124,99,106,77,29,31,55,92,95,76,94,71,92,82,78,110,112,74,65,118,131,126,94,70,75,59,26,24,58,83,91,72,94,84,95,79,74,106,101,65,56,108,109,104,109,36,18,17,21,24,55,86,81,77,87,96,96,78,78,85,90,78,70,73,91,73,92,39,31,32,29,42,30,58,57,85,80,93,90,89,88,84,78,49,78,68,74,36,71,17,32,61,73,74,46,34,44,73,98,93,95,78,78,50,53,76,61,45,29,37,27,31,72,94,87,94,83,89,39,56,105,97,91,82,78,73,102,129,117,67,92,98,28,22,75,93,96,109,103,71,75,46,97,103,83,76,75,102,120,145,123,111,101,30,34,52,33,61,99,118,105,91,107,54,86,100,84,83,82,73,83,99,122,113,61,26,82,77,44,58,94,112,106,90,73,60,103,89,85,102,103,73,59,47,118,91,36,47,68,88,67,79,103,110,100,68,76,76,91,94,66,92,96,137,123,54,63,48,25,61,81,87,82,80,97,102,93,77,106,106,79,106,72,58,63,140,81,48,18,30,65,72,75,90,96,78,91,104,96,101,104,108,59,99,89,55,41,120,93,23,64,39,35,53,52,82,66,66,81,93,108,107,86,73,53,98,77,27,25,72,61,20,63,73,59,33,38,45,58,69,80,71,85,70,29,34,34,30,35,68,78,34,30,33,26,62,73,70,54,63,39,60,75,52,81,72,26,63,38,63,74,74,87,31,24,38,27,43,76,71,58,42,23,23,29,30,28,29,30,79,57,49,80,73,70,66,42,58,54,44,69,76,53,26,25,26,25,30,56,67,44,93,77,72,59,99,99,123,85,48,51,63,62,76,37,25,27,35,36,50,41,85,64,104,99,88,79,82,90,121,83,51,45,79,59,69,27,24,37,45,45,63,38,58,80,79,79,103,91,78,83,75,47,37,48,69,79,55,27,26,48,55,58,72,56,43,68,87,97,91,99,97,94,62,71,65,43,77,84,53,29,27,53,67,76,83,64,53,44,63,95,108,115,117,120,75,82,63,49,67,63,43,28,31,58,79,84,90,90,64,51,82,99,117,117,133,134,83,79,84,59,61,68,40,28,33,55,50,75,101,82,77,43,77,88,91,92,98,103,84,79,84,62,63,70,39,27,35,62,52,71,98,82,76,43,78,84,92,90,94,100],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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
