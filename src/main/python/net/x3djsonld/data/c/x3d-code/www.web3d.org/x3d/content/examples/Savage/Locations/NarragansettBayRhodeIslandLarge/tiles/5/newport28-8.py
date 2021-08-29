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
        texture=ImageTexture(url=['../../images/5/newport28-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.79082087960392,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[86,102,117,122,124,124,118,115,113,108,98,86,86,86,86,86,86,86,101,114,120,122,108,116,119,128,123,120,114,111,106,102,92,86,86,86,86,86,86,86,97,106,112,114,101,109,115,121,123,118,115,110,105,92,86,86,86,86,86,86,86,86,87,100,106,108,104,111,121,125,124,124,117,112,100,101,94,86,86,86,86,86,86,86,86,95,105,107,109,113,119,120,121,119,114,108,102,98,102,88,86,86,86,86,86,86,86,91,106,109,104,114,118,115,126,126,126,115,104,97,91,90,87,86,87,86,86,87,86,87,108,110,111,119,118,121,124,130,122,116,105,98,93,90,86,86,86,86,86,86,86,86,93,95,120,124,126,132,126,124,118,111,107,99,100,97,86,86,86,86,86,86,86,86,86,89,124,130,138,140,130,123,117,112,106,101,97,86,86,86,86,86,86,86,86,86,86,86,128,135,137,139,127,123,123,117,105,106,100,86,86,88,87,86,86,86,86,86,86,86,132,136,137,135,131,129,122,117,116,103,102,86,86,87,88,90,86,86,86,86,86,86,139,139,137,132,128,125,121,122,114,108,103,102,103,97,86,86,86,86,86,89,86,86,139,137,135,132,126,126,125,119,115,109,104,108,104,99,95,86,86,86,86,87,86,86,140,138,133,129,126,119,121,116,112,111,107,102,103,99,92,86,86,86,86,86,86,86,140,136,135,131,127,121,118,115,113,111,105,96,94,89,86,86,86,86,86,86,86,86,143,141,137,132,128,123,120,116,115,106,99,101,86,86,86,86,86,86,86,86,86,86,145,141,138,132,130,131,125,123,117,106,100,94,86,86,86,86,86,86,86,86,86,86,145,140,136,137,141,142,135,125,111,106,103,94,86,86,86,86,86,86,86,86,86,86,143,139,139,144,146,139,130,121,113,110,109,103,86,86,86,86,86,86,86,86,86,86,139,133,135,139,137,132,128,121,116,115,111,104,91,86,86,86,86,86,86,86,86,86,139,138,136,130,124,120,118,120,125,118,113,107,97,86,86,86,86,86,86,86,86,86,145,145,137,126,121,115,114,109,113,109,102,99,97,86,86,86,86,86,86,86,86,86,147,144,136,127,119,113,107,107,106,104,101,99,95,86,86,86,86,86,86,86,86,86,147,143,136,127,120,113,107,107,105,105,101,99,96,86,86,86,86,86,86,86,86,86],
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
