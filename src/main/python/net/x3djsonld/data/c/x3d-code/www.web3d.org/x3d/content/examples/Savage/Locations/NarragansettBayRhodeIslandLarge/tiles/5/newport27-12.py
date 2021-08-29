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
        texture=ImageTexture(url=['../../images/5/newport27-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[132,123,120,109,102,101,100,107,110,101,99,100,97,97,98,97,100,101,96,99,100,100,124,125,121,116,100,101,101,104,103,105,99,98,98,99,101,107,105,99,101,97,99,98,124,119,117,108,103,103,98,99,100,104,100,101,103,103,108,102,103,105,104,97,98,98,116,115,109,102,102,102,101,103,103,103,106,106,108,106,102,104,100,101,100,97,93,93,121,108,102,102,103,100,104,107,106,112,108,108,109,105,107,105,100,94,93,92,93,94,107,108,103,106,105,102,108,109,114,116,117,112,109,109,104,99,98,94,93,92,90,89,108,108,108,105,108,106,110,112,114,115,117,119,117,109,103,99,96,92,89,89,87,86,110,115,113,107,106,109,111,110,119,115,123,116,111,111,108,101,99,95,88,90,88,87,121,115,120,114,109,109,113,113,113,118,119,117,114,111,104,103,98,94,94,90,93,91,122,119,119,113,114,115,113,113,113,117,117,117,108,107,107,105,101,101,99,95,94,94,124,123,120,117,120,115,115,114,118,115,113,109,111,111,111,105,104,106,104,101,94,93,133,129,125,123,121,119,118,117,116,115,108,116,115,107,108,108,108,107,105,107,100,100,136,134,132,130,127,125,121,115,114,117,115,117,112,108,114,110,112,110,108,101,101,100,140,138,139,133,129,126,121,122,117,119,117,115,110,119,113,111,114,109,107,102,97,96,138,143,143,135,131,127,123,126,120,120,120,116,117,114,114,115,112,109,109,99,93,92,141,137,138,134,131,126,124,127,126,120,118,114,117,114,113,113,111,110,102,92,87,87,133,138,136,132,129,126,128,126,124,120,117,112,112,111,112,113,109,101,96,88,88,88,138,135,130,134,133,129,124,122,121,119,117,111,111,110,109,104,99,95,88,89,92,93,140,136,132,136,131,129,124,119,121,118,117,112,111,108,104,98,95,92,93,95,92,93,143,135,132,130,132,128,121,118,118,112,112,118,111,105,106,100,95,95,96,98,100,101,139,135,130,128,128,123,121,117,119,115,112,119,110,111,105,104,98,99,101,105,109,108,139,136,128,126,120,121,118,114,112,111,113,114,112,109,107,106,107,108,110,112,112,111,131,134,131,121,124,118,117,111,107,113,110,110,110,107,107,106,108,112,113,113,115,115,132,133,130,121,125,118,117,112,107,112,109,110,111,109,106,107,109,111,114,114,115,115],
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
