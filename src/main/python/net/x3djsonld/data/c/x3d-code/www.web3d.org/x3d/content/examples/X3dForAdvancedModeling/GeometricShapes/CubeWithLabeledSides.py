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
    meta(content='CubeWithLabeledSides.x3d',name='title'),
    meta(content='Cube-shaped test model with faces on each side individually labeled.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='1 November 2008',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='images/CubeSideImages.vsd',name='drawing'),
    meta(content='../Animation/CubeWithLabeledSidesViewpointSequencer.x3d',name='reference'),
    meta(content='../Animation/CubeWithLabeledSidesViewpointSequencer.png',name='Image'),
    meta(content='../Animation/CubeWithLabeledSidesViewpointSequencer.vsd',name='drawing'),
    meta(content='../Visualization/BackgroundCube.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/TestCube.x3d',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/CubeWithLabeledSides.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CubeWithLabeledSides.x3d'),
    Background(skyColor=[(0.1,0.1,0.1)]),
    Group(
      children=[
      Viewpoint(DEF='FrontView',description='Front view',orientation=(0,1,0,1.57),position=(8,0,0)),
      Shape(DEF='Front',
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3],texCoordIndex=[0,1,2,3],
          coord=Coordinate(DEF='Points',point=[(1,1,1),(1,-1,1),(1,-1,-1),(1,1,-1),(-1,1,1),(-1,-1,1),(-1,-1,-1),(-1,1,-1)]),
          texCoord=TextureCoordinate(DEF='DefaultTextureCoordinate',point=[(0,0),(1,0),(1,1),(0,1)])),
        appearance=Appearance(
          texture=ImageTexture(url=["images/front.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/front.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/front.png"]),
          #  Possible variation: experiment with indices to as alternative to TextureTransform rotations 
          textureTransform=TextureTransform(DEF='RotateRight',rotation=-1.57))),
      Viewpoint(DEF='LeftView',description='Left view',orientation=(0,1,0,3.1416),position=(0,0,-8)),
      Shape(DEF='Left',
        geometry=IndexedFaceSet(coordIndex=[3,2,6,7],texCoordIndex=[0,1,2,3],
          coord=Coordinate(USE='Points'),
          texCoord=TextureCoordinate(USE='DefaultTextureCoordinate')),
        appearance=Appearance(
          texture=ImageTexture(url=["images/left.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/left.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/left.png"]),
          textureTransform=TextureTransform(USE='RotateRight'))),
      Viewpoint(DEF='TopView',description='Top view',orientation=(1,0,0,-1.57),position=(0,8,0)),
      Shape(DEF='Top',
        geometry=IndexedFaceSet(coordIndex=[0,3,7,4],texCoordIndex=[0,1,2,3],
          coord=Coordinate(USE='Points'),
          texCoord=TextureCoordinate(USE='DefaultTextureCoordinate')),
        appearance=Appearance(
          texture=ImageTexture(url=["images/top.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/top.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/top.png"]),
          textureTransform=TextureTransform(DEF='RotateLeft',rotation=1.57,scale=(0.9,0.9)))),
      Viewpoint(DEF='BackView',description='Back view',orientation=(0,1,0,-1.57),position=(-8,0,0)),
      Shape(DEF='Back',
        geometry=IndexedFaceSet(coordIndex=[7,6,5,4],texCoordIndex=[0,1,2,3],
          coord=Coordinate(USE='Points'),
          texCoord=TextureCoordinate(USE='DefaultTextureCoordinate')),
        appearance=Appearance(
          texture=ImageTexture(url=["images/back.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/back.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/back.png"]),
          textureTransform=TextureTransform(USE='RotateRight'))),
      Viewpoint(DEF='RightView',description='Right view',position=(0,0,8)),
      Shape(DEF='Right',
        geometry=IndexedFaceSet(coordIndex=[0,4,5,1],texCoordIndex=[0,1,2,3],
          coord=Coordinate(USE='Points'),
          texCoord=TextureCoordinate(USE='DefaultTextureCoordinate')),
        appearance=Appearance(
          texture=ImageTexture(url=["images/right.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/right.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/right.png"]),
          textureTransform=TextureTransform(DEF='Rotate180',rotation=3.14159))),
      Viewpoint(DEF='BottomView',description='Bottom view',orientation=(1,0,0,1.57),position=(0,-8,0)),
      Shape(DEF='Bottom',
        geometry=IndexedFaceSet(coordIndex=[1,5,6,2],texCoordIndex=[0,1,2,3],
          coord=Coordinate(USE='Points'),
          texCoord=TextureCoordinate(USE='DefaultTextureCoordinate')),
        appearance=Appearance(
          texture=ImageTexture(url=["images/bottom.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/bottom.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/bottom.png"]),
          textureTransform=TextureTransform(USE='Rotate180')))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CubeWithLabeledSides.py")
