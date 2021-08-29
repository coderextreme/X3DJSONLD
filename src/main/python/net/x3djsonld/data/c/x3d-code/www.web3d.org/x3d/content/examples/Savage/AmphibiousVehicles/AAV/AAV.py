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
    meta(content='AAV.x3d',name='title'),
    meta(content='The AAV is a fully-tracked Amphibious Assault Vehicle (Patrol), aka AAV7PA1 and LVTP7.',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='1 June 2001',name='created'),
    meta(content='19 December 2014',name='modified'),
    meta(content='AAV1.jpg',name='photo'),
    meta(content='aav3.jpg',name='photo'),
    meta(content='capex7.jpg',name='photo'),
    meta(content='aavp7a1.pdf',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/land/aavp7a1.htm',name='reference'),
    meta(content='http://www.technogap.com/aavp7a1.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/AAV.x3d',name='identifier'),
    meta(content='AAV AAV7PA1 LVTP7',name='subject'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.15,0.2,0.8)]),
    Viewpoint(description='AAV from behind',orientation=(0,-1,0,1.57),position=(-12,2.7,0)),
    Viewpoint(description='AAV from ahead',orientation=(0,1,0,1.57),position=(12,2.7,0)),
    LOD(range=[500,2000],
      children=[
      Group(DEF='AAVGroup',
        children=[
        Transform(DEF='AAV',
          children=[
          Transform(DEF='FullTrack',rotation=(0,1,0,1.57),scale=(0.5,0.5,0.5),translation=(-1.5,-1,-0.3),
            children=[
            Inline(url=["FullTrack.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/FullTrack.x3d","FullTrack.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/FullTrack.wrl"])]),
          Transform(DEF='Chassis',
            children=[
            Inline(url=["Chassis.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/Chassis.x3d","Chassis.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/Chassis.wrl"])]),
          Transform(DEF='ChassisHatch',rotation=(0,1,0,1.57),scale=(0.9,0.9,0.9),translation=(0.4,1.74,-1),
            children=[
            Inline(url=["ChassisHatch.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/ChassisHatch.x3d","ChassisHatch.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/ChassisHatch.wrl"])]),
          Transform(DEF='Turret',rotation=(0,1,0,1.57),scale=(0.5,0.5,0.5),translation=(-0.65,2.5,1.33),
            children=[
            Inline(url=["Turret.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/Turret.x3d","Turret.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/Turret.wrl"]),
            CylinderSensor(DEF='TurretCylinderSensor',description='click and drag to rotate turret',maxAngle=3.14,minAngle=-3.14)]),
          Transform(DEF='RearLeftAntennaINLINE',scale=(0.6,0.6,0.6),translation=(-5.3,1.425,-1.633),
            children=[
            Inline(DEF='RearAntenna',url=["RearAntenna.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/RearAntenna.x3d","RearAntenna.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/RearAntenna.wrl"])]),
          Transform(DEF='RearRightAntennaINLINE',scale=(0.6,0.6,0.6),translation=(-5.3,1.425,1.633),
            children=[
            Inline(USE='RearAntenna')]),
          Transform(DEF='RightAAVHeadLight',rotation=(0,1,0,1.57),scale=(0.85,0.85,0.85),translation=(2.15,1.575,-1.2),
            children=[
            Inline(DEF='HeadLights',url=["HeadLights.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/HeadLights.x3d","HeadLights.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/HeadLights.wrl"])]),
          Transform(DEF='LeftAAVHeadLight',rotation=(0,1,0,1.57),scale=(0.85,0.85,0.85),translation=(2.15,1.575,1),
            children=[
            Inline(USE='HeadLights')]),
          Transform(DEF='ForwardAntenna',scale=(0.6,0.5,0.6),translation=(-3.6,1.6,1.666),
            children=[
            Inline(url=["ForwardAntenna.x3d","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/ForwardAntenna.x3d","ForwardAntenna.wrl","https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/ForwardAntenna.wrl"])])])]),
      Shape(DEF='MediumRangeBox',
        geometry=Box(size=(5.5,2.5,3)),
        appearance=Appearance(
          material=Material(diffuseColor=(0.15,0.65,0.2)))),
      WorldInfo(info=["null node"])]),
    ROUTE(fromField='rotation_changed',fromNode='TurretCylinderSensor',toField='set_rotation',toNode='Turret')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for AAV.py")
