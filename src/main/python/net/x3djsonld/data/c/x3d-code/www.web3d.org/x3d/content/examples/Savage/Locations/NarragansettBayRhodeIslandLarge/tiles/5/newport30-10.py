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
        texture=ImageTexture(url=['../../images/5/newport30-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[150,152,146,138,135,127,124,121,124,130,132,136,134,122,121,118,119,116,118,118,118,119,138,137,131,126,124,129,120,120,121,125,126,127,120,122,118,116,114,118,117,117,123,123,122,121,118,118,118,114,118,119,118,119,117,113,110,113,115,115,114,115,117,116,118,118,106,109,110,113,107,108,108,109,114,114,112,108,106,108,115,114,113,117,114,113,112,112,102,101,103,104,110,112,109,108,103,103,103,107,108,110,114,114,121,121,109,110,106,104,101,103,105,112,111,112,110,104,103,103,103,103,108,107,120,124,126,119,112,109,107,108,98,102,103,103,103,104,106,107,103,103,103,103,109,107,125,138,131,127,123,109,109,106,92,94,100,102,106,112,109,109,108,114,116,104,110,111,126,142,142,133,123,105,95,96,92,101,103,113,116,114,112,118,118,122,121,116,112,121,122,132,134,139,120,101,93,93,92,100,109,117,117,118,127,128,134,130,128,127,120,127,120,120,126,127,108,103,100,97,92,100,105,112,122,126,134,137,137,141,131,124,116,114,116,127,127,113,108,102,96,96,92,98,108,111,117,126,134,138,140,139,136,130,121,117,114,114,124,114,115,102,93,94,92,95,108,111,115,123,131,139,143,146,142,135,124,118,113,111,114,118,121,108,97,96,92,92,104,108,114,122,134,141,143,147,150,140,129,124,121,109,114,114,115,109,99,101,92,92,94,107,115,122,127,142,143,149,149,143,134,131,131,123,110,116,116,116,102,101,92,92,92,106,115,124,127,138,142,142,150,139,130,138,138,129,119,113,114,114,116,118,92,92,92,109,112,125,127,135,140,144,138,134,127,136,135,137,132,121,111,114,125,127,92,92,92,107,117,124,130,135,135,137,131,127,129,133,131,131,120,113,106,122,126,126,92,93,98,110,122,127,129,129,132,128,125,127,128,127,126,119,110,105,100,111,119,120,101,96,104,111,120,125,126,126,124,124,119,119,121,116,114,108,101,98,99,103,112,113,97,101,107,116,117,127,123,121,118,111,107,112,112,110,105,98,99,101,101,99,99,99,95,101,111,114,116,117,117,117,110,108,109,104,104,100,95,94,94,94,103,96,96,96,97,108,107,112,113,114,113,109,107,107,104,101,102,98,91,85,85,82,92,99,93,93,97,108,108,111,112,113,112,109,107,106,103,101,102,96,90,85,88,83,90,99,92,91],
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
