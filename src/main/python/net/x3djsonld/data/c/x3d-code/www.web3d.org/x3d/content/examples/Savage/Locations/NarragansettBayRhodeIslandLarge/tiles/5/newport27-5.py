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
        texture=ImageTexture(url=['../../images/5/newport27-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[137,141,156,165,171,175,178,179,178,176,173,170,169,170,172,169,163,155,144,141,139,136,138,137,145,159,165,169,172,175,175,174,173,177,178,176,172,168,163,156,151,153,150,148,138,137,137,151,158,162,166,168,170,171,172,173,177,180,175,167,161,160,157,159,157,156,137,137,137,146,155,159,162,164,165,167,170,174,175,175,177,171,164,162,162,164,161,160,137,137,137,139,149,154,158,160,163,168,172,173,175,176,173,172,167,164,164,166,164,162,137,137,137,137,146,152,155,159,162,170,173,173,173,175,178,171,165,164,164,162,163,161,139,138,137,137,141,151,155,159,164,170,173,173,176,175,179,177,169,166,162,157,154,155,144,142,137,137,141,150,154,158,163,167,169,172,175,180,178,170,170,165,164,151,147,148,143,140,137,137,138,148,152,155,159,163,166,169,171,174,173,168,167,162,158,151,143,142,138,137,137,137,137,146,151,153,156,160,162,164,167,170,172,166,160,157,153,147,140,140,137,137,137,137,137,142,149,151,152,154,155,158,161,164,167,162,156,153,143,136,136,136,142,147,139,137,137,139,147,150,150,151,152,154,157,159,160,158,151,145,140,136,136,136,138,140,135,136,135,135,142,148,149,150,150,150,151,153,153,149,145,142,139,136,136,136,140,142,142,144,141,135,140,144,147,149,148,145,146,147,147,145,141,139,136,135,134,133,138,138,139,138,138,135,136,141,144,146,146,145,142,143,144,142,139,140,137,133,131,130,143,144,145,146,137,136,135,137,142,145,147,144,141,142,142,142,142,141,138,135,132,131,137,142,141,139,140,137,135,135,142,148,145,139,143,145,146,144,143,140,137,135,131,129,136,136,138,137,141,139,135,130,130,137,134,133,139,142,145,146,145,141,135,133,130,129,129,138,140,139,142,139,133,127,122,124,128,134,140,143,144,145,145,141,135,130,126,124,123,123,126,132,136,139,133,125,119,123,128,133,136,141,140,139,140,137,131,125,123,122,125,120,120,123,124,129,129,121,118,123,127,132,131,134,135,134,132,129,124,120,116,115,125,121,120,119,119,118,115,115,114,116,126,128,127,126,122,124,123,120,115,111,108,107,120,123,121,122,127,130,128,124,117,114,123,121,121,120,117,114,113,111,103,99,98,97,122,125,122,124,129,132,130,124,117,114,120,119,119,118,117,113,111,108,102,98,96,96],
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
