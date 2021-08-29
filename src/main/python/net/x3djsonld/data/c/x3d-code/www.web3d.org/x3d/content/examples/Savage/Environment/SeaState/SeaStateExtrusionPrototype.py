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
    meta(content='SeaStateExtrusionPrototype.x3d',name='title'),
    meta(content='Marcus V. da S. Simoes',name='creator'),
    meta(content='11 January 2001',name='created'),
    meta(content='13 February 2016',name='modified'),
    meta(content='Sea state rendering of ocean wave motion: prototype for reproducing sea state surface in other scenes.',name='description'),
    meta(content='https://savage.nps.edu/Savage/Environment/SeaState/SeaStateExtrusionPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ProtoDeclare(name='SeaStateExtrusion',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='outputOnly',name='shipPitch',type='SFRotation'),
        field(accessType='outputOnly',name='shipRoll',type='SFRotation')]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          #  AnimationClock 
          #  ================================================= 
          children=[
          Group(DEF='TimeSensors',
            children=[
            TimeSensor(DEF='WaveClock',cycleInterval=15,loop=True),
            TimeSensor(DEF='PitchandRollClock',cycleInterval=10,loop=True)]),
          #  ================================================= 
          #  Interpolators 
          #  ================================================= 
          #  MovingTheShip 
          Group(DEF='OrientationInterpolators',
            children=[
            OrientationInterpolator(DEF='PitchInterpolator',key=[0.0,0.5,1.0],keyValue=[(0,0,1,-0.05),(0,0,1,0.0),(0,0,1,-0.05)],
              IS=IS(
                connect=[
                connect(nodeField='value_changed',protoField='shipPitch')])),
            OrientationInterpolator(DEF='RollInterpolator',key=[0.0,0.5,1.0],keyValue=[(1,0,0,-0.05),(1,0,0,0.0),(1,0,0,-0.05)],
              IS=IS(
                connect=[
                connect(nodeField='value_changed',protoField='shipRoll')]))]),
          #  ================================================= 
          #  MovingTheSea 
          Group(DEF='CoordinateInterpolator',
            children=[
            CoordinateInterpolator(DEF='Ondulation',key=[0.0,0.25,0.50,0.75,1.0],keyValue=[(-4.100,0.0,0),(-4.0,0.0,0),(-3.529,0.674,0),(-3.059,0.996,0),(-2.588,0.798,0),(-2.118,0.184,0),(-1.647,-0.526,0),(-1.176,-0.962,0),(-0.706,-0.895,0),(-0.235,-0.361,0),(0.235,0.361,0),(0.706,0.895,0),(1.176,0.962,0),(1.647,0.526,0),(2.118,-0.184,0),(2.588,-0.798,0),(3.059,-0.996,0),(3.529,-0.674,0),(4.0,0.0,0),(-4.100,-1.0,0),(-4.0,-1.0,0),(-3.529,-0.739,0),(-3.059,-0.092,0),(-2.588,0.603,0),(-2.118,0.983,0),(-1.647,0.850,0),(-1.176,0.274,0),(-0.706,-0.446,0),(-0.235,-0.932,0),(0.235,-0.932,0),(0.706,-0.446,0),(1.176,0.274,0),(1.647,0.850,0),(2.118,0.983,0),(2.588,0.603,0),(3.059,-0.092,0),(3.529,-0.739,0),(4.0,-1.0,0),(-4.100,0.0,0),(-4.0,0.0,0),(-3.529,-0.674,0),(-3.059,-0.996,0),(-2.588,-0.798,0),(-2.118,-0.184,0),(-1.647,0.526,0),(-1.176,0.962,0),(-0.706,0.895,0),(-0.235,0.361,0),(0.235,-0.361,0),(0.706,-0.895,0),(1.176,-0.962,0),(1.647,-0.526,0),(2.118,0.184,0),(2.588,0.798,0),(3.059,0.996,0),(3.529,0.674,0),(4.0,0.0,0),(-4.100,1.0,0),(-4.0,1.0,0),(-3.529,0.739,0),(-3.059,0.092,0),(-2.588,-0.603,0),(-2.118,-0.983,0),(-1.647,-0.850,0),(-1.176,-0.274,0),(-0.706,0.446,0),(-0.235,0.932,0),(0.235,0.932,0),(0.706,0.446,0),(1.176,-0.274,0),(1.647,-0.850,0),(2.118,-0.983,0),(2.588,-0.603,0),(3.059,0.092,0),(3.529,0.739,0),(4.0,1.0,0),(-4.100,0.0,0),(-4.0,0.0,0),(-3.529,0.674,0),(-3.059,0.996,0),(-2.588,0.798,0),(-2.118,0.184,0),(-1.647,-0.526,0),(-1.176,-0.962,0),(-0.706,-0.895,0),(-0.235,-0.361,0),(0.235,0.361,0),(0.706,0.895,0),(1.176,0.962,0),(1.647,0.526,0),(2.118,-0.184,0),(2.588,-0.798,0),(3.059,-0.996,0),(3.529,-0.674,0),(4.0,0.0,0)])]),
          #  ================================================= 
          #  SeaLevelChoiceGroup 
          Switch(DEF='SeaStateNumber',whichChoice=0,
            children=[
            Group(DEF='SeaState_1',
              children=[
              Transform(
                children=[
                Transform(DEF='TheSea',
                  #  BasicWave 
                  children=[
                  Transform(DEF='Basic',scale=(250,1,10),
                    children=[
                    Shape(DEF='BasicWave',
                      appearance=Appearance(DEF='SeaColor',
                        texture=ImageTexture(url=["../../Environment/SeaState/pool.jpg","https://savage.nps.edu/Savage/Environment/SeaState/pool.jpg"]),
                        material=Material(diffuseColor=(0,0,0),transparency=0.3)),
                      geometry=Extrusion(DEF='BasicExtrusion',beginCap=False,convex=False,creaseAngle=0.01,crossSection=[(0,0),(0,200),(0,0)],endCap=False,solid=False,spine=[(0.0,0.0,0.0000),(1.0,0.0204,1.0000),(2.0,0.0161,2.0000),(3.0,-0.0218,3.0000),(4.0,-0.0791,4.0000),(5.0,-0.1237,5.0000),(6.0,-0.1224,6.0000),(7.0,-0.0598,7.0000),(8.0,0.0503,8.0000),(9.0,0.1661,9.0000),(10.0,0.2348,10.0000),(11.0,0.2163,11.0000),(12.0,0.1041,12.0000),(13.0,-0.0672,13.0000),(14.0,-0.2326,14.0000),(15.0,-0.3224,15.0000),(16.0,-0.2920,16.0000),(17.0,-0.1434,17.0000),(18.0,0.0723,18.0000),(19.0,0.2728,19.0000),(20.0,0.3776,20.0000),(21.0,0.3408,21.0000),(22.0,0.1718,22.0000),(23.0,-0.0670,23.0000),(24.0,-0.2840,24.0000),(25.0,-0.3951,25.0000),(26.0,-0.3568,26.0000),(27.0,-0.1846,27.0000),(28.0,0.0541,28.0000),(29.0,0.2668,29.0000),(30.0,0.3734,30.0000),(31.0,0.3373,31.0000),(32.0,0.1782,32.0000),(33.0,-0.0373,33.0000),(34.0,-0.2246,34.0000),(35.0,-0.3153,35.0000),(36.0,-0.2831,36.0000),(37.0,-0.1513,37.0000),(38.0,0.0205,38.0000),(39.0,0.1632,39.0000),(40.0,0.2269,40.0000),(41.0,0.1990,41.0000),(42.0,0.1048,42.0000),(43.0,-0.0074,43.0000),(44.0,-0.0903,44.0000),(45.0,-0.1177,45.0000),(46.0,-0.0928,46.0000),(47.0,-0.0423,47.0000),(48.0,0.0006,48.0000),(49.0,0.0142,49.0000),(50.0,-0.0012,50.0000),(51.0,-0.0251,51.0000),(52.0,-0.0307,52.0000),(53.0,-0.0015,53.0000),(54.0,0.0571,54.0000),(55.0,0.1175,55.0000),(56.0,0.1429,56.0000),(57.0,0.1069,57.0000),(58.0,0.0098,58.0000),(59.0,-0.1166,59.0000),(60.0,-0.2197,60.0000),(61.0,-0.2485,61.0000),(62.0,-0.1780,62.0000),(63.0,-0.0240,63.0000),(64.0,0.1590,64.0000),(65.0,0.2978,65.0000),(66.0,0.3309,66.0000),(67.0,0.2357,67.0000),(68.0,0.0411,68.0000),(69.0,-0.1814,69.0000),(70.0,-0.3446,70.0000),(71.0,-0.3815,71.0000),(72.0,-0.2729,72.0000),(73.0,-0.0574,73.0000),(74.0,0.1834,74.0000),(75.0,0.3563,75.0000),(76.0,0.3946,76.0000),(77.0,0.2841,77.0000),(78.0,0.0689,78.0000),(79.0,-0.1668,79.0000),(80.0,-0.3327,80.0000),(81.0,-0.3686,81.0000),(82.0,-0.2664,82.0000),(83.0,-0.0721,83.0000),(84.0,0.1355,84.0000),(85.0,0.2774,85.0000),(86.0,0.3057,86.0000),(87.0,0.2201,87.0000),(88.0,0.0645,88.0000),(89.0,-0.0946,89.0000),(90.0,-0.1969,90.0000),(91.0,-0.2121,91.0000),(92.0,-0.1485,92.0000),(93.0,-0.0450,93.0000),(94.0,0.0499,94.0000),(95.0,0.1004,95.0000),(96.0,0.0972,96.0000),(97.0,0.0580,97.0000),(98.0,0.0142,98.0000),(99.0,-0.0071,99.0000),(100.0,0.0020,100.0)]))])])])]),
            Group(DEF='SeaState_2',
              children=[
              Transform(scale=(1,5,1),
                children=[
                Group(USE='SeaState_1')])]),
            Group(DEF='SeaState_3',
              children=[
              Transform(scale=(1,8,1),
                children=[
                Group(USE='SeaState_1')])]),
            Group(DEF='SeaState_4',
              children=[
              Transform(scale=(1,12,1),
                children=[
                Group(USE='SeaState_1')])]),
            Group(DEF='SeaState_5',
              children=[
              Transform(scale=(1,15,1),
                children=[
                Group(USE='SeaState_1')])]),
            Group(DEF='SeaState_6',
              children=[
              Transform(scale=(1,20,1),
                children=[
                Group(USE='SeaState_1')])]),
            Group(DEF='SeaState_7',
              children=[
              Transform(scale=(1,25,1),
                children=[
                Group(USE='SeaState_1')])]),
            Group(DEF='SeaState_8',
              children=[
              Transform(scale=(1,32,1),
                children=[
                Group(USE='SeaState_1')])])]),
          #  ================================================= 
          #  Sea State Control Panel 
          Group(DEF='SeaStateAndDirection',
            children=[
            Transform(translation=(0,100,4000),
              children=[
              Viewpoint(description='Sea State Control Panel',position=(-2,0,6)),
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
                      TouchSensor(DEF='TouchSensorSeaState1',description='click to select sea state'),
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
                      TouchSensor(DEF='TouchSensorSeaState2',description='click to select sea state'),
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
                      TouchSensor(DEF='TouchSensorSeaState3',description='click to select sea state'),
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
                      TouchSensor(DEF='TouchSensorSeaState4',description='click to select sea state'),
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
                      TouchSensor(DEF='TouchSensorSeaState5',description='click to select sea state')])]),
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
                      TouchSensor(DEF='TouchSensorSeaState6',description='click to select sea state')])]),
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
                      TouchSensor(DEF='TouchSensorSeaState7',description='click to select sea state')])]),
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
                      TouchSensor(DEF='TouchSensorSeaState8',description='click to select sea state')])]),
                  Transform(translation=(0,0,-3),
                    children=[
                    Shape(
                      geometry=Box(size=(2,6.5,0.2)),
                      appearance=Appearance(
                        material=Material(diffuseColor=(.3,.3,.3)),
                        texture=ImageTexture(),))])])])])]),
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
              field(accessType='outputOnly',name='SeaStateValue',type='SFInt32')])])]),
        #  ================================================= 
        #  RoutesToChooseSST 
        ROUTE(fromField='isActive',fromNode='TouchSensorSeaState1',toField='SeaStateChoice1',toNode='SeaStateChoiceToValue'),
        ROUTE(fromField='isActive',fromNode='TouchSensorSeaState2',toField='SeaStateChoice2',toNode='SeaStateChoiceToValue'),
        ROUTE(fromField='isActive',fromNode='TouchSensorSeaState3',toField='SeaStateChoice3',toNode='SeaStateChoiceToValue'),
        ROUTE(fromField='isActive',fromNode='TouchSensorSeaState4',toField='SeaStateChoice4',toNode='SeaStateChoiceToValue'),
        ROUTE(fromField='isActive',fromNode='TouchSensorSeaState5',toField='SeaStateChoice5',toNode='SeaStateChoiceToValue'),
        ROUTE(fromField='isActive',fromNode='TouchSensorSeaState6',toField='SeaStateChoice6',toNode='SeaStateChoiceToValue'),
        ROUTE(fromField='isActive',fromNode='TouchSensorSeaState7',toField='SeaStateChoice7',toNode='SeaStateChoiceToValue'),
        ROUTE(fromField='isActive',fromNode='TouchSensorSeaState8',toField='SeaStateChoice8',toNode='SeaStateChoiceToValue'),
        ROUTE(fromField='SeaStateValue',fromNode='SeaStateChoiceToValue',toField='whichChoice',toNode='SeaStateNumber'),
        #  ================================================= 
        #  RoutesToMoveTheSea 
        ROUTE(fromField='fraction_changed',fromNode='WaveClock',toField='set_fraction',toNode='Ondulation'),
        ROUTE(fromField='fraction_changed',fromNode='PitchandRollClock',toField='set_fraction',toNode='PitchInterpolator'),
        ROUTE(fromField='fraction_changed',fromNode='PitchandRollClock',toField='set_fraction',toNode='RollInterpolator'),
        ROUTE(fromField='value_changed',fromNode='Ondulation',toField='set_spine',toNode='BasicExtrusion')])),
    #  ================================================= 
    NavigationInfo(speed=100),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(0.6,0.6,0.6)]),
    Anchor(description='Sea State Extrusion Example',parameter=["target=_blank"],url=["SeaStateExtrusionExample.x3d","https://savage.nps.edu/Savage/Environment/SeaState/SeaStateExtrusionExample.x3d","SeaStateExtrusionExample.wrl","https://savage.nps.edu/Savage/Environment/SeaState/SeaStateExtrusionExample.wrl"],
      children=[
      Shape(
        geometry=Text(string=["SeaStateExtrusionPrototype","is a prototype definition file","","To see an example scene","click on this text and view","SeaStateExtrusionExample"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SeaStateExtrusionPrototype.py")
