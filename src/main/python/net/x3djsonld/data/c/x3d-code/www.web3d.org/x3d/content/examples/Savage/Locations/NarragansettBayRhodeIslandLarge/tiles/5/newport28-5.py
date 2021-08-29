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
        texture=ImageTexture(url=['../../images/5/newport28-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[122,125,122,124,129,132,130,124,117,114,120,119,119,118,117,113,111,108,102,98,96,96,127,132,133,130,127,127,125,122,121,119,111,111,109,107,107,103,102,98,93,90,87,86,126,134,139,135,132,129,125,126,127,125,121,116,112,107,101,97,94,90,87,88,91,91,123,129,134,135,135,131,129,131,128,126,124,122,115,105,97,91,86,86,87,88,94,96,120,127,132,130,130,130,131,134,130,125,125,118,107,99,91,90,90,91,93,96,102,103,117,125,128,124,125,127,128,125,126,120,112,111,106,100,94,90,91,91,95,101,104,104,109,112,120,123,116,116,114,116,111,107,103,100,99,100,96,89,85,85,86,87,89,90,104,106,103,104,103,103,103,104,106,106,103,100,98,100,96,88,85,87,88,85,85,85,104,103,103,103,104,105,109,105,96,101,101,99,95,94,89,85,85,91,95,92,86,86,103,103,104,107,106,103,105,106,99,93,95,92,87,87,85,86,88,91,94,94,94,95,103,103,104,104,104,106,108,107,101,94,91,89,89,88,89,89,88,89,89,90,92,93,103,109,117,119,116,114,112,107,102,99,94,92,90,92,93,92,90,92,94,97,96,97,109,116,129,136,132,125,118,110,102,99,97,95,94,96,97,97,99,103,107,107,108,108,118,119,129,140,138,129,119,111,102,99,97,97,97,99,101,103,104,110,115,114,114,115,117,122,125,137,138,132,123,108,103,102,101,101,104,107,110,111,111,111,114,118,118,118,128,126,125,133,140,137,127,110,111,114,114,117,119,119,121,122,122,120,120,121,122,122,140,138,133,132,136,137,130,114,117,124,128,132,133,132,132,131,133,131,129,127,127,127,149,146,140,138,136,134,127,117,122,129,136,140,141,139,142,145,145,142,138,135,135,134,152,149,144,142,138,131,125,126,130,137,143,145,147,147,148,152,152,151,147,143,141,141,154,151,148,145,140,132,130,136,139,143,149,152,153,152,153,157,158,157,154,150,149,148,156,156,153,148,142,135,138,140,145,150,154,159,161,162,162,165,164,160,160,158,158,158,161,162,161,155,146,142,147,150,153,155,159,163,169,170,172,173,172,169,171,169,167,166,167,167,165,158,150,146,152,157,161,161,162,165,172,176,178,179,179,178,177,175,175,174,168,168,165,158,150,147,152,157,161,162,162,166,172,176,178,180,180,179,178,176,176,175],
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
