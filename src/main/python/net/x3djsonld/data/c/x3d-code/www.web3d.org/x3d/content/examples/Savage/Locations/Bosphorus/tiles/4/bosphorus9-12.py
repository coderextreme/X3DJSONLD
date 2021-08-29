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
        texture=ImageTexture(url=['../../images/4/bosphorus9-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.11691829101653,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[146,121,123,130,106,92,95,119,143,178,178,119,109,82,135,181,167,158,129,159,147,151,110,92,114,136,127,135,132,132,143,152,180,153,107,123,130,124,156,142,133,156,170,166,63,61,106,126,153,149,140,156,160,172,175,152,144,120,90,117,163,143,131,160,169,168,58,54,65,77,85,94,99,114,120,134,170,182,171,128,109,129,165,129,123,154,159,156,95,91,91,112,114,107,102,108,123,125,141,182,175,154,127,148,159,128,110,138,142,143,113,119,115,117,142,121,132,121,146,135,131,164,202,175,157,179,173,146,106,144,157,149,97,80,79,83,105,90,127,155,161,161,167,177,196,196,189,185,161,139,104,143,140,136,56,57,82,77,86,88,113,149,159,129,165,198,180,181,178,162,158,132,114,104,92,92,69,80,126,111,121,94,100,145,158,115,140,161,152,163,157,153,147,131,123,110,108,112,106,111,123,115,135,126,131,149,158,116,137,148,149,157,163,135,131,122,114,99,127,134,85,86,87,87,109,166,165,157,140,107,130,124,142,162,155,147,135,130,102,101,123,125,54,52,99,107,91,142,128,132,109,117,99,134,130,152,124,111,110,108,115,114,124,124,111,74,113,126,116,109,133,141,124,92,110,133,130,132,118,119,125,120,128,133,139,140,97,110,108,154,131,136,148,116,126,108,103,131,134,129,138,136,134,118,129,140,126,126,99,131,114,146,150,148,132,109,106,115,78,110,115,110,122,148,135,124,129,130,127,118,112,122,148,152,132,127,143,123,90,123,75,99,92,86,110,122,132,130,136,135,101,101,142,152,150,144,121,117,143,113,96,100,68,81,93,99,116,122,139,130,124,128,118,114,154,130,125,134,126,99,144,116,98,70,74,106,105,120,137,129,127,135,130,121,116,107,151,137,120,108,104,92,117,127,102,69,88,107,122,139,128,127,115,123,125,125,108,106,135,146,146,122,117,120,84,128,108,62,112,127,136,141,132,115,97,117,122,123,131,130,129,126,140,139,144,133,89,82,100,62,121,116,130,128,119,105,92,116,129,109,128,132,103,130,140,124,121,133,89,67,59,74,99,112,105,101,103,86,101,116,123,116,123,129,115,144,136,106,107,117,101,61,90,101,108,120,96,81,97,107,95,121,115,104,129,135,113,140,138,105,103,115,105,54,90,95,104,120,100,81,99,109,97,122,117,103,127,133],
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
