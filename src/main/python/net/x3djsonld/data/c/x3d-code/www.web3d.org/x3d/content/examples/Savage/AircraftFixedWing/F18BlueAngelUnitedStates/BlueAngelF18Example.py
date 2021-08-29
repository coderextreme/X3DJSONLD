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
    meta(content='BlueAngelF18Example.x3d',name='title'),
    meta(content='The BlueAngelF18 example model integrated with ExternPrototypes - clicking any axle starts animation, such as, raising or lowering landing gears simultaneously. Clicking cockpit canopy makes it open or close.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='18 October 2001',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='blueangels.jpg',name='Image'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/blueangels.jpg',name='Image'),
    meta(content='http://www.navy.com/blueangels',name='reference'),
    meta(content='http://www.BlueAngels.navy.mil',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/f-18.htm',name='reference'),
    meta(content='http://www.BlueAngels.org',name='reference'),
    meta(content='http://www.chinfo.navy.mil/navpalib/aircraft/b-angels/blues.html',name='reference'),
    meta(content='http://www.danshistory.com/fa18.html',name='reference'),
    meta(content='http://www.csd.uwo.ca/~pettypi/elevon/baugher_us/f018.html',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/Blue_Angels.jpg',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/Blue_Angels_bottom.jpg',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/BlueAngelF18Example.x3d',name='identifier'),
    meta(content='Aircraft, F18, Blue Angel example',name='subject'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='ViewPositionOrientation provides provides console output of local position and orientation as user navigates',name='ViewPositionOrientation',url=["../../Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"],
      field=[
      field(accessType='inputOutput',appinfo='Whether or not ViewPositionOrientation sends output to console.',name='enabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Output internal trace messages for debugging this node - developer use only can be ignored.',name='traceEnabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='Ability to turn output tracing on/off at runtime.',name='set_traceEnabled',type='SFBool'),
      field(accessType='outputOnly',appinfo='Output local position.',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='Output local orientation.',name='orientation_changed',type='SFRotation'),
      field(accessType='outputOnly',appinfo='MFString value of new Viewpoint',name='outputViewpointString',type='MFString')]),
    ExternProtoDeclare(name='WheelsRearRight',url=["WheelsRearRightPrototype.x3d#WheelsRearRight","../../AircraftFixedWing/F18BlueAngelUnitedStates/WheelsRearRightPrototype.x3d#WheelsRearRight","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsRearRightPrototype.x3d#WheelsRearRight","../../AircraftFixedWing/F18BlueAngelUnitedStates/WheelsRearRightPrototype.wrl#WheelsRearRight","WheelsRearRightPrototype.wrl#WheelsRearRight","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsRearRightPrototype.wrl#WheelsRearRight"],
      field=[
      field(accessType='inputOnly',appinfo='boolean eventIn: true = wheels up false = wheels down.',name='gearup',type='SFBool'),
      field(accessType='outputOnly',name='gearupOut',type='SFBool'),
      field(accessType='inputOnly',name='animationStartTime',type='SFTime'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool')]),
    ExternProtoDeclare(name='WheelsRearLeft',url=["WheelsRearLeftPrototype.x3d#WheelsRearLeft","../../AircraftFixedWing/F18BlueAngelUnitedStates/WheelsRearLeftPrototype.x3d#WheelsRearLeft","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsRearLeftPrototype.x3d#WheelsRearLeft","../../AircraftFixedWing/F18BlueAngelUnitedStates/WheelsRearLeftPrototype.wrl#WheelsRearLeft","WheelsRearLeftPrototype.wrl#WheelsRearLeft","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsRearLeftPrototype.wrl#WheelsRearLeft"],
      field=[
      field(accessType='inputOnly',appinfo='boolean eventIn: true = wheels up false = wheels down.',name='gearup',type='SFBool'),
      field(accessType='outputOnly',name='gearupOut',type='SFBool'),
      field(accessType='inputOnly',name='animationStartTime',type='SFTime'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool')]),
    ExternProtoDeclare(name='WheelsFront',url=["WheelsFrontPrototype.x3d#WheelsFront","../../AircraftFixedWing/F18BlueAngelUnitedStates/WheelsFrontPrototype.x3d#WheelsFront","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsFrontPrototype.x3d#WheelsFront","../../AircraftFixedWing/F18BlueAngelUnitedStates/WheelsFrontPrototype.wrl#WheelsFront","WheelsFrontPrototype.wrl#WheelsFront","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsFrontPrototype.wrl#WheelsFront"],
      field=[
      field(accessType='inputOnly',appinfo='boolean eventIn: true = wheels up false = wheels down.',name='gearup',type='SFBool'),
      field(accessType='outputOnly',name='gearupOut',type='SFBool'),
      field(accessType='inputOnly',name='animationStartTime',type='SFTime'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool')]),
    ExternProtoDeclare(name='Canopy',url=["CanopyPrototype.x3d#Canopy","../../AircraftFixedWing/F18BlueAngelUnitedStates/CanopyPrototype.x3d#Canopy","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/CanopyPrototype.x3d#Canopy","../../AircraftFixedWing/F18BlueAngelUnitedStates/CanopyPrototype.wrl#Canopy","CanopyPrototype.wrl#Canopy","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/CanopyPrototype.wrl#Canopy"],
      field=[
      field(accessType='inputOnly',appinfo='boolean eventIn: true = canopy open false = canopy close.',name='canopyOpen',type='SFBool'),
      field(accessType='outputOnly',name='canopyOut',type='SFBool'),
      field(accessType='inputOnly',name='animationStartTime',type='SFTime'),
      field(accessType='initializeOnly',name='traceEnabled',type='SFBool')]),
    NavigationInfo(speed=2),
    Background(groundAngle=[1.309,1.5702],groundColor=[(0.5,0.3,0.3),(0.5,0.3,0.3),(0.5,0.4,0.4)],skyAngle=[1.309,1.572],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    ProtoInstance(name='ViewPositionOrientation',
      fieldValue=[
      fieldValue(name='enabled',value=True)]),
    Viewpoint(description='Blue Angel Default View',position=(1.9,-.8,7.6)),
    Viewpoint(description='Blue Angel View From Above',orientation=(-.952,-.264,-.152,1.4741),position=(.3,12.4,-4.8)),
    Viewpoint(description='Blue Angel View From Bottom',orientation=(.513,-.797,.319,1.3342),position=(-7.1,-8.8,-2)),
    Viewpoint(description='Blue Angel Front View',orientation=(0.048,.998,0.049,4.6832),position=(-7.2,.2,-5)),
    Viewpoint(description='Blue Angel Back View',orientation=(-.152,.981,.116,1.3177),position=(13.4,2.1,-2.1)),
    Viewpoint(description='Blue Angel Side View',orientation=(-.733,.678,0.065,.3177),position=(3.7,1.6,4.3)),
    Viewpoint(description='Cockpit Inside Pilot View',orientation=(0,1,0,1.5636),position=(-.8,.6,-5)),
    LOD(range=[200,600,1000],
      children=[
      Group(DEF='Viewpoints',
        #  High Resolution 
        children=[
        Group(DEF='High',
          children=[
          Group(DEF='LODHigh',
            children=[
            Transform(rotation=(0,1,0,1.57),translation=(3.595,0.1,-0.8),
              children=[
              ProtoInstance(DEF='CP',name='Canopy',
                fieldValue=[
                fieldValue(name='traceEnabled',value=True)]),
              TouchSensor(DEF='CanopyTouchSensor',description='canopy open/close')]),
            Transform(rotation=(0,1,-0,3.14),translation=(5.7,-0.2,-5),
              children=[
              Inline(url=["HorizontalTailplanes.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/HorizontalTailplanes.x3d","HorizontalTailplanes.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/HorizontalTailplanes.wrl"])]),
            Transform(rotation=(-0.69,0.70,0.19,2.78),scale=(1.5,1.5,1.5),translation=(5.3,-0.46,-4.3),
              children=[
              Inline(DEF='TwinVerticalTails',url=["TwinVerticalTails.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/TwinVerticalTails.x3d","TwinVerticalTails.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/TwinVerticalTails.wrl"])]
              #  X = -170, Y = 0, Z = 91 
              ),
            Transform(rotation=(-0.69,0.70,-0.19,3.51),scale=(1.5,1.5,1.5),translation=(5.3,-0.46,-5.7),
              children=[
              Inline(USE='TwinVerticalTails')]
              #  X = -210, Y = 0, Z = 91 
              ),
            Transform(
              children=[
              Inline(url=["AircraftFuselage.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/AircraftFuselage.x3d","AircraftFuselage.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/AircraftFuselage.wrl"])]),
            Transform(rotation=(0,0,-1,0.07),translation=(-3.0,0.39,-5),
              children=[
              Inline(url=["LEX.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/LEX.x3d","LEX.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/LEX.wrl"])]),
            Transform(rotation=(0,0,1,3.14),scale=(0.7,0.7,0.5),translation=(-1,-0.1,-2.5),
              children=[
              Inline(url=["Fuselage.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/Fuselage.x3d","Fuselage.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/Fuselage.wrl"])])]),
          Group(DEF='LODHigh2',
            children=[
            Transform(scale=(0.25,0.25,0.25),translation=(-1.0,0.1,-5),
              children=[
              Inline(url=["F18CockpitSeat.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/F18CockpitSeat.x3d","F18CockpitSeat.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/F18CockpitSeat.wrl"])]),
            Transform(scale=(0.35,0.35,0.35),translation=(-0.5,-1.25,-5.26),
              children=[
              ProtoInstance(DEF='WP',name='WheelsFront',
                fieldValue=[
                fieldValue(name='traceEnabled',value=True)])]),
            TouchSensor(DEF='GearUpDownTouchSensor',description='landing gear up/down'),
            Transform(scale=(0.35,0.35,0.35),translation=(3.5,-1.2,-6.5),
              children=[
              ProtoInstance(DEF='WPLeft',name='WheelsRearLeft',
                fieldValue=[
                fieldValue(name='traceEnabled',value=True)])]),
            Transform(rotation=(0,1,0,3.14),scale=(0.35,0.35,0.35),translation=(3.5,-1.215,-3.5),
              children=[
              ProtoInstance(DEF='WPRight',name='WheelsRearRight',
                fieldValue=[
                fieldValue(name='traceEnabled',value=True)])]),
            Transform(rotation=(0,0,-1,0.09),scale=(0.85,0.85,0.85),translation=(0.8,0.15,-1.15),
              children=[
              Inline(url=["BlueAngelEngines.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/BlueAngelEngines.x3d","BlueAngelEngines.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/BlueAngelEngines.wrl"])]),
            Group(DEF='Animation',
              children=[
              Transform(DEF='GearUPDown',
                children=[
                Script(DEF='ExampleSelectionScript',
                  field=[
                  field(accessType='initializeOnly',name='landed',type='SFInt32',value=-1),
                  field(accessType='inputOnly',name='enabled',type='SFBool'),
                  field(accessType='outputOnly',name='status',type='SFBool')])]),
              Transform(DEF='Canopy',
                children=[
                Script(DEF='CanopyExampleSelectionScript',
                  field=[
                  field(accessType='initializeOnly',name='landed',type='SFInt32',value=-1),
                  field(accessType='inputOnly',name='enabled',type='SFBool'),
                  field(accessType='outputOnly',name='status',type='SFBool')])]),
              #  GearUpDown Animation 
              ROUTE(fromField='touchTime',fromNode='GearUpDownTouchSensor',toField='animationStartTime',toNode='WP'),
              ROUTE(fromField='touchTime',fromNode='GearUpDownTouchSensor',toField='animationStartTime',toNode='WPRight'),
              ROUTE(fromField='touchTime',fromNode='GearUpDownTouchSensor',toField='animationStartTime',toNode='WPLeft'),
              ROUTE(fromField='isActive',fromNode='GearUpDownTouchSensor',toField='enabled',toNode='ExampleSelectionScript'),
              ROUTE(fromField='status',fromNode='ExampleSelectionScript',toField='gearup',toNode='WP'),
              ROUTE(fromField='status',fromNode='ExampleSelectionScript',toField='gearup',toNode='WPRight'),
              ROUTE(fromField='status',fromNode='ExampleSelectionScript',toField='gearup',toNode='WPLeft'),
              #  Canopy Animation 
              ROUTE(fromField='touchTime',fromNode='CanopyTouchSensor',toField='animationStartTime',toNode='CP'),
              ROUTE(fromField='isActive',fromNode='CanopyTouchSensor',toField='enabled',toNode='CanopyExampleSelectionScript'),
              ROUTE(fromField='status',fromNode='CanopyExampleSelectionScript',toField='canopyOpen',toNode='CP')])]),
          Group(DEF='LODLow',
            children=[
            Transform(rotation=(0,1,0,3.14),scale=(1.1,1.1,1.1),translation=(1.4,0,-5),
              children=[
              Inline(url=["WingMain.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WingMain.x3d","WingMain.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WingMain.wrl"])])])])]),
      #  Medium Resolution 
      Group(DEF='Medium',
        children=[
        Group(USE='LODHigh'),
        Group(DEF='LODMedium',
          children=[
          Transform(scale=(0.35,0.35,0.35),translation=(-0.5,-1.25,-5.26),
            children=[
            Inline(url=["WheelsFrontMediumLOD.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsFrontMediumLOD.x3d","WheelsFrontMediumLOD.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsFrontMediumLOD.wrl"])]),
          Transform(scale=(0.35,0.35,0.35),translation=(3.5,-1.2,-6.5),
            children=[
            Inline(url=["WheelsRearLeftMediumLOD.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsRearLeftMediumLOD.x3d","WheelsRearLeftMediumLOD.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsRearLeftMediumLOD.wrl"])]),
          Transform(rotation=(0,1,0,3.14),scale=(0.35,0.35,0.35),translation=(3.5,-1.2,-3.5),
            children=[
            Inline(url=["WheelsRearRightMediumLOD.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsRearRightMediumLOD.x3d","WheelsRearRightMediumLOD.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WheelsRearRightMediumLOD.wrl"])]),
          Transform(rotation=(0,0,-1,0.09),scale=(0.85,0.85,0.85),translation=(0.8,0.15,-1.15),
            children=[
            Inline(url=["BlueAngelEnginesMediumLOD.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/BlueAngelEnginesMediumLOD.x3d","BlueAngelEnginesMediumLOD.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/BlueAngelEnginesMediumLOD.wrl"])])]),
        Group(USE='LODLow')]),
      #  Low Resolution 
      Group(DEF='Low',
        children=[
        Group(USE='LODHigh'),
        Group(USE='LODMedium'),
        Transform(rotation=(0,1,0,3.14),scale=(1.1,1.1,1.1),translation=(1.4,0,-5),
          children=[
          Inline(url=["WingMainLowLOD.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WingMainLowLOD.x3d","WingMainLowLOD.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/F18BlueAngelUnitedStates/WingMainLowLOD.wrl"])])]),
      WorldInfo(info=["null node"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BlueAngelF18Example.py")
