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
        texture=ImageTexture(url=['../../images/5/newport16-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[9,17,24,30,35,34,33,33,32,30,30,28,28,26,29,30,29,23,14,4,0,0,9,17,26,32,36,35,34,36,36,35,32,31,28,27,26,27,25,21,13,3,0,0,10,20,28,34,35,38,36,38,39,36,35,32,30,29,29,26,24,19,12,2,0,0,13,20,27,35,38,39,40,37,39,36,35,32,31,32,31,29,25,20,12,2,0,0,12,19,29,35,42,42,41,40,38,40,34,34,33,31,33,32,31,17,14,10,1,1,15,19,27,35,40,42,44,41,40,38,36,36,34,35,37,34,29,29,22,15,0,0,12,24,29,36,39,43,42,44,40,41,40,40,39,38,36,40,34,31,25,16,10,6,18,19,26,35,47,47,44,45,45,43,45,41,41,40,41,39,39,38,28,21,15,14,16,21,28,36,44,50,49,52,48,45,46,46,46,44,43,42,38,38,31,25,16,16,19,27,32,38,45,52,50,53,48,47,44,47,45,42,43,42,43,37,34,26,20,18,17,26,36,44,49,49,51,50,50,49,48,46,41,38,39,40,39,40,33,27,24,22,16,21,38,45,45,54,54,49,50,49,46,48,41,38,39,36,37,41,34,31,22,21,19,27,33,39,43,45,48,51,51,49,50,47,40,38,37,39,38,36,40,32,23,22,17,23,32,36,44,44,44,46,49,48,48,41,45,42,36,38,39,38,36,38,27,24,19,23,31,36,42,41,42,45,43,45,45,43,48,46,40,37,36,38,36,33,32,30,17,28,28,33,35,37,43,44,43,43,44,44,46,46,45,42,43,41,38,34,33,31,14,20,30,34,35,37,40,39,45,41,42,47,45,50,47,47,45,46,40,39,36,35,11,21,25,29,35,34,38,36,45,42,45,45,45,46,47,47,50,49,46,45,38,38,11,22,25,28,30,32,36,38,37,43,42,43,47,48,49,51,53,52,52,48,41,41,13,21,21,27,26,32,33,38,37,45,41,49,50,50,52,54,54,52,55,49,43,42,17,19,22,25,29,32,33,40,41,43,47,50,49,52,56,58,60,54,57,51,42,41,17,19,23,27,34,39,37,42,46,46,49,50,53,55,58,62,60,57,55,52,45,44,18,20,23,30,37,38,43,46,50,50,52,54,53,57,60,62,63,63,59,53,45,43,19,20,25,32,38,37,42,47,50,50,51,54,53,58,60,60,63,66,59,54,45,43],
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
