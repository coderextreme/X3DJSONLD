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
    meta(content='PushButtonPrototype.x3d',name='title'),
    meta(content='PushButton widget prototype declaration, inner button and outer shape can be round or square',name='description'),
    meta(content='Don Brutzman, Murat Onder and MV4205 class, Spring 2004 Quarter',name='creator'),
    meta(content='11 May 2004',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='PushButtonExample.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/PushButtonPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Material Toggle Prototype is being used to be able to provide the color toggle. 
    children=[
    ExternProtoDeclare(appinfo='MaterialToggle selects one of two different Material values',name='MaterialToggle',url=["MaterialTogglePrototype.x3d#MaterialToggle","../../Tools/Animation/MaterialTogglePrototype.x3d#MaterialToggle","https://savage.nps.edu/Savage/Tools/Animation/MaterialTogglePrototype.x3d#MaterialToggle","../../Tools/Animation/MaterialTogglePrototype.wrl#MaterialToggle","MaterialTogglePrototype.wrl#MaterialToggle","https://savage.nps.edu/Savage/Tools/Animation/MaterialTogglePrototype.wrl#MaterialToggle"],
      field=[
      field(accessType='initializeOnly',appinfo='Material node that is enabled when toggle=false',name='defaultMaterial',type='SFNode'),
      field(accessType='initializeOnly',appinfo='Material node that is enabled when toggle=true',name='toggleMaterial',type='SFNode'),
      field(accessType='inputOnly',name='set_toggle',type='SFBool'),
      field(accessType='inputOnly',appinfo='provide replacement default Material node',name='set_defaultMaterial',type='SFNode'),
      field(accessType='initializeOnly',appinfo='whether to use DefaultMaterial or ToggleMaterial',name='toggle',type='SFBool'),
      field(accessType='outputOnly',name='toggle_changed',type='SFBool'),
      field(accessType='inputOnly',appinfo='provide replacement toggle Material node',name='set_toggleMaterial',type='SFNode')]),
    #  TimeDelaySensor is being used to provide the time delay for button's color change delay 
    ExternProtoDeclare(appinfo='TimeSensor functionality commences after delayInterval pause',name='TimeDelaySensor',url=["TimeDelaySensorPrototype.x3d#TimeDelaySensor","../../Tools/Animation/TimeDelaySensorPrototype.x3d#TimeDelaySensor","https://savage.nps.edu/Savage/Tools/Animation/TimeDelaySensorPrototype.x3d#TimeDelaySensor","../../Tools/Animation/TimeDelaySensorPrototype.wrl#TimeDelaySensor","TimeDelaySensorPrototype.wrl#TimeDelaySensor","https://savage.nps.edu/Savage/Tools/Animation/TimeDelaySensorPrototype.wrl#TimeDelaySensor"],
      field=[
      field(accessType='inputOutput',appinfo='when current time exceeds startTime, isActive becomes true and sensor becomes active',name='startTime',type='SFTime'),
      field(accessType='inputOutput',appinfo='seconds',name='delayInterval',type='SFTime'),
      field(accessType='outputOnly',name='delayCompleteTime',type='SFTime'),
      field(accessType='inputOutput',appinfo='whether sensor is active',name='enabled',type='SFBool'),
      field(accessType='inputOutput',appinfo='describe the purpose of this sensor',name='description',type='SFString'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool')]),
    #  PushButton Prototype definition starts here.. 
    ProtoDeclare(appinfo='PushButton widget, inner button and outer shape can be round or square',name='PushButton',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='enables the console print-out in case of assigning wrong values default is true',name='traceEnabled',type='SFBool',value=True),
        field(accessType='initializeOnly',name='outerShapeMaterial',type='SFNode',
          children=[
          Material(DEF='Blue',diffuseColor=(0,0,1))]),
        field(accessType='initializeOnly',appinfo='defaultMaterial for inner pushbutton',name='defaultMaterial',type='SFNode',
          children=[
          Material(DEF='Red',diffuseColor=(0.8,0.1,0))]),
        field(accessType='initializeOnly',appinfo='toggleMaterial for inner pushbutton',name='toggleMaterial',type='SFNode',
          children=[
          Material(DEF='Green',diffuseColor=(0.1,0.8,0))]),
        field(accessType='outputOnly',appinfo='boolean output of button selection',name='value_changed',type='SFBool'),
        #  switch values for combination of the button, default: round-round 
        field(accessType='initializeOnly',appinfo='allowed values: round or square default is round',name='outerSwitchStyle',type='SFString',value='round'),
        field(accessType='inputOnly',appinfo='allowed values: round or square default is round',name='set_outerSwitchStyle',type='SFString'),
        field(accessType='initializeOnly',appinfo='allowed values: round square. default is round',name='innerSwitchStyle',type='SFString',value='round'),
        field(accessType='inputOnly',appinfo='allowed values: round square. default is round',name='set_innerSwitchStyle',type='SFString'),
        field(accessType='initializeOnly',appinfo='time delay for button movement so for color change default is 0.5 sec.',name='delayInterval',type='SFTime',value=.5)]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          ProtoInstance(DEF='DelayTimer',name='TimeDelaySensor',
            IS=IS(
              connect=[
              connect(nodeField='delayInterval',protoField='delayInterval')])),
          Transform(DEF='OuterShapeTransform',rotation=(1,0,0,1.57),
            children=[
            Switch(DEF='OuterShapeSwitchRound',whichChoice=-1,
              children=[
              Shape(
                geometry=Cylinder(height=.12,radius=.5),
                appearance=Appearance(
                  IS=IS(
                    connect=[
                    connect(nodeField='material',protoField='outerShapeMaterial')])))]),
            Switch(DEF='OuterShapeSwitchSquare',whichChoice=-1,
              children=[
              Shape(
                geometry=Box(size=(1,.12,1)),
                appearance=Appearance(
                  IS=IS(
                    connect=[
                    connect(nodeField='material',protoField='outerShapeMaterial')])))])]),
          Transform(DEF='InnerShapeTransform',rotation=(1,0,0,1.57),translation=(0,0,.1),
            children=[
            Switch(DEF='InnerShapeSwitchRound',whichChoice=-1,
              children=[
              Shape(
                geometry=Cylinder(height=.12,radius=.35),
                appearance=Appearance(
                  material=ProtoInstance(DEF='PushButtonToggleMaterial',name='MaterialToggle',
                    IS=IS(
                      connect=[
                      connect(nodeField='defaultMaterial',protoField='defaultMaterial'),
                      connect(nodeField='toggleMaterial',protoField='toggleMaterial')]))))]),
            Switch(DEF='InnerShapeSwitchSquare',whichChoice=-1,
              children=[
              Shape(
                geometry=Box(size=(.57,.12,.57)),
                appearance=Appearance(
                  material=ProtoInstance(USE='PushButtonToggleMaterial')))]),
            Sound(
              source=AudioClip(DEF='ClickAudio',description='click sound',url=["click.wav","https://savage.nps.edu/Savage/Tools/Animation/click.wav"])),
            TouchSensor(DEF='Toucher',description='touch to push the button'),
            ROUTE(fromField='touchTime',fromNode='Toucher',toField='set_startTime',toNode='ClickAudio'),
            ROUTE(fromField='touchTime',fromNode='Toucher',toField='startTime',toNode='DelayTimer')]),
          Group(DEF='AnimationGroup',
            #  ============================= 
            children=[
            TimeSensor(DEF='Clock1'),
            ROUTE(fromField='touchTime',fromNode='Toucher',toField='set_startTime',toNode='Clock1'),
            #  ============================= 
            PositionInterpolator(DEF='SwitchAnimator1',key=[0,.5,1],keyValue=[(0,0,.1),(0,0,.05),(0,0,.007)]),
            ROUTE(fromField='fraction_changed',fromNode='Clock1',toField='set_fraction',toNode='SwitchAnimator1'),
            ROUTE(fromField='value_changed',fromNode='SwitchAnimator1',toField='set_translation',toNode='InnerShapeTransform'),
            #  ============================= 
            TimeSensor(DEF='Clock2'),
            ROUTE(fromField='delayCompleteTime',fromNode='DelayTimer',toField='set_startTime',toNode='Clock2'),
            #  ============================= 
            PositionInterpolator(DEF='SwitchAnimator2',key=[0,.5,1],keyValue=[(0,0,.007),(0,0,.05),(0,0,.1)]),
            ROUTE(fromField='fraction_changed',fromNode='Clock2',toField='set_fraction',toNode='SwitchAnimator2'),
            ROUTE(fromField='value_changed',fromNode='SwitchAnimator2',toField='set_translation',toNode='InnerShapeTransform'),
            #  ============================= 
            BooleanToggle(DEF='BooleanToggler',
              IS=IS(
                connect=[
                connect(nodeField='toggle_changed',protoField='value_changed')])),
            ROUTE(fromField='isActive',fromNode='Clock2',toField='set_boolean',toNode='BooleanToggler'),
            ROUTE(fromField='toggle_changed',fromNode='BooleanToggler',toField='set_toggle',toNode='PushButtonToggleMaterial')])]),
        #  Only first node in ProtoBody is rendered 
        Script(directOutput=True,
          field=[
          field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
          field(accessType='initializeOnly',name='delayInterval',type='SFTime'),
          field(accessType='initializeOnly',appinfo='allowed values: round square. default is round',name='outerSwitchStyle',type='SFString'),
          field(accessType='inputOnly',appinfo='allowed values: round square. default is round',name='set_outerSwitchStyle',type='SFString'),
          field(accessType='initializeOnly',appinfo='allowed values: round square. default is round',name='innerSwitchStyle',type='SFString'),
          field(accessType='inputOnly',appinfo='allowed values: round square. default is round',name='set_innerSwitchStyle',type='SFString'),
          field(accessType='initializeOnly',name='switchOuterRound',type='SFNode',
            children=[
            Switch(USE='OuterShapeSwitchRound',whichChoice=-1)]),
          field(accessType='initializeOnly',name='switchOuterSquare',type='SFNode',
            children=[
            Switch(USE='OuterShapeSwitchSquare',whichChoice=-1)]),
          field(accessType='initializeOnly',name='switchInnerRound',type='SFNode',
            children=[
            Switch(USE='InnerShapeSwitchRound',whichChoice=-1)]),
          field(accessType='initializeOnly',name='switchInnerSquare',type='SFNode',
            children=[
            Switch(USE='InnerShapeSwitchSquare',whichChoice=-1)]),
          field(accessType='initializeOnly',name='clock1',type='SFNode',
            children=[
            TimeSensor(USE='Clock1')]),
          field(accessType='initializeOnly',name='clock2',type='SFNode',
            children=[
            TimeSensor(USE='Clock2')])],
          IS=IS(
            connect=[
            connect(nodeField='traceEnabled',protoField='traceEnabled'),
            connect(nodeField='outerSwitchStyle',protoField='outerSwitchStyle'),
            connect(nodeField='set_outerSwitchStyle',protoField='set_outerSwitchStyle'),
            connect(nodeField='innerSwitchStyle',protoField='innerSwitchStyle'),
            connect(nodeField='set_innerSwitchStyle',protoField='set_innerSwitchStyle'),
            connect(nodeField='delayInterval',protoField='delayInterval')]))])),
    #  ==================== 
    Anchor(description='PushButtonExample',parameter=["target=_blank"],url=["PushButtonExample.x3d","../../Tools/Animation/PushButtonExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/PushButtonExample.x3d","../../Tools/Animation/PushButtonExample.wrl","PushButtonExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/PushButtonExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["PushButtonPrototype","defines a prototype","","Click text to see example scene","","You can define 4 different buttons","with the combination of round&square","(default is round-round)"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.7)),
        appearance=Appearance(
          material=Material(diffuseColor=(.8,.7,0.2))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PushButtonPrototype.py")
