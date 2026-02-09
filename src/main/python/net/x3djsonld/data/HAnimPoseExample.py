####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python HAnimPoseExample.py
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
# Project home page:    # X3D Python Scene Access Interface Library (X3DPSAIL)
#                       # https://www.web3d.org/x3d/stylesheets/python/python.html
# Conversion generator: # https://www.web3d.org/x3d/stylesheets/X3dToPython.xslt
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Full',version='4.1',
  head=head(
    children=[
    meta(content='HAnimPoseExample.x3d',name='title'),
    meta(content='Native XML definition of an experimental new node to simply capture a single pose for an HAnimHumanoid model. Expected usage is to allow HAnimHumanoid to contain multiple Pose nodes which can be activated and composed.',name='description'),
    meta(content='11 December 2025',name='created'),
    meta(content='14 December 2025',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='under development for X3D 4.1',name='warning'),
    meta(content='HAnim Architecture volume 1 version 2.1 draft, clause 6 Object interfaces, section 6.4 Pose',name='specificationSection'),
    meta(content='https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/ObjectInterfaces.html#Pose',name='specificationUrl'),
    meta(content='HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.2 Modelling of human-like HAnim figures',name='specificationSection'),
    meta(content='https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#ModellingHumanLikeHAnimFigures',name='specificationUrl'),
    meta(content='HAnim Architecture volume 1 version 2.1 draft, clause 4 Concepts, section 4.8.3 Poses',name='specificationSection'),
    meta(content='https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19774/ISO-IEC19774-1/ISO-IEC19774-1v2.1/ISO-IEC19774-1v2.1-WD/Architecture/concepts.html#Poses',name='specificationUrl'),
    meta(content='X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit',name='generator'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Poses/HAnimPoseExample.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(DEF='ModelInfo',info=["Example scene for HAnimPose node"],title='HAnimPoseExample.x3d'),
    Background(skyColor=[(0.8,0.8,1)]),
    NavigationInfo(),
    Group(DEF='HandleInlineLoading',
      children=[
      Comment(' Multiple HAnimHumanoid Inline/IMPORT models are available to support testing: Characters/ JinLOA1 JinLOA2 JinLOA3 JinLOA4 ../Skin/JoeKick ../Skin/JoeSkeletonSkinSite ../Skin/BoxMan1 ../Skin/BoxMan2 '),
      Comment(' Also tested satisfactorily: KoreanCharacter01Jin KoreanCharacter02Chul KoreanCharacter03Hyun KoreanCharacter04Young KoreanCharacter05Ju KoreanCharacter06Ga KoreanCharacter07No KoreanCharacter08Da KoreanCharacter09Ru KoreanCharacter10Mi KoreanCharacter11Min KoreanCharacter12Sun '),
      Inline(DEF='HumanoidInline',description='remote HAnimHumanoid for IMPORT',url=["../Skin/JoeSkeletonSkinSite.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d"]),
      Comment(' Note that the following importedDEF must match the EXPORT name found in remote file '),
      IMPORT(AS='HumanoidImported',importedDEF='JoeSkeletonSkinSite',inlineDEF='HumanoidInline'),
      LoadSensor(DEF='HumanoidInlineLoadSensor',timeOut=2,
        children=[
        Inline(USE='HumanoidInline')])]),
    Viewpoint(description='HAnimPose for HumanoidInline IMPORT model',position=(0,1,4)),
    Comment(' no longer required: including full model <HAnimHumanoid DEF=\'hanim_JinLOA1\' loa=\'2\' name=\'JinLOA1\' scale=\'0.0225 0.0225 0.0225\'> etc... '),
    HAnimPose(DEF='T_Pose',description='arms stretched outward and level similar to letter T',loa=1,name='T',transitionDuration=1.3,
      metadata=MetadataString(name='metadataTest',value=["hello HAnimPose metadata"]),
      Comment(' test case for illegal child triggers validation reports without problem: HAnimSegment DEF=\'TestCase\' description=\'confirm type checking\' name=\'specialTestCase\'/ '),
      HAnimJoint(DEF='PoseJoint_l_shoulder_1',description='left shoulder',name='l_shoulder',rotation=(0,0,1,1.57)),
      HAnimJoint(DEF='PoseJoint_r_shoulder_1',description='right shoulder',name='r_shoulder',rotation=(0,0,-1,1.57))]),
    HAnimPose(DEF='A_Pose',description='arms stretched outward and downward similar to letter A',loa=1,name='A',transitionDuration=1.2,
      children=[
      HAnimJoint(DEF='PoseJoint_l_shoulder',description='left shoulder',name='l_shoulder',rotation=(0,0,1,0.5)),
      HAnimJoint(DEF='PoseJoint_r_shoulder',description='right shoulder',name='r_shoulder',rotation=(0,0,-1,0.5))]),
    HAnimPose(DEF='TouchDown_Pose',description='arms and legs stretched outward providing a TouchDown gesture',loa=1,name='TouchDown',transitionDuration=1.2,
      children=[
      HAnimJoint(name='humanoid_root',rotation=(0,1,0,-0.698132)),
      HAnimJoint(name='l_hip',rotation=(-1,1,1,1)),
      HAnimJoint(name='l_knee',rotation=(1,0,0,1)),
      HAnimJoint(name='l_talocrural',rotation=(-0.2,-0,0.1,0.225)),
      HAnimJoint(name='r_hip',rotation=(-1,-1,-1,1)),
      HAnimJoint(name='r_knee',rotation=(1,0,0,1)),
      HAnimJoint(name='r_talocrural',rotation=(-0.2,0,0.1,0.25)),
      HAnimJoint(name='vl5',rotation=(0,0,0.01,0.2)),
      HAnimJoint(name='vt10',rotation=(0,0,0.01,0.1)),
      HAnimJoint(name='vc4',rotation=(0,0,-0.01,0.15)),
      HAnimJoint(name='l_shoulder',rotation=(-1,0.5,1,2)),
      HAnimJoint(name='l_elbow',rotation=(-1,0,0,1)),
      HAnimJoint(name='l_radiocarpal'),
      HAnimJoint(name='r_shoulder',rotation=(-1,-0.5,-1,2.6)),
      HAnimJoint(name='r_elbow',rotation=(-1,0,0,1)),
      HAnimJoint(name='r_radiocarpal')]),
    HAnimPose(DEF='I_Pose',description='arms and legs straight down default binding pose for baseline Humanoid',loa=1,name='I',transitionDuration=1.5,
      children=[
      Comment(' not defining any poseJoint HAnimJoint nodes equals the default "I" pose '),],),
    HAnimPose(DEF='H_Pose',description='TODO experimental pose not yet implemented',enabled=False,name='H',transitionDuration=1.4,loa=-1,
      children=[
      Comment(' TODO define poseJoint HAnimJoint nodes '),],),
    HAnimPose(DEF='FaceLeft_Pose',description='Only modify humanoid_root Joint node to face left',loa=0,name='FaceLeft',transitionDuration=1.1,
      children=[
      HAnimJoint(DEF='FaceLeft_humanoid_root',description='Only rotate the model',name='humanoid_root',rotation=(0,1,0,1.570796))]),
    HAnimPose(DEF='FaceRight_Pose',description='Only modify humanoid_root Joint node to face right',loa=0,name='FaceRight',transitionDuration=1.1,
      children=[
      HAnimJoint(DEF='FaceRight_humanoid_root',description='Only rotate the model',name='humanoid_root',rotation=(0,1,0,-1.570796))]),
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
      ROUTE(fromField='isLoaded',fromNode='HumanoidInlineLoadSensor',toField='isLoaded',toNode='TouchDown_Pose')]),
    HAnimHumanoid(info=["humanoidVersion=2.0"],name='HumanoidStub',version='2.0',)])
)

### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for HAnimPoseExample.py:')
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

print("python HAnimPoseExample.py load and self-test diagnostics complete.")
