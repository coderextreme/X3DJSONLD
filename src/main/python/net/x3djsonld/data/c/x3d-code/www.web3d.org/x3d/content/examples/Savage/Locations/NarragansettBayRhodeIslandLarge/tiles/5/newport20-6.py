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
        texture=ImageTexture(url=['../../images/5/newport20-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[146,151,156,164,174,176,178,180,178,174,168,172,168,167,162,160,158,155,144,140,130,129,139,142,156,160,167,177,178,178,174,175,168,167,171,173,174,166,164,154,146,136,133,131,134,142,146,156,168,172,174,176,180,172,166,165,175,172,173,170,166,159,148,132,128,126,133,140,146,151,162,167,171,168,174,168,171,172,166,171,172,173,165,160,148,140,123,121,132,139,144,148,155,159,163,164,166,167,170,165,168,173,171,177,170,160,152,142,129,128,134,138,140,147,150,157,158,162,159,164,165,161,166,160,168,171,166,161,156,145,138,134,129,137,137,140,146,154,157,163,159,164,161,165,162,165,163,167,162,161,153,146,141,139,130,138,136,142,148,152,156,154,161,163,162,160,166,160,164,167,169,159,154,146,141,141,133,132,133,142,147,152,154,155,155,163,160,165,164,161,164,160,163,161,157,149,146,144,134,131,129,137,141,142,147,150,157,159,157,165,163,160,163,167,165,164,156,151,150,149,129,131,128,133,134,138,141,152,154,154,158,156,158,167,163,159,158,161,157,158,152,151,129,130,132,128,129,133,138,142,150,150,154,156,155,158,160,158,156,156,160,154,158,159,128,127,134,122,124,129,134,142,146,150,150,155,155,154,155,154,153,153,154,156,156,157,125,124,125,125,123,125,134,143,143,147,148,150,153,153,150,149,150,151,151,159,154,154,128,126,124,124,121,125,126,137,142,144,146,151,151,150,149,149,149,152,153,155,157,157,130,129,129,126,118,117,122,128,134,140,148,150,152,152,149,148,149,150,155,157,158,158,129,121,122,119,117,114,122,124,130,139,145,149,149,151,147,150,151,154,159,161,157,157,126,123,118,121,118,113,118,123,130,138,147,149,150,147,139,145,153,159,161,159,157,155,126,124,118,119,119,121,113,120,132,135,139,141,141,142,145,154,150,155,161,158,159,158,130,124,122,120,117,116,115,114,123,131,138,134,140,141,143,148,152,159,165,169,158,159,128,125,121,119,116,116,118,111,118,129,138,131,133,137,142,146,152,163,165,166,161,162,128,123,127,127,117,123,113,121,113,115,127,132,132,136,138,140,149,161,165,167,164,160,123,123,127,127,128,121,118,116,123,110,113,128,128,129,135,140,147,154,155,151,153,151,124,124,127,125,127,122,120,115,123,112,111,125,127,128,135,142,146,153,154,149,154,153],
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
