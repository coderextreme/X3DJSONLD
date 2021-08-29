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
        texture=ImageTexture(url=['../../images/5/newport16-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[48,46,47,46,43,40,38,38,35,36,39,44,46,46,49,50,52,52,53,57,60,60,44,45,46,46,43,40,38,38,36,42,45,46,47,50,54,56,59,60,58,65,68,67,45,46,46,44,40,40,36,40,43,48,48,48,50,54,60,66,64,69,73,73,70,70,46,45,46,42,40,41,40,45,49,51,49,49,54,57,64,72,71,78,82,76,72,72,48,42,40,42,41,44,45,50,51,53,54,56,61,65,65,71,80,85,86,80,79,78,46,45,42,39,42,50,50,50,54,56,58,65,68,74,73,80,86,90,90,83,81,80,41,44,41,42,51,54,55,57,59,60,62,67,73,80,84,87,92,99,97,91,88,87,40,40,44,48,55,57,60,59,60,63,66,72,78,83,91,95,99,101,100,98,90,88,44,42,47,50,56,56,59,62,65,63,67,76,83,87,97,103,104,102,103,99,92,90,43,48,48,54,53,54,57,57,61,64,72,79,87,91,102,110,111,108,105,101,94,93,46,50,49,51,56,60,59,59,61,66,72,80,86,97,104,105,111,107,106,101,97,95,49,54,58,59,61,63,64,64,64,71,75,82,88,100,104,105,105,107,103,98,93,92,53,62,63,68,71,68,66,71,73,75,78,83,93,100,103,108,104,103,97,94,91,91,58,63,71,77,76,80,76,76,77,81,85,87,95,97,97,99,101,97,94,88,86,85,63,72,78,82,77,84,84,83,87,86,87,91,94,94,93,91,94,94,93,89,87,87,65,70,78,81,82,87,89,91,91,92,90,91,91,90,89,89,89,93,93,91,89,89,63,73,78,84,87,89,92,90,91,93,91,89,84,86,87,89,88,90,91,96,94,94,69,78,88,91,92,93,95,98,96,94,93,87,84,83,86,87,88,89,94,96,96,95,76,88,96,94,90,96,96,97,96,92,92,87,83,83,84,85,87,89,92,94,95,96,79,86,96,95,95,95,95,96,93,92,87,84,83,81,83,84,86,87,90,95,94,93,77,87,94,97,95,94,92,93,90,92,86,82,80,80,82,83,83,85,92,96,97,97,78,88,98,101,93,92,92,91,90,84,79,79,77,78,80,80,81,87,93,99,99,98,78,85,97,102,92,92,90,94,89,83,80,75,72,72,74,79,85,93,94,99,97,96,78,84,97,102,94,93,90,93,88,84,81,75,71,71,74,79,86,93,94,99,96,95],
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
