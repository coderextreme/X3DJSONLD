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
    meta(content='BackgroundKelpForestMain.x3d',name='title'),
    meta(content='Added a Background node to the KelpForest world.',name='description'),
    meta(content='Don Brutzman Revised: Leonard Daly for X3D Book',name='creator'),
    meta(content='1 June 1998',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://faculty.nps.edu/brutzman/kelp',name='reference'),
    meta(content='http://faculty.nps.edu/brutzman/kelp/KelpForestDesignPaper.pdf',name='reference'),
    meta(content='Kelp Forest 3D models',name='subject'),
    meta(content='All content has permissions for free use. Please provide credit to the Naval Postgraduate School (NPS) Modeling Virtual Environments and Simulation (MOVES) Institute.',name='accessRights'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpForestMain.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter11LightingEnvironmentalEffects/BackgroundKelpForestMain.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(backUrl=["urn:web3d:media:textures/panoramas/horizon_3_back.jpg","../../Basic/UniversalMediaPanoramas/horizon_3_back.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_3_back.jpg","https://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/horizon_3_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_3_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_3_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_3_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_3_back.jpg"],bottomUrl=["urn:web3d:media:textures/panoramas/horizon_3_bottom.jpg","horizon_3_bottom.jpg","../../../Basic/UniversalMediaPanoramas/horizon_3_bottom.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_3_bottom.jpg","https://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/horizon_3_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_3_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_3_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_3_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_3_bottom.jpg"],frontUrl=["urn:web3d:media:textures/panoramas/horizon_3_front.jpg","../../Basic/UniversalMediaPanoramas/horizon_3_front.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_3_front.jpg","https://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/horizon_3_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_3_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_3_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_3_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_3_front.jpg"],groundAngle=[1.309,1.5707],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],leftUrl=["urn:web3d:media:textures/panoramas/horizon_3_left.jpg","../../Basic/UniversalMediaPanoramas/horizon_3_left.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_3_left.jpg","https://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/horizon_3_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_3_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_3_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_3_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_3_left.jpg"],rightUrl=["urn:web3d:media:textures/panoramas/horizon_3_right.jpg","../../Basic/UniversalMediaPanoramas/horizon_3_right.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_3_right.jpg","https://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/horizon_3_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_3_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_3_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_3_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_3_right.jpg"],skyAngle=[1.309,1.5707],skyColor=[(0,0.5,1),(0,0,1),(0,0,1)],topUrl=["urn:web3d:media:textures/panoramas/horizon_3_top.jpg","../../Basic/UniversalMediaPanoramas/horizon_3_top.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_3_top.jpg","https://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/horizon_3_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_3_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_3_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_3_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_3_top.jpg"]),
    WorldInfo(info=["kelpForestMain3.4.wrl","Model of the Monterey Bay Aquarium Kelp Forest","DTG of last updated: 111500Jun98","Updated: kelpTank2.9.wrl; ","Created by Naval Postgraduate School students under the supervision of Don Brutzman","Feel free to copy anything you wish - just give credit where it is due","http://faculty.nps.edu/brutzman/kelp"],title='NPS Virtual Kelp Forest Exhibit'),
    NavigationInfo(speed=3.0),
    ExternProtoDeclare(appinfo='ViewPositionOrientation prototype provides local position and orientation as user navigates with optional console output',name='ViewPositionOrientation',url=["../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"],
      field=[
      field(accessType='inputOutput',appinfo='Whether or not ViewPositionOrientation sends output to console.',name='enabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Output internal trace messages for debugging this node - developer use only can be ignored.',name='traceEnabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='Ability to turn output tracing on/off at runtime.',name='set_traceEnabled',type='SFBool'),
      field(accessType='outputOnly',appinfo='Output local position.',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='Output local orientation.',name='orientation_changed',type='SFRotation'),
      field(accessType='outputOnly',appinfo='MFString value of new Viewpoint for example: <Viewpoint position="20 15 20" orientation="-0.516 0.83 0.212 0.9195"/>',name='outputViewpointString',type='MFString')]),
    ProtoInstance(name='ViewPositionOrientation',
      fieldValue=[
      fieldValue(name='enabled',value=False)]),
    ExternProtoDeclare(appinfo='Reads waypoints and legSpeeds/legDurations/defaultSpeed to provide a customizable position/orientation interpolator.',name='WaypointInterpolator',url=["../../../Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d#WaypointInterpolator","https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d#WaypointInterpolator","../../../Savage/Tools/Animation/WaypointInterpolatorPrototype.wrl#WaypointInterpolator","https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.wrl#WaypointInterpolator"],
      #  Priority of use: legSpeeds (m/sec), legDurations (seconds), defaultSpeed (m/sec) 
      field=[
      field(accessType='initializeOnly',appinfo='Short description of what is animated by this WaypointInterpolator.',name='description',type='SFString'),
      field(accessType='initializeOnly',appinfo='Waypoints being traversed with interpolation of intermediate positions and orientations.',name='waypoints',type='MFVec3f'),
      field(accessType='inputOnly',appinfo='Add another single waypoint to array of waypoints recalculate interpolator values.',name='add_waypoint',type='SFVec3f'),
      field(accessType='inputOnly',appinfo='Replace all waypoints recalculate interpolator values.',name='set_waypoints',type='MFVec3f'),
      field(accessType='initializeOnly',appinfo='Whether to pitch child geometry (such as a vehicle) up or down to match vertical slope',name='pitchUpDownForVerticalWaypoints',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Units m/sec. If used array lengths for legSpeeds and legDurations must be one less than number of waypoints.',name='legSpeeds',type='MFFloat'),
      field(accessType='initializeOnly',appinfo='Units in seconds. If used array lengths for legSpeeds and legDurations must be one less than number of waypoints.',name='legDurations',type='MFTime'),
      field(accessType='initializeOnly',appinfo='Units m/sec.',name='defaultSpeed',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='turningRate (degrees/second) also determines standoff distance prior to waypoint where turn commences. If 0 turns are instantaneous.',name='turningRate',type='SFFloat'),
      field(accessType='outputOnly',appinfo='Output calculation summing all leg durations, useful for setting TimeSensor cycleInterval. Units in seconds.',name='totalDuration',type='SFTime'),
      #  interpolation fields 
      field(accessType='inputOnly',appinfo='exposed PositionInterpolator and OrientationInterpolator setting',name='set_fraction',type='SFFloat'),
      field(accessType='outputOnly',appinfo='exposed PositionInterpolator setting',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='exposed OrientationInterpolator setting',name='orientation_changed',type='SFRotation'),
      #  display-related fields 
      field(accessType='inputOutput',appinfo='default color for non-active line segments',name='lineColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='highlightSegmentColors must contain two color values for each endpoint of the highlight segment.',name='highlightSegmentColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='1.0 is completely transparent, 0.0 is completely opaque.',name='transparency',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='allowed values: none; waypoints (produce labels at each waypoint); or interpolation (produce single moving label at interpolator time course speed location)',name='labelDisplayMode',type='SFString'),
      field(accessType='initializeOnly',appinfo='allowed values: altitude depth (negate Y value) none',name='heightLabel',type='SFString'),
      field(accessType='initializeOnly',appinfo='heightLabel relative location',name='labelOffset',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='heightLabel text size',name='labelFontSize',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='heightLabel text color',name='labelColor',type='SFColor'),
      field(accessType='initializeOnly',appinfo='enable console output to trace script computations and prototype progress',name='traceEnabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Output the number of waypoints totalDistance and totalDuration to console upon initialization',name='outputInitializationComputations',type='SFBool'),
      field(accessType='inputOutput',appinfo='default color for vertical drop-line segments',name='verticalDropLineColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='1.0 is completely transparent, 0.0 is completely opaque.',name='verticalDropLineTransparency',type='SFFloat')]),
    Group(DEF='Viewpoints',
      children=[
      Viewpoint(description='Kelp Forest Monterey Bay Aquarium',position=(0.0,-5.0,45.0)),
      Viewpoint(description='Side Windows',fieldOfView=0.5,orientation=(0.0,1.0,0.0,0.9),position=(25.0,-4.0,15.0)),
      Viewpoint(description='Star Fish',orientation=(0.0,1.0,0.0,1.25),position=(14.0,-5.75,1.0)),
      Viewpoint(description='Inside Tank',orientation=(0.0,1.0,0.0,3.14),position=(0.0,-5.0,-7.0)),
      Viewpoint(description='Top floor',fieldOfView=1.04719,orientation=(-0.3,1.0,0.3,1.57079),position=(12.5,5.0,-2.0)),
      Viewpoint(description="Bird's Eye View",orientation=(1.0,0.0,0.0,-1.57),position=(0.0,19.0,-3.5)),
      Viewpoint(description='Pump House',fieldOfView=0.6,orientation=(0.0,1.0,0.0,1.3),position=(-5.0,1.0,0.0))]),
    Group(DEF='Root',
      children=[
      Inline(url=["../KelpForestExhibit/IntroductionMessage.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/IntroductionMessage.x3d","../KelpForestExhibit/IntroductionMessage.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/IntroductionMessage.wrl"]),
      Collision(enabled=False,
        children=[
        Transform(
          children=[
          Inline(url=["../KelpForestExhibit/SharkLeftyLocale.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SharkLeftyLocale.x3d","../KelpForestExhibit/SharkLeftyLocale.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SharkLeftyLocale.wrl"])]),
        Transform(
          children=[
          Inline(url=["../KelpForestExhibit/SharkLucyLocale.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SharkLucyLocale.x3d","../KelpForestExhibit/SharkLucyLocale.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SharkLucyLocale.wrl"])]),
        Transform(
          children=[
          Inline(url=["../KelpForestExhibit/KelpTank.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpTank.x3d","../KelpForestExhibit/KelpTank.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpTank.wrl"])]),
        Transform(scale=(0.54,0.75,0.52),translation=(0.3,-2.88,7.3),
          children=[
          Inline(url=["../KelpForestExhibit/RockFloor.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/RockFloor.x3d","../KelpForestExhibit/RockFloor.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/RockFloor.wrl"])]),
        Transform(DEF='K2_LOCALE',translation=(-4.0,0.0,1.0),
          children=[
          Transform(DEF='K2_MIDWATER',scale=(0.2,0.2,0.2),translation=(-1.0,-4.0,-4.0),
            children=[
            Inline(url=["../KelpForestExhibit/SardineSchool.x3d","SardineSchool/SardineSchool.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SardineSchool.x3d","../KelpForestExhibit/SardineSchool.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SardineSchool.wrl"])]),
          Transform(DEF='K2_FLOOR',rotation=(0.0,1.0,0.0,0.44),scale=(0.5,0.9,0.5),translation=(-1.9,-8.5,-1.5),
            children=[
            Inline(DEF='KelpExamplesNoBase',url=["../KelpForestExhibit/KelpExamplesNoBase.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpExamplesNoBase.x3d","../KelpForestExhibit/KelpExamplesNoBase.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpExamplesNoBase.wrl"])])]),
        Transform(DEF='K4_LOCALE',translation=(-2.5,0.0,-2.5),
          children=[
          Transform(DEF='K4_MIDWATER',translation=(-10.0,-2.0,-2.0),
            children=[
            Inline(url=["../KelpForestExhibit/HalfMoonGroup.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/HalfMoonGroup.x3d","../KelpForestExhibit/HalfMoonGroup.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/HalfMoonGroup.wrl"])]),
          Transform(DEF='K4_FLOOR',rotation=(0.0,1.0,0.0,-0.3),scale=(0.5,0.8,0.5),translation=(-1.5,-7.5,0.5),
            children=[
            Inline(USE='KelpExamplesNoBase')])]),
        Transform(DEF='K7_LOCALE',translation=(2.0,0.0,-2.5),
          children=[
          Transform(DEF='K7_MIDWATER',scale=(0.25,0.25,0.25),translation=(2.0,-4.0,0.0),
            children=[
            Inline(url=["../KelpForestExhibit/RubberLipGroup.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/RubberLipGroup.x3d","../KelpForestExhibit/RubberLipGroup.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/RubberLipGroup.wrl"])]),
          Transform(DEF='K7_FLOOR',scale=(0.5,0.85,0.5),translation=(0.0,-7.75,0.0),
            children=[
            Inline(USE='KelpExamplesNoBase')])]),
        Transform(DEF='K10_LOCALE',translation=(7.0,0.0,2.0),
          children=[
          Transform(DEF='K10_DEEP',translation=(0.0,-5.0,0.0),
            children=[
            Inline(url=["../KelpForestExhibit/StripedSurfPerch.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/StripedSurfPerch.x3d","../KelpForestExhibit/StripedSurfPerch.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/StripedSurfPerch.wrl"])]),
          Transform(DEF='K10_FLOOR',rotation=(0.0,1.0,0.0,0.16),scale=(0.5,0.75,0.5),translation=(-1.0,-7.0,-1.0),
            children=[
            Inline(USE='KelpExamplesNoBase')])]),
        Transform(DEF='K11_LOCALE',translation=(8.0,0.0,-2.0),
          children=[
          Transform(DEF='K11_MIDWATER',rotation=(0.0,1.0,0.0,0.3),translation=(2.19,-7.0,0.15),
            children=[
            Inline(url=["../KelpForestExhibit/SeaStarSimple.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SeaStarSimple.x3d","../KelpForestExhibit/SeaStarSimple.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SeaStarSimple.wrl"])]),
          Transform(DEF='K11_DEEP',rotation=(0.0,1.0,0.0,0.9),translation=(1.0,-5.0,0.0),
            children=[
            Inline(url=["../KelpForestExhibit/BlackSurfPerch.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/BlackSurfPerch.x3d","../KelpForestExhibit/BlackSurfPerch.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/BlackSurfPerch.wrl"])]),
          Transform(DEF='K11_FLOOR',rotation=(0.0,1.0,0.0,0.3),scale=(0.5,0.75,0.5),translation=(-0.3,-7.0,0.0),
            children=[
            Inline(USE='KelpExamplesNoBase')]),
          Transform(translation=(1.3,-5.0,3.0),
            children=[
            Inline(url=["../KelpForestExhibit/SeaStarGroup.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SeaStarGroup.x3d","../KelpForestExhibit/SeaStarGroup.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SeaStarGroup.wrl"])])]),
        Transform(DEF='R2_LOCALE',translation=(-1.0,0.0,-1.0),
          children=[
          Transform(DEF='R2_MIDWATER',translation=(-1.0,-6.0,-2.0),
            children=[
            Inline(url=["../KelpForestExhibit/BlueRockFish.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/BlueRockFish.x3d","../KelpForestExhibit/BlueRockFish.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/BlueRockFish.wrl"])]),
          Transform(DEF='R2_DEEP',translation=(1.0,-6.5,-1.0),
            children=[
            Inline(url=["../KelpForestExhibit/KelpSurfPerch.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpSurfPerch.x3d","../KelpForestExhibit/KelpSurfPerch.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpSurfPerch.wrl"])])]),
        Transform(DEF='R3_LOCALE',translation=(3.0,0.0,-4.0),
          children=[
          Transform(DEF='R3_MIDWATER',translation=(0.0,-6.0,0.0),
            children=[
            Inline(url=["../KelpForestExhibit/Garibaldi.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/Garibaldi.x3d","../KelpForestExhibit/Garibaldi.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/Garibaldi.wrl"])])]),
        Transform(DEF='R5_LOCALE',translation=(8.0,0.0,-2.0),
          children=[
          Transform(DEF='R5_SHALLOW',translation=(-2.0,-2.0,0.0),
            children=[
            Inline(url=["../KelpForestExhibit/KelpBass.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpBass.x3d","../KelpForestExhibit/KelpBass.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpBass.wrl"])])]),
        TimeSensor(DEF='WAVE_CLOCK',cycleInterval=5.5,enabled=False,loop=True),
        PositionInterpolator(DEF='LEFT_SHALLOW_WAVE',key=[0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0],keyValue=[(0.0,0.0,0.0),(0.056,-0.085,0.0),(0.08,-0.12,0.0),(0.056,-0.085,0.0),(0.0,0.0,0.0),(-0.056,0.085,0.0),(-0.08,0.12,0.0),(-0.056,0.085,0.0),(0.0,0.0,0.0)]),
        PositionInterpolator(DEF='LEFT_DEEP_WAVE',key=[0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0],keyValue=[(0.0,0.0,0.0),(0.035,-0.035,0.0),(0.05,-0.05,0.0),(0.035,-0.035,0.0),(0.0,0.0,0.0),(-0.035,0.035,0.0),(-0.05,0.05,0.0),(-0.035,0.035,0.0),(0.0,0.0,0.0)]),
        PositionInterpolator(DEF='CENTER_WAVE',key=[0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0],keyValue=[(0.0,0.0,0.0),(0.106,0.0,0.0),(0.15,0.0,0.0),(0.106,0.0,0.0),(0.0,0.0,0.0),(-0.106,0.0,0.0),(-0.15,0.0,0.0),(-0.106,0.0,0.0),(0.0,0.0,0.0)]),
        PositionInterpolator(DEF='RIGHT_SHALLOW_WAVE',key=[0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0],keyValue=[(0.0,0.0,0.0),(0.056,0.085,0.0),(0.08,0.12,0.0),(0.056,0.085,0.0),(0.0,0.0,0.0),(-0.056,-0.085,0.0),(-0.08,-0.12,0.0),(-0.056,-0.085,0.0),(0.0,0.0,0.0)]),
        PositionInterpolator(DEF='RIGHT_DEEP_WAVE',key=[0.0,0.125,0.25,0.375,0.5,0.625,0.75,0.875,1.0],keyValue=[(0.0,0.0,0.0),(0.035,0.035,0.0),(0.05,0.05,0.0),(0.035,0.035,0.0),(0.0,0.0,0.0),(-0.035,-0.035,0.0),(-0.05,-0.05,0.0),(-0.035,-0.035,0.0),(0.0,0.0,0.0)])])]),
    ROUTE(fromField='fraction_changed',fromNode='WAVE_CLOCK',toField='set_fraction',toNode='CENTER_WAVE'),
    ROUTE(fromField='value_changed',fromNode='CENTER_WAVE',toField='set_translation',toNode='K7_MIDWATER'),
    ROUTE(fromField='value_changed',fromNode='RIGHT_DEEP_WAVE',toField='set_translation',toNode='K2_MIDWATER'),
    ROUTE(fromField='value_changed',fromNode='CENTER_WAVE',toField='set_translation',toNode='K4_MIDWATER'),
    ROUTE(fromField='value_changed',fromNode='LEFT_DEEP_WAVE',toField='set_translation',toNode='K10_DEEP'),
    ROUTE(fromField='value_changed',fromNode='LEFT_DEEP_WAVE',toField='set_translation',toNode='K11_DEEP'),
    ROUTE(fromField='value_changed',fromNode='RIGHT_SHALLOW_WAVE',toField='set_translation',toNode='R2_MIDWATER'),
    ROUTE(fromField='value_changed',fromNode='RIGHT_DEEP_WAVE',toField='set_translation',toNode='R2_DEEP'),
    ROUTE(fromField='value_changed',fromNode='CENTER_WAVE',toField='set_translation',toNode='R3_MIDWATER'),
    ROUTE(fromField='value_changed',fromNode='RIGHT_SHALLOW_WAVE',toField='set_translation',toNode='R5_SHALLOW'),
    TimeSensor(DEF='MasterClock',loop=True),
    Group(DEF='Nancy',
      #  Scale used on Nancy underwater to approximate the defraction magnification of the plexiglass window. 
      children=[
      Transform(DEF='NancyTransform',rotation=(-0.45,0.77,-0.45,1.82),scale=(1.3,1.3,1.3),translation=(3,-6.5,-2),
        children=[
        Inline(url=["../HumanoidAnimation/NancyDiving.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/NancyDiving.x3d","../HumanoidAnimation/NancyDiving.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/NancyDiving.wrl"])]),
      TimeSensor(DEF='JEFFSCLOCK',cycleInterval=100,loop=True),
      ProtoInstance(DEF='NancyInterpolator',name='WaypointInterpolator',
        fieldValue=[
        fieldValue(name='description',value='Nancy track'),
        fieldValue(name='waypoints',value=[(-5.5,-5.7,-.2),(-7.7,-2.7,-1.7),(6,-3,-3),(2,-2,-2),(1,-4,-1),(-2,-2,-2),(-5.5,-5.7,-.2)]),
        fieldValue(name='defaultSpeed',value=0.5),
        fieldValue(name='pitchUpDownForVerticalWaypoints',value=True),
        fieldValue(name='labelDisplayMode',value='none'),
        fieldValue(name='lineColor',value=(0,0,0)),
        fieldValue(name='labelColor',value=(0,0.8,0.8)),
        fieldValue(name='labelOffset',value=(0,-1.6,0)),
        fieldValue(name='labelFontSize',value=6),
        fieldValue(name='traceEnabled',value=False),
        fieldValue(name='transparency',value=1),
        fieldValue(name='turningRate',value=18)]
        #  totalDuration is a computed output 
        )]),
    ROUTE(fromField='fraction_changed',fromNode='JEFFSCLOCK',toField='set_fraction',toNode='NancyInterpolator'),
    ROUTE(fromField='position_changed',fromNode='NancyInterpolator',toField='set_translation',toNode='NancyTransform'),
    ROUTE(fromField='orientation_changed',fromNode='NancyInterpolator',toField='set_rotation',toNode='NancyTransform')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BackgroundKelpForestMain.py")
