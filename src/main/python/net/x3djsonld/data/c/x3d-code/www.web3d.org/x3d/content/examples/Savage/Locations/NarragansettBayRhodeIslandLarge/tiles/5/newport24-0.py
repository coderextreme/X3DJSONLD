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
        texture=ImageTexture(url=['../../images/5/newport24-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[118,113,112,113,113,110,112,113,115,112,113,108,107,108,108,112,111,108,107,111,119,120,115,112,109,110,110,112,108,108,112,111,110,113,110,108,110,110,110,109,109,111,114,115,105,104,104,105,107,107,106,109,110,109,108,110,110,108,108,106,106,107,109,111,112,112,106,106,103,103,105,104,107,108,109,110,110,109,111,111,107,104,104,107,107,107,106,105,108,107,110,109,105,104,106,109,109,109,108,108,109,109,107,107,107,107,109,110,108,108,110,112,111,107,105,107,110,111,109,109,108,109,109,107,108,109,109,111,111,111,113,113,112,114,111,109,106,107,108,110,110,113,112,111,111,110,110,111,112,112,107,104,106,106,114,111,111,111,114,115,114,114,116,116,117,112,108,109,109,107,108,105,103,103,110,111,117,113,115,115,115,115,115,118,116,115,113,114,111,110,109,105,103,103,103,103,109,110,120,119,119,116,116,118,121,116,116,115,109,109,112,112,103,103,103,103,103,105,110,111,122,122,121,119,117,117,116,116,117,116,110,107,110,108,103,103,103,103,104,110,111,110,127,126,125,124,121,118,114,112,113,115,112,109,107,109,105,103,108,112,114,113,113,113,127,129,126,122,123,120,119,116,114,114,118,114,111,112,114,115,119,120,120,119,115,114,131,128,126,126,119,116,119,122,123,120,122,122,121,118,119,120,122,125,126,124,118,117,134,132,129,126,120,119,120,122,121,125,125,128,125,126,129,126,126,128,128,124,119,118,141,138,132,126,123,124,125,127,128,129,130,129,131,131,131,130,131,130,129,128,125,124,145,137,132,129,128,128,129,133,135,137,133,133,138,140,136,131,130,131,132,135,134,133,149,138,131,132,134,134,133,136,137,136,135,139,144,142,135,133,130,130,130,135,140,141,146,136,133,136,134,135,137,138,138,134,136,144,143,141,137,136,134,131,131,131,136,137,145,139,134,134,136,137,137,140,139,137,137,140,144,144,142,141,134,133,133,133,138,139,144,139,134,133,135,139,140,138,139,142,141,143,143,143,142,144,142,140,138,133,134,135,141,137,134,133,136,140,143,141,138,140,140,139,139,143,144,151,155,155,147,136,128,129,141,137,135,134,136,138,141,143,140,138,141,141,143,146,149,155,160,160,153,142,133,132,141,138,136,134,136,138,140,142,141,139,142,142,143,147,150,155,161,160,153,142,133,132],
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
