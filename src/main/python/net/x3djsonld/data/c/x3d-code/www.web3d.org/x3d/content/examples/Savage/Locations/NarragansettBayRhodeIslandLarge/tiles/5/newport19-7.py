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
        texture=ImageTexture(url=['../../images/5/newport19-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[129,139,150,161,171,166,163,163,163,158,152,148,145,139,132,131,125,120,117,117,115,115,127,134,150,165,173,169,170,170,169,160,156,153,148,140,137,132,132,130,124,117,115,115,121,136,148,160,174,178,179,175,172,163,158,157,150,144,139,137,137,136,126,118,114,113,116,132,146,164,174,177,178,176,167,164,162,157,151,145,141,139,136,131,126,118,114,114,111,131,148,159,165,175,173,173,165,163,159,157,150,147,143,139,138,131,124,117,113,113,117,130,145,154,163,166,169,173,162,160,161,159,156,153,148,143,137,129,122,121,115,114,117,128,141,150,155,162,163,165,167,160,159,162,163,161,157,152,144,134,128,124,121,120,111,122,133,141,157,163,163,165,165,165,164,168,171,169,166,163,157,149,140,132,124,123,104,115,125,136,147,158,161,166,167,172,170,173,172,173,173,171,167,165,154,138,129,127,105,111,115,129,139,149,158,166,173,175,173,172,171,176,176,174,172,167,159,147,134,132,114,111,112,121,134,143,155,164,176,177,173,172,175,173,172,172,165,163,157,147,134,133,117,112,120,123,125,135,148,159,171,176,174,169,172,173,172,172,169,166,160,154,143,141,121,121,123,119,121,126,139,151,158,166,173,168,167,165,166,166,166,164,160,151,139,137,126,125,121,119,123,127,129,140,147,153,164,166,161,158,157,157,157,158,157,149,142,141,132,131,130,125,115,114,112,121,137,148,151,162,156,153,149,148,147,149,147,143,136,136,136,136,134,129,122,117,110,111,119,133,145,147,147,147,145,138,140,138,136,133,127,126,144,146,137,133,127,116,107,110,108,114,123,132,136,135,134,133,132,131,129,126,120,120,150,149,144,137,131,120,116,113,112,108,106,109,113,121,126,127,126,127,123,118,120,120,149,151,148,142,134,118,113,111,115,114,108,108,108,113,119,120,119,117,117,119,120,120,142,139,140,133,131,123,115,109,107,106,104,104,104,110,113,115,115,114,114,123,119,119,138,130,125,115,112,118,117,110,111,109,111,102,109,109,114,113,114,115,117,121,122,122,133,122,117,115,107,107,115,113,107,109,108,108,109,115,110,114,118,119,123,121,124,124,129,122,118,116,109,111,107,111,107,102,106,114,108,108,105,112,115,119,127,125,124,123,129,123,118,114,109,110,108,111,106,104,104,113,107,107,105,112,116,119,128,125,124,123],
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
