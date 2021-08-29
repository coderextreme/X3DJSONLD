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
        texture=ImageTexture(url=['../../images/5/newport29-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[143,134,128,124,129,130,131,135,135,144,145,149,152,149,151,146,143,139,134,129,119,118,135,131,127,122,124,130,131,128,131,134,138,143,146,147,150,147,140,136,131,127,120,121,125,125,123,128,124,122,122,126,136,139,134,133,138,148,147,145,141,136,130,127,126,124,124,121,118,116,121,122,128,130,131,132,133,140,148,146,142,144,140,137,132,127,125,123,125,120,118,122,119,123,124,134,132,131,134,141,145,143,143,144,142,133,135,128,125,124,119,120,119,117,121,123,131,132,131,133,134,137,135,138,142,139,139,136,136,133,131,129,120,119,120,119,120,125,127,130,127,123,129,132,134,138,139,141,141,141,139,134,133,134,122,122,120,120,122,124,126,127,123,121,124,128,130,136,142,147,145,148,141,142,139,140,119,117,118,121,123,123,125,121,119,117,119,125,133,143,150,155,155,155,147,146,147,147,115,115,115,115,115,121,120,123,119,123,125,128,138,149,153,155,158,160,161,157,156,156,115,115,115,115,115,119,118,121,124,120,122,136,143,150,163,165,165,164,164,165,162,162,115,115,116,117,115,117,120,124,123,123,125,135,146,155,161,163,170,165,170,171,166,165,117,118,121,118,120,116,120,119,119,122,129,134,142,154,163,172,170,172,171,170,167,165,122,125,121,123,118,119,124,117,119,121,123,132,145,154,160,163,175,177,178,170,165,163,125,126,125,119,120,120,121,122,123,126,125,132,142,148,156,167,177,178,170,166,156,155,131,129,126,123,124,120,122,123,121,124,125,126,131,144,155,164,172,170,168,158,146,139,136,133,127,129,126,123,122,122,122,124,124,126,129,140,156,157,158,157,154,141,130,128,136,141,136,131,128,127,123,122,123,122,124,127,129,140,151,154,149,145,130,121,116,115,144,145,143,133,132,132,127,125,123,121,125,124,133,143,145,147,139,129,119,115,113,110,147,146,148,141,136,132,127,127,127,125,126,130,137,141,141,139,129,121,116,112,110,109,145,142,141,142,137,130,127,126,129,128,129,136,142,142,136,124,113,116,115,113,114,113,145,150,150,150,139,133,128,123,126,132,136,143,144,135,120,113,118,116,119,118,115,115,148,152,148,139,135,127,125,121,124,130,133,138,136,123,120,118,119,115,117,119,118,119,150,152,146,138,135,127,124,121,124,130,132,136,134,122,121,118,119,116,118,118,118,119],
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
