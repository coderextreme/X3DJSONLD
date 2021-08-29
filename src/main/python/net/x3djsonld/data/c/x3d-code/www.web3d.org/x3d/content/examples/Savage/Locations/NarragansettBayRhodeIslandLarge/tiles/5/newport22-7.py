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
        texture=ImageTexture(url=['../../images/5/newport22-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[144,147,147,151,151,147,142,142,133,124,117,110,103,99,98,97,94,89,84,87,80,80,147,151,149,146,144,142,137,130,122,119,115,107,100,96,95,92,88,83,79,79,80,80,151,153,151,147,139,132,128,122,119,111,108,103,100,98,96,96,92,88,85,81,80,80,153,152,151,145,136,129,121,119,116,111,107,102,101,100,104,102,95,91,87,85,83,82,149,144,143,143,134,128,124,119,115,112,104,103,101,100,104,103,100,92,85,84,83,82,144,139,141,133,131,129,130,126,119,111,104,102,100,98,100,104,97,87,83,82,82,82,138,138,134,130,129,130,126,119,115,109,105,106,101,97,91,93,95,87,81,82,82,82,136,135,132,126,126,122,120,117,111,108,108,107,104,100,94,83,96,88,80,80,82,82,136,134,126,125,121,117,115,115,110,113,110,106,103,99,90,83,83,82,80,79,80,80,138,135,129,125,120,116,115,113,110,113,111,105,103,99,88,84,77,78,78,78,77,77,143,137,134,128,123,120,117,114,112,110,106,101,95,91,90,84,77,77,76,75,75,76,143,139,135,130,125,123,117,116,112,109,102,95,86,82,82,85,81,76,76,75,76,76,144,141,136,129,127,120,114,113,111,105,98,92,87,83,80,78,77,76,77,77,78,78,146,141,133,126,121,115,116,113,109,102,93,88,82,82,82,80,77,76,77,78,80,81,141,138,134,128,119,115,112,108,104,96,88,85,82,79,78,78,77,76,76,78,87,91,142,140,132,124,115,109,110,106,99,92,87,86,86,82,80,78,77,76,76,79,99,104,143,135,126,117,112,105,103,99,93,88,86,86,91,89,82,78,77,77,77,85,104,107,134,129,123,116,111,105,99,92,86,86,84,85,90,87,82,78,78,78,80,93,111,113,131,125,118,111,105,99,95,91,84,82,81,82,86,85,79,77,77,80,83,99,111,113,125,123,116,111,103,95,94,88,81,79,80,80,80,81,80,77,76,79,87,101,111,112,128,120,111,102,94,90,91,81,81,81,82,80,74,77,80,76,76,77,83,96,104,104,123,116,104,95,89,85,83,88,84,81,79,80,77,74,76,76,76,77,86,90,87,87,114,106,96,90,90,92,85,84,81,81,82,84,82,80,79,80,76,77,82,84,81,81,111,104,96,89,89,91,86,84,83,81,83,84,82,81,79,81,78,77,80,82,81,81],
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
