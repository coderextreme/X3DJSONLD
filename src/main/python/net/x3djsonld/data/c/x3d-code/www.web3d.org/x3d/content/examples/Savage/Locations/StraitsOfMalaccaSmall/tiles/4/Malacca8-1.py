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
        texture=ImageTexture(url=['../../images/4/Malacca8-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.070985940057265,99.20606251983018,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[132,125,124,120,83,100,84,99,98,93,77,67,56,48,32,24,23,22,22,13,13,12,136,125,122,106,98,85,78,88,80,75,59,54,59,37,38,32,18,21,17,19,10,10,123,116,103,92,82,67,80,80,83,57,62,52,51,33,37,27,22,17,15,18,10,6,123,112,99,86,79,72,67,73,76,66,58,47,43,35,34,17,26,7,16,15,5,4,114,102,89,89,68,63,63,65,63,58,58,30,26,28,30,26,9,14,10,11,11,4,94,77,76,81,80,64,48,53,54,52,51,37,28,26,22,24,18,13,10,3,8,0,101,93,69,67,75,65,41,53,54,41,36,36,40,17,25,10,8,12,2,0,0,0,84,83,76,53,69,60,41,45,53,48,35,26,23,28,24,14,8,3,0,2,2,6,74,92,80,72,52,58,42,30,40,42,39,33,30,8,13,14,6,0,4,1,3,6,74,74,76,68,45,49,40,39,33,38,26,32,16,19,5,3,2,3,4,1,4,6,71,58,64,54,48,33,35,34,39,25,34,19,12,8,9,3,2,6,3,3,5,6,59,44,56,57,39,30,44,32,26,22,31,22,12,8,2,3,2,4,0,2,2,5,57,45,46,46,35,58,37,18,17,23,22,11,4,4,1,6,4,2,2,-3,1,0,42,26,31,37,34,42,22,21,11,16,10,11,20,12,2,5,3,0,0,2,0,1,43,52,26,19,31,25,38,19,10,14,9,14,15,12,4,3,1,-1,0,0,1,1,32,46,43,20,28,20,22,14,10,9,6,6,5,10,2,3,-1,-1,0,0,2,0,36,35,37,38,19,16,22,12,13,8,8,3,3,0,6,7,4,0,-2,0,0,3,43,30,26,26,12,10,21,16,14,9,6,8,0,4,2,-4,0,2,1,0,0,1,33,17,31,26,25,6,12,19,11,10,5,5,4,2,3,6,1,1,1,0,0,0,17,19,15,13,13,11,6,5,5,5,4,3,1,2,3,2,4,0,0,0,0,0,15,9,7,9,11,5,4,3,6,8,7,4,3,4,2,3,0,0,-1,0,2,2,10,7,15,5,3,3,2,2,3,9,8,3,3,0,0,0,0,0,0,2,2,2,9,8,12,4,3,3,1,3,6,8,6,2,4,1,0,0,0,0,0,3,2,2],
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
