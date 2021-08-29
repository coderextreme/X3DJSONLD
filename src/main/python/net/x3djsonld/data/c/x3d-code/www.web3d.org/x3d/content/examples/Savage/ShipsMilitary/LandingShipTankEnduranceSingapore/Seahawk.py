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
    meta(content='Seahawk.x3d',name='title'),
    meta(content='Michael Collins, modified by Boon Chuan LEE',name='creator'),
    meta(content='10 March 2001',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='A SH60/HH60 SeaHawk twin-engine helicopter is used for anti-submarine warfare, search and rescue, drug interdiction, anti-ship warfare, cargo lift, and special operations. Created using indexed face sets.',name='description'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/SeaHawk.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.570796],groundColor=[(0,.2,1),(0,.5,1),(0.8,0.9,0.9)],skyAngle=[1.309,1.571],skyColor=[(.5,.5,.9),(0,.5,1),(1,0.8,0.8)]),
    Viewpoint(description='Helo Right',position=(10,0.5,30)),
    Viewpoint(description='Helo Front',orientation=(0,1,0,1.57),position=(45,0.5,2.5)),
    Viewpoint(description='Helo Left',orientation=(0,1,0,3.14),position=(10,0.5,-25)),
    Viewpoint(description='Helo Back',orientation=(0,1,0,-1.57),position=(-30,0.5,0.5)),
    Viewpoint(description='Cockpit View Right',orientation=(0,1,0,-3.14),position=(16,2.8,5)),
    Viewpoint(description='Cockpit View Front',orientation=(0,1,0,-1.57),position=(17.2,2.7,2)),
    Viewpoint(description='Cockpit View Left',position=(16,2.8,-2)),
    Transform(rotation=(0,1,0,3.14),
      children=[
      Transform(scale=(1,0.97,1.2),translation=(-.5,0.24,-2.5),
        children=[
        Inline(url=["TailSection.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/TailSection.wrl","TailSection.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/TailSection.x3d"])]),
      Transform(scale=(.7,.7,.7),translation=(-13,4.7,-2.3),
        children=[
        Inline(url=["RotorHead.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/RotorHead.wrl","RotorHead.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/RotorHead.x3d"])]),
      Transform(rotation=(0,1,0,3.12),
        children=[
        Inline(url=["Fuselage.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/Fuselage.wrl","Fuselage.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/Fuselage.x3d"])]),
      Transform(rotation=(0,1,0,1.57),scale=(.14,.14,.14),translation=(-8,-.62,-2.5),
        children=[
        Inline(url=["RearWheel.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/RearWheel.wrl","RearWheel.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/RearWheel.x3d"])]),
      Transform(rotation=(0,1,0,-1.57),scale=(.2,.2,.2),translation=(-16,-.5,-0.1),
        children=[
        Inline(url=["RightWheel.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/RightWheel.wrl","RightWheel.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/RightWheel.x3d"])]),
      Transform(rotation=(0,1,0,-1.65),scale=(.2,.2,.2),translation=(-16,-.5,-4.55),
        children=[
        Inline(url=["LeftWheel.wrl","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/LeftWheel.wrl","LeftWheel.x3d","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/LeftWheel.x3d"])]),
      Transform(rotation=(1,0,0,3.2),translation=(-13,3,-1),
        children=[
        Transform(rotation=(0,0,1,1.57),scale=(.3,.4,.3),
          children=[
          Group(DEF='Engine',
            children=[
            Transform(
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(),),
                geometry=Extrusion(creaseAngle=3.14,crossSection=[(-0.05,-5),(-0.15,-4.95),(-0.25,-4.8),(-0.35,-4.45),(-0.45,-4),(-0.45,4),(-0.35,4.45),(-0.25,4.8),(-0.15,4.95),(-0.05,5),(0.05,5),(0.15,4.95),(0.25,4.8),(0.35,4.45),(0.45,4),(0.45,-4),(0.35,-4.45),(0.25,-4.8),(0.15,-4.95),(0.05,-5),(-0.05,-5)],spine=[(0.00,0.0,-2.00),(0.77,0.0,-1.95),(1.20,0.0,-1.80),(1.41,0.0,-1.56),(1.58,0.0,-1.15),(1.56,0.0,-0.77),(1.54,0.0,0.00),(1.40,0.0,0.77),(0.90,0.0,1.70),(0.60,0.0,1.95),(0.00,0.0,2.00),(-0.60,0.0,1.95),(-0.90,0.0,1.70),(-1.40,0.0,0.77),(-1.54,0.0,0.00),(-1.56,0.0,-0.77),(-1.58,0.0,-1.15),(-1.41,0.0,-1.56),(-1.20,0.0,-1.80),(-0.77,0.0,-1.95),(0.00,0.0,-2.00)]))]),
            Transform(rotation=(0,0,1,3.2),
              children=[
              Group(
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(diffuseColor=(.1,.1,.1))),
                  geometry=Cylinder(height=4,radius=1.8))])])])])]),
      Transform(rotation=(0,0,1,1.57),scale=(.3,.4,.3),translation=(-13,3,-3.6),
        children=[
        Group(USE='Engine')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Seahawk.py")
