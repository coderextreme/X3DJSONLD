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
    meta(content='TriangleFanSetExample.x3d',name='title'),
    meta(content='A simple example of the use of the TriangleFanSet node.',name='description'),
    meta(content='22 May 2006',name='created'),
    meta(content='14 June 2020',name='modified'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter13GeometryTrianglesQuadrilaterals/TriangleFanSetExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TriangleFanSet.x3d'),
    Viewpoint(description='Book View',orientation=(0.962,0.272,0.022,0.23),position=(0.52,-4.49,10.86)),
    Background(skyColor=[(1,1,1)]),
    Transform(
      children=[
      Shape(
        geometry=TriangleFanSet(ccw=False,colorPerVertex=True,fanCount=[9,6],normalPerVertex=True,solid=False,
          coord=Coordinate(point=[(0,-2,4),(1,-3,3.5),(1.5,-1.5,3),(0,-1,2),(-.5,0,2.5),(-1.5,1,3),(-2,0,3.5),(-3,-2,2),(-3,-4,3),(2,-4,-2),(0,-3,-.5),(1.3,-1.5,-1),(4,-2,-1.5),(4.2,-4.2,-1),(3,-6,-.5)]),
          color=Color(color=[(0,.8,0),(0,1,1),(1,0,0),(1,.5,0),(.8,0,1),(1,1,0),(.6,.3,.1),(1,0,.5),(0,1,.5),(1,0,0),(.8,0,1),(1,1,0),(0,1,1),(1,.5,0),(.6,.3,.1),(1,0,.5),(0,.8,0),(0,1,.5)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TriangleFanSetExample.py")
