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
    meta(content='TimeSensorChaining.x3d',name='title'),
    meta(content='Connecting TimeSensor nodes so that the completion of one behavior chain triggers another.',name='description'),
    meta(content='Don Brutzman and MV3204 class',name='creator'),
    meta(content='2 September 2009',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='under development',name='warning'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter07EventAnimationInterpolation/TimeSensorChaining.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TimeSensorChaining.x3d'),
    Viewpoint(description='TimeSensor chaining example',position=(0,1,6)),
    Transform(DEF='DoorHingeTransform',center=(-0.65,0,0),translation=(0,1,0),
      children=[
      TouchSensor(DEF='UserClick',description='click to operate door'),
      Shape(
        geometry=Box(size=(1.3,2.5,0.08)),
        appearance=Appearance(
          material=Material(DEF='DoorColor',diffuseColor=(1,0,0))))]),
    Transform(scale=(0.6,0.6,0.6),translation=(0,-1,0),
      children=[
      Switch(DEF='TextSwitcher',whichChoice=0,
        children=[
        Group(
          children=[
          Shape(
            geometry=Text(string=["Door is closed"],
              fontStyle=FontStyle(DEF='MiddleJustify',justify=["MIDDLE","MIDDLE"])),
            appearance=Appearance(DEF='TextAppearance',
              material=Material(),))]),
        Group(
          children=[
          Shape(
            geometry=Text(string=["Door in motion..."],
              fontStyle=FontStyle(USE='MiddleJustify')),
            appearance=Appearance(USE='TextAppearance'))]),
        Group(
          children=[
          Shape(
            geometry=Text(string=["Door is open"],
              fontStyle=FontStyle(USE='MiddleJustify')),
            appearance=Appearance(USE='TextAppearance'))])])]),
    #  ===== open the door ===== 
    TimeSensor(DEF='ClockNumber1',cycleInterval=2),
    ROUTE(fromField='touchTime',fromNode='UserClick',toField='startTime',toNode='ClockNumber1'),
    OrientationInterpolator(DEF='DoorOpener',key=[0,0.5,1],keyValue=[(0,1,0,0),(0,1,0,4.7124),(0,1,0,3)]),
    ROUTE(fromField='fraction_changed',fromNode='ClockNumber1',toField='set_fraction',toNode='DoorOpener'),
    ROUTE(fromField='value_changed',fromNode='DoorOpener',toField='rotation',toNode='DoorHingeTransform'),
    IntegerTrigger(DEF='SetTextInMotion',integerKey=1),
    ROUTE(fromField='isActive',fromNode='UserClick',toField='set_boolean',toNode='SetTextInMotion'),
    ROUTE(fromField='triggerValue',fromNode='SetTextInMotion',toField='whichChoice',toNode='TextSwitcher'),
    #  ===== door is now open ===== 
    BooleanFilter(DEF='DoorOpenComplete'),
    ROUTE(fromField='isActive',fromNode='ClockNumber1',toField='set_boolean',toNode='DoorOpenComplete'),
    #  disable ClockNumber1 by turning itself off when complete 
    ROUTE(fromField='isActive',fromNode='ClockNumber1',toField='enabled',toNode='ClockNumber1'),
    TimeTrigger(DEF='TriggerOpeningAnimation'),
    ROUTE(fromField='inputFalse',fromNode='DoorOpenComplete',toField='set_boolean',toNode='TriggerOpeningAnimation'),
    TimeSensor(DEF='ClockNumber2',cycleInterval=0.5),
    ROUTE(fromField='triggerTime',fromNode='TriggerOpeningAnimation',toField='startTime',toNode='ClockNumber2'),
    IntegerTrigger(DEF='SetTextOpen',integerKey=2),
    ROUTE(fromField='inputFalse',fromNode='DoorOpenComplete',toField='set_boolean',toNode='SetTextOpen'),
    ROUTE(fromField='triggerValue',fromNode='SetTextOpen',toField='whichChoice',toNode='TextSwitcher'),
    ColorInterpolator(DEF='DoorColorInterpolator',key=[0,0.5,1],keyValue=[(1,0,0),(0.1,0.1,0.1),(0.203922,0.701961,0)]),
    ROUTE(fromField='fraction_changed',fromNode='ClockNumber2',toField='set_fraction',toNode='DoorColorInterpolator'),
    ROUTE(fromField='value_changed',fromNode='DoorColorInterpolator',toField='diffuseColor',toNode='DoorColor'),
    #  ===== shut the door ===== 
    TimeSensor(DEF='ClockNumber3',cycleInterval=2,enabled=False),
    ROUTE(fromField='touchTime',fromNode='UserClick',toField='startTime',toNode='ClockNumber3'),
    #  enable ClockNumber3 once door is fully open 
    ROUTE(fromField='inputFalse',fromNode='DoorOpenComplete',toField='enabled',toNode='ClockNumber3'),
    #  disable ClockNumber3 by turning itself off when complete 
    ROUTE(fromField='isActive',fromNode='ClockNumber3',toField='enabled',toNode='ClockNumber3'),
    ScalarInterpolator(DEF='ClockReversal',key=[0,1],keyValue=[1,0]),
    ROUTE(fromField='fraction_changed',fromNode='ClockNumber3',toField='set_fraction',toNode='ClockReversal'),
    ROUTE(fromField='value_changed',fromNode='ClockReversal',toField='set_fraction',toNode='DoorOpener'),
    ROUTE(fromField='value_changed',fromNode='ClockReversal',toField='set_fraction',toNode='DoorColorInterpolator'),
    #  enable ClockNumber1 when door is fully shut 
    BooleanTrigger(DEF='Clock3CompleteTrigger'),
    ROUTE(fromField='stopTime',fromNode='ClockNumber3',toField='set_triggerTime',toNode='Clock3CompleteTrigger'),
    IntegerTrigger(DEF='SetTextShut',integerKey=0),
    ROUTE(fromField='triggerTrue',fromNode='Clock3CompleteTrigger',toField='set_boolean',toNode='SetTextShut'),
    ROUTE(fromField='triggerValue',fromNode='SetTextShut',toField='whichChoice',toNode='TextSwitcher')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TimeSensorChaining.py")
