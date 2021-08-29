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
      Transform(translation=(8617.917,0.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Harbor0-2.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=11,xSpacing=430.89584,zDimension=11,zSpacing=644.4167,height=[49,35,38,43,46,27,17,14,18,29,30,51,47,45,52,43,29,13,10,9,7,15,45,40,28,24,22,19,16,23,13,8,6,23,23,27,19,22,31,29,31,30,22,12,18,13,16,11,11,17,17,17,24,16,17,23,6,13,24,23,17,18,28,43,39,31,11,8,21,29,24,15,19,31,19,27,23,0,4,8,10,13,10,11,16,10,26,35,0,0,0,2,5,6,6,6,10,14,13,1,0,0,1,3,4,5,5,5,5,3,1,0,0,1,3,4,5,5,5,5,3]))])])])
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
