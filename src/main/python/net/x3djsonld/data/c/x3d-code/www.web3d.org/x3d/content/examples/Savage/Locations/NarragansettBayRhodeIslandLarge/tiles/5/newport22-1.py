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
        texture=ImageTexture(url=['../../images/5/newport22-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[105,105,110,118,127,134,137,140,140,137,136,143,148,148,147,149,146,138,135,128,127,127,109,107,110,120,131,138,139,143,141,138,138,139,146,149,149,145,141,133,128,126,130,130,108,110,116,120,132,142,141,141,140,143,143,142,147,147,144,139,134,130,126,129,128,129,110,111,115,122,129,137,140,139,139,144,145,142,141,140,138,133,131,132,131,133,132,132,112,113,114,122,128,133,135,138,138,141,137,137,139,133,134,132,133,134,134,133,133,133,112,115,119,122,124,128,132,132,135,137,138,138,126,126,130,132,132,136,138,137,137,137,110,113,117,121,123,125,130,133,133,135,136,129,126,126,127,133,135,140,141,142,142,141,107,109,111,114,118,125,129,134,136,132,130,126,126,126,127,133,136,142,146,150,146,146,105,108,106,111,118,124,129,131,132,130,126,126,126,126,127,130,137,143,155,154,152,152,101,105,106,110,116,117,125,129,129,131,131,126,129,128,127,129,137,144,154,158,157,156,106,105,108,110,115,118,127,131,132,133,133,133,130,129,127,128,134,141,149,153,152,153,103,104,108,107,111,119,124,128,131,133,133,131,131,135,137,135,135,139,141,144,147,148,105,103,106,109,113,118,122,127,129,132,134,133,136,140,141,145,142,139,135,138,143,144,107,106,107,109,113,120,124,127,133,134,135,136,140,145,149,149,148,145,140,137,140,140,112,112,116,117,116,118,122,129,136,142,141,144,143,148,153,153,153,151,146,142,137,136,117,116,114,115,118,122,127,136,141,143,146,145,146,148,152,156,155,151,148,143,140,140,117,115,114,117,120,126,133,142,143,146,151,147,148,145,148,150,149,147,145,143,137,135,120,120,118,117,122,131,141,145,147,150,151,149,149,145,144,140,139,140,139,137,132,131,125,122,121,123,129,139,148,148,151,150,148,148,145,144,140,139,134,134,132,129,124,124,126,122,121,127,136,142,149,153,154,150,150,144,140,136,135,133,135,128,125,126,126,126,127,125,126,129,135,141,148,155,156,152,150,142,136,135,130,129,127,125,125,128,129,130,127,127,131,134,138,145,147,148,151,148,147,145,141,134,129,123,123,125,127,126,133,133,128,129,129,132,135,140,145,147,146,145,146,145,142,138,135,132,125,125,127,123,124,125,128,129,129,132,135,139,144,146,146,145,145,146,142,139,136,133,125,125,127,125,124,125],
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
