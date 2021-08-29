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
        texture=ImageTexture(url=['../../images/5/newport13-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.42796973708396,-71.74725013871318,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[34,33,35,40,47,53,51,46,43,40,43,47,48,49,46,42,38,34,31,30,20,20,37,38,43,48,53,61,59,54,51,53,52,47,49,51,48,41,37,34,33,30,20,20,39,41,45,51,55,65,67,65,61,60,60,52,49,51,48,41,34,34,34,29,20,20,39,44,50,57,61,66,72,71,70,67,65,58,50,48,45,42,35,34,32,26,20,19,43,48,55,58,61,69,74,75,75,72,70,64,54,45,47,43,35,32,27,23,21,20,45,49,55,59,63,68,76,75,75,72,68,63,55,48,51,39,34,30,25,22,20,21,48,53,56,58,65,69,72,72,73,70,66,63,58,53,50,42,35,33,34,26,24,23,53,53,54,57,65,68,69,69,67,65,59,59,57,53,47,42,37,41,39,35,26,25,55,55,59,65,67,64,63,62,60,55,51,48,50,47,42,41,42,45,41,32,21,19,62,61,63,67,69,67,66,64,63,55,53,56,55,49,45,41,42,41,35,28,22,22,67,69,71,72,72,70,64,66,64,59,58,59,53,48,47,43,43,38,29,22,24,24,73,74,74,77,79,73,68,69,67,62,57,55,49,45,42,39,36,31,23,21,22,22,76,81,83,83,82,81,68,64,63,61,56,51,48,42,39,37,27,23,20,21,20,20,74,79,83,85,82,78,75,76,71,64,58,52,46,40,36,33,26,22,21,22,20,20,75,79,79,79,78,78,77,74,70,64,59,52,46,39,33,29,26,21,20,19,19,18,73,76,78,78,78,77,75,70,66,62,54,46,43,37,33,28,23,22,21,21,20,20,74,75,76,76,76,74,71,66,62,57,52,46,37,33,31,27,25,22,21,19,20,20,75,77,78,77,74,69,67,65,59,54,48,44,38,33,29,26,24,21,22,23,24,24,75,75,75,73,70,66,63,61,54,49,45,40,36,32,29,25,23,22,22,27,28,28,73,71,71,70,70,65,62,56,51,45,39,37,35,33,28,27,24,21,19,26,26,26,67,67,67,67,64,61,59,53,48,41,37,34,37,36,29,27,26,24,17,24,25,25,64,63,65,62,58,57,56,53,50,41,40,40,41,39,36,31,27,23,22,22,21,21,65,64,63,61,58,54,53,51,48,45,45,45,43,41,39,37,32,27,26,25,21,21,65,64,63,60,57,54,52,51,48,45,46,46,44,41,39,37,33,27,26,26,22,22],
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
