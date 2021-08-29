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
    meta(content='MultiTextureDesignPattern.x3d',name='title'),
    meta(content='Design pattern for MultiTexture, MultiTextureCoordinate, MultiTextureTransform node correspondences',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='5 March 2011',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='X3D schematron rules for quality assurance',name='TODO'),
    meta(content='MultiTextureDesignPatternSceneGraph.png',name='Image'),
    meta(content='MultiTexture, MultiTextureCoordinate, MultiTextureTransform',name='subject'),
    meta(content='https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/components/texturing.html#MultiTexture',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/TextureMapping/MultiTextureDesignPattern.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ================================ 
    children=[
    WorldInfo(title='MultiTextureDesignPattern.x3d'),
    Background(skyColor=[(0.72549,1,0.721569)]),
    Viewpoint(description='MultiTexture design pattern'),
    Shape(
      geometry=Text(string=["Source shows design pattern for","MultiTexture, MultiTextureCoordinate,"," and MultiTextureTransform nodes"],
        fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.6)),
      appearance=Appearance(
        material=Material(diffuseColor=(0.2,0.4,0.8)))),
    #  ================================ 
    Shape(
      #  TODO add a single geometry node here 
      geometry=IndexedFaceSet(
        texCoord=MultiTextureCoordinate(
          #  TODO add multiple TextureCoordinate nodes here, match corresponding MultiTexture children 
          texCoord=[
          TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1)]),
          TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1)]),
          TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1)])])),
      appearance=Appearance(
        material=Material(),
        texture=MultiTexture(alpha=0.8,color=(0.9,1,0.2),function=["COMPLEMENT","ALPHAREPLICATE"],mode=["MODULATE","REPLACE","BLENDDIFFUSEALPHA"],source=["DIFFUSE","SPECULAR","FACTOR"],
          #  TODO add a multiple texture nodes here 
          texture=[
          ImageTexture(),
          MovieTexture(),
          PixelTexture(),]),
        textureTransform=MultiTextureTransform(
          #  TODO add multiple TextureTransform nodes here, match corresponding MultiTexture children 
          textureTransform=[
          TextureTransform(),
          TextureTransform(),
          TextureTransform(),])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MultiTextureDesignPattern.py")
