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
        texture=ImageTexture(url=['../../images/5/newport31-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[186,185,182,178,174,168,161,158,154,145,136,129,125,118,115,114,114,115,114,114,118,119,183,180,177,173,168,162,157,152,145,135,126,123,125,121,120,121,123,122,118,114,124,127,179,176,171,167,163,157,150,145,138,128,128,129,127,126,126,127,127,125,124,125,126,126,177,174,168,162,155,150,144,137,131,125,128,128,130,129,128,129,132,130,136,139,143,142,173,168,160,152,146,140,141,131,128,129,131,130,134,135,133,131,132,137,143,147,144,142,170,165,159,149,137,135,135,129,130,130,132,131,137,136,133,133,134,141,145,147,143,142,166,160,153,146,137,131,129,133,135,137,138,138,139,138,137,137,142,144,147,146,142,142,157,152,145,138,132,133,133,133,135,135,139,140,139,140,141,144,145,146,146,145,144,144,151,147,141,133,137,143,144,146,139,137,136,140,141,142,144,146,145,143,143,143,145,146,144,140,136,140,146,149,151,151,148,143,139,141,142,144,145,144,142,145,141,136,135,135,143,140,143,143,145,149,153,153,150,145,141,141,143,144,144,143,142,142,141,140,135,133,149,149,152,154,151,151,153,152,150,145,142,143,143,144,144,142,139,138,137,134,128,127,153,156,158,158,156,154,153,152,150,147,145,144,144,145,143,139,135,131,130,125,119,119,157,157,160,160,158,154,151,149,148,146,145,145,145,145,142,140,136,130,125,121,126,127,160,159,162,161,157,152,150,149,147,146,145,144,144,142,141,139,133,127,127,133,139,139,163,162,162,161,157,153,150,148,146,145,144,144,143,141,138,134,130,130,136,143,148,145,165,164,163,159,156,151,149,148,148,146,144,144,150,149,146,140,134,135,144,145,144,143,166,165,162,158,153,149,148,151,149,148,149,154,156,153,149,141,142,143,151,153,154,154,166,163,159,154,150,149,150,151,149,149,155,161,160,157,152,145,148,152,155,158,156,156,164,162,156,151,151,148,149,148,150,154,161,162,166,160,152,151,155,156,157,156,155,154,167,160,157,150,149,150,154,154,158,160,163,164,161,161,157,157,157,157,159,158,156,156,164,160,157,154,154,155,155,160,164,166,165,164,161,159,159,160,161,162,160,160,162,161,166,163,160,158,159,162,164,170,168,169,167,167,162,159,163,165,164,164,164,162,163,163,167,164,160,157,161,163,165,170,170,170,167,167,162,159,163,164,166,165,166,161,161,162],
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
