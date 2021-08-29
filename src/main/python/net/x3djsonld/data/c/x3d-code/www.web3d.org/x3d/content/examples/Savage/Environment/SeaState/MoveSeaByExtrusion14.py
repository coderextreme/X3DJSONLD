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
    meta(content='MoveSeaByExtrusion14.x3d',name='title'),
    meta(content='Marcus V. da S. Simoes',name='creator'),
    meta(content='11 January 2001',name='created'),
    meta(content='9 July 2018',name='modified'),
    meta(content='Sea state rendering of ocean wave motion.',name='description'),
    meta(content='https://savage.nps.edu/Savage/Environment/SeaState/MoveSeaByExtrusion14.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Axis 
    children=[
    NavigationInfo(speed=100),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(0.6,0.6,0.6)]),
    #  ================================================= 
    #  SeaState&DirectionControlPanel 
    #  ================================================= 
    Transform(DEF='SeaBoxSeaandRockIsland',
      children=[
      Shape(
        geometry=Box(size=(800,400,1000)),
        appearance=Appearance(
          material=Material(transparency=1))),
      Transform(DEF='TheSeaState',translation=(0,0,-500),
        children=[
        Transform(translation=(0,-5000,0),
          children=[
          Shape(DEF='BasicWave',
            appearance=Appearance(DEF='SeaColor',
              texture=ImageTexture(url=["pool.jpg","https://savage.nps.edu/Savage/Environment/SeaState/pool.jpg"]),
              material=Material(diffuseColor=(0,0,0),transparency=0.3)),
            geometry=Extrusion(DEF='BasicExtrusion',beginCap=False,convex=False,creaseAngle=0.01,crossSection=[(0,0),(0,10),(0,0)],endCap=False,solid=False,spine=[(0,0.0,0.0000),(1.0,0.0204,1.0000),(2.0,0.0161,2.0000),(3.0,-0.0218,3.0000),(4.0,-0.0791,4.0000),(5.0,-0.1237,5.0000),(6.0,-0.1224,6.000),(7.0,-0.0598,7.0000),(8.0,0.0503,8.0000),(9.0,0.1661,9.0000),(10.0,0.2348,10.0000),(11.0,0.2163,11.0000),(12.0,0.1041,12.0000),(13.0,-0.0672,13.0000),(14.0,-0.2326,14.0000),(15.0,-0.3224,15.0000),(16.0,-0.2920,16.0000),(17.0,-0.1434,17.0000),(18.0,0.0723,18.0000),(19.0,0.2728,19.0000),(20.0,0.3776,20.0000),(21.0,0.3408,21.0000),(22.0,0.1718,22.0000),(23.0,-0.0670,23.0000),(24.0,-0.2840,24.0000),(25.0,-0.3951,25.0000),(26.0,-0.3568,26.0000),(27.0,-0.1846,27.0000),(28.0,0.0541,28.0000),(29.0,0.2668,29.0000),(30.0,0.3734,30.0000),(31.0,0.3373,31.0000),(32.0,0.1782,32.0000),(33.0,-0.0373,33.0000),(34.0,-0.2246,34.0000),(35.0,-0.3153,35.0000),(36.0,-0.2831,36.0000),(37.0,-0.1513,37.0000),(38.0,0.0205,38.0000),(39.0,0.1632,39.0000),(40.0,0.2269,40.0000),(41.0,0.1990,41.0000),(42.0,0.1048,42.0000),(43.0,-0.0074,43.0000),(44.0,-0.0903,44.0000),(45.0,-0.1177,45.0000),(46.0,-0.0928,46.0000),(47.0,-0.0423,47.0000),(48.0,0.0006,48.0000),(49.0,0.0142,49.0000),(50.0,-0.0012,50.0000),(51.0,-0.0251,51.0000),(52.0,-0.0307,52.0000),(53.0,-0.0015,53.0000),(54.0,0.0571,54.0000),(55.0,0.1175,55.0000),(56.0,0.1429,56.0000),(57.0,0.1069,57.0000),(58.0,0.0098,58.0000),(59.0,-0.1166,59.0000),(60.0,-0.2197,60.0000),(61.0,-0.2485,61.0000),(62.0,-0.1780,62.0000),(63.0,-0.0240,63.0000),(64.0,0.1590,64.0000),(65.0,0.2978,65.0000),(66.0,0.3309,66.0000),(67.0,0.2357,67.0000),(68.0,0.0411,68.0000),(69.0,-0.1814,69.0000),(70.0,-0.3446,70.0000),(71.0,-0.3815,71.0000),(72.0,-0.2729,72.0000),(73.0,-0.0574,73.0000),(74.0,0.1834,74.0000),(75.0,0.3563,75.0000),(76.0,0.3946,76.0000),(77.0,0.2841,77.0000),(78.0,0.0689,78.0000),(79.0,-0.1668,79.0000),(80.0,-0.3327,80.0000),(81.0,-0.3686,81.0000),(82.0,-0.2664,82.0000),(83.0,-0.0721,83.0000),(84.0,0.1355,84.0000),(85.0,0.2774,85.0000),(86.0,0.3057,86.0000),(87.0,0.2201,87.0000),(88.0,0.0645,88.0000),(89.0,-0.0946,89.0000),(90.0,-0.1969,90.0000),(91.0,-0.2121,91.0000),(92.0,-0.1485,92.0000),(93.0,-0.0450,93.0000),(94.0,0.0499,94.0000),(95.0,0.1004,95.0000),(96.0,0.0972,96.0000),(97.0,0.0580,97.0000),(98.0,0.0142,98.0000),(99.0,-0.0071,99.0000),(100.0,0.0020,100.0)]))]),
        Switch(DEF='SeaStateNumber',whichChoice=0,
          children=[
          Group(DEF='SeaState_1',
            children=[
            Transform(DEF='SST1Escale',scale=(100,.05,100),
              children=[
              Shape(USE='BasicWave')])]),
          Group(DEF='SeaState_2',
            children=[
            Transform(DEF='SST2Scale',scale=(100,1,100),
              children=[
              Shape(USE='BasicWave')])]),
          Group(DEF='SeaState_3',
            children=[
            Transform(DEF='SST3Scale',scale=(100,2,100),
              children=[
              Shape(USE='BasicWave')])]),
          Group(DEF='SeaState_4',
            children=[
            Transform(DEF='SST4Scale',scale=(100,4,100),
              children=[
              Shape(USE='BasicWave')])]),
          Group(DEF='SeaState_5',
            children=[
            Transform(DEF='SST5Scale',scale=(100,8,100),
              children=[
              Shape(USE='BasicWave')])]),
          Group(DEF='SeaState_6',
            children=[
            Transform(DEF='SSTScale6',scale=(100,12,100),
              children=[
              Shape(USE='BasicWave')])]),
          Group(DEF='SeaState_7',
            children=[
            Transform(DEF='SSTScale7',scale=(100,16,100),
              children=[
              Shape(USE='BasicWave')])]),
          Group(DEF='SeaState_8',
            children=[
            Transform(DEF='SSTScale8',scale=(100,21,100),
              children=[
              Shape(USE='BasicWave')])])])]),
      Group(DEF='TheBeach',
        children=[
        Transform(scale=(25,120,25),translation=(-400,-2,-400),
          children=[
          Shape(
            geometry=ElevationGrid(DEF='BeachElevation',height=[0.0000,0.0025,0.0049,0.0070,0.0088,0.0102,0.0110,0.0112,0.0108,0.0096,0.0078,0.0052,0.0019,-0.0020,-0.0066,-0.0116,-0.0171,-0.0228,-0.0287,-0.0347,-0.0405,-0.0461,-0.0512,-0.0558,-0.0596,-0.0626,-0.0645,-0.0654,-0.0651,-0.0636,-0.0607,-0.0565,-0.0510,-0.0443,-0.0363,-0.0271,-0.0170,-0.0060,0.0057,0.0179,0.0305,0.0431,0.0557,0.0678,0.0794,0.0901,0.0997,0.1081,0.1150,0.1202,0.1236,0.1250,0.1244,0.1217,0.1268,0.1299,0.128,0.0897,0.0768,0.0622,0.0460,0.0286,0.101,-0.0091,-0.0287,-0.0485,-0.0680,-0.0870,-0.1051,-0.1220,-0.1373,-0.1508,-0.1622,-0.1713,-0.1778,-0.1815,-0.1824,-0.1804,-0.1754,-0.1673,-0.1564,-0.1427,-0.1264,-0.1076,-0.0867,-0.0639,-0.0396,-0.0142,0.0,0.0,0.0,0.0,0.10,0.1,0.14,0.11,0.11,0.0,0.04,0.0],xDimension=10,zDimension=10),
            appearance=Appearance(
              texture=ImageTexture(url=["rocks_1.jpg","https://savage.nps.edu/Savage/Environment/SeaState/clouds2.jpg"])))]),
        Transform(DEF='BeachView',rotation=(0,1,0,1.2),translation=(250,10,100),
          children=[
          Viewpoint(description='ROCK VIEW')])])]),
    #  ================================================= 
    #  SeaLevelChoiceGroup 
    #  ================================================= 
    Group(DEF='SeaStateAndDirectionControlPanel',
      children=[
      Transform(translation=(0,100,4000),
        children=[
        Billboard(
          children=[
          Group(DEF='SeaStateChoice',
            children=[
            Transform(DEF='Option1',translation=(0,-2.0,0),
              children=[
              Transform(DEF='Box1',translation=(0,.1,0),
                children=[
                Shape(DEF='BoxSensor',
                  geometry=Box(size=(1,.4,.1)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0,1),specularColor=(0,0,1),transparency=.9))),
                TouchSensor(DEF='TouchSensorSeaState1',description='touch to activate'),
                Transform(DEF='Text1',scale=(.25,.25,.25),translation=(0,0,.1),
                  children=[
                  Shape(
                    geometry=Text(string=["SST 1"],
                      fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
                    appearance=Appearance(
                      material=Material(emissiveColor=(.8,.8,.8))))])])]),
            Transform(DEF='Option2',translation=(0,-1.5,0),
              children=[
              Transform(DEF='Box2',translation=(0,.1,0),
                children=[
                Shape(
                  geometry=Box(size=(1,.4,.1)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0,.8),transparency=.7))),
                TouchSensor(DEF='TouchSensorSeaState2',description='touch to activate'),
                Transform(DEF='Text2',scale=(.25,.25,.25),translation=(0,0,.1),
                  children=[
                  Shape(
                    geometry=Text(string=["SST 2"],
                      fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
                    appearance=Appearance(
                      material=Material(emissiveColor=(.8,.8,.8))))])])]),
            Transform(DEF='Option3',translation=(0,-1.0,0),
              children=[
              Transform(DEF='Box3',translation=(0,.1,0),
                children=[
                Shape(
                  geometry=Box(size=(1,.4,.1)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0,.8),transparency=.7))),
                TouchSensor(DEF='TouchSensorSeaState3',description='touch to activate'),
                Transform(DEF='Text3',scale=(.25,.25,.25),translation=(0,0,.1),
                  children=[
                  Shape(
                    geometry=Text(string=["SST 3"],
                      fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
                    appearance=Appearance(
                      material=Material(emissiveColor=(.8,.8,.8))))])])]),
            Transform(DEF='Option4',translation=(0,-0.5,0),
              children=[
              Transform(DEF='Box4',translation=(0,.1,0),
                children=[
                Shape(
                  geometry=Box(size=(1,.4,.1)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,0.8,0),transparency=0.8))),
                TouchSensor(DEF='TouchSensorSeaState4',description='touch to activate'),
                Transform(DEF='Text4',scale=(.25,.25,.25),translation=(0,0,.1),
                  children=[
                  Shape(
                    geometry=Text(string=["SST 4"],
                      fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
                    appearance=Appearance(
                      material=Material(emissiveColor=(.8,.8,.8))))])])]),
            Transform(DEF='Option5',
              children=[
              Transform(DEF='Box5',translation=(0,.1,0),
                children=[
                Shape(
                  geometry=Box(size=(1,.4,.1)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(0,.5,0),transparency=.4))),
                Transform(DEF='Text5',scale=(.25,.25,.25),translation=(0,0,.1),
                  children=[
                  Shape(
                    geometry=Text(string=["SST 5"],
                      fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
                    appearance=Appearance(
                      material=Material(emissiveColor=(.8,.8,.8))))]),
                TouchSensor(DEF='TouchSensorSeaState5',description='touch to activate')])]),
            Transform(DEF='Option6',translation=(0,.5,0),
              children=[
              Transform(DEF='Box6',translation=(0,.1,0),
                children=[
                Transform(DEF='Text6',scale=(.25,.25,.25),translation=(0,0,.1),
                  children=[
                  Shape(
                    geometry=Text(string=["SST 6"],
                      fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
                    appearance=Appearance(
                      material=Material(emissiveColor=(.8,.8,.8))))]),
                Shape(
                  geometry=Box(size=(1,.4,.1)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.2,0,0),transparency=0.8))),
                TouchSensor(DEF='TouchSensorSeaState6',description='touch to activate')])]),
            Transform(DEF='Option7',translation=(0,1.0,0),
              children=[
              Transform(DEF='Box7',translation=(0,.1,0),
                children=[
                Transform(DEF='Text7',scale=(.25,.25,.25),translation=(0,0,.1),
                  children=[
                  Shape(
                    geometry=Text(string=["SST 7"],
                      fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
                    appearance=Appearance(
                      material=Material(emissiveColor=(.8,.8,.8))))]),
                Shape(
                  geometry=Box(size=(1,.4,.1)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(.5,0,0),transparency=0.7))),
                TouchSensor(DEF='TouchSensorSeaState7',description='touch to activate')])]),
            Transform(DEF='Option8',translation=(0,1.5,0),
              children=[
              Transform(DEF='Box8',translation=(0,.1,0),
                children=[
                Transform(DEF='Text8',scale=(.25,.25,.25),translation=(0,0,.1),
                  children=[
                  Shape(
                    geometry=Text(string=["SST 8"],
                      fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
                    appearance=Appearance(
                      material=Material(emissiveColor=(.8,.8,.8))))]),
                Shape(
                  geometry=Box(size=(1,.4,.1)),
                  appearance=Appearance(
                    material=Material(diffuseColor=(1,0,0),transparency=0.5))),
                TouchSensor(DEF='TouchSensorSeaState8',description='touch to activate')])]),
            Transform(translation=(0,0,-3),
              children=[
              Shape(
                geometry=Box(size=(2,6.5,0.2)),
                appearance=Appearance(
                  material=Material(diffuseColor=(.3,.3,.3))))])])]),
        Viewpoint(description='SEA PANEL',position=(-2,0,6))])]),
    #  ================================================= 
    #  TaskForce 
    #  ================================================= 
    Group(DEF='TaskForce',
      #  Cruiser 
      children=[
      Transform(DEF='ShipVelocity',rotation=(0,1,0,2.357),
        children=[
        Transform(DEF='ShipBuoyance',
          children=[
          Transform(DEF='ShipPitch',
            children=[
            Transform(DEF='ShipRoll',
              children=[
              Inline(url=["../../ShipsMilitary/CruiserUnitedStates/Cruiser.x3d","https://savage.nps.edu/Savage/ShipsMilitary/CruiserUnitedStates/Cruiser.x3d","../../ShipsMilitary/CruiserUnitedStates/Cruiser.wrl","https://savage.nps.edu/Savage/ShipsMilitary/CruiserUnitedStates/Cruiser.wrl"]),
              Transform(translation=(38,18.5,-9.5),
                children=[
                Viewpoint(DEF='ShipBridge',description='BRIDGE VIEW',fieldOfView=1.51,orientation=(0,1,0,-1.57))])])]),
          Viewpoint(DEF='TopView',description='AERIAL VIEW',orientation=(1,0,0,-1.571),position=(0,500,0))])]),
      #  SubmarineSimulation@5mDepth 
      Transform(DEF='SubBuoyance',rotation=(0,1,0,0.785),scale=(.1,.1,.1),translation=(300,-10,-300),
        children=[
        Transform(DEF='SubPitch',
          children=[
          Transform(DEF='SubRoll',
            children=[
            Transform(
              children=[
              Inline(url=["../../Submarines/SsnLosAngelesUnitedStates/688.x3d","https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/688.x3d","../../Submarines/SsnLosAngelesUnitedStates/688.wrl","https://savage.nps.edu/Savage/Submarines/SsnLosAngelesUnitedStates/688.wrl"]),
              Viewpoint(description='PERISCOPE VIEW',fieldOfView=0.4,orientation=(0,1,0,1.57),position=(0,120,0))])])])])]),
    #  ================================================= 
    #  AnimationClock 
    #  ================================================= 
    Group(DEF='TimeSensors',
      children=[
      TimeSensor(DEF='ShipClock',cycleInterval=80,loop=True),
      TimeSensor(DEF='BuoyanceClock',cycleInterval=80,loop=True),
      TimeSensor(DEF='PitchClock',cycleInterval=25,loop=True),
      TimeSensor(DEF='RollClock',cycleInterval=40,loop=True),
      TimeSensor(DEF='Clock',cycleInterval=45,loop=True)]),
    #  ================================================= 
    #  Interpolators 
    #  ================================================= 
    #  MovingTheShip 
    Group(DEF='Orientation',
      children=[
      OrientationInterpolator(DEF='Roll',key=[0.0,0.5,1.0],keyValue=[(1,0,0,-0.08),(1,0,0,0.08),(1,0,0,-0.08)]),
      OrientationInterpolator(DEF='Pitch',key=[0.0,0.5,1.0],keyValue=[(0,0,1,-0.03),(0,0,1,0.03),(0,0,1,-0.03)]),
      PositionInterpolator(DEF='ShipBuoyanceHeight',key=[0,0.0100,0.0200,0.0300,0.0400,0.0500,0.0600,0.0700,0.0800,0.0900,0.1000,0.1100,0.1200,0.1300,0.1400,0.1500,0.1600,0.1700,0.1800,0.1900,0.2000,0.2100,0.2200,0.2300,0.2400,0.2500,0.2600,0.2700,0.2800,0.2900,0.3000,0.3100,0.3200,0.3300,0.3400,0.3500,0.3600,0.3700,0.3800,0.3900,0.4000],keyValue=[(400.0,1.1345,400.0000),(390.0,0.8160,390.0000),(380.0,0.1025,380.0000),(370.0,-0.7565,370.0000),(360.0,-1.4155,360.0000),(350.0,-1.5765,350.0000),(340.0,-1.1230,340.0000),(330.0,-0.1865,330.0000),(320.0,0.8910,320.0000),(310.0,1.6865,310.0000),(300.0,1.8670,300.0000),(290.0,1.3340,290.0000),(280.0,0.2705,280.0000),(270.0,-0.9230,270.0000),(260.0,-1.7840,260.0000),(250.0,-1.9755,250.0000),(240.0,-1.4200,240.0000),(230.0,-0.3350,230.0000),(220.0,0.8590,220.0000),(210.0,1.7040,210.0000),(200.0,1.8880,200.0000),(190.0,1.3640,190.0000),(180.0,0.3615,180.0000),(170.0,-0.7170,170.0000),(160.0,-1.4600,160.0000),(150.0,-1.6120,150.0000),(140.0,-1.1630,140.0000),(130.0,-0.3360,130.0000),(120.0,0.5205,120.0000),(110.0,1.0815,110.0000),(100.0,1.1740,100.0000),(90.0,0.8305,90.0000),(80.0,0.2515,80.0000),(70.0,-0.2990,70.0000),(60.0,-0.6120,60.0000),(50.0,-0.6185,50.0000),(40.0,-0.3955,40.0000),(30.0,-0.1090,30.0000),(20.0,0.0805,20.0000),(10.0,0.1020,10.0000),(0,0,0)]),
      PositionInterpolator(DEF='SubBuoyanceHeigth',key=[0,0.0100,0.0200,0.0300,0.0400,0.0500,0.0600,0.0700,0.0800,0.0900,0.1000,0.1100,0.1200,0.1300,0.1400,0.1500,0.1600,0.1700,0.1800,0.1900,0.2000,0.2100,0.2200,0.2300,0.2400,0.2500,0.2600,0.2700,0.2800,0.2900,0.3000,0.3100,0.3200,0.3300,0.3400,0.3500,0.3600,0.3700,0.3800,0.3900,0.4000],keyValue=[(300.0,-0.0060,-300.0000),(300.0,0.0710,-300.0000),(300.0,0.0030,-300.0000),(300.0,-0.2115,-300.0000),(300.0,-0.4640,-300.0000),(300.0,-0.5885,-300.0000),(300.0,-0.4515,-300.0000),(300.0,-0.0370,-300.0000),(300.0,0.5240,-300.0000),(300.0,0.9950,-300.0000),(300.0,1.1345,-300.0000),(300.0,0.8160,-300.0000),(300.0,0.1025,-300.0000),(300.0,-0.7565,-300.0000),(300.0,-1.4155,-300.0000),(300.0,-1.5765,-300.0000),(300.0,-1.1230,-300.0000),(300.0,-0.1865,-300.0000),(300.0,0.8910,-300.0000),(300.0,1.6865,-300.0000),(300.0,1.8670,-300.0000),(300.0,1.3340,-300.0000),(300.0,0.2705,-300.0000),(300.0,-0.9230,-300.0000),(300.0,-1.7840,-300.0000),(300.0,-1.9755,-300.0000),(300.0,-1.4200,-300.0000),(300.0,-0.3350,-300.0000),(300.0,0.8590,-300.0000),(300.0,1.7040,-300.0000),(300.0,1.8880,-300.0000),(300.0,1.3640,-300.0000),(300.0,-0.7170,-300.0000),(300.0,-1.4600,-300.0000),(300.0,-1.6120,-300.0000),(300.0,-1.1630,-300.0000),(300.0,-0.3360,-300.0000),(300.0,0.5205,-300.0000),(300.0,1.0815,-300.0000),(300.0,1.1740,-300.0000),(300.0,0.8305,-300.0)])]),
    #  MovingTheSea 
    Group(DEF='Coordinate',
      children=[
      CoordinateInterpolator(DEF='Ondulation',key=[0.0,0.25,0.50,0.75,1.0],keyValue=[(-4.100,0.0,0),(-4.0,0.0,0),(-3.529,0.674,0),(-3.059,0.996,0),(-2.588,0.798,0),(-2.118,0.184,0),(-1.647,-0.526,0),(-1.176,-0.962,0),(-0.706,-0.895,0),(-0.235,-0.361,0),(0.235,0.361,0),(0.706,0.895,0),(1.176,0.962,0),(1.647,0.526,0),(2.118,-0.184,0),(2.588,-0.798,0),(3.059,-0.996,0),(3.529,-0.674,0),(4.0,0.0,0),(-4.100,-1.0,0),(-4.0,-1.0,0),(-3.529,-0.739,0),(-3.059,-0.092,0),(-2.588,0.603,0),(-2.118,0.983,0),(-1.647,0.850,0),(-1.176,0.274,0),(-0.706,-0.446,0),(-0.235,-0.932,0),(0.235,-0.932,0),(0.706,-0.446,0),(1.176,0.274,0),(1.647,0.850,0),(2.118,0.983,0),(2.588,0.603,0),(3.059,-0.092,0),(3.529,-0.739,0),(4.0,-1.0,0),(-4.100,0.0,0),(-4.0,0.0,0),(-3.529,-0.674,0),(-3.059,-0.996,0),(-2.588,-0.798,0),(-2.118,-0.184,0),(-1.647,0.526,0),(-1.176,0.962,0),(-0.706,0.895,0),(-0.235,0.361,0),(0.235,-0.361,0),(0.706,-0.895,0),(1.176,-0.962,0),(1.647,-0.526,0),(2.118,0.184,0),(2.588,0.798,0),(3.059,0.996,0),(3.529,0.674,0),(4.0,0.0,0),(-4.100,1.0,0),(-4.0,1.0,0),(-3.529,0.739,0),(-3.059,0.092,0),(-2.588,-0.603,0),(-2.118,-0.983,0),(-1.647,-0.850,0),(-1.176,-0.274,0),(-0.706,0.446,0),(-0.235,0.932,0),(0.235,0.932,0),(0.706,0.446,0),(1.176,-0.274,0),(1.647,-0.850,0),(2.118,-0.983,0),(2.588,-0.603,0),(3.059,0.092,0),(3.529,0.739,0),(4.0,1.0,0),(-4.100,0.0,0),(-4.0,0.0,0),(-3.529,0.674,0),(-3.059,0.996,0),(-2.588,0.798,0),(-2.118,0.184,0),(-1.647,-0.526,0),(-1.176,-0.962,0),(-0.706,-0.895,0),(-0.235,-0.361,0),(0.235,0.361,0),(0.706,0.895,0),(1.176,0.962,0),(1.647,0.526,0),(2.118,-0.184,0),(2.588,-0.798,0),(3.059,-0.996,0),(3.529,-0.674,0),(4.0,0.0,0)])]),
    #  ================================================= 
    #  Scripts 
    #  ================================================= 
    Group(DEF='ScriptsForWaveMovement',
      children=[
      Script(DEF='SeaStateChoiceToValue',
        field=[
        field(accessType='inputOnly',name='SeaStateChoice0',type='SFBool'),
        field(accessType='inputOnly',name='SeaStateChoice1',type='SFBool'),
        field(accessType='inputOnly',name='SeaStateChoice2',type='SFBool'),
        field(accessType='inputOnly',name='SeaStateChoice3',type='SFBool'),
        field(accessType='inputOnly',name='SeaStateChoice4',type='SFBool'),
        field(accessType='inputOnly',name='SeaStateChoice5',type='SFBool'),
        field(accessType='inputOnly',name='SeaStateChoice6',type='SFBool'),
        field(accessType='inputOnly',name='SeaStateChoice7',type='SFBool'),
        field(accessType='inputOnly',name='SeaStateChoice8',type='SFBool'),
        field(accessType='outputOnly',name='SeaStateValue',type='SFInt32'),
        field(accessType='outputOnly',name='BuoyanceValue',type='MFVec3f'),
        field(accessType='outputOnly',name='BuoyanceKeyValues',type='MFFloat'),
        field(accessType='outputOnly',name='PitchValue',type='MFRotation'),
        field(accessType='outputOnly',name='RollValue',type='MFRotation')])]),
    #  ================================================= 
    #  RoutesToChooseSST 
    #  ================================================= 
    ROUTE(fromField='isActive',fromNode='TouchSensorSeaState1',toField='SeaStateChoice1',toNode='SeaStateChoiceToValue'),
    ROUTE(fromField='isActive',fromNode='TouchSensorSeaState2',toField='SeaStateChoice2',toNode='SeaStateChoiceToValue'),
    ROUTE(fromField='isActive',fromNode='TouchSensorSeaState3',toField='SeaStateChoice3',toNode='SeaStateChoiceToValue'),
    ROUTE(fromField='isActive',fromNode='TouchSensorSeaState4',toField='SeaStateChoice4',toNode='SeaStateChoiceToValue'),
    ROUTE(fromField='isActive',fromNode='TouchSensorSeaState5',toField='SeaStateChoice5',toNode='SeaStateChoiceToValue'),
    ROUTE(fromField='isActive',fromNode='TouchSensorSeaState6',toField='SeaStateChoice6',toNode='SeaStateChoiceToValue'),
    ROUTE(fromField='isActive',fromNode='TouchSensorSeaState7',toField='SeaStateChoice7',toNode='SeaStateChoiceToValue'),
    ROUTE(fromField='isActive',fromNode='TouchSensorSeaState8',toField='SeaStateChoice8',toNode='SeaStateChoiceToValue'),
    ROUTE(fromField='SeaStateValue',fromNode='SeaStateChoiceToValue',toField='whichChoice',toNode='SeaStateNumber'),
    ROUTE(fromField='BuoyanceValue',fromNode='SeaStateChoiceToValue',toField='set_keyValue',toNode='ShipBuoyanceHeight'),
    ROUTE(fromField='BuoyanceKeyValues',fromNode='SeaStateChoiceToValue',toField='set_key',toNode='ShipBuoyanceHeight'),
    ROUTE(fromField='PitchValue',fromNode='SeaStateChoiceToValue',toField='set_keyValue',toNode='Pitch'),
    ROUTE(fromField='RollValue',fromNode='SeaStateChoiceToValue',toField='set_keyValue',toNode='Roll'),
    #  
    #  ================================================= 
    #  RoutesToMoveTheSea 
    #  ================================================= 
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='Ondulation'),
    ROUTE(fromField='value_changed',fromNode='Ondulation',toField='set_spine',toNode='BasicExtrusion'),
    #  ================================================= 
    #  RoutesToMoveTheShip 
    #  ================================================= 
    ROUTE(fromField='fraction_changed',fromNode='PitchClock',toField='set_fraction',toNode='Pitch'),
    ROUTE(fromField='value_changed',fromNode='Pitch',toField='set_rotation',toNode='ShipPitch'),
    ROUTE(fromField='value_changed',fromNode='Pitch',toField='set_rotation',toNode='SubPitch'),
    ROUTE(fromField='fraction_changed',fromNode='RollClock',toField='set_fraction',toNode='Roll'),
    ROUTE(fromField='value_changed',fromNode='Roll',toField='set_rotation',toNode='ShipRoll'),
    ROUTE(fromField='value_changed',fromNode='Roll',toField='set_rotation',toNode='SubRoll'),
    ROUTE(fromField='fraction_changed',fromNode='BuoyanceClock',toField='set_fraction',toNode='ShipBuoyanceHeight'),
    ROUTE(fromField='value_changed',fromNode='ShipBuoyanceHeight',toField='set_translation',toNode='ShipBuoyance'),
    ROUTE(fromField='fraction_changed',fromNode='BuoyanceClock',toField='set_fraction',toNode='SubBuoyanceHeigth'),
    ROUTE(fromField='value_changed',fromNode='SubBuoyanceHeigth',toField='set_translation',toNode='ShipBuoyance'),
    ROUTE(fromField='fraction_changed',fromNode='ShipClock',toField='set_fraction',toNode='ShipBuoyanceHeight'),
    ROUTE(fromField='value_changed',fromNode='ShipBuoyanceHeight',toField='set_translation',toNode='ShipVelocity')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MoveSeaByExtrusion14.py")
