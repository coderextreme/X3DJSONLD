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
    meta(content='RotorHead.x3d',name='title'),
    meta(content='Michael Collins',name='creator'),
    meta(content='LT Terry D. Norbraten, USN',name='contributor'),
    meta(content='10 March 2001',name='created'),
    meta(content='1 January 2019',name='modified'),
    meta(content='A SH60F main rotorhead containing four main rotor blades, a central capping structure, central rotor mast and four pitch-control rods.',name='description'),
    meta(content='units in feet',name='warning'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/RotorHead.x3d',name='identifier'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60.htm',name='reference'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(speed=300),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    #  lower-resolution rotor transitions at 1, 10 km 
    LOD(range=[3048,30480],
      children=[
      Transform(DEF='RotorHead',
        children=[
        Group(
          #  Blades were oriented incorrectly. Flipped them over 180 degress to correct orientation. TDN 
          children=[
          Transform(rotation=(1,0,0,-1.571),translation=(-19,0,1),
            children=[
            Inline(DEF='MainRotorBlade',url=["MainRotorBlade.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/MainRotorBlade.x3d","MainRotorBlade.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/MainRotorBlade.wrl"]),
            Transform(rotation=(0,0,1,3.142),translation=(38,2,0),
              children=[
              Inline(USE='MainRotorBlade')]),
            Transform(rotation=(0,0,1,4.713),translation=(18,20,0),
              children=[
              Inline(USE='MainRotorBlade')]),
            Transform(rotation=(0,0,1,1.571),translation=(20,-18,0),
              children=[
              Inline(USE='MainRotorBlade')])]),
          Transform(translation=(0,-.8,0),
            children=[
            Shape(
              geometry=Cylinder(radius=.5),
              appearance=Appearance(
                material=Material(),)),
            Transform(translation=(0,-1,0),
              children=[
              Shape(
                geometry=Cylinder(height=.2,radius=2.0),
                appearance=Appearance(
                  material=Material(),))]),
            Transform(translation=(1.5,0,0),
              children=[
              Shape(
                geometry=Cylinder(radius=.1),
                appearance=Appearance(
                  material=Material(),))]),
            Transform(translation=(-1.5,0,0),
              children=[
              Shape(
                geometry=Cylinder(radius=.1),
                appearance=Appearance(
                  material=Material(),))]),
            Transform(translation=(0,0,1.5),
              children=[
              Shape(
                geometry=Cylinder(radius=.1),
                appearance=Appearance(
                  material=Material(),))]),
            Transform(translation=(0,0,-1.5),
              children=[
              Shape(
                geometry=Cylinder(radius=.1),
                appearance=Appearance(
                  material=Material(),))])]),
          Transform(translation=(-2,.3,-2),
            children=[
            Inline(url=["Head.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/Head.x3d","Head.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/Head.wrl"])])]),
        TimeSensor(DEF='Clock',cycleInterval=.3,loop=True,
          #  Added a cycleInterval and set to .3 to simulate a realistic spinning rotor- head. TDN 
          ),
        OrientationInterpolator(DEF='RotorPath',key=[0.0,0.50,1.0],keyValue=[(0.0,1.0,0.0,-6.28),(0.0,1.0,0.0,-3.14),(0.0,1.0,0.0,0.00)],
          #  Changed keyValues to negative to get the rotorhead to spin in the correct direction. TDN 
          )]),
      Transform(
        children=[
        Shape(
          geometry=Cylinder(height=1,radius=17),
          appearance=Appearance(
            material=Material(transparency=0.8)))]),
      WorldInfo(info=["null node"])]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='RotorPath'),
    ROUTE(fromField='value_changed',fromNode='RotorPath',toField='set_rotation',toNode='RotorHead')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RotorHead.py")
