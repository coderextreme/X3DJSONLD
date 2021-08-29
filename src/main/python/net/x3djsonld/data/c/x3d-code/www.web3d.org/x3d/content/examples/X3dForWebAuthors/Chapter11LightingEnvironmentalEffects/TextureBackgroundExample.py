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
    component(level=3,name='EnvironmentalEffects'),
    meta(content='TextureBackgroundExample.x3d',name='title'),
    meta(content='Simple TextureBackground node with images only.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='20 April 2009',name='created'),
    meta(content='14 June 2020',name='modified'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter11LightingEnvironment/BackgroundImagesOnly.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/TestImages.x3d',name='reference'),
    meta(content='X3D TextureBackground example',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter11LightingEnvironmentalEffects/TextureBackgroundExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TextureBackground.x3d'),
    TextureBackground(
      leftTexture=ImageTexture(url=["images/left.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/left.png"]),
      rightTexture=ImageTexture(url=["images/right.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/right.png"]),
      frontTexture=ImageTexture(url=["images/front.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/front.png"]),
      backTexture=ImageTexture(url=["images/back.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/back.png"]),
      topTexture=ImageTexture(url=["images/top.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/top.png"]),
      bottomTexture=ImageTexture(url=["images/bottom.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/bottom.png"])),
    Shape(
      geometry=Text(string=["TextureBackground node using","ImageTexture nodes"],
        fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],style_='BOLD')),
      appearance=Appearance(
        material=Material(diffuseColor=(1,1,1))))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TextureBackgroundExample.py")
