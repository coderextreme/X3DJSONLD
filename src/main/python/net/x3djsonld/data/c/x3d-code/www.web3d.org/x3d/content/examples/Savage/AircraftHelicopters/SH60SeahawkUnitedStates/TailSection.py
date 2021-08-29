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

newModel=X3D(profile='Interactive',version='3.2',
  head=head(
    children=[
    meta(content='TailSection.x3d',name='title'),
    meta(content='Michael Collins',name='creator'),
    meta(content='LT Terry D. Norbraten, USN',name='contributor'),
    meta(content='18 March 2001',name='created'),
    meta(content='1 January 2019',name='modified'),
    meta(content='A SH60F tail section. Contains rear pylon, housing for tail rotor motor and rotating tail rotor. Tail rotor is gauged to rotate at twice the speed of the main rotor head.',name='description'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/TailSection.x3d',name='identifier'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60.htm',name='reference'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    Transform(
      children=[
      Inline(url=["Pylon.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/Pylon.x3d","Pylon.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/Pylon.wrl"]),
      Transform(rotation=(0,1,0,1.57),
        children=[
        Transform(rotation=(1,0,0,-1.57),
          children=[
          Transform(rotation=(0,0,1,-1.57),translation=(-2.8,-1.5,1),
            children=[
            Inline(url=["Stabilator.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/Stabilator.x3d","Stabilator.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/Stabilator.wrl"]),
            Transform(scale=(.5,.5,.5),translation=(1.7,3.1,2.3),
              children=[
              Inline(url=["TailRotor.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/TailRotor.x3d","TailRotor.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/TailRotor.wrl"])])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TailSection.py")
