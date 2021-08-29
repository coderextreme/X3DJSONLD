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
      Transform(translation=(54112.28,0.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity0-2.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[79,81,75,91,68,57,45,49,37,53,76,83,81,89,82,73,64,49,55,50,47,37,69,73,77,67,66,69,58,29,39,53,48,56,85,79,75,52,56,53,39,56,55,63,70,74,74,58,71,49,42,38,37,52,59,71,80,66,54,59,47,52,37,53,47,64,72,74,45,46,59,66,41,30,25,46,55,64,76,67,52,48,38,31,58,72,66,71,62,70,51,49,36,47,33,22,39,48,76,50,52,72,60,50,37,43,56,66,52,69,68,46,52,51,51,30,33,38,39,48,50,50,36,51,49,46,37,50,49,57,54,63,64,63,35,41,30,28,28,52,47,46,35,32,42,42,34,36,33,36,26,36,39,49,46,40,28,22,31,28,28,31,33,35,30,31,30,30,29,36,47,51,45,50,48,46,14,29,28,28,25,39,39,47,58,50,52,39,51,45,53,64,48,58,56,48,57,59,26,25,31,41,41,31,47,49,53,59,57,47,49,41,61,65,67,46,71,61,67,70,44,27,51,52,33,48,44,48,63,67,57,56,68,67,71,72,63,72,74,71,76,72,44,39,52,53,51,53,54,55,52,73,72,78,69,61,64,60,64,55,70,71,53,67,59,52,59,77,60,57,58,63,62,63,62,66,58,58,51,53,38,55,56,57,59,62,63,62,58,60,70,69,62,60,61,62,61,57,49,51,48,44,40,33,35,55,51,55,57,54,55,63,62,60,58,48,38,36,53,47,46,26,34,47,36,34,27,45,47,48,51,55,51,53,47,49,55,54,55,54,55,54,50,45,32,22,44,25,46,45,45,41,49,48,50,46,34,55,56,61,62,60,57,58,56,55,39,23,20,20,42,43,40,32,46,49,46,40,34,44,48,49,50,45,46,46,43,44,47,40,36,23,19,30,31,23,34,39,38,33,36,37,41,40,42,43,37,38,33,37,37,32,36,31,25,-2,15,20,24,41,37,25,28,28,33,35,35,17,33,29,29,35,36,31,27,28,18,12,11,10,25,24,25,24,27,24,30,27,26,30,14,10,32,33,34,34,30,29,28,13,-1,0,24,23,25,24,28,24,29,27,26,27,12,10,32,34,33,34,31,30,27,12,6,-1]))])])])
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
