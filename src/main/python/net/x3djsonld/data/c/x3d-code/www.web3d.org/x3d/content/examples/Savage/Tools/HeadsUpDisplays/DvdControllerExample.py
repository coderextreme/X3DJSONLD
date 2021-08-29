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
    meta(content='DvdControllerExample.x3d',name='title'),
    meta(content="Digital Virtual Display (DVD) Controller interface example to control a scenario's animation timing, defined using an ExternProtoDeclare for easy reuse.",name='description'),
    meta(content='Jane Wu, Don Brutzman',name='creator'),
    meta(content='10 November 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='DvdController animation control',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/DvdControllerExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Digital Virtual Display (DVD) Controller Prototype is a heads=up display (HUD) to control animation timing',name='DvdController',url=["DvdControllerPrototype.x3d#DvdController","../../../Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.x3d#DvdController","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.x3d#DvdController","DvdControllerPrototype.wrl#DvdController","../../../Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.wrl#DvdController","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.wrl#DvdController"],
      field=[
      field(accessType='initializeOnly',appinfo='Short description of what is animated by this DvdController.',name='description',type='SFString'),
      field(accessType='initializeOnly',appinfo='Whether or not play mode is enabled including during startup.',name='playEnabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Initializes how control buttons and slider are displayed. The control buttons include DIS control (i.e. Master Ghost Local) and Playback control (i.e. Reset to Start Fast Rewind Rewind Pause Play Fast Forward Reset to End). Possible values are (case sensitive): ALL DIS_ONLY PLAYBACK_ONLY SLIDER_ONLY DIS_PLAYBACK DIS_SLIDER PLAYBACK_SLIDER and NONE.',name='displayMode',type='SFString'),
      field(accessType='inputOnly',appinfo='Sets how control buttons and slider are displayed. The control buttons include DIS control (i.e. Master Ghost Local) and Playback control (i.e. Reset to Start Fast Rewind Rewind Pause Play Fast Forward Reset to End). Possible values are (case sensitive): ALL DIS_ONLY PLAYBACK_ONLY SLIDER_ONLY DIS_PLAYBACK DIS_SLIDER PLAYBACK_SLIDER and NONE.',name='setDisplayMode',type='SFString'),
      field(accessType='initializeOnly',appinfo='Default button color.',name='buttonColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='Button color when selected by user.',name='selectedButtonColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='Default label color.',name='labelColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='Label color when selected by user.',name='selectedLabelColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='Modified screen location and distance (for size).',name='locationOffset',type='SFVec3f'),
      field(accessType='initializeOnly',name='clockEnabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Time for complete loop cycle in seconds.',name='cycleInterval',type='SFTime'),
      field(accessType='inputOnly',name='set_cycleInterval',type='SFTime'),
      field(accessType='outputOnly',name='cycleInterval_changed',type='SFTime'),
      field(accessType='initializeOnly',appinfo='Factor used to determine the speed increase/decrease for Fast Rewind and Fast Forward action.',name='speedFactor',type='SFFloat'),
      field(accessType='outputOnly',name='isActive',type='SFBool'),
      field(accessType='outputOnly',name='startTime_changed',type='SFTime'),
      field(accessType='outputOnly',name='stopTime_changed',type='SFTime'),
      field(accessType='outputOnly',name='time_changed',type='SFTime'),
      field(accessType='outputOnly',name='fraction_changed',type='SFFloat'),
      field(accessType='outputOnly',name='secondsElapsed',type='SFTime'),
      field(accessType='outputOnly',appinfo='isMaster isRemote and isLocal are booleans represent a 3-way toggle. Only one of them can have a true value at any time.',name='isMaster',type='SFBool'),
      field(accessType='outputOnly',appinfo='isMaster isRemote and isLocal are booleans represent a 3-way toggle. Only one of them can have a true value at any time.',name='isRemote',type='SFBool'),
      field(accessType='outputOnly',appinfo='isMaster isRemote and isLocal are booleans represent a 3-way toggle. Only one of them can have a true value at any time.',name='isLocal',type='SFBool'),
      field(accessType='outputOnly',appinfo='isPaused and isRunning always have opposite values. When isPaused is true isRunning will be false and vice versa.',name='isPaused',type='SFBool'),
      field(accessType='outputOnly',appinfo='isPaused and isRunning always have opposite values. When isPaused is true isRunning will be false and vice versa.',name='isRunning',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Enable/disable console output for troubleshooting.',name='traceEnabled',type='SFBool'),
      field(accessType='initializeOnly',name='testTimeVal',type='SFTime')]),
    ExternProtoDeclare(appinfo='SingleTypeConversion converts from a single typed value to various other types of values',name='SingleTypeConversion',url=["../../../Savage/Tools/Authoring/SingleTypeConversionPrototype.x3d#SingleTypeConversion","https://savage.nps.edu/Savage/Tools/Authoring/SingleTypeConversionPrototype.x3d#SingleTypeConversion","../../../Savage/Tools/Authoring/SingleTypeConversionPrototype.wrl#SingleTypeConversion","https://savage.nps.edu/Savage/Tools/Authoring/SingleTypeConversionPrototype.wrl#SingleTypeConversion"],
      field=[
      field(accessType='initializeOnly',appinfo='decimalPlaces is the number of significant digits after the decimal point. The -1 value indicates no round off.',name='decimalPlaces',type='SFInt32'),
      field(accessType='inputOnly',name='setDecimalPlaces',type='SFInt32'),
      field(accessType='inputOnly',name='BooleanValue',type='SFBool'),
      field(accessType='inputOnly',name='FloatValue',type='SFFloat'),
      field(accessType='inputOnly',name='IntegerValue',type='SFInt32'),
      field(accessType='inputOnly',name='TimeValue',type='SFTime'),
      field(accessType='outputOnly',name='BooleanResult',type='SFBool'),
      field(accessType='outputOnly',name='FloatResult',type='SFFloat'),
      field(accessType='outputOnly',name='IntegerResult',type='SFInt32'),
      field(accessType='outputOnly',name='TimeResult',type='SFTime'),
      field(accessType='outputOnly',name='StringResult',type='SFString'),
      field(accessType='outputOnly',name='StringsResult',type='MFString')]),
    #  ============================== 
    Transform(
      children=[
      ProtoInstance(DEF='DvdControllerInterface',name='DvdController',
        fieldValue=[
        fieldValue(name='displayMode',value='PLAYBACK_SLIDER'),
        fieldValue(name='playEnabled',value=True),
        fieldValue(name='buttonColor',value=(0.655,0.655,0.655)),
        fieldValue(name='selectedButtonColor',value=(0.675,0.675,0.675)),
        fieldValue(name='selectedLabelColor',value=(0.9,0,0)),
        fieldValue(name='locationOffset',value=(-5,-2,0)),
        fieldValue(name='cycleInterval',value=10),
        fieldValue(name='speedFactor',value=10.0),
        fieldValue(name='traceEnabled',value=True)])]),
    Transform(translation=(-3,0,0),
      children=[
      Transform(translation=(-5,3,-5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Text(string=["fraction_changed:"]))]),
      Transform(translation=(2,3,-5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Text(DEF='FractionText',string=["N/A"]))]),
      Transform(translation=(-5,2,-5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Text(string=["secondsElapsed:"]))]),
      Transform(translation=(2,2,-5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Text(DEF='SecondsElapsedText',string=["N/A"]))]),
      Transform(translation=(-5,1,-5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Text(DEF='actual_time_changed',string=["local clock time:"]))]),
      Transform(translation=(2,1,-5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Text(DEF='TimeText',string=["N/A"]))])]),
    Script(DEF='TimeTextScript',
      field=[
      field(accessType='initializeOnly',name='time',type='SFTime',value=-1),
      field(accessType='inputOnly',name='setCurrentTime',type='SFTime'),
      field(accessType='outputOnly',name='timeText',type='MFString')]),
    ROUTE(fromField='time_changed',fromNode='DvdControllerInterface',toField='setCurrentTime',toNode='TimeTextScript'),
    ROUTE(fromField='timeText',fromNode='TimeTextScript',toField='set_string',toNode='TimeText'),
    ProtoInstance(DEF='FractionConverter',name='SingleTypeConversion',
      fieldValue=[
      fieldValue(name='decimalPlaces',value=2)]),
    ROUTE(fromField='fraction_changed',fromNode='DvdControllerInterface',toField='FloatValue',toNode='FractionConverter'),
    ROUTE(fromField='StringsResult',fromNode='FractionConverter',toField='set_string',toNode='FractionText'),
    ProtoInstance(DEF='SecondsConverter',name='SingleTypeConversion',
      fieldValue=[
      fieldValue(name='decimalPlaces',value=2)]),
    ROUTE(fromField='secondsElapsed',fromNode='DvdControllerInterface',toField='TimeValue',toNode='SecondsConverter'),
    ROUTE(fromField='StringsResult',fromNode='SecondsConverter',toField='set_string',toNode='SecondsElapsedText')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DvdControllerExample.py")
