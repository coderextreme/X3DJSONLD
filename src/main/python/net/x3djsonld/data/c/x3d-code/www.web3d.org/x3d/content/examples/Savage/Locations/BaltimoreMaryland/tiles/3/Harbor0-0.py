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
            texture=ImageTexture(url=['../../images/3/Harbor0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=11,xSpacing=430.89584,zDimension=11,zSpacing=644.4167,height=[78,94,98,85,75,73,69,68,33,48,49,80,86,72,69,73,70,69,59,48,20,35,63,69,61,59,63,56,49,47,40,39,28,57,63,56,56,56,51,53,47,45,41,34,44,55,42,55,49,37,44,35,30,30,29,41,34,43,56,43,33,26,27,23,22,20,44,24,30,34,29,23,22,17,13,11,10,26,22,18,22,21,9,8,7,7,6,6,23,17,10,12,11,7,6,5,4,0,4,30,23,35,12,6,5,5,4,4,0,1,28,24,37,13,7,5,4,4,4,0,1]))])])])
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
