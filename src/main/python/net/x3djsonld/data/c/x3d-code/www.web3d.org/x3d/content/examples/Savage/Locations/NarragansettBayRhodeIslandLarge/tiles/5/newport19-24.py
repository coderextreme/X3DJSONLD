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
        texture=ImageTexture(url=['../../images/5/newport19-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[50,54,63,70,79,81,85,81,82,83,83,77,75,74,71,68,66,62,58,53,50,50,51,53,61,67,74,80,78,81,84,84,83,82,77,71,71,70,69,65,60,56,54,54,50,53,60,65,72,80,79,80,81,80,85,82,82,74,73,72,67,66,61,58,56,56,51,57,58,66,70,76,79,81,84,82,82,81,81,78,76,74,72,67,62,59,56,55,52,57,58,63,68,70,78,85,86,88,86,79,81,83,80,79,75,69,64,60,55,55,55,55,64,62,70,74,84,87,92,86,86,91,87,86,88,82,78,70,66,61,56,55,59,60,60,65,69,80,87,93,91,93,88,87,89,87,87,80,76,72,68,63,57,56,62,64,64,68,77,80,94,94,94,95,87,86,85,86,79,83,76,72,68,62,57,57,65,70,71,72,81,88,93,93,91,89,87,83,80,82,80,75,74,68,65,62,57,56,66,70,74,76,80,88,90,94,92,89,81,77,79,78,75,72,68,67,63,61,56,55,67,69,72,77,82,87,91,92,89,89,80,80,78,77,72,69,67,65,63,59,54,53,64,67,73,75,81,87,88,90,88,88,83,83,83,79,72,69,67,66,63,59,53,52,63,63,65,71,77,80,84,87,90,85,83,88,87,84,76,71,69,67,64,59,53,52,65,65,65,71,76,80,83,84,88,83,87,88,90,87,81,75,74,71,66,61,52,50,62,63,68,73,76,78,82,85,84,78,88,91,91,86,83,79,78,73,68,60,49,47,63,68,69,72,70,75,80,78,77,81,84,90,88,88,84,81,77,73,68,58,45,42,63,64,67,71,74,74,75,76,72,69,81,86,86,85,83,79,76,71,65,55,43,41,67,75,63,53,62,69,73,74,70,68,76,81,85,84,81,79,74,70,62,51,39,37,61,66,70,65,63,67,66,62,63,65,71,80,84,83,82,79,70,65,58,48,37,34,62,67,73,62,54,59,58,58,60,70,81,87,80,80,78,72,65,60,53,46,35,32,53,58,64,66,71,67,58,60,57,62,66,76,82,81,80,74,68,58,51,43,33,31,54,52,59,62,64,60,61,57,62,61,67,69,76,82,78,71,63,55,48,41,30,29,49,49,52,61,66,62,59,59,57,61,62,65,73,81,74,69,58,52,46,38,27,26,49,50,51,61,68,62,61,61,57,60,60,64,73,80,73,68,58,52,45,38,27,26],
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
