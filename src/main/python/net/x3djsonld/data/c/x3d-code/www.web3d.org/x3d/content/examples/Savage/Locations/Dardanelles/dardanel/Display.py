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

newModel=X3D(version='3.1',profile='Immersive',
  head=head(
    children=[
    meta(content='Display.x3d',name='title'),
    meta(content='',name='description'),
    meta(content='',name='creator'),
    meta(content='Created date',name='created'),
    meta(content='',name='modified'),
    meta(content='',name='modified'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(DEF='FlyXform',translation=(0.19328214,0.34096703,-0.14768489),
      children=[
      Transform(translation=(0,0,2.5),
        children=[
        Viewpoint(DEF='FlyView',description='Fly Tour',orientation=(-1,0,0,1.54))])]),
    Transform(DEF='WalkXform',translation=(0.19328214,0.34096703,-0.14768489),
      children=[
      Transform(translation=(0,0,2.5),
        children=[
        Viewpoint(DEF='WalkView',description='Walk Tour',orientation=(-1,0,0,1.54))])]),
    Transform(translation=(-0.19328214,0.18598201058127664,1.6245338),
      children=[
      Transform(
        children=[
        Viewpoint(DEF='Vp1',description='Viewpoint 1',orientation=(0,1,0,-0.795))])]),
    Transform(translation=(-0.1932821480819257,0.18598201058127664,-0.29536977),
      children=[
      Transform(
        children=[
        Viewpoint(DEF='Vp2',description='Viewpoint 2',orientation=(0,1,0,-2.356))])]),
    Transform(translation=(2.0870256,0.18598201058127664,-0.29536977),
      children=[
      Transform(
        children=[
        Viewpoint(DEF='Vp3',description='Viewpoint 3',orientation=(0,1,0,2.356))])]),
    Transform(translation=(2.0870256,0.18598201058127664,1.7722187),
      children=[
      Transform(
        children=[
        Viewpoint(DEF='Vp4',description='Viewpoint 4',orientation=(0,1,0,0.795))])]),
    Viewpoint(DEF='Vp5',description='Viewpoint 5',position=(0.5959533,0.34096703,1.0337943),orientation=(-1,0,0,1.54)),
    Viewpoint(DEF='Vp6',description='Viewpoint 6',position=(0.3543506,0.34096703,0.44305468),orientation=(-1,0,0,1.64)),
    Viewpoint(DEF='Vp7',description='Viewpoint 7',position=(1.562364,0.34096703,0.59073955),orientation=(-1,0,0,1.54)),
    Viewpoint(DEF='Vp8',description='Viewpoint 8',position=(1.6912189,0.34096703,0.9599518),orientation=(-1,0,0,1.54)),
    Background(groundAngle=[1.5],groundColor=[(0.2,0.7,0.3),(0,0.1,0)],skyAngle=[1.7],skyColor=[(0.4,0.6,0.9),(0.5,0.5,1)]),
    NavigationInfo(DEF='FlyNav',avatarSize=[0.25,1.6,0.75],visibilityLimit=21.31044,speed=10,type=["FLY","EXAMINE","ANY"]),
    NavigationInfo(DEF='WalkNav',avatarSize=[0.25,1.6,0.75],visibilityLimit=21.31044,speed=10,type=["FLY","EXAMINE","ANY"]),
    PointLight(ambientIntensity=1,location=(0,100000,0),radius=1000000),
    Collision(
      children=[
      Inline(url=['../tiles/0/dardanel0-0.x3d'])]),
    TimeSensor(DEF='TIMER',cycleInterval=200,loop=True),
    TimeSensor(DEF='TIMER2',cycleInterval=200,loop=True),
    TimeSensor(DEF='TIMER3',cycleInterval=200,loop=True),
    TimeSensor(DEF='TIMER4',cycleInterval=200,loop=True),
    OrientationInterpolator(DEF='INTERP',key=[0,1.0],keyValue=[(0,1,0,0),(0,1,0,-3.14)]),
    OrientationInterpolator(DEF='INTERP2',key=[0,1.0],keyValue=[(0,1,0,0),(0,1,0,-3.14)]),
    PositionInterpolator(DEF='PositionINTERP',key=[0,0.25,0.50,0.75,1],keyValue=[(0.35435059901647037,0.40916044,1.0337942565558478),(0.35435059901647037,0.40916044,0.4430546847521327),(1.642898252895975,0.40916044,0.44305467885278627),(1.642898252895975,0.40916044,1.0337942565558478),(0.35435059901647037,0.40916044,1.0337942565558478)]),
    PositionInterpolator(DEF='PositionINTERP2',key=[0,0.25,0.50,0.75,1],keyValue=[(0.1932821480819257,0.20458022,1.1814791436074301),(0.1932821480819257,0.20458022,0.5907395718037151),(1.4588586870057043,0.20458022,0.5907395718037151),(1.4588586870057043,0.20458022,1.1814791436074301),(0.1932821480819257,0.20458022,1.1814791436074301)]),
    ROUTE(fromNode='TIMER',fromField='fraction_changed',toNode='INTERP',toField='set_fraction'),
    ROUTE(fromNode='INTERP',fromField='value_changed',toNode='FlyXform',toField='rotation'),
    ROUTE(fromNode='TIMER2',fromField='fraction_changed',toNode='PositionINTERP',toField='set_fraction'),
    ROUTE(fromNode='PositionINTERP',fromField='value_changed',toNode='FlyXform',toField='translation'),
    ROUTE(fromNode='TIMER3',fromField='fraction_changed',toNode='INTERP2',toField='set_fraction'),
    ROUTE(fromNode='INTERP2',fromField='value_changed',toNode='WalkXform',toField='rotation'),
    ROUTE(fromNode='TIMER4',fromField='fraction_changed',toNode='PositionINTERP2',toField='set_fraction'),
    ROUTE(fromNode='PositionINTERP2',fromField='value_changed',toNode='WalkXform',toField='translation'),
    ROUTE(fromNode='FlyView',fromField='isBound',toNode='FlyNav',toField='set_bind'),
    ROUTE(fromNode='WalkView',fromField='isBound',toNode='WalkNav',toField='set_bind')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Display.py")
