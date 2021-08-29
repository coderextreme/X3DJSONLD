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
        texture=ImageTexture(url=['../../images/5/newport23-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[125,131,131,134,137,140,138,138,138,141,140,142,141,141,138,138,140,139,137,138,132,132,122,123,137,140,140,142,146,145,146,142,139,135,135,135,144,142,143,141,137,132,132,132,121,122,123,138,143,147,150,148,144,143,141,136,141,144,143,138,138,143,139,132,132,132,127,122,122,131,142,149,149,149,147,144,144,143,145,147,147,145,139,140,136,132,132,132,122,122,122,130,139,148,153,151,150,146,144,148,148,149,149,148,141,136,138,139,139,139,122,125,133,131,137,147,154,153,153,150,151,153,153,151,150,148,144,141,139,138,137,138,122,124,134,138,142,148,152,160,159,155,155,158,158,155,152,152,152,147,146,145,143,143,127,122,133,141,147,149,152,159,164,165,164,162,164,167,159,157,153,155,160,158,156,155,130,132,134,139,145,151,158,159,165,171,175,173,174,173,171,170,169,170,167,164,164,164,129,133,134,141,149,154,160,164,166,178,175,172,172,176,179,178,174,173,170,165,167,167,136,137,137,140,150,158,162,162,166,166,174,171,167,171,175,173,176,172,170,173,172,171,141,142,141,145,149,153,157,156,163,166,169,168,166,167,167,167,170,170,167,167,167,167,144,144,144,145,145,148,152,157,160,164,162,162,159,157,158,159,162,162,162,160,157,156,144,145,143,143,141,146,155,162,161,160,156,152,151,151,149,151,152,152,154,150,148,148,148,143,140,141,145,150,150,157,161,155,151,152,151,146,144,144,141,145,142,144,138,137,149,144,140,144,146,144,145,149,148,151,150,152,147,145,138,140,138,136,136,135,131,131,145,146,144,141,140,142,143,146,147,143,147,146,141,135,132,131,132,132,133,132,133,133,142,143,140,137,136,138,139,142,143,142,140,137,133,129,128,128,130,129,131,133,132,133,140,141,142,136,134,133,136,139,140,137,130,127,127,126,128,130,131,131,131,131,132,132,139,138,136,134,132,133,139,136,132,130,129,128,127,130,131,131,131,131,132,131,132,132,139,136,135,135,133,132,136,133,132,133,133,134,132,130,131,134,136,136,137,136,135,134,133,133,134,134,141,141,134,131,129,132,134,136,140,136,135,136,138,137,136,139,138,137,130,131,130,131,135,138,136,134,134,135,134,136,140,140,135,136,136,137,138,137,137,137,129,131,131,131,134,137,137,135,135,135,134,136,138,139,135,137,136,137,137,137,137,137],
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
