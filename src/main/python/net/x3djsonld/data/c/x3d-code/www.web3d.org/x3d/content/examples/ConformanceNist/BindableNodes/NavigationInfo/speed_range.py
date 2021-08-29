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
    meta(content='speed_range.x3d',name='title'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test speed range. A NavigationInfo node can be modified with speed values of 0, 1 and 10 meters per second by indicating the appropriate text in this world. A speedometer located in the lower left portion of the screen shows the current avatar speed. Indicating the red Sphere in this world set the NavigationInfo node speed to "0". Indicating the yellow Sphere sets the speed to 1 meter per second for default navigation. Indicating the green sphere sets the speed to 10 meters per second for default navigation. The "speedometer" should reflect these changes when the browser speed control is set to the default normal navigation speed.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/speed_range.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='speed_range.x3d'),
    Background(groundAngle=[1.57],groundColor=[(0,0.5,0),(0,0.5,0)],skyColor=[(0,0,1)]),
    Viewpoint(DEF='DEFAULT',description='default speed'),
    Viewpoint(DEF='VIEW0',description='speed=0'),
    Viewpoint(DEF='VIEW1',description='speed=1'),
    Viewpoint(DEF='VIEW10',description='speed=10'),
    NavigationInfo(DEF='NAV1'),
    ProximitySensor(DEF='PROX_SENSOR',size=(100000,100000,100000)),
    TimeSensor(DEF='TIME',loop=True),
    Transform(DEF='TRANS0',
      children=[
      Transform(translation=(-0.525,0.35,-1),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1))),
          geometry=Text(DEF='TYPESTRING2',string=["Default speed of 1 meter/sec"],
            fontStyle=FontStyle(size=0.1)))])]),
    Transform(DEF='TRANS1',
      children=[
      Transform(translation=(-0.15,-0.4,-1),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))),
          geometry=Text(DEF='TYPESTRING1',string=["speed = 0"],
            fontStyle=FontStyle(size=0.1)))])]),
    Transform(DEF='TRANS2',
      children=[
      Transform(translation=(-3.5,2,-10),
        children=[
        TouchSensor(DEF='TOUCH0',description='touch for speed=0'),
        Shape(
          appearance=Appearance(
            texture=ImageTexture(url=["speed_0.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/speed_0.jpg"]),
            material=Material(diffuseColor=(1,0,0))),
          geometry=Box(size=(2,1.5,0.1)))])]),
    Transform(DEF='TRANS4',
      children=[
      Transform(translation=(-3.5,0,-10),
        children=[
        TouchSensor(DEF='TOUCH100',description='touch for speed=100'),
        Shape(
          appearance=Appearance(
            texture=ImageTexture(url=["speed_100.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/speed_100.jpg"]),
            material=Material(diffuseColor=(0,1,0))),
          geometry=Box(size=(2,1.5,0.1)))])]),
    Script(DEF='SPEEDSCRIPT',directOutput=True,url=["speed_range.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/speed_range.js"],
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
      field(accessType='initializeOnly',name='typestring2',type='SFNode',
        children=[
        Text(USE='TYPESTRING2')]),
      field(accessType='initializeOnly',name='previousTime',type='SFTime',value=0),
      field(accessType='initializeOnly',name='previousLoc',type='SFVec3f',value=(0,0,100)),
      field(accessType='initializeOnly',name='currentLoc',type='SFVec3f',value=(0,0,10)),
      field(accessType='initializeOnly',name='view0',type='SFNode',
        children=[
        Viewpoint(USE='VIEW0')]),
      field(accessType='initializeOnly',name='view1',type='SFNode',
        children=[
        Viewpoint(USE='VIEW1')]),
      field(accessType='initializeOnly',name='view10',type='SFNode',
        children=[
        Viewpoint(USE='VIEW10')]),
      field(accessType='initializeOnly',name='nav1',type='SFNode',
        children=[
        NavigationInfo(USE='NAV1')]),
      field(accessType='initializeOnly',name='position',type='SFVec3f',value=(0,0,0)),
      field(accessType='initializeOnly',name='zero',type='MFString',value=["current speed = 0"]),
      field(accessType='initializeOnly',name='emptyString',type='MFString'),
      field(accessType='initializeOnly',name='setZeroSpeedString',type='MFString',value=["Click to set speed to 0 meters/sec"]),
      field(accessType='initializeOnly',name='speedSetToZeroString',type='MFString',value=["Speed set to 0 meters/sec"]),
      field(accessType='initializeOnly',name='setHundredSpeedString',type='MFString',value=["Click to set speed to 100 meters/sec"]),
      field(accessType='initializeOnly',name='speedSetToHundredString',type='MFString',value=["Speed set to 100 meters/sec"]),
      field(accessType='inputOnly',name='printSpeed',type='SFVec3f'),
      field(accessType='inputOnly',name='changeSpeed0',type='SFBool'),
      field(accessType='inputOnly',name='changeSpeed100',type='SFBool'),
      field(accessType='inputOnly',name='printZeroSpeed',type='SFBool'),
      field(accessType='inputOnly',name='printHundredSpeed',type='SFBool'),
      field(accessType='inputOnly',name='printZero',type='SFTime')]),
    ROUTE(fromField='isActive',fromNode='TOUCH0',toField='changeSpeed0',toNode='SPEEDSCRIPT'),
    ROUTE(fromField='isOver',fromNode='TOUCH0',toField='printZeroSpeed',toNode='SPEEDSCRIPT'),
    ROUTE(fromField='isActive',fromNode='TOUCH100',toField='changeSpeed100',toNode='SPEEDSCRIPT'),
    ROUTE(fromField='isOver',fromNode='TOUCH100',toField='printHundredSpeed',toNode='SPEEDSCRIPT'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='printSpeed',toNode='SPEEDSCRIPT'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='TRANS0'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='TRANS0'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='TRANS1'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='TRANS1'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='TRANS2'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='TRANS2'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='TRANS4'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='TRANS4'),
    ROUTE(fromField='cycleTime',fromNode='TIME',toField='printZero',toNode='SPEEDSCRIPT')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for speed_range.py")
