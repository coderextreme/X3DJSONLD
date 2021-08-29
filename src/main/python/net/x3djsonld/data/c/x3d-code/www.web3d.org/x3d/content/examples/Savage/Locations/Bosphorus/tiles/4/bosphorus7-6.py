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
        texture=ImageTexture(url=['../../images/4/bosphorus7-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.0075820664573,28.882589547476528,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[48,17,11,14,15,42,53,50,45,39,28,13,28,37,40,28,10,6,4,4,4,2,22,17,26,30,16,32,52,55,41,36,26,17,28,40,42,39,39,29,9,6,5,7,18,26,46,34,19,26,46,56,47,41,34,27,30,41,48,46,51,49,35,14,14,13,21,38,53,48,35,17,40,46,54,53,35,34,40,46,53,54,56,47,31,19,18,23,22,44,61,60,47,26,26,46,61,50,42,39,52,52,60,62,52,38,24,20,25,31,24,45,69,72,56,32,25,46,53,58,46,48,60,61,63,57,46,22,22,39,41,39,27,44,66,72,57,38,25,41,53,57,52,52,60,61,58,45,26,25,38,54,55,52,30,49,72,72,55,37,29,50,67,66,57,56,59,68,47,29,29,35,51,66,64,60,27,47,72,70,61,34,28,44,71,72,67,64,62,66,45,36,50,53,62,70,47,48,30,45,72,79,67,38,35,43,77,71,71,79,77,57,41,43,64,71,74,66,37,34,36,61,76,83,77,37,36,65,78,73,78,78,64,49,46,68,66,67,66,61,44,32,48,77,84,79,71,36,48,74,86,83,85,73,56,61,57,71,63,46,55,41,-2,-14,57,88,86,79,61,35,53,71,92,93,86,71,64,74,70,73,71,35,22,9,-5,-7,63,89,83,71,44,49,51,72,94,98,84,67,74,86,67,63,55,53,12,3,2,2,72,90,68,48,41,65,74,70,89,99,81,74,82,79,65,46,29,32,9,-1,6,9,87,84,55,69,48,75,92,69,84,96,80,89,84,60,51,36,23,11,2,-1,11,16,91,72,67,80,49,67,95,88,91,99,86,93,84,51,55,16,5,1,9,2,43,45,92,66,81,68,48,55,88,103,102,99,94,82,78,59,34,21,4,-19,2,15,22,35,85,74,86,62,65,48,84,103,109,103,100,81,37,34,8,6,8,2,17,59,26,24,80,74,90,61,70,55,79,90,109,113,105,99,87,32,10,4,1,19,30,76,68,57,94,79,84,68,96,73,80,88,108,109,105,90,74,23,39,5,2,17,69,62,85,86,106,102,81,77,98,71,93,96,114,107,93,68,45,67,40,32,-6,4,23,37,61,78,116,106,86,86,92,91,96,112,114,117,93,101,83,88,71,83,15,2,4,4,55,73,117,103,87,87,92,94,97,113,113,119,99,107,92,92,76,88,27,2,5,3,49,68],
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
