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
        texture=ImageTexture(url=['../../images/5/newport21-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[124,124,127,125,127,122,120,115,123,112,111,125,127,128,135,142,146,153,154,149,154,153,127,127,127,128,123,123,128,124,116,113,116,112,118,122,128,135,147,149,154,155,147,148,139,126,129,125,123,122,129,128,122,115,112,111,111,117,128,134,137,140,144,143,152,151,135,132,135,127,127,132,125,120,121,120,110,107,105,112,116,131,139,141,137,144,149,149,136,134,130,131,129,126,124,123,122,117,110,105,109,108,115,119,132,136,139,134,131,131,141,135,134,132,126,127,123,120,120,118,111,111,108,112,120,117,119,129,127,126,126,126,148,141,133,128,126,120,120,118,119,119,118,109,105,108,118,131,117,118,130,128,118,117,146,140,134,131,124,122,119,119,115,114,118,114,107,117,118,126,127,114,115,116,115,114,148,143,134,129,125,122,116,114,112,110,108,109,113,116,118,121,123,121,110,109,109,108,145,140,133,127,125,118,114,111,108,104,105,108,112,114,116,117,119,118,111,106,101,100,139,134,129,125,119,119,116,109,104,105,102,106,110,112,113,114,111,112,108,105,103,102,135,130,125,117,114,112,113,108,104,104,104,106,108,111,109,108,107,107,109,107,104,103,125,122,117,111,111,107,106,105,104,103,106,105,106,108,110,108,105,107,113,111,109,110,116,110,108,109,108,107,104,103,102,105,104,108,107,107,108,108,108,110,108,112,115,116,110,105,105,104,106,107,104,104,105,104,108,109,110,110,110,110,114,110,112,118,117,117,107,106,104,105,106,111,109,106,104,107,107,106,107,113,114,113,117,115,116,119,123,122,109,106,104,105,106,106,108,111,109,109,111,110,111,114,109,114,113,118,123,124,129,129,111,109,108,107,110,108,109,108,107,109,112,114,114,112,114,117,116,118,126,133,137,136,109,108,109,112,110,109,111,112,112,113,111,115,116,115,119,121,119,123,126,137,144,145,112,111,114,112,110,108,108,110,116,118,119,118,118,118,120,121,127,130,135,138,143,142,113,115,115,117,113,113,114,114,117,118,118,118,122,118,118,121,127,137,141,141,141,141,118,120,119,118,117,121,123,123,121,121,118,120,122,118,120,124,133,141,143,140,141,141,124,125,122,121,120,125,127,133,135,132,127,123,119,119,121,126,136,138,141,145,143,144,126,126,122,121,121,127,128,133,136,133,128,124,119,119,122,127,135,137,141,146,144,144],
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
