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
    meta(content='Figure24_4FourKeyKeyboard.x3d',name='title'),
    meta(content='Figure 24.4, The VRML 2.0 Sourcebook, Copyright [1997] By Andrea L. Ames, David R. Nadeau, and John L. Moreland',name='creator'),
    meta(content='http://www.wiley.com/legacy/compbooks/vrml2sbk/ch24/24fig04.htm',name='reference'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='2 October 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Four keys in a keyboard, showing how pitch can vary a single sound source.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter24Sound/Figure24_4FourKeyKeyboard.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Figure24_4FourKeyKeyboard.x3d'),
    Viewpoint(description='Middle C, C#, D, D#',orientation=(1,0,0,-0.758),position=(0,2,2)),
    Group(
      children=[
      Transform(
        children=[
        Shape(DEF='WhiteKey',
          geometry=Box(size=(0.23,0.1,1.5)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,0.9,0.9)))),
        TouchSensor(DEF='C4',description='C4 key'),
        Sound(minBack=5,minFront=5,
          source=AudioClip(DEF='PitchC4',description='Pitch C4',url=["tone1.wav","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter24Sound/tone1.wav"]))]),
      Transform(translation=(0.125,0.1,-0.375),
        children=[
        Shape(DEF='BlackKey',
          geometry=Box(size=(0.2,0.1,0.75)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.4,0.4)))),
        TouchSensor(DEF='Cs4',description='Csharp4 key'),
        Sound(minBack=5,minFront=5,
          source=AudioClip(DEF='PitchCs4',description='Pitch Csharp4',pitch=1.059,url=["tone1.wav","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter24Sound/tone1.wav"]))]),
      Transform(translation=(0.25,0,0),
        children=[
        Shape(USE='WhiteKey'),
        TouchSensor(DEF='D4',description='D4 key'),
        Sound(minBack=5,minFront=5,
          source=AudioClip(DEF='PitchD4',description='Pitch D4',pitch=1.122,url=["tone1.wav","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter24Sound/tone1.wav"]))]),
      Transform(translation=(0.375,0.1,-0.375),
        children=[
        Shape(USE='BlackKey'),
        TouchSensor(DEF='Ds4',description='Dsharp4 key'),
        Sound(minBack=5,minFront=5,
          source=AudioClip(DEF='PitchDs4',description='Pitch Dsharp4',pitch=1.189,url=["tone1.wav","https://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/Chapter24Sound/tone1.wav"]))])]),
    ROUTE(fromField='touchTime',fromNode='C4',toField='set_startTime',toNode='PitchC4'),
    ROUTE(fromField='touchTime',fromNode='Cs4',toField='set_startTime',toNode='PitchCs4'),
    ROUTE(fromField='touchTime',fromNode='D4',toField='set_startTime',toNode='PitchD4'),
    ROUTE(fromField='touchTime',fromNode='Ds4',toField='set_startTime',toNode='PitchDs4')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Figure24_4FourKeyKeyboard.py")
