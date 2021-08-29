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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='BoxSwitch.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='30 December 2015',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Demonstrate simple Switch animation by sequencing through a set of Box nodes that are each covered by a different ImageTexture.',name='description'),
    meta(content='BoxSwitch.mp4',name='MovingImage'),
    meta(content='../GeometricShapes/CubeWithLabeledSides.x3d',name='reference'),
    meta(content='../GeometricShapes/images/CubeSideImages.pdf',name='drawing'),
    meta(content='../GeometricShapes/images/CubeSideImages.vsd',name='drawing'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Animation/BoxSwitch.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BoxSwitch.x3d'),
    Background(skyColor=[(0.8,0.8,0.9)]),
    NavigationInfo(),
    Switch(DEF='BoxSwitcher',whichChoice=-1,
      children=[
      Shape(
        geometry=Box(DEF='UnitBox'),
        appearance=Appearance(
          texture=ImageTexture(url=["../GeometricShapes/images/RedImage.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/RedImage.png"]))),
      Shape(
        geometry=Box(USE='UnitBox'),
        appearance=Appearance(
          texture=ImageTexture(url=["../GeometricShapes/images/GreenImage.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/GreenImage.png"]))),
      Shape(
        geometry=Box(USE='UnitBox'),
        appearance=Appearance(
          texture=ImageTexture(url=["../GeometricShapes/images/TurquoiseImage.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/TurquoiseImage.png"]))),
      Shape(
        geometry=Box(USE='UnitBox'),
        appearance=Appearance(
          texture=ImageTexture(url=["../GeometricShapes/images/YellowImage.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/YellowImage.png"]))),
      Shape(
        geometry=Box(USE='UnitBox'),
        appearance=Appearance(
          texture=ImageTexture(url=["../GeometricShapes/images/WhiteImage.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/WhiteImage.png"]))),
      Shape(
        geometry=Box(USE='UnitBox'),
        appearance=Appearance(
          texture=ImageTexture(url=["../GeometricShapes/images/GreyImage.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/GreyImage.png"])))]),
    #  Animated Box 
    TimeSensor(DEF='Clock',cycleInterval=12,loop=True),
    IntegerSequencer(DEF='Sequencer',key=[0,0.1667,0.3333,0.5,0.6667,0.8333,1],keyValue=[0,1,2,3,4,5,0]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='Sequencer'),
    ROUTE(fromField='value_changed',fromNode='Sequencer',toField='whichChoice',toNode='BoxSwitcher'),
    Viewpoint(DEF='OrbitingView',description='Orbiting view',orientation=(0,1,0,-1.57),position=(-8,0,0)),
    #  Animated Viewpoint, orbiting about the origin 
    PositionInterpolator(DEF='CircularPathPositionInterpolator',key=[0,0.02778,0.05556,0.08333,0.11111,0.13889,0.16667,0.19444,0.22222,0.25,0.27778,0.30556,0.33333,0.36111,0.38889,0.41667,0.44444,0.47222,0.5,0.52778,0.55556,0.58333,0.61111,0.63889,0.66667,0.69444,0.72222,0.75,0.77778,0.80556,0.83333,0.86111,0.88889,0.91667,0.94444,0.97222,1],keyValue=[(0,0,8),(1.389,0,7.878),(2.736,0,7.518),(4,0,6.928),(5.142,0,6.128),(6.128,0,5.142),(6.928,0,4),(7.518,0,2.736),(7.878,0,1.389),(8,0,0),(7.878,0,-1.389),(7.518,0,-2.736),(6.928,0,-4),(6.128,0,-5.142),(5.142,0,-6.128),(4,0,-6.928),(2.736,0,-7.518),(1.389,0,-7.878),(0,0,-8),(-1.389,0,-7.878),(-2.736,0,-7.518),(-4,0,-6.928),(-5.142,0,-6.128),(-6.128,0,-5.142),(-6.928,0,-4),(-7.518,0,-2.736),(-7.878,0,-1.389),(-8,0,-0),(-7.878,0,1.389),(-7.518,0,2.736),(-6.928,0,4),(-6.128,0,5.142),(-5.142,0,6.128),(-4,0,6.928),(-2.736,0,7.518),(-1.389,0,7.878),(0,0,8)]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='CircularPathPositionInterpolator'),
    ROUTE(fromField='value_changed',fromNode='CircularPathPositionInterpolator',toField='position',toNode='OrbitingView'),
    OrientationInterpolator(DEF='CenterFacingOrientationInterpolator',key=[0,0.3333,0.6667,1],keyValue=[(0,1,0,0),(0,1,0,2.094395),(0,1,0,4.18879),(0,1,0,0)]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='CenterFacingOrientationInterpolator'),
    ROUTE(fromField='value_changed',fromNode='CenterFacingOrientationInterpolator',toField='orientation',toNode='OrbitingView'),
    #  Additional Viewpoints 
    Viewpoint(description='Front view',orientation=(0,1,0,1.57),position=(8,0,0)),
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

print ("python x3d.py load successful for BoxSwitch.py")
