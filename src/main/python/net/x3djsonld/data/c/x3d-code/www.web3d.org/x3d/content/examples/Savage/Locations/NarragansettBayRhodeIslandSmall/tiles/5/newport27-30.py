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
        texture=ImageTexture(url=['../../images/5/newport27-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.6560016710928,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[68,68,68,69,71,70,69,68,67,67,67,65,64,65,65,65,66,66,66,66,67,68,69,70,70,71,71,72,71,71,70,69,69,68,66,65,65,66,67,68,67,67,67,67,68,69,73,74,74,74,73,73,73,71,69,68,67,67,66,67,68,70,70,69,67,67,68,68,70,75,77,77,76,75,75,75,73,71,69,68,67,67,67,69,72,73,72,70,68,68,68,71,77,77,77,77,77,77,77,74,72,71,70,69,69,69,71,74,75,74,73,71,69,68,70,76,76,77,77,77,79,78,76,74,73,72,72,71,73,74,75,76,75,75,74,71,69,69,76,76,76,77,78,79,78,77,75,75,74,73,73,75,77,77,77,76,76,75,73,71,69,75,75,75,76,77,79,79,78,77,76,75,75,75,77,79,79,79,78,78,77,76,73,71,74,74,75,76,77,79,80,79,78,78,77,76,77,79,80,81,81,80,80,80,78,76,72,73,74,75,76,77,78,79,79,80,80,79,78,78,79,81,82,83,82,82,81,80,78,75,73,73,74,76,77,78,79,80,81,82,81,79,80,81,82,83,84,84,83,83,82,80,77,73,73,74,75,77,78,79,80,82,83,82,81,81,82,84,85,85,85,85,84,83,82,80,72,73,74,75,76,78,80,81,83,84,84,83,84,85,87,88,88,87,86,85,84,83,82,72,73,73,75,76,78,79,81,82,84,85,85,86,88,90,91,91,90,88,86,85,84,83,72,73,73,74,76,77,79,80,81,83,85,86,88,90,92,93,93,92,91,89,87,86,85,72,72,73,74,75,77,78,80,81,82,85,87,89,91,93,94,95,95,93,92,90,89,87,71,72,73,73,74,76,78,79,81,82,84,86,89,90,92,94,95,96,95,93,92,91,89,71,72,72,72,73,75,77,79,80,81,82,85,87,89,91,92,94,95,95,94,94,92,91,71,71,71,71,72,74,76,78,79,80,81,83,85,87,89,90,91,93,94,94,93,92,91,70,70,70,70,71,72,74,76,78,78,80,82,83,85,87,88,89,90,91,92,91,91,89,69,69,68,68,68,69,71,74,75,76,78,80,82,83,84,84,84,85,87,89,88,88,87,68,67,67,67,67,67,68,70,71,73,75,78,79,80,81,82,82,82,84,85,84,84,85,67,67,67,67,67,67,67,68,69,71,73,77,78,79,80,81,81,82,82,83,82,83,83],
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
