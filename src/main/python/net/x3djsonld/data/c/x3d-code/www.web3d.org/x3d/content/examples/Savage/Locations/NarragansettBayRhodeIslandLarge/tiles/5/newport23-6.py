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
        texture=ImageTexture(url=['../../images/5/newport23-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[164,156,153,147,141,136,130,126,125,121,119,121,128,128,128,130,129,127,126,119,112,111,162,160,151,144,139,133,127,124,124,122,123,121,120,124,128,131,130,124,118,115,104,102,160,156,148,141,135,131,130,125,121,124,121,123,122,122,123,125,124,115,106,102,95,95,157,152,147,141,135,130,128,127,125,124,122,119,120,122,120,118,113,109,102,93,88,88,157,150,144,141,137,132,133,128,126,123,122,116,117,117,117,110,103,99,92,87,88,88,156,150,143,138,135,137,134,134,131,126,121,121,115,113,110,106,103,96,90,85,82,82,155,147,142,139,138,137,138,136,131,124,121,120,116,111,107,102,97,91,90,87,83,82,152,147,143,138,136,135,137,133,131,127,125,120,117,114,111,108,100,92,88,87,87,85,149,146,142,138,136,136,134,131,128,125,126,126,124,121,117,110,104,96,90,88,88,87,149,143,142,142,139,134,131,127,128,129,128,129,130,130,124,114,104,96,93,91,92,93,148,146,142,141,140,137,132,130,133,134,132,136,138,136,129,119,107,99,96,98,99,98,149,146,146,145,142,141,136,133,133,135,142,144,145,142,131,120,110,104,98,100,100,98,150,150,151,146,141,138,137,139,138,142,151,151,149,138,131,126,116,107,100,98,99,99,154,154,150,147,141,138,137,142,144,148,151,151,143,140,139,132,124,112,102,97,99,99,154,155,149,144,142,141,141,142,145,152,150,143,136,134,131,120,121,114,102,97,99,99,152,150,144,142,144,143,142,144,143,143,142,134,129,125,114,112,113,113,104,98,96,99,148,145,145,144,141,141,142,140,137,133,130,125,121,117,114,113,109,102,97,96,92,92,143,141,141,141,142,141,138,134,129,124,117,115,117,116,113,106,101,99,100,92,92,95,140,138,136,138,135,131,130,127,123,116,112,111,109,108,110,109,102,96,91,97,96,95,136,131,131,130,127,124,121,117,115,113,112,106,105,105,106,105,104,95,92,93,96,96,131,126,124,120,118,116,109,109,117,115,109,107,106,102,100,98,94,92,91,94,93,94,123,121,117,113,109,105,106,109,109,106,107,105,100,92,93,96,94,91,92,93,96,97,114,116,113,111,108,104,104,100,100,101,100,103,94,91,91,93,91,91,93,92,94,94,114,117,113,110,108,104,103,99,99,100,98,104,92,91,91,92,91,91,93,92,94,93],
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
