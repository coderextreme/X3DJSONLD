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
        texture=ImageTexture(url=['../../images/4/bosphorus9-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.11691829101653,28.585863182492176,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[94,111,94,94,128,157,180,178,160,100,94,119,164,179,142,106,84,79,57,67,71,76,101,121,107,110,135,160,143,152,137,78,110,134,164,175,132,102,76,59,85,85,75,73,108,125,122,132,138,151,119,117,79,89,118,147,165,165,126,99,69,86,102,101,86,84,105,117,130,145,148,149,113,78,66,89,121,150,162,140,118,97,69,106,113,118,97,94,94,102,122,142,141,141,127,85,69,95,119,152,163,132,103,71,75,120,125,138,112,105,87,77,113,125,120,117,117,86,78,107,135,155,152,139,99,68,76,128,136,155,113,111,68,67,98,112,89,100,88,86,88,108,136,160,135,123,100,68,81,114,141,158,127,122,46,56,91,111,68,76,59,54,80,102,138,156,129,104,89,66,78,106,139,159,137,133,22,46,78,84,59,41,42,52,74,104,144,157,127,102,93,65,84,108,131,160,154,153,17,21,25,30,30,36,52,65,77,103,147,150,125,134,98,67,86,107,124,157,166,168,30,27,25,29,31,49,66,86,76,107,151,160,153,122,94,68,90,120,146,149,149,155,44,40,32,41,48,46,69,90,103,103,147,178,162,132,90,70,105,123,152,136,112,125,59,52,45,42,71,51,63,89,116,125,160,179,153,132,84,77,111,148,143,125,79,90,73,66,46,38,68,74,61,85,111,138,169,163,130,109,85,80,115,153,130,104,60,57,85,70,59,41,66,88,64,82,103,126,162,161,125,101,74,89,129,149,113,76,54,46,92,81,65,42,68,93,87,76,103,135,165,153,120,93,78,97,131,137,91,67,64,61,100,89,66,45,68,96,106,95,115,142,157,149,119,77,90,122,142,125,115,108,84,72,111,93,75,51,78,102,120,119,135,152,143,122,99,87,110,140,134,95,102,113,84,70,118,99,75,57,81,106,128,147,149,149,124,110,80,97,121,140,119,90,67,79,60,54,125,102,75,67,85,111,136,158,150,140,113,92,86,111,137,136,104,68,46,48,39,33,136,110,102,81,99,114,146,151,146,127,107,83,106,124,140,110,92,63,36,27,25,21,147,118,118,98,109,129,149,145,141,113,84,92,112,145,149,104,75,51,57,39,20,20,154,138,137,117,127,138,146,138,108,87,98,116,117,152,152,102,82,77,69,52,23,19,154,142,139,121,129,136,145,139,105,86,100,119,117,152,152,103,88,77,68,54,22,19],
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
