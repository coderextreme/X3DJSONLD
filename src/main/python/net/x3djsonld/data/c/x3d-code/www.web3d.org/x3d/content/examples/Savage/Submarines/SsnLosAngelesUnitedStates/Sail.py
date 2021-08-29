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
    meta(content='Sail.x3d',name='title'),
    meta(content='Sail of 688 Submarine with masts up',name='description'),
    meta(content='LT Ken Curtin',name='creator'),
    meta(content='4 August 2003',name='created'),
    meta(content='27 February 2016',name='modified'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/ssn-688.htm',name='reference'),
    meta(content='http://www.combatindex.com/store/3d/ssn688_model.html',name='reference'),
    meta(content='Submarine, 688, Sail',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/Sail.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(name='HeadsUpDisplay',url=["HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","https://savage.nps.edu/Savage/Tools/HeadsUpDisplays/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"],
      field=[
      field(accessType='inputOutput',appinfo='Displayed subscene positioned as a HUD.',name='children',type='MFNode'),
      field(accessType='inputOutput',appinfo='Additional HUD geometry which can be touched and dragged for repositioning. If this geometry goes offscreen (perhaps due to screen resizing) then it snaps back to original position.',name='dragChildren',type='MFNode'),
      field(accessType='initializeOnly',appinfo='Modified screen location and distance (for size).',name='locationOffset',type='SFVec3f'),
      field(accessType='initializeOnly',appinfo='Enable/disable console output for troubleshooting.',name='traceEnabled',type='SFBool')]),
    TimeSensor(DEF='UpTimer',cycleInterval=4),
    TimeSensor(DEF='DownTimer',cycleInterval=4),
    Viewpoint(description='StbdSideSail',orientation=(0.351,0.933,-0.077,0.2902),position=(4.3,5.4,17.8)),
    Transform(
      children=[
      Transform(DEF='Bridge',translation=(2.62,5.52,0),
        children=[
        Shape(
          geometry=Box(size=(.966,.1,1.04)),
          appearance=Appearance(DEF='Gray',
            material=Material(diffuseColor=(.8,.8,.8),shininess=.8)))]),
      Group(DEF='RadarGroup',
        children=[
        Transform(DEF='MoveRadar',
          children=[
          Transform(DEF='RadarTop',translation=(1.74,7.52,-.276),
            children=[
            Shape(
              geometry=Box(size=(.276,.25,1.104)),
              appearance=Appearance(DEF='Black',
                material=Material(diffuseColor=(.1,.1,.1))))]),
          Transform(DEF='Radar',translation=(1.74,6.52,-.276),
            children=[
            Shape(
              geometry=Cylinder(radius=.1),
              appearance=Appearance(USE='Gray'))]),
          TouchSensor(DEF='MoveRadarTouch',description='Touch Sensor to cycle radar'),
          Group(DEF='MoveRadarUpAndDown',
            children=[
            TimeSensor(DEF='RadarTimer',cycleInterval=8),
            ROUTE(fromField='touchTime',fromNode='MoveRadarTouch',toField='set_startTime',toNode='RadarTimer'),
            PositionInterpolator(DEF='RadarUpAndDown',key=[0,.5,1],keyValue=[(0,0,0),(0,-2.5,0),(0,0,0)]),
            ROUTE(fromField='fraction_changed',fromNode='RadarTimer',toField='set_fraction',toNode='RadarUpAndDown'),
            ROUTE(fromField='value_changed',fromNode='RadarUpAndDown',toField='set_translation',toNode='MoveRadar')]),
          Group(DEF='MoveRadarUp',
            children=[
            PositionInterpolator(DEF='RadarUp',key=[0,1],keyValue=[(0,-2.5,0),(0,0,0)]),
            ROUTE(fromField='fraction_changed',fromNode='UpTimer',toField='set_fraction',toNode='RadarUp'),
            ROUTE(fromField='value_changed',fromNode='RadarUp',toField='set_translation',toNode='MoveRadar')]),
          Group(DEF='MoveRadarDown',
            children=[
            PositionInterpolator(DEF='RadarDown',key=[0,1],keyValue=[(0,0,0),(0,-2.5,0)]),
            ROUTE(fromField='fraction_changed',fromNode='DownTimer',toField='set_fraction',toNode='RadarDown'),
            ROUTE(fromField='value_changed',fromNode='RadarDown',toField='set_translation',toNode='MoveRadar')])])]),
      Group(DEF='Periscopes',
        children=[
        Transform(DEF='MoveScope1',
          children=[
          TouchSensor(DEF='MoveScope1Sensor',description='Sensor to cycle #1 Scope'),
          TimeSensor(DEF='Scope1Timer',cycleInterval=4),
          ROUTE(fromField='touchTime',fromNode='MoveScope1Sensor',toField='set_startTime',toNode='Scope1Timer'),
          PositionInterpolator(DEF='Scope1UpAndDown',key=[0,.5,1],keyValue=[(0,0,0),(0,-10,0),(0,0,0)]),
          ROUTE(fromField='fraction_changed',fromNode='Scope1Timer',toField='set_fraction',toNode='Scope1UpAndDown'),
          ROUTE(fromField='value_changed',fromNode='Scope1UpAndDown',toField='set_translation',toNode='MoveScope1'),
          Transform(DEF='No1Scope',translation=(-.483,6.9,.414),
            children=[
            Shape(DEF='Scope',
              geometry=Cylinder(height=13.8,radius=.05),
              appearance=Appearance(USE='Gray')),
            Transform(scale=(1.5,1,1),
              children=[
              Shape(DEF='ScopeFairing',
                geometry=Cylinder(height=7,radius=.1),
                appearance=Appearance(
                  material=Material(DEF='SeaFoamGreen',diffuseColor=(.6,1,.8))))])]),
          Group(DEF='Move1ScopeUp',
            children=[
            PositionInterpolator(DEF='Scope1Up',key=[0,1],keyValue=[(0,-10,0),(0,0,0)]),
            ROUTE(fromField='fraction_changed',fromNode='UpTimer',toField='set_fraction',toNode='Scope1Up'),
            ROUTE(fromField='value_changed',fromNode='Scope1Up',toField='set_translation',toNode='MoveScope1')]),
          Group(DEF='Move1ScopeDown',
            children=[
            PositionInterpolator(DEF='Scope1Down',key=[0,1],keyValue=[(0,0,0),(0,-10,0)]),
            ROUTE(fromField='fraction_changed',fromNode='DownTimer',toField='set_fraction',toNode='Scope1Down'),
            ROUTE(fromField='value_changed',fromNode='Scope1Down',toField='set_translation',toNode='MoveScope1')])]),
        Transform(DEF='MoveScope2',
          children=[
          TouchSensor(DEF='MoveScope2Touch',description='Sensor to Cycle #2 Scope'),
          TimeSensor(DEF='Scope2Timer',cycleInterval=4),
          ROUTE(fromField='touchTime',fromNode='MoveScope2Touch',toField='set_startTime',toNode='Scope2Timer'),
          PositionInterpolator(DEF='Scope2UpAndDown',key=[0,.5,1],keyValue=[(0,0,0),(0,-10,0),(0,0,0)]),
          ROUTE(fromField='fraction_changed',fromNode='Scope2Timer',toField='set_fraction',toNode='Scope2UpAndDown'),
          ROUTE(fromField='value_changed',fromNode='Scope2UpAndDown',toField='set_translation',toNode='MoveScope2'),
          Transform(DEF='No2Scope',translation=(-.483,6.9,-.414),
            children=[
            Shape(USE='Scope'),
            Transform(scale=(1.5,1,1),
              children=[
              Shape(USE='ScopeFairing')])]),
          Group(DEF='Move2ScopeDown',
            children=[
            PositionInterpolator(DEF='Scope2Down',key=[0,1],keyValue=[(0,0,0),(0,-10,0)]),
            ROUTE(fromField='fraction_changed',fromNode='DownTimer',toField='set_fraction',toNode='Scope2Down'),
            ROUTE(fromField='value_changed',fromNode='Scope2Down',toField='set_translation',toNode='MoveScope2')]),
          Group(DEF='Move2ScopeUp',
            children=[
            PositionInterpolator(DEF='Scope2Up',key=[0,1],keyValue=[(0,-10,0),(0,0,0)]),
            ROUTE(fromField='fraction_changed',fromNode='UpTimer',toField='set_fraction',toNode='Scope2Up'),
            ROUTE(fromField='value_changed',fromNode='Scope2Up',toField='set_translation',toNode='MoveScope2')])])]),
      Group(DEF='SnorkelMast',
        children=[
        Transform(DEF='MoveSnorkel',
          children=[
          TouchSensor(DEF='MoveSnorkelTouch',description='Sensor to Cycle Snorkel Mast'),
          TimeSensor(DEF='Timer',cycleInterval=4),
          ROUTE(fromField='touchTime',fromNode='MoveSnorkelTouch',toField='set_startTime',toNode='Timer'),
          PositionInterpolator(DEF='UpAndDown',key=[0,.5,1],keyValue=[(0,0,0),(0,-5,0),(0,0,0)]),
          ROUTE(fromField='fraction_changed',fromNode='Timer',toField='set_fraction',toNode='UpAndDown'),
          ROUTE(fromField='value_changed',fromNode='UpAndDown',toField='set_translation',toNode='MoveSnorkel'),
          Transform(DEF='Snorkel',scale=(1.3,1,1),translation=(-2.484,7.52,0),
            children=[
            Shape(
              geometry=Cylinder(height=4,radius=.3),
              appearance=Appearance(
                material=Material(diffuseColor=(.6,.6,.6))))]),
          Transform(DEF='SnorkelCap',scale=(1.4,1.1,1.1),translation=(-2.484,9.52,0),
            children=[
            Shape(
              geometry=Cylinder(height=.6,radius=.5),
              appearance=Appearance(USE='Black'))]),
          Group(DEF='MoveSnorkelUp',
            children=[
            PositionInterpolator(DEF='SnorkelUp',key=[0,1],keyValue=[(0,-5,0),(0,0,0)]),
            ROUTE(fromField='fraction_changed',fromNode='UpTimer',toField='set_fraction',toNode='SnorkelUp'),
            ROUTE(fromField='value_changed',fromNode='SnorkelUp',toField='set_translation',toNode='MoveSnorkel')]),
          Group(DEF='MoveSnorkelDown',
            children=[
            PositionInterpolator(DEF='SnorkelDown',key=[0,1],keyValue=[(0,0,0),(0,-5,0)]),
            ROUTE(fromField='fraction_changed',fromNode='DownTimer',toField='set_fraction',toNode='SnorkelDown'),
            ROUTE(fromField='value_changed',fromNode='SnorkelDown',toField='set_translation',toNode='MoveSnorkel')])])]),
      Group(DEF='ANBRA-34',
        children=[
        Transform(DEF='MoveBRA-34',
          children=[
          TouchSensor(DEF='MoveBRA-34Touch',description='Cycles #1 Bra-34'),
          TimeSensor(DEF='BRA-34Timer',cycleInterval=4),
          PositionInterpolator(DEF='BRA-34UpAndDown',key=[0,.5,1],keyValue=[(0,0,0),(0,-10,0),(0,0,0)]),
          ROUTE(fromField='fraction_changed',fromNode='BRA-34Timer',toField='set_fraction',toNode='BRA-34UpAndDown'),
          ROUTE(fromField='value_changed',fromNode='BRA-34UpAndDown',toField='set_translation',toNode='MoveBRA-34'),
          ROUTE(fromField='touchTime',fromNode='MoveBRA-34Touch',toField='set_startTime',toNode='BRA-34Timer'),
          Transform(DEF='No1BRA34',translation=(.552,7.4,.414),
            children=[
            Transform(DEF='BRA34Fairing',scale=(1.8,1,1),
              children=[
              Shape(DEF='BRA34FairingShape',
                geometry=Cylinder(height=7,radius=.13),
                appearance=Appearance(USE='Gray'))]),
            Transform(DEF='BRA34Cap',translation=(0,6.95,0),
              children=[
              Shape(DEF='Cap',
                geometry=Cylinder(height=.1,radius=.08),
                appearance=Appearance(USE='Black'))]),
            Transform(translation=(0,3,0),
              children=[
              Shape(DEF='BRA34Shape',
                geometry=Cylinder(DEF='BRA34',height=7.8,radius=.08),
                appearance=Appearance(
                  material=Material(USE='SeaFoamGreen')))])]),
          Group(DEF='Move1Bra34Up',
            children=[
            PositionInterpolator(DEF='BRA-34Up',key=[0,1],keyValue=[(0,-10,0),(0,0,0)]),
            ROUTE(fromField='fraction_changed',fromNode='UpTimer',toField='set_fraction',toNode='BRA-34Up'),
            ROUTE(fromField='value_changed',fromNode='BRA-34Up',toField='set_translation',toNode='MoveBRA-34')]),
          Group(DEF='Move1BRA-34lDown',
            children=[
            PositionInterpolator(DEF='BRA-34Down',key=[0,1],keyValue=[(0,0,0),(0,-10,0)]),
            ROUTE(fromField='fraction_changed',fromNode='DownTimer',toField='set_fraction',toNode='BRA-34Down'),
            ROUTE(fromField='value_changed',fromNode='BRA-34Down',toField='set_translation',toNode='MoveBRA-34')])]),
        Transform(DEF='MoveBRA-34No2',
          children=[
          TouchSensor(DEF='Move2BRA-34Touch',description='Cycles #2 Bra-34'),
          TimeSensor(DEF='No2BRA-34Timer',cycleInterval=4),
          PositionInterpolator(DEF='No2BRA-34UpAndDown',key=[0,.5,1],keyValue=[(0,0,0),(0,-10,0),(0,0,0)]),
          ROUTE(fromField='fraction_changed',fromNode='No2BRA-34Timer',toField='set_fraction',toNode='No2BRA-34UpAndDown'),
          ROUTE(fromField='value_changed',fromNode='No2BRA-34UpAndDown',toField='set_translation',toNode='MoveBRA-34No2'),
          ROUTE(fromField='touchTime',fromNode='Move2BRA-34Touch',toField='set_startTime',toNode='No2BRA-34Timer'),
          Transform(DEF='No2BRA34',translation=(.552,7.4,-.414),
            children=[
            Transform(scale=(1.8,1,1),
              children=[
              Shape(USE='BRA34FairingShape')]),
            Transform(translation=(0,6.95,0),
              children=[
              Shape(USE='Cap')]),
            Transform(translation=(0,3,0),
              children=[
              Shape(USE='BRA34Shape')])]),
          Group(DEF='Move2Bra34Up',
            children=[
            PositionInterpolator(DEF='BRA-342Up',key=[0,1],keyValue=[(0,-10,0),(0,0,0)]),
            ROUTE(fromField='fraction_changed',fromNode='UpTimer',toField='set_fraction',toNode='BRA-342Up'),
            ROUTE(fromField='value_changed',fromNode='BRA-342Up',toField='set_translation',toNode='MoveBRA-34No2')]),
          Group(DEF='Move2BRA-34lDown',
            children=[
            PositionInterpolator(DEF='BRA-342Down',key=[0,1],keyValue=[(0,0,0),(0,-10,0)]),
            ROUTE(fromField='fraction_changed',fromNode='DownTimer',toField='set_fraction',toNode='BRA-342Down'),
            ROUTE(fromField='value_changed',fromNode='BRA-342Down',toField='set_translation',toNode='MoveBRA-34No2')])])]),
      Transform(DEF='Sail',
        children=[
        Shape(
          appearance=Appearance(USE='Black'),
          geometry=Extrusion(creaseAngle=3,crossSection=[(-5.382,0),(-4.41,.414),(-2.76,.69),(-1.38,.828),(0,.966),(1.38,.966),(2.76,.759),(3.312,.69),(3.726,.552),(4.002,.207),(4.14,0),(4.002,-.207),(3.726,-.552),(3.312,-.69),(2.76,-.759),(1.38,-.966),(0,-.966),(-1.38,-.828),(-2.76,-.69),(-4.14,-.414),(-5.382,0)],spine=[(0,0,0),(0,5.52,0)]))]),
      Transform(DEF='BRD-7',translation=(-1.449,7.52,0),
        children=[
        Transform(DEF='MoveBRD7',
          children=[
          TouchSensor(DEF='MoveBRD7Touch',description='Cycles BRD-7'),
          TimeSensor(DEF='BRD7Timer',cycleInterval=4),
          ROUTE(fromField='touchTime',fromNode='MoveBRD7Touch',toField='set_startTime',toNode='BRD7Timer'),
          PositionInterpolator(DEF='BRD7UpAndDown',key=[0,.5,1],keyValue=[(0,0,0),(0,-5.5,0),(0,0,0)]),
          ROUTE(fromField='fraction_changed',fromNode='BRD7Timer',toField='set_fraction',toNode='BRD7UpAndDown'),
          ROUTE(fromField='value_changed',fromNode='BRD7UpAndDown',toField='set_translation',toNode='MoveBRD7'),
          Transform(DEF='BRD-7Pole',
            children=[
            Shape(
              geometry=Cylinder(height=6,radius=.1),
              appearance=Appearance(USE='Black'))]),
          Transform(DEF='BRD-7TopHat',translation=(0,3,0),
            children=[
            Shape(
              geometry=Cylinder(height=.8,radius=.5),
              appearance=Appearance(USE='Black'))]),
          Group(DEF='MoveBRD-7Up',
            children=[
            PositionInterpolator(DEF='BRD7Up',key=[0,1],keyValue=[(0,-5.5,0),(0,0,0)]),
            ROUTE(fromField='fraction_changed',fromNode='UpTimer',toField='set_fraction',toNode='BRD7Up'),
            ROUTE(fromField='value_changed',fromNode='BRD7Up',toField='set_translation',toNode='MoveBRD7')]),
          Group(DEF='MoveBRD-7lDown',
            children=[
            PositionInterpolator(DEF='BRD7Down',key=[0,1],keyValue=[(0,0,0),(0,-5.5,0)]),
            ROUTE(fromField='fraction_changed',fromNode='DownTimer',toField='set_fraction',toNode='BRD7Down'),
            ROUTE(fromField='value_changed',fromNode='BRD7Down',toField='set_translation',toNode='MoveBRD7')])])]),
      Transform(DEF='NavID',translation=(1.449,5.52,.552),
        children=[
        Transform(DEF='MoveNavID',
          children=[
          TouchSensor(DEF='NavIDTouch',description='Cycles NAV ID'),
          TimeSensor(DEF='NavIDTimer',cycleInterval=4),
          ROUTE(fromField='touchTime',fromNode='NavIDTouch',toField='set_startTime',toNode='NavIDTimer'),
          PositionInterpolator(DEF='NavIDUpAndDown',key=[0,.5,1],keyValue=[(0,0,0),(0,-4.2,0),(0,0,0)]),
          ROUTE(fromField='fraction_changed',fromNode='NavIDTimer',toField='set_fraction',toNode='NavIDUpAndDown'),
          ROUTE(fromField='value_changed',fromNode='NavIDUpAndDown',toField='set_translation',toNode='MoveNavID'),
          Transform(DEF='NavIDPole',translation=(0,2,0),
            children=[
            Shape(
              geometry=Cylinder(height=4,radius=.05),
              appearance=Appearance(USE='Gray'))]),
          Transform(DEF='NavIDLight',translation=(0,4,0),
            children=[
            Shape(
              geometry=Cylinder(height=.3,radius=.1),
              appearance=Appearance(
                material=Material(DEF='NavIDColor',ambientIntensity=0))),
            ColorInterpolator(DEF='ColorPath',key=[0.0,.2,.250,.450,.5,.7,.750,.875,1],keyValue=[(.996,.598,0),(.879,.988,.996),(.996,.598,0),(.879,.988,.996),(.996,.598,0),(.879,.988,.996),(.879,.988,.996),(.879,.988,.996),(.879,.988,.996)]),
            ROUTE(fromField='value_changed',fromNode='ColorPath',toField='set_emissiveColor',toNode='NavIDColor'),
            TimeSensor(DEF='AnimationClock',cycleInterval=9,loop=True),
            ROUTE(fromField='fraction_changed',fromNode='AnimationClock',toField='set_fraction',toNode='ColorPath')]),
          Group(DEF='MoveNavIDUp',
            children=[
            PositionInterpolator(DEF='NavIDUp',key=[0,1],keyValue=[(0,-4.2,0),(0,0,0)]),
            ROUTE(fromField='fraction_changed',fromNode='UpTimer',toField='set_fraction',toNode='NavIDUp'),
            ROUTE(fromField='value_changed',fromNode='NavIDUp',toField='set_translation',toNode='MoveNavID')]),
          Group(DEF='MoveNavIDlDown',
            children=[
            PositionInterpolator(DEF='NavIDDown',key=[0,1],keyValue=[(0,0,0),(0,-4.2,0)]),
            ROUTE(fromField='fraction_changed',fromNode='DownTimer',toField='set_fraction',toNode='NavIDDown'),
            ROUTE(fromField='value_changed',fromNode='NavIDDown',toField='set_translation',toNode='MoveNavID')])])]),
      Transform(DEF='FairwaterPlanesMain',rotation=(1,0,0,-1.57),translation=(-1.85,3.54,6),
        children=[
        Transform(DEF='FairwaterPlanes',center=(3,0,0),
          children=[
          Inline(url=["Planes.x3d","https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/Planes.x3d","Planes.wrl","https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/Planes.wrl"]),
          TouchSensor(DEF='MoveFWPlanes',description='Cycles FW Planes'),
          TimeSensor(DEF='FWPlaneTimer',cycleInterval=5),
          ROUTE(fromField='touchTime',fromNode='MoveFWPlanes',toField='set_startTime',toNode='FWPlaneTimer'),
          OrientationInterpolator(DEF='RotateFWPlanes',key=[0,.25,.50,.75,1.0],keyValue=[(0,1,0,0.0),(0,1,0,0.52),(0,1,0,0.00),(0,1,0,-0.52),(0,1,0,0.00)]),
          ROUTE(fromField='fraction_changed',fromNode='FWPlaneTimer',toField='set_fraction',toNode='RotateFWPlanes'),
          ROUTE(fromField='value_changed',fromNode='RotateFWPlanes',toField='set_rotation',toNode='FairwaterPlanes')])])]),
    ProtoInstance(name='HeadsUpDisplay',
      fieldValue=[
      fieldValue(name='dragChildren',
        children=[
        Transform(translation=(0,0,-0.2),
          children=[
          Shape(
            geometry=Box(size=(5,2,0.001)),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=1)))])]),
      fieldValue(name='locationOffset',value=(4,2,0)),
      fieldValue(name='children',
        children=[
        Transform(
          children=[
          Group(DEF='SwitchGroup',
            children=[
            Switch(DEF='RaiseOrLowerButton',whichChoice=0,
              children=[
              Group(DEF='LowerMasts',
                children=[
                TouchSensor(DEF='ClickToLowerSensor',description='Lower All Masts'),
                Shape(
                  geometry=Text(string=["Click To Lower All Masts"],
                    fontStyle=FontStyle(DEF='HudText',justify=["MIDDLE","MIDDLE"],size=0.5)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,.8,0))))]),
              Group(DEF='RaiseMasts',
                children=[
                TouchSensor(DEF='ClickToRaiseSensor',description='Raise ALl Masts'),
                Shape(
                  geometry=Text(string=["Click To Raise All Masts"],
                    fontStyle=FontStyle(USE='HudText')),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0,0))))])]),
            Script(DEF='AreMastsUp',
              field=[
              field(accessType='inputOnly',name='up',type='SFBool'),
              field(accessType='inputOnly',name='down',type='SFBool'),
              field(accessType='outputOnly',name='setSwitch',type='SFInt32')])]),
          Group(DEF='LowerOrRaiseRouteGroup',
            children=[
            ROUTE(fromField='touchTime',fromNode='ClickToLowerSensor',toField='set_startTime',toNode='DownTimer'),
            ROUTE(fromField='touchTime',fromNode='ClickToRaiseSensor',toField='set_startTime',toNode='UpTimer'),
            ROUTE(fromField='isActive',fromNode='ClickToLowerSensor',toField='down',toNode='AreMastsUp'),
            ROUTE(fromField='isActive',fromNode='ClickToRaiseSensor',toField='up',toNode='AreMastsUp'),
            ROUTE(fromField='setSwitch',fromNode='AreMastsUp',toField='whichChoice',toNode='RaiseOrLowerButton')])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Sail.py")
