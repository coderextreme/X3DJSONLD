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
    meta(content='Fence.x3d',name='title'),
    meta(content='This file draws the fence and door with lawn.',name='description'),
    meta(content='Kok Keng Ng',name='creator'),
    meta(content='20 September 2002',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/PlayGround/Fence.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(DEF='FENCEBACKTX',translation=(0,0,-8.75),
      children=[
      Group(DEF='FENCEGP5',
        children=[
        Group(DEF='FENCE1GP',
          children=[
          Transform(translation=(0,-0.5,0),
            children=[
            Shape(DEF='FENCEbar',
              geometry=Box(size=(2.5,0.1,0.1)),
              appearance=Appearance(DEF='FENCEApp',
                material=Material(diffuseColor=(0.8,0.5,0)),
                texture=ImageTexture(DEF='wood',url=["wood.jpg","https://savage.nps.edu/Savage/Buildings/PlayGround/wood.jpg"])))]),
          Transform(translation=(0,-0.25,0),
            children=[
            Shape(USE='FENCEbar')]),
          Transform(
            children=[
            Shape(USE='FENCEbar')]),
          Transform(translation=(0,0.25,0),
            children=[
            Shape(USE='FENCEbar')]),
          Transform(rotation=(0,0,1,1.57),translation=(1.25,-.20,0),
            children=[
            Shape(DEF='FENCEleg',
              geometry=Box(size=(1.3,0.15,0.15)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.5,0)),
                texture=ImageTexture(USE='wood')))]),
          Transform(rotation=(0,0,1,1.57),translation=(-1.25,-0.20,0),
            children=[
            Shape(USE='FENCEleg')])]),
        Transform(translation=(2.5,0,0),
          children=[
          Group(USE='FENCE1GP')]),
        Transform(translation=(-2.5,0,0),
          children=[
          Group(USE='FENCE1GP')]),
        Transform(translation=(5,0,0),
          children=[
          Group(USE='FENCE1GP')]),
        Transform(translation=(7.5,0,0),
          children=[
          Group(USE='FENCE1GP')]),
        Transform(translation=(-5,0,0),
          children=[
          Group(USE='FENCE1GP')]),
        Transform(translation=(-7.5,0,0),
          children=[
          Group(USE='FENCE1GP')])])]),
    Transform(DEF='FENCERIGHTTX',rotation=(0,1,0,1.57),translation=(8.75,0,0),
      children=[
      Group(USE='FENCEGP5')]),
    Transform(DEF='FENCELEFTTX',rotation=(0,1,0,1.57),translation=(-8.75,0,0),
      children=[
      Group(USE='FENCEGP5')]),
    Transform(DEF='FENCEFRONTTX',translation=(0,0,8.75),
      children=[
      Group(
        children=[
        Transform(translation=(-2.5,0,0),
          children=[
          Group(USE='FENCE1GP')]),
        Transform(translation=(2.5,0,0),
          children=[
          Group(USE='FENCE1GP')]),
        Transform(translation=(5,0,0),
          children=[
          Group(USE='FENCE1GP')]),
        Transform(translation=(-5,0,0),
          children=[
          Group(USE='FENCE1GP')]),
        Transform(translation=(-7.5,0,0),
          children=[
          Group(USE='FENCE1GP')]),
        Transform(translation=(7.5,0,0),
          children=[
          Group(USE='FENCE1GP')])]),
      Transform(DEF='FENCERightDoorTX',center=(0.6,0,0.05),translation=(0.575,0,0.025),
        children=[
        Group(DEF='FENCERightDoorGP',
          children=[
          Group(DEF='FENCEDoor1',
            children=[
            Transform(translation=(0.,-0.5,0),
              children=[
              Shape(DEF='FENCEDoorbarShape',
                geometry=Box(size=(1,0.075,0.075)),
                appearance=Appearance(USE='FENCEApp'))]),
            Transform(DEF='FENCEDOORRIGHTLEGTX',rotation=(0,0,1,1.57),translation=(0.55,-.20,0),
              children=[
              Shape(DEF='FENCEDoorlegShape',
                geometry=Box(size=(1.2,0.1,0.1)),
                appearance=Appearance(USE='FENCEApp'))]),
            Transform(translation=(0,-0.2,0),
              children=[
              Shape(USE='FENCEDoorbarShape')]),
            Transform(translation=(0,0.1,0),
              children=[
              Shape(USE='FENCEDoorbarShape')]),
            Transform(translation=(0,0.35,0),
              children=[
              Shape(USE='FENCEDoorbarShape')]),
            Transform(DEF='FENCEDOORLEFTLEGTX',rotation=(0,0,1,1.57),translation=(-0.5,-.20,0),
              children=[
              Shape(USE='FENCEDoorlegShape')])]),
          Group(
            children=[
            Transform(rotation=(0,0,1,0.785),scale=(1.2,1,1),translation=(0.05,-0.1,-0.05),
              children=[
              Shape(USE='FENCEDoorbarShape')])]),
          TouchSensor(DEF='FENCERightDoorSensor')])]),
      Transform(
        children=[
        Group(DEF='FENCELeftDoorGP',
          children=[
          Transform(DEF='FENCELeftDoorTX',center=(-0.55,0,0.05),translation=(-0.625,0,0.025),
            children=[
            Group(USE='FENCEDoor1'),
            Group(
              children=[
              Transform(rotation=(0,0,1,-0.785),scale=(1.2,1,1),translation=(-0.05,-0.1,-0.05),
                children=[
                Shape(USE='FENCEDoorbarShape')])]),
            TouchSensor(DEF='FENCELeftDoorSensor')])])]),
      TimeSensor(DEF='FENCEDoorTimer1',cycleInterval=12),
      TimeSensor(DEF='FENCEDoorTimer2',cycleInterval=15),
      OrientationInterpolator(DEF='FENCELeftDoorInterpolator',key=[0,0.25,0.75,1],keyValue=[(0,1,0,0),(0,1,0,-1.57),(0,1,0,-1.57),(0,1,0,0)]),
      OrientationInterpolator(DEF='FENCERightDoorInterpolator',key=[0,0.25,0.75,1],keyValue=[(0,1,0,0.0),(0,1,0,1.57),(0,1,0,1.57),(0,1,0,-0)])]),
    Transform(
      children=[
      Transform(
        children=[
        Transform(DEF='LAWN',translation=(0,-0.8,0),
          children=[
          Transform(scale=(4,1,4),translation=(-14,0.01,-14),
            children=[
            Shape(
              appearance=Appearance(
                texture=ImageTexture(url=["grass1.jpg","https://savage.nps.edu/Savage/Buildings/PlayGround/grass1.jpg"]),
                textureTransform=TextureTransform(scale=(120,120))),
              geometry=ElevationGrid(creaseAngle=0.785,height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],xDimension=8,xSpacing=1.,zDimension=8,zSpacing=1.))])]),
        Transform(DEF='FLOORTX',translation=(0,-0.876,0),
          children=[
          Shape(DEF='FLOOR',
            geometry=Box(size=(28,0.15,28)),
            appearance=Appearance(
              material=Material(ambientIntensity=0.245763,diffuseColor=(0.336312,0.24807,0.201129),shininess=0.061224,specularColor=(0.108805,0.098067,0.096807))))])])]),
    Transform(
      children=[
      Sound(direction=(1,1,1),maxBack=100,maxFront=100,minBack=10,minFront=10,
        source=AudioClip(DEF='DoorSound',description='Door sound',url=["Door.wav","https://savage.nps.edu/Savage/Buildings/PlayGround/Door.wav"]))]),
    Transform(),
    Viewpoint(description='Front',orientation=(1,0,0,-0.3),position=(0,2,20)),
    Viewpoint(description='MainDoor',orientation=(1,0,0,-1.57),position=(0,3,8.75)),
    ROUTE(fromField='touchTime',fromNode='FENCELeftDoorSensor',toField='set_startTime',toNode='FENCEDoorTimer1'),
    ROUTE(fromField='fraction_changed',fromNode='FENCEDoorTimer1',toField='set_fraction',toNode='FENCELeftDoorInterpolator'),
    ROUTE(fromField='value_changed',fromNode='FENCELeftDoorInterpolator',toField='set_rotation',toNode='FENCELeftDoorTX'),
    ROUTE(fromField='touchTime',fromNode='FENCERightDoorSensor',toField='set_startTime',toNode='FENCEDoorTimer2'),
    ROUTE(fromField='fraction_changed',fromNode='FENCEDoorTimer2',toField='set_fraction',toNode='FENCERightDoorInterpolator'),
    ROUTE(fromField='value_changed',fromNode='FENCERightDoorInterpolator',toField='set_rotation',toNode='FENCERightDoorTX'),
    ROUTE(fromField='touchTime',fromNode='FENCELeftDoorSensor',toField='set_startTime',toNode='DoorSound'),
    ROUTE(fromField='touchTime',fromNode='FENCERightDoorSensor',toField='set_startTime',toNode='DoorSound')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Fence.py")
