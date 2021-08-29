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
        texture=ImageTexture(url=['../../images/5/newport19-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[74,64,60,53,55,57,59,57,58,63,70,77,82,83,81,81,78,75,69,67,64,64,75,69,62,57,55,52,55,55,57,63,70,78,84,83,85,82,80,76,71,68,66,65,71,66,58,59,59,53,53,55,60,64,70,75,81,85,85,84,82,77,74,69,67,67,68,63,60,61,61,55,55,55,59,63,70,76,85,84,85,84,83,80,76,72,71,70,66,61,59,58,60,58,51,53,61,64,71,78,84,87,87,86,85,81,76,72,71,71,64,62,62,59,59,56,54,56,63,68,71,79,84,91,90,89,87,83,79,74,70,69,66,65,65,64,63,59,57,55,65,65,74,78,86,92,96,94,91,87,83,78,72,71,73,69,69,67,66,64,61,56,56,63,74,83,91,96,98,97,95,90,86,82,77,76,83,77,72,72,72,68,61,57,60,64,74,83,94,99,103,103,98,92,86,80,77,76,85,81,74,71,71,68,63,59,63,66,73,85,97,100,103,103,99,89,87,82,77,76,85,78,76,77,78,72,68,63,63,68,77,88,96,102,103,96,92,83,82,77,74,73,84,80,79,80,81,79,71,67,65,69,77,87,92,95,91,86,83,77,77,75,72,72,89,89,87,84,78,78,77,73,67,68,72,82,87,94,87,86,79,76,73,72,74,74,99,96,93,83,81,77,77,75,73,67,70,78,86,85,84,81,80,77,75,72,73,72,107,99,93,88,86,84,82,75,76,75,79,77,82,82,83,82,82,77,71,73,72,72,112,105,97,91,91,86,80,78,77,77,78,81,82,86,86,83,83,79,74,74,74,74,113,105,96,95,92,86,81,79,77,80,81,85,87,87,86,87,86,81,78,77,76,76,107,96,97,97,90,89,83,80,80,80,83,86,90,90,89,85,84,79,77,80,81,82,96,95,97,96,87,85,82,83,82,82,83,88,87,87,84,83,80,85,84,83,80,80,95,96,93,90,92,87,88,86,84,86,86,86,88,85,83,84,82,81,83,80,78,79,104,102,98,93,93,92,89,88,88,88,90,87,86,84,84,84,84,82,84,86,81,81,109,106,102,102,105,96,92,90,88,88,88,87,89,91,91,91,93,90,85,89,89,88,115,113,110,108,106,104,96,91,88,90,89,91,91,94,97,99,100,99,95,91,93,94,116,113,111,109,105,104,96,91,88,92,90,91,93,95,97,101,102,100,96,93,94,94],
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
