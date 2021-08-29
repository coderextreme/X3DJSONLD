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

newModel=X3D(profile='Interactive',version='3.3',
  head=head(
    children=[
    meta(content='EmailLabsCorporateLogo.x3d',name='title'),
    meta(content='Cube-shaped logo model with custom image on each side, testing mailto: url protocol.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='18 June 2018',name='created'),
    meta(content='22 May 2021',name='modified'),
    meta(content='unfinished',name='warning'),
    meta(content='mailto url, xpath X3D url pointing to DEF, spec support, image updates',name='TODO'),
    meta(content='VR Hackathon, Poznan Poland http://vrhackathon.web3d.org/poznan-2018-06',name='reference'),
    meta(content='https://emaillabs.io',name='reference'),
    meta(content='https://R22.com',name='reference'),
    meta(content='EmailLabsHomePage.png',name='Image'),
    meta(content='EmailLabsHomePageBackgroundImage.png',name='Image'),
    meta(content='https://emaillabs.io/wp-content/uploads/2014/11/tlo1c.jpg',name='reference'),
    meta(content='EmailLabsLogoDeconstruction.vsdx',name='drawing'),
    meta(content='EmailLabsLogoTop.png',name='Image'),
    meta(content='EmailLabsLogoFront.png',name='Image'),
    meta(content='EmailLabsLogoLeft.png',name='Image'),
    meta(content='../GeometricShapes/CubeWithLabeledSides.x3d',name='reference'),
    meta(content='../Animation/CubeWithLabeledSidesViewpointSequencer.x3d',name='reference'),
    meta(content='../Animation/CubeWithLabeledSidesViewpointSequencer.png',name='Image'),
    meta(content='../Animation/CubeWithLabeledSidesViewpointSequencer.vsd',name='drawing'),
    meta(content='../Visualization/BackgroundCube.x3d',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/EmailLabsCorporateLogo.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='EmailLabsCorporateLogo.x3d'),
    Background(skyColor=[(0.1,0.1,0.1)]),
    NavigationInfo(type=["EXAMINE"]),
    Anchor(DEF='EmailAnchor',description='select geometry to (hopefully) send email',url=["mailto:brutzman@nps.edu?subject=test"],
      children=[
      Group(
        children=[
        Viewpoint(DEF='FrontView',description='Front view',orientation=(0,1,0,1.57),position=(8,0,0)),
        Shape(DEF='Front',
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3],texCoordIndex=[0,1,2,3],
            coord=Coordinate(DEF='Points',point=[(1,1,1),(1,-1,1),(1,-1,-1),(1,1,-1),(-1,1,1),(-1,-1,1),(-1,-1,-1),(-1,1,-1)]),
            texCoord=TextureCoordinate(DEF='DefaultTextureCoordinate',point=[(0,0),(1,0),(1,1),(0,1)])),
          appearance=Appearance(
            texture=ImageTexture(DEF='EmailLabsLogoFront',url=["EmailLabsLogoFront.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/TextureMapping/EmailLabsLogoFront.png"]))),
        Viewpoint(DEF='LeftView',description='Left view',orientation=(0,1,0,3.1416),position=(0,0,-8)),
        Shape(DEF='Left',
          geometry=IndexedFaceSet(coordIndex=[3,2,6,7],texCoordIndex=[0,1,2,3],
            coord=Coordinate(USE='Points'),
            texCoord=TextureCoordinate(USE='DefaultTextureCoordinate')),
          appearance=Appearance(
            texture=ImageTexture(DEF='EmailLabsLogoLeft',url=["EmailLabsLogoLeft.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/TextureMapping/EmailLabsLogoLeft.png"]))),
        Viewpoint(DEF='TopView',description='Top view',orientation=(1,0,0,-1.57),position=(0,8,0)),
        Shape(DEF='Top',
          geometry=IndexedFaceSet(coordIndex=[0,3,7,4],texCoordIndex=[0,1,2,3],
            coord=Coordinate(USE='Points'),
            texCoord=TextureCoordinate(USE='DefaultTextureCoordinate')),
          appearance=Appearance(
            texture=ImageTexture(DEF='EmailLabsLogoTop',url=["EmailLabsLogoTop.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/TextureMapping/EmailLabsLogoTop.png"]),
            #  <TextureTransform DEF='RotateLeft' rotation='1.57' scale='0.9 0.9'/> 
            )),
        Viewpoint(DEF='BackView',description='Back view',orientation=(0,1,0,-1.57),position=(-8,0,0)),
        Shape(DEF='Back',
          geometry=IndexedFaceSet(coordIndex=[7,6,5,4],texCoordIndex=[0,1,2,3],
            coord=Coordinate(USE='Points'),
            texCoord=TextureCoordinate(USE='DefaultTextureCoordinate')),
          appearance=Appearance(
            texture=ImageTexture(url=["images/EmailLabsLogoBack.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/EmailLabsLogoBack.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/EmailLabsLogoBack.png"]),
            textureTransform=TextureTransform(DEF='RotateRight',rotation=-1.57))),
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
            textureTransform=TextureTransform(USE='Rotate180')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for EmailLabsCorporateLogo.py")
