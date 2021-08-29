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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='SH60Seahawk.x3d',name='title'),
    meta(content='Michael Collins',name='creator'),
    meta(content='10 March 2001',name='created'),
    meta(content='1 January 2019',name='modified'),
    meta(content='A SH60/HH60 SeaHawk twin-engine helicopter is used for anti-submarine warfare, search and rescue, drug interdiction, anti-ship warfare, cargo lift, and special operations. Created using indexed face sets.',name='description'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/SH60Seahawk.x3d',name='identifier'),
    #  images and technical details from Sikorsky web site, 1 February 2003 
    meta(content='Seahawk_main.jpeg',name='Image'),
    meta(content='SH60B.jpeg',name='Image'),
    meta(content='SikorskySH60bMissionBrief.pdf',name='reference'),
    meta(content='0,3036,CLI1_DIV69_ETI264,00.pdf',name='reference'),
    meta(content='1,3024,CLI1_DIV69_ETI.pdf',name='reference'),
    meta(content='SH60B_0001H.jpeg',name='Image'),
    meta(content='SH60B_0002H.jpeg',name='Image'),
    meta(content='SH60B_0003H.jpeg',name='Image'),
    meta(content='SH60B_0004H.jpeg',name='Image'),
    meta(content='SH60B_0005H.jpeg',name='Image'),
    meta(content='SH60B_0006H.jpeg',name='Image'),
    meta(content='http://www.sikorsky.com/details/0,3036,CLI1_DIV69_ETI264,00.html',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60.htm',name='reference'),
    meta(content='sh-60-406lg2.jpg',name='Image'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60-406lg2.jpg',name='Image'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    Group(DEF='ViewpointGroup',
      #  ViewpointGroup node not yet widely supported 
      children=[
      Viewpoint(description='Seahawk SH60 helicopter, starboard side'),
      Viewpoint(description='Wide Angle View from SH60 Helicopter',fieldOfView=1.1,orientation=(1,0,0,-0.38),position=(0,10,20)),
      Viewpoint(description='Seahawk echelon left',orientation=(0,1,0,-1.2),position=(-10,0.75,4)),
      Viewpoint(description='Seahawk echelon right',orientation=(0,1,0,-2),position=(-10,0.75,-4)),
      Viewpoint(description='Seahawk port side',orientation=(0,1,0,3.14159),position=(0,0,-10)),
      Viewpoint(description='Seahawk from ahead',orientation=(0,1,0,1.57),position=(10,0.75,0)),
      Viewpoint(description='Seahawk from below',orientation=(1,0,0,1.57),position=(0,-10,0))]),
    #  Original model in feet 
    ExternProtoDeclare(appinfo='ViewPositionOrientation provides provides console output of local position and orientation as user navigates',name='ViewPositionOrientation',url=["../../Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.x3d#ViewPositionOrientation","../../Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation","https://savage.nps.edu/Savage/Tools/Authoring/ViewPositionOrientationPrototype.wrl#ViewPositionOrientation"],
      field=[
      field(accessType='inputOutput',appinfo='Whether or not ViewPositionOrientation sends output to console',name='enabled',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Output internal trace messages for debugging this node, intended for developer use only',name='traceEnabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='Ability to turn output tracing on/off at runtime',name='set_traceEnabled',type='SFBool'),
      field(accessType='outputOnly',appinfo='Output local position',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='Output local orientation',name='orientation_changed',type='SFRotation'),
      field(accessType='outputOnly',appinfo='MFString value of new Viewpoint',name='outputViewpointString',type='MFString')]),
    Switch(DEF='AuthoringAssist',whichChoice=-1,
      children=[
      Group(
        children=[
        Transform(
          children=[
          Inline(DEF='CoordinateAxes',url=["../../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])]),
        Inline(url=["../../../Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.x3d","../../../Savage/Tools/Authoring/GridXZ_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXZ_20x20Fixed.wrl"]),
        ProtoInstance(name='ViewPositionOrientation',
          fieldValue=[
          fieldValue(name='enabled',value=True)])])]),
    Transform(DEF='ScaleCenterAlignNoseWithX-Axis',rotation=(0,1,0,3.14159),scale=(0.3048,0.3048,0.3048),translation=(-4,-0.3,-0.7),
      children=[
      Transform(translation=(-.5,1,-2.4),
        children=[
        Inline(url=["TailSection.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/TailSection.x3d","TailSection.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/TailSection.wrl"])]),
      Transform(scale=(.8,.8,.8),translation=(-13,4.8,-2.4),
        children=[
        Inline(url=["RotorHead.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/RotorHead.x3d","RotorHead.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/RotorHead.wrl"])]),
      Transform(rotation=(0,1,0,3.12),
        children=[
        Inline(url=["Fuselage.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/Fuselage.x3d","Fuselage.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/Fuselage.wrl"])]),
      Transform(rotation=(0,1,0,1.57),scale=(.13,.13,.13),translation=(-8,-.5,-2.5),
        children=[
        Inline(url=["RearWheel.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/RearWheel.x3d","RearWheel.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/RearWheel.wrl"])]),
      Transform(rotation=(0,1,0,-1.57),scale=(.2,.2,.2),translation=(-16,-.5,0),
        children=[
        Inline(url=["RightWheel.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/RightWheel.x3d","RightWheel.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/RightWheel.wrl"])]),
      Transform(rotation=(0,1,0,-1.57),scale=(.2,.2,.2),translation=(-16,-.5,-4.8),
        children=[
        Inline(url=["LeftWheel.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/LeftWheel.x3d","LeftWheel.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/LeftWheel.wrl"])]),
      Transform(rotation=(1,0,0,3.2),translation=(-13,3,-1),
        children=[
        Transform(rotation=(0,0,1,1.57),scale=(.45,.45,.45),
          children=[
          Inline(DEF='Engine',url=["Engine.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/Engine.x3d","Engine.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/Engine.wrl"])])]),
      Transform(rotation=(0,0,1,1.57),scale=(.45,.45,.45),translation=(-13,3.1,-3.5),
        children=[
        Inline(USE='Engine')]),
      Transform(rotation=(0,1,0,1.57),scale=(1,1,.5),translation=(-11,1,-3.8),
        children=[
        Inline(url=["RightPylon.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/RightPylon.x3d","RightPylon.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/RightPylon.wrl"])]),
      Transform(rotation=(0,1,0,-1.57),translation=(-16,.8,.5),
        children=[
        Inline(url=["ExtendedPylon.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/ExtendedPylon.x3d","ExtendedPylon.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/ExtendedPylon.wrl"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SH60Seahawk.py")
