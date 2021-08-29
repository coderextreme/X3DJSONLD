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
        texture=ImageTexture(url=['../../images/5/newport21-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[141,143,150,151,145,145,140,134,128,118,109,105,106,101,104,118,121,120,120,126,126,127,131,135,142,153,155,142,139,140,130,124,112,108,106,102,113,110,120,120,127,124,127,128,131,140,141,147,144,147,147,141,133,123,110,108,106,104,113,108,115,121,128,125,127,128,129,134,140,146,148,146,146,137,133,120,112,106,107,112,109,114,118,121,123,122,121,123,131,134,139,148,149,146,145,143,127,115,110,109,108,109,116,120,116,119,117,119,123,123,130,132,144,150,149,148,145,138,128,120,116,110,110,114,116,115,114,114,115,119,123,123,131,140,143,143,147,149,144,140,135,125,117,117,112,113,115,114,114,116,118,119,120,119,131,137,142,150,148,150,143,140,133,129,123,117,117,114,116,114,118,114,116,118,121,121,134,141,145,145,146,144,144,140,137,133,127,122,120,115,115,114,115,115,118,118,120,120,135,139,144,146,146,147,150,143,139,133,129,125,119,117,116,114,112,115,117,121,124,125,133,140,143,147,150,151,152,149,143,137,131,126,118,114,113,114,117,119,121,124,128,129,133,138,145,149,150,153,155,152,146,139,132,124,118,116,117,120,122,126,125,129,135,137,132,139,146,149,153,154,158,155,151,145,138,126,120,121,123,124,126,131,135,140,145,145,134,141,147,151,158,161,157,157,156,148,140,131,129,129,132,131,133,140,144,150,149,148,136,145,151,156,160,162,164,163,159,152,142,139,138,141,140,141,143,145,151,153,151,149,136,146,153,161,165,168,166,165,159,153,149,148,145,146,148,150,150,152,156,158,153,153,139,149,157,161,167,168,168,166,158,151,152,153,153,150,156,154,157,161,159,160,159,159,150,150,160,166,168,170,170,162,155,155,152,153,155,156,156,160,164,165,166,165,161,162,155,154,159,166,171,172,169,160,154,151,153,157,159,157,159,164,167,170,172,168,168,168,158,157,157,164,172,168,161,156,157,156,156,159,161,160,163,169,172,175,172,173,173,172,162,154,152,160,161,161,159,158,160,161,159,159,160,165,166,173,178,177,172,173,170,168,161,156,150,152,159,155,156,158,161,161,161,161,161,169,178,178,178,174,172,171,168,167,163,159,155,150,154,156,156,154,156,156,159,161,176,179,182,183,180,174,171,167,163,161,162,158,157,150,154,156,157,154,156,156,158,162,178,180,181,184,180,174,170,166,161,160],
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
