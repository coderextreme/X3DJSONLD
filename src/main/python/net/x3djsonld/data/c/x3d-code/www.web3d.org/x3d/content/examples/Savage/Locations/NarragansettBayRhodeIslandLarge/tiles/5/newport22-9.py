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
        texture=ImageTexture(url=['../../images/5/newport22-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[81,85,88,87,80,78,78,79,80,81,82,84,85,83,83,81,82,88,90,86,88,89,81,83,82,79,78,78,80,81,81,83,84,85,86,87,87,91,85,86,91,91,87,87,84,85,81,78,78,82,83,83,83,84,86,87,92,94,100,99,101,102,100,100,90,90,84,89,87,80,78,78,82,85,89,91,93,97,99,99,99,101,102,105,104,101,91,91,78,78,78,78,79,79,79,80,81,84,88,95,99,100,100,102,104,106,105,101,95,95,79,79,79,80,81,82,82,82,81,81,81,83,84,86,93,94,101,104,104,101,100,101,81,80,81,82,82,82,86,86,88,84,86,84,83,84,84,90,93,96,101,99,100,101,84,83,82,83,84,86,93,87,94,91,90,86,84,89,85,85,85,88,100,103,99,99,92,91,87,85,87,95,94,93,93,96,97,93,86,89,92,87,86,89,89,91,93,93,100,101,99,95,94,87,88,88,82,81,83,94,100,100,100,93,90,93,98,92,91,90,100,93,92,86,86,78,76,76,81,87,84,88,96,103,103,99,102,101,101,94,92,92,83,84,82,77,76,81,76,76,80,95,99,102,103,102,103,103,103,104,102,97,96,95,76,76,76,76,76,76,76,76,81,86,94,97,102,104,103,103,104,104,103,102,102,102,76,77,76,76,76,76,76,79,80,81,83,86,88,92,99,103,104,103,103,103,103,102,76,77,76,76,76,77,78,78,79,80,82,84,93,97,98,101,102,102,101,103,102,101,77,77,76,76,76,77,77,78,78,79,81,84,94,100,99,99,100,98,99,99,100,100,77,77,76,75,76,76,77,77,78,78,80,83,95,100,101,93,93,95,97,97,99,99,77,76,76,75,76,76,76,77,77,78,78,81,91,90,99,91,94,98,99,99,99,99,76,76,76,75,75,75,76,76,76,76,77,78,80,82,85,89,94,99,101,102,101,100,76,76,76,75,75,75,75,75,75,75,76,77,78,81,89,99,97,100,100,100,100,100,76,76,76,75,75,75,75,75,75,75,75,76,78,84,96,95,96,97,99,100,100,100,76,76,76,75,75,75,75,75,75,75,75,75,77,81,91,94,94,95,96,97,98,99,75,76,76,75,75,75,75,75,75,75,75,75,76,79,85,89,90,92,95,97,99,100,75,76,76,75,75,75,75,75,75,75,75,75,75,79,84,88,89,92,95,97,99,100],
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
