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
        texture=ImageTexture(url=['../../images/5/newport22-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[126,126,122,121,121,127,128,133,136,133,128,124,119,119,122,127,135,137,141,146,144,144,134,131,125,124,124,127,131,135,138,139,137,129,121,124,126,133,136,139,144,148,147,147,138,133,130,129,127,128,134,142,139,139,138,134,129,125,127,133,138,141,145,148,151,151,140,136,136,131,129,131,138,140,141,140,138,135,131,128,128,130,136,143,147,149,152,153,145,143,139,133,132,131,134,136,139,138,138,136,135,132,134,134,137,143,147,148,150,149,152,150,144,138,136,136,133,135,135,137,137,136,136,134,137,138,139,141,143,142,144,144,156,152,147,141,136,132,134,137,139,139,136,136,135,133,139,139,139,140,139,139,138,138,162,154,148,140,138,134,132,133,139,137,135,134,132,133,137,137,137,138,138,138,136,136,162,156,149,140,135,133,133,132,133,134,133,131,131,132,134,136,137,139,137,137,137,136,163,157,150,143,139,136,134,133,133,133,131,128,129,130,131,135,136,138,141,139,138,138,166,158,148,146,143,141,135,134,131,131,132,131,131,128,128,132,136,133,142,141,142,143,165,158,154,149,143,139,137,134,133,132,133,132,129,129,131,132,134,135,139,145,144,143,166,161,156,152,146,140,139,135,134,131,131,127,128,127,128,133,133,136,140,143,143,144,170,165,159,155,152,146,140,136,132,131,128,125,123,123,123,127,132,135,142,146,145,146,172,167,160,154,153,150,143,138,132,130,125,123,123,123,124,126,132,137,140,140,141,141,177,170,164,160,153,148,144,137,131,129,127,124,121,123,122,126,129,135,137,138,142,142,178,174,166,161,153,148,143,136,130,128,124,125,123,122,123,123,129,134,136,140,144,143,176,172,166,159,153,147,140,133,130,126,124,123,121,121,122,126,131,133,135,136,135,134,174,169,163,156,149,143,139,132,128,126,124,121,121,124,123,127,129,131,135,138,132,131,170,165,159,151,149,143,140,132,126,121,120,121,126,124,127,129,129,134,132,131,126,125,167,161,156,151,144,139,135,130,125,123,120,122,124,127,129,130,132,131,133,131,128,128,165,160,155,149,145,136,131,132,126,123,120,121,124,127,129,130,129,133,130,126,124,123,165,157,155,147,141,136,130,127,127,123,119,120,127,126,128,130,129,127,128,121,115,114,164,156,153,147,141,136,130,126,125,121,119,121,128,128,128,130,129,127,126,119,112,111],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
