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
        texture=ImageTexture(url=['../../images/5/newport29-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[157,155,152,154,151,151,158,156,149,147,155,160,162,166,169,166,164,160,156,151,148,147,155,154,160,156,154,151,158,158,152,151,154,163,165,168,167,166,166,159,155,153,153,151,154,159,164,161,162,157,155,158,157,157,157,160,167,169,166,164,163,161,155,154,153,152,159,160,164,165,166,165,154,147,153,155,155,161,164,166,162,162,160,159,154,152,152,152,166,164,165,168,169,167,160,148,147,152,155,154,160,162,160,161,157,159,157,155,148,147,171,169,167,166,164,161,152,148,147,149,149,150,154,159,161,157,157,156,155,150,149,148,173,171,168,163,160,158,155,152,145,141,144,151,154,156,159,158,157,158,156,153,153,152,174,170,167,162,157,155,153,153,149,145,140,146,149,154,156,158,158,159,161,160,156,156,175,171,167,163,160,157,154,149,145,143,144,140,147,151,159,160,163,160,165,164,160,159,176,173,169,164,161,158,155,149,143,140,142,142,144,149,156,161,163,162,162,166,161,160,176,173,170,167,163,158,152,144,141,140,140,142,145,150,153,158,162,164,162,159,151,150,175,172,170,166,162,158,151,142,140,139,140,142,145,148,152,155,162,164,160,158,153,151,172,170,166,161,157,150,143,137,136,137,138,141,144,148,150,153,156,159,158,157,153,151,171,168,163,157,152,144,139,136,136,137,138,139,141,144,149,152,155,158,155,149,149,149,169,167,161,154,147,140,138,136,137,139,139,140,141,142,145,151,155,153,151,149,145,145,167,163,157,149,142,139,138,138,139,139,140,141,142,141,143,147,150,153,147,147,143,143,164,160,153,145,140,139,139,139,140,139,139,140,141,142,143,143,145,145,148,141,135,133,159,153,146,141,139,139,139,140,139,138,138,138,138,139,142,143,143,138,135,134,134,133,153,149,143,141,139,139,139,139,137,137,136,135,136,138,136,139,134,136,132,134,126,125,146,143,141,141,141,140,139,138,136,136,134,132,133,135,138,134,133,134,128,122,117,117,143,140,138,137,138,139,139,139,136,134,132,131,131,130,130,128,129,122,120,120,122,123,139,137,136,135,134,133,133,133,133,131,129,128,128,126,125,123,121,115,114,116,116,116,138,137,137,135,134,134,132,130,127,127,127,127,126,124,120,116,113,111,113,115,117,117,138,137,136,135,134,134,132,130,127,127,127,126,126,124,119,114,111,110,113,116,118,118],
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
