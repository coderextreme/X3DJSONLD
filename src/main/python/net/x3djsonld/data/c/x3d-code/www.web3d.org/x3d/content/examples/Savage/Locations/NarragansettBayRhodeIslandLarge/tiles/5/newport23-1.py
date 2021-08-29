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
        texture=ImageTexture(url=['../../images/5/newport23-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[128,129,129,132,135,139,144,146,146,145,145,146,142,139,136,133,125,125,127,125,124,125,128,126,127,128,130,131,134,141,146,144,142,144,140,137,134,130,130,130,131,129,121,122,124,123,123,123,126,126,130,135,139,140,140,136,130,126,121,121,124,129,134,134,124,121,124,123,120,117,117,120,126,129,127,129,129,124,118,114,113,118,127,127,128,130,129,127,121,119,117,115,116,116,117,119,117,115,114,113,110,109,109,115,119,123,122,122,122,122,119,119,118,114,110,110,112,113,112,110,107,106,107,108,110,110,113,117,120,122,122,122,117,117,115,111,107,106,104,108,113,114,109,105,106,107,110,112,113,116,121,121,121,122,116,113,112,110,109,106,107,107,113,115,111,111,114,116,116,115,115,117,123,127,129,127,113,113,108,107,107,108,108,111,115,113,109,113,112,115,117,119,119,120,120,123,129,130,111,110,109,106,105,107,107,107,105,108,112,118,120,119,118,121,120,122,122,125,129,129,110,106,107,104,104,106,105,106,104,109,115,123,125,124,124,122,123,124,126,131,135,136,109,107,106,107,106,107,107,107,111,112,118,126,131,128,127,129,128,127,132,137,140,141,107,107,108,108,108,109,108,109,115,117,124,129,132,131,132,132,133,134,138,139,143,144,108,109,109,108,109,110,110,111,117,120,124,129,131,135,135,134,139,145,147,147,144,144,106,108,111,110,113,112,114,112,115,122,125,129,132,136,138,139,145,152,154,151,148,148,108,107,109,114,116,114,115,114,114,122,130,135,136,139,142,141,142,148,153,153,149,149,105,107,112,113,112,111,113,117,118,124,133,139,141,146,145,143,145,148,149,149,145,145,109,111,109,109,108,108,110,115,120,126,136,142,148,150,149,148,147,147,146,146,142,142,113,111,109,110,110,110,109,113,120,130,137,144,150,150,151,150,150,145,144,144,141,140,113,111,111,113,111,111,111,114,122,131,139,147,151,154,155,151,146,144,144,141,139,139,114,116,115,110,108,105,107,111,121,131,140,149,153,154,153,151,144,141,139,135,138,139,116,119,116,110,106,104,105,110,118,128,137,147,152,151,148,148,141,135,132,134,133,133,120,122,116,108,103,101,103,109,117,127,136,143,145,146,143,140,138,133,130,131,130,130,120,122,115,107,102,101,104,109,117,127,136,142,143,145,142,139,137,132,130,130,130,129],
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
