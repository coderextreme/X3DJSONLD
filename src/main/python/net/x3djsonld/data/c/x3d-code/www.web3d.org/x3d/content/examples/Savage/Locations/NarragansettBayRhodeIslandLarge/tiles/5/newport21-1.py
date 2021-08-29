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
        texture=ImageTexture(url=['../../images/5/newport21-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[93,89,87,90,89,92,101,109,115,112,104,93,84,77,79,85,89,92,95,97,100,101,89,88,87,89,96,105,113,118,113,105,98,90,82,80,83,88,92,92,95,95,102,103,90,92,95,102,111,113,111,112,108,100,90,84,83,85,90,93,95,97,98,100,109,111,99,104,110,112,113,112,109,103,98,95,88,85,86,91,97,102,104,102,103,109,123,125,111,117,120,115,112,112,109,102,99,93,88,87,91,99,105,109,110,113,117,126,130,131,120,122,122,119,116,112,108,102,99,94,90,91,97,105,111,118,119,125,131,137,135,135,127,123,119,117,113,110,108,104,99,96,92,95,102,109,116,119,127,136,143,146,140,140,123,117,116,114,114,111,106,103,100,97,96,100,106,113,121,126,131,140,148,146,146,146,120,116,114,111,110,109,106,102,100,100,100,108,115,118,123,131,138,146,151,148,148,147,113,113,109,108,109,105,103,104,105,104,108,117,120,128,130,139,149,149,147,152,151,151,105,100,100,107,109,107,105,109,107,108,113,120,128,136,139,142,148,148,150,155,155,155,97,97,97,104,110,110,110,107,107,110,118,125,130,140,145,145,149,151,155,156,155,154,98,98,98,98,111,114,110,107,109,112,120,131,138,144,146,146,150,154,158,158,155,155,99,99,101,104,111,115,111,109,107,114,123,130,139,147,151,150,150,154,158,156,154,154,105,107,110,106,105,104,107,107,110,118,126,133,139,146,148,150,150,155,158,156,154,153,105,105,107,107,107,105,106,107,113,119,127,138,139,148,148,150,149,153,155,154,149,148,108,108,108,111,109,106,105,106,112,120,126,134,143,151,152,150,150,152,152,149,146,146,109,107,107,106,106,107,105,109,114,124,132,136,142,148,155,157,154,153,149,148,143,142,106,106,108,105,102,107,112,115,117,122,131,141,144,148,154,158,155,152,149,147,142,141,106,106,107,108,106,106,115,121,125,128,134,140,143,148,153,154,153,151,148,144,140,139,110,109,111,112,111,111,118,123,128,135,139,141,145,149,151,151,153,149,144,139,134,133,110,112,110,112,116,120,126,131,135,136,140,145,146,147,148,150,149,146,141,135,129,129,106,106,110,118,127,133,136,138,138,136,137,144,149,148,147,148,146,139,136,129,127,128,105,105,110,118,127,134,137,140,140,137,136,143,148,148,147,149,146,138,135,128,127,127],
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
