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
        texture=ImageTexture(url=['../../images/5/newport23-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[100,101,102,103,107,102,97,89,87,87,87,87,87,88,92,91,90,91,101,102,108,109,98,99,99,102,103,107,97,91,88,84,92,92,90,86,85,85,87,89,90,94,101,103,96,97,97,97,98,102,94,93,89,85,89,91,90,88,84,87,89,93,90,83,89,90,94,95,95,95,96,96,94,91,88,88,84,88,89,88,86,82,88,91,87,82,80,80,91,90,92,94,94,93,93,94,94,91,83,81,82,85,84,81,84,86,81,75,75,75,92,95,94,88,88,86,87,89,89,83,79,82,86,88,83,81,80,78,75,73,72,72,94,95,93,86,82,82,82,81,79,78,81,81,83,83,82,83,85,79,73,71,70,70,94,93,87,85,85,80,81,80,75,80,81,82,82,81,81,81,79,80,74,72,69,69,90,88,82,81,81,79,76,76,74,76,77,81,76,82,79,79,77,74,73,71,70,70,86,84,82,82,81,77,78,82,82,75,72,73,75,76,75,80,79,74,71,70,69,69,81,83,84,80,81,74,73,75,78,77,71,72,74,76,75,77,75,72,70,69,69,69,78,83,77,75,73,73,73,74,76,74,71,72,70,71,71,72,71,70,69,69,69,69,73,74,73,72,72,72,73,74,77,76,77,74,72,70,69,69,69,69,69,69,69,69,73,75,75,72,72,72,74,78,77,78,70,76,74,72,70,69,69,69,69,69,69,69,72,72,72,72,72,73,76,75,75,71,70,77,81,76,72,69,69,69,69,69,69,69,74,74,73,73,73,75,75,75,72,71,70,70,74,76,73,69,69,69,69,69,69,69,78,78,77,75,74,75,72,73,72,71,71,70,70,72,70,69,69,69,69,69,69,69,83,83,83,82,75,75,75,78,72,69,69,70,70,70,69,69,69,69,69,69,69,69,81,77,84,85,84,75,75,74,73,72,70,69,69,69,68,68,68,68,69,69,69,69,74,74,77,76,78,75,74,73,72,71,70,69,66,66,66,66,66,66,67,67,68,68,75,74,73,76,76,75,73,71,70,70,69,67,66,66,66,66,66,66,66,66,66,67,74,73,78,78,79,78,75,73,72,68,67,68,66,66,66,66,66,66,66,66,66,67,72,76,76,76,86,81,74,71,70,67,67,67,66,66,66,66,66,66,66,66,66,66,72,75,74,75,86,80,74,71,69,67,67,67,66,67,66,66,66,66,66,66,66,66],
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
