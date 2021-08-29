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
        texture=ImageTexture(url=['../../images/4/bosphorus7-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.0075820664573,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[0,0,0,0,-1,-1,-1,0,-2,-4,0,0,0,1,0,0,1,0,-2,0,21,21,-1,0,0,0,0,-1,-1,0,-2,0,0,-3,0,-2,-6,-3,-5,-1,4,17,29,29,0,0,-2,0,0,-1,-2,-4,-1,-1,0,-1,0,0,-1,-2,0,5,10,32,41,42,1,0,0,-1,-2,0,0,1,0,-1,0,-4,0,-2,-2,7,18,14,25,45,53,54,0,-2,0,-2,0,0,-5,0,1,0,0,-4,0,8,22,29,38,35,38,63,75,75,-1,0,0,0,0,0,0,0,0,-5,-13,0,7,26,38,59,70,56,52,75,103,106,0,-1,0,2,-4,2,-1,1,-7,-2,1,1,24,43,61,89,94,75,64,90,122,129,2,1,0,-1,0,0,0,-5,0,-3,0,20,40,68,91,109,123,96,83,99,127,132,0,0,0,3,0,-4,-6,-5,0,1,14,33,58,97,123,141,132,109,94,114,128,132,0,2,-6,-2,-1,-6,-4,-6,3,10,20,47,79,119,152,164,138,114,107,117,134,139,0,-1,-6,-18,-1,-3,-3,5,7,18,34,60,98,138,166,159,139,121,114,121,137,139,-2,-1,-5,-12,-2,3,4,6,14,25,45,70,116,142,153,148,141,126,113,119,124,125,0,0,-4,1,7,7,8,9,19,35,57,82,108,135,151,143,135,122,110,101,110,114,-1,0,9,8,9,14,10,19,30,46,68,91,120,137,153,143,126,120,107,90,104,108,5,9,11,14,20,20,21,33,47,66,87,107,127,139,153,139,122,114,103,79,96,100,10,14,20,29,34,33,39,51,65,80,100,126,125,139,161,135,117,104,96,75,85,89,18,21,32,40,49,52,61,67,84,92,113,146,126,137,163,133,114,97,94,72,73,76,33,38,50,55,65,67,70,94,104,106,125,158,124,118,134,128,108,94,85,74,59,63,54,58,65,73,84,90,95,109,118,115,132,160,121,101,120,117,111,97,71,69,56,52,73,80,86,95,118,122,119,108,126,115,127,156,118,90,103,103,100,103,90,71,54,51,96,114,121,127,140,136,133,120,131,110,110,129,106,78,88,91,86,89,96,91,80,77,121,145,149,174,148,132,140,131,140,106,91,105,79,69,73,71,72,73,86,88,81,81,160,161,166,177,146,123,118,124,115,89,80,73,61,57,57,56,54,57,73,76,75,79,165,161,166,173,141,120,116,120,111,85,76,69,60,56,55,52,51,53,70,74,74,78],
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
