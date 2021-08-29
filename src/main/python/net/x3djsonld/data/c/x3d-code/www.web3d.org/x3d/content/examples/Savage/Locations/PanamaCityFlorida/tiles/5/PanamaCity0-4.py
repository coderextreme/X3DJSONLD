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
      Transform(translation=(108224.56,0.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity0-4.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[53,77,68,66,62,65,72,76,82,92,78,71,85,85,65,47,64,77,59,64,45,44,40,56,63,49,50,67,78,84,87,89,83,77,65,54,54,49,49,61,54,63,60,45,67,68,70,53,60,65,78,73,69,61,72,62,57,64,52,58,46,39,40,43,60,60,79,72,79,75,71,68,71,75,74,60,55,61,67,70,62,51,54,47,36,25,40,54,73,77,75,76,86,85,83,88,75,79,53,72,75,70,65,63,52,65,38,27,23,29,75,64,60,57,74,71,71,73,82,81,80,82,77,71,73,79,74,64,58,53,30,45,60,64,54,50,64,66,57,52,61,68,70,59,61,62,59,70,80,81,59,58,42,32,47,54,49,46,52,53,40,64,64,51,58,46,55,57,62,71,52,67,70,64,76,67,73,50,58,43,57,50,58,58,69,53,50,41,47,47,55,47,59,65,59,50,45,60,74,71,49,53,37,41,36,54,63,63,58,54,35,45,63,42,54,50,38,39,39,37,76,74,72,69,44,25,47,41,37,51,75,51,50,42,45,58,66,47,34,58,30,26,56,64,64,57,52,37,44,59,51,70,63,59,50,61,38,54,55,40,51,35,30,15,63,43,59,43,30,24,29,55,32,53,64,69,54,48,42,43,43,52,40,39,21,16,33,35,45,43,67,40,28,35,37,54,68,67,56,63,64,60,54,71,53,64,29,21,56,55,44,35,52,24,30,49,53,54,56,61,52,50,59,63,61,62,64,68,45,45,35,42,40,28,28,33,36,42,39,49,40,45,38,44,57,61,62,61,54,38,31,30,29,29,30,36,24,29,36,36,34,33,34,39,26,33,47,39,46,54,54,53,33,30,30,32,33,31,32,22,29,32,27,31,25,30,27,32,38,34,38,36,42,47,33,40,23,25,20,24,20,23,26,26,30,33,22,30,32,32,30,28,25,35,32,38,30,27,18,18,18,19,27,26,21,17,22,17,24,23,29,31,31,35,36,38,41,41,22,19,15,19,-1,21,22,28,27,26,7,24,30,29,25,17,22,24,26,27,26,28,13,12,16,17,0,22,22,26,29,25,8,23,29,28,26,16,19,24,24,26,28,27,11,11]))])])])
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
