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
    meta(content='duration.x3d',name='title'),
    meta(content='duration-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test duration_changed field. A world file with an AudioClip node is loaded, and the duration_changed field for for that AudioClip is displayed as Text at the top of the world. Clicking on the "phonograph" geometry with the pointing device loads a different URL, with a different sound file. The result should be, the Text should change from "duration_changed = 5" to "duration_changed = 10" when the geometry is clicked.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/duration.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='duration.x3d'),
    Viewpoint(description='entry viewpoint',position=(0,0,5)),
    ProximitySensor(DEF='PROX_SENSOR',size=(1000,1000,1000)),
    Sound(
      source=AudioClip(DEF='MYSOUND1',description='loaded clip')),
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
    Transform(DEF='PITCH_FAST_TRANS',
      children=[
      Transform(translation=(-3,1.5,-5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='FASTMATERIAL',ambientIntensity=1,diffuseColor=(0,1,0))),
          geometry=Box(DEF='FAST',size=(1,1,0.1))),
        Transform(translation=(-0.4,-0.1,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["URL1"],
              fontStyle=FontStyle(size=0.4)))])]),
      TouchSensor(DEF='TOUCHFAST',description='touch for fast'),
      TimeSensor(DEF='FASTTIMER'),
      ColorInterpolator(DEF='FASTFLASH',key=[0,0.5,1],keyValue=[(0,1,0),(1,1,1),(0,1,0)])]),
    Transform(DEF='TEXT_TRANS',
      children=[
      Transform(translation=(-2,1.5,-5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='TEXTMATERIAL',diffuseColor=(1,1,1))),
          geometry=Text(DEF='MYTEXT',
            fontStyle=FontStyle(size=0.4,style_='BOLD')))])]),
    Transform(DEF='SLOW_TRANS',
      children=[
      Transform(translation=(3,1.5,-5),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='SLOWMATERIAL',ambientIntensity=1,diffuseColor=(1,0,0))),
          geometry=Box(DEF='SLOW',size=(1,1,0.1))),
        Transform(translation=(-0.65,-0.1,0.2),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=1,diffuseColor=(0,0,0))),
            geometry=Text(string=["URL2"],
              fontStyle=FontStyle(size=0.4)))])]),
      TouchSensor(DEF='TOUCHSLOW',description='touch for slow'),
      TimeSensor(DEF='SLOWTIMER'),
      ColorInterpolator(DEF='SLOWFLASH',key=[0,0.5,1],keyValue=[(1,0,0),(1,1,1),(1,0,0)])]),
    Script(DEF='SOUND_SCRIPT',directOutput=True,url=["duration.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/duration.js"],
      field=[
      field(accessType='initializeOnly',name='mySound1',type='SFNode',
        children=[
        AudioClip(USE='MYSOUND1')]),
      field(accessType='initializeOnly',name='myText',type='SFNode',
        children=[
        Text(USE='MYTEXT')]),
      field(accessType='initializeOnly',name='phonoColor',type='SFNode',
        children=[
        Material(USE='PHONOCOLOR')]),
      field(accessType='initializeOnly',name='hornColor',type='SFNode',
        children=[
        Material(USE='HORNCOLOR')]),
      field(accessType='initializeOnly',name='yellow',type='SFColor',value=(0.75,0.75,0.00)),
      field(accessType='initializeOnly',name='white',type='SFColor',value=(0.80,0.80,0.80)),
      field(accessType='inputOnly',name='colorPhonograph',type='SFBool'),
      field(accessType='inputOnly',name='durationText',type='SFTime'),
      field(accessType='inputOnly',name='newUrl',type='SFTime'),
      field(accessType='inputOnly',name='oldUrl',type='SFTime')]),
    ROUTE(fromField='touchTime',fromNode='TOUCHFAST',toField='oldUrl',toNode='SOUND_SCRIPT'),
    ROUTE(fromField='touchTime',fromNode='TOUCHSLOW',toField='newUrl',toNode='SOUND_SCRIPT'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='PITCH_FAST_TRANS'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='PITCH_FAST_TRANS'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='SLOW_TRANS'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='SLOW_TRANS'),
    ROUTE(fromField='position_changed',fromNode='PROX_SENSOR',toField='set_translation',toNode='TEXT_TRANS'),
    ROUTE(fromField='orientation_changed',fromNode='PROX_SENSOR',toField='set_rotation',toNode='TEXT_TRANS'),
    ROUTE(fromField='isActive',fromNode='MYSOUND1',toField='colorPhonograph',toNode='SOUND_SCRIPT'),
    ROUTE(fromField='touchTime',fromNode='TOUCHFAST',toField='set_startTime',toNode='FASTTIMER'),
    ROUTE(fromField='fraction_changed',fromNode='FASTTIMER',toField='set_fraction',toNode='FASTFLASH'),
    ROUTE(fromField='value_changed',fromNode='FASTFLASH',toField='set_diffuseColor',toNode='FASTMATERIAL'),
    ROUTE(fromField='touchTime',fromNode='TOUCHSLOW',toField='set_startTime',toNode='SLOWTIMER'),
    ROUTE(fromField='fraction_changed',fromNode='SLOWTIMER',toField='set_fraction',toNode='SLOWFLASH'),
    ROUTE(fromField='value_changed',fromNode='SLOWFLASH',toField='set_diffuseColor',toNode='SLOWMATERIAL'),
    ROUTE(fromField='duration_changed',fromNode='MYSOUND1',toField='durationText',toNode='SOUND_SCRIPT')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for duration.py")
