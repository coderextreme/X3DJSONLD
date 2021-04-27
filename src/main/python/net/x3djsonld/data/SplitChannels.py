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
    meta(content='SplitChannels.x3d',name='title'),
    meta(content='This X3D scene includes a simple sound source which can be moved right and left. Depending on the position of the sound source, the user can hear the produced sound from the corresponding output speaker. Accordingly, there is a source that can be passed through a SpatialSound for the spatialization of the input audio. The approach is based on the relative position of the source and the listener, in comparison to the panner.',name='description'),
    meta(content='This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.',name='info'),
    meta(content='Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman',name='creator'),
    meta(content='28 October 2020',name='created'),
    meta(content='28 October 2020',name='modified'),
    meta(content='CHANGELOG.txt',name='reference'),
    meta(content='credit for audio files',name='TODO'),
    meta(content='http://www.medialab.teicrete.gr/minipages/x3domAudio',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/SplitChannels.x3d',name='identifier'),
    meta(content='X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SplitChannels.x3d'),
    NavigationInfo(DEF='NAV',type=["NONE"]),
    Background(skyColor=[(0.200,0.200,0.210)]),
    Viewpoint(orientation=(1,0,0,-0.5),position=(0.0,500.0,600.0),retainUserOffsets=True),
    Transform(DEF='PowerR',translation=(100,400,400),
      children=[
      Transform(DEF='pR',rotation=(1,0,0,-0.5),translation=(0,40,0),
        children=[
        Shape(
          appearance=Appearance(DEF='audio_emit1',
            material=Material(diffuseColor=(0,1,0),emissiveColor=(0.8,0.8,0.8),specularColor=(0.01,0.01,0.01))),
          geometry=Box(size=(10,80,0.01)))]),
      Transform(rotation=(1,0,0,-0.5),translation=(-2.7,37,0),
        children=[
        Shape(
          appearance=Appearance(DEF='audio_emit2',
            material=Material(diffuseColor=(0,1,0),emissiveColor=(0.8,0.8,0.8),specularColor=(0.01,0.01,0.01)),
            texture=ImageTexture(url=["images/line.png"])),
          geometry=Box(size=(25,83,0.01)))]),
      Transform(DEF='volumeRight',rotation=(1,0,0,-0.5),scale=(10,10,10),translation=(0,-10,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.345,0.345,0.882)),
            Material(ambientIntensity=0.0933,diffuseColor=(1,1,1),shininess=0.51,specularColor=(0.46,0.46,0.46))),
          geometry=Text(string=["Right Channel Volume"],
            fontStyle=FontStyle(family=["Times"],style_='BOLD')))])]),
    Transform(DEF='PowerL',translation=(-100,400,400),
      children=[
      Transform(DEF='pL',rotation=(1,0,0,-0.5),translation=(0,40,0),
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
            texture=ImageTexture(url=["images/line.png"])),
          geometry=Box(size=(25,83,0.01)))]),
      Transform(DEF='volumeLeft',rotation=(1,0,0,-0.5),scale=(10,10,10),translation=(0,-10,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.345,0.345,0.882)),
            Material(ambientIntensity=0.0933,diffuseColor=(1,1,1),shininess=0.51,specularColor=(0.46,0.46,0.46))),
          geometry=Text(string=["Left Channel Volume"],
            fontStyle=FontStyle(family=["Times"],style_='BOLD')))])]),
    Transform(DEF='Audio3',rotation=(1,0,0,-0.5),translation=(0,100,0),
      children=[
      Shape(
        appearance=Appearance(DEF='audio_emit5',
          material=Material(diffuseColor=(0.3,1,0.3),emissiveColor=(0.8,0.8,0.8),specularColor=(0.01,0.01,0.01)),
          texture=ImageTexture(url=["images/loudspeaker.png"])),
        geometry=Box(size=(100,100,0.001)))]),
    AudioSound(
      children=[
      Transform(USE='Audio3'),
      SpatialSound(coneInnerAngle=360,coneOuterAngle=360,enableHRTF=true,position=0,0,0),
      BufferAudioSource(loop=True,url=["sound/violin.mp3","sound/violin.ogg"])]
      #  <BiquadFilter frequency='100' detune='10.0' qualityFactor='10' gain='0' type='lowpass' /> 
      ),
    Transform(
      children=[
      Shape(
        appearance=Appearance(DEF='floor',
          material=Material(diffuseColor=(0.1,0.1,0.1),shininess=0.8,specularColor=(0.5,0.6,0.7))),
        geometry=Box(size=(1500,10,500)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SplitChannels.py")
