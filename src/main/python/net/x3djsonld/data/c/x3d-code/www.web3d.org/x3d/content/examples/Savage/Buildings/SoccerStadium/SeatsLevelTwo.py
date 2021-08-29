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
    meta(content='SeatsLevelTwo.x3d',name='title'),
    meta(content='Viewer seats, level two',name='description'),
    meta(content='LT Christos Kalogrias - Hellenic Navy',name='creator'),
    meta(content='25 July 2003',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='http://www.fussballtempel.net/uefa/Gre/Nikos_Goumas.jpg',name='reference'),
    meta(content='http://www.wsoccer.com/stadium/greece/aek_athens/',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Buildings/SoccerStadium/SeatsLevelTwo.x3d',name='identifier'),
    meta(content='http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(DEF='SkapastiDown',translation=(-30,0,86.5),
      children=[
      Transform(rotation=(0,0,1,-1.57),
        children=[
        Transform(rotation=(0,1,0,-1.57),
          children=[
          Shape(
            appearance=Appearance(DEF='SeatsCollor',
              material=Material(diffuseColor=(0.2,0.2,0.2))),
            geometry=Extrusion(crossSection=[(0,0),(-16,0),(-16,2),(-15,2),(-15,3),(-14,3),(-14,4),(-13,4),(-13,5),(-12,5),(-12,6),(-11,6),(-11,7),(-10,7),(-10,8),(-9,8),(-9,9),(-8,9),(-8,10),(-7,10),(-7,11),(-6,11),(-6,12),(-5,12),(-5,13),(-4,13),(-4,14),(-3,14),(-3,15),(-2,15),(-2,16),(-1,16),(-1,17),(0,17),(0,0)],spine=[(0,0,0),(0,60,0)])),
          Transform(DEF='SkepPole',rotation=(1,0,0,1.57),translation=(-15.8,0.2,8.5),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=Cylinder(height=17,radius=0.2))]),
          Transform(translation=(0,59.4,0),
            children=[
            Transform(USE='SkepPole')])])])]),
    Transform(translation=(0,17,0),
      children=[
      Transform(DEF='SkapastiUp',translation=(-30,0,86.5),
        children=[
        Transform(rotation=(0,0,1,-1.57),
          children=[
          Transform(rotation=(0,1,0,-1.57),
            children=[
            Shape(
              appearance=Appearance(USE='SeatsCollor'),
              geometry=Extrusion(crossSection=[(0,0),(-16,0),(-16,2),(-15,2),(-15,3),(-14,3),(-14,4),(-13,4),(-13,5),(-12,5),(-12,6),(-11,6),(-11,7),(-10,7),(-10,8),(-9,8),(-9,9),(-8,9),(-8,10),(-7,10),(-7,11),(-6,11),(-6,12),(-5,12),(-5,13),(-4,13),(-4,14),(-3,14),(-3,15),(-2,15),(-2,16),(-1,16),(-1,17),(0,17),(0,0)],spine=[(0,0,0),(0,60,0)]))])])]),
      Transform(DEF='SkepastiSeats',translation=(-30,0,86.5),
        children=[
        Transform(DEF='SkepColmn',
          children=[
          Transform(DEF='tenXtenSeats',
            children=[
            Transform(rotation=(1,0,0,0.78),translation=(6,10,-8),
              children=[
              Transform(DEF='Fans',scale=(1.333,4,1),translation=(0,1,0),
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
                        texture=ImageTexture(url=["./aek5.jpg","https://savage.nps.edu/Savage/Buildings/SoccerStadium/aek5.jpg"]),
                        textureTransform=TextureTransform(translation=(0.0,0.01)))),
                    TimeSensor(DEF='timer',cycleInterval=4.0,loop=True),
                    CoordinateInterpolator(DEF='MoveFlag',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,0.0,0.00),(0.5,0.0,0.087),(1.0,0.0,.100),(1.5,0.0,0.087),(2.0,0.0,0.00),(2.5,0.0,-0.087),(3.0,0.0,-.100),(3.5,0.0,-0.087),(4.0,0.0,0.0),(4.5,0.0,0.087),(5.0,0.0,.10),(5.5,0.0,0.087),(6.0,0.0,0.0),(6.5,0.0,-0.087),(7.0,0.0,-.10),(7.5,0.0,-0.087),(7.5,0.5,-0.087),(7.5,1.0,-0.087),(7.5,1.5,-0.087),(7.5,2.0,-0.087),(7.5,2.5,-0.087),(7.5,3.0,-0.087),(7.5,3.5,-0.087),(7.5,4.0,-0.087),(7.5,4.5,-0.087),(7.5,5.0,-0.087),(7.0,5.0,-.10),(6.5,5.0,-0.087),(6.0,5.0,0.0),(5.5,5.0,0.087),(5.0,5.0,.10),(4.5,5.0,0.087),(4.0,5.0,0.0),(3.5,5.0,-0.087),(3.0,5.0,-.10),(2.5,5.0,-0.087),(2.0,5.0,0.0),(1.5,5.0,0.087),(1.0,5.0,.10),(0.5,5.0,0.087),(0.0,5.0,0.0),(0.0,4.5,0.0),(0.0,4.0,0.0),(0.0,3.5,0.0),(0.0,3.0,0.0),(0.0,2.5,0.0),(0.0,2.0,0.0),(0.0,1.5,0.0),(0.0,1.0,0.0),(0.0,0.5,0.0),(0.0,0.0,0.0),(0.0,0.0,0.0),(0.5,0.0,-0.087),(1.0,0.0,-.10),(1.5,0.0,-0.087),(2.0,0.0,0.0),(2.5,0.0,0.087),(3.0,0.0,.10),(3.5,0.0,0.087),(4.0,0.0,0.0),(4.5,0.0,-0.087),(5.0,0.0,-.10),(5.5,0.0,-0.087),(6.0,0.0,0.0),(6.5,0.0,0.087),(7.0,0.0,.10),(7.5,0.0,0.087),(7.5,0.5,0.087),(7.5,1.0,0.087),(7.5,1.5,0.087),(7.5,2.0,0.087),(7.5,2.5,0.087),(7.5,3.0,0.087),(7.5,3.5,0.087),(7.5,4.0,0.087),(7.5,4.5,0.087),(7.5,5.0,0.087),(7.0,5.0,.10),(6.5,5.0,0.087),(6.0,5.0,0.0),(5.5,5.0,-0.087),(5.0,5.0,-.10),(4.5,5.0,-0.087),(4.0,5.0,0.0),(3.5,5.0,0.087),(3.0,5.0,.10),(2.5,5.0,0.087),(2.0,5.0,0.0),(1.5,5.0,-0.087),(1.0,5.0,-.10),(0.5,5.0,-0.087),(0.0,5.0,0.0),(0.0,4.5,0.0),(0.0,4.0,0.0),(0.0,3.5,0.0),(0.0,3.0,0.0),(0.0,2.5,0.0),(0.0,2.0,0.0),(0.0,1.5,0.0),(0.0,1.0,0.0),(0.0,0.5,0.0),(0.0,0.0,0.0),(0.0,0.0,0.0),(0.5,0.0,0.087),(1.0,0.0,.10),(1.5,0.0,0.087),(2.0,0.0,0.0),(2.5,0.0,-0.087),(3.0,0.0,-.10),(3.5,0.0,-0.087),(4.0,0.0,0.0),(4.5,0.0,0.087),(5.0,0.0,.10),(5.5,0.0,0.087),(6.0,0.0,0.0),(6.5,0.0,-0.087),(7.0,0.0,-.10),(7.5,0.0,-0.087),(7.5,0.5,-0.087),(7.5,1.0,-0.087),(7.5,1.5,-0.087),(7.5,2.0,-0.087),(7.5,2.5,-0.087),(7.5,3.0,-0.087),(7.5,3.5,-0.087),(7.5,4.0,-0.087),(7.5,4.5,-0.087),(7.5,5.0,-0.087),(7.0,5.0,-.10),(6.5,5.0,-0.087),(6.0,5.0,0.0),(5.5,5.0,0.087),(5.0,5.0,.10),(4.5,5.0,0.087),(4.0,5.0,0.0),(3.5,5.0,-0.087),(3.0,5.0,-.10),(2.5,5.0,-0.087),(2.0,5.0,0.0),(1.5,5.0,0.087),(1.0,5.0,.10),(0.5,5.0,0.087),(0.0,5.0,0.0),(0.0,4.5,0.0),(0.0,4.0,0.0),(0.0,3.5,0.0),(0.0,3.0,0.0),(0.0,2.5,0.0),(0.0,2.0,0.0),(0.0,1.5,0.0),(0.0,1.0,0.0),(0.0,0.5,0.0),(0.0,0.0,0.0),(0.0,0.0,0.0),(0.5,0.0,-0.087),(1.0,0.0,-.10),(1.5,0.0,-0.087),(2.0,0.0,0.0),(2.5,0.0,0.087),(3.0,0.0,.10),(3.5,0.0,0.087),(4.0,0.0,0.0),(4.5,0.0,-0.087),(5.0,0.0,-.10),(5.5,0.0,-0.087),(6.0,0.0,0.0),(6.5,0.0,0.087),(7.0,0.0,.10),(7.5,0.0,0.087),(7.5,0.5,0.087),(7.5,1.0,0.087),(7.5,1.5,0.087),(7.5,2.0,0.087),(7.5,2.5,0.087),(7.5,3.0,0.087),(7.5,3.5,0.087),(7.5,4.0,0.087),(7.5,4.5,0.087),(7.5,5.0,0.087),(7.0,5.0,.10),(6.5,5.0,0.087),(6.0,5.0,0.0),(5.5,5.0,-0.087),(5.0,5.0,-.10),(4.5,5.0,-0.087),(4.0,5.0,0.0),(3.5,5.0,0.087),(3.0,5.0,.10),(2.5,5.0,0.087),(2.0,5.0,0.0),(1.5,5.0,-0.087),(1.0,5.0,-1.0),(0.5,5.0,-0.087),(0.0,5.0,0.0),(0.0,4.5,0.0),(0.0,4.0,0.0),(0.0,3.5,0.0),(0.0,3.0,0.0),(0.0,2.5,0.0),(0.0,2.0,0.0),(0.0,1.5,0.0),(0.0,1.0,0.0),(0.0,0.5,0.0),(0.0,0.0,0.0),(0.0,0.0,0.0),(0.5,0.0,0.087),(1.0,0.0,.10),(1.5,0.0,0.087),(2.0,0.0,0.0),(2.5,0.0,-0.087),(3.0,0.0,-.10),(3.5,0.0,-0.087),(4.0,0.0,0.0),(4.5,0.0,0.087),(5.0,0.0,.10),(5.5,0.0,0.087),(6.0,0.0,0.0),(6.5,0.0,-0.087),(7.0,0.0,-.10),(7.5,0.0,-0.087),(7.5,0.5,-0.087),(7.5,1.0,-0.087),(7.5,1.5,-0.087),(7.5,2.0,-0.087),(7.5,2.5,-0.087),(7.5,3.0,-0.087),(7.5,3.5,-0.087),(7.5,4.0,-0.087),(7.5,4.5,-0.087),(7.5,5.0,-0.087),(7.0,5.0,-.10),(6.5,5.0,-0.087),(6.0,5.0,0.0),(5.5,5.0,0.087),(5.0,5.0,.10),(4.5,5.0,0.087),(4.0,5.0,0.0),(3.5,5.0,-0.087),(3.0,5.0,-.10),(2.5,5.0,-0.087),(2.0,5.0,0.0),(1.5,5.0,0.087),(1.0,5.0,.10),(0.5,5.0,0.087),(0.0,5.0,0.0),(0.0,4.5,0.0),(0.0,4.0,0.0),(0.0,3.5,0.0),(0.0,3.0,0.0),(0.0,2.5,0.0),(0.0,2.0,0.0),(0.0,1.5,0.0),(0.0,1.0,0.0),(0.0,0.5,0.0),(0.0,0.0,0.0)])])]),
                ROUTE(fromField='fraction_changed',fromNode='timer',toField='set_fraction',toNode='MoveFlag'),
                ROUTE(fromField='value_changed',fromNode='MoveFlag',toField='set_point',toNode='FlagCoor')])])])]),
        Transform(translation=(11,0,0),
          children=[
          Transform(USE='SkepColmn')]),
        Transform(translation=(21,0,0),
          children=[
          Transform(USE='SkepColmn')]),
        Transform(translation=(31,0,0),
          children=[
          Transform(USE='SkepColmn')]),
        Transform(translation=(37,0,0),
          children=[
          Transform(USE='SkepColmn')]),
        Transform(translation=(48,0,0),
          children=[
          Transform(USE='SkepColmn')])]),
      Transform(translation=(0,-17,0),
        children=[
        Transform(USE='SkepastiSeats')])]),
    Viewpoint(description='Two Level Seats View',orientation=(0,1,0,3.14),position=(0,1.8,20)),
    Transform(DEF='LogoDown',
      children=[
      Transform(DEF='Logo',rotation=(0,1,0,1.57),translation=(-7,1,70.4),
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
      Transform(translation=(10,0,0),
        children=[
        Transform(USE='Logo')]),
      Transform(translation=(20,0,0),
        children=[
        Transform(USE='Logo')]),
      Transform(translation=(-10,0,0),
        children=[
        Transform(USE='Logo')]),
      Transform(translation=(-20,0,0),
        children=[
        Transform(USE='Logo')]),
      Transform(scale=(0.9,1,1),translation=(29,0,0),
        children=[
        Transform(USE='Logo')])]),
    Transform(translation=(0,17,0),
      children=[
      Transform(USE='LogoDown')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SeatsLevelTwo.py")
