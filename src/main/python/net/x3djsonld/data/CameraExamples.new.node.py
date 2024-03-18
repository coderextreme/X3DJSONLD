####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python CameraExamples.py
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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='CameraExamples.x3d',name='title'),
    meta(content='Camera, CameraShot and CameraMove examples that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.',name='description'),
    meta(content='Two demos are found in the scene, click the "red text" on left or right to start. (a) SimpleShotsTest shows Zoom in/out, Pan left/right, Boom up/down, Tilt left/right, with each is defined by a CameraShot collecting a series of CameraMovements. (b) AimPointTest gradually slews the camera view to look at the sliding cube, then follows it around before returning to original viewpoint.',name='documentation'),
    meta(content='Don Brutzman and Jeff Weekley',name='creator'),
    meta(content='18 June 2009',name='created'),
    meta(content='20 January 2020',name='modified'),
    meta(content='Schematron rules, backed up by initialize() checks',name='TODO'),
    meta(content='BeyondViewpointCameraNodesWeb3D2009.pdf',name='reference'),
    meta(content='CameraExamplesDemo.mp4',name='MovingImage'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html',name='reference'),
    meta(content='Camera nodes for Viewpoint navigation control',name='subject'),
    meta(content='CameraPrototypes.x3d',name='reference'),
    meta(content='CameraExamplesConsoleLog.txt',name='reference'),
    meta(content='http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.avi',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d',name='identifier'),
    meta(content='http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  =============== Camera ============== 
    children=[
    WorldInfo(title='CameraExamples.x3d'),
    ExternProtoDeclare(name='Camera',appinfo='Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images',url=["CameraPrototypes.x3d#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#Camera","CameraPrototypes.wrl#Camera","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#Camera"],
      #  Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields 
      field=[
      field(name='description',accessType='inputOutput',appinfo='Text description to be displayed for this Camera',type='SFString'),
      field(name='position',accessType='inputOutput',appinfo='Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated',type='SFVec3f'),
      field(name='orientation',accessType='inputOutput',appinfo='Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated',type='SFRotation'),
      field(name='fieldOfView',accessType='inputOutput',appinfo='pi/4',type='SFFloat'),
      field(name='set_fraction',accessType='inputOnly',appinfo='input fraction drives interpolators',type='SFFloat'),
      field(name='set_bind',accessType='inputOnly',appinfo='input event binds or unbinds this Camera',type='SFBool'),
      field(name='bindTime',accessType='outputOnly',appinfo='output event indicates when this Camera is bound',type='SFTime'),
      field(name='isBound',accessType='outputOnly',appinfo='output event indicates whether this Camera is bound or unbound',type='SFBool'),
      field(name='nearClipPlane',accessType='inputOutput',appinfo='Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]',type='SFFloat'),
      field(name='farClipPlane',accessType='inputOutput',appinfo='Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit',type='SFFloat'),
      field(name='shots',accessType='inputOutput',appinfo='Array of CameraShot nodes which in turn contain CameraMovement nodes',type='MFNode'),
      field(name='headlight',accessType='inputOutput',appinfo='Whether camera headlight is on or off',type='SFBool'),
      field(name='headlightColor',accessType='inputOutput',appinfo='Camera headlight color',type='SFColor'),
      field(name='headlightIntensity',accessType='inputOutput',appinfo='Camera headlight intensity',type='SFFloat'),
      field(name='filterColor',accessType='inputOutput',appinfo='Camera filter color that modifies virtual lens capture',type='SFColor'),
      field(name='filterTransparency',accessType='inputOutput',appinfo='Camera filter transparency that modifies virtual lens capture',type='SFFloat'),
      field(name='upVector',accessType='inputOutput',appinfo='upVector changes modify camera orientation (and possibly vice versa)',type='SFVec3f'),
      field(name='fStop',accessType='inputOutput',appinfo='Focal length divided effective aperture diameter indicating width of focal plane',type='SFFloat'),
      field(name='focusDistance',accessType='inputOutput',appinfo='Distance to focal plane of sharpest focus',type='SFFloat'),
      field(name='isActive',accessType='outputOnly',appinfo='Mark start/stop with true/false output respectively useful to trigger external animations',type='SFBool'),
      field(name='totalDuration',accessType='outputOnly',appinfo='Total duration of contained enabled CameraShot (and thus CameraMovement) move durations',type='SFTime'),
      field(name='offlineRender',accessType='inputOutput',appinfo='OfflineRender node',type='SFNode'),
      field(name='traceEnabled',accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',type='SFBool')]),
    #  =============== CameraShot ============== 
    ExternProtoDeclare(name='CameraShot',appinfo='CameraShot collects a specific set of CameraMovement animations that make up an individual shot',url=["CameraPrototypes.x3d#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraShot","CameraPrototypes.wrl#CameraShot","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraShot"],
      field=[
      field(name='description',accessType='inputOutput',appinfo='Text description to be displayed for this CameraShot',type='SFString'),
      field(name='enabled',accessType='inputOutput',appinfo='Whether this CameraShot can be activated',type='SFBool'),
      field(name='moves',accessType='inputOutput',appinfo='Set of CameraMovement nodes',type='MFNode',
        #  initializing CameraMovement nodes are inserted here by scene author using ProtoInstance 
        ),
      field(name='initialPosition',accessType='inputOutput',appinfo='Setup to reinitialize camera position for this shot',type='SFVec3f'),
      field(name='initialOrientation',accessType='inputOutput',appinfo='Setup to reinitialize camera rotation for this shot',type='SFRotation'),
      field(name='initialAimPoint',accessType='inputOutput',appinfo='Setup to reinitialize aimpoint (relative location for camera direction) for this shot',type='SFVec3f'),
      field(name='initialFieldOfView',accessType='inputOutput',appinfo='pi/4',type='SFFloat'),
      field(name='initialFStop',accessType='inputOutput',appinfo='Focal length divided effective aperture diameter indicating width of focal plane',type='SFFloat'),
      field(name='initialFocusDistance',accessType='inputOutput',appinfo='Distance to focal plane of sharpest focus',type='SFFloat'),
      field(name='shotDuration',accessType='outputOnly',appinfo='Subtotal duration of contained CameraMovement move durations',type='SFTime'),
      field(name='isActive',accessType='outputOnly',appinfo='Mark start/stop with true/false output respectively useful to trigger external animations',type='SFBool'),
      field(name='traceEnabled',accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',type='SFBool')]),
    #  =============== CameraMovement ============== 
    ExternProtoDeclare(name='CameraMovement',appinfo='CameraMovement defines a single camera movement animation',url=["CameraPrototypes.x3d#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#CameraMovement","CameraPrototypes.wrl#CameraMovement","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#CameraMovement"],
      field=[
      field(name='description',accessType='inputOutput',appinfo='Text description to be displayed for this CameraMovement',type='SFString'),
      field(name='enabled',accessType='inputOutput',appinfo='Whether this CameraMovement can be activated',type='SFBool'),
      field(name='duration',accessType='inputOutput',appinfo='Duration in seconds for this move',type='SFFloat'),
      field(name='goalPosition',accessType='inputOutput',appinfo='Goal camera position for this move',type='SFVec3f'),
      field(name='goalOrientation',accessType='inputOutput',appinfo='Goal camera rotation for this move',type='SFRotation'),
      field(name='tracking',accessType='inputOutput',appinfo='Whether or not camera direction is tracking towards the aimPoint',type='SFBool'),
      field(name='goalAimPoint',accessType='inputOutput',appinfo='Goal aimPoint for this move, ignored if tracking=false',type='SFVec3f'),
      field(name='goalFieldOfView',accessType='inputOutput',appinfo='Goal fieldOfView for this move',type='SFFloat'),
      field(name='goalFStop',accessType='inputOutput',appinfo='Focal length divided effective aperture diameter indicating width of focal plane',type='SFFloat'),
      field(name='goalFocusDistance',accessType='inputOutput',appinfo='Distance to focal plane of sharpest focus',type='SFFloat'),
      field(name='isActive',accessType='outputOnly',appinfo='Mark start/stop with true/false output respectively useful to trigger external animations',type='SFBool'),
      field(name='traceEnabled',accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',type='SFBool')]),
    #  =============== OfflineRender ============== 
    ExternProtoDeclare(name='OfflineRender',appinfo='OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)',url=["CameraPrototypes.x3d#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d#OfflineRender","CameraPrototypes.wrl#OfflineRender","https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.wrl#OfflineRender"],
      #  TODO non-photorealistic rendering (NPR) parameters 
      field=[
      field(name='description',accessType='inputOutput',appinfo='Text description to be displayed for this OfflineRender',type='SFString'),
      field(name='enabled',accessType='inputOutput',appinfo='Whether this OfflineRender can be activated',type='SFBool'),
      field(name='frameRate',accessType='inputOutput',appinfo='Frames per second recorded for this rendering',type='SFFloat'),
      field(name='frameSize',accessType='inputOutput',appinfo='Size of frame in number of pixels width and height',type='SFVec2f'),
      field(name='pixelAspectRatio',accessType='inputOutput',appinfo='Relative dimensions of pixel height/width typically 1.33 or 1',type='SFFloat'),
      field(name='set_startTime',accessType='inputOnly',appinfo='Begin render operation',type='SFTime'),
      field(name='progress',accessType='outputOnly',appinfo='Progress performing render operation (0..1)',type='SFFloat'),
      field(name='renderCompleteTime',accessType='outputOnly',appinfo='Render operation complete',type='SFTime'),
      field(name='movieFormat',accessType='initializeOnly',appinfo='Format of rendered output movie (mpeg mp4 etc.), use first supported format',type='MFString'),
      field(name='imageFormat',accessType='initializeOnly',appinfo='Format of rendered output images (png jpeg gif tiff etc.) use first supported format',type='MFString'),
      field(name='traceEnabled',accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',type='SFBool')]),
    #  =============== Lights, camera, action! ============== 
    DirectionalLight(direction=(0,-1,0),global_=True,intensity=0.8),
    NavigationInfo(type='"EXAMINE" "FLY" "ANY"'),
    Viewpoint(description='Camera test scene entry view',position=(0,2,12)),
    Viewpoint(description='Camera test scene from above',orientation=(1,0,0,-1.57079),position=(0,150,0)),
    #  Keep prototype instances in same file while developing, then move later 
    #  We will create examples matching those in the paper 
    #  =============== Camera.SimpleShotsTest ============== 
    ProtoInstance(DEF='Camera.SimpleShotsTest',name='Camera',
      fieldValue=[
      fieldValue(name='description',value='SimpleShotsTest for camera Zoom Dolly Pan Boom and Tilt'),
      fieldValue(name='headlight',value=True),
      fieldValue(name='position',value=(-4,4,10)),
      fieldValue(name='shots',
        children=[
        ProtoInstance(DEF='Zoom',name='CameraShot',
          fieldValue=[
          fieldValue(name='description',value='Simple shot of Camera Zoom'),
          fieldValue(name='initialPosition',value=(-50,1,-10)),
          fieldValue(name='initialOrientation',value=(0,1,0,0)),
          fieldValue(name='moves',
            children=[
            ProtoInstance(name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Camera Zoom In'),
              fieldValue(name='duration',value=3.0),
              fieldValue(name='goalPosition',value=(-50,1,-15)),
              fieldValue(name='goalOrientation',value=(0,1,0,0))]),
            ProtoInstance(name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Camera Zoom Out'),
              fieldValue(name='duration',value=3.0),
              fieldValue(name='goalPosition',value=(-50,1,-10)),
              fieldValue(name='goalOrientation',value=(0,1,0,0))]),
            ProtoInstance(name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Camera Pause'),
              fieldValue(name='duration',value=1.0),
              fieldValue(name='goalPosition',value=(-50,1,-10)),
              fieldValue(name='goalOrientation',value=(0,1,0,0))])])]),
        ProtoInstance(DEF='Dolly',name='CameraShot',
          fieldValue=[
          fieldValue(name='description',value='Simple shot of Camera Dolly'),
          fieldValue(name='initialPosition',value=(-40,1,-10)),
          fieldValue(name='initialOrientation',value=(0,1,0,0)),
          fieldValue(name='moves',
            children=[
            ProtoInstance(DEF='DollyMove1',name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Camera Dolly from Right to Left'),
              fieldValue(name='duration',value=3.0),
              fieldValue(name='goalPosition',value=(-45,1,-10)),
              fieldValue(name='goalOrientation',value=(0,1,0,0))]),
            ProtoInstance(name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Camera Dolly from Left to Right'),
              fieldValue(name='duration',value=3.0),
              fieldValue(name='goalPosition',value=(-40,1,-10)),
              fieldValue(name='goalOrientation',value=(0,1,0,0))]),
            ProtoInstance(name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Camera Pause'),
              fieldValue(name='duration',value=1.0),
              fieldValue(name='goalPosition',value=(-40,1,-10)),
              fieldValue(name='goalOrientation',value=(0,1,0,0))])])]),
        ProtoInstance(DEF='Pan',name='CameraShot',
          fieldValue=[
          fieldValue(name='description',value='Simple shot of Camera Pan left right and back to center'),
          fieldValue(name='initialPosition',value=(-30,1,-10)),
          fieldValue(name='initialOrientation',value=(0,1,0,0)),
          fieldValue(name='moves',
            children=[
            ProtoInstance(DEF='PanLeft',name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Pan Left'),
              fieldValue(name='duration',value=2.0),
              fieldValue(name='goalPosition',value=(-30,1,-10)),
              fieldValue(name='goalOrientation',value=(0,1,0,0.4))]),
            ProtoInstance(DEF='PanRight',name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Pan Right'),
              fieldValue(name='duration',value=3.0),
              fieldValue(name='goalPosition',value=(-30,1,-10)),
              fieldValue(name='goalOrientation',value=(0,1,0,-0.4))]),
            ProtoInstance(name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Camera Pan back to Center'),
              fieldValue(name='duration',value=2.0),
              fieldValue(name='goalPosition',value=(-30,1,-10)),
              fieldValue(name='goalOrientation',value=(0,1,0,0))]),
            ProtoInstance(name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Camera Pause'),
              fieldValue(name='duration',value=2.0),
              fieldValue(name='goalPosition',value=(-30,1,-10)),
              fieldValue(name='goalOrientation',value=(0,1,0,0))])])]),
        ProtoInstance(DEF='CameraBoom',name='CameraShot',
          fieldValue=[
          fieldValue(name='description',value='Camera Boom'),
          fieldValue(name='initialPosition',value=(-20,1,-10)),
          fieldValue(name='initialOrientation',value=(0,1,0,0)),
          fieldValue(name='moves',
            children=[
            ProtoInstance(DEF='CameraBoomUp',name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Camera Boom Up'),
              fieldValue(name='duration',value=3.0),
              fieldValue(name='goalPosition',value=(-20,5,-10)),
              fieldValue(name='goalOrientation',value=(0,1,0,0))]),
            ProtoInstance(DEF='BoomDown',name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Camera Boom Down'),
              fieldValue(name='duration',value=3.0),
              fieldValue(name='goalPosition',value=(-20,1,-10)),
              fieldValue(name='goalOrientation',value=(0,1,0,0))]),
            ProtoInstance(DEF='BoomPause',name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Camera Pause'),
              fieldValue(name='duration',value=2.0),
              fieldValue(name='goalPosition',value=(-20,1,-10)),
              fieldValue(name='goalOrientation',value=(0,1,0,0))])])]),
        ProtoInstance(DEF='CameraTilt',name='CameraShot',
          fieldValue=[
          fieldValue(name='description',value='Camera Tilt'),
          fieldValue(name='initialPosition',value=(-10,1,-10)),
          fieldValue(name='initialOrientation',value=(0,0,1,0)),
          fieldValue(name='traceEnabled',value=True),
          fieldValue(name='moves',
            children=[
            ProtoInstance(name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Camera Tilt Pause'),
              fieldValue(name='duration',value=1.0),
              fieldValue(name='goalPosition',value=(-10,1,-10)),
              fieldValue(name='goalOrientation',value=(0,0,1,0))]),
            ProtoInstance(DEF='TiltDown',name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Camera Tilt Left'),
              fieldValue(name='duration',value=3.0),
              fieldValue(name='goalPosition',value=(-10,1,-10)),
              fieldValue(name='goalOrientation',value=(0,0,1,0.785))]),
            ProtoInstance(DEF='TiltPause',name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Camera Tilt Pause'),
              fieldValue(name='duration',value=1.0),
              fieldValue(name='goalPosition',value=(-10,1,-10)),
              fieldValue(name='goalOrientation',value=(0,0,1,0.785))]),
            ProtoInstance(name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Camera Tilt Right'),
              fieldValue(name='duration',value=3.0),
              fieldValue(name='goalPosition',value=(-10,1,-10)),
              fieldValue(name='goalOrientation',value=(0,0,1,-0.785))]),
            ProtoInstance(name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Camera Tilt Pause'),
              fieldValue(name='duration',value=1.0),
              fieldValue(name='goalPosition',value=(-10,1,-10)),
              fieldValue(name='goalOrientation',value=(0,0,1,-0.785))]),
            ProtoInstance(DEF='TiltReset',name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Camera Tilt Reset'),
              fieldValue(name='duration',value=1.0),
              fieldValue(name='goalPosition',value=(-10,1,-10)),
              fieldValue(name='goalOrientation',value=(0,0,1,0))]),
            ProtoInstance(DEF='TiltUp',name='CameraMovement',
              fieldValue=[
              fieldValue(name='description',value='Return to home'),
              fieldValue(name='duration',value=2.0),
              fieldValue(name='goalPosition',value=(0,2,12)),
              fieldValue(name='goalOrientation',value=(0,0,1,0))])])])])]),
    Group(DEF='AnimationGroup.SimpleShots',
      children=[
      TimeSensor(DEF='CameraTimer.SimpleShots'),
      #  initialize clock to match totalDuration of combined Shot Moves 
      ROUTE(fromField='totalDuration',fromNode='Camera.SimpleShotsTest',toField='cycleInterval',toNode='CameraTimer.SimpleShots'),
      #  TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator 
      ROUTE(fromField='fraction_changed',fromNode='CameraTimer.SimpleShots',toField='set_fraction',toNode='Camera.SimpleShotsTest'),
      Transform(DEF='Trigger.SimpleShots',translation=(-4,4,0),
        children=[
        BooleanFilter(DEF='TextTouchActive.SimpleShotsFilter'),
        TouchSensor(DEF='TextTouch.SimpleShots',description='touch to animate Camera SimpleShotsTest'),
        ROUTE(fromField='inputTrue',fromNode='TextTouchActive.SimpleShotsFilter',toField='set_bind',toNode='Camera.SimpleShotsTest'),
        ROUTE(fromField='isActive',fromNode='TextTouch.SimpleShots',toField='set_boolean',toNode='TextTouchActive.SimpleShotsFilter'),
        ROUTE(fromField='touchTime',fromNode='TextTouch.SimpleShots',toField='startTime',toNode='CameraTimer.SimpleShots'),
        Shape(
          appearance=Appearance(
            material=Material(DEF='ArtDeco5',ambientIntensity=0.24,diffuseColor=(0.945455,0.318988,0.321717),shininess=0.01,specularColor=(0.072727,0.021705,0.010732),
              #  Universal Media Library: ArtDeco 5 
              )),
          geometry=Text(string=["Click to animate","SimpleShotsTest"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
        #  Simplify intersection test for user selecting text 
        Shape(DEF='TransparentBox',
          appearance=Appearance(
            material=Material(transparency=1.0)),
          geometry=Box(size=(6,2,1.0E-4)))])]),
    Group(DEF='SimpleShotsTargets',
      children=[
      Transform(DEF='TargetBoxZoom',translation=(-50,1,-20),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),
            texture=ImageTexture(url=["images/CameraMoveZoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveZoom.png"])),
          geometry=Box(),),
        Transform(translation=(0,2,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Text(string=["Zoom in, out"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))])]),
      Transform(DEF='TargetBoxDolly',translation=(-40,1,-20),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),
            texture=ImageTexture(url=["images/CameraMoveDolly.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveDolly.png"])),
          geometry=Box(),),
        Transform(translation=(0,2,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Text(string=["Dolly left, right"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))])]),
      Transform(DEF='TargetBoxPan',translation=(-30,1,-20),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),
            texture=ImageTexture(url=["images/CameraMovePan.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMovePan.png"])),
          geometry=Box(),),
        Transform(translation=(0,2,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Text(string=["Pan left, right"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))])]),
      Transform(DEF='TargetBoxBoom',translation=(-20,1,-20),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),
            texture=ImageTexture(url=["images/CameraMoveBoom.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveBoom.png"])),
          geometry=Box(),),
        Transform(translation=(0,2,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Text(string=["Boom up, down"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))])]),
      Transform(DEF='TargetBoxTilt',translation=(-10,1,-20),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),
            texture=ImageTexture(url=["images/CameraMoveTilt.png","https://www.web3d.org/x3d/content/examples/Basic/development/images/CameraMoveTilt.png"])),
          geometry=Box(),),
        Transform(translation=(0,2,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Text(string=["Tilt left, right"],
              fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))])])]),
    #  =============== Camera.AimPointTest ============== 
    ProtoInstance(DEF='Camera.AimPointTest',name='Camera',
      fieldValue=[
      fieldValue(name='description',value='AimPointTest for moving camera tracking moving target'),
      fieldValue(name='position',value=(4,4,10)),
      fieldValue(name='shots',
        children=[
        ProtoInstance(DEF='Shot5',name='CameraShot',
          fieldValue=[
          fieldValue(name='description',value='#3 Tracking shot'),
          fieldValue(name='initialPosition',value=(6,6,10)),
          fieldValue(name='initialOrientation',value=(0,1,0,0)),
          fieldValue(name='moves',
            children=[
            ProtoInstance(DEF='MoveAimPoint3.1',name='CameraMovement',
              #  goalAimPoint modified by ROUTE to match moving Box 
              fieldValue=[
              fieldValue(name='description',value='AimPoint 3.1 moving BoxPath'),
              fieldValue(name='tracking',value=True),
              fieldValue(name='duration',value=8.0),
              fieldValue(name='goalPosition',value=(6,6,10))]),
            ProtoInstance(DEF='MoveAimPoint3.2',name='CameraMovement',
              #  goalAimPoint modified by ROUTE to match moving Box 
              fieldValue=[
              fieldValue(name='description',value='AimPoint 3.2 pan right while tracking'),
              fieldValue(name='tracking',value=True),
              fieldValue(name='duration',value=8.0),
              fieldValue(name='goalPosition',value=(40,6,12))]),
            ProtoInstance(DEF='MoveAimPoint3.3',name='CameraMovement',
              #  goalAimPoint modified by ROUTE to match moving Box 
              fieldValue=[
              fieldValue(name='description',value='AimPoint 3.3 boom up while tracking'),
              fieldValue(name='tracking',value=True),
              fieldValue(name='duration',value=3.0),
              fieldValue(name='goalPosition',value=(40,20,13))]),
            ProtoInstance(DEF='MoveAimPoint3.4',name='CameraMovement',
              #  can test tracking or not using these values 
              fieldValue=[
              fieldValue(name='description',value='AimPoint 3.4 restore camera back to home'),
              fieldValue(name='tracking',value=True),
              fieldValue(name='duration',value=5.0),
              fieldValue(name='goalPosition',value=(4,4,10)),
              fieldValue(name='goalAimPoint',value=(4,4,0)),
              fieldValue(name='goalOrientation',value=(0,1,0,0))])])])])]),
    Group(DEF='AnimationGroup.AimPointTest',
      children=[
      TimeSensor(DEF='CameraTimer.AimPointTest'),
      #  initialize clock to match totalDuration of combined Shot Moves 
      ROUTE(fromField='totalDuration',fromNode='Camera.AimPointTest',toField='cycleInterval',toNode='CameraTimer.AimPointTest'),
      #  TimeSensor animates the CameraClock since that maintains the computed PositionInterpolator and OrientationInterpolator 
      ROUTE(fromField='fraction_changed',fromNode='CameraTimer.AimPointTest',toField='set_fraction',toNode='Camera.AimPointTest'),
      Transform(DEF='Trigger.AimPointTest',translation=(4,4,0),
        children=[
        BooleanFilter(DEF='TextTouchActive.AimPointFilter'),
        TouchSensor(DEF='TextTouch.AimPointTest',description='touch to animate Camera AimPointTest'),
        ROUTE(fromField='inputTrue',fromNode='TextTouchActive.AimPointFilter',toField='set_bind',toNode='Camera.AimPointTest'),
        ROUTE(fromField='isActive',fromNode='TextTouch.AimPointTest',toField='set_boolean',toNode='TextTouchActive.AimPointFilter'),
        ROUTE(fromField='touchTime',fromNode='TextTouch.AimPointTest',toField='startTime',toNode='CameraTimer.AimPointTest'),
        Shape(
          appearance=Appearance(
            material=Material(USE='ArtDeco5')),
          geometry=Text(string=["Click to animate","AimPointTest"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
        Shape(USE='TransparentBox')])]),
    #  TODO build a test once implemented 
    ProtoInstance(name='OfflineRender'),
    #  =============== animate a camera shape to visualize view changes ============== 
    Transform(DEF='CameraShapeTransform',translation=(0,0.5,0),
      #  move CameraShape using active Camera 
      children=[
      ROUTE(fromField='position_changed',fromNode='Camera.SimpleShotsTest',toField='translation',toNode='CameraShapeTransform'),
      ROUTE(fromField='orientation_changed',fromNode='Camera.SimpleShotsTest',toField='rotation',toNode='CameraShapeTransform'),
      ROUTE(fromField='position',fromNode='Camera.AimPointTest',toField='translation',toNode='CameraShapeTransform'),
      ROUTE(fromField='orientation_changed',fromNode='Camera.AimPointTest',toField='rotation',toNode='CameraShapeTransform'),
      Transform(DEF='CameraOffsetTransform',translation=(0,0,0.25),
        children=[
        TouchSensor(DEF='CameraShapeTouched'),
        Inline(DEF='CameraShape',url=["CameraShape.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraShape.x3d"]),
        Shape(DEF='SightLine',
          appearance=Appearance(
            material=Material(emissiveColor=(0.8,0.8,0.4))),
          geometry=IndexedLineSet(coordIndex=[0,1],
            coord=Coordinate(point=[(0,0,0),(0,0,-100)])))]),
      #  Display frustum to show camera view within the scene, toggled by user selecting CameraShape 
      ExternProtoDeclare(name='ViewFrustum',appinfo='Display view frustum associated with a given pair of Viewpoint NavigationInfo nodes',url=["../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.x3d#ViewFrustum","../../X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/ViewFrustumPrototype.wrl#ViewFrustum"],
        field=[
        field(name='ViewpointNode',accessType='initializeOnly',appinfo='required: insert Viewpoint DEF or USE node for view of interest',type='SFNode'),
        field(name='NavigationInfoNode',accessType='initializeOnly',appinfo='required: insert NavigationInfo DEF or USE node of interest',type='SFNode'),
        field(name='visible',accessType='inputOutput',appinfo='whether or not frustum geometry is rendered',type='SFBool'),
        field(name='lineColor',accessType='inputOutput',appinfo='RGB color of ViewFrustum outline, default value 0.9 0.9 0.9',type='SFColor'),
        field(name='frustumColor',accessType='inputOutput',appinfo='RGB color of ViewFrustum hull geometry, default value 0.8 0.8 0.8',type='SFColor'),
        field(name='transparency',accessType='inputOutput',appinfo='transparency of ViewFrustum hull geometry, default value 0.5',type='SFFloat'),
        field(name='aspectRatio',accessType='inputOutput',appinfo='assumed ratio height/width, default value 0.75',type='SFFloat'),
        field(name='trace',accessType='initializeOnly',appinfo='debug support, default false',type='SFBool')]),
      ProtoInstance(DEF='ViewFrustumNode',name='ViewFrustum',
        fieldValue=[
        fieldValue(name='ViewpointNode',
          children=[
          Viewpoint(DEF='FrustumViewpoint',description='viewpoint for ViewFrustum',position=(0,0,0))]),
        fieldValue(name='NavigationInfoNode',
          children=[
          NavigationInfo(DEF='TestNavigationInfo',transitionType=["ANIMATE"],visibilityLimit=100.0)]),
        fieldValue(name='visible',value=False),
        fieldValue(name='lineColor',value=(0.9,0.9,0.9)),
        fieldValue(name='frustumColor',value=(0.8,0.8,0.8)),
        fieldValue(name='transparency',value=0.95)]),
      BooleanToggle(DEF='ViewFrustumToggle'),
      ROUTE(fromField='isActive',fromNode='CameraShapeTouched',toField='set_boolean',toNode='ViewFrustumToggle'),
      ROUTE(fromField='toggle',fromNode='ViewFrustumToggle',toField='set_visible',toNode='ViewFrustumNode')]),
    #  =============== add checkerboard, axes and other things to look at while animating ============== 
    Background(skyColor=[(0.282353,0.380392,0.470588)]),
    Transform(rotation=(1,0,0,-1.57079),scale=(10,10,10),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=0.01,diffuseColor=(1,1,1),shininess=0.05)),
        geometry=IndexedFaceSet(colorIndex=[0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0],colorPerVertex=False,coordIndex=[0,8,9,1,-1,1,9,10,2,-1,2,10,11,3,-1,3,11,12,4,-1,4,12,13,5,-1,5,13,14,6,-1,6,14,15,7,-1,8,16,17,9,-1,9,17,18,10,-1,10,18,19,11,-1,11,19,20,12,-1,12,20,21,13,-1,13,21,22,14,-1,14,22,23,15,-1,16,24,25,17,-1,17,25,26,18,-1,18,26,27,19,-1,19,27,28,20,-1,20,28,29,21,-1,21,29,30,22,-1,22,30,31,23,-1,24,32,33,25,-1,25,33,34,26,-1,26,34,35,27,-1,27,35,36,28,-1,28,36,37,29,-1,29,37,38,30,-1,30,38,39,31,-1,32,40,41,33,-1,33,41,42,34,-1,34,42,43,35,-1,35,43,44,36,-1,36,44,45,37,-1,37,45,46,38,-1,38,46,47,39,-1,40,48,49,41,-1,41,49,50,42,-1,42,50,51,43,-1,43,51,52,44,-1,44,52,53,45,-1,45,53,54,46,-1,46,54,55,47,-1,48,56,57,49,-1,49,57,58,50,-1,50,58,59,51,-1,51,59,60,52,-1,52,60,61,53,-1,53,61,62,54,-1,54,62,63,55,-1],normalPerVertex=False,solid=False,
          color=Color(color=[(0.435294,0.741176,0),(0,0.560784,0.580392)]),
          coord=Coordinate(point=[(-5.25,5.25,0),(-3.75,5.25,0),(-2.25,5.25,0),(-0.75,5.25,0),(0.75,5.25,0),(2.25,5.25,0),(3.75,5.25,0),(5.25,5.25,0),(-5.25,3.75,0),(-3.75,3.75,0),(-2.25,3.75,0),(-0.75,3.75,0),(0.75,3.75,0),(2.25,3.75,0),(3.75,3.75,0),(5.25,3.75,0),(-5.25,2.25,0),(-3.75,2.25,0),(-2.25,2.25,0),(-0.75,2.25,0),(0.75,2.25,0),(2.25,2.25,0),(3.75,2.25,0),(5.25,2.25,0),(-5.25,0.75,0),(-3.75,0.75,0),(-2.25,0.75,0),(-0.75,0.75,0),(0.75,0.75,0),(2.25,0.75,0),(3.75,0.75,0),(5.25,0.75,0),(-5.25,-0.75,0),(-3.75,-0.75,0),(-2.25,-0.75,0),(-0.75,-0.75,0),(0.75,-0.75,0),(2.25,-0.75,0),(3.75,-0.75,0),(5.25,-0.75,0),(-5.25,-2.25,0),(-3.75,-2.25,0),(-2.25,-2.25,0),(-0.75,-2.25,0),(0.75,-2.25,0),(2.25,-2.25,0),(3.75,-2.25,0),(5.25,-2.25,0),(-5.25,-3.75,0),(-3.75,-3.75,0),(-2.25,-3.75,0),(-0.75,-3.75,0),(0.75,-3.75,0),(2.25,-3.75,0),(3.75,-3.75,0),(5.25,-3.75,0),(-5.25,-5.25,0),(-3.75,-5.25,0),(-2.25,-5.25,0),(-0.75,-5.25,0),(0.75,-5.25,0),(2.25,-5.25,0),(3.75,-5.25,0),(5.25,-5.25,0)])))]),
    Transform(scale=(3,3,3),translation=(0,0.25,0),
      children=[
      Inline(DEF='CoordinateAxes',url=["../data/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])]),
    Transform(DEF='MovingBoxTransform',
      children=[
      PositionInterpolator(DEF='BoxPath',key=[0,0.25,0.5,0.75,1],keyValue=[(-5,1,5),(45,1,5),(45,1,-45),(-5,1,-45),(-5,1,5)]),
      TimeSensor(DEF='BoxTimer',cycleInterval=10.0,loop=True),
      ROUTE(fromField='value_changed',fromNode='BoxPath',toField='translation',toNode='MovingBoxTransform'),
      ROUTE(fromField='value_changed',fromNode='BoxPath',toField='goalAimPoint',toNode='MoveAimPoint3.1'),
      ROUTE(fromField='value_changed',fromNode='BoxPath',toField='goalAimPoint',toNode='MoveAimPoint3.2'),
      ROUTE(fromField='value_changed',fromNode='BoxPath',toField='goalAimPoint',toNode='MoveAimPoint3.3'),
      ROUTE(fromField='fraction_changed',fromNode='BoxTimer',toField='set_fraction',toNode='BoxPath'),
      Shape(
        appearance=Appearance(
          material=Material(),
          texture=ImageTexture(url=["../earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/earth-topo.png"])),
        geometry=Box(),)]),
    #  ================ CrossHair visualization for center of screen ================ 
    ExternProtoDeclare(name='CrossHair',appinfo='CrossHair prototype provides a heads-up display (HUD) crosshair at the view center, which is useful for assessing NavigationInfo lookAt point',url=["../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.x3d#CrossHair","../../Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CrossHairPrototype.wrl#CrossHair"],
      field=[
      field(name='enabled',accessType='initializeOnly',appinfo='whether CrissHair orititype is enabled or not',type='SFBool'),
      field(name='set_enabled',accessType='inputOnly',appinfo='control whether enabled/disabled',type='SFBool'),
      field(name='markerColor',accessType='inputOutput',appinfo='color of CrossHair marker',type='SFColor'),
      field(name='scale',accessType='inputOutput',appinfo='size of CrossHair in meters',type='SFVec3f'),
      field(name='positionOffsetFromCamera',accessType='inputOutput',appinfo='distance in front of HUD viewpoint',type='SFVec3f')]),
    ProtoInstance(DEF='CrossHairInstance',name='CrossHair',
      fieldValue=[
      fieldValue(name='enabled',value=True),
      fieldValue(name='markerColor',value=(1,0.5,0)),
      fieldValue(name='scale',value=(1,1,1)),
      fieldValue(name='positionOffsetFromCamera',value=(0,0,-6))]),
    #  turn on CrossHairInstance when animated camera viewpoints are bound 
    ROUTE(fromField='isBound',fromNode='Camera.SimpleShotsTest',toField='set_enabled',toNode='CrossHairInstance'),
    ROUTE(fromField='isBound',fromNode='Camera.AimPointTest',toField='set_enabled',toNode='CrossHairInstance'),
    #  turn off CrossHairInstance when animated camera viewpoints are unbound <BooleanFilter DEF='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.SimpleShotsTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='isBound' fromNode='Camera.AimPointTest' toField='set_boolean' toNode='NegateCrossHair'/> <ROUTE fromField='inputNegate' fromNode='NegateCrossHair' toField='set_enabled' toNode='CrossHairInstance'/> 
    #  =============== TODO Launch Prototype Example ============== 
    Anchor(description='launch CameraExample scene',parameter=["target=_blank"],url=["CameraExample.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.x3d","CameraExample.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExample.wrl"],
      children=[
      Transform(translation=(0,-3,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,0.2))),
          geometry=Text(string=["CameraPrototype","defines a prototype","","Click on this text to see","CameraExample scene"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.5)))])])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for CameraExamples.py:')
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

print("python CameraExamples.py load and self-test diagnostics complete.")
