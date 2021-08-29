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
        texture=ImageTexture(url=['../../images/5/newport16-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[16,16,16,18,18,17,17,14,11,9,8,7,5,5,9,8,6,2,1,1,1,0,14,17,19,20,21,21,20,16,12,12,12,11,10,9,12,13,11,6,1,1,1,1,15,17,23,22,22,20,19,17,14,16,16,14,14,16,19,17,14,9,2,2,1,1,14,17,24,25,24,22,20,19,19,21,20,18,16,19,23,23,16,10,5,2,2,2,11,16,22,26,28,24,26,26,23,23,21,24,21,23,26,26,21,13,5,2,2,2,10,13,19,24,28,26,29,28,28,27,27,28,28,28,30,29,24,15,2,2,3,3,8,12,17,24,28,28,29,31,33,33,34,30,31,32,35,33,28,17,5,3,3,3,10,15,19,22,24,27,30,33,37,38,38,37,37,35,41,37,30,20,6,3,4,5,13,16,23,25,25,27,29,35,39,43,45,42,44,39,39,38,29,20,7,4,6,7,18,22,25,27,26,30,33,34,40,42,44,44,42,43,42,35,28,14,4,4,9,9,21,26,29,27,28,28,31,34,40,42,48,49,45,41,37,29,21,7,6,6,9,9,23,32,32,29,29,28,32,35,42,46,49,50,46,39,30,21,13,8,5,7,11,11,30,39,35,31,32,30,34,38,41,50,49,49,43,38,23,14,9,8,7,9,9,8,37,49,37,33,32,34,38,40,42,46,50,49,40,31,19,10,9,7,8,12,13,13,39,38,40,38,36,40,40,42,44,46,45,42,35,26,19,9,7,5,14,18,15,15,42,37,39,38,38,40,40,41,45,44,44,39,34,20,16,7,9,12,14,17,20,20,35,33,36,36,39,38,37,41,42,43,40,34,29,23,12,12,9,13,18,21,24,25,29,27,30,32,35,35,35,38,41,41,39,37,27,21,16,12,13,13,22,23,25,25,23,21,24,22,28,31,33,35,37,36,37,29,25,23,19,16,17,20,26,27,28,28,16,16,17,19,19,24,30,31,33,36,34,28,22,17,17,18,18,29,29,32,33,34,13,10,12,15,18,24,28,31,30,30,32,30,25,19,19,19,22,27,31,28,33,33,8,8,10,13,19,23,28,35,29,33,30,26,22,20,18,19,22,29,31,35,36,36,6,12,9,14,19,22,28,34,34,30,30,28,23,24,18,21,23,32,34,33,37,37,5,12,9,14,20,23,28,34,32,29,32,27,23,24,19,21,23,33,37,34,38,38],
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
