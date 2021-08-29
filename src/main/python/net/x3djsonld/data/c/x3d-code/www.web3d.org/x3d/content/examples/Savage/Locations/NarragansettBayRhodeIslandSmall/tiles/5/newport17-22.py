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
        texture=ImageTexture(url=['../../images/5/newport17-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.57529309331769,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[79,79,82,82,82,82,84,85,83,82,83,83,82,84,84,81,79,78,76,73,71,71,72,79,79,81,81,82,81,81,83,82,80,82,84,85,84,83,82,81,81,78,74,72,72,74,79,80,80,81,82,81,81,82,82,80,82,86,85,82,81,82,81,82,81,77,75,74,73,79,80,80,80,82,82,83,85,84,81,80,81,81,82,82,81,80,82,83,80,76,75,75,81,82,81,81,82,83,83,83,83,82,81,81,82,83,83,82,81,80,82,80,77,77,77,80,81,80,81,82,83,84,82,82,82,81,82,81,81,82,81,80,81,82,82,80,78,77,79,80,81,81,83,84,84,85,83,82,83,83,82,79,79,78,77,79,81,81,78,77,77,78,82,83,82,84,86,86,86,87,87,85,84,84,82,79,75,74,77,78,79,79,79,77,80,84,85,84,85,85,86,86,88,88,87,86,86,84,79,76,77,80,80,81,83,83,80,79,84,87,88,88,90,89,87,86,86,85,85,84,83,84,87,87,85,85,86,86,84,83,80,84,87,89,90,93,92,88,85,84,85,86,85,84,87,89,89,86,86,86,86,86,85,84,85,86,88,89,92,92,89,85,85,86,86,85,85,89,92,90,87,87,86,86,86,86,87,87,87,89,90,90,90,91,89,90,89,88,87,86,88,90,90,89,89,86,85,86,87,88,89,91,92,91,90,90,90,91,93,92,91,89,87,86,88,90,90,90,88,87,88,89,88,90,92,93,94,91,91,91,92,92,91,89,88,88,87,88,90,90,88,88,87,88,89,89,91,93,94,94,93,93,94,93,92,89,87,87,86,87,89,90,89,88,89,90,89,88,93,92,94,94,95,95,93,94,95,93,89,85,85,86,86,88,86,85,86,89,90,88,85,94,93,94,94,94,95,93,93,95,94,91,88,86,87,86,87,86,85,84,86,87,85,80,94,92,94,94,94,95,93,93,94,93,92,90,87,86,86,90,90,88,83,84,86,84,79,97,96,95,95,96,95,92,91,92,92,90,89,86,84,86,91,89,88,83,85,87,83,81,95,94,94,93,93,93,91,89,89,89,88,88,86,85,83,85,82,81,81,85,85,82,81,92,93,92,91,89,89,90,89,88,89,87,86,85,84,84,82,80,79,79,83,82,79,79,91,92,92,90,89,89,90,89,89,89,87,85,84,83,83,82,80,79,79,82,81,79,79],
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
