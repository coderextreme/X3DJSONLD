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
      Transform(translation=(189392.98,0.0,72149.71),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/5/PanamaCity2-7.jpg'],repeatS=False,repeatT=False)),
          geometry=ElevationGrid(xDimension=22,xSpacing=1288.3877,zDimension=22,zSpacing=1717.8502,height=[15,14,14,15,14,13,14,13,7,12,14,16,17,19,16,16,18,18,18,15,14,11,7,8,4,7,11,11,13,8,8,13,15,16,17,18,18,16,14,17,15,14,14,12,3,7,7,9,10,11,11,7,9,14,14,15,15,15,15,14,15,14,13,13,12,12,5,7,9,9,9,9,8,5,7,11,11,10,9,13,13,13,12,10,10,11,12,12,1,3,5,7,8,7,4,8,8,8,7,7,9,10,12,11,9,7,8,9,11,12,0,1,4,7,8,7,3,7,7,7,8,9,10,10,10,9,7,7,8,10,10,11,1,1,2,5,3,0,3,3,2,4,6,7,8,7,7,7,6,7,9,9,9,10,-2,1,2,3,1,-1,1,1,1,1,2,3,4,5,5,4,3,7,8,8,9,9,-2,1,1,1,-1,1,1,-1,0,1,2,3,3,4,3,3,4,7,7,8,8,8,1,0,-2,-3,-2,-1,1,1,1,1,1,3,3,3,3,3,3,6,6,7,7,7,3,3,1,3,4,4,3,1,1,1,1,2,1,3,3,3,4,4,5,5,6,6,3,4,3,5,4,3,2,2,2,2,2,2,3,3,3,3,3,4,4,5,5,5,0,0,3,4,4,4,3,4,4,4,3,3,3,3,3,3,3,3,4,4,4,5,-3,0,0,1,2,4,3,4,3,3,3,3,3,3,3,3,3,3,4,4,4,4,-6,-6,-5,-4,-7,-6,-6,0,3,3,3,5,5,4,4,3,3,3,3,4,4,4,-7,-6,-5,-5,-6,-7,-7,-6,-5,3,3,4,6,6,6,6,4,3,3,3,4,4,-8,-7,-6,-6,-7,-8,-8,-8,-7,-7,-1,5,4,4,6,6,6,5,3,3,3,3,-10,-8,-7,-6,-6,-9,-11,-11,-9,-9,-8,-6,6,4,4,5,5,5,3,3,3,3,-11,-9,-8,-7,-6,-5,-5,-8,-5,-4,-9,-8,-3,4,5,4,4,4,4,5,4,3,-12,-11,-9,-8,-7,-6,-6,-2,3,-9,-9,-8,-7,3,3,7,5,4,5,3,3,3,-13,-11,-10,-9,-7,-7,-9,3,0,-9,-10,-9,-8,-7,1,3,8,3,4,3,3,3,-13,-12,-10,-9,-8,-7,-9,3,0,-10,-10,-9,-8,-7,0,3,8,3,4,3,3,3]))])])])
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
