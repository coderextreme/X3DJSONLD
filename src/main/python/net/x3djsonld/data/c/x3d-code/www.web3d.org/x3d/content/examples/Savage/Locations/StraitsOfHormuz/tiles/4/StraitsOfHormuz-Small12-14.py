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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small12-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.794039492713402,57.23545039395357,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[196,132,237,228,145,122,119,122,134,119,135,137,125,125,130,154,187,191,216,227,238,241,216,124,231,228,144,121,112,158,109,129,125,129,147,139,149,158,211,219,220,226,243,245,201,116,178,228,165,123,131,107,105,102,114,123,177,187,178,144,161,203,236,245,245,259,175,107,196,244,172,133,163,90,98,108,107,137,157,159,157,148,184,194,205,218,198,209,118,106,172,225,187,172,127,93,113,100,111,142,146,166,160,184,194,185,220,184,190,170,98,118,106,198,225,193,78,84,91,102,114,125,128,162,146,147,180,186,181,149,163,163,70,123,99,132,213,116,75,76,87,99,115,112,109,115,132,134,121,132,135,149,149,151,67,98,90,118,165,131,70,77,89,90,90,106,130,133,136,111,115,129,154,153,178,165,69,76,76,153,177,143,89,72,75,94,95,114,140,120,113,105,116,119,144,167,150,155,57,70,77,132,139,72,60,70,80,86,87,119,109,97,94,128,117,122,129,135,143,145,63,58,58,72,86,58,62,68,68,75,79,88,96,107,100,107,112,119,125,135,147,169,51,49,49,52,57,62,66,69,74,78,83,81,105,97,98,108,118,135,150,201,157,175,46,43,45,80,63,74,65,72,73,79,84,100,86,89,110,112,110,140,141,147,199,175,41,41,42,60,69,108,71,75,78,81,88,93,92,91,108,104,140,130,124,180,173,165,40,38,41,46,72,146,88,79,83,87,89,94,102,106,117,108,125,152,131,130,152,143,37,40,40,44,68,157,102,93,85,91,96,109,112,121,127,125,136,129,143,141,137,148,35,36,37,39,79,170,143,97,92,98,103,107,114,118,117,141,134,138,141,147,155,154,34,33,39,41,88,204,119,112,97,103,113,117,118,123,135,142,151,146,145,162,145,161,33,34,35,41,65,112,121,109,105,111,119,129,130,132,145,147,160,165,156,166,171,154,32,35,34,36,55,80,116,115,115,114,126,138,140,143,166,155,160,182,173,175,200,169,32,33,37,38,68,75,165,146,115,123,134,143,153,152,168,157,177,183,193,188,192,184,32,33,32,38,69,103,228,175,136,132,144,206,171,156,182,174,189,202,214,201,208,195,32,33,32,38,72,102,231,178,139,137,144,205,172,157,179,176,190,203,217,204,209,197],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
