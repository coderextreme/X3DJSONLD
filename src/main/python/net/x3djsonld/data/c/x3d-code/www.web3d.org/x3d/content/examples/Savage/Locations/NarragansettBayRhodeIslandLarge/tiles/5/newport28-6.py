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
        texture=ImageTexture(url=['../../images/5/newport28-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[96,91,88,87,88,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,86,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,91,94,95,90,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,96,101,104,103,99,90,87,87,85,85,85,85,85,85,92,89,85,85,85,87,87,87,103,106,105,101,95,94,88,86,85,85,85,85,85,85,88,92,85,85,85,90,95,96,104,104,102,96,88,85,85,85,85,85,85,85,86,88,88,89,85,85,88,99,103,103,90,89,88,86,85,85,87,88,87,85,86,90,91,91,85,85,85,86,92,101,107,108,85,85,85,85,93,101,103,101,99,95,99,97,94,90,85,85,89,93,102,106,112,113,86,85,85,94,105,110,113,109,108,107,106,98,94,89,86,89,96,102,106,112,118,119,95,96,96,94,101,108,111,111,110,109,103,96,91,89,92,96,101,105,109,115,125,128,93,99,100,99,111,111,109,107,106,103,97,94,96,96,98,101,104,110,118,124,134,136,97,99,100,101,111,113,111,107,103,100,99,100,101,103,104,107,109,111,121,129,135,137,108,108,104,105,114,114,111,107,104,101,103,109,110,111,109,112,115,117,125,132,140,141,115,115,111,110,115,116,111,107,106,105,107,114,116,116,115,118,122,123,126,130,137,139,118,119,118,116,115,115,111,110,110,110,112,117,120,121,122,124,128,130,131,134,139,141,122,124,126,122,117,115,115,115,117,115,112,120,125,128,129,130,132,134,136,139,144,145,127,128,131,126,122,120,119,120,121,120,117,123,129,134,136,136,137,139,141,145,148,149,134,132,131,129,128,124,124,125,125,124,121,125,134,140,141,141,142,144,147,150,152,152,141,138,137,135,133,131,131,130,129,128,128,133,139,141,143,144,144,146,150,153,155,155,148,146,143,140,139,138,138,136,135,132,132,137,141,143,144,145,146,148,151,155,155,153,158,155,150,146,145,144,142,139,137,136,136,139,141,142,144,146,148,151,152,154,151,151,166,163,158,156,154,150,146,143,141,139,139,140,142,143,144,146,149,151,153,154,153,152,174,169,164,162,159,155,151,147,143,141,140,141,142,143,146,147,148,151,154,156,157,157,175,170,165,163,160,156,151,147,143,141,140,141,142,143,146,148,149,151,154,156,158,157],
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
