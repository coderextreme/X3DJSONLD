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
        texture=ImageTexture(url=['../../images/5/newport22-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[160,151,142,134,123,117,117,115,116,120,123,128,131,130,130,125,119,120,120,122,125,126,152,141,131,122,120,115,117,118,115,121,125,127,129,128,125,124,124,126,126,132,133,134,139,131,125,122,117,116,117,116,121,119,121,122,127,128,130,133,133,134,135,138,140,138,135,128,124,123,120,120,120,120,119,119,123,122,126,131,137,139,139,138,142,143,141,140,132,124,122,124,123,126,127,122,122,118,118,122,130,136,142,146,142,145,148,149,145,145,132,128,125,124,126,130,129,129,122,121,117,124,129,137,142,147,149,152,152,153,152,152,143,137,132,129,129,129,129,132,126,123,119,124,130,140,148,154,157,161,159,157,156,156,152,149,141,133,133,133,130,125,124,125,125,127,133,147,153,163,165,167,162,164,164,162,157,154,148,142,138,135,127,128,131,122,124,128,138,149,160,171,174,170,165,167,163,162,155,153,149,148,142,134,128,128,123,122,124,129,141,152,164,169,170,170,169,167,165,163,155,149,149,145,140,132,129,129,122,121,124,128,140,156,168,172,174,172,171,168,166,166,153,148,146,145,137,133,132,131,122,117,122,129,140,153,164,172,173,173,177,173,167,165,158,154,145,137,133,133,133,127,118,118,120,130,144,155,167,173,175,175,176,178,168,166,160,155,147,138,130,127,125,119,120,123,123,135,147,160,170,173,175,176,176,175,172,170,160,155,146,135,124,120,119,125,123,124,127,138,150,164,173,179,178,176,179,180,174,172,160,152,143,134,126,122,124,124,124,127,132,143,156,169,177,182,182,181,182,182,179,177,160,153,146,136,131,129,129,125,123,125,134,146,163,174,182,183,182,184,183,183,179,178,156,150,144,135,134,133,131,127,126,128,139,151,166,176,182,182,182,183,185,183,177,176,150,145,141,140,139,136,137,130,124,127,141,154,165,175,180,184,185,185,184,179,175,174,146,143,145,147,144,139,136,127,124,129,141,153,161,169,178,181,183,183,179,175,171,170,152,153,151,148,144,136,130,126,126,129,142,148,157,165,176,180,182,179,175,174,169,167,166,170,164,159,149,142,133,130,131,131,136,145,155,166,176,179,179,174,175,171,167,165,176,181,177,174,167,153,143,138,137,138,137,145,155,168,176,178,176,175,174,172,167,165,177,182,178,175,170,155,146,140,139,139,137,145,155,169,176,178,176,174,175,171,167,164],
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
