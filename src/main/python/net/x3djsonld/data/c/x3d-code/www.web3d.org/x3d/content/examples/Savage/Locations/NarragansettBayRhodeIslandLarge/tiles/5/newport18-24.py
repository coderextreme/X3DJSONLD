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
        texture=ImageTexture(url=['../../images/5/newport18-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[79,81,82,90,90,85,82,77,75,74,69,67,62,62,58,55,55,51,50,48,46,45,80,86,81,82,90,94,84,79,75,73,71,69,64,62,57,56,57,52,51,49,47,47,88,84,78,90,88,87,87,80,75,74,71,67,66,62,62,58,54,54,51,49,47,47,86,79,80,83,85,85,86,82,76,75,68,67,67,62,60,57,55,54,51,49,46,46,79,78,81,84,85,83,81,82,78,75,72,71,70,66,59,55,54,55,52,50,47,46,73,79,82,80,85,82,85,82,77,73,74,72,70,67,64,58,58,54,52,50,47,47,67,73,72,78,81,89,80,78,77,75,73,73,70,69,63,62,58,54,52,49,46,45,53,66,69,71,73,81,75,72,73,76,85,89,81,73,62,60,56,55,51,48,46,46,53,57,67,68,71,71,72,72,77,78,82,78,76,71,64,63,59,55,54,51,48,47,53,53,66,71,75,68,68,71,73,79,78,79,77,70,66,65,60,59,57,54,50,50,53,53,61,64,68,67,70,72,80,81,81,80,78,71,66,65,60,56,54,50,46,45,53,58,71,61,67,68,74,76,82,82,81,83,78,78,69,60,61,53,49,44,40,39,54,63,68,66,71,78,74,76,79,83,84,82,80,74,69,62,57,55,51,45,39,39,66,67,70,77,69,70,74,77,82,83,86,84,78,75,70,66,61,57,53,49,41,39,73,71,68,72,70,74,77,79,81,84,82,84,81,79,72,66,62,56,53,49,43,41,69,73,74,72,73,73,79,82,83,85,89,86,81,75,74,70,61,56,51,47,42,42,71,73,72,75,79,81,84,85,87,87,88,85,81,76,72,67,62,59,54,50,45,44,72,72,73,76,80,82,87,89,91,89,87,85,82,78,77,71,62,60,56,51,46,45,68,70,71,81,80,87,85,96,88,87,88,86,86,80,75,72,65,61,56,51,47,46,61,67,72,77,83,87,85,83,86,86,87,96,90,82,72,65,61,58,55,51,47,47,59,62,69,75,81,86,85,85,84,84,84,81,80,79,73,69,63,58,54,50,49,48,57,61,65,70,82,83,83,82,83,83,79,82,81,74,71,67,65,59,56,52,49,49,51,56,62,69,79,79,85,83,82,82,82,78,76,74,73,68,65,62,58,53,50,50,50,54,63,70,79,81,85,81,82,83,83,77,75,74,71,68,66,62,58,53,50,50],
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
