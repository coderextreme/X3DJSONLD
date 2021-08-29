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
    meta(content='all_primitives_pixeltexture.x3d',name='title'),
    meta(content='all_primitives_pixeltexture-front.jpg',name='Image'),
    meta(content='all_primitives_pixeltexture-rear.jpg',name='Image'),
    meta(content='all_primitives_pixeltexture-top.jpg',name='Image'),
    meta(content='all_primitives_pixeltexture-bottom.jpg',name='Image'),
    meta(content='all_primitives_pixeltexture-left.jpg',name='Image'),
    meta(content='all_primitives_pixeltexture-right.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test TextureTransform of scale, center, translation and rotation to primitive geometry for PixelTexture. Test browser ability to apply a +45 degree rotation, with a center of 1 1, a scale of .5 .5 (creating a double sized image), and a translation of .5 .5 to a PixelTexture consisting of a square checkerboard of blue (lower left quadrant), yellow (lower right), red (upper right) and green (upper left) mapped to the faces of primitive geometry. The result is: each face should display four adjacent right triangles, all with 90 degree angles and joined at the central vertex. The top triangle should be RED, the bottom BLUE, the left YELLOW and the right GREEN.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/TextureTransform/all_primitives_pixeltexture.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='all_primitives_pixeltexture.x3d'),
    Group(
      children=[
      Viewpoint(description='Front View',position=(0,0,25)),
      Viewpoint(description='Rear View',orientation=(0,1,0,3.14),position=(0,0,-25)),
      Viewpoint(description='Top View',orientation=(1,0,0,-1.57),position=(0,25,0)),
      Viewpoint(description='Bottom View',orientation=(1,0,0,1.57),position=(0,-25,0)),
      Viewpoint(description='Right View',orientation=(0,1,0,1.57),position=(25,0,0)),
      Viewpoint(description='Left View',orientation=(0,1,0,-1.57),position=(-25,0,0))]),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    DirectionalLight(ambientIntensity=1,intensity=0.2),
    DirectionalLight(ambientIntensity=1,direction=(0,0,1),intensity=0.2),
    Transform(translation=(-5.85443,0,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=PixelTexture(DEF='PIXTEX',image=[2,2,3,0x0000FF,0xFFFF00,0x00FF00,0xFF0000]),
          textureTransform=TextureTransform(center=(1,1),rotation=0.785,scale=(0.5,0.5),translation=(0.5,0.5)),
          material=Material(),),
        geometry=Sphere(),)]),
    Transform(translation=(-2.47341,0,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=PixelTexture(USE='PIXTEX'),
          textureTransform=TextureTransform(center=(1,1),rotation=0.785,scale=(0.5,0.5),translation=(0.5,0.5)),
          material=Material(),),
        geometry=Cone(),)]),
    Transform(translation=(1.31094,0,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=PixelTexture(USE='PIXTEX'),
          textureTransform=TextureTransform(center=(1,1),rotation=0.785,scale=(0.5,0.5),translation=(0.5,0.5)),
          material=Material(),),
        geometry=Cylinder(),)]),
    Transform(translation=(5.14221,0,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=PixelTexture(USE='PIXTEX'),
          textureTransform=TextureTransform(center=(1,1),rotation=0.785,scale=(0.5,0.5),translation=(0.5,0.5)),
          material=Material(),),
        geometry=Box(),)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for all_primitives_pixeltexture.py")
