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
        texture=ImageTexture(url=['../../images/5/newport31-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[119,125,132,131,126,125,125,124,122,118,114,115,112,112,112,112,111,114,123,132,138,138,127,134,136,132,130,131,133,127,122,121,119,112,111,111,111,113,114,117,121,128,127,127,126,127,130,132,133,138,135,126,117,115,112,112,112,113,111,113,117,118,120,130,125,123,142,130,132,136,138,138,127,118,115,112,111,113,113,113,113,112,116,117,127,130,126,125,142,133,136,139,138,133,122,115,113,112,113,114,114,114,114,115,120,125,125,127,126,125,142,138,139,137,134,127,116,114,113,113,112,112,113,114,117,124,126,130,128,126,124,124,142,146,145,135,128,119,114,119,114,113,112,112,113,114,123,128,130,129,130,127,126,126,144,147,142,131,121,114,116,118,116,116,116,116,118,123,125,129,134,132,127,127,129,128,146,143,136,121,115,115,116,116,117,119,119,119,122,123,125,128,128,128,131,129,122,122,135,133,125,117,119,118,119,118,117,118,119,120,122,126,132,134,130,132,131,127,119,118,133,125,117,118,123,127,129,125,120,119,120,121,126,135,141,131,128,131,132,121,107,105,127,119,116,116,119,129,133,131,122,121,121,123,128,135,138,132,135,132,126,111,101,100,119,119,120,120,119,121,123,121,121,121,121,122,124,129,132,133,132,130,118,110,103,103,127,131,127,127,125,126,121,121,121,121,121,121,122,123,125,131,128,118,112,107,105,104,139,137,132,133,130,129,128,130,123,122,121,121,120,120,121,120,119,113,111,110,107,108,145,137,139,134,135,143,143,142,131,124,122,122,119,115,116,116,114,110,108,109,111,111,143,148,143,139,142,151,145,145,138,132,125,122,117,114,118,111,109,111,110,109,113,111,154,158,148,141,141,144,145,141,137,132,125,120,117,115,112,119,116,109,112,111,117,116,156,153,150,148,148,149,143,140,136,131,124,116,115,112,110,114,113,113,114,117,119,121,154,152,154,156,157,156,148,139,131,126,118,116,112,114,112,115,114,114,118,120,122,121,156,158,161,157,159,156,148,137,124,119,120,113,114,114,112,115,117,118,122,124,125,125,161,161,158,157,154,147,141,134,124,117,116,118,116,113,112,118,120,122,121,125,131,132,163,158,157,152,150,144,138,129,120,116,117,115,114,115,115,116,122,131,130,132,140,141,162,156,156,153,148,143,136,128,120,115,119,116,114,114,115,117,121,132,133,134,141,143],
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
