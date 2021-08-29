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
        texture=ImageTexture(url=['../../images/4/Malacca5-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(2.116798394735791,102.12856265864148,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[3,4,4,7,4,3,2,4,2,6,0,6,4,4,6,-3,4,16,11,10,10,7,5,3,4,3,5,4,4,6,4,6,6,0,2,4,1,3,8,10,14,7,11,11,4,5,4,4,4,4,5,7,5,5,5,0,-2,5,7,5,9,8,9,9,14,5,4,5,5,3,6,6,2,2,1,7,12,8,16,17,14,15,11,12,7,8,10,10,4,3,8,5,5,4,1,0,6,9,8,7,10,24,45,22,36,13,16,4,7,8,3,4,7,5,4,2,3,8,10,5,5,15,9,18,30,35,36,19,6,9,12,34,3,4,5,6,8,1,6,10,14,3,4,12,11,10,41,32,20,12,6,11,44,30,6,8,9,8,-41,8,8,7,4,11,11,26,24,30,27,16,13,19,20,14,27,30,4,7,9,6,5,6,6,3,25,16,11,23,18,46,26,39,33,21,14,23,33,38,5,18,19,6,6,6,7,6,46,21,15,5,39,52,40,29,26,20,26,10,39,39,8,27,7,16,10,37,6,13,40,45,17,35,30,34,51,40,41,33,18,8,14,17,56,23,25,27,14,31,5,9,12,35,33,33,32,32,44,42,44,57,28,10,13,17,29,27,44,38,24,11,13,17,39,63,30,35,42,38,55,43,38,48,31,18,28,31,61,95,62,64,41,43,24,4,33,54,58,39,30,33,46,41,40,34,31,23,23,36,62,48,86,62,61,13,22,27,16,40,47,49,64,57,37,32,23,51,33,35,28,53,22,45,85,53,49,52,51,8,29,38,40,37,56,42,55,58,50,69,47,27,36,223,31,58,81,44,44,38,27,29,42,41,43,57,65,55,47,36,76,48,47,46,23,35,27,51,55,48,37,21,38,124,141,51,32,50,68,58,65,67,71,58,52,23,26,43,47,72,46,50,27,18,51,36,63,65,36,56,69,80,87,145,221,50,38,37,30,36,51,68,67,64,41,44,30,49,49,68,53,71,85,54,111,95,304,84,56,35,45,56,85,83,39,27,29,47,23,25,47,55,57,62,87,84,131,97,413,63,50,33,36,50,34,34,34,26,45,77,49,42,56,55,57,78,100,105,89,101,213,90,70,43,43,62,32,31,34,27,50,84,52,47,51,57,56,80,96,105,81,109,235,91,76,43,44,77],
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
