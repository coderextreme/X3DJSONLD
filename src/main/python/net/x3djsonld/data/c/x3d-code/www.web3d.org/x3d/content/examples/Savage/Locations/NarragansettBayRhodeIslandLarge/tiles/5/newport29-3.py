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
        texture=ImageTexture(url=['../../images/5/newport29-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[139,139,140,142,149,151,151,151,151,152,152,150,152,151,148,147,142,134,129,127,124,124,141,141,141,142,145,150,153,152,151,152,155,151,147,144,141,137,132,127,127,121,119,118,142,143,142,144,142,147,151,152,151,151,152,153,151,148,146,143,136,133,129,121,119,119,143,144,143,145,145,146,150,151,151,152,152,151,149,146,142,138,135,135,124,121,119,119,140,142,148,147,142,146,148,151,152,152,152,149,146,141,130,130,127,128,123,121,118,118,141,146,151,145,142,145,148,152,152,151,150,147,143,135,127,127,124,125,123,119,117,117,141,143,146,144,142,142,147,149,150,148,147,146,139,130,126,125,122,121,119,118,116,116,145,149,152,144,142,141,144,146,145,144,143,142,135,128,125,122,121,120,118,117,116,116,148,145,144,143,141,139,140,143,143,140,139,136,134,128,127,125,122,119,117,114,111,111,152,149,148,148,144,140,139,139,139,136,135,135,134,133,132,131,126,119,115,110,106,106,156,155,153,150,146,148,141,139,142,140,140,141,138,135,133,130,123,117,110,107,109,111,161,159,159,151,151,145,139,137,143,137,136,138,138,136,133,129,126,122,113,107,113,114,157,156,153,148,146,143,136,133,133,131,132,136,142,139,135,132,127,118,112,108,113,115,153,151,149,150,147,142,137,130,128,126,131,137,143,139,136,126,120,110,107,108,113,114,154,159,155,154,146,138,131,126,123,123,126,134,138,133,127,119,112,110,109,112,120,120,157,160,161,155,148,138,127,124,122,122,130,122,120,121,116,115,113,114,119,122,124,125,151,157,157,150,141,131,126,123,121,119,122,117,112,112,112,112,113,118,125,122,118,118,145,147,140,129,124,122,123,122,119,115,113,112,111,112,112,112,117,122,128,120,119,119,139,135,125,123,122,121,121,119,116,113,112,113,116,130,125,118,124,126,126,128,130,129,134,128,124,122,120,117,115,115,114,113,113,118,128,135,137,134,134,131,134,134,132,132,127,124,122,121,117,115,115,114,113,113,118,125,131,139,142,145,140,135,137,133,130,130,124,122,120,118,117,115,115,115,117,124,126,129,137,142,143,142,137,137,137,132,128,128,125,122,120,119,118,118,117,117,120,128,133,137,140,142,141,139,142,146,144,133,131,131,125,123,120,119,118,118,117,118,120,128,133,137,141,143,140,139,144,147,144,134,133,132],
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
