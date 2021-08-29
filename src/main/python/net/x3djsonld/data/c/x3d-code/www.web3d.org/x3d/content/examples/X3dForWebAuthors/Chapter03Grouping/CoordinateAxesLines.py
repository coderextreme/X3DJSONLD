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
    meta(content='CoordinateAxesLines.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='13 October 2013',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='X Y Z axis lines (red green blue, respectively) in X3D coordinate system, providing a simple reusable widget.',name='description'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesNSEW.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxesNSEW.x3d',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxesLines.x3d',name='identifier'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  See X3dForWebAuthors/Chapter06GeometryPointsLinesPolygons to learn more about IndexedLineSet, Coordinate and Color nodes 
    children=[
    WorldInfo(title='CoordinateAxesLines.x3d'),
    Shape(
      geometry=IndexedLineSet(colorIndex=[0,1,2],colorPerVertex=False,coordIndex=[0,1,-1,0,2,-1,0,3,-1],
        coord=Coordinate(point=[(0,0,0),(1,0,0),(0,1,0),(0,0,1)]),
        color=Color(color=[(1,0,0),(0,1,0),(0.2,0.2,1)]))),
    Viewpoint(description='Oblique view',orientation=(-0.59028,0.76927,0.2445,0.987861),position=(6,6,6)),
    Viewpoint(description='View from X axis',orientation=(0,1,0,1.570796),position=(10,0,0)),
    Viewpoint(description='View from Y axis',orientation=(1,0,0,-1.570796),position=(0,10,0)),
    Viewpoint(description='View from Z axis')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CoordinateAxesLines.py")
