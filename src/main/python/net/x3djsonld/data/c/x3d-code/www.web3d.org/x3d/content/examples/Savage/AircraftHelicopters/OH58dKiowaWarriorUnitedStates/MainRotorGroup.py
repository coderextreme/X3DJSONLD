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
    meta(content='MainRotorGroup.x3d',name='title'),
    meta(content='This file defines a main rotor group that is inlined to create a helicopter',name='description'),
    meta(content='Jane Wu (adapted from the original mainrotorgroup.wrl created for vrpt demo helicopter)',name='creator'),
    meta(content='8 January 2001',name='created'),
    meta(content='1 January 2019',name='modified'),
    meta(content='Del Beilstein',name='contributor'),
    meta(content='MastMountedSight.x3d',name='reference'),
    meta(content='RotorDisk.x3d',name='reference'),
    meta(content='Cowling.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/MainRotorGroup.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0.0),(0.4,0.25,0.2),(0.6,0.60,0.6)],skyAngle=[0.785,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(1.0,1.0,1.0)]),
    Viewpoint(DEF='Distant_view',description='Distant view of MMS'),
    Viewpoint(DEF='Close_up_view',description='Close up view of MMS',jump=False,position=(0,2,3)),
    Group(
      children=[
      Transform(rotation=(0.0,1.0,0,1.57),scale=(0.6,0.6,0.6),translation=(0.0,0.1,0.0),
        children=[
        Inline(url=["MastMountedSight.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/MastMountedSight.x3d","MastMountedSight.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/MastMountedSight.wrl"])]),
      Transform(
        children=[
        Inline(url=["RotorDisk.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/RotorDisk.x3d","RotorDisk.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/RotorDisk.wrl"])]),
      Transform(rotation=(0,0,1,-.01),translation=(-3.0,-1.35,0.3),
        children=[
        Inline(url=["Cowling.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/Cowling.x3d","Cowling.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/Cowling.wrl"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MainRotorGroup.py")
