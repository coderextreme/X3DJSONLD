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
        texture=ImageTexture(url=['../../images/5/newport23-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[75,76,76,75,75,75,75,75,75,75,75,75,75,79,84,88,89,92,95,97,99,100,75,75,75,75,75,75,75,75,75,75,75,75,75,78,79,82,87,91,95,97,98,98,75,75,75,75,75,75,75,75,75,75,75,75,75,75,77,82,87,91,94,95,96,96,75,75,75,75,75,75,75,75,75,75,75,75,75,75,77,83,88,91,93,94,94,94,75,75,75,75,75,75,75,75,75,75,75,75,75,75,77,84,87,91,91,91,91,91,75,75,75,75,75,75,75,75,75,75,75,75,75,75,78,84,86,88,89,91,91,92,75,75,75,75,75,75,75,75,75,75,75,75,75,75,78,81,83,85,88,91,94,94,76,75,75,75,75,75,75,75,75,75,75,75,75,75,77,80,82,85,90,93,94,94,76,76,76,77,75,75,75,75,75,75,75,75,75,75,77,80,83,86,91,91,90,90,78,78,78,78,77,77,75,74,74,75,75,75,75,76,80,82,85,87,88,87,86,86,77,79,82,81,82,79,74,74,74,74,74,74,74,77,80,84,86,88,86,85,81,81,78,81,84,86,87,80,75,74,74,74,74,74,74,76,80,83,85,84,80,81,78,78,78,82,87,91,91,83,76,74,74,74,74,74,75,76,78,82,82,77,75,75,74,73,79,87,91,94,92,84,79,75,75,75,75,75,74,74,76,79,75,75,74,73,73,73,82,90,94,94,91,84,80,78,76,75,75,75,74,73,73,73,74,74,73,72,72,72,87,92,95,94,90,84,82,78,76,75,75,75,74,73,73,74,79,76,72,73,74,74,89,92,93,89,86,84,81,78,76,75,74,73,74,73,73,73,74,72,73,76,78,78,89,90,87,87,88,87,81,77,75,74,73,73,72,73,73,72,72,73,77,82,83,83,88,88,87,88,87,84,79,76,73,72,72,72,72,72,72,72,72,72,73,74,81,81,87,87,87,86,84,81,78,76,73,73,73,73,73,73,72,72,72,73,73,75,74,74,87,87,87,87,86,82,77,75,74,74,74,73,73,73,72,72,72,77,78,78,75,75,90,89,89,90,90,82,76,75,75,74,74,74,74,73,73,72,72,72,76,79,74,74,92,91,92,94,90,80,76,75,75,75,74,75,75,74,74,73,73,72,72,72,72,72,93,92,93,94,89,79,76,75,75,75,75,75,75,75,74,73,73,72,72,72,72,72],
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
