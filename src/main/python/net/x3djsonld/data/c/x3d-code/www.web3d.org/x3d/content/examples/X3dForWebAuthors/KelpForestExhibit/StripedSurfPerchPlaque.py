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

newModel=X3D(profile='Interactive',version='3.3',
  head=head(
    children=[
    meta(content='StripedSurfPerchPlaque.x3d',name='title'),
    meta(content='Michael Collins',name='creator'),
    meta(content='18 February 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='under development',name='warning'),
    meta(content='One fish plaque with lithograph on one side and actual picture on the back. Click on plaque to go to picture or click on buttons to change picture.',name='description'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/StripedSurfPerchPlaque.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='StripedSurfPerchPatch.jpg',name='Image'),
    meta(content='RainbowSurfPerch002.jpg',name='Image'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='StripedSurfPerchPlaque.x3d'),
    Viewpoint(DEF='stripedsurfperch',description='Striped Surf Perch',position=(0,0,4)),
    #  Fish Plaques 
    Group(
      children=[
      TouchSensor(DEF='BlueRockfishTouchSensor',description='touch to rotate'),
      TimeSensor(DEF='BLUEROCKFISHCLOCK',cycleInterval=2),
      OrientationInterpolator(DEF='BlueRockfishPathInterpolator',key=[0.0,0.50,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,1.57),(0.0,1.0,0.0,3.14)]),
      Transform(DEF='BLUEROCKFISH_TRANSFORM',
        children=[
        Shape(
          geometry=Box(size=(4,2,.1)),
          appearance=Appearance(
            texture=ImageTexture(url=["StripedSurfPerchPatch.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/StripedSurfPerchPatch.jpg"]))),
        Transform(translation=(0,0,-.1),
          children=[
          Shape(
            geometry=Box(size=(4,2,.2)),
            appearance=Appearance(
              texture=ImageTexture(url=["RainbowSurfPerch002.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/RainbowSurfPerch002.jpg"])))])]),
      Group(
        children=[
        Transform(DEF='BUTTON_TRANSFORM',translation=(1,2,0),
          children=[
          Shape(
            geometry=Sphere(radius=.5),
            appearance=Appearance(
              material=Material(diffuseColor=(0,1,0))))]),
        TouchSensor(DEF='FrontTouchSensor',description='front TouchSensor'),
        TimeSensor(DEF='FRONTTOUCHSENSORCLOCK',cycleInterval=2),
        OrientationInterpolator(DEF='PlaqueToPictureInterpolator',key=[0.0,0.50,1.0],keyValue=[(0.0,1.0,0.0,3.14),(0.0,1.0,0.0,1.57),(0.0,1.0,0.0,0.00)])]),
      Group(
        children=[
        Transform(DEF='BUTTON_TRANSFORM2',translation=(-1,2,0),
          children=[
          Shape(
            geometry=Sphere(radius=.5),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,0))))]),
        TouchSensor(DEF='PictureTouchSensor',description='picture TouchSensor')]),
      Group(
        children=[
        Transform(DEF='BASE_TRANSFORM',translation=(0,0,-.3),
          children=[
          Shape(
            geometry=Box(size=(8,6,.3)),
            appearance=Appearance(
              material=Material(diffuseColor=(.3,.3,.6))))]),
        TouchSensor(DEF='BaseTouchSensor',description='touch to rotate'),
        Group(
          children=[
          Transform(translation=(0,-2.6,0),
            children=[
            Shape(
              geometry=Box(size=(8,1,1)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.2))))])]),
        Group(
          children=[
          Transform(translation=(0,2.6,0),
            children=[
            Shape(
              geometry=Box(size=(8,1,1)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.2))))])]),
        Group(
          children=[
          Transform(rotation=(0,0,1,1.58),translation=(3.6,0,0),
            children=[
            Shape(
              geometry=Box(size=(6.2,1,1)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.2))))])]),
        Group(
          children=[
          Transform(rotation=(0,0,1,1.58),translation=(-3.6,0,0),
            children=[
            Shape(
              geometry=Box(size=(6.2,1,1)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.2))))])])])]),
    ROUTE(fromField='touchTime',fromNode='BlueRockfishTouchSensor',toField='set_startTime',toNode='BLUEROCKFISHCLOCK'),
    ROUTE(fromField='fraction_changed',fromNode='BLUEROCKFISHCLOCK',toField='set_fraction',toNode='BlueRockfishPathInterpolator'),
    ROUTE(fromField='value_changed',fromNode='BlueRockfishPathInterpolator',toField='set_rotation',toNode='BLUEROCKFISH_TRANSFORM'),
    ROUTE(fromField='touchTime',fromNode='FrontTouchSensor',toField='set_startTime',toNode='FRONTTOUCHSENSORCLOCK'),
    ROUTE(fromField='fraction_changed',fromNode='FRONTTOUCHSENSORCLOCK',toField='set_fraction',toNode='PlaqueToPictureInterpolator'),
    ROUTE(fromField='value_changed',fromNode='PlaqueToPictureInterpolator',toField='set_rotation',toNode='BLUEROCKFISH_TRANSFORM'),
    #  Picture touch sensor only has to tie into the BLUEROCKFISHCLOCK so that it will turn picture. 
    ROUTE(fromField='touchTime',fromNode='PictureTouchSensor',toField='set_startTime',toNode='BLUEROCKFISHCLOCK')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for StripedSurfPerchPlaque.py")
