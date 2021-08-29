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
    meta(content='TextureMapComparisonsRectangle.x3d',name='title'),
    meta(content='Compare ImageTexture mapping for a variety of geometry nodes. This is an excellent test scene for different X3D browsers.',name='description'),
    meta(content='Sungmin Kwon and Don Brutzman',name='creator'),
    meta(content='15 December 2017',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='TextureMapTesting.pdf',name='reference'),
    meta(content='TextureMapComparisonsRectangleX_ITE.png',name='Image'),
    meta(content='TextureMapComparisonsRectangleX3DOM.png',name='Image'),
    meta(content='TextureMapComparisonsRectangleBSContact.png',name='Image'),
    meta(content='TextureMapComparisonsRectangleFreeWrl.png',name='Image'),
    meta(content='TextureMapComparisonsRectangleH3DViewer.png',name='Image'),
    meta(content='TextureMapComparisonsRectangleInstantReality.png',name='Image'),
    meta(content='TextureMapComparisonsRectangleXj3D.png',name='Image'),
    meta(content='TextureMapComparisonsCylinder.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#Images',name='reference'),
    meta(content='X3D Abstract Specification, 18.2.3 Texture coordinates',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/texturing.html#Texturecoordinates',name='specificationUrl'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Images/ImageTexture.gif',name='Image'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/TextureMapping/TextureMapComparisonsRectangle.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TextureMapComparisonsRectangle.x3d'),
    Viewpoint(DEF='DefaultPosition',description='Texture map examples overview',position=(0,0,16)),
    #  == === ==== 1st row 
    Transform(translation=(-0.5,1,0),
      #  IFS : Indexed Face Set 
      children=[
      Transform(translation=(-9.6,0,0),
        children=[
        Shape(
          appearance=Appearance(DEF='TextureAppearance',
            texture=ImageTexture(DEF='SpecificationTexture',url=["ImageTextureSpecificationSquare.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/TextureMapping/ImageTextureSpecificationSquare.png"])),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
            coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
      #  ITS, TS : Triangle Set 
      Transform(translation=(-8.4,0,0),
        children=[
        Shape(
          appearance=Appearance(USE='TextureAppearance'),
          geometry=IndexedTriangleSet(ccw=True,colorPerVertex=True,index=[0,1,2,0,2,3],normalPerVertex=True,solid=True,
            coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
      Transform(translation=(-7.2,0,0),
        children=[
        Shape(
          appearance=Appearance(USE='TextureAppearance'),
          geometry=TriangleSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,
            coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0),(-0.5,0.5,0)])))]),
      #  ITSS, TSS : Triangle Strip Set 
      Transform(translation=(-6.0,0,0),
        children=[
        Shape(
          appearance=Appearance(USE='TextureAppearance'),
          geometry=IndexedTriangleStripSet(ccw=True,colorPerVertex=True,index=[0,1,2,3,0,-1],normalPerVertex=True,solid=True,
            coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
      Transform(translation=(-4.8,0,0),
        children=[
        Shape(
          appearance=Appearance(USE='TextureAppearance'),
          geometry=TriangleStripSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,stripCount=[5],
            coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0),(-0.5,0.5,0)])))]),
      #  ITFS, TFS : Triangle Fan Set 
      Transform(translation=(-3.6,0,0),
        children=[
        Shape(
          appearance=Appearance(USE='TextureAppearance'),
          geometry=IndexedTriangleFanSet(ccw=True,colorPerVertex=True,index=[0,1,2,3,-1],normalPerVertex=True,solid=True,
            coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
      Transform(translation=(-2.4,0,0),
        children=[
        Shape(
          appearance=Appearance(USE='TextureAppearance'),
          geometry=TriangleFanSet(ccw=True,colorPerVertex=True,fanCount=[4],normalPerVertex=True,solid=True,
            coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
      #  Box 
      Transform(translation=(-1.2,0,-0.5),
        children=[
        Shape(
          appearance=Appearance(USE='TextureAppearance'),
          geometry=Box(size=(1,1,1)))]),
      #  IQS, QS : Quad Set <Transform translation='0 0 0'> <Shape> <Appearance USE='TextureAppearance'/> <IndexedQuadSet index='0 1 2 3'> <Coordinate point='-0.5 0.5 0 -0.5 -0.5 0 0.5 -0.5 0 0.5 0.5 0'/> </IndexedQuadSet> </Shape> </Transform> <Transform translation='1.2 0 0'> <Shape> <Appearance USE='TextureAppearance'/> <QuadSet> <Coordinate point='-0.5 0.5 0 -0.5 -0.5 0 0.5 -0.5 0 0.5 0.5 0'/> </QuadSet> </Shape> </Transform> 
      #  R2D : Rectangle2D 
      Transform(translation=(2.4,0,0),
        children=[
        Shape(
          appearance=Appearance(DEF='TextureAppearance_2D',
            texture=ImageTexture(USE='SpecificationTexture')),
          geometry=Rectangle2D(size=(1.0,1.0)))]),
      #  TS2D : TriangleSet2D 
      Transform(translation=(3.6,0,0),
        children=[
        Shape(
          appearance=Appearance(USE='TextureAppearance_2D'),
          geometry=TriangleSet2D(vertices=[(-0.5,0.5),(-0.5,-0.5),(0.5,-0.5),(0.5,-0.5),(0.5,0.5),(-0.5,0.5)]))]),
      #  EG : ElevationGrid 
      Transform(translation=(4.8,0,0),
        children=[
        Transform(rotation=(1,0,0,-1.5708),translation=(-0.5,-0.5,0.2),
          children=[
          Shape(
            appearance=Appearance(USE='TextureAppearance_2D'),
            geometry=ElevationGrid(height=[0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2],solid=False,xDimension=6,xSpacing=0.2,zDimension=6,zSpacing=0.2))])]),
      #  == === ==== 2nd row 
      Transform(translation=(0,-1.2,0),
        #  IFS : Indexed Face Set 
        children=[
        Transform(translation=(-9.6,0,0),
          children=[
          Shape(
            appearance=Appearance(DEF='TextureRotate',
              texture=ImageTexture(USE='SpecificationTexture'),
              textureTransform=TextureTransform(DEF='TexTransRotation',rotation=0.8)),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        #  ITS, TS : Triangle Set 
        Transform(translation=(-8.4,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureRotate'),
            geometry=IndexedTriangleSet(ccw=True,colorPerVertex=True,index=[0,1,2,0,2,3],normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        Transform(translation=(-7.2,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureRotate'),
            geometry=TriangleSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0),(-0.5,0.5,0)])))]),
        #  ITSS, TSS : Triangle Strip Set 
        Transform(translation=(-6.0,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureRotate'),
            geometry=IndexedTriangleStripSet(ccw=True,colorPerVertex=True,index=[0,1,2,3,0,-1],normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        Transform(translation=(-4.8,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureRotate'),
            geometry=TriangleStripSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,stripCount=[5],
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0),(-0.5,0.5,0)])))]),
        #  ITFS, TFS : Triangle Fan Set 
        Transform(translation=(-3.6,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureRotate'),
            geometry=IndexedTriangleFanSet(ccw=True,colorPerVertex=True,index=[0,1,2,3,-1],normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        Transform(translation=(-2.4,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureRotate'),
            geometry=TriangleFanSet(ccw=True,colorPerVertex=True,fanCount=[4],normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        #  Box 
        Transform(translation=(-1.2,0,-0.5),
          children=[
          Shape(
            appearance=Appearance(USE='TextureRotate'),
            geometry=Box(size=(1,1,1)))]),
        #  IQS, QS : Quad Set 
        Transform(
          #  <Shape> <Appearance USE='TextureRotate'/> <IndexedQuadSet index='0 1 2 3'> <Coordinate point='-0.5 0.5 0 -0.5 -0.5 0 0.5 -0.5 0 0.5 0.5 0'/> </IndexedQuadSet> </Shape> 
          ),
        Transform(translation=(1.2,0,0),
          #  <Shape> <Appearance USE='TextureRotate'/> <QuadSet> <Coordinate point='-0.5 0.5 0 -0.5 -0.5 0 0.5 -0.5 0 0.5 0.5 0'/> </QuadSet> </Shape> 
          ),
        #  R2D : Rectangle2D 
        Transform(translation=(2.4,0,0),
          children=[
          Shape(
            appearance=Appearance(DEF='TextureRotate_2D',
              texture=ImageTexture(USE='SpecificationTexture'),
              textureTransform=TextureTransform(USE='TexTransRotation')),
            geometry=Rectangle2D(size=(1,1),solid=True))]),
        #  TS2D : TriangleSet2D 
        Transform(translation=(3.6,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureRotate_2D'),
            geometry=TriangleSet2D(vertices=[(-0.5,0.5),(-0.5,-0.5),(0.5,-0.5),(0.5,-0.5),(0.5,0.5),(-0.5,0.5)]))]),
        #  EG : ElevationGrid 
        Transform(translation=(4.8,0,0),
          children=[
          Transform(rotation=(1,0,0,-1.5708),translation=(-0.5,-0.5,0.2),
            children=[
            Shape(
              appearance=Appearance(USE='TextureRotate_2D'),
              geometry=ElevationGrid(height=[0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2],solid=False,xDimension=6,xSpacing=0.2,zDimension=6,zSpacing=0.2))])])]),
      #  == === ==== 3rd row 
      Transform(translation=(0,-2.4,0),
        #  IFS : Indexed Face Set 
        children=[
        Transform(translation=(-9.6,0,0),
          children=[
          Shape(
            appearance=Appearance(DEF='TextureTrans',
              texture=ImageTexture(USE='SpecificationTexture'),
              textureTransform=TextureTransform(DEF='TexTransTranslation',rotation=0.8,translation=(0.2,-0.5))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        #  ITS, TS : Triangle Set 
        Transform(translation=(-8.4,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureTrans'),
            geometry=IndexedTriangleSet(ccw=True,colorPerVertex=True,index=[0,1,2,0,2,3],normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        Transform(translation=(-7.2,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureTrans'),
            geometry=TriangleSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0),(-0.5,0.5,0)])))]),
        #  ITSS, TSS : Triangle Strip Set 
        Transform(translation=(-6.0,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureTrans'),
            geometry=IndexedTriangleStripSet(ccw=True,colorPerVertex=True,index=[0,1,2,3,0,-1],normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        Transform(translation=(-4.8,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureTrans'),
            geometry=TriangleStripSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,stripCount=[5],
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0),(-0.5,0.5,0)])))]),
        #  ITFS, TFS : Triangle Fan Set 
        Transform(translation=(-3.6,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureTrans'),
            geometry=IndexedTriangleFanSet(ccw=True,colorPerVertex=True,index=[0,1,2,3,-1],normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        Transform(translation=(-2.4,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureTrans'),
            geometry=TriangleFanSet(ccw=True,colorPerVertex=True,fanCount=[4],normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        #  Box 
        Transform(translation=(-1.2,0,-0.5),
          children=[
          Shape(
            appearance=Appearance(USE='TextureTrans'),
            geometry=Box(size=(1,1,1)))]),
        #  IQS, QS : Quad Set 
        Transform(
          #  <Shape> <Appearance USE='TextureTrans'/> <IndexedQuadSet index='0 1 2 3'> <Coordinate point='-0.5 0.5 0 -0.5 -0.5 0 0.5 -0.5 0 0.5 0.5 0'/> </IndexedQuadSet> </Shape> 
          ),
        Transform(translation=(1.2,0,0),
          #  <Shape> <Appearance USE='TextureTrans'/> <QuadSet> <Coordinate point='-0.5 0.5 0 -0.5 -0.5 0 0.5 -0.5 0 0.5 0.5 0'/> </QuadSet> </Shape> 
          ),
        #  R2D : Rectangle2D 
        Transform(translation=(2.4,0,0),
          children=[
          Shape(
            appearance=Appearance(DEF='TextureTrans_2D',
              texture=ImageTexture(USE='SpecificationTexture'),
              textureTransform=TextureTransform(USE='TexTransTranslation')),
            geometry=Rectangle2D(size=(1.0,1.0)))]),
        #  TS2D : TriangleSet2D 
        Transform(translation=(3.6,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureTrans_2D'),
            geometry=TriangleSet2D(vertices=[(-0.5,0.5),(-0.5,-0.5),(0.5,-0.5),(0.5,-0.5),(0.5,0.5),(-0.5,0.5)]))]),
        #  EG : ElevationGrid 
        Transform(translation=(4.8,0,0),
          children=[
          Transform(rotation=(1,0,0,-1.5708),translation=(-0.5,-0.5,0.2),
            children=[
            Shape(
              appearance=Appearance(USE='TextureTrans_2D'),
              geometry=ElevationGrid(height=[0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2],solid=False,xDimension=6,xSpacing=0.2,zDimension=6,zSpacing=0.2))])])]),
      #  == === ==== 4th row 
      Transform(translation=(0,-3.6,0),
        #  IFS : Indexed Face Set 
        children=[
        Transform(translation=(-9.6,0,0),
          children=[
          Shape(
            appearance=Appearance(DEF='TextureScale',
              texture=ImageTexture(USE='SpecificationTexture'),
              textureTransform=TextureTransform(DEF='TexTransScale',rotation=0.8,scale=(2,2),translation=(0.2,-0.5))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        #  ITS, TS : Triangle Set 
        Transform(translation=(-8.4,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureScale'),
            geometry=IndexedTriangleSet(ccw=True,colorPerVertex=True,index=[0,1,2,0,2,3],normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        Transform(translation=(-7.2,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureScale'),
            geometry=TriangleSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0),(-0.5,0.5,0)])))]),
        #  ITSS, TSS : Triangle Strip Set 
        Transform(translation=(-6.0,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureScale'),
            geometry=IndexedTriangleStripSet(ccw=True,colorPerVertex=True,index=[0,1,2,3,0,-1],normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        Transform(translation=(-4.8,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureScale'),
            geometry=TriangleStripSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,stripCount=[5],
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0),(-0.5,0.5,0)])))]),
        #  ITFS, TFS : Triangle Fan Set 
        Transform(translation=(-3.6,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureScale'),
            geometry=IndexedTriangleFanSet(ccw=True,colorPerVertex=True,index=[0,1,2,3,-1],normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        Transform(translation=(-2.4,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureScale'),
            geometry=TriangleFanSet(ccw=True,colorPerVertex=True,fanCount=[4],normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        #  Box 
        Transform(translation=(-1.2,0,-0.5),
          children=[
          Shape(
            appearance=Appearance(USE='TextureScale'),
            geometry=Box(size=(1,1,1)))]),
        #  IQS, QS : Quad Set 
        Transform(
          #  <Shape> <Appearance USE='TextureScale'/> <IndexedQuadSet index='0 1 2 3'> <Coordinate point='-0.5 0.5 0 -0.5 -0.5 0 0.5 -0.5 0 0.5 0.5 0'/> </IndexedQuadSet> </Shape> 
          ),
        Transform(translation=(1.2,0,0),
          #  <Shape> <Appearance USE='TextureScale'/> <QuadSet> <Coordinate point='-0.5 0.5 0 -0.5 -0.5 0 0.5 -0.5 0 0.5 0.5 0'/> </QuadSet> </Shape> 
          ),
        #  R2D : Rectangle2D 
        Transform(translation=(2.4,0,0),
          children=[
          Shape(
            appearance=Appearance(DEF='TextureScale_2D',
              texture=ImageTexture(USE='SpecificationTexture'),
              textureTransform=TextureTransform(USE='TexTransScale')),
            geometry=Rectangle2D(size=(1.0,1.0)))]),
        #  TS2D : TriangleSet2D 
        Transform(translation=(3.6,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='TextureScale_2D'),
            geometry=TriangleSet2D(vertices=[(-0.5,0.5),(-0.5,-0.5),(0.5,-0.5),(0.5,-0.5),(0.5,0.5),(-0.5,0.5)]))]),
        #  EG : ElevationGrid 
        Transform(translation=(4.8,0,0),
          children=[
          Transform(rotation=(1,0,0,-1.5708),translation=(-0.5,-0.5,0.2),
            children=[
            Shape(
              appearance=Appearance(USE='TextureScale_2D'),
              geometry=ElevationGrid(height=[0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2],solid=False,xDimension=6,xSpacing=0.2,zDimension=6,zSpacing=0.2))])])]),
      #  == === ==== 5th row 
      Transform(translation=(0,-4.8,0),
        #  IFS : Indexed Face Set 
        children=[
        Transform(translation=(-9.6,0,0),
          children=[
          Shape(
            appearance=Appearance(DEF='AppearanceNoTexture',
              material=Material(diffuseColor=(0.6,1,1))),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        #  ITS, TS : Triangle Set 
        Transform(translation=(-8.4,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='AppearanceNoTexture'),
            geometry=IndexedTriangleSet(ccw=True,colorPerVertex=True,index=[0,1,2,0,2,3],normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        Transform(translation=(-7.2,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='AppearanceNoTexture'),
            geometry=TriangleSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0),(-0.5,0.5,0)])))]),
        #  ITSS, TSS : Triangle Strip Set 
        Transform(translation=(-6.0,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='AppearanceNoTexture'),
            geometry=IndexedTriangleStripSet(ccw=True,colorPerVertex=True,index=[0,1,2,3,0,-1],normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        Transform(translation=(-4.8,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='AppearanceNoTexture'),
            geometry=TriangleStripSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,stripCount=[5],
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0),(-0.5,0.5,0)])))]),
        #  ITFS, TFS : Triangle Fan Set 
        Transform(translation=(-3.6,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='AppearanceNoTexture'),
            geometry=IndexedTriangleFanSet(ccw=True,colorPerVertex=True,index=[0,1,2,3,-1],normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        Transform(translation=(-2.4,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='AppearanceNoTexture'),
            geometry=TriangleFanSet(ccw=True,colorPerVertex=True,fanCount=[4],normalPerVertex=True,solid=True,
              coord=Coordinate(point=[(-0.5,0.5,0),(-0.5,-0.5,0),(0.5,-0.5,0),(0.5,0.5,0)])))]),
        #  Box 
        Transform(translation=(-1.2,0,-0.5),
          children=[
          Shape(
            appearance=Appearance(USE='AppearanceNoTexture'),
            geometry=Box(size=(1,1,1)))]),
        #  IQS, QS : Quad Set 
        Transform(
          #  <Shape> <Appearance USE='AppearanceNoTexture'/> <IndexedQuadSet index='0 1 2 3'> <Coordinate point='-0.5 0.5 0 -0.5 -0.5 0 0.5 -0.5 0 0.5 0.5 0'/> </IndexedQuadSet> </Shape> 
          ),
        Transform(translation=(1.2,0,0),
          #  <Shape> <Appearance USE='AppearanceNoTexture'/> <QuadSet> <Coordinate point='-0.5 0.5 0 -0.5 -0.5 0 0.5 -0.5 0 0.5 0.5 0'/> </QuadSet> </Shape> 
          ),
        #  R2D : Rectangle2D 
        Transform(translation=(2.4,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='AppearanceNoTexture'),
            geometry=Rectangle2D(size=(1.0,1.0)))]),
        #  TS2D : TriangleSet2D 
        Transform(translation=(3.6,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='AppearanceNoTexture'),
            geometry=TriangleSet2D(vertices=[(-0.5,0.5),(-0.5,-0.5),(0.5,-0.5),(0.5,-0.5),(0.5,0.5),(-0.5,0.5)]))]),
        #  EG : ElevationGrid 
        Transform(translation=(4.8,0,0),
          children=[
          Transform(rotation=(1,0,0,-1.5708),translation=(-0.5,-0.5,0.2),
            children=[
            Shape(
              appearance=Appearance(USE='AppearanceNoTexture'),
              geometry=ElevationGrid(height=[0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2,0.2],solid=False,xDimension=6,xSpacing=0.2,zDimension=6,zSpacing=0.2))])])]),
      #  == === ==== Text 
      #  Title 
      Transform(translation=(0,3.5,0),
        children=[
        Shape(
          geometry=Text(DEF='Title',string=["Texture Map Comparisons for Rectangles!"],
            fontStyle=FontStyle(justify=["MIDDLE","FIRST"])),
          appearance=Appearance(DEF='DefaultAppearance',
            material=Material(DEF='DefaultMaterial')))]),
      #  X axis : Geometry Index 
      Transform(translation=(0,1.2,0),
        #  IFS : Indexed Face Set 
        children=[
        Transform(translation=(-9.6,0,0),
          children=[
          Shape(
            geometry=Text(string=["IFS"],
              fontStyle=FontStyle(DEF='CenterFontStyle',justify=["MIDDLE","MIDDLE"],size=0.5,style_='BOLD')),
            #  Omitting Appearance can sometimes reveal rendering errors! 
            #  TODO where is governing specification paragraph? Not found in 12.2 Concepts https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/shape.html#Concepts 
            )]),
        #  ITS, TS : Triangle Set 
        Transform(translation=(-8.4,0,0),
          children=[
          Shape(
            geometry=Text(string=["ITS"],
              fontStyle=FontStyle(USE='CenterFontStyle')))]),
        Transform(translation=(-7.2,0,0),
          children=[
          Shape(
            geometry=Text(string=["TS"],
              fontStyle=FontStyle(USE='CenterFontStyle')))]),
        #  ITSS, TSS : Triangle Strip Set 
        Transform(translation=(-6.0,0,0),
          children=[
          Shape(
            geometry=Text(string=["ITSS"],
              fontStyle=FontStyle(USE='CenterFontStyle')))]),
        Transform(translation=(-4.8,0,0),
          children=[
          Shape(
            geometry=Text(string=["TSS"],
              fontStyle=FontStyle(USE='CenterFontStyle')))]),
        #  ITFS, TFS : Triangle Fan Set 
        Transform(translation=(-3.6,0,0),
          children=[
          Shape(
            geometry=Text(string=["ITFS"],
              fontStyle=FontStyle(USE='CenterFontStyle')))]),
        Transform(translation=(-2.4,0,0),
          children=[
          Shape(
            geometry=Text(string=["TFS"],
              fontStyle=FontStyle(USE='CenterFontStyle')))]),
        #  Box 
        Transform(translation=(-1.2,0,0),
          children=[
          Shape(
            geometry=Text(string=["BOX"],
              fontStyle=FontStyle(USE='CenterFontStyle')))]),
        #  IQS, QS : Quad Set 
        Transform(
          children=[
          Shape(
            geometry=Text(string=["IQS"],
              fontStyle=FontStyle(USE='CenterFontStyle')))]),
        Transform(translation=(1.2,0,0),
          children=[
          Shape(
            geometry=Text(string=["QS"],
              fontStyle=FontStyle(USE='CenterFontStyle')))]),
        #  R2D : Rectangle2D 
        Transform(translation=(2.4,0,0),
          children=[
          Shape(
            geometry=Text(string=["R2D"],
              fontStyle=FontStyle(USE='CenterFontStyle')))]),
        #  TS2D : TriangleSet2D 
        Transform(translation=(3.6,0,0),
          children=[
          Shape(
            geometry=Text(string=["TS2D"],
              fontStyle=FontStyle(USE='CenterFontStyle'))),
          TouchSensor(description='TriangleSet2D'),
          Shape(DEF='TransparentTextSelection',
            geometry=Box(size=(1.1,.4,.001)),
            appearance=Appearance(
              material=Material(transparency=1)))]),
        #  EG : ElevationGrid 
        Transform(translation=(4.8,0,0),
          children=[
          Shape(
            geometry=Text(string=["EG"],
              fontStyle=FontStyle(USE='CenterFontStyle'))),
          TouchSensor(description='ElevationGrid'),
          Shape(USE='TransparentTextSelection')])]),
      #  Y axis : Texture Description 
      Transform(translation=(5.6,0.5,0),
        children=[
        Transform(
          children=[
          Shape(
            geometry=Text(string=["Default Texture"],
              fontStyle=FontStyle(DEF='LeftFontStyle',justify=["BEGIN","BEGIN"],size=0.5)))]),
        Transform(translation=(0,-1.2,0),
          children=[
          Shape(
            geometry=Text(string=["Rotate Texture"],
              fontStyle=FontStyle(USE='LeftFontStyle')))]),
        Transform(translation=(0,-2.4,0),
          children=[
          Shape(
            geometry=Text(string=["Rotate, Translate Texture"],
              fontStyle=FontStyle(USE='LeftFontStyle')))]),
        Transform(translation=(0,-3.6,0),
          children=[
          Shape(
            geometry=Text(string=["Rotate, Translate, Scale"],
              fontStyle=FontStyle(USE='LeftFontStyle')))]),
        Transform(translation=(0,-4.8,0),
          children=[
          Shape(
            geometry=Text(string=["No Texture"],
              fontStyle=FontStyle(USE='LeftFontStyle')),
            appearance=Appearance(USE='AppearanceNoTexture'))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TextureMapComparisonsRectangle.py")
