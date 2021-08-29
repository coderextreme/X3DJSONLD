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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='ProfileExampleInterchange.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='6 January 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='List of nodes available in a strictly compliant Interchange profile scene. Only Background renders in this example, other nodes have null values.',name='description'),
    meta(content='https://www.web3d.org/spec_editors/abstract/Part01/interchange.html',name='reference'),
    meta(content='ProfileExampleInterchange.png',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/ProfileExampleInterchange.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Shape(
        appearance=Appearance(
          texture=ImageTexture(url=["earth-topo.png","earth-topo.gif","https://www.web3d.org/x3d/content/examples/Basic/development/earth-topo.png","https://www.web3d.org/x3d/content/examples/Basic/development/earth-topo.gif"]),
          material=Material(),
          textureTransform=TextureTransform(),),
        geometry=IndexedFaceSet(creaseAngle=3.14159,
          color=Color(color=[(1,1,1)]),
          coord=Coordinate(point=[(0,0,0)]),
          texCoord=MultiTextureCoordinate(),)),
      Shape(
        geometry=IndexedLineSet(
          color=ColorRGBA(color=[(1,1,1,1)]))),
      Shape(
        geometry=Box(),
        appearance=Appearance(DEF='SilenceWarnings')),
      Shape(
        geometry=Cone(),
        appearance=Appearance(USE='SilenceWarnings')),
      Shape(
        geometry=Cylinder(),
        appearance=Appearance(USE='SilenceWarnings')),
      Shape(
        geometry=IndexedTriangleFanSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,
          texCoord=TextureCoordinate(point=[(0,0)])),
        appearance=Appearance(USE='SilenceWarnings')),
      Shape(
        geometry=IndexedTriangleSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,
          texCoord=TextureCoordinateGenerator(),),
        appearance=Appearance(USE='SilenceWarnings')),
      Shape(
        geometry=IndexedTriangleStripSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True,
          normal=Normal(vector=[(0,1,0)])),
        appearance=Appearance(USE='SilenceWarnings')),
      Shape(
        geometry=LineSet(),
        appearance=Appearance(
          texture=MultiTexture(),
          textureTransform=MultiTextureTransform(),)),
      Shape(
        appearance=Appearance(
          texture=PixelTexture(),),
        geometry=PointSet(),),
      Shape(
        geometry=Sphere(),
        appearance=Appearance(USE='SilenceWarnings')),
      Shape(
        geometry=TriangleFanSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True),
        appearance=Appearance(USE='SilenceWarnings')),
      Shape(
        geometry=TriangleSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True),
        appearance=Appearance(USE='SilenceWarnings')),
      Shape(
        geometry=TriangleStripSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True),
        appearance=Appearance(USE='SilenceWarnings'))]),
    Background(groundColor=[(0,0,0)],skyColor=[(0.0,0.2,0.7)]),
    CoordinateInterpolator(DEF='CI'),
    DirectionalLight(),
    NavigationInfo(),
    NormalInterpolator(DEF='NI',key=[0,1],keyValue=[(0,1,0),(0,1,0)]),
    OrientationInterpolator(DEF='OI',key=[0,1],keyValue=[(0,1,0,0),(0,1,0,0)]),
    PositionInterpolator(DEF='PI',key=[0,1],keyValue=[(0,0,0),(0,0,0)]),
    ScalarInterpolator(DEF='SI',key=[0,1],keyValue=[0,0]),
    TimeSensor(DEF='TS',enabled=False),
    ROUTE(fromField='fraction_changed',fromNode='TS',toField='set_fraction',toNode='NI'),
    ROUTE(fromField='fraction_changed',fromNode='TS',toField='set_fraction',toNode='OI'),
    ROUTE(fromField='fraction_changed',fromNode='TS',toField='set_fraction',toNode='PI'),
    ROUTE(fromField='fraction_changed',fromNode='TS',toField='set_fraction',toNode='SI'),
    Transform(),
    Viewpoint(description='InterchangeProfileExample'),
    WorldInfo(),
    ROUTE(fromField='fraction_changed',fromNode='TS',toField='set_fraction',toNode='PI')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ProfileExampleInterchange.py")
