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
        texture=ImageTexture(url=['../../images/4/bosphorus9-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.11691829101653,28.511681591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[18,6,4,3,3,3,2,6,14,14,14,25,25,8,4,14,29,46,57,68,89,94,6,5,5,5,3,2,2,13,13,23,23,30,29,13,7,8,30,50,66,79,95,101,5,4,4,3,3,2,2,7,17,27,33,34,37,22,5,8,34,50,70,87,103,108,5,6,4,3,3,3,4,13,21,31,40,47,40,25,9,7,26,46,68,80,98,105,6,6,5,4,2,2,6,12,19,26,37,54,45,29,15,8,9,31,60,67,89,94,7,6,5,4,2,2,4,3,8,16,34,57,54,38,25,11,8,16,39,55,81,87,7,5,4,4,4,2,4,3,4,7,27,47,52,46,30,20,11,10,24,54,67,68,6,6,5,4,3,3,4,2,3,5,17,35,44,52,39,30,22,11,12,42,45,46,5,5,4,5,5,4,3,3,3,6,12,27,48,62,55,42,30,20,12,15,22,22,5,5,4,4,3,3,3,3,5,16,12,26,53,70,68,56,40,29,21,18,17,17,5,5,5,4,3,3,3,5,8,28,26,22,58,76,81,70,49,39,33,32,31,30,6,5,6,4,2,3,6,13,16,27,36,20,54,85,90,81,59,47,42,41,46,44,9,8,8,6,4,4,9,24,34,26,44,30,42,76,88,85,71,56,52,53,61,59,8,11,9,4,3,4,8,26,43,46,46,50,35,57,77,82,84,74,59,66,75,73,12,10,6,3,5,3,14,29,48,64,52,69,61,46,59,79,94,88,73,77,88,85,12,5,5,7,4,4,15,31,50,78,69,83,90,72,58,60,87,90,91,94,94,92,9,7,10,10,3,4,12,28,50,81,86,97,104,91,80,64,74,91,104,110,103,100,6,14,16,4,4,4,11,30,47,76,94,106,108,98,91,82,73,94,107,122,113,111,9,18,13,5,3,6,8,25,38,66,81,109,100,87,87,91,77,96,109,125,123,118,11,20,8,5,5,5,4,7,13,47,55,91,81,70,79,91,96,88,108,124,130,125,16,19,15,5,4,9,8,8,7,24,39,69,59,56,66,82,100,100,108,127,140,136,20,23,12,5,5,14,14,10,8,10,19,47,43,48,49,80,89,112,123,129,151,147,22,28,17,5,5,18,22,21,16,11,11,19,27,28,40,54,98,110,137,149,156,154,23,28,16,5,5,18,23,22,18,12,11,17,25,29,44,60,100,112,138,153,156,154],
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
