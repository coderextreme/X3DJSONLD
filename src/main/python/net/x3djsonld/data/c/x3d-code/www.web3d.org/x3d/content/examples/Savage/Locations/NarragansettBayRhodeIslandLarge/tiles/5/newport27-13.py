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
        texture=ImageTexture(url=['../../images/5/newport27-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[100,98,101,99,93,84,71,65,68,69,69,72,67,61,57,53,50,47,37,24,22,22,98,99,99,96,88,79,75,66,71,72,74,73,68,62,58,51,42,29,27,24,24,23,98,97,95,90,82,78,70,73,74,75,74,71,66,61,56,49,35,32,31,28,24,24,93,96,94,85,80,77,76,76,75,74,71,68,63,56,48,40,43,41,37,33,30,29,94,92,88,85,81,79,82,77,75,72,66,59,55,50,50,49,54,53,44,36,35,35,89,86,86,85,83,83,83,84,78,69,65,61,60,60,58,57,62,60,54,45,41,42,86,85,84,87,84,85,81,83,74,66,63,66,63,65,65,62,73,69,59,54,51,52,87,84,83,85,87,87,85,79,71,68,69,70,69,67,67,64,67,64,60,58,58,58,91,86,88,85,84,81,81,77,75,82,81,73,71,72,69,69,68,68,67,61,59,59,94,90,88,84,82,77,74,73,80,86,84,81,75,80,76,75,77,77,69,66,64,63,93,91,87,83,81,74,73,71,72,77,83,82,81,81,84,86,86,78,75,71,71,72,100,91,83,78,76,77,70,73,73,73,75,76,79,83,85,87,87,80,71,73,82,83,100,90,79,78,74,76,72,78,76,74,77,79,79,80,80,81,77,73,73,80,83,83,96,88,87,80,79,73,75,71,72,71,71,75,77,73,77,76,72,70,74,78,68,67,92,85,82,84,82,80,81,74,71,71,69,69,70,68,70,69,68,68,69,68,64,63,87,90,87,83,83,81,78,75,73,71,70,70,68,67,66,66,65,64,63,63,63,63,88,85,90,85,83,81,79,73,74,71,72,69,68,67,67,67,66,65,64,64,62,61,93,91,90,88,83,79,75,72,71,71,71,69,68,68,68,67,67,67,64,62,59,58,93,90,90,87,86,83,73,72,71,70,69,69,69,70,70,68,64,57,54,52,48,48,101,105,98,90,88,84,74,74,72,72,71,70,70,70,67,59,58,63,60,56,51,50,108,109,104,97,90,77,76,74,74,73,72,71,69,65,60,59,64,63,60,57,55,55,111,114,108,99,85,77,75,78,74,74,73,71,68,63,60,62,62,57,53,52,51,51,115,110,105,96,81,77,78,74,73,71,68,67,65,63,63,60,55,54,53,54,52,52,115,109,103,94,81,77,78,74,74,71,68,67,65,63,63,58,54,54,52,54,52,52],
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
