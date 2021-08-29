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
    meta(content='DvdControllerPrototype.x3d',name='title'),
    meta(content='Digital Virtual Display (DVD) Controller Prototype definition to control animation timing. Heads-up display keeps DVD Controller on screen.',name='description'),
    meta(content='Jane Wu, Don Brutzman, Jonathan Roberts',name='creator'),
    meta(content='19 July 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='DvdController animation control',name='subject'),
    meta(content='check handling of beginning/end buttos',name='TODO'),
    meta(content='X3D-Edit ExternProtoDeclare panel autocheck missed notifying that some fields are not in original ProtoDeclare',name='TODO'),
    meta(content='https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Slider user-interface widget that produces floating-point output values',name='SliderFloat',url=["../../../Savage/Tools/Animation/SliderFloatPrototype.x3d#SliderFloat","https://savage.nps.edu/Savage/Tools/Animation/SliderFloatPrototype.x3d#SliderFloat","../../../Savage/Tools/Animation/SliderFloatPrototype.wrl#SliderFloat","https://savage.nps.edu/Savage/Tools/Animation/SliderFloatPrototype.wrl#SliderFloat"],
      #  TODO autocheck missed that these are not in original ProtoDeclare... do these go into DvdController interface? <field accessType='outputOnly' name='isDragged' type='SFBool'/> <field accessType='initializeOnly' appinfo='default value true' name='dragEnabled' type='SFBool'/> <field accessType='inputOnly' name='setDragEnabled' type='SFBool'/> <field accessType='outputOnly' name='dragEnabledChanged' type='SFBool'/> <field accessType='initializeOnly' appinfo='default value true' name='clickEnabled' type='SFBool'/> <field accessType='inputOnly' name='setClickEnabled' type='SFBool'/> <field accessType='outputOnly' name='clickEnabledChanged' type='SFBool'/> 
      field=[
      field(accessType='initializeOnly',appinfo='Allowed values: vertical, horizontal',name='layoutDirection',type='SFString'),
      field(accessType='initializeOnly',appinfo='default value 1.0',name='height',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='default value 0.1',name='radius',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='default value 0.02',name='barRadius',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='default value .8 .4 .8',name='sliderBarColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='default value .3 .4 .8',name='sliderBallColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='default value .2 .3 .9',name='sliderEndColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='default value 0.0',name='min',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='default value 10.0',name='max',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='default value 0.0',name='value',type='SFFloat'),
      field(accessType='inputOnly',name='setMin',type='SFFloat'),
      field(accessType='inputOnly',name='setMax',type='SFFloat'),
      field(accessType='inputOnly',name='setValue',type='SFFloat'),
      field(accessType='outputOnly',name='valueChanged',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='Enable/disable console output for troubleshooting',name='traceEnabled',type='SFBool')]),
    ProtoDeclare(appinfo='Digital Virtual Display (DVD) Controller Prototype is a heads-up display (HUD) to control animation timing',name='DvdController',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='default value -2',name='testTimeVal',type='SFTime',value=-2),
        field(accessType='initializeOnly',appinfo='Short description of what is animated by this DvdController.',name='description',type='SFString'),
        field(accessType='initializeOnly',appinfo='Whether or not play mode is enabled including during startup.',name='playEnabled',type='SFBool',value=False),
        field(accessType='initializeOnly',appinfo='Initializes how control buttons and slider are displayed. The control buttons include DIS control (i.e. Master Ghost Local) and Playback control (i.e. Reset to Start Fast Rewind Rewind Pause Play Fast Forward Reset to End). Possible values are (case sensitive): ALL DIS_ONLY PLAYBACK_ONLY SLIDER_ONLY DIS_PLAYBACK DIS_SLIDER PLAYBACK_SLIDER and NONE.',name='displayMode',type='SFString',value='PLAYBACK_SLIDER'),
        field(accessType='inputOnly',appinfo='Sets how control buttons and slider are displayed. The control buttons include DIS control (i.e. Master Ghost Local) and Playback control (i.e. Reset to Start Fast Rewind Rewind Pause Play Fast Forward Reset to End). Possible values are (case sensitive): ALL DIS_ONLY PLAYBACK_ONLY SLIDER_ONLY DIS_PLAYBACK DIS_SLIDER PLAYBACK_SLIDER and NONE.',name='setDisplayMode',type='SFString'),
        field(accessType='initializeOnly',appinfo='Default button color.',name='buttonColor',type='SFColor',value=(0.55,0.55,0.55)),
        field(accessType='initializeOnly',appinfo='Button color when selected by user.',name='selectedButtonColor',type='SFColor',value=(0.75,0.75,0.75)),
        field(accessType='initializeOnly',appinfo='Default label color.',name='labelColor',type='SFColor',value=(0,0,0)),
        field(accessType='initializeOnly',appinfo='Label color when selected by user.',name='selectedLabelColor',type='SFColor',value=(0.1,0.65,0.2)),
        field(accessType='initializeOnly',appinfo='Modified screen location and distance (for size).',name='locationOffset',type='SFVec3f',value=(-2,-2,0)),
        field(accessType='initializeOnly',appinfo='default value true',name='clockEnabled',type='SFBool',value=True),
        field(accessType='initializeOnly',appinfo='Time for complete loop cycle in seconds.',name='cycleInterval',type='SFTime',value=1.0),
        field(accessType='inputOnly',name='set_cycleInterval',type='SFTime'),
        field(accessType='outputOnly',name='cycleInterval_changed',type='SFTime'),
        field(accessType='initializeOnly',appinfo='Factor used to determine the speed increase/decrease for Fast Rewind and Fast Forward action.',name='speedFactor',type='SFFloat',value=10),
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
        field(accessType='initializeOnly',appinfo='Enable/disable console output for troubleshooting',name='traceEnabled',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='LocationOffset',
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='locationOffset')]),
          children=[
          ProximitySensor(DEF='WhereSensor',size=(1000000000,1000000000,1000000000)),
          Transform(DEF='FixedLocation',
            children=[
            Transform(DEF='MovableLocation',
              children=[
              Transform(translation=(0,0,-10),
                children=[
                Group(DEF='PlaneMovementSensorGroup',
                  children=[
                  PlaneSensor(DEF='PlaneMovementSensor',description='select and drag to move interface'),
                  VisibilitySensor(DEF='MovementVisibilitySensor'),
                  Script(DEF='VisibilityControlScript',
                    field=[
                    field(accessType='initializeOnly',name='description',type='SFString'),
                    field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
                    field(accessType='initializeOnly',name='isVisible',type='SFBool',value=True),
                    field(accessType='initializeOnly',name='locationOffset',type='SFVec3f'),
                    field(accessType='initializeOnly',name='planeSensorTranslation',type='SFVec3f',value=(0,0,0)),
                    field(accessType='inputOnly',name='setIsVisible',type='SFBool'),
                    field(accessType='inputOnly',name='setPlaneSensorIsActive',type='SFBool'),
                    field(accessType='inputOnly',name='setPlaneSensorTranslation',type='SFVec3f'),
                    field(accessType='outputOnly',name='translationChanged',type='SFVec3f'),
                    field(accessType='outputOnly',name='translationOffsetChanged',type='SFVec3f')],
                    IS=IS(
                      connect=[
                      connect(nodeField='description',protoField='description'),
                      connect(nodeField='traceEnabled',protoField='traceEnabled'),
                      connect(nodeField='locationOffset',protoField='locationOffset')])),
                  ROUTE(fromField='isActive',fromNode='PlaneMovementSensor',toField='setPlaneSensorIsActive',toNode='VisibilityControlScript'),
                  ROUTE(fromField='translation_changed',fromNode='PlaneMovementSensor',toField='setPlaneSensorTranslation',toNode='VisibilityControlScript'),
                  ROUTE(fromField='isActive',fromNode='MovementVisibilitySensor',toField='setIsVisible',toNode='VisibilityControlScript'),
                  Switch(DEF='MovementControlSwitch',whichChoice=0,
                    children=[
                    Transform(DEF='AllLayer',translation=(-0.25,0,0),
                      children=[
                      Shape(
                        appearance=Appearance(DEF='MovementControlAppearance',
                          material=Material(diffuseColor=(0.65,0.65,0.65))),
                        geometry=Box(size=(0.25,1.75,0.05)))]),
                    Transform(DEF='TwoLayer',translation=(-0.25,-0.285,0),
                      children=[
                      Shape(
                        appearance=Appearance(USE='MovementControlAppearance'),
                        geometry=Box(size=(0.25,1.175,0.05)))]),
                    Transform(DEF='OneLayer',translation=(-0.25,-0.575,0),
                      children=[
                      Shape(
                        appearance=Appearance(USE='MovementControlAppearance'),
                        geometry=Box(size=(0.25,0.6,0.05)))])])]),
                Switch(DEF='DisplayControlSwitch',whichChoice=0,
                  children=[
                  Transform(DEF='DisplayAllLayer',
                    children=[
                    Transform(DEF='DisplayAllToggle',
                      children=[
                      Shape(
                        appearance=Appearance(DEF='ButtonBaseAppearance',
                          material=Material(diffuseColor=(0.65,0.65,0.65))),
                        geometry=Box(size=(0.25,1.75,0.05))),
                      TouchSensor(DEF='DisplayAllSensor',description='display all'),
                      Shape(
                        appearance=Appearance(
                          material=Material(DEF='DisplayAllMaterial',diffuseColor=(0,0.35,0.8))),
                        geometry=Cylinder(height=1.65,radius=0.1))]),
                    Transform(DEF='DisplayTopLayerToggle',translation=(0.25,0.575,0),
                      children=[
                      Shape(
                        appearance=Appearance(USE='ButtonBaseAppearance'),
                        geometry=Box(size=(0.25,0.6,0.05))),
                      TouchSensor(DEF='DisplayTopLayerSensor',description='display top row'),
                      Shape(
                        appearance=Appearance(
                          material=Material(DEF='DisplayControlMaterial',diffuseColor=(0,0.35,0.8))),
                        geometry=Cylinder(height=0.5,radius=0.1))]),
                    Transform(DEF='DisplayMidLayerToggle',translation=(0.25,0,0),
                      children=[
                      Shape(
                        appearance=Appearance(USE='ButtonBaseAppearance'),
                        geometry=Box(size=(0.25,0.6,0.05))),
                      TouchSensor(DEF='DisplayMidLayerSensor',description='display middle row'),
                      Shape(
                        appearance=Appearance(
                          material=Material(USE='DisplayControlMaterial')),
                        geometry=Cylinder(height=0.5,radius=0.1))]),
                    Transform(DEF='DisplayBottomLayerToggle',translation=(0.25,-0.575,0),
                      children=[
                      Shape(
                        appearance=Appearance(USE='ButtonBaseAppearance'),
                        geometry=Box(size=(0.25,0.6,0.05))),
                      TouchSensor(DEF='DisplayBottomLayerSensor',description='display bottom row'),
                      Shape(
                        appearance=Appearance(
                          material=Material(USE='DisplayControlMaterial')),
                        geometry=Cylinder(height=0.5,radius=0.1))])]),
                  Transform(DEF='DisplayTwoLayer',
                    children=[
                    Transform(DEF='DisplayTwoToggle',translation=(0,-0.285,0),
                      children=[
                      Shape(
                        appearance=Appearance(USE='ButtonBaseAppearance'),
                        geometry=Box(size=(0.25,1.175,0.05))),
                      TouchSensor(USE='DisplayAllSensor'),
                      Shape(
                        appearance=Appearance(
                          material=Material(USE='DisplayAllMaterial')),
                        geometry=Cylinder(height=1.08,radius=0.1))]),
                    Transform(USE='DisplayMidLayerToggle'),
                    Transform(USE='DisplayBottomLayerToggle')]),
                  Transform(DEF='DisplayOneLayer',
                    children=[
                    Transform(DEF='DisplayOneToggle',translation=(0,-0.575,0),
                      children=[
                      Shape(
                        appearance=Appearance(USE='ButtonBaseAppearance'),
                        geometry=Box(size=(0.25,0.6,0.05))),
                      TouchSensor(USE='DisplayAllSensor'),
                      Shape(
                        appearance=Appearance(
                          material=Material(USE='DisplayAllMaterial')),
                        geometry=Cylinder(height=0.5,radius=0.1))]),
                    Transform(USE='DisplayBottomLayerToggle')]),
                  Transform(DEF='DisplayNoLayer',
                    children=[
                    Transform(DEF='DisplayNoToggle',translation=(0,-0.575,0),
                      children=[
                      Shape(
                        appearance=Appearance(USE='ButtonBaseAppearance'),
                        geometry=Box(size=(0.25,0.6,0.05))),
                      TouchSensor(USE='DisplayAllSensor'),
                      Shape(
                        appearance=Appearance(
                          material=Material(USE='DisplayAllMaterial')),
                        geometry=Cylinder(height=0.5,radius=0.1))])])]),
                Script(DEF='DisplayLayerScript',
                  field=[
                  field(accessType='initializeOnly',name='description',type='SFString'),
                  field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
                  field(accessType='initializeOnly',name='displayMode',type='SFString'),
                  field(accessType='inputOnly',name='setDisplayMode',type='SFString'),
                  field(accessType='initializeOnly',name='displayAllToggleArmed',type='SFBool',value=False),
                  field(accessType='initializeOnly',name='topLayerToggleArmed',type='SFBool',value=False),
                  field(accessType='initializeOnly',name='midLayerToggleArmed',type='SFBool',value=False),
                  field(accessType='initializeOnly',name='bottomLayerToggleArmed',type='SFBool',value=False),
                  field(accessType='inputOnly',name='displayAllToggleEnabled',type='SFBool'),
                  field(accessType='inputOnly',name='topLayerToggleEnabled',type='SFBool'),
                  field(accessType='inputOnly',name='midLayerToggleEnabled',type='SFBool'),
                  field(accessType='inputOnly',name='bottomLayerToggleEnabled',type='SFBool'),
                  field(accessType='outputOnly',name='displayAllColor',type='SFColor'),
                  field(accessType='outputOnly',appinfo='0 - Display all three animation controls (DIS Mode Selection Playback Controls and Time scale) in a three layer stack. 1 - Display two of the three animation controls in a two layer stack. 2 - Display one of the three animation controls in a one layer stack.',name='movementControlSwitchSelection',type='SFInt32'),
                  field(accessType='outputOnly',appinfo='0 - Display all three animation controls (DIS Mode Selection Playback Controls and Time scale) in a three layer stack. 1 - Display two of the three animation controls in a two layer stack. 2 - Display one of the three animation controls in a one layer stack. 3 - Display no layers of animation controls.',name='displayControlSwitchSelection',type='SFInt32'),
                  field(accessType='outputOnly',appinfo='0 - Display DIS Mode (Master Remote Local) Selection at top layer. 1 - Do not display anything at top layer.',name='topLayerSwitchSelection',type='SFInt32'),
                  field(accessType='outputOnly',appinfo='0 - Display Playback Control Buttons (Reset to Start Fast Rewind Rewind Pause Play Fast Forward Reset To End) at the mid layer. 1 - Display DIS Mode Selection at the mid layer. 2 - Display nothing at the mid layer.',name='midLayerSwitchSelection',type='SFInt32'),
                  field(accessType='outputOnly',appinfo='0 - Display Time Scale at the bottom layer. 1 - Display DIS Mode Selection at the bottom layer. 2 - Display Playback Control Buttons at the bottom layer. 3 - Display nothing at the bottom layer.',name='bottomLayerSwitchSelection',type='SFInt32')],
                  IS=IS(
                    connect=[
                    connect(nodeField='description',protoField='description'),
                    connect(nodeField='traceEnabled',protoField='traceEnabled'),
                    connect(nodeField='displayMode',protoField='displayMode'),
                    connect(nodeField='setDisplayMode',protoField='setDisplayMode')])),
                ROUTE(fromField='isActive',fromNode='DisplayAllSensor',toField='displayAllToggleEnabled',toNode='DisplayLayerScript'),
                ROUTE(fromField='isActive',fromNode='DisplayTopLayerSensor',toField='topLayerToggleEnabled',toNode='DisplayLayerScript'),
                ROUTE(fromField='isActive',fromNode='DisplayMidLayerSensor',toField='midLayerToggleEnabled',toNode='DisplayLayerScript'),
                ROUTE(fromField='isActive',fromNode='DisplayBottomLayerSensor',toField='bottomLayerToggleEnabled',toNode='DisplayLayerScript'),
                ROUTE(fromField='movementControlSwitchSelection',fromNode='DisplayLayerScript',toField='whichChoice',toNode='MovementControlSwitch'),
                ROUTE(fromField='displayControlSwitchSelection',fromNode='DisplayLayerScript',toField='whichChoice',toNode='DisplayControlSwitch'),
                ROUTE(fromField='displayAllColor',fromNode='DisplayLayerScript',toField='diffuseColor',toNode='DisplayAllMaterial'),
                Switch(DEF='TopLayerSwitch',whichChoice=0,
                  children=[
                  Transform(DEF='DisplayDISModeTop',translation=(2.86,0.58,0),
                    children=[
                    Transform(DEF='DISModeButtons',
                      children=[
                      Shape(DEF='GroupButtonBaseShape',
                        appearance=Appearance(USE='ButtonBaseAppearance'),
                        geometry=Box(size=(5,0.6,0.05))),
                      Transform(translation=(-1.6,0,0),
                        children=[
                        TouchSensor(DEF='MasterSensor',description='Master entity, send DIS PDU packets'),
                        Shape(DEF='PushButton',
                          appearance=Appearance(
                            material=Material(DEF='MasterButtonMaterial',diffuseColor=(0.9,0.9,0.9),transparency=1)),
                          geometry=IndexedFaceSet(DEF='DISModePushButton',ccw=False,coordIndex=[0,1,2,3,0,-1],solid=False,
                            coord=Coordinate(point=[(-0.8,0.25,0.05),(0.8,0.25,0.05),(0.8,-0.25,0.05),(-0.8,-0.25,0.05)]))),
                        Transform(translation=(0,0,0.15),
                          children=[
                          Shape(
                            appearance=Appearance(
                              material=Material(DEF='MasterLabelMaterial')),
                            geometry=Text(string=["networkWriter"],
                              fontStyle=FontStyle(DEF='LabelFont',justify=["MIDDLE","MIDDLE"],size=0.25,style_='BOLD')))])]),
                      Transform(
                        children=[
                        TouchSensor(DEF='RemoteSensor',description='Remote entity, read DIS PDU packets'),
                        Shape(USE='PushButton'),
                        Transform(translation=(0,0,0.15),
                          children=[
                          Shape(
                            appearance=Appearance(
                              material=Material(DEF='RemoteLabelMaterial')),
                            geometry=Text(string=["networkReader"],
                              fontStyle=FontStyle(USE='LabelFont')))])]),
                      Transform(translation=(1.6,0,0),
                        children=[
                        TouchSensor(DEF='LocalSensor',description='Local entity, no DIS traffic'),
                        Shape(USE='PushButton'),
                        Transform(translation=(0,0,0.15),
                          children=[
                          Shape(
                            appearance=Appearance(
                              material=Material(DEF='LocalLabelMaterial')),
                            geometry=Text(string=["standAlone"],
                              fontStyle=FontStyle(USE='LabelFont')))])]),
                      Script(DEF='DISModeScript',
                        field=[
                        field(accessType='initializeOnly',name='description',type='SFString'),
                        field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
                        field(accessType='initializeOnly',name='buttonColor',type='SFColor'),
                        field(accessType='initializeOnly',name='activeButtonColor',type='SFColor'),
                        field(accessType='initializeOnly',name='labelColor',type='SFColor'),
                        field(accessType='initializeOnly',name='activeLabelColor',type='SFColor'),
                        field(accessType='inputOnly',name='masterToggleEnabled',type='SFBool'),
                        field(accessType='inputOnly',name='remoteToggleEnabled',type='SFBool'),
                        field(accessType='inputOnly',name='localToggleEnabled',type='SFBool'),
                        field(accessType='outputOnly',name='masterButtonColor',type='SFColor'),
                        field(accessType='outputOnly',name='masterLabelColor',type='SFColor'),
                        field(accessType='outputOnly',name='remoteButtonColor',type='SFColor'),
                        field(accessType='outputOnly',name='remoteLabelColor',type='SFColor'),
                        field(accessType='outputOnly',name='localButtonColor',type='SFColor'),
                        field(accessType='outputOnly',name='localLabelColor',type='SFColor'),
                        field(accessType='outputOnly',name='isMaster',type='SFBool'),
                        field(accessType='outputOnly',name='isRemote',type='SFBool'),
                        field(accessType='outputOnly',name='isLocal',type='SFBool'),
                        field(accessType='outputOnly',name='arePlaybackButtonsActive',type='SFBool'),
                        field(accessType='outputOnly',name='playbackButtonLabelColor',type='SFColor'),
                        field(accessType='outputOnly',name='resetToStartEnabled',type='SFBool')],
                        IS=IS(
                          connect=[
                          connect(nodeField='description',protoField='description'),
                          connect(nodeField='traceEnabled',protoField='traceEnabled'),
                          connect(nodeField='buttonColor',protoField='buttonColor'),
                          connect(nodeField='activeButtonColor',protoField='selectedButtonColor'),
                          connect(nodeField='labelColor',protoField='labelColor'),
                          connect(nodeField='activeLabelColor',protoField='selectedLabelColor'),
                          connect(nodeField='isMaster',protoField='isMaster'),
                          connect(nodeField='isRemote',protoField='isRemote'),
                          connect(nodeField='isLocal',protoField='isLocal')])),
                      ROUTE(fromField='masterButtonColor',fromNode='DISModeScript',toField='diffuseColor',toNode='MasterButtonMaterial'),
                      ROUTE(fromField='masterLabelColor',fromNode='DISModeScript',toField='diffuseColor',toNode='MasterLabelMaterial'),
                      ROUTE(fromField='remoteLabelColor',fromNode='DISModeScript',toField='diffuseColor',toNode='RemoteLabelMaterial'),
                      ROUTE(fromField='localLabelColor',fromNode='DISModeScript',toField='diffuseColor',toNode='LocalLabelMaterial'),
                      ROUTE(fromField='isActive',fromNode='MasterSensor',toField='masterToggleEnabled',toNode='DISModeScript'),
                      ROUTE(fromField='isActive',fromNode='RemoteSensor',toField='remoteToggleEnabled',toNode='DISModeScript'),
                      ROUTE(fromField='isActive',fromNode='LocalSensor',toField='localToggleEnabled',toNode='DISModeScript')])]),
                  Transform(DEF='DisplayNoneTop')]),
                ROUTE(fromField='topLayerSwitchSelection',fromNode='DisplayLayerScript',toField='whichChoice',toNode='TopLayerSwitch'),
                Switch(DEF='MidLayerSwitch',whichChoice=0,
                  children=[
                  Transform(DEF='DisplayPlaybackButtonsMid',translation=(2.86,0,0),
                    children=[
                    Transform(DEF='PlaybackButtons',
                      children=[
                      Shape(USE='GroupButtonBaseShape'),
                      Transform(translation=(-2.05,0,0),
                        children=[
                        TouchSensor(DEF='ResetToStartSensor',description='reset clock to beginning'),
                        Transform(DEF='InvisibleButtonBox',translation=(0.03,0.02,0.1),
                          children=[
                          Shape(
                            appearance=Appearance(
                              material=Material(transparency=1)),
                            geometry=Box(size=(0.6,0.4,0.001)))]),
                        Shape(
                          appearance=Appearance(
                            material=Material(DEF='ResetToStartButtonMaterial',transparency=0.9)),
                          geometry=IndexedFaceSet(DEF='PlaybackButton',coordIndex=[3,2,1,0,3,-1],solid=False,
                            coord=Coordinate(point=[(-0.375,0.25,0.05),(0.375,0.25,0.05),(0.375,-0.25,0.05),(-0.375,-0.25,0.05)]))),
                        Transform(
                          children=[
                          Transform(translation=(-0.12,0,0),
                            children=[
                            Shape(
                              appearance=Appearance(
                                material=Material(DEF='ResetToStartLabelMaterial')),
                              geometry=Box(DEF='Bar',size=(0.04,0.3,0.12)))]),
                          Transform(translation=(0.01,0,0),
                            children=[
                            Shape(
                              appearance=Appearance(
                                material=Material(USE='ResetToStartLabelMaterial')),
                              geometry=IndexedFaceSet(DEF='Triangle',coordIndex=[0,1,2,-1],
                                coord=Coordinate(point=[(-0.15,0,0.051),(0.15,-0.15,0.051),(0.15,0.15,0.051)])))])])]),
                      Transform(translation=(-1.36,0,0),
                        children=[
                        TouchSensor(DEF='FastRewindSensor',description='fast rewind'),
                        Transform(USE='InvisibleButtonBox'),
                        Shape(
                          appearance=Appearance(
                            material=Material(DEF='FastRewindButtonMaterial',transparency=0.9)),
                          geometry=IndexedFaceSet(USE='PlaybackButton')),
                        Transform(
                          children=[
                          Transform(translation=(-0.15,0.0,0),
                            children=[
                            Shape(
                              appearance=Appearance(
                                material=Material(DEF='FastRewindLabelMaterial')),
                              geometry=IndexedFaceSet(USE='Triangle'))]),
                          Transform(translation=(0.1,0,0),
                            children=[
                            Shape(
                              appearance=Appearance(
                                material=Material(USE='FastRewindLabelMaterial')),
                              geometry=IndexedFaceSet(USE='Triangle'))])])]),
                      Transform(translation=(-0.68,0,0),
                        children=[
                        TouchSensor(DEF='RewindSensor',description='rewind'),
                        Transform(USE='InvisibleButtonBox'),
                        Shape(
                          appearance=Appearance(
                            material=Material(DEF='RewindButtonMaterial',transparency=0.9)),
                          geometry=IndexedFaceSet(USE='PlaybackButton')),
                        Transform(
                          children=[
                          Shape(
                            appearance=Appearance(
                              material=Material(DEF='RewindLabelMaterial')),
                            geometry=IndexedFaceSet(USE='Triangle'))])]),
                      Transform(
                        children=[
                        TouchSensor(DEF='PauseSensor',description='pause'),
                        Transform(USE='InvisibleButtonBox'),
                        Shape(
                          appearance=Appearance(
                            material=Material(DEF='PauseButtonMaterial',transparency=0.9)),
                          geometry=IndexedFaceSet(USE='PlaybackButton')),
                        Transform(
                          children=[
                          Transform(translation=(-0.05,0,0),
                            children=[
                            Shape(
                              appearance=Appearance(
                                material=Material(DEF='PauseLabelMaterial')),
                              geometry=Box(USE='Bar'))]),
                          Transform(translation=(0.085,0,0),
                            children=[
                            Shape(
                              appearance=Appearance(
                                material=Material(USE='PauseLabelMaterial')),
                              geometry=Box(USE='Bar'))])])]),
                      Transform(translation=(0.68,0,0),
                        children=[
                        TouchSensor(DEF='PlaySensor',description='play'),
                        Transform(USE='InvisibleButtonBox'),
                        Shape(
                          appearance=Appearance(
                            material=Material(DEF='PlayButtonMaterial',transparency=0.9)),
                          geometry=IndexedFaceSet(USE='PlaybackButton')),
                        Transform(rotation=(0,0,1,3.14),translation=(0.05,0,0),
                          children=[
                          Shape(
                            appearance=Appearance(
                              material=Material(DEF='PlayLabelMaterial')),
                            geometry=IndexedFaceSet(USE='Triangle'))])]),
                      Transform(translation=(1.36,0,0),
                        children=[
                        TouchSensor(DEF='FastForwardSensor',description='fast forward'),
                        Transform(USE='InvisibleButtonBox'),
                        Shape(
                          appearance=Appearance(
                            material=Material(DEF='FastForwardButtonMaterial',transparency=0.9)),
                          geometry=IndexedFaceSet(USE='PlaybackButton')),
                        Transform(rotation=(0,0,1,3.14),
                          children=[
                          Transform(translation=(-0.15,0,0),
                            children=[
                            Shape(
                              appearance=Appearance(
                                material=Material(DEF='FastForwardLabelMaterial')),
                              geometry=IndexedFaceSet(USE='Triangle'))]),
                          Transform(translation=(0.1,0,0),
                            children=[
                            Shape(
                              appearance=Appearance(
                                material=Material(USE='FastForwardLabelMaterial')),
                              geometry=IndexedFaceSet(USE='Triangle'))])])]),
                      Transform(translation=(2.05,0,0),
                        children=[
                        TouchSensor(DEF='ResetToEndSensor',description='reset clock to end'),
                        Transform(USE='InvisibleButtonBox'),
                        Shape(
                          appearance=Appearance(
                            material=Material(DEF='ResetToEndButtonMaterial',transparency=0.9)),
                          geometry=IndexedFaceSet(USE='PlaybackButton')),
                        Transform(
                          children=[
                          Transform(rotation=(0,0,1,3.14),
                            children=[
                            Shape(
                              appearance=Appearance(
                                material=Material(DEF='ResetToEndLabelMaterial')),
                              geometry=IndexedFaceSet(USE='Triangle'))]),
                          Transform(translation=(0.12,0,0),
                            children=[
                            Shape(
                              appearance=Appearance(
                                material=Material(USE='ResetToEndLabelMaterial')),
                              geometry=Box(USE='Bar'))])])]),
                      Script(DEF='PlaybackControlScript',
                        field=[
                        field(accessType='initializeOnly',name='description',type='SFString'),
                        field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
                        field(accessType='initializeOnly',name='playEnabled',type='SFBool'),
                        field(accessType='initializeOnly',name='buttonColor',type='SFColor'),
                        field(accessType='initializeOnly',name='activeButtonColor',type='SFColor'),
                        field(accessType='initializeOnly',name='labelColor',type='SFColor'),
                        field(accessType='initializeOnly',name='activeLabelColor',type='SFColor'),
                        field(accessType='initializeOnly',name='isActive',type='SFBool',value=True),
                        field(accessType='inputOnly',name='setIsActive',type='SFBool'),
                        field(accessType='initializeOnly',name='resetToStartToggleArmed',type='SFBool',value=False),
                        field(accessType='initializeOnly',name='fastRewindToggleArmed',type='SFBool',value=False),
                        field(accessType='initializeOnly',name='rewindToggleArmed',type='SFBool',value=False),
                        field(accessType='initializeOnly',name='pauseToggleArmed',type='SFBool',value=False),
                        field(accessType='initializeOnly',name='playToggleArmed',type='SFBool',value=False),
                        field(accessType='initializeOnly',name='fastForwardToggleArmed',type='SFBool',value=False),
                        field(accessType='initializeOnly',name='resetToEndToggleArmed',type='SFBool',value=False),
                        field(accessType='inputOnly',name='resetToStartToggleEnabled',type='SFBool'),
                        field(accessType='inputOnly',name='fastRewindToggleEnabled',type='SFBool'),
                        field(accessType='inputOnly',name='rewindToggleEnabled',type='SFBool'),
                        field(accessType='inputOnly',name='pauseToggleEnabled',type='SFBool'),
                        field(accessType='inputOnly',name='playToggleEnabled',type='SFBool'),
                        field(accessType='inputOnly',name='fastForwardToggleEnabled',type='SFBool'),
                        field(accessType='inputOnly',name='resetToEndToggleEnabled',type='SFBool'),
                        field(accessType='outputOnly',name='resetToStartButtonColor',type='SFColor'),
                        field(accessType='outputOnly',name='resetToStartLabelColor',type='SFColor'),
                        field(accessType='outputOnly',name='fastRewindButtonColor',type='SFColor'),
                        field(accessType='outputOnly',name='fastRewindLabelColor',type='SFColor'),
                        field(accessType='outputOnly',name='rewindButtonColor',type='SFColor'),
                        field(accessType='outputOnly',name='rewindLabelColor',type='SFColor'),
                        field(accessType='outputOnly',name='pauseButtonColor',type='SFColor'),
                        field(accessType='outputOnly',name='pauseLabelColor',type='SFColor'),
                        field(accessType='outputOnly',name='playButtonColor',type='SFColor'),
                        field(accessType='outputOnly',name='playLabelColor',type='SFColor'),
                        field(accessType='outputOnly',name='fastForwardButtonColor',type='SFColor'),
                        field(accessType='outputOnly',name='fastForwardLabelColor',type='SFColor'),
                        field(accessType='outputOnly',name='resetToEndButtonColor',type='SFColor'),
                        field(accessType='outputOnly',name='resetToEndLabelColor',type='SFColor'),
                        field(accessType='outputOnly',name='isPaused',type='SFBool'),
                        field(accessType='outputOnly',name='isRunning',type='SFBool'),
                        field(accessType='outputOnly',name='resetToStartChanged',type='SFBool'),
                        field(accessType='outputOnly',name='fastRewindChanged',type='SFBool'),
                        field(accessType='outputOnly',name='rewindChanged',type='SFBool'),
                        field(accessType='outputOnly',name='pauseChanged',type='SFBool'),
                        field(accessType='outputOnly',name='playChanged',type='SFBool'),
                        field(accessType='outputOnly',name='fastForwardChanged',type='SFBool'),
                        field(accessType='outputOnly',name='resetToEndChanged',type='SFBool')],
                        IS=IS(
                          connect=[
                          connect(nodeField='description',protoField='description'),
                          connect(nodeField='traceEnabled',protoField='traceEnabled'),
                          connect(nodeField='playEnabled',protoField='playEnabled'),
                          connect(nodeField='buttonColor',protoField='buttonColor'),
                          connect(nodeField='activeButtonColor',protoField='selectedButtonColor'),
                          connect(nodeField='labelColor',protoField='labelColor'),
                          connect(nodeField='activeLabelColor',protoField='selectedLabelColor'),
                          connect(nodeField='isPaused',protoField='isPaused'),
                          connect(nodeField='isRunning',protoField='isRunning')])),
                      ROUTE(fromField='arePlaybackButtonsActive',fromNode='DISModeScript',toField='setIsActive',toNode='PlaybackControlScript'),
                      ROUTE(fromField='resetToStartEnabled',fromNode='DISModeScript',toField='resetToStartToggleEnabled',toNode='PlaybackControlScript'),
                      ROUTE(fromField='playbackButtonLabelColor',fromNode='DISModeScript',toField='diffuseColor',toNode='ResetToStartLabelMaterial'),
                      ROUTE(fromField='playbackButtonLabelColor',fromNode='DISModeScript',toField='diffuseColor',toNode='FastRewindLabelMaterial'),
                      ROUTE(fromField='playbackButtonLabelColor',fromNode='DISModeScript',toField='diffuseColor',toNode='RewindLabelMaterial'),
                      ROUTE(fromField='playbackButtonLabelColor',fromNode='DISModeScript',toField='diffuseColor',toNode='PauseLabelMaterial'),
                      ROUTE(fromField='playbackButtonLabelColor',fromNode='DISModeScript',toField='diffuseColor',toNode='PlayLabelMaterial'),
                      ROUTE(fromField='playbackButtonLabelColor',fromNode='DISModeScript',toField='diffuseColor',toNode='FastForwardLabelMaterial'),
                      ROUTE(fromField='playbackButtonLabelColor',fromNode='DISModeScript',toField='diffuseColor',toNode='ResetToEndLabelMaterial'),
                      ROUTE(fromField='arePlaybackButtonsActive',fromNode='DISModeScript',toField='enabled',toNode='ResetToStartSensor'),
                      ROUTE(fromField='arePlaybackButtonsActive',fromNode='DISModeScript',toField='enabled',toNode='FastRewindSensor'),
                      ROUTE(fromField='arePlaybackButtonsActive',fromNode='DISModeScript',toField='enabled',toNode='RewindSensor'),
                      ROUTE(fromField='arePlaybackButtonsActive',fromNode='DISModeScript',toField='enabled',toNode='PauseSensor'),
                      ROUTE(fromField='arePlaybackButtonsActive',fromNode='DISModeScript',toField='enabled',toNode='PlaySensor'),
                      ROUTE(fromField='arePlaybackButtonsActive',fromNode='DISModeScript',toField='enabled',toNode='FastForwardSensor'),
                      ROUTE(fromField='arePlaybackButtonsActive',fromNode='DISModeScript',toField='enabled',toNode='ResetToEndSensor'),
                      ROUTE(fromField='resetToStartButtonColor',fromNode='PlaybackControlScript',toField='diffuseColor',toNode='ResetToStartButtonMaterial'),
                      ROUTE(fromField='resetToStartLabelColor',fromNode='PlaybackControlScript',toField='diffuseColor',toNode='ResetToStartLabelMaterial'),
                      ROUTE(fromField='fastRewindButtonColor',fromNode='PlaybackControlScript',toField='diffuseColor',toNode='FastRewindButtonMaterial'),
                      ROUTE(fromField='fastRewindLabelColor',fromNode='PlaybackControlScript',toField='diffuseColor',toNode='FastRewindLabelMaterial'),
                      ROUTE(fromField='rewindButtonColor',fromNode='PlaybackControlScript',toField='diffuseColor',toNode='RewindButtonMaterial'),
                      ROUTE(fromField='rewindLabelColor',fromNode='PlaybackControlScript',toField='diffuseColor',toNode='RewindLabelMaterial'),
                      ROUTE(fromField='pauseButtonColor',fromNode='PlaybackControlScript',toField='diffuseColor',toNode='PauseButtonMaterial'),
                      ROUTE(fromField='pauseLabelColor',fromNode='PlaybackControlScript',toField='diffuseColor',toNode='PauseLabelMaterial'),
                      ROUTE(fromField='playButtonColor',fromNode='PlaybackControlScript',toField='diffuseColor',toNode='PlayButtonMaterial'),
                      ROUTE(fromField='playLabelColor',fromNode='PlaybackControlScript',toField='diffuseColor',toNode='PlayLabelMaterial'),
                      ROUTE(fromField='fastForwardButtonColor',fromNode='PlaybackControlScript',toField='diffuseColor',toNode='FastForwardButtonMaterial'),
                      ROUTE(fromField='fastForwardLabelColor',fromNode='PlaybackControlScript',toField='diffuseColor',toNode='FastForwardLabelMaterial'),
                      ROUTE(fromField='resetToEndButtonColor',fromNode='PlaybackControlScript',toField='diffuseColor',toNode='ResetToEndButtonMaterial'),
                      ROUTE(fromField='resetToEndLabelColor',fromNode='PlaybackControlScript',toField='diffuseColor',toNode='ResetToEndLabelMaterial'),
                      ROUTE(fromField='isActive',fromNode='ResetToStartSensor',toField='resetToStartToggleEnabled',toNode='PlaybackControlScript'),
                      ROUTE(fromField='isActive',fromNode='FastRewindSensor',toField='fastRewindToggleEnabled',toNode='PlaybackControlScript'),
                      ROUTE(fromField='isActive',fromNode='RewindSensor',toField='rewindToggleEnabled',toNode='PlaybackControlScript'),
                      ROUTE(fromField='isActive',fromNode='PauseSensor',toField='pauseToggleEnabled',toNode='PlaybackControlScript'),
                      ROUTE(fromField='isActive',fromNode='PlaySensor',toField='playToggleEnabled',toNode='PlaybackControlScript'),
                      ROUTE(fromField='isActive',fromNode='FastForwardSensor',toField='fastForwardToggleEnabled',toNode='PlaybackControlScript'),
                      ROUTE(fromField='isActive',fromNode='ResetToEndSensor',toField='resetToEndToggleEnabled',toNode='PlaybackControlScript')])]),
                  Transform(DEF='DisplayDISModeMid',translation=(2.86,0,0),
                    children=[
                    Transform(USE='DISModeButtons')]),
                  Transform(DEF='DisplayNoneMid')]),
                ROUTE(fromField='midLayerSwitchSelection',fromNode='DisplayLayerScript',toField='whichChoice',toNode='MidLayerSwitch'),
                Switch(DEF='BottomLayerSwitch',whichChoice=0,
                  children=[
                  Transform(DEF='DisplaySliderBottom',translation=(2.86,-0.58,0),
                    children=[
                    Transform(DEF='TimeScale',
                      children=[
                      Shape(USE='GroupButtonBaseShape'),
                      Transform(translation=(0,-0.15,0),
                        children=[
                        ProtoInstance(DEF='Slider',name='SliderFloat',
                          fieldValue=[
                          fieldValue(name='layoutDirection',value='horizontal'),
                          fieldValue(name='height',value=4.725),
                          fieldValue(name='radius',value=0.1),
                          fieldValue(name='barRadius',value=0.035),
                          fieldValue(name='min',value=0.0),
                          fieldValue(name='max',value=1.0),
                          fieldValue(name='value',value=0.0),
                          fieldValue(name='traceEnabled',value=True)])]),
                      Transform(translation=(0,0,0.05),
                        children=[
                        Transform(translation=(-2.4,0,0),
                          children=[
                          Shape(
                            appearance=Appearance(
                              material=Material(DEF='TimeLabelMaterial',
                                IS=IS(
                                  connect=[
                                  connect(nodeField='diffuseColor',protoField='labelColor')]))),
                            geometry=Text(DEF='DurationText',string=["00h00m00s"],
                              fontStyle=FontStyle(DEF='TimeLabelFont',size=0.35,style_='BOLDITALIC')))]),
                        Transform(translation=(-0.3,0,0),
                          children=[
                          Shape(
                            appearance=Appearance(
                              material=Material(USE='TimeLabelMaterial')),
                            geometry=Text(string=["Elapsed:"],
                              fontStyle=FontStyle(USE='TimeLabelFont')))]),
                        Transform(translation=(0.9,0,0),
                          children=[
                          Shape(
                            appearance=Appearance(
                              material=Material(USE='TimeLabelMaterial')),
                            geometry=Text(DEF='secondsElapsedText',string=["00h00m00s"],
                              fontStyle=FontStyle(USE='TimeLabelFont')))]),
                        Script(DEF='TimeScaleScript',
                          field=[
                          field(accessType='initializeOnly',name='description',type='SFString'),
                          field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
                          field(accessType='inputOutput',name='duration',type='SFTime'),
                          field(accessType='initializeOnly',name='secondsElapsed',type='SFTime',value=0),
                          field(accessType='inputOnly',name='setSecondsElapsed',type='SFTime'),
                          field(accessType='outputOnly',name='durationOutput',type='MFString'),
                          field(accessType='outputOnly',name='secondsElapsedOutput',type='MFString')],
                          IS=IS(
                            connect=[
                            connect(nodeField='description',protoField='description'),
                            connect(nodeField='traceEnabled',protoField='traceEnabled'),
                            connect(nodeField='duration',protoField='cycleInterval')])),
                        ROUTE(fromField='durationOutput',fromNode='TimeScaleScript',toField='string',toNode='DurationText'),
                        ROUTE(fromField='secondsElapsedOutput',fromNode='TimeScaleScript',toField='string',toNode='secondsElapsedText')])])]),
                  Transform(DEF='DisplayDISModeBottom',translation=(2.86,-0.58,0),
                    children=[
                    Transform(USE='DISModeButtons')]),
                  Transform(DEF='DisplayPlaybackButtonsBottom',translation=(2.86,-0.58,0),
                    children=[
                    Transform(USE='PlaybackButtons')]),
                  Transform(DEF='DisplayNoneBottom')]),
                ROUTE(fromField='bottomLayerSwitchSelection',fromNode='DisplayLayerScript',toField='whichChoice',toNode='BottomLayerSwitch')]),
              ROUTE(fromField='translation_changed',fromNode='PlaneMovementSensor',toField='set_translation',toNode='MovableLocation'),
              ROUTE(fromField='translationChanged',fromNode='VisibilityControlScript',toField='set_translation',toNode='MovableLocation'),
              ROUTE(fromField='translationOffsetChanged',fromNode='VisibilityControlScript',toField='set_offset',toNode='PlaneMovementSensor')])]),
          ROUTE(fromField='position_changed',fromNode='WhereSensor',toField='set_translation',toNode='FixedLocation'),
          ROUTE(fromField='orientation_changed',fromNode='WhereSensor',toField='set_rotation',toNode='FixedLocation'),
          TimeSensor(DEF='ForwardClock'),
          TimeSensor(DEF='FastForwardClock'),
          TimeSensor(DEF='RewindClock'),
          TimeSensor(DEF='FastRewindClock'),
          TimeSensor(DEF='SliderClock'),
          Script(DEF='ClockScript',
            field=[
            field(accessType='initializeOnly',name='description',type='SFString'),
            field(accessType='initializeOnly',name='traceEnabled',type='SFBool'),
            field(accessType='initializeOnly',name='duration',type='SFTime'),
            field(accessType='inputOnly',name='set_duration',type='SFTime'),
            field(accessType='outputOnly',name='durationChanged',type='SFTime'),
            field(accessType='outputOnly',name='forwardCycleInterval',type='SFTime'),
            field(accessType='outputOnly',name='fastForwardCycleInterval',type='SFTime'),
            field(accessType='outputOnly',name='rewindCycleInterval',type='SFTime'),
            field(accessType='outputOnly',name='fastRewindCycleInterval',type='SFTime'),
            field(accessType='outputOnly',name='sliderClockCycleInterval',type='SFTime'),
            field(accessType='initializeOnly',name='speedFactor',type='SFFloat'),
            field(accessType='initializeOnly',name='startTime',type='SFTime',value=-1),
            field(accessType='outputOnly',name='startTime_changed',type='SFTime'),
            field(accessType='initializeOnly',name='stopTime',type='SFTime',value=-1),
            field(accessType='outputOnly',name='stopTime_changed',type='SFTime'),
            field(accessType='outputOnly',name='rewindStartTime',type='SFTime'),
            field(accessType='outputOnly',name='rewindStopTime',type='SFTime'),
            field(accessType='outputOnly',name='fastForwardStartTime',type='SFTime'),
            field(accessType='outputOnly',name='fastForwardStopTime',type='SFTime'),
            field(accessType='outputOnly',name='fastRewindStartTime',type='SFTime'),
            field(accessType='outputOnly',name='fastRewindStopTime',type='SFTime'),
            field(accessType='outputOnly',name='sliderClockStartTime',type='SFTime'),
            field(accessType='outputOnly',name='sliderClockStopTime',type='SFTime'),
            field(accessType='initializeOnly',name='time',type='SFTime',value=-1),
            field(accessType='inputOnly',name='setTime',type='SFTime'),
            field(accessType='outputOnly',name='time_changed',type='SFTime'),
            field(accessType='initializeOnly',name='isClockActive',type='SFBool',value=False),
            field(accessType='inputOnly',name='setIsClockActive',type='SFBool'),
            field(accessType='outputOnly',name='isClockActiveChanged',type='SFBool'),
            field(accessType='outputOnly',name='secondsElapsed',type='SFTime'),
            field(accessType='initializeOnly',name='fraction',type='SFFloat',value=0),
            field(accessType='inputOnly',name='setFraction',type='SFFloat'),
            field(accessType='inputOnly',name='setFastForwardFraction',type='SFFloat'),
            field(accessType='inputOnly',name='setRewindFraction',type='SFFloat'),
            field(accessType='inputOnly',name='setFastRewindFraction',type='SFFloat'),
            field(accessType='inputOnly',name='setSliderDragFraction',type='SFFloat'),
            field(accessType='inputOnly',name='setSliderClockFraction',type='SFFloat'),
            field(accessType='outputOnly',name='fraction_changed',type='SFFloat'),
            field(accessType='outputOnly',name='isResetToStart',type='SFBool'),
            field(accessType='inputOnly',name='setResetToStart',type='SFBool'),
            field(accessType='outputOnly',name='isFastRewind',type='SFBool'),
            field(accessType='inputOnly',name='setFastRewind',type='SFBool'),
            field(accessType='outputOnly',name='isRewinding',type='SFBool'),
            field(accessType='inputOnly',name='setRewind',type='SFBool'),
            field(accessType='inputOnly',name='setPaused',type='SFBool'),
            field(accessType='outputOnly',name='isPlaying',type='SFBool'),
            field(accessType='inputOnly',name='setPlay',type='SFBool'),
            field(accessType='outputOnly',name='isFastForward',type='SFBool'),
            field(accessType='inputOnly',name='setFastForward',type='SFBool'),
            field(accessType='outputOnly',name='isResetToEnd',type='SFBool'),
            field(accessType='inputOnly',name='setResetToEnd',type='SFBool'),
            field(accessType='outputOnly',name='sliderClockEnabled',type='SFBool'),
            field(accessType='initializeOnly',name='sliderDragArmed',type='SFBool',value=False),
            field(accessType='inputOnly',name='setSliderDragged',type='SFBool'),
            field(accessType='initializeOnly',name='pauseTime',type='SFTime',value=-1),
            field(accessType='initializeOnly',name='activateButtonColor',type='SFColor'),
            field(accessType='initializeOnly',name='activateLabelColor',type='SFColor'),
            field(accessType='initializeOnly',name='deactivateButtonColor',type='SFColor'),
            field(accessType='initializeOnly',name='arePlaybackButtonsActive',type='SFBool',value=True),
            field(accessType='inputOnly',name='setarePlaybackButtonsActive',type='SFBool'),
            field(accessType='outputOnly',name='deactivateButtonColorChanged',type='SFColor'),
            field(accessType='initializeOnly',name='deactivateLabelColor',type='SFColor'),
            field(accessType='outputOnly',name='deactivateLabelColorChanged',type='SFColor'),
            field(accessType='outputOnly',name='playButtonActivateColorChanged',type='SFColor'),
            field(accessType='outputOnly',name='playLabelActivateColorChanged',type='SFColor'),
            field(accessType='outputOnly',name='rewindButtonActivateColorChanged',type='SFColor'),
            field(accessType='outputOnly',name='rewindLabelActivateColorChanged',type='SFColor'),
            field(accessType='initializeOnly',name='rewindStart_fraction',type='SFFloat',value=0),
            field(accessType='initializeOnly',name='fastRewindStart_fraction',type='SFFloat',value=0),
            field(accessType='initializeOnly',name='sliderClockStart_fraction',type='SFFloat',value=0),
            field(accessType='initializeOnly',name='fastRewind_level',type='SFFloat',value=0),
            field(accessType='initializeOnly',name='fastForward_level',type='SFFloat',value=0),
            field(accessType='initializeOnly',name='preDrag_fraction',type='SFFloat',value=0)],
            IS=IS(
              connect=[
              connect(nodeField='description',protoField='description'),
              connect(nodeField='traceEnabled',protoField='traceEnabled'),
              connect(nodeField='deactivateButtonColor',protoField='buttonColor'),
              connect(nodeField='activateButtonColor',protoField='selectedButtonColor'),
              connect(nodeField='deactivateLabelColor',protoField='labelColor'),
              connect(nodeField='activateLabelColor',protoField='selectedLabelColor'),
              connect(nodeField='duration',protoField='cycleInterval'),
              connect(nodeField='set_duration',protoField='set_cycleInterval'),
              connect(nodeField='durationChanged',protoField='cycleInterval_changed'),
              connect(nodeField='speedFactor',protoField='speedFactor'),
              connect(nodeField='isClockActiveChanged',protoField='isActive'),
              connect(nodeField='startTime_changed',protoField='startTime_changed'),
              connect(nodeField='stopTime_changed',protoField='stopTime_changed'),
              connect(nodeField='time_changed',protoField='time_changed'),
              connect(nodeField='fraction_changed',protoField='fraction_changed'),
              connect(nodeField='secondsElapsed',protoField='secondsElapsed')])),
          ROUTE(fromField='arePlaybackButtonsActive',fromNode='DISModeScript',toField='setarePlaybackButtonsActive',toNode='ClockScript'),
          #  TODO use or remove <ROUTE fromField='arePlaybackButtonsActive' fromNode='DISModeScript' toField='setDragEnabled' toNode='Slider'/> 
          ROUTE(fromField='resetToStartChanged',fromNode='PlaybackControlScript',toField='setResetToStart',toNode='ClockScript'),
          ROUTE(fromField='fastRewindChanged',fromNode='PlaybackControlScript',toField='setFastRewind',toNode='ClockScript'),
          ROUTE(fromField='rewindChanged',fromNode='PlaybackControlScript',toField='setRewind',toNode='ClockScript'),
          ROUTE(fromField='pauseChanged',fromNode='PlaybackControlScript',toField='setPaused',toNode='ClockScript'),
          ROUTE(fromField='playChanged',fromNode='PlaybackControlScript',toField='setPlay',toNode='ClockScript'),
          ROUTE(fromField='fastForwardChanged',fromNode='PlaybackControlScript',toField='setFastForward',toNode='ClockScript'),
          ROUTE(fromField='resetToEndChanged',fromNode='PlaybackControlScript',toField='setResetToEnd',toNode='ClockScript'),
          ROUTE(fromField='isActive',fromNode='ForwardClock',toField='setIsClockActive',toNode='ClockScript'),
          ROUTE(fromField='fraction_changed',fromNode='ForwardClock',toField='setFraction',toNode='ClockScript'),
          ROUTE(fromField='time',fromNode='ForwardClock',toField='setTime',toNode='ClockScript'),
          ROUTE(fromField='isActive',fromNode='RewindClock',toField='setIsClockActive',toNode='ClockScript'),
          ROUTE(fromField='fraction_changed',fromNode='RewindClock',toField='setRewindFraction',toNode='ClockScript'),
          ROUTE(fromField='time',fromNode='RewindClock',toField='setTime',toNode='ClockScript'),
          ROUTE(fromField='isActive',fromNode='FastForwardClock',toField='setIsClockActive',toNode='ClockScript'),
          ROUTE(fromField='fraction_changed',fromNode='FastForwardClock',toField='setFastForwardFraction',toNode='ClockScript'),
          ROUTE(fromField='time',fromNode='FastForwardClock',toField='setTime',toNode='ClockScript'),
          ROUTE(fromField='isActive',fromNode='FastRewindClock',toField='setIsClockActive',toNode='ClockScript'),
          ROUTE(fromField='fraction_changed',fromNode='FastRewindClock',toField='setFastRewindFraction',toNode='ClockScript'),
          ROUTE(fromField='time',fromNode='FastRewindClock',toField='setTime',toNode='ClockScript'),
          ROUTE(fromField='isActive',fromNode='SliderClock',toField='setIsClockActive',toNode='ClockScript'),
          ROUTE(fromField='fraction_changed',fromNode='SliderClock',toField='setSliderClockFraction',toNode='ClockScript'),
          ROUTE(fromField='time',fromNode='SliderClock',toField='setTime',toNode='ClockScript'),
          ROUTE(fromField='isPlaying',fromNode='ClockScript',toField='set_enabled',toNode='ForwardClock'),
          ROUTE(fromField='isRewinding',fromNode='ClockScript',toField='set_enabled',toNode='RewindClock'),
          ROUTE(fromField='isFastForward',fromNode='ClockScript',toField='set_enabled',toNode='FastForwardClock'),
          ROUTE(fromField='isFastRewind',fromNode='ClockScript',toField='set_enabled',toNode='FastRewindClock'),
          ROUTE(fromField='sliderClockEnabled',fromNode='ClockScript',toField='set_enabled',toNode='SliderClock'),
          ROUTE(fromField='forwardCycleInterval',fromNode='ClockScript',toField='set_cycleInterval',toNode='ForwardClock'),
          ROUTE(fromField='rewindCycleInterval',fromNode='ClockScript',toField='set_cycleInterval',toNode='RewindClock'),
          ROUTE(fromField='fastForwardCycleInterval',fromNode='ClockScript',toField='set_cycleInterval',toNode='FastForwardClock'),
          ROUTE(fromField='fastRewindCycleInterval',fromNode='ClockScript',toField='set_cycleInterval',toNode='FastRewindClock'),
          ROUTE(fromField='sliderClockCycleInterval',fromNode='ClockScript',toField='set_cycleInterval',toNode='SliderClock'),
          ROUTE(fromField='startTime_changed',fromNode='ClockScript',toField='set_startTime',toNode='ForwardClock'),
          ROUTE(fromField='stopTime_changed',fromNode='ClockScript',toField='set_stopTime',toNode='ForwardClock'),
          ROUTE(fromField='rewindStartTime',fromNode='ClockScript',toField='set_startTime',toNode='RewindClock'),
          ROUTE(fromField='rewindStopTime',fromNode='ClockScript',toField='set_stopTime',toNode='RewindClock'),
          ROUTE(fromField='fastForwardStartTime',fromNode='ClockScript',toField='set_startTime',toNode='FastForwardClock'),
          ROUTE(fromField='fastForwardStopTime',fromNode='ClockScript',toField='set_stopTime',toNode='FastForwardClock'),
          ROUTE(fromField='fastRewindStartTime',fromNode='ClockScript',toField='set_startTime',toNode='FastRewindClock'),
          ROUTE(fromField='fastRewindStopTime',fromNode='ClockScript',toField='set_stopTime',toNode='FastRewindClock'),
          ROUTE(fromField='sliderClockStartTime',fromNode='ClockScript',toField='set_startTime',toNode='SliderClock'),
          ROUTE(fromField='sliderClockStopTime',fromNode='ClockScript',toField='set_stopTime',toNode='SliderClock'),
          ROUTE(fromField='fraction_changed',fromNode='ClockScript',toField='setValue',toNode='Slider'),
          ROUTE(fromField='deactivateButtonColorChanged',fromNode='ClockScript',toField='diffuseColor',toNode='ResetToStartButtonMaterial'),
          ROUTE(fromField='deactivateLabelColorChanged',fromNode='ClockScript',toField='diffuseColor',toNode='ResetToStartLabelMaterial'),
          ROUTE(fromField='deactivateButtonColorChanged',fromNode='ClockScript',toField='diffuseColor',toNode='FastRewindButtonMaterial'),
          ROUTE(fromField='deactivateLabelColorChanged',fromNode='ClockScript',toField='diffuseColor',toNode='FastRewindLabelMaterial'),
          ROUTE(fromField='deactivateButtonColorChanged',fromNode='ClockScript',toField='diffuseColor',toNode='RewindButtonMaterial'),
          ROUTE(fromField='deactivateLabelColorChanged',fromNode='ClockScript',toField='diffuseColor',toNode='RewindLabelMaterial'),
          ROUTE(fromField='deactivateButtonColorChanged',fromNode='ClockScript',toField='diffuseColor',toNode='PauseButtonMaterial'),
          ROUTE(fromField='deactivateLabelColorChanged',fromNode='ClockScript',toField='diffuseColor',toNode='PauseLabelMaterial'),
          ROUTE(fromField='deactivateButtonColorChanged',fromNode='ClockScript',toField='diffuseColor',toNode='PlayButtonMaterial'),
          ROUTE(fromField='deactivateLabelColorChanged',fromNode='ClockScript',toField='diffuseColor',toNode='PlayLabelMaterial'),
          ROUTE(fromField='deactivateButtonColorChanged',fromNode='ClockScript',toField='diffuseColor',toNode='FastForwardButtonMaterial'),
          ROUTE(fromField='deactivateLabelColorChanged',fromNode='ClockScript',toField='diffuseColor',toNode='FastForwardLabelMaterial'),
          ROUTE(fromField='deactivateButtonColorChanged',fromNode='ClockScript',toField='diffuseColor',toNode='ResetToEndButtonMaterial'),
          ROUTE(fromField='deactivateLabelColorChanged',fromNode='ClockScript',toField='diffuseColor',toNode='ResetToEndLabelMaterial'),
          ROUTE(fromField='playButtonActivateColorChanged',fromNode='ClockScript',toField='diffuseColor',toNode='PlayButtonMaterial'),
          ROUTE(fromField='playLabelActivateColorChanged',fromNode='ClockScript',toField='diffuseColor',toNode='PlayLabelMaterial'),
          ROUTE(fromField='rewindButtonActivateColorChanged',fromNode='ClockScript',toField='diffuseColor',toNode='RewindButtonMaterial'),
          ROUTE(fromField='rewindLabelActivateColorChanged',fromNode='ClockScript',toField='diffuseColor',toNode='RewindLabelMaterial'),
          ROUTE(fromField='valueChanged',fromNode='Slider',toField='setSliderDragFraction',toNode='ClockScript'),
          #  fix or omit <ROUTE fromField='isDragged' fromNode='Slider' toField='setSliderDragged' toNode='ClockScript'/> 
          ROUTE(fromField='secondsElapsed',fromNode='ClockScript',toField='setSecondsElapsed',toNode='TimeScaleScript')])])),
    #  ==================== 
    Anchor(description='DvdController Example',url=["DvdControllerExample.x3d","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/DvdControllerExample.x3d","DvdControllerExample.wrl","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/DvdControllerExample.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["DvdControllerPrototype","is a Prototype definition file.","","To see an example scene","select this text and view","DvdControllerExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.8)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DvdControllerPrototype.py")
