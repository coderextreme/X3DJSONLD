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
        texture=ImageTexture(url=['../../images/5/newport24-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[78,77,76,76,75,75,75,75,75,75,75,76,76,78,87,90,91,92,93,93,93,93,78,77,76,75,75,75,75,75,76,75,75,76,77,85,91,92,93,94,94,94,95,95,77,76,75,75,75,76,75,76,75,75,75,76,83,92,93,94,94,94,95,95,95,95,76,76,76,75,76,78,76,75,75,75,75,77,91,94,95,95,94,93,92,93,92,91,76,77,77,78,79,78,76,75,75,75,75,84,89,90,93,94,92,89,87,86,81,80,76,76,76,79,79,79,77,75,75,75,76,82,84,87,89,89,87,85,82,77,73,73,75,75,75,75,79,79,79,78,75,75,75,79,80,84,85,83,81,78,75,75,74,74,75,75,75,75,75,75,75,77,75,75,75,75,76,77,77,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,75,79,80,77,75,75,75,75,75,76,75,75,75,75,75,75,75,75,80,77,75,77,78,79,80,75,75,75,75,76,78,76,78,79,79,78,75,75,75,75,78,76,75,76,79,80,80,80,75,76,79,75,75,78,78,79,79,78,75,75,76,76,76,75,75,75,76,76,78,78,76,76,75,75,76,78,78,78,78,76,75,77,76,76,78,78,78,78,78,77,77,77,78,78,77,76,77,79,80,80,78,76,78,81,80,79,78,78,78,79,79,79,78,78,78,78,78,78,78,80,83,83,80,82,85,85,83,82,83,83,82,82,81,79,79,78,78,80,81,82,85,86,86,87,88,93,92,88,84,83,83,84,83,83,83,81,79,78,78,79,83,89,90,91,94,94,107,104,100,95,88,86,83,83,84,82,80,78,78,79,79,79,82,89,93,101,100,106,117,112,105,94,89,89,83,84,84,83,79,79,82,84,87,82,83,93,100,105,105,114,119,117,109,98,93,94,78,82,84,83,80,82,88,90,90,90,87,92,100,106,111,118,121,119,112,101,98,98,78,79,80,84,85,85,92,96,94,93,92,95,103,108,116,122,123,119,112,110,110,110,83,82,81,87,87,88,93,99,100,99,99,103,105,112,122,127,125,119,116,118,119,118,84,83,81,85,90,93,99,105,109,105,104,108,111,120,129,130,126,123,120,121,123,122,85,84,81,85,90,94,100,106,109,107,105,109,112,122,130,130,127,124,120,122,124,123],
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
