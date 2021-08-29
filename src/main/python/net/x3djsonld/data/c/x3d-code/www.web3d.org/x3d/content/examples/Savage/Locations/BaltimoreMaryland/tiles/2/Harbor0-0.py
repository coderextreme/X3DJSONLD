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
      LOD(center=(4308.9585,0.0,3222.0835),range=[9037.25],
        children=[
        Group(
          children=[
          Inline(url=['../../tiles/3/Harbor0-0.x3d']),
          Inline(url=['../../tiles/3/Harbor0-1.x3d'])]),
        Group(
          children=[
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
                texture=ImageTexture(url=['../../images/2/Harbor0-0.jpg'],repeatS=False,repeatT=False)),
              geometry=ElevationGrid(xDimension=11,xSpacing=861.7917,zDimension=11,zSpacing=644.4167,height=[78,98,75,69,33,49,48,44,41,46,49,80,72,73,69,48,35,42,35,53,28,51,63,61,63,49,40,28,30,36,33,32,45,57,56,56,53,45,34,19,26,19,21,23,44,42,49,44,30,29,6,10,17,35,18,41,43,43,26,23,20,10,5,9,30,23,44,30,29,22,13,10,0,1,3,4,11,26,18,21,8,7,6,9,0,0,0,0,23,10,11,6,4,4,12,12,5,2,0,30,35,6,5,4,1,8,5,4,4,1,28,37,7,4,4,1,8,5,4,4,1]))])])])])])
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
