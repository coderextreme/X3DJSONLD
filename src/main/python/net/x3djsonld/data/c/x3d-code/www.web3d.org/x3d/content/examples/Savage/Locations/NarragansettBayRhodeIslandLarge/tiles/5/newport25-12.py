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
        texture=ImageTexture(url=['../../images/5/newport25-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[63,57,53,44,40,37,33,32,34,35,32,24,35,51,56,56,52,48,45,39,32,31,58,53,45,42,39,35,30,26,28,28,29,26,22,22,38,40,38,37,34,31,26,25,53,48,45,40,35,31,28,25,23,27,27,27,26,23,22,21,23,27,25,20,20,19,46,36,38,36,28,21,18,18,18,18,23,26,27,28,29,26,20,17,18,18,17,17,37,33,26,21,20,20,19,18,18,18,19,25,26,28,27,24,17,17,17,17,24,25,37,29,22,21,20,20,22,22,18,19,20,18,23,29,27,20,17,22,29,28,36,35,39,34,25,22,23,24,24,27,26,21,18,18,18,23,19,17,24,33,38,43,41,42,40,28,22,23,25,25,25,29,30,37,28,21,18,18,18,30,39,47,51,56,52,51,29,31,29,27,27,28,30,33,35,43,43,37,38,38,43,50,59,59,64,68,67,66,46,38,31,30,35,37,36,37,41,50,49,49,50,50,47,54,64,68,70,74,73,73,51,38,34,37,45,45,44,48,56,55,51,52,55,58,59,59,67,72,74,76,76,75,47,40,43,40,45,53,56,61,62,60,57,58,62,64,69,68,73,76,78,79,78,78,44,47,50,43,48,63,64,63,65,64,65,66,67,72,74,75,77,79,80,79,79,80,50,55,53,47,49,54,63,65,69,69,69,70,72,76,77,78,80,82,79,77,78,78,61,63,59,54,59,61,61,64,70,72,72,74,76,78,78,80,82,79,73,72,73,73,64,70,62,59,63,72,72,68,70,74,75,78,79,80,81,83,81,74,72,72,72,72,71,66,66,65,68,78,79,76,73,76,78,80,82,81,83,83,75,72,72,72,70,70,76,74,74,70,71,80,81,81,76,78,81,83,83,84,85,80,73,76,80,75,73,72,76,78,78,76,78,80,82,82,79,81,84,85,84,84,82,78,75,81,82,79,74,73,79,85,83,81,81,85,84,82,81,84,86,86,85,81,79,79,78,81,82,77,71,70,88,88,87,85,85,86,84,83,84,87,88,88,86,81,78,80,81,81,80,75,66,65,92,92,90,87,88,87,84,85,87,89,90,89,87,83,80,83,81,77,76,70,67,67,95,94,92,88,88,87,86,88,90,92,92,87,85,83,78,83,80,74,74,70,69,70,95,94,92,89,88,87,87,88,91,92,92,87,84,82,77,82,78,73,72,70,69,70],
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
