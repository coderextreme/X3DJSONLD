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
        texture=ImageTexture(url=['../../images/5/newport13-21.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.543009662207645,-71.26537558237226,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[81,82,83,84,85,85,86,90,92,90,87,86,84,83,79,79,80,79,75,73,73,72,71,80,82,82,82,84,85,85,86,87,86,85,86,86,86,83,82,83,81,78,77,75,72,72,77,79,79,82,84,85,85,85,87,86,85,85,86,86,85,85,82,79,77,77,76,73,73,77,79,80,83,84,85,85,85,87,87,86,86,86,86,86,85,82,80,79,78,76,75,73,76,79,81,83,83,83,85,87,88,87,85,85,85,85,85,84,82,82,82,79,76,75,73,73,76,79,80,82,84,86,89,87,86,86,85,85,84,84,85,84,83,81,80,78,76,75,73,75,77,81,83,84,86,87,84,83,85,86,86,85,85,85,85,84,81,79,78,77,76,74,75,77,81,83,82,84,84,83,82,85,86,87,88,87,85,84,84,83,82,80,78,76,75,78,81,81,81,80,81,82,83,83,84,85,86,88,88,86,85,84,83,81,80,79,77,75,77,79,79,79,81,80,81,83,84,84,85,86,87,88,88,86,84,83,81,80,79,78,74,74,76,77,79,81,81,82,84,84,85,85,86,87,87,88,86,83,83,82,81,79,77,74,75,77,78,79,81,81,82,82,82,84,85,86,87,87,87,87,85,83,82,82,81,80,74,75,77,78,79,80,83,83,82,82,83,85,87,87,87,86,85,85,84,83,83,82,80,74,75,78,79,79,80,82,82,83,83,84,85,86,85,86,86,85,85,84,83,83,82,79,75,75,78,77,78,80,79,82,83,83,82,83,84,85,86,88,88,85,84,83,83,82,80,75,75,77,78,78,79,81,83,83,83,83,84,87,90,88,89,90,87,86,84,83,82,82,76,76,78,78,79,79,81,83,82,81,80,83,87,91,91,90,87,86,86,85,84,82,82,78,80,77,77,80,80,82,84,84,81,79,81,84,87,90,88,86,87,89,88,86,83,81,78,80,78,77,80,81,84,86,83,81,83,81,82,83,86,87,89,92,94,92,89,85,81,79,81,79,78,81,81,84,85,82,81,82,81,82,82,86,89,93,96,94,91,87,85,82,84,81,79,79,79,81,82,82,79,79,78,81,86,87,90,91,92,94,90,86,83,83,82,80,80,81,85,84,84,83,83,79,79,79,82,89,91,90,89,88,88,87,86,84,83,83,77,79,83,88,87,85,84,84,80,79,79,81,89,91,89,88,87,86,86,87,86,85,85],
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
