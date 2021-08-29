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
    meta(content='rotation_primitives.x3d',name='title'),
    meta(content='rotation_primitives-front.jpg',name='Image'),
    meta(content='rotation_primitives-rear.jpg',name='Image'),
    meta(content='rotation_primitives-top.jpg',name='Image'),
    meta(content='rotation_primitives-bottom.jpg',name='Image'),
    meta(content='rotation_primitives-left.jpg',name='Image'),
    meta(content='rotation_primitives-right.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test rotation field for ImageTexture mapping to primitive geometry. Test browser ability to apply rotations of (left to right) -180, -90, +45, 90 and 180 degrees to an ImageTexture mapped to the faces of primitive geometry, mapping with mapping rules. The result is (for all geometry faces): the first column of geometry should show the VTS logo upside-down and spelling to the left for all faces. The second column of geometry should map the VTS logo with the positive horizontal direction pointing up, and the positive vertical axis pointing left. The third column should map the VTS logo right side up, on a downward 45 degree angle. The fourth column should map the VTS logo vertically downward, with the +T direction to the right. The fifth column should be identical to column #1.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/TextureTransform/rotation_primitives.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='rotation_primitives.x3d'),
    Group(
      children=[
      Viewpoint(description='Front View'),
      Viewpoint(description='Rear View',orientation=(0,1,0,3.14),position=(0,0,-10)),
      Viewpoint(description='Top View',orientation=(1,0,0,-1.57),position=(0,10,0)),
      Viewpoint(description='Bottom View',orientation=(1,0,0,1.57),position=(0,-10,0)),
      Viewpoint(description='Right View',orientation=(0,1,0,1.57),position=(10,0,0)),
      Viewpoint(description='Left View',orientation=(0,1,0,-1.57),position=(-10,0,0))]),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    DirectionalLight(ambientIntensity=1,intensity=0.2),
    DirectionalLight(ambientIntensity=1,direction=(0,0,1),intensity=0.2),
    Transform(translation=(-4,-0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(DEF='VTS',url=["../../vts.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/vts.jpg"]),
          textureTransform=TextureTransform(rotation=-3.14),
          material=Material(),),
        geometry=Sphere(radius=0.5))]),
    Transform(translation=(-2,-0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=-1.57),
          material=Material(),),
        geometry=Sphere(radius=0.5))]),
    Transform(translation=(0,-0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=0.785),
          material=Material(),),
        geometry=Sphere(radius=0.5))]),
    Transform(translation=(2,-0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=1.57),
          material=Material(),),
        geometry=Sphere(radius=0.5))]),
    Transform(translation=(4,-0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=3.14),
          material=Material(),),
        geometry=Sphere(radius=0.5))]),
    Transform(translation=(-4,-2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=-3.14),
          material=Material(),),
        geometry=Box(size=(1,1,1)))]),
    Transform(translation=(-2,-2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=-1.57),
          material=Material(),),
        geometry=Box(size=(1,1,1)))]),
    Transform(translation=(0,-2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=0.785),
          material=Material(),),
        geometry=Box(size=(1,1,1)))]),
    Transform(translation=(2,-2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=1.57),
          material=Material(),),
        geometry=Box(size=(1,1,1)))]),
    Transform(translation=(4,-2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=3.14),
          material=Material(),),
        geometry=Box(size=(1,1,1)))]),
    Transform(translation=(-4,2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=-3.14),
          material=Material(),),
        geometry=Cone(bottomRadius=0.5,height=1))]),
    Transform(translation=(-2,2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=-1.57),
          material=Material(),),
        geometry=Cone(bottomRadius=0.5,height=1))]),
    Transform(translation=(0,2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=0.785),
          material=Material(),),
        geometry=Cone(bottomRadius=0.5,height=1))]),
    Transform(translation=(2,2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=1.57),
          material=Material(),),
        geometry=Cone(bottomRadius=0.5,height=1))]),
    Transform(translation=(4,2.5,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=3.14),
          material=Material(),),
        geometry=Cone(bottomRadius=0.5,height=1))]),
    Transform(translation=(-4,0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=-3.14),
          material=Material(),),
        geometry=Cylinder(height=1,radius=0.5))]),
    Transform(translation=(-2,0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=-1.57),
          material=Material(),),
        geometry=Cylinder(height=1,radius=0.5))]),
    Transform(translation=(0,0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=0.785),
          material=Material(),),
        geometry=Cylinder(height=1,radius=0.5))]),
    Transform(translation=(2,0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=1.57),
          material=Material(),),
        geometry=Cylinder(height=1,radius=0.5))]),
    Transform(translation=(4,0.75,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(USE='VTS'),
          textureTransform=TextureTransform(rotation=3.14),
          material=Material(),),
        geometry=Cylinder(height=1,radius=0.5))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for rotation_primitives.py")
