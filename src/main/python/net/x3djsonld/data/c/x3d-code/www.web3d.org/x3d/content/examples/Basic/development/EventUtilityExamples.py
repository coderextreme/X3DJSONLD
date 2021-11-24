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
    meta(content='EventUtilityExamples.x3d',name='title'),
    meta(content='Event utility node examples for boolean filtering and other event utility nodes.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='3 November 2002',name='created'),
    meta(content='20 January 2020',name='modified'),
    meta(content='BooleanFilter BooleanToggle BooleanTrigger IntegerTrigger TimeTrigger',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityExamples.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ======================================== 
    #  ExternProtoDeclare definitions are used here only for language development - do not copy into other scenes! 
    #  ExternProtoDeclare node support is provided either by X3D-compliant browser or X3dToVrml97.xslt ExternProtoDeclare definitions. 
    #  ======================================== 
    children=[
    WorldInfo(title='EventUtilityExamples.x3d'),
    ExternProtoDeclare(appinfo='BooleanFilter selectively passes true false or negated events.',name='BooleanFilter',url=["EventUtilityPrototypes.x3d#BooleanFilter","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#BooleanFilter","EventUtilityPrototypes.wrl#BooleanFilter","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#BooleanFilter"],
      field=[
      field(accessType='inputOnly',appinfo='set_boolean is the input value to be filtered.',name='set_boolean',type='SFBool'),
      field(accessType='outputOnly',appinfo='inputTrue only passes a true value when set_boolean input is true.',name='inputTrue',type='SFBool'),
      field(accessType='outputOnly',appinfo='inputFalse only passes a false value when set_boolean is false.',name='inputFalse',type='SFBool'),
      field(accessType='outputOnly',appinfo='inputNegate provides opposite value by negating set_boolean input.',name='inputNegate',type='SFBool')]),
    #  ======================================== 
    ExternProtoDeclare(appinfo='BooleanToggle maintains state and negates output when a true input is provided.',name='BooleanToggle',url=["EventUtilityPrototypes.x3d#BooleanToggle","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#BooleanToggle","EventUtilityPrototypes.wrl#BooleanToggle","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#BooleanToggle"],
      field=[
      field(accessType='inputOnly',appinfo='If set_boolean input is true toggle state.',name='set_boolean',type='SFBool'),
      field(accessType='inputOnly',appinfo='Reset persistent state value.',name='set_toggle',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Persistent state value that gets toggled or reset.',name='toggle',type='SFBool'),
      field(accessType='outputOnly',appinfo='Output toggled persistent state value.',name='toggle_changed',type='SFBool')]
      #  warning: toggle depends on exposedField functionality in Script node, not compatible with VRML 97. implemented as inputOnly/initializeOnly/outputOnly triplet. 
      ),
    #  ======================================== 
    ExternProtoDeclare(appinfo='BooleanTrigger converts time events to boolean true events.',name='BooleanTrigger',url=["EventUtilityPrototypes.x3d#BooleanTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#BooleanTrigger","EventUtilityPrototypes.wrl#BooleanTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#BooleanTrigger"],
      field=[
      field(accessType='inputOnly',appinfo='set_triggerTime provides input time event typical event sent is TouchSensor touchTime.',name='set_triggerTime',type='SFTime'),
      field(accessType='outputOnly',appinfo='triggerTrue outputs a true value whenever a triggerTime event is received.',name='triggerTrue',type='SFBool')]),
    #  ======================================== 
    ExternProtoDeclare(appinfo='IntegerTrigger converts boolean true or time input events to integer value (suitable for Switch node).',name='IntegerTrigger',url=["EventUtilityPrototypes.x3d#IntegerTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#IntegerTrigger","EventUtilityPrototypes.wrl#IntegerTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#IntegerTrigger"],
      field=[
      field(accessType='inputOnly',appinfo='If set_boolean input is true trigger output of integer value.',name='set_boolean',type='SFBool'),
      field(accessType='inputOnly',appinfo='Resets value used for output when triggered later.',name='set_integerKey',type='SFInt32'),
      field(accessType='inputOutput',appinfo='integerKey is value for output when triggered.',name='integerKey',type='SFInt32'),
      field(accessType='outputOnly',appinfo='Reports change in integerKey value.',name='integerKey_changed',type='SFInt32'),
      field(accessType='outputOnly',appinfo='triggerValue provides integer event output matching integerKey when true set_boolean received.',name='triggerValue',type='SFInt32')]),
    #  ======================================== 
    ExternProtoDeclare(appinfo='TimeTrigger converts boolean true events to time events.',name='TimeTrigger',url=["EventUtilityPrototypes.x3d#TimeTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d#TimeTrigger","EventUtilityPrototypes.wrl#TimeTrigger","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.wrl#TimeTrigger"],
      field=[
      field(accessType='inputOnly',appinfo='If set_boolean input is true trigger output time value.',name='set_boolean',type='SFBool'),
      field(accessType='outputOnly',appinfo='triggerTime is output time event sent when set_boolean input is true.',name='triggerTime',type='SFTime')]),
    #  ======================================== 
    Group(
      children=[
      Transform(translation=(0,3,0),
        children=[
        Anchor(description='Click for BooleanFilter example',parameter=["target=_blank"],url=["../../Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","../../Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl"],
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.6,0.6,0.2))),
            geometry=Text(string=["BooleanFilter example"],
              fontStyle=FontStyle(DEF='TextFont',justify=["MIDDLE","MIDDLE"],size=0.8,style_='BOLD')))])]),
      Transform(translation=(0,1.5,0),
        children=[
        Anchor(description='Click for BooleanToggle example',parameter=["target=_blank"],url=["../../Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","../../Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl"],
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.6,0.6,0.2))),
            geometry=Text(string=["BooleanToggle example"],
              fontStyle=FontStyle(USE='TextFont')))])]),
      Transform(
        children=[
        Anchor(description='Click for BooleanTrigger example',parameter=["target=_blank"],url=["../../Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.x3d","../../Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairExample.wrl"],
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.6,0.6,0.2))),
            geometry=Text(string=["BooleanTrigger example"],
              fontStyle=FontStyle(USE='TextFont')))])]),
      Transform(translation=(0,-1.5,0),
        children=[
        Anchor(description='Click for IntegerTrigger example',parameter=["target=_blank"],url=["../../Savage/Tools/Animation/MaterialChoiceExample.x3d","https://savage.nps.edu/Savage/Tools/Animation/MaterialChoiceExample.x3d","../../Savage/Tools/Animation/MaterialChoiceExample.wrl","https://savage.nps.edu/Savage/Tools/Animation/MaterialChoiceExample.wrl"],
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.6,0.6,0.2))),
            geometry=Text(string=["IntegerTrigger example"],
              fontStyle=FontStyle(USE='TextFont')))])]),
      Transform(DEF='TimeTriggerTransform',translation=(0,-3,0),
        children=[
        TouchSensor(DEF='TimeTriggerTouchSensor',description='Click forTimeTrigger example'),
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.6,0.6,0.2))),
          geometry=Text(string=["TimeTrigger example"],
            fontStyle=FontStyle(USE='TextFont')))]),
      TimeTrigger(DEF='TimeTriggerNode'),
      TimeSensor(DEF='TimeTriggerTimeSensor',cycleInterval=2),
      OrientationInterpolator(DEF='TimeTriggerOrientationInterpolator',key=[0,0.5,1],keyValue=[(0,1,0,0),(0,1,0,3.14159),(0,1,0,6.2432)]),
      ROUTE(fromField='isActive',fromNode='TimeTriggerTouchSensor',toField='set_boolean',toNode='TimeTriggerNode'),
      ROUTE(fromField='triggerTime',fromNode='TimeTriggerNode',toField='startTime',toNode='TimeTriggerTimeSensor'),
      ROUTE(fromField='fraction_changed',fromNode='TimeTriggerTimeSensor',toField='set_fraction',toNode='TimeTriggerOrientationInterpolator'),
      ROUTE(fromField='value_changed',fromNode='TimeTriggerOrientationInterpolator',toField='set_rotation',toNode='TimeTriggerTransform')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for EventUtilityExamples.py")
