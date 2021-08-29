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
    meta(content='test_binding4.x3d',name='title'),
    meta(content='test-binding4-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test browser to bound the next background in the stack when it receives a true event and no event is send to the background currently at the top of the stack. the background not at the top of the stack receives a true event. Two backgrounds are defined in the local coordinate system. The first one is binded by default. The test then sends a true event to a non active Background node. This should cause the second background to be the currently binded background (and be moved to the top of the stack) and the first background to be move from the top of the stack. The second background should then start sending true events (via the is_Bound field). These events are caputure and use to start a timer. The test should generate a blue sky image with some text flashing on it. The test can be started by clicking on the text displayed when the test is first loaded. PLEASE NOTE THAT THE FIRST BACKGROUND IS NOT FORCED OUT BY SENDING A false EVENT TO IT, BUT BY S ENDING A true EVENT TO THE THE SECOND BACKGROUND.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/test_binding4.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='test_binding4.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Group(
      children=[
      Viewpoint(DEF='the-view',description='Front View',position=(0,0,20))]),
    Group(
      children=[
      Background(DEF='sky-back1',backUrl=["sky1.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky1.jpg"],bottomUrl=["sky1.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky1.jpg"],frontUrl=["sky1.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky1.jpg"],groundColor=[(0,0,0)],leftUrl=["sky1.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky1.jpg"],rightUrl=["sky1.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky1.jpg"],topUrl=["sky1.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky1.jpg"]),
      Background(DEF='sky-back2',backUrl=["sky2.png","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky2.png"],bottomUrl=["sky2.png","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky2.png"],frontUrl=["sky2.png","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky2.png"],groundColor=[(0,0,0)],leftUrl=["sky2.png","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky2.png"],rightUrl=["sky2.png","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky2.png"],topUrl=["sky2.png","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/sky2.png"])]),
    Transform(translation=(0.5,3,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='the-material1',diffuseColor=(0,0,1),emissiveColor=(0,0,1))),
        geometry=Text(string=["Background 2 sending true Event"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))]),
    Transform(scale=(0.04,0.04,0.04),translation=(0.5,0,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='the-material5',diffuseColor=(1,0,0))),
        geometry=Text(string=["CLICK HERE TO START"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=32,style_='BOLD'))),
      TouchSensor(DEF='the-touch',description='touch to trigger')]),
    TimeSensor(DEF='timer1',cycleInterval=8,enabled=False),
    ColorInterpolator(DEF='colors1',key=[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],keyValue=[(1,0,0),(0,0,1),(1,0,0),(0,0,1),(1,0,0),(0,0,1),(1,0,0),(0,0,1),(1,0,0),(0,0,1),(1,0,0)]),
    Script(DEF='set_backtrue',
      field=[
      field(accessType='inputOnly',name='value_in',type='SFTime'),
      field(accessType='outputOnly',name='value_out',type='SFBool')]),
    ROUTE(fromField='touchTime',fromNode='the-touch',toField='value_in',toNode='set_backtrue'),
    ROUTE(fromField='value_out',fromNode='set_backtrue',toField='set_bind',toNode='sky-back2'),
    ROUTE(fromField='touchTime',fromNode='the-touch',toField='startTime',toNode='timer1'),
    ROUTE(fromField='isBound',fromNode='sky-back2',toField='enabled',toNode='timer1'),
    ROUTE(fromField='fraction_changed',fromNode='timer1',toField='set_fraction',toNode='colors1'),
    ROUTE(fromField='value_changed',fromNode='colors1',toField='diffuseColor',toNode='the-material1')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for test_binding4.py")
