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
        texture=ImageTexture(url=['../../images/5/newport21-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[125,127,125,128,130,131,134,141,146,151,151,150,146,141,135,127,128,130,130,128,123,120,133,132,129,126,126,133,135,141,146,151,154,153,148,143,143,140,134,132,130,124,121,119,145,136,130,130,135,139,141,145,149,152,152,152,146,142,141,140,137,132,127,125,116,115,149,143,141,143,142,142,147,148,150,149,150,151,151,149,141,134,128,123,119,114,112,111,154,150,149,147,147,147,147,148,147,149,151,151,150,150,141,132,125,118,114,110,106,106,148,149,147,145,144,145,146,149,148,153,150,145,145,145,142,133,124,114,110,109,106,104,143,146,144,143,144,144,143,145,152,153,145,140,139,139,138,133,122,113,109,107,107,107,140,142,142,141,141,143,144,148,151,144,137,133,134,130,126,123,118,116,112,108,107,108,135,137,140,142,143,147,147,143,140,135,131,127,130,120,114,108,112,121,116,105,103,105,131,135,140,144,147,146,144,138,131,124,122,118,123,122,119,109,106,105,108,102,100,102,128,133,139,145,145,142,138,131,125,118,115,115,114,120,116,116,109,105,100,99,96,96,124,130,135,140,140,136,130,124,116,113,112,104,115,108,112,113,108,104,105,101,97,97,118,126,130,134,133,128,122,114,107,105,104,103,102,101,109,111,110,109,105,103,97,97,116,124,127,127,123,119,113,106,104,99,100,103,102,103,101,107,110,107,105,103,98,97,117,122,123,119,114,108,102,98,97,97,101,105,103,99,99,102,106,106,105,102,100,98,115,117,116,108,100,95,90,92,99,101,108,108,101,99,99,99,102,107,104,99,97,97,109,109,101,91,88,88,89,97,97,103,112,112,103,99,99,99,99,103,108,100,99,98,100,96,90,88,88,88,92,93,100,105,114,116,109,100,99,99,99,99,100,104,100,100,88,88,88,88,88,88,89,92,109,106,111,115,116,107,99,99,99,99,99,102,103,103,93,92,91,90,89,88,89,91,104,106,108,118,120,110,100,99,99,99,99,102,100,104,101,99,99,97,90,88,92,94,105,108,116,126,128,123,107,99,99,99,99,104,108,107,98,103,102,100,95,89,88,95,106,108,112,127,131,130,120,103,99,99,99,107,109,108,89,94,100,99,96,93,91,89,100,114,116,128,134,137,130,117,102,99,104,106,114,113,89,92,99,98,96,95,93,89,99,114,119,128,134,137,131,119,103,100,105,107,114,114],
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
