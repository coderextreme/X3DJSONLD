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
        texture=ImageTexture(url=['../../images/5/newport21-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[107,110,109,105,99,101,107,111,104,101,97,95,92,95,96,115,128,132,131,129,126,125,104,108,115,115,114,117,114,113,106,106,106,103,104,103,112,128,141,146,145,142,134,133,105,107,111,115,120,123,124,120,116,104,107,112,119,117,132,142,147,153,151,145,146,145,102,104,108,116,123,126,123,121,115,109,104,105,114,127,139,147,153,152,155,150,150,149,102,101,108,116,122,114,112,108,106,105,106,105,111,124,135,139,142,150,154,154,154,154,99,102,104,106,106,109,108,105,103,101,102,102,107,118,130,139,143,143,149,151,148,148,97,99,98,98,101,104,102,101,101,100,101,102,102,114,124,131,136,137,140,143,143,143,94,97,96,95,95,97,100,103,103,104,101,100,103,110,118,127,132,127,129,136,139,140,95,95,94,95,95,95,98,103,107,107,106,103,104,105,112,121,121,116,121,130,135,135,91,96,95,95,95,97,102,106,106,105,105,103,101,104,108,110,104,103,119,125,130,131,91,97,94,95,97,97,98,100,102,103,105,103,99,92,96,92,100,104,112,121,126,128,95,97,93,92,93,94,93,94,96,99,102,102,101,93,87,87,96,103,109,115,123,124,95,93,92,91,91,91,91,91,91,100,102,99,100,95,82,83,90,101,105,112,116,118,96,93,90,89,89,89,90,90,90,92,94,95,95,89,81,81,86,95,101,104,113,116,99,95,91,88,88,89,89,90,90,90,92,89,88,86,83,81,81,85,91,101,115,117,95,90,87,89,91,90,92,92,91,91,90,84,83,81,80,80,81,82,86,99,114,115,90,87,87,92,96,100,97,94,95,90,87,82,79,79,79,81,82,82,82,96,109,109,92,88,87,88,91,95,97,96,95,93,84,79,78,79,81,82,85,82,82,97,101,100,95,88,87,88,92,94,91,88,84,80,78,79,80,80,81,84,93,95,84,87,88,88,95,88,87,90,94,97,91,84,80,78,78,81,82,82,82,83,82,94,100,92,91,93,90,86,87,90,93,92,91,84,78,79,79,78,80,82,82,82,82,85,91,96,101,101,86,86,88,88,87,85,82,79,78,80,81,82,80,79,81,84,85,89,87,90,97,98,81,85,89,87,81,78,78,79,80,81,82,84,84,82,82,81,81,87,88,85,89,89,81,85,88,87,80,78,78,79,80,81,82,84,85,83,83,81,82,88,90,86,88,89],
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
