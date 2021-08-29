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
        texture=ImageTexture(url=['../../images/5/newport26-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.742440727267926,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[99,97,94,91,90,90,89,88,87,86,82,80,81,81,81,77,71,71,68,66,62,62,96,94,93,91,90,89,87,86,87,83,80,76,74,80,82,72,70,69,67,64,62,62,97,96,94,92,91,87,87,84,81,78,77,73,70,74,78,71,70,68,66,66,61,59,102,101,96,93,90,88,87,87,84,77,75,73,69,67,67,69,67,68,70,64,60,60,106,105,102,98,95,91,85,84,82,78,76,72,71,68,66,64,63,63,63,60,59,58,110,108,105,102,98,93,89,86,83,80,76,74,75,71,70,68,65,64,61,58,58,58,112,112,110,106,103,99,92,89,88,83,79,77,74,72,70,67,61,59,58,59,59,59,115,117,114,111,108,102,98,94,93,83,84,82,77,78,71,66,60,58,61,61,61,62,118,118,118,116,111,103,97,101,92,81,85,84,75,80,72,66,58,60,60,61,64,66,121,124,123,120,111,106,96,102,87,76,89,84,76,75,66,58,60,60,62,64,68,69,123,127,128,118,112,108,94,95,84,74,85,79,68,63,58,59,61,62,65,69,70,70,123,129,126,116,109,99,93,92,85,77,70,67,65,60,60,65,63,63,67,73,74,73,123,128,125,117,102,95,88,90,80,77,73,62,60,61,67,70,68,69,70,73,74,74,120,127,119,110,97,89,84,81,78,74,72,61,64,70,70,70,70,72,73,75,74,73,128,123,114,96,87,86,85,78,77,76,71,64,67,68,72,73,74,75,75,76,75,75,121,113,103,90,85,85,84,82,80,74,74,70,68,71,76,76,82,77,77,77,75,75,104,99,94,93,85,85,85,85,85,84,79,71,66,70,75,80,81,81,80,78,76,77,92,90,92,86,86,86,85,85,85,85,85,84,76,74,79,76,78,84,81,79,78,78,86,86,86,86,86,86,86,86,86,86,86,86,86,84,80,81,82,87,79,79,77,77,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,90,89,77,78,79,75,75,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,87,85,81,81,78,78,78,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,89,89,85,86,80,80,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,88,85,86,88,87,87,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,86,89,85,87,88,89,90],
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
