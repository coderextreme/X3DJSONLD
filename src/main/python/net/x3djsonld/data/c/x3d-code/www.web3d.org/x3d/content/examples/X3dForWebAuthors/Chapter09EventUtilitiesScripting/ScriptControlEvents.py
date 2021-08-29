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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='ScriptControlEvents.x3d',name='title'),
    meta(content='A three-way light controlled by a Script node.',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='10 June 2006',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter09EventUtilitiesScripting/ScriptControlEvents.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ScriptControlEvents.x3d'),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='Push button to change light color',orientation=(1,0,0,-0.45),position=(0,2,5)),
    Viewpoint(description='Book View',orientation=(0,1,0,0.83),position=(0.92,0.07,0.63)),
    Transform(DEF='PushButtonBox',translation=(-2,0,0),
      children=[
      Transform(DEF='ControlBox',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,.8,0))),
          geometry=Box(size=(1,.5,1)))]),
      Transform(DEF='ControlButton',translation=(0,.25,0),
        children=[
        TouchSensor(DEF='ButtonTouch',description='touch to activate'),
        Shape(
          geometry=Cylinder(DEF='Button',bottom=False,height=.5,radius=.25),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0)))),
        PositionInterpolator(DEF='ButtonMover',key=[0,1],keyValue=[(0,.25,0),(0,.05,0)]),
        TimeSensor(DEF='ButtonTimer',stopTime=1),
        ROUTE(fromField='touchTime',fromNode='ButtonTouch',toField='startTime',toNode='ButtonTimer'),
        ROUTE(fromField='fraction_changed',fromNode='ButtonTimer',toField='set_fraction',toNode='ButtonMover'),
        ROUTE(fromField='value_changed',fromNode='ButtonMover',toField='translation',toNode='ControlButton')])]),
    Transform(DEF='Lamp',translation=(1,0,0),
      children=[
      Transform(DEF='Base',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=.5,radius=.25))]),
      Transform(DEF='Bulb',translation=(0,.5,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='lightBulb',diffuseColor=(.4,.4,.4))),
          geometry=Sphere(radius=.5))])]),
    Script(DEF='ControlScript',url=["ScriptControlEvents.js","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter09EventUtilitiesScripting/ScriptControlEvents.js"],
      field=[
      field(accessType='inputOnly',name='buttonMotionDone',type='SFBool'),
      field(accessType='outputOnly',name='motion',type='MFVec3f'),
      field(accessType='initializeOnly',name='buttonDown',type='SFBool',value=True),
      field(accessType='outputOnly',name='lightColor',type='SFColor')]),
    ROUTE(fromField='isActive',fromNode='ButtonTimer',toField='buttonMotionDone',toNode='ControlScript'),
    ROUTE(fromField='motion',fromNode='ControlScript',toField='keyValue',toNode='ButtonMover'),
    ROUTE(fromField='lightColor',fromNode='ControlScript',toField='diffuseColor',toNode='lightBulb')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ScriptControlEvents.py")
