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
        texture=ImageTexture(url=['../../images/4/bosphorus8-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[94,98,8,10,2,-2,3,17,67,98,112,102,102,102,77,41,81,67,41,101,91,83,71,105,23,15,-5,0,0,15,29,72,118,116,120,112,96,75,50,35,87,119,134,132,83,110,38,4,2,7,-3,13,81,96,115,123,115,90,83,84,23,64,118,126,136,135,106,131,80,41,5,6,9,-5,62,132,129,123,91,84,43,36,36,91,104,110,121,126,115,138,97,65,14,2,3,14,7,81,107,113,92,37,20,60,83,69,93,121,135,138,132,142,100,82,20,10,4,-3,5,76,114,90,69,23,56,101,77,60,63,97,110,113,141,137,105,59,39,0,3,0,16,75,108,73,17,27,80,50,14,27,13,61,71,95,142,120,98,107,65,5,0,7,29,51,73,44,8,73,63,10,38,59,16,16,40,43,140,121,131,110,31,2,12,8,0,9,14,6,33,42,9,15,80,36,14,79,62,44,144,134,100,61,42,7,13,0,-7,7,0,5,34,12,22,82,113,123,77,94,54,46,129,136,131,125,85,40,24,12,0,-1,0,2,7,5,10,26,90,111,120,101,80,64,128,125,123,126,76,100,87,80,11,-12,2,13,24,47,67,41,61,110,100,119,91,85,114,120,109,112,115,119,113,60,15,3,-2,31,78,102,95,69,45,50,80,116,123,116,108,106,96,104,106,98,107,77,13,5,4,38,83,115,103,92,69,88,90,107,135,135,80,95,97,72,65,59,80,67,24,49,27,66,104,91,104,103,86,97,107,97,131,141,72,80,97,83,68,38,85,61,0,5,148,29,29,56,81,92,109,117,124,128,134,143,47,79,80,70,99,31,29,16,6,-7,2,22,81,86,77,114,116,119,125,130,135,135,70,44,48,47,79,26,14,5,0,0,1,56,72,100,98,94,100,97,113,118,112,93,61,37,24,21,21,24,62,24,-2,0,0,18,81,77,89,51,83,76,89,101,65,58,100,83,71,53,36,64,64,34,19,7,-1,27,41,71,86,35,37,74,74,76,49,39,106,117,66,82,78,80,55,30,6,-6,4,2,23,55,69,24,62,80,62,71,53,33,125,124,109,102,94,95,74,58,12,0,2,-9,5,5,16,4,11,15,15,24,39,38,141,125,125,131,118,97,73,77,38,1,2,8,2,1,4,2,38,52,49,42,93,86,139,121,123,132,121,92,68,70,41,4,2,10,3,1,1,3,45,60,58,45,96,93],
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
