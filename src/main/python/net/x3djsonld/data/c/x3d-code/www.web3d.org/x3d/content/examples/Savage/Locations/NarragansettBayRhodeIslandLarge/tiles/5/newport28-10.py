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
        texture=ImageTexture(url=['../../images/5/newport28-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[139,129,123,112,107,102,100,93,93,109,124,137,143,149,148,151,152,155,155,148,149,147,130,126,120,113,106,103,104,105,109,112,126,140,140,147,148,153,155,153,150,148,148,146,120,117,116,115,108,103,104,114,123,118,121,131,141,148,152,155,156,152,149,148,144,143,112,110,111,107,105,107,108,118,123,122,128,134,144,151,152,154,151,151,152,145,144,142,116,111,100,107,101,102,106,119,123,126,127,134,147,153,160,156,151,146,141,140,140,140,102,100,102,110,103,103,108,113,118,122,127,139,145,150,154,152,148,140,138,137,140,138,101,100,100,102,102,108,109,117,118,122,128,131,138,144,146,148,145,139,139,140,141,141,103,105,99,101,100,102,108,117,124,128,130,132,141,142,144,144,143,140,140,143,144,143,102,101,98,99,97,103,111,118,121,131,133,140,145,144,150,145,146,144,145,145,145,146,104,105,101,101,97,102,109,118,128,130,140,143,145,150,152,150,149,150,148,146,149,148,105,101,101,102,105,106,112,120,126,136,142,148,152,152,150,154,153,157,151,148,147,147,110,105,107,111,105,107,115,122,127,136,141,151,152,153,156,155,156,157,154,153,150,150,109,122,118,123,115,110,118,122,130,137,145,148,155,154,158,162,160,157,154,154,151,152,113,113,120,120,119,113,121,129,135,145,146,152,153,160,163,162,161,155,155,153,150,151,117,117,114,116,118,115,124,126,140,147,151,155,160,163,166,164,159,155,151,145,140,140,117,113,109,119,118,120,120,127,142,148,153,156,162,164,163,163,160,156,150,143,140,139,120,114,119,117,119,123,126,134,141,147,152,158,163,165,166,164,159,157,148,139,136,137,128,124,119,120,119,127,132,137,141,149,155,160,166,165,164,162,158,150,141,138,135,135,133,129,127,122,132,130,132,137,147,149,156,164,166,166,163,156,150,142,145,139,131,130,140,136,131,135,138,131,134,139,145,151,159,163,166,162,158,153,144,142,140,137,132,130,145,140,137,139,131,131,132,138,140,152,160,166,162,161,153,149,151,146,137,132,131,129,146,138,137,137,134,130,131,135,140,151,157,158,157,153,150,148,147,140,135,131,126,123,144,135,130,126,129,130,132,135,136,143,146,150,151,151,152,147,144,139,134,129,121,119,143,134,128,124,129,130,131,135,135,144,145,149,152,149,151,146,143,139,134,129,119,118],
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
