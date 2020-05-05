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

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    component(level=1,name='H-Anim'),
    meta(content='HAnimModelsHandsFeet.x3d',name='title'),
    meta(content='Left and right hands and feet, using high-fidelity definitions for H-Anim version 2.2',name='description'),
    meta(content='YOO Kwan Hee and Don Brutzman',name='creator'),
    meta(content='8 February 2015',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='not yet to scale',name='warning'),
    meta(content='TODO will X3D HAnim component add a new level to support LOA-4 functionality?',name='warning'),
    meta(content='HAnimModelsHandsFeet.png',name='Image'),
    meta(content='HAnimModelsHandsFeetWithFour1mGrids.png',name='Image'),
    meta(content='https://www.web3d.org/working-groups/humanoid-animation-h-anim',name='reference'),
    meta(content='https://www.web3d.org/files/specifications/19774/V1.0',name='reference'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/hanim.html',name='reference'),
    meta(content='X3D H-Anim humanoid animation',name='subject'),
    meta(content='scene, DOCTYPE and Schema under development.',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelsHandsFeet.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='HAnimModelsHandsFeet.x3d'),
    Viewpoint(description='Hands and feet 10m'),
    Viewpoint(description='Hands and feet 1.7m',position=(0,0,1.7)),
    Transform(translation=(-1,1,0),displayBBox=false,
      children=[
      Inline(url=["HAnimModelHandLeft.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.x3d","HAnimModelHandLeft.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandLeft.wrl"],displayBBox=false),
      #  Grid overlay authoring hint: first adjust grid scale to convenient large size, then adjust overall scale for your scene model 
      Transform(DEF='GridXY_20x20Fixed_AdjustScale',scale=(.1,.1,.1),displayBBox=false,
        children=[
        Inline(DEF='GridXY_20x20Fixed',url=["GridXY_20x20Fixed.x3d","../../Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.x3d","GridXY_20x20Fixed.wrl","../../Savage/Tools/Authoring/GridXY_20x20Fixed.wrl","https://savage.nps.edu/Savage/Tools/Authoring/GridXY_20x20Fixed.wrl"],displayBBox=false)])]),
    Transform(translation=(1,1,0),displayBBox=false,
      children=[
      Inline(url=["HAnimModelHandRight.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandRight.x3d","HAnimModelHandRight.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelHandRight.wrl"],displayBBox=false),
      Transform(USE='GridXY_20x20Fixed_AdjustScale',displayBBox=false)]),
    Transform(translation=(-1,-1,0),displayBBox=false,
      #  rotation='0 0 1 3.141593' 
      children=[
      Inline(url=["HAnimModelFootLeft.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.x3d","HAnimModelFootLeft.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootLeft.wrl"],displayBBox=false),
      Transform(USE='GridXY_20x20Fixed_AdjustScale',displayBBox=false)]),
    Transform(translation=(1,-1,0),displayBBox=false,
      #  rotation='0 0 1 3.141593' 
      children=[
      Inline(url=["HAnimModelFootRight.x3d","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.x3d","HAnimModelFootRight.wrl","https://www.web3d.org/x3d/content/examples/Basic/HumanoidAnimation/HAnimModelFootRight.wrl"],displayBBox=false),
      Transform(USE='GridXY_20x20Fixed_AdjustScale',displayBBox=false)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HAnimModelsHandsFeet.py")
