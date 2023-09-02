####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python HAnimModelsHandsFeet.py
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

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    component(level=1,name='HAnim'),
    meta(content='HAnimModelsHandsFeet.x3d',name='title'),
    meta(content='Left and right hands and feet, using high-fidelity definitions for HAnim version 2.0',name='description'),
    meta(content='YOO Kwan Hee and Don Brutzman',name='creator'),
    meta(content='8 February 2015',name='created'),
    meta(content='8 March 2021',name='modified'),
    meta(content='not yet to scale',name='warning'),
    meta(content='TODO will X3D HAnim component add a new level to support LOA-4 functionality?',name='warning'),
    meta(content='how to have HAnimHumanoid root with Inline IMPORT/EXPORT of limbs?',name='TODO'),
    meta(content='HAnimModelsHandsFeet.png',name='Image'),
    meta(content='HAnimModelsHandsFeetWithFour1mGrids.png',name='Image'),
    meta(content='https://www.web3d.org/working-groups/humanoid-animation-HAnim',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19774/V2.0',name='reference'),
    meta(content='https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-WD2/Part01/components/hanim.html',name='reference'),
    meta(content='X3D HAnim humanoid animation',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelsHandsFeet.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='HAnimModelsHandsFeet.x3d'),
    Viewpoint(description='Hands and feet 10m'),
    Viewpoint(description='Hands and feet 1.7m',position=(0,0,1.7)),
    Transform(translation=(-1,1,0),
      children=[
      Inline(url=["HAnimModelHandLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.x3d","HAnimModelHandLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandLeft.wrl"]),
      #  Grid overlay authoring hint: first adjust grid scale to convenient large size, then adjust overall scale for your scene model 
      Transform(DEF='GridXY_20x20Fixed_AdjustScale',scale=(.1,.1,.1),
        children=[
        Inline(DEF='GridXY_20x20Fixed',url=["GridXY_20x20Fixed.x3d","../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","GridXY_20x20Fixed.wrl","../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"])])]),
    Transform(translation=(1,1,0),
      children=[
      Inline(url=["HAnimModelHandRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.x3d","HAnimModelHandRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelHandRight.wrl"]),
      Transform(USE='GridXY_20x20Fixed_AdjustScale')]),
    Transform(translation=(-1,-1,0),
      #  rotation='0 0 1 3.141593' 
      children=[
      Inline(url=["HAnimModelFootLeft.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.x3d","HAnimModelFootLeft.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootLeft.wrl"]),
      Transform(USE='GridXY_20x20Fixed_AdjustScale')]),
    Transform(translation=(1,-1,0),
      #  rotation='0 0 1 3.141593' 
      children=[
      Inline(url=["HAnimModelFootRight.x3d","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.x3d","HAnimModelFootRight.wrl","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Characters/HAnimModelFootRight.wrl"]),
      Transform(USE='GridXY_20x20Fixed_AdjustScale')])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for HAnimModelsHandsFeet.py:')
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

print("python HAnimModelsHandsFeet.py load and self-test diagnostics complete.")
