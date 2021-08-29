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
        texture=ImageTexture(url=['../../images/5/newport20-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[81,80,86,93,106,110,120,130,135,141,136,132,133,133,129,119,107,107,112,113,116,116,84,88,92,99,107,118,127,137,140,141,136,132,135,134,124,111,109,113,115,115,115,113,86,91,99,105,112,124,135,141,144,144,134,132,129,124,116,115,117,118,115,114,111,111,90,96,102,110,119,132,140,143,145,137,131,131,130,121,120,121,116,114,114,111,108,107,93,100,108,117,129,139,141,145,141,137,128,122,115,111,120,122,117,113,113,109,106,105,99,104,112,125,135,138,142,143,141,131,124,116,115,114,112,116,120,116,110,108,105,104,102,113,123,130,137,140,139,136,131,130,125,121,118,117,117,114,113,112,111,106,103,103,110,119,126,133,134,137,139,132,129,126,125,124,123,123,123,119,115,112,109,104,104,102,114,124,130,131,139,136,133,131,125,124,123,127,128,130,130,124,117,113,109,104,101,102,121,129,130,131,136,131,131,128,128,126,125,129,132,136,128,124,116,113,108,106,102,102,125,129,130,132,133,128,131,130,128,128,132,133,135,130,129,123,114,106,105,105,104,105,130,133,133,137,132,129,132,131,130,132,133,134,133,131,126,118,113,108,105,103,107,109,133,137,137,132,133,133,134,133,132,132,136,136,134,130,124,118,112,106,105,103,108,110,131,138,136,136,133,139,138,137,139,141,138,140,135,126,120,117,109,108,106,107,110,112,128,129,136,137,137,142,144,142,141,139,139,135,134,128,122,113,110,110,107,109,116,119,126,125,131,136,140,144,141,139,140,141,139,134,134,132,125,118,114,108,106,108,117,122,125,123,126,131,138,139,137,141,145,145,140,134,132,126,118,115,111,108,109,110,120,124,122,122,123,129,133,133,134,139,141,143,140,134,126,124,121,116,109,108,108,112,117,119,114,117,122,124,128,128,131,135,138,138,135,134,126,122,120,120,108,109,107,110,112,114,110,114,117,124,125,127,130,134,135,136,135,131,126,125,120,118,116,111,110,113,113,113,112,118,120,118,121,130,138,137,139,139,137,132,133,126,120,119,121,119,114,112,114,114,119,122,122,123,124,128,137,145,144,142,140,140,137,131,123,123,126,124,123,117,114,113,124,127,125,127,128,130,134,141,145,150,151,149,145,139,133,126,128,129,129,128,121,120,125,127,125,128,130,131,134,141,146,151,151,150,146,141,135,127,128,130,130,128,123,120],
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
