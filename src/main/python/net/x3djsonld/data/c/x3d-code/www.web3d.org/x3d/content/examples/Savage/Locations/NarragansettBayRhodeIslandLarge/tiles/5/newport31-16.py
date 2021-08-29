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
        texture=ImageTexture(url=['../../images/5/newport31-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.86339110810791,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[23,25,27,26,20,17,17,17,13,13,13,17,25,23,17,20,24,19,13,19,33,35,24,19,19,19,17,18,17,18,23,25,25,25,25,22,17,24,24,22,16,24,36,39,27,23,22,20,20,19,17,18,22,26,27,26,24,16,23,25,25,24,19,26,38,40,46,34,38,29,32,28,32,27,27,27,26,25,23,16,24,25,25,23,20,29,39,41,49,43,45,50,46,45,43,38,31,29,26,25,22,16,23,26,26,24,22,32,41,43,47,44,50,57,57,56,54,48,41,36,27,24,19,16,22,25,26,25,25,34,44,45,46,46,53,60,65,64,56,45,37,34,27,24,20,17,20,24,25,25,26,32,42,44,43,48,54,61,64,63,52,42,31,29,28,26,19,21,22,20,22,23,25,31,36,38,45,51,57,62,63,57,50,43,30,26,23,29,17,18,24,21,24,23,25,31,37,38,50,58,62,63,61,55,49,41,28,24,26,33,20,17,26,24,22,23,24,29,35,37,55,60,63,62,59,53,47,42,38,32,30,35,20,17,19,28,25,23,24,26,30,31,59,63,63,62,60,57,50,48,47,44,40,36,25,25,20,28,27,26,24,24,28,29,61,64,63,63,63,60,58,58,56,51,47,37,30,26,20,27,28,27,27,25,25,26,62,65,64,64,63,62,63,60,57,55,50,46,39,30,24,27,28,28,28,27,28,28,63,65,65,64,62,61,58,57,56,55,53,47,39,31,25,26,28,28,29,28,28,28,61,62,63,63,59,59,59,62,63,57,51,42,34,30,26,22,26,28,29,30,29,29,57,59,60,59,58,59,59,65,61,54,46,39,30,27,26,26,23,27,29,30,30,30,55,57,58,58,58,57,58,65,57,53,43,33,30,29,28,27,26,26,27,29,30,30,56,56,56,58,58,58,57,59,60,51,37,37,37,30,29,27,26,25,26,27,30,30,56,60,59,62,62,57,56,56,56,46,49,46,39,34,34,32,30,29,26,27,29,29,57,61,61,67,63,60,58,54,54,56,54,51,42,50,50,40,36,31,26,26,27,27,57,62,60,62,62,62,62,59,64,68,61,50,52,56,47,46,42,38,39,37,30,29,58,60,60,61,62,62,65,73,76,70,63,61,57,52,49,42,46,50,50,50,43,40,58,59,60,61,62,62,66,75,77,69,66,62,56,53,48,43,49,52,51,52,45,43],
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
