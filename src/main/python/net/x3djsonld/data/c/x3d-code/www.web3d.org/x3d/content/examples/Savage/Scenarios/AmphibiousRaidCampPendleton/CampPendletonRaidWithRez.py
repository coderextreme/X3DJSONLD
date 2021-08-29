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
    meta(content='CampPendletonRaidWithRez.x3d',name='title'),
    meta(content='AAAV Amphibious Raid generated from a USMC USMTF Operation Order',name='description'),
    meta(content='Doug Horner and the Savage Group',name='creator'),
    meta(content='20 November 2001',name='created'),
    meta(content='21 October 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/AmphibiousRaidCampPendleton/CampPendletonRaidWithRez.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    #  This visualization was used as part of a demostration to OSD. The demonstration took a USMTF OPORD message in XML applied a XSLT stylesheet and imported the result into an Oracle database using the Generic Hub ontology as the data model. After it had been imported into the database another XSLT stylesheet was applied to convert to and X3D visualization of the marine amphibious raid. 
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Prototype and external prototype declarations must precede scene definition 
    children=[
    ExternProtoDeclare(appinfo='Reads waypoints and legSpeeds/legDurations/defaultSpeed to provide a customizable position/orientation interpolator.',name='WaypointInterpolator',url=["../../../Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d#WaypointInterpolator","https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.x3d#WaypointInterpolator","../../../Savage/Tools/Animation/WaypointInterpolatorPrototype.wrl#WaypointInterpolator","https://savage.nps.edu/Savage/Tools/Animation/WaypointInterpolatorPrototype.wrl#WaypointInterpolator"],
      #  Priority of use: legSpeeds (m/sec), legDurations (seconds), defaultSpeed (m/sec) 
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
      #  interpolation fields 
      field(accessType='inputOnly',appinfo='exposed PositionInterpolator and OrientationInterpolator setting',name='set_fraction',type='SFFloat'),
      field(accessType='outputOnly',appinfo='exposed PositionInterpolator setting',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='exposed OrientationInterpolator setting',name='orientation_changed',type='SFRotation'),
      #  display-related fields 
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
    NavigationInfo(avatarSize=[200,200,200],speed=100,visibilityLimit=200000),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,.2,.4),(.05,.25,.6),(.1,.2,.4)],skyAngle=[1.309,1.571],skyColor=[(.1,.1,.4),(.1,.125,.4),(.1,.1,.3)]),
    Viewpoint(description='View from above',orientation=(1,0,0,-1.57),position=(55500,150000,55500)),
    Viewpoint(description='View from South to North',position=(55000,25000,180000)),
    Viewpoint(description='View from the Southeast Corner',orientation=(0,1,0,-0.795),position=(-37000.0,25000,166500.0)),
    Viewpoint(description='Towards the Amphibious Ships',orientation=(0,1,0,-1.00),position=(0,15000,130000)),
    Viewpoint(description='Beach Landing Site',orientation=(0,1,0,-1.00),position=(50000,5000,90000)),
    Viewpoint(description='Airfield Objective',orientation=(1,0,0,-.785),position=(72000,8000,90000)),
    Viewpoint(description='Over Airfield',orientation=(1,0,0,-1.20),position=(73000,7000,80000)),
    Switch(whichChoice=0,
      children=[
      Group(
        #  =======Land Terrain======== 
        children=[
        Transform(
          children=[
          Inline(url=["../../TerrainData/DTED2w118N33/w118w118N33/display.wrl"])]),
        #  =======Ships======= 
        Transform(DEF='LPD',translation=(46287,10,90687),
          children=[
          Inline(url=["../../ShipsMilitary/LandingShipTankEnduranceSingapore/EnduranceLST.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/EnduranceLST.x3d","../../ShipsMilitary/LandingShipTankEnduranceSingapore/EnduranceLST.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/EnduranceLST.wrl"])]),
        #  ======Vessel Oparea Boundaries ====== 
        #  ======Oparea Boundary for USS Bremerton====== 
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,0))),
            geometry=IndexedLineSet(coordIndex=[0,1,2,0],
              coord=Coordinate(point=[(21149,25,67247),(0,25,78460),(0,25,52328),(21149,25,67247)])))]),
        #  ======Oparea Boundary for USS Stethem====== 
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,0))),
            geometry=IndexedLineSet(coordIndex=[0,1,2,3,0],
              coord=Coordinate(point=[(18062,25,51504),(56689,25,79612),(47379,25,82602),(9828,25,57042),(18062,25,51504)])))]),
        #  =======Oparea Boundary for USS Essex====== 
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,0))),
            geometry=IndexedLineSet(coordIndex=[0,1,2,3,0],
              coord=Coordinate(point=[(0,25,80852),(20950,25,69789),(32440,25,78460),(0,25,96104),(0,25,80852)])))]),
        #  ======Oparea Boundary for USS Denver======= 
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,0))),
            geometry=IndexedLineSet(coordIndex=[0,1,2,3,4,5,0],
              coord=Coordinate(point=[(0,25,98645),(0,25,105972),(5500,25,111000),(12828,25,111000),(50267,25,91767),(34222,25,79507),(0,25,98645)])))]),
        #  =======Oparea Boundary for USS Pearl Harbor======= 
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,0))),
            geometry=IndexedLineSet(coordIndex=[0,1,2,3,0],
              coord=Coordinate(point=[(52249,25,93860),(59379,25,107915),(53436,25,111000),(18970,25,111000),(52249,25,93860)])))]),
        #  ======Oparea for USS Higgins======= 
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,0))),
            geometry=IndexedLineSet(coordIndex=[0,1,2,3,0],
              coord=Coordinate(point=[(62915,25,86450),(55982,25,89892),(63424,25,111000),(74009,25,111000),(62915,25,86450)])))]),
        #  ======Submarine====== 
        TimeSensor(DEF='Sub_Clock',loop=True),
        ProtoInstance(DEF='Sub_WaypointInterpolator',name='WaypointInterpolator',
          fieldValue=[
          fieldValue(name='description',value='Sub_WaypointInterpolator'),
          fieldValue(name='waypoints',value=[(21149,-30,67247),(0,-30,78460),(0,-30,52328),(21149,-30,67247)]),
          fieldValue(name='pitchUpDownForVerticalWaypoints',value=False),
          #  Priority of use: legSpeeds (m/sec), legDurations (seconds), defaultSpeed (m/sec) 
          #  1 knot = 0.5144 meters/second 
          fieldValue(name='defaultSpeed',value=50),
          fieldValue(name='turningRate',value=90),
          fieldValue(name='lineColor',value=(1,0,0)),
          fieldValue(name='highlightSegmentColor',value=(0.2,0.2,1)),
          fieldValue(name='transparency',value=0),
          fieldValue(name='labelDisplayMode',value='interpolation'),
          fieldValue(name='heightLabel',value='altitude'),
          fieldValue(name='labelOffset',value=(0,-0.8,0)),
          fieldValue(name='labelFontSize',value=0.5),
          fieldValue(name='labelColor',value=(0.3,0.9,0.3)),
          fieldValue(name='traceEnabled',value=False)]),
        ROUTE(fromField='fraction_changed',fromNode='Sub_Clock',toField='fraction',toNode='Sub_WaypointInterpolator'),
        ROUTE(fromField='totalDuration',fromNode='Sub_WaypointInterpolator',toField='cycleInterval',toNode='Sub_Clock'),
        Transform(DEF='Sub-Location',translation=(2351,-30,57491),
          children=[
          Group(
            children=[
            Transform(translation=(0,-4,0),
              children=[
              Inline(url=["../../Submarines/SsnLosAngelesUnitedStates/688.x3d","https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/688.x3d","../../Submarines/SsnLosAngelesUnitedStates/688.wrl","https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/688.wrl"])])])]),
        ROUTE(fromField='position_changed',fromNode='Sub_WaypointInterpolator',toField='set_translation',toNode='Sub-Location'),
        ROUTE(fromField='orientation_changed',fromNode='Sub_WaypointInterpolator',toField='set_rotation',toNode='Sub-Location'),
        #  ======Ships====== 
        TimeSensor(DEF='Ship_Clock',loop=True),
        ProtoInstance(DEF='Ship_WaypointInterpolator',name='WaypointInterpolator',
          fieldValue=[
          fieldValue(name='description',value='Ship_WaypointInterpolator'),
          fieldValue(name='waypoints',value=[(12948,3,56743),(48009,3,80538),(53258,3,79042),(17801,3,53450),(12948,3,56743)]),
          fieldValue(name='pitchUpDownForVerticalWaypoints',value=False),
          fieldValue(name='defaultSpeed',value=50),
          fieldValue(name='turningRate',value=90),
          fieldValue(name='lineColor',value=(1,0,0)),
          fieldValue(name='highlightSegmentColor',value=(0.2,0.2,1)),
          fieldValue(name='transparency',value=0),
          fieldValue(name='labelDisplayMode',value='interpolation'),
          fieldValue(name='heightLabel',value='altitude'),
          fieldValue(name='labelOffset',value=(0,-0.8,0)),
          fieldValue(name='labelFontSize',value=0.5),
          fieldValue(name='labelColor',value=(0.3,0.9,0.3)),
          fieldValue(name='traceEnabled',value=False)]),
        ROUTE(fromField='fraction_changed',fromNode='Ship_Clock',toField='fraction',toNode='Ship_WaypointInterpolator'),
        ROUTE(fromField='totalDuration',fromNode='Ship_WaypointInterpolator',toField='cycleInterval',toNode='Ship_Clock'),
        Transform(DEF='Ship-Location',translation=(12948,10,56743),
          children=[
          Group(
            children=[
            Transform(rotation=(0,1,0,-1.57),translation=(0,10,0),
              children=[
              Inline(url=["../../ShipsMilitary/DDGArleighBurkeUnitedStates/ArleighBurkeGeneric.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/ArleighBurkeGeneric.x3d","../../ShipsMilitary/DDGArleighBurkeUnitedStates/ArleighBurkeGeneric.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/ArleighBurkeGeneric.wrl"])])])]),
        ROUTE(fromField='position_changed',fromNode='Ship_WaypointInterpolator',toField='set_translation',toNode='Ship-Location'),
        ROUTE(fromField='orientation_changed',fromNode='Ship_WaypointInterpolator',toField='set_rotation',toNode='Ship-Location'),
        #  ======Amphibious Vehicles====== 
        TimeSensor(DEF='AAAV1_Clock',loop=True),
        ProtoInstance(DEF='AAAV_1_WaypointInterpolator',name='WaypointInterpolator',
          #  need to improve elevations on beach (final waypoint) 
          fieldValue=[
          fieldValue(name='description',value='AAAV_1_WaypointInterpolator'),
          fieldValue(name='waypoints',value=[(46287,10,90687),(63492,30,83472),(65490,50,82140),(67710,50,85470),(69930,50,78810),(71928,50,77922),(69930,50,78810),(67710,40,85470),(65490,30,82140),(63492,30,83472),(46287,10,90687)]),
          fieldValue(name='pitchUpDownForVerticalWaypoints',value=False),
          fieldValue(name='defaultSpeed',value=50),
          fieldValue(name='turningRate',value=90),
          fieldValue(name='lineColor',value=(1,0,0)),
          fieldValue(name='highlightSegmentColor',value=(0.2,0.2,1)),
          fieldValue(name='transparency',value=0),
          fieldValue(name='labelDisplayMode',value='interpolation'),
          fieldValue(name='heightLabel',value='altitude'),
          fieldValue(name='labelOffset',value=(0,-0.8,0)),
          fieldValue(name='labelFontSize',value=0.5),
          fieldValue(name='labelColor',value=(0.3,0.9,0.3)),
          fieldValue(name='traceEnabled',value=False)]),
        ROUTE(fromField='fraction_changed',fromNode='AAAV1_Clock',toField='fraction',toNode='AAAV_1_WaypointInterpolator'),
        ROUTE(fromField='totalDuration',fromNode='AAAV_1_WaypointInterpolator',toField='cycleInterval',toNode='AAAV1_Clock'),
        Transform(DEF='AAAV-Location',translation=(46287,10,90687),
          children=[
          Group(
            children=[
            Viewpoint(description='AAAV raid from behind',orientation=(0,1,0,-1.57),position=(-200,50,0)),
            Transform(DEF='VerticalCorrection',translation=(0,-4,0),
              children=[
              Inline(DEF='AAAV',url=["../../AmphibiousVehicles/AAAV/AAAV.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/AAAV.x3d","../../AmphibiousVehicles/AAAV/AAAV.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAAV/AAAV.wrl"])]),
            Group(DEF='OtherAAAVs',
              children=[
              Transform(translation=(-15,-4,15),
                children=[
                Transform(DEF='AAAV-2',
                  children=[
                  Inline(USE='AAAV'),
                  PositionInterpolator(DEF='AAV-2PATH',key=[0.00,0.11,0.17,0.22,0.33,0.44,0.50,0.55,0.66,0.77,0.83,0.88,0.99],keyValue=[(0.0,0.0,0.0),(1.0,0.96,1.0),(1.5,0.21,1.5),(2.0,0.96,2.0),(3.0,0.0,3.0),(2.5,0.96,3.0),(1.75,0.41,3.0),(1.0,0.96,3.0),(3.0,0.0,3.0),(2.0,0.46,2.0),(1.0,0.4,1.5),(0.0,0.46,1.0),(0.0,0.0,0.0)]),
                  ROUTE(fromField='value_changed',fromNode='AAV-2PATH',toField='set_translation',toNode='AAAV-2')])]),
              Transform(translation=(-15,-4,-17.5),
                children=[
                Transform(DEF='AAAV-3',
                  children=[
                  Inline(USE='AAAV'),
                  PositionInterpolator(DEF='AAV-3PATH',key=[0.00,0.07,0.13,0.22,0.36,0.47,0.55,0.625,0.66,0.72,0.80,0.85,0.99],keyValue=[(0.0,0.0,0.0),(1.0,0.96,1.0),(1.5,0.21,2.25),(2.0,0.46,2.66),(3.0,-0.25,3.0),(2.5,0.96,3.0),(1.75,0.41,3.0),(1.0,0.96,3.0),(3.0,0.0,3.0),(2.0,0.46,2.0),(1.0,0.4,1.5),(0.0,0.46,1.0),(0.0,0.0,0.0)]),
                  ROUTE(fromField='value_changed',fromNode='AAV-3PATH',toField='set_translation',toNode='AAAV-3')])])])])]),
        ROUTE(fromField='position_changed',fromNode='AAAV_1_WaypointInterpolator',toField='set_translation',toNode='AAAV-Location'),
        ROUTE(fromField='orientation_changed',fromNode='AAAV_1_WaypointInterpolator',toField='set_rotation',toNode='AAAV-Location'),
        #  ======Helicopter Gunships====== 
        TimeSensor(DEF='Helo_Clock',loop=True),
        ProtoInstance(DEF='Helo_1_WaypointInterpolator',name='WaypointInterpolator',
          fieldValue=[
          fieldValue(name='description',value='Helo_1_WaypointInterpolator'),
          fieldValue(name='waypoints',value=[(46287,10000,90687),(63492,10000,83472),(65490,10000,82140),(67710,10000,85470),(69930,10000,78810),(71928,10000,77922),(69930,10000,78810),(67710,10000,85470),(65490,10000,82140),(63492,10000,83472),(46287,10000,90687)]),
          fieldValue(name='pitchUpDownForVerticalWaypoints',value=False),
          fieldValue(name='defaultSpeed',value=50),
          fieldValue(name='turningRate',value=90),
          fieldValue(name='lineColor',value=(1,0,0)),
          fieldValue(name='highlightSegmentColor',value=(0.2,0.2,1)),
          fieldValue(name='transparency',value=0),
          fieldValue(name='labelDisplayMode',value='interpolation'),
          fieldValue(name='heightLabel',value='altitude'),
          fieldValue(name='labelOffset',value=(0,-0.8,0)),
          fieldValue(name='labelFontSize',value=0.5),
          fieldValue(name='labelColor',value=(0.3,0.9,0.3)),
          fieldValue(name='traceEnabled',value=False)]),
        ROUTE(fromField='fraction_changed',fromNode='Helo_Clock',toField='fraction',toNode='Helo_1_WaypointInterpolator'),
        ROUTE(fromField='totalDuration',fromNode='Helo_1_WaypointInterpolator',toField='cycleInterval',toNode='Helo_Clock'),
        Transform(DEF='Helo-Location',translation=(46287,10000,90687),
          children=[
          Group(
            children=[
            Viewpoint(description='Helo raid from behind',orientation=(0,1,0,-1.57),position=(-180,20,0)),
            Transform(rotation=(0,1,0,-1.57),
              children=[
              Viewpoint(description='Helo raid from above',orientation=(1,0,0,-1.1),position=(0,130,60))]),
            Transform(translation=(0,-4,0),
              children=[
              Inline(DEF='Helo',url=["../../AircraftHelicopters/AH1SuperCobraUnitedStates/ExampleGreyCobra.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/ExampleGreyCobra.x3d","../../AircraftHelicopters/AH1SuperCobraUnitedStates/ExampleGreyCobra.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/AH1SuperCobraUnitedStates/ExampleGreyCobra.wrl"])]),
            Group(DEF='OtherHelos',
              children=[
              Transform(translation=(-15,-4,15),
                children=[
                Transform(DEF='Helo-2',
                  children=[
                  Inline(USE='Helo'),
                  PositionInterpolator(DEF='Helo-2PATH',key=[0.00,0.11,0.17,0.22,0.33,0.44,0.50,0.55,0.66,0.77,0.83,0.88,0.99],keyValue=[(0.0,0.0,0.0),(1.0,0.96,1.0),(1.5,0.21,1.5),(2.0,0.96,2.0),(3.0,0.0,3.0),(2.5,0.96,3.0),(1.75,0.41,3.0),(1.0,0.96,3.0),(3.0,0.0,3.0),(2.0,0.46,2.0),(1.0,0.4,1.5),(0.0,0.46,1.0),(0.0,0.0,0.0)]),
                  ROUTE(fromField='value_changed',fromNode='Helo-2PATH',toField='set_translation',toNode='Helo-2')])]),
              Transform(translation=(-15,-4,-17.5),
                children=[
                Transform(DEF='Helo-3',
                  children=[
                  Inline(USE='Helo'),
                  PositionInterpolator(DEF='Helo-3PATH',key=[0.00,0.07,0.13,0.22,0.36,0.47,0.55,0.625,0.66,0.72,0.80,0.85,0.99],keyValue=[(0.0,0.0,0.0),(1.0,0.96,1.0),(1.5,0.21,2.25),(2.0,0.46,2.66),(3.0,-0.25,3.0),(2.5,0.96,3.0),(1.75,0.41,3.0),(1.0,0.96,3.0),(3.0,0.0,3.0),(2.0,0.46,2.0),(1.0,0.4,1.5),(0.0,0.46,1.0),(0.0,0.0,0.0)]),
                  ROUTE(fromField='value_changed',fromNode='Helo-3PATH',toField='set_translation',toNode='Helo-3')])])])])]),
        ROUTE(fromField='position_changed',fromNode='Helo_1_WaypointInterpolator',toField='set_translation',toNode='Helo-Location'),
        ROUTE(fromField='orientation_changed',fromNode='Helo_1_WaypointInterpolator',toField='set_rotation',toNode='Helo-Location')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CampPendletonRaidWithRez.py")
