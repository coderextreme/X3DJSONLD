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
        texture=ImageTexture(url=['../../images/5/newport23-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[132,132,135,135,135,136,137,136,136,138,140,143,145,147,149,151,155,156,159,163,169,170,132,132,132,140,143,142,143,141,141,140,143,147,149,149,152,157,159,161,160,168,175,176,132,132,140,146,144,143,143,143,142,141,144,152,151,152,155,158,161,162,166,176,182,182,132,132,140,145,146,146,149,146,143,144,144,150,157,159,158,158,161,164,171,179,185,186,139,132,132,135,146,150,151,151,151,150,148,150,155,158,158,161,164,168,176,181,184,184,138,139,137,132,133,153,153,157,154,152,157,157,156,156,159,161,166,173,177,178,181,182,143,147,144,143,137,145,145,151,155,156,158,155,156,156,159,165,170,174,176,178,177,178,155,153,148,148,149,145,144,147,153,153,151,152,153,157,159,166,171,177,176,177,173,173,164,162,156,154,152,147,148,155,153,151,150,152,156,155,159,162,166,167,169,167,168,169,167,167,164,158,157,156,154,149,150,150,151,152,155,158,158,156,157,159,161,161,160,160,171,168,167,159,151,151,154,151,156,155,155,154,155,153,153,153,152,153,155,155,156,156,167,161,157,151,146,149,154,149,150,152,156,156,159,161,156,152,150,150,150,151,152,153,156,149,144,143,145,142,147,151,149,150,152,153,156,158,159,154,151,149,152,153,157,158,148,142,138,136,137,137,139,142,143,146,150,153,155,160,158,154,153,152,153,162,167,167,137,134,133,134,135,132,131,138,146,153,156,155,154,154,152,155,151,152,162,169,174,175,131,132,130,130,130,136,133,139,145,152,156,159,158,156,154,155,154,159,163,168,172,172,133,132,134,133,133,133,137,138,148,154,156,155,156,157,158,158,162,167,168,170,176,176,133,134,134,134,137,137,136,142,147,149,149,155,160,161,158,159,162,166,169,171,170,170,132,136,138,139,138,138,138,139,141,146,149,152,154,154,157,158,163,168,172,170,170,170,132,134,137,140,140,141,141,140,140,143,150,152,156,157,157,159,162,164,162,165,165,164,134,133,134,134,137,135,138,141,139,143,150,152,154,153,156,155,157,159,160,158,160,160,137,133,134,134,133,131,134,138,142,145,149,148,151,151,150,149,150,152,158,154,151,151,137,137,134,138,135,136,136,139,139,144,141,142,143,143,148,143,142,143,148,154,150,149,137,137,134,139,136,136,137,138,139,143,140,140,142,142,147,142,141,142,147,151,147,146],
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
