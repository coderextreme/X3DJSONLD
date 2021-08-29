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
    meta(content='default_primitives_pixeltexture.x3d',name='title'),
    meta(content='default_primitives_pixeltexture-front.jpg',name='Image'),
    meta(content='default_primitives_pixeltexture-rear.jpg',name='Image'),
    meta(content='default_primitives_pixeltexture-top.jpg',name='Image'),
    meta(content='default_primitives_pixeltexture-bottom.jpg',name='Image'),
    meta(content='default_primitives_pixeltexture-left.jpg',name='Image'),
    meta(content='default_primitives_pixeltexture-right.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test default field values for primitive geometry applied with a PixelTexture. Test default TextureTransform node effect on PixelTexture mapping to primitive geometry. A PixelTexture consisting of a square checkerboard of red (lower left quadrant), yellow (lower right), red (upper right) and yellow (upper left) is mapped to primitive geometry. For the sphere, the texture should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/TextureTransform/default_primitives_pixeltexture.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='default_primitives_pixeltexture.x3d'),
    Group(
      children=[
      Viewpoint(description='Front View',position=(0,0,25)),
      Viewpoint(description='Rear View',orientation=(0,1,0,3.14),position=(0,0,-25)),
      Viewpoint(description='Top View',orientation=(1,0,0,-1.57),position=(0,25,0)),
      Viewpoint(description='Bottom View',orientation=(1,0,0,1.57),position=(0,-25,0)),
      Viewpoint(description='Right View',orientation=(0,1,0,1.57),position=(25,0,0)),
      Viewpoint(description='Left View',orientation=(0,1,0,-1.57),position=(-25,0,0))]),
    NavigationInfo(type=["WALK"]),
    Group(
      children=[
      Transform(translation=(6.14221,0.0694613,-0.000999451),
        children=[
        Shape(
          appearance=Appearance(
            textureTransform=TextureTransform(),
            texture=PixelTexture(DEF='PIXTEX',image=[2,2,3,0x0000FF,0xFFFF00,0x00FF00,0xFF0000]),
            material=Material(),),
          geometry=Box(),)]),
      Transform(translation=(-4.85443,0.0694381,-0.00149918),
        children=[
        Shape(
          appearance=Appearance(
            texture=PixelTexture(USE='PIXTEX'),
            material=Material(),),
          geometry=Sphere(),)]),
      Transform(translation=(-1.47341,0.036672,-0.00175095),
        children=[
        Shape(
          appearance=Appearance(
            texture=PixelTexture(USE='PIXTEX'),
            material=Material(),),
          geometry=Cone(),)]),
      Transform(translation=(2.31094,0.0694206,-0.00187683),
        children=[
        Shape(
          appearance=Appearance(
            texture=PixelTexture(USE='PIXTEX'),
            material=Material(),),
          geometry=Cylinder(),)])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for default_primitives_pixeltexture.py")
