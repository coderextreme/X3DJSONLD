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
    #  NURBS component or Full profile needed to use CoordinateDouble node 
    #  Geometry2D component or Full profile needed to use TriangleSet2D node 
    component(level=1,name='NURBS'),
    component(level=1,name='Geometry2D'),
    meta(content='RenderingComponentExamples.x3d',name='title'),
    meta(content='Examples showing use of new X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet), implemented as prototypes for backwards compatibility with VRML 97.',name='description'),
    meta(content='Don Brutzman, Ken Curtin, Duane Davis, Christos Kalogrias',name='creator'),
    meta(content='17 November 2003',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Extract, move TriangleStripSet example to X3dSpecifications directory',name='TODO'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rendering.html',name='reference'),
    meta(content='RenderingComponentPrototypes.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/TriangleStripSetFigure.x3d',name='reference'),
    meta(content='X3dToVrml97.xslt translation stylesheet automatically invokes these prototypes upon encountering any new Rendering nodes.',name='info'),
    meta(content='https://www.web3d.org/x3d/stylesheets/X3dToVrml97.xslt',name='reference'),
    meta(content='X3D Rendering component nodes (IndexedTriangleFanSet IndexedTriangleSet IndexedTriangleStripSet LineSet TriangleFanSet TriangleSet TriangleStripSet)',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentExamples.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='RenderingComponentExamples.x3d'),
    Viewpoint(description='set viewpoint 35 meters along positive z axis',position=(0,-5,35)),
    Background(groundColor=[(1,1,1)],skyColor=[(1,1,1)]),
    #  new node tests follow 
    Transform(DEF='TestCoordinateDoubleColorRGBA',translation=(0,5,0),
      children=[
      Transform(translation=(-2,0,0),
        children=[
        Shape(
          geometry=IndexedLineSet(coordIndex=[0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7],
            coord=Coordinate(point=[(-1.0,1,1.0),(1.0,1,1.0),(1.0,1,-1.0),(-1.0,1,-1.0),(-1.0,-1,1.0),(1.0,-1,1.0),(1.0,-1,-1.0),(-1.0,-1,-1.0)]),
            color=ColorRGBA(color=[(0.9,0.9,0.9,0),(1,0,0,0),(0,1,0,0),(0,0,1,0),(0.5,0.5,0,0),(0,0.5,0.5,0),(0.5,0,0.5,0),(0.37,0.93,0.87,0)],
              metadata=MetadataString(name='example 2',value=["test metadata child"]))))]),
      Transform(translation=(2,0,0),
        children=[
        Shape(
          geometry=IndexedLineSet(coordIndex=[0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7],
            coord=CoordinateDouble(point=[(-1.0,1.0,1.0),(1.0,1.0,1.0),(1.0,1.0,-1.0),(-1.0,1.0,-1.0),(-1.0,-1.0,1.0),(1.0,-1.0,1.0),(1.0,-1.0,-1.0),(-1.0,-1.0,-1.0)],
              metadata=MetadataString(name='example 1',value=["test metadata child"])),
            color=Color(color=[(0.9,0.9,0.9),(1,0,0),(0,1,0),(0,0,1),(0.5,0.5,0),(0,0.5,0.5),(0.5,0,0.5),(0.37,0.93,0.87)])))])]),
    Transform(DEF='TestOrderedTriangleNodes',translation=(-5,0,0),
      children=[
      Transform(
        children=[
        Shape(
          geometry=TriangleSet2D(),
          appearance=Appearance(DEF='DefaultAppearance',
            material=Material(),))]),
      Transform(DEF='TestTriangleFanSet',translation=(0,-6,0),
        children=[
        Shape(
          geometry=TriangleFanSet(ccw=True,colorPerVertex=False,fanCount=[6,6],normalPerVertex=True,solid=False,
            coord=Coordinate(point=[(0,0,0),(-.5,-2,.5),(-1.5,-2,1),(-2.5,-1.5,0.5),(-2.5,-.5,0),(-2.5,1,.5),(0,0,0),(-2.5,1,.5),(.5,2,0),(1.5,1.5,.5),(2.5,.5,0),(-.5,-2,.5)]),
            color=Color(DEF='FanColors',color=[(0.5,0.1,0.5),(0.8,0.3,0.8)])))]),
      Transform(
        children=[
        Shape(
          geometry=TriangleStripSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=True),
          appearance=Appearance(USE='DefaultAppearance'))])]),
    Transform(DEF='TestIndexedTriangleNodes',translation=(5,0,0),
      children=[
      Transform(
        children=[
        Shape(
          geometry=IndexedTriangleSet(ccw=True,colorPerVertex=True,index=[11,10,9,8,7,6,5,4,3,2,1,0],normalPerVertex=True,solid=False,
            coord=Coordinate(point=[(-6,.5,-.5),(1.5,-3.5,-.5),(0,0,1),(-6,.5,-.5),(0,0,1),(2.0,2.0,-.5),(0,0,1),(1.5,-3.5,-.5),(2.0,2.0,-.5),(-6,.5,-.5),(1.5,-3.5,-.5),(2.0,2.0,-.5)]),
            color=Color(color=[(1,0,0),(0,0,1),(0,1,0),(1,0,0),(0,1,0),(0.9,0.9,0.9),(0,1,0),(0,0,1),(0.9,0.9,0.9),(1,0,0),(0.9,0.9,0.9),(0,0,1)])))]),
      Transform(translation=(0,-6,0),
        children=[
        Shape(
          geometry=IndexedTriangleFanSet(ccw=True,colorPerVertex=False,index=[0,1,2,3,4,5,-1,0,5,6,7,8,1,-1],normalPerVertex=True,solid=False,
            coord=Coordinate(point=[(0,0,0),(-.5,-2,.5),(-1.5,-2,1),(-2.5,-1.5,0.5),(-2.5,-.5,0),(-2.5,1,.5),(.5,2,0),(1.5,1.5,.5),(2.5,.5,0)])),
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.1,0.5))))]),
      Transform(translation=(0,-10,0),
        children=[
        Shape(
          geometry=IndexedTriangleStripSet(ccw=True,colorPerVertex=True,index=[0,1,2,3,4,5,6,7,8,9,10,11,12,-1],normalPerVertex=True,solid=False,
            coord=Coordinate(point=[(-4.0,-1.0,-.5),(-4.5,-2.0,-.5),(-3.0,-.5,0),(-2.5,-1.5,-.5),(-2.0,-.5,-1),(-1.5,-1.5,-.5),(-.5,.5,-.5),(0,0,0),(1,.5,-.5),(1.5,-2.0,-1),(2.5,-2.0,-.5),(2.5,-2.5,-.5),(3.5,-2.0,-1.0)])),
          appearance=Appearance(
            material=Material(diffuseColor=(0,.3,.7))))])]),
    Transform(DEF='TestLineSet',translation=(0,-15,0),
      children=[
      Shape(
        geometry=IndexedLineSet(coordIndex=[0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7],
          coord=Coordinate(point=[(-3.0,1.0,1.0),(3.0,1.0,1.0),(3.0,1.0,-1.0),(-3.0,1.0,-1.0),(-3.0,-1.0,1.0),(3.0,-1.0,1.0),(3.0,-1.0,-1.0),(-3.0,-1.0,-1.0)]),
          color=ColorRGBA(color=[(1,1,1,0),(1,0,0,0),(0,1,0,0),(0,0,1,0),(0.5,0.5,0,0),(0,0.5,0.5,0),(0.5,0,0.5,0),(0.37,0.93,0.87,0)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RenderingComponentExamples.py")
