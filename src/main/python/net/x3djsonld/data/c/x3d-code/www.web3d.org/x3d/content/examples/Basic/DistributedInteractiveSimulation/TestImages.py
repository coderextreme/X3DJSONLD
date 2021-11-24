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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    component(level=1,name='DIS'),
    meta(content='TestImages.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='20 January 2009',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Verify renderability of png image textures using a Box.',name='description'),
    meta(content='TestCube.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/TestImages.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TestImages.x3d'),
    Background(skyColor=[(0.8,0.8,0.9)]),
    Viewpoint(description='Front view',orientation=(0,1,0,1.57),position=(8,0,0)),
    Switch(DEF='BoxSwitcher',whichChoice=-1,
      children=[
      Shape(
        geometry=Box(DEF='UnitBox'),
        appearance=Appearance(
          texture=ImageTexture(url=["images/front.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/front.png"]))),
      Shape(
        geometry=Box(USE='UnitBox'),
        appearance=Appearance(
          texture=ImageTexture(url=["images/back.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/back.png"]))),
      Shape(
        geometry=Box(USE='UnitBox'),
        appearance=Appearance(
          texture=ImageTexture(url=["images/left.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/left.png"]))),
      Shape(
        geometry=Box(USE='UnitBox'),
        appearance=Appearance(
          texture=ImageTexture(url=["images/right.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/right.png"]))),
      Shape(
        geometry=Box(USE='UnitBox'),
        appearance=Appearance(
          texture=ImageTexture(url=["images/top.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/top.png"]))),
      Shape(
        geometry=Box(USE='UnitBox'),
        appearance=Appearance(
          texture=ImageTexture(url=["images/bottom.png","https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/bottom.png"])))]),
    TimeSensor(DEF='Clock',cycleInterval=12,loop=True),
    IntegerSequencer(DEF='Sequencer',key=[0,0.1667,0.3333,0.5,0.6667,0.8333,1],keyValue=[0,1,2,3,4,5,0]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='Sequencer'),
    ROUTE(fromField='value_changed',fromNode='Sequencer',toField='whichChoice',toNode='BoxSwitcher'),
    Viewpoint(description='Back view',orientation=(0,1,0,-1.57),position=(-8,0,0)),
    Viewpoint(description='Left view',position=(0,0,8)),
    Viewpoint(description='Right view',orientation=(0,1,0,3.1416),position=(0,0,-8)),
    Viewpoint(description='Top view',orientation=(1,0,0,-1.57),position=(0,8,0)),
    Viewpoint(description='Bottom view',orientation=(1,0,0,1.57),position=(0,-8,0))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TestImages.py")
