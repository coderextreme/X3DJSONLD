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
    meta(content='WISP.x3d',name='title'),
    meta(content='Wireless Internet Service Provider (WISP) project.',name='description'),
    meta(content='Mark P. Sullivan',name='creator'),
    meta(content='21 July 2003',name='created'),
    meta(content='3 October 2015',name='modified'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/WISP/WISP.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(DEF='MoveUpAboveGround',translation=(0,22.5,0),
      children=[
      Transform(translation=(0,-12.5,0),
        children=[
        Shape(DEF='centerTower',
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(height=20,radius=.6)),
        Transform(DEF='leftLeg',translation=(-2,0,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=20,radius=.2))]),
        Transform(DEF='rightLeg',translation=(2,0,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=20,radius=.2))]),
        Transform(DEF='backLeg',translation=(0,0,-2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=20,radius=.2))]),
        Transform(DEF='frontLeg',translation=(0,0,2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=Cylinder(height=20,radius=.2))]),
        Transform(DEF='ground',translation=(0,-10,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0,1,0))),
            geometry=Box(size=(8,.1,8)))]),
        Transform(DEF='crossBeams',rotation=(0,1,0,.785),translation=(1,0,1),
          children=[
          Transform(rotation=(0,0,1,.785),translation=(0,8.586,0),
            children=[
            Shape(DEF='CrossBeam',
              appearance=Appearance(
                material=Material(),),
              geometry=Box(size=(4,.2,.1)))]),
          Transform(rotation=(0,0,1,-.785),translation=(0,8.586,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,.785),translation=(0,5.7575,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,-.785),translation=(0,5.7575,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,.785),translation=(0,2.9291,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,-.785),translation=(0,2.9291,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,.785),translation=(0,-2.8284,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,-.785),translation=(0,-2.8284,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,.785),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,-.785),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,.785),translation=(0,-5.6568,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,-.785),translation=(0,-5.6568,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,.785),translation=(0,-8.4852,0),
            children=[
            Shape(USE='CrossBeam')]),
          Transform(rotation=(0,0,1,-.785),translation=(0,-8.4852,0),
            children=[
            Shape(USE='CrossBeam')])]),
        Transform(translation=(-2,0,-2),
          children=[
          Transform(USE='crossBeams')]),
        Transform(rotation=(0,1,0,1.57),
          children=[
          Transform(USE='crossBeams')])]),
      Transform(DEF='antennaBase',rotation=(0,1,0,0.785),translation=(0,-2.45,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.8,.8,.8))),
          geometry=Box(size=(4,.1,4)))]),
      Transform(DEF='FirstMast',translation=(1,-.9,-1.7),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.8,.8,.8))),
          geometry=Cylinder(height=3,radius=.05))]),
      Transform(DEF='ThirdMast',translation=(-2.5,-.9,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.8,.8,.8))),
          geometry=Cylinder(height=3,radius=.05))]),
      Transform(DEF='SecondMast',translation=(1,-.9,1.7),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.8,.8,.8))),
          geometry=Cylinder(height=3,radius=.05))])]),
    Group(
      children=[
      Transform(DEF='FirstRadio',rotation=(0,1,0,2.5),translation=(1,22,-1.8),
        children=[
        Inline(DEF='RadioWithAntenna',url=["RadioWithAntenna.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/WISP/RadioWithAntenna.x3d","RadioWithAntenna.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/WISP/RadioWithAntenna.wrl"])]),
      Transform(DEF='ThirdRadio',rotation=(0,1,0,-1.5),translation=(-2.58,22,0.07),
        children=[
        Inline(USE='RadioWithAntenna')]),
      Transform(DEF='SecondRadio',rotation=(0,1,0,.5),translation=(1.1,22,1.75),
        children=[
        Inline(USE='RadioWithAntenna')]),
      Viewpoint(description='Antenna Tower',orientation=(-0.036,-0.971,-0.238,1.8804),position=(-49.4,32.6,-8.1))]),
    Viewpoint(description='1st Mast',orientation=(-0.001,1,-0.004,2.2366),position=(1.4,21.4,-2.2)),
    Viewpoint(description='2nd Mast',orientation=(-0.072,0.994,0.076,0.4478),position=(2.7,21.6,3.9)),
    Viewpoint(description='3rd Mast',orientation=(-0.004,-1,0.018,1.5572),position=(-3.1,21.3,0.1)),
    Viewpoint(description='1st CPE',orientation=(0,-1,0,2.3119),position=(29.4,5.4,24.7)),
    Viewpoint(description='3rd CPE',orientation=(-0.163,0.983,-0.083,2.2154),position=(102.4,5.5,-51.8)),
    Viewpoint(description='2nd CPE',orientation=(0.124,-0.992,-0.022,2.7954),position=(99.1,5,97.2)),
    Group(
      children=[
      Transform(DEF='FirstHouse',rotation=(0,1,0,2.5),translation=(30,0,25),
        children=[
        Inline(DEF='House',url=["../../Buildings/HouseBarisAktop/House.x3d","https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/House.x3d","../../Buildings/HouseBarisAktop/House.wrl","https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/House.wrl"])]),
      Transform(DEF='SecondHouse',rotation=(0,1,0,-1.5),translation=(100,0,100),
        children=[
        Inline(USE='House')]),
      Transform(DEF='ThirdHouse',rotation=(0,1,0,.5),translation=(100,0,-50),
        children=[
        Inline(USE='House')])]),
    Group(
      children=[
      Transform(DEF='FirstCpeRadio',rotation=(0,1,0,-2.3),translation=(30,6,25),
        children=[
        Inline(DEF='CpeRadio',url=["CpeRadioWithAntenna.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/WISP/CpeRadioWithAntenna.x3d","CpeRadioWithAntenna.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/WISP/CpeRadioWithAntenna.wrl"])]),
      Transform(DEF='SecondCpeRadio',rotation=(0,1,0,-2.4),translation=(100,6,100),
        children=[
        Inline(USE='CpeRadio')]),
      Transform(DEF='ThirdCpeRadio',rotation=(0,1,0,-1.1),translation=(100,6,-50),
        children=[
        Inline(USE='CpeRadio')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WISP.py")
