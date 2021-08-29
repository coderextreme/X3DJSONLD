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
        texture=ImageTexture(url=['../../images/5/newport27-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[136,129,128,127,124,120,119,118,119,120,120,119,119,118,118,115,112,110,106,102,101,102,148,143,140,132,125,121,121,121,121,121,120,120,120,119,118,115,113,112,106,102,102,102,156,153,144,135,132,129,128,128,127,125,122,121,120,119,118,114,110,106,104,106,104,104,160,156,147,140,144,138,135,137,137,132,127,125,123,121,118,114,110,105,104,105,105,105,162,156,149,145,151,149,146,145,146,141,135,132,130,125,121,116,112,108,107,107,107,107,161,156,151,150,154,156,156,156,154,150,147,143,138,131,124,119,115,113,114,113,110,109,155,154,150,153,153,159,163,165,162,160,156,150,143,137,130,124,120,117,118,117,113,112,148,152,151,156,157,162,167,169,168,168,165,154,148,142,135,129,124,122,122,119,114,113,142,143,148,153,158,162,167,169,170,172,169,160,154,145,139,134,130,127,124,119,113,112,140,141,147,148,151,158,164,166,169,170,165,162,159,151,144,138,134,130,124,117,115,115,136,136,140,144,141,149,157,162,166,166,163,162,160,155,149,141,135,130,124,119,119,118,136,136,137,138,134,139,145,156,160,159,158,157,156,154,150,144,137,131,124,121,123,122,136,136,134,133,131,132,133,149,153,152,152,152,152,149,146,142,135,127,121,118,117,117,133,131,128,126,129,127,129,134,136,137,139,140,137,139,142,138,129,122,117,113,108,107,130,129,125,123,123,123,126,122,124,131,136,134,129,125,131,126,121,114,108,102,95,95,131,128,126,121,123,124,124,124,116,122,127,127,125,124,121,116,113,110,105,100,93,92,129,124,122,123,115,115,122,125,118,108,109,111,116,120,117,114,114,112,105,101,93,93,129,123,119,117,111,112,117,115,112,107,98,97,96,97,100,102,105,106,102,94,87,86,124,118,114,110,105,107,111,107,103,96,90,92,91,89,88,89,94,99,95,89,85,85,122,118,112,105,101,100,102,99,92,88,85,86,85,85,85,85,85,90,91,85,85,85,115,115,109,103,97,92,92,90,88,86,85,85,85,85,85,85,85,85,87,85,85,85,107,102,99,94,91,89,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,97,93,89,88,89,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,96,91,88,87,88,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85],
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
