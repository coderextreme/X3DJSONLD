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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='GeometryPrimitiveNodesWhiteBackground.x3d',name='title'),
    meta(content='Geometry Primitive Nodes: Shape, Box, Cone, Cylinder, Sphere, Text, FontStyle',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='25 March 2005',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='GeometryPrimitiveNodesWhiteBackground.png',name='Image'),
    meta(content='GeometryPrimitiveNodesWhiteBackgroundReducedQuality.png',name='Image'),
    meta(content='Default values have been added to geometry nodes for clarity, ordinarily default values are omitted.',name='hint'),
    meta(content='Copyright (c) Don Brutzman and Leonard Daly, 2005',name='rights'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/GeometryPrimitiveNodesWhiteBackground.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='GeometryPrimitiveNodesWhiteBackground.x3d'),
    Background(skyColor=[(1,1,1)]),
    Transform(translation=(-5,0,0),
      children=[
      Shape(DEF='DefaultShape',
        geometry=Box(DEF='DefaultBox'),
        appearance=Appearance(DEF='DefaultAppearance',
          material=Material(diffuseColor=(1,0.2,0.2))))]),
    Transform(translation=(-2.5,0,0),
      children=[
      Shape(
        geometry=Cone(DEF='DefaultCone'),
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,1,0.2))))]),
    Transform(
      children=[
      Shape(
        geometry=Cylinder(DEF='DefaultCylinder'),
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.2,1))))]),
    Transform(translation=(2.5,0,0),
      children=[
      Shape(
        geometry=Sphere(DEF='DefaultSphere'),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))]),
    Transform(translation=(4,0,0),
      children=[
      Shape(
        geometry=Text(DEF='DefaultText',string=["hello","X3D!"],
          fontStyle=FontStyle(DEF='DefaultFontStyle')),
        appearance=Appearance(
          material=Material(DEF='DefaultMaterial',diffuseColor=(.2,.2,.2))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GeometryPrimitiveNodesWhiteBackground.py")
