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
    meta(content='Filters.x3d',name='title'),
    meta(content='This X3D scene involves three sound sources. Each of them is visualized by a 3D object (in our case is a sphere) that depicts the sound effects. Specifically, we have added filters through of them we are able to manage the different sound effects in an impressive way. Filters can be composed of a number of attributes, frequency, detune, gain and the quality factor which also known as Q. Furthermore, the filters are classified in some specific types, depending on the sound effects that produce. In detail, there is the Low-pass filter which can create more muffled sound. Another one is the High-pass filter, which is used to generate tinny sound. Equally important is the Band-pass filter, which cuts off low and high frequencies and passes through only these within a certain range. On the contrary, the Notch filter has exactly the opposite operation of the Band-pass filter. Then is the Low-shelf filter, its role is to change the amount of bass in a sound, as a result the frequencies that are lower than the current frequency get a boost, while them that are over it remain unchanged. Next, the High-shelf filter is responsible for the quantity of treble in a sound. Moreover, Peaking filter is used in order to handle the amount of midrange in a sound. Lastly, there is the All-pass filter, whose role is to introduce phaser effects.',name='description'),
    meta(content='This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.',name='info'),
    meta(content='Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman',name='creator'),
    meta(content='28 October 2020',name='created'),
    meta(content='4 August 2021',name='modified'),
    meta(content='CHANGELOG.txt',name='reference'),
    meta(content='credit for audio files',name='TODO'),
    meta(content='https://www.medialab.hmu.gr/minipages/x3domAudio',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/Filters.x3d',name='identifier'),
    meta(content='X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(id='NAV'),
    Background(skyColor=[(0.200,0.200,0.200)]),
    Viewpoint(orientation=(1,0,0,-0.5),position=(0.0,500.0,600.0),retainUserOffsets=True),
    Transform(DEF='Audio1',translation=(-200,50,0),
      children=[
      Shape(
        appearance=Appearance(DEF='audio_emit',
          material=Material(diffuseColor=(0.1,0.1,0.1),emissiveColor=(0.8,0.8,0.8),specularColor=(0.01,0.01,0.01))),
        geometry=Sphere(radius=30))]),
    Transform(DEF='Audio2',translation=(0,50,0),
      children=[
      Shape(
        appearance=Appearance(DEF='audio_emit',
          material=Material(diffuseColor=(0.1,0.1,0.1),emissiveColor=(0.8,0.8,0.8),specularColor=(0.01,0.01,0.01))),
        geometry=Sphere(radius=30))]),
    Transform(DEF='Audio3',translation=(200,50,0),
      children=[
      Shape(
        appearance=Appearance(DEF='audio_emit',
          material=Material(diffuseColor=(0.1,0.1,0.1),emissiveColor=(0.8,0.8,0.8),specularColor=(0.01,0.01,0.01))),
        geometry=Sphere(radius=30))]),
    Transform(DEF='AnimData',id='AnimDataPoint',translation=(0,50,0)),
    Transform(DEF='AnimDataBoxH',id='AnimDataBoxH',translation=(0,100,0)),
    Transform(DEF='AnimDataBoxM',id='AnimDataBoxM',translation=(15,100,0)),
    Transform(DEF='AnimDataBoxL',id='AnimDataBoxL',translation=(30,100,0)),
    Transform(DEF='AnimDataBoxMM',id='AnimDataBoxMMirror',translation=(-15,100,0)),
    Transform(DEF='AnimDataBoxLM',id='AnimDataBoxLMirror',translation=(-30,100,0)),
    Transform(
      children=[
      Shape(
        appearance=Appearance(DEF='floor',
          material=Material(diffuseColor=(0.1,0.1,0.1),shininess=0.8,specularColor=(0.5,0.6,0.7))),
        geometry=Cylinder(radius=500))]),
    ListenerPoint(id='ListenerPoint',trackCurrentView=true),
    AudioDestination(id='AudioDestination',
      children=[
      DynamicsCompressor(id='DynamicsCompressor',
        children=[
        Gain(id='Gain4',
          children=[
          SpatialSound(USE='Audio1',coneInnerAngle=360,coneOuterAngle=360,enableHRTF=true,id='SpatialSound1',
            children=[
            Gain(id='Gain1',
              children=[
              Analyser(id='Analyser1',
                children=[
                BiquadFilter(detune=50.0,frequency=600,id='BiquadFilter1',qualityFactor=30.0,type=allpass,
                  source=AudioClip(id='AudioClip1',loop=True,pauseTime=-1,resumeTime=-1,stopTime=-1,url=['sound/techno_beat.mp3']))])])]),
          SpatialSound(USE='Audio2',coneInnerAngle=360,coneOuterAngle=360,enableHRTF=true,id='SpatialSound2',
            children=[
            Gain(id='Gain2',
              children=[
              Analyser(id='Analyser2',
                children=[
                BiquadFilter(detune=15.0,frequency=600,id='BiquadFilter2',qualityFactor=15.0,type=allpass,
                  source=AudioClip(id='AudioClip2',loop=True,pauseTime=-1,resumeTime=-1,stopTime=-1,url=['sound/beat.mp3']))])])]),
          SpatialSound(USE='Audio3',coneInnerAngle=360,coneOuterAngle=360,enableHRTF=true,id='SpatialSound3',
            children=[
            Gain(id='Gain3',
              children=[
              Analyser(id='Analyser3',
                children=[
                BiquadFilter(frequency=1000,id='BiquadFilter3',qualityFactor=0,type=allpass,
                  source=AudioClip(id='AudioClip3',loop=True,pauseTime=-1,resumeTime=-1,stopTime=-1,url=['sound/wobble_loop.mp3']))])])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Filters.py")
