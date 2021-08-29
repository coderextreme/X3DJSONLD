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
        texture=ImageTexture(url=['../../images/5/newport25-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[85,84,81,85,90,94,100,106,109,107,105,109,112,122,130,130,127,124,120,122,124,123,89,86,83,85,91,97,105,115,114,110,108,113,118,128,134,132,131,130,125,128,127,127,97,93,90,88,89,99,114,119,119,116,114,116,121,129,134,135,135,136,132,134,132,132,102,97,94,92,92,100,115,120,121,118,116,117,126,133,137,138,140,138,140,142,138,138,104,100,97,97,99,102,113,117,120,120,120,123,126,134,139,142,142,145,148,145,142,141,107,106,104,104,106,105,113,119,124,123,122,128,130,138,143,145,148,151,151,148,147,146,109,113,110,108,109,107,112,115,118,121,124,127,133,140,145,148,152,154,155,152,151,150,111,116,115,115,112,110,111,114,118,122,121,124,133,142,147,153,157,158,157,153,150,150,110,118,119,120,117,114,112,114,118,121,121,121,131,142,149,157,159,158,155,151,147,146,112,118,121,122,121,118,114,114,116,118,119,121,131,143,150,156,156,155,152,148,142,141,111,114,119,123,125,123,119,114,115,117,120,121,127,139,146,153,153,151,149,144,140,140,111,115,118,125,127,127,122,116,116,120,123,124,126,134,143,150,151,149,147,143,139,138,111,116,120,130,129,127,121,117,119,123,125,126,131,136,142,146,148,147,144,140,137,137,114,118,121,124,128,125,119,121,123,127,129,127,127,130,138,142,146,146,141,139,136,135,116,119,123,127,127,125,125,125,127,130,129,128,126,125,129,131,137,139,137,136,135,134,116,121,123,124,126,127,127,126,130,129,127,126,121,119,123,124,126,129,129,127,123,122,114,119,120,124,128,129,129,124,126,124,120,118,113,118,119,119,120,120,119,118,114,113,111,114,118,123,127,127,126,125,122,120,115,113,109,110,120,112,111,111,110,109,106,106,113,113,116,121,123,126,126,130,129,118,113,109,107,106,111,107,106,104,103,103,101,101,115,116,116,117,119,118,122,122,118,113,109,108,107,105,105,105,106,105,102,101,100,99,115,115,114,115,114,114,113,112,111,110,109,109,108,106,104,103,108,103,102,101,100,100,113,115,114,113,111,110,110,111,111,109,109,108,107,106,107,104,103,103,102,101,99,99,112,117,116,112,109,109,113,115,112,111,110,109,108,107,106,104,103,103,103,103,100,100,112,117,116,112,109,109,113,115,112,111,109,109,108,108,106,104,103,103,103,104,99,99],
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
