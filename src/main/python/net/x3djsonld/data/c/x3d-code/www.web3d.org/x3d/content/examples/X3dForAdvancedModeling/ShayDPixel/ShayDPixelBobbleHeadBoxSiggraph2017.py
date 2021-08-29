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
    unit(category='length',conversionFactor=0.0254,name='InchesToMeters'),
    meta(content='ShayDPixelBobbleHeadBoxSiggraph2017.x3d',name='title'),
    meta(content='Some X3D players may still have difficulty with the unit element and need to be upgraded.',name='warning'),
    meta(content='BobbleHead Box for Shay D Pixel from SIGGRAPH 2017. Box measures 3.75 x 3.75 x 6.5 cubic inches overall. Thanks Mario for signature!',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='Mario Nagamura',name='artist'),
    meta(content='11 October 2017',name='created'),
    meta(content='22 March 2020',name='modified'),
    meta(content='images/BobbleHeadAtopBox.jpg',name='Image'),
    meta(content='images/BobbleHeadOblique.jpg',name='Image'),
    meta(content='images/Siggraph2017GoldenTicketInHand.jpg',name='Image'),
    meta(content='https://www.youtube.com/embed/vzkaKhrQk60',name='Video'),
    meta(content='http://blog.siggraph.org/2017/07/3-siggraph-2017-mug-hacks.html',name='reference'),
    meta(content='../GeometricShapes/CubeWithLabeledSides.x3d',name='reference'),
    meta(content='X3DOM Player Issue, Viewpoint PgDn/PgUp/Home/End https://github.com/x3dom/x3dom/issues/777',name='TODO'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/ShayDPixel/ShayDPixelBobbleHeadBoxSiggraph2017.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0) https://creativecommons.org/licenses/by-nc-sa/4.0',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ShayDPixelBobbleHeadBoxSiggraph2017.x3d'),
    Background(skyColor=[(0.1,0.1,0.1)]),
    Group(DEF='Front',
      children=[
      Viewpoint(DEF='FrontView',description='Front view',orientation=(0,1,0,1.57),position=(12,0,0)),
      Shape(
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3],texCoordIndex=[0,1,2,3],
          #  dimensions 3.75" x 3.75" x 6.5" 
          coord=Coordinate(DEF='Points',point=[(1.875,3.25,1.875),(1.875,-3.25,1.875),(1.875,-3.25,-1.875),(1.875,3.25,-1.875),(-1.875,3.25,1.875),(-1.875,-3.25,1.875),(-1.875,-3.25,-1.875),(-1.875,3.25,-1.875)]),
          texCoord=TextureCoordinate(DEF='DefaultTextureCoordinate',point=[(0,0),(1,0),(1,1),(0,1)])),
        appearance=Appearance(
          texture=ImageTexture(url=["images/BoxFrontSigned.jpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/ShayDPixel/images/BoxFrontSigned.jpg"]),
          #  Possible variation: experiment with indices to as alternative to TextureTransform rotations 
          textureTransform=TextureTransform(DEF='RotateRight90',rotation=-1.57)))]),
    Group(DEF='LeftSide',
      children=[
      Viewpoint(DEF='LeftSideView',description='Left side view',orientation=(0,1,0,3.1416),position=(0,0,-12)),
      Shape(
        geometry=IndexedFaceSet(coordIndex=[3,2,6,7],texCoordIndex=[0,1,2,3],
          coord=Coordinate(USE='Points'),
          texCoord=TextureCoordinate(USE='DefaultTextureCoordinate')),
        appearance=Appearance(
          texture=ImageTexture(url=["images/BoxLeftSide.jpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/ShayDPixel/images/BoxLeftSide.jpg"]),
          textureTransform=TextureTransform(USE='RotateRight90')))]),
    Group(DEF='Back',
      children=[
      Viewpoint(DEF='BackView',description='Back view',orientation=(0,1,0,-1.57),position=(-12,0,0)),
      Shape(
        geometry=IndexedFaceSet(coordIndex=[7,6,5,4],texCoordIndex=[0,1,2,3],
          coord=Coordinate(USE='Points'),
          texCoord=TextureCoordinate(USE='DefaultTextureCoordinate')),
        appearance=Appearance(
          texture=ImageTexture(url=["images/BoxBack.jpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/ShayDPixel/images/BoxBack.jpg"]),
          textureTransform=TextureTransform(USE='RotateRight90')))]),
    Group(DEF='RightSide',
      children=[
      Viewpoint(DEF='RightSideView',description='Right Side view',position=(0,0,12)),
      Shape(
        geometry=IndexedFaceSet(coordIndex=[0,4,5,1],texCoordIndex=[0,1,2,3],
          coord=Coordinate(USE='Points'),
          texCoord=TextureCoordinate(USE='DefaultTextureCoordinate')),
        appearance=Appearance(
          texture=ImageTexture(url=["images/BoxRightSide.jpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/ShayDPixel/images/BoxRightSide.jpg"]),
          textureTransform=TextureTransform(DEF='Rotate180',rotation=3.14159)))]),
    Group(DEF='Bottom',
      children=[
      Viewpoint(DEF='BottomView',description='Bottom view',orientation=(1,0,0,1.57),position=(0,-12,0)),
      Shape(
        geometry=IndexedFaceSet(coordIndex=[1,5,6,2],texCoordIndex=[0,1,2,3],
          coord=Coordinate(USE='Points'),
          texCoord=TextureCoordinate(USE='DefaultTextureCoordinate')),
        appearance=Appearance(
          texture=ImageTexture(url=["images/BoxBottom.jpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/ShayDPixel/images/BoxBottom.jpg"]),
          textureTransform=TextureTransform(USE='Rotate180')))]),
    Group(DEF='Top',
      children=[
      Viewpoint(DEF='TopView',description='Top view',orientation=(-0.5772,0.5772,0.57766,2.09394),position=(0,12,0),
        #  RotationCalculator composed orientation: 1.0 0.0 0.0 -1.57, 0.0 0.0 1.0 1.570796 
        ),
      Shape(
        geometry=IndexedFaceSet(coordIndex=[0,3,7,4],texCoordIndex=[0,1,2,3],
          coord=Coordinate(USE='Points'),
          texCoord=TextureCoordinate(USE='DefaultTextureCoordinate')),
        appearance=Appearance(
          texture=ImageTexture(url=["images/BoxTop.jpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/ShayDPixel/images/BoxTop.jpg"]),
          #  no TextureTransform rotation 
          ))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ShayDPixelBobbleHeadBoxSiggraph2017.py")
