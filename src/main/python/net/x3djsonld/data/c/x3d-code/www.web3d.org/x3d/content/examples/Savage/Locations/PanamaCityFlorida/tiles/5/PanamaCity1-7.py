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
      Transform(translation=(189392.98,0.0,36074.855),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity1-7.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[30,45,51,54,57,52,48,47,45,46,48,60,63,54,49,45,45,45,48,51,53,56,44,45,58,56,51,51,52,52,49,45,44,44,46,47,56,58,53,45,38,45,45,45,43,44,45,44,51,45,45,45,46,48,47,46,44,37,45,45,51,59,50,45,42,30,37,32,31,44,45,47,45,39,37,44,45,45,45,45,45,33,34,45,47,50,48,45,35,32,30,30,30,44,41,40,30,33,33,38,44,44,46,46,45,28,32,39,45,46,31,33,30,23,31,36,40,33,32,30,32,37,42,44,43,44,44,37,30,28,30,37,37,32,32,30,22,29,32,36,30,30,32,37,40,40,39,40,40,39,38,31,28,30,28,30,30,24,15,25,28,29,31,30,30,31,33,35,33,30,35,33,32,32,35,29,22,28,25,21,13,23,26,25,21,27,28,27,28,29,30,28,30,29,29,28,29,29,17,21,20,13,21,23,23,16,22,22,24,24,24,25,24,23,25,25,25,25,27,27,7,15,15,12,15,15,15,19,23,24,24,24,24,24,23,22,22,22,22,22,25,25,15,14,16,15,14,16,21,23,23,24,24,24,24,24,23,23,22,15,22,22,23,23,15,21,22,22,15,15,19,22,22,23,23,24,24,24,23,23,23,22,17,15,22,22,22,22,22,23,22,22,22,22,22,23,23,24,24,24,24,24,24,23,23,22,22,15,15,18,19,21,22,23,23,23,23,23,23,24,24,24,24,24,24,23,23,22,22,21,13,14,14,16,15,18,19,21,22,23,23,23,23,23,23,23,23,23,22,22,22,20,11,14,14,16,17,17,19,21,22,22,22,22,22,22,22,22,22,22,22,22,21,19,15,15,15,15,18,20,20,20,19,20,20,21,21,20,20,21,20,21,20,20,19,19,18,18,18,19,18,19,18,18,18,15,18,20,20,20,20,19,18,19,18,18,18,18,16,18,18,18,17,18,18,17,14,14,16,17,19,18,18,19,18,17,17,17,15,15,15,14,14,15,14,13,15,13,7,11,14,15,17,19,16,16,18,18,18,15,14,12,15,14,14,15,14,13,14,13,7,12,14,16,17,19,16,16,18,18,18,15,14,11]))])])])
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
