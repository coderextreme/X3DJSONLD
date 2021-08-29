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
        texture=ImageTexture(url=['../../images/4/bosphorus9-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.11691829101653,29.253497503706967,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[74,77,98,79,68,61,59,55,36,31,39,32,11,11,10,12,15,19,72,114,146,146,86,58,90,105,76,48,63,68,59,16,16,12,11,11,10,13,23,36,61,112,116,110,77,39,44,74,48,58,66,50,38,16,9,25,11,10,11,12,36,86,93,50,56,63,88,67,71,41,39,29,43,53,38,19,13,41,33,11,12,13,42,43,91,78,50,58,80,65,66,67,73,64,26,18,33,11,21,26,46,28,23,13,35,70,90,116,90,95,48,45,42,76,63,49,39,20,13,10,11,30,66,29,13,21,22,60,90,133,124,113,57,36,23,44,24,17,18,11,11,9,17,47,66,27,16,43,43,109,111,97,107,97,59,33,33,26,27,14,10,6,9,10,22,66,36,3,42,61,85,107,88,64,65,56,42,49,49,42,32,13,10,9,8,8,23,44,23,26,12,49,71,58,90,49,54,69,57,55,43,33,27,13,8,8,9,8,18,55,63,43,10,18,15,25,50,29,92,106,70,50,39,34,27,11,7,8,14,19,13,90,14,9,11,13,36,48,33,41,59,85,82,79,60,43,34,20,8,19,73,85,9,44,9,11,17,17,22,59,45,72,58,54,43,77,36,46,44,7,13,74,142,110,10,12,12,28,51,25,37,67,56,78,90,111,60,38,48,16,15,7,64,115,159,69,15,16,34,62,77,61,80,99,83,107,84,97,88,103,18,7,9,33,132,170,126,63,50,63,89,88,89,99,49,114,108,112,108,99,142,118,8,32,73,105,117,106,111,114,102,116,130,110,123,120,82,73,115,128,120,112,113,66,11,6,25,65,52,75,91,111,133,145,134,140,149,145,111,113,123,150,148,142,60,28,40,72,6,18,25,98,85,88,127,140,109,129,153,173,151,146,140,144,156,154,65,44,110,52,39,3,9,72,83,99,110,97,120,139,150,156,151,158,151,128,155,151,126,98,125,108,86,21,6,69,82,68,89,109,136,153,146,134,132,152,145,113,143,135,158,136,144,101,46,22,6,56,33,73,117,137,141,140,127,137,150,149,114,103,132,129,153,116,88,98,46,8,5,16,60,70,91,127,142,116,113,137,134,149,121,101,102,103,134,112,68,92,53,11,6,35,70,114,127,142,137,101,121,114,131,141,121,103,102,115,132,117,67,91,57,11,5,29,68,113,128,142,136,99,128,114,132,139,117,101,99,113],
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
