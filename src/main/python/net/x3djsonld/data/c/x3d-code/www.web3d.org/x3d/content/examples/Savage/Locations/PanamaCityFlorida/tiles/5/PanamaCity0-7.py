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
      Transform(translation=(189392.98,0.0,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity0-7.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[29,29,32,33,36,37,41,42,38,38,43,44,53,44,42,30,51,46,40,34,30,30,33,32,38,39,36,38,41,42,42,37,39,44,45,45,45,52,56,60,59,59,45,45,42,45,43,41,38,42,42,42,38,37,38,40,40,30,45,40,49,53,52,49,44,45,50,51,48,44,41,42,41,38,37,37,35,45,40,30,45,44,42,45,53,53,53,52,60,70,52,44,45,42,37,37,37,38,35,44,43,31,30,34,44,44,36,45,42,39,58,58,50,45,45,45,42,38,43,40,33,44,42,37,38,30,38,31,30,35,36,38,49,50,48,48,44,42,46,48,39,39,30,42,41,38,37,35,30,30,30,29,26,23,55,44,66,71,45,38,44,42,33,38,22,22,27,28,37,37,30,26,22,21,16,15,54,38,55,66,45,38,32,31,45,60,22,39,44,40,38,36,27,31,29,30,20,20,30,36,45,40,40,38,42,60,67,59,52,60,76,65,53,40,28,37,39,41,38,41,34,42,38,53,57,45,56,60,86,61,49,45,70,87,76,40,37,30,76,41,52,77,37,45,38,48,84,91,84,82,91,91,90,62,60,91,79,33,67,40,35,63,91,79,72,83,45,84,92,76,75,76,91,91,77,91,91,76,91,68,91,74,54,72,91,73,97,64,83,82,78,77,94,76,78,75,76,76,76,68,78,76,76,62,44,51,47,79,75,76,80,76,76,76,70,75,61,75,91,77,72,60,63,55,75,45,55,38,31,32,78,77,56,47,60,55,67,60,45,49,47,45,68,74,64,60,72,45,47,45,30,29,70,60,67,44,45,48,68,68,60,73,72,68,68,65,46,45,45,30,30,30,30,23,45,48,47,30,55,61,61,68,71,76,67,68,60,60,60,60,54,43,37,42,38,38,30,30,46,46,59,59,55,45,45,51,57,68,60,60,60,60,57,45,45,35,30,45,45,46,49,53,58,57,60,60,57,60,60,51,57,48,60,60,60,60,67,68,60,68,30,45,51,54,57,52,49,48,46,47,49,60,62,53,48,45,45,46,49,52,54,56,30,45,51,54,57,52,48,47,45,46,48,60,63,54,49,45,45,45,48,51,53,56]))])])])
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
