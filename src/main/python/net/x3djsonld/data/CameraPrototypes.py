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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='CameraPrototypes.x3d',name='title'),
    meta(content='Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.',name='description'),
    meta(content='Don Brutzman and Jeff Weekley',name='creator'),
    meta(content='16 March 2009',name='created'),
    meta(content='25 October 2016',name='modified'),
    meta(content='Schematron rules, backed up by initialize() checks',name='TODO'),
    meta(content='BeyondViewpointCameraNodesWeb3D2009.pdf',name='reference'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html',name='reference'),
    meta(content='Camera nodes for Viewpoint navigation control',name='subject'),
    meta(content='CameraExamples.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d',name='identifier'),
    meta(content='http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  =============== Camera ============== 
    children=[
    ProtoDeclare(appinfo='Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images.',name='Camera',
      ProtoInterface=ProtoInterface(
        #  Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields 
        field=[
        field(accessType='inputOutput',appinfo='Text description to be displayed for this Camera',name='description',type='SFString'),
        field(accessType='inputOutput',appinfo='Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated',name='position',type='SFVec3f',value=(0,0,10)),
        field(accessType='inputOutput',appinfo='Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated',name='orientation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='inputOutput',appinfo='pi/4',name='fieldOfView',type='SFFloat',value=0.7854),
        field(accessType='inputOnly',appinfo='input fraction drives interpolators',name='set_fraction',type='SFFloat'),
        field(accessType='inputOnly',appinfo='input event binds or unbinds this Camera',name='set_bind',type='SFBool'),
        field(accessType='outputOnly',appinfo='output event indicates when this Camera is bound',name='bindTime',type='SFTime'),
        field(accessType='outputOnly',appinfo='output event indicates whether this Camera is bound or unbound',name='isBound',type='SFBool'),
        field(accessType='inputOutput',appinfo='Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]',name='nearClipPlane',type='SFFloat',value=0.25),
        field(accessType='inputOutput',appinfo='Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit',name='farClipPlane',type='SFFloat',value=0.0),
        field(accessType='inputOutput',appinfo='Array of CameraShot nodes which in turn contain CameraMovement nodes',name='shots',type='MFNode',
          #  initialization nodes (if any) go here 
          ),
        field(accessType='inputOutput',appinfo='Whether camera headlight is on or off',name='headlight',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='Camera headlight color',name='headlightColor',type='SFColor',value=(1,1,1)),
        field(accessType='inputOutput',appinfo='Camera headlight intensity',name='headlightIntensity',type='SFFloat',value=1),
        field(accessType='inputOutput',appinfo='Camera filter color that modifies virtual lens capture',name='filterColor',type='SFColor',value=(1,1,1)),
        field(accessType='inputOutput',appinfo='Camera filter transparency that modifies virtual lens capture',name='filterTransparency',type='SFFloat',value=1),
        field(accessType='inputOutput',appinfo='upVector changes modify camera orientation (and possibly vice versa)',name='upVector',type='SFVec3f',value=(0,1,0)),
        field(accessType='inputOutput',appinfo='Focal length divided effective aperture diameter indicating width of focal plane',name='fStop',type='SFFloat',value=5.6),
        field(accessType='inputOutput',appinfo='Distance to focal plane of sharpest focus',name='focusDistance',type='SFFloat',value=10),
        field(accessType='outputOnly',appinfo='Mark start/stop with true/false output respectively useful to trigger external animations',name='isActive',type='SFBool'),
        field(accessType='outputOnly',appinfo='Total duration of contained enabled CameraShot (and thus CameraMovement) move durations',name='totalDuration',type='SFTime'),
        field(accessType='inputOutput',appinfo='OfflineRender node',name='offlineRender',type='SFNode',
          #  initialization node (if any) goes here 
          ),
        field(accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',name='traceEnabled',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
        Viewpoint(DEF='CameraViewpoint',
          IS=IS(
            connect=[
            connect(nodeField='description',protoField='description'),
            connect(nodeField='position',protoField='position'),
            connect(nodeField='orientation',protoField='orientation'),
            connect(nodeField='fieldOfView',protoField='fieldOfView'),
            connect(nodeField='set_bind',protoField='set_bind'),
            connect(nodeField='bindTime',protoField='bindTime'),
            connect(nodeField='isBound',protoField='isBound')])),
        #  NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation 
        NavigationInfo(DEF='CameraNavInfo',type='"EXAMINE" "FLY" "ANY"',
          IS=IS(
            connect=[
            connect(nodeField='set_bind',protoField='set_bind'),
            #  No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing. 
            connect(nodeField='headlight',protoField='headlight'),
            connect(nodeField='visibilityLimit',protoField='farClipPlane')])),
        #  this DirectionalLight replaces NavigationInfo headlight in order to add color capability 
        DirectionalLight(DEF='CameraDirectionalLight',global_=True,
          #  TODO confirm other default field values match NavigationInfo spec 
          IS=IS(
            connect=[
            connect(nodeField='on',protoField='headlight'),
            connect(nodeField='color',protoField='headlightColor'),
            connect(nodeField='intensity',protoField='headlightIntensity')])),
        PositionInterpolator(DEF='CameraPositionInterpolator',key=[0,1],keyValue=[(0,0,0),(0,0,0)],
          IS=IS(
            connect=[
            connect(nodeField='set_fraction',protoField='set_fraction')])),
        OrientationInterpolator(DEF='CameraOrientationInterpolator',key=[0,1],keyValue=[(0,1,0,0),(0,1,0,0)],
          IS=IS(
            connect=[
            connect(nodeField='set_fraction',protoField='set_fraction')])),
        ROUTE(fromField='value_changed',fromNode='CameraPositionInterpolator',toField='position',toNode='CameraViewpoint'),
        ROUTE(fromField='value_changed',fromNode='CameraOrientationInterpolator',toField='orientation',toNode='CameraViewpoint'),
        Script(DEF='CameraScript',directOutput=True,mustEvaluate=True,
          #  binding is controlled externally, all camera operations proceed the same regardless of whether bound or not 
          field=[
          field(accessType='inputOutput',appinfo='Text description to be displayed for this Camera',name='description',type='SFString'),
          field(accessType='inputOutput',appinfo='Camera position in local transformation frame',name='position',type='SFVec3f'),
          field(accessType='inputOutput',appinfo='Camera rotation in local transformation frame',name='orientation',type='SFRotation'),
          field(accessType='inputOnly',appinfo='input fraction drives interpolators',name='set_fraction',type='SFFloat'),
          field(accessType='inputOnly',appinfo='input event binds or unbinds this Camera',name='set_bind',type='SFBool'),
          field(accessType='inputOutput',appinfo='pi/4',name='fieldOfView',type='SFFloat'),
          field(accessType='inputOutput',appinfo='Vector distance to near clipping plane',name='nearClipPlane',type='SFFloat'),
          field(accessType='inputOutput',appinfo='Vector distance to far clipping plane',name='farClipPlane',type='SFFloat'),
          field(accessType='inputOutput',appinfo='Array of CameraShot nodes which in turn contain CameraMovement nodes',name='shots',type='MFNode',
            #  initialization nodes (if any) go here 
            ),
          field(accessType='inputOutput',appinfo='Camera filter color that modifies virtual lens capture',name='filterColor',type='SFColor'),
          field(accessType='inputOutput',appinfo='Camera filter transparency that modifies virtual lens capture',name='filterTransparency',type='SFFloat'),
          field(accessType='inputOutput',appinfo='upVector changes modify camera orientation (and possibly vice versa)',name='upVector',type='SFVec3f'),
          field(accessType='inputOutput',appinfo='Focal length divided effective aperture diameter indicating width of focal plane',name='fStop',type='SFFloat'),
          field(accessType='inputOutput',appinfo='Distance to focal plane of sharpest focus',name='focusDistance',type='SFFloat'),
          field(accessType='outputOnly',appinfo='Mark start/stop with true/false output respectively useful to trigger external animations',name='isActive',type='SFBool'),
          field(accessType='outputOnly',appinfo='Total duration of contained enabled CameraShot (and thus CameraMovement) move durations',name='totalDuration',type='SFTime'),
          field(accessType='inputOutput',appinfo='OfflineRender node',name='offlineRender',type='SFNode',
            #  initialization node (if any) goes here 
            ),
          field(accessType='initializeOnly',appinfo='node reference to permit getting setting fields from within Script',name='ViewpointNode',type='SFNode',
            children=[
            Viewpoint(USE='CameraViewpoint')]),
          field(accessType='initializeOnly',appinfo='node reference to permit getting setting fields from within Script',name='NavInfoNode',type='SFNode',
            children=[
            NavigationInfo(USE='CameraNavInfo')]),
          field(accessType='initializeOnly',appinfo='node reference to permit getting setting fields from within Script',name='CameraPI',type='SFNode',
            children=[
            PositionInterpolator(USE='CameraPositionInterpolator')]),
          field(accessType='initializeOnly',appinfo='node reference to permit getting setting fields from within Script',name='CameraOI',type='SFNode',
            children=[
            OrientationInterpolator(USE='CameraOrientationInterpolator')]),
          field(accessType='inputOutput',appinfo='key array for interpolators',name='key',type='MFFloat'),
          field(accessType='inputOutput',appinfo='keyValue array for PositionInterpolator',name='keyValuePosition',type='MFVec3f'),
          field(accessType='inputOutput',appinfo='keyValue array for OrientationInterpolator',name='keyValueOrientation',type='MFRotation'),
          field(accessType='inputOutput',appinfo='whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events',name='animated',type='SFBool',value=False),
          field(accessType='initializeOnly',appinfo='perform checkShots() function once immediately after initialization',name='initialized',type='SFBool',value=False),
          field(accessType='initializeOnly',appinfo='how many CameraShot nodes are contained in shots array',name='shotCount',type='SFInt32',value=0),
          field(accessType='initializeOnly',appinfo='how many CameraMove nodes are contained in moves array',name='movesCount',type='SFInt32',value=0),
          field(accessType='initializeOnly',appinfo='how many frames were created in current loop',name='frameCount',type='SFFloat',value=0),
          field(accessType='initializeOnly',appinfo='holding variable',name='startTime',type='SFTime',value=0),
          field(accessType='initializeOnly',appinfo='holding variable',name='priorTraceTime',type='SFTime',value=0),
          field(accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',name='traceEnabled',type='SFBool')],
          IS=IS(
            connect=[
            connect(nodeField='description',protoField='description'),
            connect(nodeField='position',protoField='position'),
            connect(nodeField='orientation',protoField='orientation'),
            connect(nodeField='set_fraction',protoField='set_fraction'),
            connect(nodeField='set_bind',protoField='set_bind'),
            connect(nodeField='fieldOfView',protoField='fieldOfView'),
            connect(nodeField='nearClipPlane',protoField='nearClipPlane'),
            connect(nodeField='farClipPlane',protoField='farClipPlane'),
            connect(nodeField='shots',protoField='shots'),
            connect(nodeField='filterColor',protoField='filterColor'),
            connect(nodeField='filterTransparency',protoField='filterTransparency'),
            connect(nodeField='upVector',protoField='upVector'),
            connect(nodeField='fStop',protoField='fStop'),
            connect(nodeField='focusDistance',protoField='focusDistance'),
            connect(nodeField='isActive',protoField='isActive'),
            connect(nodeField='totalDuration',protoField='totalDuration'),
            connect(nodeField='offlineRender',protoField='offlineRender'),
            connect(nodeField='traceEnabled',protoField='traceEnabled')])
*** TODO x3d.py and X3dToPython.xslt need to handle embedded CDATA source code for Script
),
        ROUTE(fromField='position',fromNode='CameraScript',toField='position',toNode='CameraViewpoint'),
        ROUTE(fromField='orientation',fromNode='CameraScript',toField='orientation',toNode='CameraViewpoint'),
        ROUTE(fromField='isActive',fromNode='CameraScript',toField='set_bind',toNode='CameraViewpoint'),
        ROUTE(fromField='isActive',fromNode='CameraScript',toField='set_bind',toNode='CameraNavInfo'),
        ROUTE(fromField='isActive',fromNode='CameraScript',toField='on',toNode='CameraDirectionalLight')])),
    #  =============== CameraShot ============== 
    ProtoDeclare(appinfo='CameraShot collects a specific set of CameraMovement animations that make up an individual shot.',name='CameraShot',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Text description to be displayed for this CameraShot',name='description',type='SFString'),
        field(accessType='inputOutput',appinfo='Whether this CameraShot can be activated',name='enabled',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='Set of CameraMovement nodes',name='moves',type='MFNode',
          #  initializing CameraMovement nodes are inserted here by scene author using ProtoInstance 
          ),
        field(accessType='inputOutput',appinfo='Setup to reinitialize camera position for this shot',name='initialPosition',type='SFVec3f',value=(0,0,10)),
        field(accessType='inputOutput',appinfo='Setup to reinitialize camera rotation for this shot',name='initialOrientation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='inputOutput',appinfo='Setup to reinitialize aimpoint (relative location for camera direction) for this shot',name='initialAimPoint',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',appinfo='pi/4',name='initialFieldOfView',type='SFFloat',value=0.7854),
        field(accessType='inputOutput',appinfo='Focal length divided effective aperture diameter indicating width of focal plane',name='initialFStop',type='SFFloat',value=5.6),
        field(accessType='inputOutput',appinfo='Distance to focal plane of sharpest focus',name='initialFocusDistance',type='SFFloat',value=10),
        field(accessType='outputOnly',appinfo='Subtotal duration of contained CameraMovement move durations',name='shotDuration',type='SFTime'),
        field(accessType='outputOnly',appinfo='Mark start/stop with true/false output respectively useful to trigger external animations',name='isActive',type='SFBool'),
        field(accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',name='traceEnabled',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        children=[
        Script(DEF='CameraShotScript',directOutput=True,mustEvaluate=True,
          field=[
          field(accessType='inputOutput',appinfo='Text description to be displayed for this CameraShot',name='description',type='SFString'),
          field(accessType='inputOutput',appinfo='Whether this CameraShot can be activated',name='enabled',type='SFBool'),
          field(accessType='inputOutput',appinfo='Set of CameraMovement nodes',name='moves',type='MFNode',
            #  initialization nodes (if any) go here 
            ),
          field(accessType='inputOutput',appinfo='Setup to reinitialize camera position for this shot',name='initialPosition',type='SFVec3f'),
          field(accessType='inputOutput',appinfo='Setup to reinitialize camera rotation for this shot',name='initialOrientation',type='SFRotation'),
          field(accessType='inputOutput',appinfo='Setup to reinitialize aimpoint (relative location for camera direction) for this shot',name='initialAimPoint',type='SFVec3f'),
          field(accessType='inputOutput',appinfo='pi/4',name='initialFieldOfView',type='SFFloat'),
          field(accessType='inputOutput',appinfo='Focal length divided effective aperture diameter indicating width of focal plane',name='initialFStop',type='SFFloat'),
          field(accessType='inputOutput',appinfo='Distance to focal plane of sharpest focus',name='initialFocusDistance',type='SFFloat'),
          field(accessType='outputOnly',appinfo='Subtotal duration of contained CameraMovement move durations',name='shotDuration',type='SFTime'),
          field(accessType='outputOnly',appinfo='Mark start/stop with true/false output respectively useful to trigger external animations',name='isActive',type='SFBool'),
          field(accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',name='traceEnabled',type='SFBool'),
          field(accessType='inputOutput',appinfo='key array for interpolators',name='key',type='MFFloat'),
          field(accessType='inputOutput',appinfo='keyValue array for PositionInterpolator',name='keyValuePosition',type='MFVec3f'),
          field(accessType='inputOutput',appinfo='keyValue array for OrientationInterpolator',name='keyValueOrientation',type='MFRotation')],
          IS=IS(
            connect=[
            connect(nodeField='description',protoField='description'),
            connect(nodeField='enabled',protoField='enabled'),
            connect(nodeField='moves',protoField='moves'),
            connect(nodeField='initialPosition',protoField='initialPosition'),
            connect(nodeField='initialOrientation',protoField='initialOrientation'),
            connect(nodeField='initialAimPoint',protoField='initialAimPoint'),
            connect(nodeField='initialFieldOfView',protoField='initialFieldOfView'),
            connect(nodeField='initialFStop',protoField='initialFStop'),
            connect(nodeField='initialFocusDistance',protoField='initialFocusDistance'),
            connect(nodeField='shotDuration',protoField='shotDuration'),
            connect(nodeField='isActive',protoField='isActive'),
            connect(nodeField='traceEnabled',protoField='traceEnabled')])
*** TODO x3d.py and X3dToPython.xslt need to handle embedded CDATA source code for Script
)]
        #  Add any ROUTEs here, going from Script to other nodes within ProtoBody 
        )),
    #  =============== CameraMovement ============== 
    ProtoDeclare(appinfo='CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView.',name='CameraMovement',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='Text description to be displayed for this CameraMovement',name='description',type='SFString'),
        field(accessType='inputOutput',appinfo='Whether this CameraMovement can be activated',name='enabled',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='Duration in seconds for this move',name='duration',type='SFFloat',value=0),
        field(accessType='inputOutput',appinfo='Goal camera position for this move',name='goalPosition',type='SFVec3f',value=(0,0,10)),
        field(accessType='inputOutput',appinfo='Goal camera rotation for this move',name='goalOrientation',type='SFRotation',value=(0,0,1,0)),
        field(accessType='inputOutput',appinfo='Whether or not camera direction is tracking towards the aimPoint',name='tracking',type='SFBool',value=False),
        field(accessType='inputOutput',appinfo='Goal aimPoint for this move, ignored if tracking=false',name='goalAimPoint',type='SFVec3f',value=(0,0,0)),
        field(accessType='inputOutput',appinfo='Goal fieldOfView for this move',name='goalFieldOfView',type='SFFloat',value=0.7854),
        field(accessType='inputOutput',appinfo='Focal length divided effective aperture diameter indicating width of focal plane',name='goalFStop',type='SFFloat',value=5.6),
        field(accessType='inputOutput',appinfo='Distance to focal plane of sharpest focus',name='goalFocusDistance',type='SFFloat',value=10),
        field(accessType='outputOnly',appinfo='Mark start/stop with true/false output respectively useful to trigger external animations',name='isActive',type='SFBool'),
        field(accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',name='traceEnabled',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        #  First node determines node type of this prototype 
        #  Subsequent nodes do not render, but still must be a valid X3D subgraph 
        #  Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events 
        children=[
        Script(DEF='CameraMovementScript',directOutput=True,mustEvaluate=True,
          field=[
          field(accessType='inputOutput',appinfo='Text description to be displayed for this CameraMovement',name='description',type='SFString'),
          field(accessType='inputOutput',appinfo='Whether this CameraMovement can be activated',name='enabled',type='SFBool'),
          field(accessType='inputOutput',appinfo='Duration in seconds for this move',name='duration',type='SFFloat'),
          field(accessType='inputOutput',appinfo='Goal camera position for this move',name='goalPosition',type='SFVec3f'),
          field(accessType='inputOutput',appinfo='Goal camera rotation for this move',name='goalOrientation',type='SFRotation'),
          field(accessType='inputOutput',appinfo='Whether or not camera direction is tracking towards the aimPoint',name='tracking',type='SFBool'),
          field(accessType='inputOutput',appinfo='Goal aimPoint for this move, ignored if tracking=false',name='goalAimPoint',type='SFVec3f'),
          field(accessType='inputOutput',appinfo='Goal fieldOfView for this move',name='goalFieldOfView',type='SFFloat'),
          field(accessType='inputOutput',appinfo='Focal length divided effective aperture diameter indicating width of focal plane',name='goalFStop',type='SFFloat'),
          field(accessType='inputOutput',appinfo='Distance to focal plane of sharpest focus',name='goalFocusDistance',type='SFFloat'),
          field(accessType='outputOnly',appinfo='Mark start/stop with true/false output respectively useful to trigger external animations',name='isActive',type='SFBool'),
          field(accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',name='traceEnabled',type='SFBool')],
          IS=IS(
            connect=[
            connect(nodeField='description',protoField='description'),
            connect(nodeField='enabled',protoField='enabled'),
            connect(nodeField='duration',protoField='duration'),
            connect(nodeField='goalPosition',protoField='goalPosition'),
            connect(nodeField='goalOrientation',protoField='goalOrientation'),
            connect(nodeField='tracking',protoField='tracking'),
            connect(nodeField='goalAimPoint',protoField='goalAimPoint'),
            connect(nodeField='goalFieldOfView',protoField='goalFieldOfView'),
            connect(nodeField='goalFStop',protoField='goalFStop'),
            connect(nodeField='goalFocusDistance',protoField='goalFocusDistance'),
            connect(nodeField='isActive',protoField='isActive'),
            connect(nodeField='traceEnabled',protoField='traceEnabled')])
*** TODO x3d.py and X3dToPython.xslt need to handle embedded CDATA source code for Script
)]
        #  Add any ROUTEs here, going from Script to other nodes within ProtoBody 
        )),
    #  =============== OfflineRender ============== 
    ProtoDeclare(appinfo='OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot).',name='OfflineRender',
      ProtoInterface=ProtoInterface(
        #  TODO non-photorealistic rendering (NPR) parameters 
        field=[
        field(accessType='inputOutput',appinfo='Text description to be displayed for this OfflineRender',name='description',type='SFString'),
        field(accessType='inputOutput',appinfo='Whether this OfflineRender can be activated',name='enabled',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='Frames per second recorded for this rendering',name='frameRate',type='SFFloat',value=30),
        field(accessType='inputOutput',appinfo='Size of frame in number of pixels width and height',name='frameSize',type='SFVec2f',value=(640,480)),
        field(accessType='inputOutput',appinfo='Relative dimensions of pixel height/width typically 1.33 or 1',name='pixelAspectRatio',type='SFFloat',value=1.33),
        field(accessType='inputOnly',appinfo='Begin render operation',name='set_startTime',type='SFTime'),
        field(accessType='outputOnly',appinfo='Progress performing render operation (0..1)',name='progress',type='SFFloat'),
        field(accessType='outputOnly',appinfo='Render operation complete',name='renderCompleteTime',type='SFTime'),
        field(accessType='initializeOnly',appinfo='Format of rendered output movie (mpeg mp4 etc.), use first supported format',name='movieFormat',type='MFString',value=["mpeg"]),
        field(accessType='initializeOnly',appinfo='Format of rendered output images (png jpeg gif tiff etc.) use first supported format',name='imageFormat',type='MFString',value=["png"]),
        field(accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',name='traceEnabled',type='SFBool',value=False)]),
      ProtoBody=ProtoBody(
        #  First node determines node type of this prototype 
        #  Subsequent nodes do not render, but still must be a valid X3D subgraph 
        children=[
        Script(DEF='OfflineRenderScript',mustEvaluate=True,
          field=[
          field(accessType='inputOutput',appinfo='Text description to be displayed for this OfflineRender',name='description',type='SFString'),
          field(accessType='inputOutput',appinfo='Whether this OfflineRender can be activated',name='enabled',type='SFBool'),
          field(accessType='inputOutput',appinfo='Frames per second recorded for this rendering',name='frameRate',type='SFFloat'),
          field(accessType='inputOutput',appinfo='Size of frame in number of pixels width and height',name='frameSize',type='SFVec2f'),
          field(accessType='inputOutput',appinfo='Relative dimensions of pixel height/width typically 1.33 or 1',name='pixelAspectRatio',type='SFFloat'),
          field(accessType='inputOnly',appinfo='Begin render operation',name='set_startTime',type='SFTime'),
          field(accessType='outputOnly',appinfo='Progress performing render operation (0..1)',name='progress',type='SFFloat'),
          field(accessType='outputOnly',appinfo='Render operation complete',name='renderCompleteTime',type='SFTime'),
          field(accessType='initializeOnly',appinfo='Format of rendered output movie (mpeg mp4 etc.)',name='movieFormat',type='MFString'),
          field(accessType='initializeOnly',appinfo='Format of rendered output images (png jpeg gif tiff etc.)',name='imageFormat',type='MFString'),
          field(accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',name='traceEnabled',type='SFBool')],
          IS=IS(
            connect=[
            connect(nodeField='description',protoField='description'),
            connect(nodeField='enabled',protoField='enabled'),
            connect(nodeField='frameRate',protoField='frameRate'),
            connect(nodeField='frameSize',protoField='frameSize'),
            connect(nodeField='pixelAspectRatio',protoField='pixelAspectRatio'),
            connect(nodeField='set_startTime',protoField='set_startTime'),
            connect(nodeField='progress',protoField='progress'),
            connect(nodeField='renderCompleteTime',protoField='renderCompleteTime'),
            connect(nodeField='movieFormat',protoField='movieFormat'),
            connect(nodeField='imageFormat',protoField='imageFormat'),
            connect(nodeField='traceEnabled',protoField='traceEnabled')])
*** TODO x3d.py and X3dToPython.xslt need to handle embedded CDATA source code for Script
)]
        #  Add any ROUTEs here, going from Script to other nodes within ProtoBody 
        )),
    #  =============== Launch Prototype Example ============== 
    Background(skyColor=[(0.282353,0.380392,0.470588)]),
    Anchor(description='launch CameraExample scene',url=["CameraExamples.x3d","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","https://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"],
      children=[
      Transform(
        children=[
        Shape(
          geometry=Text(string=["CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,0.2))))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful (still testing)")
except BaseException as err:
    print("*** Python-to-VRML export of VRML output failed:", err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (still testing)")
except SyntaxError as err:
    print("*** Python-to-JSON export of JSON output failed:", err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python x3d.py load and self-test complete for CameraPrototypes.py")
