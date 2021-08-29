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
        texture=ImageTexture(url=['../../images/5/newport28-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[122,125,131,128,131,133,134,134,130,128,131,135,134,135,133,131,128,126,127,130,140,139,114,124,128,138,141,138,139,135,132,130,130,128,129,130,134,132,130,128,127,130,130,130,108,118,125,140,143,143,142,136,135,132,126,124,126,130,136,137,136,132,126,124,121,120,107,120,129,141,148,146,143,142,139,128,123,123,125,134,139,140,139,134,125,119,113,112,109,126,129,140,148,144,143,144,136,123,121,125,133,141,145,148,140,131,119,113,115,116,110,120,124,139,140,138,141,134,127,120,117,127,141,144,141,142,139,128,121,112,103,102,95,108,121,134,132,133,130,122,117,119,116,124,131,134,140,143,135,124,112,104,101,101,89,100,110,121,124,125,125,117,109,111,113,115,122,130,134,131,126,114,105,101,103,103,86,89,100,112,120,123,115,108,104,102,104,110,121,125,124,123,115,100,102,102,102,102,86,86,94,109,115,119,112,107,101,101,106,108,114,119,112,106,102,101,104,104,105,104,86,86,92,108,112,108,111,106,101,101,103,110,113,114,105,99,102,108,106,104,105,105,86,86,86,101,113,113,111,110,104,107,108,109,109,104,107,107,107,105,105,107,109,110,86,86,86,95,106,111,109,109,108,115,111,109,110,114,111,109,107,104,104,104,107,109,86,86,86,94,105,107,109,110,117,111,110,109,109,112,112,113,107,112,109,110,112,113,86,86,86,86,94,98,106,119,117,111,111,110,109,107,110,111,114,109,117,123,118,117,86,86,86,86,86,99,108,113,113,107,108,107,108,113,111,111,116,127,129,128,117,117,86,86,86,86,86,100,104,104,108,106,106,112,114,112,116,124,129,132,128,123,120,120,86,86,86,86,86,99,102,105,108,107,109,115,111,114,124,131,138,139,133,131,129,128,86,86,86,86,86,95,108,107,112,110,111,108,113,128,133,137,141,142,140,134,134,133,86,86,86,86,86,97,109,114,116,118,114,115,120,125,131,141,138,139,147,142,140,140,86,86,86,86,86,101,115,114,117,117,115,116,123,125,133,135,137,148,146,149,145,145,86,86,86,86,88,101,112,115,114,115,117,114,119,124,132,135,140,143,146,149,147,146,86,86,86,86,86,98,106,110,112,108,114,115,120,124,130,134,135,141,147,146,145,144,86,86,86,86,86,97,106,110,114,108,112,115,119,123,129,132,136,141,146,146,145,143],
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
