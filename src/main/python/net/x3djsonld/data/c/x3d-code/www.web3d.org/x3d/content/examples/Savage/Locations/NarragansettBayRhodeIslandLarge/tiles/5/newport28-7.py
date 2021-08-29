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
        texture=ImageTexture(url=['../../images/5/newport28-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[85,85,88,95,99,102,106,112,117,116,113,106,106,110,103,97,103,98,86,86,86,86,85,86,97,108,114,115,113,121,126,125,122,114,109,104,103,102,103,90,86,87,107,108,85,86,96,105,113,118,124,127,129,128,125,123,116,108,109,111,103,94,89,99,98,101,87,90,96,105,114,119,124,126,126,126,122,120,117,111,110,110,103,96,103,101,103,104,96,98,105,114,121,125,131,119,113,119,119,117,115,113,105,105,102,94,96,95,108,109,103,108,120,125,128,133,133,129,116,111,110,109,108,109,106,102,94,96,96,101,103,104,108,116,124,130,133,137,131,128,120,114,111,108,111,108,108,99,95,98,102,102,109,111,113,118,124,127,131,136,133,130,123,116,112,114,113,110,106,103,97,105,104,113,118,120,119,127,129,132,130,134,135,132,127,119,117,117,111,109,106,103,106,107,113,115,123,124,128,138,138,137,135,133,132,130,127,119,110,110,108,109,109,105,112,115,116,125,128,128,136,142,141,140,137,134,133,132,127,120,111,109,109,108,108,111,118,119,123,129,130,132,137,146,144,141,139,138,138,135,130,122,116,115,116,111,114,121,122,126,133,132,138,139,141,145,147,147,147,148,146,138,128,125,124,123,119,115,120,125,128,130,135,139,139,139,139,145,149,152,154,155,148,134,131,129,126,121,118,120,122,129,132,138,144,144,140,140,141,147,150,152,154,153,148,138,132,127,121,120,122,128,129,134,140,145,146,143,142,140,145,150,152,154,155,149,146,141,133,124,128,132,132,135,137,142,146,148,149,149,144,143,149,152,154,155,154,146,142,139,131,132,138,140,141,143,148,152,154,154,149,149,146,145,152,153,153,154,152,149,141,136,134,139,144,147,149,152,156,159,158,157,152,151,146,145,155,151,151,152,151,150,143,138,137,141,148,154,158,159,161,162,160,157,157,150,144,143,153,151,151,151,151,149,143,139,146,149,152,157,165,166,167,166,164,160,157,150,140,139,151,151,150,150,149,148,145,138,144,150,153,157,164,168,168,166,164,161,157,143,140,139,152,151,151,150,149,148,151,150,142,152,154,157,162,167,171,165,163,159,153,149,145,145,157,155,151,153,150,151,157,156,148,147,155,159,162,166,169,166,164,160,156,150,147,147,157,155,152,154,151,151,158,156,149,147,155,160,162,166,169,166,164,160,156,151,148,147],
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
