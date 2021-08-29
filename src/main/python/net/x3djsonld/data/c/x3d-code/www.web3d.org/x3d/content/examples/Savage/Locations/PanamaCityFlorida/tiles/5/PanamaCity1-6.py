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

newModel=X3D(profile='Immersive',version='3.0',
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(translation=(162336.84,0.0,36074.855),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity1-6.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[37,39,24,37,32,40,36,31,30,30,27,30,18,26,30,30,30,39,32,30,30,30,21,37,39,35,30,30,30,30,15,15,30,30,30,18,35,39,30,37,22,45,36,44,31,36,21,15,33,31,21,18,30,29,15,14,22,27,33,30,36,19,15,19,30,43,29,30,32,30,41,21,15,25,15,24,38,30,30,13,16,20,26,13,30,33,35,37,28,28,25,27,22,15,14,15,18,13,12,30,24,30,19,26,11,20,30,31,33,35,27,26,22,15,26,22,29,25,30,30,30,30,30,28,22,15,6,17,15,30,30,31,22,18,21,22,21,18,18,22,23,26,27,27,28,26,20,9,15,21,25,19,30,37,13,11,9,14,20,20,22,23,22,13,15,22,24,18,22,12,11,22,23,24,28,28,15,10,7,7,14,15,19,22,20,17,13,12,14,11,15,13,5,16,22,23,23,22,7,7,10,15,15,18,19,19,17,16,15,15,7,8,7,7,5,11,16,19,15,17,8,13,14,15,15,15,15,14,15,14,13,9,7,2,1,2,4,6,11,14,10,7,5,7,9,10,11,11,11,10,10,9,9,7,1,0,4,7,11,14,10,7,12,15,3,4,6,6,7,7,6,5,5,6,5,4,1,-1,1,7,11,15,16,16,15,15,0,2,4,3,3,2,1,1,1,3,1,0,-1,7,7,1,7,14,14,17,19,22,0,1,3,1,0,-2,-3,-3,-3,-3,-2,-1,1,5,10,10,7,13,14,15,14,15,-4,0,1,-2,-5,1,1,1,1,1,1,1,7,8,11,15,11,7,7,7,12,13,-6,-2,-4,-6,-1,1,1,2,4,4,5,5,6,8,14,15,15,15,15,15,15,11,-1,-8,-6,-1,1,1,3,7,7,8,8,8,8,10,11,15,15,15,16,15,15,15,-11,-4,1,0,3,5,7,8,8,9,9,9,8,9,12,15,13,14,15,15,18,18,-6,1,2,4,6,8,8,9,10,10,11,12,13,13,11,8,7,11,10,13,14,16,-3,-6,-12,0,2,7,7,8,7,7,8,8,9,9,8,6,7,8,9,12,15,15,-2,-4,-11,0,1,7,7,8,7,7,8,8,9,9,8,6,7,8,8,12,15,15]))])])])
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
