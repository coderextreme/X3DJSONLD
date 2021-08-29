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
    meta(content='startgtstoploopfalse_past.x3d',name='title'),
    meta(content='startgtstoploopfalse_past-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test of loop equal to false, and the startTime "4" greater than a stopTime of "2". The result should be that stopTime is ignored. However, because loop is false, the sound should not play when the world is loaded.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/startgtstoploopfalse_past.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='startgtstoploopfalse_past.x3d'),
    Viewpoint(description='entry viewpoint',position=(0,0,5)),
    Sound(
      source=AudioClip(DEF='MYSOUND',description='chimes',startTime=4,stopTime=2,url=["chimes.wav","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/chimes.wav"])),
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
    Script(DEF='SOUND_SCRIPT',directOutput=True,url=["startgtstoploopfalse_past.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/Sounds/AudioClip/startgtstoploopfalse_past.js"],
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
    ROUTE(fromField='isActive',fromNode='MYSOUND',toField='colorPhonograph',toNode='SOUND_SCRIPT')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for startgtstoploopfalse_past.py")
