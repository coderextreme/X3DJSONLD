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
    meta(content='PongGame.x3d',name='title'),
    meta(content='12 Second Simulation Of The Game Pong',name='description'),
    meta(content='Nicholas Hittner',name='creator'),
    meta(content='19 July 2021',name='created'),
    meta(content='20 July 2021',name='modified'),
    meta(content='pong.wav',name='Sound'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Animation/PongGame.x3d',name='identifier'),
    meta(content='X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=["PongSimulation"],title='Pong'),
    Viewpoint(description='Pong'),
    TimeSensor(DEF='SceneClock',cycleInterval=12),
    Transform(DEF='SquareBall',translation=(.5,.5,0),
      children=[
      Shape(
        geometry=Rectangle2D(size=(.3,.3)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.9,0.9,0.9))))]),
    PositionInterpolator(DEF='SquareBallPosition',key=[0,0.1667,0.25,0.5,0.6667,0.7,1],keyValue=[(0.5,0.5,1),(2.5,2,1),(1.5,2.5,1),(-2.5,0,1),(2,-2.5,1),(2.5,-2,1),(-2.8,2.3,1)]),
    ROUTE(fromField='value_changed',fromNode='SquareBallPosition',toField='set_translation',toNode='SquareBall'),
    ROUTE(fromField='fraction_changed',fromNode='SceneClock',toField='set_fraction',toNode='SquareBallPosition'),
    Transform(DEF='RightPaddle',translation=(2.8,.5,0),
      children=[
      Shape(
        geometry=Rectangle2D(size=(.2,1.2)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.9,0.9,0.9))))]),
    PositionInterpolator(DEF='RightPaddlePosition',key=[0,0.1667,0.3333,0.5,0.6667,0.8333,1],keyValue=[(2.8,0.5,1),(2.8,2,1),(2.8,0,1),(2.8,1,1),(2.8,-2,1),(2.8,-2,1),(2.8,0,1)]),
    ROUTE(fromField='value_changed',fromNode='RightPaddlePosition',toField='set_translation',toNode='RightPaddle'),
    ROUTE(fromField='fraction_changed',fromNode='SceneClock',toField='set_fraction',toNode='RightPaddlePosition'),
    Transform(DEF='LeftPaddle',translation=(-2.8,-.5,0),
      children=[
      Shape(
        geometry=Rectangle2D(size=(.2,1.2)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.9,0.9,0.9))))]),
    PositionInterpolator(DEF='LeftPaddlePosition',key=[0,0.1667,0.3333,0.5,0.6667,0.8333,1],keyValue=[(-2.8,0.5,1),(-2.8,1,1),(-2.8,-1,1),(-2.8,0,1),(-2.8,-1,1),(-2.8,-2,1),(-2.8,1,1)]),
    ROUTE(fromField='value_changed',fromNode='LeftPaddlePosition',toField='set_translation',toNode='LeftPaddle'),
    ROUTE(fromField='fraction_changed',fromNode='SceneClock',toField='set_fraction',toNode='LeftPaddlePosition'),
    Transform(DEF='TriggerBackground',translation=(0,0,-8),
      children=[
      TouchSensor(DEF='GameTouched',description='touch to activate'),
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,0))),
        geometry=Rectangle2D(size=(14,14)))]),
    TimeTrigger(DEF='GameTrigger'),
    ROUTE(fromField='isActive',fromNode='GameTouched',toField='set_boolean',toNode='GameTrigger'),
    ROUTE(fromField='triggerTime',fromNode='GameTrigger',toField='startTime',toNode='SceneClock'),
    Transform(translation=(0,0,-1),
      children=[
      Shape(DEF='MidLine',
        geometry=IndexedLineSet(coordIndex=[0,1,0,1],
          coord=Coordinate(point=[(0,3.72,-1),(0,-3.72,-1)])),
        appearance=Appearance(
          material=Material(emissiveColor=(1,1,1)),
          lineProperties=LineProperties(DEF='DashedLine',linetype=2,linewidthScaleFactor=3)))]),
    Transform(
      children=[
      Shape(DEF='TopLine',
        geometry=IndexedLineSet(coordIndex=[0,1,0,1],
          coord=Coordinate(point=[(-3.5,3.4,-1),(3.5,3.4,-1)])),
        appearance=Appearance(
          material=Material(emissiveColor=(1,1,1)),
          lineProperties=LineProperties(linewidthScaleFactor=5)))]),
    Transform(
      children=[
      Shape(DEF='BottomLine',
        geometry=IndexedLineSet(coordIndex=[0,1,0,1],
          coord=Coordinate(point=[(-3.5,-3.4,-1),(3.5,-3.4,-1)])),
        appearance=Appearance(
          material=Material(emissiveColor=(1,1,1)),
          lineProperties=LineProperties(linewidthScaleFactor=5)))]),
    Transform(DEF='LeftScore',translation=(-.7,3,0),
      children=[
      Shape(
        geometry=Text(string=["0"],
          fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],style_='BOLD')),
        appearance=Appearance(
          material=Material(diffuseColor=(0.9,0.9,0.9))))]),
    Transform(DEF='RightScore',translation=(.7,3,0),
      children=[
      IntegerSequencer(DEF='ScoreSequencer',key=[0.01,0.99],keyValue=[0,1]),
      Switch(DEF='GoalScored',whichChoice=0,
        children=[
        Shape(DEF='Child0',
          geometry=Text(string=["0"],
            fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],style_='BOLD')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,0.9,0.9)))),
        Shape(DEF='Child1',
          geometry=Text(string=["1"],
            fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],style_='BOLD')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,0.9,0.9))))])]),
    ROUTE(fromField='fraction_changed',fromNode='SceneClock',toField='set_fraction',toNode='ScoreSequencer'),
    ROUTE(fromField='value_changed',fromNode='ScoreSequencer',toField='whichChoice',toNode='GoalScored'),
    Sound(direction=(0,-0.19612,-0.98058),location=(0,1,0),maxBack=100,maxFront=100,minBack=20,minFront=20,priority=1,spatialize=False,
      source=AudioClip(DEF='PongAudio',description='AudioClip',stopTime=12,url=["pong.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Animation/pong.wav"])),
    ROUTE(fromField='startTime',fromNode='SceneClock',toField='startTime',toNode='PongAudio')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PongGame.py")
