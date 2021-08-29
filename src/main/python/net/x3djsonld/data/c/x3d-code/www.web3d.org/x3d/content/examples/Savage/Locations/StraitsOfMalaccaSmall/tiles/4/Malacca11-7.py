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
        texture=ImageTexture(url=['../../images/4/Malacca11-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.0251734853787395,101.7110626388113,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[281,187,267,209,166,127,168,145,139,122,102,143,145,104,93,136,209,239,239,110,102,142,222,153,347,267,137,137,178,173,179,148,135,98,107,90,91,125,129,106,127,109,112,110,240,153,250,185,144,144,184,180,218,156,129,99,110,103,87,97,93,97,111,145,113,148,388,201,256,162,168,150,152,164,244,135,122,113,141,100,89,162,103,114,175,132,112,108,363,220,340,187,175,145,173,142,218,175,137,126,149,143,105,83,95,105,151,160,126,123,469,394,297,196,187,154,174,127,151,187,214,134,147,138,91,79,93,103,115,118,194,220,262,345,333,202,170,149,168,134,122,159,261,182,166,103,145,92,80,100,120,123,190,295,226,246,253,257,169,155,173,164,127,146,166,179,129,149,121,91,133,116,113,155,168,256,180,221,239,210,148,138,162,145,147,152,157,183,147,143,133,115,74,103,114,139,126,150,166,276,198,214,131,154,144,133,116,111,161,216,135,104,95,120,74,116,123,139,157,185,190,244,174,189,130,174,150,128,113,127,103,135,117,133,122,126,118,136,117,97,112,302,279,263,156,169,120,169,154,131,130,127,115,127,171,131,151,110,109,78,112,73,81,103,273,327,151,171,120,130,120,113,100,114,108,114,179,109,126,127,109,98,97,67,67,89,168,236,147,183,113,109,116,115,87,107,105,118,112,84,100,116,103,105,103,75,96,89,261,263,156,160,108,104,111,109,92,113,119,119,111,98,86,106,95,93,117,69,90,96,132,179,175,118,150,106,104,90,89,169,96,129,90,103,110,91,101,184,98,99,98,129,154,210,199,127,137,121,92,114,115,138,89,94,87,110,74,100,125,120,107,84,93,122,153,184,242,163,138,109,111,101,85,130,97,80,130,80,88,117,89,118,83,103,93,106,166,235,193,131,107,96,117,95,121,126,101,99,165,87,113,110,117,99,126,109,145,128,212,266,184,145,120,100,98,136,120,132,131,109,127,110,102,110,110,94,88,90,114,126,221,185,180,126,172,91,118,132,135,129,131,92,147,95,94,114,123,110,107,107,101,121,228,198,219,136,179,111,118,124,218,155,119,104,186,113,103,136,109,126,104,114,112,120,219,217,235,131,177,113,121,131,233,142,117,94,163,108,100,136,123,124,108,108,113,130],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
