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
        texture=ImageTexture(url=['../../images/4/bosphorus11-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.22625451557576,28.511681591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[34,38,53,47,45,40,28,19,24,51,54,105,73,142,165,124,100,147,162,175,171,170,35,41,54,56,54,42,28,27,21,35,37,56,71,117,156,131,75,103,130,161,173,170,34,46,57,62,61,42,36,30,24,23,56,67,62,88,145,130,69,108,135,157,171,168,33,45,63,70,65,53,45,44,33,23,43,102,111,116,138,123,59,82,109,152,163,159,37,51,70,81,80,61,54,61,45,30,27,79,122,138,118,86,72,103,152,170,161,157,40,51,71,93,98,71,69,83,52,31,27,32,66,119,75,47,88,123,149,163,166,169,41,56,75,101,128,94,88,89,51,51,49,35,33,39,43,63,55,77,105,157,176,178,46,62,75,103,151,134,103,80,46,65,90,63,38,49,72,104,75,75,87,127,166,170,39,55,75,100,139,142,98,67,68,116,118,102,44,52,99,121,85,123,84,102,123,130,52,46,70,88,123,149,113,106,70,129,142,94,43,59,70,121,129,132,98,127,157,170,68,61,57,67,93,150,140,136,91,114,122,90,43,99,66,106,152,154,131,131,177,181,75,88,93,76,74,110,164,149,106,136,97,56,47,99,102,88,139,169,161,175,178,181,78,111,115,110,108,88,139,167,122,137,73,76,53,92,126,134,125,168,174,195,183,180,75,118,118,139,139,110,140,169,138,115,71,116,71,71,99,137,162,179,178,182,194,194,58,93,84,123,115,143,131,165,153,98,104,124,78,66,121,132,149,160,145,145,200,204,43,61,79,113,97,110,147,171,145,93,109,130,111,72,80,126,128,124,113,159,186,192,55,46,78,78,73,91,135,166,144,100,117,148,99,111,84,87,97,112,147,160,189,188,79,55,49,65,99,118,132,137,147,110,151,142,109,144,120,108,118,146,116,154,181,180,95,62,55,61,87,103,93,102,143,136,145,142,126,126,133,139,134,97,101,122,159,151,90,66,76,62,60,68,94,122,134,160,157,114,81,93,85,125,84,70,79,112,144,145,86,96,85,89,79,72,94,119,131,148,134,108,61,93,53,105,69,44,58,83,136,142,101,109,103,117,89,108,79,93,102,130,145,109,56,68,48,105,58,62,104,114,105,108,128,115,133,136,110,138,99,107,141,146,116,87,54,38,42,80,38,70,108,80,70,82,132,117,134,138,116,142,101,105,144,147,109,75,51,39,36,72,34,65,105,79,66,78],
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
