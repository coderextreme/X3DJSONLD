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
        texture=ImageTexture(url=['../../images/5/newport19-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.573110194091946,-71.5273965982791,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[64,62,63,62,61,58,60,59,59,64,67,69,71,73,75,73,71,68,61,59,55,54,65,64,64,66,65,60,59,59,61,63,67,69,73,75,74,75,75,74,72,67,58,56,67,65,65,66,63,66,62,64,64,68,68,66,72,73,74,72,73,75,69,57,55,55,70,65,64,65,66,66,64,65,65,69,69,72,67,69,73,73,68,64,58,54,48,49,71,68,64,63,66,67,66,66,67,67,68,68,69,68,72,72,71,58,54,53,49,48,69,68,66,67,66,65,67,67,67,71,73,74,71,76,73,69,67,62,58,52,50,49,71,70,66,65,67,69,69,70,70,72,73,72,75,78,77,71,69,67,62,55,51,51,76,70,67,66,67,68,70,71,72,75,75,76,78,78,76,73,70,69,66,59,54,54,76,73,68,67,66,69,70,72,73,72,73,77,81,78,76,73,70,67,66,63,57,56,76,73,70,69,68,69,68,70,73,73,73,75,79,77,77,74,67,63,59,59,56,56,73,71,70,70,70,69,70,72,71,71,75,77,77,75,73,71,65,59,57,58,54,54,72,73,74,72,72,73,77,72,73,72,77,78,77,71,69,67,66,63,57,53,53,52,74,73,69,71,74,74,77,80,82,79,78,77,78,72,69,72,67,63,59,53,52,51,72,72,72,74,76,79,84,83,84,83,77,77,76,75,75,69,65,65,62,63,57,56,72,74,76,77,83,86,86,87,89,88,87,80,76,76,72,70,70,71,70,67,66,66,74,75,81,83,85,88,91,95,93,93,90,85,77,76,77,77,76,75,76,73,72,72,76,79,83,88,91,96,96,98,98,94,90,85,80,79,79,80,82,82,80,78,74,73,82,84,88,91,95,95,96,99,98,96,92,88,85,79,79,79,82,83,83,79,71,71,80,83,88,92,97,98,101,97,93,90,90,90,83,81,80,80,82,81,79,76,71,70,79,85,93,96,97,101,101,99,94,90,87,89,87,80,81,78,78,79,78,72,67,66,81,83,89,94,100,102,104,100,100,97,90,87,87,83,81,77,76,77,75,68,63,63,88,86,86,91,99,100,102,101,104,99,96,91,90,88,84,79,74,75,75,69,65,63,94,94,93,96,93,97,100,104,108,108,102,99,93,90,84,84,78,71,70,67,63,62,94,94,95,98,94,97,100,103,107,108,103,99,94,90,85,84,79,72,69,66,62,61],
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
