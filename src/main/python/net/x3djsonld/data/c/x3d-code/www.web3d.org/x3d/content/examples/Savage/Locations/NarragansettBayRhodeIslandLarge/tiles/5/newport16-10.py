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
        texture=ImageTexture(url=['../../images/5/newport16-10.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.57136730636591,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[36,35,35,35,36,37,37,36,36,37,34,40,46,51,54,54,52,49,47,40,36,36,37,38,38,37,37,38,38,37,34,36,39,46,51,56,59,57,60,61,56,51,47,45,40,40,40,40,39,37,36,35,32,39,44,53,54,58,60,63,68,68,65,62,58,56,39,39,40,40,39,38,37,37,33,41,45,53,55,62,66,70,72,69,68,71,66,65,39,38,39,39,38,39,36,38,34,43,44,52,59,66,72,71,76,72,72,74,72,72,40,38,40,38,38,39,40,33,33,39,41,50,60,67,74,78,81,77,77,79,78,76,40,42,42,40,38,38,37,34,34,37,42,45,55,67,76,81,85,85,84,85,82,82,41,42,42,42,38,37,37,36,34,36,42,45,52,64,75,83,90,91,89,95,92,90,38,38,40,41,39,37,36,37,45,41,37,41,49,61,75,86,93,97,97,96,97,96,36,36,36,40,42,39,39,38,40,37,41,43,50,60,71,88,94,96,97,100,100,100,36,36,36,36,45,41,43,41,40,42,40,42,51,58,70,79,88,92,96,98,98,97,36,36,36,36,44,46,48,47,43,38,39,44,49,54,64,73,79,87,91,94,96,95,36,36,36,36,43,46,46,48,47,45,43,44,46,52,58,67,72,79,83,87,88,87,36,36,36,36,41,49,49,50,48,47,50,52,50,52,54,60,65,68,72,76,77,79,36,36,36,36,45,51,57,57,57,58,58,60,57,56,56,58,61,65,68,71,75,76,36,36,36,41,45,51,57,64,70,70,69,67,64,59,57,57,56,59,65,67,71,74,36,36,39,44,45,53,59,68,73,74,74,67,66,69,63,60,59,58,64,67,69,71,36,36,40,44,48,54,62,68,70,69,75,75,79,74,67,62,59,61,63,66,68,70,40,43,43,45,49,54,58,66,73,74,78,82,76,73,71,63,63,64,65,64,70,71,40,42,45,45,49,54,59,65,67,73,76,78,81,78,71,67,65,64,64,68,71,72,40,46,46,48,49,52,58,61,66,70,74,75,77,75,73,73,69,68,68,70,73,72,41,43,45,46,51,53,57,61,64,67,71,72,73,72,74,75,72,68,67,70,71,72,43,44,42,45,50,57,64,65,65,66,65,66,65,67,74,76,77,71,69,69,70,70,42,43,42,45,51,58,65,66,65,67,65,65,64,66,73,76,76,70,69,69,70,69],
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
