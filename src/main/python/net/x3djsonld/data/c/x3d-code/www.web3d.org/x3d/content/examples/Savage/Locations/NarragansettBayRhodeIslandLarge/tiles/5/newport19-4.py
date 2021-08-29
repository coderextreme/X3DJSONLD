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
        texture=ImageTexture(url=['../../images/5/newport19-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[132,132,132,129,125,118,109,98,91,99,106,105,100,102,98,98,94,96,91,91,89,89,130,129,119,122,122,118,104,90,95,105,109,115,108,105,102,101,99,102,97,93,91,91,123,122,122,121,116,106,95,95,106,107,119,122,110,101,102,100,101,106,107,100,91,90,119,116,116,116,108,99,102,107,112,119,124,112,111,111,105,105,105,104,102,96,91,93,112,116,112,103,100,97,103,112,116,122,114,119,113,113,114,113,105,103,96,99,94,92,110,105,97,88,97,100,106,115,115,117,113,116,120,118,115,116,117,106,97,94,92,90,92,92,85,83,91,96,102,115,119,109,109,118,117,111,120,116,116,104,101,94,93,93,85,84,81,88,86,92,103,114,114,114,109,110,111,109,119,113,115,103,99,93,87,88,82,81,82,85,89,94,99,106,116,115,113,111,108,111,110,109,109,104,101,93,91,91,78,80,88,93,104,103,103,104,108,120,131,126,120,112,109,106,103,101,103,101,92,92,80,88,93,105,113,113,113,113,116,128,135,136,130,125,115,112,113,105,103,103,101,101,91,89,101,111,117,126,126,128,129,141,144,142,138,131,119,114,109,108,103,103,105,105,83,97,109,118,127,133,140,144,141,151,156,151,144,137,126,123,118,120,113,115,109,110,84,92,105,120,132,135,144,147,151,155,153,157,153,144,131,130,125,121,123,128,123,120,85,94,111,122,132,138,145,149,148,150,154,155,155,149,146,136,133,133,125,124,130,129,88,100,109,121,131,142,146,145,148,153,147,151,153,147,149,149,148,142,143,130,127,128,91,98,104,120,129,137,141,145,150,148,140,141,140,142,144,147,140,137,143,143,138,137,90,97,111,119,121,125,127,136,141,134,132,131,134,132,134,134,132,133,132,136,144,145,94,103,111,119,123,129,121,123,127,123,122,114,111,116,120,121,126,132,131,133,134,135,86,94,107,116,120,126,120,116,108,114,110,101,106,110,112,115,122,124,128,130,130,132,93,96,108,112,115,117,109,107,102,97,101,108,108,112,115,115,120,121,121,127,130,131,88,104,100,110,115,108,100,99,92,96,110,114,116,113,116,119,120,120,122,128,131,131,88,99,106,111,104,101,95,99,103,105,107,111,113,118,121,123,128,127,121,127,133,134,88,99,106,111,103,100,96,100,105,104,108,113,114,119,121,124,130,127,122,128,134,135],
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
