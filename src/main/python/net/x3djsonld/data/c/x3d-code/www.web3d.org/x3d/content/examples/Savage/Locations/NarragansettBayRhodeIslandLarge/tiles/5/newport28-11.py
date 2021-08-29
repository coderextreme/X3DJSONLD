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
        texture=ImageTexture(url=['../../images/5/newport28-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[147,145,141,142,141,140,142,134,141,140,137,143,139,139,141,147,144,139,135,131,132,132,146,145,142,142,142,142,139,137,139,141,139,141,140,143,141,139,139,135,132,128,125,124,143,144,142,142,143,140,139,138,138,140,141,142,140,138,139,135,130,129,123,121,117,117,142,144,143,145,139,139,136,139,136,140,140,138,138,134,131,129,123,121,119,117,115,115,140,140,142,141,143,139,140,139,142,137,140,137,135,127,128,125,122,119,116,112,111,112,138,139,142,141,140,142,147,144,145,144,139,132,128,124,122,121,118,113,115,115,120,119,141,140,143,143,142,144,151,147,147,143,137,133,125,125,122,119,115,116,120,118,121,121,143,140,143,144,145,150,155,149,150,144,139,133,131,124,119,116,117,121,120,123,121,121,146,144,142,143,152,152,155,151,146,145,141,132,131,124,123,121,121,122,123,124,126,126,148,146,145,149,152,155,152,150,147,145,140,139,134,128,125,127,129,126,121,122,123,124,147,150,150,152,155,153,151,153,150,148,140,139,132,133,134,132,130,126,122,122,118,117,150,152,153,155,154,153,152,152,151,149,141,136,135,137,137,136,131,126,124,118,114,114,152,153,151,154,152,151,152,152,150,142,142,138,140,140,139,139,132,127,123,116,112,112,151,147,146,148,149,151,151,147,146,142,145,139,144,144,140,132,128,126,126,117,113,111,140,144,144,149,147,151,149,147,143,143,138,144,140,137,132,134,127,124,119,111,105,106,139,140,145,144,147,145,143,140,140,139,137,139,136,131,128,125,121,119,109,112,105,104,137,138,139,137,143,141,140,140,135,140,140,132,131,124,120,117,115,115,120,104,100,99,135,134,131,136,135,135,135,133,133,131,126,126,119,118,115,110,109,106,100,103,98,99,130,133,130,129,127,123,119,121,118,125,120,109,109,113,108,104,100,98,96,93,93,92,130,133,128,124,118,116,111,111,110,107,103,104,100,101,100,100,101,100,96,96,94,93,129,121,117,117,113,109,107,99,97,100,104,108,106,108,112,115,116,102,98,95,88,87,123,116,115,113,111,107,102,100,98,102,109,115,121,117,118,121,117,107,107,101,95,96,119,116,115,109,108,108,109,104,106,104,102,115,126,127,126,126,122,118,110,100,100,100,118,117,115,109,109,108,109,106,106,105,103,114,124,127,126,129,124,120,109,101,101,101],
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
