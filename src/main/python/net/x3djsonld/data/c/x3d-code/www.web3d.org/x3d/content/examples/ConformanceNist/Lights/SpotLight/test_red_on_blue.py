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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='test_red_on_blue.x3d',name='title'),
    meta(content='test-red-on-blue-front.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='This test addresses the ability of a browser to apply a colored (red) light on an object of a different color (blue). Four simple geometries are defined in the local coordinate system and the emissive and diffuse color are both set to 0 0 1. A Spotlight is also defined and a red color is associated with it. The dot product of the light and object color produce a black appearing object.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Lights/SpotLight/test_red_on_blue.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='test_red_on_blue.x3d'),
    Group(
      children=[
      Viewpoint(description='Front View',position=(0,0,15))]),
    Background(groundColor=[(0,0,0)],skyColor=[(1,1,1)]),
    NavigationInfo(headlight=False,type=["EXAMINE","WALK","FLY","ANY"]),
    DirectionalLight(on=False),
    PointLight(on=False),
    SpotLight(DEF='the-light',beamWidth=1.57079,color=(1,0,0),cutOffAngle=1.57079,location=(0,0,10),radius=50),
    Transform(translation=(6.14221,0.0694613,-0.000999451),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1))),
        geometry=Box(),)]),
    Transform(translation=(-4.85443,0.0694381,-0.00149918),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1))),
        geometry=Sphere(),)]),
    Transform(translation=(-1.47341,0.036672,-0.00175095),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1))),
        geometry=Cone(),)]),
    Transform(translation=(2.31094,0.0694206,-0.00187683),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1))),
        geometry=Cylinder(),)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for test_red_on_blue.py")
