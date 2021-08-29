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
        texture=ImageTexture(url=['../../images/4/Malacca5-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.116798394735791,102.54606267847167,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[7,7,8,11,9,28,12,46,148,40,39,25,17,13,28,38,100,152,358,79,13,72,11,9,8,10,10,14,23,22,72,46,43,16,11,71,36,66,66,51,100,198,29,26,5,10,8,9,9,11,9,19,48,23,23,14,32,39,46,25,60,123,186,61,70,23,10,10,8,12,8,7,8,13,30,15,12,5,22,15,33,103,338,181,395,104,87,39,8,9,15,11,9,7,7,13,12,14,13,17,15,36,68,80,224,83,347,198,221,105,34,8,14,10,11,12,16,11,9,13,9,13,23,19,40,39,69,56,404,162,91,256,30,12,25,14,15,13,11,11,10,15,14,13,11,36,14,34,62,132,352,179,121,103,30,31,21,10,11,12,13,10,31,17,17,11,15,13,31,132,46,57,213,189,43,162,38,36,19,23,13,15,16,4,35,11,14,21,10,23,18,23,28,39,170,42,59,72,39,10,16,17,15,20,24,8,20,49,22,16,18,11,22,37,31,51,44,59,146,59,17,20,25,20,23,19,22,17,15,44,26,32,13,5,27,22,36,70,71,106,56,83,17,32,25,32,29,19,28,27,17,43,32,53,20,12,11,30,36,41,75,78,150,37,31,41,45,29,29,31,23,21,18,48,46,46,54,16,29,34,87,26,56,103,59,30,36,52,57,56,31,43,20,36,25,39,46,50,18,10,20,22,71,48,55,58,26,26,53,112,97,69,40,43,46,27,33,23,44,36,50,9,23,19,51,16,194,37,21,33,223,91,327,84,53,41,58,36,40,31,35,48,18,8,11,15,54,17,63,17,47,30,35,131,511,502,261,64,60,40,42,32,29,35,22,25,14,17,10,20,11,36,19,34,43,203,688,741,605,378,277,72,46,38,38,24,38,36,6,16,14,32,18,21,19,27,36,108,566,660,807,617,642,82,64,82,59,26,27,29,8,7,14,24,39,25,23,35,56,53,160,316,988,411,159,61,46,43,46,26,13,13,22,12,14,31,8,8,17,70,50,78,96,152,455,510,140,46,47,37,19,22,19,18,24,17,11,8,16,19,30,49,62,88,70,68,104,232,61,59,84,44,18,38,33,31,7,14,24,27,13,38,30,25,77,98,69,69,105,212,62,52,63,37,19,44,34,21,6,14,21,25,13,33,25,23],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
