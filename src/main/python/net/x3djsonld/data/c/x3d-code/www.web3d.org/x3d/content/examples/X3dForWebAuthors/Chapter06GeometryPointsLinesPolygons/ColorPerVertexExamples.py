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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='ColorPerVertexExamples.x3d',name='title'),
    meta(content='Geometry Polygons Nodes: Color, Coordinate, IndexedFaceSet, IndexedLineSet, PointSet',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='5 September 2005',name='created'),
    meta(content='11 May 2021',name='modified'),
    meta(content='ColorPerVertexExamples.png',name='Image'),
    meta(content='Blender import problems',name='TODO'),
    meta(content='ColorPerVertexExamplesBlender.png',name='Image'),
    meta(content='Xj3D rendering problems',name='TODO'),
    meta(content='ColorPerVertexExamplesXj3D.png',name='Image'),
    meta(content='https://www.web3d.org/x3d/tooltips/X3dTooltips.html#IndexedFaceSet',name='reference'),
    meta(content='https://www.web3d.org/x3d/tooltips/X3dTooltips.html#IndexedLineSet',name='reference'),
    meta(content='https://www.web3d.org/x3d/tooltips/X3dTooltips.html#Coordinate',name='reference'),
    meta(content='https://www.web3d.org/x3d/tooltips/X3dTooltips.html#Color',name='reference'),
    meta(content='Copyright (c) 2005, Daly Realism and Don Brutzman',name='rights'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter06GeometryPointsLinesPolygons/ColorPerVertexExamples.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ColorPerVertexExamples.x3d'),
    Viewpoint(description='ColorPerVertex Examples',position=(0,0,6)),
    Background(groundColor=[(0.1,0.1,0.1)],skyColor=[(0.1,0.1,0.1)]),
    Transform(translation=(-0.5,0,0),
      children=[
      Transform(translation=(-3,0,0),
        children=[
        Shape(
          #  Default settings: colorPerVertex='true' and solid='true' (single-sided polygon) 
          geometry=IndexedFaceSet(colorIndex=[0,1,2,3,0,-1],coordIndex=[0,1,2,3,0,-1],
            coord=Coordinate(DEF='FourPoints',point=[(0,0,0),(1,0,0),(1,1,0),(0,1,0)]),
            color=Color(DEF='FourColors',color=[(1,0,0),(0,1,0),(0,0,1),(0.8,0.8,0.8)])))]),
      Transform(translation=(-1,0,0),
        children=[
        Shape(
          #  Non-default settings: colorPerVertex='false' and solid='false' (double-sided polygon) 
          geometry=IndexedFaceSet(colorIndex=[2],colorPerVertex=False,coordIndex=[0,1,2,3,0,-1],solid=False,
            #  Note that only 4 points are needed to create a 4-vertex polygon. 
            coord=Coordinate(USE='FourPoints'),
            color=ColorRGBA(DEF='FourColorsRGBA',color=[(1,0,0,1),(0,1,0,1),(0,0,1,0.5),(0.8,0.8,0.8,0)])))]),
      Transform(translation=(1,0,0),
        children=[
        Shape(
          #  Student TODO: try different color indices. 
          geometry=IndexedLineSet(colorIndex=[0,1,2,3,0,-1],coordIndex=[0,1,2,3,0,-1],
            coord=Coordinate(USE='FourPoints'),
            color=Color(USE='FourColors')))]),
      Transform(translation=(3,0,0),
        children=[
        Shape(
          #  Note that 5 points are needed to create 4 complete line segments. 
          geometry=IndexedLineSet(colorIndex=[0],colorPerVertex=False,coordIndex=[0,1,2,3,0,-1],
            coord=Coordinate(USE='FourPoints'),
            color=Color(USE='FourColors')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ColorPerVertexExamples.py")
