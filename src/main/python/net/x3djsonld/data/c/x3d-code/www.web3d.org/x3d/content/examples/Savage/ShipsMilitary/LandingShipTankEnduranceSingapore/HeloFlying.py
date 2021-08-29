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
    meta(content='HeloFlying.x3d',name='title'),
    meta(content='Boon Chuan LEE',name='creator'),
    meta(content='6 September 2001',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='Helo Flight Path',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/HeloFlying.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,.2,1),(0,.5,1),(0.8,0.9,0.9)],skyAngle=[1.309,1.571],skyColor=[(.5,.5,.9),(0,.5,1),(1,0.8,0.8)]),
    Viewpoint(position=(0,16,225)),
    Group(DEF='HeloGroup',
      children=[
      Transform(DEF='Helo',
        children=[
        Transform(DEF='Helo1Roll',
          children=[
          Transform(DEF='Helo1Pitch',
            children=[
            Transform(
              children=[
              Inline(url=["Seahawk.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/Seahawk.wrl","Seahawk.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/Seahawk.x3d"])])])])]),
      TouchSensor(DEF='Touch'),
      TimeSensor(DEF='clock',cycleInterval=38),
      PositionInterpolator(DEF='Helomover',key=[0,0.1,0.15,0.2,0.3,0.4,0.5,0.56,0.62,0.68,0.73,0.8,0.88,0.94,1],keyValue=[(0.0,0.0,0.0),(1.0,30.0,-10.0),(115.0,40.0,-35.0),(195.0,45.0,-30.0),(310.0,60.0,10.0),(160.0,50.0,50.0),(0.0,50.0,55.0),(-100.0,55.0,30.0),(-135.0,60.0,10.0),(-140.0,60.0,-20.0),(-90.0,40.0,-25.0),(-30.0,20.0,-15.0),(-5.0,15.0,-10.0),(0.0,10.0,0.0),(0.0,0.0,0.0)]),
      OrientationInterpolator(DEF='Heloyawer',key=[0,0.1,0.2,0.3,0.35,0.4,0.43,0.45,0.47,0.5,0.6,0.7],keyValue=[(1,0,0,0),(1,0,0,-0.12),(1,0,0,-0.1),(1,0,0,0.18),(1,0,0,0.2),(1,0,0,0.15),(1,0,0,0.785),(1,0,0,3.14),(1,0,0,4.71),(1,0,0,-0.08),(1,0,0,0),(1,0,0,0)]),
      OrientationInterpolator(DEF='Helobanker',key=[0,0.05,0.1,0.14,0.2,0.3,0.4,0.5,0.64,0.7,0.76,0.86,0.9,0.93,0.96,1],keyValue=[(0,1,0,0),(0,1,0,0),(0,1,0,0.7),(0,1,0,0),(0,1,0,-0.5),(0,1,0,-1.57),(0,1,0,-3.14),(0,1,0,-3.14),(0,1,0,-3.14),(0,1,0,-6),(0,1,0,0),(0,1,0,-0.15),(0,1,0,0.15),(0,1,0,0),(0,1,0,0),(0,1,0,0)]),
      OrientationInterpolator(DEF='Helopitch',key=[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.76,0.86,0.9,0.93,0.96,1],keyValue=[(0,0,1,0),(0,0,1,0),(0,0,1,0.3),(0,0,1,0.3),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,-0.3),(0,0,1,-0.2),(0,0,1,-0.2),(0,0,1,0.13),(0,0,1,0.08),(0,0,1,0),(0,0,1,0)]),
      Sound(direction=(1.0,1.0,1.0),maxBack=200.0,maxFront=200.0,minBack=20.0,minFront=20.0,
        source=AudioClip(DEF='HeloFlyingAudioClip',loop=True,url=["HeloRotorSound.wav","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/HeloRotorSound.wav"]))]),
    ROUTE(fromField='touchTime',fromNode='Touch',toField='set_startTime',toNode='clock'),
    ROUTE(fromField='fraction_changed',fromNode='clock',toField='set_fraction',toNode='Helomover'),
    ROUTE(fromField='value_changed',fromNode='Helomover',toField='set_translation',toNode='Helo'),
    ROUTE(fromField='fraction_changed',fromNode='clock',toField='set_fraction',toNode='Helobanker'),
    ROUTE(fromField='fraction_changed',fromNode='clock',toField='set_fraction',toNode='Heloyawer'),
    ROUTE(fromField='value_changed',fromNode='Heloyawer',toField='set_rotation',toNode='Helo1Roll'),
    ROUTE(fromField='value_changed',fromNode='Helobanker',toField='set_rotation',toNode='Helo1Pitch'),
    ROUTE(fromField='fraction_changed',fromNode='clock',toField='set_fraction',toNode='Helopitch'),
    ROUTE(fromField='value_changed',fromNode='Helopitch',toField='set_rotation',toNode='Helo')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HeloFlying.py")
