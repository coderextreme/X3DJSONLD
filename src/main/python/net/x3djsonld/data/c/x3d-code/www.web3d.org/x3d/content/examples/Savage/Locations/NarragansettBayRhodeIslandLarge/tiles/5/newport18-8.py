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
        texture=ImageTexture(url=['../../images/5/newport18-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[128,133,132,127,123,115,111,113,112,112,109,110,111,105,97,88,82,76,72,67,68,68,130,132,130,123,118,114,116,113,115,115,111,108,106,98,92,85,78,74,73,77,77,76,132,134,132,121,116,113,115,116,116,114,109,106,100,93,86,82,75,73,75,78,78,78,129,130,126,119,116,117,116,115,113,109,107,101,95,90,84,80,78,75,75,80,80,80,128,126,121,122,121,118,115,112,110,106,103,96,91,89,84,76,76,78,77,81,83,83,124,117,117,118,121,120,117,113,108,102,99,95,89,84,80,76,74,75,77,81,83,84,123,118,115,120,122,119,116,115,104,98,94,92,86,82,76,78,80,75,79,83,83,83,115,119,116,118,120,119,115,109,105,97,95,89,86,80,78,77,77,79,81,86,86,87,113,116,118,117,116,115,111,106,105,102,94,87,84,85,80,78,81,83,84,86,89,90,114,117,120,116,113,111,108,105,102,99,93,89,84,80,82,84,86,88,88,88,88,88,112,113,113,110,111,110,108,104,102,96,92,90,87,84,84,87,89,91,91,91,94,94,108,111,111,109,106,103,103,102,103,95,92,91,88,87,90,91,93,94,93,98,97,96,102,101,101,101,100,100,100,101,101,96,89,88,88,91,94,99,100,101,102,99,101,101,98,100,100,100,100,101,104,100,97,94,90,86,88,96,103,107,108,109,108,104,102,102,98,100,100,100,101,105,105,102,97,94,92,89,93,100,107,113,115,116,114,111,108,107,100,100,100,102,108,109,108,106,98,95,91,92,98,107,112,116,122,126,121,116,114,113,103,103,109,111,110,112,111,107,103,97,95,97,104,113,118,121,128,125,122,122,120,120,107,107,110,114,113,113,114,106,102,98,98,100,108,116,123,127,129,126,127,128,124,123,109,107,109,112,116,115,111,106,100,100,100,107,113,119,126,131,131,130,132,128,128,128,108,107,107,106,109,111,108,105,104,102,104,110,117,124,130,136,133,131,130,132,133,133,110,107,106,106,104,103,103,102,102,103,112,116,121,130,137,138,133,134,137,139,134,134,110,108,107,106,104,102,101,98,99,104,113,120,128,132,137,140,137,137,143,144,139,137,114,110,105,104,106,103,97,102,102,105,111,119,130,138,142,142,142,142,145,145,137,134,115,111,105,105,106,103,97,101,102,104,112,119,131,139,143,142,142,142,146,145,136,132],
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
