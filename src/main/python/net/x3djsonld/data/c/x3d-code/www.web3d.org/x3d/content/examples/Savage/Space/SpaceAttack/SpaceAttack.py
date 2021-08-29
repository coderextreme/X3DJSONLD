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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='SpaceAttack.x3d',name='title'),
    meta(content='Mike Perry',name='creator'),
    meta(content='17 August 2000',name='created'),
    meta(content='1 June 2012',name='modified'),
    meta(content='Three Space Ships Attack',name='description'),
    meta(content='https://savage.nps.edu/Savage/Space/SpaceAttack/SpaceAttack.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  The Background Planets 
    children=[
    Transform(translation=(0,0,-15),
      children=[
      Shape(
        geometry=Sphere(radius=2.4),
        appearance=Appearance(
          texture=ImageTexture(url=["../SolarSystem/mars.jpg","https://savage.nps.edu/Savage/Space/SolarSystem/mars.jpg"])))]),
    Transform(translation=(-15,0,0),
      children=[
      Shape(
        geometry=Sphere(radius=3),
        appearance=Appearance(
          texture=ImageTexture(url=["../SolarSystem/sun.jpg","https://savage.nps.edu/Savage/Space/SolarSystem/sun.jpg"])))]),
    Transform(translation=(25,0,-4),
      children=[
      Shape(
        geometry=Sphere(radius=2),
        appearance=Appearance(
          texture=ImageTexture(url=["../SolarSystem/neptune.jpg","https://savage.nps.edu/Savage/Space/SolarSystem/neptune.jpg"])))]),
    Transform(translation=(0,0,25),
      children=[
      Shape(
        geometry=Sphere(radius=2),
        appearance=Appearance(
          texture=ImageTexture(url=["../../earth-topo.png","../../earth-topo-small.gif","https://savage.nps.edu/Savage/Space/SpaceAttack/../../earth-topo.png","http://www.web3d.org/x3d/content/examples/Basic/earth-topo-small.gif"])))]),
    #  camera angles 
    Viewpoint(DEF='camera1',description='camera 1',fieldOfView=.9599,orientation=(1,0,0,-.2618),position=(.5,.5,12)),
    Viewpoint(DEF='camera2',description='camera 2',orientation=(0,1,0,1.57),position=(7,0,0)),
    Viewpoint(DEF='camera3',description='camera 3',orientation=(0,1,0,-.7854),position=(-5,0,5)),
    Viewpoint(DEF='camera4',description='camera 4',fieldOfView=1.0472,orientation=(0,1,0,3.14),position=(0,2,-2)),
    #  Fighters 
    Transform(DEF='Threeflight',rotation=(1,0,0,1.57),
      children=[
      Group(DEF='Fighter1',
        children=[
        Transform(scale=(1,3,1),translation=(0.0,0.5,-0.3),
          children=[
          Shape(
            geometry=Sphere(radius=0.14),
            appearance=Appearance(DEF='Cockpit',
              material=Material(emissiveColor=(0,0,1),transparency=0.55)))]),
        Transform(scale=(0.8,0.8,0.8),translation=(0.0,0.51,-0.3),
          children=[
          Shape(
            geometry=Sphere(DEF='Pilot',radius=0.16),
            appearance=Appearance(
              material=Material(diffuseColor=(1.0,0.0,0.0))))]),
        Transform(scale=(1,3.8,1),
          children=[
          Shape(
            geometry=Sphere(radius=0.4),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.7,0.3))))]),
        Transform(rotation=(1,0,0,3.14),translation=(0.5,-2.0,0.0),
          children=[
          Shape(DEF='Afterburner',
            geometry=Cone(bottomRadius=0.25,height=0.9),
            appearance=Appearance(
              material=Material(diffuseColor=(1.0,0.2,0.2),transparency=0.5)))]),
        Transform(rotation=(1,0,0,3.14),translation=(-0.5,-2.0,0.0),
          children=[
          Shape(USE='Afterburner')]),
        Transform(translation=(.5,-1,0),
          children=[
          Shape(DEF='Engine',
            geometry=Cylinder(bottom=False,radius=.25),
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.7,0.3))))]),
        Transform(translation=(-0.5,-1,0),
          children=[
          Shape(USE='Engine')]),
        Transform(scale=(9,1,1),
          children=[
          Shape(DEF='Wing',
            appearance=Appearance(
              material=Material(diffuseColor=(0.8,0.7,0.3))),
            geometry=Cone(bottomRadius=0.2,height=2.8))]),
        Transform(scale=(1,3,1),translation=(1.0,-0.6,0.2),
          children=[
          Shape(DEF='Bomb',
            geometry=Sphere(radius=.1),
            appearance=Appearance(
              material=Material(diffuseColor=(0,0.8,0))))]),
        Transform(scale=(1,3,1),translation=(-1.0,-0.6,0.2),
          children=[
          Shape(USE='Bomb')])]),
      Transform(translation=(2.5,-2.0,1.0),
        children=[
        Group(USE='Fighter1')]),
      Transform(translation=(-2.5,-2.0,1.3),
        children=[
        Group(USE='Fighter1')])]),
    TimeSensor(DEF='Clock',cycleInterval=10.0,loop=True),
    PositionInterpolator(DEF='Flightpath',key=[0.00,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.20,0.21,0.22,0.23,0.24,0.25,0.26,0.27,0.28,0.29,0.30,0.31,0.32,0.33,.34,.35,0.36,0.37,0.50,0.70,0.80,0.90,1],keyValue=[(0.0,0.0,-10.0),(0.0,0.0,0.0),(0.0,0.0,0.5),(0.0,0.0,1.0),(0.0,0.0,1.5),(0.0,0.0,2.0),(0.0,0.0,3.5),(0.0,0.0,4.0),(0.0,0.0,4.5),(0.0,0.0,5.0),(0.0,0.0,5.5),(0.0,0.0,6.0),(0.0,0.0,6.5),(0.0,0.0,7.0),(0.0,0.0,7.5),(0.0,0.0,8.0),(0.0,0.0,8.5),(0.0,0.0,9.0),(0.0,0.0,10.0),(0.0,0.0,10.5),(0.0,0.0,11.0),(0.0,0.0,11.5),(0.0,0.0,12.0),(0.0,0.0,12.5),(0.0,0.0,13.0),(0.0,0.0,13.5),(0.0,0.0,14.0),(0.0,0.0,14.5),(0.0,0.0,15.0),(0.0,0.0,15.5),(0.0,0.0,17.0),(0.0,0.0,18.0),(0.0,0.0,19.0)]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='Flightpath'),
    ROUTE(fromField='value_changed',fromNode='Flightpath',toField='set_translation',toNode='Threeflight')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SpaceAttack.py")
