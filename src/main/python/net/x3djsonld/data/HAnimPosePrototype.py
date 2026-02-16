####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python HAnimPosePrototype.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Full',version='4.0',
  head=head(
    children=[
    meta(content='HAnimPosePrototype.x3d',name='title'),
    meta(content='Define an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.',name='description'),
    meta(content='This model also takes advantage of Inline/IMPORT capabilities (equivalent to USE node) and thus avoids fully copying a large, complex HAnimHumanoid model. Multiple HAnimHumanoid models have been tested satisfactorily, for HAnim version 1 (X3d 3) AND HAnim version 2 (X3D 4).',name='info'),
    meta(content='2 October 2025',name='created'),
    meta(content='14 December 2025',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='Joe Williams',name='creator'),
    meta(content='Holger Seelig for X_ITE, Sunrize on Windows, scripting guidance, and Inline IMPORT functionality as node-reference equivalent to USE',name='contributor'),
    meta(content='HAnimPosePrototype.console.txt',name='reference'),
    meta(content='demonstration video https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeDemoVideo.mp4',name='MovingImage'),
    meta(content='HAnimPoseExampleTouchDown.png',name='Image'),
    meta(content='HAnimPoseExampleTouchDownFaceLeftAPose.png',name='Image'),
    meta(content='images/HAnimPoseExampleBoxMan1.png',name='Image'),
    meta(content='images/HAnimPoseExampleBoxMan2.png',name='Image'),
    meta(content='images/HAnimPoseExampleJoeKick.png',name='Image'),
    meta(content='images/HAnimPoseExampleJoeSkeletonSkinSite.png',name='Image'),
    meta(content='images/HAnimPoseExampleKoreanCharacter01Jin.png',name='Image'),
    meta(content='images/HAnimPoseExampleKoreanCharacter02Chul.png',name='Image'),
    meta(content='images/HAnimPoseExampleKoreanCharacter03Hyun.png',name='Image'),
    meta(content='images/HAnimPoseExampleKoreanCharacter04Young.png',name='Image'),
    meta(content='images/HAnimPoseExampleKoreanCharacter05Ju.png',name='Image'),
    meta(content='images/HAnimPoseExampleKoreanCharacter06Ga.png',name='Image'),
    meta(content='images/HAnimPoseExampleKoreanCharacter07No.png',name='Image'),
    meta(content='images/HAnimPoseExampleKoreanCharacter08Da.png',name='Image'),
    meta(content='images/HAnimPoseExampleKoreanCharacter09Ru.png',name='Image'),
    meta(content='images/HAnimPoseExampleKoreanCharacter10Mi.png',name='Image'),
    meta(content='images/HAnimPoseExampleKoreanCharacter11Min.png',name='Image'),
    meta(content='images/HAnimPoseExampleKoreanCharacter12Sun.png',name='Image'),
    meta(content='HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose',name='specificationSection'),
    meta(content='https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose',name='specificationUrl'),
    meta(content='HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures',name='specificationSection'),
    meta(content='https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures',name='specificationUrl'),
    meta(content='HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses',name='specificationSection'),
    meta(content='https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses',name='specificationUrl'),
    meta(content='Direct scene manipulations with Javascript, https://doc.instantreality.org/tutorial/direct-scene-manipulations-with-javascript',name='reference'),
    meta(content='earlier version of this prototype: originals/HAnimPosePreliminary.x3d',name='reference'),
    meta(content='X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit',name='generator'),
    meta(content='Sunrize X3D Editor V1.11.1, https://create3000.github.io/sunrize',name='generator'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototype.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(DEF='ModelInfo',info=["Design to illustrate a potential HAnimPose node"],title='HAnimPosePrototype.x3d'),
    Background(skyColor=[(0.8,0.8,1)]),
    NavigationInfo(),
    Group(DEF='HandleInlineLoading',
      children=[
      Comment(' Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2 '),
      Comment(' Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun '),
      Inline(DEF='HumanoidInline',description='remote HAnimHumanoid for IMPORT',url=["../Skin/BoxMan2.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/BoxMan2.x3d"]),
      Comment(' Note that the following importedDEF must match the EXPORT name found in remote file '),
      IMPORT(AS='HumanoidImported',importedDEF='BoxMan2',inlineDEF='HumanoidInline'),
      LoadSensor(DEF='HumanoidInlineLoadSensor',timeOut=2,
        children=[
        Inline(USE='HumanoidInline')])]),
    ProtoDeclare(appinfo='Experimental node to assign joint values to a humanoid and assume a pose. Assumes that baseline HAnimHumanoid configuration must be I pose, which can be achieved by resetting every HAnimJoint to default values.',name='HAnimPose',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='HAnimHumanoid for this Pose to act upon',name='parentHAnimHumanoid',type='SFNode',
          # HAnimHumanoid initialization node goes here, this field is only used in the prototype implementation
          ),
        field(accessType='inputOutput',appinfo='name of this pose',name='name',type='SFString',value='newPoseName'),
        field(accessType='inputOutput',appinfo='joint values to apply to HAnimHumanoid',name='children',type='MFNode',
          # initializating Joint nodes (if any) go here
          ),
        field(accessType='inputOutput',appinfo='explanation of purpose',name='description',type='SFString'),
        field(accessType='inputOutput',appinfo='default value true',name='enabled',type='SFBool',value=True),
        field(accessType='initializeOnly',appinfo='default is no loa',name='loa',type='SFInt32',value=-1),
        field(accessType='inputOutput',appinfo='how many seconds to achieve the pose',name='transitionDuration',type='SFTime',value=0),
        field(accessType='inputOutput',appinfo='single Metadata* node',name='metadata',type='SFNode'),
        field(accessType='outputOnly',appinfo='event indicating when pose transition is active',name='isActive',type='SFBool'),
        field(accessType='inputOnly',appinfo='this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1',name='commencePose',type='SFBool'),
        field(accessType='inputOnly',appinfo='reset the skeleton to I pose with all joints zeroed',name='resetAllJoints',type='SFBool'),
        field(accessType='inputOnly',appinfo='allows transition to proceed incrementally from fraction [0..10',name='set_fraction',type='SFFloat'),
        field(accessType='inputOnly',appinfo='starts the animation clock',name='set_startTime',type='SFTime'),
        field(accessType='inputOnly',appinfo='possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE',name='isLoaded',type='SFBool'),
        field(accessType='inputOutput',appinfo='debug trace to Browser output console this is a local prototype field',name='traceEnabled',type='SFBool',value=True)]),
      ProtoBody=ProtoBody(
        children=[
        TimeSensor(DEF='ClockTimeSensor',description='control timing of pose animation when triggered',
          IS=IS(
            connect=[
            connect(nodeField='enabled',protoField='enabled'),
            connect(nodeField='cycleInterval',protoField='transitionDuration'),
            connect(nodeField='isActive',protoField='isActive'),
            connect(nodeField='startTime',protoField='set_startTime'),
            connect(nodeField='metadata',protoField='metadata')])),
        TimeSensor(DEF='ResetTimeSensor',description='control timing of skeleton reset to "A" pose when triggered',
          IS=IS(
            connect=[
            connect(nodeField='enabled',protoField='enabled'),
            connect(nodeField='cycleInterval',protoField='transitionDuration'),
            # no need to report isActive since that would be duplicative
            connect(nodeField='startTime',protoField='set_startTime')])),
        Group(DEF='PoseInterpolatorGroup',
          children=[
          Comment(' interpolators generated by prototype script appear here at runtime ')
          ),
        Group(DEF='ResetInterpolatorGroup',
          children=[
          Comment(' interpolators generated by prototype script appear here at runtime ')
          ),
        Script(DEF='HAnimPoseScript',directOutput=True,url=["HAnimPosePrototypeScript.js","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPosePrototypeScript.js"],
          field=[
          field(accessType='inputOutput',appinfo='Humanoid for this Pose to act upon',name='parentHAnimHumanoid',type='SFNode',
            # initialization node (if any) goes here
            ),
          field(accessType='inputOutput',appinfo='name of this pose',name='name',type='SFString'),
          field(accessType='initializeOnly',appinfo='default is no loa',name='loa',type='SFInt32'),
          field(accessType='inputOutput',appinfo='explanation of purpose',name='description',type='SFString'),
          field(accessType='inputOutput',appinfo='default value true',name='enabled',type='SFBool'),
          field(accessType='inputOnly',appinfo='reset the skeleton to I pose with all joints zeroed',name='resetAllJoints',type='SFBool'),
          field(accessType='inputOutput',appinfo='joint values to apply to HAnimHumanoid',name='children',type='MFNode',
            # initializating Joint nodes (if any) go here
            ),
          field(accessType='inputOutput',appinfo='how many seconds to achieve the pose',name='transitionDuration',type='SFTime'),
          field(accessType='inputOnly',appinfo='this event tells the HAnimPose node to fully transition, equivalent to set_fraction=1',name='commencePose',type='SFBool'),
          field(accessType='inputOnly',appinfo='allows transition to proceed incrementally from fraction [0..10',name='set_fraction',type='SFFloat'),
          field(accessType='inputOnly',appinfo='starts the animation clock',name='set_startTime',type='SFTime'),
          field(accessType='inputOnly',appinfo='possible notification from LoadSensor if using HAnimHumanoid Inline/IMPORT AS/USE',name='isLoaded',type='SFBool'),
          field(accessType='inputOutput',appinfo='debug trace to Browser output console',name='traceEnabled',type='SFBool'),
          field(accessType='initializeOnly',appinfo='number of joints found in children field',name='numberPoseJoints',type='SFInt32',value=0),
          field(accessType='initializeOnly',appinfo='number of joints found in Humanoid',name='numberSkeletonJoints',type='SFInt32',value=0),
          field(accessType='initializeOnly',appinfo='OrientationInterpolator node array matching number of children',name='jointOrientationInterpolators',type='MFNode',
            # initializating Joint nodes (if any) go here
            )],
          IS=IS(
            connect=[
            connect(nodeField='parentHAnimHumanoid',protoField='parentHAnimHumanoid'),
            connect(nodeField='name',protoField='name'),
            connect(nodeField='loa',protoField='loa'),
            connect(nodeField='description',protoField='description'),
            connect(nodeField='enabled',protoField='enabled'),
            connect(nodeField='resetAllJoints',protoField='resetAllJoints'),
            connect(nodeField='children',protoField='children'),
            connect(nodeField='transitionDuration',protoField='transitionDuration'),
            connect(nodeField='commencePose',protoField='commencePose'),
            connect(nodeField='set_fraction',protoField='set_fraction'),
            connect(nodeField='set_startTime',protoField='set_startTime'),
            connect(nodeField='isLoaded',protoField='isLoaded'),
            connect(nodeField='traceEnabled',protoField='traceEnabled')]),

        sourceCode="""
ecmascript:

""")])),
    Viewpoint(description='HAnimPose for HumanoidInline IMPORT model',position=(0,1,4)),
    Comment(' no longer required: including full model <HAnimHumanoid DEF=\'hanim_JinLOA1\' loa=\'2\' name=\'JinLOA1\' scale=\'0.0225 0.0225 0.0225\'> etc... '),
    ProtoInstance(DEF='T_Pose',name='HAnimPose',
      fieldValue=[
      fieldValue(name='name',value='T'),
      fieldValue(name='enabled',value=True),
      fieldValue(name='parentHAnimHumanoid',
        # HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
        # debug test case for incorrect node type: <HAnimJoint DEF="ErrorDiagnosticsTest" USE='HumanoidImported'/>
        HAnimHumanoid(USE='HumanoidImported',version='2.0')]),
      fieldValue(name='loa',value=1),
      fieldValue(name='description',value='arms stretched outward and level similar to letter T'),
      fieldValue(name='children',
        children=[
        HAnimJoint(DEF='PoseJoint_l_shoulder_1',description='left shoulder',name='l_shoulder',rotation=(0,0,1,1.57),ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(DEF='PoseJoint_r_shoulder_1',description='right shoulder',name='r_shoulder',rotation=(0,0,-1,1.57),ulimit=[0,0,0],llimit=[0,0,0]),
        # test case for illegal child triggers validation reports without problem: HAnimSegment DEF='TestCase' description='confirm type checking' name='specialTestCase'/
        ),
      fieldValue(name='transitionDuration',value=1.3)]),
    ProtoInstance(DEF='A_Pose',name='HAnimPose',
      fieldValue=[
      fieldValue(name='name',value='A'),
      fieldValue(name='enabled',value=True),
      fieldValue(name='parentHAnimHumanoid',
        # HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
        HAnimHumanoid(USE='HumanoidImported',version='2.0')]),
      fieldValue(name='loa',value=1),
      fieldValue(name='description',value='arms stretched outward and downward similar to letter A'),
      fieldValue(name='children',
        children=[
        HAnimJoint(DEF='PoseJoint_l_shoulder',description='left shoulder',name='l_shoulder',rotation=(0,0,1,0.5),ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(DEF='PoseJoint_r_shoulder',description='right shoulder',name='r_shoulder',rotation=(0,0,-1,0.5),ulimit=[0,0,0],llimit=[0,0,0])]),
      fieldValue(name='transitionDuration',value=1.2),
      fieldValue(name='traceEnabled',value=True)]),
    ProtoInstance(DEF='TouchDown_Pose',name='HAnimPose',
      children=[
      Comment(' thanks Joe '),
      fieldValue(name='name',value='TouchDown'),
      fieldValue(name='enabled',value=True),
      fieldValue(name='parentHAnimHumanoid',
        # HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
        HAnimHumanoid(USE='HumanoidImported',version='2.0')]),
      fieldValue(name='loa',value=1),
      fieldValue(name='description',value='arms and legs stretched outward providing a TouchDown gesture'),
      fieldValue(name='children',
        children=[
        HAnimJoint(name='humanoid_root',rotation=(0,1,0,-0.698132),ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(name='l_hip',rotation=(-1,1,1,1),ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(name='l_knee',rotation=(1,0,0,1),ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(name='l_talocrural',rotation=(-0.2,-0,0.1,0.225),ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(name='r_hip',rotation=(-1,-1,-1,1),ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(name='r_knee',rotation=(1,0,0,1),ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(name='r_talocrural',rotation=(-0.2,0,0.1,0.25),ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(name='vl5',rotation=(0,0,0.01,0.2),ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(name='vt10',rotation=(0,0,0.01,0.1),ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(name='vc4',rotation=(0,0,-0.01,0.15),ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(name='l_shoulder',rotation=(-1,0.5,1,2),ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(name='l_elbow',rotation=(-1,0,0,1),ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(name='l_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(name='r_shoulder',rotation=(-1,-0.5,-1,2.6),ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(name='r_elbow',rotation=(-1,0,0,1),ulimit=[0,0,0],llimit=[0,0,0]),
        HAnimJoint(name='r_radiocarpal',ulimit=[0,0,0],llimit=[0,0,0])]),
      fieldValue(name='transitionDuration',value=1.2),
      fieldValue(name='traceEnabled',value=True)]),
    ProtoInstance(DEF='I_Pose',name='HAnimPose',
      fieldValue=[
      fieldValue(name='name',value='I'),
      fieldValue(name='enabled',value=True),
      fieldValue(name='parentHAnimHumanoid',
        # HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
        HAnimHumanoid(USE='HumanoidImported',version='2.0')]),
      fieldValue(name='loa',value=1),
      fieldValue(name='description',value='arms and legs straight down default binding pose for baseline Humanoid'),
      fieldValue(name='children',
        # not defining any children equals the default "I" pose
        ),
      fieldValue(name='transitionDuration',value=1.5),
      fieldValue(name='traceEnabled',value=True)]),
    ProtoInstance(DEF='H_Pose',name='HAnimPose',
      fieldValue=[
      fieldValue(name='name',value='H'),
      fieldValue(name='enabled',value=False),
      Comment(' <fieldValue name=\'loa\' value=\'1\'/> '),
      fieldValue(name='description',value='TODO experimental pose not yet implemented'),
      fieldValue(name='transitionDuration',value=1.4),
      fieldValue(name='traceEnabled',value=True)]),
    ProtoInstance(DEF='FaceLeft_Pose',name='HAnimPose',
      fieldValue=[
      fieldValue(name='name',value='FaceLeft'),
      fieldValue(name='enabled',value=True),
      fieldValue(name='parentHAnimHumanoid',
        # HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
        HAnimHumanoid(USE='HumanoidImported',version='2.0')]),
      fieldValue(name='loa',value=0),
      fieldValue(name='description',value='Only modify humanoid_root Joint node to face left'),
      fieldValue(name='children',
        children=[
        HAnimJoint(DEF='FaceLeft_humanoid_root',description='Only rotate the model',name='humanoid_root',rotation=(0,1,0,1.570796),ulimit=[0,0,0],llimit=[0,0,0])]),
      fieldValue(name='transitionDuration',value=1.1),
      fieldValue(name='traceEnabled',value=True)]),
    ProtoInstance(DEF='FaceRight_Pose',name='HAnimPose',
      fieldValue=[
      fieldValue(name='name',value='FaceRight'),
      fieldValue(name='enabled',value=True),
      fieldValue(name='parentHAnimHumanoid',
        # HumanoidImported for Inline/IMPORT (or else USE='hanim_JinLOA1' if copy of original HAnimHumanoid is embedded in this model)
        HAnimHumanoid(USE='HumanoidImported',version='2.0')]),
      fieldValue(name='loa',value=0),
      fieldValue(name='description',value='Only modify humanoid_root Joint node to face right'),
      fieldValue(name='children',
        children=[
        HAnimJoint(DEF='FaceRight_humanoid_root',description='Only rotate the model',name='humanoid_root',rotation=(0,1,0,-1.570796),ulimit=[0,0,0],llimit=[0,0,0])]),
      fieldValue(name='transitionDuration',value=1.1),
      fieldValue(name='traceEnabled',value=True)]),
    Group(DEF='InterfaceButtonsGroup',
      children=[
      Transform(DEF='DisplayHeader',translation=(0,2,0),
        children=[
        Shape(
          geometry=Text(string=["HAnimPosePrototype example implementation"],
            fontStyle=FontStyle(DEF='HeaderFont',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.15,style_='BOLD')),
          appearance=Appearance(DEF='PoseTextAppearance',
            material=Material(diffuseColor=(0.1,0.5,0.3))))]),
      Transform(DEF='T_PoseInterface',translation=(-1.5,1.5,0),
        children=[
        Shape(
          geometry=Text(string=["\"T\" Pose"],
            fontStyle=FontStyle(DEF='SharedFont',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.1,style_='BOLD')),
          appearance=Appearance(USE='PoseTextAppearance')),
        Shape(
          appearance=Appearance(DEF='TransparentAppearance',
            material=Material(transparency=0.8)),
          geometry=Box(size=(0.45,0.2,0.001))),
        TouchSensor(DEF='T_PoseTouchSensor',description='select to move shoulders to "T" pose, leave other joints unchanged'),
        ROUTE(fromField='isActive',fromNode='T_PoseTouchSensor',toField='commencePose',toNode='T_Pose')]),
      Transform(DEF='A_PoseInterface',translation=(-1.5,1,0),
        children=[
        Shape(
          geometry=Text(string=["\"A\" Pose"],
            fontStyle=FontStyle(USE='SharedFont')),
          appearance=Appearance(USE='PoseTextAppearance')),
        Shape(
          # Selectable Text transparent Box for easy user selection
          appearance=Appearance(USE='TransparentAppearance'),
          geometry=Box(size=(0.45,0.2,0.001))),
        TouchSensor(DEF='A_PoseTouchSensor',description='select to move shoulders to "A" pose, leave other joints unchanged'),
        ROUTE(fromField='isActive',fromNode='A_PoseTouchSensor',toField='commencePose',toNode='A_Pose')]),
      Transform(DEF='TouchDown_PoseInterface',translation=(-1.5,0.5,0),
        children=[
        Shape(
          geometry=Text(string=["TouchDown Pose"],
            fontStyle=FontStyle(USE='SharedFont')),
          appearance=Appearance(USE='PoseTextAppearance')),
        Shape(
          # Selectable Text transparent Box for easy user selection
          appearance=Appearance(USE='TransparentAppearance'),
          geometry=Box(size=(0.85,0.2,0.001))),
        TouchSensor(DEF='TouchDown_PoseTouchSensor',description='select to transition all joints to TouchDown pose'),
        ROUTE(fromField='isActive',fromNode='TouchDown_PoseTouchSensor',toField='commencePose',toNode='TouchDown_Pose')]),
      Transform(DEF='I_PoseInterface',translation=(-1.5,0.0,0),
        children=[
        Shape(
          geometry=Text(string=["\"I\" Pose"],
            fontStyle=FontStyle(USE='SharedFont')),
          appearance=Appearance(USE='PoseTextAppearance')),
        Shape(
          # Selectable Text transparent Box for easy user selection
          appearance=Appearance(USE='TransparentAppearance'),
          geometry=Box(size=(0.45,0.2,0.001))),
        TouchSensor(DEF='I_PoseTouchSensor',description='select to transition all joints to "I" pose'),
        ROUTE(fromField='isActive',fromNode='I_PoseTouchSensor',toField='commencePose',toNode='I_Pose')]),
      Transform(DEF='FaceLeftPoseInterface',translation=(1.5,1.5,0),
        children=[
        Shape(
          geometry=Text(string=["Face Left Pose"],
            fontStyle=FontStyle(USE='SharedFont')),
          appearance=Appearance(USE='PoseTextAppearance')),
        Shape(
          appearance=Appearance(USE='TransparentAppearance'),
          geometry=Box(size=(0.9,0.2,0.001))),
        TouchSensor(DEF='FaceLeftTouchSensor',description='select to rotate body and Face Left, leave other joints unchanged'),
        ROUTE(fromField='isActive',fromNode='FaceLeftTouchSensor',toField='commencePose',toNode='FaceLeft_Pose')]),
      Transform(DEF='FaceRightPoseInterface',translation=(1.5,1,0),
        children=[
        Shape(
          geometry=Text(string=["Face Right Pose"],
            fontStyle=FontStyle(USE='SharedFont')),
          appearance=Appearance(USE='PoseTextAppearance')),
        Shape(
          # Selectable Text transparent Box for easy user selection
          appearance=Appearance(USE='TransparentAppearance'),
          geometry=Box(size=(0.9,0.2,0.001))),
        TouchSensor(DEF='FaceRightTouchSensor',description='select to rotate body and Face Right, leave other joints unchanged'),
        ROUTE(fromField='isActive',fromNode='FaceRightTouchSensor',toField='commencePose',toNode='FaceRight_Pose')]),
      Transform(DEF='AnimatePosesInterface',translation=(1.5,0.5,0),
        children=[
        Shape(
          geometry=Text(string=["Direct animation","to, from \"I\" Pose"],
            fontStyle=FontStyle(USE='SharedFont')),
          appearance=Appearance(DEF='AnimationTextAppearance',
            material=Material(diffuseColor=(0.1,0.2,0.3)))),
        Shape(
          # Selectable Text transparent Box for easy user selection
          appearance=Appearance(USE='TransparentAppearance'),
          geometry=Box(size=(0.9,0.25,0.001))),
        TouchSensor(DEF='AnimatePosesTouchSensor',description='select to animate current pose to "I" pose, then back to original pose, using TimeSensor events'),
        Comment(' cycleInterval=4 also hard-coded in script execution message '),
        TimeSensor(DEF='AnimatePosesClock',cycleInterval=4,description='directly animate several poses'),
        ScalarInterpolator(DEF='AnimatePosesLoopInterpolator',key=[0,0.05,0.45,0.55,0.95,1],keyValue=[0,0,1,1,0,0]),
        ROUTE(fromField='touchTime',fromNode='AnimatePosesTouchSensor',toField='startTime',toNode='AnimatePosesClock'),
        ROUTE(fromField='fraction_changed',fromNode='AnimatePosesClock',toField='set_fraction',toNode='AnimatePosesLoopInterpolator'),
        ROUTE(fromField='value_changed',fromNode='AnimatePosesLoopInterpolator',toField='set_fraction',toNode='I_Pose')]),
      Transform(DEF='ResetDefaultPoseInterface',translation=(1.5,0.0,0),
        children=[
        Shape(
          geometry=Text(string=["Reset All Joints","to Default \"I\" Pose"],
            fontStyle=FontStyle(USE='SharedFont')),
          appearance=Appearance(USE='AnimationTextAppearance')),
        Shape(
          # Selectable Text transparent Box for easy user selection
          appearance=Appearance(USE='TransparentAppearance'),
          geometry=Box(size=(0.9,0.25,0.001))),
        TouchSensor(DEF='ResetPoseTouchSensor',description='select to immediately Rezero All Joints (to default "I" Pose) by sending resetAllJoints event'),
        ROUTE(fromField='isActive',fromNode='ResetPoseTouchSensor',toField='resetAllJoints',toNode='FaceLeft_Pose')])]),
    Group(DEF='HandleInlineLoadsensorRouting',
      children=[
      ROUTE(fromField='isLoaded',fromNode='HumanoidInlineLoadSensor',toField='isLoaded',toNode='A_Pose'),
      ROUTE(fromField='isLoaded',fromNode='HumanoidInlineLoadSensor',toField='isLoaded',toNode='H_Pose'),
      ROUTE(fromField='isLoaded',fromNode='HumanoidInlineLoadSensor',toField='isLoaded',toNode='I_Pose'),
      ROUTE(fromField='isLoaded',fromNode='HumanoidInlineLoadSensor',toField='isLoaded',toNode='T_Pose'),
      ROUTE(fromField='isLoaded',fromNode='HumanoidInlineLoadSensor',toField='isLoaded',toNode='FaceLeft_Pose'),
      ROUTE(fromField='isLoaded',fromNode='HumanoidInlineLoadSensor',toField='isLoaded',toNode='FaceRight_Pose'),
      ROUTE(fromField='isLoaded',fromNode='HumanoidInlineLoadSensor',toField='isLoaded',toNode='TouchDown_Pose')])])
)
### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for HAnimPosePrototype.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python HAnimPosePrototype.py load and self-test diagnostics complete.")
