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
        texture=ImageTexture(url=['../../images/5/newport20-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[88,99,106,111,103,100,96,100,105,104,108,113,114,119,121,124,130,127,122,128,134,135,87,99,103,102,94,94,100,109,107,112,118,119,122,126,126,127,132,127,129,130,134,134,87,97,98,92,88,89,99,107,115,119,121,126,131,134,137,137,130,133,135,135,137,137,78,72,84,84,86,85,99,108,122,124,129,133,138,140,137,139,138,137,136,137,137,136,76,71,71,72,87,91,102,114,122,130,132,138,141,142,142,143,143,141,140,138,138,139,72,71,71,71,76,90,99,110,119,129,135,138,142,144,146,144,143,145,141,139,145,145,84,71,71,71,73,87,96,105,118,130,138,139,142,147,145,147,145,146,145,146,143,142,83,76,71,71,72,80,92,101,116,132,135,140,144,146,148,148,147,148,149,146,148,147,87,81,79,71,71,83,88,101,112,122,136,144,148,149,150,148,148,147,147,148,150,151,86,82,82,76,72,84,86,98,110,124,138,142,146,146,151,150,151,146,146,149,153,155,95,90,84,85,77,75,82,99,113,121,137,142,146,149,152,149,150,149,145,149,155,157,99,93,90,82,83,84,81,95,110,122,132,139,145,148,150,150,148,151,150,151,151,151,105,96,87,90,94,85,83,86,102,115,130,139,143,145,149,150,147,147,152,152,148,147,112,102,96,93,88,89,84,84,100,109,117,132,140,147,145,147,145,145,150,149,144,145,114,105,100,92,93,88,87,86,97,108,119,119,127,137,139,143,144,145,144,145,144,144,117,115,109,102,98,91,91,88,88,91,103,120,120,127,132,135,139,139,139,140,142,142,121,120,117,113,100,99,98,92,92,91,98,105,111,120,126,130,135,134,139,142,145,146,133,132,126,110,108,106,105,97,94,94,101,101,113,115,120,128,126,131,133,137,143,142,140,143,127,121,116,113,112,105,106,103,104,107,108,116,113,120,120,126,128,136,141,141,144,142,137,134,128,121,124,116,116,107,105,108,111,105,106,111,118,121,120,124,123,123,142,144,148,142,136,138,129,125,119,112,108,106,107,108,107,106,109,117,119,123,122,123,150,147,151,146,139,145,139,133,127,118,108,104,102,104,106,110,114,113,116,121,126,127,143,145,152,150,143,146,140,134,130,118,109,105,103,101,105,118,120,117,119,125,124,125,141,143,150,151,145,145,140,134,128,118,109,105,106,101,104,118,121,120,120,126,126,127],
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
