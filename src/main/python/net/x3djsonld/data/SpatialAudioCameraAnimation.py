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

newModel=X3D(profile='Full',version='4.0',
  head=head(
    children=[
    meta(content='SpatialAudioCameraAnimation.x3d',name='title'),
    meta(content='In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world.',name='description'),
    meta(content='This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.',name='info'),
    meta(content='Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman',name='creator'),
    meta(content='28 October 2020',name='created'),
    meta(content='20 April 2021',name='modified'),
    meta(content='CHANGELOG.txt',name='reference'),
    meta(content='credit for audio files',name='TODO'),
    meta(content='http://www.medialab.teicrete.gr/minipages/x3domAudio',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d',name='identifier'),
    meta(content='X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(id='NAV'),
    Background(backUrl=["images/generic/BK1.png"],bottomUrl=["images/generic/DN1.png"],frontUrl=["images/generic/FR1.png"],leftUrl=["images/generic/LF1.png"],rightUrl=["images/generic/RT1.png"],topUrl=["images/generic/UP1.png"]),
    Viewpoint(DEF='Camera001',description='Camera001',jump=TRUE,orientation=(1.000000,0.000000,-0.000000,-0.523599),position=(0.000000,2000.000000,3500.000000),zFar=0,zNear=1.000000),
    TimeSensor(DEF='TIMER',cycleInterval=33.333332,loop=TRUE),
    PositionInterpolator(DEF='Camera001-POS-INTERP',key=[0,0.25,0.5,0.75,1],keyValue=[(0,2000,3500),(0,2000,0),(0,2000,-3500),(0,2000,0),(0,2000,3500)]),
    OrientationInterpolator(DEF='Camera001-ROT-INTERP',key=[0,0.25,0.5,0.75,1],keyValue=[(1.000000,0.000000,-0.000000,-0.523599),(0.999990,0.003554,0.002727,-1.309007),(0.000000,-0.965926,-0.258819,-3.141593),(0.002282,-0.793351,-0.608760,-3.135645),(1.000000,-0.000001,-0.000000,-0.523599)]),
    ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='Camera001-POS-INTERP'),
    ROUTE(fromField='value_changed',fromNode='Camera001-POS-INTERP',toField='set_position',toNode='Camera001'),
    ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='Camera001-ROT-INTERP'),
    ROUTE(fromField='value_changed',fromNode='Camera001-ROT-INTERP',toField='set_orientation',toNode='Camera001'),
    Transform(DEF='Floor',translation=(1.241,0.000,0.358),
      children=[
      Shape(
        appearance=Appearance(DEF='WireColor',
          material=Material(diffuseColor=(0.122,0.114,0.125))),
        children=[
        box(size=2000,1,2000)])]),
    Transform(DEF='Audio1',translation=(-933.123474,0.000000,-926.253235),
      children=[
      Shape(
        appearance=Appearance(DEF='WireColor_1',
          material=Material(diffuseColor=(0.690196,0.101961,0.101961))),
        children=[
        sphere(radius=100)]),
      Billboard(
        children=[
        Transform(DEF='violin',rotation=(1,0,0,-0.5),scale=(100,100,100),translation=(0,100,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.345,0.345,0.882)),
              Material(ambientintensity=0.0933,diffusecolor=1,1,1,emissivecolor=0,0,0,shininess=0.51,specularcolor=0.46,0.46,0.46)),
            geometry=Text(ccw=True,lit=true,string=['Violin'],usegeocache=true,
              children=[
              fontstyle(family='Times',horizontal=true,justify=BEGIN,lefttoright=true,size=1,spacing=1,style_='BOLD',toptobottom=true)]))])])]),
    Transform(DEF='Audio2',translation=(933.475586,0.000000,924.423218),
      children=[
      Shape(
        appearance=Appearance(DEF='WireColor_2',
          material=Material(diffuseColor=(0.105882,0.694118,0.580392))),
        children=[
        sphere(radius=100)]),
      Billboard(
        children=[
        Transform(DEF='saxophone',rotation=(1,0,0,-0.5),scale=(100,100,100),translation=(0,100,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.345,0.345,0.882)),
              Material(ambientintensity=0.0933,diffusecolor=1,1,1,emissivecolor=0,0,0,shininess=0.51,specularcolor=0.46,0.46,0.46)),
            geometry=Text(ccw=True,lit=true,string=['Saxophone'],usegeocache=true,
              children=[
              fontstyle(family='Times',horizontal=true,justify=BEGIN,lefttoright=true,size=1,spacing=1,style_='BOLD',toptobottom=true)]))])])]),
    ListenerPoint(id='ListenerPoint',trackCurrentView=true),
    AudioDestination(id='AudioDestination',
      children=[
      SpatialSound(USE='Audio1',coneInnerAngle=360,coneOuterAngle=0,distanceModel=linear,enableHRTF=true,id='SpatialSound1',maxDistance=3500,
        children=[
        Gain(id='Gain1',
          source=AudioClip(id='AudioClip1',loop=True,pauseTime=-1,resumeTime=-1,stopTime=-1,url=['sound/violin.mp3']))]),
      SpatialSound(USE='Audio2',coneInnerAngle=360,coneOuterAngle=0,distanceModel=linear,enableHRTF=true,id='SpatialSound2',maxDistance=3500,
        children=[
        Gain(id='Gain2',
          source=AudioClip(id='AudioClip2',loop=True,pauseTime=-1,resumeTime=-1,stopTime=-1,url=['sound/saxophone.mp3']))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SpatialAudioCameraAnimation.py")