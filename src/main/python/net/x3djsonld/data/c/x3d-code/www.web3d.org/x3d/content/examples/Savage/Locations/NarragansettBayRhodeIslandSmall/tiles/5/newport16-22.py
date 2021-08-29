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
        texture=ImageTexture(url=['../../images/5/newport16-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.56722223554018,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[85,84,84,85,87,89,89,89,89,87,87,89,89,87,85,84,83,82,81,79,77,76,75,86,86,87,87,89,89,89,89,87,86,86,88,89,88,86,84,83,83,82,81,79,78,76,87,88,88,89,91,91,90,90,89,89,89,88,87,87,86,83,82,82,81,79,78,78,78,88,91,91,91,92,92,92,94,91,89,87,87,86,86,87,84,83,81,81,78,77,78,78,90,95,96,94,91,90,90,91,89,89,90,88,88,86,86,83,83,82,80,78,76,77,77,89,95,98,95,90,89,88,87,87,88,89,89,88,87,86,84,84,83,82,79,78,77,77,84,89,92,90,87,86,86,84,83,85,87,90,89,88,89,93,93,93,90,87,87,82,77,81,82,85,86,86,86,87,85,83,85,87,90,89,88,93,96,96,94,91,88,86,82,77,82,81,82,85,86,86,87,88,85,85,86,87,88,88,95,97,95,92,90,87,85,80,75,86,83,82,84,86,87,87,88,88,87,86,86,87,88,90,92,91,88,86,83,79,75,73,89,88,85,85,84,85,86,86,87,85,84,86,87,85,84,84,84,82,81,79,78,76,75,87,88,86,84,84,84,84,84,85,84,83,83,86,84,81,81,82,80,80,81,81,78,76,84,84,85,84,83,82,82,82,81,82,81,80,83,82,81,81,82,80,79,81,80,76,76,84,82,83,82,83,82,81,81,81,81,81,80,80,82,83,80,81,81,78,79,79,78,77,82,82,82,82,83,83,83,83,84,82,79,79,80,82,82,81,81,81,81,77,75,74,73,83,83,82,84,83,82,83,84,84,82,79,78,79,81,82,84,82,79,79,77,75,73,71,85,84,83,85,83,83,82,82,81,81,79,80,79,80,81,84,81,79,77,75,75,74,72,86,85,84,84,84,82,83,81,81,83,84,83,80,78,78,79,79,78,75,73,74,73,73,85,83,81,81,82,82,81,80,81,84,85,83,81,78,77,78,78,76,74,75,74,73,73,83,82,81,82,82,81,79,79,81,84,84,82,80,79,78,78,78,77,75,74,74,73,72,79,79,79,81,81,83,84,83,83,84,85,84,81,81,81,80,80,78,76,73,72,72,71,78,78,81,82,81,82,84,86,84,83,85,84,82,84,83,81,79,78,76,72,71,71,71,79,79,82,82,82,82,84,85,83,82,83,83,82,84,84,81,79,78,76,73,71,71,72],
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
