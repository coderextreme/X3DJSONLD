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
        texture=ImageTexture(url=['../../images/5/newport26-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[112,117,116,112,109,109,113,115,112,111,109,109,108,108,106,104,103,103,103,104,99,99,111,116,116,112,106,109,116,115,115,114,113,112,110,108,106,104,103,103,102,104,96,96,103,111,115,110,104,108,113,115,116,116,116,116,114,109,107,106,104,103,101,96,96,97,101,110,112,106,102,112,118,119,119,122,120,118,115,111,109,107,106,104,103,97,102,102,97,102,107,96,103,119,122,122,125,126,121,117,115,113,109,109,108,104,100,100,105,106,98,93,93,98,107,123,124,126,132,131,125,120,120,116,109,109,106,103,103,104,109,110,96,92,90,93,106,116,119,125,130,129,124,126,124,117,110,107,106,105,106,109,112,112,102,101,96,90,95,101,110,119,124,126,124,129,125,118,111,113,114,111,112,113,115,115,113,110,108,98,91,91,97,110,117,120,118,125,122,117,112,116,116,118,114,115,118,118,125,121,122,113,102,96,92,99,108,111,111,119,121,117,110,112,113,113,113,115,120,121,130,132,132,125,115,107,97,93,96,102,108,113,109,108,109,113,115,113,110,119,122,123,137,140,140,133,125,119,108,97,92,95,100,96,99,107,109,113,114,108,112,116,121,123,146,145,140,136,131,121,113,108,96,95,88,87,96,110,108,107,109,102,108,114,121,123,151,151,146,140,133,125,116,114,101,99,86,85,92,105,104,98,99,102,114,118,118,120,155,154,151,145,139,132,125,109,99,99,91,88,87,88,93,97,94,99,110,121,128,128,158,155,157,154,145,136,128,115,108,105,97,86,86,86,86,86,86,94,111,122,122,121,162,161,161,155,152,144,134,128,118,110,104,92,86,86,86,86,86,87,98,105,104,104,157,158,157,160,157,157,150,142,129,116,109,101,85,86,86,86,86,86,87,91,93,92,165,162,159,162,164,166,155,143,137,127,116,101,87,86,86,86,86,86,86,86,86,86,160,161,159,165,165,156,154,152,147,134,119,112,104,90,86,86,86,86,86,86,86,86,162,154,154,158,162,157,150,148,139,135,127,117,106,99,105,86,86,86,86,86,86,86,158,157,156,153,149,146,142,144,141,134,132,121,114,103,93,87,86,86,86,86,86,86,156,152,151,142,138,138,136,141,133,125,124,118,116,103,98,98,86,86,86,86,86,86,158,151,149,142,138,136,133,139,132,124,122,118,115,103,100,99,86,86,86,86,86,86],
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
