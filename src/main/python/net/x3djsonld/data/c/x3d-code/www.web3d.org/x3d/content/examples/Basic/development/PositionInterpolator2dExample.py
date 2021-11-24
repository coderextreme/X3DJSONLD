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
    component(level=3,name='Interpolation'),
    meta(content='PositionInterpolator2dExample.x3d',name='title'),
    meta(content='Example to interpolate a Vector2Float value - click geometry to activate animation loop.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='16 October 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8',name='reference'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#CoordinateInterpolator',name='reference'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Extrusion',name='reference'),
    meta(content='Vector2FloatArray Interpolator',name='subject'),
    meta(content='PositionInterpolator2D',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/PositionInterpolator2dExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='PositionInterpolator2dExample.x3d'),
    Viewpoint(description='Click to activate animation',position=(0,0,3)),
    TimeSensor(DEF='Clock',cycleInterval=10,enabled=False,loop=True),
    PositionInterpolator2D(DEF='InterpolateTTscale',key=[0,0.35,0.45,0.8,0.9,1],keyValue=[(1.0,1.0),(3,3),(3,3),(0.8,0.8),(1.0,1.0),(1.0,1.0)]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='InterpolateTTscale'),
    Transform(DEF='ImageAspectRatio',scale=(1.5,1,1),
      children=[
      TouchSensor(DEF='Toucher',description='click and hold to animate TextureTransform'),
      ROUTE(fromField='isActive',fromNode='Toucher',toField='enabled',toNode='Clock'),
      Shape(
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0,-1],
          coord=Coordinate(DEF='TwoByTwoSquare',point=[(-1,-1,0),(1,-1,0),(1,1,0),(-1,1,0)])),
        appearance=Appearance(
          texture=ImageTexture(DEF='ContactImage',url=["JavaBoardSmileForTheCamera.jpg","https://savage.nps.edu/Savage/Tools/Animation/JavaBoardSmileForTheCamera.jpg","http://faculty.nps.edu/brutzman/images/JavaBoardSmileForTheCamera.jpg"]),
          textureTransform=TextureTransform(DEF='TTN'))),
      ROUTE(fromField='value_changed',fromNode='InterpolateTTscale',toField='set_scale',toNode='TTN')])])
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
