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
        texture=ImageTexture(url=['../../images/5/newport20-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[116,113,111,109,105,104,96,91,88,92,90,91,93,95,97,101,102,100,96,93,94,94,113,116,112,108,104,102,97,93,93,92,94,96,100,105,107,107,108,106,102,99,99,99,111,112,111,107,101,102,96,93,93,98,99,103,108,114,114,115,112,110,107,106,102,102,107,106,108,102,100,98,93,93,97,100,107,115,118,119,119,117,116,113,109,105,105,105,105,103,100,98,95,92,94,100,104,108,118,122,123,121,121,122,118,115,108,104,103,103,104,99,97,96,96,96,100,104,105,112,122,125,126,123,127,127,119,114,111,106,106,104,103,104,100,98,99,100,106,109,113,117,122,129,129,127,126,123,120,116,113,108,106,105,102,99,99,100,102,108,111,114,117,122,126,131,131,127,128,128,124,116,114,109,107,106,102,102,103,103,107,111,117,120,123,123,128,133,134,133,132,130,125,121,117,112,109,109,102,103,105,110,116,120,122,126,130,127,130,131,134,133,134,129,126,121,118,115,112,112,105,108,112,122,124,126,126,127,131,132,133,134,136,135,133,125,125,124,120,115,110,110,109,111,120,127,129,131,133,132,133,136,136,136,135,133,129,125,125,120,117,115,108,107,110,115,126,133,136,139,137,134,136,137,137,136,133,130,126,126,124,122,117,112,106,106,112,122,133,138,138,139,138,136,138,141,140,136,133,127,127,126,123,120,114,110,105,104,119,129,135,140,139,141,137,137,139,141,139,135,132,129,127,126,123,119,115,110,106,105,122,132,136,138,138,138,136,138,139,140,141,138,133,129,130,128,125,119,114,107,106,106,124,133,136,137,134,135,137,138,140,140,138,138,134,135,132,129,123,117,111,107,108,107,119,126,130,132,133,130,135,139,141,141,139,136,137,135,129,127,120,117,108,109,107,108,114,121,126,128,130,131,133,136,141,140,138,135,139,134,130,124,118,113,109,109,110,109,113,113,118,121,125,126,133,139,139,138,136,135,131,129,125,123,118,111,110,108,106,106,114,112,116,117,123,123,132,136,139,138,132,132,130,125,121,118,111,110,110,109,106,105,113,117,116,118,120,121,128,134,135,133,130,129,125,122,118,114,108,107,107,104,101,101,120,113,114,113,115,122,129,130,129,127,124,121,121,116,115,108,106,100,96,98,97,97,120,113,114,112,115,123,128,128,128,126,122,120,120,115,113,108,105,99,96,96,96,96],
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
