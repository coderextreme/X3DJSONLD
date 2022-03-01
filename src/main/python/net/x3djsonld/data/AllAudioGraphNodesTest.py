####################################################################################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach simplifies Python X3D deployment and use.
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
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Full',version='4.0',
  head=head(
    children=[
    meta(content='AllAudioGraphNodesTest.x3d',name='title'),
    meta(content='List of all X3D4 audio graph nodes to test infrastructure and validation support. Absence of attributes means that checking and removal of default values is working.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='25 October 2020',name='created'),
    meta(content='26 November 2021',name='modified'),
    meta(content='Developmental test, no actual 3D model expected',name='warning'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/AllAudioGraphNodesTest.x3d',name='identifier'),
    meta(content='X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='AllAudioGraphNodes.x3d'),
    Shape(
      geometry=Box(),
      appearance=Appearance(
        acousticProperties=AcousticProperties(description='Testing of X3D4 nodes demonstrating W3C Audio API in progress',diffuse=0.25,refraction=0.5,specular=1),
        material=Material(),)),
    Sound(location=(0,1.6,0),
      source=AudioClip(description='testing',url=["sound/saxophone.mp3","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/sound/saxophone.mp3"])),
    Sound(location=(0,1.6,0),
      source=MovieTexture(description='testing',url=["bogus.mpg","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/bogus.mpg"])),
    SpatialSound(
      children=[
      Analyser(
        children=[
        StreamAudioDestination(
          children=[
          BiquadFilter(
            children=[
            ChannelMerger(
              children=[
              ChannelSelector(
                children=[
                ChannelSplitter(
                  children=[
                  Convolver(
                    children=[
                    Delay(
                      children=[
                      DynamicsCompressor(
                        children=[
                        Gain(
                          children=[
                          StreamAudioDestination(
                            children=[
                            WaveShaper(
                              #  The following X3DSoundSourceNode nodes have no audio-graph children 
                              children=[
                              BufferAudioSource(),
                              ListenerPointSource(),
                              MicrophoneSource(),
                              OscillatorSource(frequency=440.0),
                              StreamAudioSource(),])])])])])])])])])])])])])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful")
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

print("python x3d.py load and self-test complete for AllAudioGraphNodesTest.py")
