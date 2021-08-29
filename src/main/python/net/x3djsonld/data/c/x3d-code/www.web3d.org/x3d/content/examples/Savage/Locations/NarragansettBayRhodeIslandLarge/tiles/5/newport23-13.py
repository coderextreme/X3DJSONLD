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
        texture=ImageTexture(url=['../../images/5/newport23-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[80,81,80,79,78,78,78,77,77,75,75,77,76,74,73,69,66,62,61,60,57,55,80,79,79,77,76,76,76,74,74,73,72,71,71,69,69,65,66,64,63,56,54,53,77,77,75,74,74,74,72,71,71,72,72,71,69,68,66,67,66,63,61,58,53,53,75,74,73,73,73,71,71,71,71,70,74,71,70,70,69,68,65,61,60,59,54,54,78,81,80,76,73,72,73,73,73,73,73,73,73,71,72,74,74,76,69,60,56,55,80,82,79,75,73,74,76,77,75,75,76,76,75,74,76,79,83,85,78,72,63,61,78,77,77,76,75,77,77,77,77,77,76,80,82,87,87,87,90,84,77,75,65,64,79,75,75,76,76,77,78,78,78,79,80,84,88,95,92,90,86,82,77,72,65,64,74,73,74,76,79,81,81,82,82,85,87,89,94,95,95,94,86,80,78,70,68,67,73,72,73,76,80,84,85,85,88,91,95,100,102,102,98,88,84,82,75,72,69,68,73,72,73,74,77,81,84,91,95,99,103,107,108,105,98,88,88,81,75,73,70,69,73,72,72,74,79,82,89,96,100,106,110,113,114,106,100,91,86,83,82,80,77,76,78,74,72,73,78,84,90,98,103,106,107,109,110,107,100,94,87,83,83,85,80,78,78,74,72,76,77,82,88,95,101,106,113,114,110,104,96,93,87,87,86,84,78,77,78,74,70,73,77,81,89,95,97,103,111,110,104,97,94,89,85,84,86,80,71,69,81,75,69,72,78,78,88,93,98,101,103,103,99,93,87,77,84,81,78,74,61,60,71,69,66,66,68,77,87,91,93,95,96,94,88,86,82,75,78,77,71,64,56,55,69,67,66,65,67,73,83,89,91,87,82,82,78,76,74,74,77,73,69,56,52,53,68,66,66,63,68,72,78,80,81,78,74,72,73,72,74,74,74,71,64,54,51,50,63,61,60,62,64,69,72,74,74,72,68,68,70,69,71,73,69,66,59,52,43,42,61,61,57,60,64,68,71,71,70,70,67,68,70,69,69,72,68,62,58,52,48,47,58,56,54,58,62,67,70,70,67,67,68,72,70,70,73,76,69,64,61,55,45,44,56,52,55,57,62,66,68,68,67,69,67,68,72,76,77,74,70,70,60,54,47,46,54,51,55,57,61,66,68,67,67,69,67,67,73,77,77,72,70,70,60,53,47,46],
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
