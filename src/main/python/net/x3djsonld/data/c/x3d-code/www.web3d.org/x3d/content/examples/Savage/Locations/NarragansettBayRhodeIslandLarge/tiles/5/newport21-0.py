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
        texture=ImageTexture(url=['../../images/5/newport21-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[136,134,134,133,135,130,124,120,118,119,122,125,125,121,117,111,107,105,104,100,94,93,135,135,136,138,136,131,129,124,116,109,108,109,109,104,102,100,95,95,93,89,89,89,138,138,139,137,135,131,127,120,112,105,98,95,95,98,98,95,94,94,92,90,90,90,138,139,141,138,133,128,122,114,106,97,91,93,96,101,98,93,95,98,100,98,98,99,140,138,137,136,132,125,117,107,98,96,97,97,99,105,100,99,105,110,107,108,111,111,137,136,132,129,125,121,113,106,100,98,97,97,98,100,101,108,113,113,116,119,120,120,132,129,125,123,122,120,115,109,102,99,98,96,95,97,103,111,114,118,122,126,127,127,127,122,120,119,121,120,117,112,107,100,94,91,95,99,106,112,118,122,129,131,124,123,119,115,116,117,116,115,111,108,105,101,95,94,95,101,113,120,124,126,131,127,121,120,111,107,108,113,112,107,100,101,97,103,100,100,100,105,115,125,129,130,127,119,113,113,99,98,101,106,106,98,98,98,103,104,100,99,104,110,115,123,125,127,124,114,106,105,97,98,98,98,98,99,104,104,105,105,103,104,105,109,117,123,123,122,115,99,98,97,98,98,98,98,101,107,107,107,105,106,109,110,112,112,115,118,116,111,99,98,98,98,98,102,108,105,106,109,109,110,111,110,111,113,114,116,115,113,112,105,99,99,99,99,109,107,106,107,108,108,110,114,113,112,115,111,110,115,114,110,111,108,106,108,105,105,110,107,104,105,105,108,114,115,116,113,111,112,112,113,112,110,105,106,107,107,105,105,102,102,105,105,107,112,113,114,115,114,114,118,119,116,115,112,108,106,105,105,107,108,99,99,100,105,108,108,112,114,115,114,114,119,120,121,117,110,105,107,105,107,109,109,99,99,99,99,103,107,112,113,113,112,114,120,123,121,114,107,105,107,107,108,106,106,99,99,99,99,102,108,110,112,113,113,111,116,119,116,111,108,107,108,108,108,107,106,99,99,99,104,108,110,110,111,114,114,114,113,113,110,112,115,113,107,106,107,111,110,99,100,103,107,109,109,109,109,109,112,113,113,113,112,112,114,110,108,111,111,109,110,113,108,107,108,106,105,107,108,107,110,112,111,114,116,115,112,110,110,108,108,106,106,113,109,107,107,106,105,107,108,107,110,111,111,114,116,115,112,110,111,108,107,106,105],
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
