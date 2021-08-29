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
        texture=ImageTexture(url=['../../images/4/bosphorus8-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,29.10513432121479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[83,108,122,136,141,134,128,142,122,71,93,86,111,141,155,173,252,257,243,266,303,309,132,122,146,142,132,122,113,137,103,87,84,106,124,140,180,176,198,235,231,278,281,273,135,146,145,148,127,107,105,136,120,68,108,145,110,149,151,164,206,208,232,233,219,211,126,151,151,127,119,119,92,101,106,66,106,138,153,144,162,182,221,197,210,239,185,182,138,152,138,121,115,101,69,72,70,65,118,160,169,179,186,212,200,174,212,217,167,179,113,136,120,126,129,112,78,100,90,103,121,147,138,158,163,195,168,191,192,167,167,167,95,103,100,107,128,111,70,82,88,124,125,118,127,133,145,152,178,185,155,127,150,149,43,55,75,86,109,82,95,123,110,101,108,135,133,143,166,184,183,136,108,126,135,129,44,35,52,50,50,68,82,105,111,123,126,126,118,154,145,144,161,104,123,163,160,166,46,44,77,55,97,67,78,74,89,123,100,75,96,130,88,128,95,123,158,183,164,169,64,63,59,95,108,94,108,68,95,109,75,91,92,91,102,92,105,137,169,132,173,181,85,103,81,113,111,120,109,85,78,73,81,108,114,115,120,121,100,147,123,154,192,199,116,135,99,114,128,143,103,103,100,85,102,123,145,139,135,155,142,112,130,153,196,208,135,148,108,127,126,138,112,130,122,90,80,139,162,164,154,168,168,126,119,170,190,190,141,159,134,143,152,165,143,142,111,115,92,87,144,142,176,187,167,163,153,130,168,179,143,163,161,186,200,218,199,159,149,144,97,95,92,137,183,186,182,188,146,156,173,178,135,113,169,210,237,270,248,218,166,132,129,117,93,124,179,149,146,184,172,185,177,186,93,112,186,182,182,230,225,187,150,135,157,119,113,95,110,122,136,171,177,195,208,210,58,116,132,92,158,220,240,197,171,159,165,156,134,113,102,111,118,145,181,160,185,194,39,67,80,80,94,134,205,243,218,179,168,182,132,135,119,149,148,160,165,141,192,200,33,41,36,45,70,100,142,200,236,224,188,173,141,153,144,140,170,175,153,131,164,175,38,67,107,93,62,117,139,168,185,181,209,147,178,184,157,139,179,183,184,154,119,119,86,53,105,137,130,87,83,138,136,143,184,172,179,197,165,161,175,179,180,148,157,150,93,53,110,136,136,99,78,130,126,136,184,173,173,194,162,169,175,173,179,149,164,156],
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
