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
    meta(content='TriangleWithNumbers.x3d',name='title'),
    meta(content='Simple Triangle with labeled points, where labels always face the user and stay in place with the triangle.',name='description'),
    meta(content='Chad R. Hutchins, Michele Foti and Don Brutzman',name='creator'),
    meta(content='31 January 2012',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='TriangleWithNumbers.png',name='Image'),
    meta(content='Can we build a prototype that automates generation of this type of model from any IFS or ILS?',name='TODO'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/TriangleWithNumbers.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TriangleWithNumbers.x3d'),
    Background(skyColor=[(0.3,0.3,0.45)]),
    Viewpoint(description='Triangle annotated with coordinate indices',position=(0,0,4)),
    Transform(DEF='PolygonGroup0',
      children=[
      TouchSensor(description='Polygon 0'),
      Shape(
        geometry=IndexedLineSet(coordIndex=[0,1,2,0,-1],
          coord=Coordinate(DEF='TriangleCoordinatePoints',point=[(-1,-1,0),(1,-1,0),(0,1,0)])),
        appearance=Appearance(
          material=Material(emissiveColor=(0.1254902035,1,0.0784313753)))),
      Shape(
        geometry=IndexedFaceSet(colorIndex=[0],colorPerVertex=False,coordIndex=[0,1,2,0,-1],
          coord=Coordinate(USE='TriangleCoordinatePoints'),
          color=ColorRGBA(color=[(0,0,0,0)])))]),
    Transform(DEF='VertexGroup0',translation=(-1.1,-1.1,0),
      children=[
      Billboard(axisOfRotation=(0,0,0),
        children=[
        TouchSensor(description='Vertex 0'),
        Shape(
          appearance=Appearance(DEF='LABEL_APPEARANCE',
            material=Material(diffuseColor=(1,1,.3),emissiveColor=(.33,.33,.1))),
          geometry=Text(string=["0"],
            fontStyle=FontStyle(DEF='LABEL_FONT',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=.2))),
        Shape(DEF='TransparentBox',
          geometry=Box(size=(0.2,0.2,0.01)),
          appearance=Appearance(DEF='TransparentAppearance',
            material=Material(transparency=1)))])]),
    Transform(DEF='VertexGroup1',translation=(1.1,-1.1,0),
      children=[
      Billboard(axisOfRotation=(0,0,0),
        children=[
        TouchSensor(description='Vertex 1'),
        Shape(
          appearance=Appearance(USE='LABEL_APPEARANCE'),
          geometry=Text(string=["1"],
            fontStyle=FontStyle(USE='LABEL_FONT'))),
        Shape(USE='TransparentBox')])]),
    Transform(DEF='VertexGroup2',translation=(0,1.1,0),
      children=[
      Billboard(axisOfRotation=(0,0,0),
        children=[
        TouchSensor(description='Vertex 2'),
        Shape(
          appearance=Appearance(USE='LABEL_APPEARANCE'),
          geometry=Text(string=["2"],
            fontStyle=FontStyle(USE='LABEL_FONT'))),
        Shape(USE='TransparentBox')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TriangleWithNumbers.py")
