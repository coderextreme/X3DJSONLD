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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='Figure18_27RotatingFanAnimatedTextureTransform.x3d',name='title'),
    meta(content='Figure 18.27, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch18/18fig27.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='4 September 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A rotating fan, made realistic by animating a TextureTransform.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter18TextureMapping/Figure18_27RotatingFanAnimatedTextureTransform.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure18_27RotatingFanAnimatedTextureTransform.x3d'),
    Viewpoint(description='That feels good',position=(0,0,4)),
    Group(
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(repeatS=False,repeatT=False,url=["fan.png","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter18TextureMapping/fan.png"]),
          #  Negative coordinates applied to TextureTransform center since opposite effect occurs when texture is mapped to geometry. These values center the fan blade. Thanks to Emanuele Ruffaldi for providing the correct values. 
          textureTransform=TextureTransform(DEF='FanRotation',center=(-0.5,-0.5))),
        geometry=IndexedFaceSet(DEF='Square',coordIndex=[0,1,2,3],solid=False,texCoordIndex=[0,1,2,3],
          coord=Coordinate(point=[(-1,-1,-0.1),(1,-1,-0.1),(1,1,-0.1),(-1,1,-0.1)]),
          texCoord=TextureCoordinate(point=[(0,0),(1,0),(1,1),(0,1)]))),
      Transform(translation=(0,0,0.1),
        children=[
        Shape(
          appearance=Appearance(
            texture=ImageTexture(url=["grill.png","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter18TextureMapping/grill.png"]),
            textureTransform=TextureTransform(center=(0.5,0.5),rotation=0.785,scale=(8,8))),
          geometry=IndexedFaceSet(USE='Square'))]),
      TimeSensor(DEF='Clock',cycleInterval=4,loop=True),
      ScalarInterpolator(DEF='FanPath',key=[0,0.5,1],keyValue=[0,3.14,6.28])]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='FanPath'),
    ROUTE(fromField='value_changed',fromNode='FanPath',toField='set_rotation',toNode='FanRotation')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure18_27RotatingFanAnimatedTextureTransform.py")
