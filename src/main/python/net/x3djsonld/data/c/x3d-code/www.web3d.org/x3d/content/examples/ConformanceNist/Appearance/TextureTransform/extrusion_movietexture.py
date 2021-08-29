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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='extrusion_movietexture.x3d',name='title'),
    meta(content='extrusion_movietexture-front.jpg',name='Image'),
    meta(content='extrusion_movietexture-rear.jpg',name='Image'),
    meta(content='extrusion_movietexture-top.jpg',name='Image'),
    meta(content='extrusion_movietexture-bottom.jpg',name='Image'),
    meta(content='extrusion_movietexture-left.jpg',name='Image'),
    meta(content='extrusion_movietexture-right.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test default TextureTransform mapping of a MovieTexture to an Extrusion. A MovieTexture is applied to an Extrusion by aligning the bottom of the VTS logo with the first cross-section at the first spine point (the base of the extrusion), and the top of the VTS logo coincides with the last cross-section at the last spine point (the top of the extrusion). The left side of the VTS logo is aligned with the first cross-section point of all spine points (the rightmost point), and the right side of the VTS logo coincides with the last cross-section point for all spine points (again, the rightmost point on the extrusion). For the ends of the extrusion, The VTS logo will map with the S (horizontal) texture axis aligning with the X axis of the cap, and the T (vertical) texture axis aligning with the Z axis of the cap.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/TextureTransform/extrusion_movietexture.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='extrusion_movietexture.x3d'),
    Group(
      children=[
      Viewpoint(description='Front View'),
      Viewpoint(description='Rear View',orientation=(0,1,0,3.14),position=(0,0,-10)),
      Viewpoint(description='Top View',orientation=(1,0,0,-1.57),position=(0,10,0)),
      Viewpoint(description='Bottom View',orientation=(1,0,0,1.57),position=(0,-10,0)),
      Viewpoint(description='Right View',orientation=(0,1,0,1.57),position=(10,0,0)),
      Viewpoint(description='Left View',orientation=(0,1,0,-1.57),position=(-10,0,0))]),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Transform(translation=(-0.0541457,1.51608,-4.17233e-007),
      children=[
      Shape(
        appearance=Appearance(
          texture=MovieTexture(loop=True,url=["vts.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/vts.mpg"]),
          textureTransform=TextureTransform(),
          material=Material(),),
        geometry=Extrusion(crossSection=[(1,-2.44921e-016),(0.932472,-0.361242),(0.739009,-0.673696),(0.445738,-0.895164),(0.0922675,-0.995734),(-0.273664,-0.961825),(-0.602635,-0.798017),(-0.850218,-0.526432),(-0.982973,-0.183749),(-0.982973,0.18375),(-0.850217,0.526433),(-0.602634,0.798018),(-0.273663,0.961826),(0.0922688,0.995734),(0.445739,0.895163),(0.739009,0.673695),(0.932472,0.361241),(1,-2.44921e-016)],orientation=[(0,0,1,0),(0,0,1,0)],scale=[(1,1),(1,1)]))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for extrusion_movietexture.py")
