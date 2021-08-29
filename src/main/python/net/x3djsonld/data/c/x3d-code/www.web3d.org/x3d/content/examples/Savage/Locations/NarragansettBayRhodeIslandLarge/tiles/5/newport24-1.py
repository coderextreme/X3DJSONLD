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
        texture=ImageTexture(url=['../../images/5/newport24-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[120,122,115,107,102,101,104,109,117,127,136,142,143,145,142,139,137,132,130,130,130,129,115,115,109,106,104,103,109,115,121,126,132,137,137,139,138,135,137,133,131,130,131,131,112,112,112,109,105,104,108,116,124,130,133,136,139,139,138,138,136,133,131,130,131,131,105,107,113,114,113,110,109,115,121,130,136,138,143,141,137,135,135,136,134,134,132,132,108,110,112,112,110,110,109,112,119,129,138,139,141,139,136,136,137,137,136,136,135,135,113,111,111,110,108,108,108,112,119,125,131,134,137,136,138,134,136,139,140,138,141,142,106,110,112,108,107,108,108,113,120,122,124,126,127,130,132,133,137,140,141,141,140,140,111,110,107,107,108,108,113,116,119,123,123,120,124,128,129,131,135,137,139,140,141,141,110,110,109,110,112,115,119,122,121,123,120,123,128,133,137,135,132,132,134,134,136,136,111,111,110,114,118,121,123,122,124,122,124,128,135,138,140,141,135,131,128,130,131,130,110,110,112,116,118,122,126,125,125,125,126,130,138,143,142,140,136,132,128,129,127,127,113,114,115,116,113,114,124,126,123,126,132,137,139,144,143,143,140,135,131,131,129,129,114,114,115,117,113,110,115,120,121,125,135,143,145,148,148,147,145,141,140,139,138,138,117,116,118,120,117,115,115,116,119,124,135,144,149,155,155,151,149,145,147,145,149,150,118,121,121,122,123,120,113,111,119,128,134,144,150,154,156,155,154,152,152,151,156,157,124,120,121,122,127,125,117,112,115,126,135,143,151,156,157,158,156,157,156,156,160,161,133,130,128,124,123,121,113,110,112,123,133,142,148,153,155,159,158,162,162,162,162,162,141,140,137,135,131,123,116,112,112,119,128,135,143,148,153,157,158,162,161,162,163,162,137,143,147,145,141,137,128,115,108,111,118,127,135,141,148,154,156,158,160,163,161,160,139,143,150,152,148,139,132,125,117,110,110,119,127,136,145,148,155,156,159,160,157,157,135,139,143,145,143,136,129,127,120,115,114,115,124,133,141,146,153,154,155,155,154,154,129,130,131,132,130,129,126,123,122,119,114,114,125,134,140,147,151,151,151,152,152,152,132,129,128,124,123,124,118,113,114,115,113,118,129,139,146,151,150,149,150,149,152,152,132,129,128,123,121,122,117,113,114,115,113,119,130,140,147,151,150,149,150,149,151,152],
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
