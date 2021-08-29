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
        texture=ImageTexture(url=['../../images/5/newport24-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[146,142,141,145,144,141,145,152,160,166,172,182,179,175,167,163,161,154,153,160,159,158,140,137,139,138,140,142,143,146,154,169,172,177,171,166,161,155,151,147,152,157,155,154,137,137,136,136,136,137,136,143,152,157,164,165,164,161,157,148,145,141,139,138,142,143,142,143,139,137,136,138,138,144,147,148,157,159,155,149,144,140,136,137,137,136,136,135,141,139,139,139,136,140,138,140,139,142,149,154,153,146,141,136,129,130,131,134,133,133,145,141,140,139,143,143,142,141,141,142,143,151,149,147,143,137,133,130,129,128,134,135,146,146,147,150,151,150,147,144,143,143,143,145,148,146,144,140,137,132,127,125,128,128,153,148,148,153,151,151,149,146,148,147,148,150,149,147,148,142,137,134,133,125,125,125,152,155,158,156,153,151,149,152,153,151,155,153,154,151,147,143,138,135,132,130,124,124,159,158,157,156,153,155,157,157,156,157,158,156,156,155,149,144,140,136,134,131,130,130,163,161,159,157,157,157,160,161,163,159,160,161,162,158,152,145,138,135,133,131,131,129,163,164,160,159,159,162,164,165,164,160,164,163,159,156,151,143,136,134,132,132,129,129,167,163,160,160,165,170,167,170,165,162,159,160,157,150,144,140,133,130,128,125,123,123,170,168,164,161,166,168,167,165,159,159,157,153,146,141,134,132,127,124,121,119,115,115,168,164,163,165,166,166,166,162,159,154,145,141,132,129,129,123,122,117,114,112,110,110,169,166,167,168,165,166,165,159,155,148,142,130,124,122,119,115,114,109,111,109,111,111,167,165,166,167,165,163,162,164,160,151,138,132,130,126,122,117,113,113,111,109,112,112,170,167,166,165,162,169,166,167,165,161,153,148,144,137,130,122,117,115,112,111,109,111,163,167,168,171,172,168,168,169,170,167,164,161,155,148,137,130,121,120,116,110,110,111,168,168,169,172,169,168,176,171,170,169,170,167,162,154,147,139,130,120,117,111,112,112,173,171,170,166,165,170,172,169,170,172,170,166,163,157,149,143,136,123,116,113,112,112,174,170,167,167,165,164,162,166,165,166,164,158,160,155,153,148,139,130,124,117,114,113,171,169,168,166,163,162,159,163,164,161,158,158,158,160,160,159,150,137,128,124,117,116,170,168,168,165,163,161,159,163,164,161,157,157,157,162,161,161,151,138,129,125,116,116],
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
