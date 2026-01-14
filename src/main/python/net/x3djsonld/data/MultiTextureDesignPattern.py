####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python MultiTextureDesignPattern.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='MultiTextureDesignPattern.x3d',name='title'),
    meta(content='Design pattern for MultiTexture, MultiTextureCoordinate, MultiTextureTransform node correspondences',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='5 March 2011',name='created'),
    meta(content='29 October 2023',name='modified'),
    meta(content='X3D schematron rules for quality assurance',name='TODO'),
    meta(content='MultiTextureDesignPatternSceneGraph.png',name='Image'),
    meta(content='MultiTexture, MultiTextureCoordinate, MultiTextureTransform',name='subject'),
    meta(content='https://www.web3d.org/files/specifications/19775-1/V3.2/Part01/components/texturing.html#MultiTexture',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dForAdvancedModeling/TextureMapping/MultiTextureDesignPattern.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='X3D-Edit 3.3, https://www.web3d.org/x3d/tools/X3D-Edit',name='generator'),
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
      #  add a single geometry node here 
      geometry=IndexedFaceSet(
        texCoord=MultiTextureCoordinate(
          #  add multiple TextureCoordinate nodes here, match corresponding MultiTexture child texture nodes 
          texCoord=[
          TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1)]),
          TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1)]),
          TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1)])])),
      appearance=Appearance(
        material=Material(),
        texture=MultiTexture(alpha=0.8,color=(0.9,1,0.2),function=["COMPLEMENT","ALPHAREPLICATE"],mode=["MODULATE","REPLACE","BLENDDIFFUSEALPHA"],source=["DIFFUSE","SPECULAR","FACTOR"],
          #  add multiple texture nodes here 
          texture=[
          ImageTexture(),
          MovieTexture(),
          PixelTexture(),]),
        textureTransform=MultiTextureTransform(
          #  add multiple TextureTransform nodes here, match corresponding MultiTexture child texture nodes 
          textureTransform=[
          TextureTransform(),
          TextureTransform(),
          TextureTransform(),])))])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for MultiTextureDesignPattern.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python MultiTextureDesignPattern.py load and self-test diagnostics complete.")
