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
    meta(content='SeatsLevelOne.x3d',name='title'),
    meta(content='Viewer seats, level one',name='description'),
    meta(content='LT Christos Kalogrias - Hellenic Navy',name='creator'),
    meta(content='25 July 2003',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='http://www.fussballtempel.net/uefa/Gre/Nikos_Goumas.jpg',name='reference'),
    meta(content='http://www.wsoccer.com/stadium/greece/aek_athens/',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Buildings/SoccerStadium/SeatsLevelOne.x3d',name='identifier'),
    meta(content='http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.0,1.57],groundColor=[(0.5,0.3,0.3),(0.5,0.3,0.3),(0.5,0.3,0.3)],skyAngle=[1.309,1.572],skyColor=[(0,0.5,0.7),(0,0.5,1),(1,1,1)]),
    Transform(rotation=(0,1,0,-1.57),translation=(-60.5,25.7,-24),
      children=[
      Viewpoint(description='Cabin View',orientation=(1,0,0,-0.5),position=(0.2,0,-0.5))]),
    Transform(DEF='Seats',rotation=(1,0,0,-1.57),translation=(62,0,55),
      children=[
      Transform(DEF='MostSeats',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.2,0.2))),
          geometry=Extrusion(crossSection=[(0,0),(-22,0),(-22,2),(-21,2),(-21,3),(-20,3),(-20,4),(-19,4),(-19,5),(-18,5),(-18,6),(-17,6),(-17,7),(-16,7),(-16,8),(-15,8),(-15,9),(-14,9),(-14,10),(-13,10),(-13,11),(-12,11),(-12,12),(-11,12),(-11,13),(-10,13),(-10,14),(-9,14),(-9,15),(-8,15),(-8,16),(-7,16),(-7,17),(-6,17),(-6,18),(-5,18),(-5,19),(-4,19),(-4,20),(-3,20),(-3,21),(-2,21),(-2,22),(-1,22),(-1,23),(0,23),(0,0)],spine=[(-12,-25,0),(0,0,0),(0,110,0),(-12,135,0),(-31,145,0),(-62,145,0),(-87,145,0),(-112,135,0),(-124,110,0),(-124,0,0),(-112,-25,0)]))])]),
    Transform(DEF='RightSeats',
      children=[
      Transform(DEF='OneLevColmn',
        children=[
        Transform(DEF='Gate',translation=(-29.2,1.1,86.5),
          children=[
          Transform(DEF='tenXtwentySeats',rotation=(0,1,0,1.57),translation=(70.5,2.5,-35),
            children=[
            Transform(DEF='tenXtenSeats',translation=(0,-6,12),
              children=[
              Transform(rotation=(1,0,0,0.78),translation=(6,10,-8),
                children=[
                Transform(DEF='Fans',scale=(1.6,2.8,1),translation=(0,1,0),
                  children=[
                  Group(
                    children=[
                    Transform(translation=(-3.7,-3,-1),
                      children=[
                      Shape(
                        geometry=IndexedFaceSet(DEF='Flag',convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,0],solid=False,
                          coord=Coordinate(DEF='FlagCoor',point=[(0.0,0.0,0.0),(0.5,0.0,0.0),(1.0,0.0,0.0),(1.5,0.0,0.0),(2.0,0.0,0.0),(2.5,0.0,0.0),(3.0,0.0,0.0),(3.5,0.0,0.0),(4.0,0.0,0.0),(4.5,0.0,0.0),(5.0,0.0,0.0),(5.5,0.0,0.0),(6.0,0.0,0.0),(6.5,0.0,0.0),(7.0,0.0,0.0),(7.5,0.0,0.0),(7.5,0.5,0.0),(7.5,1.0,0.0),(7.5,1.5,0.0),(7.5,2.0,0.0),(7.5,2.5,0.0),(7.5,3.0,0.0),(7.5,3.5,0.0),(7.5,4.0,0.0),(7.5,4.5,0.0),(7.5,5.0,0.0),(7.0,5.0,0.0),(6.5,5.0,0.0),(6.0,5.0,0.0),(5.5,5.0,0.0),(5.0,5.0,0.0),(4.5,5.0,0.0),(4.0,5.0,0.0),(3.5,5.0,0.0),(3.0,5.0,0.0),(2.5,5.0,0.0),(2.0,5.0,0.0),(1.5,5.0,0.0),(1.0,5.0,0.0),(0.5,5.0,0.0),(0.0,5.0,0.0),(0.0,4.5,0.0),(0.0,4.0,0.0),(0.0,3.5,0.0),(0.0,3.0,0.0),(0.0,2.5,0.0),(0.0,2.0,0.0),(0.0,1.5,0.0),(0.0,1.0,0.0),(0.0,0.5,0.0)])),
                        appearance=Appearance(
                          material=Material(diffuseColor=(0.8,0.2,0.2),shininess=0.8),
                          texture=ImageTexture(url=["./aek6.jpg","https://savage.nps.edu/Savage/Buildings/SoccerStadium/aek6.jpg"]),
                          textureTransform=TextureTransform(translation=(0.0,0.01)))),
                      TimeSensor(DEF='timer',cycleInterval=4.0,loop=True),
                      CoordinateInterpolator(DEF='MoveFlag',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,0.0,0.00),(0.5,0.0,0.087),(1.0,0.0,.100),(1.5,0.0,0.087),(2.0,0.0,0.00),(2.5,0.0,-0.087),(3.0,0.0,-.100),(3.5,0.0,-0.087),(4.0,0.0,0.0),(4.5,0.0,0.087),(5.0,0.0,.10),(5.5,0.0,0.087),(6.0,0.0,0.0),(6.5,0.0,-0.087),(7.0,0.0,-.10),(7.5,0.0,-0.087),(7.5,0.5,-0.087),(7.5,1.0,-0.087),(7.5,1.5,-0.087),(7.5,2.0,-0.087),(7.5,2.5,-0.087),(7.5,3.0,-0.087),(7.5,3.5,-0.087),(7.5,4.0,-0.087),(7.5,4.5,-0.087),(7.5,5.0,-0.087),(7.0,5.0,-.10),(6.5,5.0,-0.087),(6.0,5.0,0.0),(5.5,5.0,0.087),(5.0,5.0,.10),(4.5,5.0,0.087),(4.0,5.0,0.0),(3.5,5.0,-0.087),(3.0,5.0,-.10),(2.5,5.0,-0.087),(2.0,5.0,0.0),(1.5,5.0,0.087),(1.0,5.0,.10),(0.5,5.0,0.087),(0.0,5.0,0.0),(0.0,4.5,0.0),(0.0,4.0,0.0),(0.0,3.5,0.0),(0.0,3.0,0.0),(0.0,2.5,0.0),(0.0,2.0,0.0),(0.0,1.5,0.0),(0.0,1.0,0.0),(0.0,0.5,0.0),(0.0,0.0,0.0),(0.0,0.0,0.0),(0.5,0.0,-0.087),(1.0,0.0,-.10),(1.5,0.0,-0.087),(2.0,0.0,0.0),(2.5,0.0,0.087),(3.0,0.0,.10),(3.5,0.0,0.087),(4.0,0.0,0.0),(4.5,0.0,-0.087),(5.0,0.0,-.10),(5.5,0.0,-0.087),(6.0,0.0,0.0),(6.5,0.0,0.087),(7.0,0.0,.10),(7.5,0.0,0.087),(7.5,0.5,0.087),(7.5,1.0,0.087),(7.5,1.5,0.087),(7.5,2.0,0.087),(7.5,2.5,0.087),(7.5,3.0,0.087),(7.5,3.5,0.087),(7.5,4.0,0.087),(7.5,4.5,0.087),(7.5,5.0,0.087),(7.0,5.0,.10),(6.5,5.0,0.087),(6.0,5.0,0.0),(5.5,5.0,-0.087),(5.0,5.0,-.10),(4.5,5.0,-0.087),(4.0,5.0,0.0),(3.5,5.0,0.087),(3.0,5.0,.10),(2.5,5.0,0.087),(2.0,5.0,0.0),(1.5,5.0,-0.087),(1.0,5.0,-.10),(0.5,5.0,-0.087),(0.0,5.0,0.0),(0.0,4.5,0.0),(0.0,4.0,0.0),(0.0,3.5,0.0),(0.0,3.0,0.0),(0.0,2.5,0.0),(0.0,2.0,0.0),(0.0,1.5,0.0),(0.0,1.0,0.0),(0.0,0.5,0.0),(0.0,0.0,0.0),(0.0,0.0,0.0),(0.5,0.0,0.087),(1.0,0.0,.10),(1.5,0.0,0.087),(2.0,0.0,0.0),(2.5,0.0,-0.087),(3.0,0.0,-.10),(3.5,0.0,-0.087),(4.0,0.0,0.0),(4.5,0.0,0.087),(5.0,0.0,.10),(5.5,0.0,0.087),(6.0,0.0,0.0),(6.5,0.0,-0.087),(7.0,0.0,-.10),(7.5,0.0,-0.087),(7.5,0.5,-0.087),(7.5,1.0,-0.087),(7.5,1.5,-0.087),(7.5,2.0,-0.087),(7.5,2.5,-0.087),(7.5,3.0,-0.087),(7.5,3.5,-0.087),(7.5,4.0,-0.087),(7.5,4.5,-0.087),(7.5,5.0,-0.087),(7.0,5.0,-.10),(6.5,5.0,-0.087),(6.0,5.0,0.0),(5.5,5.0,0.087),(5.0,5.0,.10),(4.5,5.0,0.087),(4.0,5.0,0.0),(3.5,5.0,-0.087),(3.0,5.0,-.10),(2.5,5.0,-0.087),(2.0,5.0,0.0),(1.5,5.0,0.087),(1.0,5.0,.10),(0.5,5.0,0.087),(0.0,5.0,0.0),(0.0,4.5,0.0),(0.0,4.0,0.0),(0.0,3.5,0.0),(0.0,3.0,0.0),(0.0,2.5,0.0),(0.0,2.0,0.0),(0.0,1.5,0.0),(0.0,1.0,0.0),(0.0,0.5,0.0),(0.0,0.0,0.0),(0.0,0.0,0.0),(0.5,0.0,-0.087),(1.0,0.0,-.10),(1.5,0.0,-0.087),(2.0,0.0,0.0),(2.5,0.0,0.087),(3.0,0.0,.10),(3.5,0.0,0.087),(4.0,0.0,0.0),(4.5,0.0,-0.087),(5.0,0.0,-.10),(5.5,0.0,-0.087),(6.0,0.0,0.0),(6.5,0.0,0.087),(7.0,0.0,.10),(7.5,0.0,0.087),(7.5,0.5,0.087),(7.5,1.0,0.087),(7.5,1.5,0.087),(7.5,2.0,0.087),(7.5,2.5,0.087),(7.5,3.0,0.087),(7.5,3.5,0.087),(7.5,4.0,0.087),(7.5,4.5,0.087),(7.5,5.0,0.087),(7.0,5.0,.10),(6.5,5.0,0.087),(6.0,5.0,0.0),(5.5,5.0,-0.087),(5.0,5.0,-.10),(4.5,5.0,-0.087),(4.0,5.0,0.0),(3.5,5.0,0.087),(3.0,5.0,.10),(2.5,5.0,0.087),(2.0,5.0,0.0),(1.5,5.0,-0.087),(1.0,5.0,-1.0),(0.5,5.0,-0.087),(0.0,5.0,0.0),(0.0,4.5,0.0),(0.0,4.0,0.0),(0.0,3.5,0.0),(0.0,3.0,0.0),(0.0,2.5,0.0),(0.0,2.0,0.0),(0.0,1.5,0.0),(0.0,1.0,0.0),(0.0,0.5,0.0),(0.0,0.0,0.0),(0.0,0.0,0.0),(0.5,0.0,0.087),(1.0,0.0,.10),(1.5,0.0,0.087),(2.0,0.0,0.0),(2.5,0.0,-0.087),(3.0,0.0,-.10),(3.5,0.0,-0.087),(4.0,0.0,0.0),(4.5,0.0,0.087),(5.0,0.0,.10),(5.5,0.0,0.087),(6.0,0.0,0.0),(6.5,0.0,-0.087),(7.0,0.0,-.10),(7.5,0.0,-0.087),(7.5,0.5,-0.087),(7.5,1.0,-0.087),(7.5,1.5,-0.087),(7.5,2.0,-0.087),(7.5,2.5,-0.087),(7.5,3.0,-0.087),(7.5,3.5,-0.087),(7.5,4.0,-0.087),(7.5,4.5,-0.087),(7.5,5.0,-0.087),(7.0,5.0,-.10),(6.5,5.0,-0.087),(6.0,5.0,0.0),(5.5,5.0,0.087),(5.0,5.0,.10),(4.5,5.0,0.087),(4.0,5.0,0.0),(3.5,5.0,-0.087),(3.0,5.0,-.10),(2.5,5.0,-0.087),(2.0,5.0,0.0),(1.5,5.0,0.087),(1.0,5.0,.10),(0.5,5.0,0.087),(0.0,5.0,0.0),(0.0,4.5,0.0),(0.0,4.0,0.0),(0.0,3.5,0.0),(0.0,3.0,0.0),(0.0,2.5,0.0),(0.0,2.0,0.0),(0.0,1.5,0.0),(0.0,1.0,0.0),(0.0,0.5,0.0),(0.0,0.0,0.0)])])]),
                  ROUTE(fromField='fraction_changed',fromNode='timer',toField='set_fraction',toNode='MoveFlag'),
                  ROUTE(fromField='value_changed',fromNode='MoveFlag',toField='set_point',toNode='FlagCoor')])])]),
            Transform(translation=(8,0,0),
              children=[
              Transform(USE='tenXtenSeats')])])]),
        Transform(translation=(11,11,0),
          children=[
          Transform(USE='Gate')])]),
      Transform(translation=(0,0,-21),
        children=[
        Transform(USE='OneLevColmn')]),
      Transform(translation=(0,0,-42),
        children=[
        Transform(USE='OneLevColmn')]),
      Transform(translation=(0,0,-63),
        children=[
        Transform(USE='OneLevColmn')]),
      Transform(translation=(0,0,-84),
        children=[
        Transform(USE='OneLevColmn')]),
      Transform(DEF='Cabin',rotation=(0,1,0,-1.57),translation=(59,25.5,-7.5),
        children=[
        Inline(url=["./Cabin.wrl","https://savage.nps.edu/Savage/Buildings/SoccerStadium/Cabin.wrl"])]),
      Transform(translation=(0,0,15),
        children=[
        Transform(USE='Cabin')]),
      Transform(translation=(0,0,30),
        children=[
        Transform(USE='Cabin')]),
      Transform(translation=(0,0,-15),
        children=[
        Transform(USE='Cabin')]),
      Transform(translation=(0,0,-30),
        children=[
        Transform(USE='Cabin')])]),
    Transform(DEF='LeftSeats',rotation=(0,1,0,3.14),
      children=[
      Transform(USE='RightSeats')]),
    Transform(DEF='FrontSeats',
      children=[
      Transform(DEF='FrontSeatsColmn',rotation=(0,1,0,1.57),translation=(-26,0.2,-28),
        children=[
        Transform(USE='Gate'),
        Transform(scale=(1,1,1.2),translation=(11,11,-8),
          children=[
          Transform(USE='Gate')])]),
      Transform(translation=(-10,0,0),
        children=[
        Transform(USE='FrontSeatsColmn')]),
      Transform(translation=(-20,0,0),
        children=[
        Transform(USE='FrontSeatsColmn')]),
      Transform(translation=(-26,0,0),
        children=[
        Transform(USE='FrontSeatsColmn')])]),
    Transform(DEF='SlopeSeats1',
      children=[
      Transform(center=(40,0,47.5),rotation=(0,1,0,-0.42),translation=(-7,0,18.5),
        children=[
        Transform(USE='OneLevColmn')])]),
    Transform(DEF='SopeSeats2',rotation=(0,1,0,-1.1),translation=(6.5,0,-4),
      children=[
      Transform(center=(40,0,47.5),rotation=(0,1,0,-1.6),translation=(-7,0,18.5),
        children=[
        Transform(USE='OneLevColmn')])]),
    Transform(DEF='SlopeSeats3',
      children=[
      Transform(DEF='Slope3',rotation=(0,1,0,2.04),translation=(-5,0,4.5),
        children=[
        Transform(center=(40,0,47.5),rotation=(0,1,0,-1.5),scale=(1,1,0.8),translation=(-7,0,18.5),
          children=[
          Transform(USE='Gate')])]),
      Transform(scale=(1,1,1.2),translation=(10,11,8.5),
        children=[
        Transform(USE='Slope3')]),
      Transform(rotation=(0,1,0,3.14),
        children=[
        Transform(USE='SopeSeats2')])]),
    Transform(DEF='SlopeSeats4',rotation=(0,1,0,3.14),
      children=[
      Transform(USE='SlopeSeats1')]),
    Transform(DEF='SlopeSeats5',translation=(-30,0,0),
      children=[
      Transform(DEF='slope5',center=(40,0,47.5),rotation=(0,1,0,1.9),scale=(1,1,1.2),translation=(-32,0,-115),
        children=[
        Transform(USE='Gate')]),
      Transform(translation=(-3,11,-10.5),
        children=[
        Transform(USE='slope5')]),
      Transform(translation=(-5,11,-11),
        children=[
        Transform(USE='slope5')])]),
    Transform(DEF='SlopeSeats6',
      children=[
      Transform(DEF='slope6',center=(40,0,47.5),rotation=(0,1,0,1.2),scale=(1,1,1.2),translation=(-8,0,-112),
        children=[
        Transform(USE='Gate')]),
      Transform(translation=(11,11,-7),
        children=[
        Transform(USE='slope6')])]),
    Transform(translation=(-49,27,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Box(size=(20,0.2,45))),
      Transform(translation=(9,-13.5,15),
        children=[
        Shape(DEF='Pole',
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=27,radius=0.1))]),
      Transform(translation=(9,-13.5,0),
        children=[
        Shape(USE='Pole')]),
      Transform(translation=(9,-13.5,-15),
        children=[
        Shape(USE='Pole')])]),
    Transform(DEF='Bench',rotation=(0,1,0,-1.57),translation=(37,0,10),
      children=[
      Inline(url=["./Bench.wrl","https://savage.nps.edu/Savage/Buildings/SoccerStadium/Bench.wrl"])]),
    Transform(translation=(0,0,-20),
      children=[
      Transform(USE='Bench')]),
    Transform(DEF='TenLogo',
      children=[
      Transform(DEF='FiveLogo',
        children=[
        Transform(DEF='Logo',translation=(40,1,0),
          children=[
          Shape(
            appearance=Appearance(
              texture=ImageTexture(url=["web3d.gif","https://savage.nps.edu/Savage/Buildings/SoccerStadium/web3d.gif"]),
              material=Material(diffuseColor=(0.7,0.7,0.1),shininess=0.9)),
            geometry=Box(size=(0.01,2,5))),
          Transform(translation=(0,0,5),
            children=[
            Shape(
              appearance=Appearance(
                texture=ImageTexture(url=["x3d.gif","https://savage.nps.edu/Savage/Buildings/SoccerStadium/x3d.gif"]),
                material=Material(diffuseColor=(0.7,0.7,0.1),shininess=0.9)),
              geometry=Box(size=(0.01,2,5)))])]),
        Transform(translation=(0,0,10),
          children=[
          Transform(USE='Logo')]),
        Transform(translation=(0,0,20),
          children=[
          Transform(USE='Logo')]),
        Transform(translation=(0,0,30),
          children=[
          Transform(USE='Logo')]),
        Transform(translation=(0,0,40),
          children=[
          Transform(USE='Logo')])]),
      Transform(translation=(0,0,-50),
        children=[
        Transform(USE='FiveLogo')])]),
    Transform(translation=(-80,0,0),
      children=[
      Transform(USE='TenLogo')]),
    Transform(DEF='FrontLogo',rotation=(0,1,0,1.57),translation=(0,0,-28),
      children=[
      Transform(USE='Logo')]),
    Transform(translation=(-10,0,0),
      children=[
      Transform(USE='FrontLogo')]),
    Transform(translation=(-20,0,0),
      children=[
      Transform(USE='FrontLogo')]),
    Transform(translation=(10,0,0),
      children=[
      Transform(USE='FrontLogo')]),
    Transform(translation=(20,0,0),
      children=[
      Transform(USE='FrontLogo')]),
    Transform(rotation=(0,1,0,1.57),scale=(2,2,2),translation=(-61,26,44),
      children=[
      Inline(url=["./Board.wrl","https://savage.nps.edu/Savage/Buildings/SoccerStadium/Board.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SeatsLevelOne.py")
