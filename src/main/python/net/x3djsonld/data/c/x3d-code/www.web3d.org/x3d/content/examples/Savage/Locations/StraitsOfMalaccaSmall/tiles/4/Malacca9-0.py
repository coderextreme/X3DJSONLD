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
        texture=ImageTexture(url=['../../images/4/Malacca9-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.3890484551644233,98.7885625,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[123,126,95,89,105,95,80,62,73,61,60,39,46,45,31,26,29,18,26,14,14,9,117,95,92,71,87,71,66,55,73,53,47,43,39,42,35,32,22,19,13,14,12,10,110,96,81,66,76,64,47,48,61,52,40,35,34,35,30,30,18,15,13,12,10,14,84,71,73,49,63,53,57,45,49,45,35,36,28,24,27,24,15,14,10,9,7,6,73,78,67,51,48,52,48,37,44,42,46,37,25,17,19,22,19,12,8,16,12,3,80,72,58,40,36,45,50,33,39,34,37,37,32,16,27,10,12,7,8,6,2,1,61,65,60,46,30,38,34,30,32,30,35,32,26,23,21,11,6,7,5,3,4,3,53,38,43,25,32,29,29,29,28,26,28,27,27,19,19,11,5,4,6,3,6,5,35,43,26,34,23,30,25,25,34,27,22,17,19,19,15,14,15,7,3,4,5,3,33,40,20,23,18,21,24,24,27,26,28,24,19,27,15,17,14,7,2,2,3,6,25,19,23,15,21,19,23,21,26,21,21,24,22,17,15,13,14,2,8,4,6,6,21,15,8,13,23,19,20,19,23,19,17,15,13,13,10,7,7,4,3,6,4,4,20,15,15,12,14,17,17,19,20,15,14,16,12,9,7,4,2,3,5,4,-1,2,25,18,14,9,15,15,17,15,17,15,18,17,18,9,5,4,4,1,3,0,1,1,13,10,9,14,12,22,12,17,17,11,12,12,7,8,3,2,4,2,2,0,1,3,10,19,11,10,12,13,12,10,11,9,11,7,6,3,3,4,0,1,1,1,1,4,7,11,6,8,5,11,10,7,11,6,9,8,6,3,2,1,1,0,0,0,3,3,10,5,5,14,14,9,8,4,6,4,7,4,4,6,2,2,2,0,1,1,1,2,6,4,6,3,2,11,3,11,8,5,3,10,2,4,0,-1,0,1,0,0,0,3,5,2,3,3,6,8,3,10,5,2,5,0,0,1,0,3,2,2,0,1,2,1,1,4,0,0,3,3,2,3,2,-5,-1,0,0,0,1,2,0,2,1,2,4,0,0,1,2,3,2,18,0,2,4,0,0,0,0,0,0,1,0,1,1,1,2,0,0,1,2,3,2,16,1,0,5,0,-1,0,0,0,0,0,0,1,1,1,1,0],
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
