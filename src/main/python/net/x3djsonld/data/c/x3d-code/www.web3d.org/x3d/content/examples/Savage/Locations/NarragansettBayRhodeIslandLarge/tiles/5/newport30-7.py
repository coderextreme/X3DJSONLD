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
        texture=ImageTexture(url=['../../images/5/newport30-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[138,137,136,135,134,134,132,130,127,127,127,126,126,124,119,114,111,110,113,116,118,118,141,140,137,136,134,133,131,127,126,126,126,126,125,123,120,112,110,110,111,114,113,113,145,144,140,138,137,136,132,128,127,126,126,126,126,124,117,116,115,113,113,110,108,108,152,152,148,144,144,142,137,132,127,126,126,128,128,125,126,122,118,119,112,106,103,102,152,152,150,149,149,146,140,133,128,126,127,130,130,129,135,127,120,120,115,106,101,100,150,151,151,151,150,146,140,133,129,127,129,131,132,133,131,127,126,122,115,105,104,103,152,151,151,152,149,145,139,137,138,135,133,133,134,131,130,129,126,120,116,114,109,109,155,153,152,150,147,143,142,144,145,144,144,142,141,138,133,129,132,127,127,118,113,112,164,157,151,148,144,143,144,148,150,151,151,152,152,150,141,129,122,121,115,111,113,114,166,159,153,146,144,144,147,151,153,155,156,157,158,156,148,135,122,116,113,112,114,114,164,158,152,145,143,145,150,152,154,157,161,163,162,159,151,142,135,127,119,118,120,121,161,154,147,144,145,149,152,154,156,159,160,159,156,155,149,144,144,140,134,132,124,123,158,150,145,145,147,151,153,155,156,155,155,151,148,149,147,148,147,144,140,133,122,120,154,148,146,147,146,145,148,152,150,144,140,136,133,130,139,144,138,136,129,123,114,113,149,143,141,142,138,136,135,135,134,131,123,117,117,116,118,123,128,122,115,116,117,116,143,139,135,133,131,128,126,123,122,120,113,107,106,106,105,106,109,107,101,98,99,98,136,132,128,126,120,114,114,109,102,102,102,101,98,98,97,96,100,102,119,118,118,117,126,119,116,108,107,106,107,107,106,110,107,103,99,97,102,104,113,118,122,127,129,130,114,111,109,110,109,108,109,114,113,112,110,107,105,105,108,110,118,124,124,129,137,138,117,115,112,109,109,108,109,110,111,111,111,111,110,111,112,113,115,120,125,138,147,149,120,118,116,111,111,110,111,111,112,112,112,111,111,110,112,113,113,121,130,139,148,149,115,113,112,111,113,111,113,115,114,115,114,113,113,112,108,109,109,119,129,139,147,147,117,120,131,129,125,123,123,122,121,119,114,115,113,112,112,112,110,116,125,132,140,140,119,125,132,131,126,125,125,124,122,118,114,115,112,112,112,112,111,114,123,132,138,138],
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
