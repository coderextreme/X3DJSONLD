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
    meta(content='test_wholejpeg.x3d',name='title'),
    meta(content='test-wholejpeg-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test browser to set a whole panorama of JPEG images on the same background. The test sets a Background node with four images on each side of the "background cube" and use the front, right, back and left sides of the cube to map the images. The test can be started by clicking on the text as indicated by the test. The test will then switch the position and orientations values of the viewpoint to display all four sides of the cube. All images are of the high Sierra mountains and of JPEG format.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/test_wholejpeg.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='test_wholejpeg.x3d'),
    NavigationInfo(headlight=False,type=["EXAMINE","WALK","FLY","ANY"]),
    Group(
      children=[
      Viewpoint(DEF='the-view',description='Front View',position=(0,0,20))]),
    Group(
      children=[
      Background(DEF='back1',backUrl=["mt-huxley.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/mt-huxley.jpg"],frontUrl=["mt-humphreys.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/mt-humphreys.jpg"],groundColor=[(0,0,0)],leftUrl=["mt-whitney.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/mt-whitney.jpg"],rightUrl=["lostlakes.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/lostlakes.jpg"])]),
    TimeSensor(DEF='the-time',cycleInterval=8),
    PositionInterpolator(DEF='the-positions',key=[0,0.25,0.5,0.75,1],keyValue=[(0,0,20),(20,0,0),(0,0,11),(-20,0,0),(0,0,20)]),
    OrientationInterpolator(DEF='the-orientations',key=[0,0.25,0.5,0.75,1],keyValue=[(0,1,0,0),(0,1,0,-1.57),(0,1,0,-3.14),(0,1,0,-4.71),(0,1,0,-6.28)]),
    Transform(scale=(0.02,0.02,0.02),translation=(-3.5,-3,10),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=1,diffuseColor=(0,1,0),emissiveColor=(0,1,0))),
        geometry=Text(string=["CLICK HERE TO START TEST"],
          fontStyle=FontStyle(DEF='the-style',justify=["FIRST","FIRST"],size=28,style_='BOLD'))),
      TouchSensor(DEF='the-touch',description='touch to activate')]),
    ROUTE(fromField='touchTime',fromNode='the-touch',toField='startTime',toNode='the-time'),
    ROUTE(fromField='fraction_changed',fromNode='the-time',toField='set_fraction',toNode='the-positions'),
    ROUTE(fromField='fraction_changed',fromNode='the-time',toField='set_fraction',toNode='the-orientations'),
    ROUTE(fromField='value_changed',fromNode='the-positions',toField='position',toNode='the-view'),
    ROUTE(fromField='value_changed',fromNode='the-orientations',toField='orientation',toNode='the-view')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for test_wholejpeg.py")
