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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='ImageMappingExample.x3d',name='title'),
    meta(content='Demonstrate example image mapping to IndexedFaceSet used in Web3dTimeline.x3d',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='4 March 2012',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Web3dTimeline.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/ImageMappingExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ImageMappingExample.x3d'),
    Viewpoint(description='Image mapping example',position=(0,0,1.2)),
    Background(skyColor=[(0.941176,0.956863,1)]),
    Transform(DEF='ImageTransform',translation=(-0.5,-0.1,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(url=["images/vrml97.gif","https://www.web3d.org/x3d/content/examples/Basic/Web3dOutreach/images/vrml97.gif"])),
        geometry=IndexedFaceSet(DEF='ImageIFS',coordIndex=[0,1,2,3,-1],solid=False,
          coord=Coordinate(DEF='ImageCoordinate',point=[(0,0,0),(0,0.18085106382978725,0),(1,0.18085106382978725,0),(1,0,0)]),
          texCoord=TextureCoordinate(point=[(0,0),(0,1),(1,1),(1,0)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ImageMappingExample.py")
