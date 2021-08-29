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
        texture=ImageTexture(url=['../../images/5/newport29-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[118,117,115,109,109,108,109,106,106,105,103,114,124,127,126,129,124,120,109,101,101,101,121,119,116,112,112,113,111,114,114,113,115,108,114,129,136,131,128,117,114,111,109,109,124,120,116,114,114,118,122,124,125,119,115,110,107,119,133,134,131,129,119,117,115,116,123,122,119,120,121,124,126,133,130,127,119,113,110,111,125,130,131,134,124,122,114,112,124,123,125,126,128,129,134,133,131,129,127,126,121,116,119,119,122,123,122,115,110,110,129,126,127,130,132,136,139,140,136,135,130,128,122,123,120,121,123,120,117,112,109,109,134,136,133,137,142,144,144,143,142,135,135,130,129,122,121,123,121,119,113,110,106,106,140,141,142,141,149,145,145,144,141,139,137,134,130,125,120,119,116,117,116,109,110,109,147,146,149,148,147,145,143,144,140,141,136,133,125,123,118,120,114,115,112,108,103,102,156,153,151,147,143,145,145,140,145,138,129,124,125,120,116,116,114,110,104,98,95,96,162,157,149,147,146,146,142,139,137,133,129,124,124,120,115,114,114,108,104,96,92,92,165,159,155,148,145,144,143,140,139,136,127,123,121,116,114,112,108,105,101,101,97,97,165,161,154,145,140,141,145,142,138,134,129,123,120,112,112,109,109,106,100,104,103,103,163,153,148,142,136,136,137,142,141,139,135,127,115,113,112,109,109,105,105,106,107,108,155,143,134,133,126,125,136,139,142,141,133,120,111,112,113,109,106,103,111,110,114,113,139,129,131,123,116,120,122,128,134,130,125,117,115,112,109,108,107,107,110,113,112,112,128,125,119,117,113,114,112,121,118,122,116,115,113,111,107,111,111,109,111,112,119,120,115,111,108,109,112,109,108,108,108,108,108,109,108,107,108,107,108,110,111,114,124,125,110,108,108,108,108,112,110,108,108,108,108,108,108,108,111,109,109,110,114,119,125,126,109,110,108,108,109,111,108,108,108,108,108,108,110,113,113,112,110,113,120,129,127,127,113,111,108,108,108,111,108,108,108,108,108,110,116,118,116,117,122,125,125,126,122,121,115,112,108,108,108,108,108,110,114,110,117,119,120,121,121,128,133,127,124,118,115,115,119,114,115,111,110,112,119,120,119,126,121,121,117,124,129,133,129,125,118,113,108,107,119,115,115,113,111,115,121,121,120,128,122,121,118,124,129,133,127,124,116,112,108,107],
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
