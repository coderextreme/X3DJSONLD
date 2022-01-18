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
    meta(content='ObliqueStrategies.x3d',name='title'),
    meta(content='Text scripting and animation example using Oblique Strategies card set by Brian Eno.',name='description'),
    meta(content='Don Brutzman, John Kelly, Ben Cheng',name='creator'),
    meta(content='3 November 2013',name='created'),
    meta(content='10 November 2019',name='modified'),
    meta(content='oblique.html',name='reference'),
    meta(content='ObliqueStrategies.txt',name='reference'),
    meta(content='ObliqueStrategiesScript.js',name='reference'),
    meta(content='http://music.hyperreal.org/artists/brian_eno/oblique/oblique.html',name='reference'),
    meta(content='http://www.eno-web.co.uk/obliques.html',name='reference'),
    meta(content='http://gothpunk.com/haiku-intro.html',name='reference'),
    meta(content='http://www.rtqe.net/ObliqueStrategies/OSintro.html',name='reference'),
    meta(content='https://en.wikipedia.org/wiki/Oblique_Strategies',name='reference'),
    meta(content='Brian Eno, Oblique Strategies',name='subject'),
    meta(content='images/ObliqueStrategiesEntryScreen.png',name='Image'),
    meta(content='http://translate.google.com/translate_tts?tl=en&q=hello%20X3D',name='Sound'),
    meta(content='translate_tts_HelloX3D.mp3',name='Sound'),
    meta(content='translate_tts_HelloX3D.wav',name='Sound'),
    meta(content='multiliingual translation parameter',name='TODO'),
    meta(content='http://stackoverflow.com/questions/9163988/download-mp3-from-google-translate-text-to-speech',name='reference'),
    meta(content='http://www.greenbot.com/article/2105862/how-to-get-started-with-google-text-to-speech.html',name='reference'),
    meta(content='under development, scene Sound/AudioClip triggering (or retrieved file format) not working',name='warning'),
    meta(content='TODO resolve potential error in Script node TextScript: parse problem line 15 " var strategy = [];',name='warning'),
    meta(content='https://gist.github.com/alotaiba/1728771',name='reference'),
    meta(content='https://stackoverflow.com/questions/35002003/how-to-use-google-translate-tts-with-the-new-v2-api',name='reference'),
    meta(content='https://translate.google.com/translate_tts?ie=UTF-8&client=tw-ob&tl=en&q=Hello+X3D4',name='Sound'),
    meta(content='translate_tts_HelloX3D4.mp3',name='Sound'),
    meta(content='https://cloud.google.com/translate/docs/basic/translating-text',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategies.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ObliqueStrategies.x3d'),
    NavigationInfo(type='"NONE"'),
    Background(skyColor=[(0.419608,0.427451,1)]),
    Transform(scale=(0.4,0.4,0.4),translation=(0,1,0),
      children=[
      TouchSensor(DEF='RandomTextClickedSensor',description='Select to see a new strategy'),
      Shape(
        geometry=Text(string=["Oblique Strategies","","(Over One Hundred Worthwhile Dilemmas)","","by Brian Eno and Peter Schmidt"],
          fontStyle=FontStyle(DEF='MessageFont',family=["SANS"],justify=["MIDDLE","MIDDLE"],style_='BOLD')),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1)))),
      Transform(scale=(10,3,1),
        children=[
        Shape(DEF='HeadlineClickSurface',
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
            coord=Coordinate(point=[(1,1,0),(1,-1,0),(-1,-1,0),(-1,1,0)])),
          appearance=Appearance(
            material=Material(ambientIntensity=0.245763,diffuseColor=(0.34773,0.090909,0.005289),shininess=0.07,specularColor=(0.336735,0.051091,0.051091),transparency=0.8)))])]),
    Script(DEF='TextScript',url=["ObliqueStrategiesScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/ObliqueStrategiesScript.js"],
      #  initialize() method includes unit test to printAllStrategies() to console 
      #  TODO insert field definitions here (index string_changed previous next random) and then animate! 
      field=[
      field(accessType='initializeOnly',appinfo='index for active strategy card, -1 means no selection',name='index',type='SFInt32',value=0),
      field(accessType='outputOnly',appinfo='latest strategy card value',name='string_changed',type='MFString'),
      field(accessType='outputOnly',appinfo='"url to invoke Google Translate"',name='textToSpeechUrl',type='MFString'),
      field(accessType='outputOnly',appinfo='activate Sound node',name='newCardTime',type='SFTime'),
      field(accessType='inputOnly',name='selectPreviousCard',type='SFBool'),
      field(accessType='inputOnly',name='selectNextCard',type='SFBool'),
      field(accessType='inputOnly',name='selectRandomCard',type='SFBool'),
      field(accessType='initializeOnly',appinfo='controls console tracing',name='traceEnabled',type='SFBool',value=True)],

      sourceCode="""
ecmascript:

"""),
    Transform(DEF='CardTransform',scale=(0.4,0.4,0.4),translation=(0,-1.5,0),
      children=[
      Shape(
        geometry=Text(DEF='CardText',
          fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],style_='BOLD')),
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1)))),
      ROUTE(fromField='string_changed',fromNode='TextScript',toField='string',toNode='CardText'),
      Sound(DEF='CardSoundSpatialization',maxBack=100,maxFront=100,minBack=20,minFront=20,
        #  Make sure the sound source AudioClip is audible at the user location 
        #  Not all X3D players seem to use the .mp3 
        #  &#38; is ampersand character, avoids escaping problems and inconsistencies in browsers and X3D players 
        #  %20 is space character used in uri/url encoding 
        source=AudioClip(DEF='TextToSpeechAudioClip',description='sends strategy text google translate',url=["http://translate.google.com/translate_tts?tl=en&amp;q=Feed%20the%20recording%20back%20out%20of%20the%20medium","translate_tts_mp3FileFormatNotSupported.wav","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Inspiration/translate_tts_mp3FileFormatNotSupported.wav"])),
      ROUTE(fromField='textToSpeechUrl',fromNode='TextScript',toField='url',toNode='TextToSpeechAudioClip'),
      ROUTE(fromField='newCardTime',fromNode='TextScript',toField='startTime',toNode='TextToSpeechAudioClip')]),
    Transform(scale=(0.4,0.4,0.4),translation=(-3.2,2.5,0),
      children=[
      TouchSensor(DEF='PreviousTextClickedSensor',description='Select to see previous strategy'),
      ROUTE(fromField='isActive',fromNode='PreviousTextClickedSensor',toField='selectPreviousCard',toNode='TextScript'),
      Shape(
        geometry=Text(string=["previous"],
          fontStyle=FontStyle(USE='MessageFont')),
        appearance=Appearance(DEF='InterfaceAppearance',
          material=Material(diffuseColor=(1,0,0.6)))),
      Transform(scale=(2,0.6,1),
        children=[
        Shape(DEF='TransparentClickSurface',
          #  support Selectable Text with a scalable IFS 
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],solid=False,
            coord=Coordinate(point=[(1,1,0),(1,-1,0),(-1,-1,0),(-1,1,0)])),
          appearance=Appearance(
            material=Material(transparency=1)))])]),
    Transform(scale=(0.4,0.4,0.4),translation=(3.5,2.5,0),
      children=[
      TouchSensor(DEF='NextTextClickedSensor',description='Select to see next strategy'),
      ROUTE(fromField='isActive',fromNode='NextTextClickedSensor',toField='selectNextCard',toNode='TextScript'),
      Shape(
        geometry=Text(string=["next"],
          fontStyle=FontStyle(USE='MessageFont')),
        appearance=Appearance(USE='InterfaceAppearance')),
      Transform(scale=(1.2,0.6,1),
        children=[
        Shape(USE='TransparentClickSurface')])]),
    Transform(scale=(0.4,0.4,0.4),translation=(-3.3,-0.5,0),
      children=[
      TouchSensor(USE='RandomTextClickedSensor'),
      ROUTE(fromField='isActive',fromNode='RandomTextClickedSensor',toField='selectRandomCard',toNode='TextScript'),
      Shape(
        geometry=Text(string=["random"],
          fontStyle=FontStyle(USE='MessageFont')),
        appearance=Appearance(USE='InterfaceAppearance')),
      Transform(scale=(1.8,0.6,1),
        children=[
        Shape(USE='TransparentClickSurface')])]),
    Transform(scale=(0.4,0.4,0.4),translation=(3.3,-0.5,0),
      children=[
      Anchor(DEF='TextToSpeechAnchor',description='text to speech in browser',parameter=["target=_blank"],url=["http://translate.google.com/translate_tts?tl=en&amp;q=Overtly%20resist%20change"],
        children=[
        ROUTE(fromField='textToSpeechUrl',fromNode='TextScript',toField='url',toNode='TextToSpeechAnchor'),
        Shape(
          geometry=Text(string=["speech"],
            fontStyle=FontStyle(USE='MessageFont')),
          appearance=Appearance(USE='InterfaceAppearance')),
        Transform(scale=(1.8,0.6,1),
          children=[
          Shape(USE='TransparentClickSurface')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful")
except BaseException as err:
    print("*** Python-to-VRML export of VRML output failed:", err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (still testing)")
except SyntaxError as err:
    print("*** Python-to-JSON export of JSON output failed:", err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python x3d.py load and self-test complete for ObliqueStrategies.py")
