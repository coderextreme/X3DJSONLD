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
        texture=ImageTexture(url=['../../images/5/newport20-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[135,142,146,152,153,152,150,150,144,139,129,117,110,105,111,120,125,129,135,138,144,146,134,143,152,149,152,151,151,151,146,142,138,121,114,109,109,116,123,127,131,139,141,139,137,142,146,153,150,151,151,147,148,139,137,126,118,113,104,109,118,125,135,136,136,134,136,140,143,147,148,149,146,147,142,139,134,124,121,118,116,114,119,124,127,132,132,133,139,141,145,143,147,147,146,136,136,129,127,129,128,126,123,122,121,124,125,126,136,132,145,142,143,148,149,145,144,138,134,132,123,126,126,125,128,135,131,124,127,130,134,134,142,144,146,151,151,149,146,140,129,128,127,127,127,131,133,133,134,143,131,127,126,129,147,150,151,153,152,151,142,137,131,133,137,134,134,135,135,132,128,132,138,129,128,130,151,154,158,155,151,146,144,142,138,140,140,139,143,134,133,132,135,128,127,131,134,133,155,155,154,157,155,148,142,141,141,139,143,153,147,137,139,136,134,130,130,129,133,134,157,155,154,152,152,149,145,140,141,141,143,149,150,149,137,137,132,130,131,128,128,129,151,151,150,150,149,147,144,143,143,143,144,146,145,144,139,137,134,130,129,129,130,129,147,151,152,148,148,143,142,140,142,141,141,142,146,139,137,136,132,132,131,129,129,128,145,148,149,150,148,143,140,139,145,139,142,139,138,137,138,136,138,132,132,130,125,125,144,148,152,146,144,138,138,142,140,140,142,141,137,137,139,139,137,132,129,131,129,128,142,144,144,141,137,135,139,142,143,148,145,140,136,140,139,139,137,137,134,132,131,130,146,145,141,138,132,140,141,143,146,145,142,145,147,145,141,140,144,143,137,137,131,129,142,143,131,129,130,137,141,146,149,146,144,144,150,150,152,150,148,145,141,129,126,126,141,132,129,127,126,133,138,143,147,153,144,148,152,156,157,152,151,144,141,133,127,126,123,126,129,128,133,132,134,142,149,152,153,152,155,155,160,159,154,146,143,137,130,130,123,127,130,131,130,133,134,147,146,154,154,163,161,166,163,161,158,152,141,135,130,128,127,131,132,129,131,131,140,149,153,157,162,166,170,169,170,165,155,154,143,134,130,128,125,130,135,136,138,137,140,149,152,163,169,175,178,180,174,169,159,152,145,137,126,123,127,129,134,136,137,139,140,152,153,164,169,176,181,180,174,169,160,152,146,138,126,124],
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
