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
        texture=ImageTexture(url=['../../images/4/bosphorus9-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.11691829101653,29.47604227744523,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[156,133,113,145,173,166,169,164,82,139,171,168,135,134,74,108,128,168,136,55,145,138,160,142,107,125,158,140,155,162,72,112,157,158,150,122,68,109,133,157,147,67,105,90,118,153,140,99,101,135,160,165,109,60,129,148,131,104,72,91,127,106,149,71,97,70,82,131,120,104,116,147,159,162,154,64,74,128,72,50,47,94,67,108,105,82,61,60,67,66,89,92,91,147,157,138,140,89,52,64,63,56,54,49,27,36,28,50,20,20,72,64,51,74,71,96,126,86,99,44,48,34,37,66,69,28,54,42,67,52,65,78,113,68,75,61,62,57,51,65,50,53,112,49,38,65,34,92,103,94,42,73,127,142,88,64,96,107,131,86,89,53,114,103,90,84,72,95,108,116,100,75,94,111,137,128,106,76,114,137,88,90,125,99,109,139,122,117,87,82,145,152,153,142,143,124,93,78,116,81,139,118,75,138,116,104,115,108,81,78,79,97,99,163,161,110,88,79,77,63,110,106,125,95,113,134,147,145,131,121,98,110,83,139,131,165,157,155,114,61,47,47,93,118,140,97,136,109,149,145,155,107,122,156,138,110,162,167,163,163,139,118,60,51,114,140,120,133,123,127,143,133,162,151,161,160,165,159,158,136,152,125,116,95,72,60,128,156,141,151,156,157,160,121,153,154,147,145,168,146,134,114,157,140,115,98,84,85,153,160,159,141,151,158,140,119,136,156,136,151,141,153,158,112,135,125,114,120,107,115,130,154,145,148,122,144,121,115,148,151,143,114,147,156,135,116,123,119,81,90,72,80,124,143,136,152,125,125,143,104,129,149,144,111,115,146,121,131,111,136,106,64,57,57,121,145,156,135,131,96,137,122,98,122,123,126,88,143,123,133,86,108,76,57,56,52,142,120,150,118,140,103,129,137,105,91,128,96,78,126,115,121,123,77,87,59,39,38,129,130,108,131,111,121,81,128,116,63,103,105,81,121,129,88,112,100,76,61,41,37,114,141,138,113,110,106,75,113,109,64,105,89,98,125,118,115,83,118,74,91,49,45,123,135,126,118,88,76,71,110,108,79,71,90,90,112,95,112,88,93,71,112,74,62,113,100,115,112,114,67,71,94,93,95,47,62,88,98,89,100,92,50,77,104,106,101,112,103,111,105,117,66,70,83,93,101,42,63,80,93,83,91,98,44,77,102,106,103],
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
