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
        texture=ImageTexture(url=['../../images/5/newport23-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[111,111,110,114,116,119,120,122,128,130,129,127,125,125,126,127,126,126,128,130,129,128,111,111,109,113,117,123,123,120,125,128,126,128,127,122,122,124,124,126,128,128,128,128,109,110,111,114,115,117,119,119,121,121,120,121,122,123,121,123,128,129,127,128,125,124,109,112,116,113,111,112,117,120,119,120,122,121,119,119,122,123,127,131,127,127,124,124,108,114,118,116,115,115,114,115,115,118,118,117,118,118,119,120,124,125,123,122,121,121,113,113,113,118,119,119,119,117,114,111,114,114,114,116,117,116,117,119,118,116,118,119,113,116,119,121,122,123,128,125,118,112,112,114,112,112,113,115,113,115,116,116,117,117,122,122,124,126,131,131,130,128,124,119,115,113,111,112,110,111,113,113,114,116,116,116,127,124,127,135,142,142,135,129,123,119,118,114,109,109,111,110,110,113,113,114,113,113,130,130,134,140,143,146,142,135,131,125,118,116,116,111,108,107,108,111,112,112,111,111,136,136,138,142,144,145,144,143,138,132,126,120,115,115,112,109,110,109,110,111,111,110,136,138,140,146,146,144,144,146,144,141,134,129,123,114,109,110,109,110,113,111,109,109,128,133,138,142,142,141,141,143,143,141,142,139,133,125,116,111,110,110,109,108,107,107,121,127,135,137,136,136,136,139,140,140,142,140,140,130,120,113,109,107,106,109,107,108,117,123,123,128,135,140,137,137,141,140,141,137,132,124,116,109,108,107,108,105,106,106,111,119,124,130,134,138,141,144,142,138,135,129,123,116,110,108,107,103,104,106,108,108,111,119,125,130,133,137,138,143,140,135,129,122,113,107,104,104,104,107,103,101,104,105,115,121,124,126,130,130,135,137,136,131,122,114,108,107,105,105,103,103,103,107,108,109,117,121,122,123,128,132,130,129,129,123,116,113,109,108,109,106,104,102,106,111,113,113,117,118,120,120,122,126,128,126,121,114,113,115,114,114,116,110,109,106,106,110,112,113,116,117,116,118,119,121,122,119,115,115,116,113,114,115,113,112,107,108,108,109,113,114,117,115,115,116,116,115,115,112,113,119,119,114,110,110,109,108,106,104,107,112,115,116,117,114,113,114,113,111,112,114,115,113,113,108,107,108,109,111,110,107,107,112,119,120,118,113,112,113,113,110,112,113,115,112,113,108,107,108,108,112,111,108,107,111,119,120],
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
