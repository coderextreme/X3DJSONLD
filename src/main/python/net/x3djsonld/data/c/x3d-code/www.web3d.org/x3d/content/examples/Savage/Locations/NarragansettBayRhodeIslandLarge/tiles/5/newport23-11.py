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
        texture=ImageTexture(url=['../../images/5/newport23-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.5493819523225,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[109,103,97,97,96,96,98,103,103,101,93,97,101,102,102,98,100,98,95,91,86,85,103,104,92,80,84,90,94,96,97,98,92,87,93,89,98,101,102,101,97,92,86,85,90,92,92,87,83,88,92,93,92,92,92,83,86,90,95,92,92,95,98,93,86,85,80,79,79,77,76,77,80,80,78,73,72,77,78,79,79,78,79,84,87,86,84,84,75,73,72,70,70,69,70,69,69,71,72,74,79,78,78,78,81,78,78,80,81,81,72,71,69,70,69,70,69,70,72,74,76,71,77,77,76,75,75,75,75,79,78,78,70,70,70,69,70,72,70,71,74,80,75,67,72,68,73,71,72,76,79,82,81,79,69,69,69,69,69,70,69,70,74,76,73,68,64,65,69,69,74,75,79,82,85,85,70,69,69,69,69,69,69,70,72,72,74,72,67,59,62,64,69,71,74,73,75,75,69,69,69,69,69,69,69,70,73,79,81,80,74,69,57,55,58,61,63,63,61,61,69,69,69,69,69,69,70,73,77,80,82,79,74,64,57,53,51,53,51,51,51,52,69,69,69,69,69,69,71,76,80,79,75,72,68,61,57,54,51,50,48,48,49,50,69,69,69,69,69,71,75,78,78,74,70,66,62,60,59,56,54,53,50,48,48,48,69,69,69,69,71,76,80,82,79,78,77,72,69,64,63,61,61,61,58,51,48,48,69,69,69,70,73,79,85,89,87,84,76,68,64,60,57,53,53,53,51,50,50,50,69,69,69,69,69,77,87,92,88,82,76,67,60,56,53,49,45,45,45,45,46,46,69,69,69,69,70,80,90,93,87,83,78,69,60,54,52,49,45,46,46,45,44,44,69,69,69,69,73,83,91,92,88,83,77,69,59,53,50,47,48,51,48,46,45,45,69,69,69,69,74,84,91,91,87,82,76,68,56,50,48,48,52,51,49,50,48,48,68,69,69,70,75,85,91,89,84,82,75,66,54,48,48,50,52,50,49,49,47,47,67,69,71,75,82,92,90,85,82,79,72,62,49,48,50,54,55,52,51,50,49,48,67,68,71,78,90,93,86,82,78,73,68,57,48,51,54,56,60,59,55,54,52,51,66,66,71,81,92,89,84,80,76,71,62,53,48,53,56,59,61,60,57,55,53,53,66,66,72,82,91,88,83,80,76,71,62,53,48,53,56,59,62,61,57,55,54,54],
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
