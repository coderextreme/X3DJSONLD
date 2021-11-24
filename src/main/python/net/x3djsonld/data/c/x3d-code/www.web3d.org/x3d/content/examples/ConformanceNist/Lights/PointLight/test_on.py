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
    meta(content='test_on.x3d',name='title'),
    meta(content='test-on-front.jpg',name='Image'),
    meta(content='test-on-top.jpg',name='Image'),
    meta(content='test-on-left.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='This test sets the on field to true/false for two PointLight node defined using two different Transform node. The test should generate two default size Spheres. The leftmost one should be illuminated and the rightmost one should be dark.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Lights/PointLight/test_on.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='test_on.x3d'),
    Group(
      children=[
      Viewpoint(description='Front View'),
      Viewpoint(description='Left View',orientation=(0,1,0,-1.57),position=(-10,0,0)),
      Viewpoint(description='Top View',orientation=(1,0,0,-1.57),position=(0,10,0))]),
    Background(groundColor=[(0,0,0)],skyColor=[(1,0,0)]),
    NavigationInfo(headlight=False,type=["EXAMINE","WALK","FLY","ANY"]),
    DirectionalLight(on=False),
    SpotLight(beamWidth=1.570796,cutOffAngle=.785398,on=False),
    Transform(translation=(-3,0,0),
      children=[
      PointLight(ambientIntensity=0.1,location=(0.5,0,2),radius=3),
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Sphere(),)]),
    Transform(translation=(2,0,0),
      children=[
      PointLight(location=(0,0,1),on=False),
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Sphere(),)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for test_on.py")
