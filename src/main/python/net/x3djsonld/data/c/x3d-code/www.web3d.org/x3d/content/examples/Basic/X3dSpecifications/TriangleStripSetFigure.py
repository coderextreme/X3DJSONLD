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
    #  NURBS component or Full profile needed to use CoordinateDouble node 
    #  Geometry2D component or Full profile needed to use TriangleSet2D node 
    component(level=1,name='NURBS'),
    component(level=1,name='Geometry2D'),
    meta(content='TriangleStripSetFigure.x3d',name='title'),
    meta(content='X3D specification example for TriangleStripSet.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='17 November 2003',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='X3D Abstract Specification, Part 1: Architecture and base components, Topic 11.4.14 TriangleStripSet',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/19775-1/V3.3/Part01/components/rendering.html#TriangleStripSet',name='specificationUrl'),
    meta(content='confirm indices in specification diagram',name='TODO'),
    meta(content='TriangleStripSet.png',name='Image'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentExamples.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/RenderingComponentPrototypes.x3d',name='reference'),
    meta(content='X3dToVrml97.xslt translation stylesheet automatically invokes backwards-compatibility prototypes upon encountering any new Rendering nodes.',name='info'),
    meta(content='https://www.web3d.org/x3d/stylesheets/X3dToVrml97.xslt',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/TriangleStripSetFigure.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TriangleStripSetFigure.x3d'),
    Viewpoint(description='IndexedTriangleStripSet, TriangleStripSet example',position=(-1,0,16)),
    Background(groundColor=[(1,1,1)],skyColor=[(1,1,1)]),
    Transform(translation=(0,4,0),
      children=[
      TouchSensor(description='IndexedTriangleStripSet'),
      Shape(
        geometry=IndexedTriangleStripSet(ccw=True,colorPerVertex=True,index=[0,1,2,3,4,5,6,7,8,9,10,11,12,-1],normalPerVertex=True,solid=False,
          coord=Coordinate(point=[(-4.0,-1.0,-.5),(-4.5,-2.0,-.5),(-3.0,-.5,0),(-2.5,-1.5,-.5),(-2.0,-.5,-1),(-1.5,-1.5,-.5),(-.5,.5,-.5),(0,0,0),(1,.5,-.5),(1.5,-2.0,-1),(2.5,-2.0,-.5),(2.5,-2.5,-.5),(3.5,-2.0,-1.0)])),
        appearance=Appearance(
          material=Material(diffuseColor=(0,.3,.7))))]),
    Transform(translation=(0,-2,0),
      children=[
      TouchSensor(description='TriangleStripSet'),
      Shape(
        geometry=TriangleStripSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=False,stripCount=[13],
          coord=Coordinate(point=[(-4.0,-1.0,-.5),(-4.5,-2.0,-.5),(-3.0,-.5,0),(-2.5,-1.5,-.5),(-2.0,-.5,-1),(-1.5,-1.5,-.5),(-.5,.5,-.5),(0,0,0),(1,.5,-.5),(1.5,-2.0,-1),(2.5,-2.0,-.5),(2.5,-2.5,-.5),(3.5,-2.0,-1.0)])),
        appearance=Appearance(DEF='GreyAppearance',
          material=Material(diffuseColor=(0.5,0.5,0.5))))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TriangleStripSetFigure.py")
