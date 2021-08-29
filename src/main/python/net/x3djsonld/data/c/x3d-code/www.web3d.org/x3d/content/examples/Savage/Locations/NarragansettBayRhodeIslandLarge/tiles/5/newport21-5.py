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
        texture=ImageTexture(url=['../../images/5/newport21-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[127,129,134,136,137,139,140,152,153,164,169,176,181,180,174,169,160,152,146,138,126,124,128,126,131,135,138,141,147,151,166,168,179,185,188,183,172,167,164,155,148,140,129,127,128,130,129,133,138,148,151,161,171,177,179,189,189,180,173,170,166,160,151,142,139,139,123,126,129,134,143,153,160,163,174,178,188,187,188,178,179,175,169,160,148,142,135,135,123,126,129,136,142,152,163,169,175,181,186,187,185,181,177,174,168,158,151,145,140,136,123,125,131,134,141,149,162,170,175,182,185,184,181,181,178,166,162,157,153,149,142,141,119,121,122,131,137,148,159,169,178,178,182,182,180,178,173,168,160,154,151,151,151,148,121,120,127,131,138,145,155,167,173,176,177,179,177,174,172,166,162,158,156,152,148,146,120,126,129,132,138,144,152,161,169,172,174,176,175,172,169,162,158,157,155,151,149,148,125,131,132,133,135,142,149,156,163,170,172,173,171,168,163,157,155,152,151,149,146,145,129,134,135,133,132,138,142,149,156,161,166,169,166,159,155,154,153,150,145,145,141,139,137,137,136,134,134,133,137,138,143,150,155,161,158,156,152,148,146,141,138,138,136,135,145,139,139,135,134,133,133,130,131,136,141,143,146,146,143,141,137,133,132,129,127,125,148,142,138,138,135,130,127,123,124,127,129,130,130,132,134,131,126,128,128,126,120,116,149,145,143,141,135,127,121,119,122,120,120,119,124,125,127,128,126,127,126,117,112,110,153,153,152,144,135,123,120,120,119,117,118,118,119,122,132,131,130,124,120,112,108,107,159,156,155,148,137,124,120,120,116,117,115,116,119,122,123,128,131,126,119,114,109,109,162,160,158,153,141,130,122,117,118,118,118,116,120,124,125,130,128,127,121,113,111,111,168,168,164,151,142,136,127,118,112,119,120,122,121,130,133,137,137,130,118,113,110,109,172,169,162,151,142,140,128,121,119,123,121,119,124,128,130,127,124,118,116,115,112,112,168,163,161,152,140,134,125,119,123,121,118,123,128,127,129,126,124,117,117,116,113,113,167,162,156,145,136,126,118,118,119,118,120,125,129,132,130,122,120,117,116,114,117,118,161,153,144,135,124,118,117,116,116,119,123,127,131,131,131,125,119,119,120,120,123,124,160,151,142,134,123,117,117,115,116,120,123,128,131,130,130,125,119,120,120,122,125,126],
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
