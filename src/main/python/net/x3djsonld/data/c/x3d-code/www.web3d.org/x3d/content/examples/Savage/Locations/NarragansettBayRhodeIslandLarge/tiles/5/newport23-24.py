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
        texture=ImageTexture(url=['../../images/5/newport23-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.26357234975819,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[4,3,6,9,12,17,21,22,23,17,18,12,9,6,1,0,0,1,1,1,1,1,5,4,6,7,14,20,25,29,23,22,20,16,10,5,0,4,0,1,1,1,1,1,4,5,7,10,16,22,26,31,26,23,23,18,10,8,5,2,1,1,1,1,1,1,8,8,8,11,15,20,24,27,25,25,23,14,15,12,15,9,8,4,3,2,1,1,8,6,8,10,15,16,24,27,24,25,27,23,19,17,14,13,9,8,6,3,2,2,12,10,9,13,16,22,21,24,25,28,28,26,20,19,16,16,17,12,10,8,3,2,15,14,16,15,19,24,25,29,32,32,31,33,27,21,20,21,18,16,12,7,6,6,23,20,21,20,20,23,25,32,37,42,41,39,33,23,21,22,22,19,14,10,8,8,25,26,23,24,26,27,31,35,37,46,47,44,35,26,24,24,23,21,16,12,11,12,28,27,27,29,26,29,32,36,39,46,49,44,36,27,26,27,28,23,19,16,16,16,26,28,28,29,30,31,33,37,38,44,47,44,37,30,27,27,27,24,20,18,18,18,25,31,29,29,33,33,37,41,42,50,45,41,37,35,30,28,26,24,21,17,16,16,31,32,32,35,37,40,40,41,51,52,46,45,42,38,34,29,27,23,19,16,15,15,35,38,42,42,44,45,46,49,46,49,48,45,44,41,37,33,27,25,19,16,15,15,37,40,43,49,53,53,54,52,51,52,50,48,46,39,35,30,28,24,19,16,15,15,39,43,49,50,53,55,55,51,55,53,52,46,45,39,35,30,24,22,19,16,14,14,37,42,48,51,48,51,54,55,54,50,49,48,45,39,35,31,26,22,18,16,14,14,38,42,40,42,42,48,49,52,51,50,47,47,44,40,34,32,27,22,18,16,15,14,33,32,34,36,42,44,45,47,49,47,48,49,45,40,37,33,26,23,19,16,14,14,31,32,33,37,37,41,42,45,48,45,48,46,45,42,37,32,26,23,21,18,15,15,26,29,28,33,37,38,41,45,44,45,48,48,45,42,37,31,26,23,21,19,17,16,23,24,25,31,37,40,42,41,47,47,49,50,46,44,34,29,27,23,21,20,17,17,18,22,25,28,34,38,44,46,47,48,49,51,47,42,36,31,26,24,22,20,17,17,19,23,25,27,34,38,45,46,47,48,49,52,49,43,37,30,24,24,22,20,17,17],
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
