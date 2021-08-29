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
        texture=ImageTexture(url=['../../images/4/bosphorus9-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.11691829101653,29.401860686199143,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[151,171,166,161,130,103,135,130,94,87,98,121,101,81,124,126,99,136,151,130,142,156,166,169,159,153,144,110,110,135,134,100,75,102,84,75,103,135,118,114,138,112,153,160,168,144,152,128,128,115,91,103,116,130,109,88,92,68,89,116,152,100,86,121,118,118,156,132,137,132,119,82,78,80,83,78,78,75,73,67,106,84,143,124,117,84,76,82,143,140,104,110,87,90,128,120,135,153,108,114,112,89,76,67,117,77,82,66,70,67,149,123,110,81,103,93,130,147,149,138,78,133,150,150,126,95,58,61,84,78,71,72,136,95,88,86,127,111,124,156,138,95,108,122,162,146,162,130,67,93,113,100,115,113,92,98,120,98,115,130,117,148,112,88,134,160,155,121,113,87,83,131,133,131,91,88,112,131,144,104,105,148,130,135,110,121,100,148,155,139,92,77,109,140,136,143,111,106,134,137,119,99,103,113,136,153,142,141,108,122,147,111,82,111,86,92,109,140,122,116,125,136,118,114,107,130,126,133,119,113,119,142,146,135,106,125,113,124,104,134,115,110,124,127,110,118,128,135,136,149,145,137,135,142,135,133,123,136,140,141,123,139,97,93,140,132,121,124,135,106,131,137,116,148,123,142,146,112,122,136,139,146,155,143,107,114,126,136,134,138,140,120,99,125,103,135,132,146,134,114,110,114,123,141,156,153,130,128,118,116,146,135,119,122,93,125,104,131,133,116,111,129,92,97,102,131,145,138,155,153,101,91,106,129,126,101,107,90,127,117,133,118,99,120,100,111,116,135,142,140,130,130,114,98,103,110,132,131,139,94,95,107,128,121,112,89,85,100,93,100,140,151,128,124,107,92,102,128,107,122,109,111,93,95,109,131,105,112,110,80,107,137,148,146,125,121,106,110,92,96,106,137,117,94,100,109,133,142,134,143,121,89,109,144,130,131,146,142,130,97,87,98,126,117,130,90,86,102,130,143,132,113,125,98,123,122,98,140,124,129,132,119,94,103,138,105,91,84,81,121,129,139,128,111,104,86,91,87,106,140,120,114,129,116,99,89,126,111,99,96,86,133,117,117,120,102,81,67,68,59,112,120,132,123,135,128,95,77,95,117,121,104,67,113,120,91,86,103,106,100,96,53,100,106,114,113,133,127,98,70,97,111,123,108,64,111,121,92,82,106,109,108,103,58,91,109,113,112],
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
