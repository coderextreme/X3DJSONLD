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
        texture=ImageTexture(url=['../../images/5/newport25-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[116,120,126,124,122,115,109,107,107,110,111,107,107,107,102,98,102,102,102,102,97,96,114,124,131,131,124,114,108,102,100,101,104,104,106,109,105,101,102,104,102,95,93,91,115,120,126,127,122,111,103,98,96,96,96,98,102,99,103,104,105,105,99,97,92,92,112,112,116,113,112,107,99,95,93,90,94,93,94,98,99,106,102,95,93,90,90,91,109,106,103,103,98,99,96,95,91,92,93,94,93,95,99,99,95,91,87,84,86,86,106,101,98,95,98,96,94,95,94,98,92,97,96,95,95,94,89,86,86,86,88,88,105,102,101,99,100,103,101,99,101,98,98,94,95,94,92,90,89,89,88,93,96,95,100,102,103,105,108,110,112,109,108,103,96,94,94,94,92,91,91,92,99,99,101,101,108,109,109,113,116,117,122,117,108,102,101,97,95,95,92,89,92,98,109,106,104,104,114,115,118,117,120,122,123,118,108,101,96,95,96,98,98,95,96,102,99,104,105,106,111,116,121,121,125,121,117,114,106,98,96,98,99,97,99,98,98,96,98,100,102,103,124,123,124,128,127,121,113,105,101,99,99,98,97,97,99,100,99,97,99,100,99,99,129,131,132,133,134,130,119,108,100,97,97,99,100,101,102,106,105,106,105,101,98,97,135,139,142,140,135,131,126,114,104,100,103,110,113,117,115,115,111,113,110,109,106,105,144,149,149,149,146,137,124,119,109,105,109,113,120,122,124,123,125,126,129,134,130,126,148,156,157,150,146,140,131,123,115,108,108,121,128,133,138,137,147,151,151,152,150,147,151,157,162,155,152,145,128,124,118,112,113,128,137,145,156,154,159,165,163,163,168,168,153,165,166,160,152,140,130,123,121,117,118,132,143,154,162,170,172,172,173,175,178,179,159,166,166,158,148,141,136,127,123,123,121,130,141,153,161,166,173,172,173,176,176,175,158,162,165,159,152,144,136,127,126,126,128,130,140,150,159,165,169,172,171,175,173,175,164,169,169,163,154,142,134,131,128,127,128,128,135,145,156,160,169,172,173,168,167,168,169,171,171,164,155,144,136,132,126,128,128,131,140,143,152,161,168,166,166,164,163,163,169,174,170,165,155,146,138,137,131,126,130,138,146,151,155,160,159,160,158,158,161,163,169,174,169,163,155,146,138,138,132,126,131,139,147,151,154,160,159,159,157,158,161,163],
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
