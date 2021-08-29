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
        texture=ImageTexture(url=['../../images/4/bosphorus8-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,28.585863182492176,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[6,10,15,30,56,76,95,114,117,120,159,186,179,160,126,121,139,128,112,81,104,110,7,13,19,24,43,59,77,99,119,142,168,176,166,148,141,148,139,115,95,93,113,116,9,11,30,29,33,47,61,91,110,143,177,182,171,166,158,153,127,100,91,107,121,123,14,12,26,47,50,60,78,95,123,155,181,184,179,169,148,135,113,100,99,111,131,133,22,16,21,46,66,77,93,109,136,165,181,177,170,163,139,115,112,114,100,114,127,129,28,21,21,38,60,80,103,129,154,177,173,161,152,138,119,125,132,113,113,121,122,126,42,30,22,30,47,69,94,115,138,160,180,162,144,130,139,148,139,112,126,135,135,137,59,47,31,29,39,63,77,99,119,144,175,177,152,145,156,168,146,115,140,147,145,145,74,63,42,40,37,48,68,87,109,134,160,172,144,158,168,168,145,121,151,154,147,142,81,75,66,57,53,44,59,82,99,120,142,170,157,166,176,170,147,125,153,159,139,130,76,89,86,75,73,53,54,63,80,106,131,164,167,175,173,163,147,131,152,166,146,135,71,94,101,97,85,81,83,77,72,92,116,153,174,179,172,157,142,152,146,168,155,147,65,93,108,116,105,100,107,107,90,107,131,155,180,175,165,164,158,163,153,165,155,148,62,77,96,120,124,127,130,132,124,114,137,178,182,173,163,159,165,170,159,166,145,140,46,65,86,104,112,124,137,151,153,139,160,180,166,161,169,168,170,176,166,169,137,131,39,56,75,85,87,107,114,132,150,174,182,175,151,160,173,172,172,184,175,175,152,139,34,51,56,67,75,88,98,121,149,167,177,159,140,166,179,179,173,187,182,177,147,136,41,41,55,68,78,95,116,139,160,153,158,146,132,150,174,183,180,179,168,166,151,149,61,60,50,61,69,87,104,126,148,157,131,117,155,168,175,179,177,162,157,129,135,119,76,78,59,74,88,94,114,140,165,175,142,116,159,175,172,169,158,135,143,92,97,80,78,84,69,80,96,119,125,162,174,158,118,119,136,175,156,155,135,113,116,78,46,50,86,99,78,88,105,136,154,178,148,121,99,128,161,176,145,118,109,105,80,50,67,73,92,109,92,92,125,155,182,180,155,101,92,121,165,179,142,104,87,83,53,64,71,76,94,111,94,94,128,157,180,178,160,100,94,119,164,179,142,106,84,79,57,67,71,76],
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
