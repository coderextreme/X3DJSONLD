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
    meta(content='speed_scaling.x3d',name='title'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test speed scaling. Three Viewpoint node, children in three different Transform node, with three different scale values are used to determine if scaling of Transform node properly affect the speed of a NavigationInfo node. Indicating the top (red) Box changes the current Viewpoints parent Transform scale to (0.01 0.01 0.01). The result should be, the "normal" speed of navigation should be 10 times slower than default navigation speed. Selecting the middle (yellow) Box sets the Transform scale to 1 1 1. Navigation speed should be 1 meter per second when set to "normal" on the browser speed control. Indicating the bottom (green) Box sets the Transform scale to 10 10 10. The result should be, the "normal" speed of navigation for the right indicated text should be 10 times faster than default navigation speed.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/speed_scaling.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='speed_scaling.x3d'),
    Background(groundAngle=[1.57],groundColor=[(0,0.5,0),(0,0.5,0)],skyColor=[(0,0,1)]),
    ProximitySensor(DEF='PROX_SENSOR',size=(100000,100000,100000)),
    Transform(DEF='ROOT_TRANS',
      children=[
      Viewpoint(DEF='VIEW0',description='initial view'),
      NavigationInfo(DEF='NAV0')]),
    TimeSensor(DEF='TIME',loop=True),
    Transform(DEF='TRANS0',
      children=[
      Transform(translation=(-7,5,-15),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1))),
          geometry=Text(DEF='TYPESTRING0',string=["scripted instructions go here"]))])]),
    Transform(DEF='TRANS1',
      children=[
      Transform(translation=(-5,-4,-10),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))),
          geometry=Text(DEF='TYPESTRING1',string=["current speed = 0"],
            fontStyle=FontStyle(),))])]),
    Transform(DEF='TRANS2',
      children=[
      Transform(translation=(-4,0,-10),
        children=[
        TouchSensor(DEF='TOUCH1',description='touch for speed factor 1'),
        Shape(
          appearance=Appearance(
            texture=ImageTexture(url=["1x.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/1x.jpg"]),
            material=Material(),),
          geometry=Box(size=(2,1.5,0.1)))])]),
    Transform(DEF='TRANS3',
      children=[
      Transform(translation=(-4,2,-10),
        children=[
        TouchSensor(DEF='TOUCH2',description='touch for speed factor 1/100th'),
        Shape(
          appearance=Appearance(
            texture=ImageTexture(url=["hundredthx.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/hundredthx.jpg"]),
            material=Material(),),
          geometry=Box(size=(2,1.5,0.1)))])]),
    Transform(DEF='TRANS4',
      children=[
      Transform(translation=(-4,-2,-10),
        children=[
        TouchSensor(DEF='TOUCH3',description='touch for speed factor 100x'),
        Shape(
          appearance=Appearance(
            texture=ImageTexture(url=["100x.jpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/100x.jpg"]),
            material=Material(),),
          geometry=Box(size=(2,1.5,0.1)))])]),
    Script(DEF='CHANGEVIEW',directOutput=True,url=["speed_scaling.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/speed_scaling.js"],
      field=[
      field(accessType='initializeOnly',name='proxSensor',type='SFNode',
        children=[
        ProximitySensor(USE='PROX_SENSOR')]),
      field(accessType='initializeOnly',name='rootTrans',type='SFNode',
        children=[
        Transform(USE='ROOT_TRANS')]),
      field(accessType='initializeOnly',name='typestring0',type='SFNode',
        children=[
        Text(USE='TYPESTRING0')]),
      field(accessType='initializeOnly',name='typestring1',type='SFNode',
        children=[
        Text(USE='TYPESTRING1')]),
      field(accessType='initializeOnly',name='previousTime',type='SFTime',value=0),
      field(accessType='initializeOnly',name='previousLoc',type='SFVec3f',value=(0,0,100)),
      field(accessType='initializeOnly',name='currentLoc',type='SFVec3f',value=(0,0,10)),
      field(accessType='initializeOnly',name='emptyString',type='MFString'),
      field(accessType='initializeOnly',name='zero',type='MFString',value=["current speed = 0"]),
      field(accessType='initializeOnly',name='setSmallScaleString',type='MFString',value=["Click to set Transform scale to .01 .01 .01"]),
      field(accessType='initializeOnly',name='smallScaleSetString',type='MFString',value=["Tranform scale set to .01 .01 .01"]),
      field(accessType='initializeOnly',name='setNormalScaleString',type='MFString',value=["Click to set Transform scale to 1 1 1"]),
      field(accessType='initializeOnly',name='normalScaleSetString',type='MFString',value=["Transform scale set to 1 1 1"]),
      field(accessType='initializeOnly',name='setLargeScaleString',type='MFString',value=["Click to set Transform scale to 100 100 100"]),
      field(accessType='initializeOnly',name='largeScaleSetString',type='MFString',value=["Transform scale set to 100 100 100"]),
      field(accessType='initializeOnly',name='small',type='SFVec3f',value=(0.010000,0.010000,0.010000)),
      field(accessType='initializeOnly',name='normal',type='SFVec3f',value=(1,1,1)),
      field(accessType='initializeOnly',name='large',type='SFVec3f',value=(100,100,100)),
      field(accessType='inputOnly',name='printSpeed',type='SFVec3f'),
      field(accessType='inputOnly',name='printZero',type='SFTime'),
      field(accessType='inputOnly',name='smallScale',type='SFBool'),
      field(accessType='inputOnly',name='largeScale',type='SFBool'),
      field(accessType='inputOnly',name='normalScale',type='SFBool'),
      field(accessType='inputOnly',name='printSmallScale',type='SFBool'),
      field(accessType='inputOnly',name='printLargeScale',type='SFBool'),
      field(accessType='inputOnly',name='printNormalScale',type='SFBool')]),
    ROUTE(fromField='isActive',fromNode='TOUCH1',toField='normalScale',toNode='CHANGEVIEW'),
    ROUTE(fromField='isOver',fromNode='TOUCH1',toField='printNormalScale',toNode='CHANGEVIEW'),
    ROUTE(fromField='isActive',fromNode='TOUCH2',toField='smallScale',toNode='CHANGEVIEW'),
    ROUTE(fromField='isOver',fromNode='TOUCH2',toField='printSmallScale',toNode='CHANGEVIEW'),
    ROUTE(fromField='isActive',fromNode='TOUCH3',toField='largeScale',toNode='CHANGEVIEW'),
    ROUTE(fromField='isOver',fromNode='TOUCH3',toField='printLargeScale',toNode='CHANGEVIEW'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='printSpeed',toNode='CHANGEVIEW'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='TRANS0'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='TRANS0'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='TRANS1'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='TRANS1'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='TRANS2'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='TRANS2'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='TRANS3'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='TRANS3'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='TRANS4'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='TRANS4'),
    ROUTE(fromField='cycleTime',fromNode='TIME',toField='printZero',toNode='CHANGEVIEW')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for speed_scaling.py")
