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
        texture=ImageTexture(url=['../../images/5/newport21-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62149034642794,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[96,98,98,90,83,85,81,81,82,81,80,77,74,74,76,76,73,74,68,66,66,65,95,94,92,91,92,91,90,87,85,83,83,78,77,79,82,80,77,72,69,67,66,66,91,92,90,91,90,92,94,92,91,87,85,85,86,87,86,83,77,72,69,66,68,70,87,86,86,89,92,92,93,95,93,89,88,89,90,89,85,79,77,72,71,69,71,72,82,84,86,86,88,91,91,90,91,92,91,86,86,85,85,86,80,74,70,70,68,69,83,82,80,82,86,88,90,93,90,86,85,85,83,83,82,80,76,78,72,69,71,71,82,81,83,85,83,83,86,86,87,85,84,83,83,82,80,78,77,72,70,70,70,70,83,84,83,82,81,81,82,84,86,85,84,84,81,78,76,76,73,67,69,70,70,70,85,84,83,84,85,84,83,80,84,83,84,82,80,78,74,71,69,68,67,67,66,66,86,86,84,84,86,86,83,80,83,83,82,77,77,73,73,70,67,66,66,63,62,61,88,88,88,88,87,85,82,80,83,82,79,76,71,70,68,67,65,66,61,57,52,51,87,89,88,87,86,83,78,82,79,76,75,75,70,67,63,62,59,57,54,52,51,51,87,88,86,85,84,82,78,72,69,68,69,73,74,65,58,55,52,51,53,57,58,58,88,86,85,83,81,81,78,74,71,66,63,61,60,59,56,55,53,55,59,60,57,57,87,85,84,81,83,77,71,69,67,66,64,61,61,56,55,55,56,60,62,59,57,57,87,85,81,79,78,74,72,69,66,63,62,60,58,60,63,66,66,67,68,67,63,63,86,83,75,78,76,72,70,65,60,59,59,68,68,70,72,70,72,73,73,67,64,63,86,80,76,75,74,72,68,66,67,67,69,70,74,73,77,76,76,77,77,73,69,67,85,79,76,76,72,71,66,70,72,72,74,75,75,79,83,81,81,80,73,75,72,70,79,77,76,75,75,73,69,72,76,78,79,80,81,81,85,80,77,72,76,74,75,74,79,77,76,76,79,71,73,81,83,85,82,81,82,80,79,74,77,76,72,74,70,72,78,76,75,74,72,71,74,80,87,86,84,83,81,76,72,71,72,76,74,74,68,67,79,76,74,72,71,74,77,78,86,87,88,90,84,77,74,71,71,75,72,73,73,72,79,76,74,72,72,75,78,78,86,88,88,90,83,77,74,72,71,74,72,75,73,71],
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
