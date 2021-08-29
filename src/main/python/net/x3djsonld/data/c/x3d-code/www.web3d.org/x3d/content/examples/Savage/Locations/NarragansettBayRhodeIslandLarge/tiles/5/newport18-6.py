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
        texture=ImageTexture(url=['../../images/5/newport18-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[142,133,132,131,130,126,123,112,110,111,108,107,103,90,90,87,89,96,100,96,98,100,139,135,132,127,128,122,118,111,103,106,107,102,94,91,89,88,94,99,99,100,107,107,133,137,132,128,121,119,110,104,99,94,96,90,94,93,93,92,99,101,101,104,105,105,129,129,128,124,119,110,105,105,103,98,98,95,92,93,91,92,96,101,103,107,111,111,127,126,121,117,114,107,100,98,98,97,94,94,91,91,93,95,96,101,105,113,110,109,123,121,118,114,106,103,99,98,97,98,94,94,90,92,94,101,100,102,105,108,110,112,133,125,118,112,103,101,96,95,95,96,95,94,96,94,93,94,98,103,102,108,112,113,135,131,117,105,101,98,94,98,97,96,95,96,95,95,95,98,98,99,107,107,114,115,133,124,121,115,107,99,98,93,98,96,96,97,99,96,95,95,97,105,106,110,118,119,146,134,126,123,113,101,96,93,94,99,100,103,100,95,94,94,101,103,105,107,113,115,149,147,132,128,122,109,105,98,100,96,98,94,97,100,99,99,105,107,108,111,114,116,146,141,140,133,123,117,115,111,106,104,99,100,98,98,98,99,103,107,107,114,120,121,147,142,132,122,120,124,124,119,113,107,102,103,98,98,95,97,97,104,109,114,119,121,140,141,131,130,128,120,111,111,110,111,104,98,97,99,97,96,99,104,107,110,126,127,142,135,129,127,124,119,114,104,104,103,101,104,100,97,100,100,101,106,106,110,125,127,146,142,133,121,122,123,118,110,106,103,101,98,99,100,100,103,106,107,107,116,125,125,146,139,139,130,128,123,120,117,112,107,103,100,99,102,101,101,107,110,109,121,126,128,146,146,143,140,133,126,123,118,115,116,113,106,104,101,103,103,103,108,113,119,130,133,150,147,145,143,141,130,126,126,115,113,110,108,105,103,101,103,106,105,115,123,133,135,145,146,145,144,137,134,129,121,123,117,113,109,106,105,103,102,105,104,113,123,130,132,144,142,143,141,138,140,127,125,119,118,117,113,107,104,104,104,106,106,108,119,133,135,144,146,140,141,141,135,134,135,129,119,115,115,106,102,103,104,106,109,107,117,131,133,145,141,138,140,137,135,140,140,140,132,121,117,106,102,99,101,105,107,108,117,129,131,144,143,138,139,137,136,141,141,142,135,123,119,105,100,97,102,106,108,109,116,128,129],
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
