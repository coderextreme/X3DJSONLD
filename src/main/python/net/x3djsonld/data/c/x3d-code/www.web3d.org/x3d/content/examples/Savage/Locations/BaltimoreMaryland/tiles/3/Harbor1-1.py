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
      Transform(translation=(4308.9585,0.0,6444.167),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Harbor1-1.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=11,xSpacing=430.89584,zDimension=11,zSpacing=644.4167,height=[1,6,8,9,5,3,4,5,4,4,1,0,0,5,1,0,0,0,0,0,0,0,9,2,0,0,0,0,0,0,0,0,0,11,5,2,0,0,0,0,1,0,0,0,10,11,0,3,1,3,3,3,3,3,3,15,3,4,12,21,21,10,11,8,6,6,10,23,21,32,27,25,23,23,11,6,1,21,30,34,32,26,35,41,43,18,8,2,26,47,41,40,46,45,40,16,12,10,4,51,47,47,36,28,24,14,12,4,0,0,50,48,46,33,32,23,12,10,2,0,1]))])])])
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
