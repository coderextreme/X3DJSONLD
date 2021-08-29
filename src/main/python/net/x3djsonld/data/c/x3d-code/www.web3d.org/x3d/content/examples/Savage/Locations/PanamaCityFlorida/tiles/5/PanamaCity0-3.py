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
      Transform(translation=(81168.42,0.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity0-3.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[37,36,57,50,66,74,44,58,59,70,74,61,50,54,57,47,50,48,59,69,72,53,63,71,45,52,50,40,41,41,60,42,47,46,70,71,74,76,55,61,50,51,48,40,64,73,58,67,54,67,71,54,74,66,69,79,74,74,79,79,68,72,59,69,66,67,71,73,74,73,75,71,75,75,70,74,72,85,84,84,88,79,85,80,78,80,74,79,69,69,75,70,60,75,76,71,79,76,78,79,84,84,83,81,73,73,72,59,76,73,63,61,52,48,57,63,69,56,62,75,75,67,75,74,78,82,76,77,60,68,68,75,49,65,53,55,61,62,47,48,47,49,52,61,63,68,80,80,65,78,69,52,54,60,46,41,36,48,49,51,53,56,69,69,64,74,66,72,77,82,78,66,56,51,45,47,59,58,44,51,55,56,67,71,70,59,74,57,73,65,79,82,73,69,81,77,67,73,70,54,63,61,57,66,65,65,63,67,64,63,59,64,79,77,86,74,76,60,78,74,72,69,67,64,70,74,76,66,64,50,37,61,67,65,74,78,66,66,66,66,72,76,67,59,67,67,63,75,73,67,60,58,44,49,67,50,73,50,72,75,78,48,64,56,62,66,61,61,53,65,43,66,68,61,52,46,60,60,73,71,76,77,57,54,38,63,55,50,49,54,53,50,53,37,62,47,40,28,36,37,49,51,63,59,66,44,33,33,48,51,54,54,48,48,46,28,48,25,50,56,53,61,56,48,56,45,41,44,53,56,41,40,50,56,51,46,41,28,32,46,38,47,45,43,40,34,39,40,43,35,36,35,32,40,42,44,39,44,28,31,28,39,40,35,35,26,28,31,39,32,34,32,24,29,23,31,20,29,26,26,33,22,34,35,40,44,34,33,25,31,27,23,22,21,22,30,20,20,29,24,24,23,15,22,28,30,31,38,35,24,27,24,31,34,30,24,13,23,10,11,10,14,14,27,26,26,25,26,34,29,31,34,27,26,29,26,19,17,5,18,0,-1,0,11,22,24,24,21,22,27,33,29,25,32,26,13,16,11,-1,0,13,15,-1,-2,-1,10,21,24,23,20,22,25,34,27,25,29,26,13,14,0,-1,0,13,16]))])])])
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
