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
        texture=ImageTexture(url=['../../images/5/newport18-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5833639510952,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[91,92,92,90,89,89,90,89,89,89,87,85,84,83,83,82,80,79,79,82,81,79,79,90,91,93,92,92,92,92,92,91,89,87,84,81,80,80,78,79,80,80,81,79,79,80,91,93,94,93,92,91,92,92,90,88,87,84,79,78,77,76,77,78,78,78,77,79,80,90,92,93,93,91,91,92,90,87,85,85,84,81,80,80,79,80,79,78,77,76,78,79,91,91,92,93,92,90,90,90,89,86,85,83,80,80,81,80,80,80,78,76,76,78,77,91,91,90,91,91,88,89,89,90,88,85,82,78,79,81,80,80,79,77,77,77,78,76,92,91,89,89,89,89,90,88,86,85,86,83,82,83,83,80,81,80,79,78,78,79,77,89,90,89,90,90,89,88,88,88,86,85,83,83,83,84,82,82,81,81,80,79,78,76,88,89,90,90,89,88,88,89,89,86,84,84,84,85,84,83,83,83,83,83,80,78,76,84,87,90,92,90,88,89,88,87,84,82,83,85,88,85,84,84,83,83,84,82,81,78,84,87,90,90,89,89,89,88,87,84,82,82,84,88,88,86,86,86,86,85,84,83,81,85,87,88,87,88,90,89,87,86,85,82,82,85,89,89,89,89,89,88,87,85,84,82,87,88,88,88,86,88,89,88,89,87,85,85,86,88,87,89,88,88,89,87,87,85,83,87,86,86,86,86,87,90,91,88,85,85,88,87,86,87,88,88,90,90,89,87,85,83,84,85,85,85,86,89,90,90,85,83,84,87,87,86,88,88,89,90,90,90,89,85,83,80,82,86,89,89,91,92,89,83,80,82,85,84,84,89,90,91,90,90,91,88,85,83,82,83,86,89,90,89,88,85,79,78,80,86,86,86,90,90,90,91,91,91,88,85,84,82,82,83,84,86,84,84,82,79,79,82,88,88,89,92,89,89,91,91,90,89,86,85,81,81,81,80,81,82,83,82,81,81,82,85,88,89,90,89,89,90,91,91,90,87,86,81,80,79,78,78,79,79,79,82,82,79,79,84,86,89,90,89,88,90,91,91,89,86,81,81,79,77,77,78,76,75,79,81,80,82,86,87,89,90,89,88,89,89,88,85,84,80,81,80,80,80,78,76,74,76,79,81,84,86,87,87,86,87,89,91,89,85,83,84,79,79,79,80,81,78,76,73,74,77,79,83,86,87,87,85,86,87,90,88,86,83,84],
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
