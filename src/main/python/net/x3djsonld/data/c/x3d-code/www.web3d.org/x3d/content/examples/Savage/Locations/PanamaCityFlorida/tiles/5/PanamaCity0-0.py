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
      Transform(translation=(0.0,0.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[70,66,69,74,66,67,84,75,68,64,61,34,27,29,32,29,30,47,52,48,52,60,72,66,61,54,67,75,64,63,67,64,62,60,66,60,37,24,32,37,41,45,75,58,68,66,60,52,53,66,60,59,71,63,59,61,72,64,66,64,44,21,39,53,62,62,69,69,68,59,49,44,58,61,65,61,63,61,60,63,62,73,61,48,21,33,31,42,63,59,60,53,42,53,57,58,55,55,56,47,59,62,62,63,64,62,29,22,54,60,63,64,65,62,46,59,57,60,64,55,56,54,30,46,48,55,50,43,26,20,43,63,55,55,57,53,46,42,61,60,63,53,51,55,41,51,22,54,55,54,30,21,23,32,54,55,58,62,55,68,37,36,47,48,57,52,58,55,55,23,44,47,15,16,8,16,37,50,56,59,69,53,33,45,49,49,52,51,58,51,54,37,20,20,15,24,13,20,46,47,51,60,66,51,36,48,52,53,50,50,48,47,23,16,14,14,14,17,34,61,31,41,50,54,55,63,33,19,34,49,46,47,43,33,15,8,-4,27,27,48,44,44,21,31,41,47,54,43,45,42,21,46,39,27,22,15,3,0,26,30,27,40,46,45,16,31,27,30,41,45,53,55,43,14,27,17,5,15,9,3,8,8,8,33,37,41,2,11,12,18,28,33,49,46,42,38,34,28,26,26,17,-1,-1,5,5,13,17,21,2,1,0,-1,7,11,26,47,42,40,33,24,20,12,8,7,-1,-2,0,4,4,3,2,0,0,-1,-2,0,10,16,13,12,19,19,18,15,6,3,2,-3,2,12,12,3,2,2,2,-1,-2,-1,0,15,9,6,6,8,10,8,1,0,-3,0,2,1,8,13,35,9,-1,-2,-2,-2,0,15,10,4,1,3,7,2,0,-1,-2,-1,2,8,18,15,29,30,22,3,-2,-2,-2,-2,-2,6,11,8,9,4,-2,-2,-1,10,11,16,18,30,34,33,34,29,-2,-2,-2,-2,-2,11,9,6,16,0,-2,-2,0,11,7,11,18,29,28,33,34,27,-2,-2,-3,-2,-2,3,2,3,4,-2,-2,-2,-2,-2,-1,9,11,14,29,31,33,22,-2,-2,-3,-2,-2,1,2,4,6,-2,-2,-2,-2,-2,-2,10,11,15]))])])])
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
