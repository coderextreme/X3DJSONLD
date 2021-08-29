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
      Transform(translation=(27056.14,0.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[60,60,38,34,37,45,24,56,64,63,59,50,52,38,42,36,30,54,70,75,75,79,58,75,71,55,62,34,51,46,48,53,70,68,68,41,28,40,64,68,60,70,87,69,62,73,57,46,35,33,43,27,39,54,62,65,55,42,34,50,58,47,47,48,64,70,42,60,62,38,29,24,29,35,45,52,57,51,56,47,29,35,42,57,70,62,74,72,60,59,58,54,34,25,31,35,50,57,53,42,38,27,30,30,31,44,53,59,57,62,63,52,35,31,27,19,32,28,22,32,27,30,25,21,32,51,66,46,69,67,58,68,32,24,15,15,11,18,22,29,31,33,38,31,42,57,60,69,65,65,71,32,57,64,16,11,9,14,23,14,32,48,60,47,53,54,59,54,61,65,51,60,54,26,33,46,20,33,45,52,53,51,49,50,56,59,59,57,54,46,39,33,27,16,22,29,20,14,61,61,45,57,57,52,51,44,39,51,49,46,32,31,12,22,17,22,31,19,23,26,44,50,50,62,48,51,49,50,26,25,33,26,24,19,19,25,20,31,41,39,34,44,45,43,42,60,44,45,33,31,24,14,14,17,22,26,33,22,22,37,40,48,26,44,41,39,45,36,22,21,16,22,20,28,12,19,17,38,51,43,26,41,47,62,57,59,21,18,19,5,17,13,25,13,16,23,43,47,46,41,42,47,48,27,55,56,59,63,3,7,14,16,17,17,13,18,33,43,36,44,56,51,51,55,51,58,53,57,59,57,3,6,12,13,20,40,31,26,26,23,41,51,52,51,51,46,43,57,54,42,51,51,13,16,20,20,41,44,44,41,21,34,12,30,22,29,47,48,52,49,47,46,47,49,15,33,37,30,37,44,45,42,39,44,38,45,42,40,43,43,49,48,44,48,35,46,30,33,35,38,40,39,38,38,38,38,37,37,40,41,38,40,44,45,44,45,37,34,29,30,31,34,36,38,38,37,37,42,39,39,38,40,39,43,40,36,37,37,29,24,14,19,24,27,29,30,26,34,39,42,40,36,35,41,44,40,36,39,37,33,30,25,15,18,24,26,29,29,22,32,39,43,41,35,35,41,45,41,32,39,39,35,29,24]))])])])
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
