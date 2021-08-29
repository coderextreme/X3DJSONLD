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
        texture=ImageTexture(url=['../../images/5/newport31-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[138,130,119,111,108,103,99,98,102,104,107,107,109,119,120,118,114,115,111,112,119,120,127,125,112,108,107,102,99,100,95,102,108,116,119,124,121,122,120,117,116,119,123,124,123,119,113,108,104,103,104,104,105,112,115,117,118,121,122,126,120,125,120,123,127,127,125,117,118,116,108,102,106,113,118,117,116,119,118,118,124,119,126,124,125,128,126,126,125,123,129,121,106,103,107,114,124,126,126,121,117,117,115,120,121,125,131,130,126,125,124,130,122,110,106,104,110,118,128,128,129,122,117,115,117,120,125,127,128,126,126,126,126,124,118,112,104,103,106,112,119,125,127,122,121,118,117,122,125,126,128,127,125,124,128,120,113,104,102,102,107,109,113,119,125,126,125,121,117,119,123,127,124,124,120,120,122,115,106,103,102,103,105,108,116,119,124,124,126,125,122,124,122,123,126,124,124,123,118,107,100,101,106,107,111,116,117,120,121,124,127,129,136,133,130,127,128,125,121,120,105,100,101,102,109,114,118,122,119,122,127,127,129,136,141,140,139,133,128,122,121,121,100,99,99,102,112,118,123,124,126,125,126,135,138,142,147,145,137,133,126,127,120,120,103,103,102,107,113,118,123,125,126,130,135,137,144,146,145,142,138,133,129,128,126,125,104,106,107,113,115,119,120,121,128,134,137,143,150,150,143,147,143,136,129,124,122,121,108,114,116,115,113,117,122,127,132,134,144,143,149,148,143,144,146,138,132,122,122,121,111,115,118,121,120,121,125,130,134,142,140,146,150,148,145,141,134,130,126,128,125,127,111,116,120,124,127,125,128,137,143,147,150,139,141,143,143,139,135,132,133,123,125,123,116,120,121,125,130,132,139,143,145,148,149,143,142,143,141,137,134,130,127,123,123,123,121,123,125,134,136,140,143,148,150,150,148,144,140,138,142,142,135,129,125,123,121,121,121,127,131,137,141,145,152,151,152,153,148,149,142,138,139,134,133,129,126,124,123,124,125,128,138,145,149,157,153,153,154,152,148,148,144,143,137,132,129,124,122,124,124,122,132,138,148,151,159,159,159,157,160,152,150,144,142,137,132,128,125,126,121,124,123,122,141,149,158,166,163,164,165,160,159,150,148,143,142,138,131,128,122,116,119,119,122,122,143,151,159,168,165,165,165,160,158,150,147,145,143,138,129,126,121,117,119,118,121,121],
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
