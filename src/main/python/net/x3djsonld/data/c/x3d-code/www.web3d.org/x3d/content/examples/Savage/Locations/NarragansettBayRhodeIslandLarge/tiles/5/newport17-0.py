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
        texture=ImageTexture(url=['../../images/5/newport17-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[98,97,97,97,97,97,97,97,97,97,97,98,105,109,112,109,108,107,105,101,99,99,100,98,97,97,97,97,97,97,97,97,97,102,104,110,109,111,110,110,108,107,104,104,101,97,97,97,101,99,97,97,97,97,100,109,112,109,107,106,109,110,109,108,107,106,100,99,97,102,101,104,103,100,97,99,106,112,110,109,108,108,111,109,107,109,105,104,101,103,101,105,103,110,106,107,106,107,108,108,111,110,112,114,111,109,108,106,102,102,103,105,105,105,107,108,109,108,108,109,116,112,112,111,112,113,114,111,110,105,104,104,106,110,109,107,108,111,110,112,115,118,119,117,112,112,117,115,114,111,110,110,109,109,113,112,112,110,110,110,116,120,122,124,120,117,116,117,117,117,116,117,116,117,114,115,119,116,115,114,114,113,115,119,123,123,122,122,122,119,117,116,116,116,115,118,120,120,120,120,118,115,115,115,118,119,122,124,121,124,121,114,115,115,115,117,115,118,119,119,124,120,119,118,118,119,120,120,121,120,120,119,120,119,119,117,116,113,115,114,115,115,124,125,125,122,122,121,121,120,122,120,120,121,122,121,118,120,118,117,116,115,113,113,123,124,125,126,124,122,125,122,121,119,119,117,118,120,118,119,118,116,116,116,114,113,125,124,125,127,128,126,123,124,122,119,116,114,113,110,114,116,117,116,114,113,115,115,126,126,126,128,128,127,126,124,119,115,111,110,109,111,110,111,111,114,115,112,112,112,125,129,129,129,128,126,124,123,119,113,111,106,100,103,107,107,110,115,112,112,108,108,123,130,130,128,127,126,120,116,114,112,109,108,104,104,107,107,107,109,109,109,107,106,119,123,125,125,126,128,126,118,110,108,108,107,109,107,107,107,109,108,107,105,104,104,118,117,121,124,129,125,121,116,112,111,108,107,111,108,107,107,109,106,106,106,106,106,115,117,121,123,124,123,119,115,113,112,111,110,110,109,108,108,110,110,112,109,111,111,118,122,123,124,122,123,121,121,119,114,111,110,112,110,109,109,111,111,112,113,112,112,126,125,122,123,122,124,126,126,124,120,116,114,111,108,108,110,114,112,113,117,117,117,131,130,125,124,126,130,131,128,126,123,119,115,112,110,111,112,112,116,119,122,119,119,130,129,124,124,126,130,132,129,127,124,120,115,111,109,111,112,112,116,119,122,119,119],
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
