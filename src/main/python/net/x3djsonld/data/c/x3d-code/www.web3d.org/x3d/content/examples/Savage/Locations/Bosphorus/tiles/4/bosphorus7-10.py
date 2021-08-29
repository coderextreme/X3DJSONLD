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
        texture=ImageTexture(url=['../../images/4/bosphorus7-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.0075820664573,29.17931591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[142,136,141,163,140,154,155,150,146,134,124,121,117,115,111,115,119,124,125,121,108,110,143,131,146,144,131,146,142,149,146,140,129,124,132,122,112,119,121,138,137,123,112,111,134,129,136,130,135,145,139,147,151,146,139,132,128,120,114,114,128,144,136,123,119,120,127,127,127,129,136,152,143,137,136,138,132,139,137,124,117,112,123,135,132,139,130,133,130,123,122,136,135,144,149,143,142,136,133,135,143,128,119,113,118,126,124,138,146,149,142,122,123,128,139,145,150,144,137,134,131,127,136,132,119,112,106,112,124,138,154,161,139,124,121,145,150,158,156,145,133,127,132,128,128,132,125,117,113,109,123,125,140,147,137,134,123,158,155,158,149,137,139,131,126,127,122,138,136,126,115,106,123,118,139,144,136,121,130,156,152,156,152,146,152,146,140,129,126,120,120,130,113,105,118,111,123,129,122,117,136,142,152,158,162,151,155,157,151,127,119,112,112,121,109,102,108,103,108,114,114,124,138,151,151,155,163,165,153,141,127,131,127,117,108,107,106,104,99,101,97,97,121,132,155,160,156,167,174,173,154,152,143,143,138,126,113,112,108,109,111,107,114,120,132,146,156,156,163,163,176,180,169,160,161,154,146,129,118,115,113,119,118,121,124,130,124,143,143,156,150,158,161,179,165,172,166,169,157,151,133,126,117,122,121,137,140,150,145,146,164,165,161,162,173,179,172,184,188,176,159,142,144,139,124,138,127,131,145,151,158,171,192,172,166,167,179,188,185,203,200,168,178,178,167,142,135,131,135,140,158,160,164,181,186,161,165,172,182,199,204,222,194,203,195,190,167,138,136,135,142,144,160,165,186,187,185,167,186,195,190,201,219,222,210,223,208,199,160,166,143,141,148,154,176,182,189,199,186,174,197,214,221,245,242,255,257,244,221,179,169,176,153,150,157,162,180,186,205,210,198,187,189,209,230,242,266,310,297,266,222,187,197,191,169,163,162,169,178,181,219,226,204,198,199,207,214,243,263,313,308,270,215,213,212,200,167,171,159,161,185,187,249,273,229,220,223,232,234,236,257,275,310,272,236,236,219,190,165,158,155,156,169,164,303,260,232,231,231,234,223,232,253,300,363,310,262,249,224,191,169,170,165,157,145,147,309,257,229,228,229,232,219,235,259,306,368,314,264,249,226,189,173,173,168,160,149,151],
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
