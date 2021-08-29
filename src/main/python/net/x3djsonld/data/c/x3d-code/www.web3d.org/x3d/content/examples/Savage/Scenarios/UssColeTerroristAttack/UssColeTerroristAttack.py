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
    meta(content='UssColeTerroristAttack.x3d',name='title'),
    meta(content='Unclassified physical based model of the Al-Qaida sponsored terrorist attack on the USS COLE on 12 October 2000. Click on the Terrorist boat to trigger the explosion.',name='description'),
    meta(content='James Harney',name='creator'),
    meta(content='7 October 2001',name='created'),
    meta(content='21 October 2018',name='modified'),
    meta(content='http://en.wikipedia.org/wiki/USS_Cole_bombing',name='reference'),
    meta(content='http://www.foia.navy.mil/usscole/index.html',name='reference'),
    meta(content='UssColeTerroristAttack.ppt',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/UssColeTerroristAttack.ppt',name='reference'),
    meta(content='http://www.pilotonline.com',name='reference'),
    meta(content='http://www.prop1.org/nucnews/nucnews.htm',name='reference'),
    meta(content='http://www.jpost.com/Editions/2001/08/12/Features/Features.32382.html',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/CollisionUssGreenvilleEhimeMaru/CollisionCourses.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/CollisionUssGreenvilleEhimeMaru/CollisionCourses.wrl',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/navy/docs/swos/cmd/cp17/sld001.htm',name='reference'),
    meta(content='NIMA Chart No. 62098 Banda at Tdwahi, 4th Ed. 30 Sep 1995',name='reference'),
    meta(content='NIMA62098.jpg',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/NIMA62098.jpg',name='reference'),
    meta(content='http://www.fas.org/irp/doddir/dod/app-j_THREATCON.htm',name='reference'),
    meta(content='http://www.fas.org/irp/program/core/dted.htm',name='reference'),
    meta(content='USS COLE, Al-Qaida sponsored Terrorist Attacks',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/UssColeTerroristAttack.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  <Group DEF='ExternProtoDeclareGroup'> </Group> 
    #  This group holds ExternProtoDeclare statements to simplify editing 
    children=[
    ExternProtoDeclare(appinfo='Reads waypoints and legSpeeds/legDurations/defaultSpeed to provide a customizable position/orientation interpolator.',name='WaypointInterpolator',url=["../../../Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d#WaypointInterpolator","https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d#WaypointInterpolator","../../../Savage/Tools/Animation/WaypointInterpolatorPrototype.wrl#WaypointInterpolator","https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.wrl#WaypointInterpolator"],
      #  Priority of use: legSpeeds (m/sec), legDurations (seconds), defaultSpeed (m/sec) 
      #  interpolation fields 
      #  display-related fields 
      field=[
      field(accessType='initializeOnly',appinfo='Short description of what is animated by this WaypointInterpolator.',name='description',type='SFString'),
      field(accessType='initializeOnly',appinfo='Waypoints being traversed with interpolation of intermediate positions and orientations.',name='waypoints',type='MFVec3f'),
      field(accessType='inputOnly',appinfo='Add another single waypoint to array of waypoints recalculate interpolator values.',name='add_waypoint',type='SFVec3f'),
      field(accessType='inputOnly',appinfo='Replace all waypoints recalculate interpolator values.',name='set_waypoints',type='MFVec3f'),
      field(accessType='initializeOnly',appinfo='Whether to pitch child geometry (such as a vehicle) up or down to match vertical slope',name='pitchUpDownForVerticalWaypoints',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Units m/sec. If used array lengths for legSpeeds and legDurations must be one less than number of waypoints.',name='legSpeeds',type='MFFloat'),
      field(accessType='initializeOnly',appinfo='Units in seconds. If used array lengths for legSpeeds and legDurations must be one less than number of waypoints.',name='legDurations',type='MFFloat'),
      field(accessType='initializeOnly',appinfo='Units m/sec.',name='defaultSpeed',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='turningRate (degrees/second) also determines standoff distance prior to waypoint where turn commences. If 0 turns are instantaneous.',name='turningRate',type='SFFloat'),
      field(accessType='outputOnly',appinfo='Output calculation summing all leg durations, useful for setting TimeSensor cycleInterval. Units in seconds.',name='totalDuration',type='SFTime'),
      field(accessType='inputOnly',appinfo='exposed PositionInterpolator and OrientationInterpolator setting',name='set_fraction',type='SFFloat'),
      field(accessType='outputOnly',appinfo='exposed PositionInterpolator setting',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='exposed OrientationInterpolator setting',name='orientation_changed',type='SFRotation'),
      field(accessType='inputOutput',appinfo='default color for non-active line segments',name='lineColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='active segment highlight color',name='highlightSegmentColor',type='SFColor'),
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
    ExternProtoDeclare(appinfo='Physics-based explosion model',name='TNTBasedExplosion',url=["PhysicsBasedExplosionPrototype.x3d#TNTBasedExplosion","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/PhysicsBasedExplosionPrototype.x3d#TNTBasedExplosion","PhysicsBasedExplosionPrototype.wrl#TNTBasedExplosion","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/PhysicsBasedExplosionPrototype.wrl#TNTBasedExplosion"],
      field=[
      field(accessType='inputOnly',name='startExplosion',type='SFTime')]),
    ExternProtoDeclare(name='TerroristBoat',url=["TerroristBoatPrototype.x3d#TerroristBoat","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/TerroristBoatPrototype.x3d#TerroristBoat","TerroristBoatPrototype.wrl#TerroristBoat","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/TerroristBoatPrototype.wrl#TerroristBoat"],
      field=[
      field(accessType='inputOnly',name='startExplosion',type='SFTime')]),
    ExternProtoDeclare(appinfo='Arleigh Burke class destroyer',name='ArleighBurke',url=["../../ShipsMilitary/DDGArleighBurkeUnitedStates/ArleighBurkePrototype.x3d#ArleighBurke","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/ArleighBurkePrototype.x3d#ArleighBurke","../../ShipsMilitary/DDGArleighBurkeUnitedStates/ArleighBurkePrototype.wrl#ArleighBurke","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/ArleighBurkePrototype.wrl#ArleighBurke"],
      field=[
      field(accessType='inputOnly',name='startExplosion',type='SFTime')]),
    ExternProtoDeclare(appinfo='Circular set of compass bearings that follow the active viewpoint set at 360/12 = 30 degree intervals. North = +X axis East = +Z axis up = +Y axis.',name='CameraCompass12',url=["../../../Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d#CameraCompass12","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.x3d#CameraCompass12","../../../Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.wrl#CameraCompass12","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/CameraCompassPrototypes.wrl#CameraCompass12"],
      field=[
      field(accessType='inputOutput',name='enabled',type='SFBool'),
      field(accessType='inputOutput',name='positionOffsetFromCamera',type='SFVec3f'),
      field(accessType='inputOutput',name='markerColor',type='SFColor'),
      field(accessType='inputOutput',name='labelColor',type='SFColor')]),
    ExternProtoDeclare(appinfo='Digital Virtual Display (DVD) Controller Prototype is a heads-up display (HUD) to control animation timing',name='DvdController',url=["../../Tools/HeadsUpDisplays/DvdControllerPrototype.x3d#DvdController","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.x3d#DvdController","../../Tools/HeadsUpDisplays/DvdControllerPrototype.wrl#DvdController","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/DvdControllerPrototype.wrl#DvdController"],
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
      field(accessType='initializeOnly',appinfo='Enable/disable console output for troubleshooting',name='traceEnabled',type='SFBool'),
      field(accessType='initializeOnly',name='testTimeVal',type='SFTime')]),
    ExternProtoDeclare(name='LineBoat',url=["LineBoatPrototype.x3d#LineBoat","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/LineBoatPrototype.x3d#TerroristBoat","LineBoatPrototype.wrl#LineBoat","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/LineBoatPrototype.wrl#TerroristBoat"],
      field=[
      field(accessType='inputOnly',name='startExplosion',type='SFTime')]),
    ExternProtoDeclare(name='GarbageBoat',url=["GarbageBoatPrototype.x3d#GarbageBoat","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/GarbageBoatPrototype.x3d#GarbageBoat","GarbageBoatPrototype.wrl#GarbageBoat","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/GarbageBoatPrototype.wrl#GarbageBoat"],
      field=[
      field(accessType='inputOnly',name='startExplosion',type='SFTime')]),
    Group(
      children=[
      NavigationInfo(speed=100,type=["EXAMINE","FLY","ANY"],visibilityLimit=50000),
      Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
      #  *****************************Main Scene Viewpoints****************** 
      Group(DEF='ViewPoints',
        children=[
        Viewpoint(DEF='EntryView',description='Aden Chart',position=(0,.1,4)),
        Viewpoint(description='Aden Chart Close Up',position=(0,.5,2)),
        Viewpoint(description='Harbor View',orientation=(1,0,0,-.95),position=(17000,20000,40000)),
        Viewpoint(description='Overhead RefuelingDolphin Seven',orientation=(1,0,0,-1.57),position=(27838.31,700,14166.67)),
        Viewpoint(description='Final View of Terrorist Attack',position=(27793.31,10,14330))]
        #  ***************************Scene Compass********************** 
        ),
      Transform(DEF='Compass',
        children=[
        ProtoInstance(name='CameraCompass12',
          fieldValue=[
          fieldValue(name='enabled',value=True),
          fieldValue(name='positionOffsetFromCamera',value=(0,5,0)),
          fieldValue(name='markerColor',value=(0.3,0.3,0.8)),
          fieldValue(name='labelColor',value=(1,1,1))])]),
      #  ************DVD Controller for Scene************ 
      #  Looks like this must be instantiated before WaypointInterpolator in order to receive totalDuration value; this is a browser bug. 
      #  initialilze cycleInterval to correct value as default, in case initialization ROUTE fails. cycleInterval should not need to be reset, so this is superfluous. 
      ProtoInstance(DEF='ColeAnimationDvdController',name='DvdController',
        fieldValue=[
        fieldValue(name='description',value='ColeAnimationDvdController'),
        fieldValue(name='buttonColor',value=(0.655,0.655,0.655)),
        fieldValue(name='selectedButtonColor',value=(0.675,0.675,0.675)),
        fieldValue(name='selectedLabelColor',value=(0.9,0,0)),
        fieldValue(name='locationOffset',value=(-6,-3,-1)),
        fieldValue(name='cycleInterval',value=13416),
        fieldValue(name='speedFactor',value=25)]),
      #  *************COLE Code************* 
      Transform(DEF='ColeTransform',
        children=[
        ProtoInstance(DEF='DDG-51',name='ArleighBurke')]),
      ProtoInstance(DEF='ColeInterpolator',name='WaypointInterpolator',
        fieldValue=[
        fieldValue(name='description',value='ColeInterpolator'),
        fieldValue(name='waypoints',value=[(27000,0,34000),(24000,0,29000),(23000,0,22000),(23000,0,18000),(26500,0,15000),(28950,0,14000),(27838.31,0,14167),(27838.31,0,14167)]),
        #  1 knot = 0.514444444 meters/second, 11 knots = 5.66 meters/second 
        fieldValue(name='legDurations',value=[700,723,754,811,819,849,8760]),
        fieldValue(name='turningRate',value=5),
        fieldValue(name='labelDisplayMode',value='interpolation'),
        fieldValue(name='lineColor',value=(0,0.8,0.8)),
        fieldValue(name='labelColor',value=(0,0.8,0.8)),
        fieldValue(name='labelOffset',value=(0,20,0)),
        fieldValue(name='labelFontSize',value=6),
        fieldValue(name='traceEnabled',value=False)]),
      #  *************Terrorist Boat and Explosion Code*** 
      Transform(DEF='TerroristBoatTransform',rotation=(0,1,0,-0.5),
        children=[
        ProtoInstance(DEF='Boat',name='TerroristBoat'),
        TouchSensor(DEF='TerroristTouch',description='touch to trigger explosion'),
        ROUTE(fromField='touchTime',fromNode='TerroristTouch',toField='startExplosion',toNode='Boat'),
        #  ********************Explosion Code***************** 
        Transform(DEF='TNTtransform',translation=(9,0,0),
          children=[
          ProtoInstance(DEF='TerroristExplosion',name='TNTBasedExplosion')])]),
      ProtoInstance(DEF='TerroristInterpolator',name='WaypointInterpolator',
        fieldValue=[
        fieldValue(name='description',value='TerroristInterpolator'),
        fieldValue(name='waypoints',value=[(25000,-9.5,14000),(27000,-9.5,15000),(27000,-9.5,14350),(27793.31,-9.5,14300),(27760.31,-9.5,14201),(27760.31,-9.5,14201)]),
        #  1 knot = 0.514444444 meters/second, 11 knots = 5.66 meters/second 
        fieldValue(name='legDurations',value=[9068,811,819,2698,88]),
        fieldValue(name='turningRate',value=5),
        fieldValue(name='labelDisplayMode',value='interpolation'),
        fieldValue(name='lineColor',value=(0.8,0.4,0.1)),
        fieldValue(name='labelColor',value=(0.8,0.4,0.1)),
        fieldValue(name='labelOffset',value=(0,10,0)),
        fieldValue(name='labelFontSize',value=3),
        fieldValue(name='traceEnabled',value=False)]),
      ROUTE(fromField='touchTime',fromNode='TerroristTouch',toField='startExplosion',toNode='TerroristExplosion'),
      ROUTE(fromField='touchTime',fromNode='TerroristTouch',toField='startExplosion',toNode='DDG-51'),
      #  *************Clock control************* 
      #  TimeSensor cycleInterval is reset when each WaypointInterpolator is initialized 
      TimeSensor(DEF='MasterClock'),
      TimeSensor(DEF='TerroristClock'),
      #  TODO: Delete if unneeded 
      PositionInterpolator(DEF='DummyInterpolator',key=[0,1],keyValue=[(0,0,0),(0,0,0)]),
      Group(DEF='InlineGroup',
        #  *************Geography and Entry Point Code*** 
        #  <LOD center='27793.31 0 14159'/> 
        children=[
        Inline(url=["AdenHarbor.x3d","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/AdenHarbor.x3d","AdenHarbor.wrl","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/AdenHarbor.wrl"]),
        Inline(url=["AdenHarborChart.x3d","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/AdenHarborChart.x3d","AdenHarborChart.wrl","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/AdenHarborChart.wrl"]),
        #  *************Refueling Pier Code************* 
        Transform(DEF='RefuelingDolphin',translation=(27793.31,-10,14159),
          children=[
          Inline(url=["RefuelingPierSeven.x3d","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/RefuelingPierSeven.x3d","RefuelingPierSeven.wrl","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/RefuelingPierSeven.wrl"])]),
        #  *******Background entities*********** 
        Transform(DEF='TankerTransform',rotation=(0,1,0,3.24),translation=(28550,0,14700),
          children=[
          Inline(DEF='TANKER',url=["../../ShipsCivilian/Supertanker/SupertankerExampleDay.x3d","https://savage.nps.edu/Savage/ShipsCivilian/Supertanker/SupertankerExampleDay.x3d","../../ShipsCivilian/Supertanker/SupertankerExampleDay.wrl","https://savage.nps.edu/Savage/ShipsCivilian/Supertanker/SupertankerExampleDay.wrl"])]),
        Transform(DEF='MerchantATransform',translation=(27200,-6.5,15100),
          children=[
          Inline(DEF='MERCHANT',url=["../../ShipsCivilian/MerchantLivestockCarrier/MerchantLivestockCarrier.x3d","https://savage.nps.edu/Savage/ShipsCivilian/MerchantLivestockCarrier/MerchantLivestockCarrier.x3d","https://savage.nps.edu/Savage/ShipsCivilian/MerchantLivestockCarrier/MerchantLivestockCarrier.wrl"])]),
        Transform(DEF='MerchantBTransform',rotation=(0,1,0,-.1),translation=(27850,-6.5,14900),
          children=[
          Inline(USE='MERCHANT')])]),
      #  ***********Other Boat Entities in Scene********* 
      #  *******Line Boats************ 
      Transform(DEF='LineBoatATransform',rotation=(0,1,0,1.57),
        children=[
        ProtoInstance(DEF='LINEBOATA',name='LineBoat')]),
      ProtoInstance(DEF='LineBoatAInterpolator',name='WaypointInterpolator',
        fieldValue=[
        fieldValue(name='description',value='LineBoatAInterpolator'),
        fieldValue(name='waypoints',value=[(31215,-9.5,14316),(31215,-9.5,14316),(27838,-9.5,14186),(27838,-9.5,14186),(31215,-9.5,14316),(31215,-9.5,14316),(31215,-9.5,14316)]),
        #  1 knot = 0.514444444 meters/second, 11 knots = 5.66 meters/second 
        fieldValue(name='legDurations',value=[4296,360,1260,360,10,7130]),
        fieldValue(name='turningRate',value=5),
        fieldValue(name='labelDisplayMode',value='none'),
        fieldValue(name='lineColor',value=(1,1,1)),
        fieldValue(name='labelColor',value=(1,1,1)),
        fieldValue(name='labelOffset',value=(0,10,0)),
        fieldValue(name='labelFontSize',value=3),
        fieldValue(name='traceEnabled',value=False)]),
      Transform(DEF='LineBoatBTransform',rotation=(0,1,0,1.57),
        children=[
        ProtoInstance(DEF='LINEBOATB',name='LineBoat')]),
      ProtoInstance(DEF='LineBoatBInterpolator',name='WaypointInterpolator',
        fieldValue=[
        fieldValue(name='description',value='LineBoatBInterpolator'),
        fieldValue(name='waypoints',value=[(31200,-9.5,14216),(31200,-9.5,14216),(27760,-9.5,14201),(27720,-9.5,14201),(27720,-9.5,14201),(31200,-9.5,14216),(31200,-9.5,14216)]),
        #  1 knot = 0.514444444 meters/second, 11 knots = 5.66 meters/second 
        fieldValue(name='legDurations',value=[4296,360,200,1260,360,6940]),
        fieldValue(name='turningRate',value=5),
        fieldValue(name='labelDisplayMode',value='none'),
        fieldValue(name='lineColor',value=(1,1,1)),
        fieldValue(name='labelColor',value=(1,1,1)),
        fieldValue(name='labelOffset',value=(0,10,0)),
        fieldValue(name='labelFontSize',value=3),
        fieldValue(name='traceEnabled',value=False)]),
      #  **********Garbage Boat*********** 
      Transform(DEF='GarbageBoatTransform',
        children=[
        ProtoInstance(DEF='GARBAGEBOAT',name='GarbageBoat')]),
      ProtoInstance(DEF='GarbageBoatInterpolator',name='WaypointInterpolator',
        fieldValue=[
        fieldValue(name='description',value='GarbageBoatInterpolator'),
        fieldValue(name='waypoints',value=[(30000,-9.75,14216),(30000,-9.75,14216),(27838,-9.75,14176),(27838,-9.75,14176),(27838,-9.75,14200),(31200,-9.75,14200),(31200,-9.75,14220)]),
        #  1 knot = 0.514444444 meters/second, 11 knots = 5.66 meters/second 
        fieldValue(name='legDurations',value=[5736,300,600,600,360,5820]),
        fieldValue(name='turningRate',value=5),
        fieldValue(name='labelDisplayMode',value='none'),
        fieldValue(name='lineColor',value=(1,1,0)),
        fieldValue(name='labelColor',value=(1,1,0)),
        fieldValue(name='labelOffset',value=(0,10,0)),
        fieldValue(name='labelFontSize',value=3),
        fieldValue(name='traceEnabled',value=False)]),
      #  MasterClock is a simple TimeSensor, these ROUTEs are replaced. Farther down, route totalDuration to ColeAnimationDvdController.set_cycleInterval 
      ROUTE(fromField='totalDuration',fromNode='ColeInterpolator',toField='cycleInterval',toNode='MasterClock'),
      ROUTE(fromField='totalDuration',fromNode='TerroristInterpolator',toField='cycleInterval',toNode='TerroristClock'),
      ROUTE(fromField='fraction_changed',fromNode='MasterClock',toField='set_fraction',toNode='DummyInterpolator'),
      ROUTE(fromField='fraction_changed',fromNode='TerroristClock',toField='set_fraction',toNode='DummyInterpolator'),
      #  ColeAnimationDvdController replaces TimeSensor functionality 
      ROUTE(fromField='totalDuration',fromNode='ColeInterpolator',toField='set_cycleInterval',toNode='ColeAnimationDvdController'),
      ROUTE(fromField='fraction_changed',fromNode='ColeAnimationDvdController',toField='set_fraction',toNode='TerroristInterpolator'),
      ROUTE(fromField='fraction_changed',fromNode='ColeAnimationDvdController',toField='set_fraction',toNode='LineBoatAInterpolator'),
      ROUTE(fromField='fraction_changed',fromNode='ColeAnimationDvdController',toField='set_fraction',toNode='LineBoatBInterpolator'),
      ROUTE(fromField='fraction_changed',fromNode='ColeAnimationDvdController',toField='set_fraction',toNode='GarbageBoatInterpolator'),
      #  WaypointInterpolator drives both translation and rotation 
      ROUTE(fromField='position_changed',fromNode='ColeInterpolator',toField='set_translation',toNode='ColeTransform'),
      ROUTE(fromField='orientation_changed',fromNode='ColeInterpolator',toField='set_rotation',toNode='ColeTransform'),
      ROUTE(fromField='position_changed',fromNode='TerroristInterpolator',toField='set_translation',toNode='TerroristBoatTransform'),
      ROUTE(fromField='orientation_changed',fromNode='TerroristInterpolator',toField='set_rotation',toNode='TerroristBoatTransform'),
      ROUTE(fromField='position_changed',fromNode='LineBoatAInterpolator',toField='set_translation',toNode='LineBoatATransform'),
      ROUTE(fromField='orientation_changed',fromNode='LineBoatAInterpolator',toField='set_rotation',toNode='LineBoatATransform'),
      ROUTE(fromField='position_changed',fromNode='LineBoatBInterpolator',toField='set_translation',toNode='LineBoatBTransform'),
      ROUTE(fromField='orientation_changed',fromNode='LineBoatBInterpolator',toField='set_rotation',toNode='LineBoatBTransform'),
      ROUTE(fromField='position_changed',fromNode='GarbageBoatInterpolator',toField='set_translation',toNode='GarbageBoatTransform'),
      ROUTE(fromField='orientation_changed',fromNode='GarbageBoatInterpolator',toField='set_rotation',toNode='GarbageBoatTransform'),
      #  Boolean Sequencer Triggers Explosion at appropriate time if user hasn't. Sends a true value to the script TimeFilter which then sends the current timestamp to the appropriate proto's in the scene to trigger the explosion. 
      BooleanSequencer(DEF='ExplosionBinder',key=[0,0.9999999,1],keyValue=[False,False,True]),
      Script(DEF='TimeFilter',
        field=[
        field(accessType='inputOnly',name='setStart',type='SFBool'),
        field(accessType='outputOnly',name='startEventTime',type='SFTime')]),
      ROUTE(fromField='fraction_changed',fromNode='ColeAnimationDvdController',toField='set_fraction',toNode='ExplosionBinder'),
      ROUTE(fromField='value_changed',fromNode='ExplosionBinder',toField='setStart',toNode='TimeFilter'),
      ROUTE(fromField='startEventTime',fromNode='TimeFilter',toField='startExplosion',toNode='TerroristExplosion'),
      ROUTE(fromField='startEventTime',fromNode='TimeFilter',toField='startExplosion',toNode='DDG-51'),
      ROUTE(fromField='startEventTime',fromNode='TimeFilter',toField='startExplosion',toNode='Boat')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for UssColeTerroristAttack.py")
