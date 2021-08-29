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
        texture=ImageTexture(url=['../../images/5/newport26-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[127,129,131,133,129,121,114,105,101,99,98,98,96,98,96,100,101,106,106,109,111,112,117,123,132,137,134,126,120,112,103,99,100,99,99,99,100,99,99,103,102,105,110,111,122,123,129,132,132,131,124,117,110,105,104,102,100,101,105,101,100,100,101,102,103,103,126,129,131,130,132,132,124,118,114,115,114,109,107,106,102,101,100,100,100,101,100,101,130,134,138,136,134,129,126,120,123,127,125,120,117,110,105,102,100,97,98,94,96,97,135,141,145,141,135,126,125,125,133,136,137,133,129,122,116,106,100,97,96,98,98,98,142,143,142,141,138,130,127,129,138,141,142,143,139,135,129,122,112,102,100,101,98,96,155,152,146,142,137,137,130,130,135,143,143,144,142,141,141,137,128,119,111,106,103,102,159,157,150,146,138,135,134,134,139,142,145,147,145,144,146,139,132,130,122,118,113,113,157,157,155,150,146,141,137,136,140,146,149,149,150,150,145,143,138,136,132,129,125,125,157,156,154,150,148,145,143,143,143,146,150,153,152,152,149,149,149,144,142,136,131,130,155,156,151,143,144,146,148,148,146,147,152,156,156,154,154,155,153,150,147,140,137,137,151,154,147,136,138,145,148,150,151,152,153,157,159,157,159,158,157,156,152,149,146,146,150,148,141,131,133,144,148,151,153,153,155,157,159,160,160,160,159,160,157,155,152,151,145,144,133,124,127,141,146,150,153,154,153,157,160,161,161,161,162,162,164,160,157,155,128,137,128,117,119,131,143,145,145,145,153,157,162,163,162,162,164,166,166,161,157,158,113,123,122,116,113,121,130,133,131,139,153,157,161,162,162,163,167,164,166,164,163,162,109,111,113,111,110,114,123,126,129,134,147,154,157,161,160,168,170,171,167,169,160,157,111,117,113,108,108,109,117,121,127,132,143,152,155,157,167,170,170,170,167,166,166,165,110,111,109,106,105,106,112,117,125,129,135,149,154,156,163,167,166,166,169,165,160,160,104,106,105,103,104,109,113,119,125,128,133,142,151,156,159,159,164,167,166,164,161,162,103,103,102,102,104,110,116,120,123,129,132,137,143,151,152,158,163,162,164,158,159,158,102,102,101,102,104,107,112,117,124,130,134,130,134,143,149,159,157,159,156,155,155,156,102,101,101,102,103,106,112,117,124,130,135,129,132,141,148,157,155,158,157,155,157,158],
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
