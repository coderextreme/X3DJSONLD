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
        texture=ImageTexture(url=['../../images/4/bosphorus6-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,29.401860686199143,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[123,137,142,132,126,138,163,161,172,161,146,161,155,166,161,171,117,147,185,124,129,135,119,125,129,132,123,141,166,174,166,161,143,136,134,140,146,135,120,127,137,113,121,126,123,115,126,123,124,149,167,173,162,148,150,149,144,133,121,125,110,110,115,146,150,156,127,113,124,112,132,152,157,172,170,160,155,165,163,150,138,156,109,109,125,138,184,188,129,122,108,110,128,133,151,158,171,171,170,167,160,164,159,144,104,107,125,158,193,198,133,131,115,105,116,133,149,152,159,172,177,158,146,137,156,146,102,107,124,145,173,168,117,130,118,108,119,137,151,146,154,176,182,198,176,152,127,127,103,105,130,149,158,164,129,132,129,112,115,142,138,144,168,180,199,218,177,159,149,127,102,111,122,144,166,171,135,134,133,119,105,134,139,161,188,213,241,253,246,215,167,138,103,107,139,139,142,145,128,120,125,119,109,123,147,161,222,286,278,257,226,201,157,133,107,108,133,158,145,146,124,109,133,112,102,124,131,155,241,276,256,216,191,162,148,140,99,106,129,147,156,151,118,106,117,102,108,121,134,152,211,254,246,227,217,217,186,126,100,103,121,141,168,168,122,120,97,90,117,108,127,153,184,198,230,229,198,214,171,128,95,116,118,146,168,176,131,115,97,92,102,129,132,158,163,197,249,255,210,175,133,119,96,130,123,158,172,178,127,104,94,102,127,125,149,156,154,177,255,274,213,159,118,100,107,133,142,127,144,150,129,121,107,86,107,114,157,162,147,167,221,214,165,126,92,125,133,146,159,150,182,177,124,110,99,118,82,118,154,153,130,147,171,166,134,126,93,103,123,123,138,155,183,190,117,119,117,122,101,102,154,119,147,173,149,157,135,106,101,123,115,131,147,185,187,189,114,122,114,106,93,98,132,112,137,168,145,131,124,93,125,138,134,125,145,145,157,165,96,116,124,120,106,82,98,120,149,166,159,144,102,86,109,128,140,129,134,173,184,177,99,121,126,113,98,78,113,130,154,148,146,148,81,85,89,116,133,156,137,146,173,182,109,119,126,134,105,83,86,104,142,133,118,101,88,130,113,107,139,167,143,175,182,189,96,109,104,113,128,116,74,118,140,126,104,80,137,139,136,119,140,171,157,170,171,167,96,106,100,108,131,114,78,126,136,130,98,85,145,144,143,121,138,168,162,176,164,165],
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
