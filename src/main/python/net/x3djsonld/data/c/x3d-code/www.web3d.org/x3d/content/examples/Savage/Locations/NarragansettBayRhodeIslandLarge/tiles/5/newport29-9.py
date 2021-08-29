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
        texture=ImageTexture(url=['../../images/5/newport29-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.81501095577192,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[86,86,86,86,86,97,106,110,114,108,112,115,119,123,129,132,136,141,146,146,145,143,86,86,86,86,86,98,98,101,106,110,111,108,112,119,123,129,134,140,142,140,136,135,86,86,86,86,86,94,94,99,105,108,111,109,108,109,119,124,136,139,138,136,127,125,86,86,86,86,86,90,96,96,102,103,110,109,111,112,114,127,135,133,133,129,124,124,86,86,86,86,86,86,95,97,102,107,104,106,119,127,123,121,123,126,126,128,126,125,86,86,86,86,86,86,95,102,105,102,97,111,114,124,126,127,132,126,122,117,119,119,86,86,87,86,86,86,91,97,102,102,104,109,120,127,119,120,121,121,133,123,120,120,86,88,89,86,86,86,89,95,91,93,100,109,114,125,132,125,117,111,116,120,122,122,86,86,86,86,86,86,87,87,88,92,97,106,119,123,121,112,114,117,116,122,120,119,86,86,86,86,86,86,86,86,88,94,103,114,104,114,121,119,125,125,117,118,115,115,86,86,86,92,89,86,86,86,89,95,106,117,115,116,122,122,120,120,118,118,117,115,86,86,86,91,86,86,86,93,97,102,105,108,120,120,122,120,118,116,117,117,116,115,90,86,86,86,86,86,86,92,96,103,113,112,108,111,113,116,116,114,115,116,116,117,102,87,86,86,86,86,86,92,95,105,102,110,114,111,109,113,113,110,110,118,122,122,105,89,86,86,86,86,86,97,97,101,108,108,109,108,106,104,108,114,118,123,124,125,99,94,86,86,86,86,86,96,103,107,106,106,105,108,103,105,107,123,129,128,131,131,92,93,88,86,87,93,97,98,97,106,106,105,105,105,101,104,114,125,136,141,136,136,86,86,86,86,86,86,88,104,106,103,108,110,105,104,111,110,117,122,129,139,136,136,86,86,86,86,86,86,89,96,105,110,107,109,111,106,108,111,115,120,128,142,144,144,86,86,86,86,86,86,90,95,101,99,102,113,114,121,120,117,117,129,130,137,146,147,99,86,86,87,91,103,95,91,97,104,102,104,111,123,130,131,126,129,138,142,145,145,103,86,86,90,93,97,89,95,97,101,106,104,110,121,127,133,131,132,137,142,145,145,97,88,94,95,93,98,93,94,96,100,103,107,114,117,119,125,136,132,137,140,148,148,99,89,92,95,93,99,95,94,95,100,103,106,113,118,117,124,133,130,134,139,150,150],
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
