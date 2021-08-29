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
    component(level=3,name='EnvironmentalEffects'),
    meta(content='TextureBackgroundCube.x3d',name='title'),
    meta(content='TextureBackground containing ImageTexture nodes, with labeled side images and wide field-of-view (FOV) Viewpoints, suitable for scene-orientation testing. Includes transparency interpolator test and also LoadSensor Script console to log events of interest.',name='description'),
    meta(content='1 May 2017',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='BackgroundCube.x3d.',name='reference'),
    meta(content='../GeometricShapes/CubeWithLabeledSides.x3d',name='reference'),
    meta(content='../Animation/CubeWithLabeledSidesViewpointSequencer.x3d',name='reference'),
    meta(content='../Animation/CubeWithLabeledSidesViewpointSequencer.png',name='Image'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Visualization/BackgroundCube.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/license.html',name='license'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TextureBackgroundCube.x3d'),
    TextureBackground(DEF='TransparentBackground',
      backTexture=ImageTexture(DEF='backTexture',url=["../GeometricShapes/images/back.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/back.png"]),
      bottomTexture=ImageTexture(DEF='bottomTexture',url=["../GeometricShapes/images/bottom.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/bottom.png"]),
      frontTexture=ImageTexture(DEF='frontTexture',url=["../GeometricShapes/images/front.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/front.png"]),
      leftTexture=ImageTexture(DEF='leftTexture',url=["../GeometricShapes/images/left.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/left.png"]),
      rightTexture=ImageTexture(DEF='rightTexture',url=["../GeometricShapes/images/right.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/right.png"]),
      topTexture=ImageTexture(DEF='topTexture',url=["../GeometricShapes/images/top.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/top.png"])),
    ScalarInterpolator(DEF='TransparencyAnimator',key=[0,0.5,1],keyValue=[0,1,0]),
    ROUTE(fromField='value_changed',fromNode='TransparencyAnimator',toField='transparency',toNode='TransparentBackground'),
    TimeSensor(DEF='Clock',cycleInterval=6,loop=True),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='TransparencyAnimator'),
    LoadSensor(DEF='ImageLoadSensor',
      children=[
      ImageTexture(USE='backTexture')],
      children=[
      ImageTexture(USE='bottomTexture')],
      children=[
      ImageTexture(USE='frontTexture')],
      children=[
      ImageTexture(USE='leftTexture')],
      children=[
      ImageTexture(USE='rightTexture')],
      children=[
      ImageTexture(USE='topTexture')]),
    Script(DEF='LoadSensorReportScript',
      field=[
      field(accessType='inputOnly',name='isActiveUpdate',type='SFBool'),
      field(accessType='inputOnly',name='isLoadedUpdate',type='SFBool'),
      field(accessType='inputOnly',name='progressUpdate',type='SFFloat'),
      field(accessType='inputOnly',name='loadTimeUpdate',type='SFTime'),
      field(accessType='inputOnly',name='transparencyUpdate',type='SFFloat')]),
    ROUTE(fromField='isActive',fromNode='ImageLoadSensor',toField='isActiveUpdate',toNode='LoadSensorReportScript'),
    ROUTE(fromField='isLoaded',fromNode='ImageLoadSensor',toField='isLoadedUpdate',toNode='LoadSensorReportScript'),
    ROUTE(fromField='loadTime',fromNode='ImageLoadSensor',toField='loadTimeUpdate',toNode='LoadSensorReportScript'),
    ROUTE(fromField='progress',fromNode='ImageLoadSensor',toField='progressUpdate',toNode='LoadSensorReportScript'),
    ROUTE(fromField='value_changed',fromNode='TransparencyAnimator',toField='transparencyUpdate',toNode='LoadSensorReportScript'),
    Viewpoint(description='Front image of TextureBackground seen from origin',fieldOfView=1.570796,position=(0,0,0)),
    Viewpoint(description='Left image of TextureBackground seen from origin',fieldOfView=1.570796,orientation=(0,1,0,-1.570796),position=(0,0,0)),
    Viewpoint(description='Top image of TextureBackground seen from origin',fieldOfView=1.570796,orientation=(1,0,0,1.570796),position=(0,0,0)),
    Viewpoint(description='Back image of TextureBackground seen from origin',fieldOfView=1.570796,orientation=(0,1,0,3.141593),position=(0,0,0)),
    Viewpoint(description='Right image of TextureBackground seen from origin',fieldOfView=1.570796,orientation=(0,1,0,1.570796),position=(0,0,0)),
    Viewpoint(description='Bottom image of TextureBackground seen from origin',fieldOfView=1.570796,orientation=(1,0,0,-1.570796),position=(0,0,0))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TextureBackgroundCube.py")
