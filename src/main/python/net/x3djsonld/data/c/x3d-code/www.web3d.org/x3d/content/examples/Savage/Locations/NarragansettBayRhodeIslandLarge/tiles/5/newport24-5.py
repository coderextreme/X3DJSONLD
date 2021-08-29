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
        texture=ImageTexture(url=['../../images/5/newport24-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[158,157,155,152,146,144,141,144,145,148,151,150,149,147,142,135,130,129,124,117,113,114,154,151,150,148,140,139,137,137,140,143,143,144,144,140,134,127,123,120,116,112,112,113,143,146,145,140,137,133,131,130,135,136,134,136,135,131,125,125,123,117,114,112,112,112,135,134,133,131,133,128,126,127,126,128,131,128,127,128,126,124,121,116,115,115,112,112,133,136,134,133,131,126,124,126,124,121,126,129,126,127,125,122,118,116,117,119,116,117,135,134,134,134,131,128,128,124,124,124,124,126,130,128,126,121,117,116,116,118,125,127,128,131,134,131,129,129,125,122,124,125,126,126,121,122,120,117,116,119,121,126,125,123,125,126,129,124,123,131,130,125,124,127,131,135,131,125,121,119,118,122,124,130,131,129,124,126,122,118,120,123,127,129,134,132,135,139,143,136,132,130,129,131,133,131,131,133,130,123,120,121,120,118,124,136,142,143,139,141,145,144,144,143,141,139,139,141,142,142,129,122,120,121,119,123,131,142,145,149,144,142,143,149,151,149,147,144,142,142,144,145,129,124,120,122,121,124,136,142,143,147,148,146,145,145,145,146,143,140,138,140,143,144,123,121,119,117,120,130,136,145,149,152,150,147,145,142,144,141,141,141,140,139,139,139,115,115,114,120,124,129,134,139,144,147,149,148,144,142,141,142,142,139,137,136,131,131,110,112,112,122,122,126,131,134,137,139,142,142,144,143,145,141,138,136,135,130,125,124,111,110,115,120,118,117,123,129,132,134,137,140,139,141,140,138,135,133,131,125,121,119,112,111,113,112,112,114,119,120,124,130,133,135,137,137,134,134,131,127,123,119,115,113,111,115,113,110,112,112,113,116,120,125,128,131,132,131,129,128,126,121,115,112,107,106,111,111,112,110,112,115,114,115,118,124,126,128,129,126,124,121,118,112,107,104,102,101,112,111,110,112,114,112,109,115,121,120,121,124,125,121,118,114,109,106,103,101,97,96,112,113,112,111,112,113,115,113,114,119,120,121,117,116,112,108,105,103,103,97,95,93,113,112,113,114,113,111,110,113,112,114,116,117,115,111,108,106,101,99,98,96,96,97,116,119,126,122,122,114,110,108,109,111,112,109,107,106,102,100,102,103,100,101,97,96,116,120,126,124,122,115,109,107,107,110,111,107,107,107,102,98,102,102,102,102,97,96],
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
