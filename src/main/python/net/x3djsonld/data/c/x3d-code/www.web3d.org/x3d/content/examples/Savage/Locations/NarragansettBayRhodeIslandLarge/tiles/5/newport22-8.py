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
        texture=ImageTexture(url=['../../images/5/newport22-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[80,77,75,75,77,79,79,81,78,78,79,80,81,84,89,90,92,94,91,85,81,81,80,78,76,75,76,77,78,79,80,78,80,83,85,87,91,90,90,88,85,80,80,81,80,80,78,76,75,75,76,77,79,78,79,85,84,85,84,82,86,81,78,78,83,84,82,82,78,76,75,76,77,77,77,78,78,79,80,82,78,78,78,78,78,79,84,84,82,81,78,76,76,78,81,80,80,79,78,78,78,78,78,78,78,78,78,78,78,78,82,82,77,75,79,81,85,88,88,86,83,79,78,78,79,79,79,79,79,79,79,79,82,80,76,76,79,83,88,90,92,91,86,82,78,79,81,81,82,82,81,81,81,81,82,80,75,78,80,87,91,94,94,92,86,82,81,82,85,88,89,87,85,85,84,84,80,77,75,79,83,93,95,97,98,93,89,86,84,84,87,99,99,99,99,96,92,92,77,75,76,82,93,100,102,103,103,102,98,90,83,85,89,93,95,98,95,98,100,100,76,77,81,94,103,105,107,109,109,105,99,88,81,82,83,86,88,90,89,92,100,100,76,79,93,101,109,111,113,115,110,103,95,85,81,79,80,81,83,86,85,86,84,83,78,88,104,112,115,116,118,116,109,101,93,85,80,78,78,79,80,81,82,79,76,76,81,98,111,118,119,121,120,115,107,100,93,84,81,79,78,78,79,80,80,77,76,76,91,107,117,123,124,121,118,114,108,99,91,87,86,81,79,78,78,78,78,78,76,76,104,114,122,125,123,120,117,113,106,97,92,89,85,81,79,78,78,78,78,78,77,77,107,118,124,122,118,117,115,108,100,93,92,91,90,83,79,78,78,78,77,77,77,77,113,120,121,118,115,114,112,103,95,90,90,90,84,80,78,78,78,77,77,77,77,77,113,118,117,113,112,111,106,97,89,86,86,87,81,78,78,78,77,77,77,77,76,76,112,112,108,105,108,105,98,88,82,82,81,79,78,78,78,77,77,77,76,76,76,76,104,102,98,99,101,95,86,81,80,79,79,78,78,78,77,77,75,75,76,76,76,76,87,87,86,92,90,82,81,80,78,78,78,78,77,77,77,77,76,75,75,75,76,76,81,81,81,82,81,80,80,79,78,76,76,76,77,77,77,78,76,75,75,75,75,75,81,81,81,81,81,80,79,79,78,76,76,76,77,77,77,77,76,75,75,75,75,75],
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
