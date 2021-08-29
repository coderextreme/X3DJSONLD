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
        texture=ImageTexture(url=['../../images/5/newport19-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[115,111,105,105,106,103,97,101,102,104,112,119,131,139,143,142,142,142,146,145,136,132,115,113,110,106,104,102,101,101,97,101,112,126,133,140,143,144,143,143,142,136,123,120,113,112,112,108,103,101,102,100,101,103,111,123,130,138,145,145,145,144,140,131,115,113,114,113,113,110,105,101,101,98,99,104,107,118,129,137,142,144,142,142,135,123,107,105,113,114,114,112,106,101,101,100,102,107,110,116,130,139,142,141,142,137,126,114,105,104,114,113,115,112,110,106,104,105,107,114,115,122,133,139,143,141,137,128,115,105,104,103,120,118,120,114,116,114,112,115,115,115,119,127,134,138,142,138,129,118,109,103,101,101,123,121,120,120,119,121,122,119,121,120,123,128,132,132,130,124,118,114,110,108,109,109,127,121,120,119,123,128,129,126,122,121,123,124,126,122,119,116,113,111,113,112,114,112,132,122,121,120,124,125,126,125,128,123,121,121,116,116,116,112,109,109,108,114,111,110,133,124,119,122,125,125,125,124,125,128,123,116,114,114,110,109,110,110,111,111,111,111,141,125,123,123,125,124,125,124,129,134,133,124,117,113,109,109,112,112,113,113,113,114,137,128,125,126,123,124,125,131,132,139,134,129,127,120,114,117,120,121,121,116,113,114,141,129,121,123,125,125,127,134,135,136,135,135,131,125,124,127,128,131,131,126,122,121,136,132,123,118,121,129,126,128,130,132,138,138,135,132,128,134,138,142,141,136,126,124,126,122,121,121,121,122,124,127,127,131,138,141,137,135,135,139,142,148,146,141,133,131,120,121,119,121,120,119,122,122,123,128,139,143,140,138,139,144,146,145,144,142,134,132,120,118,118,118,120,117,117,119,125,127,136,143,146,144,141,146,148,145,140,136,129,127,120,120,119,117,117,119,120,119,125,135,136,142,145,145,146,144,145,142,139,134,128,127,119,120,122,120,120,121,119,118,120,129,138,143,147,150,147,146,150,149,142,133,127,127,122,122,119,119,120,121,118,120,121,127,138,146,149,150,147,150,151,149,145,140,133,132,124,126,114,117,119,117,113,117,121,128,138,143,148,148,148,154,153,148,145,143,137,136,123,120,110,110,110,109,113,121,124,130,136,141,143,149,150,150,152,154,149,145,141,139,123,117,110,110,110,109,114,120,124,130,136,141,145,148,149,151,154,154,149,144,140,139],
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
