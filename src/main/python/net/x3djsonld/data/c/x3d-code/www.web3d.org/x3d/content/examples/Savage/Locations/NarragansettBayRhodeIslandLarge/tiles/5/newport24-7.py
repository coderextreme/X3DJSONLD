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
        texture=ImageTexture(url=['../../images/5/newport24-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[93,95,99,109,119,127,130,131,132,130,126,122,117,113,108,105,101,93,84,79,78,78,93,94,102,113,120,129,133,135,137,132,127,122,117,114,109,104,95,85,78,78,78,78,92,98,105,117,123,128,136,138,137,134,128,122,117,113,106,99,88,80,76,76,77,77,91,97,107,119,126,128,134,138,136,135,129,122,116,111,105,97,85,79,76,76,76,76,91,99,107,117,127,127,133,139,137,131,127,121,115,110,105,92,84,78,76,75,76,76,91,98,104,109,117,124,131,133,133,130,125,123,115,109,102,89,85,80,76,75,76,76,91,96,99,105,115,121,124,129,129,127,124,119,112,103,96,89,84,77,75,75,75,75,91,91,97,102,108,113,122,127,127,124,121,115,106,98,92,87,81,79,76,75,75,75,91,91,94,100,107,115,117,121,124,123,118,110,100,94,89,86,81,78,76,75,75,75,91,92,98,103,108,113,114,118,120,119,111,103,95,89,86,87,79,76,75,75,75,75,91,91,98,105,107,115,115,117,119,115,103,94,89,86,84,81,78,76,75,75,79,80,92,91,96,98,105,108,117,119,114,104,93,89,86,85,83,79,78,78,78,77,78,78,97,94,90,94,105,106,111,112,102,93,88,80,81,81,80,78,79,81,78,76,76,76,95,90,87,91,94,98,101,99,92,85,79,73,76,78,79,81,78,77,77,78,78,78,89,87,88,86,90,96,93,89,84,76,78,81,75,75,77,82,79,79,78,79,78,78,85,85,84,83,85,85,84,80,76,75,81,82,83,83,82,81,80,79,80,81,83,83,86,83,78,82,83,80,76,75,75,76,82,82,84,84,85,83,81,79,81,82,83,83,84,79,78,77,77,74,75,75,77,81,79,82,82,79,83,83,79,81,83,83,83,83,77,75,75,75,75,75,75,78,82,85,81,84,80,77,79,79,80,83,83,83,83,83,75,75,75,75,75,75,75,76,86,86,85,90,82,78,79,79,79,81,81,78,78,78,75,75,75,75,75,75,75,77,83,89,92,87,88,86,80,79,79,78,78,78,78,78,75,75,76,75,74,75,75,81,84,90,94,91,91,88,82,82,85,84,82,81,82,83,75,75,75,76,74,76,82,84,86,92,91,85,88,86,83,85,86,86,87,84,84,84,75,75,75,75,75,75,82,85,87,93,90,84,88,87,83,85,86,87,89,85,85,85],
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
