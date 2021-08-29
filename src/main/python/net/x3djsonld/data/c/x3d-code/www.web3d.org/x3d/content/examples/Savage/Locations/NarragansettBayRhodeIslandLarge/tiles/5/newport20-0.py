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
        texture=ImageTexture(url=['../../images/5/newport20-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[137,131,127,127,128,125,127,130,137,141,149,158,159,158,155,147,138,129,120,112,104,102,137,135,132,129,126,125,127,128,134,139,148,156,156,155,153,144,134,122,112,105,100,100,144,140,134,128,126,125,126,124,129,138,149,150,150,148,145,135,123,114,107,104,104,105,146,143,136,130,126,120,119,120,127,136,144,148,148,145,135,126,120,114,108,103,105,105,141,137,132,128,126,119,120,120,120,130,139,143,142,137,126,119,115,112,109,108,108,108,135,130,123,119,119,120,120,120,120,124,130,134,131,125,121,120,118,114,110,112,110,111,129,126,123,119,119,120,120,120,120,120,124,125,123,121,120,118,113,108,108,112,117,118,129,125,126,122,120,120,120,120,121,120,122,123,122,121,120,115,111,109,113,120,126,126,131,131,130,128,124,123,124,128,129,129,127,129,130,128,125,119,113,115,122,126,132,132,140,140,138,130,126,125,129,131,135,140,142,141,139,135,131,120,118,123,131,135,139,140,144,145,138,134,130,127,128,132,140,148,152,153,152,146,137,131,129,135,143,148,150,150,145,139,136,134,127,127,131,138,149,155,156,161,162,157,149,145,146,149,155,158,156,156,144,139,137,130,128,129,130,140,151,158,163,167,168,165,161,158,161,163,164,164,165,164,144,143,137,127,127,128,129,136,146,159,167,171,169,166,166,173,174,174,170,167,166,166,141,140,134,131,129,128,131,140,149,160,170,172,168,169,171,176,175,175,176,174,169,167,135,133,132,133,128,125,128,137,147,158,168,171,172,176,173,179,179,178,173,171,170,170,128,128,130,131,126,127,127,134,145,157,163,169,172,174,175,175,176,175,170,168,167,166,128,128,128,126,125,125,125,132,144,156,162,164,168,172,172,170,169,170,169,164,161,160,129,127,128,127,124,124,127,131,141,150,155,162,164,169,167,167,168,169,167,160,154,153,131,131,130,126,126,126,128,127,133,140,150,159,160,165,168,167,166,160,155,150,145,144,130,132,128,127,123,122,126,127,125,133,143,151,156,156,157,155,152,146,141,138,132,131,132,131,130,131,127,125,122,122,121,127,134,139,143,142,141,136,132,127,123,118,112,111,135,133,133,133,134,130,124,120,119,121,124,127,128,124,119,115,110,107,106,102,96,95,136,134,134,133,135,130,124,120,118,119,122,125,125,121,117,111,107,105,104,100,94,93],
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
