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
        texture=ImageTexture(url=['../../images/5/newport30-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[125,123,120,119,118,118,117,118,120,128,133,137,141,143,140,139,144,147,144,134,133,132,124,125,123,118,117,117,119,123,122,125,129,134,140,141,141,148,151,149,144,136,135,134,126,128,124,119,119,122,126,128,129,135,134,134,137,139,146,153,153,150,142,136,137,136,128,130,125,121,123,126,134,139,135,137,144,142,142,141,149,157,157,150,141,139,135,134,130,131,126,122,127,133,137,141,142,143,147,152,148,147,151,158,159,153,142,133,132,132,132,130,123,121,130,137,141,145,149,152,153,153,152,149,155,162,160,153,140,136,140,140,128,125,124,126,132,137,141,146,151,153,155,155,154,156,159,161,158,154,147,147,149,149,126,126,127,128,132,136,140,145,149,151,153,155,156,155,157,159,161,156,153,154,151,148,128,129,128,130,133,137,142,147,153,161,164,164,163,159,157,159,161,164,163,163,152,150,129,131,130,132,134,139,144,150,166,176,180,179,172,164,160,163,161,164,167,161,149,147,129,131,134,133,136,140,145,155,172,183,185,182,177,168,165,169,165,170,171,164,149,148,131,134,136,137,136,138,141,155,172,185,187,183,177,169,168,168,164,165,166,163,148,148,132,135,136,139,139,139,143,157,171,182,184,181,176,170,167,164,163,159,155,151,141,139,135,139,139,141,141,139,145,159,170,178,180,178,174,168,165,160,158,155,151,150,148,146,140,145,144,143,142,141,144,154,169,176,177,175,173,165,163,162,162,158,153,150,150,150,148,150,145,142,141,141,142,147,166,173,174,173,170,164,164,168,168,161,153,151,154,155,157,160,149,142,141,142,142,146,161,170,171,170,168,164,166,172,172,169,158,154,155,156,166,164,162,145,141,144,143,145,156,167,169,169,168,166,166,171,173,168,159,162,158,159,171,168,158,145,143,144,144,145,151,162,166,167,166,166,166,171,171,167,163,162,167,169,168,165,152,144,144,145,148,150,153,158,162,162,165,170,170,175,172,171,169,163,165,165,163,159,145,145,145,146,149,151,151,152,152,158,165,170,172,179,178,177,175,167,167,167,155,149,147,148,147,145,149,149,148,150,151,156,161,166,171,179,182,182,176,169,168,168,152,153,153,152,149,145,149,147,147,151,153,158,161,164,169,175,180,179,174,173,176,177,152,154,154,152,150,145,148,147,147,151,153,158,161,164,168,174,180,179,173,173,177,178],
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
