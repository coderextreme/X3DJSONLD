####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python WinterAndSpringTitleBox.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
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

newModel=X3D(profile='Interchange',version='4.0',
  head=head(
    children=[
    meta(content='WinterAndSpringTitleBox.x3d',name='title'),
    meta(content='Credits for scene.',name='description'),
    meta(content='Carol McDonald',name='creator'),
    meta(content='Joe Williams and Don Brutzman',name='translator'),
    meta(content='26 June 2023',name='created'),
    meta(content='16 January 2024',name='modified'),
    meta(content='https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/Flower.Set.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringTitleBox.x3d',name='identifier'),
    meta(content='X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='WinterAndSpringTitleBox.x3d'),
    Viewpoint(DEF='WinterAndSpringTitleView',description='Look at main title',orientation=(-0.15,0,0,0.2),position=(10,11,5)),
    Transform(DEF='WinterAndSpringTitle',translation=(10,10,0),
      children=[
      Shape(
        geometry=Box(size=(4,3,0.25)),
        appearance=Appearance(
          texture=ImageTexture(url=["images/WinterAndSpring.png","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/images/WinterAndSpring.png"]),
          material=Material(),))])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for WinterAndSpringTitleBox.py:')
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

print("python WinterAndSpringTitleBox.py load and self-test diagnostics complete.")
