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
    #  Note that the following component statement is needed to add PositionInterpolator2D to Immersive profile nodes 
    component(level=3,name='Interpolation'),
    meta(content='PositionInterpolator2dExample.x3d',name='title'),
    meta(content='Interpolation example using PositionInterpolator2D, user can touch (select) the geometry to activate an animation loop that rescales the image texture superimposed on the geometry.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='16 October 2001',name='created'),
    meta(content='14 June 2020',name='modified'),
    meta(content='PositionInterpolator2D',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter07EventAnimationInterpolation/PositionInterpolator2dExample.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/PositionInterpolator2dExample.x3d',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='PositionInterpolator2dExample.x3d'),
    Viewpoint(description='Click to activate animation',position=(0,0,3)),
    TimeSensor(DEF='Clock',cycleInterval=10,enabled=False,loop=True),
    #  author fun: experiment by comparing results with keyValue='1 1 1 3 1 3 0.8 0.8 1 1 1 1' 
    PositionInterpolator2D(DEF='InterpolateTTscale',key=[0,0.35,0.45,0.8,0.9,1],keyValue=[(1,1),(3,3),(3,3),(0.8,0.8),(1,1),(1,1)]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='InterpolateTTscale'),
    Transform(DEF='ImageAspectRatio',scale=(1.5,1,1),
      children=[
      TouchSensor(DEF='Toucher',description='click and hold to animate TextureTransform'),
      ROUTE(fromField='isActive',fromNode='Toucher',toField='enabled',toNode='Clock'),
      Shape(
        #  solid='true' means single-sided rendering 
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0,-1],
          #  note how DEF names can be self-documenting 
          coord=Coordinate(DEF='TwoByTwoSquare',point=[(-1,-1,0),(1,-1,0),(1,1,0),(-1,1,0)])),
        appearance=Appearance(
          texture=ImageTexture(DEF='ContactImage',url=["JavaBoardSmileForTheCamera.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter07EventAnimationInterpolation/JavaBoardSmileForTheCamera.jpg"]),
          textureTransform=TextureTransform(DEF='TextureTransformNode'))),
      #  author fun: replace destination toField from 'set_scale' with new value of 'set_translation' or 'set_center' 
      ROUTE(fromField='value_changed',fromNode='InterpolateTTscale',toField='set_scale',toNode='TextureTransformNode')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PositionInterpolator2dExample.py")
