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
    meta(content='switchsounds.x3d',name='title'),
    meta(content='switch-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test Switching of sounds. A "chime" sounding Sound node is initially a "switched out" child of a Switch node in this world. If the viewer clicks on the "Switch in" button in this world, the Sound child is switched in as a child of the Switch node, and should begin to play. If the viewer clicks on the "Switch out" button while the Sound is playing, the sound should cease. However, the Sound node should continue to send and receive events, and as a result, the "phonograph" geometry continue to remain a yellow color, indicating that the Sound node isActive field is still true, even though the Sound is no longer audible.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/Sound/switchsounds.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='switchsounds.x3d'),
    Viewpoint(description='entry view',position=(0,0,5)),
    ProximitySensor(DEF='PROX_SENSOR',size=(1000,1000,1000)),
    Switch(DEF='MYSWITCH',whichChoice=-1,
      children=[
      Sound(
        source=AudioClip(DEF='MYSOUND',description='chimes',loop=True,url=["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"]))]),
    Transform(scale=(0.5,0.5,0.5),
      children=[
      Transform(translation=(0,-2,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='PHONOCOLOR')),
          geometry=Box(size=(3,1.5,3)))]),
      Transform(rotation=(1,0,0,-2.5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='HORNCOLOR')),
          geometry=Extrusion(beginCap=False,creaseAngle=1.57,crossSection=[(1,0),(0.92388,0.382683),(0.707107,0.707106),(0.382684,0.923879),(1.26759e-006,1),(-0.382682,0.92388),(-0.707105,0.707108),(-0.923879,0.382685),(-1,2.53518e-006),(-0.923881,-0.382681),(-0.707109,-0.707105),(-0.382687,-0.923878),(-3.80277e-006,-1),(0.38268,-0.923881),(0.707104,-0.70711),(0.923878,-0.382688),(1,0)],endCap=False,orientation=[(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0),(0,0,1,0)],scale=[(2.2,2.2),(1.8,1.8),(1.4,1.4),(1.2,1.2),(1,1),(0.8,0.8),(0.6,0.6),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.4,0.4),(0.2,0.2),(0.0001,0.0001)],solid=False,spine=[(0,-1.4,0),(0,-1.22137,0),(0,-1.01245,0),(0,-0.819601,0),(0,-0.626754,0),(0,-0.401765,0),(0,-0.204459,0),(0,-0.0164327,0),(0,0.176777,0),(0,0.380511,0),(0,0.578542,0),(0,0.819601,0),(0,0.996378,0),(0,1.8,0),(0,1.2,0)]))])]),
    Transform(DEF='START_TRANS',
      children=[
      Transform(translation=(-3,1.5,-5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='GOMATERIAL',ambientIntensity=1,diffuseColor=(0,1,0))),
          geometry=Box(DEF='START',size=(1.3,1,0.1))),
        Transform(translation=(-0.45,0,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["Switch","in"],
              fontStyle=FontStyle(size=0.4)))])]),
      TouchSensor(DEF='TOUCHSTART',description='touch to start'),
      TimeSensor(DEF='GOTIMER'),
      ColorInterpolator(DEF='GOFLASH',key=[0,0.5,1],keyValue=[(0,1,0),(1,1,1),(0,1,0)])]),
    Transform(DEF='STOP_TRANS',
      children=[
      Transform(translation=(3,1.5,-5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='STOPMATERIAL',ambientIntensity=1,diffuseColor=(1,0,0))),
          geometry=Box(DEF='STOP',size=(1.3,1,0.1))),
        Transform(translation=(-0.65,0,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["Switch","out"],
              fontStyle=FontStyle(size=0.4)))])]),
      TouchSensor(DEF='TOUCHSTOP',description='touch to stop'),
      TimeSensor(DEF='STOPTIMER'),
      ColorInterpolator(DEF='STOPFLASH',key=[0,0.5,1],keyValue=[(1,0,0),(1,1,1),(1,0,0)])]),
    Script(DEF='SOUND_SCRIPT',directOutput=True,url=["switch.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/Sound/switch.js"],
      field=[
      field(accessType='initializeOnly',name='mySwitch',type='SFNode',
        children=[
        Switch(USE='MYSWITCH',whichChoice=-1)]),
      field(accessType='initializeOnly',name='phonoColor',type='SFNode',
        children=[
        Material(USE='PHONOCOLOR')]),
      field(accessType='initializeOnly',name='hornColor',type='SFNode',
        children=[
        Material(USE='HORNCOLOR')]),
      field(accessType='initializeOnly',name='yellow',type='SFColor',value=(0.75,0.75,0.00)),
      field(accessType='initializeOnly',name='white',type='SFColor',value=(0.80,0.80,0.80)),
      field(accessType='inputOnly',name='colorPhonograph',type='SFBool'),
      field(accessType='inputOnly',name='switchIn',type='SFTime'),
      field(accessType='inputOnly',name='switchOut',type='SFTime')]),
    ROUTE(fromField='touchTime',fromNode='TOUCHSTART',toField='switchIn',toNode='SOUND_SCRIPT'),
    ROUTE(fromField='touchTime',fromNode='TOUCHSTOP',toField='switchOut',toNode='SOUND_SCRIPT'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='START_TRANS'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='START_TRANS'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='STOP_TRANS'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='STOP_TRANS'),
    ROUTE(fromField='isActive',fromNode='MYSOUND',toField='colorPhonograph',toNode='SOUND_SCRIPT'),
    ROUTE(fromField='touchTime',fromNode='TOUCHSTART',toField='set_startTime',toNode='GOTIMER'),
    ROUTE(fromField='fraction_changed',fromNode='GOTIMER',toField='set_fraction',toNode='GOFLASH'),
    ROUTE(fromField='value_changed',fromNode='GOFLASH',toField='set_diffuseColor',toNode='GOMATERIAL'),
    ROUTE(fromField='touchTime',fromNode='TOUCHSTOP',toField='set_startTime',toNode='STOPTIMER'),
    ROUTE(fromField='fraction_changed',fromNode='STOPTIMER',toField='set_fraction',toNode='STOPFLASH'),
    ROUTE(fromField='value_changed',fromNode='STOPFLASH',toField='set_diffuseColor',toNode='STOPMATERIAL')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for switchsounds.py")
