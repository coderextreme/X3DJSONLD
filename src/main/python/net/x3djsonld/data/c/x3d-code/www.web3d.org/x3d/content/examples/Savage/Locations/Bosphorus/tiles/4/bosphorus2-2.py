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
        texture=ImageTexture(url=['../../images/4/bosphorus2-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.010933623,height=[0,23,146,107,111,126,124,158,179,196,167,168,208,188,133,165,175,179,297,246,161,132,75,0,46,106,51,95,124,81,120,210,239,215,268,231,164,176,183,146,259,210,145,165,124,12,123,91,71,141,123,97,148,216,195,173,310,260,213,199,133,195,193,186,80,68,130,5,11,56,72,28,93,114,129,161,157,191,366,223,166,211,146,167,160,154,62,44,107,112,7,97,51,118,140,104,139,128,216,226,298,222,181,153,158,68,149,43,38,17,47,46,-1,93,112,99,213,147,101,154,200,189,264,176,103,68,48,45,45,15,13,14,132,95,5,-1,13,37,81,181,183,185,121,146,172,116,126,72,83,37,25,11,107,130,84,63,34,8,7,18,155,166,204,187,149,194,141,132,131,88,50,37,38,53,60,62,92,104,58,8,-1,66,198,228,287,143,111,97,169,118,135,47,33,8,17,81,47,86,117,39,5,6,37,41,116,141,188,168,142,117,98,114,85,32,32,158,16,49,86,83,20,1,0,1,22,79,45,78,223,175,120,57,75,152,165,57,5,85,113,145,157,134,70,21,0,28,164,63,113,170,223,200,82,78,119,160,94,147,38,57,134,130,99,134,118,36,54,-4,6,193,191,184,134,93,105,70,21,134,47,77,44,26,120,98,135,74,173,153,53,43,-2,3,107,88,122,107,133,126,10,70,8,14,16,33,129,99,87,103,156,132,204,224,-6,-1,1,112,106,99,100,92,12,3,1,41,44,103,88,98,76,89,90,115,169,172,153,17,0,20,50,35,97,63,83,61,2,64,93,70,55,54,91,89,57,108,122,103,112,63,0,4,5,7,75,31,62,1,70,38,31,46,52,46,20,4,59,48,87,96,81,44,-4,8,1,0,3,3,0,32,40,45,54,7,0,0,2,1,59,26,81,57,54,33,-1,1,0,2,1,0,0,1,1,1,4,2,1,0,2,1,-1,13,43,7,0,1,1,0,3,2,1,2,1,0,1,3,1,1,0,1,3,0,-1,9,42,2,0,1,0,0,3,1,1,1,1,0,2,2,2,0,0,1,3,0],
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
