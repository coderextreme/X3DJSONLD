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
        texture=ImageTexture(url=['../../images/5/newport17-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[3,5,8,7,7,12,10,6,11,16,21,25,28,29,30,30,30,25,20,21,25,26,5,9,9,7,13,16,10,7,12,17,22,28,29,30,31,33,30,24,21,23,26,26,10,11,8,8,18,15,10,8,14,20,25,28,30,31,34,36,31,25,23,26,27,27,12,10,7,14,18,15,10,9,14,23,28,28,30,33,38,37,31,26,25,27,28,28,13,9,9,15,16,12,10,13,15,25,29,29,31,37,41,35,29,26,29,30,29,29,12,9,12,16,14,11,14,18,19,23,29,30,33,39,41,34,29,28,30,31,31,31,10,10,14,15,13,15,18,21,23,27,30,33,36,40,38,33,29,30,31,32,33,33,10,12,16,15,15,17,20,24,29,32,32,35,38,40,35,31,32,32,32,33,34,34,11,13,16,16,17,18,20,23,30,34,36,38,40,40,36,36,36,33,33,34,35,35,12,14,16,16,18,19,20,22,27,30,36,41,41,40,39,38,36,34,33,34,38,39,14,18,14,17,22,24,23,21,25,31,37,42,43,42,40,40,38,35,34,36,41,42,15,14,16,22,25,28,23,23,25,33,38,43,45,43,43,41,39,35,34,36,39,40,13,15,19,23,25,22,23,26,26,32,38,42,43,44,44,42,40,38,34,34,34,34,17,17,21,24,22,22,24,27,28,31,37,39,43,46,45,43,40,38,35,29,27,26,18,18,21,23,22,23,27,29,30,33,35,40,44,47,46,41,38,35,30,20,14,13,19,19,20,21,22,24,28,30,31,33,37,42,47,48,45,39,34,29,21,13,3,2,21,20,20,21,24,26,28,30,32,35,41,45,46,45,40,35,28,21,12,3,0,0,23,23,22,22,25,28,30,31,33,40,45,47,47,43,35,29,20,11,3,0,0,0,25,25,23,22,26,30,32,32,35,42,44,49,47,40,30,21,13,2,0,0,0,0,27,24,22,24,29,32,34,35,37,40,43,46,40,32,22,7,1,0,0,0,0,0,26,22,23,28,31,34,36,37,39,41,43,38,32,21,9,2,1,0,0,0,0,0,24,24,27,33,37,39,39,41,43,43,38,31,23,14,4,1,0,0,0,0,0,0,26,28,32,37,42,45,44,44,44,39,31,22,12,6,3,1,0,0,0,0,0,0,27,28,33,37,43,46,45,45,44,38,30,20,11,6,3,1,0,0,0,0,0,0],
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
