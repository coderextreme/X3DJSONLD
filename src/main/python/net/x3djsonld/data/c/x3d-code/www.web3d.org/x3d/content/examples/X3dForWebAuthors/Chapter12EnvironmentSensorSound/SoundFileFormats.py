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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='SoundFileFormats.x3d',name='title'),
    meta(content='Provide a test scene for sound files using various audio formats.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='10 November 2013',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='SoundFileFormats.png',name='Image'),
    meta(content='audio/Testing123stereo.wav',name='Sound'),
    meta(content='audio/Testing123stereo.aiff',name='Sound'),
    meta(content='audio/Testing123stereo.mp3',name='Sound'),
    meta(content='audio/Testing123original.wav',name='Sound'),
    meta(content='Reunion by Marc Sabatella, distributed with MuseScore',name='Sound'),
    meta(content='audio/Reunion_Example.mid',name='Sound'),
    meta(content='File type requirements, https://www.web3d.org/files/specifications/19775-1/V3.3/Part01/components/sound.html#AudioClip',name='requires'),
    meta(content='X3D audio formats test',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/SoundFileFormats.x3d',name='identifier'),
    meta(content='ZOOM H2next Handy Recorder, http://www.zoom.co.jp/products/h2n',name='generator'),
    meta(content='Audacity, http://audacity.sourceforge.net',name='generator'),
    meta(content='MuseScore, http://musescore.org',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SoundFileFormats.x3d'),
    Background(skyColor=[(0.2,0.2,0.2)]),
    #  ============================================================ 
    Transform(DEF='WavPlay',scale=(0.4,0.4,0.4),translation=(-4,0.5,0),
      children=[
      TouchSensor(DEF='WavTextClickedSensor',description='Play file via Sound/AudioClip: Testing123stereo.wav'),
      Sound(maxBack=100,maxFront=100,minBack=20,minFront=20,
        #  Make sure the sound source AudioClip is audible at the user location 
        source=AudioClip(DEF='Testing123stereoWavAudioClip',description='Playing Testing123stereo.wav',url=["audio/Testing123stereo.wav","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/audio/Testing123stereo.wav"])),
      ROUTE(fromField='touchTime',fromNode='WavTextClickedSensor',toField='startTime',toNode='Testing123stereoWavAudioClip'),
      Shape(
        geometry=Text(string=["Testing123stereo.wav"],
          fontStyle=FontStyle(DEF='MessageFont',family=["SANS"],justify=["MIDDLE","MIDDLE"],style_='BOLD')),
        appearance=Appearance(DEF='GreenAppearance',
          material=Material(diffuseColor=(0,1,0)))),
      Transform(DEF='TextClickSurface',scale=(5,0.5,1),translation=(0,0.3,0),
        children=[
        Shape(
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
            coord=Coordinate(point=[(1,1,0),(1,-1,0),(-1,-1,0),(-1,1,0)])),
          appearance=Appearance(
            material=Material(transparency=1)))])]),
    Transform(DEF='WavLaunch',scale=(0.4,0.4,0.4),translation=(-4,-0.1,0),
      children=[
      Anchor(description='Launch audio file in Web browser: Testing123stereo.wav',parameter=["target=_blank"],url=["audio/Testing123stereo.wav","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/audio/Testing123stereo.wav"],
        children=[
        Shape(
          geometry=Text(string=["(launch)"],
            fontStyle=FontStyle(USE='MessageFont')),
          appearance=Appearance(USE='GreenAppearance')),
        Transform(USE='TextClickSurface')])]),
    #  ============================================================ 
    Transform(DEF='Mp3Play',scale=(0.4,0.4,0.4),translation=(0,0.5,0),
      children=[
      TouchSensor(DEF='Mp3TextClickedSensor',description='Play file via Sound/AudioClip: Testing123stereo.mp3'),
      Sound(maxBack=100,maxFront=100,minBack=20,minFront=20,
        source=AudioClip(DEF='Testing123stereoMp3AudioClip',description='Play file via Sound/AudioClip: Testing123stereo.mp3',url=["audio/Testing123stereo.mp3","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/audio/Testing123stereo.mp3"])),
      ROUTE(fromField='touchTime',fromNode='Mp3TextClickedSensor',toField='startTime',toNode='Testing123stereoMp3AudioClip'),
      Shape(
        geometry=Text(string=["Testing123stereo.mp3"],
          fontStyle=FontStyle(USE='MessageFont')),
        appearance=Appearance(DEF='TurquoiseAppearance',
          material=Material(diffuseColor=(0.156863,0.878431,0.815686)))),
      Transform(USE='TextClickSurface')]),
    Transform(DEF='Mp3Launch',scale=(0.4,0.4,0.4),translation=(0,-0.1,0),
      children=[
      Anchor(description='Launch audio file in Web browser: Testing123stereo.mp3',parameter=["target=_blank"],url=["audio/Testing123stereo.mp3","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/audio/Testing123stereo.mp3"],
        children=[
        Shape(
          geometry=Text(string=["(launch)"],
            fontStyle=FontStyle(USE='MessageFont')),
          appearance=Appearance(USE='TurquoiseAppearance')),
        Transform(USE='TextClickSurface')])]),
    #  ============================================================ 
    Transform(DEF='MidiPlay',scale=(0.4,0.4,0.4),translation=(0,-2,0),
      children=[
      TouchSensor(DEF='MidiTextClickedSensor',description='Play file via Sound/AudioClip: Reunion_Example.mid'),
      Sound(maxBack=100,maxFront=100,minBack=20,minFront=20,
        source=AudioClip(DEF='Testing123stereoMidiAudioClip',description='Play file via Sound/AudioClip: Reunion_Example.mid',url=["audio/Reunion_Example.mid","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/audio/Reunion_Example.mid"])),
      ROUTE(fromField='touchTime',fromNode='MidiTextClickedSensor',toField='startTime',toNode='Testing123stereoMidiAudioClip'),
      Shape(
        geometry=Text(string=["Reunion_Example.mid"],
          fontStyle=FontStyle(USE='MessageFont')),
        appearance=Appearance(USE='TurquoiseAppearance')),
      Transform(USE='TextClickSurface')]),
    Transform(DEF='MidiLaunch',scale=(0.4,0.4,0.4),translation=(0,-2.6,0),
      children=[
      Anchor(description='Launch audio file in Web browser: Reunion_Example.mid',parameter=["target=_blank"],url=["audio/Reunion_Example.mid","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/audio/Reunion_Example.mid"],
        children=[
        Shape(
          geometry=Text(string=["(launch)"],
            fontStyle=FontStyle(USE='MessageFont')),
          appearance=Appearance(USE='TurquoiseAppearance')),
        Transform(USE='TextClickSurface')])]),
    #  ============================================================ 
    Transform(DEF='AiffPlay',scale=(0.4,0.4,0.4),translation=(4,0.5,0),
      children=[
      TouchSensor(DEF='AiffTextClickedSensor',description='Play file via Sound/AudioClip: Testing123stereo.aiff'),
      Sound(maxBack=100,maxFront=100,minBack=20,minFront=20,
        source=AudioClip(DEF='Testing123stereoAiffAudioClip',description='Play file via Sound/AudioClip: Testing123stereo.aiff',url=["audio/Testing123stereo.aiff","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/audio/Testing123stereo.aiff"])),
      ROUTE(fromField='touchTime',fromNode='AiffTextClickedSensor',toField='startTime',toNode='Testing123stereoAiffAudioClip'),
      Shape(
        geometry=Text(string=["Testing123stereo.aiff"],
          fontStyle=FontStyle(USE='MessageFont')),
        appearance=Appearance(DEF='AmberAppearance',
          material=Material(diffuseColor=(1,0.760784,0)))),
      Transform(USE='TextClickSurface')]),
    Transform(DEF='AiffLaunch',scale=(0.4,0.4,0.4),translation=(4,-0.1,0),
      children=[
      Anchor(description='Launch audio file in Web browser: Testing123stereo.aiff',parameter=["target=_blank"],url=["audio/Testing123stereo.aiff","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/audio/Testing123stereo.aiff"],
        children=[
        Shape(
          geometry=Text(string=["(launch)"],
            fontStyle=FontStyle(USE='MessageFont')),
          appearance=Appearance(USE='AmberAppearance')),
        Transform(USE='TextClickSurface')])]),
    #  ============================================================ 
    Transform(DEF='HeaderBox',translation=(0,2,-0.1),
      children=[
      Shape(
        geometry=Box(size=(12,1,0.1)),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1),transparency=0.75)))]),
    Transform(DEF='WavRequired',scale=(0.4,0.4,0.4),translation=(-4,2,0),
      children=[
      Shape(
        geometry=Text(string=["Required Support"],
          fontStyle=FontStyle(USE='MessageFont')),
        appearance=Appearance(USE='GreenAppearance'))]),
    Transform(DEF='Mp3Recommended',scale=(0.4,0.4,0.4),translation=(0,2,0),
      children=[
      Shape(
        geometry=Text(string=["Recommended Support"],
          fontStyle=FontStyle(USE='MessageFont')),
        appearance=Appearance(USE='TurquoiseAppearance'))]),
    Transform(DEF='AiffOptional',scale=(0.4,0.4,0.4),translation=(4,2,0),
      children=[
      Shape(
        geometry=Text(string=["Optional Support"],
          fontStyle=FontStyle(USE='MessageFont')),
        appearance=Appearance(USE='AmberAppearance'))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SoundFileFormats.py")
