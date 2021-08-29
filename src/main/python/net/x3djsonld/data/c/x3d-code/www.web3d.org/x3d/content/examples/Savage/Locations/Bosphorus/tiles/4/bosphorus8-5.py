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
        texture=ImageTexture(url=['../../images/4/bosphorus8-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,28.80840795623044,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[64,40,46,56,70,92,125,127,125,108,81,62,64,87,97,73,68,94,116,112,119,117,72,49,42,61,70,85,112,133,119,103,75,78,73,105,101,91,86,90,110,124,112,112,65,46,44,55,61,75,91,120,115,93,89,82,74,112,102,99,95,81,91,119,129,126,73,61,42,73,74,72,86,104,106,99,103,86,88,121,108,101,112,99,102,112,137,134,82,63,43,78,84,87,92,105,118,116,100,80,84,115,114,115,120,119,101,116,131,130,90,71,46,65,87,91,95,119,128,112,99,113,75,121,130,125,127,127,102,122,133,134,77,68,51,72,87,95,98,104,123,111,124,123,89,111,131,134,124,129,103,141,137,145,87,77,57,55,85,86,86,98,123,122,131,129,106,97,126,137,131,129,107,131,141,142,98,84,58,61,77,78,82,87,93,126,139,131,102,128,117,138,138,140,117,124,141,143,99,79,69,87,67,62,64,79,103,121,132,120,89,125,140,141,141,138,123,123,142,147,109,86,83,90,89,83,76,86,102,110,126,121,95,125,140,148,142,134,118,127,129,129,99,72,97,108,116,99,86,81,97,116,128,123,96,120,137,153,149,134,123,116,108,108,82,77,94,127,124,104,78,71,96,104,119,125,100,121,132,149,145,134,131,121,97,95,98,81,98,129,128,111,93,89,96,112,115,124,115,121,143,144,139,135,126,114,108,107,117,91,117,122,135,104,112,105,81,125,127,123,119,119,135,145,142,137,131,110,97,95,119,91,133,125,136,115,115,123,87,120,123,132,130,110,125,139,147,141,130,117,110,103,131,91,133,137,146,131,123,131,98,106,124,136,133,116,120,146,149,146,127,118,102,103,130,101,130,148,153,121,133,135,106,98,118,128,141,133,120,145,152,147,131,106,131,135,119,125,135,154,147,118,147,135,98,116,109,121,149,139,130,141,155,150,133,119,144,152,113,145,152,148,135,131,151,121,117,124,107,126,148,146,135,150,156,154,129,135,149,154,116,140,160,141,153,146,152,125,126,121,124,129,155,160,146,153,153,146,138,143,164,167,121,160,168,151,168,160,162,130,133,114,135,146,161,159,150,161,157,150,149,152,167,167,124,157,172,157,173,172,159,122,148,123,143,161,168,156,156,170,167,156,146,148,148,148,125,157,173,158,175,172,160,124,149,125,143,163,169,156,159,170,167,156,147,147,146,146],
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
