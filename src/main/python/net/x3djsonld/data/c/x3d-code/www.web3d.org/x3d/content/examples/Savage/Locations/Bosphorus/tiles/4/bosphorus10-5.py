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
        texture=ImageTexture(url=['../../images/4/bosphorus10-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,28.80840795623044,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[84,135,73,131,148,137,73,143,99,61,53,88,42,55,82,90,67,99,104,87,80,84,78,147,91,115,129,126,60,76,60,53,50,60,57,43,73,101,79,105,98,70,82,90,80,104,78,107,115,87,77,75,82,84,48,40,70,62,68,94,95,116,89,67,99,101,58,61,78,52,54,46,72,127,103,62,62,83,87,61,59,93,116,108,86,71,92,94,89,125,149,129,133,65,103,95,91,71,89,94,87,90,85,85,118,115,84,83,72,60,156,165,153,147,148,90,73,77,88,83,101,120,98,96,90,87,102,118,86,86,39,36,161,140,140,118,119,97,63,95,87,77,114,121,92,101,105,99,118,111,102,57,36,36,134,123,118,118,83,66,88,115,86,86,107,112,97,116,106,114,121,90,78,38,35,35,121,92,106,95,73,121,77,112,99,96,92,114,121,126,102,129,121,90,52,38,38,37,92,88,85,74,114,132,101,101,116,95,98,95,118,133,108,123,125,88,48,39,38,39,87,102,117,103,106,146,95,80,108,121,126,98,136,131,129,122,100,94,44,45,59,64,104,121,118,93,122,155,106,109,109,144,151,127,124,140,128,112,85,87,55,61,75,85,147,135,119,122,121,156,114,146,104,144,158,151,134,142,120,107,106,71,69,57,95,93,155,154,148,126,125,154,122,151,112,138,163,131,129,131,96,78,55,60,87,60,89,99,137,134,115,92,116,155,135,153,124,162,157,109,92,108,118,63,66,58,88,67,62,72,123,128,126,97,136,160,146,139,145,162,120,109,89,61,62,52,63,96,102,85,60,62,120,114,95,131,150,169,154,148,130,136,104,68,65,52,66,70,64,89,103,93,56,58,122,116,106,135,157,136,126,134,95,86,62,66,76,74,63,84,66,77,111,84,56,60,123,142,120,140,175,131,89,119,75,56,62,74,95,94,66,89,81,66,95,90,64,59,148,123,154,154,155,129,87,80,59,60,78,78,100,101,71,90,89,67,94,93,70,64,122,133,162,157,153,117,103,82,61,61,81,79,102,111,96,95,101,69,95,92,67,62,133,138,172,125,146,93,82,61,62,63,77,104,103,119,117,110,92,71,88,94,71,66,161,137,155,131,98,69,60,59,67,75,71,98,133,123,96,118,104,93,112,111,80,72,162,135,152,131,105,70,63,60,66,77,71,97,131,127,98,119,102,92,114,116,82,73],
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
