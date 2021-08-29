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
        texture=ImageTexture(url=['../../images/4/bosphorus6-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0035324567,zDimension=24,zSpacing=0.0023768744,height=[0,0,0,0,0,0,0,-1,0,0,0,0,-3,0,4,0,3,1,0,9,5,10,0,0,0,1,0,-1,0,0,0,0,-3,-3,5,3,0,-1,12,5,1,1,14,15,0,0,0,-2,0,0,-1,4,-2,0,-1,-7,-1,-4,-13,0,20,4,8,5,18,24,-1,0,0,0,0,0,0,1,0,-3,0,0,-11,0,1,8,10,9,17,10,9,11,0,0,0,0,0,1,0,-1,-1,0,7,-5,-1,10,12,16,17,14,25,21,15,12,-9,0,0,-3,0,1,-1,0,-3,-5,-3,-3,1,15,20,21,25,26,26,36,30,34,-1,0,0,-15,-1,-1,-2,-5,0,7,2,1,14,17,31,37,33,34,33,41,41,41,-5,0,12,-8,0,0,-10,-3,11,19,11,18,23,23,33,39,46,41,40,45,53,55,0,0,3,0,12,-3,-6,6,10,19,15,23,31,35,37,43,49,54,47,49,58,62,1,-1,1,5,17,11,8,14,14,24,23,25,34,40,45,46,56,60,50,58,60,62,0,0,-3,3,19,17,18,22,23,31,36,32,38,43,48,50,60,70,65,62,63,64,0,-1,-5,0,13,21,27,31,36,40,52,41,44,52,50,57,71,71,72,66,67,69,5,-30,-7,1,13,24,33,33,37,54,53,47,55,52,55,57,68,72,78,70,73,73,13,0,1,4,17,36,42,44,43,48,49,51,53,49,57,60,63,67,72,74,75,71,36,19,0,8,22,34,45,46,47,49,53,58,49,43,46,56,61,61,64,76,76,76,36,18,1,8,19,35,38,40,41,44,55,56,48,34,36,53,63,53,64,80,82,82,34,11,2,6,24,34,35,43,34,42,51,52,51,33,46,61,55,46,73,80,71,67,26,12,3,10,20,18,32,32,32,50,58,46,41,19,25,24,57,44,83,69,53,51,17,15,10,6,9,15,17,33,51,58,35,22,17,18,27,18,20,31,68,53,36,37,28,26,36,12,7,9,13,43,47,14,12,16,21,35,47,43,31,23,51,32,44,46,19,20,31,39,27,29,8,17,10,14,31,40,40,44,54,49,39,29,27,42,47,56,6,10,36,47,47,37,21,15,20,36,38,58,59,62,60,48,55,48,39,32,58,61,8,19,29,42,57,54,45,22,32,46,61,62,75,72,64,54,60,44,62,53,40,47,9,23,27,39,58,57,48,24,33,44,66,64,78,75,64,55,59,45,67,56,39,42],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])))])
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
