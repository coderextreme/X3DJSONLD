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
        texture=ImageTexture(url=['../../images/5/newport13-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.42796973708396,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[40,41,43,44,49,53,51,51,50,52,55,56,56,57,58,54,48,44,40,37,34,34,35,38,43,47,52,54,53,52,51,52,52,52,54,55,56,55,51,46,41,36,32,32,37,41,46,52,54,56,57,56,56,55,54,54,56,56,54,52,52,46,41,38,35,34,42,46,50,55,58,58,58,61,63,58,58,58,59,59,55,50,47,43,41,39,38,37,48,51,54,57,61,59,60,65,69,64,63,64,61,58,56,54,50,48,47,43,42,41,53,55,55,57,59,60,62,63,64,64,64,64,60,55,54,54,52,49,46,43,41,40,51,54,55,56,56,58,60,61,62,62,62,62,58,53,52,49,49,44,44,43,42,41,49,55,59,60,59,59,61,62,62,62,61,60,58,54,51,48,46,47,47,48,44,43,53,59,65,64,63,64,64,63,61,62,61,58,56,52,49,47,47,49,52,51,50,49,53,59,64,64,64,65,65,65,64,63,61,58,56,53,50,48,47,50,52,50,49,49,56,61,63,63,66,67,67,68,66,66,65,63,58,51,48,47,47,48,46,44,43,43,58,62,62,66,71,72,73,73,69,64,59,56,54,52,49,47,46,45,42,38,36,36,62,67,67,71,74,75,75,73,69,63,58,54,49,47,45,42,41,39,38,35,33,33,61,70,76,76,77,77,74,72,68,62,57,52,47,44,40,38,35,35,34,33,31,31,63,72,76,77,76,76,71,69,67,61,56,49,45,43,42,38,35,33,32,31,31,31,67,73,75,73,74,73,69,65,61,56,51,44,40,37,34,32,33,32,31,31,31,31,63,69,69,70,65,63,62,59,57,54,48,42,37,34,31,29,29,28,27,27,27,27,55,60,62,60,58,56,55,54,52,48,45,42,34,31,30,31,31,31,31,30,30,30,48,51,54,54,51,50,48,46,45,44,42,39,34,33,31,31,31,30,30,30,29,29,42,45,46,47,46,45,45,42,41,39,35,33,33,32,32,32,32,32,32,31,31,31,32,35,40,43,42,40,42,37,37,34,33,32,32,31,31,31,30,30,30,29,30,31,28,34,38,38,35,36,39,38,34,31,31,32,32,31,31,30,30,29,30,31,32,33,29,31,30,34,34,34,36,34,32,31,31,30,29,28,28,27,28,28,28,26,32,32,29,31,30,34,33,33,35,33,32,31,31,30,29,28,28,27,27,28,27,26,33,33],
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
