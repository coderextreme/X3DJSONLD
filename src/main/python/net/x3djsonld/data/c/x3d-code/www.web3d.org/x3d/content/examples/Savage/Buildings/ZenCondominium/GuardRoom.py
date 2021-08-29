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
    meta(content='GuardRoom.x3d',name='title'),
    meta(content='Display the guard room of the condominium. Include 3 electronic gates.',name='description'),
    meta(content='https://savage.nps.edu/Savage/Buildings/ZenCondominium/GuardRoom.x3d',name='identifier'),
    meta(content='Hwee Ping Ng',name='creator'),
    meta(content='25 August 2004',name='created'),
    meta(content='27 August 2015',name='modified'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Group(DEF='Window',
        children=[
        Transform(translation=(0,2.4,0),
          children=[
          Shape(DEF='GuardRoomWindowFrameLength',
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.1,0.1))),
            geometry=Box(size=(2.4,0.1,0.1)))]),
        Transform(translation=(0,1.2,0),
          children=[
          Shape(USE='GuardRoomWindowFrameLength')]),
        Transform(translation=(-1.2,1.8,0),
          children=[
          Shape(DEF='GuardRoomWindowFrameBreadth',
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.1,0.1))),
            geometry=Box(size=(0.1,1.2,0.1)))]),
        Transform(translation=(-0.6,1.8,0),
          children=[
          Shape(USE='GuardRoomWindowFrameBreadth')]),
        Transform(translation=(0,1.8,0),
          children=[
          Shape(USE='GuardRoomWindowFrameBreadth')]),
        Transform(translation=(0.6,1.8,0),
          children=[
          Shape(USE='GuardRoomWindowFrameBreadth')]),
        Transform(translation=(1.2,1.8,0),
          children=[
          Shape(USE='GuardRoomWindowFrameBreadth')]),
        Transform(translation=(-0.9,1.8,0),
          children=[
          Shape(DEF='GuardRoomWindowGlass',
            appearance=Appearance(
              material=Material(diffuseColor=(0,0,0.2),transparency=0.8)),
            geometry=Box(size=(0.5,1.05,0.1)))]),
        Transform(translation=(-0.3,1.8,0),
          children=[
          Shape(USE='GuardRoomWindowGlass')]),
        Transform(translation=(0.3,1.8,0),
          children=[
          Shape(USE='GuardRoomWindowGlass')]),
        Transform(translation=(0.3,1.8,0),
          children=[
          Shape(USE='GuardRoomWindowGlass')]),
        Transform(translation=(0,2.7,0),
          children=[
          Shape(DEF='GuardRoomWallTopWindow',
            appearance=Appearance(
              material=Material(diffuseColor=(0.835,0.804,0.525))),
            geometry=Box(size=(3,0.5,0.1)))]),
        Transform(translation=(0,0.4,0),
          children=[
          Shape(DEF='GuardRoomWallBottomWindow',
            appearance=Appearance(
              material=Material(diffuseColor=(0.835,0.804,0.525))),
            geometry=Box(size=(3,1.5,0.1)))]),
        Transform(translation=(-1.5,1.3,0),
          children=[
          Shape(DEF='GuardRoomWallLeftWindow',
            appearance=Appearance(
              material=Material(diffuseColor=(0.835,0.804,0.525))),
            geometry=Box(size=(0.5,3.3,0.1)))]),
        Transform(translation=(1.5,1.3,0),
          children=[
          Shape(USE='GuardRoomWallLeftWindow')])])]),
    Transform(rotation=(0,1,0,-1.57),translation=(-1.8,0,-1.7),
      children=[
      Group(USE='Window')]),
    Transform(rotation=(0,1,0,-1.57),translation=(1.8,0,-1.7),
      children=[
      Group(USE='Window')]),
    Transform(DEF='Guard_Room_Door',translation=(0,1.03,-3.4),
      children=[
      Group(
        children=[
        Shape(DEF='V1',
          appearance=Appearance(DEF='DoorFramePaint'),
          geometry=Box(size=(0.1,2.75,0.1))),
        Transform(translation=(1,0,0),
          children=[
          Shape(USE='V1')]),
        Transform(translation=(0.5,1.4,0),
          children=[
          Shape(DEF='H1',
            appearance=Appearance(USE='DoorFramePaint'),
            geometry=Box(size=(1,0.1,0.1)))]),
        Transform(DEF='Door',center=(0.5,0,0),translation=(0.5,0,0),
          children=[
          Shape(
            appearance=Appearance(USE='DoorFramePaint'),
            geometry=Box(size=(1,2.75,0.05))),
          Transform(rotation=(1,0,0,1.571),translation=(-0.35,0,0),
            children=[
            Shape(DEF='KnobBase',
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.6,0.2))),
              geometry=Cylinder(height=0.075,radius=0.05))]),
          Transform(translation=(-0.35,0,0.06),
            children=[
            Shape(DEF='Knob',
              appearance=Appearance(
                material=Material(diffuseColor=(1,0.6,0.2))),
              geometry=Sphere(radius=0.05))]),
          Transform(translation=(-0.35,0,-0.06),
            children=[
            Shape(USE='Knob')]),
          TouchSensor(DEF='ClickSensor',description='GuardRoom Electronic Gate Sensor'),
          TimeSensor(DEF='Clock',cycleInterval=4),
          OrientationInterpolator(DEF='DoorPath',key=[0,0.5,1],keyValue=[(0,1,0,0),(0,1,0,0.78),(0,1,0,1.1)])])]),
      ROUTE(fromField='touchTime',fromNode='ClickSensor',toField='set_startTime',toNode='Clock'),
      ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='DoorPath'),
      ROUTE(fromField='value_changed',fromNode='DoorPath',toField='set_rotation',toNode='Door')]),
    Transform(translation=(-0.9,1.3,-3.4),
      children=[
      Shape(DEF='GuardRoomDoorWallTop',
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=Box(size=(1.75,3.3,0.1)))]),
    Transform(translation=(1.4,1.3,-3.4),
      children=[
      Shape(DEF='GuardRoomDoorWallTop2',
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=Box(size=(0.75,3.3,0.1)))]),
    Transform(translation=(0.55,2.7,-3.4),
      children=[
      Shape(DEF='GuardRoomDoorWallTop3',
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=Box(size=(1.2,0.5,0.1)))]),
    Transform(translation=(0,-0.5,-1.2),
      children=[
      Shape(DEF='GuardtRoomFloor',
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=Box(size=(4.5,0.3,5)))]),
    Transform(translation=(0,3,-1.2),
      children=[
      Shape(DEF='GuardRoomCeiling',
        appearance=Appearance(
          material=Material(diffuseColor=(0.835,0.804,0.525))),
        geometry=Box(size=(4,0.1,5)))]),
    Transform(translation=(-2.8,0.15,-1),
      children=[
      Inline(DEF='electronicgate_link',url=["myelectronicgate.wrl"])]),
    Transform(DEF='Electronic_Gate_Right',rotation=(0,1,0,3.14),translation=(2.8,0.15,-1),
      children=[
      Inline(USE='electronicgate_link')]),
    Transform(rotation=(0,1,0,3.14),translation=(-9.3,0.15,-1),
      children=[
      Inline(USE='electronicgate_link')]),
    Transform(rotation=(0,1,0,1.57),scale=(2,2,2),translation=(0,1,1.5),
      children=[
      Inline(DEF='TulipCluster',url=["TulipCluster1.wrl","../../Buildings/Playground/TulipCluster1.wrl","https://savage.nps.edu/Savage/Buildings/Playground/TulipCluster1.wrl","TulipCluster1.x3d","../../Buildings/Playground/TulipCluster1.x3d","https://savage.nps.edu/Savage/Buildings/Playground/TulipCluster1.x3d"])]),
    Transform(translation=(0,-0.6,2),
      children=[
      Shape(
        geometry=Box(size=(4.5,0.1,4)),
        appearance=Appearance(
          texture=ImageTexture(url=["LawnGrass.jpg","https://savage.nps.edu/Savage/Buildings/ZenCondominium/LawnGrass.jpg"])))]),
    Transform(rotation=(0,0,1,1.57),translation=(-1.8,1.2,1),
      children=[
      Shape(DEF='roofsupport',
        geometry=Box(size=(3.6,0.1,0.1)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.71,0.71,0.42))))]),
    Transform(rotation=(0,0,1,1.57),translation=(1.8,1.2,1),
      children=[
      Shape(USE='roofsupport')]),
    Transform(rotation=(0,1,0,1.57),scale=(2,2,2),translation=(1,1,1.5),
      children=[
      Inline(USE='TulipCluster')]),
    Transform(rotation=(0,1,0,1.57),scale=(2,2,2),translation=(-1,1,1.5),
      children=[
      Inline(USE='TulipCluster')]),
    Transform(translation=(-12,2,-6),
      children=[
      Shape(
        geometry=Box(size=(4,6.5,0.5)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.51,0.478,0.18))))]),
    Transform(translation=(-1,4.25,-6),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.51,0.478,0.18))),
        geometry=Box(size=(19,2,0.5)))]),
    Transform(rotation=(1,0,0,0.5),scale=(2,2,2),translation=(-5,3.5,-5.3),
      children=[
      Inline(url=["name.wrl"])]),
    Transform(translation=(10,2,-6),
      children=[
      Shape(
        geometry=Box(size=(4,6.5,0.5)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.51,0.478,0.18))))]),
    Viewpoint(description='Guard Room',orientation=(-0.363,-0.931,-0.026,0.3),position=(-6.1,3.5,10))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for GuardRoom.py")
