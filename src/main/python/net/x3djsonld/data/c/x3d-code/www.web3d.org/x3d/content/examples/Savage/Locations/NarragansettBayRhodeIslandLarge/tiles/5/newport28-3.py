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
        texture=ImageTexture(url=['../../images/5/newport28-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[147,148,150,156,162,169,169,170,172,170,170,169,168,175,180,180,177,174,169,165,160,159,147,147,148,150,157,163,166,170,168,162,161,162,163,167,173,173,173,171,166,161,154,153,147,147,148,149,152,159,164,163,160,157,159,158,158,160,163,164,165,160,154,145,141,140,155,154,152,152,155,159,161,156,154,151,151,149,152,152,154,155,153,146,142,136,135,134,159,158,158,158,157,160,156,156,152,148,146,146,144,143,142,141,139,139,137,134,133,133,159,158,160,158,156,155,153,151,147,146,147,145,141,142,141,139,139,137,135,132,129,128,150,154,158,157,157,154,151,147,143,140,139,137,135,136,138,138,137,133,132,132,132,132,152,157,157,157,156,151,146,144,139,137,137,137,137,136,136,137,135,137,139,137,132,131,151,157,159,157,156,147,138,137,135,135,137,139,137,137,139,140,141,141,139,135,131,130,151,154,156,151,151,143,135,134,135,136,136,136,137,140,147,148,147,149,148,141,132,132,151,151,148,144,140,136,135,139,136,136,136,136,137,140,149,153,150,148,148,143,136,135,152,150,145,142,138,135,136,137,136,136,137,138,138,139,145,150,152,148,147,146,144,144,147,143,140,138,135,136,138,138,138,138,140,142,144,142,141,144,150,149,148,147,147,147,143,143,142,137,135,138,140,141,142,142,145,149,151,149,149,147,144,149,152,152,150,149,140,139,138,136,136,139,141,144,147,148,149,152,152,151,151,151,149,149,148,148,145,145,139,138,137,136,138,143,147,150,152,154,154,155,157,159,158,158,157,154,152,149,147,146,142,138,136,137,143,147,151,157,162,164,162,161,160,160,162,163,161,157,155,152,150,149,143,137,139,141,144,148,156,162,168,169,166,163,162,163,163,167,163,159,154,153,154,154,141,138,138,142,146,154,163,168,172,172,167,163,163,162,170,168,162,156,151,152,154,154,138,138,140,146,150,159,164,168,170,169,164,166,172,171,165,167,156,151,149,150,152,152,138,138,140,146,152,157,161,164,164,162,164,168,172,174,169,162,156,149,144,144,145,145,138,138,139,147,150,152,153,155,156,155,157,160,164,166,166,160,158,147,145,140,137,138,139,139,140,143,149,151,151,151,151,152,151,150,154,153,150,148,144,137,132,129,124,124,139,139,140,142,149,151,151,151,151,152,152,150,152,151,148,147,142,134,129,127,124,124],
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
