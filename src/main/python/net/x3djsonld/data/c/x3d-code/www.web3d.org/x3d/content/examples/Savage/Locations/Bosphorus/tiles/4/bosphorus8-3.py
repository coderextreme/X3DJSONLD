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
        texture=ImageTexture(url=['../../images/4/bosphorus8-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,28.660044773738264,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[110,128,129,117,135,126,88,65,51,35,16,9,12,21,25,32,37,52,55,37,20,13,116,139,131,118,139,121,93,67,59,63,37,13,19,29,40,45,54,58,56,30,26,24,123,141,138,133,150,125,106,87,83,89,72,14,31,43,56,58,69,71,54,50,49,41,133,143,150,143,149,137,120,93,89,87,58,15,34,55,68,72,81,72,90,91,70,58,129,142,157,152,155,112,119,79,75,42,19,30,29,55,78,89,88,94,98,113,92,82,126,140,157,143,149,112,84,67,37,16,23,66,48,55,88,104,96,104,108,123,127,122,137,150,160,123,127,122,88,69,44,18,45,90,73,61,100,114,104,117,123,132,127,123,145,158,162,116,93,115,104,82,77,23,74,114,86,69,110,122,111,125,138,131,80,67,142,144,145,134,96,94,83,71,29,57,107,135,93,87,119,131,122,129,116,112,51,35,130,104,117,128,112,66,53,41,46,84,132,138,80,87,123,144,132,130,83,64,32,21,135,102,79,98,89,58,28,26,73,125,141,109,99,109,122,152,133,107,54,24,7,3,147,111,70,60,63,35,24,38,122,118,143,110,121,140,129,143,120,62,38,11,3,0,148,112,86,57,37,28,45,42,101,140,138,102,124,151,137,113,117,53,20,4,2,0,140,114,90,47,31,38,86,61,128,143,129,114,127,145,145,95,92,51,18,1,2,7,131,81,69,37,29,57,116,64,118,160,134,121,120,137,119,110,57,48,19,1,19,41,139,87,58,34,45,77,128,70,135,157,143,131,133,134,87,87,36,27,6,2,22,41,136,100,65,38,72,118,116,94,109,156,155,129,140,109,84,53,45,13,4,3,33,30,149,110,38,60,94,119,132,93,105,149,149,135,146,120,86,92,48,14,3,6,52,68,119,58,40,68,91,123,132,92,117,162,155,151,139,102,122,84,35,4,2,12,48,64,80,39,69,102,114,133,131,97,138,165,155,158,154,135,112,58,25,2,5,25,59,79,50,79,74,109,129,153,137,123,166,171,159,130,125,115,82,45,11,4,22,38,72,85,73,96,113,103,139,150,122,128,169,162,144,102,78,68,52,23,15,14,46,82,88,95,76,97,125,126,153,143,133,154,163,130,125,98,81,33,30,16,14,11,26,84,74,75,76,96,122,130,154,141,139,154,157,128,121,102,84,32,25,16,15,11,22,72,67,68],
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
