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
        texture=ImageTexture(url=['../../images/5/newport28-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[159,154,153,158,150,142,134,128,136,134,141,146,144,133,136,140,146,146,137,121,122,122,153,149,150,153,151,143,134,125,131,127,133,137,135,133,132,148,152,141,136,129,126,127,140,142,144,143,142,140,136,126,120,124,128,127,126,132,135,139,141,139,133,127,124,126,134,132,131,129,129,130,129,123,118,124,124,122,119,121,128,132,134,133,130,129,122,123,133,132,131,129,127,125,123,117,115,122,120,115,113,112,114,117,118,117,115,116,118,120,128,126,127,129,132,129,123,117,115,113,113,113,115,119,113,113,110,109,109,107,116,117,132,128,126,125,125,124,122,121,119,116,114,114,117,115,113,113,112,116,111,104,108,109,131,127,127,127,128,129,128,127,127,125,120,117,116,119,116,117,114,113,114,115,104,104,130,128,130,133,133,132,132,133,136,135,133,129,127,125,120,122,112,108,104,107,105,104,132,130,131,133,137,140,143,143,144,144,139,133,131,128,121,116,117,106,104,103,103,103,135,135,134,135,139,143,142,143,146,146,145,138,129,118,115,109,104,103,103,103,103,103,144,148,147,145,142,140,136,133,133,133,135,128,114,105,103,103,103,103,104,103,103,103,147,149,156,159,155,148,145,139,129,121,110,104,103,103,103,103,103,103,103,103,106,109,149,149,151,152,150,148,145,139,128,114,104,103,103,103,103,103,104,104,104,106,116,118,145,144,144,144,143,140,138,131,115,105,103,103,104,103,103,106,113,116,114,115,116,117,146,144,141,138,136,132,127,123,111,104,103,103,104,103,105,110,116,118,124,128,129,128,149,147,143,139,134,126,120,116,108,104,103,103,104,104,109,115,119,123,130,137,141,140,154,152,150,145,141,133,123,113,110,103,103,103,103,109,119,122,128,132,137,144,149,149,154,154,150,144,136,133,127,112,103,103,103,103,104,113,125,132,133,136,143,151,152,152,152,149,147,144,138,124,113,106,103,103,104,105,107,120,132,136,139,139,145,152,154,154,145,144,143,140,136,123,111,105,105,103,103,104,111,123,133,138,143,145,150,153,156,156,138,136,135,134,129,116,108,103,103,104,106,111,117,124,134,141,147,151,155,158,160,161,124,121,117,114,108,107,107,103,104,106,108,115,122,131,136,144,150,155,161,165,167,167,124,121,116,112,108,108,107,103,104,105,108,115,123,133,137,144,150,155,161,166,168,168],
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
