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
        texture=ImageTexture(url=['../../images/5/newport18-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[100,106,107,114,120,122,119,123,123,124,121,121,115,112,110,109,108,111,112,119,127,128,107,109,109,111,120,124,128,123,128,128,127,124,121,118,115,115,115,115,118,122,129,130,105,112,112,117,120,124,130,132,133,131,124,127,125,120,119,120,120,118,119,126,131,132,111,109,112,117,122,126,132,135,137,132,130,127,123,124,121,121,122,122,125,128,129,129,109,109,117,119,125,130,135,136,133,133,134,132,127,125,124,122,123,122,126,128,128,128,112,115,120,125,130,134,137,138,137,136,135,131,129,128,128,125,123,121,125,127,125,124,113,119,127,130,133,137,143,142,141,140,134,129,130,129,128,124,121,120,120,123,124,123,115,121,128,135,140,143,146,147,146,140,134,130,128,126,125,124,123,124,119,116,114,115,119,125,131,140,143,145,148,149,146,141,135,132,130,126,123,122,122,121,118,114,114,113,115,127,134,145,149,151,153,149,146,143,137,134,128,125,121,121,121,117,114,112,114,114,116,127,134,143,150,155,159,153,151,140,139,133,129,127,124,120,116,114,113,110,113,112,121,127,137,149,154,157,156,154,151,141,137,133,129,126,123,119,115,111,109,108,108,108,121,133,144,151,155,157,156,155,149,142,139,137,132,128,125,121,115,109,105,103,103,102,127,139,148,152,157,159,157,155,152,147,143,143,137,131,127,122,114,110,104,100,98,98,127,139,148,158,161,163,164,160,154,150,147,145,142,135,129,122,117,110,103,103,98,98,125,139,153,160,158,161,166,164,160,160,151,146,142,138,131,122,117,111,104,100,100,100,128,141,155,160,157,167,166,162,161,163,153,147,143,136,129,124,117,110,104,103,103,103,133,145,153,161,159,161,163,165,162,159,154,146,140,135,127,122,116,112,108,106,106,107,135,143,152,163,161,163,164,165,163,160,151,143,137,132,127,123,117,111,110,108,109,109,132,148,159,163,164,161,160,162,160,153,152,143,135,131,127,122,119,114,109,108,108,108,135,150,154,159,164,164,165,162,157,152,148,142,137,133,129,124,120,118,112,111,110,110,133,143,156,159,169,164,167,163,159,152,145,142,139,136,131,124,122,119,115,110,110,110,131,141,151,161,170,164,161,164,161,157,151,146,144,139,133,130,125,120,117,116,114,114,129,139,150,161,171,166,163,163,163,158,152,148,145,139,132,131,125,120,117,117,115,115],
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
