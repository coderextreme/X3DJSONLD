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
        texture=ImageTexture(url=['../../images/5/newport16-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[25,24,23,24,21,19,18,18,20,23,25,25,26,28,28,29,31,33,35,37,41,43,27,27,27,25,23,22,20,19,21,22,24,25,25,26,30,30,31,35,36,40,44,45,30,30,30,27,24,22,21,23,23,23,25,27,29,30,31,33,32,33,36,41,47,48,32,33,33,30,27,24,24,26,27,27,29,31,34,34,36,41,37,37,40,42,49,50,37,35,30,28,31,32,29,30,29,36,37,39,42,44,45,42,45,43,45,44,48,48,36,35,36,39,36,35,34,34,36,39,44,49,49,51,52,52,48,50,48,51,54,54,38,39,37,36,38,35,37,39,40,46,49,52,55,57,59,57,57,58,53,53,57,56,37,37,41,39,39,36,36,41,44,47,50,57,65,71,64,66,67,66,60,61,58,57,38,37,35,38,38,40,43,43,49,56,60,63,69,69,71,77,76,74,70,64,61,62,39,37,38,40,42,45,49,51,54,58,64,71,73,79,81,80,82,82,76,69,63,62,40,39,39,43,43,48,52,57,63,65,71,71,80,84,85,88,85,82,75,73,63,62,38,43,41,43,46,55,53,60,65,69,71,79,84,85,88,88,83,81,75,69,65,64,47,42,44,38,41,49,55,61,60,70,77,78,83,81,81,77,81,77,72,66,63,61,42,41,45,43,48,41,44,47,59,61,71,73,74,82,80,80,76,72,67,60,59,60,41,39,39,44,41,42,43,42,42,56,65,68,69,73,74,75,67,65,61,59,55,55,45,38,37,39,43,42,47,48,54,44,45,52,61,61,67,65,66,61,58,56,53,53,45,47,40,41,42,47,45,52,51,49,44,45,48,51,55,58,58,59,56,55,50,50,50,46,46,46,52,55,58,52,46,52,47,46,46,41,42,47,52,51,52,48,50,51,52,54,53,57,54,50,53,54,54,54,51,47,40,43,41,36,38,43,48,47,50,49,60,60,61,58,60,58,58,55,52,53,51,48,42,43,45,35,38,42,41,41,46,47,65,71,72,70,69,65,59,59,53,55,49,46,43,40,44,42,36,38,38,46,44,43,73,71,70,70,69,67,60,61,58,49,45,50,54,43,41,42,38,37,40,39,43,44,75,72,69,68,66,63,59,55,55,53,56,49,49,48,42,41,38,36,39,38,44,45,75,71,69,68,65,62,58,54,55,53,54,48,49,47,42,41,38,36,38,38,44,45],
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
