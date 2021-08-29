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
    meta(content='MorphingTriangleSetExample.x3d',name='title'),
    meta(content='Animated example of a morphing TriangleSet',name='description'),
    meta(content='1 January 2007',name='created'),
    meta(content='14 June 2020',name='modified'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright Don Brutzman and Leonard Daly 2007',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter13GeometryTrianglesQuadrilaterals/MorphingTriangleSetExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='MorphingTriangleSet.x3d'),
    Viewpoint(description='Book View - Cube',orientation=(-0.742,0.635,0.215,0.81),position=(5.71,6.54,7.99)),
    Viewpoint(description='Book View - Pyramid',orientation=(-0.044,0.998,0.037,0.72),position=(5.5,1.68,4.41)),
    Background(skyColor=[(1,1,1)]),
    Transform(rotation=(1,0,0,0),
      children=[
      Shape(
        geometry=TriangleSet(ccw=True,colorPerVertex=True,normalPerVertex=True,solid=False,
          coord=Coordinate(DEF='Points',point=[(0,0,0),(4,0,0),(2,1.15,0),(4,0,0),(2,3.46,0),(2,1.15,0),(2,3.46,0),(0,0,0),(2,1.15,0),(0,0,0),(4,0,0),(2,1.15,1.15),(4,0,0),(2,1.73,3),(2,1.15,1.15),(2,1.73,3),(0,0,0),(2,1.15,1.15),(4,0,0),(2,3.46,0),(3,2.31,1.15),(2,3.46,0),(2,1.73,3),(3,2.31,1.15),(2,1.73,3),(4,0,0),(3,2.31,1.15),(2,3.46,0),(0,0,0),(1,2.31,1.15),(0,0,0),(2,1.73,3),(1,2.31,1.15),(2,1.73,3),(2,3.46,0),(1,2.31,1.15)]),
          color=Color(color=[(1,0.,0),(0,.8,0),(1,.5,0),(0,.8,0),(0,0.,1),(1,.5,0),(0,0.,1),(1,0.,0),(1,.5,0),(1.,0.,0.),(0.,.8,0.),(1,0,1),(0.,.8,0.),(.7,.3,.4),(1,0,1),(.7,.3,.4),(1.,0.,0.),(1,0,1),(0.,.8,0.),(0.,0.,1.),(0,1,1),(0.,0.,1.),(.7,.3,.4),(0,1,1),(.7,.3,.4),(0.,.8,0.),(0,1,1),(0.,0.,1.),(1.,0.,0.),(1,1,0),(1.,0.,0.),(.7,.3,.4),(1,1,0),(.7,.3,.4),(0.,0.,1.),(1,1,0)])))]),
    TimeSensor(DEF='Timer',cycleInterval=30,loop=True,startTime=1),
    CoordinateInterpolator(DEF='Mover',key=[0,.2,.5,.7],keyValue=[(0,0,0),(4,0,0),(2,1.15,0),(4,0,0),(2,3.46,0),(2,1.15,0),(2,3.46,0),(0,0,0),(2,1.15,0),(0,0,0),(4,0,0),(2,0.58,0.58),(4,0,0),(2,1.73,3),(2,0.58,0.58),(2,1.73,3),(0,0,0),(2,0.58,0.58),(4,0,0),(2,3.46,0),(3,2.31,0.58),(2,3.46,0),(2,1.73,3),(3,2.31,0.58),(2,1.73,3),(4,0,0),(3,2.31,0.58),(2,3.46,0),(0,0,0),(1,2.31,0.58),(0,0,0),(2,1.73,3),(1,2.31,0.58),(2,1.73,3),(2,3.46,0),(1,2.31,0.58),(0,0,0),(4,0,0),(0,4,0),(4,0,0),(4,4,0),(0,4,0),(0,0,4),(0,0,0),(0,4,0),(0,0,0),(4,0,0),(0,0,4),(4,0,0),(4,0,4),(0,0,4),(4,0,4),(0,0,4),(4,4,4),(4,0,0),(4,4,0),(4,4,4),(4,4,0),(0,4,4),(4,4,4),(4,0,4),(4,0,0),(4,4,4),(0,4,4),(0,0,4),(4,4,4),(0,0,4),(0,4,4),(0,4,0),(0,4,4),(4,4,0),(0,4,0),(0,0,0),(4,0,0),(0,4,0),(4,0,0),(4,4,0),(0,4,0),(0,0,4),(0,0,0),(0,4,0),(0,0,0),(4,0,0),(0,0,4),(4,0,0),(4,0,4),(0,0,4),(4,0,4),(0,0,4),(4,4,4),(4,0,0),(4,4,0),(4,4,4),(4,4,0),(0,4,4),(4,4,4),(4,0,4),(4,0,0),(4,4,4),(0,4,4),(0,0,4),(4,4,4),(0,0,4),(0,4,4),(0,4,0),(0,4,4),(4,4,0),(0,4,0),(0,0,0),(4,0,0),(2,1.15,0),(4,0,0),(2,3.46,0),(2,1.15,0),(2,3.46,0),(0,0,0),(2,1.15,0),(0,0,0),(4,0,0),(2,0.58,0.58),(4,0,0),(2,1.73,3),(2,0.58,0.58),(2,1.73,3),(0,0,0),(2,0.58,0.58),(4,0,0),(2,3.46,0),(3,2.31,0.58),(2,3.46,0),(2,1.73,3),(3,2.31,0.58),(2,1.73,3),(4,0,0),(3,2.31,0.58),(2,3.46,0),(0,0,0),(1,2.31,0.58),(0,0,0),(2,1.73,3),(1,2.31,0.58),(2,1.73,3),(2,3.46,0),(1,2.31,0.58)]),
    ROUTE(fromField='fraction_changed',fromNode='Timer',toField='set_fraction',toNode='Mover'),
    ROUTE(fromField='value_changed',fromNode='Mover',toField='point',toNode='Points')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MorphingTriangleSetExample.py")
