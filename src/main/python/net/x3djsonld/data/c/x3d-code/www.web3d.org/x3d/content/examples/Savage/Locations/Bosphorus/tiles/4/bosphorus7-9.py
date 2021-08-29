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
        texture=ImageTexture(url=['../../images/4/bosphorus7-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.0075820664573,29.10513432121479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[42,67,83,57,83,83,109,82,104,105,105,107,120,137,141,145,142,138,132,144,146,142,54,55,69,50,62,80,100,99,112,129,120,117,126,133,138,151,152,147,137,133,146,143,76,50,61,78,92,81,108,113,114,126,136,135,134,132,142,149,157,154,148,145,130,134,87,65,63,86,102,109,113,125,109,140,148,139,139,129,137,157,177,159,152,137,129,127,97,90,95,98,93,121,120,133,137,137,153,144,134,129,131,154,178,158,144,141,132,130,101,100,94,122,103,107,132,150,145,148,159,154,136,126,131,142,154,150,149,142,146,142,104,115,123,122,130,128,132,145,156,157,161,152,142,126,141,136,147,144,147,151,142,139,132,122,133,133,146,139,151,156,166,155,150,160,143,122,142,136,146,132,146,147,138,137,145,136,143,147,148,140,154,162,154,161,144,145,152,127,125,134,142,130,152,138,133,136,153,146,144,145,139,136,148,149,146,170,154,131,150,130,136,134,147,128,142,141,122,122,141,138,133,146,137,128,154,142,141,168,167,140,119,120,117,128,139,122,122,123,113,114,135,130,127,136,131,128,140,133,142,139,185,138,124,108,122,141,139,122,114,112,119,121,138,129,121,128,126,130,119,137,141,133,128,147,141,110,131,131,134,109,108,114,128,132,137,136,117,110,118,120,141,153,140,125,106,108,135,98,125,119,112,104,109,131,122,124,134,144,125,105,109,132,153,156,138,137,103,103,108,98,99,104,120,131,135,121,143,145,138,140,130,101,128,130,151,164,164,134,99,133,160,127,121,135,148,196,182,128,158,158,131,133,120,100,119,142,150,156,162,148,94,137,198,163,155,129,177,213,164,160,158,164,121,115,115,90,114,131,143,149,154,139,99,135,216,176,165,126,161,175,168,173,188,186,141,116,98,91,142,133,131,127,136,116,83,133,192,158,146,141,168,182,193,199,185,189,131,128,100,111,124,136,125,111,124,90,102,126,149,156,166,158,159,169,181,207,208,205,110,109,105,86,113,141,122,113,95,89,116,137,134,140,151,168,179,225,196,218,215,219,100,76,75,117,138,136,142,122,108,79,111,116,110,130,134,161,198,238,237,216,244,249,71,97,114,135,143,134,131,141,123,72,96,91,104,138,148,172,248,264,249,254,295,303,83,108,122,136,141,134,128,142,122,71,93,86,111,141,155,173,252,257,243,266,303,309],
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
