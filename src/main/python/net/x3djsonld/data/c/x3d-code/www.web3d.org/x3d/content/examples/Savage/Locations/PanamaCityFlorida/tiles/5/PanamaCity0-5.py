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
      Transform(translation=(135280.7,0.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity0-5.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[44,43,29,30,28,30,30,32,26,25,20,17,15,15,15,24,30,30,30,32,37,41,45,45,45,30,26,33,31,30,22,22,21,17,15,15,15,24,30,30,30,33,42,35,60,41,29,34,30,24,30,23,25,19,19,16,15,15,19,15,26,30,30,30,30,30,54,35,41,23,30,22,28,20,23,23,16,15,14,12,15,15,26,20,30,30,30,30,29,34,30,20,28,22,21,17,22,20,17,15,13,12,14,15,27,30,30,30,30,30,45,45,35,17,14,33,23,15,18,17,20,14,12,12,14,15,15,30,26,30,30,30,32,30,30,28,17,16,15,15,15,15,15,9,9,9,14,21,24,15,30,29,28,30,67,51,36,30,18,13,15,15,14,14,9,9,16,15,17,17,18,19,26,26,21,22,60,59,48,45,29,14,14,10,10,9,9,30,24,15,18,26,34,21,22,30,30,30,37,30,60,60,19,10,14,9,9,9,14,32,45,27,30,16,24,27,18,17,17,15,26,29,46,17,19,9,9,9,9,12,15,15,15,15,30,14,14,15,15,21,23,15,15,24,15,13,14,10,9,9,9,14,14,30,14,13,14,13,14,14,14,14,14,14,16,15,14,14,12,9,9,12,13,14,14,15,15,10,11,12,12,13,14,15,14,13,21,30,44,30,15,9,9,9,14,14,30,14,10,15,14,14,14,14,14,14,15,14,45,41,45,45,43,17,9,7,7,16,15,15,12,14,17,21,17,29,27,29,30,32,30,28,32,28,28,35,14,7,8,15,16,14,14,15,40,45,50,45,51,60,47,45,30,23,15,15,15,15,12,7,6,14,9,13,14,45,40,30,30,43,45,36,36,41,40,33,30,32,15,15,9,7,6,9,8,15,20,27,33,35,36,30,30,30,30,29,27,30,30,30,27,16,12,8,5,5,7,8,14,20,28,18,22,30,30,30,30,30,19,16,16,15,15,15,11,11,7,5,6,12,15,14,14,30,14,26,19,20,18,18,12,10,8,14,15,12,8,8,7,5,6,30,30,24,22,30,13,14,28,36,42,38,11,10,8,14,14,12,8,7,7,5,7,30,30,24,22,30,13,15,28,37,41,37]))])])])
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
