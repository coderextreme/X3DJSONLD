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
    meta(content='SH60SeahawkMaintenance.x3d',name='title'),
    meta(content='Michael Collins',name='creator'),
    meta(content='10 March 2001',name='created'),
    meta(content='modified 12 September 2003 by LT Joe Sears for DDG-51FlightIIA Maintenance bird',name='info'),
    meta(content='14 January 2014',name='modified'),
    meta(content='SH60/HH60 SeaHawk modified as hanger',name='description'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/SH60-Seahawk-UnitedStates/SH60Seahawk.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DDG51FlightIIaUnitedStates/SH60SeahawkMaintenance.x3d',name='identifier'),
    #  images and technical details from Sikorsky web site, 1 February 2003 
    meta(content='Seahawk_main.jpeg',name='photograph'),
    meta(content='SH60B.jpeg',name='photograph'),
    meta(content='SikorskySH60bMissionBrief.pdf',name='reference'),
    meta(content='0,3036,CLI1_DIV69_ETI264,00.pdf',name='reference'),
    meta(content='1,3024,CLI1_DIV69_ETI.pdf',name='reference'),
    meta(content='SH60B_0001H.jpeg',name='photograph'),
    meta(content='SH60B_0002H.jpeg',name='photograph'),
    meta(content='SH60B_0003H.jpeg',name='photograph'),
    meta(content='SH60B_0004H.jpeg',name='photograph'),
    meta(content='SH60B_0005H.jpeg',name='photograph'),
    meta(content='SH60B_0006H.jpeg',name='photograph'),
    meta(content='http://www.sikorsky.com/details/0,3036,CLI1_DIV69_ETI264,00.html',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60.htm',name='reference'),
    meta(content='sh-60-406lg2.jpg',name='Image'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60-406lg2.jpg',name='Image'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Original model in feet 
    children=[
    Transform(DEF='ScaleCenterAlignNoseWithX-Axis',rotation=(0,1,0,3.14159),scale=(0.3048,0.3048,0.3048),translation=(-4,-0.3,-0.7),
      children=[
      Transform(rotation=(0,1,0,3.12),
        children=[
        Inline(url=["../../AircraftHelicopters/SH60-Seahawk-UnitedStates/Fuselage.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60-Seahawk-UnitedStates/Fuselage.x3d","../../AircraftHelicopters/SH60-Seahawk-UnitedStates/Fuselage.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60-Seahawk-UnitedStates/Fuselage.wrl"])]),
      Transform(rotation=(0,1,0,1.57),scale=(.13,.13,.13),translation=(-8,-.5,-2.5),
        children=[
        Inline(url=["../../AircraftHelicopters/SH60-Seahawk-UnitedStates/RearWheel.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60-Seahawk-UnitedStates/RearWheel.x3d","../../AircraftHelicopters/SH60-Seahawk-UnitedStates/RearWheel.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60-Seahawk-UnitedStates/RearWheel.wrl"])]),
      Transform(rotation=(0,1,0,-1.57),scale=(.2,.2,.2),translation=(-16,-.5,0),
        children=[
        Inline(url=["../../AircraftHelicopters/SH60-Seahawk-UnitedStates/RightWheel.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60-Seahawk-UnitedStates/RightWheel.x3d","../../AircraftHelicopters/SH60-Seahawk-UnitedStates/RightWheel.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60-Seahawk-UnitedStates/RightWheel.wrl"])]),
      Transform(rotation=(0,1,0,-1.57),scale=(.2,.2,.2),translation=(-16,-.5,-4.8),
        children=[
        Inline(url=["../../AircraftHelicopters/SH60-Seahawk-UnitedStates/LeftWheel.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60-Seahawk-UnitedStates/LeftWheel.x3d","../../AircraftHelicopters/SH60-Seahawk-UnitedStates/LeftWheel.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60-Seahawk-UnitedStates/LeftWheel.wrl"])]),
      Transform(rotation=(1,0,0,3.2),translation=(-13,3,-1),
        children=[
        Transform(rotation=(0,0,1,1.57),scale=(.45,.45,.45),
          children=[
          Inline(DEF='Engine',url=["../../AircraftHelicopters/SH60-Seahawk-UnitedStates/Engine.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60-Seahawk-UnitedStates/Engine.x3d","../../AircraftHelicopters/SH60-Seahawk-UnitedStates/Engine.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60-Seahawk-UnitedStates/Engine.wrl"])])]),
      Transform(rotation=(0,0,1,1.57),scale=(.45,.45,.45),translation=(-13,3.1,-3.5),
        children=[
        Inline(USE='Engine')]),
      Transform(rotation=(0,1,0,1.57),scale=(1,1,.5),translation=(-11,1,-3.8),
        children=[
        Inline(url=["../../AircraftHelicopters/SH60-Seahawk-UnitedStates/RightPylon.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60-Seahawk-UnitedStates/RightPylon.x3d","../../AircraftHelicopters/SH60-Seahawk-UnitedStates/RightPylon.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60-Seahawk-UnitedStates/RightPylon.wrl"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SH60SeahawkMaintenance.py")
