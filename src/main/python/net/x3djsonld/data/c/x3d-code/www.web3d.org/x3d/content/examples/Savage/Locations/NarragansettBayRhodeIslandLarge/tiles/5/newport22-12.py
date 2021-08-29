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
        texture=ImageTexture(url=['../../images/5/newport22-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[79,76,74,72,72,75,78,78,86,88,88,90,83,77,74,72,71,74,72,75,73,71,76,75,73,74,77,78,80,81,87,90,90,90,84,78,74,72,72,72,70,73,71,70,75,74,73,75,76,78,80,81,86,89,90,89,86,81,77,73,71,69,67,66,68,67,75,75,74,75,80,79,81,82,84,88,94,90,86,82,78,74,71,69,67,66,65,65,74,74,75,80,81,81,82,82,84,85,85,88,84,79,77,78,74,71,69,68,67,67,74,75,76,79,78,80,82,81,83,84,87,87,82,77,75,75,71,69,69,69,69,69,75,77,77,77,78,78,79,81,82,82,85,84,80,76,74,72,72,70,69,69,69,69,78,77,80,77,81,80,81,81,82,84,85,84,81,79,75,75,75,70,68,67,66,66,80,78,81,79,81,81,82,82,85,85,82,81,81,80,78,76,67,67,66,66,66,66,79,80,80,82,82,82,82,85,92,87,87,81,79,79,75,72,69,67,66,66,66,66,86,80,82,81,85,86,85,85,87,87,86,80,78,78,81,75,71,68,66,66,65,65,83,81,81,81,87,89,89,89,91,88,82,81,77,77,85,74,75,68,66,65,65,65,81,81,82,84,90,93,93,99,97,89,84,81,78,85,76,72,71,68,66,66,65,65,81,86,86,88,95,99,99,102,96,89,83,80,78,80,74,72,72,70,68,66,65,65,82,83,85,90,94,101,102,98,92,87,85,83,78,81,74,73,75,71,68,66,66,66,83,89,86,92,104,103,106,98,98,92,88,82,78,77,76,75,74,70,69,68,66,66,83,89,91,96,100,108,103,102,99,95,88,82,81,80,80,81,78,73,72,70,71,72,83,86,92,97,103,104,107,110,103,94,88,85,85,85,84,84,79,73,73,74,78,79,87,91,93,98,99,105,108,113,107,100,93,90,88,88,83,81,76,75,77,77,83,83,90,93,93,93,98,104,105,109,111,105,100,96,94,88,81,78,77,78,79,79,82,82,93,93,88,88,97,102,105,112,113,110,107,102,94,89,84,79,79,80,81,82,82,83,90,89,84,88,94,101,110,115,107,105,103,99,90,88,84,82,78,79,81,81,82,82,85,83,82,82,90,99,104,106,104,104,99,91,89,86,83,80,78,79,81,81,80,80,85,82,82,82,89,98,103,105,103,104,99,90,88,86,83,80,78,79,81,80,80,80],
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
