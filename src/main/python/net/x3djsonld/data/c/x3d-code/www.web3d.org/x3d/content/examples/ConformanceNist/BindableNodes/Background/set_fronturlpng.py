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
    meta(content='set_fronturlpng.x3d',name='title'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test browser to switch between different backgrounds where each one contains a different fronturl PNG image associated with it. The front image may be changed by clicking on the appropriate text as indicated. The test should generate a different PNG image each time the appropriate text is clicked. All images are on PNG format and are from the from mountains of the High Sierra. The viewpoint is set so that the viewer will face the front of the cube (along the +Z axis)',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/set_fronturlpng.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='set_fronturlpng.x3d'),
    NavigationInfo(headlight=False,type=["EXAMINE","WALK","FLY","ANY"]),
    Group(
      children=[
      Viewpoint(DEF='the-view',description='Front View')]),
    Group(
      children=[
      Background(DEF='back1',backUrl=["mt-humphreys.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/mt-humphreys.jpg"],groundColor=[(0,0,0)]),
      Background(DEF='back2',backUrl=["lostlakes.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/lostlakes.jpg"],groundColor=[(0,0,0)]),
      Background(DEF='back3',backUrl=["mt-huxley.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/mt-huxley.jpg"],groundColor=[(0,0,0)]),
      Background(DEF='back4',backUrl=["mt-whitney.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/mt-whitney.jpg"],groundColor=[(0,0,0)])]),
    Transform(
      children=[
      Transform(scale=(0.02,0.02,0.02),translation=(-5.4,-2,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=1,diffuseColor=(0,1,0),emissiveColor=(0,1,0))),
          geometry=Text(string=["CLICK TO SELECT FRONT URL IMAGE"],
            fontStyle=FontStyle(DEF='the-style',justify=["FIRST","FIRST"],size=28,style_='BOLD')))]),
      Transform(scale=(0.02,0.02,0.02),translation=(-5.4,-2.7,0),
        children=[
        Shape(
          appearance=Appearance(DEF='the-appearance',
            material=Material(ambientIntensity=1,diffuseColor=(0,0,1),emissiveColor=(0,0,1))),
          geometry=Text(string=["Mt. Humphreys"],
            fontStyle=FontStyle(USE='the-style'))),
        TouchSensor(DEF='the-touch1',description='touch to activate')]),
      Transform(scale=(0.02,0.02,0.02),translation=(-5.4,-3.4,0),
        children=[
        Shape(
          appearance=Appearance(USE='the-appearance'),
          geometry=Text(string=["Lost Lakes"],
            fontStyle=FontStyle(USE='the-style'))),
        TouchSensor(DEF='the-touch2',description='touch to activate')]),
      Transform(scale=(0.02,0.02,0.02),translation=(1,-2.7,0),
        children=[
        Shape(
          appearance=Appearance(USE='the-appearance'),
          geometry=Text(string=["Mt. Huxley"],
            fontStyle=FontStyle(USE='the-style'))),
        TouchSensor(DEF='the-touch3',description='touch to activate')]),
      Transform(scale=(0.02,0.02,0.02),translation=(1,-3.4,0),
        children=[
        Shape(
          appearance=Appearance(USE='the-appearance'),
          geometry=Text(string=["Mt. Whitney"],
            fontStyle=FontStyle(USE='the-style'))),
        TouchSensor(DEF='the-touch4',description='touch to activate')])]),
    Script(DEF='image-back1',
      field=[
      field(accessType='inputOnly',name='value_in',type='SFBool'),
      field(accessType='outputOnly',name='value_out',type='SFBool')]),
    Script(DEF='image-back2',
      field=[
      field(accessType='inputOnly',name='value_in',type='SFBool'),
      field(accessType='outputOnly',name='value_out',type='SFBool')]),
    Script(DEF='image-back3',
      field=[
      field(accessType='inputOnly',name='value_in',type='SFBool'),
      field(accessType='outputOnly',name='value_out',type='SFBool')]),
    Script(DEF='image-back4',
      field=[
      field(accessType='inputOnly',name='value_in',type='SFBool'),
      field(accessType='outputOnly',name='value_out',type='SFBool')]),
    ROUTE(fromField='isActive',fromNode='the-touch1',toField='value_in',toNode='image-back1'),
    ROUTE(fromField='isActive',fromNode='the-touch2',toField='value_in',toNode='image-back2'),
    ROUTE(fromField='isActive',fromNode='the-touch3',toField='value_in',toNode='image-back3'),
    ROUTE(fromField='isActive',fromNode='the-touch4',toField='value_in',toNode='image-back4'),
    ROUTE(fromField='value_out',fromNode='image-back1',toField='set_bind',toNode='back1'),
    ROUTE(fromField='value_out',fromNode='image-back2',toField='set_bind',toNode='back2'),
    ROUTE(fromField='value_out',fromNode='image-back3',toField='set_bind',toNode='back3'),
    ROUTE(fromField='value_out',fromNode='image-back4',toField='set_bind',toNode='back4')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for set_fronturlpng.py")
