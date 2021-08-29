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
      Transform(translation=(12926.875,0.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Harbor0-3.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=11,xSpacing=430.89584,zDimension=11,zSpacing=644.4167,height=[30,21,9,31,32,18,23,5,15,26,17,15,23,9,19,31,25,15,8,12,24,23,6,9,10,4,5,2,4,3,4,9,12,12,5,4,6,5,7,10,12,12,11,5,17,22,11,19,21,21,37,24,19,13,10,31,34,23,29,47,37,38,35,31,18,13,23,19,15,19,26,48,40,20,11,13,12,35,20,10,12,14,19,29,42,24,19,15,13,12,11,5,12,16,18,21,21,23,10,3,3,5,5,6,11,21,26,25,12,6,3,2,5,5,5,11,20,26,24,11,6]))])])])
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
