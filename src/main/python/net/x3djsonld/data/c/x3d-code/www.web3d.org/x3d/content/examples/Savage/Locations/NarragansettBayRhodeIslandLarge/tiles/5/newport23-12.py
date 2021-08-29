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
        texture=ImageTexture(url=['../../images/5/newport23-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[85,82,82,82,89,98,103,105,103,104,99,90,88,86,83,80,78,79,81,80,80,80,85,81,81,80,82,91,98,101,102,99,95,88,86,84,82,80,78,79,79,78,80,80,85,82,81,80,79,89,92,93,94,90,86,83,86,83,81,79,78,77,77,76,76,77,84,81,81,79,76,82,83,81,81,81,82,86,83,80,79,78,78,77,76,75,75,75,81,81,81,79,73,76,78,80,81,84,84,81,80,80,80,80,79,80,78,77,78,78,78,82,81,81,71,69,75,77,83,84,83,82,81,80,83,83,84,83,80,78,80,80,79,72,78,77,65,66,68,73,80,80,80,81,81,84,86,87,88,86,82,80,79,78,85,79,67,62,63,65,68,71,74,78,83,84,87,88,87,87,88,87,85,82,80,79,75,74,64,59,61,64,67,70,75,80,83,89,91,92,88,88,88,87,82,79,75,74,61,64,59,58,59,63,71,76,80,84,86,87,87,90,87,86,85,81,78,76,74,73,52,55,60,57,58,66,76,77,79,82,86,90,94,91,91,84,79,76,76,75,73,73,50,50,48,49,54,67,77,82,83,84,93,96,95,91,89,83,76,75,75,75,74,73,48,48,49,54,52,62,73,81,84,86,90,95,96,92,84,79,76,79,77,78,78,78,48,48,51,63,65,59,67,78,84,87,90,91,93,89,82,80,79,79,78,80,79,78,50,48,46,50,54,61,66,78,87,88,89,90,89,85,83,81,81,82,81,81,79,78,46,46,45,47,56,65,68,73,79,81,84,86,84,79,78,78,80,82,84,84,81,81,44,45,44,46,53,59,66,69,74,77,80,81,78,75,75,75,75,78,78,75,72,71,45,44,44,47,49,54,60,64,70,74,75,75,75,73,73,72,70,71,72,70,69,69,48,44,45,47,50,52,56,62,69,76,79,78,75,73,72,69,66,67,67,68,68,68,47,45,44,44,44,49,52,59,67,75,79,77,75,75,75,71,65,61,62,62,62,63,48,48,45,42,42,45,47,54,64,73,77,75,75,76,76,71,68,62,60,60,61,61,51,47,43,40,46,48,47,51,59,67,72,73,75,77,74,66,63,63,62,60,59,58,53,51,39,43,45,47,48,52,56,62,62,63,68,68,63,58,57,57,57,57,56,56,54,53,39,42,44,47,48,53,57,64,63,62,66,65,61,58,57,57,57,56,55,54],
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
