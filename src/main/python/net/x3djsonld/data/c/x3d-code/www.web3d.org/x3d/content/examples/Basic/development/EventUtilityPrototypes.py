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
    meta(content='EventUtilityPrototypes.x3d',name='title'),
    meta(content='Event utility node prototypes for boolean filtering and other event utility nodes.',name='description'),
    meta(content='Nick Polys, Tony Parisi, Don Brutzman, Justin Couch',name='creator'),
    meta(content='25 September 2002',name='created'),
    meta(content='20 January 2020',name='modified'),
    meta(content='Under development, IntegerTrigger example needed.',name='warning'),
    meta(content='EventUtilityExamples.x3d',name='reference'),
    meta(content='BooleanFilter BooleanToggle BooleanTrigger IntegerTrigger TimeTrigger',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='EventUtilityPrototypes.x3d'),
    ProtoDeclare(appinfo='BooleanFilter selectively passes true false or negated events.',name='BooleanFilter',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='set_boolean is the input value to be filtered.',name='set_boolean',type='SFBool'),
        field(accessType='outputOnly',appinfo='inputTrue only passes a true value when set_boolean input is true.',name='inputTrue',type='SFBool'),
        field(accessType='outputOnly',appinfo='inputFalse only passes a false value when set_boolean is false.',name='inputFalse',type='SFBool'),
        field(accessType='outputOnly',appinfo='inputNegate provides opposite value by negating set_boolean input.',name='inputNegate',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='BooleanFilterScript',
          field=[
          field(accessType='inputOnly',name='set_boolean',type='SFBool'),
          field(accessType='outputOnly',name='inputTrue',type='SFBool'),
          field(accessType='outputOnly',name='inputFalse',type='SFBool'),
          field(accessType='outputOnly',name='inputNegate',type='SFBool')],
          IS=IS(
            connect=[
            connect(nodeField='set_boolean',protoField='set_boolean'),
            connect(nodeField='inputTrue',protoField='inputTrue'),
            connect(nodeField='inputFalse',protoField='inputFalse'),
            connect(nodeField='inputNegate',protoField='inputNegate')]))])),
    #  ======================================== 
    ProtoDeclare(appinfo='BooleanToggle maintains state and negates output when a true input is provided.',name='BooleanToggle',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='If set_boolean input is true toggle state.',name='set_boolean',type='SFBool'),
        field(accessType='inputOnly',appinfo='Reset persistent state value.',name='set_toggle',type='SFBool'),
        field(accessType='initializeOnly',appinfo='Persistent state value that gets toggled or reset.',name='toggle',type='SFBool',value=False),
        field(accessType='outputOnly',appinfo='Output toggled persistent state value.',name='toggle_changed',type='SFBool')]
        #  warning: toggle depends on exposedField functionality in Script node, not compatible with VRML 97. implemented as inputOnly/initializeOnly/outputOnly triplet. 
        ),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Script(DEF='BooleanToggleScript',
            field=[
            field(accessType='inputOnly',name='set_boolean',type='SFBool'),
            field(accessType='inputOnly',name='set_toggle',type='SFBool'),
            field(accessType='initializeOnly',name='toggle',type='SFBool',value=False),
            field(accessType='outputOnly',name='toggle_changed',type='SFBool'),
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool',value=False)],
            IS=IS(
              connect=[
              connect(nodeField='set_boolean',protoField='set_boolean'),
              connect(nodeField='set_toggle',protoField='set_toggle'),
              connect(nodeField='toggle_changed',protoField='toggle_changed')]))])])),
    #  ======================================== 
    ProtoDeclare(appinfo='BooleanTrigger converts time events to boolean true events.',name='BooleanTrigger',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='set_triggerTime provides input time event typical event sent is TouchSensor touchTime.',name='set_triggerTime',type='SFTime'),
        field(accessType='outputOnly',appinfo='triggerTrue outputs a true value whenever a triggerTime event is received.',name='triggerTrue',type='SFBool')]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='TriggerBooleanScript',
          field=[
          field(accessType='inputOnly',name='set_triggerTime',type='SFTime'),
          field(accessType='outputOnly',name='triggerTrue',type='SFBool')],
          IS=IS(
            connect=[
            connect(nodeField='set_triggerTime',protoField='set_triggerTime'),
            connect(nodeField='triggerTrue',protoField='triggerTrue')]))])),
    #  ======================================== 
    ProtoDeclare(appinfo='IntegerTrigger converts boolean true or time input events to integer value (suitable for Switch node).',name='IntegerTrigger',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='If set_boolean input is true trigger output of integer value.',name='set_boolean',type='SFBool'),
        field(accessType='inputOnly',appinfo='Resets value used for output when triggered later.',name='set_integerKey',type='SFInt32'),
        field(accessType='inputOutput',appinfo='integerKey is value for output when triggered.',name='integerKey',type='SFInt32',value=-1),
        field(accessType='outputOnly',appinfo='Reports change in integerKey value.',name='integerKey_changed',type='SFInt32'),
        field(accessType='outputOnly',appinfo='triggerValue provides integer event output matching integerKey when true set_boolean received.',name='triggerValue',type='SFInt32')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Switch(DEF='IntegerKeyHolder',whichChoice=-1,
            IS=IS(
              connect=[
              connect(nodeField='whichChoice',protoField='integerKey')])),
          Script(DEF='TriggerIntegerScript',directOutput=True,
            field=[
            field(accessType='inputOnly',name='set_boolean',type='SFBool'),
            field(accessType='inputOnly',name='set_integerKey',type='SFInt32'),
            field(accessType='initializeOnly',name='integerKeyHolderNode',type='SFNode',
              children=[
              Switch(USE='IntegerKeyHolder',whichChoice=-1)]),
            field(accessType='outputOnly',name='integerKey_changed',type='SFInt32'),
            field(accessType='outputOnly',name='triggerValue',type='SFInt32')],
            IS=IS(
              connect=[
              connect(nodeField='set_boolean',protoField='set_boolean'),
              connect(nodeField='set_integerKey',protoField='set_integerKey'),
              connect(nodeField='integerKey_changed',protoField='integerKey_changed'),
              connect(nodeField='triggerValue',protoField='triggerValue')]))])])),
    #  ======================================== 
    ProtoDeclare(appinfo='TimeTrigger converts boolean true events to time events.',name='TimeTrigger',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOnly',appinfo='If set_boolean input is true trigger output time value.',name='set_boolean',type='SFBool'),
        field(accessType='outputOnly',appinfo='triggerTime is output time event sent when set_boolean input is true.',name='triggerTime',type='SFTime')]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='TriggerTimeScript',
          field=[
          field(accessType='inputOnly',name='set_boolean',type='SFBool'),
          field(accessType='outputOnly',name='triggerTime',type='SFTime')],
          IS=IS(
            connect=[
            connect(nodeField='set_boolean',protoField='set_boolean'),
            connect(nodeField='triggerTime',protoField='triggerTime')]))])),
    #  ======================================== 
    Anchor(description='EventUtilityExamples',parameter=["target=_blank"],url=["EventUtilityExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityExamples.x3d","EventUtilityExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/EventUtilityExamples.wrl"],
      children=[
      Shape(
        geometry=Text(string=["EventUtilityPrototype","defines prototypes","","Click text to see","EventUtilityExamples"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.9)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0.2))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for EventUtilityPrototypes.py")
