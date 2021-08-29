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
    meta(content='EuroFighterWithMissiles.x3d',name='title'),
    meta(content='Eurofighter, four mounted missiles, able to fire one missile, to fire touch the red blinking ball inside the fusselage or above the jet, for transation infos look into the basic EuroFighter file',name='description'),
    meta(content='27 July 2004',name='created'),
    meta(content='18 December 2014',name='modified'),
    meta(content='Major Axel Weber',name='creator'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/EuroFighter/EuroFighterWithMissiles.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='/Textures/',name='textures'),
    meta(content='/Sounds/',name='sounds'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(avatarSize=[3,3,1.5],speed=5),
    #  Eurofighter fireing a missile 
    Group(DEF='MotherGroup',
      children=[
      Transform(DEF='Steering',center=(5,2.,0),
        children=[
        Group(DEF='Airplane',
          children=[
          Transform(DEF='T_Airplane',rotation=(1,0,0,-1.571),translation=(0,-0.5,0),
            children=[
            Inline(DEF='EuroFighter',url=["EuroFighter.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/EuroFighter/EuroFighter.x3d","EuroFighter.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/EuroFighter/EuroFighter.wrl"])]),
          Transform(DEF='InnerMissilesLeft',rotation=(1,0,0,0),scale=(0.2,0.2,0.2),translation=(25,0.3,4),
            children=[
            Inline(DEF='Missile',url=["../../Weapons/Missiles/AIM120Missile.x3d","https://savage.nps.edu/Savage/Weapons/Missiles/AIM120Missile.x3d","../../Weapons/Missiles/AIM120Missile.wrl","https://savage.nps.edu/Savage/Weapons/Missiles/AIM120Missile.wrl"])]),
          Transform(DEF='OuterMissilesLeft',rotation=(1,0,0,0),scale=(0.2,0.2,0.2),translation=(25.5,0.3,10),
            children=[
            Inline(USE='Missile')]),
          Transform(DEF='InnerMissilesRight',rotation=(1,0,0,0),scale=(0.2,0.2,0.2),translation=(25,0.3,-4),
            children=[
            Inline(USE='Missile')]),
          Transform(DEF='MissileStarter',translation=(-10,30,20),
            children=[
            TimeSensor(DEF='CLOCK',loop=True),
            ColorInterpolator(DEF='COLOR_PATH',key=[0.0,0.5,0.5,1.0],keyValue=[(1,0,0),(1,0,0),(1,1,1),(1,1,1)]),
            IntegerTrigger(DEF='SwitchTrigger',integerKey=0),
            Group(DEF='Starter1',
              children=[
              Transform(DEF='FireButton1',translation=(17.3,-27.15,-20),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(DEF='RedBlink',diffuseColor=(1,0.2,0.2),emissiveColor=(1,0,0),transparency=0.3)),
                  geometry=Sphere(radius=0.05))]),
              Transform(DEF='FireButtonOut_1',translation=(10,-15,-20),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(USE='RedBlink')),
                  geometry=Sphere(),)]),
              TouchSensor(DEF='MissileButton1',description='Fire the missile')])]),
          ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='COLOR_PATH'),
          ROUTE(fromField='value_changed',fromNode='COLOR_PATH',toField='set_emissiveColor',toNode='RedBlink'),
          Switch(DEF='MissileSwitcher1',whichChoice=1,
            children=[
            Group(DEF='MissileOnTheWay',
              children=[
              Transform(DEF='FiredMissile1',scale=(0.2,0.2,0.2),translation=(25,0.3,-10),
                children=[
                Sound(DEF='MissileStartSound',maxBack=1500,maxFront=1500,
                  source=AudioClip(DEF='Sound',description='Flight Sound',url=["Sounds/MissileStart.wav","https://savage.nps.edu/Savage/AircraftFixedWing/EuroFighter/Sounds/MissileStart.wav","../../AircraftFixedWing/EuroFighter/Sounds/MissileStart.wav"])),
                LOD(DEF='FarFlighingMissile',range=[1000,1200],
                  children=[
                  Inline(DEF='StartingMissile',url=["StartingAIM120Missile.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/EuroFighter/StartingAIM120Missile.x3d","StartingAIM120Missile.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/EuroFighter/StartingAIM120Missile.wrl"]),
                  Inline(DEF='StartingAIM120MissileLOW',url=["StartingAIM120MissileLow.x3d","https://savage.nps.edu/Savage/AircraftFixedWing/EuroFighter/StartingAIM120MissileLow.x3d","StartingAIM120MissileLow.wrl","https://savage.nps.edu/Savage/AircraftFixedWing/EuroFighter/StartingAIM120MissileLow.wrl"]),
                  Group(DEF='StartingMissileNnull')])])]),
            Group(DEF='StaticMissile',
              children=[
              Transform(DEF='Missile1',rotation=(1,0,0,0),scale=(0.2,0.2,0.2),translation=(25,0.3,-10),
                children=[
                Inline(USE='Missile')])])]),
          TimeSensor(DEF='FlightClock',cycleInterval=40,loop=True),
          OrientationInterpolator(DEF='Jaw_Roll',key=[0.0,0.16,0.20,0.26,0.36,0.45,0.50,0.63,0.70,0.76,0.89,0.95,1.00],keyValue=[(0,1,0,0),(0,1,0,0),(0.46,0.86,-0.19,0.95),(0,1,0,1.54),(0,1,0,1.54),(0.04,0.2,-0.08,2.2),(0,1,0,3.14),(0,1,0,3.14),(-0.03,0.2,-.08,3.8),(0,1,0,4.71),(0,1,0,4.71),(-0.2,0.98,-0.08,5.4),(0,1,0,0)]),
          PositionInterpolator(DEF='JetFlightPath',key=[0.0,0.16,0.20,0.26,0.36,0.45,0.50,0.63,0.70,0.76,0.89,0.95,1.00],keyValue=[(300.0,0.0,-100.0),(0.0,0.0,-100.0),(-130.0,0.0,-30.0),(-200.0,0.0,100.0),(-200.0,0.0,700.0),(-130.0,-10.0,830.0),(0.0,0.0,900.0),(300.0,0.0,900.0),(430.0,-10.0,730.0),(500.0,0.0,600.0),(500.0,0.0,100.0),(430.0,-10.0,-30.0),(300.0,0.0,-100.0)]),
          TimeSensor(DEF='StartClock',cycleInterval=10),
          PositionInterpolator(DEF='MissileFlightPath',key=[.0,.05,.075,.1,.25,.5,.875,1.0],keyValue=[(25.0,0.0,-10.0),(23.0,0.0,-10.0),(20.0,0.0,-10.0),(-0.0,0.0,-5.0),(-200.0,0.0,0.0),(-400.0,0.0,0.0),(-800.0,0.0,0.0),(-1200.0,0.0,0.0)])]),
        Sound(DEF='FlightBy',location=(0,0,300),maxBack=1000,maxFront=1000,minBack=30,minFront=30,priority=0.6,
          source=AudioClip(DEF='FlighBy',description='FlighSound',loop=True,url=["Sounds/FlyBy.wav","https://savage.nps.edu/Savage/AircraftFixedWing/EuroFighter/Sounds/FlyBy.wav"]))]),
      ROUTE(fromField='touchTime',fromNode='MissileButton1',toField='set_startTime',toNode='StartClock'),
      ROUTE(fromField='fraction_changed',fromNode='StartClock',toField='set_fraction',toNode='MissileFlightPath'),
      ROUTE(fromField='isActive',fromNode='MissileButton1',toField='set_boolean',toNode='SwitchTrigger'),
      ROUTE(fromField='triggerValue',fromNode='SwitchTrigger',toField='whichChoice',toNode='MissileSwitcher1'),
      ROUTE(fromField='value_changed',fromNode='MissileFlightPath',toField='set_translation',toNode='FiredMissile1'),
      ROUTE(fromField='touchTime',fromNode='MissileButton1',toField='set_startTime',toNode='Sound')]),
    Viewpoint(description='Eurofighter: Default view point',position=(20,0,40)),
    Viewpoint(DEF='NearJet',description='Eurofighter: Pilots view from outside',orientation=(0,1,0,1.57),position=(50,5,5)),
    Viewpoint(DEF='PilotView',description='Eurofighter: Pilots view from inside the cockpit',fieldOfView=0.9,orientation=(0,1,-0,1.57),position=(10.2,3.8,0.2)),
    Viewpoint(DEF='RightRear',description='Eurofighter: Rear, right side',fieldOfView=0.71,orientation=(0,1,0,2.0),position=(80,-2,-30)),
    Viewpoint(DEF='LeftFront',description='Eurofighter: Front, left side',fieldOfView=0.7,orientation=(0,1,0,-1.0),position=(-40,2,40))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for EuroFighterWithMissiles.py")
