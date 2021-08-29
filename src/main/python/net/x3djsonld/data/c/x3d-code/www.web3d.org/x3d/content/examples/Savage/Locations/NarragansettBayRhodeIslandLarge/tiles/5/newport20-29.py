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
        texture=ImageTexture(url=['../../images/5/newport20-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.15364557954115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[28,27,26,26,25,25,25,25,25,25,25,25,29,34,39,43,45,44,40,37,36,36,28,28,27,27,26,25,25,25,25,25,25,25,30,35,41,46,45,43,40,37,37,37,28,28,27,26,26,25,25,25,25,25,25,26,31,35,38,42,44,44,41,38,38,37,29,29,28,25,25,25,25,25,25,25,26,28,32,35,38,40,43,44,42,40,38,38,30,30,29,27,26,27,27,26,26,27,27,29,32,36,41,40,41,42,41,39,38,38,32,32,31,30,29,29,28,29,29,29,29,30,34,35,40,40,40,41,40,40,39,39,33,34,33,32,32,31,31,30,30,30,30,33,37,40,38,40,40,41,42,41,40,40,36,37,36,35,33,34,34,33,31,31,32,34,37,42,42,41,41,42,42,41,41,41,39,40,39,36,36,39,38,36,32,32,34,36,40,43,42,41,42,43,42,42,42,42,43,43,42,38,41,42,41,38,34,33,35,38,41,44,44,43,43,43,42,42,42,42,47,46,44,41,44,45,42,39,35,36,37,39,43,46,45,44,43,43,43,42,42,42,48,48,47,45,46,48,45,40,38,38,40,44,46,47,44,44,43,43,42,41,41,41,50,51,49,50,50,50,46,41,41,42,43,46,48,47,45,44,43,42,41,41,41,41,55,56,53,54,55,53,48,42,43,45,46,48,49,46,46,45,44,42,41,41,41,41,59,59,58,58,58,55,49,46,47,49,51,52,50,47,44,43,43,41,41,41,41,41,61,62,63,62,60,57,51,50,50,52,55,52,47,46,45,44,42,41,41,41,41,41,63,64,67,67,65,58,53,53,52,53,56,56,51,47,45,44,42,41,41,41,41,41,65,69,71,72,67,58,55,55,55,57,59,55,52,49,45,43,42,41,41,41,41,41,66,70,75,76,69,61,60,59,60,61,58,54,52,50,47,43,41,41,41,41,41,41,68,72,77,76,70,65,66,64,64,63,58,54,52,50,47,44,41,41,41,41,41,41,68,73,78,75,70,70,70,70,69,66,60,56,53,51,50,47,43,41,41,41,41,41,69,74,77,72,71,73,74,75,72,68,62,59,56,54,52,47,44,41,41,41,41,41,69,74,75,71,72,77,80,79,76,68,62,59,57,56,54,48,45,42,41,41,41,41,69,74,75,71,73,78,81,80,76,68,62,59,57,57,54,48,45,42,41,41,41,41],
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
