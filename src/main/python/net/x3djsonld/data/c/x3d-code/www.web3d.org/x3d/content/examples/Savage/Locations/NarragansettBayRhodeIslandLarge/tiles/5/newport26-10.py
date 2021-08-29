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
        texture=ImageTexture(url=['../../images/5/newport26-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[62,58,58,61,61,60,63,71,78,85,86,74,68,63,57,55,54,54,54,53,51,51,62,58,58,64,64,63,69,80,84,87,84,71,62,60,60,59,58,57,57,58,54,54,59,58,58,62,63,65,74,80,80,81,74,67,63,64,66,67,65,63,65,62,59,61,60,58,61,67,68,72,80,78,75,74,70,69,70,73,76,75,73,71,72,66,63,64,58,59,65,66,71,81,85,78,72,72,72,73,78,84,82,79,75,80,78,69,69,70,58,61,68,68,74,87,86,76,74,75,75,77,79,79,78,78,79,81,82,73,73,76,59,66,76,79,82,89,83,78,76,79,78,77,77,78,78,78,79,80,79,76,81,83,62,71,86,88,84,81,78,81,80,80,78,77,77,77,77,78,79,79,79,81,87,88,66,80,92,88,80,78,85,85,82,79,77,77,77,77,77,78,79,80,82,86,92,93,69,85,91,82,78,84,86,83,80,78,78,77,77,77,78,78,82,81,84,90,95,96,70,80,82,78,79,84,83,82,79,78,78,78,77,78,78,78,79,82,88,95,99,99,73,72,74,76,80,82,82,82,81,79,78,78,78,77,78,79,80,83,91,99,102,101,74,73,71,73,79,81,82,85,82,79,78,78,78,78,78,80,81,87,96,101,105,104,73,73,72,78,81,81,85,83,82,80,80,80,81,80,80,82,85,92,98,104,104,106,75,77,76,78,80,79,80,80,81,85,82,82,83,85,84,86,93,99,103,104,98,93,75,75,77,76,75,77,78,76,80,85,87,88,87,88,90,90,94,101,106,107,104,100,77,78,71,75,78,78,78,77,77,84,89,95,95,94,93,94,99,103,112,112,107,104,78,76,72,72,78,78,78,78,84,87,96,98,99,101,101,99,105,112,112,112,108,106,77,73,72,75,76,78,78,89,91,100,100,101,102,97,99,103,110,113,114,113,106,106,75,75,76,77,80,82,89,100,106,111,111,109,105,103,103,103,108,108,110,111,109,109,78,77,76,78,88,97,108,117,121,118,119,114,112,104,103,108,109,112,111,108,108,107,80,80,86,84,92,105,118,127,132,131,133,128,121,115,113,111,112,114,112,110,106,106,87,88,92,92,99,109,123,137,143,139,137,136,131,125,121,118,115,114,112,113,111,111,90,89,91,93,99,110,125,137,146,141,138,136,132,126,121,121,115,116,113,112,111,112],
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
