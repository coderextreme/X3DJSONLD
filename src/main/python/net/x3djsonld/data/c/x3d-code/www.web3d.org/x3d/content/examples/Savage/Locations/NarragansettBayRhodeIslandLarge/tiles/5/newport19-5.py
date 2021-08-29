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
        texture=ImageTexture(url=['../../images/5/newport19-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[89,88,86,84,84,91,96,103,108,115,120,123,125,130,132,132,139,136,137,140,146,144,91,89,90,84,83,93,99,107,117,119,126,127,127,130,131,133,136,137,139,141,141,142,90,87,89,85,88,96,105,109,121,126,126,128,128,129,131,134,134,139,139,144,140,141,93,90,91,90,92,98,102,111,117,130,130,133,133,132,130,131,134,136,143,141,142,142,92,93,89,91,93,99,107,108,118,122,128,133,134,132,133,135,135,140,144,139,143,142,90,89,89,91,97,101,103,110,119,122,125,130,132,129,129,129,134,139,140,140,146,146,93,88,89,92,104,103,105,107,110,125,128,128,129,127,123,127,127,130,135,141,146,148,88,89,95,103,107,106,110,111,112,115,119,121,121,124,125,128,129,130,134,134,142,144,91,90,98,101,111,111,110,114,118,119,121,120,120,125,125,124,123,125,132,134,139,142,92,92,105,108,109,109,112,114,120,116,120,121,123,123,125,124,123,124,129,135,141,145,101,99,103,110,115,107,105,112,115,116,123,124,126,125,123,126,125,123,132,131,142,145,105,104,102,105,111,113,104,107,112,115,121,125,123,130,131,128,127,127,130,136,139,146,110,107,104,104,107,106,104,104,106,114,121,127,126,124,128,127,128,134,134,137,141,142,120,115,116,113,104,104,104,104,105,117,118,122,126,121,124,123,126,131,138,142,145,145,129,127,127,122,116,112,109,106,104,106,117,117,120,117,121,122,128,131,138,146,150,150,128,135,134,132,129,127,122,112,106,104,104,108,113,116,119,125,128,135,137,145,151,150,137,140,139,140,133,128,122,121,114,104,104,109,110,116,119,124,130,136,139,147,149,151,145,144,137,142,140,134,128,125,120,110,104,109,112,115,120,122,129,136,141,149,148,146,135,139,142,144,143,140,130,123,118,116,107,107,111,114,120,124,127,132,139,145,147,146,132,136,146,147,149,146,134,124,120,114,113,110,109,115,118,121,126,131,138,145,149,147,131,135,143,152,151,152,143,133,123,117,114,109,109,111,116,122,124,131,136,142,143,141,131,141,149,151,154,150,147,141,130,122,117,116,111,113,113,123,127,130,135,141,148,147,134,141,146,153,154,150,152,150,142,137,127,117,110,107,114,121,128,129,136,139,144,145,135,142,146,152,153,152,150,150,144,139,129,117,110,105,111,120,125,129,135,138,144,146],
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
