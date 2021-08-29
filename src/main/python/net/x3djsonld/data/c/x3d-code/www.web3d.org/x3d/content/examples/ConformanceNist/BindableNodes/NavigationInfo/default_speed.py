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
    meta(content='default_speed.x3d',name='title'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test default speed. A NavigationInfo node with a default speed field should result in a navigation speed of 1 meter per second for browser average/default speed, when the browser speed control is set to "normal". The speed is measured in the same root coordinate system of the Viewpoint node, to which the NavigationInfo node is parented.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/default_speed.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='default_speed.x3d'),
    Background(groundAngle=[1.57],groundColor=[(0,0.5,0),(0,0.5,0)],skyColor=[(0,0,1)]),
    TimeSensor(DEF='TIME',loop=True),
    Transform(DEF='TRANS1',
      children=[
      Transform(translation=(-0.5,-0.4,-1),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))),
          geometry=Text(DEF='TYPESTRING1',string=["message from Script is inserted here"],
            fontStyle=FontStyle(size=0.1)))])]),
    ProximitySensor(DEF='PROX_SENSOR',size=(1000,1000,1000)),
    Script(DEF='AVATARSCRIPT',directOutput=True,url=["default_speed.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/default_speed.js"],
      field=[
      field(accessType='initializeOnly',name='proxSensor',type='SFNode',
        children=[
        ProximitySensor(USE='PROX_SENSOR')]),
      field(accessType='initializeOnly',name='trans1',type='SFNode',
        children=[
        Transform(USE='TRANS1')]),
      field(accessType='initializeOnly',name='typestring1',type='SFNode',
        children=[
        Text(USE='TYPESTRING1')]),
      field(accessType='initializeOnly',name='previousTime',type='SFTime',value=0),
      field(accessType='initializeOnly',name='previousLoc',type='SFVec3f',value=(0,0,100)),
      field(accessType='initializeOnly',name='currentLoc',type='SFVec3f',value=(0,0,10)),
      field(accessType='initializeOnly',name='zero',type='MFString',value=["current speed = 0"]),
      field(accessType='inputOnly',name='printSpeed',type='SFVec3f'),
      field(accessType='inputOnly',name='printZero',type='SFTime')]),
    ROUTE(fromField='cycleTime',fromNode='TIME',toField='printZero',toNode='AVATARSCRIPT'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='printSpeed',toNode='AVATARSCRIPT'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='TRANS1'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='TRANS1')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for default_speed.py")
