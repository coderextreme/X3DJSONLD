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
        texture=ImageTexture(url=['../../images/5/newport21-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[80,86,81,77,69,68,68,76,64,67,74,80,81,86,95,108,119,132,135,148,145,141,96,94,85,76,71,66,65,69,77,64,65,74,72,81,95,106,118,125,137,134,131,131,100,99,86,78,77,64,70,69,68,64,64,67,71,83,92,104,115,118,125,129,130,131,101,98,90,80,74,68,67,66,66,70,64,65,68,77,92,103,114,121,121,125,128,129,110,102,96,81,73,77,69,65,65,65,65,65,67,78,92,105,110,119,122,129,128,131,110,106,101,86,77,76,73,65,65,65,65,65,73,83,90,100,108,116,119,125,129,130,112,108,98,89,85,77,75,69,71,65,66,70,71,84,90,100,108,112,119,124,131,131,113,104,96,92,87,79,77,78,72,67,67,67,73,81,93,102,110,115,119,121,130,131,118,108,98,93,85,81,81,73,69,68,71,70,74,82,93,102,110,116,120,125,132,134,118,110,101,92,82,74,74,70,70,69,70,72,75,85,91,103,111,115,123,127,134,135,121,112,103,88,73,71,72,71,70,69,72,72,78,81,94,102,110,115,120,126,132,133,119,111,96,81,73,75,70,69,70,70,74,76,81,86,92,99,107,114,119,126,132,133,118,105,87,76,74,72,72,71,73,74,76,82,88,89,92,98,108,115,120,126,131,132,105,93,81,75,73,76,74,74,79,79,82,90,93,98,99,101,107,116,125,126,133,134,95,86,79,77,77,79,78,80,83,86,87,97,105,110,110,111,113,117,117,131,135,136,94,87,80,77,78,77,83,87,88,96,96,104,109,113,118,119,120,126,128,126,134,136,97,87,84,80,81,82,89,91,99,101,101,109,115,122,123,126,126,131,137,140,139,139,101,94,84,84,87,88,93,98,101,106,114,118,123,124,129,132,134,140,146,149,150,150,107,100,92,90,90,93,98,109,110,112,121,126,131,135,140,143,144,148,154,155,155,155,117,106,98,93,93,95,104,118,123,120,123,136,140,145,153,155,158,158,157,159,158,158,124,112,104,99,97,101,111,126,132,132,133,142,151,159,163,161,165,167,166,163,162,162,128,119,110,104,103,108,120,134,139,143,146,155,163,169,170,172,172,174,172,167,161,161,130,121,114,110,108,114,129,141,146,155,155,169,178,182,185,185,177,178,173,170,164,163,129,120,115,111,109,115,129,143,148,156,157,171,180,183,187,188,179,178,173,170,163,162],
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
