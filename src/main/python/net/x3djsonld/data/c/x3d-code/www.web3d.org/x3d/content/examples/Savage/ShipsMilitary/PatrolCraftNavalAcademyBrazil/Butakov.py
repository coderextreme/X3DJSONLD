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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='Butakov.x3d',name='title'),
    meta(content='Brazilian Naval Academy Training Ship making a manoverboard manouver',name='description'),
    meta(content='Claudio Coreixas',name='creator'),
    meta(content='20 October 2009',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='http://www.en.mar.mil.br',name='reference'),
    meta(content='ships manouvering',name='subject'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNavalAcademyBrazil/Butakov.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Sound(maxBack=100,maxFront=100,
      source=AudioClip(DEF='boat',description='ambient sound',loop=True,url=["boatSound.wav","https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNavalAcademyBrazil/boatSound.wav"])),
    NavigationInfo(type=["EXAMINE"]),
    WorldInfo(info=["an Butakov MOB scene"],title='Butakov'),
    Background(skyAngle=[0.7,0],skyColor=[(0.478431,0.160784,1),(0.701961,0.776471,1),(0.380392,0.384314,1)]),
    Viewpoint(description='top',orientation=(1,0,0,-1.57),position=(1.8,10,1.4)),
    TimeSensor(DEF='MovementTimer',cycleInterval=20,loop=True),
    TimeSensor(DEF='spintTimer',cycleInterval=4,loop=True),
    PositionInterpolator(DEF='MovetheShip',key=[0.025,0.05,0.075,0.1,0.125,0.15,0.175,0.2,0.225,0.25,0.275,0.3,0.325,0.35,0.375,0.4,0.425,0.45,0.475,0.5,0.525,0.55,0.575,0.6,0.625,0.65,0.675,0.7,0.725,0.75,0.775,0.8,0.825,0.85,0.875,0.9,0.925,0.95,0.975,1],keyValue=[(-3,0,0),(-2.5,0,0),(-2,0,0),(-1.5,0,0),(-1,0,0),(-0.5,0,0),(0,0,0),(0.48,0,0.1),(0.95,0,0.28),(1.35,0,0.55),(1.65,0,0.95),(1.88,0,1.4),(1.96,0,1.9),(2.05,0,2.45),(2.25,0,2.9),(2.5,0,3.3),(2.9,0,3.68),(3.3,0,3.9),(3.8,0,4),(4.3,0,4),(4.8,0,3.9),(5.2,0,3.65),(5.6,0,3.3),(5.85,0,2.9),(6.02,0,2.4),(6.08,0,1.9),(5.95,0,1.4),(5.78,0,0.95),(5.42,0,0.55),(5,0,0.25),(4.55,0,0.05),(4,0,0),(3.5,0,0),(3,0,0),(2.5,0,0),(2,0,0),(1.5,0,0),(1,0,0),(0.5,0,0),(0,0,0)]),
    ROUTE(fromField='fraction_changed',fromNode='MovementTimer',toField='set_fraction',toNode='MovetheShip'),
    OrientationInterpolator(DEF='SpinTheShip',key=[0,0.083333,0.166667,0.25,0.333333,0.416667,0.5,0.583333,0.666667,0.75,0.833333,0.916667,1],keyValue=[(1,0,0,0),(1,0,0,0),(1,0,0,0),(1,0,0,-0.25),(1,0,0,0),(1,0,0,0.25),(1,0,0,0.3),(1,0,0,0.35),(1,0,0,0.3),(1,0,0,0.25),(1,0,0,0),(1,1,0,0),(1,1,0,0)]),
    ROUTE(fromField='fraction_changed',fromNode='MovementTimer',toField='set_fraction',toNode='SpinTheShip'),
    OrientationInterpolator(DEF='SpinTheShip2',key=[0,0.166667,0.333333,0.5,0.666667,0.833333,1],keyValue=[(0,1,0,0),(0,1,0,0),(0,1,0,-1.57),(0,1,0,0),(0,1,0,1.57),(0,1,0,3.14),(0,1,0,3.14)]),
    ROUTE(fromField='fraction_changed',fromNode='MovementTimer',toField='set_fraction',toNode='SpinTheShip2'),
    OrientationInterpolator(DEF='SpinTheShip3',key=[0,0.5,1],keyValue=[(0,0,1,-0.05),(0,0,1,0.05),(0,0,1,-0.05)]),
    ROUTE(fromField='fraction_changed',fromNode='spintTimer',toField='set_fraction',toNode='SpinTheShip3'),
    Transform(DEF='Ship3',
      children=[
      ROUTE(fromField='value_changed',fromNode='MovetheShip',toField='translation',toNode='Ship3'),
      Viewpoint(description='topMoving',orientation=(1,0,0,-1.57079),position=(0,3,0)),
      Transform(DEF='Ship2',
        children=[
        ROUTE(fromField='value_changed',fromNode='SpinTheShip2',toField='rotation',toNode='Ship2'),
        Viewpoint(description='Stern',orientation=(0,1,0,-1.57),position=(-3,0.5,0)),
        Viewpoint(description='bow',orientation=(0,1,0,1.57),position=(3,0.5,0)),
        Viewpoint(description='bow Close',orientation=(0,1,0,1.57),position=(1,0.3,0)),
        Viewpoint(description='stb Bow',orientation=(-0.3162,0.9487,0,0.8117),position=(1,0.5,1)),
        Viewpoint(description='stb Bridge Outside',orientation=(0,0.6247,0,0.8179),position=(0.5,0.2,0.6)),
        Viewpoint(description='port Bow',orientation=(0,0.9487,0,2.3299),position=(1.5,0.5,-1.5)),
        Viewpoint(description='stb Quarter',orientation=(-0.3162,-0.9487,0,0.8117),position=(-1.5,0.25,1.5)),
        Viewpoint(description='port Quarter',orientation=(0,-0.9487,0,2.3299),position=(-1.5,0.25,-1.5)),
        Transform(DEF='Ship',
          children=[
          ROUTE(fromField='value_changed',fromNode='SpinTheShip',toField='rotation',toNode='Ship'),
          Viewpoint(description='StbRudder',orientation=(0,1,0,-1.57),position=(-0.9,-0.1,0.14)),
          Transform(DEF='Ship4',
            children=[
            Viewpoint(description='.50cal',orientation=(0,1,0,1.57),position=(-0.05,0.28,0)),
            Viewpoint(description='Bridge',fieldOfView=0.43,orientation=(0,-0.9935,0,1.57079),position=(0.14,0.27,0)),
            Viewpoint(description='Radar',fieldOfView=0.45,orientation=(-0.1888,-0.982,0,1.57079),position=(-0.6,0.5,0)),
            ROUTE(fromField='value_changed',fromNode='SpinTheShip3',toField='rotation',toNode='Ship4'),
            Transform(scale=(0.15,0.15,0.15),
              children=[
              Inline(url=["U11.x3d","https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNavalAcademyBrazil/U11.x3d"])])])])])]),
    Transform(translation=(0,-5,0),
      children=[
      Shape(DEF='ocean',
        appearance=Appearance(
          material=Material(ambientIntensity=1,diffuseColor=(0,0.219608,0.419608),shininess=1,transparency=0.16)),
        geometry=Box(size=(200,10,100),solid=False))]),
    Transform(
      children=[
      Shape(DEF='path',
        geometry=Extrusion(crossSection=[(0,0),(0.01,0),(0,-0.01),(0,0.01),(-0.01,0),(0.01,0.01),(0,0)],spine=[(-3,0,0),(-2.5,0,0),(-2,0,0),(-1.5,0,0),(-1,0,0),(-0.5,0,0),(0,0,0),(0.48,0,0.1),(0.95,0,0.28),(1.35,0,0.55),(1.65,0,0.95),(1.88,0,1.4),(1.96,0,1.9),(2.05,0,2.45),(2.25,0,2.9),(2.5,0,3.3),(2.9,0,3.68),(3.3,0,3.9),(3.8,0,4),(4.3,0,4),(4.8,0,3.9),(5.2,0,3.65),(5.6,0,3.3),(5.85,0,2.9),(6.02,0,2.4),(6.08,0,1.9),(5.95,0,1.4),(5.78,0,0.95),(5.42,0,0.55),(5,0,0.25),(4.55,0,0.05),(4,0,0),(3.5,0,0),(3,0,0),(2.5,0,0),(2,0,0),(1.5,0,0),(1,0,0),(0.5,0,0),(0,0,0),(-0.5,0,0)]),
        appearance=Appearance(
          material=Material(ambientIntensity=1,diffuseColor=(0.858824,0.568627,0),shininess=0.56,transparency=0.36)))]),
    Transform(translation=(1,0,1),
      children=[
      Shape(DEF='accel',
        geometry=Box(size=(0.1,0.1,0.1)),
        appearance=Appearance(
          material=Material(ambientIntensity=1,diffuseColor=(1,1,0.980392),shininess=0.56,transparency=0.36))),
      TouchSensor(DEF='acceleratorSensor',description='Touch to change ships speed')]),
    Script(DEF='ControlScript',
      field=[
      field(accessType='inputOnly',name='buttonMotionDone',type='SFBool'),
      field(accessType='initializeOnly',name='buttonPushCount',type='SFInt32',value=0),
      field(accessType='outputOnly',name='speed',type='SFTime'),
      field(accessType='inputOnly',name='buttonPushTime',type='SFTime'),
      field(accessType='outputOnly',name='startTimeReset',type='SFTime')]),
    ROUTE(fromField='isActive',fromNode='acceleratorSensor',toField='buttonMotionDone',toNode='ControlScript'),
    ROUTE(fromField='speed',fromNode='ControlScript',toField='cycleInterval',toNode='MovementTimer'),
    ROUTE(fromField='touchTime',fromNode='acceleratorSensor',toField='pauseTime',toNode='MovementTimer'),
    ROUTE(fromField='touchTime',fromNode='acceleratorSensor',toField='buttonPushTime',toNode='ControlScript'),
    ROUTE(fromField='touchTime',fromNode='acceleratorSensor',toField='pauseTime',toNode='MovementTimer'),
    ROUTE(fromField='startTimeReset',fromNode='ControlScript',toField='resumeTime',toNode='MovementTimer')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Butakov.py")
