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
    meta(content='CockpitConsole.x3d',name='title'),
    meta(content='This file defines a cockpit console that is inlined to create the cockpit for a helicopter',name='description'),
    meta(content='Doug Miller (original creator); Jane Wu (adapted from the original console.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='5 February 1999',name='created'),
    meta(content='16 February 2016',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/CockpitConsole.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Inline(url=["ConsoleBoard.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/ConsoleBoard.x3d","ConsoleBoard.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/ConsoleBoard.wrl"]),
      Transform(translation=(0.39,0.33,0.0),
        children=[
        Inline(DEF='MfdScreen',url=["MfdScreen.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/MfdScreen.x3d","MfdScreen.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/MfdScreen.wrl"])]),
      Transform(translation=(-0.27,0.33,0.0),
        children=[
        Inline(USE='MfdScreen')]),
      Transform(translation=(-0.02,0.42,0.02),
        children=[
        Inline(url=["RfdScreen.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/RfdScreen.x3d","RfdScreen.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/RfdScreen.wrl"])]),
      Transform(translation=(-0.07,0.28,0.02),
        children=[
        Inline(url=["AirSpeed.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/AirSpeed.x3d","AirSpeed.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/AirSpeed.wrl"])]),
      Transform(translation=(0.03,0.28,0.02),
        children=[
        Inline(url=["Attitude.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Attitude.x3d","Attitude.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Attitude.wrl"])]),
      Transform(translation=(0.13,0.28,0.02),
        children=[
        Inline(url=["Altimeter.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Altimeter.x3d","Altimeter.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Altimeter.wrl"])]),
      Transform(translation=(0.57,0.38,0.0),
        children=[
        Inline(url=["Clock.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Clock.x3d","Clock.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Clock.wrl"])]),
      Transform(translation=(0.2,0.64,0.02),
        children=[
        Inline(url=["SightGauge.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/SightGauge.x3d","SightGauge.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/SightGauge.wrl"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CockpitConsole.py")
