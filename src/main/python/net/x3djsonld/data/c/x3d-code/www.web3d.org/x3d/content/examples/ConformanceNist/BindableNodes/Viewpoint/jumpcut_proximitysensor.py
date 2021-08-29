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
    meta(content='jumpcut_proximitysensor.x3d',name='title'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test jumpcut with ProximitySensor events. The initial Viewpoint in this world is outside of a ProximitySensor cube. A Second Viewpoint node is at the center of the ProximitySensor (the origin of the local coordinate system). Indicating the Box geometry in the world creates a "jumpcut" between the first and second Viewpoint. The enterTime of the ProximitySensor should be identical to the bindTime of Viewpoint 2 (at the origin of the coordinate system). The exitTime of the ProximitySensor should equal the bindTime of Viewpoint 1 (located outside of the ProximitySensor) . As a result, Text at the bottom of the world should indicate pass/fail of the time events being equal for enterTime and exitTime.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/jumpcut_proximitysensor.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='jumpcut_proximitysensor.x3d'),
    Background(groundAngle=[1.57],groundColor=[(0,0.5,0),(0,0.5,0)],skyColor=[(0,0,1)]),
    ProximitySensor(DEF='PROX_SENSOR',size=(20,20,20)),
    Viewpoint(DEF='VIEW1',description='Viewpoint1',position=(0,0,11)),
    Viewpoint(DEF='VIEW2',description='Viewpoint2',position=(0,0,0)),
    TimeSensor(DEF='TIME0',cycleInterval=2),
    ColorInterpolator(DEF='COLOR_INTERP',key=[0,0.5,1],keyValue=[(1,1,0),(1,1,0),(1,1,0)]),
    TouchSensor(DEF='TOUCH',description='touch to bind viewpoint 2'),
    Transform(translation=(0,0,-3),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='BOX1',diffuseColor=(1,0,0))),
        geometry=Box(size=(3,3,3)))]),
    Transform(DEF='TRANS0',
      children=[
      Transform(translation=(-8,-5,-12),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Text(DEF='TYPESTRING0',string=[""],
            fontStyle=FontStyle(style_='BOLD')))])]),
    Transform(DEF='TRANS1',
      children=[
      Transform(translation=(-8,-6,-12),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Text(DEF='TYPESTRING1',string=["message from Script is inserted here"],
            fontStyle=FontStyle(style_='BOLD')))])]),
    Script(DEF='AVATARSCRIPT',directOutput=True,url=["jumpcut_proximitytsensor.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Viewpoint/jumpcut_proximitytsensor.js"],
      field=[
      field(accessType='initializeOnly',name='view1',type='SFNode',
        children=[
        Viewpoint(USE='VIEW1')]),
      field(accessType='initializeOnly',name='view2',type='SFNode',
        children=[
        Viewpoint(USE='VIEW2')]),
      field(accessType='initializeOnly',name='typestring0',type='SFNode',
        children=[
        Text(USE='TYPESTRING0')]),
      field(accessType='initializeOnly',name='typestring1',type='SFNode',
        children=[
        Text(USE='TYPESTRING1')]),
      field(accessType='inputOnly',name='checkEnter',type='SFTime'),
      field(accessType='inputOnly',name='checkExit',type='SFTime'),
      field(accessType='initializeOnly',name='enterTimeCorrect',type='MFString',value=["enterTime equals Viewpoint2 bindTime"]),
      field(accessType='initializeOnly',name='exitTimeCorrect',type='MFString',value=["exitTime equals Viewpoint1 bindTime"]),
      field(accessType='initializeOnly',name='enterTimeIncorrect',type='MFString',value=["Error: enterTime NOT equal to Viewpoint2 bindTime"]),
      field(accessType='initializeOnly',name='exitTimeIncorrect',type='MFString',value=["Error: exitTime NOT equal to Viewpoint1 "])]),
    ROUTE(fromField='enterTime',fromNode='PROX_SENSOR',toField='checkEnter',toNode='AVATARSCRIPT'),
    ROUTE(fromField='exitTime',fromNode='PROX_SENSOR',toField='checkExit',toNode='AVATARSCRIPT'),
    ROUTE(fromField='isActive',fromNode='TOUCH',toField='set_bind',toNode='VIEW2')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for jumpcut_proximitysensor.py")
