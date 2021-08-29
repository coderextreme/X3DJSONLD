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
        texture=ImageTexture(url=['../../images/5/newport16-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[60,59,55,54,49,40,32,30,31,33,35,42,40,38,34,33,34,34,33,36,38,39,67,62,56,58,50,41,34,33,34,35,35,36,38,39,35,33,35,37,34,33,35,36,70,65,62,56,48,42,37,35,36,35,32,33,36,36,36,35,35,37,40,35,31,32,72,66,61,56,47,42,38,35,34,35,30,34,34,35,36,36,36,36,39,34,34,35,78,69,59,53,46,39,32,29,32,36,36,33,33,33,34,36,35,37,40,40,36,35,80,72,62,54,45,35,32,31,32,35,37,32,33,35,35,36,38,37,37,37,34,35,87,77,67,55,49,40,38,30,32,32,35,35,35,35,35,35,37,38,36,37,40,39,88,79,70,60,49,44,45,36,33,33,35,37,36,38,37,36,36,37,36,37,39,39,90,82,72,66,56,48,50,44,35,33,35,38,39,36,37,35,35,36,37,41,39,39,93,85,76,69,62,59,52,44,39,33,36,37,34,38,39,37,37,35,37,38,40,40,95,90,80,72,66,63,55,47,35,33,30,41,38,36,43,44,38,37,38,37,37,37,92,88,83,78,72,63,55,45,37,33,33,33,34,36,36,36,36,40,41,39,39,40,91,88,80,72,66,57,50,43,39,37,35,35,33,33,36,37,37,38,41,40,39,39,85,80,76,73,68,58,48,46,40,39,37,36,34,33,34,37,37,40,42,42,45,46,87,84,82,75,69,63,53,48,44,42,40,42,41,35,37,36,38,39,41,48,49,50,89,87,86,80,71,64,55,49,47,46,46,45,42,36,35,36,38,40,42,48,52,51,94,90,86,83,74,67,59,52,47,44,45,48,42,39,38,38,40,40,44,51,52,53,95,93,90,86,76,70,64,57,50,46,43,40,41,44,37,36,41,46,48,49,53,54,96,93,93,88,80,70,63,58,53,49,43,41,41,39,38,45,42,40,43,50,59,59,93,92,93,87,78,72,66,58,54,53,48,42,42,40,36,41,48,39,39,48,52,51,97,93,89,83,78,70,65,61,55,54,49,46,45,43,38,37,38,39,37,45,47,46,98,94,86,77,73,67,64,65,67,54,51,46,44,43,40,40,37,40,41,41,38,39,96,91,82,76,72,67,61,62,59,52,52,45,45,43,44,42,41,41,44,40,38,39,95,90,81,75,71,65,61,62,59,53,51,44,45,43,44,42,42,41,44,41,40,41],
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
