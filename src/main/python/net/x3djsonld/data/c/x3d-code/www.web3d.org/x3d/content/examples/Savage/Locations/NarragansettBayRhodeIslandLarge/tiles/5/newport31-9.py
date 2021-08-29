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
        texture=ImageTexture(url=['../../images/5/newport31-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[120,123,125,123,120,116,112,105,106,106,110,113,111,112,108,110,112,106,104,106,97,97,124,124,125,123,119,119,110,107,106,106,107,103,111,110,109,113,108,110,106,104,108,110,127,125,126,125,123,118,111,108,108,107,104,106,105,106,112,113,105,107,109,114,113,111,126,128,126,124,120,117,113,110,111,107,105,104,104,103,103,104,110,110,115,116,115,115,125,124,124,123,120,117,113,114,112,102,101,101,101,103,101,110,114,114,120,122,122,121,126,124,124,118,119,115,111,108,102,100,100,103,106,102,105,112,115,122,121,122,125,125,124,123,121,111,110,108,108,109,105,111,102,101,103,110,112,114,116,125,120,127,128,129,120,121,110,107,110,110,109,112,115,121,115,103,106,110,114,115,114,124,123,124,118,116,123,119,113,109,108,108,112,119,121,124,127,114,111,112,115,112,115,119,119,119,112,112,120,116,110,112,108,105,116,119,124,132,138,139,122,111,110,109,115,113,114,109,107,105,121,118,112,112,111,112,120,122,129,138,139,138,121,100,106,116,107,109,111,109,104,104,120,121,117,112,119,124,125,126,126,134,127,118,116,99,111,115,113,111,113,108,108,108,125,118,117,119,119,130,131,127,128,129,130,123,108,99,110,113,109,106,105,105,105,105,121,116,121,125,119,123,123,127,137,139,135,124,105,99,101,105,106,107,105,105,105,105,121,123,123,120,121,121,124,130,134,129,130,123,107,99,99,106,100,101,102,101,109,109,127,127,127,125,119,117,114,123,123,127,126,119,113,100,99,100,102,100,100,105,100,101,123,123,124,127,119,109,102,114,122,125,120,115,109,104,99,98,102,101,103,104,106,107,123,126,125,120,109,99,98,113,118,117,109,108,109,105,99,99,105,105,104,103,106,106,121,123,117,112,101,99,99,99,106,101,110,113,113,111,98,101,98,102,107,106,106,106,124,118,108,105,103,100,100,101,104,103,104,107,104,102,100,101,99,102,105,108,100,102,122,115,110,109,115,108,100,100,101,102,101,100,99,99,100,100,101,103,98,100,106,105,122,122,110,109,110,110,108,104,104,101,100,99,99,99,99,99,99,101,103,107,107,107,122,116,113,114,117,111,100,101,99,100,99,100,99,99,99,99,99,101,102,116,117,118,121,116,115,114,117,112,99,101,99,99,99,100,99,99,99,99,99,101,101,115,119,120],
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
