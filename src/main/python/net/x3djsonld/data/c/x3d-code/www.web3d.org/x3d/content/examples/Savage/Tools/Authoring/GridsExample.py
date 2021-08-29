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
  head=head(
    children=[
    meta(content='GridsExample.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='11 October 2001',name='created'),
    meta(content='13 October 2013',name='modified'),
    meta(content='Example showing all three line grid authoring tools to enable precise measurement of objects in 3D space. Select axis labels to drag any plane and move along axis, click numbers to hide individual grids.',name='description'),
    meta(content='GridsExample.png',name='Image'),
    meta(content='GridsExampleMeasurement.png',name='Image'),
    meta(content='GridsExampleWithGridsMoved.png',name='Image'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/GridsExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Entry viewpoints 
    children=[
    Transform(rotation=(0,1,0,0.78),translation=(15,12,15),
      children=[
      Viewpoint(centerOfRotation=(-15,-12,-15),description='Drag grids along center axes to measure shapes',orientation=(1,0,0,-0.4))]),
    Transform(rotation=(0,1,0,-0.78),translation=(-15,12,15),
      children=[
      Viewpoint(centerOfRotation=(15,-12,-15),description='Click numbers to hide a grid',orientation=(1,0,0,-0.4))]),
    #  Inline movable grid examples to use them in any scene 
    Inline(url=["GridXY_20x20Movable.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Movable.x3d","GridXY_20x20Movable.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Movable.wrl"]),
    Inline(url=["GridXZ_20x20Movable.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Movable.x3d","GridXZ_20x20Movable.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Movable.wrl"]),
    Inline(url=["GridYZ_20x20Movable.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridYZ_20x20Movable.x3d","GridYZ_20x20Movable.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridYZ_20x20Movable.wrl"]),
    #  Simple example scene 
    Transform(translation=(0,-4,0),
      children=[
      Shape(
        geometry=Box(size=(4,12,8)),
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,0.5))))]),
    Transform(translation=(0,6,0),
      children=[
      Shape(
        geometry=Sphere(radius=3),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.5,1))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GridsExample.py")
