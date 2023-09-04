####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python SplitChannels.py
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
    meta(content='SplitChannels.x3d',name='title'),
    meta(content='This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner.',name='description'),
    meta(content='This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.',name='info'),
    meta(content='Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman',name='creator'),
    meta(content='28 October 2020',name='created'),
    meta(content='5 December 2021',name='modified'),
    meta(content='CHANGELOG.txt',name='reference'),
    meta(content='credit for audio files',name='TODO'),
    meta(content='http://www.medialab.hmu.gr/minipages/x3domAudio',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d',name='identifier'),
    meta(content='X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SplitChannels.x3d'),
    NavigationInfo(id_='NAV',type='NONE'),
    Background(skyColor=[(0.200,0.200,0.210)]),
    Viewpoint(orientation=(1,0,0,-0.5),position=(0.0,500.0,600.0),retainUserOffsets=True),
    Transform(DEF='PowerR',translation=(100,400,400),
      children=[
      Transform(id_='pR',rotation=(1,0,0,-0.5),translation=(0,40,0),
        children=[
        Shape(
          appearance=Appearance(DEF='audio_emit',
            material=Material(diffuseColor=(0,1,0),emissiveColor=(0.8,0.8,0.8),specularColor=(0.01,0.01,0.01))),
          geometry=Box(size=(10,80,0.01)))]),
      Transform(rotation=(1,0,0,-0.5),translation=(-2.7,37,0),
        children=[
        Shape(
          appearance=Appearance(DEF='audio_emit2',
            material=Material(diffuseColor=(0,1,0),emissiveColor=(0.8,0.8,0.8),specularColor=(0.01,0.01,0.01)),
            texture=ImageTexture(url=["images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"])),
          geometry=Box(size=(25,83,0.01)))]),
      Transform(DEF='volumeRight',rotation=(1,0,0,-0.5),scale=(10,10,10),translation=(0,-10,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.0933,diffuseColor=(0.345,0.345,0.882),shininess=0.51,specularColor=(0.46,0.46,0.46))),
          geometry=Text(string=['Right Channel Volume'],
            fontStyle=FontStyle(family=["Times"],style_='BOLD')))])]),
    Transform(DEF='PowerL',translation=(-100,400,400),
      children=[
      Transform(id_='pL',rotation=(1,0,0,-0.5),translation=(0,40,0),
        children=[
        Shape(
          appearance=Appearance(DEF='audio_emit3',
            material=Material(diffuseColor=(0,1,0),emissiveColor=(0.8,0.8,0.8),specularColor=(0.01,0.01,0.01))),
          geometry=Box(size=(10,80,0.01)))]),
      Transform(rotation=(1,0,0,-0.5),translation=(13.2,37,0),
        children=[
        Shape(
          appearance=Appearance(DEF='audio_emit4',
            material=Material(diffuseColor=(0,1,0),emissiveColor=(0.8,0.8,0.8),specularColor=(0.01,0.01,0.01)),
            texture=ImageTexture(url=["images/line.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/line.png"])),
          geometry=Box(size=(25,83,0.01)))]),
      Transform(DEF='volumeLeft',rotation=(1,0,0,-0.5),scale=(10,10,10),translation=(0,-10,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(ambientIntensity=0.0933,diffuseColor=(0.345,0.345,0.882),shininess=0.51,specularColor=(0.46,0.46,0.46))),
          geometry=Text(string=['Left Channel Volume'],
            fontStyle=FontStyle(family=["Times"],style_='BOLD')))])]),
    Transform(
      children=[
      Shape(
        appearance=Appearance(DEF='floor',
          material=Material(diffuseColor=(0.1,0.1,0.1),shininess=0.8,specularColor=(0.5,0.6,0.7))),
        geometry=Box(size=(1500,10,500)))]),
    ListenerPointSource(id_='ListenerPointSource',trackCurrentView=True),
    StreamAudioDestination(id_='AudioDestination',
      children=[
      Gain(id_='Gain3',
        children=[
        ChannelMerger(id_='ChannelMerger',
          children=[
          ChannelSelector(id_='ChannelSelector0',
            children=[
            Gain(USE='ChannelSplitter')]),
          ChannelSelector(channelSelection=1,id_='ChannelSelector1',
            children=[
            Gain(USE='ChannelSplitter')])])])]),
    ChannelSplitter(DEF='ChannelSplitter',channelCountMode='EXPLICIT',
      children=[
      AudioClip(description='Violin',url=["sound/violin.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/violin.mp3"])]),
    Transform(DEF='Audio3',rotation=(1,0,0,-0.5),translation=(0,100,0),
      children=[
      Shape(
        appearance=Appearance(DEF='audio_emit5',
          material=Material(diffuseColor=(0.3,1,0.3),emissiveColor=(0.8,0.8,0.8),specularColor=(0.01,0.01,0.01)),
          texture=ImageTexture(url=["images/loudspeaker.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/loudspeaker.png"])),
        geometry=Box(size=(100,100,0.001)))])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for SplitChannels.py:')
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

print("python SplitChannels.py load and self-test diagnostics complete.")
