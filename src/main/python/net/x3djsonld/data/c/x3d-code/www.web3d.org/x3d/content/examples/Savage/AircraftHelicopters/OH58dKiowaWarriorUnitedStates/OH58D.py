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
    meta(content='OH58D.x3d',name='title'),
    meta(content='Main helicopter file for OH 58 D - Kiowa Warrior.',name='description'),
    meta(content='Doug Miller (original creator), Jane Wu (revised)',name='creator'),
    meta(content='11 September 1999',name='created'),
    meta(content='1 January 2019',name='modified'),
    meta(content='Del Beilstein',name='contributor'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/OH58D.x3d',name='identifier'),
    meta(content='Hughes500HoverInteriorMedium-cd21-no59-10sec.wav',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/oh-58.htm',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0.0),(0.4,0.25,0.2),(0.6,0.60,0.6)],skyAngle=[0.785,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(1.0,1.0,1.0)]),
    Group(DEF='HELICOPTER',
      children=[
      Sound(direction=(1.0,1.0,1.0),maxBack=30.0,maxFront=30.0,minBack=20.0,minFront=20.0,
        source=AudioClip(DEF='HELO_FLYING_AUDIO_CLIP',description='helo flying',loop=True,url=["Hughes500HoverInteriorMedium-cd21-no59-10sec.wav","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/Hughes500HoverInteriorMedium-cd21-no59-10sec.wav"])),
      Transform(DEF='TAIL_BOOM',rotation=(0.0,0.0,1.0,-1.57),scale=(1.2,1.2,1.0),translation=(-7.65,0.1,0.0),
        children=[
        Inline(url=["TailBoom.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/TailBoom.wrl","TailBoom.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/TailBoom.x3d"])]),
      Transform(DEF='MAIN_ROTOR_GROUP',rotation=(0,0,1,.009),translation=(-.05,1.65,-.10),
        children=[
        Inline(url=["MainRotorGroup.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/MainRotorGroup.wrl","MainRotorGroup.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/MainRotorGroup.x3d"])]),
      Transform(rotation=(0.0,1.0,0.0,-1.57),scale=(1.3,1.3,1.3),translation=(2.1,0.3,0.0),
        children=[
        Inline(url=["MainFuselage.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/MainFuselage.wrl","MainFuselage.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/MainFuselage.x3d"]),
        Transform(rotation=(1,0,0,-1.57),scale=(.95,1,1),translation=(0,-1.3,1),
          children=[
          Inline(url=["CockpitTop.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/CockpitTop.wrl","CockpitTop.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/CockpitTop.x3d"])])]),
      Transform(rotation=(1.0,0.0,0.0,-1.57),translation=(0.1,-1.0,2.0),
        children=[
        Transform(rotation=(0.0,0.0,1.0,-1.57),
          children=[
          Inline(DEF='RocketPod',url=["RocketPod.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/RocketPod.wrl","RocketPod.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/RocketPod.x3d"]),
          Transform(rotation=(1.0,0.0,0.0,1.57),translation=(-1.1,0.0,-0.22),
            children=[
            Inline(DEF='WeaponsPylon',url=["WeaponsPylon.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/WeaponsPylon.wrl","WeaponsPylon.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/WeaponsPylon.x3d"])])])]),
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
        Inline(url=["Skids.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/Skids.wrl","Skids.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/Skids.x3d"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for OH58D.py")
