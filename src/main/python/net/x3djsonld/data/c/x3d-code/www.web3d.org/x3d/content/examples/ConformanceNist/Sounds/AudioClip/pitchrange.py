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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='pitchrange.x3d',name='title'),
    meta(content='pitchrange-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='This world tests an AudioClip pitch range of 0.5, 1 and 2.0 to determine if the browser correctly alters sound octave as well as sound duration time. Three AudioClip node, each with a different "pitch" value are in this world. Each can be selected by the viewer clicking on the appropriate button at the top of the world. Clicking on "Pitch 0.5" should produce a chime sound that lasts 10 seconds, and is one octave lower than that of "Pitch 1". Selecting "Pitch 1" (the default pitch) should produce a chime sound that lasts 5 seconds, and is one octave higher than "Pitch 0.5". Selecting "Pitch 2" should produce a chime sound that is one octave higher than the default (1), and has a duration of 2.5 seconds.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/pitchrange.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='pitchrange.x3d'),
    Viewpoint(description='entry viewpoint',position=(0,0,5)),
    ProximitySensor(DEF='PROX_SENSOR',size=(1000,1000,1000)),
    Sound(
      source=AudioClip(DEF='MYSOUND1',description='chimes pitch x0.5',pitch=0.5,url=["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"])),
    Sound(
      source=AudioClip(DEF='MYSOUND2',description='chimes',url=["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"])),
    Sound(
      source=AudioClip(DEF='MYSOUND3',description='chimes pitch x2',pitch=2,url=["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"])),
    Transform(scale=(0.5,0.5,0.5),
      children=[
      Transform(translation=(0,-2.25,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='PHONOCOLOR')),
          geometry=Box(size=(3,1.5,3)))]),
      Transform(rotation=(1,0,0,-2.5),translation=(0,-0.25,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='HORNCOLOR')),
          geometry=Extrusion(beginCap=False,creaseAngle=1.57,crossSection=[(1,0),(0.92388,0.382683),(0.707107,0.707106),(0.382684,0.923879),(1.26759e-006,1),(-0.382682,0.92388),(-0.707105,0.707108),(-0.923879,0.382685),(-1,2.53518e-006),(-0.923881,-0.382681),(-0.707109,-0.707105),(-0.382687,-0.923878),(-3.80277e-006,-1),(0.38268,-0.923881),(0.707104,-0.70711),(0.923878,-0.382688),(1,0)],endCap=False,orientation=[(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0)],scale=[(2.2,2.2),(1.8,1.8),(1.4,1.4),(1.2,1.2),(1,1),(0.8,0.8),(0.6,0.6),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.2,0.2),(0.0001,0.0001)],solid=False,spine=[(0,-1.4,0),(0,-1.22137,0),(0,-1.01245,0),(0,-0.819601,0),(0,-0.626754,0),(0,-0.401765,0),(0,-0.204459,0),(0,-0.0164327,0),(0,0.176777,0),(0,0.380511,0),(0,0.578542,0),(0,0.819601,0),(0,0.996378,0),(0,1.8,0),(0,1.2,0)]))])]),
    Transform(DEF='PITCH_HALF_TRANS',
      children=[
      Transform(translation=(-3,1.5,-5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='HALFMATERIAL',ambientIntensity=1,diffuseColor=(0,1,0))),
          geometry=Box(DEF='HALF',size=(1,1,0.1))),
        Transform(translation=(-0.35,-0.1,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["Pitch","0.5"],
              fontStyle=FontStyle(size=0.4)))])]),
      TouchSensor(DEF='TOUCHHALF',description='touch for half-speed pitch'),
      TimeSensor(DEF='HALFTIMER'),
      ColorInterpolator(DEF='HALFFLASH',key=[0,0.5,1],keyValue=[(0,1,0),(1,1,1),(0,1,0)])]),
    Transform(DEF='PITCH_DEFAULT_TRANS',
      children=[
      Transform(translation=(0,1.5,-5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='DEFAULTMATERIAL',ambientIntensity=1,diffuseColor=(1,1,0))),
          geometry=Box(DEF='DEFAULT',size=(1,1,0.1))),
        Transform(translation=(-0.35,-0.1,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["Pitch","1"],
              fontStyle=FontStyle(size=0.4)))])]),
      TouchSensor(DEF='TOUCHDEFAULT',description='touch for default-speed pitch'),
      TimeSensor(DEF='DEFAULTTIMER'),
      ColorInterpolator(DEF='DEFAULTFLASH',key=[0,0.5,1],keyValue=[(1,1,0),(1,1,1),(1,1,0)])]),
    Transform(DEF='TWO_TRANS',
      children=[
      Transform(translation=(3,1.5,-5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='TWOMATERIAL',ambientIntensity=1,diffuseColor=(1,0,0))),
          geometry=Box(DEF='TWO',size=(1,1,0.1))),
        Transform(translation=(-0.55,-0.1,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["Pitch","2"],
              fontStyle=FontStyle(size=0.4)))])]),
      TouchSensor(DEF='TOUCHTWO',description='touch for double-speed pitch'),
      TimeSensor(DEF='TWOTIMER'),
      ColorInterpolator(DEF='TWOFLASH',key=[0,0.5,1],keyValue=[(1,0,0),(1,1,1),(1,0,0)])]),
    Script(DEF='SOUND_SCRIPT',directOutput=True,url=["pitchrange.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/pitchrange.js"],
      field=[
      field(accessType='initializeOnly',name='phonoColor',type='SFNode',
        children=[
        Material(USE='PHONOCOLOR')]),
      field(accessType='initializeOnly',name='hornColor',type='SFNode',
        children=[
        Material(USE='HORNCOLOR')]),
      field(accessType='initializeOnly',name='yellow',type='SFColor',value=(0.75,0.75,0.00)),
      field(accessType='initializeOnly',name='white',type='SFColor',value=(0.80,0.80,0.80)),
      field(accessType='inputOnly',name='colorPhonograph',type='SFBool')]),
    ROUTE(fromField='touchTime',fromNode='TOUCHHALF',toField='set_startTime',toNode='MYSOUND1'),
    ROUTE(fromField='touchTime',fromNode='TOUCHDEFAULT',toField='set_startTime',toNode='MYSOUND2'),
    ROUTE(fromField='touchTime',fromNode='TOUCHTWO',toField='set_startTime',toNode='MYSOUND3'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='PITCH_HALF_TRANS'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='PITCH_HALF_TRANS'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='PITCH_DEFAULT_TRANS'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='PITCH_DEFAULT_TRANS'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='TWO_TRANS'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='TWO_TRANS'),
    ROUTE(fromField='isActive',fromNode='MYSOUND1',toField='colorPhonograph',toNode='SOUND_SCRIPT'),
    ROUTE(fromField='isActive',fromNode='MYSOUND2',toField='colorPhonograph',toNode='SOUND_SCRIPT'),
    ROUTE(fromField='isActive',fromNode='MYSOUND3',toField='colorPhonograph',toNode='SOUND_SCRIPT'),
    ROUTE(fromField='touchTime',fromNode='TOUCHHALF',toField='set_startTime',toNode='HALFTIMER'),
    ROUTE(fromField='fraction_changed',fromNode='HALFTIMER',toField='set_fraction',toNode='HALFFLASH'),
    ROUTE(fromField='value_changed',fromNode='HALFFLASH',toField='set_diffuseColor',toNode='HALFMATERIAL'),
    ROUTE(fromField='touchTime',fromNode='TOUCHDEFAULT',toField='set_startTime',toNode='DEFAULTTIMER'),
    ROUTE(fromField='fraction_changed',fromNode='DEFAULTTIMER',toField='set_fraction',toNode='DEFAULTFLASH'),
    ROUTE(fromField='value_changed',fromNode='DEFAULTFLASH',toField='set_diffuseColor',toNode='DEFAULTMATERIAL'),
    ROUTE(fromField='touchTime',fromNode='TOUCHTWO',toField='set_startTime',toNode='TWOTIMER'),
    ROUTE(fromField='fraction_changed',fromNode='TWOTIMER',toField='set_fraction',toNode='TWOFLASH'),
    ROUTE(fromField='value_changed',fromNode='TWOFLASH',toField='set_diffuseColor',toNode='TWOMATERIAL')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for pitchrange.py")
