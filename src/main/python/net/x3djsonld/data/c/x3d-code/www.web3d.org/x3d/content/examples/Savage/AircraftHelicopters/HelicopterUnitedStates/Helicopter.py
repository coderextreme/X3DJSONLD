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
    meta(content='Helicopter.x3d',name='title'),
    meta(content='Generic helicopter, pseudo combination of OH-58 Kiowa Warrior and UH-1 Huey.',name='description'),
    meta(content='Doug Miller (original creator), Jane Wu (revised)',name='creator'),
    meta(content='11 September 1999',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Helicopter.x3d',name='identifier'),
    meta(content='Hughes500HoverInteriorMedium-cd21-no59-10sec.wav',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/ah-64.htm',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='HELICOPTER',
      children=[
      Sound(direction=(1.0,1.0,1.0),maxBack=30.0,maxFront=30.0,minBack=20.0,minFront=20.0,
        source=AudioClip(DEF='HELO_FLYING_AUDIO_CLIP',description='Hughes500HoverInterior',loop=True,url=["Hughes500HoverInteriorMedium-cd21-no59-10sec.wav","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Hughes500HoverInteriorMedium-cd21-no59-10sec.wav"])),
      Transform(DEF='TAIL_BOOM',rotation=(0.0,0.0,1.0,-1.57),scale=(1.2,1.2,1.0),translation=(-8.0,0.1,0.0),
        children=[
        Inline(url=["TailBoom.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/TailBoom.wrl","TailBoom.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/TailBoom.x3d"])]),
      Transform(DEF='MAIN_ROTOR_GROUP',rotation=(0.0,0.0,1.0,-0.087),translation=(-0.3,1.5,0.0),
        children=[
        Inline(url=["MainRotorGroup.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/MainRotorGroup.wrl","MainRotorGroup.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/MainRotorGroup.x3d"])]),
      Transform(rotation=(0.0,1.0,0.0,-1.57),scale=(1.3,1.3,1.3),translation=(1.0,0.3,0.0),
        children=[
        Inline(url=["Fuselage.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/MainRotorGroup.wrl","MainRotorGroup.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/MainRotorGroup.x3d"])]),
      Transform(rotation=(1.0,0.0,0.0,-1.57),translation=(0.1,-1.0,2.0),
        children=[
        Transform(rotation=(0.0,0.0,1.0,-1.57),
          children=[
          Inline(DEF='RocketPod',url=["RocketPod.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/RocketPod.wrl","RocketPod.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/RocketPod.x3d"]),
          Transform(rotation=(1.0,0.0,0.0,1.57),translation=(-1.1,0.0,-0.22),
            children=[
            Inline(DEF='WeaponsPylon',url=["WeaponsPylon.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/WeaponsPylon.wrl","WeaponsPylon.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/WeaponsPylon.x3d"])])])]),
      Transform(rotation=(1.0,0.0,0.0,-1.57),translation=(0.1,-1.0,-2.0),
        children=[
        Transform(rotation=(0.0,0.0,1.0,-1.57),
          children=[
          Inline(USE='RocketPod'),
          Transform(rotation=(0.0,0.71,0.71,3.14),translation=(1.1,0.0,-0.22),
            children=[
            Inline(USE='WeaponsPylon')])])]),
      Transform(translation=(0.0,-1.8,0.0),
        children=[
        Inline(url=["Skids.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Skids.wrl","Skids.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Skids.x3d"])]),
      Transform(translation=(-3.2,0.25,0.25),
        children=[
        Inline(url=["Cowling.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Cowling.wrl","Cowling.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Cowling.x3d"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Helicopter.py")
