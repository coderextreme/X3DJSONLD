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
        texture=ImageTexture(url=['../../images/4/bosphorus11-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.22625451557576,28.660044773738264,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[48,69,68,86,119,112,91,93,73,78,86,102,85,104,124,113,96,113,132,104,75,73,46,78,99,115,127,122,112,105,70,85,112,105,89,125,128,112,97,95,108,95,73,71,45,50,83,88,110,113,99,85,75,83,113,121,94,126,147,123,104,88,86,80,70,72,67,70,65,99,129,109,95,79,81,111,106,117,104,126,146,121,113,103,90,83,74,75,61,92,82,110,145,135,110,77,82,108,139,122,121,137,132,135,132,112,88,81,75,79,68,102,114,128,145,122,101,80,108,112,140,130,142,136,118,110,108,110,95,80,79,82,78,84,129,133,111,100,90,86,96,118,138,161,162,122,121,124,98,95,86,79,79,88,107,103,120,121,109,108,102,96,127,118,135,171,163,147,137,133,116,98,93,80,86,94,74,92,93,122,130,133,114,97,138,157,168,159,133,122,109,113,105,97,85,80,84,93,70,69,88,121,155,127,103,94,138,140,157,142,137,135,130,126,106,104,87,85,88,84,103,94,124,140,152,118,119,95,114,129,161,132,112,111,100,101,98,91,80,105,105,101,84,83,116,119,132,137,121,98,114,141,164,134,117,115,122,105,105,91,93,100,93,94,55,70,92,85,105,132,124,99,120,132,166,152,146,138,132,108,103,81,98,109,116,114,93,74,69,97,107,134,130,104,126,155,146,146,142,149,136,119,94,91,115,110,132,122,108,109,90,102,130,141,131,112,124,156,126,116,121,121,135,115,87,107,127,128,133,120,112,103,102,115,117,127,123,120,144,159,130,123,101,103,120,95,92,106,111,131,114,109,93,74,77,88,93,128,136,125,145,149,137,115,123,101,94,88,104,113,101,128,107,101,63,84,93,105,98,114,132,129,155,135,127,134,140,117,90,99,105,127,104,128,109,107,74,98,118,137,125,120,141,133,159,139,123,116,112,114,89,113,131,129,120,151,118,119,67,77,96,124,144,141,155,155,158,137,125,104,95,91,97,100,128,140,150,151,117,113,70,99,116,131,118,104,121,141,150,147,116,110,116,94,121,97,115,125,148,140,121,114,76,94,105,120,89,76,97,96,109,132,126,141,112,102,129,108,110,127,155,148,127,119,106,88,106,120,91,57,81,66,89,132,157,148,110,111,139,114,106,126,146,139,105,99,108,91,108,117,93,55,79,63,85,130,156,145,110,111,141,115,105,126,143,134,101,94],
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
