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
        texture=ImageTexture(url=['../../images/5/newport14-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[47,42,38,35,38,39,37,38,37,36,36,37,40,46,53,58,64,66,64,64,65,65,47,43,37,35,38,35,32,35,37,37,39,41,45,49,53,58,62,65,65,62,64,64,40,37,38,37,37,35,36,38,37,39,41,43,45,51,55,57,60,66,67,65,65,65,37,37,38,39,37,38,39,39,42,43,42,44,46,50,55,60,61,66,68,68,68,68,40,40,41,43,42,41,42,46,43,42,42,44,48,52,59,64,65,68,69,68,65,64,42,41,44,45,42,45,44,42,42,43,48,48,48,55,63,66,68,67,66,66,62,61,45,44,48,47,46,42,42,40,39,42,43,44,50,61,66,67,66,65,65,63,61,60,52,52,50,48,44,42,42,42,42,40,42,46,54,62,65,67,66,65,63,64,60,59,55,57,54,49,45,41,39,37,39,44,45,50,57,63,65,66,63,62,63,64,62,62,59,61,55,50,44,41,39,41,40,43,45,49,56,61,67,66,66,63,64,64,66,65,60,58,52,46,45,41,40,40,41,42,45,49,55,58,63,63,66,67,66,66,66,66,59,53,52,47,44,44,46,45,44,45,46,51,56,54,54,61,67,70,71,71,70,69,53,51,50,50,50,49,49,47,50,54,55,58,54,54,54,60,65,71,76,76,76,75,53,53,54,56,60,57,53,52,53,58,59,58,54,54,55,65,70,71,74,79,79,79,55,56,55,59,65,64,59,58,58,55,60,56,55,55,62,65,68,72,73,76,79,79,59,59,61,62,66,66,64,62,62,59,57,59,62,61,66,68,69,73,75,77,78,79,67,65,67,68,66,70,72,68,63,61,59,59,60,64,68,71,73,74,75,77,78,78,73,73,75,75,73,71,70,68,68,64,59,59,62,66,69,70,75,75,74,73,76,77,83,83,82,80,79,76,76,70,64,60,60,58,60,68,70,71,74,73,71,71,75,76,93,92,88,86,83,78,75,69,64,61,59,59,64,69,74,74,72,74,73,74,78,79,100,99,94,88,83,83,76,70,63,62,60,62,67,72,74,75,74,75,76,78,82,82,107,103,99,91,85,78,73,69,65,60,62,66,69,72,73,76,76,75,77,79,83,83,113,106,99,93,88,80,72,64,63,64,64,67,70,69,72,73,74,72,74,77,80,81,115,107,99,93,89,81,73,65,63,65,65,68,70,69,73,74,74,72,73,76,80,81],
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
