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
    meta(content='RefuelingPierSeven.x3d',name='title'),
    meta(content='Refueling dolphin 7 at Aden Harbor, Yemen',name='description'),
    meta(content='James Harney',name='creator'),
    meta(content='4 October 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='http://www.foia.navy.mil/usscole/index.html',name='reference'),
    meta(content='http://www.pilotonline.com',name='reference'),
    meta(content='NIMA Chart No. 62098 Banda at Tdwahi, 4th Ed. 30 Sep 1995',name='reference'),
    meta(content='NIMA62098.jpg',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/RefuelingPierSeven.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(speed=10,type=["EXAMINE","FLY","ANY"],visibilityLimit=7000),
    Background(groundAngle=[1.309],groundColor=[(0.2,0.2,0.8),(.2,.2,1.0)],skyAngle=[1.309,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(1.0,1.0,1.0)]),
    Transform(rotation=(0,1,0,3.3),
      children=[
      Viewpoint(description='Refueling Dolphin Seven Front View',jump=False,orientation=(0,1,0,3.14),position=(30,25,-100)),
      Viewpoint(description='Refueling Dolphin Seven STBD View',jump=False,orientation=(0,1,0,1.57),position=(145,35,0)),
      Viewpoint(description='Refueling Dolphin Seven Rear View',jump=False,position=(30,25,80)),
      Viewpoint(description='Refueling Dolphin Seven Port View',jump=False,orientation=(0,1,0,-1.57),position=(-125,35,0)),
      Viewpoint(description='Refueling Dolphin Seven Overhead View',jump=False,orientation=(1,0,0,-1.57),position=(30,100,0)),
      Group(DEF='Pier',
        children=[
        Transform(DEF='LeftSide',
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,3,2,0,-1,3,5,4,2,-1,1,7,6,0,-1,6,8,9,7,-1,8,4,5,9,-1,1,3,5,9,7,-1,0,2,4,8,6,0,-1],creaseAngle=.7,solid=False,
              coord=Coordinate(point=[(0,8.45,2),(0,10.45,2),(5,8.45,.75),(5,10.45,.75),(10,8.45,0),(10,10.45,0),(4,8.45,20),(4,10.45,20),(10,8.45,20),(10,10.45,20)])),
            appearance=Appearance(DEF='PierGrey',
              material=Material(diffuseColor=(.5804,.5882,.5843),shininess=.5),
              texture=ImageTexture(url=["PierTexture.jpg","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/PierTexture.jpg"])))]),
        Transform(DEF='RightSide',
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,3,2,0,-1,3,5,4,2,-1,1,7,6,0,-1,6,8,9,7,-1,8,4,5,9,-1,1,3,5,9,7,-1,0,2,4,8,6,0,-1],creaseAngle=.7,solid=False,
              coord=Coordinate(point=[(60,8.45,0),(60,10.45,0),(65,8.45,.75),(65,10.45,.75),(70,8.45,2),(70,10.45,2),(60,8.45,20),(60,10.45,20),(66,8.45,20),(66,10.45,20)])),
            appearance=Appearance(USE='PierGrey'))]),
        Transform(DEF='Middle',
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,3,2,0,-1,4,5,7,6,4,-1,1,3,7,5,1,-1,0,2,6,4,0,-1],creaseAngle=.7,solid=False,
              coord=Coordinate(point=[(10,8.45,2),(10,10.45,2),(60,8.45,2),(60,10.45,2),(10,8.45,10),(10,10.45,10),(60,8.45,10),(60,10.45,10)])),
            appearance=Appearance(USE='PierGrey'))])]),
      Group(DEF='PierPylons',
        children=[
        Transform(translation=(6,-7,7),
          children=[
          Shape(
            geometry=Cylinder(height=31,radius=1.5),
            appearance=Appearance(
              material=Material(DEF='PierRed',diffuseColor=(.6784,.5843,.5431),shininess=.5)))]),
        Transform(translation=(6,-7,15),
          children=[
          Shape(
            geometry=Cylinder(height=31,radius=1.5),
            appearance=Appearance(
              material=Material(USE='PierRed')))]),
        Transform(translation=(66,-7,7),
          children=[
          Shape(
            geometry=Cylinder(height=31,radius=1.5),
            appearance=Appearance(
              material=Material(USE='PierRed')))]),
        Transform(translation=(64,-7,15),
          children=[
          Shape(
            geometry=Cylinder(height=31,radius=1.5),
            appearance=Appearance(
              material=Material(USE='PierRed')))]),
        Transform(translation=(20,-7,7),
          children=[
          Shape(
            geometry=Cylinder(height=31,radius=1.5),
            appearance=Appearance(
              material=Material(USE='PierRed')))]),
        Transform(translation=(40,-7,7),
          children=[
          Shape(
            geometry=Cylinder(height=31,radius=1.5),
            appearance=Appearance(
              material=Material(USE='PierRed')))])]),
      Group(DEF='FuelPipes',
        children=[
        Transform(DEF='BigPipe',rotation=(0,0,1,1.57),translation=(35,11,9),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(DEF='PipeRed',diffuseColor=(.6314,.4588,.4157))),
            geometry=Cylinder(height=52,radius=.5))]),
        Transform(DEF='LeftEnd',translation=(9,11,9),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='PipeRed')),
            geometry=Cylinder(height=1.2,radius=.5))]),
        Transform(DEF='RightEnd',translation=(61,11,9),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='PipeRed')),
            geometry=Cylinder(height=1.2,radius=.5))]),
        Transform(DEF='Right',translation=(61,11,18),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='PipeRed')),
            geometry=Cylinder(height=1.2,radius=.5))]),
        Transform(DEF='RightConnector',rotation=(1,0,0,1.57),translation=(61,11,13.5),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='PipeRed')),
            geometry=Cylinder(height=9.5,radius=.4))]),
        Group(DEF='SmallPipeBack',
          children=[
          Transform(DEF='LittlePipe1',rotation=(0,0,1,1.57),translation=(35.5,11,7.75),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='PipeRed')),
              geometry=Cylinder(height=53,radius=.25))]),
          Transform(DEF='LeftEnd1',translation=(9,11,7.75),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='PipeRed')),
              geometry=Cylinder(height=1.2,radius=.25))]),
          Transform(DEF='LeftEnd1Connector',rotation=(1,0,0,1.57),translation=(9,11,8.25),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='PipeRed')),
              geometry=Cylinder(height=.6,radius=.2))]),
          Transform(DEF='RightEnd1',translation=(62,11,7.75),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='PipeRed')),
              geometry=Cylinder(height=1.2,radius=.25))]),
          Transform(DEF='RightEnd1Connector',rotation=(1,0,0,1.57),translation=(62,11,13),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='PipeRed')),
              geometry=Cylinder(height=10,radius=.2))]),
          Transform(
            children=[
            Transform(DEF='Right1',translation=(62,11,18),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='PipeRed')),
                geometry=Cylinder(height=1.2,radius=.25))])])]),
        Group(DEF='SmallPipeFront',
          children=[
          Transform(DEF='LittlePipe2',rotation=(0,0,1,1.57),translation=(36,11,7),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='PipeRed')),
              geometry=Cylinder(height=54,radius=.25))]),
          Transform(DEF='LeftEnd2',translation=(9,11,7),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='PipeRed')),
              geometry=Cylinder(height=1.2,radius=.25))]),
          Transform(DEF='LeftEnd2Connector',rotation=(1,0,0,1.57),translation=(9,11,7.5),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='PipeRed')),
              geometry=Cylinder(height=.6,radius=.2))]),
          Transform(DEF='RightEnd2',translation=(63,11,7),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='PipeRed')),
              geometry=Cylinder(height=1.2,radius=.25))]),
          Transform(DEF='RightEnd2Connector',rotation=(1,0,0,1.57),translation=(63,11,12.5),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='PipeRed')),
              geometry=Cylinder(height=11,radius=.2))]),
          Transform(DEF='Right2',translation=(63,11,18),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='PipeRed')),
              geometry=Cylinder(height=1.2,radius=.25))])])]),
      Group(DEF='Shack',
        children=[
        Transform(
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,8,9,11,10,2,3,1,0,-1,3,5,4,2,-1,5,7,6,4,-1,7,1,0,6,-1],solid=False,
              coord=Coordinate(point=[(4,10.45,4),(4,15.45,4),(8,10.45,4),(8,15.45,4),(8,10.45,14),(8,15.45,14),(4,10.45,14),(4,15.45,14),(5.5,10.45,4),(5.5,12.95,4),(6.5,10.45,4),(6.5,12.95,4)])),
            appearance=Appearance(
              material=Material(diffuseColor=(.8686,.8255,.8412),shininess=.1),
              texture=ImageTexture(url=["BuildingSide.jpg","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/BuildingSide.jpg"])))]),
        Transform(
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0,-1],solid=False,
              coord=Coordinate(point=[(4,15.45,4),(8,15.45,4),(8,15.45,14),(4,15.45,14)])),
            appearance=Appearance(
              material=Material(diffuseColor=(.7529,.6516,.7176),shininess=.5),
              texture=ImageTexture(url=["BuildingTop.jpg","https://savage.nps.edu/Savage/Scenarios/UssColeTerroristAttack/BuildingTop.jpg"])))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RefuelingPierSeven.py")
