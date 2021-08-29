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
        texture=ImageTexture(url=['../../images/5/newport14-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[33,31,30,29,28,23,24,25,28,31,31,33,36,37,34,34,38,39,32,29,29,29,37,38,35,39,33,26,25,26,24,30,29,34,36,36,34,34,36,39,36,31,29,29,37,40,42,46,35,26,25,27,24,27,30,33,38,37,38,36,37,40,40,35,31,30,35,40,41,46,37,28,25,28,29,27,28,33,36,38,43,45,47,45,44,35,30,30,47,48,50,44,38,33,26,29,31,28,30,32,34,36,42,49,55,48,43,37,30,30,58,55,58,56,51,41,30,28,30,25,29,31,34,37,43,51,55,48,38,35,32,31,64,63,64,64,58,44,32,28,30,27,28,33,36,42,47,52,56,48,37,31,29,28,74,71,68,63,54,47,36,31,34,33,28,32,36,42,46,55,56,50,40,32,30,30,81,78,76,69,62,54,39,34,35,35,30,30,33,41,46,56,57,52,42,35,29,29,82,82,77,73,71,56,41,37,36,35,34,28,31,38,46,53,54,49,42,36,30,30,82,81,73,62,57,52,41,42,40,38,34,28,31,37,44,49,54,53,48,40,32,32,78,79,73,64,53,49,43,42,39,33,27,27,31,35,43,47,55,55,47,37,31,31,83,81,78,70,56,45,38,37,33,30,27,28,30,33,38,46,53,52,45,35,32,31,84,83,80,70,60,49,40,36,33,30,28,29,30,33,37,44,52,50,41,34,32,31,83,80,74,66,59,52,44,36,33,31,29,30,31,32,36,42,50,49,42,35,34,33,78,74,66,62,54,47,40,37,32,27,27,28,30,31,36,42,48,46,40,35,33,32,77,73,61,54,45,34,33,34,32,25,26,28,27,30,33,40,47,45,42,36,32,31,77,71,59,45,34,29,29,30,31,30,30,29,27,29,32,39,44,47,43,37,34,33,76,66,49,35,29,29,29,29,29,29,31,31,30,29,31,35,42,47,45,37,32,32,70,54,37,30,30,30,29,29,29,30,31,31,30,29,30,33,40,44,44,38,34,34,63,48,38,33,34,30,29,29,30,31,32,31,31,30,28,32,36,42,42,38,31,31,58,49,38,38,38,33,29,29,31,32,32,32,30,30,31,33,35,37,36,33,32,32,53,50,37,42,43,37,29,29,30,32,33,32,29,31,31,30,33,33,32,32,32,32,52,50,38,42,43,38,30,29,30,32,34,32,30,32,31,30,33,33,32,32,32,32],
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
