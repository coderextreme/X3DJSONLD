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
        texture=ImageTexture(url=['../../images/5/newport26-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[169,174,169,163,155,146,138,138,132,126,131,139,147,151,154,160,159,159,157,158,161,163,170,171,167,159,153,149,141,137,137,131,132,138,145,153,155,156,159,155,155,157,158,160,167,167,164,157,153,143,142,140,140,136,132,137,140,148,153,155,153,155,153,153,153,153,157,160,159,159,155,150,146,142,137,135,133,134,138,141,146,149,148,150,146,146,147,147,149,158,164,165,162,160,155,150,143,135,131,130,132,135,136,138,140,139,140,138,139,140,150,158,164,170,172,171,169,163,152,142,135,131,127,127,131,134,134,133,132,133,133,134,150,158,168,172,179,179,175,169,161,156,145,134,129,131,130,127,127,129,129,130,131,133,149,157,166,174,178,180,178,171,163,160,148,139,130,128,130,127,128,129,128,130,132,132,150,156,162,170,177,179,185,176,168,161,156,143,133,130,127,127,128,128,127,125,130,132,144,148,159,167,172,177,181,178,176,168,161,149,137,127,128,127,128,131,130,129,128,128,144,144,154,162,169,176,182,177,172,167,160,150,140,132,125,130,129,129,131,131,129,128,141,145,151,159,169,173,175,175,173,167,158,149,141,134,130,127,128,131,132,129,126,126,140,143,150,158,162,166,169,170,170,165,157,148,142,137,134,132,130,128,130,126,124,124,143,142,145,158,161,156,163,169,164,160,151,147,143,140,136,135,138,133,130,125,123,123,149,148,146,155,160,156,161,164,159,154,148,146,148,141,136,143,143,140,131,122,122,122,157,154,155,155,146,153,160,159,154,152,149,146,144,140,140,148,143,147,135,125,121,121,155,159,161,146,140,147,156,154,150,146,143,141,141,141,144,145,142,139,137,127,121,120,140,143,144,142,141,141,146,146,144,138,137,135,135,136,139,140,138,136,127,123,124,123,142,146,151,157,151,144,144,140,143,147,146,139,143,140,131,125,124,124,122,118,118,118,151,167,176,173,166,162,163,161,162,160,152,150,150,153,146,142,136,129,121,117,116,116,146,167,176,179,180,180,178,174,169,168,162,156,158,165,159,152,145,136,126,117,116,116,138,158,171,174,177,180,181,181,178,174,169,163,163,171,168,159,156,149,136,125,121,119,137,144,158,167,172,176,178,180,178,176,173,169,168,170,172,168,163,154,143,138,136,133,137,141,156,165,171,175,178,179,178,176,173,170,169,170,172,169,163,155,144,141,139,136],
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
