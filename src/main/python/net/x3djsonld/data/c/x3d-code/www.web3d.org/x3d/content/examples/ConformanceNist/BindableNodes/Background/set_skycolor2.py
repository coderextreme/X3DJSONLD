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
    meta(content='set_skycolor2.x3d',name='title'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test browser to assign different skycolors to a set of angles in the skyAngle field. Four Background node are defined in the local coordinate system. All of them belong to the same grouping node (Group node). The test is started by clicking on the text as indicated when the test is first loaded. After clicking on the appropriate color name, the test should generate a sky color of variations of the same color (the one clicked on). This is done by specifying a number of different skycolor angles. There are five colors and four angles defined. No ground colors are defined at all.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Background/set_skycolor2.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='set_skycolor2.x3d'),
    NavigationInfo(headlight=False,type=["EXAMINE","WALK","FLY","ANY"]),
    Group(
      children=[
      Viewpoint(DEF='the-view',description='Front View',position=(0,0,20))]),
    Background(DEF='grays',groundColor=[(0,0,0)],skyAngle=[1.35,1.45,1.52,1.57],skyColor=[(0.41176,0.41176,0.41176),(0.74509,0.74509,0.74509),(0.8,0.8,0.8),(0.82745,0.82745,0.82745),(1,1,1)]),
    Background(DEF='blues',groundColor=[(0,0,0)],skyAngle=[1.35,1.45,1.52,1.57],skyColor=[(0,0,1),(0.11764,0.5747,1),(0,0.74901,1),(0.52941,0.80784,0.92156),(1,1,1)]),
    Background(DEF='yellows',groundColor=[(0,0,0)],skyAngle=[1.35,1.45,1.52,1.57],skyColor=[(1,1,0),(0.8549,0.64705,0.12549),(1,0.84313,0),(0.93333,0.86666,0.5098),(1,1,1)]),
    Background(DEF='oranges',groundColor=[(0,0,0)],skyAngle=[1.35,1.45,1.52,1.57],skyColor=[(0.91372,0.58823,0.47843),(1,0.64705,0),(1,0.54901,0),(1,0.49803,0.31372),(1,1,1)]),
    Transform(translation=(0,0,10),
      children=[
      Transform(scale=(0.02,0.02,0.02),translation=(-5.4,-2,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=1,diffuseColor=(0,1,0),emissiveColor=(0,1,0))),
          geometry=Text(string=["CLICK BELOW TO SELECT SKY COLOR"],
            fontStyle=FontStyle(DEF='the-style',size=29,style_='BOLD')))]),
      Transform(scale=(0.02,0.02,0.02),translation=(-5.4,-2.7,0),
        children=[
        Shape(
          appearance=Appearance(DEF='the-appearance',
            material=Material(ambientIntensity=1,diffuseColor=(0,0,1),emissiveColor=(0,0,1))),
          geometry=Text(string=["Grays"],
            fontStyle=FontStyle(USE='the-style'))),
        TouchSensor(DEF='the-touch1',description='touch to activate')]),
      Transform(scale=(0.02,0.02,0.02),translation=(-5.4,-3.4,0),
        children=[
        Shape(
          appearance=Appearance(USE='the-appearance'),
          geometry=Text(string=["Blues"],
            fontStyle=FontStyle(USE='the-style'))),
        TouchSensor(DEF='the-touch2',description='touch to activate')]),
      Transform(scale=(0.02,0.02,0.02),translation=(1,-2.7,0),
        children=[
        Shape(
          appearance=Appearance(USE='the-appearance'),
          geometry=Text(string=["Yellows"],
            fontStyle=FontStyle(USE='the-style'))),
        TouchSensor(DEF='the-touch3',description='touch to activate')]),
      Transform(scale=(0.02,0.02,0.02),translation=(1,-3.4,0),
        children=[
        Shape(
          appearance=Appearance(USE='the-appearance'),
          geometry=Text(string=["Oranges"],
            fontStyle=FontStyle(USE='the-style'))),
        TouchSensor(DEF='the-touch4',description='touch to activate')])]),
    Script(DEF='color-back1',
      field=[
      field(accessType='inputOnly',name='value_in',type='SFBool'),
      field(accessType='outputOnly',name='value_out',type='SFBool')]),
    Script(DEF='color-back2',
      field=[
      field(accessType='inputOnly',name='value_in',type='SFBool'),
      field(accessType='outputOnly',name='value_out',type='SFBool')]),
    Script(DEF='color-back3',
      field=[
      field(accessType='inputOnly',name='value_in',type='SFBool'),
      field(accessType='outputOnly',name='value_out',type='SFBool')]),
    Script(DEF='color-back4',
      field=[
      field(accessType='inputOnly',name='value_in',type='SFBool'),
      field(accessType='outputOnly',name='value_out',type='SFBool')]),
    ROUTE(fromField='isActive',fromNode='the-touch1',toField='value_in',toNode='color-back1'),
    ROUTE(fromField='isActive',fromNode='the-touch2',toField='value_in',toNode='color-back2'),
    ROUTE(fromField='isActive',fromNode='the-touch3',toField='value_in',toNode='color-back3'),
    ROUTE(fromField='isActive',fromNode='the-touch4',toField='value_in',toNode='color-back4'),
    ROUTE(fromField='value_out',fromNode='color-back1',toField='set_bind',toNode='grays'),
    ROUTE(fromField='value_out',fromNode='color-back2',toField='set_bind',toNode='blues'),
    ROUTE(fromField='value_out',fromNode='color-back3',toField='set_bind',toNode='yellows'),
    ROUTE(fromField='value_out',fromNode='color-back4',toField='set_bind',toNode='oranges')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for set_skycolor2.py")
