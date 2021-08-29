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
        texture=ImageTexture(url=['../../images/4/bosphorus7-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.0075820664573,28.80840795623044,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[37,14,11,17,33,29,53,65,43,34,46,21,30,61,72,70,58,55,56,59,54,48,27,12,13,16,49,45,60,76,52,40,49,18,32,64,80,68,60,61,65,56,27,22,26,12,10,30,60,61,69,80,59,42,49,21,30,57,80,70,67,68,70,55,21,18,20,11,17,35,70,73,81,80,61,45,53,22,23,43,76,76,74,79,76,52,21,21,23,13,18,41,70,86,82,76,59,47,56,22,25,41,70,87,78,77,74,62,22,22,20,13,19,37,63,86,77,68,59,50,62,27,27,47,68,83,79,70,56,39,23,24,16,15,19,35,57,83,79,73,73,59,64,33,25,51,78,86,75,62,39,42,28,27,18,16,21,33,48,72,90,86,74,64,68,35,27,49,84,84,64,47,60,57,32,30,17,16,20,28,43,64,92,88,73,80,67,35,29,55,87,81,59,58,74,59,28,27,20,17,22,34,40,59,91,87,74,77,57,33,30,61,85,69,60,69,82,64,31,30,20,18,27,44,52,60,94,89,82,69,46,29,31,57,83,67,82,72,82,52,33,36,21,21,33,51,65,65,95,87,88,63,40,33,34,61,87,76,87,79,84,41,43,48,24,24,39,56,68,87,102,90,90,65,39,34,40,66,84,86,91,89,76,40,50,57,24,26,42,53,71,103,107,100,94,66,45,36,45,74,88,95,96,90,65,39,58,63,29,30,33,51,72,96,107,105,95,64,48,38,47,85,101,106,103,90,49,46,67,72,29,28,37,44,60,85,112,105,92,62,61,46,46,83,106,110,107,79,44,56,81,87,29,32,45,59,62,79,114,108,91,61,71,53,43,75,103,113,91,68,46,63,84,91,28,32,46,62,75,89,115,112,88,66,67,51,42,63,93,112,77,53,54,72,92,92,32,34,39,55,68,86,112,109,85,76,77,58,42,57,80,105,73,48,65,79,86,85,31,35,44,45,58,76,100,114,87,88,80,62,52,69,75,96,66,66,80,86,84,80,41,32,48,56,60,65,94,117,92,106,88,61,58,78,81,89,61,73,82,101,92,94,57,36,49,62,75,86,108,109,106,116,89,69,57,77,88,78,60,84,84,100,106,106,63,39,45,55,72,93,126,123,126,109,81,64,63,84,96,73,67,93,113,107,120,116,64,40,46,56,70,92,125,127,125,108,81,62,64,87,97,73,68,94,116,112,119,117],
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
