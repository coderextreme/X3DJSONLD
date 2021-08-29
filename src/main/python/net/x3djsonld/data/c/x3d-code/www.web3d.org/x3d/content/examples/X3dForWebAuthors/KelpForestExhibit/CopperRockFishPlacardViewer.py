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
    meta(content='CopperRockfishPlacardViewer.x3d',name='title'),
    meta(content='Viewer for tank placards - needs photo on one side, placard on other, and conversion into prototype once ready.',name='description'),
    meta(content='1 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Todd Gagnon and Mark A. Boyd',name='creator'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/CopperRockfishPlacardViewer.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CopperRockfishPlacardViewer.x3d'),
    Viewpoint(DEF='CopperRockfish',description='Copper Rockfish',position=(0.0,0.0,4.0)),
    Group(
      children=[
      TouchSensor(DEF='BlueRockfishTouchSensor',description='touch to rotate'),
      TimeSensor(DEF='BLUEROCKFISHCLOCK',cycleInterval=2.0),
      OrientationInterpolator(DEF='BlueRockfishPathInterpolator',key=[0.0,0.5,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,1.57),(0.0,1.0,0.0,3.14)]),
      Transform(DEF='BLUEROCKFISH_TRANSFORM',
        children=[
        Shape(
          appearance=Appearance(
            texture=ImageTexture(DEF='CopperRockfishImage',url=["CopperRockfishPlacard.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/CopperRockfishPlacard.jpg"]),
            textureTransform=TextureTransform(scale=(1,2))),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0,-1],
            coord=Coordinate(point=[(-2,-1,0),(2,-1,0),(2,1,0),(-2,1,0)])))]),
      Group(
        children=[
        Transform(DEF='BUTTON_TRANSFORM',translation=(1.0,2.0,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.0,1.0,0.0))),
            geometry=Sphere(radius=0.5))]),
        TouchSensor(DEF='FrontTouchSensor',description='touch to rotate'),
        TimeSensor(DEF='FRONTTOUCHSENSORCLOCK',cycleInterval=2.0),
        OrientationInterpolator(DEF='PlaqueToPictureInterpolator',key=[0.0,0.5,1.0],keyValue=[(0.0,1.0,0.0,3.14),(0.0,1.0,0.0,1.57),(0.0,1.0,0.0,0.0)])]),
      Group(
        children=[
        Transform(DEF='BUTTON_TRANSFORM2',translation=(-1.0,2.0,0.0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(1.0,0.0,0.0))),
            geometry=Sphere(radius=0.5))]),
        TouchSensor(DEF='PictureTouchSensor',description='touch to rotate')]),
      Group(
        children=[
        Transform(DEF='BASE_TRANSFORM',translation=(0.0,0.0,-0.3),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.3,0.3,0.6))),
            geometry=Box(size=(8.0,6.0,0.3)))]),
        Group(
          children=[
          Transform(translation=(0.0,-2.6,0.0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.2))),
              geometry=Box(size=(8.0,1.0,1.0)))])]),
        Group(
          children=[
          Transform(translation=(0.0,2.6,0.0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.2))),
              geometry=Box(size=(8.0,1.0,1.0)))])]),
        Group(
          children=[
          Transform(rotation=(0.0,0.0,1.0,1.58),translation=(3.6,0.0,0.0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.2))),
              geometry=Box(size=(6.2,1.0,1.0)))])]),
        Group(
          children=[
          Transform(rotation=(0.0,0.0,1.0,1.58),translation=(-3.6,0.0,0.0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.8,0.8,0.2))),
              geometry=Box(size=(6.2,1.0,1.0)))])])])]),
    ROUTE(fromField='touchTime',fromNode='BlueRockfishTouchSensor',toField='set_startTime',toNode='BLUEROCKFISHCLOCK'),
    ROUTE(fromField='fraction_changed',fromNode='BLUEROCKFISHCLOCK',toField='set_fraction',toNode='BlueRockfishPathInterpolator'),
    ROUTE(fromField='value_changed',fromNode='BlueRockfishPathInterpolator',toField='set_rotation',toNode='BLUEROCKFISH_TRANSFORM'),
    ROUTE(fromField='touchTime',fromNode='FrontTouchSensor',toField='set_startTime',toNode='FRONTTOUCHSENSORCLOCK'),
    ROUTE(fromField='fraction_changed',fromNode='FRONTTOUCHSENSORCLOCK',toField='set_fraction',toNode='PlaqueToPictureInterpolator'),
    ROUTE(fromField='value_changed',fromNode='PlaqueToPictureInterpolator',toField='set_rotation',toNode='BLUEROCKFISH_TRANSFORM'),
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

print ("python x3d.py load successful for CopperRockfishPlacardViewer.py")
