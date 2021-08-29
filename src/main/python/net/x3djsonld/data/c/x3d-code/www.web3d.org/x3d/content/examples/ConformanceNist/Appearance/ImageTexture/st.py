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
    meta(content='st.x3d',name='title'),
    meta(content='st-front.jpg',name='Image'),
    meta(content='st-rear.jpg',name='Image'),
    meta(content='st-top.jpg',name='Image'),
    meta(content='st-bottom.jpg',name='Image'),
    meta(content='st-left.jpg',name='Image'),
    meta(content='st-right.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test browser default ability to repeat a half-scale JPEG texture horizontally and vertically to fill primitive geometry. A 2 by 2 matrix of VTS logos should map to the cone, sphere, cylinder, and each face of the box. For the cone, cylinder and sphere and sides of the box, the text should face the viewer and be horizontal. The top of the box shall have a 2 by 2 matrix of VTS logos facing the viewer, and reading left-to-right when the box top is tilted toward the initial viewpoint. The bottom of the box shall have a 2 by 2 matrix of VTS logos reading left-to-right when the bottom of the box is tilted toward the initial viewpoint.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/ImageTexture/st.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='st.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Group(
      children=[
      Transform(translation=(6.14221,0.0694613,-0.000999451),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),
            texture=ImageTexture(DEF='VTS',url=["../../vts.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/vts.jpg"]),
            textureTransform=TextureTransform(scale=(2,2))),
          geometry=Box(),)]),
      Transform(translation=(-4.85443,0.0694381,-0.00149918),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),
            texture=ImageTexture(url=["../../vts.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/vts.jpg"]),
            textureTransform=TextureTransform(scale=(2,2))),
          geometry=Sphere(),)]),
      Transform(translation=(-1.47341,0.036672,-0.00175095),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),
            texture=ImageTexture(url=["../../vts.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/vts.jpg"]),
            textureTransform=TextureTransform(scale=(2,2))),
          geometry=Cone(),)]),
      Transform(translation=(2.31094,0.0694206,-0.00187683),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),
            texture=ImageTexture(url=["../../vts.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/vts.jpg"]),
            textureTransform=TextureTransform(scale=(2,2))),
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

print ("python x3d.py load successful for st.py")
