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
    meta(content='Figure25_12DungeonRoomsWithSlidingDoors.x3d',name='title'),
    meta(content='Figure 25.12, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch25/25fig12.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='4 October 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Two dungeon rooms controlled by LOD nodes and separated by a wall and a pair of sliding doors.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_12DungeonRoomsWithSlidingDoors.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Click door for next dungeon room',fieldOfView=1.05,position=(0,2,10)),
    NavigationInfo(avatarSize=[0.5,1.6,0.5],headlight=False,speed=2,type=["WALK","EXAMINE","ANY"]),
    Group(
      children=[
      LOD(range=[20],
        children=[
        Inline(DEF='DungeonRoom',url=["Figure25_08DungeonRoom.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_08DungeonRoom.x3d","Figure25_08DungeonRoom.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_08DungeonRoom.wrl"]),
        WorldInfo(info=["null node"])]),
      Transform(translation=(0,0,-10),
        children=[
        LOD(range=[20],
          children=[
          Inline(USE='DungeonRoom'),
          WorldInfo(info=["null node"])])]),
      Transform(translation=(0,0,-5),
        children=[
        Inline(url=["Figure25_10DungeonWallWithDoorway.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_10DungeonWallWithDoorway.x3d","Figure25_10DungeonWallWithDoorway.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_10DungeonWallWithDoorway.wrl"])]),
      Transform(rotation=(0,1,0,1.57),scale=(1,1,2),translation=(0,0,-15),
        children=[
        Inline(url=["Figure25_07DungeonRoomWall.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_07DungeonRoomWall.x3d","Figure25_07DungeonRoomWall.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_07DungeonRoomWall.wrl"])]),
      Transform(translation=(0,0,-4.95),
        children=[
        Transform(DEF='LeftDoor',
          children=[
          Transform(translation=(-0.75,0,0),
            children=[
            Inline(DEF='Door',url=["Figure25_11DungeonDoor.x3d","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_11DungeonDoor.x3d","Figure25_11DungeonDoor.wrl","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter25LevelOfDetail/Figure25_11DungeonDoor.wrl"])])]),
        Transform(DEF='RightDoor',
          children=[
          Transform(translation=(0.75,0,0),
            children=[
            Inline(USE='Door')])]),
        TouchSensor(DEF='TouchDoor',description='touch to open doors for 10 seconds')]),
      TimeSensor(DEF='Clock',cycleInterval=10),
      PositionInterpolator(DEF='LeftOpen',key=[0,0.05,0.8,1],keyValue=[(0,0,0),(-1.3,0,0),(-1.3,0,0),(0,0,0)]),
      PositionInterpolator(DEF='RightOpen',key=[0,0.05,0.8,1],keyValue=[(0,0,0),(1.3,0,0),(1.3,0,0),(0,0,0)])]),
    ROUTE(fromField='touchTime',fromNode='TouchDoor',toField='set_startTime',toNode='Clock'),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='LeftOpen'),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='RightOpen'),
    ROUTE(fromField='value_changed',fromNode='LeftOpen',toField='set_translation',toNode='LeftDoor'),
    ROUTE(fromField='value_changed',fromNode='RightOpen',toField='set_translation',toNode='RightDoor')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure25_12DungeonRoomsWithSlidingDoors.py")
