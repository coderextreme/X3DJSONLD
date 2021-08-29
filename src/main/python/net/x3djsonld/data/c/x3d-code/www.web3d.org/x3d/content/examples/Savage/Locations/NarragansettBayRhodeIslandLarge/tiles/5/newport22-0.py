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
        texture=ImageTexture(url=['../../images/5/newport22-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[113,109,107,107,106,105,107,108,107,110,111,111,114,116,115,112,110,111,108,107,106,105,111,110,108,107,105,109,110,111,109,108,110,110,110,111,109,108,110,111,110,108,109,109,112,109,108,108,108,108,109,110,110,109,112,111,112,111,110,110,110,110,111,111,108,108,113,110,108,107,108,108,107,108,108,109,111,111,109,112,110,107,107,111,110,109,110,110,113,109,105,106,108,106,109,107,105,106,107,110,108,108,108,108,107,108,108,108,112,112,115,111,107,103,103,106,106,109,107,107,108,110,110,109,109,111,109,106,106,107,111,112,109,105,105,103,104,105,102,103,106,106,105,110,112,114,114,110,106,104,106,107,111,110,103,99,102,104,103,103,102,103,107,108,108,111,114,116,114,110,106,107,107,107,107,107,104,100,101,103,103,103,104,105,108,107,108,114,116,115,112,106,104,106,103,105,105,105,105,104,101,102,102,104,105,107,108,109,112,116,114,110,112,111,107,103,102,104,101,101,105,103,105,106,107,105,106,106,108,110,116,114,112,111,109,109,108,108,103,103,105,106,103,103,105,107,107,108,106,108,108,112,116,115,114,114,110,106,106,109,105,102,103,103,101,102,105,108,108,108,108,111,111,114,116,117,116,113,113,108,105,106,108,105,105,105,104,101,103,104,107,110,113,113,115,118,116,118,118,116,115,113,112,110,110,109,107,107,104,104,104,105,107,109,112,115,117,117,117,118,117,115,115,117,118,118,117,115,111,112,104,104,104,101,105,109,112,115,118,120,119,118,120,120,118,120,119,118,118,116,116,117,104,105,108,105,105,109,113,116,120,119,120,118,121,120,122,127,126,121,121,119,118,117,108,108,108,108,109,114,120,123,124,125,123,120,117,120,123,128,132,129,125,123,120,120,109,108,110,111,112,115,119,122,127,126,123,122,123,124,123,126,129,130,128,123,124,125,112,109,111,110,113,114,120,123,124,124,126,125,124,124,125,127,127,128,128,128,126,126,112,111,110,109,112,114,119,122,123,127,127,124,124,123,127,124,128,130,133,130,127,127,116,114,113,116,115,116,119,122,127,128,128,124,122,125,126,127,129,130,131,132,128,127,112,111,110,114,116,119,120,123,128,130,129,127,124,125,125,127,126,126,129,130,129,128,111,111,110,114,116,119,120,122,128,130,129,127,125,125,126,127,126,126,128,130,129,128],
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
