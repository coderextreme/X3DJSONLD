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
    meta(content='PinballTable.x3d',name='title'),
    meta(content='A pinball table with some ball animations.',name='description'),
    meta(content='Jiradett Kerdsri and Kacha Jitpanya',name='creator'),
    meta(content='6 August 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='PinballTableModel.png',name='Image'),
    meta(content='http://www.pinballrebel.com/game/pins/tommy/tommy_pinball.htm',name='reference'),
    meta(content='http://www.pinballrebel.com/game/pins/tommy/tombg.jpg',name='Image'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/PinballTable.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='PinballTable.x3d'),
    Group(
      #  table 
      children=[
      Transform(center=(0,0,-4),rotation=(1,0,0,0.25),
        children=[
        Group(
          children=[
          Transform(
            children=[
            Shape(
              geometry=Box(size=(4.5,0.2,8)),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0,0)),
                texture=ImageTexture(DEF='TommyPinballGame',url=["pinballFiles/TommyPinballGame.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/pinballFiles/TommyPinballGame.jpg"]))),
            #  side beam 
            Transform(translation=(2.25,0,0),
              children=[
              Shape(DEF='sideBeam',
                geometry=Box(size=(0.3,0.6,8.8)),
                appearance=Appearance(DEF='WoodAppearance',
                  texture=ImageTexture(url=["woodTexture.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/woodTexture.jpg"]),
                  material=Material(diffuseColor=(1,0,0))))]),
            #  side beam2 
            Transform(translation=(-2.25,0,0),
              children=[
              Shape(USE='sideBeam')]),
            #  back of the table 
            Transform(translation=(0,-0.198,0),
              children=[
              Shape(
                geometry=Box(size=(4.5,0.2,7.6)),
                appearance=Appearance(USE='WoodAppearance'))]),
            #  circle 
            Transform(translation=(0,.17,-0.72),
              children=[
              Shape(DEF='cylinder',
                geometry=Cylinder(height=.15,radius=.2),
                appearance=Appearance(
                  material=Material(DEF='BALL_COLOR_2'))),
              Transform(translation=(-0.36,0,-0.66),
                children=[
                Shape(USE='cylinder')]),
              Transform(translation=(0.38,0,-0.82),
                children=[
                Shape(USE='cylinder')]),
              Transform(translation=(-1.57,0,-2.03),
                children=[
                Shape(USE='cylinder')]),
              TimeSensor(DEF='CLOCK_2',cycleInterval=2.4,loop=True),
              ColorInterpolator(DEF='COLOR_PATH_2',key=[0.0,0.5,0.5,1.0],keyValue=[(0,1,0),(0,1,0),(0,0,1),(0,0,1)])]),
            #  center circle 
            Transform(translation=(0,.1,2.05),
              children=[
              Shape(
                geometry=Cylinder(height=.2,radius=.54),
                appearance=Appearance(
                  texture=ImageTexture(url=["pinballFiles/center.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/pinballFiles/center.jpg"]),
                  material=Material(DEF='BALL_COLOR_1'))),
              TimeSensor(DEF='CLOCK_1',cycleInterval=2,loop=True),
              ColorInterpolator(DEF='COLOR_PATH_1',key=[0.0,0.5,0.5,1.0],keyValue=[(1,0,0),(1,0,0),(0,0,1),(0,0,1)])]),
            #  beam 
            Transform(translation=(0,0,4.25),
              children=[
              Shape(DEF='beam',
                geometry=Box(size=(4.5,0.6,0.3)),
                appearance=Appearance(USE='WoodAppearance'))])]),
          #  overhead light 
          DirectionalLight(direction=(0,-1,0),intensity=0.7),
          #  blinking route for center 
          ROUTE(fromField='fraction_changed',fromNode='CLOCK_1',toField='set_fraction',toNode='COLOR_PATH_1'),
          ROUTE(fromField='value_changed',fromNode='COLOR_PATH_1',toField='set_emissiveColor',toNode='BALL_COLOR_1'),
          #  blinking route for small circle 
          ROUTE(fromField='fraction_changed',fromNode='CLOCK_2',toField='set_fraction',toNode='COLOR_PATH_2'),
          ROUTE(fromField='value_changed',fromNode='COLOR_PATH_2',toField='set_emissiveColor',toNode='BALL_COLOR_2')]),
        #  ball 
        Group(
          children=[
          Transform(DEF='BALL1',translation=(1.8,.2,3.6),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,0,0))),
              geometry=Sphere(radius=.1))]),
          TouchSensor(DEF='Touch',description='ball 1 - touch to activate')]),
        #  stick1 
        Group(
          children=[
          Transform(DEF='stck1',rotation=(0,1,0,.67),scale=(1,2,1),translation=(.5,.2,3.8),
            children=[
            Shape(DEF='stick',
              appearance=Appearance(
                material=Material(diffuseColor=(.8,.8,.8))),
              geometry=Extrusion(creaseAngle=0.785,crossSection=[(0,0.1),(0.37,0.11),(0.44,0.07),(0.45,0),(0.44,-0.07),(0.37,-0.11),(0,-0.1),(-0.2,-0.08),(-0.32,-0.06),(-0.38,-0.04),(-0.4,0),(-0.38,0.04),(-0.32,0.06),(-0.2,0.08),(0,0.1)],spine=[(0,-0.03,0),(0,0.03,0)]))]),
          TouchSensor(DEF='Touch1',description='stick 1 - touch to activate')]),
        #  stick2 
        Group(
          children=[
          Transform(DEF='stck2',rotation=(0,1,0,2.47),scale=(1,2,1),translation=(-0.5,.2,3.8),
            children=[
            Shape(USE='stick')]),
          TouchSensor(DEF='Touch2',description='stick 2 - touch to activate')])]),
      TimeSensor(DEF='Clock',cycleInterval=6),
      TimeSensor(DEF='Clock1_1',cycleInterval=3),
      TimeSensor(DEF='Clock1_2',cycleInterval=3),
      TimeSensor(DEF='Clock1_3',cycleInterval=3),
      TimeSensor(DEF='Clock1_4',cycleInterval=3),
      TimeSensor(DEF='Clock2_1',cycleInterval=3),
      TimeSensor(DEF='Clock2_2',cycleInterval=3),
      TimeSensor(DEF='Clock2_3',cycleInterval=3),
      TimeSensor(DEF='Clock2_4',cycleInterval=3),
      TimeSensor(DEF='ClockOrient1'),
      TimeSensor(DEF='ClockOrient2'),
      PositionInterpolator(DEF='PosBall1',key=[0,0.0625,0.125,0.1875,0.25,0.3125,0.375,0.4375,0.5,0.5625,0.625,0.6875,0.75,0.8125,0.875,0.9375,1],keyValue=[(1.8,.2,3.6),(1.8,.2,-1.4),(1.7,.2,-2.0),(1.46,.2,-2.5),(1.1,.2,-2.9),(0.6,.2,-3.1),(0,.2,-3.2),(-0.6,.2,-3.1),(-1.1,.2,-2.9),(-1.5,.2,-2.5),(-1.7,.2,-2.0),(-1.8,.2,-1.4),(-0.36,.2,-1.38),(.36,.2,-1.54),(0,.2,-0.74),(0.562,.2,3.396),(.242,.2,3.745)]),
      PositionInterpolator(DEF='PosFlip1_1',key=[0,0.25,0.5,0.75,1],keyValue=[(1.2,.2,3.4),(0.701,.2,-2.826),(-1.774,.2,-0.675),(-1.511,.2,2.791),(-0.4,.2,3.6)]),
      PositionInterpolator(DEF='PosFlip1_2',key=[0,0.2,0.4,0.6,0.8,1],keyValue=[(.242,.2,3.745),(1,0.2,1),(-1.2,0.2,0.8),(0.8,0.2,-2.4),(0.4,0.2,-2.6),(-0.4,.2,3.6)]),
      PositionInterpolator(DEF='PosFlip1_3',key=[0,0.076923077,0.153846154,0.230769231,0.307692308,0.384615385,0.461538462,0.538461538,0.615384615,0.692307692,0.769230769,0.846153846,0.923076923,1],keyValue=[(.242,.2,3.745),(-1.5,0.2,0),(0.3,0.2,-3.1),(-1.4,0.2,-3.1),(-0.2,0.2,-1),(-0.3,0.2,-3.4),(-1.8,0.2,-1.8),(0.3,0.2,-2.8),(-1.1,0.2,-3.4),(-1.7,0.2,-2.4),(1.8,0.2,-0.4),(-0.8,0.2,1.8),(2,0.2,-3.4),(-0.4,.2,3.6)]),
      PositionInterpolator(DEF='PosFlip1_4',key=[0,0.2,0.4,0.6,0.8,1],keyValue=[(.242,.2,3.745),(2.2,0.2,1),(0,0.2,0),(1.5,0.2,-3),(-1,0.2,2.5),(-0.4,.2,3.6)]),
      PositionInterpolator(DEF='PosFlip2_1',key=[0,0.166666667,0.333333333,0.5,0.666666667,0.833333333,1],keyValue=[(1.2,0.2,-3),(-2,0.2,0.2),(2,0.2,-0.6),(-2.2,0.2,1.2),(1.2,0.2,0.8),(-1.2,0.2,-3.4),(-0.4,.2,3.6)]),
      PositionInterpolator(DEF='PosFlip2_2',key=[0,0.066666667,0.129166667,0.191666667,0.254166667,0.316666667,0.379166667,0.441666667,0.504166667,0.566666667,0.629166667,0.691666667,0.754166667,0.816666667,0.879166667,0.941666667],keyValue=[(0,.2,4.25),(-2,0.2,-1),(-1.8,0.2,-3.4),(-0.4,0.2,-3.6),(1.8,0.2,-3.4),(1.6,0.2,-2),(1,0.2,1),(0,.2,4.25),(-0.5,0.2,0),(-1,0.2,-2),(0.5,0.2,2.5),(0.8,0.2,1),(-2.2,0.2,1),(2.2,0.2,-3.6),(-0.5,0.2,3),(-0.4,.2,3.6)]),
      PositionInterpolator(DEF='PosFlip2_3',key=[0,0.0625,0.125,0.1875,0.25,0.3125,0.375,0.4375,0.5,0.5625,0.625,0.6875,0.75,0.8125,0.875,0.9375,1],keyValue=[(-1.6,0.2,0),(-1.8,0.2,-1),(-1.6,0.2,-2.4),(-0.4,0.2,-2.5),(0,0.2,-1.6),(-0.2,0.2,-0.9),(-1,0.2,-1.8),(0.2,0.2,-2.2),(0.2,0.2,-1.4),(-0.6,0.2,-1.4),(-0.6,0.2,-1.6),(0,0.2,-1.4),(-0.2,0.2,-1.3),(0.8,0.2,0),(-1,0.2,0.2),(1.4,0.2,-1.6),(-0.4,.2,3.6)]),
      PositionInterpolator(DEF='PosFlip2_4',key=[0,0.25,0.5,0.75,1],keyValue=[(-0.4,.2,3.6),(1.8,.2,0),(0.936,.2,-2.842),(0,.2,3.4),(.242,.2,3.745)]),
      OrientationInterpolator(DEF='orienFlip1',key=[0,0.25,0.5,0.75,1],keyValue=[(0,1,0,-0.5),(0,1,0,-1.0),(0,1,0,-1.57),(0,1,0,-1),(0,1,0,0.5)]),
      OrientationInterpolator(DEF='orienFlip2',key=[0,0.25,0.5,0.75,1],keyValue=[(0,1,0,0.5),(0,1,0,1.0),(0,1,0,1.57),(0,1,0,1),(0,1,0,-0.5)]),
      #  pinballBackground 
      Group(
        #  beam for pinballBackground 
        #  left beam 
        children=[
        Transform(translation=(2.245,2,-4),
          children=[
          Shape(
            geometry=Box(size=(.3,4.5,0.8)),
            appearance=Appearance(USE='WoodAppearance'))]),
        #  right beam 
        Transform(translation=(-2.245,2,-4),
          children=[
          Shape(
            geometry=Box(size=(.3,4.5,0.8)),
            appearance=Appearance(USE='WoodAppearance'))]),
        #  upper beam 
        Transform(translation=(0,4.4,-4),
          children=[
          Shape(
            geometry=Box(size=(4.81,0.3,0.8)),
            appearance=Appearance(USE='WoodAppearance'))]),
        #  back of pinballBackground 
        Transform(translation=(0,-0.6,-4.5),
          children=[
          Shape(
            geometry=Box(size=(4.78,10.3,0.4)),
            appearance=Appearance(USE='WoodAppearance'))]),
        #  pinballBackground 
        Transform(translation=(0,2,-3.95),
          children=[
          Shape(
            geometry=Box(size=(4.5,4.5,0.5)),
            appearance=Appearance(
              texture=ImageTexture(USE='TommyPinballGame'),
              #  animate color behind image 
              material=Material(DEF='BALL_COLOR_3'))),
          TimeSensor(DEF='CLOCK_3',cycleInterval=5,loop=True),
          ColorInterpolator(DEF='COLOR_PATH_3',key=[0.0,0.5,0.5,1.0],keyValue=[(0,0,0),(.91,.98,.36),(0,0,0),(0,0,0)])]),
        #  Left front beam 
        Transform(translation=(-2.25,-3.7,3.9),
          children=[
          Shape(
            geometry=Box(size=(0.3,3.8,0.6)),
            appearance=Appearance(USE='WoodAppearance'))]),
        #  right front beam 
        Transform(translation=(2.25,-3.7,3.9),
          children=[
          Shape(
            geometry=Box(size=(0.3,3.8,0.6)),
            appearance=Appearance(USE='WoodAppearance'))]),
        ROUTE(fromField='fraction_changed',fromNode='CLOCK_3',toField='set_fraction',toNode='COLOR_PATH_3'),
        ROUTE(fromField='value_changed',fromNode='COLOR_PATH_3',toField='set_emissiveColor',toNode='BALL_COLOR_3')]),
      #  front 
      Transform(translation=(0,-3.6,4),
        children=[
        Shape(
          geometry=Box(size=(4.2,2.8,.05)),
          appearance=Appearance(
            material=Material(),
            texture=ImageTexture(url=["pinballFiles/pinballFront.jpg","https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/pinballFiles/pinballFront.jpg"]))),
        Transform(translation=(0,-1.7,0),
          children=[
          Shape(
            geometry=Box(size=(4.5,0.6,0.3)),
            appearance=Appearance(USE='WoodAppearance'))])]),
      #  pinballSide 
      Group(
        #  right side 
        children=[
        Transform(rotation=(0,1,0,-1.57),translation=(2.44,-5.6,4),
          children=[
          Shape(
            appearance=Appearance(USE='WoodAppearance'),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0],
              coord=Coordinate(point=[(0,0,0),(-8.7,0,0),(-8.7,5.5,0),(0,3.35,0)])))]),
        #  left side 
        Transform(rotation=(0,1,0,-1.57),translation=(-2.43,-5.6,4),
          children=[
          Shape(
            appearance=Appearance(USE='WoodAppearance'),
            geometry=IndexedFaceSet(coordIndex=[0,3,2,1,0],
              coord=Coordinate(point=[(0,0,0),(-8.7,0,0),(-8.7,5.5,0),(0,3.35,0)])))]),
        #  floor 
        Transform(translation=(0,-5.4,-0.3),
          children=[
          Shape(
            geometry=Box(size=(4.9,0.4,8.4)),
            appearance=Appearance(USE='WoodAppearance'))])]),
      #  routeSelecter is used to select different routes when a player clicks on flippers. 
      Script(DEF='routeSelecter1',mustEvaluate=True,
        field=[
        field(accessType='inputOnly',name='set_startTime',type='SFTime'),
        field(accessType='outputOnly',name='startTime1',type='SFTime'),
        field(accessType='outputOnly',name='startTime2',type='SFTime'),
        field(accessType='outputOnly',name='startTime3',type='SFTime'),
        field(accessType='outputOnly',name='startTime4',type='SFTime')]),
      Script(DEF='routeSelecter2',mustEvaluate=True,
        field=[
        field(accessType='inputOnly',name='set_startTime',type='SFTime'),
        field(accessType='outputOnly',name='startTime1',type='SFTime'),
        field(accessType='outputOnly',name='startTime2',type='SFTime'),
        field(accessType='outputOnly',name='startTime3',type='SFTime'),
        field(accessType='outputOnly',name='startTime4',type='SFTime')])]),
    #  Start game 
    ROUTE(fromField='touchTime',fromNode='Touch',toField='set_startTime',toNode='Clock'),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='PosBall1'),
    ROUTE(fromField='value_changed',fromNode='PosBall1',toField='set_translation',toNode='BALL1'),
    #  Path1 
    ROUTE(fromField='touchTime',fromNode='Touch1',toField='set_startTime',toNode='routeSelecter1'),
    ROUTE(fromField='startTime1',fromNode='routeSelecter1',toField='set_startTime',toNode='Clock1_1'),
    ROUTE(fromField='fraction_changed',fromNode='Clock1_1',toField='set_fraction',toNode='PosFlip1_1'),
    ROUTE(fromField='value_changed',fromNode='PosFlip1_1',toField='set_translation',toNode='BALL1'),
    #  Path2 
    ROUTE(fromField='startTime2',fromNode='routeSelecter1',toField='set_startTime',toNode='Clock1_2'),
    ROUTE(fromField='fraction_changed',fromNode='Clock1_2',toField='set_fraction',toNode='PosFlip1_2'),
    ROUTE(fromField='value_changed',fromNode='PosFlip1_2',toField='set_translation',toNode='BALL1'),
    #  Path3 
    ROUTE(fromField='startTime3',fromNode='routeSelecter1',toField='set_startTime',toNode='Clock1_3'),
    ROUTE(fromField='fraction_changed',fromNode='Clock1_3',toField='set_fraction',toNode='PosFlip1_3'),
    ROUTE(fromField='value_changed',fromNode='PosFlip1_3',toField='set_translation',toNode='BALL1'),
    #  Path4 
    ROUTE(fromField='startTime4',fromNode='routeSelecter1',toField='set_startTime',toNode='Clock1_4'),
    ROUTE(fromField='fraction_changed',fromNode='Clock1_4',toField='set_fraction',toNode='PosFlip1_4'),
    ROUTE(fromField='value_changed',fromNode='PosFlip1_4',toField='set_translation',toNode='BALL1'),
    #  Path5 
    ROUTE(fromField='touchTime',fromNode='Touch2',toField='set_startTime',toNode='routeSelecter2'),
    ROUTE(fromField='startTime1',fromNode='routeSelecter2',toField='set_startTime',toNode='Clock2_1'),
    ROUTE(fromField='fraction_changed',fromNode='Clock2_1',toField='set_fraction',toNode='PosFlip2_1'),
    ROUTE(fromField='value_changed',fromNode='PosFlip2_1',toField='set_translation',toNode='BALL1'),
    #  Path6 
    ROUTE(fromField='startTime2',fromNode='routeSelecter2',toField='set_startTime',toNode='Clock2_2'),
    ROUTE(fromField='fraction_changed',fromNode='Clock2_2',toField='set_fraction',toNode='PosFlip2_2'),
    ROUTE(fromField='value_changed',fromNode='PosFlip2_2',toField='set_translation',toNode='BALL1'),
    #  Path7 
    ROUTE(fromField='startTime3',fromNode='routeSelecter2',toField='set_startTime',toNode='Clock2_3'),
    ROUTE(fromField='fraction_changed',fromNode='Clock2_3',toField='set_fraction',toNode='PosFlip2_3'),
    ROUTE(fromField='value_changed',fromNode='PosFlip2_3',toField='set_translation',toNode='BALL1'),
    #  Path8 
    ROUTE(fromField='startTime4',fromNode='routeSelecter2',toField='set_startTime',toNode='Clock2_4'),
    ROUTE(fromField='fraction_changed',fromNode='Clock2_4',toField='set_fraction',toNode='PosFlip2_4'),
    ROUTE(fromField='value_changed',fromNode='PosFlip2_4',toField='set_translation',toNode='BALL1'),
    #  Rotating sticks 
    ROUTE(fromField='touchTime',fromNode='Touch1',toField='set_startTime',toNode='ClockOrient1'),
    ROUTE(fromField='fraction_changed',fromNode='ClockOrient1',toField='set_fraction',toNode='orienFlip1'),
    ROUTE(fromField='value_changed',fromNode='orienFlip1',toField='set_rotation',toNode='stck1'),
    ROUTE(fromField='touchTime',fromNode='Touch2',toField='set_startTime',toNode='ClockOrient2'),
    ROUTE(fromField='fraction_changed',fromNode='ClockOrient2',toField='set_fraction',toNode='orienFlip2'),
    ROUTE(fromField='value_changed',fromNode='orienFlip2',toField='set_rotation',toNode='stck2'),
    #  View Point 
    Viewpoint(description='normal view',position=(0,0,8.5)),
    Viewpoint(description='far',position=(0,1,20)),
    Viewpoint(description='right',fieldOfView=0.7,orientation=(0,1,0,1.2),position=(15,0,15)),
    Viewpoint(description='left',orientation=(0,1,0,-1.2),position=(-15,0,15)),
    Viewpoint(description='over',orientation=(1,0,0,-1.2),position=(0,17,5)),
    Background(backUrl=["urn:web3d:media:textures/panoramas/space_1_back.jpg","../UniversalMediaPanoramas/space_1_back.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_back.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_back.jpg"],bottomUrl=["urn:web3d:media:textures/panoramas/space_1_bottom.jpg","../UniversalMediaPanoramas/space_1_bottom.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_bottom.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_bottom.jpg"],frontUrl=["urn:web3d:media:textures/panoramas/space_1_front.jpg","../UniversalMediaPanoramas/space_1_front.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_front.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_front.jpg"],groundAngle=[1.309,1.570796],groundColor=[(0,0,0)],leftUrl=["urn:web3d:media:textures/panoramas/space_1_left.jpg","../UniversalMediaPanoramas/space_1_left.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_left.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_left.jpg"],rightUrl=["urn:web3d:media:textures/panoramas/space_1_right.jpg","../UniversalMediaPanoramas/space_1_right.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_right.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_right.jpg"],skyAngle=[1.309,1.571],topUrl=["urn:web3d:media:textures/panoramas/space_1_top.jpg","../UniversalMediaPanoramas/space_1_top.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/space_1_top.jpg","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaPanoramas/space_1_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/space_1_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/space_1_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/space_1_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/space_1_top.jpg"])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PinballTable.py")
