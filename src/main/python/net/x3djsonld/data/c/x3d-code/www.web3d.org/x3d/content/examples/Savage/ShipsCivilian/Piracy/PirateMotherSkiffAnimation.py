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
    meta(content='PirateMotherSkiffAnimation.x3d',name='title'),
    meta(content='Mother Skiff circling the ocean at night',name='description'),
    meta(content='Chad R Hutchins',name='creator'),
    meta(content='5 May 2011',name='created'),
    meta(content='18 March 2013',name='modified'),
    meta(content='PirateMotherSkiffMv3204Project.ppt',name='reference'),
    meta(content='PirateMotherSkiffMv3204Project.pdf',name='reference'),
    meta(content='http://www.3dtexture.net/img-blue-water-ocean-texture-250.htm',name='reference'),
    meta(content='Ocean.png',name='Image'),
    meta(content='Piracy',name='subject'),
    meta(content='https://savage.nps.edu/Savage/ShipsCivilian/Piracy/PirateMotherSkiffAnimation.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Viewpoints 
    children=[
    Viewpoint(description='Starting Point',orientation=(1,0,0,-0.1636),position=(0,10,50)),
    Viewpoint(description='Looking from -80 meters out',fieldOfView=1.3963,orientation=(-0.0017,0.9983,0.0584,3.0829),position=(0,10,-80)),
    Viewpoint(description='UAV View',fieldOfView=1.57079,orientation=(0,0.7415,0.671,-3.1416),position=(0,75,0)),
    Group(
      #  Billboard Pirate Flag and Text 
      children=[
      Transform(translation=(-20,5,-40),
        children=[
        Billboard(
          children=[
          Transform(translation=(-24,7,-20),
            children=[
            Shape(
              geometry=Box(size=(17,5,0.1)),
              appearance=Appearance(
                material=Material(diffuseColor=(0,0,0)),
                texture=ImageTexture(url=["JollyRoger.png","https://savage.nps.edu/Savage/ShipsCivilian/Piracy/JollyRoger.png"]))),
            TouchSensor(DEF='StartPirateMovement',description='Touch here to move Pirate Skiff')]),
          Transform(translation=(-30,3.75,-19),
            children=[
            Shape(
              geometry=Text(string=["Click Here to Begin"],
                fontStyle=FontStyle(justify=["BEGIN","BEGIN"],size=2)),
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,1))))])])]),
      #  Ocean 
      Transform(DEF='OceanTransform',
        children=[
        Shape(
          geometry=Box(size=(600,1,500)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.380392,0.607843,1)),
            texture=ImageTexture(url=["Ocean.png","https://savage.nps.edu/Savage/ShipsCivilian/Piracy/Ocean.png"])))]),
      #  Ocean interpolator, time sensor, and route 
      PositionInterpolator(DEF='OceanMover',key=[0,0.2,0.4,0.6,0.8,0.9,1],keyValue=[(0,0.9,0),(0,1,0),(0,0.8,0),(0,0.9,0),(0,1,0),(0,0.8,0),(0,0.9,0)]),
      TimeSensor(DEF='OceanTimer',cycleInterval=7,loop=True),
      ROUTE(fromField='value_changed',fromNode='OceanMover',toField='set_translation',toNode='OceanTransform'),
      ROUTE(fromField='fraction_changed',fromNode='OceanTimer',toField='set_fraction',toNode='OceanMover'),
      #  Mother Ship Inline 
      Transform(DEF='PirateTranslation',translation=(-12,1,0),
        children=[
        Inline(url=["PirateMotherSkiff.x3d","https://savage.nps.edu/Savage/ShipsCivilian/Piracy/PirateMotherSkiff.x3d"])]),
      #  Pirate Ship interpolators, time sensor, and routes 
      PositionInterpolator(DEF='PirateMovement',key=[0,0.2,0.25,0.45,0.5,0.7,0.75,0.95,1],keyValue=[(-12,1,0),(15,1,0),(15,1,0),(20,1,-50),(20,1,-50),(-50,1,-50),(-50,1,-50),(-12,1,0),(-12,1,0)]),
      OrientationInterpolator(DEF='PirateOrientation',key=[0,0.2,0.25,0.45,0.5,0.7,0.75,0.95,1],keyValue=[(0,1,0,0),(0,1,0,0),(0,1,0,1.57),(0,1,0,1.57),(0,1,0,3.14),(0,1,0,3.14),(0,1,0,5.4105),(0,1,0,5.4105),(0,1,0,6.283)]),
      TimeSensor(DEF='PirateTime',cycleInterval=20),
      ROUTE(fromField='value_changed',fromNode='PirateMovement',toField='translation',toNode='PirateTranslation'),
      ROUTE(fromField='value_changed',fromNode='PirateOrientation',toField='rotation',toNode='PirateTranslation'),
      ROUTE(fromField='touchTime',fromNode='StartPirateMovement',toField='startTime',toNode='PirateTime'),
      ROUTE(fromField='fraction_changed',fromNode='PirateTime',toField='set_fraction',toNode='PirateMovement'),
      ROUTE(fromField='fraction_changed',fromNode='PirateTime',toField='set_fraction',toNode='PirateOrientation')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PirateMotherSkiffAnimation.py")
