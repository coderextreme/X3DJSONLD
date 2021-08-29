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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='RoundedRectanglePrimitives.x3d',name='title'),
    meta(content='Illustrates how to build rounded rectangle using only primitive nodes.',name='description'),
    meta(content='Marlon Heron and Don Brutzman',name='creator'),
    meta(content='23 October 2014',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='X3D for Web Authors, homework for chapters 2 and 3.',name='reference'),
    meta(content='https://x3dgraphics.com/slidesets/X3dForWebAuthors/Chapter02-GeometryPrimitives.pdf',name='reference'),
    meta(content='https://x3dgraphics.com/slidesets/X3dForWebAuthors/Chapter03Grouping.pdf',name='reference'),
    meta(content='add drawing of scene graph structure',name='TODO'),
    meta(content='fix Xj3D aliasing bug',name='TODO'),
    meta(content='Xj3dAliasingProblemRoundedRectanglePrimitives.png',name='Image'),
    meta(content='Rounded Rectangle Primitive Geometry',name='subject'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/RoundedRectanglePrimitives.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='RoundedRectanglePrimitives.x3d'),
    Viewpoint(description='Top Down View',orientation=(1,0,0,-1.570796),position=(0,20,0)),
    Background(skyColor=[(0.941176,1,0.988235)]),
    Transform(
      children=[
      Shape(DEF='DefaultShape',
        geometry=Box(size=(8,2.01,10)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,0.2,0.2))))]),
    Transform(
      children=[
      Shape(
        geometry=Box(size=(10,2.02,8)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,.5,0))))]),
    Transform(translation=(4,0,4),
      children=[
      Shape(
        geometry=Cylinder(DEF='DefaultCylinder'),
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.2,1))))]),
    Transform(translation=(4,0,-4),
      children=[
      Shape(
        geometry=Cylinder(USE='DefaultCylinder'),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))]),
    Transform(translation=(-4,0,4),
      children=[
      Shape(
        geometry=Cylinder(USE='DefaultCylinder'),
        appearance=Appearance(
          material=Material(diffuseColor=(.5,1,0.2))))]),
    Transform(translation=(-4,0,-4),
      children=[
      Shape(
        geometry=Cylinder(USE='DefaultCylinder'),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RoundedRectanglePrimitives.py")
