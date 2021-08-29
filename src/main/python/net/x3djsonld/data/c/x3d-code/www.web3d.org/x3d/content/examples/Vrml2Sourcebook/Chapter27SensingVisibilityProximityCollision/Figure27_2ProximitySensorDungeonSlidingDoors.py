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
    meta(content='Figure27_2ProximitySensorDungeonSlidingDoors.x3d',name='title'),
    meta(content='Figure 27.2, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch27/27fig02.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='26 October 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='A dungeon door that slides open when the ProximitySensor detects the viewer close enough. Later the doors close when the viewer moves out of range from the ProximitySensor.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter27SensingVisibilityProximityCollision/Figure27_2ProximitySensorDungeonSlidingDoors.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Now you see doors closed, because they are far away',fieldOfView=1.05,position=(0,2,10)),
    Viewpoint(description='Now you see doors opened, because you are close',fieldOfView=1.05,position=(0,2,-1)),
    NavigationInfo(avatarSize=[0.5,1.6,0.5],headlight=False,speed=2,type=["WALK","EXAMINE","ANY"]),
    Group(
      children=[
      LOD(range=[20],
        children=[
        Inline(DEF='DungeonRoom',url=["../Chapter25LevelOfDetail/Figure25_08DungeonRoom.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_08DungeonRoom.x3d","../Chapter25LevelOfDetail/Figure25_08DungeonRoom.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_08DungeonRoom.wrl"]),
        WorldInfo(info=["null node"])]),
      Transform(translation=(0,0,-10),
        children=[
        LOD(range=[20],
          children=[
          Inline(USE='DungeonRoom'),
          WorldInfo(info=["null node"])])]),
      Transform(translation=(0,0,-5),
        children=[
        Inline(url=["../Chapter25LevelOfDetail/Figure25_10DungeonWallWithDoorway.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_10DungeonWallWithDoorway.x3d","../Chapter25LevelOfDetail/Figure25_10DungeonWallWithDoorway.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_10DungeonWallWithDoorway.wrl"])]),
      Transform(rotation=(0,1,0,1.57),scale=(1,1,2),translation=(0,0,-15),
        children=[
        Inline(url=["../Chapter25LevelOfDetail/Figure25_07DungeonRoomWall.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_07DungeonRoomWall.x3d","../Chapter25LevelOfDetail/Figure25_07DungeonRoomWall.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_07DungeonRoomWall.wrl"])]),
      Transform(translation=(0,0,-4.95),
        children=[
        Transform(DEF='LeftDoor',
          children=[
          Transform(translation=(-0.75,0,0),
            children=[
            Inline(DEF='Door',url=["../Chapter25LevelOfDetail/Figure25_11DungeonDoor.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_11DungeonDoor.x3d","../Chapter25LevelOfDetail/Figure25_11DungeonDoor.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_11DungeonDoor.wrl"])])]),
        Transform(DEF='RightDoor',
          children=[
          Transform(translation=(0.75,0,0),
            children=[
            Inline(USE='Door')])]),
        ProximitySensor(DEF='DoorSense',center=(0,1.75,0),size=(6,3.5,8))]),
      Sound(maxBack=60,maxFront=60,minBack=20,minFront=20,
        source=AudioClip(DEF='OpenSound',description='clunk!',url=["clunk1.wav","../Chapter27SensingVisibilityProximityCollision/clunk1.wav","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter27SensingVisibilityProximityCollision/clunk1.wav"])),
      Sound(maxBack=60,maxFront=60,minBack=20,minFront=20,
        source=AudioClip(DEF='CloseSound',description='clunk!',url=["clunk1.wav","../Chapter27SensingVisibilityProximityCollision/clunk1.wav","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter27SensingVisibilityProximityCollision/clunk1.wav"])),
      TimeSensor(DEF='OpenClock',cycleInterval=0.5),
      TimeSensor(DEF='CloseClock'),
      PositionInterpolator(DEF='LeftOpen',key=[0,1],keyValue=[(0,0,0),(-1.3,0,0)]),
      PositionInterpolator(DEF='LeftClose',key=[0,1],keyValue=[(-1.3,0,0),(0,0,0)]),
      PositionInterpolator(DEF='RightOpen',key=[0,1],keyValue=[(0,0,0),(1.3,0,0)]),
      PositionInterpolator(DEF='RightClose',key=[0,1],keyValue=[(1.3,0,0),(0,0,0)])]),
    #  open door 
    ROUTE(fromField='enterTime',fromNode='DoorSense',toField='set_startTime',toNode='OpenSound'),
    ROUTE(fromField='exitTime',fromNode='DoorSense',toField='set_stopTime',toNode='OpenSound'),
    ROUTE(fromField='enterTime',fromNode='DoorSense',toField='set_startTime',toNode='OpenClock'),
    ROUTE(fromField='exitTime',fromNode='DoorSense',toField='set_stopTime',toNode='OpenClock'),
    #  close door 
    ROUTE(fromField='exitTime',fromNode='DoorSense',toField='set_startTime',toNode='CloseSound'),
    ROUTE(fromField='enterTime',fromNode='DoorSense',toField='set_stopTime',toNode='CloseSound'),
    ROUTE(fromField='exitTime',fromNode='DoorSense',toField='set_startTime',toNode='CloseClock'),
    ROUTE(fromField='enterTime',fromNode='DoorSense',toField='set_stopTime',toNode='CloseClock'),
    #  door timers 
    ROUTE(fromField='fraction_changed',fromNode='OpenClock',toField='set_fraction',toNode='LeftOpen'),
    ROUTE(fromField='fraction_changed',fromNode='OpenClock',toField='set_fraction',toNode='RightOpen'),
    ROUTE(fromField='fraction_changed',fromNode='CloseClock',toField='set_fraction',toNode='LeftClose'),
    ROUTE(fromField='fraction_changed',fromNode='CloseClock',toField='set_fraction',toNode='RightClose'),
    #  door translations 
    ROUTE(fromField='value_changed',fromNode='LeftOpen',toField='set_translation',toNode='LeftDoor'),
    ROUTE(fromField='value_changed',fromNode='RightOpen',toField='set_translation',toNode='RightDoor'),
    ROUTE(fromField='value_changed',fromNode='LeftClose',toField='set_translation',toNode='LeftDoor'),
    ROUTE(fromField='value_changed',fromNode='RightClose',toField='set_translation',toNode='RightDoor')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure27_2ProximitySensorDungeonSlidingDoors.py")
