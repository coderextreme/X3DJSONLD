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
        texture=ImageTexture(url=['../../images/4/bosphorus7-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.0075820664573,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[9,23,27,39,58,57,48,24,33,44,66,64,78,75,64,55,59,45,67,56,39,42,20,28,24,33,61,73,77,46,36,55,77,74,86,82,69,71,57,45,69,77,61,54,31,21,40,29,60,70,83,62,46,62,86,84,98,91,78,78,74,62,57,74,75,76,46,35,34,50,44,63,90,84,75,82,116,113,121,111,92,87,83,73,79,67,83,87,56,59,41,58,61,67,86,104,93,103,146,155,159,120,102,101,96,86,89,76,93,97,76,69,53,70,77,76,89,107,112,149,183,189,174,130,115,111,103,98,99,89,92,101,73,86,73,84,88,89,93,114,138,185,221,195,152,132,124,122,117,113,111,112,102,104,60,87,91,95,96,104,102,109,135,174,195,169,148,139,134,131,123,124,121,132,128,132,70,86,100,100,108,107,105,117,143,153,171,184,171,150,144,143,133,140,138,140,143,145,69,89,105,108,104,103,113,120,134,136,189,217,196,169,168,147,149,152,154,150,152,153,67,85,97,111,104,92,103,111,111,133,188,249,228,187,182,163,144,148,150,149,145,141,79,83,68,89,107,79,96,91,88,132,178,219,235,196,160,152,135,141,138,144,138,135,73,41,65,100,87,77,68,65,90,113,147,223,215,196,162,155,128,138,123,138,140,138,56,20,64,93,64,63,31,73,80,128,186,200,210,172,157,153,127,130,119,137,136,137,5,27,30,88,63,21,44,63,98,156,145,170,187,159,150,127,131,102,116,128,131,134,3,0,17,31,35,22,69,87,115,143,113,167,163,125,149,113,123,106,110,114,137,138,3,0,6,32,11,44,56,82,133,149,80,130,117,113,134,102,126,91,108,132,131,131,5,67,58,14,4,15,51,72,81,114,63,86,87,125,118,95,113,76,106,125,127,121,6,59,61,13,2,0,11,32,67,44,49,67,87,107,120,80,99,70,127,131,137,141,5,35,19,5,-1,1,4,6,26,16,55,106,124,118,95,74,93,74,112,118,130,131,33,36,13,3,1,-1,2,15,18,39,37,68,85,98,112,62,98,77,95,102,112,110,48,80,11,6,5,1,-11,39,70,70,74,65,92,110,103,82,66,83,92,69,91,100,90,90,9,6,1,-2,3,25,67,100,107,98,102,101,82,47,68,76,43,89,76,71,94,98,8,10,2,-2,3,17,67,98,112,102,102,102,77,41,81,67,41,101,91,83],
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
