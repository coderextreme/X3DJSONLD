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
        texture=ImageTexture(url=['../../images/5/newport26-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[163,162,161,162,154,143,136,129,124,121,118,120,118,106,103,104,106,107,109,118,126,127,160,163,161,160,154,151,148,143,136,130,126,131,127,112,101,103,107,115,120,118,117,117,153,156,158,157,155,158,158,157,146,136,132,133,125,112,105,105,110,118,121,122,123,122,147,148,149,151,156,161,161,157,148,138,129,124,117,108,101,103,112,121,125,127,126,126,140,140,145,150,154,159,156,148,138,129,123,115,110,105,104,105,113,123,127,131,130,130,134,135,140,148,153,149,143,135,131,129,122,118,112,110,110,106,114,125,132,135,134,135,133,132,134,139,139,135,134,131,135,139,133,127,119,116,114,114,113,124,137,143,143,142,132,133,133,132,133,133,130,134,134,136,138,130,123,115,118,121,114,122,140,147,154,155,132,133,132,133,133,133,133,127,128,126,128,125,120,117,117,118,120,128,146,155,159,159,128,129,131,130,128,127,126,128,127,127,127,126,122,119,113,111,117,131,144,151,155,157,128,126,126,128,125,123,122,124,128,124,121,121,119,117,111,112,113,125,139,147,156,157,126,126,125,123,124,123,121,121,122,121,118,115,113,113,111,111,112,120,133,147,154,155,124,125,126,126,123,122,121,118,117,118,115,113,110,108,112,113,113,115,128,145,150,151,123,123,125,125,122,120,120,120,117,114,112,110,109,107,110,114,114,115,120,139,149,150,122,122,124,122,121,122,125,120,116,112,106,107,107,108,113,109,109,112,118,128,144,145,121,122,123,123,125,122,120,118,115,107,106,106,105,105,108,106,107,114,114,116,126,128,120,120,121,122,123,123,117,115,109,108,108,106,105,103,103,105,109,110,107,110,113,113,123,121,119,120,120,115,112,112,110,112,110,109,106,102,103,104,105,105,106,107,109,109,118,117,116,116,116,118,118,114,112,114,115,113,111,104,103,103,103,104,104,105,109,111,116,118,122,121,121,120,118,115,115,117,118,116,113,108,102,102,102,103,102,104,109,110,116,119,128,126,123,120,117,116,118,118,119,118,117,112,106,106,102,101,101,101,104,104,119,121,127,127,125,120,118,117,118,119,119,119,118,115,115,112,108,102,101,101,102,103,133,126,127,126,124,120,119,118,119,120,119,119,118,118,118,115,112,109,106,102,101,102,136,129,128,127,124,120,119,118,119,120,120,119,119,118,118,115,112,110,106,102,101,102],
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
