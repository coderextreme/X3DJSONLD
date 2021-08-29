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
        texture=ImageTexture(url=['../../images/4/bosphorus9-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.11691829101653,29.17931591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[156,119,131,143,170,190,168,178,201,172,164,143,117,89,101,119,152,133,156,152,101,74,142,121,133,173,182,207,192,144,162,143,154,138,123,101,106,123,146,160,135,122,98,86,112,109,96,137,178,229,194,145,128,125,155,138,110,99,83,106,143,136,138,113,87,77,134,141,108,143,211,200,167,159,136,109,136,142,141,113,114,86,139,101,121,110,92,88,161,177,117,142,153,172,195,179,150,117,103,112,125,116,121,65,124,72,89,105,86,80,182,151,94,100,144,139,185,171,147,144,127,112,86,97,116,80,52,62,85,92,52,48,144,139,106,92,144,136,172,150,163,147,127,137,113,73,77,73,56,69,42,42,51,57,146,125,113,84,107,146,116,136,155,148,156,127,88,113,74,103,111,111,86,81,64,59,112,99,104,104,81,101,112,157,164,160,164,106,124,142,82,124,140,107,71,50,49,42,145,114,99,67,86,106,123,142,164,138,131,118,143,143,97,108,131,101,105,78,52,57,146,115,68,89,125,128,151,123,145,166,130,145,134,114,112,123,146,135,117,89,74,70,158,100,68,116,113,144,142,112,129,133,140,157,143,152,138,147,160,149,140,95,85,82,139,115,74,58,98,133,110,100,93,102,118,132,123,139,145,153,105,97,88,43,34,43,123,131,116,65,106,96,84,85,103,113,104,118,107,89,89,111,99,51,66,84,69,60,121,135,88,78,49,71,64,74,81,90,90,116,95,86,86,90,65,74,100,116,88,88,110,150,107,48,69,119,101,106,93,97,106,115,105,107,114,98,103,102,125,141,148,142,111,142,119,48,111,127,107,95,93,114,103,130,141,145,165,171,165,159,172,171,109,113,134,121,123,58,45,79,61,98,88,114,141,134,163,180,183,148,160,174,124,141,84,60,127,132,131,96,39,69,111,96,144,124,164,172,173,186,174,127,127,171,155,93,60,65,115,129,142,134,56,42,101,135,169,155,176,162,163,165,149,110,108,163,126,130,128,126,103,141,161,126,66,36,90,161,164,158,149,157,176,171,134,104,95,139,125,153,158,158,84,125,120,79,67,30,58,121,131,100,122,150,156,144,155,127,77,111,136,151,150,153,100,125,161,122,110,53,25,78,131,69,123,157,133,137,106,96,109,145,151,122,124,134,102,126,167,128,115,60,26,63,123,64,121,160,125,138,100,91,112,150,149,115,123,132],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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
