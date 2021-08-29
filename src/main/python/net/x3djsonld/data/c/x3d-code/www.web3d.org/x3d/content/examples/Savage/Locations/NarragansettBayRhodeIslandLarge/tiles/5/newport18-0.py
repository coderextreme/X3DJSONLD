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
        texture=ImageTexture(url=['../../images/5/newport18-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[130,129,124,124,126,130,132,129,127,124,120,115,111,109,111,112,112,116,119,122,119,119,124,121,123,126,130,133,131,130,128,124,120,115,110,108,109,111,115,119,121,121,123,123,119,118,122,128,133,132,131,131,126,121,118,113,107,108,109,114,119,118,121,123,121,121,121,122,124,128,129,128,128,125,122,119,116,113,111,110,115,120,122,119,120,122,120,119,119,120,126,130,130,129,129,125,122,118,117,115,116,120,123,125,123,121,121,120,116,115,124,122,125,128,132,135,131,126,122,120,117,116,120,127,128,128,124,125,125,121,112,110,125,125,126,126,131,134,130,128,123,120,115,117,124,130,130,128,127,128,127,119,108,105,126,126,126,128,129,130,128,126,122,117,114,120,125,129,129,129,130,132,130,116,99,96,125,128,131,129,129,127,124,120,118,114,114,117,120,123,129,135,138,137,124,109,92,89,127,128,125,126,125,123,120,115,116,111,110,113,119,122,126,131,132,124,111,96,84,82,126,126,125,127,124,119,114,111,111,109,109,110,113,118,124,127,122,111,98,86,77,76,128,126,128,127,124,121,119,117,114,116,113,108,109,114,120,115,108,98,88,81,78,77,135,135,135,131,128,128,130,128,125,122,119,113,106,109,112,105,97,90,87,84,81,81,141,141,142,140,137,138,140,140,133,131,126,118,107,103,100,94,91,92,92,91,89,89,143,145,146,146,142,145,148,149,146,139,131,121,109,98,95,94,91,93,90,90,95,96,143,147,149,148,149,151,151,150,149,143,132,122,114,103,99,101,96,92,92,94,101,102,145,149,151,153,157,154,152,154,149,143,136,127,118,107,99,97,97,100,99,102,104,103,144,149,152,153,157,155,152,150,144,139,135,129,120,108,98,96,101,99,102,106,104,104,147,148,148,149,151,149,144,141,136,130,127,123,119,111,104,105,104,103,108,109,108,108,151,144,146,143,139,138,136,131,130,127,123,119,114,110,109,111,109,112,111,107,107,107,151,148,141,135,129,127,125,124,121,119,118,116,116,116,117,117,118,116,112,108,108,107,146,140,131,123,118,117,115,113,112,110,108,112,118,122,123,120,121,120,114,107,105,105,133,125,118,112,111,108,106,102,99,98,101,108,116,121,122,121,125,123,116,108,106,106,129,122,115,111,110,107,105,100,97,96,99,108,116,121,122,121,125,123,116,109,106,107],
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
