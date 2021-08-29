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
        texture=ImageTexture(url=['../../images/5/newport24-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[93,92,93,94,89,79,76,75,75,75,75,75,75,75,74,73,73,72,72,72,72,72,95,94,95,92,83,76,76,76,75,75,75,75,75,75,75,75,75,73,72,72,72,72,95,93,89,81,76,74,73,74,76,75,75,75,76,76,75,75,73,73,72,72,72,72,91,84,78,75,74,73,72,72,74,73,73,72,73,74,75,75,75,73,72,72,72,72,80,77,76,76,76,73,73,72,72,72,72,72,73,76,73,75,74,72,72,72,73,74,73,72,72,73,72,72,72,72,72,72,72,72,72,74,76,76,72,72,72,74,75,75,74,72,72,72,72,72,72,72,72,72,72,72,72,72,72,72,72,72,73,75,75,75,75,75,73,72,72,75,76,77,74,72,72,73,74,73,72,72,73,74,75,77,78,78,75,75,72,72,74,77,77,76,73,72,72,72,75,75,74,74,75,76,79,79,82,83,75,73,72,72,76,77,77,76,74,74,74,74,74,74,74,75,77,79,81,86,89,88,75,76,76,75,75,76,78,75,74,74,74,74,74,74,74,76,78,81,88,96,92,91,76,79,78,76,75,77,78,75,74,74,74,75,75,74,75,77,81,85,96,100,93,92,76,79,79,76,75,75,76,79,76,74,74,75,77,75,75,78,81,87,96,98,92,92,79,76,78,78,77,77,76,76,74,74,75,75,75,75,75,81,83,85,94,96,96,96,82,78,78,78,78,78,76,75,75,75,75,75,77,77,79,82,84,87,94,97,97,98,83,78,78,78,78,77,76,77,78,78,80,78,80,82,81,83,85,87,92,98,102,103,86,81,79,78,78,78,78,78,79,81,83,85,88,90,85,84,86,89,95,103,105,106,89,89,86,81,80,79,79,79,79,83,86,89,92,94,90,87,87,88,95,103,106,106,94,94,88,86,83,81,81,82,83,87,90,94,96,97,95,90,88,88,92,101,104,105,98,98,92,91,88,86,86,86,90,95,97,100,102,100,97,91,89,90,90,94,98,99,110,104,98,97,93,92,91,94,96,103,106,106,106,105,101,95,90,94,94,94,101,102,118,112,102,102,99,97,96,101,105,109,110,109,109,107,104,98,93,95,98,100,102,103,122,116,108,107,105,104,101,106,110,113,114,112,110,107,103,98,94,98,99,101,103,103,123,117,109,108,106,105,102,106,111,113,114,112,110,108,103,98,95,98,100,101,103,103],
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
