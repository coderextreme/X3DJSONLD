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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='Animation.x3d',name='title'),
    meta(content='DDG-51 Flight IIA Arleigh Burke Destroyer with integrated VLS Tomahawk scene from Savage database missiles directory and SH-60B Fly off from LPD directory. Click Hanger doors to open/close and Rast units to extend/retract. BEST VIEWED IN OPEN GL MODE FROM THE PREFERENCES WINDOW',name='description'),
    meta(content='LT Joe Sears, USN',name='creator'),
    meta(content='21 July 2003',name='created'),
    meta(content='22 August 2018',name='modified'),
    meta(content='http://combatindex.com/store/3d',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/ddg-51.htm',name='drawing'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/Animation.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(backUrl=["clouds.jpg","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/clouds.jpg"],frontUrl=["clouds.jpg","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/clouds.jpg"],leftUrl=["clouds.jpg","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/clouds.jpg"],rightUrl=["clouds.jpg","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/clouds.jpg"],topUrl=["clouds.jpg","https://savage.nps.edu/Savage/ShipsMilitary/CarrierSaratogaUnitedStates/clouds.jpg"]),
    Viewpoint(description='STBD side',orientation=(-0.047,0.998,0.042,1.6342),position=(140.2,8,-88.7)),
    Viewpoint(description='Flight Operations',orientation=(-0.977,-0.207,0.045,0.1503),position=(-0.9,28.2,75.2)),
    Viewpoint(description='25 meters aft of helo hanger looking forward',orientation=(-1,0,0.007,0.1154),position=(0,1.9,26.5)),
    Viewpoint(description='Bow Forward Superstructure',orientation=(0.002,0.999,0.053,3.101),position=(1,6.4,-182.1)),
    Viewpoint(description='STBD Chaff Launchers',orientation=(-0.109,0.981,0.161,1.334),position=(23.1,6.9,-78.2)),
    Viewpoint(description='Combat Systems FWD to Aft',orientation=(0.024,0.996,-0.081,2.3639),position=(22.1,5.7,-102.2)),
    Viewpoint(description='Overhead',orientation=(-0.581,0.57,0.581,2.1039),position=(0.1,152.4,-75.5)),
    Viewpoint(description='MK 45 5 Inch Gun',orientation=(-1,0.016,0.003,0.9041),position=(0,3,-120)),
    Transform(translation=(0,-15,0),
      children=[
      Transform(translation=(0,-1,0),
        children=[
        Group(DEF='HeloHanger',
          children=[
          Transform(translation=(0,2.55,0),
            children=[
            Inline(url=["HeloHanger.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/HeloHanger.x3d","HeloHanger.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/HeloHanger.wrl"])])]),
        Group(DEF='HullBottom',
          children=[
          Transform(
            children=[
            Inline(url=["Hull.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/Hull.x3d","Hull.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/Hull.wrl"])])]),
        Group(DEF='SuperstructureAft',
          children=[
          Transform(
            children=[
            Inline(url=["AftSuperstructure.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/AftSuperstructure.x3d","AftSuperstructure.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/AftSuperstructure.wrl"])])]),
        Group(DEF='FWDSuperstructure',
          children=[
          Transform(translation=(0,.05,0),
            children=[
            Inline(url=["ForwardSuperstructure.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/ForwardSuperstructure.x3d","ForwardSuperstructure.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/ForwardSuperstructure.wrl"])])]),
        Group(DEF='MK32MOD14SVTT',
          children=[
          Transform(DEF='SVTTSTBD',translation=(9.5,6.05,-70),
            children=[
            Inline(DEF='SVTT',url=["SVTT.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/SVTT.x3d","SVTT.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/SVTT.wrl"])]),
          Transform(DEF='SVTTPort',translation=(-9.5,6.05,-70),
            children=[
            Inline(USE='SVTT')])]),
        Group(DEF='Mk45Gun',
          children=[
          Transform(DEF='FiveInchGun',rotation=(0,1,0,-1.57),scale=(.75,.75,.75),translation=(0,8.3,-126),
            children=[
            Inline(url=["../FrigateYavuzTurkey/Mk45.x3d","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Mk45.x3d","../FrigateYavuzTurkey/Mk45.wrl","https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Mk45.wrl"])])]),
        Group(DEF='AntennaGroup',
          children=[
          Transform(DEF='SRS-1AntennaGroup',
            children=[
            Inline(url=["SRS1AntennaGroup.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/SRS1AntennaGroup.x3d","SRS1AntennaGroup.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/SRS1AntennaGroup.wrl"])])]),
        Switch(DEF='MissileLauncherWG',whichChoice=0,
          children=[
          Transform(scale=(1.2,1.2,1.4),translation=(0,10.6,-26),
            children=[
            Inline(url=["DDG51FlightIIAMissileLaunch.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/DDG51FlightIIAMissileLaunch.x3d","DDG51FlightIIAMissileLaunch.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/DDG51FlightIIAMissileLaunch.wrl"])]),
          Transform(scale=(1.2,1.2,1.4),translation=(0,10.6,-26),
            children=[
            Inline(url=["MissileLaunchers.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/MissileLaunchers.x3d","MissileLaunchers.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/MissileLaunchers.wrl"])])]),
        Switch(whichChoice=1,
          children=[
          Transform(rotation=(0,1,0,1.57),scale=(1.8,1.8,1.8),translation=(0,8,-6),
            children=[
            Inline(url=["../../AircraftHelicopters/SH60-Seahawk-UnitedStates/SH60Seahawk.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60-Seahawk-UnitedStates/SH60Seahawk.x3d","../../AircraftHelicopters/SH60-Seahawk-UnitedStates/SH60Seahawk.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60-Seahawk-UnitedStates/SH60Seahawk.wrl"])]),
          Transform(rotation=(0,1,0,1.57),scale=(.5,.5,.5),translation=(0,3.1,-6),
            children=[
            Inline(url=["HeloFlying.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/HeloFlying.x3d","HeloFlying.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/HeloFlying.wrl"])])])]),
      Switch(whichChoice=0,
        children=[
        Transform(DEF='WATER',scale=(15,1,15),
          children=[
          Inline(DEF='water',url=["../DDGArleighBurkeUnitedStates/Water.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/Water.x3d","../DDGArleighBurkeUnitedStates/Water.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/Water.wrl"])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Animation.py")
