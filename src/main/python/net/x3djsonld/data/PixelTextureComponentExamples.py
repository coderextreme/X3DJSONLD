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
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='PixelTextureComponentExamples.x3d',name='title'),
    meta(content='This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18.',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='25 August 2008',name='created'),
    meta(content='7 January 2014',name='modified'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='X3D for Web Authors, Table 5.18',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright (c) 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.1,0.1,0.4)]),
    Viewpoint(description='Table 5.18 SFImage component examples',position=(0,0,14)),
    Transform(translation=(-6,0,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=PixelTexture(DEF='ZeroComponents')),
        geometry=Box(),),
      Transform(translation=(0,-2,0),
        children=[
        Shape(
          geometry=Text(string=["0"],
            fontStyle=FontStyle(DEF='CenterJustify',justify=["MIDDLE","MIDDLE"])),
          appearance=Appearance(DEF='TextMaterial',
            material=Material(diffuseColor=(1,1,1))))])]),
    Transform(translation=(-3,0,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=PixelTexture(DEF='OneComponent',image=[1,2,1,0xFF,0x00])),
        geometry=Box(),),
      Transform(translation=(0,-2,0),
        children=[
        Shape(
          geometry=Text(string=["1"],
            fontStyle=FontStyle(USE='CenterJustify')),
          appearance=Appearance(USE='TextMaterial'))])]),
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          texture=PixelTexture(DEF='TwoComponents',image=[2,1,2,0xCCFF,0x2277])),
        geometry=Box(),),
      Transform(translation=(0,-2,0),
        children=[
        Shape(
          geometry=Text(string=["2"],
            fontStyle=FontStyle(USE='CenterJustify')),
          appearance=Appearance(USE='TextMaterial'))])]),
    Transform(translation=(3,0,0),
      children=[
      Shape(
        appearance=Appearance(
          #  note 0x000000 = 0 
          texture=PixelTexture(DEF='ThreeComponents',image=[2,4,3,0xFF0000,0xFF00,0x000000,0,0,0,0xFFFFFF,0xFFFF00])),
        geometry=Box(),),
      Transform(translation=(0,-2,0),
        children=[
        Shape(
          geometry=Text(string=["3"],
            fontStyle=FontStyle(USE='CenterJustify')),
          appearance=Appearance(USE='TextMaterial'))])]),
    Transform(translation=(6,0,0),
      children=[
      Shape(
        appearance=Appearance(
          #  Erroneous value in book: 1 0 0 255, 0 1 0 255, 0 0 1 255, 1 0 0 127, 0 1 0 127, 0 0 1 127 
          texture=PixelTexture(DEF='FourComponents',image=[3,2,4,0xFF0000FF,0x00FF00FF,0x0000FFFF,0xFF00007F,0x00FF007F,0x0000FF7F])),
        geometry=Box(),),
      Transform(translation=(0,-2,0),
        children=[
        Shape(
          geometry=Text(string=["4"],
            fontStyle=FontStyle(USE='CenterJustify')),
          appearance=Appearance(USE='TextMaterial'))])]),
    #  Background from PixelTextureBW.x3d 
    Transform(translation=(0,6,-2),
      children=[
      Shape(
        appearance=Appearance(
          texture=PixelTexture(image=[8,8,1,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0x00,0xcc,0x00,0xcc,0x00,0xcc,0x00,0xcc])),
        geometry=Box(size=(16,16,.1)))])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for PixelTextureComponentExamples.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
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

print("python PixelTextureComponentExamples.py load and self-test diagnostics complete.")
