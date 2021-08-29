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
      Transform(translation=(162336.84,0.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity0-6.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[41,45,44,45,45,40,30,42,32,42,30,24,22,25,28,26,27,29,30,31,31,29,35,38,37,37,45,45,30,29,31,30,27,20,23,24,23,24,30,30,30,30,31,33,30,30,40,44,45,45,34,30,30,23,17,18,22,29,30,30,30,30,34,39,38,42,30,30,30,30,36,28,26,27,28,30,16,19,26,35,45,34,45,45,45,45,49,50,30,21,21,21,30,27,30,24,15,15,14,20,28,29,30,41,33,48,46,43,47,60,30,24,37,29,30,30,30,45,30,28,14,23,30,30,30,40,44,78,69,42,44,58,30,30,29,29,30,30,26,20,15,15,15,24,30,30,30,30,45,40,40,35,42,49,22,30,30,31,15,30,19,15,13,14,28,30,30,26,20,24,27,30,30,39,65,55,30,30,23,14,14,30,28,15,12,15,14,15,15,22,30,30,30,35,52,46,91,54,15,15,15,15,14,11,11,13,15,16,15,27,26,22,21,30,48,77,76,68,39,30,15,14,14,14,13,15,14,15,23,26,30,30,30,19,19,30,30,45,45,49,30,34,14,13,12,15,15,14,23,45,30,42,34,45,30,21,36,30,30,30,30,30,30,37,13,14,14,15,14,30,45,61,65,61,75,45,39,30,73,42,30,30,30,30,44,72,14,19,26,28,30,30,30,30,39,67,45,40,60,45,76,68,65,75,46,63,75,97,32,30,41,35,51,60,49,60,67,61,45,60,75,76,75,75,62,60,60,66,76,75,45,45,45,45,42,34,34,30,45,44,52,46,65,45,74,75,51,61,60,63,72,78,41,30,27,27,27,27,30,30,30,30,36,30,30,30,27,27,39,45,60,60,54,70,29,44,47,30,30,30,30,30,35,45,31,27,45,45,45,34,45,28,45,45,53,45,30,31,30,27,29,25,30,48,28,44,29,21,37,21,28,26,28,24,21,45,35,30,18,30,30,24,30,30,42,33,31,43,21,27,18,18,24,22,44,21,44,20,37,45,38,39,24,35,32,39,36,31,30,30,21,30,18,22,30,30,30,37,33,30,30,30,37,39,24,37,32,40,36,31,30,30,27,30,18,26,30,30,30,39,32,30,30,30]))])])])
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
