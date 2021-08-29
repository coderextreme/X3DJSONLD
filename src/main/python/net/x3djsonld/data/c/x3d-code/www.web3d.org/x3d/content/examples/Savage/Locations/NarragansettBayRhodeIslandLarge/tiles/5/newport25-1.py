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
        texture=ImageTexture(url=['../../images/5/newport25-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[132,129,128,123,121,122,117,113,114,115,113,119,130,140,147,151,150,149,150,149,151,152,130,128,123,124,122,117,118,121,123,118,118,125,133,141,149,150,151,154,151,150,150,149,130,129,127,126,122,121,125,127,124,125,129,133,137,145,151,151,154,153,153,151,149,149,132,129,129,130,125,124,127,126,128,131,137,138,138,144,150,154,152,152,153,153,153,153,131,125,124,121,126,122,119,123,125,128,135,137,136,139,144,148,149,151,154,158,158,158,121,120,120,120,123,121,116,121,127,129,132,132,135,137,140,146,147,152,157,160,163,163,128,124,121,121,124,123,119,118,122,123,123,128,128,133,136,143,147,151,156,160,165,166,133,128,126,126,129,125,125,124,120,121,120,120,125,128,133,139,148,152,156,161,165,165,137,134,132,129,131,133,129,128,127,126,124,122,122,124,131,137,144,151,157,162,162,162,142,137,136,134,130,132,138,136,132,130,129,131,125,122,130,137,143,149,157,160,163,163,143,137,132,135,138,142,146,141,135,134,133,129,130,126,129,133,138,144,151,155,159,160,150,142,137,139,141,140,142,141,139,134,132,129,126,125,126,130,132,139,145,151,156,157,156,153,148,143,142,140,136,135,133,131,129,123,123,124,125,126,130,135,142,146,152,153,168,167,159,149,144,142,139,136,135,131,126,125,126,126,126,129,132,135,139,146,151,153,173,166,157,152,148,143,140,140,138,132,130,129,127,128,127,133,136,136,139,145,150,150,163,159,155,151,150,146,141,138,135,132,133,134,129,129,127,134,137,140,140,145,146,146,158,154,151,147,144,142,140,137,133,133,133,132,135,135,133,133,137,139,140,140,142,142,153,148,146,144,141,143,143,137,133,131,132,137,140,137,135,131,133,135,136,138,138,138,151,149,148,148,146,143,138,135,136,136,138,139,139,136,135,133,131,131,133,134,135,136,152,149,150,147,143,143,137,133,137,142,142,143,140,138,135,132,129,129,132,133,133,133,156,154,155,154,147,138,136,139,141,144,148,145,142,139,136,132,129,129,132,131,132,133,168,162,155,155,150,140,140,144,144,148,147,145,145,138,134,130,130,129,129,131,131,131,170,171,161,157,155,147,147,147,147,148,146,143,140,138,133,131,130,129,131,132,130,130,170,172,162,158,155,148,148,147,148,147,146,142,139,138,132,131,131,129,131,132,131,131],
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
