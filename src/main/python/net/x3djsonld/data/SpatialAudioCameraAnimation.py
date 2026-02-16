####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python SpatialAudioCameraAnimation.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Full',version='4.0',
  head=head(
    children=[
    meta(content='SpatialAudioCameraAnimation.x3d',name='title'),
    meta(content='In the last demo, there are two sound sources in different positions. Through the immersion in the X3D scene the user could attend a rational navigation. Whenever the camera moves in the direction of an existing sound source, the strength of this source increases, while the sound strength of the other (the second one) decreases and vice versa. Through this process, great realism of the scene is achieved, since it emulates the spatial sound in real world.',name='description'),
    meta(content='This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.',name='info'),
    meta(content='Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman',name='creator'),
    meta(content='28 October 2020',name='created'),
    meta(content='5 December 2021',name='modified'),
    meta(content='CHANGELOG.txt',name='reference'),
    meta(content='credit for audio files',name='TODO'),
    meta(content='https://www.medialab.hmu.gr/minipages/x3domAudio',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SpatialAudioCameraAnimation.x3d',name='identifier'),
    meta(content='X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SpatialAudioCameraAnimation.x3d'),
    NavigationInfo(id_='NAV'),
    Background(backUrl=["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"],bottomUrl=["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"],frontUrl=["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"],leftUrl=["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"],rightUrl=["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"],topUrl=["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"]),
    Viewpoint(DEF='Camera001',description='Viewpoint is like camera, prepositioned in locations (and directions) of interest. In this example the camera is the "ears of the user". So, if the trackCurrentView field from ListenerPointSource is TRUE then position and orientation matches the users current view',orientation=(1,0,0,-0.523599),position=(0,2000,3500)),
    TimeSensor(DEF='TIMER',cycleInterval=33.333332,loop=True),
    PositionInterpolator(DEF='Camera001-POS-INTERP',key=[0,0.25,0.5,0.75,1],keyValue=[(0,2000,3500),(0,2000,0),(0,2000,-3500),(0,2000,0),(0,2000,3500)]),
    OrientationInterpolator(DEF='Camera001-ROT-INTERP',key=[0,0.25,0.5,0.75,1],keyValue=[(1,0,0,-0.523599),(0.999990,0.003554,0.002727,-1.309007),(0,-0.965926,-0.258819,-3.141593),(0.002282,-0.793351,-0.608760,-3.135645),(1,-0.000001,-0,-0.523599)]),
    ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='Camera001-POS-INTERP'),
    ROUTE(fromField='value_changed',fromNode='Camera001-POS-INTERP',toField='set_position',toNode='Camera001'),
    ROUTE(fromField='fraction_changed',fromNode='TIMER',toField='set_fraction',toNode='Camera001-ROT-INTERP'),
    ROUTE(fromField='value_changed',fromNode='Camera001-ROT-INTERP',toField='set_orientation',toNode='Camera001'),
    Transform(DEF='Floor',translation=(1.241,0.000,0.358),
      children=[
      Shape(
        appearance=Appearance(DEF='WireColor',
          material=Material(diffuseColor=(0.122,0.114,0.125))),
        geometry=Box(size=(2000,1,2000)))]),
    Transform(DEF='TransformAudio1',translation=(-933.123474,0,-926.253235),
      children=[
      Shape(
        appearance=Appearance(DEF='WireColor_1',
          material=Material(diffuseColor=(0.690196,0.101961,0.101961))),
        geometry=Sphere(radius=100)),
      Billboard(
        children=[
        Transform(DEF='violin',rotation=(1,0,0,-0.5),scale=(100,100,100),translation=(0,100,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.0933,diffuseColor=(1,1,1),shininess=0.51,specularColor=(0.46,0.46,0.46))),
            geometry=Text(string=["Violin"],
              fontStyle=FontStyle(DEF='ModelFontStyle',family=["Times","SERIF"],style_='BOLD')))])])]),
    Transform(DEF='TransformAudio2',translation=(933.475586,0,924.423218),
      children=[
      Shape(
        appearance=Appearance(DEF='WireColor_2',
          material=Material(diffuseColor=(0.105882,0.694118,0.580392))),
        geometry=Sphere(radius=100)),
      Billboard(
        children=[
        Transform(DEF='saxophone',rotation=(1,0,0,-0.5),scale=(100,100,100),translation=(0,100,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.0933,diffuseColor=(1,1,1),shininess=0.51,specularColor=(0.46,0.46,0.46))),
            geometry=Text(string=["Saxophone"],
              fontStyle=FontStyle(USE='ModelFontStyle')))])])]),
    ListenerPointSource(id_='ListenerPointSource',trackCurrentView=True),
    StreamAudioDestination(id_='AudioDestination',
      children=[
      SpatialSound(DEF='Audio1',id_='SpatialSound1',
        children=[
        Gain(id_='Gain1',
          children=[
          AudioClip(description='Violin',id_='AudioClip1',loop=True,url=["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"])])]),
      SpatialSound(DEF='Audio2',id_='SpatialSound2',
        children=[
        Gain(id_='Gain2',
          children=[
          AudioClip(description='Saxophone',id_='AudioClip2',loop=True,url=["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"])])])])])
)
### X3D model conversion complete ###

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for SpatialAudioCameraAnimation.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python SpatialAudioCameraAnimation.py load and self-test diagnostics complete.")
