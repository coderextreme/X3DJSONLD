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
        texture=ImageTexture(url=['../../images/5/newport20-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[123,117,110,110,110,109,114,120,124,130,136,141,145,148,149,151,154,154,149,144,140,139,118,114,118,120,119,114,121,117,120,128,134,140,143,147,147,153,152,150,147,142,138,138,119,119,122,122,118,117,114,118,124,128,132,139,143,147,147,151,150,147,143,137,131,131,121,122,123,120,119,118,119,120,122,127,131,136,143,146,146,148,149,144,137,126,120,119,117,121,122,118,117,120,123,122,123,127,131,135,138,140,140,143,142,139,134,129,121,119,118,122,122,118,120,123,120,122,125,127,130,132,134,136,142,142,139,134,129,128,117,116,119,119,119,120,120,120,120,121,127,126,127,131,131,134,137,136,133,130,127,122,119,119,112,118,118,115,117,120,122,124,125,128,128,125,125,126,130,131,133,131,130,121,121,119,109,114,114,115,117,116,120,124,124,124,126,125,123,125,125,127,127,127,122,121,113,111,107,108,111,116,121,118,120,123,123,123,117,118,123,123,124,124,124,123,115,108,107,107,101,107,112,117,118,121,121,120,121,119,115,112,119,124,127,125,124,120,113,107,100,99,103,106,113,118,117,116,115,115,115,113,118,117,112,119,128,125,121,114,110,101,99,99,105,110,113,111,114,113,113,113,112,112,117,117,111,117,121,122,120,120,115,104,95,94,106,109,107,111,109,111,114,116,120,118,111,111,111,112,114,119,123,124,116,104,99,98,101,104,108,110,112,117,120,121,119,116,113,112,113,114,115,117,120,120,113,106,102,102,98,103,109,114,116,122,122,124,122,118,115,115,118,116,117,119,116,110,109,108,103,103,106,114,116,118,119,119,122,124,121,118,116,117,118,117,117,117,118,112,113,108,103,103,104,105,109,117,119,122,123,122,120,115,115,116,116,117,117,116,119,118,116,112,104,103,104,102,105,106,110,117,116,114,115,116,121,120,116,117,116,118,117,120,119,115,108,107,98,104,111,109,108,107,110,111,115,119,120,115,121,120,118,118,123,127,122,115,109,106,93,96,102,111,114,114,112,113,116,118,115,115,120,121,124,124,120,122,116,115,109,106,89,97,103,115,119,118,110,113,114,114,115,114,119,122,123,122,118,115,112,108,107,106,90,98,108,111,119,117,116,119,118,118,115,112,113,116,118,117,111,105,107,106,106,107,90,99,109,112,119,117,115,119,118,119,115,111,112,115,117,117,111,104,106,105,106,107],
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
