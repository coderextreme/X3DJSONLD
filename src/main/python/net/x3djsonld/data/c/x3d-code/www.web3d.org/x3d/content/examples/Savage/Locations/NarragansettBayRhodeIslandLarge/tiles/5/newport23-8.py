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
        texture=ImageTexture(url=['../../images/5/newport23-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[81,81,81,81,81,80,79,79,78,76,76,76,77,77,77,77,76,75,75,75,75,75,80,81,80,80,80,80,79,78,77,79,75,75,76,76,76,75,76,75,75,75,75,75,76,79,79,80,79,79,79,78,76,75,75,75,77,75,76,76,75,75,75,75,75,75,75,79,79,79,79,79,79,78,78,76,75,75,75,75,76,76,76,76,75,75,75,75,75,75,79,79,79,79,79,78,76,75,77,78,78,78,77,77,77,76,75,75,75,75,78,76,76,76,78,81,81,79,75,77,78,78,78,78,78,78,78,77,76,76,75,75,75,76,78,76,75,75,75,75,76,81,78,78,78,78,78,77,77,77,76,76,75,75,77,80,81,80,76,77,77,75,75,75,77,78,78,78,78,77,77,77,77,76,76,76,81,83,81,78,79,82,78,75,75,81,82,81,79,78,78,78,77,77,77,77,76,76,84,84,81,81,84,85,79,75,75,75,75,82,80,78,78,78,78,78,78,77,78,78,88,84,82,84,88,87,82,78,76,75,75,76,80,79,78,78,78,78,78,77,77,77,88,85,84,86,89,84,83,78,76,75,75,77,82,81,78,78,78,78,78,78,78,78,86,84,85,89,87,81,79,78,76,75,75,75,76,80,78,78,78,78,78,78,78,78,85,86,87,91,82,80,78,77,76,75,75,75,76,77,78,78,78,77,78,78,78,79,87,89,90,87,81,79,78,75,75,75,75,75,75,75,75,76,77,76,76,78,81,82,90,90,87,84,78,78,76,75,75,75,75,75,75,75,75,75,75,75,76,78,85,87,95,91,84,79,78,77,76,75,75,75,75,75,75,75,75,75,77,75,76,80,88,89,99,93,82,79,78,77,76,75,75,75,75,75,75,75,76,75,75,75,78,84,89,89,97,88,81,78,77,77,76,76,75,75,75,75,75,76,76,75,75,76,80,85,88,88,90,84,78,78,76,76,76,76,75,75,75,75,75,76,76,75,75,81,84,85,87,87,87,81,78,77,75,75,76,75,75,75,75,75,75,76,76,76,80,88,88,87,87,87,79,78,77,76,76,75,75,75,75,75,75,75,76,77,78,84,90,91,91,90,90,90,78,77,77,76,75,75,75,75,75,75,75,75,76,78,85,90,91,92,93,93,93,92,78,77,76,76,75,75,75,75,75,75,75,76,76,78,87,90,91,92,93,93,93,93],
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
