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
    meta(content='greyscale_png_diffuseColor.x3d',name='title'),
    meta(content='greyscale_png_diffuseColor-front.jpg',name='Image'),
    meta(content='greyscale_png_diffuseColor-rear.jpg',name='Image'),
    meta(content='greyscale_png_diffuseColor-top.jpg',name='Image'),
    meta(content='greyscale_png_diffuseColor-bottom.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test browser ability to combine a greyscale PNG ImageTexture with the diffuseColor value of a Material node.By adding a "red" diffuseColor to all geometry primitives, a "red" greyscale version of the VTS logo should cover the entire surface, and wrap counterclockwise from the back of the sphere. For the cone, the texture should wrap counterclockwise (from above) starting at the back of the cone. A circle cutout of the texture is applied right side up to the base of the cone when the cone is tilted toward the -z axis. For the cylinder, the texture should wrap counterclockwise (from above) starting at the back of the cylinder. A circle cutout of the texture is applied right side up to the top and bottom caps of the cylinder. For the box, the texture should be applied right side up in its entirety to each face of the box.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/ImageTexture/greyscale_png_diffuseColor.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='greyscale_png_diffuseColor.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Group(
      children=[
      Transform(translation=(6.14221,0.0694613,-0.000999451),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0)),
            texture=ImageTexture(DEF='greyscalecolor',url=["greyscalecolor.png","https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/ImageTexture/greyscalecolor.png"])),
          geometry=Box(),)]),
      Transform(translation=(-4.85443,0.0694381,-0.00149918),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0)),
            texture=ImageTexture(USE='greyscalecolor')),
          geometry=Sphere(),)]),
      Transform(translation=(-1.47341,0.036672,-0.00175095),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0)),
            texture=ImageTexture(USE='greyscalecolor')),
          geometry=Cone(),)]),
      Transform(translation=(2.31094,0.0694206,-0.00187683),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0)),
            texture=ImageTexture(USE='greyscalecolor')),
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

print ("python x3d.py load successful for greyscale_png_diffuseColor.py")
